#include "recomp.h"

/* ProcessAI @ 0x101a1000 (16 bytes, 3 insns) */
void f_101a1000(void) {
  FTRACE(0x101a1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a1000 call dword ptr [0x101b64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e0))), 0x101a1006u);
  /* 101a1006 mov dword ptr [0x101b6294], eax */
  w32((uint32_t)(0x101b6294), (EAX));
  /* 101a100b jmp 0x101a6d60 */
  f_101a6d60(); return;
}

/* InitAI @ 0x101a1010 (5620 bytes, 1476 insns) */
void f_101a1010(void) {
  FTRACE(0x101a1010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a1010 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1015 sub esp, 0x60 */
  { uint32_t _a=(ESP),_b=(0x60u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a1018 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a101a je 0x101a1078 */
  if (C.zf) goto L_101a1078;
  /* 101a101c push 0x101afed8 */
  push32((uint32_t)(0x101afed8u));
  /* 101a1021 push 0x101b6068 */
  push32((uint32_t)(0x101b6068u));
  /* 101a1026 call eax */
  call_ind((uint32_t)(EAX), 0x101a1028u);
  /* 101a1028 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a102d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1032 je 0x101a1078 */
  if (C.zf) goto L_101a1078;
  /* 101a1034 push 0x101afed0 */
  push32((uint32_t)(0x101afed0u));
  /* 101a1039 push 0x101b6008 */
  push32((uint32_t)(0x101b6008u));
  /* 101a103e call eax */
  call_ind((uint32_t)(EAX), 0x101a1040u);
  /* 101a1040 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1045 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a104a je 0x101a1078 */
  if (C.zf) goto L_101a1078;
  /* 101a104c push 0x101afec8 */
  push32((uint32_t)(0x101afec8u));
  /* 101a1051 push 0x101b6060 */
  push32((uint32_t)(0x101b6060u));
  /* 101a1056 call eax */
  call_ind((uint32_t)(EAX), 0x101a1058u);
  /* 101a1058 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a105d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1062 je 0x101a1078 */
  if (C.zf) goto L_101a1078;
  /* 101a1064 push 0x101afec0 */
  push32((uint32_t)(0x101afec0u));
  /* 101a1069 push 0x101b6070 */
  push32((uint32_t)(0x101b6070u));
  /* 101a106e call eax */
  call_ind((uint32_t)(EAX), 0x101a1070u);
  /* 101a1070 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a1078:;
  /* 101a1078 mov ecx, dword ptr [0x101b63d8] */
  ECX = (r32((uint32_t)(0x101b63d8)));
  /* 101a107e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a1080 je 0x101a1096 */
  if (C.zf) goto L_101a1096;
  /* 101a1082 push 0x101afeb4 */
  push32((uint32_t)(0x101afeb4u));
  /* 101a1087 push 0x101b3670 */
  push32((uint32_t)(0x101b3670u));
  /* 101a108c call ecx */
  call_ind((uint32_t)(ECX), 0x101a108eu);
  /* 101a108e mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a1096:;
  /* 101a1096 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1098 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a109e push 0x101afea0 */
  push32((uint32_t)(0x101afea0u));
  /* 101a10a3 push 0x101b38e0 */
  push32((uint32_t)(0x101b38e0u));
  /* 101a10a8 call eax */
  call_ind((uint32_t)(EAX), 0x101a10aau);
  /* 101a10aa mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a10af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a10b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a10b4 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a10ba push 0x101afe8c */
  push32((uint32_t)(0x101afe8cu));
  /* 101a10bf push 0x101b38d8 */
  push32((uint32_t)(0x101b38d8u));
  /* 101a10c4 call eax */
  call_ind((uint32_t)(EAX), 0x101a10c6u);
  /* 101a10c6 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a10cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a10ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a10d0 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a10d6 push 0x101afe78 */
  push32((uint32_t)(0x101afe78u));
  /* 101a10db push 0x101b38d0 */
  push32((uint32_t)(0x101b38d0u));
  /* 101a10e0 call eax */
  call_ind((uint32_t)(EAX), 0x101a10e2u);
  /* 101a10e2 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a10e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a10ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a10ec je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a10f2 push 0x101afe64 */
  push32((uint32_t)(0x101afe64u));
  /* 101a10f7 push 0x101b3918 */
  push32((uint32_t)(0x101b3918u));
  /* 101a10fc call eax */
  call_ind((uint32_t)(EAX), 0x101a10feu);
  /* 101a10fe mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1108 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a110e push 0x101afe50 */
  push32((uint32_t)(0x101afe50u));
  /* 101a1113 push 0x101b3908 */
  push32((uint32_t)(0x101b3908u));
  /* 101a1118 call eax */
  call_ind((uint32_t)(EAX), 0x101a111au);
  /* 101a111a mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a111f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1124 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a112a push 0x101afe3c */
  push32((uint32_t)(0x101afe3cu));
  /* 101a112f push 0x101b3900 */
  push32((uint32_t)(0x101b3900u));
  /* 101a1134 call eax */
  call_ind((uint32_t)(EAX), 0x101a1136u);
  /* 101a1136 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a113b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a113e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1140 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a1146 push 0x101afe28 */
  push32((uint32_t)(0x101afe28u));
  /* 101a114b push 0x101b36b8 */
  push32((uint32_t)(0x101b36b8u));
  /* 101a1150 call eax */
  call_ind((uint32_t)(EAX), 0x101a1152u);
  /* 101a1152 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a115a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a115c je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a1162 push 0x101afe14 */
  push32((uint32_t)(0x101afe14u));
  /* 101a1167 push 0x101b36a8 */
  push32((uint32_t)(0x101b36a8u));
  /* 101a116c call eax */
  call_ind((uint32_t)(EAX), 0x101a116eu);
  /* 101a116e mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1178 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a117e push 0x101afe00 */
  push32((uint32_t)(0x101afe00u));
  /* 101a1183 push 0x101b38a0 */
  push32((uint32_t)(0x101b38a0u));
  /* 101a1188 call eax */
  call_ind((uint32_t)(EAX), 0x101a118au);
  /* 101a118a mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a118f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1194 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a119a push 0x101afdec */
  push32((uint32_t)(0x101afdecu));
  /* 101a119f push 0x101b3898 */
  push32((uint32_t)(0x101b3898u));
  /* 101a11a4 call eax */
  call_ind((uint32_t)(EAX), 0x101a11a6u);
  /* 101a11a6 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a11ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a11ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a11b0 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a11b6 push 0x101afdd8 */
  push32((uint32_t)(0x101afdd8u));
  /* 101a11bb push 0x101b3890 */
  push32((uint32_t)(0x101b3890u));
  /* 101a11c0 call eax */
  call_ind((uint32_t)(EAX), 0x101a11c2u);
  /* 101a11c2 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a11c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a11ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a11cc je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a11d2 push 0x101afdc4 */
  push32((uint32_t)(0x101afdc4u));
  /* 101a11d7 push 0x101b3888 */
  push32((uint32_t)(0x101b3888u));
  /* 101a11dc call eax */
  call_ind((uint32_t)(EAX), 0x101a11deu);
  /* 101a11de mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a11e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a11e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a11e8 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a11ee push 0x101afea0 */
  push32((uint32_t)(0x101afea0u));
  /* 101a11f3 push 0x101b38e0 */
  push32((uint32_t)(0x101b38e0u));
  /* 101a11f8 call eax */
  call_ind((uint32_t)(EAX), 0x101a11fau);
  /* 101a11fa mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a11ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1202 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1204 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a120a push 0x101afe8c */
  push32((uint32_t)(0x101afe8cu));
  /* 101a120f push 0x101b38d8 */
  push32((uint32_t)(0x101b38d8u));
  /* 101a1214 call eax */
  call_ind((uint32_t)(EAX), 0x101a1216u);
  /* 101a1216 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a121b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a121e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1220 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a1226 push 0x101afe78 */
  push32((uint32_t)(0x101afe78u));
  /* 101a122b push 0x101b38d0 */
  push32((uint32_t)(0x101b38d0u));
  /* 101a1230 call eax */
  call_ind((uint32_t)(EAX), 0x101a1232u);
  /* 101a1232 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a123a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a123c je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a1242 push 0x101afe64 */
  push32((uint32_t)(0x101afe64u));
  /* 101a1247 push 0x101b3918 */
  push32((uint32_t)(0x101b3918u));
  /* 101a124c call eax */
  call_ind((uint32_t)(EAX), 0x101a124eu);
  /* 101a124e mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1253 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1258 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a125e push 0x101afe50 */
  push32((uint32_t)(0x101afe50u));
  /* 101a1263 push 0x101b3908 */
  push32((uint32_t)(0x101b3908u));
  /* 101a1268 call eax */
  call_ind((uint32_t)(EAX), 0x101a126au);
  /* 101a126a mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1272 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1274 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a127a push 0x101afe3c */
  push32((uint32_t)(0x101afe3cu));
  /* 101a127f push 0x101b3900 */
  push32((uint32_t)(0x101b3900u));
  /* 101a1284 call eax */
  call_ind((uint32_t)(EAX), 0x101a1286u);
  /* 101a1286 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a128b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a128e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1290 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a1296 push 0x101afe28 */
  push32((uint32_t)(0x101afe28u));
  /* 101a129b push 0x101b36b8 */
  push32((uint32_t)(0x101b36b8u));
  /* 101a12a0 call eax */
  call_ind((uint32_t)(EAX), 0x101a12a2u);
  /* 101a12a2 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a12a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a12aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a12ac je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a12ae push 0x101afe14 */
  push32((uint32_t)(0x101afe14u));
  /* 101a12b3 push 0x101b36a8 */
  push32((uint32_t)(0x101b36a8u));
  /* 101a12b8 call eax */
  call_ind((uint32_t)(EAX), 0x101a12bau);
  /* 101a12ba mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a12bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a12c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a12c4 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a12c6 push 0x101afe00 */
  push32((uint32_t)(0x101afe00u));
  /* 101a12cb push 0x101b38a0 */
  push32((uint32_t)(0x101b38a0u));
  /* 101a12d0 call eax */
  call_ind((uint32_t)(EAX), 0x101a12d2u);
  /* 101a12d2 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a12d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a12da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a12dc je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a12de push 0x101afdec */
  push32((uint32_t)(0x101afdecu));
  /* 101a12e3 push 0x101b3898 */
  push32((uint32_t)(0x101b3898u));
  /* 101a12e8 call eax */
  call_ind((uint32_t)(EAX), 0x101a12eau);
  /* 101a12ea mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a12ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a12f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a12f4 je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a12f6 push 0x101afdd8 */
  push32((uint32_t)(0x101afdd8u));
  /* 101a12fb push 0x101b3890 */
  push32((uint32_t)(0x101b3890u));
  /* 101a1300 call eax */
  call_ind((uint32_t)(EAX), 0x101a1302u);
  /* 101a1302 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a130c je 0x101a1322 */
  if (C.zf) goto L_101a1322;
  /* 101a130e push 0x101afdc4 */
  push32((uint32_t)(0x101afdc4u));
  /* 101a1313 push 0x101b3888 */
  push32((uint32_t)(0x101b3888u));
  /* 101a1318 call eax */
  call_ind((uint32_t)(EAX), 0x101a131au);
  /* 101a131a mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a131f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a1322:;
  /* 101a1322 mov ecx, dword ptr [0x101b63d8] */
  ECX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1328 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a132a je 0x101a1340 */
  if (C.zf) goto L_101a1340;
  /* 101a132c push 0x101afdb4 */
  push32((uint32_t)(0x101afdb4u));
  /* 101a1331 push 0x101b3660 */
  push32((uint32_t)(0x101b3660u));
  /* 101a1336 call ecx */
  call_ind((uint32_t)(ECX), 0x101a1338u);
  /* 101a1338 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a133d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a1340:;
  /* 101a1340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1342 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1348 push 0x101afda0 */
  push32((uint32_t)(0x101afda0u));
  /* 101a134d push 0x101b3638 */
  push32((uint32_t)(0x101b3638u));
  /* 101a1352 call eax */
  call_ind((uint32_t)(EAX), 0x101a1354u);
  /* 101a1354 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a135c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a135e je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1364 push 0x101afd88 */
  push32((uint32_t)(0x101afd88u));
  /* 101a1369 push 0x101b3630 */
  push32((uint32_t)(0x101b3630u));
  /* 101a136e call eax */
  call_ind((uint32_t)(EAX), 0x101a1370u);
  /* 101a1370 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a137a je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1380 push 0x101afd70 */
  push32((uint32_t)(0x101afd70u));
  /* 101a1385 push 0x101b3628 */
  push32((uint32_t)(0x101b3628u));
  /* 101a138a call eax */
  call_ind((uint32_t)(EAX), 0x101a138cu);
  /* 101a138c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1391 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1396 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a139c push 0x101afd58 */
  push32((uint32_t)(0x101afd58u));
  /* 101a13a1 push 0x101b62f8 */
  push32((uint32_t)(0x101b62f8u));
  /* 101a13a6 call eax */
  call_ind((uint32_t)(EAX), 0x101a13a8u);
  /* 101a13a8 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a13ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a13b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a13b2 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a13b8 push 0x101afd40 */
  push32((uint32_t)(0x101afd40u));
  /* 101a13bd push 0x101b62f0 */
  push32((uint32_t)(0x101b62f0u));
  /* 101a13c2 call eax */
  call_ind((uint32_t)(EAX), 0x101a13c4u);
  /* 101a13c4 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a13c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a13cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a13ce je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a13d4 push 0x101afd28 */
  push32((uint32_t)(0x101afd28u));
  /* 101a13d9 push 0x101b62e8 */
  push32((uint32_t)(0x101b62e8u));
  /* 101a13de call eax */
  call_ind((uint32_t)(EAX), 0x101a13e0u);
  /* 101a13e0 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a13e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a13e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a13ea je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a13f0 push 0x101afd14 */
  push32((uint32_t)(0x101afd14u));
  /* 101a13f5 push 0x101b6370 */
  push32((uint32_t)(0x101b6370u));
  /* 101a13fa call eax */
  call_ind((uint32_t)(EAX), 0x101a13fcu);
  /* 101a13fc mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1404 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1406 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a140c push 0x101afcfc */
  push32((uint32_t)(0x101afcfcu));
  /* 101a1411 push 0x101b6368 */
  push32((uint32_t)(0x101b6368u));
  /* 101a1416 call eax */
  call_ind((uint32_t)(EAX), 0x101a1418u);
  /* 101a1418 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a141d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1422 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1428 push 0x101afce4 */
  push32((uint32_t)(0x101afce4u));
  /* 101a142d push 0x101b63b8 */
  push32((uint32_t)(0x101b63b8u));
  /* 101a1432 call eax */
  call_ind((uint32_t)(EAX), 0x101a1434u);
  /* 101a1434 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a143e je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1444 push 0x101afccc */
  push32((uint32_t)(0x101afcccu));
  /* 101a1449 push 0x101b63b0 */
  push32((uint32_t)(0x101b63b0u));
  /* 101a144e call eax */
  call_ind((uint32_t)(EAX), 0x101a1450u);
  /* 101a1450 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a145a je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1460 push 0x101afcb4 */
  push32((uint32_t)(0x101afcb4u));
  /* 101a1465 push 0x101b63a8 */
  push32((uint32_t)(0x101b63a8u));
  /* 101a146a call eax */
  call_ind((uint32_t)(EAX), 0x101a146cu);
  /* 101a146c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1476 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a147c push 0x101afc9c */
  push32((uint32_t)(0x101afc9cu));
  /* 101a1481 push 0x101b63a0 */
  push32((uint32_t)(0x101b63a0u));
  /* 101a1486 call eax */
  call_ind((uint32_t)(EAX), 0x101a1488u);
  /* 101a1488 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a148d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1490 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1492 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1498 push 0x101afda0 */
  push32((uint32_t)(0x101afda0u));
  /* 101a149d push 0x101b3638 */
  push32((uint32_t)(0x101b3638u));
  /* 101a14a2 call eax */
  call_ind((uint32_t)(EAX), 0x101a14a4u);
  /* 101a14a4 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a14a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a14ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a14ae je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a14b4 push 0x101afd88 */
  push32((uint32_t)(0x101afd88u));
  /* 101a14b9 push 0x101b3630 */
  push32((uint32_t)(0x101b3630u));
  /* 101a14be call eax */
  call_ind((uint32_t)(EAX), 0x101a14c0u);
  /* 101a14c0 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a14c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a14c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a14ca je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a14d0 push 0x101afd70 */
  push32((uint32_t)(0x101afd70u));
  /* 101a14d5 push 0x101b3628 */
  push32((uint32_t)(0x101b3628u));
  /* 101a14da call eax */
  call_ind((uint32_t)(EAX), 0x101a14dcu);
  /* 101a14dc mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a14e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a14e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a14e6 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a14ec push 0x101afd58 */
  push32((uint32_t)(0x101afd58u));
  /* 101a14f1 push 0x101b62f8 */
  push32((uint32_t)(0x101b62f8u));
  /* 101a14f6 call eax */
  call_ind((uint32_t)(EAX), 0x101a14f8u);
  /* 101a14f8 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a14fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1502 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1508 push 0x101afd40 */
  push32((uint32_t)(0x101afd40u));
  /* 101a150d push 0x101b62f0 */
  push32((uint32_t)(0x101b62f0u));
  /* 101a1512 call eax */
  call_ind((uint32_t)(EAX), 0x101a1514u);
  /* 101a1514 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a151e je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1524 push 0x101afd28 */
  push32((uint32_t)(0x101afd28u));
  /* 101a1529 push 0x101b62e8 */
  push32((uint32_t)(0x101b62e8u));
  /* 101a152e call eax */
  call_ind((uint32_t)(EAX), 0x101a1530u);
  /* 101a1530 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1535 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a153a je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1540 push 0x101afd14 */
  push32((uint32_t)(0x101afd14u));
  /* 101a1545 push 0x101b6370 */
  push32((uint32_t)(0x101b6370u));
  /* 101a154a call eax */
  call_ind((uint32_t)(EAX), 0x101a154cu);
  /* 101a154c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1551 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1554 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1556 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1558 push 0x101afcfc */
  push32((uint32_t)(0x101afcfcu));
  /* 101a155d push 0x101b6368 */
  push32((uint32_t)(0x101b6368u));
  /* 101a1562 call eax */
  call_ind((uint32_t)(EAX), 0x101a1564u);
  /* 101a1564 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a156c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a156e je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1570 push 0x101afce4 */
  push32((uint32_t)(0x101afce4u));
  /* 101a1575 push 0x101b63b8 */
  push32((uint32_t)(0x101b63b8u));
  /* 101a157a call eax */
  call_ind((uint32_t)(EAX), 0x101a157cu);
  /* 101a157c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1584 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1586 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a1588 push 0x101afccc */
  push32((uint32_t)(0x101afcccu));
  /* 101a158d push 0x101b63b0 */
  push32((uint32_t)(0x101b63b0u));
  /* 101a1592 call eax */
  call_ind((uint32_t)(EAX), 0x101a1594u);
  /* 101a1594 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a159c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a159e je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a15a0 push 0x101afcb4 */
  push32((uint32_t)(0x101afcb4u));
  /* 101a15a5 push 0x101b63a8 */
  push32((uint32_t)(0x101b63a8u));
  /* 101a15aa call eax */
  call_ind((uint32_t)(EAX), 0x101a15acu);
  /* 101a15ac mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a15b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a15b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a15b6 je 0x101a15c7 */
  if (C.zf) goto L_101a15c7;
  /* 101a15b8 push 0x101afc9c */
  push32((uint32_t)(0x101afc9cu));
  /* 101a15bd push 0x101b63a0 */
  push32((uint32_t)(0x101b63a0u));
  /* 101a15c2 call eax */
  call_ind((uint32_t)(EAX), 0x101a15c4u);
  /* 101a15c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a15c7:;
  /* 101a15c7 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a15cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a15ce je 0x101a15df */
  if (C.zf) goto L_101a15df;
  /* 101a15d0 push 0x101afc88 */
  push32((uint32_t)(0x101afc88u));
  /* 101a15d5 push 0x101b5fc0 */
  push32((uint32_t)(0x101b5fc0u));
  /* 101a15da call eax */
  call_ind((uint32_t)(EAX), 0x101a15dcu);
  /* 101a15dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a15df:;
  /* 101a15df call dword ptr [0x101b64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e0))), 0x101a15e5u);
  /* 101a15e5 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 101a15e8 mov dword ptr [0x101b6294], eax */
  w32((uint32_t)(0x101b6294), (EAX));
  /* 101a15ed lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101a15f0 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101a15f3 lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 101a15f6 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101a15f9 mov dword ptr [eax + 0x101b3ad0], 0 */
  w32((uint32_t)(EAX + 0x101b3ad0), (0x0u));
  /* 101a1603 mov dword ptr [eax + 0x101b3c64], 0 */
  w32((uint32_t)(EAX + 0x101b3c64), (0x0u));
  /* 101a160d call 0x101a26e0 */
  push32(0x101a1612u); f_101a26e0();
  /* 101a1612 mov edx, dword ptr [0x101b6294] */
  EDX = (r32((uint32_t)(0x101b6294)));
  /* 101a1618 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 101a161d mov dword ptr [edx*4 + 0x101b5f78], eax */
  w32((uint32_t)(EDX*4 + 0x101b5f78), (EAX));
  /* 101a1624 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a162b je 0x101a163c */
  if (C.zf) goto L_101a163c;
  /* 101a162d push 0x101afc6c */
  push32((uint32_t)(0x101afc6cu));
  /* 101a1632 push 0x101b60b0 */
  push32((uint32_t)(0x101b60b0u));
  /* 101a1637 call eax */
  call_ind((uint32_t)(EAX), 0x101a1639u);
  /* 101a1639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a163c:;
  /* 101a163c mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1643 je 0x101a1654 */
  if (C.zf) goto L_101a1654;
  /* 101a1645 push 0x101afc58 */
  push32((uint32_t)(0x101afc58u));
  /* 101a164a push 0x101b3868 */
  push32((uint32_t)(0x101b3868u));
  /* 101a164f call eax */
  call_ind((uint32_t)(EAX), 0x101a1651u);
  /* 101a1651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a1654:;
  /* 101a1654 push ebp */
  push32((uint32_t)(EBP));
  /* 101a1655 push esi */
  push32((uint32_t)(ESI));
  /* 101a1656 push edi */
  push32((uint32_t)(EDI));
  /* 101a1657 call 0x101a26e0 */
  push32(0x101a165cu); f_101a26e0();
  /* 101a165c mov edx, eax */
  EDX = (EAX);
  /* 101a165e and eax, 6 */
  { uint32_t _r=(EAX)&(0x6u); EAX = (_r); fl_logic(_r,32); }
  /* 101a1661 cmp al, 2 */
  { uint32_t _a=(AL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a1663 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 101a1667 mov edi, 0x101afeb4 */
  EDI = (0x101afeb4u);
  /* 101a166c je 0x101a1673 */
  if (C.zf) goto L_101a1673;
  /* 101a166e mov edi, 0x101afc44 */
  EDI = (0x101afc44u);
L_101a1673:;
  /* 101a1673 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101a1676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a1678 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101a167a not ecx */
  ECX = (~(ECX));
  /* 101a167c sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a167e and edx, 0x18 */
  { uint32_t _r=(EDX)&(0x18u); EDX = (_r); fl_logic(_r,32); }
  /* 101a1681 mov eax, ecx */
  EAX = (ECX);
  /* 101a1683 mov esi, edi */
  ESI = (EDI);
  /* 101a1685 mov edi, ebp */
  EDI = (EBP);
  /* 101a1687 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a168a rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a168c mov ecx, eax */
  ECX = (EAX);
  /* 101a168e and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101a1691 cmp dl, 8 */
  { uint32_t _a=(DL),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a1694 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 101a1696 lea edx, [esp + 0x3c] */
  EDX = ((uint32_t)(ESP + 0x3c));
  /* 101a169a mov edi, 0x101afc34 */
  EDI = (0x101afc34u);
  /* 101a169f je 0x101a16a6 */
  if (C.zf) goto L_101a16a6;
  /* 101a16a1 mov edi, 0x101afc24 */
  EDI = (0x101afc24u);
L_101a16a6:;
  /* 101a16a6 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 101a16a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a16ab repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 101a16ad not ecx */
  ECX = (~(ECX));
  /* 101a16af sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a16b1 mov eax, ecx */
  EAX = (ECX);
  /* 101a16b3 mov esi, edi */
  ESI = (EDI);
  /* 101a16b5 mov edi, edx */
  EDI = (EDX);
  /* 101a16b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101a16ba rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101a16bc mov ecx, eax */
  ECX = (EAX);
  /* 101a16be mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a16c3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101a16c6 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 101a16c8 pop edi */
  EDI = (pop32());
  /* 101a16c9 pop esi */
  ESI = (pop32());
  /* 101a16ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a16cc pop ebp */
  EBP = (pop32());
  /* 101a16cd je 0x101a172b */
  if (C.zf) goto L_101a172b;
  /* 101a16cf push 0x101afc58 */
  push32((uint32_t)(0x101afc58u));
  /* 101a16d4 push 0x101b3868 */
  push32((uint32_t)(0x101b3868u));
  /* 101a16d9 call eax */
  call_ind((uint32_t)(EAX), 0x101a16dbu);
  /* 101a16db mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a16e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a16e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a16e5 je 0x101a172b */
  if (C.zf) goto L_101a172b;
  /* 101a16e7 push 0x101afc0c */
  push32((uint32_t)(0x101afc0cu));
  /* 101a16ec push 0x101b6258 */
  push32((uint32_t)(0x101b6258u));
  /* 101a16f1 call eax */
  call_ind((uint32_t)(EAX), 0x101a16f3u);
  /* 101a16f3 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a16f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a16fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a16fd je 0x101a172b */
  if (C.zf) goto L_101a172b;
  /* 101a16ff push 0x101afbf4 */
  push32((uint32_t)(0x101afbf4u));
  /* 101a1704 push 0x101b6308 */
  push32((uint32_t)(0x101b6308u));
  /* 101a1709 call eax */
  call_ind((uint32_t)(EAX), 0x101a170bu);
  /* 101a170b mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1713 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1715 je 0x101a172b */
  if (C.zf) goto L_101a172b;
  /* 101a1717 push 0x101afbe0 */
  push32((uint32_t)(0x101afbe0u));
  /* 101a171c push 0x101b36e0 */
  push32((uint32_t)(0x101b36e0u));
  /* 101a1721 call eax */
  call_ind((uint32_t)(EAX), 0x101a1723u);
  /* 101a1723 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a172b:;
  /* 101a172b mov ecx, dword ptr [0x101b63dc] */
  ECX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1731 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a1733 je 0x101a1761 */
  if (C.zf) goto L_101a1761;
  /* 101a1735 push 0x101afbc8 */
  push32((uint32_t)(0x101afbc8u));
  /* 101a173a push 0x101b6240 */
  push32((uint32_t)(0x101b6240u));
  /* 101a173f call ecx */
  call_ind((uint32_t)(ECX), 0x101a1741u);
  /* 101a1741 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a174b je 0x101a175c */
  if (C.zf) goto L_101a175c;
  /* 101a174d push 0x101afbb0 */
  push32((uint32_t)(0x101afbb0u));
  /* 101a1752 push 0x101b5fa8 */
  push32((uint32_t)(0x101b5fa8u));
  /* 101a1757 call eax */
  call_ind((uint32_t)(EAX), 0x101a1759u);
  /* 101a1759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a175c:;
  /* 101a175c mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
L_101a1761:;
  /* 101a1761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1763 je 0x101a1774 */
  if (C.zf) goto L_101a1774;
  /* 101a1765 push 0x101afb9c */
  push32((uint32_t)(0x101afb9cu));
  /* 101a176a push 0x101b3620 */
  push32((uint32_t)(0x101b3620u));
  /* 101a176f call eax */
  call_ind((uint32_t)(EAX), 0x101a1771u);
  /* 101a1771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a1774:;
  /* 101a1774 push 0x101afb88 */
  push32((uint32_t)(0x101afb88u));
  /* 101a1779 call 0x101a26b0 */
  push32(0x101a177eu); f_101a26b0();
  /* 101a177e mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1788 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a178e push 0x101afb88 */
  push32((uint32_t)(0x101afb88u));
  /* 101a1793 push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a1798 call eax */
  call_ind((uint32_t)(EAX), 0x101a179au);
  /* 101a179a mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a179f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a17a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a17a4 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a17aa push 0x101afb74 */
  push32((uint32_t)(0x101afb74u));
  /* 101a17af push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a17b4 call eax */
  call_ind((uint32_t)(EAX), 0x101a17b6u);
  /* 101a17b6 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a17bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a17be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a17c0 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a17c6 push 0x101afb60 */
  push32((uint32_t)(0x101afb60u));
  /* 101a17cb push 0x101b6140 */
  push32((uint32_t)(0x101b6140u));
  /* 101a17d0 call eax */
  call_ind((uint32_t)(EAX), 0x101a17d2u);
  /* 101a17d2 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a17d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a17da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a17dc je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a17e2 push 0x101afb4c */
  push32((uint32_t)(0x101afb4cu));
  /* 101a17e7 push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a17ec call eax */
  call_ind((uint32_t)(EAX), 0x101a17eeu);
  /* 101a17ee mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a17f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a17f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a17f8 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a17fe lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 101a1802 push ecx */
  push32((uint32_t)(ECX));
  /* 101a1803 push 0x101b6390 */
  push32((uint32_t)(0x101b6390u));
  /* 101a1808 call eax */
  call_ind((uint32_t)(EAX), 0x101a180au);
  /* 101a180a mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a180f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1814 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a181a push 0x101afb40 */
  push32((uint32_t)(0x101afb40u));
  /* 101a181f push 0x101b6310 */
  push32((uint32_t)(0x101b6310u));
  /* 101a1824 call eax */
  call_ind((uint32_t)(EAX), 0x101a1826u);
  /* 101a1826 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a182b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a182e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1830 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1836 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 101a183a push edx */
  push32((uint32_t)(EDX));
  /* 101a183b push 0x101b5f60 */
  push32((uint32_t)(0x101b5f60u));
  /* 101a1840 call eax */
  call_ind((uint32_t)(EAX), 0x101a1842u);
  /* 101a1842 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1847 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a184a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a184c je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1852 push 0x101afb34 */
  push32((uint32_t)(0x101afb34u));
  /* 101a1857 push 0x101b6350 */
  push32((uint32_t)(0x101b6350u));
  /* 101a185c call eax */
  call_ind((uint32_t)(EAX), 0x101a185eu);
  /* 101a185e mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1868 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a186e push 0x101afb28 */
  push32((uint32_t)(0x101afb28u));
  /* 101a1873 push 0x101b3648 */
  push32((uint32_t)(0x101b3648u));
  /* 101a1878 call eax */
  call_ind((uint32_t)(EAX), 0x101a187au);
  /* 101a187a mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a187f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1884 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a188a push 0x101afb18 */
  push32((uint32_t)(0x101afb18u));
  /* 101a188f push 0x101b38a8 */
  push32((uint32_t)(0x101b38a8u));
  /* 101a1894 call eax */
  call_ind((uint32_t)(EAX), 0x101a1896u);
  /* 101a1896 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a189b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a189e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a18a0 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a18a6 push 0x101afb0c */
  push32((uint32_t)(0x101afb0cu));
  /* 101a18ab push 0x101b61d0 */
  push32((uint32_t)(0x101b61d0u));
  /* 101a18b0 call eax */
  call_ind((uint32_t)(EAX), 0x101a18b2u);
  /* 101a18b2 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a18b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a18ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a18bc je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a18c2 push 0x101afaf8 */
  push32((uint32_t)(0x101afaf8u));
  /* 101a18c7 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a18cc call eax */
  call_ind((uint32_t)(EAX), 0x101a18ceu);
  /* 101a18ce mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a18d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a18d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a18d8 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a18de push 0x101afaec */
  push32((uint32_t)(0x101afaecu));
  /* 101a18e3 push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a18e8 call eax */
  call_ind((uint32_t)(EAX), 0x101a18eau);
  /* 101a18ea mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a18ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a18f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a18f4 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a18fa push 0x101afad8 */
  push32((uint32_t)(0x101afad8u));
  /* 101a18ff push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a1904 call eax */
  call_ind((uint32_t)(EAX), 0x101a1906u);
  /* 101a1906 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a190b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a190e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1910 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1916 push 0x101afacc */
  push32((uint32_t)(0x101afaccu));
  /* 101a191b push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a1920 call eax */
  call_ind((uint32_t)(EAX), 0x101a1922u);
  /* 101a1922 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a192a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a192c je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1932 push 0x101afac0 */
  push32((uint32_t)(0x101afac0u));
  /* 101a1937 push 0x101b5fb0 */
  push32((uint32_t)(0x101b5fb0u));
  /* 101a193c call eax */
  call_ind((uint32_t)(EAX), 0x101a193eu);
  /* 101a193e mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1946 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1948 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a194e push 0x101afab0 */
  push32((uint32_t)(0x101afab0u));
  /* 101a1953 push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a1958 call eax */
  call_ind((uint32_t)(EAX), 0x101a195au);
  /* 101a195a mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a195f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1964 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a196a push 0x101afa98 */
  push32((uint32_t)(0x101afa98u));
  /* 101a196f push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a1974 call eax */
  call_ind((uint32_t)(EAX), 0x101a1976u);
  /* 101a1976 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a197b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a197e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1980 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1986 push 0x101afa88 */
  push32((uint32_t)(0x101afa88u));
  /* 101a198b push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a1990 call eax */
  call_ind((uint32_t)(EAX), 0x101a1992u);
  /* 101a1992 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1997 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a199a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a199c je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a19a2 push 0x101afa74 */
  push32((uint32_t)(0x101afa74u));
  /* 101a19a7 push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a19ac call eax */
  call_ind((uint32_t)(EAX), 0x101a19aeu);
  /* 101a19ae mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a19b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a19b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a19b8 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a19be push 0x101afa68 */
  push32((uint32_t)(0x101afa68u));
  /* 101a19c3 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a19c8 call eax */
  call_ind((uint32_t)(EAX), 0x101a19cau);
  /* 101a19ca mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a19cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a19d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a19d4 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a19da push 0x101afa5c */
  push32((uint32_t)(0x101afa5cu));
  /* 101a19df push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a19e4 call eax */
  call_ind((uint32_t)(EAX), 0x101a19e6u);
  /* 101a19e6 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a19eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a19ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a19f0 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a19f6 push 0x101afa50 */
  push32((uint32_t)(0x101afa50u));
  /* 101a19fb push 0x101b61c8 */
  push32((uint32_t)(0x101b61c8u));
  /* 101a1a00 call eax */
  call_ind((uint32_t)(EAX), 0x101a1a02u);
  /* 101a1a02 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1a0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1a0c je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1a12 push 0x101afa44 */
  push32((uint32_t)(0x101afa44u));
  /* 101a1a17 push 0x101b60d8 */
  push32((uint32_t)(0x101b60d8u));
  /* 101a1a1c call eax */
  call_ind((uint32_t)(EAX), 0x101a1a1eu);
  /* 101a1a1e mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1a23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1a26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1a28 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1a2e push 0x101afa38 */
  push32((uint32_t)(0x101afa38u));
  /* 101a1a33 push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a1a38 call eax */
  call_ind((uint32_t)(EAX), 0x101a1a3au);
  /* 101a1a3a mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1a44 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1a46 push 0x101afa2c */
  push32((uint32_t)(0x101afa2cu));
  /* 101a1a4b push 0x101b38c8 */
  push32((uint32_t)(0x101b38c8u));
  /* 101a1a50 call eax */
  call_ind((uint32_t)(EAX), 0x101a1a52u);
  /* 101a1a52 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1a5c je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1a5e push 0x101afa20 */
  push32((uint32_t)(0x101afa20u));
  /* 101a1a63 push 0x101b5f70 */
  push32((uint32_t)(0x101b5f70u));
  /* 101a1a68 call eax */
  call_ind((uint32_t)(EAX), 0x101a1a6au);
  /* 101a1a6a mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1a6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1a74 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1a76 push 0x101afa14 */
  push32((uint32_t)(0x101afa14u));
  /* 101a1a7b push 0x101b6378 */
  push32((uint32_t)(0x101b6378u));
  /* 101a1a80 call eax */
  call_ind((uint32_t)(EAX), 0x101a1a82u);
  /* 101a1a82 mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1a8c je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1a8e push 0x101afa08 */
  push32((uint32_t)(0x101afa08u));
  /* 101a1a93 push 0x101b5f68 */
  push32((uint32_t)(0x101b5f68u));
  /* 101a1a98 call eax */
  call_ind((uint32_t)(EAX), 0x101a1a9au);
  /* 101a1a9a mov eax, dword ptr [0x101b63d8] */
  EAX = (r32((uint32_t)(0x101b63d8)));
  /* 101a1a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1aa4 je 0x101a1ab5 */
  if (C.zf) goto L_101a1ab5;
  /* 101a1aa6 push 0x101af9f8 */
  push32((uint32_t)(0x101af9f8u));
  /* 101a1aab push 0x101b3880 */
  push32((uint32_t)(0x101b3880u));
  /* 101a1ab0 call eax */
  call_ind((uint32_t)(EAX), 0x101a1ab2u);
  /* 101a1ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a1ab5:;
  /* 101a1ab5 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1aba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1abc je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1ac2 push 0x101af9e4 */
  push32((uint32_t)(0x101af9e4u));
  /* 101a1ac7 push 0x101b6358 */
  push32((uint32_t)(0x101b6358u));
  /* 101a1acc call eax */
  call_ind((uint32_t)(EAX), 0x101a1aceu);
  /* 101a1ace mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1ad3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1ad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1ad8 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1ade push 0x101af9d0 */
  push32((uint32_t)(0x101af9d0u));
  /* 101a1ae3 push 0x101b60e0 */
  push32((uint32_t)(0x101b60e0u));
  /* 101a1ae8 call eax */
  call_ind((uint32_t)(EAX), 0x101a1aeau);
  /* 101a1aea mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1aef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1af2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1af4 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1afa push 0x101af9c8 */
  push32((uint32_t)(0x101af9c8u));
  /* 101a1aff push 0x101b3640 */
  push32((uint32_t)(0x101b3640u));
  /* 101a1b04 call eax */
  call_ind((uint32_t)(EAX), 0x101a1b06u);
  /* 101a1b06 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1b0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1b0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1b10 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1b16 push 0x101af9b0 */
  push32((uint32_t)(0x101af9b0u));
  /* 101a1b1b push 0x101b6330 */
  push32((uint32_t)(0x101b6330u));
  /* 101a1b20 call eax */
  call_ind((uint32_t)(EAX), 0x101a1b22u);
  /* 101a1b22 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1b27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1b2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1b2c je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1b32 push 0x101af998 */
  push32((uint32_t)(0x101af998u));
  /* 101a1b37 push 0x101b6338 */
  push32((uint32_t)(0x101b6338u));
  /* 101a1b3c call eax */
  call_ind((uint32_t)(EAX), 0x101a1b3eu);
  /* 101a1b3e mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1b43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1b46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1b48 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1b4e push 0x101af980 */
  push32((uint32_t)(0x101af980u));
  /* 101a1b53 push 0x101b6320 */
  push32((uint32_t)(0x101b6320u));
  /* 101a1b58 call eax */
  call_ind((uint32_t)(EAX), 0x101a1b5au);
  /* 101a1b5a mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1b5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1b64 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1b6a push 0x101af968 */
  push32((uint32_t)(0x101af968u));
  /* 101a1b6f push 0x101b6328 */
  push32((uint32_t)(0x101b6328u));
  /* 101a1b74 call eax */
  call_ind((uint32_t)(EAX), 0x101a1b76u);
  /* 101a1b76 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1b7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1b7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1b80 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1b86 push 0x101af950 */
  push32((uint32_t)(0x101af950u));
  /* 101a1b8b push 0x101b6340 */
  push32((uint32_t)(0x101b6340u));
  /* 101a1b90 call eax */
  call_ind((uint32_t)(EAX), 0x101a1b92u);
  /* 101a1b92 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1b97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1b9c je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1ba2 push 0x101af938 */
  push32((uint32_t)(0x101af938u));
  /* 101a1ba7 push 0x101b6278 */
  push32((uint32_t)(0x101b6278u));
  /* 101a1bac call eax */
  call_ind((uint32_t)(EAX), 0x101a1baeu);
  /* 101a1bae mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1bb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1bb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1bb8 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1bbe push 0x101af920 */
  push32((uint32_t)(0x101af920u));
  /* 101a1bc3 push 0x101b6260 */
  push32((uint32_t)(0x101b6260u));
  /* 101a1bc8 call eax */
  call_ind((uint32_t)(EAX), 0x101a1bcau);
  /* 101a1bca mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1bd4 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1bda push 0x101af908 */
  push32((uint32_t)(0x101af908u));
  /* 101a1bdf push 0x101b6268 */
  push32((uint32_t)(0x101b6268u));
  /* 101a1be4 call eax */
  call_ind((uint32_t)(EAX), 0x101a1be6u);
  /* 101a1be6 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1beb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1bee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1bf0 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1bf6 push 0x101af8f0 */
  push32((uint32_t)(0x101af8f0u));
  /* 101a1bfb push 0x101b6280 */
  push32((uint32_t)(0x101b6280u));
  /* 101a1c00 call eax */
  call_ind((uint32_t)(EAX), 0x101a1c02u);
  /* 101a1c02 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1c07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1c0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1c0c je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1c12 push 0x101af8d8 */
  push32((uint32_t)(0x101af8d8u));
  /* 101a1c17 push 0x101b6288 */
  push32((uint32_t)(0x101b6288u));
  /* 101a1c1c call eax */
  call_ind((uint32_t)(EAX), 0x101a1c1eu);
  /* 101a1c1e mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1c23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1c26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1c28 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1c2e push 0x101af8c0 */
  push32((uint32_t)(0x101af8c0u));
  /* 101a1c33 push 0x101b38f0 */
  push32((uint32_t)(0x101b38f0u));
  /* 101a1c38 call eax */
  call_ind((uint32_t)(EAX), 0x101a1c3au);
  /* 101a1c3a mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1c44 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1c46 push 0x101af8a8 */
  push32((uint32_t)(0x101af8a8u));
  /* 101a1c4b push 0x101b38f8 */
  push32((uint32_t)(0x101b38f8u));
  /* 101a1c50 call eax */
  call_ind((uint32_t)(EAX), 0x101a1c52u);
  /* 101a1c52 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1c57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1c5c je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1c5e push 0x101af890 */
  push32((uint32_t)(0x101af890u));
  /* 101a1c63 push 0x101b38e8 */
  push32((uint32_t)(0x101b38e8u));
  /* 101a1c68 call eax */
  call_ind((uint32_t)(EAX), 0x101a1c6au);
  /* 101a1c6a mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1c6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1c74 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1c76 push 0x101af878 */
  push32((uint32_t)(0x101af878u));
  /* 101a1c7b push 0x101b5f58 */
  push32((uint32_t)(0x101b5f58u));
  /* 101a1c80 call eax */
  call_ind((uint32_t)(EAX), 0x101a1c82u);
  /* 101a1c82 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1c8c je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1c8e push 0x101af860 */
  push32((uint32_t)(0x101af860u));
  /* 101a1c93 push 0x101b5f48 */
  push32((uint32_t)(0x101b5f48u));
  /* 101a1c98 call eax */
  call_ind((uint32_t)(EAX), 0x101a1c9au);
  /* 101a1c9a mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1c9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1ca4 je 0x101a1cb5 */
  if (C.zf) goto L_101a1cb5;
  /* 101a1ca6 push 0x101af848 */
  push32((uint32_t)(0x101af848u));
  /* 101a1cab push 0x101b5f50 */
  push32((uint32_t)(0x101b5f50u));
  /* 101a1cb0 call eax */
  call_ind((uint32_t)(EAX), 0x101a1cb2u);
  /* 101a1cb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a1cb5:;
  /* 101a1cb5 lea eax, [esp] */
  EAX = ((uint32_t)(ESP));
  /* 101a1cb9 push 0x101af840 */
  push32((uint32_t)(0x101af840u));
  /* 101a1cbe push eax */
  push32((uint32_t)(EAX));
  /* 101a1cbf call 0x101a2f50 */
  push32(0x101a1cc4u); f_101a2f50();
  /* 101a1cc4 push eax */
  push32((uint32_t)(EAX));
  /* 101a1cc5 push 0x101b5ff8 */
  push32((uint32_t)(0x101b5ff8u));
  /* 101a1cca call 0x101a26c0 */
  push32(0x101a1ccfu); f_101a26c0();
  /* 101a1ccf lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 101a1cd3 push 0x101af838 */
  push32((uint32_t)(0x101af838u));
  /* 101a1cd8 push ecx */
  push32((uint32_t)(ECX));
  /* 101a1cd9 call 0x101a2f50 */
  push32(0x101a1cdeu); f_101a2f50();
  /* 101a1cde push eax */
  push32((uint32_t)(EAX));
  /* 101a1cdf push 0x101b5ff0 */
  push32((uint32_t)(0x101b5ff0u));
  /* 101a1ce4 call 0x101a26c0 */
  push32(0x101a1ce9u); f_101a26c0();
  /* 101a1ce9 lea edx, [esp + 0x20] */
  EDX = ((uint32_t)(ESP + 0x20));
  /* 101a1ced push 0x101af830 */
  push32((uint32_t)(0x101af830u));
  /* 101a1cf2 push edx */
  push32((uint32_t)(EDX));
  /* 101a1cf3 call 0x101a2f50 */
  push32(0x101a1cf8u); f_101a2f50();
  /* 101a1cf8 push eax */
  push32((uint32_t)(EAX));
  /* 101a1cf9 push 0x101b5fe8 */
  push32((uint32_t)(0x101b5fe8u));
  /* 101a1cfe call 0x101a26c0 */
  push32(0x101a1d03u); f_101a26c0();
  /* 101a1d03 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 101a1d07 push 0x101af828 */
  push32((uint32_t)(0x101af828u));
  /* 101a1d0c push eax */
  push32((uint32_t)(EAX));
  /* 101a1d0d call 0x101a2f50 */
  push32(0x101a1d12u); f_101a2f50();
  /* 101a1d12 push eax */
  push32((uint32_t)(EAX));
  /* 101a1d13 push 0x101b5fe0 */
  push32((uint32_t)(0x101b5fe0u));
  /* 101a1d18 call 0x101a26c0 */
  push32(0x101a1d1du); f_101a26c0();
  /* 101a1d1d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1d20 lea ecx, [esp] */
  ECX = ((uint32_t)(ESP));
  /* 101a1d24 push 0x101af820 */
  push32((uint32_t)(0x101af820u));
  /* 101a1d29 push ecx */
  push32((uint32_t)(ECX));
  /* 101a1d2a call 0x101a2f50 */
  push32(0x101a1d2fu); f_101a2f50();
  /* 101a1d2f push eax */
  push32((uint32_t)(EAX));
  /* 101a1d30 push 0x101b5fd8 */
  push32((uint32_t)(0x101b5fd8u));
  /* 101a1d35 call 0x101a26c0 */
  push32(0x101a1d3au); f_101a26c0();
  /* 101a1d3a lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 101a1d3e push 0x101af818 */
  push32((uint32_t)(0x101af818u));
  /* 101a1d43 push edx */
  push32((uint32_t)(EDX));
  /* 101a1d44 call 0x101a2f50 */
  push32(0x101a1d49u); f_101a2f50();
  /* 101a1d49 push eax */
  push32((uint32_t)(EAX));
  /* 101a1d4a push 0x101b5fd0 */
  push32((uint32_t)(0x101b5fd0u));
  /* 101a1d4f call 0x101a26c0 */
  push32(0x101a1d54u); f_101a26c0();
  /* 101a1d54 lea eax, [esp + 0x20] */
  EAX = ((uint32_t)(ESP + 0x20));
  /* 101a1d58 push 0x101af810 */
  push32((uint32_t)(0x101af810u));
  /* 101a1d5d push eax */
  push32((uint32_t)(EAX));
  /* 101a1d5e call 0x101a2f50 */
  push32(0x101a1d63u); f_101a2f50();
  /* 101a1d63 push eax */
  push32((uint32_t)(EAX));
  /* 101a1d64 push 0x101b6110 */
  push32((uint32_t)(0x101b6110u));
  /* 101a1d69 call 0x101a26c0 */
  push32(0x101a1d6eu); f_101a26c0();
  /* 101a1d6e lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 101a1d72 push 0x101af808 */
  push32((uint32_t)(0x101af808u));
  /* 101a1d77 push ecx */
  push32((uint32_t)(ECX));
  /* 101a1d78 call 0x101a2f50 */
  push32(0x101a1d7du); f_101a2f50();
  /* 101a1d7d push eax */
  push32((uint32_t)(EAX));
  /* 101a1d7e push 0x101b6108 */
  push32((uint32_t)(0x101b6108u));
  /* 101a1d83 call 0x101a26c0 */
  push32(0x101a1d88u); f_101a26c0();
  /* 101a1d88 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1d8b lea edx, [esp] */
  EDX = ((uint32_t)(ESP));
  /* 101a1d8f push 0x101af800 */
  push32((uint32_t)(0x101af800u));
  /* 101a1d94 push edx */
  push32((uint32_t)(EDX));
  /* 101a1d95 call 0x101a2f50 */
  push32(0x101a1d9au); f_101a2f50();
  /* 101a1d9a push eax */
  push32((uint32_t)(EAX));
  /* 101a1d9b push 0x101b6100 */
  push32((uint32_t)(0x101b6100u));
  /* 101a1da0 call 0x101a26c0 */
  push32(0x101a1da5u); f_101a26c0();
  /* 101a1da5 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 101a1da9 push 0x101af7f8 */
  push32((uint32_t)(0x101af7f8u));
  /* 101a1dae push eax */
  push32((uint32_t)(EAX));
  /* 101a1daf call 0x101a2f50 */
  push32(0x101a1db4u); f_101a2f50();
  /* 101a1db4 push eax */
  push32((uint32_t)(EAX));
  /* 101a1db5 push 0x101b60f8 */
  push32((uint32_t)(0x101b60f8u));
  /* 101a1dba call 0x101a26c0 */
  push32(0x101a1dbfu); f_101a26c0();
  /* 101a1dbf lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 101a1dc3 push 0x101af7f0 */
  push32((uint32_t)(0x101af7f0u));
  /* 101a1dc8 push ecx */
  push32((uint32_t)(ECX));
  /* 101a1dc9 call 0x101a2f50 */
  push32(0x101a1dceu); f_101a2f50();
  /* 101a1dce push eax */
  push32((uint32_t)(EAX));
  /* 101a1dcf push 0x101b60e8 */
  push32((uint32_t)(0x101b60e8u));
  /* 101a1dd4 call 0x101a26c0 */
  push32(0x101a1dd9u); f_101a26c0();
  /* 101a1dd9 push 0x101af7e8 */
  push32((uint32_t)(0x101af7e8u));
  /* 101a1dde lea edx, [esp + 0x34] */
  EDX = ((uint32_t)(ESP + 0x34));
  /* 101a1de2 push edx */
  push32((uint32_t)(EDX));
  /* 101a1de3 call 0x101a2f50 */
  push32(0x101a1de8u); f_101a2f50();
  /* 101a1de8 push eax */
  push32((uint32_t)(EAX));
  /* 101a1de9 push 0x101b6138 */
  push32((uint32_t)(0x101b6138u));
  /* 101a1dee call 0x101a26c0 */
  push32(0x101a1df3u); f_101a26c0();
  /* 101a1df3 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1df8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1dfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1dfd je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1e03 push 0x101af7d4 */
  push32((uint32_t)(0x101af7d4u));
  /* 101a1e08 push 0x101b3698 */
  push32((uint32_t)(0x101b3698u));
  /* 101a1e0d call eax */
  call_ind((uint32_t)(EAX), 0x101a1e0fu);
  /* 101a1e0f mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1e19 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1e1f push 0x101af7c0 */
  push32((uint32_t)(0x101af7c0u));
  /* 101a1e24 push 0x101b3690 */
  push32((uint32_t)(0x101b3690u));
  /* 101a1e29 call eax */
  call_ind((uint32_t)(EAX), 0x101a1e2bu);
  /* 101a1e2b mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1e30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1e35 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1e3b push 0x101af7ac */
  push32((uint32_t)(0x101af7acu));
  /* 101a1e40 push 0x101b3688 */
  push32((uint32_t)(0x101b3688u));
  /* 101a1e45 call eax */
  call_ind((uint32_t)(EAX), 0x101a1e47u);
  /* 101a1e47 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1e4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1e51 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1e57 push 0x101af798 */
  push32((uint32_t)(0x101af798u));
  /* 101a1e5c push 0x101b3680 */
  push32((uint32_t)(0x101b3680u));
  /* 101a1e61 call eax */
  call_ind((uint32_t)(EAX), 0x101a1e63u);
  /* 101a1e63 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1e6d je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1e73 push 0x101af784 */
  push32((uint32_t)(0x101af784u));
  /* 101a1e78 push 0x101b3658 */
  push32((uint32_t)(0x101b3658u));
  /* 101a1e7d call eax */
  call_ind((uint32_t)(EAX), 0x101a1e7fu);
  /* 101a1e7f mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1e87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1e89 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1e8f push 0x101af770 */
  push32((uint32_t)(0x101af770u));
  /* 101a1e94 push 0x101b3650 */
  push32((uint32_t)(0x101b3650u));
  /* 101a1e99 call eax */
  call_ind((uint32_t)(EAX), 0x101a1e9bu);
  /* 101a1e9b mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1ea3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1ea5 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1eab push 0x101af75c */
  push32((uint32_t)(0x101af75cu));
  /* 101a1eb0 push 0x101b3728 */
  push32((uint32_t)(0x101b3728u));
  /* 101a1eb5 call eax */
  call_ind((uint32_t)(EAX), 0x101a1eb7u);
  /* 101a1eb7 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1ebc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1ec1 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1ec3 push 0x101af748 */
  push32((uint32_t)(0x101af748u));
  /* 101a1ec8 push 0x101b3720 */
  push32((uint32_t)(0x101b3720u));
  /* 101a1ecd call eax */
  call_ind((uint32_t)(EAX), 0x101a1ecfu);
  /* 101a1ecf mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1ed4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1ed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1ed9 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1edb push 0x101af734 */
  push32((uint32_t)(0x101af734u));
  /* 101a1ee0 push 0x101b3718 */
  push32((uint32_t)(0x101b3718u));
  /* 101a1ee5 call eax */
  call_ind((uint32_t)(EAX), 0x101a1ee7u);
  /* 101a1ee7 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1eec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1eef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1ef1 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1ef3 push 0x101af720 */
  push32((uint32_t)(0x101af720u));
  /* 101a1ef8 push 0x101b3700 */
  push32((uint32_t)(0x101b3700u));
  /* 101a1efd call eax */
  call_ind((uint32_t)(EAX), 0x101a1effu);
  /* 101a1eff mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1f09 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1f0b push 0x101af70c */
  push32((uint32_t)(0x101af70cu));
  /* 101a1f10 push 0x101b36f8 */
  push32((uint32_t)(0x101b36f8u));
  /* 101a1f15 call eax */
  call_ind((uint32_t)(EAX), 0x101a1f17u);
  /* 101a1f17 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a1f1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a1f21 je 0x101a1f32 */
  if (C.zf) goto L_101a1f32;
  /* 101a1f23 push 0x101af6f8 */
  push32((uint32_t)(0x101af6f8u));
  /* 101a1f28 push 0x101b36f0 */
  push32((uint32_t)(0x101b36f0u));
  /* 101a1f2d call eax */
  call_ind((uint32_t)(EAX), 0x101a1f2fu);
  /* 101a1f2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a1f32:;
  /* 101a1f32 lea eax, [esp + 0x30] */
  EAX = ((uint32_t)(ESP + 0x30));
  /* 101a1f36 push 0x101af840 */
  push32((uint32_t)(0x101af840u));
  /* 101a1f3b push eax */
  push32((uint32_t)(EAX));
  /* 101a1f3c call 0x101a2f50 */
  push32(0x101a1f41u); f_101a2f50();
  /* 101a1f41 push eax */
  push32((uint32_t)(EAX));
  /* 101a1f42 push 0x101b36c0 */
  push32((uint32_t)(0x101b36c0u));
  /* 101a1f47 call 0x101a26c0 */
  push32(0x101a1f4cu); f_101a26c0();
  /* 101a1f4c lea ecx, [esp + 0x40] */
  ECX = ((uint32_t)(ESP + 0x40));
  /* 101a1f50 push 0x101af838 */
  push32((uint32_t)(0x101af838u));
  /* 101a1f55 push ecx */
  push32((uint32_t)(ECX));
  /* 101a1f56 call 0x101a2f50 */
  push32(0x101a1f5bu); f_101a2f50();
  /* 101a1f5b push eax */
  push32((uint32_t)(EAX));
  /* 101a1f5c push 0x101b36c8 */
  push32((uint32_t)(0x101b36c8u));
  /* 101a1f61 call 0x101a26c0 */
  push32(0x101a1f66u); f_101a26c0();
  /* 101a1f66 lea edx, [esp + 0x50] */
  EDX = ((uint32_t)(ESP + 0x50));
  /* 101a1f6a push 0x101af830 */
  push32((uint32_t)(0x101af830u));
  /* 101a1f6f push edx */
  push32((uint32_t)(EDX));
  /* 101a1f70 call 0x101a2f50 */
  push32(0x101a1f75u); f_101a2f50();
  /* 101a1f75 push eax */
  push32((uint32_t)(EAX));
  /* 101a1f76 push 0x101b36d0 */
  push32((uint32_t)(0x101b36d0u));
  /* 101a1f7b call 0x101a26c0 */
  push32(0x101a1f80u); f_101a26c0();
  /* 101a1f80 lea eax, [esp + 0x60] */
  EAX = ((uint32_t)(ESP + 0x60));
  /* 101a1f84 push 0x101af828 */
  push32((uint32_t)(0x101af828u));
  /* 101a1f89 push eax */
  push32((uint32_t)(EAX));
  /* 101a1f8a call 0x101a2f50 */
  push32(0x101a1f8fu); f_101a2f50();
  /* 101a1f8f push eax */
  push32((uint32_t)(EAX));
  /* 101a1f90 push 0x101b36d8 */
  push32((uint32_t)(0x101b36d8u));
  /* 101a1f95 call 0x101a26c0 */
  push32(0x101a1f9au); f_101a26c0();
  /* 101a1f9a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a1f9d lea ecx, [esp + 0x30] */
  ECX = ((uint32_t)(ESP + 0x30));
  /* 101a1fa1 push 0x101af820 */
  push32((uint32_t)(0x101af820u));
  /* 101a1fa6 push ecx */
  push32((uint32_t)(ECX));
  /* 101a1fa7 call 0x101a2f50 */
  push32(0x101a1facu); f_101a2f50();
  /* 101a1fac push eax */
  push32((uint32_t)(EAX));
  /* 101a1fad push 0x101b36a0 */
  push32((uint32_t)(0x101b36a0u));
  /* 101a1fb2 call 0x101a26c0 */
  push32(0x101a1fb7u); f_101a26c0();
  /* 101a1fb7 lea edx, [esp + 0x40] */
  EDX = ((uint32_t)(ESP + 0x40));
  /* 101a1fbb push 0x101af818 */
  push32((uint32_t)(0x101af818u));
  /* 101a1fc0 push edx */
  push32((uint32_t)(EDX));
  /* 101a1fc1 call 0x101a2f50 */
  push32(0x101a1fc6u); f_101a2f50();
  /* 101a1fc6 push eax */
  push32((uint32_t)(EAX));
  /* 101a1fc7 push 0x101b36b0 */
  push32((uint32_t)(0x101b36b0u));
  /* 101a1fcc call 0x101a26c0 */
  push32(0x101a1fd1u); f_101a26c0();
  /* 101a1fd1 lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 101a1fd5 push 0x101af810 */
  push32((uint32_t)(0x101af810u));
  /* 101a1fda push eax */
  push32((uint32_t)(EAX));
  /* 101a1fdb call 0x101a2f50 */
  push32(0x101a1fe0u); f_101a2f50();
  /* 101a1fe0 push eax */
  push32((uint32_t)(EAX));
  /* 101a1fe1 push 0x101b3768 */
  push32((uint32_t)(0x101b3768u));
  /* 101a1fe6 call 0x101a26c0 */
  push32(0x101a1febu); f_101a26c0();
  /* 101a1feb lea ecx, [esp + 0x60] */
  ECX = ((uint32_t)(ESP + 0x60));
  /* 101a1fef push 0x101af808 */
  push32((uint32_t)(0x101af808u));
  /* 101a1ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 101a1ff5 call 0x101a2f50 */
  push32(0x101a1ffau); f_101a2f50();
  /* 101a1ffa push eax */
  push32((uint32_t)(EAX));
  /* 101a1ffb push 0x101b3770 */
  push32((uint32_t)(0x101b3770u));
  /* 101a2000 call 0x101a26c0 */
  push32(0x101a2005u); f_101a26c0();
  /* 101a2005 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2008 lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 101a200c push 0x101af800 */
  push32((uint32_t)(0x101af800u));
  /* 101a2011 push edx */
  push32((uint32_t)(EDX));
  /* 101a2012 call 0x101a2f50 */
  push32(0x101a2017u); f_101a2f50();
  /* 101a2017 push eax */
  push32((uint32_t)(EAX));
  /* 101a2018 push 0x101b3778 */
  push32((uint32_t)(0x101b3778u));
  /* 101a201d call 0x101a26c0 */
  push32(0x101a2022u); f_101a26c0();
  /* 101a2022 lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 101a2026 push 0x101af7f8 */
  push32((uint32_t)(0x101af7f8u));
  /* 101a202b push eax */
  push32((uint32_t)(EAX));
  /* 101a202c call 0x101a2f50 */
  push32(0x101a2031u); f_101a2f50();
  /* 101a2031 push eax */
  push32((uint32_t)(EAX));
  /* 101a2032 push 0x101b3750 */
  push32((uint32_t)(0x101b3750u));
  /* 101a2037 call 0x101a26c0 */
  push32(0x101a203cu); f_101a26c0();
  /* 101a203c lea ecx, [esp + 0x50] */
  ECX = ((uint32_t)(ESP + 0x50));
  /* 101a2040 push 0x101af7f0 */
  push32((uint32_t)(0x101af7f0u));
  /* 101a2045 push ecx */
  push32((uint32_t)(ECX));
  /* 101a2046 call 0x101a2f50 */
  push32(0x101a204bu); f_101a2f50();
  /* 101a204b push eax */
  push32((uint32_t)(EAX));
  /* 101a204c push 0x101b3758 */
  push32((uint32_t)(0x101b3758u));
  /* 101a2051 call 0x101a26c0 */
  push32(0x101a2056u); f_101a26c0();
  /* 101a2056 push 0x101af7e8 */
  push32((uint32_t)(0x101af7e8u));
  /* 101a205b lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 101a205f push edx */
  push32((uint32_t)(EDX));
  /* 101a2060 call 0x101a2f50 */
  push32(0x101a2065u); f_101a2f50();
  /* 101a2065 push eax */
  push32((uint32_t)(EAX));
  /* 101a2066 push 0x101b3760 */
  push32((uint32_t)(0x101b3760u));
  /* 101a206b call 0x101a26c0 */
  push32(0x101a2070u); f_101a26c0();
  /* 101a2070 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2075 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a207a je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2080 push 0x101af6e8 */
  push32((uint32_t)(0x101af6e8u));
  /* 101a2085 push 0x101b61b8 */
  push32((uint32_t)(0x101b61b8u));
  /* 101a208a call eax */
  call_ind((uint32_t)(EAX), 0x101a208cu);
  /* 101a208c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2096 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a209c push 0x101af6d4 */
  push32((uint32_t)(0x101af6d4u));
  /* 101a20a1 push 0x101b61b0 */
  push32((uint32_t)(0x101b61b0u));
  /* 101a20a6 call eax */
  call_ind((uint32_t)(EAX), 0x101a20a8u);
  /* 101a20a8 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a20ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a20b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a20b2 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a20b8 push 0x101af6c0 */
  push32((uint32_t)(0x101af6c0u));
  /* 101a20bd push 0x101b6180 */
  push32((uint32_t)(0x101b6180u));
  /* 101a20c2 call eax */
  call_ind((uint32_t)(EAX), 0x101a20c4u);
  /* 101a20c4 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a20c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a20cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a20ce je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a20d4 push 0x101af6ac */
  push32((uint32_t)(0x101af6acu));
  /* 101a20d9 push 0x101b6178 */
  push32((uint32_t)(0x101b6178u));
  /* 101a20de call eax */
  call_ind((uint32_t)(EAX), 0x101a20e0u);
  /* 101a20e0 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a20e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a20e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a20ea je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a20f0 push 0x101af698 */
  push32((uint32_t)(0x101af698u));
  /* 101a20f5 push 0x101b6188 */
  push32((uint32_t)(0x101b6188u));
  /* 101a20fa call eax */
  call_ind((uint32_t)(EAX), 0x101a20fcu);
  /* 101a20fc mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2106 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a210c push 0x101af684 */
  push32((uint32_t)(0x101af684u));
  /* 101a2111 push 0x101b6078 */
  push32((uint32_t)(0x101b6078u));
  /* 101a2116 call eax */
  call_ind((uint32_t)(EAX), 0x101a2118u);
  /* 101a2118 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a211d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2122 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2128 push 0x101af670 */
  push32((uint32_t)(0x101af670u));
  /* 101a212d push 0x101b6080 */
  push32((uint32_t)(0x101b6080u));
  /* 101a2132 call eax */
  call_ind((uint32_t)(EAX), 0x101a2134u);
  /* 101a2134 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a213c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a213e je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2144 push 0x101af65c */
  push32((uint32_t)(0x101af65cu));
  /* 101a2149 push 0x101b6088 */
  push32((uint32_t)(0x101b6088u));
  /* 101a214e call eax */
  call_ind((uint32_t)(EAX), 0x101a2150u);
  /* 101a2150 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2155 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a215a je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2160 push 0x101af648 */
  push32((uint32_t)(0x101af648u));
  /* 101a2165 push 0x101b6090 */
  push32((uint32_t)(0x101b6090u));
  /* 101a216a call eax */
  call_ind((uint32_t)(EAX), 0x101a216cu);
  /* 101a216c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2171 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2176 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a217c push 0x101af640 */
  push32((uint32_t)(0x101af640u));
  /* 101a2181 push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a2186 call eax */
  call_ind((uint32_t)(EAX), 0x101a2188u);
  /* 101a2188 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a218d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2190 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2192 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2198 push 0x101af638 */
  push32((uint32_t)(0x101af638u));
  /* 101a219d push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a21a2 call eax */
  call_ind((uint32_t)(EAX), 0x101a21a4u);
  /* 101a21a4 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a21a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a21ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a21ae je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a21b4 push 0x101af630 */
  push32((uint32_t)(0x101af630u));
  /* 101a21b9 push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a21be call eax */
  call_ind((uint32_t)(EAX), 0x101a21c0u);
  /* 101a21c0 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a21c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a21c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a21ca je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a21d0 push 0x101af628 */
  push32((uint32_t)(0x101af628u));
  /* 101a21d5 push 0x101b6058 */
  push32((uint32_t)(0x101b6058u));
  /* 101a21da call eax */
  call_ind((uint32_t)(EAX), 0x101a21dcu);
  /* 101a21dc mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a21e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a21e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a21e6 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a21ec push 0x101af620 */
  push32((uint32_t)(0x101af620u));
  /* 101a21f1 push 0x101b6010 */
  push32((uint32_t)(0x101b6010u));
  /* 101a21f6 call eax */
  call_ind((uint32_t)(EAX), 0x101a21f8u);
  /* 101a21f8 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a21fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2202 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2208 push 0x101af618 */
  push32((uint32_t)(0x101af618u));
  /* 101a220d push 0x101b6018 */
  push32((uint32_t)(0x101b6018u));
  /* 101a2212 call eax */
  call_ind((uint32_t)(EAX), 0x101a2214u);
  /* 101a2214 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2219 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a221c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a221e je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2224 push 0x101af610 */
  push32((uint32_t)(0x101af610u));
  /* 101a2229 push 0x101b6020 */
  push32((uint32_t)(0x101b6020u));
  /* 101a222e call eax */
  call_ind((uint32_t)(EAX), 0x101a2230u);
  /* 101a2230 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2238 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a223a je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2240 push 0x101af608 */
  push32((uint32_t)(0x101af608u));
  /* 101a2245 push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a224a call eax */
  call_ind((uint32_t)(EAX), 0x101a224cu);
  /* 101a224c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2256 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a225c push 0x101af600 */
  push32((uint32_t)(0x101af600u));
  /* 101a2261 push 0x101b60f0 */
  push32((uint32_t)(0x101b60f0u));
  /* 101a2266 call eax */
  call_ind((uint32_t)(EAX), 0x101a2268u);
  /* 101a2268 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a226d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2270 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2272 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2278 push 0x101af5f8 */
  push32((uint32_t)(0x101af5f8u));
  /* 101a227d push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a2282 call eax */
  call_ind((uint32_t)(EAX), 0x101a2284u);
  /* 101a2284 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a228c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a228e je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2294 push 0x101af5f0 */
  push32((uint32_t)(0x101af5f0u));
  /* 101a2299 push 0x101b61e8 */
  push32((uint32_t)(0x101b61e8u));
  /* 101a229e call eax */
  call_ind((uint32_t)(EAX), 0x101a22a0u);
  /* 101a22a0 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a22a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a22a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a22aa je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a22b0 push 0x101af5e8 */
  push32((uint32_t)(0x101af5e8u));
  /* 101a22b5 push 0x101b61f0 */
  push32((uint32_t)(0x101b61f0u));
  /* 101a22ba call eax */
  call_ind((uint32_t)(EAX), 0x101a22bcu);
  /* 101a22bc mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a22c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a22c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a22c6 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a22cc push 0x101af5e0 */
  push32((uint32_t)(0x101af5e0u));
  /* 101a22d1 push 0x101b6148 */
  push32((uint32_t)(0x101b6148u));
  /* 101a22d6 call eax */
  call_ind((uint32_t)(EAX), 0x101a22d8u);
  /* 101a22d8 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a22dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a22e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a22e2 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a22e8 push 0x101af5d8 */
  push32((uint32_t)(0x101af5d8u));
  /* 101a22ed push 0x101b6158 */
  push32((uint32_t)(0x101b6158u));
  /* 101a22f2 call eax */
  call_ind((uint32_t)(EAX), 0x101a22f4u);
  /* 101a22f4 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a22f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a22fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a22fe je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2304 push 0x101af5d0 */
  push32((uint32_t)(0x101af5d0u));
  /* 101a2309 push 0x101b6160 */
  push32((uint32_t)(0x101b6160u));
  /* 101a230e call eax */
  call_ind((uint32_t)(EAX), 0x101a2310u);
  /* 101a2310 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a231a je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2320 push 0x101af5c8 */
  push32((uint32_t)(0x101af5c8u));
  /* 101a2325 push 0x101b6150 */
  push32((uint32_t)(0x101b6150u));
  /* 101a232a call eax */
  call_ind((uint32_t)(EAX), 0x101a232cu);
  /* 101a232c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2336 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a233c push 0x101af5c0 */
  push32((uint32_t)(0x101af5c0u));
  /* 101a2341 push 0x101b3930 */
  push32((uint32_t)(0x101b3930u));
  /* 101a2346 call eax */
  call_ind((uint32_t)(EAX), 0x101a2348u);
  /* 101a2348 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a234d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2352 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2358 push 0x101af5b8 */
  push32((uint32_t)(0x101af5b8u));
  /* 101a235d push 0x101b38c0 */
  push32((uint32_t)(0x101b38c0u));
  /* 101a2362 call eax */
  call_ind((uint32_t)(EAX), 0x101a2364u);
  /* 101a2364 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a236c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a236e je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2374 push 0x101af5b0 */
  push32((uint32_t)(0x101af5b0u));
  /* 101a2379 push 0x101b3780 */
  push32((uint32_t)(0x101b3780u));
  /* 101a237e call eax */
  call_ind((uint32_t)(EAX), 0x101a2380u);
  /* 101a2380 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2385 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2388 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a238a je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2390 push 0x101af5a8 */
  push32((uint32_t)(0x101af5a8u));
  /* 101a2395 push 0x101b60d0 */
  push32((uint32_t)(0x101b60d0u));
  /* 101a239a call eax */
  call_ind((uint32_t)(EAX), 0x101a239cu);
  /* 101a239c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a23a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a23a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a23a6 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a23ac push 0x101af5a0 */
  push32((uint32_t)(0x101af5a0u));
  /* 101a23b1 push 0x101b3920 */
  push32((uint32_t)(0x101b3920u));
  /* 101a23b6 call eax */
  call_ind((uint32_t)(EAX), 0x101a23b8u);
  /* 101a23b8 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a23bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a23c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a23c2 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a23c8 push 0x101af598 */
  push32((uint32_t)(0x101af598u));
  /* 101a23cd push 0x101b61d8 */
  push32((uint32_t)(0x101b61d8u));
  /* 101a23d2 call eax */
  call_ind((uint32_t)(EAX), 0x101a23d4u);
  /* 101a23d4 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a23d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a23dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a23de je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a23e4 push 0x101af590 */
  push32((uint32_t)(0x101af590u));
  /* 101a23e9 push 0x101b61e0 */
  push32((uint32_t)(0x101b61e0u));
  /* 101a23ee call eax */
  call_ind((uint32_t)(EAX), 0x101a23f0u);
  /* 101a23f0 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a23f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a23f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a23fa je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2400 push 0x101af588 */
  push32((uint32_t)(0x101af588u));
  /* 101a2405 push 0x101b3850 */
  push32((uint32_t)(0x101b3850u));
  /* 101a240a call eax */
  call_ind((uint32_t)(EAX), 0x101a240cu);
  /* 101a240c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2416 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a241c push 0x101af580 */
  push32((uint32_t)(0x101af580u));
  /* 101a2421 push 0x101b3860 */
  push32((uint32_t)(0x101b3860u));
  /* 101a2426 call eax */
  call_ind((uint32_t)(EAX), 0x101a2428u);
  /* 101a2428 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a242d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2432 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2438 push 0x101af578 */
  push32((uint32_t)(0x101af578u));
  /* 101a243d push 0x101b3748 */
  push32((uint32_t)(0x101b3748u));
  /* 101a2442 call eax */
  call_ind((uint32_t)(EAX), 0x101a2444u);
  /* 101a2444 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a244c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a244e je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2454 push 0x101af570 */
  push32((uint32_t)(0x101af570u));
  /* 101a2459 push 0x101b3608 */
  push32((uint32_t)(0x101b3608u));
  /* 101a245e call eax */
  call_ind((uint32_t)(EAX), 0x101a2460u);
  /* 101a2460 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a246a je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2470 push 0x101af568 */
  push32((uint32_t)(0x101af568u));
  /* 101a2475 push 0x101b36e8 */
  push32((uint32_t)(0x101b36e8u));
  /* 101a247a call eax */
  call_ind((uint32_t)(EAX), 0x101a247cu);
  /* 101a247c mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2486 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a248c push 0x101af560 */
  push32((uint32_t)(0x101af560u));
  /* 101a2491 push 0x101b3610 */
  push32((uint32_t)(0x101b3610u));
  /* 101a2496 call eax */
  call_ind((uint32_t)(EAX), 0x101a2498u);
  /* 101a2498 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a249d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a24a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a24a2 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a24a8 push 0x101af54c */
  push32((uint32_t)(0x101af54cu));
  /* 101a24ad push 0x101b62c8 */
  push32((uint32_t)(0x101b62c8u));
  /* 101a24b2 call eax */
  call_ind((uint32_t)(EAX), 0x101a24b4u);
  /* 101a24b4 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a24b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a24bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a24be je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a24c0 push 0x101af538 */
  push32((uint32_t)(0x101af538u));
  /* 101a24c5 push 0x101b62b0 */
  push32((uint32_t)(0x101b62b0u));
  /* 101a24ca call eax */
  call_ind((uint32_t)(EAX), 0x101a24ccu);
  /* 101a24cc mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a24d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a24d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a24d6 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a24d8 push 0x101af524 */
  push32((uint32_t)(0x101af524u));
  /* 101a24dd push 0x101b62c0 */
  push32((uint32_t)(0x101b62c0u));
  /* 101a24e2 call eax */
  call_ind((uint32_t)(EAX), 0x101a24e4u);
  /* 101a24e4 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a24e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a24ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a24ee je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a24f0 push 0x101af510 */
  push32((uint32_t)(0x101af510u));
  /* 101a24f5 push 0x101b62a0 */
  push32((uint32_t)(0x101b62a0u));
  /* 101a24fa call eax */
  call_ind((uint32_t)(EAX), 0x101a24fcu);
  /* 101a24fc mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2504 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2506 je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2508 push 0x101af4fc */
  push32((uint32_t)(0x101af4fcu));
  /* 101a250d push 0x101b62a8 */
  push32((uint32_t)(0x101b62a8u));
  /* 101a2512 call eax */
  call_ind((uint32_t)(EAX), 0x101a2514u);
  /* 101a2514 mov eax, dword ptr [0x101b63dc] */
  EAX = (r32((uint32_t)(0x101b63dc)));
  /* 101a2519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a251c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a251e je 0x101a252f */
  if (C.zf) goto L_101a252f;
  /* 101a2520 push 0x101af4e8 */
  push32((uint32_t)(0x101af4e8u));
  /* 101a2525 push 0x101b6298 */
  push32((uint32_t)(0x101b6298u));
  /* 101a252a call eax */
  call_ind((uint32_t)(EAX), 0x101a252cu);
  /* 101a252c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a252f:;
  /* 101a252f push 4 */
  push32((uint32_t)(0x4u));
  /* 101a2531 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a2533 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a2535 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a253bu);
  /* 101a253b push 6 */
  push32((uint32_t)(0x6u));
  /* 101a253d call dword ptr [0x101b6500] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6500))), 0x101a2543u);
  /* 101a2543 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a2545 push 0x101af4d4 */
  push32((uint32_t)(0x101af4d4u));
  /* 101a254a push 0 */
  push32((uint32_t)(0x0u));
  /* 101a254c call dword ptr [0x101b6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6504))), 0x101a2552u);
  /* 101a2552 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a2554 push 0x101af4c0 */
  push32((uint32_t)(0x101af4c0u));
  /* 101a2559 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a255b call dword ptr [0x101b6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6504))), 0x101a2561u);
  /* 101a2561 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a2563 push 0x101af4ac */
  push32((uint32_t)(0x101af4acu));
  /* 101a2568 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a256a call dword ptr [0x101b6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6504))), 0x101a2570u);
  /* 101a2570 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a2572 push 0x101af498 */
  push32((uint32_t)(0x101af498u));
  /* 101a2577 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a2579 call dword ptr [0x101b6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6504))), 0x101a257fu);
  /* 101a257f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2582 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a2584 push 0x101af484 */
  push32((uint32_t)(0x101af484u));
  /* 101a2589 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a258b call dword ptr [0x101b6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6504))), 0x101a2591u);
  /* 101a2591 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a2593 push 0x101af470 */
  push32((uint32_t)(0x101af470u));
  /* 101a2598 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a259a call dword ptr [0x101b6504] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6504))), 0x101a25a0u);
  /* 101a25a0 push 0x101afb74 */
  push32((uint32_t)(0x101afb74u));
  /* 101a25a5 call dword ptr [0x101b6540] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6540))), 0x101a25abu);
  /* 101a25ab push 0x101af464 */
  push32((uint32_t)(0x101af464u));
  /* 101a25b0 call dword ptr [0x101b653c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b653c))), 0x101a25b6u);
  /* 101a25b6 push 0x101af454 */
  push32((uint32_t)(0x101af454u));
  /* 101a25bb call dword ptr [0x101b6544] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6544))), 0x101a25c1u);
  /* 101a25c1 push 0x101af448 */
  push32((uint32_t)(0x101af448u));
  /* 101a25c6 call dword ptr [0x101b654c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b654c))), 0x101a25ccu);
  /* 101a25cc push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101a25d1 call dword ptr [0x101b6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6508))), 0x101a25d7u);
  /* 101a25d7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a25d9 call dword ptr [0x101b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b650c))), 0x101a25dfu);
  /* 101a25df push 0x82 */
  push32((uint32_t)(0x82u));
  /* 101a25e4 call dword ptr [0x101b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6510))), 0x101a25eau);
  /* 101a25ea push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 101a25ef call dword ptr [0x101b6514] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6514))), 0x101a25f5u);
  /* 101a25f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a25f7 call dword ptr [0x101b6518] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6518))), 0x101a25fdu);
  /* 101a25fd add esp, 0x9c */
  { uint32_t _a=(ESP),_b=(0x9cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2603 ret  */
  ESPCHK(0x101a1010u, _esp0);
  ESP += 4; return;
}

/* FUN_10002610 @ 0x101a2610 (20 bytes, 7 insns) */
void f_101a2610(void) {
  FTRACE(0x101a2610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2610 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a2614 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a2618 push eax */
  push32((uint32_t)(EAX));
  /* 101a2619 push ecx */
  push32((uint32_t)(ECX));
  /* 101a261a call dword ptr [0x101b64f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f0))), 0x101a2620u);
  /* 101a2620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2623 ret  */
  ESPCHK(0x101a2610u, _esp0);
  ESP += 4; return;
}

/* FUN_10002630 @ 0x101a2630 (25 bytes, 9 insns) */
void f_101a2630(void) {
  FTRACE(0x101a2630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2630 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101a2634 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a2638 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a263c push eax */
  push32((uint32_t)(EAX));
  /* 101a263d push ecx */
  push32((uint32_t)(ECX));
  /* 101a263e push edx */
  push32((uint32_t)(EDX));
  /* 101a263f call dword ptr [0x101b64fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64fc))), 0x101a2645u);
  /* 101a2645 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2648 ret  */
  ESPCHK(0x101a2630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002650 @ 0x101a2650 (6 bytes, 1 insns) */
void f_101a2650(void) {
  FTRACE(0x101a2650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2650 jmp dword ptr [0x101b6528] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101b6528)))); return;
}

/* FUN_10002660 @ 0x101a2660 (20 bytes, 7 insns) */
void f_101a2660(void) {
  FTRACE(0x101a2660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2660 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a2664 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a2668 push eax */
  push32((uint32_t)(EAX));
  /* 101a2669 push ecx */
  push32((uint32_t)(ECX));
  /* 101a266a call dword ptr [0x101b6548] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6548))), 0x101a2670u);
  /* 101a2670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2673 ret  */
  ESPCHK(0x101a2660u, _esp0);
  ESP += 4; return;
}

/* FUN_10002680 @ 0x101a2680 (6 bytes, 1 insns) */
void f_101a2680(void) {
  FTRACE(0x101a2680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2680 jmp dword ptr [0x101b6554] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101b6554)))); return;
}

/* FUN_10002690 @ 0x101a2690 (6 bytes, 1 insns) */
void f_101a2690(void) {
  FTRACE(0x101a2690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2690 jmp dword ptr [0x101b6558] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101b6558)))); return;
}

/* FUN_100026a0 @ 0x101a26a0 (6 bytes, 1 insns) */
void f_101a26a0(void) {
  FTRACE(0x101a26a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a26a0 jmp dword ptr [0x101b6560] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101b6560)))); return;
}

/* FUN_100026b0 @ 0x101a26b0 (13 bytes, 5 insns) */
void f_101a26b0(void) {
  FTRACE(0x101a26b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a26b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a26b4 push eax */
  push32((uint32_t)(EAX));
  /* 101a26b5 call dword ptr [0x101b6564] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6564))), 0x101a26bbu);
  /* 101a26bb pop ecx */
  ECX = (pop32());
  /* 101a26bc ret  */
  ESPCHK(0x101a26b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026c0 @ 0x101a26c0 (20 bytes, 7 insns) */
void f_101a26c0(void) {
  FTRACE(0x101a26c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a26c0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a26c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a26c8 push eax */
  push32((uint32_t)(EAX));
  /* 101a26c9 push ecx */
  push32((uint32_t)(ECX));
  /* 101a26ca call dword ptr [0x101b6568] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6568))), 0x101a26d0u);
  /* 101a26d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a26d3 ret  */
  ESPCHK(0x101a26c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026e0 @ 0x101a26e0 (6 bytes, 1 insns) */
void f_101a26e0(void) {
  FTRACE(0x101a26e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a26e0 jmp dword ptr [0x101b656c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101b656c)))); return;
}

/* FUN_100026f0 @ 0x101a26f0 (20 bytes, 7 insns) */
void f_101a26f0(void) {
  FTRACE(0x101a26f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a26f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a26f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a26f8 push eax */
  push32((uint32_t)(EAX));
  /* 101a26f9 push ecx */
  push32((uint32_t)(ECX));
  /* 101a26fa call dword ptr [0x101b6248] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6248))), 0x101a2700u);
  /* 101a2700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2703 ret  */
  ESPCHK(0x101a26f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002710 @ 0x101a2710 (15 bytes, 5 insns) */
void f_101a2710(void) {
  FTRACE(0x101a2710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2710 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a2714 push eax */
  push32((uint32_t)(EAX));
  /* 101a2715 call dword ptr [0x101b6290] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6290))), 0x101a271bu);
  /* 101a271b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a271e ret  */
  ESPCHK(0x101a2710u, _esp0);
  ESP += 4; return;
}

/* FUN_10002720 @ 0x101a2720 (20 bytes, 7 insns) */
void f_101a2720(void) {
  FTRACE(0x101a2720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2720 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a2724 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a2728 push eax */
  push32((uint32_t)(EAX));
  /* 101a2729 push ecx */
  push32((uint32_t)(ECX));
  /* 101a272a call dword ptr [0x101b3710] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b3710))), 0x101a2730u);
  /* 101a2730 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2733 ret  */
  ESPCHK(0x101a2720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x101a2740 (13 bytes, 5 insns) */
void f_101a2740(void) {
  FTRACE(0x101a2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2740 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a2744 push eax */
  push32((uint32_t)(EAX));
  /* 101a2745 call dword ptr [0x101b38b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b38b0))), 0x101a274bu);
  /* 101a274b pop ecx */
  ECX = (pop32());
  /* 101a274c ret  */
  ESPCHK(0x101a2740u, _esp0);
  ESP += 4; return;
}

/* FUN_10002750 @ 0x101a2750 (15 bytes, 5 insns) */
void f_101a2750(void) {
  FTRACE(0x101a2750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2750 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a2754 push eax */
  push32((uint32_t)(EAX));
  /* 101a2755 call dword ptr [0x101b6570] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6570))), 0x101a275bu);
  /* 101a275b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a275e ret  */
  ESPCHK(0x101a2750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x101a2760 (25 bytes, 9 insns) */
void f_101a2760(void) {
  FTRACE(0x101a2760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2760 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101a2764 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a2768 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a276c push eax */
  push32((uint32_t)(EAX));
  /* 101a276d push ecx */
  push32((uint32_t)(ECX));
  /* 101a276e push edx */
  push32((uint32_t)(EDX));
  /* 101a276f call dword ptr [0x101b5fa0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b5fa0))), 0x101a2775u);
  /* 101a2775 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2778 ret  */
  ESPCHK(0x101a2760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x101a2780 (13 bytes, 5 insns) */
void f_101a2780(void) {
  FTRACE(0x101a2780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2780 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a2784 push eax */
  push32((uint32_t)(EAX));
  /* 101a2785 call dword ptr [0x101b3910] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b3910))), 0x101a278bu);
  /* 101a278b pop ecx */
  ECX = (pop32());
  /* 101a278c ret  */
  ESPCHK(0x101a2780u, _esp0);
  ESP += 4; return;
}

/* FUN_10002790 @ 0x101a2790 (6 bytes, 1 insns) */
void f_101a2790(void) {
  FTRACE(0x101a2790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2790 jmp dword ptr [0x101b6228] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101b6228)))); return;
}

/* FUN_100027a0 @ 0x101a27a0 (6 bytes, 1 insns) */
void f_101a27a0(void) {
  FTRACE(0x101a27a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a27a0 jmp dword ptr [0x101b3928] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101b3928)))); return;
}

/* FUN_100027b0 @ 0x101a27b0 (82 bytes, 28 insns) */
void f_101a27b0(void) {
  FTRACE(0x101a27b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a27b0 mov eax, dword ptr [0x101b63c0] */
  EAX = (r32((uint32_t)(0x101b63c0)));
  /* 101a27b5 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a27bb push esi */
  push32((uint32_t)(ESI));
  /* 101a27bc push edi */
  push32((uint32_t)(EDI));
  /* 101a27bd mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 101a27c4 push edi */
  push32((uint32_t)(EDI));
  /* 101a27c5 push eax */
  push32((uint32_t)(EAX));
  /* 101a27c6 call dword ptr [0x101ae088] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae088))), 0x101a27ccu);
  /* 101a27cc mov esi, eax */
  ESI = (EAX);
  /* 101a27ce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a27d0 jne 0x101a27f7 */
  if (!C.zf) goto L_101a27f7;
  /* 101a27d2 push edi */
  push32((uint32_t)(EDI));
  /* 101a27d3 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 101a27d7 push 0x101afef0 */
  push32((uint32_t)(0x101afef0u));
  /* 101a27dc push ecx */
  push32((uint32_t)(ECX));
  /* 101a27dd call 0x101a6e90 */
  push32(0x101a27e2u); f_101a6e90();
  /* 101a27e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a27e5 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 101a27e9 push esi */
  push32((uint32_t)(ESI));
  /* 101a27ea push 0x101afee0 */
  push32((uint32_t)(0x101afee0u));
  /* 101a27ef push edx */
  push32((uint32_t)(EDX));
  /* 101a27f0 push esi */
  push32((uint32_t)(ESI));
  /* 101a27f1 call dword ptr [0x101ae0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0dc))), 0x101a27f7u);
L_101a27f7:;
  /* 101a27f7 mov eax, esi */
  EAX = (ESI);
  /* 101a27f9 pop edi */
  EDI = (pop32());
  /* 101a27fa pop esi */
  ESI = (pop32());
  /* 101a27fb add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2801 ret  */
  ESPCHK(0x101a27b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x101a2810 (1844 bytes, 376 insns) */
void f_101a2810(void) {
  FTRACE(0x101a2810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2810 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a2814 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a2815 jne 0x101a2f3c */
  if (!C.zf) goto L_101a2f3c;
  /* 101a281b push 0x101b0644 */
  push32((uint32_t)(0x101b0644u));
  /* 101a2820 call dword ptr [0x101ae004] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae004))), 0x101a2826u);
  /* 101a2826 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a2828 mov dword ptr [0x101b63c0], eax */
  w32((uint32_t)(0x101b63c0), (EAX));
  /* 101a282d jne 0x101a2849 */
  if (!C.zf) goto L_101a2849;
  /* 101a282f push eax */
  push32((uint32_t)(EAX));
  /* 101a2830 push 0x101b063c */
  push32((uint32_t)(0x101b063cu));
  /* 101a2835 push 0x101b0624 */
  push32((uint32_t)(0x101b0624u));
  /* 101a283a push eax */
  push32((uint32_t)(EAX));
  /* 101a283b call dword ptr [0x101ae0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae0dc))), 0x101a2841u);
  /* 101a2841 mov eax, 1 */
  EAX = (0x1u);
  /* 101a2846 ret 0xc */
  ESPCHK(0x101a2810u, _esp0);
  ESP += 16; return;
L_101a2849:;
  /* 101a2849 push 0x101b0614 */
  push32((uint32_t)(0x101b0614u));
  /* 101a284e call 0x101a27b0 */
  push32(0x101a2853u); f_101a27b0();
  /* 101a2853 push 0x101b0604 */
  push32((uint32_t)(0x101b0604u));
  /* 101a2858 mov dword ptr [0x101b63c4], eax */
  w32((uint32_t)(0x101b63c4), (EAX));
  /* 101a285d call 0x101a27b0 */
  push32(0x101a2862u); f_101a27b0();
  /* 101a2862 push 0x101b05f4 */
  push32((uint32_t)(0x101b05f4u));
  /* 101a2867 mov dword ptr [0x101b63c8], eax */
  w32((uint32_t)(0x101b63c8), (EAX));
  /* 101a286c call 0x101a27b0 */
  push32(0x101a2871u); f_101a27b0();
  /* 101a2871 push 0x101b05e8 */
  push32((uint32_t)(0x101b05e8u));
  /* 101a2876 mov dword ptr [0x101b63cc], eax */
  w32((uint32_t)(0x101b63cc), (EAX));
  /* 101a287b call 0x101a27b0 */
  push32(0x101a2880u); f_101a27b0();
  /* 101a2880 push 0x101b05d8 */
  push32((uint32_t)(0x101b05d8u));
  /* 101a2885 mov dword ptr [0x101b63d0], eax */
  w32((uint32_t)(0x101b63d0), (EAX));
  /* 101a288a call 0x101a27b0 */
  push32(0x101a288fu); f_101a27b0();
  /* 101a288f push 0x101b05c4 */
  push32((uint32_t)(0x101b05c4u));
  /* 101a2894 mov dword ptr [0x101b63d4], eax */
  w32((uint32_t)(0x101b63d4), (EAX));
  /* 101a2899 call 0x101a27b0 */
  push32(0x101a289eu); f_101a27b0();
  /* 101a289e push 0x101b05b4 */
  push32((uint32_t)(0x101b05b4u));
  /* 101a28a3 mov dword ptr [0x101b63d8], eax */
  w32((uint32_t)(0x101b63d8), (EAX));
  /* 101a28a8 call 0x101a27b0 */
  push32(0x101a28adu); f_101a27b0();
  /* 101a28ad push 0x101b05a4 */
  push32((uint32_t)(0x101b05a4u));
  /* 101a28b2 mov dword ptr [0x101b63dc], eax */
  w32((uint32_t)(0x101b63dc), (EAX));
  /* 101a28b7 call 0x101a27b0 */
  push32(0x101a28bcu); f_101a27b0();
  /* 101a28bc push 0x101b0590 */
  push32((uint32_t)(0x101b0590u));
  /* 101a28c1 mov dword ptr [0x101b63e0], eax */
  w32((uint32_t)(0x101b63e0), (EAX));
  /* 101a28c6 call 0x101a27b0 */
  push32(0x101a28cbu); f_101a27b0();
  /* 101a28cb push 0x101b057c */
  push32((uint32_t)(0x101b057cu));
  /* 101a28d0 mov dword ptr [0x101b63e4], eax */
  w32((uint32_t)(0x101b63e4), (EAX));
  /* 101a28d5 call 0x101a27b0 */
  push32(0x101a28dau); f_101a27b0();
  /* 101a28da push 0x101b056c */
  push32((uint32_t)(0x101b056cu));
  /* 101a28df mov dword ptr [0x101b63e8], eax */
  w32((uint32_t)(0x101b63e8), (EAX));
  /* 101a28e4 call 0x101a27b0 */
  push32(0x101a28e9u); f_101a27b0();
  /* 101a28e9 push 0x101b055c */
  push32((uint32_t)(0x101b055cu));
  /* 101a28ee mov dword ptr [0x101b63ec], eax */
  w32((uint32_t)(0x101b63ec), (EAX));
  /* 101a28f3 call 0x101a27b0 */
  push32(0x101a28f8u); f_101a27b0();
  /* 101a28f8 push 0x101b054c */
  push32((uint32_t)(0x101b054cu));
  /* 101a28fd mov dword ptr [0x101b63f0], eax */
  w32((uint32_t)(0x101b63f0), (EAX));
  /* 101a2902 call 0x101a27b0 */
  push32(0x101a2907u); f_101a27b0();
  /* 101a2907 push 0x101b053c */
  push32((uint32_t)(0x101b053cu));
  /* 101a290c mov dword ptr [0x101b63f4], eax */
  w32((uint32_t)(0x101b63f4), (EAX));
  /* 101a2911 call 0x101a27b0 */
  push32(0x101a2916u); f_101a27b0();
  /* 101a2916 push 0x101b052c */
  push32((uint32_t)(0x101b052cu));
  /* 101a291b mov dword ptr [0x101b63f8], eax */
  w32((uint32_t)(0x101b63f8), (EAX));
  /* 101a2920 call 0x101a27b0 */
  push32(0x101a2925u); f_101a27b0();
  /* 101a2925 push 0x101b051c */
  push32((uint32_t)(0x101b051cu));
  /* 101a292a mov dword ptr [0x101b63fc], eax */
  w32((uint32_t)(0x101b63fc), (EAX));
  /* 101a292f call 0x101a27b0 */
  push32(0x101a2934u); f_101a27b0();
  /* 101a2934 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2937 mov dword ptr [0x101b6400], eax */
  w32((uint32_t)(0x101b6400), (EAX));
  /* 101a293c push 0x101b050c */
  push32((uint32_t)(0x101b050cu));
  /* 101a2941 call 0x101a27b0 */
  push32(0x101a2946u); f_101a27b0();
  /* 101a2946 push 0x101b04fc */
  push32((uint32_t)(0x101b04fcu));
  /* 101a294b mov dword ptr [0x101b6404], eax */
  w32((uint32_t)(0x101b6404), (EAX));
  /* 101a2950 call 0x101a27b0 */
  push32(0x101a2955u); f_101a27b0();
  /* 101a2955 push 0x101b04e8 */
  push32((uint32_t)(0x101b04e8u));
  /* 101a295a mov dword ptr [0x101b6408], eax */
  w32((uint32_t)(0x101b6408), (EAX));
  /* 101a295f call 0x101a27b0 */
  push32(0x101a2964u); f_101a27b0();
  /* 101a2964 push 0x101b04e0 */
  push32((uint32_t)(0x101b04e0u));
  /* 101a2969 mov dword ptr [0x101b640c], eax */
  w32((uint32_t)(0x101b640c), (EAX));
  /* 101a296e call 0x101a27b0 */
  push32(0x101a2973u); f_101a27b0();
  /* 101a2973 push 0x101b04d0 */
  push32((uint32_t)(0x101b04d0u));
  /* 101a2978 mov dword ptr [0x101b6410], eax */
  w32((uint32_t)(0x101b6410), (EAX));
  /* 101a297d call 0x101a27b0 */
  push32(0x101a2982u); f_101a27b0();
  /* 101a2982 push 0x101b04c0 */
  push32((uint32_t)(0x101b04c0u));
  /* 101a2987 mov dword ptr [0x101b6414], eax */
  w32((uint32_t)(0x101b6414), (EAX));
  /* 101a298c call 0x101a27b0 */
  push32(0x101a2991u); f_101a27b0();
  /* 101a2991 push 0x101b04b4 */
  push32((uint32_t)(0x101b04b4u));
  /* 101a2996 mov dword ptr [0x101b6418], eax */
  w32((uint32_t)(0x101b6418), (EAX));
  /* 101a299b call 0x101a27b0 */
  push32(0x101a29a0u); f_101a27b0();
  /* 101a29a0 push 0x101b04a4 */
  push32((uint32_t)(0x101b04a4u));
  /* 101a29a5 mov dword ptr [0x101b641c], eax */
  w32((uint32_t)(0x101b641c), (EAX));
  /* 101a29aa call 0x101a27b0 */
  push32(0x101a29afu); f_101a27b0();
  /* 101a29af push 0x101b049c */
  push32((uint32_t)(0x101b049cu));
  /* 101a29b4 mov dword ptr [0x101b6420], eax */
  w32((uint32_t)(0x101b6420), (EAX));
  /* 101a29b9 call 0x101a27b0 */
  push32(0x101a29beu); f_101a27b0();
  /* 101a29be push 0x101b048c */
  push32((uint32_t)(0x101b048cu));
  /* 101a29c3 mov dword ptr [0x101b6438], eax */
  w32((uint32_t)(0x101b6438), (EAX));
  /* 101a29c8 call 0x101a27b0 */
  push32(0x101a29cdu); f_101a27b0();
  /* 101a29cd push 0x101b047c */
  push32((uint32_t)(0x101b047cu));
  /* 101a29d2 mov dword ptr [0x101b643c], eax */
  w32((uint32_t)(0x101b643c), (EAX));
  /* 101a29d7 call 0x101a27b0 */
  push32(0x101a29dcu); f_101a27b0();
  /* 101a29dc push 0x101b0470 */
  push32((uint32_t)(0x101b0470u));
  /* 101a29e1 mov dword ptr [0x101b6440], eax */
  w32((uint32_t)(0x101b6440), (EAX));
  /* 101a29e6 call 0x101a27b0 */
  push32(0x101a29ebu); f_101a27b0();
  /* 101a29eb push 0x101b0460 */
  push32((uint32_t)(0x101b0460u));
  /* 101a29f0 mov dword ptr [0x101b6444], eax */
  w32((uint32_t)(0x101b6444), (EAX));
  /* 101a29f5 call 0x101a27b0 */
  push32(0x101a29fau); f_101a27b0();
  /* 101a29fa push 0x101b0454 */
  push32((uint32_t)(0x101b0454u));
  /* 101a29ff mov dword ptr [0x101b6448], eax */
  w32((uint32_t)(0x101b6448), (EAX));
  /* 101a2a04 call 0x101a27b0 */
  push32(0x101a2a09u); f_101a27b0();
  /* 101a2a09 push 0x101b0444 */
  push32((uint32_t)(0x101b0444u));
  /* 101a2a0e mov dword ptr [0x101b6464], eax */
  w32((uint32_t)(0x101b6464), (EAX));
  /* 101a2a13 call 0x101a27b0 */
  push32(0x101a2a18u); f_101a27b0();
  /* 101a2a18 push 0x101b043c */
  push32((uint32_t)(0x101b043cu));
  /* 101a2a1d mov dword ptr [0x101b644c], eax */
  w32((uint32_t)(0x101b644c), (EAX));
  /* 101a2a22 call 0x101a27b0 */
  push32(0x101a2a27u); f_101a27b0();
  /* 101a2a27 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2a2a mov dword ptr [0x101b6450], eax */
  w32((uint32_t)(0x101b6450), (EAX));
  /* 101a2a2f push 0x101b042c */
  push32((uint32_t)(0x101b042cu));
  /* 101a2a34 call 0x101a27b0 */
  push32(0x101a2a39u); f_101a27b0();
  /* 101a2a39 push 0x101b041c */
  push32((uint32_t)(0x101b041cu));
  /* 101a2a3e mov dword ptr [0x101b6454], eax */
  w32((uint32_t)(0x101b6454), (EAX));
  /* 101a2a43 call 0x101a27b0 */
  push32(0x101a2a48u); f_101a27b0();
  /* 101a2a48 push 0x101b040c */
  push32((uint32_t)(0x101b040cu));
  /* 101a2a4d mov dword ptr [0x101b6458], eax */
  w32((uint32_t)(0x101b6458), (EAX));
  /* 101a2a52 call 0x101a27b0 */
  push32(0x101a2a57u); f_101a27b0();
  /* 101a2a57 push 0x101b0400 */
  push32((uint32_t)(0x101b0400u));
  /* 101a2a5c mov dword ptr [0x101b645c], eax */
  w32((uint32_t)(0x101b645c), (EAX));
  /* 101a2a61 call 0x101a27b0 */
  push32(0x101a2a66u); f_101a27b0();
  /* 101a2a66 push 0x101b03f8 */
  push32((uint32_t)(0x101b03f8u));
  /* 101a2a6b mov dword ptr [0x101b6460], eax */
  w32((uint32_t)(0x101b6460), (EAX));
  /* 101a2a70 call 0x101a27b0 */
  push32(0x101a2a75u); f_101a27b0();
  /* 101a2a75 push 0x101b03e8 */
  push32((uint32_t)(0x101b03e8u));
  /* 101a2a7a mov dword ptr [0x101b6468], eax */
  w32((uint32_t)(0x101b6468), (EAX));
  /* 101a2a7f call 0x101a27b0 */
  push32(0x101a2a84u); f_101a27b0();
  /* 101a2a84 push 0x101b03d8 */
  push32((uint32_t)(0x101b03d8u));
  /* 101a2a89 mov dword ptr [0x101b646c], eax */
  w32((uint32_t)(0x101b646c), (EAX));
  /* 101a2a8e call 0x101a27b0 */
  push32(0x101a2a93u); f_101a27b0();
  /* 101a2a93 push 0x101b03c8 */
  push32((uint32_t)(0x101b03c8u));
  /* 101a2a98 mov dword ptr [0x101b6470], eax */
  w32((uint32_t)(0x101b6470), (EAX));
  /* 101a2a9d call 0x101a27b0 */
  push32(0x101a2aa2u); f_101a27b0();
  /* 101a2aa2 push 0x101b03b8 */
  push32((uint32_t)(0x101b03b8u));
  /* 101a2aa7 mov dword ptr [0x101b6474], eax */
  w32((uint32_t)(0x101b6474), (EAX));
  /* 101a2aac call 0x101a27b0 */
  push32(0x101a2ab1u); f_101a27b0();
  /* 101a2ab1 push 0x101b03ac */
  push32((uint32_t)(0x101b03acu));
  /* 101a2ab6 mov dword ptr [0x101b6478], eax */
  w32((uint32_t)(0x101b6478), (EAX));
  /* 101a2abb call 0x101a27b0 */
  push32(0x101a2ac0u); f_101a27b0();
  /* 101a2ac0 push 0x101b03a0 */
  push32((uint32_t)(0x101b03a0u));
  /* 101a2ac5 mov dword ptr [0x101b647c], eax */
  w32((uint32_t)(0x101b647c), (EAX));
  /* 101a2aca call 0x101a27b0 */
  push32(0x101a2acfu); f_101a27b0();
  /* 101a2acf push 0x101b0390 */
  push32((uint32_t)(0x101b0390u));
  /* 101a2ad4 mov dword ptr [0x101b6480], eax */
  w32((uint32_t)(0x101b6480), (EAX));
  /* 101a2ad9 call 0x101a27b0 */
  push32(0x101a2adeu); f_101a27b0();
  /* 101a2ade push 0x101b0384 */
  push32((uint32_t)(0x101b0384u));
  /* 101a2ae3 mov dword ptr [0x101b6484], eax */
  w32((uint32_t)(0x101b6484), (EAX));
  /* 101a2ae8 call 0x101a27b0 */
  push32(0x101a2aedu); f_101a27b0();
  /* 101a2aed push 0x101b0378 */
  push32((uint32_t)(0x101b0378u));
  /* 101a2af2 mov dword ptr [0x101b6488], eax */
  w32((uint32_t)(0x101b6488), (EAX));
  /* 101a2af7 call 0x101a27b0 */
  push32(0x101a2afcu); f_101a27b0();
  /* 101a2afc push 0x101b036c */
  push32((uint32_t)(0x101b036cu));
  /* 101a2b01 mov dword ptr [0x101b648c], eax */
  w32((uint32_t)(0x101b648c), (EAX));
  /* 101a2b06 call 0x101a27b0 */
  push32(0x101a2b0bu); f_101a27b0();
  /* 101a2b0b push 0x101b0360 */
  push32((uint32_t)(0x101b0360u));
  /* 101a2b10 mov dword ptr [0x101b61c0], eax */
  w32((uint32_t)(0x101b61c0), (EAX));
  /* 101a2b15 call 0x101a27b0 */
  push32(0x101a2b1au); f_101a27b0();
  /* 101a2b1a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2b1d mov dword ptr [0x101b6490], eax */
  w32((uint32_t)(0x101b6490), (EAX));
  /* 101a2b22 push 0x101b0354 */
  push32((uint32_t)(0x101b0354u));
  /* 101a2b27 call 0x101a27b0 */
  push32(0x101a2b2cu); f_101a27b0();
  /* 101a2b2c push 0x101b0348 */
  push32((uint32_t)(0x101b0348u));
  /* 101a2b31 mov dword ptr [0x101b6494], eax */
  w32((uint32_t)(0x101b6494), (EAX));
  /* 101a2b36 call 0x101a27b0 */
  push32(0x101a2b3bu); f_101a27b0();
  /* 101a2b3b push 0x101b0338 */
  push32((uint32_t)(0x101b0338u));
  /* 101a2b40 mov dword ptr [0x101b6498], eax */
  w32((uint32_t)(0x101b6498), (EAX));
  /* 101a2b45 call 0x101a27b0 */
  push32(0x101a2b4au); f_101a27b0();
  /* 101a2b4a push 0x101b032c */
  push32((uint32_t)(0x101b032cu));
  /* 101a2b4f mov dword ptr [0x101b649c], eax */
  w32((uint32_t)(0x101b649c), (EAX));
  /* 101a2b54 call 0x101a27b0 */
  push32(0x101a2b59u); f_101a27b0();
  /* 101a2b59 push 0x101b0320 */
  push32((uint32_t)(0x101b0320u));
  /* 101a2b5e mov dword ptr [0x101b64a0], eax */
  w32((uint32_t)(0x101b64a0), (EAX));
  /* 101a2b63 call 0x101a27b0 */
  push32(0x101a2b68u); f_101a27b0();
  /* 101a2b68 mov dword ptr [0x101b64a4], eax */
  w32((uint32_t)(0x101b64a4), (EAX));
  /* 101a2b6d push 0x101b0310 */
  push32((uint32_t)(0x101b0310u));
  /* 101a2b72 call 0x101a27b0 */
  push32(0x101a2b77u); f_101a27b0();
  /* 101a2b77 push 0x101b0300 */
  push32((uint32_t)(0x101b0300u));
  /* 101a2b7c mov dword ptr [0x101b64a8], eax */
  w32((uint32_t)(0x101b64a8), (EAX));
  /* 101a2b81 call 0x101a27b0 */
  push32(0x101a2b86u); f_101a27b0();
  /* 101a2b86 push 0x101b02f4 */
  push32((uint32_t)(0x101b02f4u));
  /* 101a2b8b mov dword ptr [0x101b64ac], eax */
  w32((uint32_t)(0x101b64ac), (EAX));
  /* 101a2b90 call 0x101a27b0 */
  push32(0x101a2b95u); f_101a27b0();
  /* 101a2b95 push 0x101b02ec */
  push32((uint32_t)(0x101b02ecu));
  /* 101a2b9a mov dword ptr [0x101b64b0], eax */
  w32((uint32_t)(0x101b64b0), (EAX));
  /* 101a2b9f call 0x101a27b0 */
  push32(0x101a2ba4u); f_101a27b0();
  /* 101a2ba4 push 0x101b02dc */
  push32((uint32_t)(0x101b02dcu));
  /* 101a2ba9 mov dword ptr [0x101b64b4], eax */
  w32((uint32_t)(0x101b64b4), (EAX));
  /* 101a2bae call 0x101a27b0 */
  push32(0x101a2bb3u); f_101a27b0();
  /* 101a2bb3 push 0x101b02d4 */
  push32((uint32_t)(0x101b02d4u));
  /* 101a2bb8 mov dword ptr [0x101b64b8], eax */
  w32((uint32_t)(0x101b64b8), (EAX));
  /* 101a2bbd call 0x101a27b0 */
  push32(0x101a2bc2u); f_101a27b0();
  /* 101a2bc2 push 0x101b02c8 */
  push32((uint32_t)(0x101b02c8u));
  /* 101a2bc7 mov dword ptr [0x101b64bc], eax */
  w32((uint32_t)(0x101b64bc), (EAX));
  /* 101a2bcc call 0x101a27b0 */
  push32(0x101a2bd1u); f_101a27b0();
  /* 101a2bd1 push 0x101b02c0 */
  push32((uint32_t)(0x101b02c0u));
  /* 101a2bd6 mov dword ptr [0x101b64c0], eax */
  w32((uint32_t)(0x101b64c0), (EAX));
  /* 101a2bdb call 0x101a27b0 */
  push32(0x101a2be0u); f_101a27b0();
  /* 101a2be0 push 0x101b02ac */
  push32((uint32_t)(0x101b02acu));
  /* 101a2be5 mov dword ptr [0x101b64c4], eax */
  w32((uint32_t)(0x101b64c4), (EAX));
  /* 101a2bea call 0x101a27b0 */
  push32(0x101a2befu); f_101a27b0();
  /* 101a2bef push 0x101b02a0 */
  push32((uint32_t)(0x101b02a0u));
  /* 101a2bf4 mov dword ptr [0x101b3618], eax */
  w32((uint32_t)(0x101b3618), (EAX));
  /* 101a2bf9 call 0x101a27b0 */
  push32(0x101a2bfeu); f_101a27b0();
  /* 101a2bfe push 0x101b0294 */
  push32((uint32_t)(0x101b0294u));
  /* 101a2c03 mov dword ptr [0x101b64d0], eax */
  w32((uint32_t)(0x101b64d0), (EAX));
  /* 101a2c08 call 0x101a27b0 */
  push32(0x101a2c0du); f_101a27b0();
  /* 101a2c0d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2c10 mov dword ptr [0x101b64cc], eax */
  w32((uint32_t)(0x101b64cc), (EAX));
  /* 101a2c15 push 0x101b0280 */
  push32((uint32_t)(0x101b0280u));
  /* 101a2c1a call 0x101a27b0 */
  push32(0x101a2c1fu); f_101a27b0();
  /* 101a2c1f push 0x101b0270 */
  push32((uint32_t)(0x101b0270u));
  /* 101a2c24 mov dword ptr [0x101b64d4], eax */
  w32((uint32_t)(0x101b64d4), (EAX));
  /* 101a2c29 call 0x101a27b0 */
  push32(0x101a2c2eu); f_101a27b0();
  /* 101a2c2e push 0x101b0260 */
  push32((uint32_t)(0x101b0260u));
  /* 101a2c33 mov dword ptr [0x101b64d8], eax */
  w32((uint32_t)(0x101b64d8), (EAX));
  /* 101a2c38 call 0x101a27b0 */
  push32(0x101a2c3du); f_101a27b0();
  /* 101a2c3d push 0x101b0250 */
  push32((uint32_t)(0x101b0250u));
  /* 101a2c42 mov dword ptr [0x101b64dc], eax */
  w32((uint32_t)(0x101b64dc), (EAX));
  /* 101a2c47 call 0x101a27b0 */
  push32(0x101a2c4cu); f_101a27b0();
  /* 101a2c4c push 0x101b0244 */
  push32((uint32_t)(0x101b0244u));
  /* 101a2c51 mov dword ptr [0x101b6428], eax */
  w32((uint32_t)(0x101b6428), (EAX));
  /* 101a2c56 call 0x101a27b0 */
  push32(0x101a2c5bu); f_101a27b0();
  /* 101a2c5b push 0x101b0234 */
  push32((uint32_t)(0x101b0234u));
  /* 101a2c60 mov dword ptr [0x101b6424], eax */
  w32((uint32_t)(0x101b6424), (EAX));
  /* 101a2c65 call 0x101a27b0 */
  push32(0x101a2c6au); f_101a27b0();
  /* 101a2c6a push 0x101b0220 */
  push32((uint32_t)(0x101b0220u));
  /* 101a2c6f mov dword ptr [0x101b642c], eax */
  w32((uint32_t)(0x101b642c), (EAX));
  /* 101a2c74 call 0x101a27b0 */
  push32(0x101a2c79u); f_101a27b0();
  /* 101a2c79 push 0x101b0208 */
  push32((uint32_t)(0x101b0208u));
  /* 101a2c7e mov dword ptr [0x101b6430], eax */
  w32((uint32_t)(0x101b6430), (EAX));
  /* 101a2c83 call 0x101a27b0 */
  push32(0x101a2c88u); f_101a27b0();
  /* 101a2c88 push 0x101b01f8 */
  push32((uint32_t)(0x101b01f8u));
  /* 101a2c8d mov dword ptr [0x101b6434], eax */
  w32((uint32_t)(0x101b6434), (EAX));
  /* 101a2c92 call 0x101a27b0 */
  push32(0x101a2c97u); f_101a27b0();
  /* 101a2c97 push 0x101b01e0 */
  push32((uint32_t)(0x101b01e0u));
  /* 101a2c9c mov dword ptr [0x101b64f8], eax */
  w32((uint32_t)(0x101b64f8), (EAX));
  /* 101a2ca1 call 0x101a27b0 */
  push32(0x101a2ca6u); f_101a27b0();
  /* 101a2ca6 push 0x101b01d0 */
  push32((uint32_t)(0x101b01d0u));
  /* 101a2cab mov dword ptr [0x101b6528], eax */
  w32((uint32_t)(0x101b6528), (EAX));
  /* 101a2cb0 call 0x101a27b0 */
  push32(0x101a2cb5u); f_101a27b0();
  /* 101a2cb5 push 0x101b01c8 */
  push32((uint32_t)(0x101b01c8u));
  /* 101a2cba mov dword ptr [0x101b64f0], eax */
  w32((uint32_t)(0x101b64f0), (EAX));
  /* 101a2cbf call 0x101a27b0 */
  push32(0x101a2cc4u); f_101a27b0();
  /* 101a2cc4 push 0x101b01b8 */
  push32((uint32_t)(0x101b01b8u));
  /* 101a2cc9 mov dword ptr [0x101b64fc], eax */
  w32((uint32_t)(0x101b64fc), (EAX));
  /* 101a2cce call 0x101a27b0 */
  push32(0x101a2cd3u); f_101a27b0();
  /* 101a2cd3 push 0x101b01ac */
  push32((uint32_t)(0x101b01acu));
  /* 101a2cd8 mov dword ptr [0x101b6548], eax */
  w32((uint32_t)(0x101b6548), (EAX));
  /* 101a2cdd call 0x101a27b0 */
  push32(0x101a2ce2u); f_101a27b0();
  /* 101a2ce2 push 0x101b01a4 */
  push32((uint32_t)(0x101b01a4u));
  /* 101a2ce7 mov dword ptr [0x101b64e0], eax */
  w32((uint32_t)(0x101b64e0), (EAX));
  /* 101a2cec call 0x101a27b0 */
  push32(0x101a2cf1u); f_101a27b0();
  /* 101a2cf1 push 0x101b0198 */
  push32((uint32_t)(0x101b0198u));
  /* 101a2cf6 mov dword ptr [0x101b64e4], eax */
  w32((uint32_t)(0x101b64e4), (EAX));
  /* 101a2cfb call 0x101a27b0 */
  push32(0x101a2d00u); f_101a27b0();
  /* 101a2d00 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2d03 mov dword ptr [0x101b64e8], eax */
  w32((uint32_t)(0x101b64e8), (EAX));
  /* 101a2d08 push 0x101b0188 */
  push32((uint32_t)(0x101b0188u));
  /* 101a2d0d call 0x101a27b0 */
  push32(0x101a2d12u); f_101a27b0();
  /* 101a2d12 push 0x101b0174 */
  push32((uint32_t)(0x101b0174u));
  /* 101a2d17 mov dword ptr [0x101b64ec], eax */
  w32((uint32_t)(0x101b64ec), (EAX));
  /* 101a2d1c call 0x101a27b0 */
  push32(0x101a2d21u); f_101a27b0();
  /* 101a2d21 push 0x101b0158 */
  push32((uint32_t)(0x101b0158u));
  /* 101a2d26 mov dword ptr [0x101b64f4], eax */
  w32((uint32_t)(0x101b64f4), (EAX));
  /* 101a2d2b call 0x101a27b0 */
  push32(0x101a2d30u); f_101a27b0();
  /* 101a2d30 push 0x101b0144 */
  push32((uint32_t)(0x101b0144u));
  /* 101a2d35 mov dword ptr [0x101b6500], eax */
  w32((uint32_t)(0x101b6500), (EAX));
  /* 101a2d3a call 0x101a27b0 */
  push32(0x101a2d3fu); f_101a27b0();
  /* 101a2d3f push 0x101b0138 */
  push32((uint32_t)(0x101b0138u));
  /* 101a2d44 mov dword ptr [0x101b6504], eax */
  w32((uint32_t)(0x101b6504), (EAX));
  /* 101a2d49 call 0x101a27b0 */
  push32(0x101a2d4eu); f_101a27b0();
  /* 101a2d4e push 0x101b0128 */
  push32((uint32_t)(0x101b0128u));
  /* 101a2d53 mov dword ptr [0x101b653c], eax */
  w32((uint32_t)(0x101b653c), (EAX));
  /* 101a2d58 call 0x101a27b0 */
  push32(0x101a2d5du); f_101a27b0();
  /* 101a2d5d push 0x101b011c */
  push32((uint32_t)(0x101b011cu));
  /* 101a2d62 mov dword ptr [0x101b6540], eax */
  w32((uint32_t)(0x101b6540), (EAX));
  /* 101a2d67 call 0x101a27b0 */
  push32(0x101a2d6cu); f_101a27b0();
  /* 101a2d6c push 0x101b0110 */
  push32((uint32_t)(0x101b0110u));
  /* 101a2d71 mov dword ptr [0x101b6544], eax */
  w32((uint32_t)(0x101b6544), (EAX));
  /* 101a2d76 call 0x101a27b0 */
  push32(0x101a2d7bu); f_101a27b0();
  /* 101a2d7b push 0x101b00f8 */
  push32((uint32_t)(0x101b00f8u));
  /* 101a2d80 mov dword ptr [0x101b654c], eax */
  w32((uint32_t)(0x101b654c), (EAX));
  /* 101a2d85 call 0x101a27b0 */
  push32(0x101a2d8au); f_101a27b0();
  /* 101a2d8a push 0x101b00dc */
  push32((uint32_t)(0x101b00dcu));
  /* 101a2d8f mov dword ptr [0x101b6508], eax */
  w32((uint32_t)(0x101b6508), (EAX));
  /* 101a2d94 call 0x101a27b0 */
  push32(0x101a2d99u); f_101a27b0();
  /* 101a2d99 push 0x101b00c0 */
  push32((uint32_t)(0x101b00c0u));
  /* 101a2d9e mov dword ptr [0x101b650c], eax */
  w32((uint32_t)(0x101b650c), (EAX));
  /* 101a2da3 call 0x101a27b0 */
  push32(0x101a2da8u); f_101a27b0();
  /* 101a2da8 push 0x101b00a8 */
  push32((uint32_t)(0x101b00a8u));
  /* 101a2dad mov dword ptr [0x101b6510], eax */
  w32((uint32_t)(0x101b6510), (EAX));
  /* 101a2db2 call 0x101a27b0 */
  push32(0x101a2db7u); f_101a27b0();
  /* 101a2db7 push 0x101b0090 */
  push32((uint32_t)(0x101b0090u));
  /* 101a2dbc mov dword ptr [0x101b6514], eax */
  w32((uint32_t)(0x101b6514), (EAX));
  /* 101a2dc1 call 0x101a27b0 */
  push32(0x101a2dc6u); f_101a27b0();
  /* 101a2dc6 push 0x101b0084 */
  push32((uint32_t)(0x101b0084u));
  /* 101a2dcb mov dword ptr [0x101b6518], eax */
  w32((uint32_t)(0x101b6518), (EAX));
  /* 101a2dd0 call 0x101a27b0 */
  push32(0x101a2dd5u); f_101a27b0();
  /* 101a2dd5 push 0x101b0078 */
  push32((uint32_t)(0x101b0078u));
  /* 101a2dda mov dword ptr [0x101b651c], eax */
  w32((uint32_t)(0x101b651c), (EAX));
  /* 101a2ddf call 0x101a27b0 */
  push32(0x101a2de4u); f_101a27b0();
  /* 101a2de4 push 0x101b0068 */
  push32((uint32_t)(0x101b0068u));
  /* 101a2de9 mov dword ptr [0x101b6520], eax */
  w32((uint32_t)(0x101b6520), (EAX));
  /* 101a2dee call 0x101a27b0 */
  push32(0x101a2df3u); f_101a27b0();
  /* 101a2df3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2df6 mov dword ptr [0x101b6524], eax */
  w32((uint32_t)(0x101b6524), (EAX));
  /* 101a2dfb push 0x101b005c */
  push32((uint32_t)(0x101b005cu));
  /* 101a2e00 call 0x101a27b0 */
  push32(0x101a2e05u); f_101a27b0();
  /* 101a2e05 push 0x101b0050 */
  push32((uint32_t)(0x101b0050u));
  /* 101a2e0a mov dword ptr [0x101b652c], eax */
  w32((uint32_t)(0x101b652c), (EAX));
  /* 101a2e0f call 0x101a27b0 */
  push32(0x101a2e14u); f_101a27b0();
  /* 101a2e14 push 0x101b0044 */
  push32((uint32_t)(0x101b0044u));
  /* 101a2e19 mov dword ptr [0x101b6530], eax */
  w32((uint32_t)(0x101b6530), (EAX));
  /* 101a2e1e call 0x101a27b0 */
  push32(0x101a2e23u); f_101a27b0();
  /* 101a2e23 push 0x101b0034 */
  push32((uint32_t)(0x101b0034u));
  /* 101a2e28 mov dword ptr [0x101b6550], eax */
  w32((uint32_t)(0x101b6550), (EAX));
  /* 101a2e2d call 0x101a27b0 */
  push32(0x101a2e32u); f_101a27b0();
  /* 101a2e32 push 0x101b0028 */
  push32((uint32_t)(0x101b0028u));
  /* 101a2e37 mov dword ptr [0x101b6554], eax */
  w32((uint32_t)(0x101b6554), (EAX));
  /* 101a2e3c call 0x101a27b0 */
  push32(0x101a2e41u); f_101a27b0();
  /* 101a2e41 push 0x101b001c */
  push32((uint32_t)(0x101b001cu));
  /* 101a2e46 mov dword ptr [0x101b6558], eax */
  w32((uint32_t)(0x101b6558), (EAX));
  /* 101a2e4b call 0x101a27b0 */
  push32(0x101a2e50u); f_101a27b0();
  /* 101a2e50 push 0x101b0010 */
  push32((uint32_t)(0x101b0010u));
  /* 101a2e55 mov dword ptr [0x101b655c], eax */
  w32((uint32_t)(0x101b655c), (EAX));
  /* 101a2e5a call 0x101a27b0 */
  push32(0x101a2e5fu); f_101a27b0();
  /* 101a2e5f push 0x101b0000 */
  push32((uint32_t)(0x101b0000u));
  /* 101a2e64 mov dword ptr [0x101b6560], eax */
  w32((uint32_t)(0x101b6560), (EAX));
  /* 101a2e69 call 0x101a27b0 */
  push32(0x101a2e6eu); f_101a27b0();
  /* 101a2e6e push 0x101afff0 */
  push32((uint32_t)(0x101afff0u));
  /* 101a2e73 mov dword ptr [0x101b6564], eax */
  w32((uint32_t)(0x101b6564), (EAX));
  /* 101a2e78 call 0x101a27b0 */
  push32(0x101a2e7du); f_101a27b0();
  /* 101a2e7d push 0x101affdc */
  push32((uint32_t)(0x101affdcu));
  /* 101a2e82 mov dword ptr [0x101b656c], eax */
  w32((uint32_t)(0x101b656c), (EAX));
  /* 101a2e87 call 0x101a27b0 */
  push32(0x101a2e8cu); f_101a27b0();
  /* 101a2e8c mov dword ptr [0x101b6568], eax */
  w32((uint32_t)(0x101b6568), (EAX));
  /* 101a2e91 push 0x101affc4 */
  push32((uint32_t)(0x101affc4u));
  /* 101a2e96 call 0x101a27b0 */
  push32(0x101a2e9bu); f_101a27b0();
  /* 101a2e9b push 0x101affac */
  push32((uint32_t)(0x101affacu));
  /* 101a2ea0 mov dword ptr [0x101b38b0], eax */
  w32((uint32_t)(0x101b38b0), (EAX));
  /* 101a2ea5 call 0x101a27b0 */
  push32(0x101a2eaau); f_101a27b0();
  /* 101a2eaa push 0x101aff9c */
  push32((uint32_t)(0x101aff9cu));
  /* 101a2eaf mov dword ptr [0x101b3710], eax */
  w32((uint32_t)(0x101b3710), (EAX));
  /* 101a2eb4 call 0x101a27b0 */
  push32(0x101a2eb9u); f_101a27b0();
  /* 101a2eb9 push 0x101aff8c */
  push32((uint32_t)(0x101aff8cu));
  /* 101a2ebe mov dword ptr [0x101b6570], eax */
  w32((uint32_t)(0x101b6570), (EAX));
  /* 101a2ec3 call 0x101a27b0 */
  push32(0x101a2ec8u); f_101a27b0();
  /* 101a2ec8 push 0x101aff7c */
  push32((uint32_t)(0x101aff7cu));
  /* 101a2ecd mov dword ptr [0x101b6534], eax */
  w32((uint32_t)(0x101b6534), (EAX));
  /* 101a2ed2 call 0x101a27b0 */
  push32(0x101a2ed7u); f_101a27b0();
  /* 101a2ed7 push 0x101aff6c */
  push32((uint32_t)(0x101aff6cu));
  /* 101a2edc mov dword ptr [0x101b6538], eax */
  w32((uint32_t)(0x101b6538), (EAX));
  /* 101a2ee1 call 0x101a27b0 */
  push32(0x101a2ee6u); f_101a27b0();
  /* 101a2ee6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2ee9 mov dword ptr [0x101b6290], eax */
  w32((uint32_t)(0x101b6290), (EAX));
  /* 101a2eee push 0x101aff5c */
  push32((uint32_t)(0x101aff5cu));
  /* 101a2ef3 call 0x101a27b0 */
  push32(0x101a2ef8u); f_101a27b0();
  /* 101a2ef8 push 0x101aff4c */
  push32((uint32_t)(0x101aff4cu));
  /* 101a2efd mov dword ptr [0x101b6248], eax */
  w32((uint32_t)(0x101b6248), (EAX));
  /* 101a2f02 call 0x101a27b0 */
  push32(0x101a2f07u); f_101a27b0();
  /* 101a2f07 push 0x101aff3c */
  push32((uint32_t)(0x101aff3cu));
  /* 101a2f0c mov dword ptr [0x101b5fa0], eax */
  w32((uint32_t)(0x101b5fa0), (EAX));
  /* 101a2f11 call 0x101a27b0 */
  push32(0x101a2f16u); f_101a27b0();
  /* 101a2f16 push 0x101aff2c */
  push32((uint32_t)(0x101aff2cu));
  /* 101a2f1b mov dword ptr [0x101b3910], eax */
  w32((uint32_t)(0x101b3910), (EAX));
  /* 101a2f20 call 0x101a27b0 */
  push32(0x101a2f25u); f_101a27b0();
  /* 101a2f25 push 0x101aff18 */
  push32((uint32_t)(0x101aff18u));
  /* 101a2f2a mov dword ptr [0x101b6228], eax */
  w32((uint32_t)(0x101b6228), (EAX));
  /* 101a2f2f call 0x101a27b0 */
  push32(0x101a2f34u); f_101a27b0();
  /* 101a2f34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2f37 mov dword ptr [0x101b3928], eax */
  w32((uint32_t)(0x101b3928), (EAX));
L_101a2f3c:;
  /* 101a2f3c mov eax, 1 */
  EAX = (0x1u);
  /* 101a2f41 ret 0xc */
  ESPCHK(0x101a2810u, _esp0);
  ESP += 16; return;
}

/* FUN_10002f50 @ 0x101a2f50 (34 bytes, 10 insns) */
void f_101a2f50(void) {
  FTRACE(0x101a2f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2f50 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a2f54 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a2f58 push eax */
  push32((uint32_t)(EAX));
  /* 101a2f59 push ecx */
  push32((uint32_t)(ECX));
  /* 101a2f5a push 0x101b0650 */
  push32((uint32_t)(0x101b0650u));
  /* 101a2f5f push 0x101b3788 */
  push32((uint32_t)(0x101b3788u));
  /* 101a2f64 call 0x101a6e90 */
  push32(0x101a2f69u); f_101a6e90();
  /* 101a2f69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2f6c mov eax, 0x101b3788 */
  EAX = (0x101b3788u);
  /* 101a2f71 ret  */
  ESPCHK(0x101a2f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f80 @ 0x101a2f80 (45 bytes, 16 insns) */
void f_101a2f80(void) {
  FTRACE(0x101a2f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2f80 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a2f84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a2f88 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a2f8d push eax */
  push32((uint32_t)(EAX));
  /* 101a2f8e push ecx */
  push32((uint32_t)(ECX));
  /* 101a2f8f call 0x101a2760 */
  push32(0x101a2f94u); f_101a2760();
  /* 101a2f94 mov ecx, eax */
  ECX = (EAX);
  /* 101a2f96 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 101a2f9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2f9d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101a2fa0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101a2fa3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101a2fa6 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101a2fa9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a2faa idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a2fac ret  */
  ESPCHK(0x101a2f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fb0 @ 0x101a2fb0 (171 bytes, 77 insns) */
void f_101a2fb0(void) {
  FTRACE(0x101a2fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a2fb0 push ebx */
  push32((uint32_t)(EBX));
  /* 101a2fb1 push ebp */
  push32((uint32_t)(EBP));
  /* 101a2fb2 push esi */
  push32((uint32_t)(ESI));
  /* 101a2fb3 push edi */
  push32((uint32_t)(EDI));
  /* 101a2fb4 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 101a2fb8 push edi */
  push32((uint32_t)(EDI));
  /* 101a2fb9 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a2fbfu);
  /* 101a2fbf mov esi, dword ptr [esp + 0x1c] */
  ESI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101a2fc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2fc6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a2fc8 jl 0x101a2fd1 */
  if ((C.sf!=C.of)) goto L_101a2fd1;
  /* 101a2fca pop edi */
  EDI = (pop32());
  /* 101a2fcb pop esi */
  ESI = (pop32());
  /* 101a2fcc pop ebp */
  EBP = (pop32());
  /* 101a2fcd mov al, 1 */
  AL = (0x1u);
  /* 101a2fcf pop ebx */
  EBX = (pop32());
  /* 101a2fd0 ret  */
  ESPCHK(0x101a2fb0u, _esp0);
  ESP += 4; return;
L_101a2fd1:;
  /* 101a2fd1 push edi */
  push32((uint32_t)(EDI));
  /* 101a2fd2 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a2fd8u);
  /* 101a2fd8 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 101a2fdc sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a2fde push esi */
  push32((uint32_t)(ESI));
  /* 101a2fdf push edi */
  push32((uint32_t)(EDI));
  /* 101a2fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 101a2fe1 mov dword ptr [esp + 0x24], esi */
  w32((uint32_t)(ESP + 0x24), (ESI));
  /* 101a2fe5 call 0x101a2f80 */
  push32(0x101a2feau); f_101a2f80();
  /* 101a2fea push ebp */
  push32((uint32_t)(EBP));
  /* 101a2feb mov ebx, eax */
  EBX = (EAX);
  /* 101a2fed call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a2ff3u);
  /* 101a2ff3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a2ff6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a2ff8 jle 0x101a3054 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3054;
  /* 101a2ffa cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3000 jle 0x101a3054 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3054;
  /* 101a3002 mov eax, 0x45e7b273 */
  EAX = (0x45e7b273u);
  /* 101a3007 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101a3009 imul ebx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EBX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a300b sar edx, 0xc */
  EDX = (sh_sar((uint32_t)(EDX), (0xcu)&0x1f, 32));
  /* 101a300e mov eax, edx */
  EAX = (EDX);
  /* 101a3010 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101a3013 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3015 mov ebx, edx */
  EBX = (EDX);
L_101a3017:;
  /* 101a3017 cmp ebx, 0xf */
  { uint32_t _a=(EBX),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a301a mov eax, 0xf */
  EAX = (0xfu);
  /* 101a301f jg 0x101a3023 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a3023;
  /* 101a3021 mov eax, ebx */
  EAX = (EBX);
L_101a3023:;
  /* 101a3023 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3025 jge 0x101a3036 */
  if ((C.sf==C.of)) goto L_101a3036;
  /* 101a3027 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3029 push ebp */
  push32((uint32_t)(EBP));
  /* 101a302a push edi */
  push32((uint32_t)(EDI));
  /* 101a302b call 0x101a2630 */
  push32(0x101a3030u); f_101a2630();
  /* 101a3030 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3033 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a3034 jmp 0x101a3017 */
  goto L_101a3017;
L_101a3036:;
  /* 101a3036 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 101a303a push ecx */
  push32((uint32_t)(ECX));
  /* 101a303b push edi */
  push32((uint32_t)(EDI));
  /* 101a303c push ebp */
  push32((uint32_t)(EBP));
  /* 101a303d call 0x101a2f80 */
  push32(0x101a3042u); f_101a2f80();
  /* 101a3042 push eax */
  push32((uint32_t)(EAX));
  /* 101a3043 push edi */
  push32((uint32_t)(EDI));
  /* 101a3044 push ebp */
  push32((uint32_t)(EBP));
  /* 101a3045 call 0x101a2630 */
  push32(0x101a304au); f_101a2630();
  /* 101a304a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a304d mov al, 1 */
  AL = (0x1u);
  /* 101a304f pop edi */
  EDI = (pop32());
  /* 101a3050 pop esi */
  ESI = (pop32());
  /* 101a3051 pop ebp */
  EBP = (pop32());
  /* 101a3052 pop ebx */
  EBX = (pop32());
  /* 101a3053 ret  */
  ESPCHK(0x101a2fb0u, _esp0);
  ESP += 4; return;
L_101a3054:;
  /* 101a3054 pop edi */
  EDI = (pop32());
  /* 101a3055 pop esi */
  ESI = (pop32());
  /* 101a3056 pop ebp */
  EBP = (pop32());
  /* 101a3057 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 101a3059 pop ebx */
  EBX = (pop32());
  /* 101a305a ret  */
  ESPCHK(0x101a2fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003060 @ 0x101a3060 (369 bytes, 82 insns) */
void f_101a3060(void) {
  FTRACE(0x101a3060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a3060 push ebx */
  push32((uint32_t)(EBX));
  /* 101a3061 push esi */
  push32((uint32_t)(ESI));
  /* 101a3062 call dword ptr [0x101b64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e0))), 0x101a3068u);
  /* 101a3068 push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a306d mov dword ptr [0x101b6294], eax */
  w32((uint32_t)(0x101b6294), (EAX));
  /* 101a3072 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3078u);
  /* 101a3078 mov ebx, 1 */
  EBX = (0x1u);
  /* 101a307d mov esi, eax */
  ESI = (EAX);
  /* 101a307f push ebx */
  push32((uint32_t)(EBX));
  /* 101a3080 call 0x101a2750 */
  push32(0x101a3085u); f_101a2750();
  /* 101a3085 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a3087 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a3089 call 0x101a2750 */
  push32(0x101a308eu); f_101a2750();
  /* 101a308e push 5 */
  push32((uint32_t)(0x5u));
  /* 101a3090 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a3092 call 0x101a2750 */
  push32(0x101a3097u); f_101a2750();
  /* 101a3097 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a3099 mov eax, dword ptr [0x101b6294] */
  EAX = (r32((uint32_t)(0x101b6294)));
  /* 101a309e push 3 */
  push32((uint32_t)(0x3u));
  /* 101a30a0 mov dword ptr [0x101b6190], esi */
  w32((uint32_t)(0x101b6190), (ESI));
  /* 101a30a6 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 101a30a9 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101a30ac lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101a30af lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 101a30b2 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101a30b5 mov ecx, dword ptr [eax + 0x101b3ad0] */
  ECX = (r32((uint32_t)(EAX + 0x101b3ad0)));
  /* 101a30bb lea edx, [eax + 0x101b3940] */
  EDX = ((uint32_t)(EAX + 0x101b3940));
  /* 101a30c1 mov dword ptr [0x101b61a0], edx */
  w32((uint32_t)(0x101b61a0), (EDX));
  /* 101a30c7 lea edx, [eax + 0x101b3ad4] */
  EDX = ((uint32_t)(EAX + 0x101b3ad4));
  /* 101a30cd mov dword ptr [0x101b65e4], ecx */
  w32((uint32_t)(0x101b65e4), (ECX));
  /* 101a30d3 mov ecx, dword ptr [eax + 0x101b3c64] */
  ECX = (r32((uint32_t)(EAX + 0x101b3c64)));
  /* 101a30d9 mov dword ptr [0x101b61a4], edx */
  w32((uint32_t)(0x101b61a4), (EDX));
  /* 101a30df lea edx, [eax + 0x101b3c68] */
  EDX = ((uint32_t)(EAX + 0x101b3c68));
  /* 101a30e5 mov dword ptr [0x101b65e8], ecx */
  w32((uint32_t)(0x101b65e8), (ECX));
  /* 101a30eb mov dword ptr [0x101b622c], edx */
  w32((uint32_t)(0x101b622c), (EDX));
  /* 101a30f1 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a30f7u);
  /* 101a30f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a30f9 mov dword ptr [0x101b6270], eax */
  w32((uint32_t)(0x101b6270), (EAX));
  /* 101a30fe call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3104u);
  /* 101a3104 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a3106 mov dword ptr [0x101b3600], eax */
  w32((uint32_t)(0x101b3600), (EAX));
  /* 101a310b call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3111u);
  /* 101a3111 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a3113 mov dword ptr [0x101b6360], eax */
  w32((uint32_t)(0x101b6360), (EAX));
  /* 101a3118 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a311eu);
  /* 101a311e push 5 */
  push32((uint32_t)(0x5u));
  /* 101a3120 mov dword ptr [0x101b3708], eax */
  w32((uint32_t)(0x101b3708), (EAX));
  /* 101a3125 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a312bu);
  /* 101a312b push ebx */
  push32((uint32_t)(EBX));
  /* 101a312c mov dword ptr [0x101b60c8], eax */
  w32((uint32_t)(0x101b60c8), (EAX));
  /* 101a3131 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3137u);
  /* 101a3137 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a313a mov dword ptr [0x101b6318], eax */
  w32((uint32_t)(0x101b6318), (EAX));
  /* 101a313f call 0x101a2690 */
  push32(0x101a3144u); f_101a2690();
  /* 101a3144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a3146 jne 0x101a3152 */
  if (!C.zf) goto L_101a3152;
  /* 101a3148 mov dword ptr [0x101af248], 4 */
  w32((uint32_t)(0x101af248), (0x4u));
L_101a3152:;
  /* 101a3152 push 0x101af114 */
  push32((uint32_t)(0x101af114u));
  /* 101a3157 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101a3159 call dword ptr [0x101b64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64ec))), 0x101a315fu);
  /* 101a315f push 0x101b6578 */
  push32((uint32_t)(0x101b6578u));
  /* 101a3164 call 0x101a2740 */
  push32(0x101a3169u); f_101a2740();
  /* 101a3169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101a316b push 0x101af244 */
  push32((uint32_t)(0x101af244u));
  /* 101a3170 call 0x101a2720 */
  push32(0x101a3175u); f_101a2720();
  /* 101a3175 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3178 mov byte ptr [0x101b6168], bl */
  w8((uint32_t)(0x101b6168), (BL));
  /* 101a317e mov byte ptr [0x101b616a], bl */
  w8((uint32_t)(0x101b616a), (BL));
  /* 101a3184 mov byte ptr [0x101b616c], bl */
  w8((uint32_t)(0x101b616c), (BL));
  /* 101a318a mov byte ptr [0x101b616d], bl */
  w8((uint32_t)(0x101b616d), (BL));
  /* 101a3190 mov byte ptr [0x101b6303], bl */
  w8((uint32_t)(0x101b6303), (BL));
  /* 101a3196 mov byte ptr [0x101b6301], bl */
  w8((uint32_t)(0x101b6301), (BL));
  /* 101a319c mov byte ptr [0x101b6304], bl */
  w8((uint32_t)(0x101b6304), (BL));
  /* 101a31a2 mov byte ptr [0x101b6305], bl */
  w8((uint32_t)(0x101b6305), (BL));
  /* 101a31a8 pop esi */
  ESI = (pop32());
  /* 101a31a9 mov byte ptr [0x101b616b], 0 */
  w8((uint32_t)(0x101b616b), (0x0u));
  /* 101a31b0 mov byte ptr [0x101b6169], 0 */
  w8((uint32_t)(0x101b6169), (0x0u));
  /* 101a31b7 mov byte ptr [0x101b6300], 0 */
  w8((uint32_t)(0x101b6300), (0x0u));
  /* 101a31be mov byte ptr [0x101b6302], 0 */
  w8((uint32_t)(0x101b6302), (0x0u));
  /* 101a31c5 mov dword ptr [0x101b662c], 0 */
  w32((uint32_t)(0x101b662c), (0x0u));
  /* 101a31cf pop ebx */
  EBX = (pop32());
  /* 101a31d0 ret  */
  ESPCHK(0x101a3060u, _esp0);
  ESP += 4; return;
}

/* FUN_100031e0 @ 0x101a31e0 (85 bytes, 29 insns) */
void f_101a31e0(void) {
  FTRACE(0x101a31e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a31e0 mov eax, dword ptr [0x101b5f38] */
  EAX = (r32((uint32_t)(0x101b5f38)));
  /* 101a31e5 push esi */
  push32((uint32_t)(ESI));
  /* 101a31e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a31e9 jg 0x101a3233 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a3233;
  /* 101a31eb push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a31f0 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a31f6u);
  /* 101a31f6 mov ecx, eax */
  ECX = (EAX);
  /* 101a31f8 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 101a31fd imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a31ff sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 101a3202 mov eax, edx */
  EAX = (EDX);
  /* 101a3204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3207 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101a320a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a320c mov esi, edx */
  ESI = (EDX);
  /* 101a320e je 0x101a3233 */
  if (C.zf) goto L_101a3233;
  /* 101a3210 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3212 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3214 push esi */
  push32((uint32_t)(ESI));
  /* 101a3215 push 0x101b36e0 */
  push32((uint32_t)(0x101b36e0u));
  /* 101a321a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3220u);
  /* 101a3220 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3222 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a3224 push esi */
  push32((uint32_t)(ESI));
  /* 101a3225 push 0x101b3620 */
  push32((uint32_t)(0x101b3620u));
  /* 101a322a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3230u);
  /* 101a3230 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3233:;
  /* 101a3233 pop esi */
  ESI = (pop32());
  /* 101a3234 ret  */
  ESPCHK(0x101a31e0u, _esp0);
  ESP += 4; return;
}

/* ProcessLandAI @ 0x101a3240 (1 bytes, 1 insns) */
void f_101a3240(void) {
  FTRACE(0x101a3240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a3240 ret  */
  ESPCHK(0x101a3240u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x101a3250 (157 bytes, 43 insns) */
void f_101a3250(void) {
  FTRACE(0x101a3250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a3250 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3252 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a3254 push 0x101b6330 */
  push32((uint32_t)(0x101b6330u));
  /* 101a3259 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a325fu);
  /* 101a325f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3261 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a3263 push 0x101b6338 */
  push32((uint32_t)(0x101b6338u));
  /* 101a3268 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a326eu);
  /* 101a326e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3270 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a3272 push 0x101b6320 */
  push32((uint32_t)(0x101b6320u));
  /* 101a3277 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a327du);
  /* 101a327d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a327f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a3281 push 0x101b6328 */
  push32((uint32_t)(0x101b6328u));
  /* 101a3286 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a328cu);
  /* 101a328c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a328e push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3290 push 0x101b6340 */
  push32((uint32_t)(0x101b6340u));
  /* 101a3295 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a329bu);
  /* 101a329b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a329d push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a329f push 0x101b6278 */
  push32((uint32_t)(0x101b6278u));
  /* 101a32a4 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a32aau);
  /* 101a32aa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a32ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a32af push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a32b1 push 0x101b6260 */
  push32((uint32_t)(0x101b6260u));
  /* 101a32b6 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a32bcu);
  /* 101a32bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a32be push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a32c0 push 0x101b6268 */
  push32((uint32_t)(0x101b6268u));
  /* 101a32c5 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a32cbu);
  /* 101a32cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a32cd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a32cf push 0x101b6280 */
  push32((uint32_t)(0x101b6280u));
  /* 101a32d4 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a32dau);
  /* 101a32da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a32dc push 0xa */
  push32((uint32_t)(0xau));
  /* 101a32de push 0x101b6288 */
  push32((uint32_t)(0x101b6288u));
  /* 101a32e3 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a32e9u);
  /* 101a32e9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a32ec ret  */
  ESPCHK(0x101a3250u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x101a32f0 (79 bytes, 22 insns) */
void f_101a32f0(void) {
  FTRACE(0x101a32f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a32f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a32f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a32f4 push 0x101b38f0 */
  push32((uint32_t)(0x101b38f0u));
  /* 101a32f9 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a32ffu);
  /* 101a32ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3301 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3303 push 0x101b38f8 */
  push32((uint32_t)(0x101b38f8u));
  /* 101a3308 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a330eu);
  /* 101a330e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3310 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3312 push 0x101b38e8 */
  push32((uint32_t)(0x101b38e8u));
  /* 101a3317 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a331du);
  /* 101a331d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a331f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3321 push 0x101b5f58 */
  push32((uint32_t)(0x101b5f58u));
  /* 101a3326 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a332cu);
  /* 101a332c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a332e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3330 push 0x101b5f48 */
  push32((uint32_t)(0x101b5f48u));
  /* 101a3335 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a333bu);
  /* 101a333b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a333e ret  */
  ESPCHK(0x101a32f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003340 @ 0x101a3340 (64 bytes, 18 insns) */
void f_101a3340(void) {
  FTRACE(0x101a3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a3340 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3342 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3344 push 0x101b6078 */
  push32((uint32_t)(0x101b6078u));
  /* 101a3349 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a334fu);
  /* 101a334f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3351 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3353 push 0x101b6080 */
  push32((uint32_t)(0x101b6080u));
  /* 101a3358 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a335eu);
  /* 101a335e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3360 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3362 push 0x101b6088 */
  push32((uint32_t)(0x101b6088u));
  /* 101a3367 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a336du);
  /* 101a336d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a336f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3371 push 0x101b6090 */
  push32((uint32_t)(0x101b6090u));
  /* 101a3376 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a337cu);
  /* 101a337c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a337f ret  */
  ESPCHK(0x101a3340u, _esp0);
  ESP += 4; return;
}

/* FUN_10003380 @ 0x101a3380 (3787 bytes, 1079 insns) */
void f_101a3380(void) {
  FTRACE(0x101a3380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a3380 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a3383 push ebx */
  push32((uint32_t)(EBX));
  /* 101a3384 push ebp */
  push32((uint32_t)(EBP));
  /* 101a3385 push esi */
  push32((uint32_t)(ESI));
  /* 101a3386 push edi */
  push32((uint32_t)(EDI));
  /* 101a3387 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 101a338c push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 101a3391 call dword ptr [0x101b64f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f8))), 0x101a3397u);
  /* 101a3397 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a3399 call 0x101a2780 */
  push32(0x101a339eu); f_101a2780();
  /* 101a339e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101a33a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a33a2 call 0x101a2660 */
  push32(0x101a33a7u); f_101a2660();
  /* 101a33a7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101a33a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a33ab mov dword ptr [esp + 0x40], eax */
  w32((uint32_t)(ESP + 0x40), (EAX));
  /* 101a33af call 0x101a2660 */
  push32(0x101a33b4u); f_101a2660();
  /* 101a33b4 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101a33b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a33b8 mov edi, eax */
  EDI = (EAX);
  /* 101a33ba call 0x101a2660 */
  push32(0x101a33bfu); f_101a2660();
  /* 101a33bf push 0xe */
  push32((uint32_t)(0xeu));
  /* 101a33c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a33c3 mov esi, eax */
  ESI = (EAX);
  /* 101a33c5 call 0x101a2660 */
  push32(0x101a33cau); f_101a2660();
  /* 101a33ca push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a33cf mov ebx, eax */
  EBX = (EAX);
  /* 101a33d1 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a33d7u);
  /* 101a33d7 sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101a33da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a33df add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a33e1 mov dword ptr [esp + 0x50], eax */
  w32((uint32_t)(ESP + 0x50), (EAX));
  /* 101a33e5 push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a33ea lea eax, [esi + ebx*4] */
  EAX = ((uint32_t)(ESI + EBX*4));
  /* 101a33ed mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101a33f1 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a33f7u);
  /* 101a33f7 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a33fc mov ebx, eax */
  EBX = (EAX);
  /* 101a33fe call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3404u);
  /* 101a3404 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a3409 mov ebp, eax */
  EBP = (EAX);
  /* 101a340b call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a3411u);
  /* 101a3411 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a3416 mov dword ptr [esp + 0x5c], eax */
  w32((uint32_t)(ESP + 0x5c), (EAX));
  /* 101a341a call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3420u);
  /* 101a3420 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3423 mov edi, eax */
  EDI = (EAX);
  /* 101a3425 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a342a call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a3430u);
  /* 101a3430 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a3435 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 101a3439 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a343fu);
  /* 101a343f push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a3444 mov esi, eax */
  ESI = (EAX);
  /* 101a3446 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a344cu);
  /* 101a344c push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a3451 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 101a3455 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a345bu);
  /* 101a345b mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 101a345f mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 101a3463 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a3465 mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 101a3469 sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a346b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a346d sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a346f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3471 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a3473 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a3475 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3477 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a347c add esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a347e mov dword ptr [esp + 0x38], esi */
  w32((uint32_t)(ESP + 0x38), (ESI));
  /* 101a3482 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3488u);
  /* 101a3488 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a348a mov bl, 1 */
  BL = (0x1u);
  /* 101a348c call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3492u);
  /* 101a3492 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3495 cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a349a jle 0x101a34ca */
  if ((C.zf||C.sf!=C.of)) goto L_101a34ca;
  /* 101a349c push 1 */
  push32((uint32_t)(0x1u));
  /* 101a349e call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a34a4u);
  /* 101a34a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a34a7 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a34ac jle 0x101a34ca */
  if ((C.zf||C.sf!=C.of)) goto L_101a34ca;
  /* 101a34ae push 4 */
  push32((uint32_t)(0x4u));
  /* 101a34b0 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a34b6u);
  /* 101a34b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a34b9 cmp eax, 0x1b58 */
  { uint32_t _a=(EAX),_b=(0x1b58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a34be jle 0x101a34ca */
  if ((C.zf||C.sf!=C.of)) goto L_101a34ca;
  /* 101a34c0 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 101a34c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a34c6 jne 0x101a34ca */
  if (!C.zf) goto L_101a34ca;
  /* 101a34c8 xor bl, bl */
  { uint32_t _r=(BL)^(BL); BL = (_r); fl_logic(_r,8); }
L_101a34ca:;
  /* 101a34ca push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a34cf call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a34d5u);
  /* 101a34d5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a34d7 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101a34db call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a34e1u);
  /* 101a34e1 push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a34e6 mov esi, eax */
  ESI = (EAX);
  /* 101a34e8 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a34eeu);
  /* 101a34ee push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a34f3 mov byte ptr [esp + 0x22], al */
  w8((uint32_t)(ESP + 0x22), (AL));
  /* 101a34f7 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a34fdu);
  /* 101a34fd push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a3502 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3508u);
  /* 101a3508 push 0x101b6390 */
  push32((uint32_t)(0x101b6390u));
  /* 101a350d mov dword ptr [esp + 0x2c], eax */
  w32((uint32_t)(ESP + 0x2c), (EAX));
  /* 101a3511 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3517u);
  /* 101a3517 push 0x101b6310 */
  push32((uint32_t)(0x101b6310u));
  /* 101a351c mov edi, eax */
  EDI = (EAX);
  /* 101a351e call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3524u);
  /* 101a3524 push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a3529 mov ebp, eax */
  EBP = (EAX);
  /* 101a352b call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3531u);
  /* 101a3531 add eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3533 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a3535 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3537 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a3539 push 0x101b60f0 */
  push32((uint32_t)(0x101b60f0u));
  /* 101a353e mov dword ptr [esp + 0x44], eax */
  w32((uint32_t)(ESP + 0x44), (EAX));
  /* 101a3542 mov byte ptr [esp + 0x3f], 1 */
  w8((uint32_t)(ESP + 0x3f), (0x1u));
  /* 101a3547 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a354du);
  /* 101a354d push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a354f push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101a3551 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a3556 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a355cu);
  /* 101a355c push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a3561 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a3567u);
  /* 101a3567 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a356c mov edi, eax */
  EDI = (EAX);
  /* 101a356e call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3574u);
  /* 101a3574 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3577 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a3579 je 0x101a3580 */
  if (C.zf) goto L_101a3580;
  /* 101a357b mov byte ptr [esp + 0x13], 0 */
  w8((uint32_t)(ESP + 0x13), (0x0u));
L_101a3580:;
  /* 101a3580 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 101a3584 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 101a3586 je 0x101a3f4d */
  if (C.zf) goto L_101a3f4d;
  /* 101a358c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a358e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3590 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3592 push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a3597 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a359du);
  /* 101a359d push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a35a2 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a35a8u);
  /* 101a35a8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a35ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a35ad je 0x101a4243 */
  if (C.zf) goto L_101a4243;
  /* 101a35b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a35b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a35b7 push 0x101b6358 */
  push32((uint32_t)(0x101b6358u));
  /* 101a35bc call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a35c2u);
  /* 101a35c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a35c5 call dword ptr [0x101b6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6550))), 0x101a35cbu);
  /* 101a35cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a35cd jne 0x101a3610 */
  if (!C.zf) goto L_101a3610;
  /* 101a35cf cmp esi, 0x2bc */
  { uint32_t _a=(ESI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a35d5 jle 0x101a35fc */
  if ((C.zf||C.sf!=C.of)) goto L_101a35fc;
  /* 101a35d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a35d9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a35db push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a35dd push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a35e2 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a35e8u);
  /* 101a35e8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a35ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a35ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a35ee push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a35f3 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a35f9u);
  /* 101a35f9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a35fc:;
  /* 101a35fc push 1 */
  push32((uint32_t)(0x1u));
  /* 101a35fe push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3600 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a3602 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a3608u);
  /* 101a3608 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a360b jmp 0x101a371e */
  goto L_101a371e;
L_101a3610:;
  /* 101a3610 push 0x101b3780 */
  push32((uint32_t)(0x101b3780u));
  /* 101a3615 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a361bu);
  /* 101a361b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a361e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3620 je 0x101a364a */
  if (C.zf) goto L_101a364a;
  /* 101a3622 cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3628 jle 0x101a3632 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3632;
  /* 101a362a push 6 */
  push32((uint32_t)(0x6u));
  /* 101a362c push 8 */
  push32((uint32_t)(0x8u));
  /* 101a362e push 9 */
  push32((uint32_t)(0x9u));
  /* 101a3630 jmp 0x101a3670 */
  goto L_101a3670;
L_101a3632:;
  /* 101a3632 cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3638 jle 0x101a3642 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3642;
  /* 101a363a push 3 */
  push32((uint32_t)(0x3u));
  /* 101a363c push 5 */
  push32((uint32_t)(0x5u));
  /* 101a363e push 9 */
  push32((uint32_t)(0x9u));
  /* 101a3640 jmp 0x101a3670 */
  goto L_101a3670;
L_101a3642:;
  /* 101a3642 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3644 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a3646 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a3648 jmp 0x101a3670 */
  goto L_101a3670;
L_101a364a:;
  /* 101a364a cmp esi, 0x2ee0 */
  { uint32_t _a=(ESI),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3650 jle 0x101a365a */
  if ((C.zf||C.sf!=C.of)) goto L_101a365a;
  /* 101a3652 push 8 */
  push32((uint32_t)(0x8u));
  /* 101a3654 push 8 */
  push32((uint32_t)(0x8u));
  /* 101a3656 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a3658 jmp 0x101a3670 */
  goto L_101a3670;
L_101a365a:;
  /* 101a365a cmp esi, 0x1770 */
  { uint32_t _a=(ESI),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3660 jle 0x101a366a */
  if ((C.zf||C.sf!=C.of)) goto L_101a366a;
  /* 101a3662 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a3664 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a3666 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a3668 jmp 0x101a3670 */
  goto L_101a3670;
L_101a366a:;
  /* 101a366a push 4 */
  push32((uint32_t)(0x4u));
  /* 101a366c push 4 */
  push32((uint32_t)(0x4u));
  /* 101a366e push 0xa */
  push32((uint32_t)(0xau));
L_101a3670:;
  /* 101a3670 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a3676u);
  /* 101a3676 mov al, byte ptr [esp + 0x1e] */
  AL = (r8((uint32_t)(ESP + 0x1e)));
  /* 101a367a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a367d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a367f mov edi, 0x15e */
  EDI = (0x15eu);
  /* 101a3684 je 0x101a368b */
  if (C.zf) goto L_101a368b;
  /* 101a3686 mov edi, 0x12c */
  EDI = (0x12cu);
L_101a368b:;
  /* 101a368b cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a368e jge 0x101a36ac */
  if ((C.sf==C.of)) goto L_101a36ac;
  /* 101a3690 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3696 jle 0x101a36ac */
  if ((C.zf||C.sf!=C.of)) goto L_101a36ac;
  /* 101a3698 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a369a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a369c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a369e push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a36a3 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a36a9u);
  /* 101a36a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a36ac:;
  /* 101a36ac cmp esi, 0xc8 */
  { uint32_t _a=(ESI),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a36b2 jle 0x101a36ed */
  if ((C.zf||C.sf!=C.of)) goto L_101a36ed;
  /* 101a36b4 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101a36b6 je 0x101a36d2 */
  if (C.zf) goto L_101a36d2;
  /* 101a36b8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a36ba push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101a36bf push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a36c4 push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a36c9 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a36cfu);
  /* 101a36cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a36d2:;
  /* 101a36d2 cmp esi, 0x12c */
  { uint32_t _a=(ESI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a36d8 jle 0x101a36ed */
  if ((C.zf||C.sf!=C.of)) goto L_101a36ed;
  /* 101a36da push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a36dc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a36de push edi */
  push32((uint32_t)(EDI));
  /* 101a36df push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a36e4 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a36eau);
  /* 101a36ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a36ed:;
  /* 101a36ed push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a36f2 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a36f8u);
  /* 101a36f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a36fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a36fd je 0x101a371e */
  if (C.zf) goto L_101a371e;
  /* 101a36ff cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3705 jle 0x101a371e */
  if ((C.zf||C.sf!=C.of)) goto L_101a371e;
  /* 101a3707 push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a370c call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3712u);
  /* 101a3712 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a3717 jle 0x101a371e */
  if ((C.zf||C.sf!=C.of)) goto L_101a371e;
  /* 101a3719 call 0x101a3250 */
  push32(0x101a371eu); f_101a3250();
L_101a371e:;
  /* 101a371e mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 101a3722 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3724 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3727 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a3729 jge 0x101a372f */
  if ((C.sf==C.of)) goto L_101a372f;
  /* 101a372b push 5 */
  push32((uint32_t)(0x5u));
  /* 101a372d jmp 0x101a3733 */
  goto L_101a3733;
L_101a372f:;
  /* 101a372f add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3732 push eax */
  push32((uint32_t)(EAX));
L_101a3733:;
  /* 101a3733 push 0x101b5f70 */
  push32((uint32_t)(0x101b5f70u));
  /* 101a3738 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a373eu);
  /* 101a373e mov edi, dword ptr [esp + 0x38] */
  EDI = (r32((uint32_t)(ESP + 0x38)));
  /* 101a3742 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3745 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3748 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a374a jge 0x101a3760 */
  if ((C.sf==C.of)) goto L_101a3760;
  /* 101a374c push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a374e push 0xc */
  push32((uint32_t)(0xcu));
  /* 101a3750 push 0x101b38c8 */
  push32((uint32_t)(0x101b38c8u));
  /* 101a3755 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a375bu);
  /* 101a375b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a375e jmp 0x101a379a */
  goto L_101a379a;
L_101a3760:;
  /* 101a3760 lea ecx, [edi + 6] */
  ECX = ((uint32_t)(EDI + 0x6));
  /* 101a3763 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3765 push ecx */
  push32((uint32_t)(ECX));
  /* 101a3766 push 0x101b38c8 */
  push32((uint32_t)(0x101b38c8u));
  /* 101a376b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3771u);
  /* 101a3771 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3773 lea edx, [edi + 9] */
  EDX = ((uint32_t)(EDI + 0x9));
  /* 101a3776 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101a3778 push edx */
  push32((uint32_t)(EDX));
  /* 101a3779 push 0x101b38c8 */
  push32((uint32_t)(0x101b38c8u));
  /* 101a377e call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3784u);
  /* 101a3784 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3786 add edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3789 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a378b push edi */
  push32((uint32_t)(EDI));
  /* 101a378c push 0x101b38c8 */
  push32((uint32_t)(0x101b38c8u));
  /* 101a3791 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3797u);
  /* 101a3797 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a379a:;
  /* 101a379a push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101a379c push 0 */
  push32((uint32_t)(0x0u));
  /* 101a379e call 0x101a2660 */
  push32(0x101a37a3u); f_101a2660();
  /* 101a37a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a37a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a37a8 je 0x101a3807 */
  if (C.zf) goto L_101a3807;
  /* 101a37aa push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37ac push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37ae push 0x101b62c8 */
  push32((uint32_t)(0x101b62c8u));
  /* 101a37b3 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a37b9u);
  /* 101a37b9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37bb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37bd push 0x101b62b0 */
  push32((uint32_t)(0x101b62b0u));
  /* 101a37c2 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a37c8u);
  /* 101a37c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37ca push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37cc push 0x101b62c0 */
  push32((uint32_t)(0x101b62c0u));
  /* 101a37d1 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a37d7u);
  /* 101a37d7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37d9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37db push 0x101b62a0 */
  push32((uint32_t)(0x101b62a0u));
  /* 101a37e0 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a37e6u);
  /* 101a37e6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37e8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37ea push 0x101b62a8 */
  push32((uint32_t)(0x101b62a8u));
  /* 101a37ef call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a37f5u);
  /* 101a37f5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37f7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a37f9 push 0x101b6298 */
  push32((uint32_t)(0x101b6298u));
  /* 101a37fe call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3804u);
  /* 101a3804 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3807:;
  /* 101a3807 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3809 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a380b push 3 */
  push32((uint32_t)(0x3u));
  /* 101a380d push 0x101b3880 */
  push32((uint32_t)(0x101b3880u));
  /* 101a3812 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3818u);
  /* 101a3818 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a381a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a381c push 1 */
  push32((uint32_t)(0x1u));
  /* 101a381e push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a3823 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3829u);
  /* 101a3829 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a382b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a382d push 2 */
  push32((uint32_t)(0x2u));
  /* 101a382f push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a3834 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a383au);
  /* 101a383a mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 101a383e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3841 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a3843 jne 0x101a3859 */
  if (!C.zf) goto L_101a3859;
  /* 101a3845 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a3847 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a3849 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a384b push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a3850 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3856u);
  /* 101a3856 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3859:;
  /* 101a3859 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a385b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a385d push 1 */
  push32((uint32_t)(0x1u));
  /* 101a385f push 0x101b61c8 */
  push32((uint32_t)(0x101b61c8u));
  /* 101a3864 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a386au);
  /* 101a386a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a386c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a386e push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3870 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a3875 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a387bu);
  /* 101a387b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a387d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a387f push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3881 push 0x101b5fb0 */
  push32((uint32_t)(0x101b5fb0u));
  /* 101a3886 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a388cu);
  /* 101a388c push 5 */
  push32((uint32_t)(0x5u));
  /* 101a388e push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3890 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a3892 push 0x101b61c8 */
  push32((uint32_t)(0x101b61c8u));
  /* 101a3897 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a389du);
  /* 101a389d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a38a0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a38a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a38a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a38a6 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a38ab call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a38b1u);
  /* 101a38b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a38b3 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a38b5 push 0x101b3640 */
  push32((uint32_t)(0x101b3640u));
  /* 101a38ba call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a38c0u);
  /* 101a38c0 push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a38c5 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a38cbu);
  /* 101a38cb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a38ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a38d0 jle 0x101a38f7 */
  if ((C.zf||C.sf!=C.of)) goto L_101a38f7;
  /* 101a38d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101a38d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a38d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a38d8 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a38dd call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a38e3u);
  /* 101a38e3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a38e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a38e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a38e9 push 0x101b60d8 */
  push32((uint32_t)(0x101b60d8u));
  /* 101a38ee call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a38f4u);
  /* 101a38f4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a38f7:;
  /* 101a38f7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a38f9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a38fb push 1 */
  push32((uint32_t)(0x1u));
  /* 101a38fd push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a3902 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3908u);
  /* 101a3908 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a390b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a390d jne 0x101a3923 */
  if (!C.zf) goto L_101a3923;
  /* 101a390f push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3911 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a3913 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3915 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a391a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3920u);
  /* 101a3920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3923:;
  /* 101a3923 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3925 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3927 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3929 push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a392e call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3934u);
  /* 101a3934 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3937 cmp ebp, 0x19 */
  { uint32_t _a=(EBP),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a393a jle 0x101a3950 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3950;
  /* 101a393c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a393e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3940 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a3942 push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a3947 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a394du);
  /* 101a394d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3950:;
  /* 101a3950 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a3952 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3954 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3956 push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a395b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3961u);
  /* 101a3961 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a3963 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3965 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a3967 push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a396c call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3972u);
  /* 101a3972 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a3974 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3976 push 0x101b6058 */
  push32((uint32_t)(0x101b6058u));
  /* 101a397b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3981u);
  /* 101a3981 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a3983 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3985 push 0x101b6010 */
  push32((uint32_t)(0x101b6010u));
  /* 101a398a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3990u);
  /* 101a3990 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a3992 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3994 push 0x101b6018 */
  push32((uint32_t)(0x101b6018u));
  /* 101a3999 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a399fu);
  /* 101a399f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a39a2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a39a4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a39a6 push 0x101b6020 */
  push32((uint32_t)(0x101b6020u));
  /* 101a39ab call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a39b1u);
  /* 101a39b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a39b3 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a39b5 push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a39ba call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a39c0u);
  /* 101a39c0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a39c2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a39c4 push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a39c9 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a39cfu);
  /* 101a39cf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a39d1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a39d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a39d5 push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a39da call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a39e0u);
  /* 101a39e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a39e2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a39e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a39e6 push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a39eb call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a39f1u);
  /* 101a39f1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a39f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a39f6 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a39f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a39fa push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a39ff call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3a05u);
  /* 101a3a05 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a3a07 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a3a09 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a3a0b push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a3a10 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3a16u);
  /* 101a3a16 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3a18 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a3a1a push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a3a1f call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3a25u);
  /* 101a3a25 call 0x101a2650 */
  push32(0x101a3a2au); f_101a2650();
  /* 101a3a2a push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a3a2f mov edi, eax */
  EDI = (EAX);
  /* 101a3a31 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3a37u);
  /* 101a3a37 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3a3a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3a3c je 0x101a3a5f */
  if (C.zf) goto L_101a3a5f;
  /* 101a3a3e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3a40 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3a42 push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a3a47 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3a4du);
  /* 101a3a4d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3a4f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a3a51 push 0x101b3850 */
  push32((uint32_t)(0x101b3850u));
  /* 101a3a56 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3a5cu);
  /* 101a3a5c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3a5f:;
  /* 101a3a5f push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a3a64 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3a6au);
  /* 101a3a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3a6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3a6f je 0x101a3a97 */
  if (C.zf) goto L_101a3a97;
  /* 101a3a71 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3a73 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3a75 push 0x101b3920 */
  push32((uint32_t)(0x101b3920u));
  /* 101a3a7a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3a80u);
  /* 101a3a80 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3a82 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a3a84 push 0x101b3860 */
  push32((uint32_t)(0x101b3860u));
  /* 101a3a89 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3a8fu);
  /* 101a3a8f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3a92 call 0x101a3340 */
  push32(0x101a3a97u); f_101a3340();
L_101a3a97:;
  /* 101a3a97 push 0x101b6090 */
  push32((uint32_t)(0x101b6090u));
  /* 101a3a9c call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a3aa2u);
  /* 101a3aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3aa5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3aa7 je 0x101a3ace */
  if (C.zf) goto L_101a3ace;
  /* 101a3aa9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3aab push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3aad push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3aaf push 0x101b3648 */
  push32((uint32_t)(0x101b3648u));
  /* 101a3ab4 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3abau);
  /* 101a3aba push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3abc push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3abe push 0xf */
  push32((uint32_t)(0xfu));
  /* 101a3ac0 push 0x101b3648 */
  push32((uint32_t)(0x101b3648u));
  /* 101a3ac5 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3acbu);
  /* 101a3acb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3ace:;
  /* 101a3ace push 0 */
  push32((uint32_t)(0x0u));
  /* 101a3ad0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3ad2 call 0x101a2610 */
  push32(0x101a3ad7u); f_101a2610();
  /* 101a3ad7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a3ad9 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3adfu);
  /* 101a3adf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3ae2 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3ae7 jle 0x101a3b2b */
  if ((C.zf||C.sf!=C.of)) goto L_101a3b2b;
  /* 101a3ae9 push 0x101b3780 */
  push32((uint32_t)(0x101b3780u));
  /* 101a3aee call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3af4u);
  /* 101a3af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3af7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3af9 je 0x101a3b2b */
  if (C.zf) goto L_101a3b2b;
  /* 101a3afb push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3afd call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3b03u);
  /* 101a3b03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3b06 cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3b0b jge 0x101a3b2b */
  if ((C.sf==C.of)) goto L_101a3b2b;
  /* 101a3b0d push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a3b12 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3b18u);
  /* 101a3b18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3b1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3b1d jne 0x101a3b2b */
  if (!C.zf) goto L_101a3b2b;
  /* 101a3b1f push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3b21 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3b23 call 0x101a2610 */
  push32(0x101a3b28u); f_101a2610();
  /* 101a3b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3b2b:;
  /* 101a3b2b push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a3b30 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3b36u);
  /* 101a3b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3b39 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3b3b je 0x101a3cbc */
  if (C.zf) goto L_101a3cbc;
  /* 101a3b41 push 0x101b60d0 */
  push32((uint32_t)(0x101b60d0u));
  /* 101a3b46 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3b4cu);
  /* 101a3b4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3b4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3b51 je 0x101a3cbc */
  if (C.zf) goto L_101a3cbc;
  /* 101a3b57 push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a3b5c call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a3b62u);
  /* 101a3b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3b65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3b67 je 0x101a3cbc */
  if (C.zf) goto L_101a3cbc;
  /* 101a3b6d cmp edi, 0xa */
  { uint32_t _a=(EDI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3b70 je 0x101a3b77 */
  if (C.zf) goto L_101a3b77;
  /* 101a3b72 cmp edi, 0x12 */
  { uint32_t _a=(EDI),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3b75 jne 0x101a3ba7 */
  if (!C.zf) goto L_101a3ba7;
L_101a3b77:;
  /* 101a3b77 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3b79 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3b7fu);
  /* 101a3b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3b82 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3b87 jle 0x101a3ba7 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3ba7;
  /* 101a3b89 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3b8b call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3b91u);
  /* 101a3b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3b94 cmp eax, 0x2008 */
  { uint32_t _a=(EAX),_b=(0x2008u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3b99 jge 0x101a3ba7 */
  if ((C.sf==C.of)) goto L_101a3ba7;
  /* 101a3b9b push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3b9d push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3b9f call 0x101a2610 */
  push32(0x101a3ba4u); f_101a2610();
  /* 101a3ba4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3ba7:;
  /* 101a3ba7 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a3bac call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3bb2u);
  /* 101a3bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3bb5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3bb7 jne 0x101a3be9 */
  if (!C.zf) goto L_101a3be9;
  /* 101a3bb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3bbb call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3bc1u);
  /* 101a3bc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3bc4 cmp eax, 0xea60 */
  { uint32_t _a=(EAX),_b=(0xea60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3bc9 jle 0x101a3be9 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3be9;
  /* 101a3bcb push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3bcd call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3bd3u);
  /* 101a3bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3bd6 cmp eax, 0x2af8 */
  { uint32_t _a=(EAX),_b=(0x2af8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3bdb jge 0x101a3be9 */
  if ((C.sf==C.of)) goto L_101a3be9;
  /* 101a3bdd push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3bdf push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3be1 call 0x101a2610 */
  push32(0x101a3be6u); f_101a2610();
  /* 101a3be6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3be9:;
  /* 101a3be9 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a3bee call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a3bf4u);
  /* 101a3bf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3bf7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3bf9 je 0x101a3cbc */
  if (C.zf) goto L_101a3cbc;
  /* 101a3bff cmp edi, 0x1c */
  { uint32_t _a=(EDI),_b=(0x1cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c02 jne 0x101a3c42 */
  if (!C.zf) goto L_101a3c42;
  /* 101a3c04 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3c06 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3c0cu);
  /* 101a3c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3c0f cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c14 jle 0x101a3d17 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3d17;
  /* 101a3c1a push 4 */
  push32((uint32_t)(0x4u));
  /* 101a3c1c call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3c22u);
  /* 101a3c22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3c25 cmp eax, 0x1c84 */
  { uint32_t _a=(EAX),_b=(0x1c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c2a jle 0x101a3d17 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3d17;
  /* 101a3c30 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3c32 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3c38u);
  /* 101a3c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3c3b cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c40 jmp 0x101a3cac */
  goto L_101a3cac;
L_101a3c42:;
  /* 101a3c42 cmp edi, 0x28 */
  { uint32_t _a=(EDI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c45 jne 0x101a3c85 */
  if (!C.zf) goto L_101a3c85;
  /* 101a3c47 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3c49 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3c4fu);
  /* 101a3c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3c52 cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c57 jle 0x101a3d17 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3d17;
  /* 101a3c5d push 4 */
  push32((uint32_t)(0x4u));
  /* 101a3c5f call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3c65u);
  /* 101a3c65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3c68 cmp eax, 0x2648 */
  { uint32_t _a=(EAX),_b=(0x2648u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c6d jle 0x101a3d17 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3d17;
  /* 101a3c73 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3c75 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3c7bu);
  /* 101a3c7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3c7e cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c83 jmp 0x101a3cac */
  goto L_101a3cac;
L_101a3c85:;
  /* 101a3c85 cmp edi, 0x37 */
  { uint32_t _a=(EDI),_b=(0x37u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c88 jne 0x101a3cbc */
  if (!C.zf) goto L_101a3cbc;
  /* 101a3c8a push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3c8c call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3c92u);
  /* 101a3c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3c95 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3c9a jle 0x101a3d17 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3d17;
  /* 101a3c9c push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3c9e call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a3ca4u);
  /* 101a3ca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3ca7 cmp eax, 0x6590 */
  { uint32_t _a=(EAX),_b=(0x6590u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_101a3cac:;
  /* 101a3cac jge 0x101a3d17 */
  if ((C.sf==C.of)) goto L_101a3d17;
  /* 101a3cae push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3cb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3cb2 call 0x101a2610 */
  push32(0x101a3cb7u); f_101a2610();
  /* 101a3cb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3cba jmp 0x101a3d17 */
  goto L_101a3d17;
L_101a3cbc:;
  /* 101a3cbc cmp edi, 0x5f */
  { uint32_t _a=(EDI),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3cbf jne 0x101a3d17 */
  if (!C.zf) goto L_101a3d17;
  /* 101a3cc1 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3cc3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a3cc5 push 0x101b3748 */
  push32((uint32_t)(0x101b3748u));
  /* 101a3cca call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3cd0u);
  /* 101a3cd0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3cd2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3cd6 push 0x101b6378 */
  push32((uint32_t)(0x101b6378u));
  /* 101a3cdb call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3ce1u);
  /* 101a3ce1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3ce3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3ce5 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a3ce7 push 0x101b6378 */
  push32((uint32_t)(0x101b6378u));
  /* 101a3cec call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3cf2u);
  /* 101a3cf2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3cf4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a3cf6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3cf8 push 0x101b6378 */
  push32((uint32_t)(0x101b6378u));
  /* 101a3cfd call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3d03u);
  /* 101a3d03 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3d05 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3d07 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a3d09 push 0x101b6378 */
  push32((uint32_t)(0x101b6378u));
  /* 101a3d0e call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3d14u);
  /* 101a3d14 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3d17:;
  /* 101a3d17 cmp ebp, 0x50 */
  { uint32_t _a=(EBP),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3d1a jle 0x101a3d73 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3d73;
  /* 101a3d1c mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 101a3d20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3d22 je 0x101a3d73 */
  if (C.zf) goto L_101a3d73;
  /* 101a3d24 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3d26 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a3d28 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3d2a push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a3d2f call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3d35u);
  /* 101a3d35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3d38 cmp ebp, 0x5f */
  { uint32_t _a=(EBP),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3d3b jle 0x101a3d73 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3d73;
  /* 101a3d3d push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3d3f push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a3d41 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a3d43 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a3d48 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3d4eu);
  /* 101a3d4e push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3d50 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a3d52 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3d54 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a3d59 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3d5fu);
  /* 101a3d5f push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3d61 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3d63 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a3d65 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a3d6a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3d70u);
  /* 101a3d70 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3d73:;
  /* 101a3d73 mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
  /* 101a3d77 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101a3d79 je 0x101a3db7 */
  if (C.zf) goto L_101a3db7;
  /* 101a3d7b push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a3d80 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a3d86u);
  /* 101a3d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3d89 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3d8b je 0x101a3db7 */
  if (C.zf) goto L_101a3db7;
  /* 101a3d8d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a3d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 101a3d91 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 101a3d93 push 0x101b6140 */
  push32((uint32_t)(0x101b6140u));
  /* 101a3d98 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3d9eu);
  /* 101a3d9e push 0x101b6178 */
  push32((uint32_t)(0x101b6178u));
  /* 101a3da3 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a3da9u);
  /* 101a3da9 push 0x101b6090 */
  push32((uint32_t)(0x101b6090u));
  /* 101a3dae call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a3db4u);
  /* 101a3db4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3db7:;
  /* 101a3db7 push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a3dbc call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3dc2u);
  /* 101a3dc2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3dc4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3dc6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3dc8 push 0x101b61d0 */
  push32((uint32_t)(0x101b61d0u));
  /* 101a3dcd call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3dd3u);
  /* 101a3dd3 push 0x101b60d0 */
  push32((uint32_t)(0x101b60d0u));
  /* 101a3dd8 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a3ddeu);
  /* 101a3dde add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3de1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3de3 je 0x101a3df9 */
  if (C.zf) goto L_101a3df9;
  /* 101a3de5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3de7 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3de9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a3deb push 0x101b61d0 */
  push32((uint32_t)(0x101b61d0u));
  /* 101a3df0 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3df6u);
  /* 101a3df6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3df9:;
  /* 101a3df9 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101a3dfb je 0x101a3ee5 */
  if (C.zf) goto L_101a3ee5;
  /* 101a3e01 push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a3e06 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a3e0cu);
  /* 101a3e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3e0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3e11 je 0x101a3ee5 */
  if (C.zf) goto L_101a3ee5;
  /* 101a3e17 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a3e19 jne 0x101a3e51 */
  if (!C.zf) goto L_101a3e51;
  /* 101a3e1b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a3e1d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3e1f push 2 */
  push32((uint32_t)(0x2u));
  /* 101a3e21 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a3e26 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3e2cu);
  /* 101a3e2c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a3e2e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3e30 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a3e32 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a3e37 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3e3du);
  /* 101a3e3d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a3e3f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3e41 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a3e43 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a3e48 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3e4eu);
  /* 101a3e4e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3e51:;
  /* 101a3e51 push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a3e56 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3e5cu);
  /* 101a3e5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3e5f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3e62 jle 0x101a3e85 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3e85;
  /* 101a3e64 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3e66 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3e68 push 0x101b61e8 */
  push32((uint32_t)(0x101b61e8u));
  /* 101a3e6d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3e73u);
  /* 101a3e73 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a3e75 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a3e77 push 0x101b61f0 */
  push32((uint32_t)(0x101b61f0u));
  /* 101a3e7c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3e82u);
  /* 101a3e82 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3e85:;
  /* 101a3e85 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3e87 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a3e89 push 0x101b60d0 */
  push32((uint32_t)(0x101b60d0u));
  /* 101a3e8e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3e94u);
  /* 101a3e94 push 0x101b38e8 */
  push32((uint32_t)(0x101b38e8u));
  /* 101a3e99 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3e9fu);
  /* 101a3e9f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3ea2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3ea4 je 0x101a3ee5 */
  if (C.zf) goto L_101a3ee5;
  /* 101a3ea6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3ea8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3eaa push 0x101b6148 */
  push32((uint32_t)(0x101b6148u));
  /* 101a3eaf call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3eb5u);
  /* 101a3eb5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3eb7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3eb9 push 0x101b6158 */
  push32((uint32_t)(0x101b6158u));
  /* 101a3ebe call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3ec4u);
  /* 101a3ec4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3ec6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a3ec8 push 0x101b6160 */
  push32((uint32_t)(0x101b6160u));
  /* 101a3ecd call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3ed3u);
  /* 101a3ed3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3ed5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a3ed7 push 0x101b6150 */
  push32((uint32_t)(0x101b6150u));
  /* 101a3edc call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3ee2u);
  /* 101a3ee2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3ee5:;
  /* 101a3ee5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a3ee7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a3ee9 push 0x101b3780 */
  push32((uint32_t)(0x101b3780u));
  /* 101a3eee call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3ef4u);
  /* 101a3ef4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3ef6 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a3ef8 push 0x101b38c0 */
  push32((uint32_t)(0x101b38c0u));
  /* 101a3efd call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3f03u);
  /* 101a3f03 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a3f08 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3f0eu);
  /* 101a3f0e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3f11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3f14 jle 0x101a3f51 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3f51;
  /* 101a3f16 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 101a3f1a cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3f1f jle 0x101a3f51 */
  if ((C.zf||C.sf!=C.of)) goto L_101a3f51;
  /* 101a3f21 lea ecx, [eax - 0x32] */
  ECX = ((uint32_t)(EAX + -0x32));
  /* 101a3f24 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101a3f28 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 101a3f2b cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a3f2d jge 0x101a3f46 */
  if ((C.sf==C.of)) goto L_101a3f46;
  /* 101a3f2f push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3f31 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a3f33 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 101a3f38 push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a3f3d call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3f43u);
  /* 101a3f43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3f46:;
  /* 101a3f46 call 0x101a32f0 */
  push32(0x101a3f4bu); f_101a32f0();
  /* 101a3f4b jmp 0x101a3f51 */
  goto L_101a3f51;
L_101a3f4d:;
  /* 101a3f4d mov bl, byte ptr [esp + 0x12] */
  BL = (r8((uint32_t)(ESP + 0x12)));
L_101a3f51:;
  /* 101a3f51 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101a3f53 je 0x101a3f96 */
  if (C.zf) goto L_101a3f96;
  /* 101a3f55 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3f57 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a3f59 push 0x101b3610 */
  push32((uint32_t)(0x101b3610u));
  /* 101a3f5e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3f64u);
  /* 101a3f64 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3f66 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a3f68 push 0x101b36e8 */
  push32((uint32_t)(0x101b36e8u));
  /* 101a3f6d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3f73u);
  /* 101a3f73 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3f75 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a3f77 push 0x101b3608 */
  push32((uint32_t)(0x101b3608u));
  /* 101a3f7c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3f82u);
  /* 101a3f82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3f84 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a3f86 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a3f88 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a3f8d call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a3f93u);
  /* 101a3f93 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3f96:;
  /* 101a3f96 push 0x101b3780 */
  push32((uint32_t)(0x101b3780u));
  /* 101a3f9b call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3fa1u);
  /* 101a3fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3fa4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a3fa6 je 0x101a3fc9 */
  if (C.zf) goto L_101a3fc9;
  /* 101a3fa8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3faa push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a3fac push 0x101b61d8 */
  push32((uint32_t)(0x101b61d8u));
  /* 101a3fb1 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3fb7u);
  /* 101a3fb7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a3fb9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a3fbb push 0x101b61e0 */
  push32((uint32_t)(0x101b61e0u));
  /* 101a3fc0 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a3fc6u);
  /* 101a3fc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a3fc9:;
  /* 101a3fc9 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a3fce call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a3fd4u);
  /* 101a3fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3fd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a3fd9 je 0x101a4243 */
  if (C.zf) goto L_101a4243;
  /* 101a3fdf push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a3fe4 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a3feau);
  /* 101a3fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a3fef je 0x101a404a */
  if (C.zf) goto L_101a404a;
  /* 101a3ff1 push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a3ff6 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a3ffcu);
  /* 101a3ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a3fff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4001 jne 0x101a404a */
  if (!C.zf) goto L_101a404a;
  /* 101a4003 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4005 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a400bu);
  /* 101a400b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a400e cmp eax, 0x320 */
  { uint32_t _a=(EAX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4013 jle 0x101a404a */
  if ((C.zf||C.sf!=C.of)) goto L_101a404a;
  /* 101a4015 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4017 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a401du);
  /* 101a401d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4020 cmp eax, 0x1770 */
  { uint32_t _a=(EAX),_b=(0x1770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4025 jge 0x101a404a */
  if ((C.sf==C.of)) goto L_101a404a;
  /* 101a4027 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4029 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a402fu);
  /* 101a402f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4032 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4037 jle 0x101a404a */
  if ((C.zf||C.sf!=C.of)) goto L_101a404a;
  /* 101a4039 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101a403e push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4040 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4042 call 0x101a2630 */
  push32(0x101a4047u); f_101a2630();
  /* 101a4047 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a404a:;
  /* 101a404a push 3 */
  push32((uint32_t)(0x3u));
  /* 101a404c call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4052u);
  /* 101a4052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4055 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a405a jge 0x101a407f */
  if ((C.sf==C.of)) goto L_101a407f;
  /* 101a405c push 2 */
  push32((uint32_t)(0x2u));
  /* 101a405e call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4064u);
  /* 101a4064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4067 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a406c jle 0x101a407f */
  if ((C.zf||C.sf!=C.of)) goto L_101a407f;
  /* 101a406e push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101a4073 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4075 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4077 call 0x101a2630 */
  push32(0x101a407cu); f_101a2630();
  /* 101a407c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a407f:;
  /* 101a407f push 0x101b61d8 */
  push32((uint32_t)(0x101b61d8u));
  /* 101a4084 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a408au);
  /* 101a408a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a408d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a408f je 0x101a41b7 */
  if (C.zf) goto L_101a41b7;
  /* 101a4095 push 0x101b61e0 */
  push32((uint32_t)(0x101b61e0u));
  /* 101a409a call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a40a0u);
  /* 101a40a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a40a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a40a5 je 0x101a41b7 */
  if (C.zf) goto L_101a41b7;
  /* 101a40ab push 2 */
  push32((uint32_t)(0x2u));
  /* 101a40ad call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a40b3u);
  /* 101a40b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a40b6 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a40bb jle 0x101a40ce */
  if ((C.zf||C.sf!=C.of)) goto L_101a40ce;
  /* 101a40bd push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101a40c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a40c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a40c6 call 0x101a2630 */
  push32(0x101a40cbu); f_101a2630();
  /* 101a40cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a40ce:;
  /* 101a40ce push 0 */
  push32((uint32_t)(0x0u));
  /* 101a40d0 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a40d6u);
  /* 101a40d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a40d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a40db je 0x101a41da */
  if (C.zf) goto L_101a41da;
  /* 101a40e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a40e3 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a40e9u);
  /* 101a40e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a40ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a40ee je 0x101a415b */
  if (C.zf) goto L_101a415b;
  /* 101a40f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a40f2 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a40f8u);
  /* 101a40f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a40fb cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4100 jge 0x101a415b */
  if ((C.sf==C.of)) goto L_101a415b;
  /* 101a4102 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4104 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a410au);
  /* 101a410a push 5 */
  push32((uint32_t)(0x5u));
  /* 101a410c mov esi, eax */
  ESI = (EAX);
  /* 101a410e call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4114u);
  /* 101a4114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4117 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4119 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 101a411e jge 0x101a413f */
  if ((C.sf==C.of)) goto L_101a413f;
  /* 101a4120 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4122 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4124 call 0x101a2630 */
  push32(0x101a4129u); f_101a2630();
  /* 101a4129 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 101a412e push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4130 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4132 call 0x101a2630 */
  push32(0x101a4137u); f_101a2630();
  /* 101a4137 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a413a jmp 0x101a41da */
  goto L_101a41da;
L_101a413f:;
  /* 101a413f push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4141 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4143 call 0x101a2630 */
  push32(0x101a4148u); f_101a2630();
  /* 101a4148 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 101a414d push 5 */
  push32((uint32_t)(0x5u));
  /* 101a414f push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4151 call 0x101a2630 */
  push32(0x101a4156u); f_101a2630();
  /* 101a4156 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4159 jmp 0x101a41da */
  goto L_101a41da;
L_101a415b:;
  /* 101a415b push 5 */
  push32((uint32_t)(0x5u));
  /* 101a415d call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4163u);
  /* 101a4163 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4166 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a416b jge 0x101a418d */
  if ((C.sf==C.of)) goto L_101a418d;
  /* 101a416d push 0 */
  push32((uint32_t)(0x0u));
  /* 101a416f call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4175u);
  /* 101a4175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a417a je 0x101a418d */
  if (C.zf) goto L_101a418d;
  /* 101a417c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 101a4181 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4183 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4185 call 0x101a2630 */
  push32(0x101a418au); f_101a2630();
  /* 101a418a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a418d:;
  /* 101a418d push 5 */
  push32((uint32_t)(0x5u));
  /* 101a418f call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4195u);
  /* 101a4195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4198 cmp eax, 0x1388 */
  { uint32_t _a=(EAX),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a419d jge 0x101a41da */
  if ((C.sf==C.of)) goto L_101a41da;
  /* 101a419f push 0 */
  push32((uint32_t)(0x0u));
  /* 101a41a1 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a41a7u);
  /* 101a41a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a41aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a41ac je 0x101a41da */
  if (C.zf) goto L_101a41da;
  /* 101a41ae push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 101a41b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a41b5 jmp 0x101a41d0 */
  goto L_101a41d0;
L_101a41b7:;
  /* 101a41b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a41b9 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a41bfu);
  /* 101a41bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a41c2 cmp eax, 0x1adb0 */
  { uint32_t _a=(EAX),_b=(0x1adb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a41c7 jle 0x101a41da */
  if ((C.zf||C.sf!=C.of)) goto L_101a41da;
  /* 101a41c9 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101a41ce push 1 */
  push32((uint32_t)(0x1u));
L_101a41d0:;
  /* 101a41d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a41d2 call 0x101a2630 */
  push32(0x101a41d7u); f_101a2630();
  /* 101a41d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a41da:;
  /* 101a41da push 0 */
  push32((uint32_t)(0x0u));
  /* 101a41dc call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a41e2u);
  /* 101a41e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a41e5 cmp eax, 0x249f0 */
  { uint32_t _a=(EAX),_b=(0x249f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a41ea jle 0x101a41fd */
  if ((C.zf||C.sf!=C.of)) goto L_101a41fd;
  /* 101a41ec push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101a41f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a41f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a41f5 call 0x101a2630 */
  push32(0x101a41fau); f_101a2630();
  /* 101a41fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a41fd:;
  /* 101a41fd push 4 */
  push32((uint32_t)(0x4u));
  /* 101a41ff call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4205u);
  /* 101a4205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4208 cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a420d jle 0x101a4220 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4220;
  /* 101a420f push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 101a4214 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4216 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4218 call 0x101a2630 */
  push32(0x101a421du); f_101a2630();
  /* 101a421d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4220:;
  /* 101a4220 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4222 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4228u);
  /* 101a4228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a422b cmp eax, 0x13880 */
  { uint32_t _a=(EAX),_b=(0x13880u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4230 jle 0x101a4243 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4243;
  /* 101a4232 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 101a4237 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4239 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a423b call 0x101a2630 */
  push32(0x101a4240u); f_101a2630();
  /* 101a4240 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4243:;
  /* 101a4243 pop edi */
  EDI = (pop32());
  /* 101a4244 pop esi */
  ESI = (pop32());
  /* 101a4245 pop ebp */
  EBP = (pop32());
  /* 101a4246 pop ebx */
  EBX = (pop32());
  /* 101a4247 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a424a ret  */
  ESPCHK(0x101a3380u, _esp0);
  ESP += 4; return;
}

/* FUN_10004250 @ 0x101a4250 (209 bytes, 56 insns) */
void f_101a4250(void) {
  FTRACE(0x101a4250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a4250 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4252 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4258u);
  /* 101a4258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a425b cmp eax, 0x672 */
  { uint32_t _a=(EAX),_b=(0x672u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4260 jle 0x101a4320 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4320;
  /* 101a4266 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4268 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101a426a push 0x101b6330 */
  push32((uint32_t)(0x101b6330u));
  /* 101a426f call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4275u);
  /* 101a4275 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4277 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4279 push 0x101b6338 */
  push32((uint32_t)(0x101b6338u));
  /* 101a427e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4284u);
  /* 101a4284 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4286 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4288 push 0x101b6320 */
  push32((uint32_t)(0x101b6320u));
  /* 101a428d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4293u);
  /* 101a4293 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4295 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4297 push 0x101b6328 */
  push32((uint32_t)(0x101b6328u));
  /* 101a429c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a42a2u);
  /* 101a42a2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a42a4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a42a6 push 0x101b6340 */
  push32((uint32_t)(0x101b6340u));
  /* 101a42ab call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a42b1u);
  /* 101a42b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a42b3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a42b5 push 0x101b6278 */
  push32((uint32_t)(0x101b6278u));
  /* 101a42ba call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a42c0u);
  /* 101a42c0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a42c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a42c5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a42c7 push 0x101b6260 */
  push32((uint32_t)(0x101b6260u));
  /* 101a42cc call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a42d2u);
  /* 101a42d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a42d4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a42d6 push 0x101b6268 */
  push32((uint32_t)(0x101b6268u));
  /* 101a42db call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a42e1u);
  /* 101a42e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a42e3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a42e5 push 0x101b6280 */
  push32((uint32_t)(0x101b6280u));
  /* 101a42ea call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a42f0u);
  /* 101a42f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a42f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a42f4 push 0x101b6288 */
  push32((uint32_t)(0x101b6288u));
  /* 101a42f9 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a42ffu);
  /* 101a42ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4301 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4303 push 0x101b6240 */
  push32((uint32_t)(0x101b6240u));
  /* 101a4308 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a430eu);
  /* 101a430e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4310 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4312 push 0x101b5fa8 */
  push32((uint32_t)(0x101b5fa8u));
  /* 101a4317 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a431du);
  /* 101a431d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4320:;
  /* 101a4320 ret  */
  ESPCHK(0x101a4250u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x101a4330 (79 bytes, 22 insns) */
void f_101a4330(void) {
  FTRACE(0x101a4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a4330 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4332 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4334 push 0x101b38f0 */
  push32((uint32_t)(0x101b38f0u));
  /* 101a4339 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a433fu);
  /* 101a433f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4341 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4343 push 0x101b38f8 */
  push32((uint32_t)(0x101b38f8u));
  /* 101a4348 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a434eu);
  /* 101a434e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4350 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4352 push 0x101b38e8 */
  push32((uint32_t)(0x101b38e8u));
  /* 101a4357 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a435du);
  /* 101a435d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a435f push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4361 push 0x101b5f58 */
  push32((uint32_t)(0x101b5f58u));
  /* 101a4366 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a436cu);
  /* 101a436c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a436e push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4370 push 0x101b5f48 */
  push32((uint32_t)(0x101b5f48u));
  /* 101a4375 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a437bu);
  /* 101a437b add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a437e ret  */
  ESPCHK(0x101a4330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004380 @ 0x101a4380 (127 bytes, 35 insns) */
void f_101a4380(void) {
  FTRACE(0x101a4380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a4380 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4382 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4384 push 0x101b61b8 */
  push32((uint32_t)(0x101b61b8u));
  /* 101a4389 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a438fu);
  /* 101a438f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4391 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4393 push 0x101b61b0 */
  push32((uint32_t)(0x101b61b0u));
  /* 101a4398 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a439eu);
  /* 101a439e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a43a0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a43a2 push 0x101b6180 */
  push32((uint32_t)(0x101b6180u));
  /* 101a43a7 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a43adu);
  /* 101a43ad push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a43af push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a43b1 push 0x101b6178 */
  push32((uint32_t)(0x101b6178u));
  /* 101a43b6 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a43bcu);
  /* 101a43bc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a43be push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a43c0 push 0x101b6078 */
  push32((uint32_t)(0x101b6078u));
  /* 101a43c5 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a43cbu);
  /* 101a43cb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a43cd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a43cf push 0x101b6080 */
  push32((uint32_t)(0x101b6080u));
  /* 101a43d4 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a43dau);
  /* 101a43da add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a43dd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a43df push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a43e1 push 0x101b6088 */
  push32((uint32_t)(0x101b6088u));
  /* 101a43e6 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a43ecu);
  /* 101a43ec push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a43ee push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a43f0 push 0x101b6090 */
  push32((uint32_t)(0x101b6090u));
  /* 101a43f5 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a43fbu);
  /* 101a43fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a43fe ret  */
  ESPCHK(0x101a4380u, _esp0);
  ESP += 4; return;
}

/* ProcessMiddleSeaAI @ 0x101a4400 (3643 bytes, 1035 insns) */
void f_101a4400(void) {
  FTRACE(0x101a4400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a4400 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a4403 push ebx */
  push32((uint32_t)(EBX));
  /* 101a4404 push ebp */
  push32((uint32_t)(EBP));
  /* 101a4405 push esi */
  push32((uint32_t)(ESI));
  /* 101a4406 push edi */
  push32((uint32_t)(EDI));
  /* 101a4407 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a4409 call 0x101a2780 */
  push32(0x101a440eu); f_101a2780();
  /* 101a440e push 0x101af030 */
  push32((uint32_t)(0x101af030u));
  /* 101a4413 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101a4415 call dword ptr [0x101b64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64ec))), 0x101a441bu);
  /* 101a441b push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a4420 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a4426u);
  /* 101a4426 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4428 mov ebx, eax */
  EBX = (EAX);
  /* 101a442a call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4430u);
  /* 101a4430 mov ebp, eax */
  EBP = (EAX);
  /* 101a4432 push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a4437 mov dword ptr [esp + 0x30], ebp */
  w32((uint32_t)(ESP + 0x30), (EBP));
  /* 101a443b call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a4441u);
  /* 101a4441 push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a4446 mov byte ptr [esp + 0x2f], al */
  w8((uint32_t)(ESP + 0x2f), (AL));
  /* 101a444a call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a4450u);
  /* 101a4450 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a4455 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a445bu);
  /* 101a445b push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a4460 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a4466u);
  /* 101a4466 push 0x101b6390 */
  push32((uint32_t)(0x101b6390u));
  /* 101a446b call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a4471u);
  /* 101a4471 push 0x101b6310 */
  push32((uint32_t)(0x101b6310u));
  /* 101a4476 mov esi, eax */
  ESI = (EAX);
  /* 101a4478 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a447eu);
  /* 101a447e push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a4483 mov edi, eax */
  EDI = (EAX);
  /* 101a4485 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a448bu);
  /* 101a448b add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a448d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4490 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4492 mov byte ptr [esp + 0x12], 1 */
  w8((uint32_t)(ESP + 0x12), (0x1u));
  /* 101a4497 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 101a449b call 0x101a2680 */
  push32(0x101a44a0u); f_101a2680();
  /* 101a44a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a44a2 jle 0x101a44b8 */
  if ((C.zf||C.sf!=C.of)) goto L_101a44b8;
  /* 101a44a4 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101a44a6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a44a8 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101a44aa push 0x101b6308 */
  push32((uint32_t)(0x101b6308u));
  /* 101a44af call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a44b5u);
  /* 101a44b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a44b8:;
  /* 101a44b8 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a44bd call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a44c3u);
  /* 101a44c3 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a44c8 mov esi, eax */
  ESI = (EAX);
  /* 101a44ca call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a44d0u);
  /* 101a44d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a44d3 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a44d5 je 0x101a44dc */
  if (C.zf) goto L_101a44dc;
  /* 101a44d7 mov byte ptr [esp + 0x12], 0 */
  w8((uint32_t)(ESP + 0x12), (0x0u));
L_101a44dc:;
  /* 101a44dc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101a44de je 0x101a5233 */
  if (C.zf) goto L_101a5233;
  /* 101a44e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a44e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a44e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a44ea push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a44ef call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a44f5u);
  /* 101a44f5 push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a44fa call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a4500u);
  /* 101a4500 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a4505 je 0x101a5233 */
  if (C.zf) goto L_101a5233;
  /* 101a450b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a450d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a450f push 0x101b6358 */
  push32((uint32_t)(0x101b6358u));
  /* 101a4514 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a451au);
  /* 101a451a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a451d call dword ptr [0x101b6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6550))), 0x101a4523u);
  /* 101a4523 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4525 jne 0x101a457c */
  if (!C.zf) goto L_101a457c;
  /* 101a4527 cmp ebp, 0x2bc */
  { uint32_t _a=(EBP),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a452d jle 0x101a4554 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4554;
  /* 101a452f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4531 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4533 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4535 push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a453a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4540u);
  /* 101a4540 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4542 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4544 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4546 push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a454b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4551u);
  /* 101a4551 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4554:;
  /* 101a4554 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a455a jle 0x101a4568 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4568;
  /* 101a455c cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4561 jle 0x101a4568 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4568;
  /* 101a4563 call 0x101a4250 */
  push32(0x101a4568u); f_101a4250();
L_101a4568:;
  /* 101a4568 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a456a push 1 */
  push32((uint32_t)(0x1u));
  /* 101a456c push 0 */
  push32((uint32_t)(0x0u));
  /* 101a456e call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a4574u);
  /* 101a4574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4577 jmp 0x101a463f */
  goto L_101a463f;
L_101a457c:;
  /* 101a457c mov eax, dword ptr [0x101b6574] */
  EAX = (r32((uint32_t)(0x101b6574)));
  /* 101a4581 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a4584 je 0x101a4598 */
  if (C.zf) goto L_101a4598;
  /* 101a4586 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a4587 je 0x101a4592 */
  if (C.zf) goto L_101a4592;
  /* 101a4589 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a458a jne 0x101a45c4 */
  if (!C.zf) goto L_101a45c4;
  /* 101a458c push 9 */
  push32((uint32_t)(0x9u));
  /* 101a458e push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4590 jmp 0x101a45b9 */
  goto L_101a45b9;
L_101a4592:;
  /* 101a4592 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4594 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a4596 jmp 0x101a45b9 */
  goto L_101a45b9;
L_101a4598:;
  /* 101a4598 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a459e jle 0x101a45af */
  if ((C.zf||C.sf!=C.of)) goto L_101a45af;
  /* 101a45a0 push 6 */
  push32((uint32_t)(0x6u));
  /* 101a45a2 push 6 */
  push32((uint32_t)(0x6u));
  /* 101a45a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a45a6 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a45acu);
  /* 101a45ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a45af:;
  /* 101a45af push 5 */
  push32((uint32_t)(0x5u));
  /* 101a45b1 cmp ebp, 0x1f40 */
  { uint32_t _a=(EBP),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a45b7 push 5 */
  push32((uint32_t)(0x5u));
L_101a45b9:;
  /* 101a45b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a45bb call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a45c1u);
  /* 101a45c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a45c4:;
  /* 101a45c4 mov al, byte ptr [esp + 0x13] */
  AL = (r8((uint32_t)(ESP + 0x13)));
  /* 101a45c8 mov esi, 0x1c2 */
  ESI = (0x1c2u);
  /* 101a45cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a45cf je 0x101a45d6 */
  if (C.zf) goto L_101a45d6;
  /* 101a45d1 mov esi, 0x17c */
  ESI = (0x17cu);
L_101a45d6:;
  /* 101a45d6 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a45d9 jge 0x101a45f7 */
  if ((C.sf==C.of)) goto L_101a45f7;
  /* 101a45db cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a45e1 jle 0x101a4633 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4633;
  /* 101a45e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a45e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a45e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a45e9 push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a45ee call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a45f4u);
  /* 101a45f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a45f7:;
  /* 101a45f7 cmp ebp, 0x12c */
  { uint32_t _a=(EBP),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a45fd jle 0x101a4633 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4633;
  /* 101a45ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4601 push 0xe8 */
  push32((uint32_t)(0xe8u));
  /* 101a4606 push esi */
  push32((uint32_t)(ESI));
  /* 101a4607 push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a460c call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4612u);
  /* 101a4612 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4615 cmp ebp, 0x190 */
  { uint32_t _a=(EBP),_b=(0x190u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a461b jle 0x101a4633 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4633;
  /* 101a461d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a461f push 0xf4 */
  push32((uint32_t)(0xf4u));
  /* 101a4624 push esi */
  push32((uint32_t)(ESI));
  /* 101a4625 push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a462a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4630u);
  /* 101a4630 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4633:;
  /* 101a4633 cmp dword ptr [esp + 0x14], 0x1e */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4638 jle 0x101a463f */
  if ((C.zf||C.sf!=C.of)) goto L_101a463f;
  /* 101a463a call 0x101a4250 */
  push32(0x101a463fu); f_101a4250();
L_101a463f:;
  /* 101a463f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4641 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4643 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4645 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a464a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4650u);
  /* 101a4650 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4652 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4654 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4656 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a465b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4661u);
  /* 101a4661 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4663 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4665 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4667 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a466c call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4672u);
  /* 101a4672 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a4677 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a467du);
  /* 101a467d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4680 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4683 jle 0x101a46f6 */
  if ((C.zf||C.sf!=C.of)) goto L_101a46f6;
  /* 101a4685 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4687 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a4689 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a468b push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a4690 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4696u);
  /* 101a4696 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a469b call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a46a1u);
  /* 101a46a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a46a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a46a7 jle 0x101a46bd */
  if ((C.zf||C.sf!=C.of)) goto L_101a46bd;
  /* 101a46a9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a46ab push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a46ad push 1 */
  push32((uint32_t)(0x1u));
  /* 101a46af push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a46b4 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a46bau);
  /* 101a46ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a46bd:;
  /* 101a46bd push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a46c2 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a46c8u);
  /* 101a46c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a46cb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a46ce jle 0x101a46e4 */
  if ((C.zf||C.sf!=C.of)) goto L_101a46e4;
  /* 101a46d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a46d2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a46d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a46d6 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a46db call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a46e1u);
  /* 101a46e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a46e4:;
  /* 101a46e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a46e6 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a46e8 push 0x101b60f0 */
  push32((uint32_t)(0x101b60f0u));
  /* 101a46ed call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a46f3u);
  /* 101a46f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a46f6:;
  /* 101a46f6 push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a46fb call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a4701u);
  /* 101a4701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4704 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4707 jle 0x101a471d */
  if ((C.zf||C.sf!=C.of)) goto L_101a471d;
  /* 101a4709 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a470b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a470d push 1 */
  push32((uint32_t)(0x1u));
  /* 101a470f push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a4714 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a471au);
  /* 101a471a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a471d:;
  /* 101a471d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a471f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4721 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4723 push 0x101b61c8 */
  push32((uint32_t)(0x101b61c8u));
  /* 101a4728 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a472eu);
  /* 101a472e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4732 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4734 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a4739 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a473fu);
  /* 101a473f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4741 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4743 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4745 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a474a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4750u);
  /* 101a4750 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4752 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4754 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4756 push 0x101b5fb0 */
  push32((uint32_t)(0x101b5fb0u));
  /* 101a475b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4761u);
  /* 101a4761 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4764 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4766 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4768 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a476a push 0x101b61c8 */
  push32((uint32_t)(0x101b61c8u));
  /* 101a476f call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4775u);
  /* 101a4775 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4777 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a4779 push 0x101b3640 */
  push32((uint32_t)(0x101b3640u));
  /* 101a477e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4784u);
  /* 101a4784 push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a4789 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a478fu);
  /* 101a478f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a4794 jle 0x101a47aa */
  if ((C.zf||C.sf!=C.of)) goto L_101a47aa;
  /* 101a4796 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4798 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a479a push 1 */
  push32((uint32_t)(0x1u));
  /* 101a479c push 0x101b60d8 */
  push32((uint32_t)(0x101b60d8u));
  /* 101a47a1 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a47a7u);
  /* 101a47a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a47aa:;
  /* 101a47aa call dword ptr [0x101b6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6550))), 0x101a47b0u);
  /* 101a47b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a47b2 je 0x101a47c8 */
  if (C.zf) goto L_101a47c8;
  /* 101a47b4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a47b6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a47b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a47ba push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a47bf call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a47c5u);
  /* 101a47c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a47c8:;
  /* 101a47c8 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a47ca push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a47cc push 1 */
  push32((uint32_t)(0x1u));
  /* 101a47ce push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a47d3 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a47d9u);
  /* 101a47d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a47db push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a47dd push 1 */
  push32((uint32_t)(0x1u));
  /* 101a47df push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a47e4 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a47eau);
  /* 101a47ea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a47ed cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a47f0 jle 0x101a4806 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4806;
  /* 101a47f2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a47f4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a47f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a47f8 push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a47fd call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4803u);
  /* 101a4803 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4806:;
  /* 101a4806 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a4808 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a480a push 1 */
  push32((uint32_t)(0x1u));
  /* 101a480c push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a4811 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4817u);
  /* 101a4817 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4819 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a481b push 2 */
  push32((uint32_t)(0x2u));
  /* 101a481d push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a4822 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4828u);
  /* 101a4828 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a482a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a482c push 0x101b6058 */
  push32((uint32_t)(0x101b6058u));
  /* 101a4831 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4837u);
  /* 101a4837 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4839 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a483b push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a4840 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4846u);
  /* 101a4846 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4848 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a484a push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a484f call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4855u);
  /* 101a4855 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4858 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a485a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a485c push 0x101b6020 */
  push32((uint32_t)(0x101b6020u));
  /* 101a4861 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4867u);
  /* 101a4867 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4869 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a486b push 0x101b6010 */
  push32((uint32_t)(0x101b6010u));
  /* 101a4870 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4876u);
  /* 101a4876 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4878 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a487a push 0x101b6018 */
  push32((uint32_t)(0x101b6018u));
  /* 101a487f call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4885u);
  /* 101a4885 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a488a call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a4890u);
  /* 101a4890 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4893 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a4895 je 0x101a4954 */
  if (C.zf) goto L_101a4954;
  /* 101a489b push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a48a0 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a48a6u);
  /* 101a48a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a48a9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a48ab jne 0x101a4954 */
  if (!C.zf) goto L_101a4954;
  /* 101a48b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a48b3 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a48b9u);
  /* 101a48b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a48bc cmp eax, 0xe74 */
  { uint32_t _a=(EAX),_b=(0xe74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a48c1 jle 0x101a48e7 */
  if ((C.zf||C.sf!=C.of)) goto L_101a48e7;
  /* 101a48c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a48c5 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a48cbu);
  /* 101a48cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a48ce cmp eax, 0x157c */
  { uint32_t _a=(EAX),_b=(0x157cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a48d3 jle 0x101a48e7 */
  if ((C.zf||C.sf!=C.of)) goto L_101a48e7;
  /* 101a48d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a48d7 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a48ddu);
  /* 101a48dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a48e0 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a48e5 jg 0x101a4954 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a4954;
L_101a48e7:;
  /* 101a48e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a48e9 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a48efu);
  /* 101a48ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a48f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a48f4 je 0x101a497b */
  if (C.zf) goto L_101a497b;
  /* 101a48fa push 5 */
  push32((uint32_t)(0x5u));
  /* 101a48fc call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4902u);
  /* 101a4902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4905 cmp eax, 0x20d0 */
  { uint32_t _a=(EAX),_b=(0x20d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a490a jle 0x101a497b */
  if ((C.zf||C.sf!=C.of)) goto L_101a497b;
  /* 101a490c push 5 */
  push32((uint32_t)(0x5u));
  /* 101a490e call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4914u);
  /* 101a4914 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4917 cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a491c jle 0x101a492f */
  if ((C.zf||C.sf!=C.of)) goto L_101a492f;
  /* 101a491e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101a4923 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4925 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4927 call 0x101a2630 */
  push32(0x101a492cu); f_101a2630();
  /* 101a492c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a492f:;
  /* 101a492f push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4931 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4937u);
  /* 101a4937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a493a cmp eax, 0x32c8 */
  { uint32_t _a=(EAX),_b=(0x32c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a493f jle 0x101a497b */
  if ((C.zf||C.sf!=C.of)) goto L_101a497b;
  /* 101a4941 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101a4946 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4948 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a494a call 0x101a2630 */
  push32(0x101a494fu); f_101a2630();
  /* 101a494f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4952 jmp 0x101a497b */
  goto L_101a497b;
L_101a4954:;
  /* 101a4954 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a4956 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4958 call 0x101a2610 */
  push32(0x101a495du); f_101a2610();
  /* 101a495d push 0 */
  push32((uint32_t)(0x0u));
  /* 101a495f push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4961 call 0x101a2610 */
  push32(0x101a4966u); f_101a2610();
  /* 101a4966 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a4968 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a496a call 0x101a2610 */
  push32(0x101a496fu); f_101a2610();
  /* 101a496f push 0 */
  push32((uint32_t)(0x0u));
  /* 101a4971 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4973 call 0x101a2610 */
  push32(0x101a4978u); f_101a2610();
  /* 101a4978 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a497b:;
  /* 101a497b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a497d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a497f push 0x101b3780 */
  push32((uint32_t)(0x101b3780u));
  /* 101a4984 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a498au);
  /* 101a498a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a498c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a498e push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4990 push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a4995 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a499bu);
  /* 101a499b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a499d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a499f push 2 */
  push32((uint32_t)(0x2u));
  /* 101a49a1 push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a49a6 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a49acu);
  /* 101a49ac push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a49ae push 0xa */
  push32((uint32_t)(0xau));
  /* 101a49b0 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a49b2 push 0x101b62b8 */
  push32((uint32_t)(0x101b62b8u));
  /* 101a49b7 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a49bdu);
  /* 101a49bd push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a49c2 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a49c8u);
  /* 101a49c8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a49cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a49cd jne 0x101a4a18 */
  if (!C.zf) goto L_101a4a18;
  /* 101a49cf push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 101a49d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a49d3 call 0x101a2660 */
  push32(0x101a49d8u); f_101a2660();
  /* 101a49d8 mov esi, eax */
  ESI = (EAX);
  /* 101a49da push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101a49dc push 0 */
  push32((uint32_t)(0x0u));
  /* 101a49de sar esi, 2 */
  ESI = (sh_sar((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101a49e1 call 0x101a2660 */
  push32(0x101a49e6u); f_101a2660();
  /* 101a49e6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101a49e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a49ea add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a49ec call 0x101a2660 */
  push32(0x101a49f1u); f_101a2660();
  /* 101a49f1 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a49f3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a49f6 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a49f9 jle 0x101a4a08 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4a08;
  /* 101a49fb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a49fd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a49ff push 6 */
  push32((uint32_t)(0x6u));
  /* 101a4a01 push 0x101b5f70 */
  push32((uint32_t)(0x101b5f70u));
  /* 101a4a06 jmp 0x101a4a23 */
  goto L_101a4a23;
L_101a4a08:;
  /* 101a4a08 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a4a0a je 0x101a4a2c */
  if (C.zf) goto L_101a4a2c;
  /* 101a4a0c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4a0e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4a10 push esi */
  push32((uint32_t)(ESI));
  /* 101a4a11 push 0x101b5f70 */
  push32((uint32_t)(0x101b5f70u));
  /* 101a4a16 jmp 0x101a4a23 */
  goto L_101a4a23;
L_101a4a18:;
  /* 101a4a18 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4a1a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4a1c push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4a1e push 0x101b38c8 */
  push32((uint32_t)(0x101b38c8u));
L_101a4a23:;
  /* 101a4a23 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4a29u);
  /* 101a4a29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4a2c:;
  /* 101a4a2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4a2e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a4a30 push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a4a35 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4a3bu);
  /* 101a4a3b push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a4a40 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a4a46u);
  /* 101a4a46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4a49 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4a4b je 0x101a4a6e */
  if (C.zf) goto L_101a4a6e;
  /* 101a4a4d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4a4f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4a51 push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a4a56 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4a5cu);
  /* 101a4a5c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4a5e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a4a60 push 0x101b3850 */
  push32((uint32_t)(0x101b3850u));
  /* 101a4a65 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4a6bu);
  /* 101a4a6b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4a6e:;
  /* 101a4a6e push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a4a73 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a4a79u);
  /* 101a4a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4a7c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4a7e je 0x101a4aa6 */
  if (C.zf) goto L_101a4aa6;
  /* 101a4a80 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4a82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4a84 push 0x101b3920 */
  push32((uint32_t)(0x101b3920u));
  /* 101a4a89 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4a8fu);
  /* 101a4a8f push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4a91 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a4a93 push 0x101b3860 */
  push32((uint32_t)(0x101b3860u));
  /* 101a4a98 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4a9eu);
  /* 101a4a9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4aa1 call 0x101a3340 */
  push32(0x101a4aa6u); f_101a3340();
L_101a4aa6:;
  /* 101a4aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a4aa8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4aaa call 0x101a2610 */
  push32(0x101a4aafu); f_101a2610();
  /* 101a4aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 101a4ab1 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4ab7u);
  /* 101a4ab7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4aba cmp eax, 0x36b0 */
  { uint32_t _a=(EAX),_b=(0x36b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4abf jle 0x101a4b03 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4b03;
  /* 101a4ac1 push 0x101b3780 */
  push32((uint32_t)(0x101b3780u));
  /* 101a4ac6 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a4accu);
  /* 101a4acc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4acf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4ad1 je 0x101a4b03 */
  if (C.zf) goto L_101a4b03;
  /* 101a4ad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4ad5 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4adbu);
  /* 101a4adb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4ade cmp eax, 0x1d4c */
  { uint32_t _a=(EAX),_b=(0x1d4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4ae3 jge 0x101a4b03 */
  if ((C.sf==C.of)) goto L_101a4b03;
  /* 101a4ae5 push 0x101b3938 */
  push32((uint32_t)(0x101b3938u));
  /* 101a4aea call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a4af0u);
  /* 101a4af0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4af3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4af5 jne 0x101a4b03 */
  if (!C.zf) goto L_101a4b03;
  /* 101a4af7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4af9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4afb call 0x101a2610 */
  push32(0x101a4b00u); f_101a2610();
  /* 101a4b00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4b03:;
  /* 101a4b03 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4b05 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4b07 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4b09 push 0x101b61d0 */
  push32((uint32_t)(0x101b61d0u));
  /* 101a4b0e call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4b14u);
  /* 101a4b14 push 0x101b60d0 */
  push32((uint32_t)(0x101b60d0u));
  /* 101a4b19 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a4b1fu);
  /* 101a4b1f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4b22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4b24 je 0x101a4b3a */
  if (C.zf) goto L_101a4b3a;
  /* 101a4b26 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4b28 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4b2a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a4b2c push 0x101b61d0 */
  push32((uint32_t)(0x101b61d0u));
  /* 101a4b31 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4b37u);
  /* 101a4b37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4b3a:;
  /* 101a4b3a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4b3c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a4b3e push 0x101b60d0 */
  push32((uint32_t)(0x101b60d0u));
  /* 101a4b43 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4b49u);
  /* 101a4b49 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4b4b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a4b4d push 0x101b60e0 */
  push32((uint32_t)(0x101b60e0u));
  /* 101a4b52 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4b58u);
  /* 101a4b58 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b5a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b5c push 0x101b62c8 */
  push32((uint32_t)(0x101b62c8u));
  /* 101a4b61 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4b67u);
  /* 101a4b67 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b69 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b6b push 0x101b62b0 */
  push32((uint32_t)(0x101b62b0u));
  /* 101a4b70 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4b76u);
  /* 101a4b76 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b78 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b7a push 0x101b62c0 */
  push32((uint32_t)(0x101b62c0u));
  /* 101a4b7f call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4b85u);
  /* 101a4b85 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b87 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b89 push 0x101b62a0 */
  push32((uint32_t)(0x101b62a0u));
  /* 101a4b8e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4b94u);
  /* 101a4b94 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4b97 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b99 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4b9b push 0x101b62a8 */
  push32((uint32_t)(0x101b62a8u));
  /* 101a4ba0 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4ba6u);
  /* 101a4ba6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4ba8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4baa push 0x101b6298 */
  push32((uint32_t)(0x101b6298u));
  /* 101a4baf call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4bb5u);
  /* 101a4bb5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4bb8 cmp ebx, 0x23 */
  { uint32_t _a=(EBX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4bbb jle 0x101a4c14 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4c14;
  /* 101a4bbd mov al, byte ptr [esp + 0x12] */
  AL = (r8((uint32_t)(ESP + 0x12)));
  /* 101a4bc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4bc3 je 0x101a4c14 */
  if (C.zf) goto L_101a4c14;
  /* 101a4bc5 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4bc7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a4bc9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4bcb push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a4bd0 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4bd6u);
  /* 101a4bd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4bd9 cmp ebx, 0x3c */
  { uint32_t _a=(EBX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4bdc jle 0x101a4c14 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4c14;
  /* 101a4bde push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4be0 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a4be2 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4be4 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a4be9 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4befu);
  /* 101a4bef push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4bf1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4bf3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4bf5 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a4bfa call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4c00u);
  /* 101a4c00 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4c02 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4c04 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4c06 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a4c0b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4c11u);
  /* 101a4c11 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4c14:;
  /* 101a4c14 mov bl, byte ptr [esp + 0x13] */
  BL = (r8((uint32_t)(ESP + 0x13)));
  /* 101a4c18 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101a4c1a je 0x101a4cfe */
  if (C.zf) goto L_101a4cfe;
  /* 101a4c20 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4c22 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4c24 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4c26 push 0x101b38a8 */
  push32((uint32_t)(0x101b38a8u));
  /* 101a4c2b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4c31u);
  /* 101a4c31 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4c35 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 101a4c37 push 0x101b6140 */
  push32((uint32_t)(0x101b6140u));
  /* 101a4c3c call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4c42u);
  /* 101a4c42 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4c44 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4c46 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4c48 push 0x101b6258 */
  push32((uint32_t)(0x101b6258u));
  /* 101a4c4d call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4c53u);
  /* 101a4c53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4c55 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a4c57 push 0x101b3610 */
  push32((uint32_t)(0x101b3610u));
  /* 101a4c5c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4c62u);
  /* 101a4c62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4c64 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a4c66 push 0x101b36e8 */
  push32((uint32_t)(0x101b36e8u));
  /* 101a4c6b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4c71u);
  /* 101a4c71 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4c74 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4c76 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a4c78 push 0x101b3608 */
  push32((uint32_t)(0x101b3608u));
  /* 101a4c7d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4c83u);
  /* 101a4c83 push 0x101b6178 */
  push32((uint32_t)(0x101b6178u));
  /* 101a4c88 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a4c8eu);
  /* 101a4c8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4c91 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4c93 je 0x101a4ca9 */
  if (C.zf) goto L_101a4ca9;
  /* 101a4c95 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4c97 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4c99 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4c9b push 0x101b6350 */
  push32((uint32_t)(0x101b6350u));
  /* 101a4ca0 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4ca6u);
  /* 101a4ca6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4ca9:;
  /* 101a4ca9 push 0x101b6090 */
  push32((uint32_t)(0x101b6090u));
  /* 101a4cae call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a4cb4u);
  /* 101a4cb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4cb7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4cb9 je 0x101a4ccf */
  if (C.zf) goto L_101a4ccf;
  /* 101a4cbb push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4cbd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4cbf push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4cc1 push 0x101b3648 */
  push32((uint32_t)(0x101b3648u));
  /* 101a4cc6 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4cccu);
  /* 101a4ccc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4ccf:;
  /* 101a4ccf call 0x101a4380 */
  push32(0x101a4cd4u); f_101a4380();
L_101a4cd4:;
  /* 101a4cd4 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a4cd9 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a4cdfu);
  /* 101a4cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4ce2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4ce4 je 0x101a4d34 */
  if (C.zf) goto L_101a4d34;
  /* 101a4ce6 push 0x101b60e0 */
  push32((uint32_t)(0x101b60e0u));
  /* 101a4ceb call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a4cf1u);
  /* 101a4cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4cf4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4cf6 jne 0x101a4d25 */
  if (!C.zf) goto L_101a4d25;
  /* 101a4cf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4cfa push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4cfc jmp 0x101a4d29 */
  goto L_101a4d29;
L_101a4cfe:;
  /* 101a4cfe push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4d00 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4d02 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a4d04 push 0x101b6140 */
  push32((uint32_t)(0x101b6140u));
  /* 101a4d09 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4d0fu);
  /* 101a4d0f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a4d11 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4d13 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a4d15 push 0x101b6258 */
  push32((uint32_t)(0x101b6258u));
  /* 101a4d1a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4d20u);
  /* 101a4d20 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4d23 jmp 0x101a4cd4 */
  goto L_101a4cd4;
L_101a4d25:;
  /* 101a4d25 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4d27 push 4 */
  push32((uint32_t)(0x4u));
L_101a4d29:;
  /* 101a4d29 push 8 */
  push32((uint32_t)(0x8u));
  /* 101a4d2b call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a4d31u);
  /* 101a4d31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4d34:;
  /* 101a4d34 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a4d39 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a4d3fu);
  /* 101a4d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4d42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a4d44 je 0x101a4d5a */
  if (C.zf) goto L_101a4d5a;
  /* 101a4d46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4d48 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4d4a push 6 */
  push32((uint32_t)(0x6u));
  /* 101a4d4c push 0x101b61d0 */
  push32((uint32_t)(0x101b61d0u));
  /* 101a4d51 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4d57u);
  /* 101a4d57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4d5a:;
  /* 101a4d5a push 0x101b60d0 */
  push32((uint32_t)(0x101b60d0u));
  /* 101a4d5f call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a4d65u);
  /* 101a4d65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4d68 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4d6a je 0x101a4d80 */
  if (C.zf) goto L_101a4d80;
  /* 101a4d6c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4d6e push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4d70 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a4d72 push 0x101b61d0 */
  push32((uint32_t)(0x101b61d0u));
  /* 101a4d77 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4d7du);
  /* 101a4d7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4d80:;
  /* 101a4d80 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101a4d82 je 0x101a4e83 */
  if (C.zf) goto L_101a4e83;
  /* 101a4d88 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a4d8a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a4d8c push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4d8e push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a4d93 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4d99u);
  /* 101a4d99 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a4d9b push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a4d9d push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4d9f push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a4da4 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4daau);
  /* 101a4daa push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a4dac push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a4dae push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4db0 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a4db5 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4dbbu);
  /* 101a4dbb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a4dbd push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101a4dbf push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4dc1 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a4dc6 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4dccu);
  /* 101a4dcc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4dcf push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a4dd1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101a4dd3 push 6 */
  push32((uint32_t)(0x6u));
  /* 101a4dd5 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a4dda call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4de0u);
  /* 101a4de0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4de2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a4de4 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a4de9 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4defu);
  /* 101a4def push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a4df4 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a4dfau);
  /* 101a4dfa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4dfd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4e00 jle 0x101a4e23 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4e23;
  /* 101a4e02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4e04 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4e06 push 0x101b61e8 */
  push32((uint32_t)(0x101b61e8u));
  /* 101a4e0b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4e11u);
  /* 101a4e11 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a4e13 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a4e15 push 0x101b61f0 */
  push32((uint32_t)(0x101b61f0u));
  /* 101a4e1a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4e20u);
  /* 101a4e20 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4e23:;
  /* 101a4e23 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4e25 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a4e27 push 0x101b60d0 */
  push32((uint32_t)(0x101b60d0u));
  /* 101a4e2c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4e32u);
  /* 101a4e32 push 0x101b38e8 */
  push32((uint32_t)(0x101b38e8u));
  /* 101a4e37 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a4e3du);
  /* 101a4e3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4e40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4e42 je 0x101a4e83 */
  if (C.zf) goto L_101a4e83;
  /* 101a4e44 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4e46 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4e48 push 0x101b6148 */
  push32((uint32_t)(0x101b6148u));
  /* 101a4e4d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4e53u);
  /* 101a4e53 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4e55 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4e57 push 0x101b6158 */
  push32((uint32_t)(0x101b6158u));
  /* 101a4e5c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4e62u);
  /* 101a4e62 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4e64 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a4e66 push 0x101b6160 */
  push32((uint32_t)(0x101b6160u));
  /* 101a4e6b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4e71u);
  /* 101a4e71 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4e73 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101a4e75 push 0x101b6150 */
  push32((uint32_t)(0x101b6150u));
  /* 101a4e7a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4e80u);
  /* 101a4e80 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4e83:;
  /* 101a4e83 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4e85 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101a4e87 push 0x101b3780 */
  push32((uint32_t)(0x101b3780u));
  /* 101a4e8c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4e92u);
  /* 101a4e92 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a4e94 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a4e96 push 0x101b38c0 */
  push32((uint32_t)(0x101b38c0u));
  /* 101a4e9b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4ea1u);
  /* 101a4ea1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4ea3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4ea5 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a4eaa call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a4eb0u);
  /* 101a4eb0 mov eax, dword ptr [esp + 0x38] */
  EAX = (r32((uint32_t)(ESP + 0x38)));
  /* 101a4eb4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4eb7 cmp eax, 0x15e */
  { uint32_t _a=(EAX),_b=(0x15eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4ebc jle 0x101a4eda */
  if ((C.zf||C.sf!=C.of)) goto L_101a4eda;
  /* 101a4ebe push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a4ec0 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a4ec2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 101a4ec7 push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a4ecc call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a4ed2u);
  /* 101a4ed2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4ed5 call 0x101a4330 */
  push32(0x101a4edau); f_101a4330();
L_101a4eda:;
  /* 101a4eda push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a4edf call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a4ee5u);
  /* 101a4ee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a4eea je 0x101a5233 */
  if (C.zf) goto L_101a5233;
  /* 101a4ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a4ef2 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4ef8u);
  /* 101a4ef8 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4efa mov edi, eax */
  EDI = (EAX);
  /* 101a4efc call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4f02u);
  /* 101a4f02 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4f04 mov esi, eax */
  ESI = (EAX);
  /* 101a4f06 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4f0cu);
  /* 101a4f0c push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4f0e mov ebp, eax */
  EBP = (EAX);
  /* 101a4f10 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4f16u);
  /* 101a4f16 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a4f18 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101a4f1c call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a4f22u);
  /* 101a4f22 mov ebx, eax */
  EBX = (EAX);
  /* 101a4f24 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 101a4f28 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4f2b cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4f30 jge 0x101a4fc3 */
  if ((C.sf==C.of)) goto L_101a4fc3;
  /* 101a4f36 cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4f3c jle 0x101a4f49 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4f49;
  /* 101a4f3e push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101a4f43 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4f45 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4f47 jmp 0x101a4fbb */
  goto L_101a4fbb;
L_101a4f49:;
  /* 101a4f49 cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4f4f jle 0x101a4f5c */
  if ((C.zf||C.sf!=C.of)) goto L_101a4f5c;
  /* 101a4f51 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 101a4f56 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4f58 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a4f5a jmp 0x101a4fbb */
  goto L_101a4fbb;
L_101a4f5c:;
  /* 101a4f5c cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4f62 jle 0x101a4f6f */
  if ((C.zf||C.sf!=C.of)) goto L_101a4f6f;
  /* 101a4f64 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101a4f69 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 101a4f6d jmp 0x101a4fbb */
  goto L_101a4fbb;
L_101a4f6f:;
  /* 101a4f6f cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4f75 jle 0x101a4f82 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4f82;
  /* 101a4f77 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 101a4f7c push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 101a4f80 jmp 0x101a4fbb */
  goto L_101a4fbb;
L_101a4f82:;
  /* 101a4f82 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4f8a jle 0x101a4f97 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4f97;
  /* 101a4f8c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101a4f91 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4f93 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a4f95 jmp 0x101a4fbb */
  goto L_101a4fbb;
L_101a4f97:;
  /* 101a4f97 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4f9d jle 0x101a4faa */
  if ((C.zf||C.sf!=C.of)) goto L_101a4faa;
  /* 101a4f9f push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101a4fa4 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4fa6 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a4fa8 jmp 0x101a4fbb */
  goto L_101a4fbb;
L_101a4faa:;
  /* 101a4faa cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4fb0 jle 0x101a4fc3 */
  if ((C.zf||C.sf!=C.of)) goto L_101a4fc3;
  /* 101a4fb2 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 101a4fb7 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4fb9 push 1 */
  push32((uint32_t)(0x1u));
L_101a4fbb:;
  /* 101a4fbb call 0x101a2630 */
  push32(0x101a4fc0u); f_101a2630();
  /* 101a4fc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a4fc3:;
  /* 101a4fc3 push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a4fc8 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a4fceu);
  /* 101a4fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4fd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a4fd3 je 0x101a5023 */
  if (C.zf) goto L_101a5023;
  /* 101a4fd5 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4fdb jle 0x101a5023 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5023;
  /* 101a4fdd push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a4fe2 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a4fe8u);
  /* 101a4fe8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a4feb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a4fed jne 0x101a5023 */
  if (!C.zf) goto L_101a5023;
  /* 101a4fef cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a4ff5 jle 0x101a5008 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5008;
  /* 101a4ff7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 101a4ffc push 3 */
  push32((uint32_t)(0x3u));
  /* 101a4ffe push 4 */
  push32((uint32_t)(0x4u));
  /* 101a5000 call 0x101a2630 */
  push32(0x101a5005u); f_101a2630();
  /* 101a5005 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5008:;
  /* 101a5008 cmp dword ptr [esp + 0x14], 0xfa0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5010 jle 0x101a5023 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5023;
  /* 101a5012 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101a5017 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a5019 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a501b call 0x101a2630 */
  push32(0x101a5020u); f_101a2630();
  /* 101a5020 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5023:;
  /* 101a5023 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a5025 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a502bu);
  /* 101a502b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a502e cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5033 jle 0x101a5046 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5046;
  /* 101a5035 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101a503a push 1 */
  push32((uint32_t)(0x1u));
  /* 101a503c push 2 */
  push32((uint32_t)(0x2u));
  /* 101a503e call 0x101a2630 */
  push32(0x101a5043u); f_101a2630();
  /* 101a5043 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5046:;
  /* 101a5046 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a5048 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a504eu);
  /* 101a504e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5051 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5056 jle 0x101a5069 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5069;
  /* 101a5058 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101a505d push 1 */
  push32((uint32_t)(0x1u));
  /* 101a505f push 0 */
  push32((uint32_t)(0x0u));
  /* 101a5061 call 0x101a2630 */
  push32(0x101a5066u); f_101a2630();
  /* 101a5066 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5069:;
  /* 101a5069 push 0x101b61c8 */
  push32((uint32_t)(0x101b61c8u));
  /* 101a506e call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5074u);
  /* 101a5074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5079 je 0x101a5200 */
  if (C.zf) goto L_101a5200;
  /* 101a507f push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a5084 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a508au);
  /* 101a508a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a508d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a508f jne 0x101a5200 */
  if (!C.zf) goto L_101a5200;
  /* 101a5095 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a5097 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a509du);
  /* 101a509d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a50a0 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a50a5 jle 0x101a5160 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5160;
  /* 101a50ab push 0 */
  push32((uint32_t)(0x0u));
  /* 101a50ad call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a50b3u);
  /* 101a50b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a50b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a50b8 je 0x101a5160 */
  if (C.zf) goto L_101a5160;
  /* 101a50be push 1 */
  push32((uint32_t)(0x1u));
  /* 101a50c0 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a50c6u);
  /* 101a50c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a50c9 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a50ce jge 0x101a5160 */
  if ((C.sf==C.of)) goto L_101a5160;
  /* 101a50d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a50d6 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a50dcu);
  /* 101a50dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a50df cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a50e4 jle 0x101a50f7 */
  if ((C.zf||C.sf!=C.of)) goto L_101a50f7;
  /* 101a50e6 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101a50eb push 1 */
  push32((uint32_t)(0x1u));
  /* 101a50ed push 5 */
  push32((uint32_t)(0x5u));
  /* 101a50ef call 0x101a2630 */
  push32(0x101a50f4u); f_101a2630();
  /* 101a50f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a50f7:;
  /* 101a50f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a50f9 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a50ffu);
  /* 101a50ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5102 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5107 jle 0x101a511a */
  if ((C.zf||C.sf!=C.of)) goto L_101a511a;
  /* 101a5109 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 101a510e push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5110 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a5112 call 0x101a2630 */
  push32(0x101a5117u); f_101a2630();
  /* 101a5117 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a511a:;
  /* 101a511a push 2 */
  push32((uint32_t)(0x2u));
  /* 101a511c call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a5122u);
  /* 101a5122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5125 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a512a jle 0x101a513d */
  if ((C.zf||C.sf!=C.of)) goto L_101a513d;
  /* 101a512c push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101a5131 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5133 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a5135 call 0x101a2630 */
  push32(0x101a513au); f_101a2630();
  /* 101a513a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a513d:;
  /* 101a513d push 3 */
  push32((uint32_t)(0x3u));
  /* 101a513f call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a5145u);
  /* 101a5145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5148 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a514d jle 0x101a5160 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5160;
  /* 101a514f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101a5154 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5156 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a5158 call 0x101a2630 */
  push32(0x101a515du); f_101a2630();
  /* 101a515d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5160:;
  /* 101a5160 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a5162 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a5168u);
  /* 101a5168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a516b cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5170 jle 0x101a5200 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5200;
  /* 101a5176 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5178 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a517eu);
  /* 101a517e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5181 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5183 je 0x101a5200 */
  if (C.zf) goto L_101a5200;
  /* 101a5185 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5187 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a518du);
  /* 101a518d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5190 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5195 jle 0x101a5200 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5200;
  /* 101a5197 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a5199 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a519fu);
  /* 101a519f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a51a2 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a51a7 jle 0x101a51ba */
  if ((C.zf||C.sf!=C.of)) goto L_101a51ba;
  /* 101a51a9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101a51ae push 4 */
  push32((uint32_t)(0x4u));
  /* 101a51b0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a51b2 call 0x101a2630 */
  push32(0x101a51b7u); f_101a2630();
  /* 101a51b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a51ba:;
  /* 101a51ba push 2 */
  push32((uint32_t)(0x2u));
  /* 101a51bc call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a51c2u);
  /* 101a51c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a51c5 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a51ca jle 0x101a51dd */
  if ((C.zf||C.sf!=C.of)) goto L_101a51dd;
  /* 101a51cc push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101a51d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a51d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a51d5 call 0x101a2630 */
  push32(0x101a51dau); f_101a2630();
  /* 101a51da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a51dd:;
  /* 101a51dd push 3 */
  push32((uint32_t)(0x3u));
  /* 101a51df call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a51e5u);
  /* 101a51e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a51e8 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a51ed jle 0x101a5200 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5200;
  /* 101a51ef push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101a51f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a51f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a51f8 call 0x101a2630 */
  push32(0x101a51fdu); f_101a2630();
  /* 101a51fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5200:;
  /* 101a5200 call dword ptr [0x101b64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e0))), 0x101a5206u);
  /* 101a5206 mov ecx, dword ptr [eax*4 + 0x101b65ec] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101b65ec)));
  /* 101a520d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a520f jne 0x101a5233 */
  if (!C.zf) goto L_101a5233;
  /* 101a5211 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101a5216 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a5218 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a521a call 0x101a2630 */
  push32(0x101a521fu); f_101a2630();
  /* 101a521f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5222 call dword ptr [0x101b64e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e0))), 0x101a5228u);
  /* 101a5228 mov dword ptr [eax*4 + 0x101b65ec], 1 */
  w32((uint32_t)(EAX*4 + 0x101b65ec), (0x1u));
L_101a5233:;
  /* 101a5233 pop edi */
  EDI = (pop32());
  /* 101a5234 pop esi */
  ESI = (pop32());
  /* 101a5235 pop ebp */
  EBP = (pop32());
  /* 101a5236 pop ebx */
  EBX = (pop32());
  /* 101a5237 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a523a ret  */
  ESPCHK(0x101a4400u, _esp0);
  ESP += 4; return;
}

/* FUN_10005240 @ 0x101a5240 (72 bytes, 22 insns) */
void f_101a5240(void) {
  FTRACE(0x101a5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a5240 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5242 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5244 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5246 push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a524b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5251u);
  /* 101a5251 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5253 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5255 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5257 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a525c call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5262u);
  /* 101a5262 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5264 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5266 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5268 push 0x101b5fb0 */
  push32((uint32_t)(0x101b5fb0u));
  /* 101a526d call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5273u);
  /* 101a5273 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5275 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5277 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5279 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a527e call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5284u);
  /* 101a5284 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5287 ret  */
  ESPCHK(0x101a5240u, _esp0);
  ESP += 4; return;
}

/* FUN_10005290 @ 0x101a5290 (55 bytes, 16 insns) */
void f_101a5290(void) {
  FTRACE(0x101a5290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a5290 cmp dword ptr [esp + 4], 0x101b3668 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0x101b3668u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5298 jne 0x101a52c4 */
  if (!C.zf) goto L_101a52c4;
  /* 101a529a push 0x101b6320 */
  push32((uint32_t)(0x101b6320u));
  /* 101a529f call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a52a5u);
  /* 101a52a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a52a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a52aa je 0x101a52c4 */
  if (C.zf) goto L_101a52c4;
  /* 101a52ac push 0x101b6268 */
  push32((uint32_t)(0x101b6268u));
  /* 101a52b1 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a52b7u);
  /* 101a52b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a52ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a52bc je 0x101a52c4 */
  if (C.zf) goto L_101a52c4;
  /* 101a52be mov eax, 1 */
  EAX = (0x1u);
  /* 101a52c3 ret  */
  ESPCHK(0x101a5290u, _esp0);
  ESP += 4; return;
L_101a52c4:;
  /* 101a52c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a52c6 ret  */
  ESPCHK(0x101a5290u, _esp0);
  ESP += 4; return;
}

/* FUN_100052d0 @ 0x101a52d0 (2008 bytes, 535 insns) */
void f_101a52d0(void) {
  FTRACE(0x101a52d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a52d0 push 0x101b6258 */
  push32((uint32_t)(0x101b6258u));
  /* 101a52d5 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a52dbu);
  /* 101a52db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a52de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a52e0 jne 0x101a52f4 */
  if (!C.zf) goto L_101a52f4;
  /* 101a52e2 push 0x101b38a8 */
  push32((uint32_t)(0x101b38a8u));
  /* 101a52e7 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a52edu);
  /* 101a52ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a52f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a52f2 je 0x101a5324 */
  if (C.zf) goto L_101a5324;
L_101a52f4:;
  /* 101a52f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a52f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a52f8 push 0x101b3930 */
  push32((uint32_t)(0x101b3930u));
  /* 101a52fd call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5303u);
  /* 101a5303 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5305 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5307 push 0x101b61d8 */
  push32((uint32_t)(0x101b61d8u));
  /* 101a530c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5312u);
  /* 101a5312 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5314 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5316 push 0x101b61e0 */
  push32((uint32_t)(0x101b61e0u));
  /* 101a531b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5321u);
  /* 101a5321 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5324:;
  /* 101a5324 push 0x101b6390 */
  push32((uint32_t)(0x101b6390u));
  /* 101a5329 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a532fu);
  /* 101a532f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5332 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5335 jg 0x101a535f */
  if ((!C.zf&&C.sf==C.of)) goto L_101a535f;
  /* 101a5337 push 0x101b6310 */
  push32((uint32_t)(0x101b6310u));
  /* 101a533c call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5342u);
  /* 101a5342 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5345 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5348 jg 0x101a535f */
  if ((!C.zf&&C.sf==C.of)) goto L_101a535f;
  /* 101a534a push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a534f call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5355u);
  /* 101a5355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5358 cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a535d jle 0x101a53bd */
  if ((C.zf||C.sf!=C.of)) goto L_101a53bd;
L_101a535f:;
  /* 101a535f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5361 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5363 push 0x101b3608 */
  push32((uint32_t)(0x101b3608u));
  /* 101a5368 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a536eu);
  /* 101a536e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5370 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5372 push 0x101b3610 */
  push32((uint32_t)(0x101b3610u));
  /* 101a5377 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a537du);
  /* 101a537d push 0x101b6390 */
  push32((uint32_t)(0x101b6390u));
  /* 101a5382 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5388u);
  /* 101a5388 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a538b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5390 jg 0x101a53ab */
  if ((!C.zf&&C.sf==C.of)) goto L_101a53ab;
  /* 101a5392 push 0x101b6310 */
  push32((uint32_t)(0x101b6310u));
  /* 101a5397 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a539du);
  /* 101a539d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a53a0 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a53a3 jg 0x101a53ab */
  if ((!C.zf&&C.sf==C.of)) goto L_101a53ab;
  /* 101a53a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a53a7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101a53a9 jmp 0x101a53af */
  goto L_101a53af;
L_101a53ab:;
  /* 101a53ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a53ad push 0x5f */
  push32((uint32_t)(0x5fu));
L_101a53af:;
  /* 101a53af push 0x101b36e8 */
  push32((uint32_t)(0x101b36e8u));
  /* 101a53b4 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a53bau);
  /* 101a53ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a53bd:;
  /* 101a53bd push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a53c2 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a53c8u);
  /* 101a53c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a53cb cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a53ce jle 0x101a5483 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5483;
  /* 101a53d4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a53d6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a53d8 push 0x101b6330 */
  push32((uint32_t)(0x101b6330u));
  /* 101a53dd call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a53e3u);
  /* 101a53e3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a53e5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101a53e7 push 0x101b6338 */
  push32((uint32_t)(0x101b6338u));
  /* 101a53ec call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a53f2u);
  /* 101a53f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a53f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a53f6 push 0x101b6320 */
  push32((uint32_t)(0x101b6320u));
  /* 101a53fb call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5401u);
  /* 101a5401 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5403 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a5405 push 0x101b6278 */
  push32((uint32_t)(0x101b6278u));
  /* 101a540a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5410u);
  /* 101a5410 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5412 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101a5414 push 0x101b6260 */
  push32((uint32_t)(0x101b6260u));
  /* 101a5419 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a541fu);
  /* 101a541f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5421 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5423 push 0x101b6268 */
  push32((uint32_t)(0x101b6268u));
  /* 101a5428 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a542eu);
  /* 101a542e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5431 push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a5436 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a543cu);
  /* 101a543c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a543f cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5442 jle 0x101a5483 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5483;
  /* 101a5444 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5446 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5448 push 0x101b6328 */
  push32((uint32_t)(0x101b6328u));
  /* 101a544d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5453u);
  /* 101a5453 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5455 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5457 push 0x101b6340 */
  push32((uint32_t)(0x101b6340u));
  /* 101a545c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5462u);
  /* 101a5462 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5464 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5466 push 0x101b6280 */
  push32((uint32_t)(0x101b6280u));
  /* 101a546b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5471u);
  /* 101a5471 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5473 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5475 push 0x101b6288 */
  push32((uint32_t)(0x101b6288u));
  /* 101a547a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5480u);
  /* 101a5480 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5483:;
  /* 101a5483 push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a5488 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a548eu);
  /* 101a548e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5491 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5494 jle 0x101a552b */
  if ((C.zf||C.sf!=C.of)) goto L_101a552b;
  /* 101a549a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a549c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a549e push 0x101b38f0 */
  push32((uint32_t)(0x101b38f0u));
  /* 101a54a3 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a54a9u);
  /* 101a54a9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a54ab push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a54ad push 0x101b38f8 */
  push32((uint32_t)(0x101b38f8u));
  /* 101a54b2 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a54b8u);
  /* 101a54b8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a54ba push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a54bc push 0x101b38e8 */
  push32((uint32_t)(0x101b38e8u));
  /* 101a54c1 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a54c7u);
  /* 101a54c7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a54c9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a54cb push 0x101b5f58 */
  push32((uint32_t)(0x101b5f58u));
  /* 101a54d0 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a54d6u);
  /* 101a54d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a54d8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a54da push 0x101b5f48 */
  push32((uint32_t)(0x101b5f48u));
  /* 101a54df call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a54e5u);
  /* 101a54e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a54e7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a54e9 push 0x101b5f50 */
  push32((uint32_t)(0x101b5f50u));
  /* 101a54ee call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a54f4u);
  /* 101a54f4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a54f7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a54f9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a54fb push 0x101b61e8 */
  push32((uint32_t)(0x101b61e8u));
  /* 101a5500 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5506u);
  /* 101a5506 push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a550b call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5511u);
  /* 101a5511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5514 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5517 jle 0x101a552b */
  if ((C.zf||C.sf!=C.of)) goto L_101a552b;
  /* 101a5519 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a551b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a551d push 0x101b61f0 */
  push32((uint32_t)(0x101b61f0u));
  /* 101a5522 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5528u);
  /* 101a5528 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a552b:;
  /* 101a552b push 0x101b36e0 */
  push32((uint32_t)(0x101b36e0u));
  /* 101a5530 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5536u);
  /* 101a5536 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5539 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a553c jle 0x101a555f */
  if ((C.zf||C.sf!=C.of)) goto L_101a555f;
  /* 101a553e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5540 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5542 push 0x101b6240 */
  push32((uint32_t)(0x101b6240u));
  /* 101a5547 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a554du);
  /* 101a554d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a554f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5551 push 0x101b5fa8 */
  push32((uint32_t)(0x101b5fa8u));
  /* 101a5556 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a555cu);
  /* 101a555c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a555f:;
  /* 101a555f push 0x101b6390 */
  push32((uint32_t)(0x101b6390u));
  /* 101a5564 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a556au);
  /* 101a556a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a556d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5570 jle 0x101a5643 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5643;
  /* 101a5576 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5578 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a557a push 0x101b6110 */
  push32((uint32_t)(0x101b6110u));
  /* 101a557f call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5585u);
  /* 101a5585 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5587 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101a5589 push 0x101b6108 */
  push32((uint32_t)(0x101b6108u));
  /* 101a558e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5594u);
  /* 101a5594 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5596 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5598 push 0x101b6100 */
  push32((uint32_t)(0x101b6100u));
  /* 101a559d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a55a3u);
  /* 101a55a3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a55a5 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a55a7 push 0x101b5ff8 */
  push32((uint32_t)(0x101b5ff8u));
  /* 101a55ac call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a55b2u);
  /* 101a55b2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a55b4 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101a55b6 push 0x101b5ff0 */
  push32((uint32_t)(0x101b5ff0u));
  /* 101a55bb call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a55c1u);
  /* 101a55c1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a55c3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a55c5 push 0x101b5fe8 */
  push32((uint32_t)(0x101b5fe8u));
  /* 101a55ca call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a55d0u);
  /* 101a55d0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a55d3 push 0x101b6390 */
  push32((uint32_t)(0x101b6390u));
  /* 101a55d8 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a55deu);
  /* 101a55de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a55e1 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a55e4 jle 0x101a5643 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5643;
  /* 101a55e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a55e8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a55ea push 0x101b60f8 */
  push32((uint32_t)(0x101b60f8u));
  /* 101a55ef call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a55f5u);
  /* 101a55f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a55f7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a55f9 push 0x101b60e8 */
  push32((uint32_t)(0x101b60e8u));
  /* 101a55fe call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5604u);
  /* 101a5604 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5606 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5608 push 0x101b6138 */
  push32((uint32_t)(0x101b6138u));
  /* 101a560d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5613u);
  /* 101a5613 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5615 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5617 push 0x101b5fe0 */
  push32((uint32_t)(0x101b5fe0u));
  /* 101a561c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5622u);
  /* 101a5622 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5624 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5626 push 0x101b5fd8 */
  push32((uint32_t)(0x101b5fd8u));
  /* 101a562b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5631u);
  /* 101a5631 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5633 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5635 push 0x101b5fd0 */
  push32((uint32_t)(0x101b5fd0u));
  /* 101a563a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5640u);
  /* 101a5640 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5643:;
  /* 101a5643 push 0x101b6310 */
  push32((uint32_t)(0x101b6310u));
  /* 101a5648 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a564eu);
  /* 101a564e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5651 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5654 jle 0x101a5726 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5726;
  /* 101a565a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a565c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a565e push 0x101b3728 */
  push32((uint32_t)(0x101b3728u));
  /* 101a5663 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5669u);
  /* 101a5669 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a566b push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a566d push 0x101b3720 */
  push32((uint32_t)(0x101b3720u));
  /* 101a5672 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5678u);
  /* 101a5678 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a567a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a567c push 0x101b3718 */
  push32((uint32_t)(0x101b3718u));
  /* 101a5681 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5687u);
  /* 101a5687 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5689 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a568b push 0x101b3698 */
  push32((uint32_t)(0x101b3698u));
  /* 101a5690 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5696u);
  /* 101a5696 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5698 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a569a push 0x101b3690 */
  push32((uint32_t)(0x101b3690u));
  /* 101a569f call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a56a5u);
  /* 101a56a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a56a7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a56a9 push 0x101b3688 */
  push32((uint32_t)(0x101b3688u));
  /* 101a56ae call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a56b4u);
  /* 101a56b4 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a56b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a56b9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a56bb push 0x101b3680 */
  push32((uint32_t)(0x101b3680u));
  /* 101a56c0 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a56c6u);
  /* 101a56c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a56c8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a56ca push 0x101b3658 */
  push32((uint32_t)(0x101b3658u));
  /* 101a56cf call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a56d5u);
  /* 101a56d5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a56d7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a56d9 push 0x101b3650 */
  push32((uint32_t)(0x101b3650u));
  /* 101a56de call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a56e4u);
  /* 101a56e4 push 0x101b3650 */
  push32((uint32_t)(0x101b3650u));
  /* 101a56e9 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a56efu);
  /* 101a56ef add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a56f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a56f4 je 0x101a5726 */
  if (C.zf) goto L_101a5726;
  /* 101a56f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a56f8 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a56fa push 0x101b3700 */
  push32((uint32_t)(0x101b3700u));
  /* 101a56ff call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5705u);
  /* 101a5705 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5707 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5709 push 0x101b36f8 */
  push32((uint32_t)(0x101b36f8u));
  /* 101a570e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5714u);
  /* 101a5714 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5716 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5718 push 0x101b36f0 */
  push32((uint32_t)(0x101b36f0u));
  /* 101a571d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5723u);
  /* 101a5723 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5726:;
  /* 101a5726 push 0x101b3670 */
  push32((uint32_t)(0x101b3670u));
  /* 101a572b call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5731u);
  /* 101a5731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5734 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5737 jle 0x101a57bf */
  if ((C.zf||C.sf!=C.of)) goto L_101a57bf;
  /* 101a573d push 0x101b3660 */
  push32((uint32_t)(0x101b3660u));
  /* 101a5742 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5748u);
  /* 101a5748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a574b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a574e jge 0x101a57bf */
  if ((C.sf==C.of)) goto L_101a57bf;
  /* 101a5750 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5752 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a5754 push 0x101b38e0 */
  push32((uint32_t)(0x101b38e0u));
  /* 101a5759 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a575fu);
  /* 101a575f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5761 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101a5763 push 0x101b38d8 */
  push32((uint32_t)(0x101b38d8u));
  /* 101a5768 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a576eu);
  /* 101a576e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5770 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5772 push 0x101b38d0 */
  push32((uint32_t)(0x101b38d0u));
  /* 101a5777 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a577du);
  /* 101a577d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a577f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5781 push 0x101b3898 */
  push32((uint32_t)(0x101b3898u));
  /* 101a5786 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a578cu);
  /* 101a578c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a578e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5790 push 0x101b3890 */
  push32((uint32_t)(0x101b3890u));
  /* 101a5795 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a579bu);
  /* 101a579b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a579d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a579f push 0x101b3888 */
  push32((uint32_t)(0x101b3888u));
  /* 101a57a4 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a57aau);
  /* 101a57aa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a57ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a57af push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a57b1 push 0x101b61e8 */
  push32((uint32_t)(0x101b61e8u));
  /* 101a57b6 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a57bcu);
  /* 101a57bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a57bf:;
  /* 101a57bf push 0x101b3660 */
  push32((uint32_t)(0x101b3660u));
  /* 101a57c4 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a57cau);
  /* 101a57ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a57cd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a57d0 jle 0x101a58b1 */
  if ((C.zf||C.sf!=C.of)) goto L_101a58b1;
  /* 101a57d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a57d8 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a57da push 0x101b3638 */
  push32((uint32_t)(0x101b3638u));
  /* 101a57df call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a57e5u);
  /* 101a57e5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a57e7 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 101a57e9 push 0x101b3630 */
  push32((uint32_t)(0x101b3630u));
  /* 101a57ee call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a57f4u);
  /* 101a57f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a57f6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a57f8 push 0x101b3628 */
  push32((uint32_t)(0x101b3628u));
  /* 101a57fd call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5803u);
  /* 101a5803 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5805 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5807 push 0x101b62f8 */
  push32((uint32_t)(0x101b62f8u));
  /* 101a580c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5812u);
  /* 101a5812 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5814 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5816 push 0x101b62f0 */
  push32((uint32_t)(0x101b62f0u));
  /* 101a581b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5821u);
  /* 101a5821 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5823 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101a5825 push 0x101b62e8 */
  push32((uint32_t)(0x101b62e8u));
  /* 101a582a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5830u);
  /* 101a5830 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5833 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5835 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a5837 push 0x101b6370 */
  push32((uint32_t)(0x101b6370u));
  /* 101a583c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5842u);
  /* 101a5842 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5844 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101a5846 push 0x101b6368 */
  push32((uint32_t)(0x101b6368u));
  /* 101a584b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5851u);
  /* 101a5851 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5853 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a5855 push 0x101b63b8 */
  push32((uint32_t)(0x101b63b8u));
  /* 101a585a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5860u);
  /* 101a5860 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5862 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101a5864 push 0x101b63b0 */
  push32((uint32_t)(0x101b63b0u));
  /* 101a5869 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a586fu);
  /* 101a586f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5871 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101a5873 push 0x101b63a8 */
  push32((uint32_t)(0x101b63a8u));
  /* 101a5878 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a587eu);
  /* 101a587e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5880 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 101a5882 push 0x101b63a0 */
  push32((uint32_t)(0x101b63a0u));
  /* 101a5887 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a588du);
  /* 101a588d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5890 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5892 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5894 push 0x101b61e8 */
  push32((uint32_t)(0x101b61e8u));
  /* 101a5899 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a589fu);
  /* 101a589f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a58a1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a58a3 push 0x101b61f0 */
  push32((uint32_t)(0x101b61f0u));
  /* 101a58a8 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a58aeu);
  /* 101a58ae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a58b1:;
  /* 101a58b1 push 0x101b5f60 */
  push32((uint32_t)(0x101b5f60u));
  /* 101a58b6 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a58bcu);
  /* 101a58bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a58bf cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a58c2 jle 0x101a5a20 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5a20;
  /* 101a58c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a58ca push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a58cc push 0x101b36c0 */
  push32((uint32_t)(0x101b36c0u));
  /* 101a58d1 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a58d7u);
  /* 101a58d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a58d9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a58db push 0x101b36c8 */
  push32((uint32_t)(0x101b36c8u));
  /* 101a58e0 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a58e6u);
  /* 101a58e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a58e8 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a58ea push 0x101b36d0 */
  push32((uint32_t)(0x101b36d0u));
  /* 101a58ef call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a58f5u);
  /* 101a58f5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a58f7 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a58f9 push 0x101b36d8 */
  push32((uint32_t)(0x101b36d8u));
  /* 101a58fe call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5904u);
  /* 101a5904 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5906 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5908 push 0x101b36a0 */
  push32((uint32_t)(0x101b36a0u));
  /* 101a590d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5913u);
  /* 101a5913 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5915 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5917 push 0x101b36b0 */
  push32((uint32_t)(0x101b36b0u));
  /* 101a591c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5922u);
  /* 101a5922 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5925 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5927 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5929 push 0x101b3768 */
  push32((uint32_t)(0x101b3768u));
  /* 101a592e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5934u);
  /* 101a5934 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5936 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5938 push 0x101b3770 */
  push32((uint32_t)(0x101b3770u));
  /* 101a593d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5943u);
  /* 101a5943 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5945 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5947 push 0x101b3778 */
  push32((uint32_t)(0x101b3778u));
  /* 101a594c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5952u);
  /* 101a5952 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5954 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5956 push 0x101b3750 */
  push32((uint32_t)(0x101b3750u));
  /* 101a595b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5961u);
  /* 101a5961 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5963 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5965 push 0x101b3758 */
  push32((uint32_t)(0x101b3758u));
  /* 101a596a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5970u);
  /* 101a5970 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5972 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5974 push 0x101b3760 */
  push32((uint32_t)(0x101b3760u));
  /* 101a5979 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a597fu);
  /* 101a597f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5982 push 0x101b5f60 */
  push32((uint32_t)(0x101b5f60u));
  /* 101a5987 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a598du);
  /* 101a598d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5990 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5993 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5995 jle 0x101a59aa */
  if ((C.zf||C.sf!=C.of)) goto L_101a59aa;
  /* 101a5997 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5999 push 0x101b6008 */
  push32((uint32_t)(0x101b6008u));
  /* 101a599e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a59a4u);
  /* 101a59a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a59a6 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a59a8 jmp 0x101a59bb */
  goto L_101a59bb;
L_101a59aa:;
  /* 101a59aa push 0xf */
  push32((uint32_t)(0xfu));
  /* 101a59ac push 0x101b6008 */
  push32((uint32_t)(0x101b6008u));
  /* 101a59b1 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a59b7u);
  /* 101a59b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a59b9 push 0xf */
  push32((uint32_t)(0xfu));
L_101a59bb:;
  /* 101a59bb push 0x101b6068 */
  push32((uint32_t)(0x101b6068u));
  /* 101a59c0 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a59c6u);
  /* 101a59c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a59c9 push 0x101b6008 */
  push32((uint32_t)(0x101b6008u));
  /* 101a59ce call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a59d4u);
  /* 101a59d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a59d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a59d9 je 0x101a59ff */
  if (C.zf) goto L_101a59ff;
  /* 101a59db push 0x101b6068 */
  push32((uint32_t)(0x101b6068u));
  /* 101a59e0 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a59e6u);
  /* 101a59e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a59e9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a59eb je 0x101a59ff */
  if (C.zf) goto L_101a59ff;
  /* 101a59ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a59ef push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a59f1 push 0x101b6060 */
  push32((uint32_t)(0x101b6060u));
  /* 101a59f6 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a59fcu);
  /* 101a59fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a59ff:;
  /* 101a59ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5a01 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5a03 push 0x101b61e8 */
  push32((uint32_t)(0x101b61e8u));
  /* 101a5a08 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5a0eu);
  /* 101a5a0e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5a10 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5a12 push 0x101b61f0 */
  push32((uint32_t)(0x101b61f0u));
  /* 101a5a17 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5a1du);
  /* 101a5a1d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5a20:;
  /* 101a5a20 push 0x101b62e8 */
  push32((uint32_t)(0x101b62e8u));
  /* 101a5a25 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a5a2bu);
  /* 101a5a2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5a2e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a5a30 je 0x101a5aa7 */
  if (C.zf) goto L_101a5aa7;
  /* 101a5a32 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5a34 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5a36 push 0x101b6150 */
  push32((uint32_t)(0x101b6150u));
  /* 101a5a3b call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5a41u);
  /* 101a5a41 push 0x101b6150 */
  push32((uint32_t)(0x101b6150u));
  /* 101a5a46 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a5a4cu);
  /* 101a5a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5a4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a5a51 je 0x101a5aa7 */
  if (C.zf) goto L_101a5aa7;
  /* 101a5a53 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5a55 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5a57 push 0x101b6160 */
  push32((uint32_t)(0x101b6160u));
  /* 101a5a5c call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5a62u);
  /* 101a5a62 push 0x101b6160 */
  push32((uint32_t)(0x101b6160u));
  /* 101a5a67 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a5a6du);
  /* 101a5a6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5a70 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a5a72 je 0x101a5aa7 */
  if (C.zf) goto L_101a5aa7;
  /* 101a5a74 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5a76 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5a78 push 0x101b6158 */
  push32((uint32_t)(0x101b6158u));
  /* 101a5a7d call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5a83u);
  /* 101a5a83 push 0x101b6158 */
  push32((uint32_t)(0x101b6158u));
  /* 101a5a88 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a5a8eu);
  /* 101a5a8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5a91 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a5a93 je 0x101a5aa7 */
  if (C.zf) goto L_101a5aa7;
  /* 101a5a95 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5a97 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5a99 push 0x101b6148 */
  push32((uint32_t)(0x101b6148u));
  /* 101a5a9e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5aa4u);
  /* 101a5aa4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5aa7:;
  /* 101a5aa7 ret  */
  ESPCHK(0x101a52d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x101a5ab0 (305 bytes, 86 insns) */
void f_101a5ab0(void) {
  FTRACE(0x101a5ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a5ab0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5ab2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a5ab4 push 0x101b6358 */
  push32((uint32_t)(0x101b6358u));
  /* 101a5ab9 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5abfu);
  /* 101a5abf push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a5ac4 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5acau);
  /* 101a5aca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5acd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5acf je 0x101a5ae3 */
  if (C.zf) goto L_101a5ae3;
  /* 101a5ad1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5ad3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5ad5 push 0x101b3640 */
  push32((uint32_t)(0x101b3640u));
  /* 101a5ada call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5ae0u);
  /* 101a5ae0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5ae3:;
  /* 101a5ae3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5ae5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5ae7 push 0x101b6058 */
  push32((uint32_t)(0x101b6058u));
  /* 101a5aec call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5af2u);
  /* 101a5af2 push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a5af7 call 0x101a5290 */
  push32(0x101a5afcu); f_101a5290();
  /* 101a5afc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5aff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5b01 jne 0x101a5b11 */
  if (!C.zf) goto L_101a5b11;
  /* 101a5b03 mov eax, dword ptr [0x101b5f38] */
  EAX = (r32((uint32_t)(0x101b5f38)));
  /* 101a5b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5b0a je 0x101a5b23 */
  if (C.zf) goto L_101a5b23;
  /* 101a5b0c cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5b0f je 0x101a5b23 */
  if (C.zf) goto L_101a5b23;
L_101a5b11:;
  /* 101a5b11 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5b13 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101a5b15 push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a5b1a call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5b20u);
  /* 101a5b20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5b23:;
  /* 101a5b23 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a5b28 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5b2eu);
  /* 101a5b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5b31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5b33 je 0x101a5b47 */
  if (C.zf) goto L_101a5b47;
  /* 101a5b35 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5b37 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5b39 push 0x101b6020 */
  push32((uint32_t)(0x101b6020u));
  /* 101a5b3e call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5b44u);
  /* 101a5b44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5b47:;
  /* 101a5b47 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a5b4c call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a5b52u);
  /* 101a5b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5b55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a5b57 je 0x101a5b6b */
  if (C.zf) goto L_101a5b6b;
  /* 101a5b59 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5b5b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5b5d push 0x101b6010 */
  push32((uint32_t)(0x101b6010u));
  /* 101a5b62 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5b68u);
  /* 101a5b68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5b6b:;
  /* 101a5b6b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5b6d push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 101a5b6f push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a5b74 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5b7au);
  /* 101a5b7a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5b7c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101a5b7e push 0x101b60e0 */
  push32((uint32_t)(0x101b60e0u));
  /* 101a5b83 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5b89u);
  /* 101a5b89 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a5b8e call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5b94u);
  /* 101a5b94 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5b97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5b99 je 0x101a5bad */
  if (C.zf) goto L_101a5bad;
  /* 101a5b9b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5b9d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101a5b9f push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a5ba4 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5baau);
  /* 101a5baa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5bad:;
  /* 101a5bad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5baf push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101a5bb1 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a5bb6 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5bbcu);
  /* 101a5bbc push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a5bc1 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5bc7u);
  /* 101a5bc7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5bca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5bcc je 0x101a5be0 */
  if (C.zf) goto L_101a5be0;
  /* 101a5bce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5bd0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5bd2 push 0x101b38c0 */
  push32((uint32_t)(0x101b38c0u));
  /* 101a5bd7 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a5bddu);
  /* 101a5bdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5be0:;
  /* 101a5be0 ret  */
  ESPCHK(0x101a5ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x101a5bf0 (536 bytes, 150 insns) */
void f_101a5bf0(void) {
  FTRACE(0x101a5bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a5bf0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5bf2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5bf4 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a5bf6 push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a5bfb call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5c01u);
  /* 101a5c01 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a5c06 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a5c0cu);
  /* 101a5c0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5c0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5c11 je 0x101a5c38 */
  if (C.zf) goto L_101a5c38;
  /* 101a5c13 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c15 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c17 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a5c19 push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a5c1e call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5c24u);
  /* 101a5c24 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c26 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c28 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a5c2a push 0x101b5fb0 */
  push32((uint32_t)(0x101b5fb0u));
  /* 101a5c2f call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5c35u);
  /* 101a5c35 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5c38:;
  /* 101a5c38 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c3a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c3c push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5c3e push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a5c43 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5c49u);
  /* 101a5c49 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c4b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c4d push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5c4f push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a5c54 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5c5au);
  /* 101a5c5a mov eax, dword ptr [0x101b6294] */
  EAX = (r32((uint32_t)(0x101b6294)));
  /* 101a5c5f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5c62 mov ecx, dword ptr [eax*4 + 0x101b5f78] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101b5f78)));
  /* 101a5c69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a5c6b jne 0x101a5c88 */
  if (!C.zf) goto L_101a5c88;
  /* 101a5c6d call 0x101a5240 */
  push32(0x101a5c72u); f_101a5240();
  /* 101a5c72 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a5c77 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a5c7du);
  /* 101a5c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5c82 je 0x101a5e07 */
  if (C.zf) goto L_101a5e07;
L_101a5c88:;
  /* 101a5c88 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c8a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c8c push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5c8e push 0x101b61c8 */
  push32((uint32_t)(0x101b61c8u));
  /* 101a5c93 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5c99u);
  /* 101a5c99 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c9b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5c9d push 2 */
  push32((uint32_t)(0x2u));
  /* 101a5c9f push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a5ca4 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5caau);
  /* 101a5caa push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a5caf call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a5cb5u);
  /* 101a5cb5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5cb8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5cbb jge 0x101a5cca */
  if ((C.sf==C.of)) goto L_101a5cca;
  /* 101a5cbd call 0x101a2690 */
  push32(0x101a5cc2u); f_101a2690();
  /* 101a5cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5cc4 jne 0x101a5e07 */
  if (!C.zf) goto L_101a5e07;
L_101a5cca:;
  /* 101a5cca push esi */
  push32((uint32_t)(ESI));
  /* 101a5ccb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5ccd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5ccf push 2 */
  push32((uint32_t)(0x2u));
  /* 101a5cd1 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a5cd6 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5cdcu);
  /* 101a5cdc push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a5ce1 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a5ce7u);
  /* 101a5ce7 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a5cec mov esi, eax */
  ESI = (EAX);
  /* 101a5cee call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5cf4u);
  /* 101a5cf4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5cf7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a5cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5cfb pop esi */
  ESI = (pop32());
  /* 101a5cfc jg 0x101a5e07 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a5e07;
  /* 101a5d02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d04 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d06 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5d08 push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a5d0d call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5d13u);
  /* 101a5d13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5d16 call 0x101a27a0 */
  push32(0x101a5d1bu); f_101a27a0();
  /* 101a5d1b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5d1e jge 0x101a5d47 */
  if ((C.sf==C.of)) goto L_101a5d47;
  /* 101a5d20 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d22 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d24 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5d26 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a5d2b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5d31u);
  /* 101a5d31 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a5d36 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a5d3cu);
  /* 101a5d3c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5d3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5d41 je 0x101a5e07 */
  if (C.zf) goto L_101a5e07;
L_101a5d47:;
  /* 101a5d47 call 0x101a5240 */
  push32(0x101a5d4cu); f_101a5240();
  /* 101a5d4c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d50 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a5d52 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a5d57 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5d5du);
  /* 101a5d5d push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a5d62 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a5d68u);
  /* 101a5d68 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5d6b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5d6e jl 0x101a5e07 */
  if ((C.sf!=C.of)) goto L_101a5e07;
  /* 101a5d74 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d76 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d78 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a5d7a push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a5d7f call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5d85u);
  /* 101a5d85 push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a5d8a call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5d90u);
  /* 101a5d90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5d93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5d95 je 0x101a5dab */
  if (C.zf) goto L_101a5dab;
  /* 101a5d97 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d99 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5d9b push 4 */
  push32((uint32_t)(0x4u));
  /* 101a5d9d push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a5da2 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5da8u);
  /* 101a5da8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5dab:;
  /* 101a5dab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5dad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5daf push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5db1 push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a5db6 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5dbcu);
  /* 101a5dbc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5dbe push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101a5dc0 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a5dc2 push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a5dc7 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5dcdu);
  /* 101a5dcd push 0x101b38c0 */
  push32((uint32_t)(0x101b38c0u));
  /* 101a5dd2 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a5dd8u);
  /* 101a5dd8 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5ddb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a5ddd je 0x101a5df3 */
  if (C.zf) goto L_101a5df3;
  /* 101a5ddf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5de1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5de3 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a5de5 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a5dea call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5df0u);
  /* 101a5df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5df3:;
  /* 101a5df3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5df5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5df7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5df9 push 0x101b60d8 */
  push32((uint32_t)(0x101b60d8u));
  /* 101a5dfe call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5e04u);
  /* 101a5e04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5e07:;
  /* 101a5e07 ret  */
  ESPCHK(0x101a5bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x101a5e10 (472 bytes, 137 insns) */
void f_101a5e10(void) {
  FTRACE(0x101a5e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a5e10 push ecx */
  push32((uint32_t)(ECX));
  /* 101a5e11 push 0x101b6258 */
  push32((uint32_t)(0x101b6258u));
  /* 101a5e16 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5e1cu);
  /* 101a5e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5e1f cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5e22 jge 0x101a5e37 */
  if ((C.sf==C.of)) goto L_101a5e37;
  /* 101a5e24 mov eax, dword ptr [0x101b6294] */
  EAX = (r32((uint32_t)(0x101b6294)));
  /* 101a5e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a5e2b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5e2e push eax */
  push32((uint32_t)(EAX));
  /* 101a5e2f call 0x101a26f0 */
  push32(0x101a5e34u); f_101a26f0();
  /* 101a5e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5e37:;
  /* 101a5e37 push 0x101b6258 */
  push32((uint32_t)(0x101b6258u));
  /* 101a5e3c call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5e42u);
  /* 101a5e42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5e45 cmp eax, 0x9c */
  { uint32_t _a=(EAX),_b=(0x9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5e4a jg 0x101a5e5e */
  if ((!C.zf&&C.sf==C.of)) goto L_101a5e5e;
  /* 101a5e4c push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a5e51 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a5e57u);
  /* 101a5e57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5e5c je 0x101a5e72 */
  if (C.zf) goto L_101a5e72;
L_101a5e5e:;
  /* 101a5e5e mov ecx, dword ptr [0x101b6294] */
  ECX = (r32((uint32_t)(0x101b6294)));
  /* 101a5e64 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5e66 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5e69 push ecx */
  push32((uint32_t)(ECX));
  /* 101a5e6a call 0x101a26f0 */
  push32(0x101a5e6fu); f_101a26f0();
  /* 101a5e6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5e72:;
  /* 101a5e72 push esi */
  push32((uint32_t)(ESI));
  /* 101a5e73 push edi */
  push32((uint32_t)(EDI));
  /* 101a5e74 mov edi, 2 */
  EDI = (0x2u);
L_101a5e79:;
  /* 101a5e79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5e7b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a5e7d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a5e82 push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a5e87 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5e8du);
  /* 101a5e8d push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a5e92 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a5e98u);
  /* 101a5e98 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5e9b cmp eax, 0x8c */
  { uint32_t _a=(EAX),_b=(0x8cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5ea0 jge 0x101a5ebb */
  if ((C.sf==C.of)) goto L_101a5ebb;
  /* 101a5ea2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5ea4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a5ea6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a5eab push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a5eb0 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5eb6u);
  /* 101a5eb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5eb9 jmp 0x101a5ee6 */
  goto L_101a5ee6;
L_101a5ebb:;
  /* 101a5ebb push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101a5ebd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a5ebf push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a5ec4 push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a5ec9 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5ecfu);
  /* 101a5ecf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5ed1 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a5ed3 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a5ed8 push 0x101b60c0 */
  push32((uint32_t)(0x101b60c0u));
  /* 101a5edd call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5ee3u);
  /* 101a5ee3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5ee6:;
  /* 101a5ee6 mov edx, dword ptr [0x101b6294] */
  EDX = (r32((uint32_t)(0x101b6294)));
  /* 101a5eec add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5eef push edx */
  push32((uint32_t)(EDX));
  /* 101a5ef0 call 0x101a2710 */
  push32(0x101a5ef5u); f_101a2710();
  /* 101a5ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5efa jne 0x101a5f1d */
  if (!C.zf) goto L_101a5f1d;
  /* 101a5efc call 0x101a27a0 */
  push32(0x101a5f01u); f_101a27a0();
  /* 101a5f01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5f04 jge 0x101a5f1d */
  if ((C.sf==C.of)) goto L_101a5f1d;
  /* 101a5f06 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5f08 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a5f0a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 101a5f0f push 0x101b6258 */
  push32((uint32_t)(0x101b6258u));
  /* 101a5f14 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5f1au);
  /* 101a5f1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a5f1d:;
  /* 101a5f1d mov al, byte ptr [0x101b6294] */
  AL = (r8((uint32_t)(0x101b6294)));
  /* 101a5f22 mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 101a5f26 mov eax, dword ptr [0x101b6498] */
  EAX = (r32((uint32_t)(0x101b6498)));
  /* 101a5f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a5f2d je 0x101a5f45 */
  if (C.zf) goto L_101a5f45;
  /* 101a5f2f mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a5f33 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a5f35 push 0x101b3868 */
  push32((uint32_t)(0x101b3868u));
  /* 101a5f3a push ecx */
  push32((uint32_t)(ECX));
  /* 101a5f3b call eax */
  call_ind((uint32_t)(EAX), 0x101a5f3du);
  /* 101a5f3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5f40 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5f43 jge 0x101a5f85 */
  if ((C.sf==C.of)) goto L_101a5f85;
L_101a5f45:;
  /* 101a5f45 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a5f47 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a5f4du);
  /* 101a5f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5f50 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5f55 jle 0x101a5f85 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5f85;
  /* 101a5f57 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a5f59 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a5f5fu);
  /* 101a5f5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5f62 cmp eax, 0x7d0 */
  { uint32_t _a=(EAX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a5f67 jle 0x101a5f85 */
  if ((C.zf||C.sf!=C.of)) goto L_101a5f85;
  /* 101a5f69 mov esi, 0x1e */
  ESI = (0x1eu);
L_101a5f6e:;
  /* 101a5f6e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5f70 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a5f72 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a5f74 push 0x101b3868 */
  push32((uint32_t)(0x101b3868u));
  /* 101a5f79 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5f7fu);
  /* 101a5f7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5f82 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101a5f83 jne 0x101a5f6e */
  if (!C.zf) goto L_101a5f6e;
L_101a5f85:;
  /* 101a5f85 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a5f8a call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a5f90u);
  /* 101a5f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5f93 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a5f95 je 0x101a5f9b */
  if (C.zf) goto L_101a5f9b;
  /* 101a5f97 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a5f99 jmp 0x101a5f9d */
  goto L_101a5f9d;
L_101a5f9b:;
  /* 101a5f9b push 0x64 */
  push32((uint32_t)(0x64u));
L_101a5f9d:;
  /* 101a5f9d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a5f9f push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a5fa4 push 0x101b6390 */
  push32((uint32_t)(0x101b6390u));
  /* 101a5fa9 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5fafu);
  /* 101a5faf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5fb2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5fb4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a5fb6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a5fbb push 0x101b3660 */
  push32((uint32_t)(0x101b3660u));
  /* 101a5fc0 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5fc6u);
  /* 101a5fc6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a5fc8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a5fca push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a5fcf push 0x101b5f60 */
  push32((uint32_t)(0x101b5f60u));
  /* 101a5fd4 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a5fdau);
  /* 101a5fda add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5fdd dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101a5fde jne 0x101a5e79 */
  if (!C.zf) goto L_101a5e79;
  /* 101a5fe4 pop edi */
  EDI = (pop32());
  /* 101a5fe5 pop esi */
  ESI = (pop32());
  /* 101a5fe6 pop ecx */
  ECX = (pop32());
  /* 101a5fe7 ret  */
  ESPCHK(0x101a5e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x101a5ff0 (789 bytes, 244 insns) */
void f_101a5ff0(void) {
  FTRACE(0x101a5ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a5ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 101a5ff1 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a5ff6 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a5ffcu);
  /* 101a5ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a5fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6001 je 0x101a6303 */
  if (C.zf) goto L_101a6303;
  /* 101a6007 call 0x101a2690 */
  push32(0x101a600cu); f_101a2690();
  /* 101a600c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a600f jne 0x101a6056 */
  if (!C.zf) goto L_101a6056;
  /* 101a6011 mov eax, dword ptr [0x101b6294] */
  EAX = (r32((uint32_t)(0x101b6294)));
  /* 101a6016 push eax */
  push32((uint32_t)(EAX));
  /* 101a6017 call 0x101a2710 */
  push32(0x101a601cu); f_101a2710();
  /* 101a601c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a601f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6021 jne 0x101a6303 */
  if (!C.zf) goto L_101a6303;
  /* 101a6027 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 101a602c push 3 */
  push32((uint32_t)(0x3u));
  /* 101a602e push 2 */
  push32((uint32_t)(0x2u));
  /* 101a6030 call 0x101a2630 */
  push32(0x101a6035u); f_101a2630();
  /* 101a6035 push 0x13880 */
  push32((uint32_t)(0x13880u));
  /* 101a603a push 3 */
  push32((uint32_t)(0x3u));
  /* 101a603c push 0 */
  push32((uint32_t)(0x0u));
  /* 101a603e call 0x101a2630 */
  push32(0x101a6043u); f_101a2630();
  /* 101a6043 mov ecx, dword ptr [0x101b6294] */
  ECX = (r32((uint32_t)(0x101b6294)));
  /* 101a6049 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a604b push ecx */
  push32((uint32_t)(ECX));
  /* 101a604c call 0x101a26f0 */
  push32(0x101a6051u); f_101a26f0();
  /* 101a6051 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6054 pop ecx */
  ECX = (pop32());
  /* 101a6055 ret  */
  ESPCHK(0x101a5ff0u, _esp0);
  ESP += 4; return;
L_101a6056:;
  /* 101a6056 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a605b call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6061u);
  /* 101a6061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6064 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6066 je 0x101a6303 */
  if (C.zf) goto L_101a6303;
  /* 101a606c mov edx, dword ptr [0x101b6294] */
  EDX = (r32((uint32_t)(0x101b6294)));
  /* 101a6072 push edx */
  push32((uint32_t)(EDX));
  /* 101a6073 call 0x101a2710 */
  push32(0x101a6078u); f_101a2710();
  /* 101a6078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a607b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a607d jne 0x101a60f2 */
  if (!C.zf) goto L_101a60f2;
  /* 101a607f push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 101a6084 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a6086 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a6088 call 0x101a2630 */
  push32(0x101a608du); f_101a2630();
  /* 101a608d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6090 call 0x101a2690 */
  push32(0x101a6095u); f_101a2690();
  /* 101a6095 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6098 jne 0x101a60b9 */
  if (!C.zf) goto L_101a60b9;
  /* 101a609a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a609f push 0 */
  push32((uint32_t)(0x0u));
  /* 101a60a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a60a3 call 0x101a2630 */
  push32(0x101a60a8u); f_101a2630();
  /* 101a60a8 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a60ad push 2 */
  push32((uint32_t)(0x2u));
  /* 101a60af push 4 */
  push32((uint32_t)(0x4u));
  /* 101a60b1 call 0x101a2630 */
  push32(0x101a60b6u); f_101a2630();
  /* 101a60b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a60b9:;
  /* 101a60b9 call 0x101a2690 */
  push32(0x101a60beu); f_101a2690();
  /* 101a60be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a60c1 jne 0x101a60e2 */
  if (!C.zf) goto L_101a60e2;
  /* 101a60c3 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101a60c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a60ca push 4 */
  push32((uint32_t)(0x4u));
  /* 101a60cc call 0x101a2630 */
  push32(0x101a60d1u); f_101a2630();
  /* 101a60d1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 101a60d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a60d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a60da call 0x101a2630 */
  push32(0x101a60dfu); f_101a2630();
  /* 101a60df add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a60e2:;
  /* 101a60e2 mov eax, dword ptr [0x101b6294] */
  EAX = (r32((uint32_t)(0x101b6294)));
  /* 101a60e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a60e9 push eax */
  push32((uint32_t)(EAX));
  /* 101a60ea call 0x101a26f0 */
  push32(0x101a60efu); f_101a26f0();
  /* 101a60ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a60f2:;
  /* 101a60f2 push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a60f7 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a60fdu);
  /* 101a60fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6100 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6102 je 0x101a6174 */
  if (C.zf) goto L_101a6174;
  /* 101a6104 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a6109 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a610fu);
  /* 101a610f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6112 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6114 jne 0x101a6174 */
  if (!C.zf) goto L_101a6174;
  /* 101a6116 push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a611b call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6121u);
  /* 101a6121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6126 je 0x101a6174 */
  if (C.zf) goto L_101a6174;
  /* 101a6128 mov eax, dword ptr [0x101b649c] */
  EAX = (r32((uint32_t)(0x101b649c)));
  /* 101a612d mov cl, byte ptr [0x101b6294] */
  CL = (r8((uint32_t)(0x101b6294)));
  /* 101a6133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6135 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101a6139 je 0x101a614e */
  if (C.zf) goto L_101a614e;
  /* 101a613b mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101a613f push 5 */
  push32((uint32_t)(0x5u));
  /* 101a6141 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a6146 push edx */
  push32((uint32_t)(EDX));
  /* 101a6147 call eax */
  call_ind((uint32_t)(EAX), 0x101a6149u);
  /* 101a6149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a614c jmp 0x101a6150 */
  goto L_101a6150;
L_101a614e:;
  /* 101a614e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101a6150:;
  /* 101a6150 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101a6153 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a6155 lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101a6158 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101a615d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a615f sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101a6162 mov eax, edx */
  EAX = (EDX);
  /* 101a6164 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101a6167 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6169 push edx */
  push32((uint32_t)(EDX));
  /* 101a616a push 5 */
  push32((uint32_t)(0x5u));
  /* 101a616c call 0x101a2fb0 */
  push32(0x101a6171u); f_101a2fb0();
  /* 101a6171 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6174:;
  /* 101a6174 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a6179 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a617fu);
  /* 101a617f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6182 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6184 je 0x101a6299 */
  if (C.zf) goto L_101a6299;
  /* 101a618a push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a618f call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a6195u);
  /* 101a6195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6198 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a619a jne 0x101a6299 */
  if (!C.zf) goto L_101a6299;
  /* 101a61a0 mov eax, dword ptr [0x101b649c] */
  EAX = (r32((uint32_t)(0x101b649c)));
  /* 101a61a5 mov cl, byte ptr [0x101b6294] */
  CL = (r8((uint32_t)(0x101b6294)));
  /* 101a61ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a61ad mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101a61b1 je 0x101a61c6 */
  if (C.zf) goto L_101a61c6;
  /* 101a61b3 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101a61b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a61b9 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a61be push edx */
  push32((uint32_t)(EDX));
  /* 101a61bf call eax */
  call_ind((uint32_t)(EAX), 0x101a61c1u);
  /* 101a61c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a61c4 jmp 0x101a61c8 */
  goto L_101a61c8;
L_101a61c6:;
  /* 101a61c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101a61c8:;
  /* 101a61c8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101a61cb push 2 */
  push32((uint32_t)(0x2u));
  /* 101a61cd lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101a61d0 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101a61d5 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a61d7 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101a61da mov eax, edx */
  EAX = (EDX);
  /* 101a61dc shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101a61df add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a61e1 push edx */
  push32((uint32_t)(EDX));
  /* 101a61e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a61e4 call 0x101a2fb0 */
  push32(0x101a61e9u); f_101a2fb0();
  /* 101a61e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a61ec test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a61ee je 0x101a6299 */
  if (C.zf) goto L_101a6299;
  /* 101a61f4 mov eax, dword ptr [0x101b649c] */
  EAX = (r32((uint32_t)(0x101b649c)));
  /* 101a61f9 mov cl, byte ptr [0x101b6294] */
  CL = (r8((uint32_t)(0x101b6294)));
  /* 101a61ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6201 mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101a6205 je 0x101a621a */
  if (C.zf) goto L_101a621a;
  /* 101a6207 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101a620b push 1 */
  push32((uint32_t)(0x1u));
  /* 101a620d push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a6212 push edx */
  push32((uint32_t)(EDX));
  /* 101a6213 call eax */
  call_ind((uint32_t)(EAX), 0x101a6215u);
  /* 101a6215 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6218 jmp 0x101a621c */
  goto L_101a621c;
L_101a621a:;
  /* 101a621a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101a621c:;
  /* 101a621c lea ecx, [eax*8] */
  ECX = ((uint32_t)(EAX*8));
  /* 101a6223 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a6225 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a6227 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 101a622a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101a622d mov eax, 0x51eb851f */
  EAX = (0x51eb851fu);
  /* 101a6232 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a6234 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 101a6237 mov eax, edx */
  EAX = (EDX);
  /* 101a6239 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101a623c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a623e push edx */
  push32((uint32_t)(EDX));
  /* 101a623f push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6241 call 0x101a2fb0 */
  push32(0x101a6246u); f_101a2fb0();
  /* 101a6246 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6249 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a624b je 0x101a6299 */
  if (C.zf) goto L_101a6299;
  /* 101a624d mov eax, dword ptr [0x101b649c] */
  EAX = (r32((uint32_t)(0x101b649c)));
  /* 101a6252 mov cl, byte ptr [0x101b6294] */
  CL = (r8((uint32_t)(0x101b6294)));
  /* 101a6258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a625a mov byte ptr [esp], cl */
  w8((uint32_t)(ESP), (CL));
  /* 101a625e je 0x101a6273 */
  if (C.zf) goto L_101a6273;
  /* 101a6260 mov edx, dword ptr [esp] */
  EDX = (r32((uint32_t)(ESP)));
  /* 101a6264 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a6266 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a626b push edx */
  push32((uint32_t)(EDX));
  /* 101a626c call eax */
  call_ind((uint32_t)(EAX), 0x101a626eu);
  /* 101a626e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6271 jmp 0x101a6275 */
  goto L_101a6275;
L_101a6273:;
  /* 101a6273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101a6275:;
  /* 101a6275 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 101a6278 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a627a lea ecx, [eax + ecx*2] */
  ECX = ((uint32_t)(EAX + ECX*2));
  /* 101a627d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101a6282 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a6284 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101a6287 mov eax, edx */
  EAX = (EDX);
  /* 101a6289 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101a628c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a628e push edx */
  push32((uint32_t)(EDX));
  /* 101a628f push 4 */
  push32((uint32_t)(0x4u));
  /* 101a6291 call 0x101a2fb0 */
  push32(0x101a6296u); f_101a2fb0();
  /* 101a6296 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6299:;
  /* 101a6299 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a629b call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a62a1u);
  /* 101a62a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a62a4 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a62a9 jle 0x101a62ce */
  if ((C.zf||C.sf!=C.of)) goto L_101a62ce;
  /* 101a62ab push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101a62b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a62b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a62b4 call 0x101a2630 */
  push32(0x101a62b9u); f_101a2630();
  /* 101a62b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a62bb call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a62c1u);
  /* 101a62c1 push eax */
  push32((uint32_t)(EAX));
  /* 101a62c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a62c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a62c6 call 0x101a2630 */
  push32(0x101a62cbu); f_101a2630();
  /* 101a62cb add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a62ce:;
  /* 101a62ce push 0 */
  push32((uint32_t)(0x0u));
  /* 101a62d0 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a62d6u);
  /* 101a62d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a62d9 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a62de jle 0x101a6303 */
  if ((C.zf||C.sf!=C.of)) goto L_101a6303;
  /* 101a62e0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101a62e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a62e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a62e9 call 0x101a2630 */
  push32(0x101a62eeu); f_101a2630();
  /* 101a62ee push 0 */
  push32((uint32_t)(0x0u));
  /* 101a62f0 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a62f6u);
  /* 101a62f6 push eax */
  push32((uint32_t)(EAX));
  /* 101a62f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a62f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a62fb call 0x101a2630 */
  push32(0x101a6300u); f_101a2630();
  /* 101a6300 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6303:;
  /* 101a6303 pop ecx */
  ECX = (pop32());
  /* 101a6304 ret  */
  ESPCHK(0x101a5ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006310 @ 0x101a6310 (818 bytes, 268 insns) */
void f_101a6310(void) {
  FTRACE(0x101a6310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6310 push ecx */
  push32((uint32_t)(ECX));
  /* 101a6311 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a6313 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a6315 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a6317 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a631du);
  /* 101a631d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6320 call dword ptr [0x101b6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6550))), 0x101a6326u);
  /* 101a6326 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6328 je 0x101a6640 */
  if (C.zf) goto L_101a6640;
  /* 101a632e push 4 */
  push32((uint32_t)(0x4u));
  /* 101a6330 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a6332 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a6334 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a633au);
  /* 101a633a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a633d call 0x101a2690 */
  push32(0x101a6342u); f_101a2690();
  /* 101a6342 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6345 je 0x101a6640 */
  if (C.zf) goto L_101a6640;
  /* 101a634b call dword ptr [0x101b6550] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6550))), 0x101a6351u);
  /* 101a6351 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6353 je 0x101a6631 */
  if (C.zf) goto L_101a6631;
  /* 101a6359 push esi */
  push32((uint32_t)(ESI));
  /* 101a635a push edi */
  push32((uint32_t)(EDI));
  /* 101a635b push 4 */
  push32((uint32_t)(0x4u));
  /* 101a635d push 4 */
  push32((uint32_t)(0x4u));
  /* 101a635f push 9 */
  push32((uint32_t)(0x9u));
  /* 101a6361 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a6367u);
  /* 101a6367 push 0x101b60e0 */
  push32((uint32_t)(0x101b60e0u));
  /* 101a636c call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a6372u);
  /* 101a6372 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6375 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6377 jne 0x101a63df */
  if (!C.zf) goto L_101a63df;
  /* 101a6379 mov al, byte ptr [0x101b6294] */
  AL = (r8((uint32_t)(0x101b6294)));
  /* 101a637e mov byte ptr [esp + 8], al */
  w8((uint32_t)(ESP + 0x8), (AL));
  /* 101a6382 mov eax, dword ptr [0x101b649c] */
  EAX = (r32((uint32_t)(0x101b649c)));
  /* 101a6387 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6389 je 0x101a63a0 */
  if (C.zf) goto L_101a63a0;
  /* 101a638b mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a638f push 3 */
  push32((uint32_t)(0x3u));
  /* 101a6391 push 0x101b60e0 */
  push32((uint32_t)(0x101b60e0u));
  /* 101a6396 push ecx */
  push32((uint32_t)(ECX));
  /* 101a6397 call eax */
  call_ind((uint32_t)(EAX), 0x101a6399u);
  /* 101a6399 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a639c mov esi, eax */
  ESI = (EAX);
  /* 101a639e jmp 0x101a63a2 */
  goto L_101a63a2;
L_101a63a0:;
  /* 101a63a0 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101a63a2:;
  /* 101a63a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a63a4 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a63aau);
  /* 101a63aa lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 101a63ad mov edi, eax */
  EDI = (EAX);
  /* 101a63af mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101a63b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a63b7 lea ecx, [esi + edx*2] */
  ECX = ((uint32_t)(ESI + EDX*2));
  /* 101a63ba imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a63bc sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101a63bf mov eax, edx */
  EAX = (EDX);
  /* 101a63c1 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101a63c4 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a63c6 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a63c8 jge 0x101a63d0 */
  if ((C.sf==C.of)) goto L_101a63d0;
  /* 101a63ca push 4 */
  push32((uint32_t)(0x4u));
  /* 101a63cc push 4 */
  push32((uint32_t)(0x4u));
  /* 101a63ce jmp 0x101a63d4 */
  goto L_101a63d4;
L_101a63d0:;
  /* 101a63d0 push 6 */
  push32((uint32_t)(0x6u));
  /* 101a63d2 push 6 */
  push32((uint32_t)(0x6u));
L_101a63d4:;
  /* 101a63d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a63d6 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a63dcu);
  /* 101a63dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a63df:;
  /* 101a63df push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a63e4 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a63eau);
  /* 101a63ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a63ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a63ef jne 0x101a6458 */
  if (!C.zf) goto L_101a6458;
  /* 101a63f1 mov eax, dword ptr [0x101b649c] */
  EAX = (r32((uint32_t)(0x101b649c)));
  /* 101a63f6 mov cl, byte ptr [0x101b6294] */
  CL = (r8((uint32_t)(0x101b6294)));
  /* 101a63fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a63fe mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 101a6402 je 0x101a6419 */
  if (C.zf) goto L_101a6419;
  /* 101a6404 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a6408 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a640a push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a640f push edx */
  push32((uint32_t)(EDX));
  /* 101a6410 call eax */
  call_ind((uint32_t)(EAX), 0x101a6412u);
  /* 101a6412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6415 mov esi, eax */
  ESI = (EAX);
  /* 101a6417 jmp 0x101a641b */
  goto L_101a641b;
L_101a6419:;
  /* 101a6419 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101a641b:;
  /* 101a641b push 3 */
  push32((uint32_t)(0x3u));
  /* 101a641d call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a6423u);
  /* 101a6423 mov edi, eax */
  EDI = (EAX);
  /* 101a6425 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 101a6428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a642b lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 101a642e mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101a6433 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a6435 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101a6438 mov ecx, edx */
  ECX = (EDX);
  /* 101a643a shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 101a643d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a643f cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6441 jge 0x101a6449 */
  if ((C.sf==C.of)) goto L_101a6449;
  /* 101a6443 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a6445 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a6447 jmp 0x101a644d */
  goto L_101a644d;
L_101a6449:;
  /* 101a6449 push 6 */
  push32((uint32_t)(0x6u));
  /* 101a644b push 6 */
  push32((uint32_t)(0x6u));
L_101a644d:;
  /* 101a644d push 9 */
  push32((uint32_t)(0x9u));
  /* 101a644f call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a6455u);
  /* 101a6455 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6458:;
  /* 101a6458 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a645d call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a6463u);
  /* 101a6463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6466 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6468 jne 0x101a64cf */
  if (!C.zf) goto L_101a64cf;
  /* 101a646a mov eax, dword ptr [0x101b649c] */
  EAX = (r32((uint32_t)(0x101b649c)));
  /* 101a646f mov dl, byte ptr [0x101b6294] */
  DL = (r8((uint32_t)(0x101b6294)));
  /* 101a6475 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6477 mov byte ptr [esp + 8], dl */
  w8((uint32_t)(ESP + 0x8), (DL));
  /* 101a647b je 0x101a6492 */
  if (C.zf) goto L_101a6492;
  /* 101a647d mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a6481 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a6483 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a6488 push ecx */
  push32((uint32_t)(ECX));
  /* 101a6489 call eax */
  call_ind((uint32_t)(EAX), 0x101a648bu);
  /* 101a648b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a648e mov esi, eax */
  ESI = (EAX);
  /* 101a6490 jmp 0x101a6494 */
  goto L_101a6494;
L_101a6492:;
  /* 101a6492 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101a6494:;
  /* 101a6494 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a6496 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a649cu);
  /* 101a649c lea edx, [esi + esi*2] */
  EDX = ((uint32_t)(ESI + ESI*2));
  /* 101a649f mov edi, eax */
  EDI = (EAX);
  /* 101a64a1 mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101a64a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a64a9 lea ecx, [esi + edx*4] */
  ECX = ((uint32_t)(ESI + EDX*4));
  /* 101a64ac imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a64ae sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101a64b1 mov eax, edx */
  EAX = (EDX);
  /* 101a64b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a64b5 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101a64b8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a64ba push 9 */
  push32((uint32_t)(0x9u));
  /* 101a64bc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a64be jge 0x101a64c4 */
  if ((C.sf==C.of)) goto L_101a64c4;
  /* 101a64c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a64c2 jmp 0x101a64c6 */
  goto L_101a64c6;
L_101a64c4:;
  /* 101a64c4 push 6 */
  push32((uint32_t)(0x6u));
L_101a64c6:;
  /* 101a64c6 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a64ccu);
  /* 101a64cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a64cf:;
  /* 101a64cf push 0x101b6320 */
  push32((uint32_t)(0x101b6320u));
  /* 101a64d4 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a64dau);
  /* 101a64da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a64dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a64df je 0x101a64f3 */
  if (C.zf) goto L_101a64f3;
  /* 101a64e1 push 0x101b6268 */
  push32((uint32_t)(0x101b6268u));
  /* 101a64e6 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a64ecu);
  /* 101a64ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a64ef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a64f1 jne 0x101a6514 */
  if (!C.zf) goto L_101a6514;
L_101a64f3:;
  /* 101a64f3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a64f5 call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a64fbu);
  /* 101a64fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a64fe cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6503 jge 0x101a6514 */
  if ((C.sf==C.of)) goto L_101a6514;
  /* 101a6505 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6507 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a6509 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a650b call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a6511u);
  /* 101a6511 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6514:;
  /* 101a6514 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a6519 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a651fu);
  /* 101a651f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6524 jne 0x101a6597 */
  if (!C.zf) goto L_101a6597;
  /* 101a6526 call 0x101a27a0 */
  push32(0x101a652bu); f_101a27a0();
  /* 101a652b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a652e jge 0x101a6597 */
  if ((C.sf==C.of)) goto L_101a6597;
  /* 101a6530 mov eax, dword ptr [0x101b6498] */
  EAX = (r32((uint32_t)(0x101b6498)));
  /* 101a6535 mov cl, byte ptr [0x101b6294] */
  CL = (r8((uint32_t)(0x101b6294)));
  /* 101a653b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a653d mov byte ptr [esp + 8], cl */
  w8((uint32_t)(ESP + 0x8), (CL));
  /* 101a6541 je 0x101a6558 */
  if (C.zf) goto L_101a6558;
  /* 101a6543 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a6547 push 2 */
  push32((uint32_t)(0x2u));
  /* 101a6549 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a654e push edx */
  push32((uint32_t)(EDX));
  /* 101a654f call eax */
  call_ind((uint32_t)(EAX), 0x101a6551u);
  /* 101a6551 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6554 mov esi, eax */
  ESI = (EAX);
  /* 101a6556 jmp 0x101a655a */
  goto L_101a655a;
L_101a6558:;
  /* 101a6558 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_101a655a:;
  /* 101a655a push 2 */
  push32((uint32_t)(0x2u));
  /* 101a655c call dword ptr [0x101b651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b651c))), 0x101a6562u);
  /* 101a6562 mov edi, eax */
  EDI = (EAX);
  /* 101a6564 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 101a6567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a656a lea ecx, [esi + eax*2] */
  ECX = ((uint32_t)(ESI + EAX*2));
  /* 101a656d mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 101a6572 imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101a6574 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 101a6577 mov ecx, edx */
  ECX = (EDX);
  /* 101a6579 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 101a657c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a657e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6580 jge 0x101a6588 */
  if ((C.sf==C.of)) goto L_101a6588;
  /* 101a6582 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a6584 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a6586 jmp 0x101a658c */
  goto L_101a658c;
L_101a6588:;
  /* 101a6588 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a658a push 7 */
  push32((uint32_t)(0x7u));
L_101a658c:;
  /* 101a658c push 9 */
  push32((uint32_t)(0x9u));
  /* 101a658e call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a6594u);
  /* 101a6594 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6597:;
  /* 101a6597 push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a659c call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a65a2u);
  /* 101a65a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a65a5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a65a7 pop edi */
  EDI = (pop32());
  /* 101a65a8 pop esi */
  ESI = (pop32());
  /* 101a65a9 jne 0x101a65ba */
  if (!C.zf) goto L_101a65ba;
  /* 101a65ab push 1 */
  push32((uint32_t)(0x1u));
  /* 101a65ad push 1 */
  push32((uint32_t)(0x1u));
  /* 101a65af push 9 */
  push32((uint32_t)(0x9u));
  /* 101a65b1 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a65b7u);
  /* 101a65b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a65ba:;
  /* 101a65ba push 0x101b6058 */
  push32((uint32_t)(0x101b6058u));
  /* 101a65bf call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a65c5u);
  /* 101a65c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a65c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a65ca je 0x101a65de */
  if (C.zf) goto L_101a65de;
  /* 101a65cc push 0x101b3640 */
  push32((uint32_t)(0x101b3640u));
  /* 101a65d1 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a65d7u);
  /* 101a65d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a65da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a65dc jne 0x101a65ed */
  if (!C.zf) goto L_101a65ed;
L_101a65de:;
  /* 101a65de push 1 */
  push32((uint32_t)(0x1u));
  /* 101a65e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a65e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a65e4 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a65eau);
  /* 101a65ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a65ed:;
  /* 101a65ed push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a65f2 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a65f8u);
  /* 101a65f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a65fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a65fd jne 0x101a660e */
  if (!C.zf) goto L_101a660e;
  /* 101a65ff push 4 */
  push32((uint32_t)(0x4u));
  /* 101a6601 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a6603 push 6 */
  push32((uint32_t)(0x6u));
  /* 101a6605 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a660bu);
  /* 101a660b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a660e:;
  /* 101a660e push 0x101b6358 */
  push32((uint32_t)(0x101b6358u));
  /* 101a6613 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a6619u);
  /* 101a6619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a661c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a661e jne 0x101a6640 */
  if (!C.zf) goto L_101a6640;
  /* 101a6620 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6622 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6624 push 9 */
  push32((uint32_t)(0x9u));
  /* 101a6626 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a662cu);
  /* 101a662c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a662f pop ecx */
  ECX = (pop32());
  /* 101a6630 ret  */
  ESPCHK(0x101a6310u, _esp0);
  ESP += 4; return;
L_101a6631:;
  /* 101a6631 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a6633 push 6 */
  push32((uint32_t)(0x6u));
  /* 101a6635 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a6637 call dword ptr [0x101b64f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64f4))), 0x101a663du);
  /* 101a663d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6640:;
  /* 101a6640 pop ecx */
  ECX = (pop32());
  /* 101a6641 ret  */
  ESPCHK(0x101a6310u, _esp0);
  ESP += 4; return;
}

/* FUN_10006650 @ 0x101a6650 (174 bytes, 50 insns) */
void f_101a6650(void) {
  FTRACE(0x101a6650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6650 push 0x101b6578 */
  push32((uint32_t)(0x101b6578u));
  /* 101a6655 call 0x101a2740 */
  push32(0x101a665au); f_101a2740();
  /* 101a665a push 0x101b6320 */
  push32((uint32_t)(0x101b6320u));
  /* 101a665f call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a6665u);
  /* 101a6665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6668 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a666a je 0x101a668c */
  if (C.zf) goto L_101a668c;
  /* 101a666c push 0x101b6268 */
  push32((uint32_t)(0x101b6268u));
  /* 101a6671 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a6677u);
  /* 101a6677 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a667a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a667c je 0x101a668c */
  if (C.zf) goto L_101a668c;
  /* 101a667e push 0x101af16c */
  push32((uint32_t)(0x101af16cu));
  /* 101a6683 call 0x101a2740 */
  push32(0x101a6688u); f_101a2740();
  /* 101a6688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a668b ret  */
  ESPCHK(0x101a6650u, _esp0);
  ESP += 4; return;
L_101a668c:;
  /* 101a668c mov eax, dword ptr [0x101b5f38] */
  EAX = (r32((uint32_t)(0x101b5f38)));
  /* 101a6691 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6694 je 0x101a66f2 */
  if (C.zf) goto L_101a66f2;
  /* 101a6696 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6699 je 0x101a66f2 */
  if (C.zf) goto L_101a66f2;
  /* 101a669b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a669e je 0x101a66f2 */
  if (C.zf) goto L_101a66f2;
  /* 101a66a0 push 0x101b6250 */
  push32((uint32_t)(0x101b6250u));
  /* 101a66a5 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a66abu);
  /* 101a66ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a66ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a66b0 je 0x101a66d2 */
  if (C.zf) goto L_101a66d2;
  /* 101a66b2 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a66b7 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a66bdu);
  /* 101a66bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a66c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a66c2 jne 0x101a66d2 */
  if (!C.zf) goto L_101a66d2;
  /* 101a66c4 push 0x101b6578 */
  push32((uint32_t)(0x101b6578u));
  /* 101a66c9 call 0x101a2740 */
  push32(0x101a66ceu); f_101a2740();
  /* 101a66ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a66d1 ret  */
  ESPCHK(0x101a6650u, _esp0);
  ESP += 4; return;
L_101a66d2:;
  /* 101a66d2 push 0x101b6130 */
  push32((uint32_t)(0x101b6130u));
  /* 101a66d7 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a66ddu);
  /* 101a66dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a66e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a66e2 je 0x101a66fd */
  if (C.zf) goto L_101a66fd;
  /* 101a66e4 push 0x101af1d8 */
  push32((uint32_t)(0x101af1d8u));
  /* 101a66e9 call 0x101a2740 */
  push32(0x101a66eeu); f_101a2740();
  /* 101a66ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a66f1 ret  */
  ESPCHK(0x101a6650u, _esp0);
  ESP += 4; return;
L_101a66f2:;
  /* 101a66f2 push 0x101af1d8 */
  push32((uint32_t)(0x101af1d8u));
  /* 101a66f7 call 0x101a2740 */
  push32(0x101a66fcu); f_101a2740();
  /* 101a66fc pop ecx */
  ECX = (pop32());
L_101a66fd:;
  /* 101a66fd ret  */
  ESPCHK(0x101a6650u, _esp0);
  ESP += 4; return;
}

/* FUN_10006700 @ 0x101a6700 (70 bytes, 22 insns) */
void f_101a6700(void) {
  FTRACE(0x101a6700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6700 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6702 call 0x101a2780 */
  push32(0x101a6707u); f_101a2780();
  /* 101a6707 push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a670c call 0x101a5290 */
  push32(0x101a6711u); f_101a5290();
  /* 101a6711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6716 je 0x101a6722 */
  if (C.zf) goto L_101a6722;
  /* 101a6718 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a671a call 0x101a2780 */
  push32(0x101a671fu); f_101a2780();
  /* 101a671f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6722:;
  /* 101a6722 call 0x101a2790 */
  push32(0x101a6727u); f_101a2790();
  /* 101a6727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6729 jg 0x101a673d */
  if ((!C.zf&&C.sf==C.of)) goto L_101a673d;
  /* 101a672b push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a6730 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6736u);
  /* 101a6736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a673b jle 0x101a6745 */
  if ((C.zf||C.sf!=C.of)) goto L_101a6745;
L_101a673d:;
  /* 101a673d push 0 */
  push32((uint32_t)(0x0u));
  /* 101a673f call 0x101a2780 */
  push32(0x101a6744u); f_101a2780();
  /* 101a6744 pop ecx */
  ECX = (pop32());
L_101a6745:;
  /* 101a6745 ret  */
  ESPCHK(0x101a6700u, _esp0);
  ESP += 4; return;
}

/* FUN_10006750 @ 0x101a6750 (235 bytes, 66 insns) */
void f_101a6750(void) {
  FTRACE(0x101a6750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6750 push 0x101b6178 */
  push32((uint32_t)(0x101b6178u));
  /* 101a6755 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a675bu);
  /* 101a675b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a675e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6760 je 0x101a6776 */
  if (C.zf) goto L_101a6776;
  /* 101a6762 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a6764 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a6766 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a6768 push 0x101b6350 */
  push32((uint32_t)(0x101b6350u));
  /* 101a676d call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6773u);
  /* 101a6773 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6776:;
  /* 101a6776 push 0x101b6090 */
  push32((uint32_t)(0x101b6090u));
  /* 101a677b call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a6781u);
  /* 101a6781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6784 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6786 je 0x101a679c */
  if (C.zf) goto L_101a679c;
  /* 101a6788 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a678a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a678c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a678e push 0x101b3648 */
  push32((uint32_t)(0x101b3648u));
  /* 101a6793 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6799u);
  /* 101a6799 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a679c:;
  /* 101a679c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a679e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101a67a0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a67a2 push 0x101b38a8 */
  push32((uint32_t)(0x101b38a8u));
  /* 101a67a7 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a67adu);
  /* 101a67ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a67af push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a67b1 push 0x101b61b8 */
  push32((uint32_t)(0x101b61b8u));
  /* 101a67b6 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a67bcu);
  /* 101a67bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a67be push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a67c0 push 0x101b61b0 */
  push32((uint32_t)(0x101b61b0u));
  /* 101a67c5 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a67cbu);
  /* 101a67cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a67cd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a67cf push 0x101b6180 */
  push32((uint32_t)(0x101b6180u));
  /* 101a67d4 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a67dau);
  /* 101a67da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a67dc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a67de push 0x101b6178 */
  push32((uint32_t)(0x101b6178u));
  /* 101a67e3 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a67e9u);
  /* 101a67e9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a67ec push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a67ee push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a67f0 push 0x101b6188 */
  push32((uint32_t)(0x101b6188u));
  /* 101a67f5 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a67fbu);
  /* 101a67fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a67fd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a67ff push 0x101b6078 */
  push32((uint32_t)(0x101b6078u));
  /* 101a6804 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a680au);
  /* 101a680a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a680c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a680e push 0x101b6080 */
  push32((uint32_t)(0x101b6080u));
  /* 101a6813 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a6819u);
  /* 101a6819 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a681b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a681d push 0x101b6088 */
  push32((uint32_t)(0x101b6088u));
  /* 101a6822 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a6828u);
  /* 101a6828 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a682a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a682c push 0x101b6090 */
  push32((uint32_t)(0x101b6090u));
  /* 101a6831 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a6837u);
  /* 101a6837 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a683a ret  */
  ESPCHK(0x101a6750u, _esp0);
  ESP += 4; return;
}

/* FUN_10006840 @ 0x101a6840 (303 bytes, 90 insns) */
void f_101a6840(void) {
  FTRACE(0x101a6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6840 push ecx */
  push32((uint32_t)(ECX));
  /* 101a6841 push ebx */
  push32((uint32_t)(EBX));
  /* 101a6842 push ebp */
  push32((uint32_t)(EBP));
  /* 101a6843 push esi */
  push32((uint32_t)(ESI));
  /* 101a6844 push edi */
  push32((uint32_t)(EDI));
  /* 101a6845 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a684a call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6850u);
  /* 101a6850 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a6855 mov ebx, eax */
  EBX = (EAX);
  /* 101a6857 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a685du);
  /* 101a685d push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a6862 mov edi, eax */
  EDI = (EAX);
  /* 101a6864 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a686au);
  /* 101a686a push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a686f mov ebp, eax */
  EBP = (EAX);
  /* 101a6871 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a6877u);
  /* 101a6877 push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a687c mov esi, eax */
  ESI = (EAX);
  /* 101a687e call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6884u);
  /* 101a6884 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a6889 mov dword ptr [esp + 0x28], eax */
  w32((uint32_t)(ESP + 0x28), (EAX));
  /* 101a688d call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a6893u);
  /* 101a6893 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 101a6897 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a689a sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a689c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a689e sub esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a68a0 sub esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a68a2 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a68a4 pop edi */
  EDI = (pop32());
  /* 101a68a5 pop esi */
  ESI = (pop32());
  /* 101a68a6 pop ebp */
  EBP = (pop32());
  /* 101a68a7 pop ebx */
  EBX = (pop32());
  /* 101a68a8 jne 0x101a6910 */
  if (!C.zf) goto L_101a6910;
  /* 101a68aa cmp dword ptr [0x101b6190], 0x28 */
  { uint32_t _a=(r32((uint32_t)(0x101b6190))),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a68b1 jle 0x101a6910 */
  if ((C.zf||C.sf!=C.of)) goto L_101a6910;
  /* 101a68b3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a68b5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a68b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a68b9 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a68be call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a68c4u);
  /* 101a68c4 push 0x101b6198 */
  push32((uint32_t)(0x101b6198u));
  /* 101a68c9 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a68cfu);
  /* 101a68cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a68d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a68d4 je 0x101a68ea */
  if (C.zf) goto L_101a68ea;
  /* 101a68d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a68d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a68da push 6 */
  push32((uint32_t)(0x6u));
  /* 101a68dc push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a68e1 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a68e7u);
  /* 101a68e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a68ea:;
  /* 101a68ea push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a68ef call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a68f5u);
  /* 101a68f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a68f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a68fa je 0x101a6910 */
  if (C.zf) goto L_101a6910;
  /* 101a68fc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a68fe push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a6900 push 8 */
  push32((uint32_t)(0x8u));
  /* 101a6902 push 0x101b38b8 */
  push32((uint32_t)(0x101b38b8u));
  /* 101a6907 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a690du);
  /* 101a690d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6910:;
  /* 101a6910 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6912 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101a6914 push 0x101b62c8 */
  push32((uint32_t)(0x101b62c8u));
  /* 101a6919 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a691fu);
  /* 101a691f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6921 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101a6923 push 0x101b62b0 */
  push32((uint32_t)(0x101b62b0u));
  /* 101a6928 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a692eu);
  /* 101a692e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6930 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101a6932 push 0x101b62c0 */
  push32((uint32_t)(0x101b62c0u));
  /* 101a6937 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a693du);
  /* 101a693d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a693f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a6941 push 0x101b62a0 */
  push32((uint32_t)(0x101b62a0u));
  /* 101a6946 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a694cu);
  /* 101a694c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a694e push 0xf */
  push32((uint32_t)(0xfu));
  /* 101a6950 push 0x101b62a8 */
  push32((uint32_t)(0x101b62a8u));
  /* 101a6955 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a695bu);
  /* 101a695b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a695d push 0xa */
  push32((uint32_t)(0xau));
  /* 101a695f push 0x101b6298 */
  push32((uint32_t)(0x101b6298u));
  /* 101a6964 call dword ptr [0x101b64e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e8))), 0x101a696au);
  /* 101a696a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a696d pop ecx */
  ECX = (pop32());
  /* 101a696e ret  */
  ESPCHK(0x101a6840u, _esp0);
  ESP += 4; return;
}

/* FUN_10006970 @ 0x101a6970 (517 bytes, 145 insns) */
void f_101a6970(void) {
  FTRACE(0x101a6970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6970 push esi */
  push32((uint32_t)(ESI));
  /* 101a6971 push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a6976 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a697cu);
  /* 101a697c push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a6981 mov esi, eax */
  ESI = (EAX);
  /* 101a6983 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a6989u);
  /* 101a6989 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a698c sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a698e jne 0x101a69a4 */
  if (!C.zf) goto L_101a69a4;
  /* 101a6990 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6992 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6994 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a6996 push 0x101b6238 */
  push32((uint32_t)(0x101b6238u));
  /* 101a699b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a69a1u);
  /* 101a69a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a69a4:;
  /* 101a69a4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a69a6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a69a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a69aa push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a69af call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a69b5u);
  /* 101a69b5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a69b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a69b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a69bb push 0x101b61c8 */
  push32((uint32_t)(0x101b61c8u));
  /* 101a69c0 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a69c6u);
  /* 101a69c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a69c8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a69ca push 2 */
  push32((uint32_t)(0x2u));
  /* 101a69cc push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a69d1 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a69d7u);
  /* 101a69d7 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a69dc call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a69e2u);
  /* 101a69e2 push 0x101b6230 */
  push32((uint32_t)(0x101b6230u));
  /* 101a69e7 mov esi, eax */
  ESI = (EAX);
  /* 101a69e9 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a69efu);
  /* 101a69ef add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a69f2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a69f4 jne 0x101a6b73 */
  if (!C.zf) goto L_101a6b73;
  /* 101a69fa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a69fc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a69fe push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6a00 push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a6a05 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6a0bu);
  /* 101a6a0b push 0x101b5f00 */
  push32((uint32_t)(0x101b5f00u));
  /* 101a6a10 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6a16u);
  /* 101a6a16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6a1b je 0x101a6b73 */
  if (C.zf) goto L_101a6b73;
  /* 101a6a21 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a23 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a25 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6a27 push 0x101b5fb0 */
  push32((uint32_t)(0x101b5fb0u));
  /* 101a6a2c call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6a32u);
  /* 101a6a32 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a34 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a36 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6a38 push 0x101b5fb8 */
  push32((uint32_t)(0x101b5fb8u));
  /* 101a6a3d call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6a43u);
  /* 101a6a43 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a45 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6a49 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a6a4e call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6a54u);
  /* 101a6a54 push 0x101b3858 */
  push32((uint32_t)(0x101b3858u));
  /* 101a6a59 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6a5fu);
  /* 101a6a5f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6a62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6a64 je 0x101a6b73 */
  if (C.zf) goto L_101a6b73;
  /* 101a6a6a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a6e push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6a70 push 0x101b5fc8 */
  push32((uint32_t)(0x101b5fc8u));
  /* 101a6a75 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6a7bu);
  /* 101a6a7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a7d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6a81 push 0x101b60d8 */
  push32((uint32_t)(0x101b60d8u));
  /* 101a6a86 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6a8cu);
  /* 101a6a8c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a8e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6a92 push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a6a97 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6a9du);
  /* 101a6a9d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6a9f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6aa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6aa3 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a6aa8 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6aaeu);
  /* 101a6aae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6ab1 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a6ab6 call dword ptr [0x101b6530] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6530))), 0x101a6abcu);
  /* 101a6abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6abf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6ac1 je 0x101a6b73 */
  if (C.zf) goto L_101a6b73;
  /* 101a6ac7 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a6acc call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6ad2u);
  /* 101a6ad2 push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a6ad7 mov esi, eax */
  ESI = (EAX);
  /* 101a6ad9 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a6adfu);
  /* 101a6adf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6ae2 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a6ae4 jne 0x101a6b0d */
  if (!C.zf) goto L_101a6b0d;
  /* 101a6ae6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6ae8 call 0x101a2750 */
  push32(0x101a6aedu); f_101a2750();
  /* 101a6aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6af0 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6af3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6af5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6af7 jge 0x101a6afd */
  if ((C.sf==C.of)) goto L_101a6afd;
  /* 101a6af9 push 6 */
  push32((uint32_t)(0x6u));
  /* 101a6afb jmp 0x101a6aff */
  goto L_101a6aff;
L_101a6afd:;
  /* 101a6afd push 4 */
  push32((uint32_t)(0x4u));
L_101a6aff:;
  /* 101a6aff push 0x101b5f98 */
  push32((uint32_t)(0x101b5f98u));
  /* 101a6b04 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6b0au);
  /* 101a6b0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6b0d:;
  /* 101a6b0d push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a6b12 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6b18u);
  /* 101a6b18 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a6b1d mov esi, eax */
  ESI = (EAX);
  /* 101a6b1f call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a6b25u);
  /* 101a6b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6b28 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a6b2a jne 0x101a6b40 */
  if (!C.zf) goto L_101a6b40;
  /* 101a6b2c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6b2e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6b30 push 7 */
  push32((uint32_t)(0x7u));
  /* 101a6b32 push 0x101b60b8 */
  push32((uint32_t)(0x101b60b8u));
  /* 101a6b37 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6b3du);
  /* 101a6b3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6b40:;
  /* 101a6b40 push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a6b45 call dword ptr [0x101b6524] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6524))), 0x101a6b4bu);
  /* 101a6b4b push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a6b50 mov esi, eax */
  ESI = (EAX);
  /* 101a6b52 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a6b58u);
  /* 101a6b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6b5b sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a6b5d jne 0x101a6b73 */
  if (!C.zf) goto L_101a6b73;
  /* 101a6b5f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6b61 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6b63 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a6b65 push 0x101b35f8 */
  push32((uint32_t)(0x101b35f8u));
  /* 101a6b6a call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6b70u);
  /* 101a6b70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6b73:;
  /* 101a6b73 pop esi */
  ESI = (pop32());
  /* 101a6b74 ret  */
  ESPCHK(0x101a6970u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b80 @ 0x101a6b80 (121 bytes, 36 insns) */
void f_101a6b80(void) {
  FTRACE(0x101a6b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6b80 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6b82 call 0x101a2780 */
  push32(0x101a6b87u); f_101a2780();
  /* 101a6b87 push 0x101b3868 */
  push32((uint32_t)(0x101b3868u));
  /* 101a6b8c call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a6b92u);
  /* 101a6b92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6b95 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6b98 jge 0x101a6bad */
  if ((C.sf==C.of)) goto L_101a6bad;
  /* 101a6b9a mov eax, dword ptr [0x101b6294] */
  EAX = (r32((uint32_t)(0x101b6294)));
  /* 101a6b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 101a6ba1 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6ba4 push eax */
  push32((uint32_t)(EAX));
  /* 101a6ba5 call 0x101a26f0 */
  push32(0x101a6baau); f_101a26f0();
  /* 101a6baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6bad:;
  /* 101a6bad push 0x101b3868 */
  push32((uint32_t)(0x101b3868u));
  /* 101a6bb2 call dword ptr [0x101b6520] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6520))), 0x101a6bb8u);
  /* 101a6bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6bbb cmp eax, 0x5f */
  { uint32_t _a=(EAX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6bbe jle 0x101a6bd4 */
  if ((C.zf||C.sf!=C.of)) goto L_101a6bd4;
  /* 101a6bc0 mov ecx, dword ptr [0x101b6294] */
  ECX = (r32((uint32_t)(0x101b6294)));
  /* 101a6bc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6bc8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6bcb push ecx */
  push32((uint32_t)(ECX));
  /* 101a6bcc call 0x101a26f0 */
  push32(0x101a6bd1u); f_101a26f0();
  /* 101a6bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6bd4:;
  /* 101a6bd4 mov edx, dword ptr [0x101b6294] */
  EDX = (r32((uint32_t)(0x101b6294)));
  /* 101a6bda add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6bdd push edx */
  push32((uint32_t)(EDX));
  /* 101a6bde call 0x101a2710 */
  push32(0x101a6be3u); f_101a2710();
  /* 101a6be3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6be5 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101a6be8 push eax */
  push32((uint32_t)(EAX));
  /* 101a6be9 call 0x101a2780 */
  push32(0x101a6beeu); f_101a2780();
  /* 101a6bee push 0 */
  push32((uint32_t)(0x0u));
  /* 101a6bf0 call 0x101a2780 */
  push32(0x101a6bf5u); f_101a2780();
  /* 101a6bf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6bf8 ret  */
  ESPCHK(0x101a6b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c00 @ 0x101a6c00 (86 bytes, 20 insns) */
void f_101a6c00(void) {
  FTRACE(0x101a6c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6c00 mov eax, dword ptr [0x101b6294] */
  EAX = (r32((uint32_t)(0x101b6294)));
  /* 101a6c05 mov ecx, dword ptr [eax*4 + 0x101b5f78] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101b5f78)));
  /* 101a6c0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a6c0e je 0x101a6c15 */
  if (C.zf) goto L_101a6c15;
  /* 101a6c10 call 0x101a6700 */
  push32(0x101a6c15u); f_101a6700();
L_101a6c15:;
  /* 101a6c15 call 0x101a5e10 */
  push32(0x101a6c1au); f_101a5e10();
  /* 101a6c1a call 0x101a6750 */
  push32(0x101a6c1fu); f_101a6750();
  /* 101a6c1f call 0x101a27a0 */
  push32(0x101a6c24u); f_101a27a0();
  /* 101a6c24 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6c27 jge 0x101a6c2e */
  if ((C.sf==C.of)) goto L_101a6c2e;
  /* 101a6c29 call 0x101a6840 */
  push32(0x101a6c2eu); f_101a6840();
L_101a6c2e:;
  /* 101a6c2e call 0x101a5bf0 */
  push32(0x101a6c33u); f_101a5bf0();
  /* 101a6c33 call 0x101a5ab0 */
  push32(0x101a6c38u); f_101a5ab0();
  /* 101a6c38 call 0x101a27a0 */
  push32(0x101a6c3du); f_101a27a0();
  /* 101a6c3d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6c40 jge 0x101a6c47 */
  if ((C.sf==C.of)) goto L_101a6c47;
  /* 101a6c42 call 0x101a52d0 */
  push32(0x101a6c47u); f_101a52d0();
L_101a6c47:;
  /* 101a6c47 call 0x101a5ff0 */
  push32(0x101a6c4cu); f_101a5ff0();
  /* 101a6c4c call 0x101a6310 */
  push32(0x101a6c51u); f_101a6310();
  /* 101a6c51 jmp 0x101a6650 */
  f_101a6650(); return;
}

/* FUN_10006c60 @ 0x101a6c60 (247 bytes, 70 insns) */
void f_101a6c60(void) {
  FTRACE(0x101a6c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6c60 push esi */
  push32((uint32_t)(ESI));
  /* 101a6c61 push edi */
  push32((uint32_t)(EDI));
  /* 101a6c62 call 0x101a6b80 */
  push32(0x101a6c67u); f_101a6b80();
  /* 101a6c67 call 0x101a6970 */
  push32(0x101a6c6cu); f_101a6970();
  /* 101a6c6c mov edi, 2 */
  EDI = (0x2u);
L_101a6c71:;
  /* 101a6c71 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6c73 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a6c75 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a6c7a push 0x101b6170 */
  push32((uint32_t)(0x101b6170u));
  /* 101a6c7f call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6c85u);
  /* 101a6c85 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6c87 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a6c89 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a6c8e push 0x101b3668 */
  push32((uint32_t)(0x101b3668u));
  /* 101a6c93 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6c99u);
  /* 101a6c99 mov eax, dword ptr [0x101b6294] */
  EAX = (r32((uint32_t)(0x101b6294)));
  /* 101a6c9e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6ca1 push eax */
  push32((uint32_t)(EAX));
  /* 101a6ca2 call 0x101a2710 */
  push32(0x101a6ca7u); f_101a2710();
  /* 101a6ca7 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6caa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6cac jne 0x101a6ccc */
  if (!C.zf) goto L_101a6ccc;
  /* 101a6cae mov esi, 0x64 */
  ESI = (0x64u);
L_101a6cb3:;
  /* 101a6cb3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6cb5 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a6cb7 push 0x6e */
  push32((uint32_t)(0x6eu));
  /* 101a6cb9 push 0x101b3868 */
  push32((uint32_t)(0x101b3868u));
  /* 101a6cbe call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6cc4u);
  /* 101a6cc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6cc7 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101a6cc8 jne 0x101a6cb3 */
  if (!C.zf) goto L_101a6cb3;
  /* 101a6cca jmp 0x101a6ce0 */
  goto L_101a6ce0;
L_101a6ccc:;
  /* 101a6ccc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6cce push 0xa */
  push32((uint32_t)(0xau));
  /* 101a6cd0 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101a6cd2 push 0x101b6140 */
  push32((uint32_t)(0x101b6140u));
  /* 101a6cd7 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6cddu);
  /* 101a6cdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6ce0:;
  /* 101a6ce0 push 0x101b6000 */
  push32((uint32_t)(0x101b6000u));
  /* 101a6ce5 call dword ptr [0x101b652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b652c))), 0x101a6cebu);
  /* 101a6ceb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6cee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a6cf0 jne 0x101a6d09 */
  if (!C.zf) goto L_101a6d09;
  /* 101a6cf2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6cf4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a6cf6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a6cfb push 0x101b3670 */
  push32((uint32_t)(0x101b3670u));
  /* 101a6d00 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6d06u);
  /* 101a6d06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a6d09:;
  /* 101a6d09 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6d0b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a6d0d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a6d12 push 0x101b3660 */
  push32((uint32_t)(0x101b3660u));
  /* 101a6d17 call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6d1du);
  /* 101a6d1d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a6d1f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101a6d21 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101a6d26 push 0x101b5f60 */
  push32((uint32_t)(0x101b5f60u));
  /* 101a6d2b call dword ptr [0x101b64e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64e4))), 0x101a6d31u);
  /* 101a6d31 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6d34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101a6d35 jne 0x101a6c71 */
  if (!C.zf) goto L_101a6c71;
  /* 101a6d3b call 0x101a6750 */
  push32(0x101a6d40u); f_101a6750();
  /* 101a6d40 call 0x101a5ff0 */
  push32(0x101a6d45u); f_101a5ff0();
  /* 101a6d45 call 0x101a6310 */
  push32(0x101a6d4au); f_101a6310();
  /* 101a6d4a call 0x101a52d0 */
  push32(0x101a6d4fu); f_101a52d0();
  /* 101a6d4f call 0x101a5ab0 */
  push32(0x101a6d54u); f_101a5ab0();
  /* 101a6d54 pop edi */
  EDI = (pop32());
  /* 101a6d55 pop esi */
  ESI = (pop32());
  /* 101a6d56 ret  */
  ESPCHK(0x101a6c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d60 @ 0x101a6d60 (279 bytes, 62 insns) [1 switch table(s)] */
void f_101a6d60(void) {
  FTRACE(0x101a6d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6d60 call 0x101a26a0 */
  push32(0x101a6d65u); f_101a26a0();
  /* 101a6d65 mov dword ptr [0x101b5f38], eax */
  w32((uint32_t)(0x101b5f38), (EAX));
  /* 101a6d6a call 0x101a2680 */
  push32(0x101a6d6fu); f_101a2680();
  /* 101a6d6f mov dword ptr [0x101b6348], eax */
  w32((uint32_t)(0x101b6348), (EAX));
  /* 101a6d74 call 0x101a2690 */
  push32(0x101a6d79u); f_101a2690();
  /* 101a6d79 mov dword ptr [0x101b3878], eax */
  w32((uint32_t)(0x101b3878), (EAX));
  /* 101a6d7e call 0x101a3060 */
  push32(0x101a6d83u); f_101a3060();
  /* 101a6d83 push 0x101af114 */
  push32((uint32_t)(0x101af114u));
  /* 101a6d88 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101a6d8a call dword ptr [0x101b64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64ec))), 0x101a6d90u);
  /* 101a6d90 call 0x101a6650 */
  push32(0x101a6d95u); f_101a6650();
  /* 101a6d95 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101a6d97 push 0x101af244 */
  push32((uint32_t)(0x101af244u));
  /* 101a6d9c call 0x101a2720 */
  push32(0x101a6da1u); f_101a2720();
  /* 101a6da1 mov eax, dword ptr [0x101b5f38] */
  EAX = (r32((uint32_t)(0x101b5f38)));
  /* 101a6da6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6da9 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6dac ja 0x101a6e72 */
  if ((!C.cf&&!C.zf)) goto L_101a6e72;
  /* 101a6db2 jmp dword ptr [eax*4 + 0x101a6e78] */
  switch (EAX) {
    case 0: goto L_101a6db9;
    case 1: goto L_101a6e35;
    case 2: goto L_101a6e3c;
    case 3: goto L_101a6e3c;
    case 4: goto L_101a6e3c;
    case 5: goto L_101a6db9;
    default: x86_unimpl("switch@0x101a6db2 out of table"); return;
  }
L_101a6db9:;
  /* 101a6db9 cmp dword ptr [0x101b3878], 3 */
  { uint32_t _a=(r32((uint32_t)(0x101b3878))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6dc0 jne 0x101a6df2 */
  if (!C.zf) goto L_101a6df2;
  /* 101a6dc2 push 0x101af160 */
  push32((uint32_t)(0x101af160u));
  /* 101a6dc7 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a6dc9 call dword ptr [0x101b64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64ec))), 0x101a6dcfu);
  /* 101a6dcf push 0x101af16c */
  push32((uint32_t)(0x101af16cu));
  /* 101a6dd4 call 0x101a2740 */
  push32(0x101a6dd9u); f_101a2740();
  /* 101a6dd9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a6ddb push 0x101af41c */
  push32((uint32_t)(0x101af41cu));
  /* 101a6de0 call 0x101a2720 */
  push32(0x101a6de5u); f_101a2720();
  /* 101a6de5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6de8 call 0x101a6c60 */
  push32(0x101a6dedu); f_101a6c60();
  /* 101a6ded jmp 0x101a6e72 */
  goto L_101a6e72;
L_101a6df2:;
  /* 101a6df2 push 0x101af114 */
  push32((uint32_t)(0x101af114u));
  /* 101a6df7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101a6df9 call dword ptr [0x101b64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64ec))), 0x101a6dffu);
  /* 101a6dff push 0x101b6578 */
  push32((uint32_t)(0x101b6578u));
  /* 101a6e04 call 0x101a2740 */
  push32(0x101a6e09u); f_101a2740();
  /* 101a6e09 mov eax, dword ptr [0x101b3878] */
  EAX = (r32((uint32_t)(0x101b3878)));
  /* 101a6e0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6e13 jne 0x101a6e1f */
  if (!C.zf) goto L_101a6e1f;
  /* 101a6e15 mov dword ptr [0x101af248], 4 */
  w32((uint32_t)(0x101af248), (0x4u));
L_101a6e1f:;
  /* 101a6e1f push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101a6e21 push 0x101af244 */
  push32((uint32_t)(0x101af244u));
  /* 101a6e26 call 0x101a2720 */
  push32(0x101a6e2bu); f_101a2720();
  /* 101a6e2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6e2e call 0x101a6c00 */
  push32(0x101a6e33u); f_101a6c00();
  /* 101a6e33 jmp 0x101a6e72 */
  goto L_101a6e72;
L_101a6e35:;
  /* 101a6e35 call 0x101a4400 */
  push32(0x101a6e3au); f_101a4400();
  /* 101a6e3a jmp 0x101a6e72 */
  goto L_101a6e72;
L_101a6e3c:;
  /* 101a6e3c push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101a6e41 call dword ptr [0x101b6508] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6508))), 0x101a6e47u);
  /* 101a6e47 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101a6e4c call dword ptr [0x101b650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b650c))), 0x101a6e52u);
  /* 101a6e52 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101a6e57 call dword ptr [0x101b6510] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b6510))), 0x101a6e5du);
  /* 101a6e5d push 0x101af07c */
  push32((uint32_t)(0x101af07cu));
  /* 101a6e62 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101a6e64 call dword ptr [0x101b64ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b64ec))), 0x101a6e6au);
  /* 101a6e6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6e6d call 0x101a3380 */
  push32(0x101a6e72u); f_101a3380();
L_101a6e72:;
  /* 101a6e72 jmp 0x101a31e0 */
  f_101a31e0(); return;
}

/* FUN_10006e90 @ 0x101a6e90 (82 bytes, 32 insns) */
void f_101a6e90(void) {
  FTRACE(0x101a6e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6e90 push ebp */
  push32((uint32_t)(EBP));
  /* 101a6e91 mov ebp, esp */
  EBP = (ESP);
  /* 101a6e93 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a6e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a6e99 push esi */
  push32((uint32_t)(ESI));
  /* 101a6e9a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 101a6e9d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101a6ea0 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a6ea3 mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 101a6eaa push eax */
  push32((uint32_t)(EAX));
  /* 101a6eab lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101a6eae push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a6eb1 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 101a6eb8 push eax */
  push32((uint32_t)(EAX));
  /* 101a6eb9 call 0x101a721c */
  push32(0x101a6ebeu); f_101a721c();
  /* 101a6ebe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6ec1 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 101a6ec4 mov esi, eax */
  ESI = (EAX);
  /* 101a6ec6 js 0x101a6ed0 */
  if (C.sf) goto L_101a6ed0;
  /* 101a6ec8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 101a6ecb and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101a6ece jmp 0x101a6edd */
  goto L_101a6edd;
L_101a6ed0:;
  /* 101a6ed0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101a6ed3 push eax */
  push32((uint32_t)(EAX));
  /* 101a6ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a6ed6 call 0x101a7104 */
  push32(0x101a6edbu); f_101a7104();
  /* 101a6edb pop ecx */
  ECX = (pop32());
  /* 101a6edc pop ecx */
  ECX = (pop32());
L_101a6edd:;
  /* 101a6edd mov eax, esi */
  EAX = (ESI);
  /* 101a6edf pop esi */
  ESI = (pop32());
  /* 101a6ee0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a6ee1 ret  */
  ESPCHK(0x101a6e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ee2 @ 0x101a6ee2 (23 bytes, 6 insns) */
void f_101a6ee2(void) {
  FTRACE(0x101a6ee2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6ee2 call 0x101a6efa */
  push32(0x101a6ee7u); f_101a6efa();
  /* 101a6ee7 call 0x101a7a76 */
  push32(0x101a6eecu); f_101a7a76();
  /* 101a6eec mov dword ptr [0x101b6640], eax */
  w32((uint32_t)(0x101b6640), (EAX));
  /* 101a6ef1 call 0x101a7a26 */
  push32(0x101a6ef6u); f_101a7a26();
  /* 101a6ef6 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 101a6ef8 ret  */
  ESPCHK(0x101a6ee2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006efa @ 0x101a6efa (56 bytes, 8 insns) */
void f_101a6efa(void) {
  FTRACE(0x101a6efau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6efa mov eax, 0x101a7e4f */
  EAX = (0x101a7e4fu);
  /* 101a6eff mov dword ptr [0x101b067c], 0x101a7af9 */
  w32((uint32_t)(0x101b067c), (0x101a7af9u));
  /* 101a6f09 mov dword ptr [0x101b0678], eax */
  w32((uint32_t)(0x101b0678), (EAX));
  /* 101a6f0e mov dword ptr [0x101b0680], 0x101a7b5f */
  w32((uint32_t)(0x101b0680), (0x101a7b5fu));
  /* 101a6f18 mov dword ptr [0x101b0684], 0x101a7a9f */
  w32((uint32_t)(0x101b0684), (0x101a7a9fu));
  /* 101a6f22 mov dword ptr [0x101b0688], 0x101a7b47 */
  w32((uint32_t)(0x101b0688), (0x101a7b47u));
  /* 101a6f2c mov dword ptr [0x101b068c], eax */
  w32((uint32_t)(0x101b068c), (EAX));
  /* 101a6f31 ret  */
  ESPCHK(0x101a6efau, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x101a6f34 (39 bytes, 16 insns) */
void f_101a6f34(void) {
  FTRACE(0x101a6f34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6f34 push ebp */
  push32((uint32_t)(EBP));
  /* 101a6f35 mov ebp, esp */
  EBP = (ESP);
  /* 101a6f37 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6f3a wait  */
  /* wait (no observable integer/reg state) */
  /* 101a6f3b fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 101a6f3e wait  */
  /* wait (no observable integer/reg state) */
  /* 101a6f3f mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 101a6f43 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 101a6f46 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 101a6f4a fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 101a6f4d fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 101a6f50 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 101a6f53 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101a6f56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a6f59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a6f5a ret  */
  ESPCHK(0x101a6f34u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f5b @ 0x101a6f5b (217 bytes, 57 insns) */
void f_101a6f5b(void) {
  FTRACE(0x101a6f5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a6f5b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a6f5f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6f62 jne 0x101a6ff0 */
  if (!C.zf) goto L_101a6ff0;
  /* 101a6f68 call dword ptr [0x101ae014] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae014))), 0x101a6f6eu);
  /* 101a6f6e push 1 */
  push32((uint32_t)(0x1u));
  /* 101a6f70 mov dword ptr [0x101b665c], eax */
  w32((uint32_t)(0x101b665c), (EAX));
  /* 101a6f75 call 0x101a892c */
  push32(0x101a6f7au); f_101a892c();
  /* 101a6f7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6f7c pop ecx */
  ECX = (pop32());
  /* 101a6f7d je 0x101a6fbb */
  if (C.zf) goto L_101a6fbb;
  /* 101a6f7f mov eax, dword ptr [0x101b665c] */
  EAX = (r32((uint32_t)(0x101b665c)));
  /* 101a6f84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101a6f86 mov cl, byte ptr [0x101b665d] */
  CL = (r8((uint32_t)(0x101b665d)));
  /* 101a6f8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a6f91 shr dword ptr [0x101b665c], 0x10 */
  w32((uint32_t)(0x101b665c), (sh_shr((uint32_t)(r32((uint32_t)(0x101b665c))), (0x10u)&0x1f, 32)));
  /* 101a6f98 mov dword ptr [0x101b6664], eax */
  w32((uint32_t)(0x101b6664), (EAX));
  /* 101a6f9d mov dword ptr [0x101b6668], ecx */
  w32((uint32_t)(0x101b6668), (ECX));
  /* 101a6fa3 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101a6fa6 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a6fa8 mov dword ptr [0x101b6660], eax */
  w32((uint32_t)(0x101b6660), (EAX));
  /* 101a6fad call 0x101a7fe3 */
  push32(0x101a6fb2u); f_101a7fe3();
  /* 101a6fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a6fb4 jne 0x101a6fbf */
  if (!C.zf) goto L_101a6fbf;
  /* 101a6fb6 call 0x101a8989 */
  push32(0x101a6fbbu); f_101a8989();
L_101a6fbb:;
  /* 101a6fbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a6fbd jmp 0x101a7031 */
  goto L_101a7031;
L_101a6fbf:;
  /* 101a6fbf call dword ptr [0x101ae010] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae010))), 0x101a6fc5u);
  /* 101a6fc5 mov dword ptr [0x101b7d54], eax */
  w32((uint32_t)(0x101b7d54), (EAX));
  /* 101a6fca call 0x101a8685 */
  push32(0x101a6fcfu); f_101a8685();
  /* 101a6fcf mov dword ptr [0x101b6648], eax */
  w32((uint32_t)(0x101b6648), (EAX));
  /* 101a6fd4 call 0x101a816f */
  push32(0x101a6fd9u); f_101a816f();
  /* 101a6fd9 call 0x101a8438 */
  push32(0x101a6fdeu); f_101a8438();
  /* 101a6fde call 0x101a837f */
  push32(0x101a6fe3u); f_101a837f();
  /* 101a6fe3 call 0x101a7ec5 */
  push32(0x101a6fe8u); f_101a7ec5();
  /* 101a6fe8 inc dword ptr [0x101b6644] */
  { uint32_t _r=(r32((uint32_t)(0x101b6644)))+1; w32((uint32_t)(0x101b6644), (_r)); fl_inc(_r,32); }
  /* 101a6fee jmp 0x101a702e */
  goto L_101a702e;
L_101a6ff0:;
  /* 101a6ff0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101a6ff2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6ff4 jne 0x101a7022 */
  if (!C.zf) goto L_101a7022;
  /* 101a6ff6 cmp dword ptr [0x101b6644], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101b6644))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a6ffc jle 0x101a6fbb */
  if ((C.zf||C.sf!=C.of)) goto L_101a6fbb;
  /* 101a6ffe dec dword ptr [0x101b6644] */
  { uint32_t _r=(r32((uint32_t)(0x101b6644)))-1; w32((uint32_t)(0x101b6644), (_r)); fl_dec(_r,32); }
  /* 101a7004 cmp dword ptr [0x101b6694], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101b6694))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a700a jne 0x101a7011 */
  if (!C.zf) goto L_101a7011;
  /* 101a700c call 0x101a7f03 */
  push32(0x101a7011u); f_101a7f03();
L_101a7011:;
  /* 101a7011 call 0x101a832b */
  push32(0x101a7016u); f_101a832b();
  /* 101a7016 call 0x101a8037 */
  push32(0x101a701bu); f_101a8037();
  /* 101a701b call 0x101a8989 */
  push32(0x101a7020u); f_101a8989();
  /* 101a7020 jmp 0x101a702e */
  goto L_101a702e;
L_101a7022:;
  /* 101a7022 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7025 jne 0x101a702e */
  if (!C.zf) goto L_101a702e;
  /* 101a7027 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7028 call 0x101a80cf */
  push32(0x101a702du); f_101a80cf();
  /* 101a702d pop ecx */
  ECX = (pop32());
L_101a702e:;
  /* 101a702e push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7030 pop eax */
  EAX = (pop32());
L_101a7031:;
  /* 101a7031 ret 0xc */
  ESPCHK(0x101a6f5bu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x101a7034 (157 bytes, 73 insns) */
void f_101a7034(void) {
  FTRACE(0x101a7034u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7034 push ebp */
  push32((uint32_t)(EBP));
  /* 101a7035 mov ebp, esp */
  EBP = (ESP);
  /* 101a7037 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7038 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a703b push esi */
  push32((uint32_t)(ESI));
  /* 101a703c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101a703f push edi */
  push32((uint32_t)(EDI));
  /* 101a7040 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101a7043 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a7045 jne 0x101a7050 */
  if (!C.zf) goto L_101a7050;
  /* 101a7047 cmp dword ptr [0x101b6644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b6644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a704e jmp 0x101a7076 */
  goto L_101a7076;
L_101a7050:;
  /* 101a7050 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7053 je 0x101a705a */
  if (C.zf) goto L_101a705a;
  /* 101a7055 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7058 jne 0x101a707c */
  if (!C.zf) goto L_101a707c;
L_101a705a:;
  /* 101a705a mov eax, dword ptr [0x101b7d58] */
  EAX = (r32((uint32_t)(0x101b7d58)));
  /* 101a705f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7061 je 0x101a706c */
  if (C.zf) goto L_101a706c;
  /* 101a7063 push edi */
  push32((uint32_t)(EDI));
  /* 101a7064 push esi */
  push32((uint32_t)(ESI));
  /* 101a7065 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7066 call eax */
  call_ind((uint32_t)(EAX), 0x101a7068u);
  /* 101a7068 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a706a je 0x101a7078 */
  if (C.zf) goto L_101a7078;
L_101a706c:;
  /* 101a706c push edi */
  push32((uint32_t)(EDI));
  /* 101a706d push esi */
  push32((uint32_t)(ESI));
  /* 101a706e push ebx */
  push32((uint32_t)(EBX));
  /* 101a706f call 0x101a6f5b */
  push32(0x101a7074u); f_101a6f5b();
  /* 101a7074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_101a7076:;
  /* 101a7076 jne 0x101a707c */
  if (!C.zf) goto L_101a707c;
L_101a7078:;
  /* 101a7078 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a707a jmp 0x101a70ca */
  goto L_101a70ca;
L_101a707c:;
  /* 101a707c push edi */
  push32((uint32_t)(EDI));
  /* 101a707d push esi */
  push32((uint32_t)(ESI));
  /* 101a707e push ebx */
  push32((uint32_t)(EBX));
  /* 101a707f call 0x101a2810 */
  push32(0x101a7084u); f_101a2810();
  /* 101a7084 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7087 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101a708a jne 0x101a7098 */
  if (!C.zf) goto L_101a7098;
  /* 101a708c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a708e jne 0x101a70c7 */
  if (!C.zf) goto L_101a70c7;
  /* 101a7090 push edi */
  push32((uint32_t)(EDI));
  /* 101a7091 push eax */
  push32((uint32_t)(EAX));
  /* 101a7092 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7093 call 0x101a6f5b */
  push32(0x101a7098u); f_101a6f5b();
L_101a7098:;
  /* 101a7098 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a709a je 0x101a70a1 */
  if (C.zf) goto L_101a70a1;
  /* 101a709c cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a709f jne 0x101a70c7 */
  if (!C.zf) goto L_101a70c7;
L_101a70a1:;
  /* 101a70a1 push edi */
  push32((uint32_t)(EDI));
  /* 101a70a2 push esi */
  push32((uint32_t)(ESI));
  /* 101a70a3 push ebx */
  push32((uint32_t)(EBX));
  /* 101a70a4 call 0x101a6f5b */
  push32(0x101a70a9u); f_101a6f5b();
  /* 101a70a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a70ab jne 0x101a70b0 */
  if (!C.zf) goto L_101a70b0;
  /* 101a70ad and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_101a70b0:;
  /* 101a70b0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a70b4 je 0x101a70c7 */
  if (C.zf) goto L_101a70c7;
  /* 101a70b6 mov eax, dword ptr [0x101b7d58] */
  EAX = (r32((uint32_t)(0x101b7d58)));
  /* 101a70bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a70bd je 0x101a70c7 */
  if (C.zf) goto L_101a70c7;
  /* 101a70bf push edi */
  push32((uint32_t)(EDI));
  /* 101a70c0 push esi */
  push32((uint32_t)(ESI));
  /* 101a70c1 push ebx */
  push32((uint32_t)(EBX));
  /* 101a70c2 call eax */
  call_ind((uint32_t)(EAX), 0x101a70c4u);
  /* 101a70c4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101a70c7:;
  /* 101a70c7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101a70ca:;
  /* 101a70ca pop edi */
  EDI = (pop32());
  /* 101a70cb pop esi */
  ESI = (pop32());
  /* 101a70cc pop ebx */
  EBX = (pop32());
  /* 101a70cd pop ebp */
  EBP = (pop32());
  /* 101a70ce ret 0xc */
  ESPCHK(0x101a7034u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x101a70d1 (48 bytes, 15 insns) */
void f_101a70d1(void) {
  FTRACE(0x101a70d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a70d1 mov eax, dword ptr [0x101b6650] */
  EAX = (r32((uint32_t)(0x101b6650)));
  /* 101a70d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a70d9 je 0x101a70e8 */
  if (C.zf) goto L_101a70e8;
  /* 101a70db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a70dd jne 0x101a70ed */
  if (!C.zf) goto L_101a70ed;
  /* 101a70df cmp dword ptr [0x101b6654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b6654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a70e6 jne 0x101a70ed */
  if (!C.zf) goto L_101a70ed;
L_101a70e8:;
  /* 101a70e8 call 0x101a8a31 */
  push32(0x101a70edu); f_101a8a31();
L_101a70ed:;
  /* 101a70ed push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101a70f1 call 0x101a8a6a */
  push32(0x101a70f6u); f_101a8a6a();
  /* 101a70f6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 101a70fb call dword ptr [0x101b066c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b066c))), 0x101a7101u);
  /* 101a7101 pop ecx */
  ECX = (pop32());
  /* 101a7102 pop ecx */
  ECX = (pop32());
  /* 101a7103 ret  */
  ESPCHK(0x101a70d1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007104 @ 0x101a7104 (280 bytes, 106 insns) */
void f_101a7104(void) {
  FTRACE(0x101a7104u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7104 push ebp */
  push32((uint32_t)(EBP));
  /* 101a7105 mov ebp, esp */
  EBP = (ESP);
  /* 101a7107 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7108 push esi */
  push32((uint32_t)(ESI));
  /* 101a7109 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101a710c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101a710f mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 101a7112 test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 101a7114 je 0x101a7210 */
  if (C.zf) goto L_101a7210;
  /* 101a711a test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 101a711c jne 0x101a7210 */
  if (!C.zf) goto L_101a7210;
  /* 101a7122 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 101a7124 je 0x101a713c */
  if (C.zf) goto L_101a713c;
  /* 101a7126 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101a712a test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 101a712c je 0x101a7210 */
  if (C.zf) goto L_101a7210;
  /* 101a7132 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 101a7135 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 101a7137 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101a7139 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_101a713c:;
  /* 101a713c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101a713f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101a7143 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 101a7147 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 101a7149 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 101a714b test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 101a714f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 101a7152 jne 0x101a7176 */
  if (!C.zf) goto L_101a7176;
  /* 101a7154 cmp esi, 0x101b0770 */
  { uint32_t _a=(ESI),_b=(0x101b0770u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a715a je 0x101a7164 */
  if (C.zf) goto L_101a7164;
  /* 101a715c cmp esi, 0x101b0790 */
  { uint32_t _a=(ESI),_b=(0x101b0790u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7162 jne 0x101a716f */
  if (!C.zf) goto L_101a716f;
L_101a7164:;
  /* 101a7164 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7165 call 0x101a8ec9 */
  push32(0x101a716au); f_101a8ec9();
  /* 101a716a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a716c pop ecx */
  ECX = (pop32());
  /* 101a716d jne 0x101a7176 */
  if (!C.zf) goto L_101a7176;
L_101a716f:;
  /* 101a716f push esi */
  push32((uint32_t)(ESI));
  /* 101a7170 call 0x101a8e85 */
  push32(0x101a7175u); f_101a8e85();
  /* 101a7175 pop ecx */
  ECX = (pop32());
L_101a7176:;
  /* 101a7176 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 101a717c push edi */
  push32((uint32_t)(EDI));
  /* 101a717d je 0x101a71e6 */
  if (C.zf) goto L_101a71e6;
  /* 101a717f mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101a7182 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 101a7184 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7186 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101a7189 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101a718b mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 101a718e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101a718f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101a7191 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 101a7194 jle 0x101a71a6 */
  if ((C.zf||C.sf!=C.of)) goto L_101a71a6;
  /* 101a7196 push edi */
  push32((uint32_t)(EDI));
  /* 101a7197 push eax */
  push32((uint32_t)(EAX));
  /* 101a7198 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7199 call 0x101a8c95 */
  push32(0x101a719eu); f_101a8c95();
  /* 101a719e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a71a1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101a71a4 jmp 0x101a71dc */
  goto L_101a71dc;
L_101a71a6:;
  /* 101a71a6 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a71a9 je 0x101a71c4 */
  if (C.zf) goto L_101a71c4;
  /* 101a71ab mov ecx, ebx */
  ECX = (EBX);
  /* 101a71ad mov eax, ebx */
  EAX = (EBX);
  /* 101a71af sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101a71b2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101a71b5 mov ecx, dword ptr [ecx*4 + 0x101b7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101a71bc lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101a71bf lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101a71c2 jmp 0x101a71c9 */
  goto L_101a71c9;
L_101a71c4:;
  /* 101a71c4 mov eax, 0x101b0698 */
  EAX = (0x101b0698u);
L_101a71c9:;
  /* 101a71c9 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101a71cd je 0x101a71dc */
  if (C.zf) goto L_101a71dc;
  /* 101a71cf push 2 */
  push32((uint32_t)(0x2u));
  /* 101a71d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a71d3 push ebx */
  push32((uint32_t)(EBX));
  /* 101a71d4 call 0x101a8bbd */
  push32(0x101a71d9u); f_101a8bbd();
  /* 101a71d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a71dc:;
  /* 101a71dc mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101a71df mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 101a71e2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101a71e4 jmp 0x101a71fa */
  goto L_101a71fa;
L_101a71e6:;
  /* 101a71e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a71e8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101a71eb pop edi */
  EDI = (pop32());
  /* 101a71ec push edi */
  push32((uint32_t)(EDI));
  /* 101a71ed push eax */
  push32((uint32_t)(EAX));
  /* 101a71ee push ebx */
  push32((uint32_t)(EBX));
  /* 101a71ef call 0x101a8c95 */
  push32(0x101a71f4u); f_101a8c95();
  /* 101a71f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a71f7 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101a71fa:;
  /* 101a71fa cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a71fd pop edi */
  EDI = (pop32());
  /* 101a71fe je 0x101a7206 */
  if (C.zf) goto L_101a7206;
  /* 101a7200 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101a7204 jmp 0x101a7215 */
  goto L_101a7215;
L_101a7206:;
  /* 101a7206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a7209 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a720e jmp 0x101a7218 */
  goto L_101a7218;
L_101a7210:;
  /* 101a7210 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 101a7212 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_101a7215:;
  /* 101a7215 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101a7218:;
  /* 101a7218 pop esi */
  ESI = (pop32());
  /* 101a7219 pop ebx */
  EBX = (pop32());
  /* 101a721a pop ebp */
  EBP = (pop32());
  /* 101a721b ret  */
  ESPCHK(0x101a7104u, _esp0);
  ESP += 4; return;
}

/* FUN_1000721c @ 0x101a721c (1825 bytes, 595 insns) [1 switch table(s)] */
void f_101a721c(void) {
  FTRACE(0x101a721cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a721c push ebp */
  push32((uint32_t)(EBP));
  /* 101a721d mov ebp, esp */
  EBP = (ESP);
  /* 101a721f sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7225 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7226 push esi */
  push32((uint32_t)(ESI));
  /* 101a7227 push edi */
  push32((uint32_t)(EDI));
  /* 101a7228 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101a722b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101a722d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101a722f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a7230 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101a7232 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 101a7235 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 101a7238 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101a723b je 0x101a7935 */
  if (C.zf) goto L_101a7935;
  /* 101a7241 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101a7244 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101a7246 jmp 0x101a7250 */
  goto L_101a7250;
L_101a7248:;
  /* 101a7248 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101a724b mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 101a724e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_101a7250:;
  /* 101a7250 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7253 jl 0x101a7935 */
  if ((C.sf!=C.of)) goto L_101a7935;
  /* 101a7259 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a725c jl 0x101a7271 */
  if ((C.sf!=C.of)) goto L_101a7271;
  /* 101a725e cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7261 jg 0x101a7271 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a7271;
  /* 101a7263 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101a7266 mov al, byte ptr [eax + 0x101ae0c8] */
  AL = (r8((uint32_t)(EAX + 0x101ae0c8)));
  /* 101a726c and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 101a726f jmp 0x101a7273 */
  goto L_101a7273;
L_101a7271:;
  /* 101a7271 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101a7273:;
  /* 101a7273 movsx eax, byte ptr [esi + eax*8 + 0x101ae0e8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x101ae0e8))));
  /* 101a727b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101a727e cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7281 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 101a7284 ja 0x101a7924 */
  if ((!C.cf&&!C.zf)) goto L_101a7924;
  /* 101a728a jmp dword ptr [eax*4 + 0x101a793d] */
  switch (EAX) {
    case 0: goto L_101a73bb;
    case 1: goto L_101a7291;
    case 2: goto L_101a72ac;
    case 3: goto L_101a72f8;
    case 4: goto L_101a732f;
    case 5: goto L_101a7337;
    case 6: goto L_101a736c;
    case 7: goto L_101a73ff;
    default: x86_unimpl("switch@0x101a728a out of table"); return;
  }
L_101a7291:;
  /* 101a7291 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 101a7295 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 101a7298 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 101a729b mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 101a729e mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 101a72a1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 101a72a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101a72a7 jmp 0x101a7924 */
  goto L_101a7924;
L_101a72ac:;
  /* 101a72ac movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101a72af sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a72b2 je 0x101a72ef */
  if (C.zf) goto L_101a72ef;
  /* 101a72b4 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a72b7 je 0x101a72e6 */
  if (C.zf) goto L_101a72e6;
  /* 101a72b9 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a72bc je 0x101a72dd */
  if (C.zf) goto L_101a72dd;
  /* 101a72be dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a72bf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a72c0 je 0x101a72d4 */
  if (C.zf) goto L_101a72d4;
  /* 101a72c2 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a72c5 jne 0x101a7924 */
  if (!C.zf) goto L_101a7924;
  /* 101a72cb or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101a72cf jmp 0x101a7924 */
  goto L_101a7924;
L_101a72d4:;
  /* 101a72d4 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101a72d8 jmp 0x101a7924 */
  goto L_101a7924;
L_101a72dd:;
  /* 101a72dd or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101a72e1 jmp 0x101a7924 */
  goto L_101a7924;
L_101a72e6:;
  /* 101a72e6 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 101a72ea jmp 0x101a7924 */
  goto L_101a7924;
L_101a72ef:;
  /* 101a72ef or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101a72f3 jmp 0x101a7924 */
  goto L_101a7924;
L_101a72f8:;
  /* 101a72f8 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a72fb jne 0x101a7320 */
  if (!C.zf) goto L_101a7320;
  /* 101a72fd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a7300 push eax */
  push32((uint32_t)(EAX));
  /* 101a7301 call 0x101a79fb */
  push32(0x101a7306u); f_101a79fb();
  /* 101a7306 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7308 pop ecx */
  ECX = (pop32());
  /* 101a7309 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101a730c jge 0x101a7924 */
  if ((C.sf==C.of)) goto L_101a7924;
  /* 101a7312 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101a7316 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_101a7318:;
  /* 101a7318 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101a731b jmp 0x101a7924 */
  goto L_101a7924;
L_101a7320:;
  /* 101a7320 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 101a7323 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101a7326 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101a7329 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 101a732d jmp 0x101a7318 */
  goto L_101a7318;
L_101a732f:;
  /* 101a732f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 101a7332 jmp 0x101a7924 */
  goto L_101a7924;
L_101a7337:;
  /* 101a7337 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a733a jne 0x101a735a */
  if (!C.zf) goto L_101a735a;
  /* 101a733c lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a733f push eax */
  push32((uint32_t)(EAX));
  /* 101a7340 call 0x101a79fb */
  push32(0x101a7345u); f_101a79fb();
  /* 101a7345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7347 pop ecx */
  ECX = (pop32());
  /* 101a7348 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101a734b jge 0x101a7924 */
  if ((C.sf==C.of)) goto L_101a7924;
  /* 101a7351 or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 101a7355 jmp 0x101a7924 */
  goto L_101a7924;
L_101a735a:;
  /* 101a735a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 101a735d movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101a7360 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 101a7364 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101a7367 jmp 0x101a7924 */
  goto L_101a7924;
L_101a736c:;
  /* 101a736c cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a736f je 0x101a739f */
  if (C.zf) goto L_101a739f;
  /* 101a7371 cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7374 je 0x101a7396 */
  if (C.zf) goto L_101a7396;
  /* 101a7376 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7379 je 0x101a738d */
  if (C.zf) goto L_101a738d;
  /* 101a737b cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a737e jne 0x101a7924 */
  if (!C.zf) goto L_101a7924;
  /* 101a7384 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101a7388 jmp 0x101a7924 */
  goto L_101a7924;
L_101a738d:;
  /* 101a738d or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101a7391 jmp 0x101a7924 */
  goto L_101a7924;
L_101a7396:;
  /* 101a7396 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101a739a jmp 0x101a7924 */
  goto L_101a7924;
L_101a739f:;
  /* 101a739f cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a73a2 jne 0x101a73b8 */
  if (!C.zf) goto L_101a73b8;
  /* 101a73a4 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a73a8 jne 0x101a73b8 */
  if (!C.zf) goto L_101a73b8;
  /* 101a73aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a73ab inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a73ac or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101a73b0 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101a73b3 jmp 0x101a7924 */
  goto L_101a7924;
L_101a73b8:;
  /* 101a73b8 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_101a73bb:;
  /* 101a73bb mov ecx, dword ptr [0x101b09d0] */
  ECX = (r32((uint32_t)(0x101b09d0)));
  /* 101a73c1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101a73c4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101a73c7 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101a73cc je 0x101a73e7 */
  if (C.zf) goto L_101a73e7;
  /* 101a73ce lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101a73d1 push eax */
  push32((uint32_t)(EAX));
  /* 101a73d2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a73d5 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101a73d8 push eax */
  push32((uint32_t)(EAX));
  /* 101a73d9 call 0x101a795d */
  push32(0x101a73deu); f_101a795d();
  /* 101a73de mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101a73e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a73e3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a73e4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101a73e7:;
  /* 101a73e7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101a73ea push eax */
  push32((uint32_t)(EAX));
  /* 101a73eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a73ee movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101a73f1 push eax */
  push32((uint32_t)(EAX));
  /* 101a73f2 call 0x101a795d */
  push32(0x101a73f7u); f_101a795d();
  /* 101a73f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a73fa jmp 0x101a7924 */
  goto L_101a7924;
L_101a73ff:;
  /* 101a73ff movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101a7402 cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7405 jg 0x101a7627 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a7627;
  /* 101a740b cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a740e jge 0x101a74aa */
  if ((C.sf==C.of)) goto L_101a74aa;
  /* 101a7414 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7417 jg 0x101a7508 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a7508;
  /* 101a741d je 0x101a769b */
  if (C.zf) goto L_101a769b;
  /* 101a7423 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7426 je 0x101a74cb */
  if (C.zf) goto L_101a74cb;
  /* 101a742c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a742d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a742e je 0x101a74a0 */
  if (C.zf) goto L_101a74a0;
  /* 101a7430 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a7431 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a7432 je 0x101a74a0 */
  if (C.zf) goto L_101a74a0;
  /* 101a7434 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7437 jne 0x101a7826 */
  if (!C.zf) goto L_101a7826;
  /* 101a743d test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101a7443 jne 0x101a7449 */
  if (!C.zf) goto L_101a7449;
  /* 101a7445 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101a7449:;
  /* 101a7449 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 101a744c cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a744f jne 0x101a7456 */
  if (!C.zf) goto L_101a7456;
  /* 101a7451 mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_101a7456:;
  /* 101a7456 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a7459 push eax */
  push32((uint32_t)(EAX));
  /* 101a745a call 0x101a79fb */
  push32(0x101a745fu); f_101a79fb();
  /* 101a745f test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101a7465 pop ecx */
  ECX = (pop32());
  /* 101a7466 mov ecx, eax */
  ECX = (EAX);
  /* 101a7468 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101a746b je 0x101a766f */
  if (C.zf) goto L_101a766f;
  /* 101a7471 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a7473 jne 0x101a747e */
  if (!C.zf) goto L_101a747e;
  /* 101a7475 mov ecx, dword ptr [0x101b0674] */
  ECX = (r32((uint32_t)(0x101b0674)));
  /* 101a747b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_101a747e:;
  /* 101a747e mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 101a7485 mov eax, ecx */
  EAX = (ECX);
L_101a7487:;
  /* 101a7487 mov edx, esi */
  EDX = (ESI);
  /* 101a7489 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101a748a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101a748c je 0x101a7666 */
  if (C.zf) goto L_101a7666;
  /* 101a7492 cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101a7496 je 0x101a7666 */
  if (C.zf) goto L_101a7666;
  /* 101a749c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a749d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a749e jmp 0x101a7487 */
  goto L_101a7487;
L_101a74a0:;
  /* 101a74a0 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 101a74a7 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_101a74aa:;
  /* 101a74aa or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101a74ae lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 101a74b4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a74b6 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 101a74b9 jge 0x101a758e */
  if ((C.sf==C.of)) goto L_101a758e;
  /* 101a74bf mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 101a74c6 jmp 0x101a759c */
  goto L_101a759c;
L_101a74cb:;
  /* 101a74cb test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101a74d1 jne 0x101a74d7 */
  if (!C.zf) goto L_101a74d7;
  /* 101a74d3 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101a74d7:;
  /* 101a74d7 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101a74dd lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a74e0 push eax */
  push32((uint32_t)(EAX));
  /* 101a74e1 je 0x101a751e */
  if (C.zf) goto L_101a751e;
  /* 101a74e3 call 0x101a7a18 */
  push32(0x101a74e8u); f_101a7a18();
  /* 101a74e8 push eax */
  push32((uint32_t)(EAX));
  /* 101a74e9 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101a74ef push eax */
  push32((uint32_t)(EAX));
  /* 101a74f0 call 0x101a90db */
  push32(0x101a74f5u); f_101a90db();
  /* 101a74f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a74f8 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101a74fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a74fd jge 0x101a7531 */
  if ((C.sf==C.of)) goto L_101a7531;
  /* 101a74ff mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101a7506 jmp 0x101a7531 */
  goto L_101a7531;
L_101a7508:;
  /* 101a7508 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a750b je 0x101a753f */
  if (C.zf) goto L_101a753f;
  /* 101a750d sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7510 je 0x101a74d7 */
  if (C.zf) goto L_101a74d7;
  /* 101a7512 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a7513 je 0x101a7701 */
  if (C.zf) goto L_101a7701;
  /* 101a7519 jmp 0x101a7826 */
  goto L_101a7826;
L_101a751e:;
  /* 101a751e call 0x101a79fb */
  push32(0x101a7523u); f_101a79fb();
  /* 101a7523 pop ecx */
  ECX = (pop32());
  /* 101a7524 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 101a752a mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_101a7531:;
  /* 101a7531 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101a7537 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101a753a jmp 0x101a7826 */
  goto L_101a7826;
L_101a753f:;
  /* 101a753f lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a7542 push eax */
  push32((uint32_t)(EAX));
  /* 101a7543 call 0x101a79fb */
  push32(0x101a7548u); f_101a79fb();
  /* 101a7548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a754a pop ecx */
  ECX = (pop32());
  /* 101a754b je 0x101a7580 */
  if (C.zf) goto L_101a7580;
  /* 101a754d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 101a7550 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a7552 je 0x101a7580 */
  if (C.zf) goto L_101a7580;
  /* 101a7554 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 101a7558 je 0x101a7571 */
  if (C.zf) goto L_101a7571;
  /* 101a755a movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 101a755d shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101a755f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101a7562 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101a7565 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 101a756c jmp 0x101a7826 */
  goto L_101a7826;
L_101a7571:;
  /* 101a7571 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 101a7575 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101a7578 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 101a757b jmp 0x101a7823 */
  goto L_101a7823;
L_101a7580:;
  /* 101a7580 mov eax, dword ptr [0x101b0670] */
  EAX = (r32((uint32_t)(0x101b0670)));
  /* 101a7585 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101a7588 push eax */
  push32((uint32_t)(EAX));
  /* 101a7589 jmp 0x101a761c */
  goto L_101a761c;
L_101a758e:;
  /* 101a758e jne 0x101a759c */
  if (!C.zf) goto L_101a759c;
  /* 101a7590 cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7593 jne 0x101a759c */
  if (!C.zf) goto L_101a759c;
  /* 101a7595 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_101a759c:;
  /* 101a759c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101a759f push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 101a75a2 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a75a5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 101a75a8 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 101a75ab mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 101a75ae mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 101a75b1 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101a75b4 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 101a75b7 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101a75ba push eax */
  push32((uint32_t)(EAX));
  /* 101a75bb lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101a75c1 push eax */
  push32((uint32_t)(EAX));
  /* 101a75c2 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101a75c5 push eax */
  push32((uint32_t)(EAX));
  /* 101a75c6 call dword ptr [0x101b0678] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b0678))), 0x101a75ccu);
  /* 101a75cc mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 101a75cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a75d2 and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 101a75d8 je 0x101a75ee */
  if (C.zf) goto L_101a75ee;
  /* 101a75da cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a75de jne 0x101a75ee */
  if (!C.zf) goto L_101a75ee;
  /* 101a75e0 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101a75e6 push eax */
  push32((uint32_t)(EAX));
  /* 101a75e7 call dword ptr [0x101b0684] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b0684))), 0x101a75edu);
  /* 101a75ed pop ecx */
  ECX = (pop32());
L_101a75ee:;
  /* 101a75ee cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a75f1 jne 0x101a7605 */
  if (!C.zf) goto L_101a7605;
  /* 101a75f3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a75f5 jne 0x101a7605 */
  if (!C.zf) goto L_101a7605;
  /* 101a75f7 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101a75fd push eax */
  push32((uint32_t)(EAX));
  /* 101a75fe call dword ptr [0x101b067c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101b067c))), 0x101a7604u);
  /* 101a7604 pop ecx */
  ECX = (pop32());
L_101a7605:;
  /* 101a7605 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a760c jne 0x101a761b */
  if (!C.zf) goto L_101a761b;
  /* 101a760e or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101a7612 lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 101a7618 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_101a761b:;
  /* 101a761b push edi */
  push32((uint32_t)(EDI));
L_101a761c:;
  /* 101a761c call 0x101a9060 */
  push32(0x101a7621u); f_101a9060();
  /* 101a7621 pop ecx */
  ECX = (pop32());
  /* 101a7622 jmp 0x101a7823 */
  goto L_101a7823;
L_101a7627:;
  /* 101a7627 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a762a je 0x101a7701 */
  if (C.zf) goto L_101a7701;
  /* 101a7630 sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7633 je 0x101a76d7 */
  if (C.zf) goto L_101a76d7;
  /* 101a7639 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a763a je 0x101a76c4 */
  if (C.zf) goto L_101a76c4;
  /* 101a7640 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a7641 je 0x101a7694 */
  if (C.zf) goto L_101a7694;
  /* 101a7643 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7646 je 0x101a7449 */
  if (C.zf) goto L_101a7449;
  /* 101a764c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a764d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a764e je 0x101a7705 */
  if (C.zf) goto L_101a7705;
  /* 101a7654 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7657 jne 0x101a7826 */
  if (!C.zf) goto L_101a7826;
  /* 101a765d mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 101a7664 jmp 0x101a76a2 */
  goto L_101a76a2;
L_101a7666:;
  /* 101a7666 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7668 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101a766a jmp 0x101a7823 */
  goto L_101a7823;
L_101a766f:;
  /* 101a766f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a7671 jne 0x101a767c */
  if (!C.zf) goto L_101a767c;
  /* 101a7673 mov ecx, dword ptr [0x101b0670] */
  ECX = (r32((uint32_t)(0x101b0670)));
  /* 101a7679 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_101a767c:;
  /* 101a767c mov eax, ecx */
  EAX = (ECX);
L_101a767e:;
  /* 101a767e mov edx, esi */
  EDX = (ESI);
  /* 101a7680 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101a7681 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101a7683 je 0x101a768d */
  if (C.zf) goto L_101a768d;
  /* 101a7685 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7688 je 0x101a768d */
  if (C.zf) goto L_101a768d;
  /* 101a768a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a768b jmp 0x101a767e */
  goto L_101a767e;
L_101a768d:;
  /* 101a768d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a768f jmp 0x101a7823 */
  goto L_101a7823;
L_101a7694:;
  /* 101a7694 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_101a769b:;
  /* 101a769b mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_101a76a2:;
  /* 101a76a2 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101a76a6 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 101a76ad je 0x101a770c */
  if (C.zf) goto L_101a770c;
  /* 101a76af mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 101a76b2 mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 101a76b6 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101a76b8 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 101a76bf mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 101a76c2 jmp 0x101a770c */
  goto L_101a770c;
L_101a76c4:;
  /* 101a76c4 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101a76c8 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 101a76cf je 0x101a770c */
  if (C.zf) goto L_101a770c;
  /* 101a76d1 or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101a76d5 jmp 0x101a770c */
  goto L_101a770c;
L_101a76d7:;
  /* 101a76d7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a76da push eax */
  push32((uint32_t)(EAX));
  /* 101a76db call 0x101a79fb */
  push32(0x101a76e0u); f_101a79fb();
  /* 101a76e0 test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101a76e4 pop ecx */
  ECX = (pop32());
  /* 101a76e5 je 0x101a76f0 */
  if (C.zf) goto L_101a76f0;
  /* 101a76e7 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 101a76eb mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 101a76ee jmp 0x101a76f5 */
  goto L_101a76f5;
L_101a76f0:;
  /* 101a76f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101a76f3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_101a76f5:;
  /* 101a76f5 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101a76fc jmp 0x101a7924 */
  goto L_101a7924;
L_101a7701:;
  /* 101a7701 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101a7705:;
  /* 101a7705 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_101a770c:;
  /* 101a770c test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101a7710 je 0x101a771e */
  if (C.zf) goto L_101a771e;
  /* 101a7712 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a7715 push eax */
  push32((uint32_t)(EAX));
  /* 101a7716 call 0x101a7a08 */
  push32(0x101a771bu); f_101a7a08();
  /* 101a771b pop ecx */
  ECX = (pop32());
  /* 101a771c jmp 0x101a775f */
  goto L_101a775f;
L_101a771e:;
  /* 101a771e test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101a7722 je 0x101a7745 */
  if (C.zf) goto L_101a7745;
  /* 101a7724 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101a7728 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a772b push eax */
  push32((uint32_t)(EAX));
  /* 101a772c je 0x101a773a */
  if (C.zf) goto L_101a773a;
  /* 101a772e call 0x101a79fb */
  push32(0x101a7733u); f_101a79fb();
  /* 101a7733 pop ecx */
  ECX = (pop32());
  /* 101a7734 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_101a7737:;
  /* 101a7737 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a7738 jmp 0x101a775f */
  goto L_101a775f;
L_101a773a:;
  /* 101a773a call 0x101a79fb */
  push32(0x101a773fu); f_101a79fb();
  /* 101a773f pop ecx */
  ECX = (pop32());
  /* 101a7740 movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 101a7743 jmp 0x101a7737 */
  goto L_101a7737;
L_101a7745:;
  /* 101a7745 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101a7749 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a774c push eax */
  push32((uint32_t)(EAX));
  /* 101a774d je 0x101a7757 */
  if (C.zf) goto L_101a7757;
  /* 101a774f call 0x101a79fb */
  push32(0x101a7754u); f_101a79fb();
  /* 101a7754 pop ecx */
  ECX = (pop32());
  /* 101a7755 jmp 0x101a7737 */
  goto L_101a7737;
L_101a7757:;
  /* 101a7757 call 0x101a79fb */
  push32(0x101a775cu); f_101a79fb();
  /* 101a775c pop ecx */
  ECX = (pop32());
  /* 101a775d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_101a775f:;
  /* 101a775f test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101a7763 je 0x101a7780 */
  if (C.zf) goto L_101a7780;
  /* 101a7765 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101a7767 jg 0x101a7780 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a7780;
  /* 101a7769 jl 0x101a776f */
  if ((C.sf!=C.of)) goto L_101a776f;
  /* 101a776b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a776d jae 0x101a7780 */
  if (!C.cf) goto L_101a7780;
L_101a776f:;
  /* 101a776f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101a7771 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7774 mov esi, eax */
  ESI = (EAX);
  /* 101a7776 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 101a7778 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101a777c mov edi, edx */
  EDI = (EDX);
  /* 101a777e jmp 0x101a7784 */
  goto L_101a7784;
L_101a7780:;
  /* 101a7780 mov esi, eax */
  ESI = (EAX);
  /* 101a7782 mov edi, edx */
  EDI = (EDX);
L_101a7784:;
  /* 101a7784 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101a7788 jne 0x101a778d */
  if (!C.zf) goto L_101a778d;
  /* 101a778a and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_101a778d:;
  /* 101a778d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7791 jge 0x101a779c */
  if ((C.sf==C.of)) goto L_101a779c;
  /* 101a7793 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 101a779a jmp 0x101a77a0 */
  goto L_101a77a0;
L_101a779c:;
  /* 101a779c and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101a77a0:;
  /* 101a77a0 mov eax, esi */
  EAX = (ESI);
  /* 101a77a2 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101a77a4 jne 0x101a77aa */
  if (!C.zf) goto L_101a77aa;
  /* 101a77a6 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_101a77aa:;
  /* 101a77aa lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101a77ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101a77b0:;
  /* 101a77b0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101a77b3 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 101a77b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a77b8 jg 0x101a77c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a77c0;
  /* 101a77ba mov eax, esi */
  EAX = (ESI);
  /* 101a77bc or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101a77be je 0x101a77fb */
  if (C.zf) goto L_101a77fb;
L_101a77c0:;
  /* 101a77c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101a77c3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a77c4 push edx */
  push32((uint32_t)(EDX));
  /* 101a77c5 push eax */
  push32((uint32_t)(EAX));
  /* 101a77c6 push edi */
  push32((uint32_t)(EDI));
  /* 101a77c7 push esi */
  push32((uint32_t)(ESI));
  /* 101a77c8 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 101a77cb mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 101a77ce call 0x101a9210 */
  push32(0x101a77d3u); f_101a9210();
  /* 101a77d3 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 101a77d6 mov ebx, eax */
  EBX = (EAX);
  /* 101a77d8 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a77db push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 101a77de push edi */
  push32((uint32_t)(EDI));
  /* 101a77df push esi */
  push32((uint32_t)(ESI));
  /* 101a77e0 call 0x101a91a0 */
  push32(0x101a77e5u); f_101a91a0();
  /* 101a77e5 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a77e8 mov esi, eax */
  ESI = (EAX);
  /* 101a77ea mov edi, edx */
  EDI = (EDX);
  /* 101a77ec jle 0x101a77f1 */
  if ((C.zf||C.sf!=C.of)) goto L_101a77f1;
  /* 101a77ee add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_101a77f1:;
  /* 101a77f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a77f4 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101a77f7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101a77f9 jmp 0x101a77b0 */
  goto L_101a77b0;
L_101a77fb:;
  /* 101a77fb lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101a77fe sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7801 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101a7804 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 101a7808 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101a780b je 0x101a7826 */
  if (C.zf) goto L_101a7826;
  /* 101a780d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a7810 cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7813 jne 0x101a7819 */
  if (!C.zf) goto L_101a7819;
  /* 101a7815 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7817 jne 0x101a7826 */
  if (!C.zf) goto L_101a7826;
L_101a7819:;
  /* 101a7819 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101a781c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a781d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a7820 mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_101a7823:;
  /* 101a7823 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_101a7826:;
  /* 101a7826 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a782a jne 0x101a7924 */
  if (!C.zf) goto L_101a7924;
  /* 101a7830 mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a7833 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 101a7836 je 0x101a785e */
  if (C.zf) goto L_101a785e;
  /* 101a7838 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 101a783b je 0x101a7843 */
  if (C.zf) goto L_101a7843;
  /* 101a783d mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 101a7841 jmp 0x101a7857 */
  goto L_101a7857;
L_101a7843:;
  /* 101a7843 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101a7846 je 0x101a784e */
  if (C.zf) goto L_101a784e;
  /* 101a7848 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 101a784c jmp 0x101a7857 */
  goto L_101a7857;
L_101a784e:;
  /* 101a784e test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101a7851 je 0x101a785e */
  if (C.zf) goto L_101a785e;
  /* 101a7853 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_101a7857:;
  /* 101a7857 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_101a785e:;
  /* 101a785e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 101a7861 sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7864 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7867 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 101a786a jne 0x101a787e */
  if (!C.zf) goto L_101a787e;
  /* 101a786c lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101a786f push eax */
  push32((uint32_t)(EAX));
  /* 101a7870 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a7873 push esi */
  push32((uint32_t)(ESI));
  /* 101a7874 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101a7876 call 0x101a7992 */
  push32(0x101a787bu); f_101a7992();
  /* 101a787b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a787e:;
  /* 101a787e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101a7881 push eax */
  push32((uint32_t)(EAX));
  /* 101a7882 lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 101a7885 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a7888 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 101a788b push eax */
  push32((uint32_t)(EAX));
  /* 101a788c call 0x101a79c3 */
  push32(0x101a7891u); f_101a79c3();
  /* 101a7891 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7894 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101a7897 je 0x101a78b0 */
  if (C.zf) goto L_101a78b0;
  /* 101a7899 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101a789c jne 0x101a78b0 */
  if (!C.zf) goto L_101a78b0;
  /* 101a789e lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101a78a1 push eax */
  push32((uint32_t)(EAX));
  /* 101a78a2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a78a5 push esi */
  push32((uint32_t)(ESI));
  /* 101a78a6 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101a78a8 call 0x101a7992 */
  push32(0x101a78adu); f_101a7992();
  /* 101a78ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a78b0:;
  /* 101a78b0 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a78b4 je 0x101a78f7 */
  if (C.zf) goto L_101a78f7;
  /* 101a78b6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a78ba jle 0x101a78f7 */
  if ((C.zf||C.sf!=C.of)) goto L_101a78f7;
  /* 101a78bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101a78bf mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a78c2 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_101a78c5:;
  /* 101a78c5 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 101a78c8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101a78c9 push eax */
  push32((uint32_t)(EAX));
  /* 101a78ca lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101a78cd push eax */
  push32((uint32_t)(EAX));
  /* 101a78ce inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101a78cf call 0x101a90db */
  push32(0x101a78d4u); f_101a90db();
  /* 101a78d4 pop ecx */
  ECX = (pop32());
  /* 101a78d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a78d7 pop ecx */
  ECX = (pop32());
  /* 101a78d8 jle 0x101a790c */
  if ((C.zf||C.sf!=C.of)) goto L_101a790c;
  /* 101a78da lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 101a78dd push ecx */
  push32((uint32_t)(ECX));
  /* 101a78de push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a78e1 push eax */
  push32((uint32_t)(EAX));
  /* 101a78e2 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101a78e5 push eax */
  push32((uint32_t)(EAX));
  /* 101a78e6 call 0x101a79c3 */
  push32(0x101a78ebu); f_101a79c3();
  /* 101a78eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a78ee mov eax, edi */
  EAX = (EDI);
  /* 101a78f0 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101a78f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a78f3 jne 0x101a78c5 */
  if (!C.zf) goto L_101a78c5;
  /* 101a78f5 jmp 0x101a790c */
  goto L_101a790c;
L_101a78f7:;
  /* 101a78f7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101a78fa push eax */
  push32((uint32_t)(EAX));
  /* 101a78fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a78fe push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 101a7901 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 101a7904 call 0x101a79c3 */
  push32(0x101a7909u); f_101a79c3();
  /* 101a7909 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a790c:;
  /* 101a790c test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 101a7910 je 0x101a7924 */
  if (C.zf) goto L_101a7924;
  /* 101a7912 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101a7915 push eax */
  push32((uint32_t)(EAX));
  /* 101a7916 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a7919 push esi */
  push32((uint32_t)(ESI));
  /* 101a791a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101a791c call 0x101a7992 */
  push32(0x101a7921u); f_101a7992();
  /* 101a7921 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a7924:;
  /* 101a7924 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101a7927 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101a7929 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a792a test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101a792c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101a792f jne 0x101a7248 */
  if (!C.zf) goto L_101a7248;
L_101a7935:;
  /* 101a7935 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101a7938 pop edi */
  EDI = (pop32());
  /* 101a7939 pop esi */
  ESI = (pop32());
  /* 101a793a pop ebx */
  EBX = (pop32());
  /* 101a793b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a793c ret  */
  ESPCHK(0x101a721cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000795d @ 0x101a795d (53 bytes, 25 insns) */
void f_101a795d(void) {
  FTRACE(0x101a795du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a795d push ebp */
  push32((uint32_t)(EBP));
  /* 101a795e mov ebp, esp */
  EBP = (ESP);
  /* 101a7960 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a7963 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 101a7966 js 0x101a7976 */
  if (C.sf) goto L_101a7976;
  /* 101a7968 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 101a796a mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 101a796d mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 101a796f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101a7971 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 101a7974 jmp 0x101a7981 */
  goto L_101a7981;
L_101a7976:;
  /* 101a7976 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7977 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a797a call 0x101a7104 */
  push32(0x101a797fu); f_101a7104();
  /* 101a797f pop ecx */
  ECX = (pop32());
  /* 101a7980 pop ecx */
  ECX = (pop32());
L_101a7981:;
  /* 101a7981 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7984 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101a7987 jne 0x101a798e */
  if (!C.zf) goto L_101a798e;
  /* 101a7989 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101a798c pop ebp */
  EBP = (pop32());
  /* 101a798d ret  */
  ESPCHK(0x101a795du, _esp0);
  ESP += 4; return;
L_101a798e:;
  /* 101a798e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 101a7990 pop ebp */
  EBP = (pop32());
  /* 101a7991 ret  */
  ESPCHK(0x101a795du, _esp0);
  ESP += 4; return;
}

/* FUN_10007992 @ 0x101a7992 (49 bytes, 22 insns) */
void f_101a7992(void) {
  FTRACE(0x101a7992u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7992 push esi */
  push32((uint32_t)(ESI));
  /* 101a7993 push edi */
  push32((uint32_t)(EDI));
  /* 101a7994 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101a7998 mov eax, edi */
  EAX = (EDI);
  /* 101a799a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101a799b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a799d jle 0x101a79c0 */
  if ((C.zf||C.sf!=C.of)) goto L_101a79c0;
  /* 101a799f mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_101a79a3:;
  /* 101a79a3 push esi */
  push32((uint32_t)(ESI));
  /* 101a79a4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101a79a8 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 101a79ac call 0x101a795d */
  push32(0x101a79b1u); f_101a795d();
  /* 101a79b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a79b4 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a79b7 je 0x101a79c0 */
  if (C.zf) goto L_101a79c0;
  /* 101a79b9 mov eax, edi */
  EAX = (EDI);
  /* 101a79bb dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101a79bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a79be jg 0x101a79a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a79a3;
L_101a79c0:;
  /* 101a79c0 pop edi */
  EDI = (pop32());
  /* 101a79c1 pop esi */
  ESI = (pop32());
  /* 101a79c2 ret  */
  ESPCHK(0x101a7992u, _esp0);
  ESP += 4; return;
}

/* FUN_100079c3 @ 0x101a79c3 (56 bytes, 27 insns) */
void f_101a79c3(void) {
  FTRACE(0x101a79c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a79c3 push ebx */
  push32((uint32_t)(EBX));
  /* 101a79c4 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 101a79c8 mov eax, ebx */
  EAX = (EBX);
  /* 101a79ca dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101a79cb push esi */
  push32((uint32_t)(ESI));
  /* 101a79cc push edi */
  push32((uint32_t)(EDI));
  /* 101a79cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a79cf jle 0x101a79f7 */
  if ((C.zf||C.sf!=C.of)) goto L_101a79f7;
  /* 101a79d1 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101a79d5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_101a79d9:;
  /* 101a79d9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101a79dc push edi */
  push32((uint32_t)(EDI));
  /* 101a79dd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a79de push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 101a79e2 push eax */
  push32((uint32_t)(EAX));
  /* 101a79e3 call 0x101a795d */
  push32(0x101a79e8u); f_101a795d();
  /* 101a79e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a79eb cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a79ee je 0x101a79f7 */
  if (C.zf) goto L_101a79f7;
  /* 101a79f0 mov eax, ebx */
  EAX = (EBX);
  /* 101a79f2 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101a79f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a79f5 jg 0x101a79d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a79d9;
L_101a79f7:;
  /* 101a79f7 pop edi */
  EDI = (pop32());
  /* 101a79f8 pop esi */
  ESI = (pop32());
  /* 101a79f9 pop ebx */
  EBX = (pop32());
  /* 101a79fa ret  */
  ESPCHK(0x101a79c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100079fb @ 0x101a79fb (13 bytes, 5 insns) */
void f_101a79fb(void) {
  FTRACE(0x101a79fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a79fb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a79ff add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101a7a02 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101a7a04 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101a7a07 ret  */
  ESPCHK(0x101a79fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10007a08 @ 0x101a7a08 (16 bytes, 6 insns) */
void f_101a7a08(void) {
  FTRACE(0x101a7a08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7a08 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a7a0c add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101a7a0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101a7a11 mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 101a7a14 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 101a7a17 ret  */
  ESPCHK(0x101a7a08u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a18 @ 0x101a7a18 (14 bytes, 5 insns) */
void f_101a7a18(void) {
  FTRACE(0x101a7a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7a18 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a7a1c add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101a7a1f mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101a7a21 mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 101a7a25 ret  */
  ESPCHK(0x101a7a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a26 @ 0x101a7a26 (18 bytes, 6 insns) */
void f_101a7a26(void) {
  FTRACE(0x101a7a26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7a26 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 101a7a2b push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 101a7a30 call 0x101a92ba */
  push32(0x101a7a35u); f_101a92ba();
  /* 101a7a35 pop ecx */
  ECX = (pop32());
  /* 101a7a36 pop ecx */
  ECX = (pop32());
  /* 101a7a37 ret  */
  ESPCHK(0x101a7a26u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a38 @ 0x101a7a38 (62 bytes, 24 insns) */
void f_101a7a38(void) {
  FTRACE(0x101a7a38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7a38 push ebp */
  push32((uint32_t)(EBP));
  /* 101a7a39 mov ebp, esp */
  EBP = (ESP);
  /* 101a7a3b sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7a3e fld qword ptr [0x101ae170] */
  fpu_push(rf64((uint32_t)(0x101ae170)));
  /* 101a7a44 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 101a7a47 fld qword ptr [0x101ae168] */
  fpu_push(rf64((uint32_t)(0x101ae168)));
  /* 101a7a4d fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 101a7a50 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 101a7a53 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 101a7a56 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 101a7a59 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 101a7a5c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 101a7a5f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 101a7a62 fcomp qword ptr [0x101ae160] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x101ae160)));
  (void)fpu_pop();
  /* 101a7a68 fnstsw ax */
  AX = fpu_status();
  /* 101a7a6a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 101a7a6b jbe 0x101a7a72 */
  if ((C.cf||C.zf)) goto L_101a7a72;
  /* 101a7a6d push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7a6f pop eax */
  EAX = (pop32());
  /* 101a7a70 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a7a71 ret  */
  ESPCHK(0x101a7a38u, _esp0);
  ESP += 4; return;
L_101a7a72:;
  /* 101a7a72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a7a74 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a7a75 ret  */
  ESPCHK(0x101a7a38u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a76 @ 0x101a7a76 (41 bytes, 13 insns) */
void f_101a7a76(void) {
  FTRACE(0x101a7a76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7a76 push 0x101ae194 */
  push32((uint32_t)(0x101ae194u));
  /* 101a7a7b call dword ptr [0x101ae004] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae004))), 0x101a7a81u);
  /* 101a7a81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7a83 je 0x101a7a9a */
  if (C.zf) goto L_101a7a9a;
  /* 101a7a85 push 0x101ae178 */
  push32((uint32_t)(0x101ae178u));
  /* 101a7a8a push eax */
  push32((uint32_t)(EAX));
  /* 101a7a8b call dword ptr [0x101ae088] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae088))), 0x101a7a91u);
  /* 101a7a91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7a93 je 0x101a7a9a */
  if (C.zf) goto L_101a7a9a;
  /* 101a7a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a7a97 call eax */
  call_ind((uint32_t)(EAX), 0x101a7a99u);
  /* 101a7a99 ret  */
  ESPCHK(0x101a7a76u, _esp0);
  ESP += 4; return;
L_101a7a9a:;
  /* 101a7a9a jmp 0x101a7a38 */
  f_101a7a38(); return;
}

/* FUN_10007a9f @ 0x101a7a9f (90 bytes, 37 insns) */
void f_101a7a9f(void) {
  FTRACE(0x101a7a9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7a9f push esi */
  push32((uint32_t)(ESI));
  /* 101a7aa0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101a7aa4 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101a7aa7 push eax */
  push32((uint32_t)(EAX));
  /* 101a7aa8 call 0x101a9460 */
  push32(0x101a7aadu); f_101a9460();
  /* 101a7aad cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7ab0 pop ecx */
  ECX = (pop32());
  /* 101a7ab1 je 0x101a7adf */
  if (C.zf) goto L_101a7adf;
L_101a7ab3:;
  /* 101a7ab3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a7ab4 cmp dword ptr [0x101b0be0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b0be0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7abb jle 0x101a7acc */
  if ((C.zf||C.sf!=C.of)) goto L_101a7acc;
  /* 101a7abd movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101a7ac0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101a7ac2 push eax */
  push32((uint32_t)(EAX));
  /* 101a7ac3 call 0x101a93eb */
  push32(0x101a7ac8u); f_101a93eb();
  /* 101a7ac8 pop ecx */
  ECX = (pop32());
  /* 101a7ac9 pop ecx */
  ECX = (pop32());
  /* 101a7aca jmp 0x101a7adb */
  goto L_101a7adb;
L_101a7acc:;
  /* 101a7acc movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101a7acf mov ecx, dword ptr [0x101b09d0] */
  ECX = (r32((uint32_t)(0x101b09d0)));
  /* 101a7ad5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101a7ad8 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101a7adb:;
  /* 101a7adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7add jne 0x101a7ab3 */
  if (!C.zf) goto L_101a7ab3;
L_101a7adf:;
  /* 101a7adf mov cl, byte ptr [0x101b0be4] */
  CL = (r8((uint32_t)(0x101b0be4)));
  /* 101a7ae5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101a7ae7 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101a7ae9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101a7aea:;
  /* 101a7aea mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 101a7aec mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 101a7aee mov al, cl */
  AL = (CL);
  /* 101a7af0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 101a7af2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a7af3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 101a7af5 jne 0x101a7aea */
  if (!C.zf) goto L_101a7aea;
  /* 101a7af7 pop esi */
  ESI = (pop32());
  /* 101a7af8 ret  */
  ESPCHK(0x101a7a9fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x101a7b5f (62 bytes, 29 insns) */
void f_101a7b5f(void) {
  FTRACE(0x101a7b5fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7b5f push ebp */
  push32((uint32_t)(EBP));
  /* 101a7b60 mov ebp, esp */
  EBP = (ESP);
  /* 101a7b62 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7b63 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7b64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7b68 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101a7b6b je 0x101a7b88 */
  if (C.zf) goto L_101a7b88;
  /* 101a7b6d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101a7b70 push eax */
  push32((uint32_t)(EAX));
  /* 101a7b71 call 0x101a992c */
  push32(0x101a7b76u); f_101a992c();
  /* 101a7b76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a7b79 pop ecx */
  ECX = (pop32());
  /* 101a7b7a pop ecx */
  ECX = (pop32());
  /* 101a7b7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a7b7e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101a7b80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a7b83 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101a7b86 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a7b87 ret  */
  ESPCHK(0x101a7b5fu, _esp0);
  ESP += 4; return;
L_101a7b88:;
  /* 101a7b88 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101a7b8b push eax */
  push32((uint32_t)(EAX));
  /* 101a7b8c call 0x101a9959 */
  push32(0x101a7b91u); f_101a9959();
  /* 101a7b91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a7b94 pop ecx */
  ECX = (pop32());
  /* 101a7b95 pop ecx */
  ECX = (pop32());
  /* 101a7b96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101a7b99 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101a7b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a7b9c ret  */
  ESPCHK(0x101a7b5fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007b9d @ 0x101a7b9d (97 bytes, 42 insns) */
void f_101a7b9d(void) {
  FTRACE(0x101a7b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7b9d push ebp */
  push32((uint32_t)(EBP));
  /* 101a7b9e mov ebp, esp */
  EBP = (ESP);
  /* 101a7ba0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7ba3 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101a7ba6 push esi */
  push32((uint32_t)(ESI));
  /* 101a7ba7 push eax */
  push32((uint32_t)(EAX));
  /* 101a7ba8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7bab push eax */
  push32((uint32_t)(EAX));
  /* 101a7bac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a7baf push ecx */
  push32((uint32_t)(ECX));
  /* 101a7bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7bb1 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 101a7bb3 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 101a7bb6 call 0x101a99fd */
  push32(0x101a7bbbu); f_101a99fd();
  /* 101a7bbb mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101a7bbe lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7bc1 push eax */
  push32((uint32_t)(EAX));
  /* 101a7bc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a7bc5 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 101a7bc8 push eax */
  push32((uint32_t)(EAX));
  /* 101a7bc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a7bcb cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7bcf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101a7bd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101a7bd4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a7bd6 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 101a7bd9 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7bdb add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7bdd push ecx */
  push32((uint32_t)(ECX));
  /* 101a7bde call 0x101a9986 */
  push32(0x101a7be3u); f_101a9986();
  /* 101a7be3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7be6 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a7be8 push eax */
  push32((uint32_t)(EAX));
  /* 101a7be9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101a7bec push esi */
  push32((uint32_t)(ESI));
  /* 101a7bed push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a7bf0 call 0x101a7bfe */
  push32(0x101a7bf5u); f_101a7bfe();
  /* 101a7bf5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a7bf8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7bfb pop esi */
  ESI = (pop32());
  /* 101a7bfc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a7bfd ret  */
  ESPCHK(0x101a7b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10007bfe @ 0x101a7bfe (194 bytes, 91 insns) */
void f_101a7bfe(void) {
  FTRACE(0x101a7bfeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7bfe push ebp */
  push32((uint32_t)(EBP));
  /* 101a7bff mov ebp, esp */
  EBP = (ESP);
  /* 101a7c01 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7c02 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101a7c04 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7c07 push esi */
  push32((uint32_t)(ESI));
  /* 101a7c08 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 101a7c0b push edi */
  push32((uint32_t)(EDI));
  /* 101a7c0c mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101a7c0f je 0x101a7c2c */
  if (C.zf) goto L_101a7c2c;
  /* 101a7c11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a7c13 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7c16 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 101a7c19 push eax */
  push32((uint32_t)(EAX));
  /* 101a7c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a7c1c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7c1f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101a7c22 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7c24 push eax */
  push32((uint32_t)(EAX));
  /* 101a7c25 call 0x101a7ea0 */
  push32(0x101a7c2au); f_101a7ea0();
  /* 101a7c2a pop ecx */
  ECX = (pop32());
  /* 101a7c2b pop ecx */
  ECX = (pop32());
L_101a7c2c:;
  /* 101a7c2c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7c2f mov eax, edi */
  EAX = (EDI);
  /* 101a7c31 jne 0x101a7c39 */
  if (!C.zf) goto L_101a7c39;
  /* 101a7c33 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 101a7c36 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_101a7c39:;
  /* 101a7c39 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7c3c jle 0x101a7c50 */
  if ((C.zf||C.sf!=C.of)) goto L_101a7c50;
  /* 101a7c3e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101a7c41 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101a7c44 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101a7c46 mov eax, ecx */
  EAX = (ECX);
  /* 101a7c48 mov cl, byte ptr [0x101b0be4] */
  CL = (r8((uint32_t)(0x101b0be4)));
  /* 101a7c4e mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_101a7c50:;
  /* 101a7c50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101a7c52 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7c55 push 0x101ae1a8 */
  push32((uint32_t)(0x101ae1a8u));
  /* 101a7c5a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 101a7c5d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7c5f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7c62 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7c63 call 0x101a9b10 */
  push32(0x101a7c68u); f_101a9b10();
  /* 101a7c68 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7c6b pop ecx */
  ECX = (pop32());
  /* 101a7c6c pop ecx */
  ECX = (pop32());
  /* 101a7c6d mov ecx, eax */
  ECX = (EAX);
  /* 101a7c6f je 0x101a7c74 */
  if (C.zf) goto L_101a7c74;
  /* 101a7c71 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_101a7c74:;
  /* 101a7c74 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101a7c77 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a7c78 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7c7b je 0x101a7cb9 */
  if (C.zf) goto L_101a7cb9;
  /* 101a7c7d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 101a7c80 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101a7c81 jns 0x101a7c88 */
  if (!C.sf) goto L_101a7c88;
  /* 101a7c83 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 101a7c85 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_101a7c88:;
  /* 101a7c88 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a7c89 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7c8c jl 0x101a7c9f */
  if ((C.sf!=C.of)) goto L_101a7c9f;
  /* 101a7c8e mov eax, ebx */
  EAX = (EBX);
  /* 101a7c90 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101a7c92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a7c93 pop esi */
  ESI = (pop32());
  /* 101a7c94 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a7c96 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 101a7c98 mov eax, ebx */
  EAX = (EBX);
  /* 101a7c9a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a7c9b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a7c9d mov ebx, edx */
  EBX = (EDX);
L_101a7c9f:;
  /* 101a7c9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a7ca0 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7ca3 jl 0x101a7cb6 */
  if ((C.sf!=C.of)) goto L_101a7cb6;
  /* 101a7ca5 mov eax, ebx */
  EAX = (EBX);
  /* 101a7ca7 push 0xa */
  push32((uint32_t)(0xau));
  /* 101a7ca9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a7caa pop esi */
  ESI = (pop32());
  /* 101a7cab idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a7cad add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 101a7caf mov eax, ebx */
  EAX = (EBX);
  /* 101a7cb1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101a7cb2 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a7cb4 mov ebx, edx */
  EBX = (EDX);
L_101a7cb6:;
  /* 101a7cb6 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_101a7cb9:;
  /* 101a7cb9 mov eax, edi */
  EAX = (EDI);
  /* 101a7cbb pop edi */
  EDI = (pop32());
  /* 101a7cbc pop esi */
  ESI = (pop32());
  /* 101a7cbd pop ebx */
  EBX = (pop32());
  /* 101a7cbe pop ebp */
  EBP = (pop32());
  /* 101a7cbf ret  */
  ESPCHK(0x101a7bfeu, _esp0);
  ESP += 4; return;
}

/* FUN_10007cc0 @ 0x101a7cc0 (85 bytes, 37 insns) */
void f_101a7cc0(void) {
  FTRACE(0x101a7cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 101a7cc1 mov ebp, esp */
  EBP = (ESP);
  /* 101a7cc3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7cc6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101a7cc9 push esi */
  push32((uint32_t)(ESI));
  /* 101a7cca push eax */
  push32((uint32_t)(EAX));
  /* 101a7ccb lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7cce push eax */
  push32((uint32_t)(EAX));
  /* 101a7ccf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a7cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7cd4 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 101a7cd6 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 101a7cd9 call 0x101a99fd */
  push32(0x101a7cdeu); f_101a99fd();
  /* 101a7cde mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101a7ce1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7ce4 push eax */
  push32((uint32_t)(EAX));
  /* 101a7ce5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101a7ce8 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7cea push eax */
  push32((uint32_t)(EAX));
  /* 101a7ceb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a7ced cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7cf1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101a7cf4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7cf7 push eax */
  push32((uint32_t)(EAX));
  /* 101a7cf8 call 0x101a9986 */
  push32(0x101a7cfdu); f_101a9986();
  /* 101a7cfd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a7d02 push eax */
  push32((uint32_t)(EAX));
  /* 101a7d03 push esi */
  push32((uint32_t)(ESI));
  /* 101a7d04 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a7d07 call 0x101a7d15 */
  push32(0x101a7d0cu); f_101a7d15();
  /* 101a7d0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a7d0f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7d12 pop esi */
  ESI = (pop32());
  /* 101a7d13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a7d14 ret  */
  ESPCHK(0x101a7cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d15 @ 0x101a7d15 (167 bytes, 73 insns) */
void f_101a7d15(void) {
  FTRACE(0x101a7d15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7d15 push ebp */
  push32((uint32_t)(EBP));
  /* 101a7d16 mov ebp, esp */
  EBP = (ESP);
  /* 101a7d18 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7d19 push esi */
  push32((uint32_t)(ESI));
  /* 101a7d1a mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101a7d1d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a7d20 push edi */
  push32((uint32_t)(EDI));
  /* 101a7d21 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101a7d24 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a7d25 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7d29 je 0x101a7d45 */
  if (C.zf) goto L_101a7d45;
  /* 101a7d2b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7d2e jne 0x101a7d45 */
  if (!C.zf) goto L_101a7d45;
  /* 101a7d30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101a7d32 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7d35 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 101a7d38 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7d3a add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7d3c mov eax, ecx */
  EAX = (ECX);
  /* 101a7d3e mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101a7d41 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_101a7d45:;
  /* 101a7d45 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7d48 mov edi, ebx */
  EDI = (EBX);
  /* 101a7d4a jne 0x101a7d52 */
  if (!C.zf) goto L_101a7d52;
  /* 101a7d4c mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 101a7d4f lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_101a7d52:;
  /* 101a7d52 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101a7d55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7d57 jg 0x101a7d69 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a7d69;
  /* 101a7d59 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7d5b push edi */
  push32((uint32_t)(EDI));
  /* 101a7d5c call 0x101a7ea0 */
  push32(0x101a7d61u); f_101a7ea0();
  /* 101a7d61 pop ecx */
  ECX = (pop32());
  /* 101a7d62 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 101a7d65 pop ecx */
  ECX = (pop32());
  /* 101a7d66 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a7d67 jmp 0x101a7d6b */
  goto L_101a7d6b;
L_101a7d69:;
  /* 101a7d69 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101a7d6b:;
  /* 101a7d6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7d6f jle 0x101a7db5 */
  if ((C.zf||C.sf!=C.of)) goto L_101a7db5;
  /* 101a7d71 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7d73 push edi */
  push32((uint32_t)(EDI));
  /* 101a7d74 call 0x101a7ea0 */
  push32(0x101a7d79u); f_101a7ea0();
  /* 101a7d79 mov al, byte ptr [0x101b0be4] */
  AL = (r8((uint32_t)(0x101b0be4)));
  /* 101a7d7e pop ecx */
  ECX = (pop32());
  /* 101a7d7f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101a7d81 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 101a7d84 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a7d85 pop ecx */
  ECX = (pop32());
  /* 101a7d86 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a7d88 jge 0x101a7db5 */
  if ((C.sf==C.of)) goto L_101a7db5;
  /* 101a7d8a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a7d8e je 0x101a7d94 */
  if (C.zf) goto L_101a7d94;
  /* 101a7d90 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 101a7d92 jmp 0x101a7d9b */
  goto L_101a7d9b;
L_101a7d94:;
  /* 101a7d94 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 101a7d96 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7d99 jl 0x101a7d9e */
  if ((C.sf!=C.of)) goto L_101a7d9e;
L_101a7d9b:;
  /* 101a7d9b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_101a7d9e:;
  /* 101a7d9e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a7da1 push edi */
  push32((uint32_t)(EDI));
  /* 101a7da2 call 0x101a7ea0 */
  push32(0x101a7da7u); f_101a7ea0();
  /* 101a7da7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a7daa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101a7dac push edi */
  push32((uint32_t)(EDI));
  /* 101a7dad call 0x101a9c00 */
  push32(0x101a7db2u); f_101a9c00();
  /* 101a7db2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a7db5:;
  /* 101a7db5 pop edi */
  EDI = (pop32());
  /* 101a7db6 mov eax, ebx */
  EAX = (EBX);
  /* 101a7db8 pop esi */
  ESI = (pop32());
  /* 101a7db9 pop ebx */
  EBX = (pop32());
  /* 101a7dba pop ebp */
  EBP = (pop32());
  /* 101a7dbb ret  */
  ESPCHK(0x101a7d15u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dbc @ 0x101a7dbc (147 bytes, 66 insns) */
void f_101a7dbc(void) {
  FTRACE(0x101a7dbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7dbc push ebp */
  push32((uint32_t)(EBP));
  /* 101a7dbd mov ebp, esp */
  EBP = (ESP);
  /* 101a7dbf sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7dc2 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7dc3 push esi */
  push32((uint32_t)(ESI));
  /* 101a7dc4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101a7dc7 push edi */
  push32((uint32_t)(EDI));
  /* 101a7dc8 push eax */
  push32((uint32_t)(EAX));
  /* 101a7dc9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7dcc push eax */
  push32((uint32_t)(EAX));
  /* 101a7dcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a7dd0 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7dd1 push ecx */
  push32((uint32_t)(ECX));
  /* 101a7dd2 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 101a7dd4 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 101a7dd7 call 0x101a99fd */
  push32(0x101a7ddcu); f_101a99fd();
  /* 101a7ddc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101a7ddf mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 101a7de2 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 101a7de5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a7de7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7deb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101a7dee add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7df1 mov edi, eax */
  EDI = (EAX);
  /* 101a7df3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7df6 push eax */
  push32((uint32_t)(EAX));
  /* 101a7df7 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7df8 push edi */
  push32((uint32_t)(EDI));
  /* 101a7df9 call 0x101a9986 */
  push32(0x101a7dfeu); f_101a9986();
  /* 101a7dfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101a7e01 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7e04 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a7e05 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7e07 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 101a7e0a cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7e0d jl 0x101a7e35 */
  if ((C.sf!=C.of)) goto L_101a7e35;
  /* 101a7e0f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7e11 jge 0x101a7e35 */
  if ((C.sf==C.of)) goto L_101a7e35;
  /* 101a7e13 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 101a7e15 je 0x101a7e21 */
  if (C.zf) goto L_101a7e21;
L_101a7e17:;
  /* 101a7e17 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 101a7e19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101a7e1a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a7e1c jne 0x101a7e17 */
  if (!C.zf) goto L_101a7e17;
  /* 101a7e1e and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_101a7e21:;
  /* 101a7e21 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7e24 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7e26 push eax */
  push32((uint32_t)(EAX));
  /* 101a7e27 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7e28 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a7e2b call 0x101a7d15 */
  push32(0x101a7e30u); f_101a7d15();
  /* 101a7e30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7e33 jmp 0x101a7e4a */
  goto L_101a7e4a;
L_101a7e35:;
  /* 101a7e35 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101a7e38 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7e3a push eax */
  push32((uint32_t)(EAX));
  /* 101a7e3b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101a7e3e push ebx */
  push32((uint32_t)(EBX));
  /* 101a7e3f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a7e42 call 0x101a7bfe */
  push32(0x101a7e47u); f_101a7bfe();
  /* 101a7e47 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a7e4a:;
  /* 101a7e4a pop edi */
  EDI = (pop32());
  /* 101a7e4b pop esi */
  ESI = (pop32());
  /* 101a7e4c pop ebx */
  EBX = (pop32());
  /* 101a7e4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a7e4e ret  */
  ESPCHK(0x101a7dbcu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x101a7e4f (81 bytes, 29 insns) */
void f_101a7e4f(void) {
  FTRACE(0x101a7e4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7e4f push ebp */
  push32((uint32_t)(EBP));
  /* 101a7e50 mov ebp, esp */
  EBP = (ESP);
  /* 101a7e52 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7e56 je 0x101a7e8a */
  if (C.zf) goto L_101a7e8a;
  /* 101a7e58 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7e5c je 0x101a7e8a */
  if (C.zf) goto L_101a7e8a;
  /* 101a7e5e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7e62 jne 0x101a7e77 */
  if (!C.zf) goto L_101a7e77;
  /* 101a7e64 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101a7e67 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a7e6a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a7e6d call 0x101a7cc0 */
  push32(0x101a7e72u); f_101a7cc0();
  /* 101a7e72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7e75 pop ebp */
  EBP = (pop32());
  /* 101a7e76 ret  */
  ESPCHK(0x101a7e4fu, _esp0);
  ESP += 4; return;
L_101a7e77:;
  /* 101a7e77 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101a7e7a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101a7e7d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a7e80 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a7e83 call 0x101a7dbc */
  push32(0x101a7e88u); f_101a7dbc();
  /* 101a7e88 jmp 0x101a7e9b */
  goto L_101a7e9b;
L_101a7e8a:;
  /* 101a7e8a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101a7e8d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101a7e90 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a7e93 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a7e96 call 0x101a7b9d */
  push32(0x101a7e9bu); f_101a7b9d();
L_101a7e9b:;
  /* 101a7e9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7e9e pop ebp */
  EBP = (pop32());
  /* 101a7e9f ret  */
  ESPCHK(0x101a7e4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea0 @ 0x101a7ea0 (37 bytes, 18 insns) */
void f_101a7ea0(void) {
  FTRACE(0x101a7ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7ea0 push edi */
  push32((uint32_t)(EDI));
  /* 101a7ea1 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 101a7ea5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101a7ea7 je 0x101a7ec3 */
  if (C.zf) goto L_101a7ec3;
  /* 101a7ea9 push esi */
  push32((uint32_t)(ESI));
  /* 101a7eaa mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101a7eae push esi */
  push32((uint32_t)(ESI));
  /* 101a7eaf call 0x101a9060 */
  push32(0x101a7eb4u); f_101a9060();
  /* 101a7eb4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a7eb5 push eax */
  push32((uint32_t)(EAX));
  /* 101a7eb6 push esi */
  push32((uint32_t)(ESI));
  /* 101a7eb7 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7eb9 push esi */
  push32((uint32_t)(ESI));
  /* 101a7eba call 0x101a9c60 */
  push32(0x101a7ebfu); f_101a9c60();
  /* 101a7ebf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7ec2 pop esi */
  ESI = (pop32());
L_101a7ec3:;
  /* 101a7ec3 pop edi */
  EDI = (pop32());
  /* 101a7ec4 ret  */
  ESPCHK(0x101a7ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec5 @ 0x101a7ec5 (45 bytes, 12 insns) */
void f_101a7ec5(void) {
  FTRACE(0x101a7ec5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7ec5 mov eax, dword ptr [0x101b0660] */
  EAX = (r32((uint32_t)(0x101b0660)));
  /* 101a7eca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7ecc je 0x101a7ed0 */
  if (C.zf) goto L_101a7ed0;
  /* 101a7ece call eax */
  call_ind((uint32_t)(EAX), 0x101a7ed0u);
L_101a7ed0:;
  /* 101a7ed0 push 0x101af014 */
  push32((uint32_t)(0x101af014u));
  /* 101a7ed5 push 0x101af008 */
  push32((uint32_t)(0x101af008u));
  /* 101a7eda call 0x101a7fc9 */
  push32(0x101a7edfu); f_101a7fc9();
  /* 101a7edf push 0x101af004 */
  push32((uint32_t)(0x101af004u));
  /* 101a7ee4 push 0x101af000 */
  push32((uint32_t)(0x101af000u));
  /* 101a7ee9 call 0x101a7fc9 */
  push32(0x101a7eeeu); f_101a7fc9();
  /* 101a7eee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7ef1 ret  */
  ESPCHK(0x101a7ec5u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x101a7ef2 (17 bytes, 6 insns) */
void f_101a7ef2(void) {
  FTRACE(0x101a7ef2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a7ef4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7ef6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101a7efa call 0x101a7f12 */
  push32(0x101a7effu); f_101a7f12();
  /* 101a7eff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7f02 ret  */
  ESPCHK(0x101a7ef2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f03 @ 0x101a7f03 (15 bytes, 6 insns) */
void f_101a7f03(void) {
  FTRACE(0x101a7f03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7f03 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a7f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a7f09 call 0x101a7f12 */
  push32(0x101a7f0eu); f_101a7f12();
  /* 101a7f0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7f11 ret  */
  ESPCHK(0x101a7f03u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f12 @ 0x101a7f12 (163 bytes, 53 insns) */
void f_101a7f12(void) {
  FTRACE(0x101a7f12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7f12 push edi */
  push32((uint32_t)(EDI));
  /* 101a7f13 call 0x101a7fb7 */
  push32(0x101a7f18u); f_101a7fb7();
  /* 101a7f18 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7f1a pop edi */
  EDI = (pop32());
  /* 101a7f1b cmp dword ptr [0x101b6698], edi */
  { uint32_t _a=(r32((uint32_t)(0x101b6698))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7f21 jne 0x101a7f34 */
  if (!C.zf) goto L_101a7f34;
  /* 101a7f23 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101a7f27 call dword ptr [0x101ae020] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae020))), 0x101a7f2du);
  /* 101a7f2d push eax */
  push32((uint32_t)(EAX));
  /* 101a7f2e call dword ptr [0x101ae01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae01c))), 0x101a7f34u);
L_101a7f34:;
  /* 101a7f34 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7f39 push ebx */
  push32((uint32_t)(EBX));
  /* 101a7f3a mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101a7f3e mov dword ptr [0x101b6694], edi */
  w32((uint32_t)(0x101b6694), (EDI));
  /* 101a7f44 mov byte ptr [0x101b6690], bl */
  w8((uint32_t)(0x101b6690), (BL));
  /* 101a7f4a jne 0x101a7f88 */
  if (!C.zf) goto L_101a7f88;
  /* 101a7f4c mov eax, dword ptr [0x101b7d50] */
  EAX = (r32((uint32_t)(0x101b7d50)));
  /* 101a7f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7f53 je 0x101a7f77 */
  if (C.zf) goto L_101a7f77;
  /* 101a7f55 mov ecx, dword ptr [0x101b7d4c] */
  ECX = (r32((uint32_t)(0x101b7d4c)));
  /* 101a7f5b push esi */
  push32((uint32_t)(ESI));
  /* 101a7f5c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 101a7f5f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7f61 jb 0x101a7f76 */
  if (C.cf) goto L_101a7f76;
L_101a7f63:;
  /* 101a7f63 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101a7f65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7f67 je 0x101a7f6b */
  if (C.zf) goto L_101a7f6b;
  /* 101a7f69 call eax */
  call_ind((uint32_t)(EAX), 0x101a7f6bu);
L_101a7f6b:;
  /* 101a7f6b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a7f6e cmp esi, dword ptr [0x101b7d50] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b7d50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7f74 jae 0x101a7f63 */
  if (!C.cf) goto L_101a7f63;
L_101a7f76:;
  /* 101a7f76 pop esi */
  ESI = (pop32());
L_101a7f77:;
  /* 101a7f77 push 0x101af020 */
  push32((uint32_t)(0x101af020u));
  /* 101a7f7c push 0x101af018 */
  push32((uint32_t)(0x101af018u));
  /* 101a7f81 call 0x101a7fc9 */
  push32(0x101a7f86u); f_101a7fc9();
  /* 101a7f86 pop ecx */
  ECX = (pop32());
  /* 101a7f87 pop ecx */
  ECX = (pop32());
L_101a7f88:;
  /* 101a7f88 push 0x101af028 */
  push32((uint32_t)(0x101af028u));
  /* 101a7f8d push 0x101af024 */
  push32((uint32_t)(0x101af024u));
  /* 101a7f92 call 0x101a7fc9 */
  push32(0x101a7f97u); f_101a7fc9();
  /* 101a7f97 pop ecx */
  ECX = (pop32());
  /* 101a7f98 pop ecx */
  ECX = (pop32());
  /* 101a7f99 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101a7f9b pop ebx */
  EBX = (pop32());
  /* 101a7f9c je 0x101a7fa5 */
  if (C.zf) goto L_101a7fa5;
  /* 101a7f9e call 0x101a7fc0 */
  push32(0x101a7fa3u); f_101a7fc0();
  /* 101a7fa3 pop edi */
  EDI = (pop32());
  /* 101a7fa4 ret  */
  ESPCHK(0x101a7f12u, _esp0);
  ESP += 4; return;
L_101a7fa5:;
  /* 101a7fa5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101a7fa9 mov dword ptr [0x101b6698], edi */
  w32((uint32_t)(0x101b6698), (EDI));
  /* 101a7faf call dword ptr [0x101ae018] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae018))), 0x101a7fb5u);
  /* 101a7fb5 pop edi */
  EDI = (pop32());
  /* 101a7fb6 ret  */
  ESPCHK(0x101a7f12u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb7 @ 0x101a7fb7 (9 bytes, 4 insns) */
void f_101a7fb7(void) {
  FTRACE(0x101a7fb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7fb7 push 0xd */
  push32((uint32_t)(0xdu));
  /* 101a7fb9 call 0x101aa033 */
  push32(0x101a7fbeu); f_101aa033();
  /* 101a7fbe pop ecx */
  ECX = (pop32());
  /* 101a7fbf ret  */
  ESPCHK(0x101a7fb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc0 @ 0x101a7fc0 (9 bytes, 4 insns) */
void f_101a7fc0(void) {
  FTRACE(0x101a7fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7fc0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 101a7fc2 call 0x101aa094 */
  push32(0x101a7fc7u); f_101aa094();
  /* 101a7fc7 pop ecx */
  ECX = (pop32());
  /* 101a7fc8 ret  */
  ESPCHK(0x101a7fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fc9 @ 0x101a7fc9 (26 bytes, 12 insns) */
void f_101a7fc9(void) {
  FTRACE(0x101a7fc9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7fc9 push esi */
  push32((uint32_t)(ESI));
  /* 101a7fca mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_101a7fce:;
  /* 101a7fce cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7fd2 jae 0x101a7fe1 */
  if (!C.cf) goto L_101a7fe1;
  /* 101a7fd4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101a7fd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a7fd8 je 0x101a7fdc */
  if (C.zf) goto L_101a7fdc;
  /* 101a7fda call eax */
  call_ind((uint32_t)(EAX), 0x101a7fdcu);
L_101a7fdc:;
  /* 101a7fdc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a7fdf jmp 0x101a7fce */
  goto L_101a7fce;
L_101a7fe1:;
  /* 101a7fe1 pop esi */
  ESI = (pop32());
  /* 101a7fe2 ret  */
  ESPCHK(0x101a7fc9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe3 @ 0x101a7fe3 (84 bytes, 32 insns) */
void f_101a7fe3(void) {
  FTRACE(0x101a7fe3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a7fe3 push esi */
  push32((uint32_t)(ESI));
  /* 101a7fe4 call 0x101a9f9e */
  push32(0x101a7fe9u); f_101a9f9e();
  /* 101a7fe9 call dword ptr [0x101ae02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae02c))), 0x101a7fefu);
  /* 101a7fef cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a7ff2 mov dword ptr [0x101b0690], eax */
  w32((uint32_t)(0x101b0690), (EAX));
  /* 101a7ff7 je 0x101a8033 */
  if (C.zf) goto L_101a8033;
  /* 101a7ff9 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 101a7ffb push 1 */
  push32((uint32_t)(0x1u));
  /* 101a7ffd call 0x101aa0a9 */
  push32(0x101a8002u); f_101aa0a9();
  /* 101a8002 mov esi, eax */
  ESI = (EAX);
  /* 101a8004 pop ecx */
  ECX = (pop32());
  /* 101a8005 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8007 pop ecx */
  ECX = (pop32());
  /* 101a8008 je 0x101a8033 */
  if (C.zf) goto L_101a8033;
  /* 101a800a push esi */
  push32((uint32_t)(ESI));
  /* 101a800b push dword ptr [0x101b0690] */
  push32((uint32_t)(r32((uint32_t)(0x101b0690))));
  /* 101a8011 call dword ptr [0x101ae028] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae028))), 0x101a8017u);
  /* 101a8017 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8019 je 0x101a8033 */
  if (C.zf) goto L_101a8033;
  /* 101a801b push esi */
  push32((uint32_t)(ESI));
  /* 101a801c call 0x101a8055 */
  push32(0x101a8021u); f_101a8055();
  /* 101a8021 pop ecx */
  ECX = (pop32());
  /* 101a8022 call dword ptr [0x101ae024] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae024))), 0x101a8028u);
  /* 101a8028 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101a802c push 1 */
  push32((uint32_t)(0x1u));
  /* 101a802e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101a8030 pop eax */
  EAX = (pop32());
  /* 101a8031 pop esi */
  ESI = (pop32());
  /* 101a8032 ret  */
  ESPCHK(0x101a7fe3u, _esp0);
  ESP += 4; return;
L_101a8033:;
  /* 101a8033 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a8035 pop esi */
  ESI = (pop32());
  /* 101a8036 ret  */
  ESPCHK(0x101a7fe3u, _esp0);
  ESP += 4; return;
}

/* FUN_10008037 @ 0x101a8037 (30 bytes, 8 insns) */
void f_101a8037(void) {
  FTRACE(0x101a8037u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8037 call 0x101a9fc7 */
  push32(0x101a803cu); f_101a9fc7();
  /* 101a803c mov eax, dword ptr [0x101b0690] */
  EAX = (r32((uint32_t)(0x101b0690)));
  /* 101a8041 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8044 je 0x101a8054 */
  if (C.zf) goto L_101a8054;
  /* 101a8046 push eax */
  push32((uint32_t)(EAX));
  /* 101a8047 call dword ptr [0x101ae030] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae030))), 0x101a804du);
  /* 101a804d or dword ptr [0x101b0690], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x101b0690)))|(0xffffffffu); w32((uint32_t)(0x101b0690), (_r)); fl_logic(_r,32); }
L_101a8054:;
  /* 101a8054 ret  */
  ESPCHK(0x101a8037u, _esp0);
  ESP += 4; return;
}

/* FUN_10008055 @ 0x101a8055 (19 bytes, 4 insns) */
void f_101a8055(void) {
  FTRACE(0x101a8055u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8055 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a8059 mov dword ptr [eax + 0x50], 0x101b0ce0 */
  w32((uint32_t)(EAX + 0x50), (0x101b0ce0u));
  /* 101a8060 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 101a8067 ret  */
  ESPCHK(0x101a8055u, _esp0);
  ESP += 4; return;
}

/* FUN_10008068 @ 0x101a8068 (103 bytes, 38 insns) */
void f_101a8068(void) {
  FTRACE(0x101a8068u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8068 push esi */
  push32((uint32_t)(ESI));
  /* 101a8069 push edi */
  push32((uint32_t)(EDI));
  /* 101a806a call dword ptr [0x101ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae03c))), 0x101a8070u);
  /* 101a8070 push dword ptr [0x101b0690] */
  push32((uint32_t)(r32((uint32_t)(0x101b0690))));
  /* 101a8076 mov edi, eax */
  EDI = (EAX);
  /* 101a8078 call dword ptr [0x101ae038] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae038))), 0x101a807eu);
  /* 101a807e mov esi, eax */
  ESI = (EAX);
  /* 101a8080 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8082 jne 0x101a80c3 */
  if (!C.zf) goto L_101a80c3;
  /* 101a8084 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 101a8086 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a8088 call 0x101aa0a9 */
  push32(0x101a808du); f_101aa0a9();
  /* 101a808d mov esi, eax */
  ESI = (EAX);
  /* 101a808f pop ecx */
  ECX = (pop32());
  /* 101a8090 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8092 pop ecx */
  ECX = (pop32());
  /* 101a8093 je 0x101a80bb */
  if (C.zf) goto L_101a80bb;
  /* 101a8095 push esi */
  push32((uint32_t)(ESI));
  /* 101a8096 push dword ptr [0x101b0690] */
  push32((uint32_t)(r32((uint32_t)(0x101b0690))));
  /* 101a809c call dword ptr [0x101ae028] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae028))), 0x101a80a2u);
  /* 101a80a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a80a4 je 0x101a80bb */
  if (C.zf) goto L_101a80bb;
  /* 101a80a6 push esi */
  push32((uint32_t)(ESI));
  /* 101a80a7 call 0x101a8055 */
  push32(0x101a80acu); f_101a8055();
  /* 101a80ac pop ecx */
  ECX = (pop32());
  /* 101a80ad call dword ptr [0x101ae024] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae024))), 0x101a80b3u);
  /* 101a80b3 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101a80b7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101a80b9 jmp 0x101a80c3 */
  goto L_101a80c3;
L_101a80bb:;
  /* 101a80bb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101a80bd call 0x101a70d1 */
  push32(0x101a80c2u); f_101a70d1();
  /* 101a80c2 pop ecx */
  ECX = (pop32());
L_101a80c3:;
  /* 101a80c3 push edi */
  push32((uint32_t)(EDI));
  /* 101a80c4 call dword ptr [0x101ae034] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae034))), 0x101a80cau);
  /* 101a80ca mov eax, esi */
  EAX = (ESI);
  /* 101a80cc pop edi */
  EDI = (pop32());
  /* 101a80cd pop esi */
  ESI = (pop32());
  /* 101a80ce ret  */
  ESPCHK(0x101a8068u, _esp0);
  ESP += 4; return;
}

/* FUN_100080cf @ 0x101a80cf (160 bytes, 62 insns) */
void f_101a80cf(void) {
  FTRACE(0x101a80cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a80cf mov eax, dword ptr [0x101b0690] */
  EAX = (r32((uint32_t)(0x101b0690)));
  /* 101a80d4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a80d7 je 0x101a816e */
  if (C.zf) goto L_101a816e;
  /* 101a80dd push esi */
  push32((uint32_t)(ESI));
  /* 101a80de mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101a80e2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a80e4 jne 0x101a80f3 */
  if (!C.zf) goto L_101a80f3;
  /* 101a80e6 push eax */
  push32((uint32_t)(EAX));
  /* 101a80e7 call dword ptr [0x101ae038] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae038))), 0x101a80edu);
  /* 101a80ed mov esi, eax */
  ESI = (EAX);
  /* 101a80ef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a80f1 je 0x101a815f */
  if (C.zf) goto L_101a815f;
L_101a80f3:;
  /* 101a80f3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 101a80f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a80f8 je 0x101a8101 */
  if (C.zf) goto L_101a8101;
  /* 101a80fa push eax */
  push32((uint32_t)(EAX));
  /* 101a80fb call 0x101aa1e6 */
  push32(0x101a8100u); f_101aa1e6();
  /* 101a8100 pop ecx */
  ECX = (pop32());
L_101a8101:;
  /* 101a8101 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 101a8104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8106 je 0x101a810f */
  if (C.zf) goto L_101a810f;
  /* 101a8108 push eax */
  push32((uint32_t)(EAX));
  /* 101a8109 call 0x101aa1e6 */
  push32(0x101a810eu); f_101aa1e6();
  /* 101a810e pop ecx */
  ECX = (pop32());
L_101a810f:;
  /* 101a810f mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 101a8112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8114 je 0x101a811d */
  if (C.zf) goto L_101a811d;
  /* 101a8116 push eax */
  push32((uint32_t)(EAX));
  /* 101a8117 call 0x101aa1e6 */
  push32(0x101a811cu); f_101aa1e6();
  /* 101a811c pop ecx */
  ECX = (pop32());
L_101a811d:;
  /* 101a811d mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 101a8120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8122 je 0x101a812b */
  if (C.zf) goto L_101a812b;
  /* 101a8124 push eax */
  push32((uint32_t)(EAX));
  /* 101a8125 call 0x101aa1e6 */
  push32(0x101a812au); f_101aa1e6();
  /* 101a812a pop ecx */
  ECX = (pop32());
L_101a812b:;
  /* 101a812b mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 101a812e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8130 je 0x101a8139 */
  if (C.zf) goto L_101a8139;
  /* 101a8132 push eax */
  push32((uint32_t)(EAX));
  /* 101a8133 call 0x101aa1e6 */
  push32(0x101a8138u); f_101aa1e6();
  /* 101a8138 pop ecx */
  ECX = (pop32());
L_101a8139:;
  /* 101a8139 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 101a813c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a813e je 0x101a8147 */
  if (C.zf) goto L_101a8147;
  /* 101a8140 push eax */
  push32((uint32_t)(EAX));
  /* 101a8141 call 0x101aa1e6 */
  push32(0x101a8146u); f_101aa1e6();
  /* 101a8146 pop ecx */
  ECX = (pop32());
L_101a8147:;
  /* 101a8147 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 101a814a cmp eax, 0x101b0ce0 */
  { uint32_t _a=(EAX),_b=(0x101b0ce0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a814f je 0x101a8158 */
  if (C.zf) goto L_101a8158;
  /* 101a8151 push eax */
  push32((uint32_t)(EAX));
  /* 101a8152 call 0x101aa1e6 */
  push32(0x101a8157u); f_101aa1e6();
  /* 101a8157 pop ecx */
  ECX = (pop32());
L_101a8158:;
  /* 101a8158 push esi */
  push32((uint32_t)(ESI));
  /* 101a8159 call 0x101aa1e6 */
  push32(0x101a815eu); f_101aa1e6();
  /* 101a815e pop ecx */
  ECX = (pop32());
L_101a815f:;
  /* 101a815f push 0 */
  push32((uint32_t)(0x0u));
  /* 101a8161 push dword ptr [0x101b0690] */
  push32((uint32_t)(r32((uint32_t)(0x101b0690))));
  /* 101a8167 call dword ptr [0x101ae028] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae028))), 0x101a816du);
  /* 101a816d pop esi */
  ESI = (pop32());
L_101a816e:;
  /* 101a816e ret  */
  ESPCHK(0x101a80cfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000816f @ 0x101a816f (444 bytes, 150 insns) */
void f_101a816f(void) {
  FTRACE(0x101a816fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a816f push ebp */
  push32((uint32_t)(EBP));
  /* 101a8170 mov ebp, esp */
  EBP = (ESP);
  /* 101a8172 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8175 push ebx */
  push32((uint32_t)(EBX));
  /* 101a8176 push esi */
  push32((uint32_t)(ESI));
  /* 101a8177 push edi */
  push32((uint32_t)(EDI));
  /* 101a8178 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 101a817d call 0x101aa2cf */
  push32(0x101a8182u); f_101aa2cf();
  /* 101a8182 mov esi, eax */
  ESI = (EAX);
  /* 101a8184 pop ecx */
  ECX = (pop32());
  /* 101a8185 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8187 jne 0x101a8191 */
  if (!C.zf) goto L_101a8191;
  /* 101a8189 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101a818b call 0x101a70d1 */
  push32(0x101a8190u); f_101a70d1();
  /* 101a8190 pop ecx */
  ECX = (pop32());
L_101a8191:;
  /* 101a8191 mov dword ptr [0x101b7c40], esi */
  w32((uint32_t)(0x101b7c40), (ESI));
  /* 101a8197 mov dword ptr [0x101b7d40], 0x20 */
  w32((uint32_t)(0x101b7d40), (0x20u));
  /* 101a81a1 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_101a81a7:;
  /* 101a81a7 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a81a9 jae 0x101a81c9 */
  if (!C.cf) goto L_101a81c9;
  /* 101a81ab and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101a81af or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101a81b2 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 101a81b6 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 101a81ba mov eax, dword ptr [0x101b7c40] */
  EAX = (r32((uint32_t)(0x101b7c40)));
  /* 101a81bf add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a81c2 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a81c7 jmp 0x101a81a7 */
  goto L_101a81a7;
L_101a81c9:;
  /* 101a81c9 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101a81cc push eax */
  push32((uint32_t)(EAX));
  /* 101a81cd call dword ptr [0x101ae04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae04c))), 0x101a81d3u);
  /* 101a81d3 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101a81d8 je 0x101a82af */
  if (C.zf) goto L_101a82af;
  /* 101a81de mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101a81e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a81e3 je 0x101a82af */
  if (C.zf) goto L_101a82af;
  /* 101a81e9 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 101a81eb lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 101a81ee lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 101a81f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101a81f4 mov eax, 0x800 */
  EAX = (0x800u);
  /* 101a81f9 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a81fb jl 0x101a81ff */
  if ((C.sf!=C.of)) goto L_101a81ff;
  /* 101a81fd mov edi, eax */
  EDI = (EAX);
L_101a81ff:;
  /* 101a81ff cmp dword ptr [0x101b7d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x101b7d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8205 jge 0x101a825d */
  if ((C.sf==C.of)) goto L_101a825d;
  /* 101a8207 mov esi, 0x101b7c44 */
  ESI = (0x101b7c44u);
L_101a820c:;
  /* 101a820c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 101a8211 call 0x101aa2cf */
  push32(0x101a8216u); f_101aa2cf();
  /* 101a8216 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8218 pop ecx */
  ECX = (pop32());
  /* 101a8219 je 0x101a8257 */
  if (C.zf) goto L_101a8257;
  /* 101a821b add dword ptr [0x101b7d40], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x101b7d40))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x101b7d40), (_r)); fl_add(_a,_b,_r,32); }
  /* 101a8222 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101a8224 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_101a822a:;
  /* 101a822a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a822c jae 0x101a824a */
  if (!C.cf) goto L_101a824a;
  /* 101a822e and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 101a8232 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101a8235 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 101a8239 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 101a823d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101a823f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8242 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8248 jmp 0x101a822a */
  goto L_101a822a;
L_101a824a:;
  /* 101a824a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a824d cmp dword ptr [0x101b7d40], edi */
  { uint32_t _a=(r32((uint32_t)(0x101b7d40))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8253 jl 0x101a820c */
  if ((C.sf!=C.of)) goto L_101a820c;
  /* 101a8255 jmp 0x101a825d */
  goto L_101a825d;
L_101a8257:;
  /* 101a8257 mov edi, dword ptr [0x101b7d40] */
  EDI = (r32((uint32_t)(0x101b7d40)));
L_101a825d:;
  /* 101a825d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101a825f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101a8261 jle 0x101a82af */
  if ((C.zf||C.sf!=C.of)) goto L_101a82af;
L_101a8263:;
  /* 101a8263 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a8266 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101a8268 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a826b je 0x101a82a5 */
  if (C.zf) goto L_101a82a5;
  /* 101a826d mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 101a826f test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 101a8271 je 0x101a82a5 */
  if (C.zf) goto L_101a82a5;
  /* 101a8273 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 101a8275 jne 0x101a8282 */
  if (!C.zf) goto L_101a8282;
  /* 101a8277 push ecx */
  push32((uint32_t)(ECX));
  /* 101a8278 call dword ptr [0x101ae048] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae048))), 0x101a827eu);
  /* 101a827e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8280 je 0x101a82a5 */
  if (C.zf) goto L_101a82a5;
L_101a8282:;
  /* 101a8282 mov ecx, esi */
  ECX = (ESI);
  /* 101a8284 mov eax, esi */
  EAX = (ESI);
  /* 101a8286 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101a8289 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101a828c mov ecx, dword ptr [ecx*4 + 0x101b7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101a8293 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101a8296 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101a8299 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a829c mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 101a829e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101a82a0 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 101a82a2 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_101a82a5:;
  /* 101a82a5 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101a82a9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a82aa inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101a82ab cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a82ad jl 0x101a8263 */
  if ((C.sf!=C.of)) goto L_101a8263;
L_101a82af:;
  /* 101a82af xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101a82b1:;
  /* 101a82b1 mov ecx, dword ptr [0x101b7c40] */
  ECX = (r32((uint32_t)(0x101b7c40)));
  /* 101a82b7 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 101a82ba cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a82be lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101a82c1 jne 0x101a8310 */
  if (!C.zf) goto L_101a8310;
  /* 101a82c3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101a82c5 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 101a82c9 jne 0x101a82d0 */
  if (!C.zf) goto L_101a82d0;
  /* 101a82cb push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 101a82cd pop eax */
  EAX = (pop32());
  /* 101a82ce jmp 0x101a82da */
  goto L_101a82da;
L_101a82d0:;
  /* 101a82d0 mov eax, ebx */
  EAX = (EBX);
  /* 101a82d2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a82d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101a82d5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a82d7 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101a82da:;
  /* 101a82da push eax */
  push32((uint32_t)(EAX));
  /* 101a82db call dword ptr [0x101ae044] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae044))), 0x101a82e1u);
  /* 101a82e1 mov edi, eax */
  EDI = (EAX);
  /* 101a82e3 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a82e6 je 0x101a82ff */
  if (C.zf) goto L_101a82ff;
  /* 101a82e8 push edi */
  push32((uint32_t)(EDI));
  /* 101a82e9 call dword ptr [0x101ae048] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae048))), 0x101a82efu);
  /* 101a82ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a82f1 je 0x101a82ff */
  if (C.zf) goto L_101a82ff;
  /* 101a82f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a82f8 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101a82fa cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a82fd jne 0x101a8305 */
  if (!C.zf) goto L_101a8305;
L_101a82ff:;
  /* 101a82ff or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101a8303 jmp 0x101a8314 */
  goto L_101a8314;
L_101a8305:;
  /* 101a8305 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8308 jne 0x101a8314 */
  if (!C.zf) goto L_101a8314;
  /* 101a830a or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101a830e jmp 0x101a8314 */
  goto L_101a8314;
L_101a8310:;
  /* 101a8310 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_101a8314:;
  /* 101a8314 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101a8315 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8318 jl 0x101a82b1 */
  if ((C.sf!=C.of)) goto L_101a82b1;
  /* 101a831a push dword ptr [0x101b7d40] */
  push32((uint32_t)(r32((uint32_t)(0x101b7d40))));
  /* 101a8320 call dword ptr [0x101ae040] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae040))), 0x101a8326u);
  /* 101a8326 pop edi */
  EDI = (pop32());
  /* 101a8327 pop esi */
  ESI = (pop32());
  /* 101a8328 pop ebx */
  EBX = (pop32());
  /* 101a8329 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a832a ret  */
  ESPCHK(0x101a816fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000832b @ 0x101a832b (84 bytes, 33 insns) */
void f_101a832b(void) {
  FTRACE(0x101a832bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a832b push ebx */
  push32((uint32_t)(EBX));
  /* 101a832c push esi */
  push32((uint32_t)(ESI));
  /* 101a832d push edi */
  push32((uint32_t)(EDI));
  /* 101a832e mov esi, 0x101b7c40 */
  ESI = (0x101b7c40u);
L_101a8333:;
  /* 101a8333 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101a8335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8337 je 0x101a8370 */
  if (C.zf) goto L_101a8370;
  /* 101a8339 mov edi, eax */
  EDI = (EAX);
  /* 101a833b add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8340 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8342 jae 0x101a8365 */
  if (!C.cf) goto L_101a8365;
  /* 101a8344 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_101a8347:;
  /* 101a8347 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a834b je 0x101a8354 */
  if (C.zf) goto L_101a8354;
  /* 101a834d push ebx */
  push32((uint32_t)(EBX));
  /* 101a834e call dword ptr [0x101ae050] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae050))), 0x101a8354u);
L_101a8354:;
  /* 101a8354 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101a8356 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8359 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a835e add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8361 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8363 jb 0x101a8347 */
  if (C.cf) goto L_101a8347;
L_101a8365:;
  /* 101a8365 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101a8367 call 0x101aa1e6 */
  push32(0x101a836cu); f_101aa1e6();
  /* 101a836c and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101a836f pop ecx */
  ECX = (pop32());
L_101a8370:;
  /* 101a8370 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8373 cmp esi, 0x101b7d40 */
  { uint32_t _a=(ESI),_b=(0x101b7d40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8379 jl 0x101a8333 */
  if ((C.sf!=C.of)) goto L_101a8333;
  /* 101a837b pop edi */
  EDI = (pop32());
  /* 101a837c pop esi */
  ESI = (pop32());
  /* 101a837d pop ebx */
  EBX = (pop32());
  /* 101a837e ret  */
  ESPCHK(0x101a832bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000837f @ 0x101a837f (185 bytes, 71 insns) */
void f_101a837f(void) {
  FTRACE(0x101a837fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a837f push ebx */
  push32((uint32_t)(EBX));
  /* 101a8380 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101a8382 cmp dword ptr [0x101b7d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b7d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8388 push esi */
  push32((uint32_t)(ESI));
  /* 101a8389 push edi */
  push32((uint32_t)(EDI));
  /* 101a838a jne 0x101a8391 */
  if (!C.zf) goto L_101a8391;
  /* 101a838c call 0x101aa7e1 */
  push32(0x101a8391u); f_101aa7e1();
L_101a8391:;
  /* 101a8391 mov esi, dword ptr [0x101b6648] */
  ESI = (r32((uint32_t)(0x101b6648)));
  /* 101a8397 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101a8399:;
  /* 101a8399 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101a839b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a839d je 0x101a83b1 */
  if (C.zf) goto L_101a83b1;
  /* 101a839f cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a83a1 je 0x101a83a4 */
  if (C.zf) goto L_101a83a4;
  /* 101a83a3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_101a83a4:;
  /* 101a83a4 push esi */
  push32((uint32_t)(ESI));
  /* 101a83a5 call 0x101a9060 */
  push32(0x101a83aau); f_101a9060();
  /* 101a83aa pop ecx */
  ECX = (pop32());
  /* 101a83ab lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 101a83af jmp 0x101a8399 */
  goto L_101a8399;
L_101a83b1:;
  /* 101a83b1 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 101a83b8 push eax */
  push32((uint32_t)(EAX));
  /* 101a83b9 call 0x101aa2cf */
  push32(0x101a83beu); f_101aa2cf();
  /* 101a83be mov esi, eax */
  ESI = (EAX);
  /* 101a83c0 pop ecx */
  ECX = (pop32());
  /* 101a83c1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a83c3 mov dword ptr [0x101b6678], esi */
  w32((uint32_t)(0x101b6678), (ESI));
  /* 101a83c9 jne 0x101a83d3 */
  if (!C.zf) goto L_101a83d3;
  /* 101a83cb push 9 */
  push32((uint32_t)(0x9u));
  /* 101a83cd call 0x101a70d1 */
  push32(0x101a83d2u); f_101a70d1();
  /* 101a83d2 pop ecx */
  ECX = (pop32());
L_101a83d3:;
  /* 101a83d3 mov edi, dword ptr [0x101b6648] */
  EDI = (r32((uint32_t)(0x101b6648)));
  /* 101a83d9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a83db je 0x101a8416 */
  if (C.zf) goto L_101a8416;
  /* 101a83dd push ebp */
  push32((uint32_t)(EBP));
L_101a83de:;
  /* 101a83de push edi */
  push32((uint32_t)(EDI));
  /* 101a83df call 0x101a9060 */
  push32(0x101a83e4u); f_101a9060();
  /* 101a83e4 mov ebp, eax */
  EBP = (EAX);
  /* 101a83e6 pop ecx */
  ECX = (pop32());
  /* 101a83e7 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 101a83e8 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a83eb je 0x101a840f */
  if (C.zf) goto L_101a840f;
  /* 101a83ed push ebp */
  push32((uint32_t)(EBP));
  /* 101a83ee call 0x101aa2cf */
  push32(0x101a83f3u); f_101aa2cf();
  /* 101a83f3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a83f5 pop ecx */
  ECX = (pop32());
  /* 101a83f6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101a83f8 jne 0x101a8402 */
  if (!C.zf) goto L_101a8402;
  /* 101a83fa push 9 */
  push32((uint32_t)(0x9u));
  /* 101a83fc call 0x101a70d1 */
  push32(0x101a8401u); f_101a70d1();
  /* 101a8401 pop ecx */
  ECX = (pop32());
L_101a8402:;
  /* 101a8402 push edi */
  push32((uint32_t)(EDI));
  /* 101a8403 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101a8405 call 0x101a9b10 */
  push32(0x101a840au); f_101a9b10();
  /* 101a840a pop ecx */
  ECX = (pop32());
  /* 101a840b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a840e pop ecx */
  ECX = (pop32());
L_101a840f:;
  /* 101a840f add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8411 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8413 jne 0x101a83de */
  if (!C.zf) goto L_101a83de;
  /* 101a8415 pop ebp */
  EBP = (pop32());
L_101a8416:;
  /* 101a8416 push dword ptr [0x101b6648] */
  push32((uint32_t)(r32((uint32_t)(0x101b6648))));
  /* 101a841c call 0x101aa1e6 */
  push32(0x101a8421u); f_101aa1e6();
  /* 101a8421 pop ecx */
  ECX = (pop32());
  /* 101a8422 mov dword ptr [0x101b6648], ebx */
  w32((uint32_t)(0x101b6648), (EBX));
  /* 101a8428 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 101a842a pop edi */
  EDI = (pop32());
  /* 101a842b pop esi */
  ESI = (pop32());
  /* 101a842c mov dword ptr [0x101b7d44], 1 */
  w32((uint32_t)(0x101b7d44), (0x1u));
  /* 101a8436 pop ebx */
  EBX = (pop32());
  /* 101a8437 ret  */
  ESPCHK(0x101a837fu, _esp0);
  ESP += 4; return;
}

/* FUN_10008438 @ 0x101a8438 (153 bytes, 62 insns) */
void f_101a8438(void) {
  FTRACE(0x101a8438u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8438 push ebp */
  push32((uint32_t)(EBP));
  /* 101a8439 mov ebp, esp */
  EBP = (ESP);
  /* 101a843b push ecx */
  push32((uint32_t)(ECX));
  /* 101a843c push ecx */
  push32((uint32_t)(ECX));
  /* 101a843d push ebx */
  push32((uint32_t)(EBX));
  /* 101a843e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101a8440 cmp dword ptr [0x101b7d48], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b7d48))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8446 push esi */
  push32((uint32_t)(ESI));
  /* 101a8447 push edi */
  push32((uint32_t)(EDI));
  /* 101a8448 jne 0x101a844f */
  if (!C.zf) goto L_101a844f;
  /* 101a844a call 0x101aa7e1 */
  push32(0x101a844fu); f_101aa7e1();
L_101a844f:;
  /* 101a844f mov esi, 0x101b669c */
  ESI = (0x101b669cu);
  /* 101a8454 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101a8459 push esi */
  push32((uint32_t)(ESI));
  /* 101a845a push ebx */
  push32((uint32_t)(EBX));
  /* 101a845b call dword ptr [0x101ae054] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae054))), 0x101a8461u);
  /* 101a8461 mov eax, dword ptr [0x101b7d54] */
  EAX = (r32((uint32_t)(0x101b7d54)));
  /* 101a8466 mov dword ptr [0x101b6688], esi */
  w32((uint32_t)(0x101b6688), (ESI));
  /* 101a846c mov edi, esi */
  EDI = (ESI);
  /* 101a846e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8470 je 0x101a8474 */
  if (C.zf) goto L_101a8474;
  /* 101a8472 mov edi, eax */
  EDI = (EAX);
L_101a8474:;
  /* 101a8474 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101a8477 push eax */
  push32((uint32_t)(EAX));
  /* 101a8478 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101a847b push eax */
  push32((uint32_t)(EAX));
  /* 101a847c push ebx */
  push32((uint32_t)(EBX));
  /* 101a847d push ebx */
  push32((uint32_t)(EBX));
  /* 101a847e push edi */
  push32((uint32_t)(EDI));
  /* 101a847f call 0x101a84d1 */
  push32(0x101a8484u); f_101a84d1();
  /* 101a8484 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a8487 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a848a lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 101a848d push eax */
  push32((uint32_t)(EAX));
  /* 101a848e call 0x101aa2cf */
  push32(0x101a8493u); f_101aa2cf();
  /* 101a8493 mov esi, eax */
  ESI = (EAX);
  /* 101a8495 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8498 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a849a jne 0x101a84a4 */
  if (!C.zf) goto L_101a84a4;
  /* 101a849c push 8 */
  push32((uint32_t)(0x8u));
  /* 101a849e call 0x101a70d1 */
  push32(0x101a84a3u); f_101a70d1();
  /* 101a84a3 pop ecx */
  ECX = (pop32());
L_101a84a4:;
  /* 101a84a4 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101a84a7 push eax */
  push32((uint32_t)(EAX));
  /* 101a84a8 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101a84ab push eax */
  push32((uint32_t)(EAX));
  /* 101a84ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a84af lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 101a84b2 push eax */
  push32((uint32_t)(EAX));
  /* 101a84b3 push esi */
  push32((uint32_t)(ESI));
  /* 101a84b4 push edi */
  push32((uint32_t)(EDI));
  /* 101a84b5 call 0x101a84d1 */
  push32(0x101a84bau); f_101a84d1();
  /* 101a84ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a84bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a84c0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a84c1 mov dword ptr [0x101b6670], esi */
  w32((uint32_t)(0x101b6670), (ESI));
  /* 101a84c7 pop edi */
  EDI = (pop32());
  /* 101a84c8 pop esi */
  ESI = (pop32());
  /* 101a84c9 mov dword ptr [0x101b666c], eax */
  w32((uint32_t)(0x101b666c), (EAX));
  /* 101a84ce pop ebx */
  EBX = (pop32());
  /* 101a84cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a84d0 ret  */
  ESPCHK(0x101a8438u, _esp0);
  ESP += 4; return;
}

/* FUN_100084d1 @ 0x101a84d1 (436 bytes, 187 insns) */
void f_101a84d1(void) {
  FTRACE(0x101a84d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a84d1 push ebp */
  push32((uint32_t)(EBP));
  /* 101a84d2 mov ebp, esp */
  EBP = (ESP);
  /* 101a84d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 101a84d7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101a84da push ebx */
  push32((uint32_t)(EBX));
  /* 101a84db push esi */
  push32((uint32_t)(ESI));
  /* 101a84dc and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101a84df mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101a84e2 push edi */
  push32((uint32_t)(EDI));
  /* 101a84e3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101a84e6 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 101a84ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a84ef test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101a84f1 je 0x101a84fb */
  if (C.zf) goto L_101a84fb;
  /* 101a84f3 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101a84f5 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a84f8 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101a84fb:;
  /* 101a84fb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a84fe jne 0x101a8544 */
  if (!C.zf) goto L_101a8544;
L_101a8500:;
  /* 101a8500 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101a8503 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a8504 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8507 je 0x101a8532 */
  if (C.zf) goto L_101a8532;
  /* 101a8509 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101a850b je 0x101a8532 */
  if (C.zf) goto L_101a8532;
  /* 101a850d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 101a8510 test byte ptr [edx + 0x101b6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x101b6b01)))&(0x4u); fl_logic(_r,8); }
  /* 101a8517 je 0x101a8525 */
  if (C.zf) goto L_101a8525;
  /* 101a8519 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101a851b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a851d je 0x101a8525 */
  if (C.zf) goto L_101a8525;
  /* 101a851f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101a8521 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101a8523 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a8524 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_101a8525:;
  /* 101a8525 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101a8527 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8529 je 0x101a8500 */
  if (C.zf) goto L_101a8500;
  /* 101a852b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101a852d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101a852f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a8530 jmp 0x101a8500 */
  goto L_101a8500;
L_101a8532:;
  /* 101a8532 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101a8534 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8536 je 0x101a853c */
  if (C.zf) goto L_101a853c;
  /* 101a8538 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 101a853b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101a853c:;
  /* 101a853c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a853f jne 0x101a8587 */
  if (!C.zf) goto L_101a8587;
  /* 101a8541 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a8542 jmp 0x101a8587 */
  goto L_101a8587;
L_101a8544:;
  /* 101a8544 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101a8546 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8548 je 0x101a854f */
  if (C.zf) goto L_101a854f;
  /* 101a854a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101a854c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101a854e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101a854f:;
  /* 101a854f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101a8551 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a8552 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 101a8555 test byte ptr [ebx + 0x101b6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x101b6b01)))&(0x4u); fl_logic(_r,8); }
  /* 101a855c je 0x101a856a */
  if (C.zf) goto L_101a856a;
  /* 101a855e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101a8560 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8562 je 0x101a8569 */
  if (C.zf) goto L_101a8569;
  /* 101a8564 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 101a8566 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 101a8568 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101a8569:;
  /* 101a8569 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_101a856a:;
  /* 101a856a cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a856d je 0x101a8578 */
  if (C.zf) goto L_101a8578;
  /* 101a856f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101a8571 je 0x101a857c */
  if (C.zf) goto L_101a857c;
  /* 101a8573 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8576 jne 0x101a8544 */
  if (!C.zf) goto L_101a8544;
L_101a8578:;
  /* 101a8578 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101a857a jne 0x101a857f */
  if (!C.zf) goto L_101a857f;
L_101a857c:;
  /* 101a857c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101a857d jmp 0x101a8587 */
  goto L_101a8587;
L_101a857f:;
  /* 101a857f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8581 je 0x101a8587 */
  if (C.zf) goto L_101a8587;
  /* 101a8583 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_101a8587:;
  /* 101a8587 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_101a858b:;
  /* 101a858b cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a858e je 0x101a8674 */
  if (C.zf) goto L_101a8674;
L_101a8594:;
  /* 101a8594 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101a8596 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8599 je 0x101a85a0 */
  if (C.zf) goto L_101a85a0;
  /* 101a859b cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a859e jne 0x101a85a3 */
  if (!C.zf) goto L_101a85a3;
L_101a85a0:;
  /* 101a85a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a85a1 jmp 0x101a8594 */
  goto L_101a8594;
L_101a85a3:;
  /* 101a85a3 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a85a6 je 0x101a8674 */
  if (C.zf) goto L_101a8674;
  /* 101a85ac test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101a85ae je 0x101a85b8 */
  if (C.zf) goto L_101a85b8;
  /* 101a85b0 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101a85b2 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a85b5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101a85b8:;
  /* 101a85b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 101a85bb inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_101a85bd:;
  /* 101a85bd mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 101a85c4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101a85c6:;
  /* 101a85c6 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a85c9 jne 0x101a85cf */
  if (!C.zf) goto L_101a85cf;
  /* 101a85cb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a85cc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101a85cd jmp 0x101a85c6 */
  goto L_101a85c6;
L_101a85cf:;
  /* 101a85cf cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a85d2 jne 0x101a8600 */
  if (!C.zf) goto L_101a8600;
  /* 101a85d4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101a85d7 jne 0x101a85fe */
  if (!C.zf) goto L_101a85fe;
  /* 101a85d9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101a85db cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a85de je 0x101a85ed */
  if (C.zf) goto L_101a85ed;
  /* 101a85e0 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a85e4 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 101a85e7 jne 0x101a85ed */
  if (!C.zf) goto L_101a85ed;
  /* 101a85e9 mov eax, edx */
  EAX = (EDX);
  /* 101a85eb jmp 0x101a85f0 */
  goto L_101a85f0;
L_101a85ed:;
  /* 101a85ed mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_101a85f0:;
  /* 101a85f0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101a85f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101a85f5 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a85f8 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 101a85fb mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_101a85fe:;
  /* 101a85fe shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_101a8600:;
  /* 101a8600 mov edx, ebx */
  EDX = (EBX);
  /* 101a8602 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101a8603 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101a8605 je 0x101a8615 */
  if (C.zf) goto L_101a8615;
  /* 101a8607 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101a8608:;
  /* 101a8608 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a860a je 0x101a8610 */
  if (C.zf) goto L_101a8610;
  /* 101a860c mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 101a860f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101a8610:;
  /* 101a8610 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101a8612 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101a8613 jne 0x101a8608 */
  if (!C.zf) goto L_101a8608;
L_101a8615:;
  /* 101a8615 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101a8617 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101a8619 je 0x101a8665 */
  if (C.zf) goto L_101a8665;
  /* 101a861b cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a861f jne 0x101a862b */
  if (!C.zf) goto L_101a862b;
  /* 101a8621 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8624 je 0x101a8665 */
  if (C.zf) goto L_101a8665;
  /* 101a8626 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8629 je 0x101a8665 */
  if (C.zf) goto L_101a8665;
L_101a862b:;
  /* 101a862b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a862f je 0x101a865f */
  if (C.zf) goto L_101a865f;
  /* 101a8631 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8633 je 0x101a864e */
  if (C.zf) goto L_101a864e;
  /* 101a8635 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 101a8638 test byte ptr [ebx + 0x101b6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x101b6b01)))&(0x4u); fl_logic(_r,8); }
  /* 101a863f je 0x101a8647 */
  if (C.zf) goto L_101a8647;
  /* 101a8641 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101a8643 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a8644 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a8645 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_101a8647:;
  /* 101a8647 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101a8649 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101a864b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101a864c jmp 0x101a865d */
  goto L_101a865d;
L_101a864e:;
  /* 101a864e movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 101a8651 test byte ptr [edx + 0x101b6b01], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x101b6b01)))&(0x4u); fl_logic(_r,8); }
  /* 101a8658 je 0x101a865d */
  if (C.zf) goto L_101a865d;
  /* 101a865a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a865b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_101a865d:;
  /* 101a865d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_101a865f:;
  /* 101a865f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a8660 jmp 0x101a85bd */
  goto L_101a85bd;
L_101a8665:;
  /* 101a8665 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101a8667 je 0x101a866d */
  if (C.zf) goto L_101a866d;
  /* 101a8669 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 101a866c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101a866d:;
  /* 101a866d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101a866f jmp 0x101a858b */
  goto L_101a858b;
L_101a8674:;
  /* 101a8674 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101a8676 je 0x101a867b */
  if (C.zf) goto L_101a867b;
  /* 101a8678 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_101a867b:;
  /* 101a867b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101a867e pop edi */
  EDI = (pop32());
  /* 101a867f pop esi */
  ESI = (pop32());
  /* 101a8680 pop ebx */
  EBX = (pop32());
  /* 101a8681 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 101a8683 pop ebp */
  EBP = (pop32());
  /* 101a8684 ret  */
  ESPCHK(0x101a84d1u, _esp0);
  ESP += 4; return;
}

/* FUN_10008685 @ 0x101a8685 (306 bytes, 132 insns) */
void f_101a8685(void) {
  FTRACE(0x101a8685u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8685 push ecx */
  push32((uint32_t)(ECX));
  /* 101a8686 push ecx */
  push32((uint32_t)(ECX));
  /* 101a8687 mov eax, dword ptr [0x101b67a0] */
  EAX = (r32((uint32_t)(0x101b67a0)));
  /* 101a868c push ebx */
  push32((uint32_t)(EBX));
  /* 101a868d push ebp */
  push32((uint32_t)(EBP));
  /* 101a868e mov ebp, dword ptr [0x101ae068] */
  EBP = (r32((uint32_t)(0x101ae068)));
  /* 101a8694 push esi */
  push32((uint32_t)(ESI));
  /* 101a8695 push edi */
  push32((uint32_t)(EDI));
  /* 101a8696 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101a8698 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101a869a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101a869c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a869e jne 0x101a86d3 */
  if (!C.zf) goto L_101a86d3;
  /* 101a86a0 call ebp */
  call_ind((uint32_t)(EBP), 0x101a86a2u);
  /* 101a86a2 mov esi, eax */
  ESI = (EAX);
  /* 101a86a4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a86a6 je 0x101a86b4 */
  if (C.zf) goto L_101a86b4;
  /* 101a86a8 mov dword ptr [0x101b67a0], 1 */
  w32((uint32_t)(0x101b67a0), (0x1u));
  /* 101a86b2 jmp 0x101a86dc */
  goto L_101a86dc;
L_101a86b4:;
  /* 101a86b4 call dword ptr [0x101ae064] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae064))), 0x101a86bau);
  /* 101a86ba mov edi, eax */
  EDI = (EAX);
  /* 101a86bc cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a86be je 0x101a87ae */
  if (C.zf) goto L_101a87ae;
  /* 101a86c4 mov dword ptr [0x101b67a0], 2 */
  w32((uint32_t)(0x101b67a0), (0x2u));
  /* 101a86ce jmp 0x101a8762 */
  goto L_101a8762;
L_101a86d3:;
  /* 101a86d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a86d6 jne 0x101a875d */
  if (!C.zf) goto L_101a875d;
L_101a86dc:;
  /* 101a86dc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a86de jne 0x101a86ec */
  if (!C.zf) goto L_101a86ec;
  /* 101a86e0 call ebp */
  call_ind((uint32_t)(EBP), 0x101a86e2u);
  /* 101a86e2 mov esi, eax */
  ESI = (EAX);
  /* 101a86e4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a86e6 je 0x101a87ae */
  if (C.zf) goto L_101a87ae;
L_101a86ec:;
  /* 101a86ec cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101a86ef mov eax, esi */
  EAX = (ESI);
  /* 101a86f1 je 0x101a8701 */
  if (C.zf) goto L_101a8701;
L_101a86f3:;
  /* 101a86f3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a86f4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a86f5 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101a86f8 jne 0x101a86f3 */
  if (!C.zf) goto L_101a86f3;
  /* 101a86fa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a86fb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a86fc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101a86ff jne 0x101a86f3 */
  if (!C.zf) goto L_101a86f3;
L_101a8701:;
  /* 101a8701 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8703 mov edi, dword ptr [0x101ae060] */
  EDI = (r32((uint32_t)(0x101ae060)));
  /* 101a8709 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101a870b push ebx */
  push32((uint32_t)(EBX));
  /* 101a870c push ebx */
  push32((uint32_t)(EBX));
  /* 101a870d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a870e push ebx */
  push32((uint32_t)(EBX));
  /* 101a870f push ebx */
  push32((uint32_t)(EBX));
  /* 101a8710 push eax */
  push32((uint32_t)(EAX));
  /* 101a8711 push esi */
  push32((uint32_t)(ESI));
  /* 101a8712 push ebx */
  push32((uint32_t)(EBX));
  /* 101a8713 push ebx */
  push32((uint32_t)(EBX));
  /* 101a8714 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 101a8718 call edi */
  call_ind((uint32_t)(EDI), 0x101a871au);
  /* 101a871a mov ebp, eax */
  EBP = (EAX);
  /* 101a871c cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a871e je 0x101a8752 */
  if (C.zf) goto L_101a8752;
  /* 101a8720 push ebp */
  push32((uint32_t)(EBP));
  /* 101a8721 call 0x101aa2cf */
  push32(0x101a8726u); f_101aa2cf();
  /* 101a8726 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8728 pop ecx */
  ECX = (pop32());
  /* 101a8729 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101a872d je 0x101a8752 */
  if (C.zf) goto L_101a8752;
  /* 101a872f push ebx */
  push32((uint32_t)(EBX));
  /* 101a8730 push ebx */
  push32((uint32_t)(EBX));
  /* 101a8731 push ebp */
  push32((uint32_t)(EBP));
  /* 101a8732 push eax */
  push32((uint32_t)(EAX));
  /* 101a8733 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 101a8737 push esi */
  push32((uint32_t)(ESI));
  /* 101a8738 push ebx */
  push32((uint32_t)(EBX));
  /* 101a8739 push ebx */
  push32((uint32_t)(EBX));
  /* 101a873a call edi */
  call_ind((uint32_t)(EDI), 0x101a873cu);
  /* 101a873c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a873e jne 0x101a874e */
  if (!C.zf) goto L_101a874e;
  /* 101a8740 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101a8744 call 0x101aa1e6 */
  push32(0x101a8749u); f_101aa1e6();
  /* 101a8749 pop ecx */
  ECX = (pop32());
  /* 101a874a mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_101a874e:;
  /* 101a874e mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_101a8752:;
  /* 101a8752 push esi */
  push32((uint32_t)(ESI));
  /* 101a8753 call dword ptr [0x101ae05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae05c))), 0x101a8759u);
  /* 101a8759 mov eax, ebx */
  EAX = (EBX);
  /* 101a875b jmp 0x101a87b0 */
  goto L_101a87b0;
L_101a875d:;
  /* 101a875d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8760 jne 0x101a87ae */
  if (!C.zf) goto L_101a87ae;
L_101a8762:;
  /* 101a8762 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8764 jne 0x101a8772 */
  if (!C.zf) goto L_101a8772;
  /* 101a8766 call dword ptr [0x101ae064] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae064))), 0x101a876cu);
  /* 101a876c mov edi, eax */
  EDI = (EAX);
  /* 101a876e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8770 je 0x101a87ae */
  if (C.zf) goto L_101a87ae;
L_101a8772:;
  /* 101a8772 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8774 mov eax, edi */
  EAX = (EDI);
  /* 101a8776 je 0x101a8782 */
  if (C.zf) goto L_101a8782;
L_101a8778:;
  /* 101a8778 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a8779 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a877b jne 0x101a8778 */
  if (!C.zf) goto L_101a8778;
  /* 101a877d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a877e cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8780 jne 0x101a8778 */
  if (!C.zf) goto L_101a8778;
L_101a8782:;
  /* 101a8782 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8784 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a8785 mov ebp, eax */
  EBP = (EAX);
  /* 101a8787 push ebp */
  push32((uint32_t)(EBP));
  /* 101a8788 call 0x101aa2cf */
  push32(0x101a878du); f_101aa2cf();
  /* 101a878d mov esi, eax */
  ESI = (EAX);
  /* 101a878f pop ecx */
  ECX = (pop32());
  /* 101a8790 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8792 jne 0x101a8798 */
  if (!C.zf) goto L_101a8798;
  /* 101a8794 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101a8796 jmp 0x101a87a3 */
  goto L_101a87a3;
L_101a8798:;
  /* 101a8798 push ebp */
  push32((uint32_t)(EBP));
  /* 101a8799 push edi */
  push32((uint32_t)(EDI));
  /* 101a879a push esi */
  push32((uint32_t)(ESI));
  /* 101a879b call 0x101aa800 */
  push32(0x101a87a0u); f_101aa800();
  /* 101a87a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a87a3:;
  /* 101a87a3 push edi */
  push32((uint32_t)(EDI));
  /* 101a87a4 call dword ptr [0x101ae058] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae058))), 0x101a87aau);
  /* 101a87aa mov eax, esi */
  EAX = (ESI);
  /* 101a87ac jmp 0x101a87b0 */
  goto L_101a87b0;
L_101a87ae:;
  /* 101a87ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101a87b0:;
  /* 101a87b0 pop edi */
  EDI = (pop32());
  /* 101a87b1 pop esi */
  ESI = (pop32());
  /* 101a87b2 pop ebp */
  EBP = (pop32());
  /* 101a87b3 pop ebx */
  EBX = (pop32());
  /* 101a87b4 pop ecx */
  ECX = (pop32());
  /* 101a87b5 pop ecx */
  ECX = (pop32());
  /* 101a87b6 ret  */
  ESPCHK(0x101a8685u, _esp0);
  ESP += 4; return;
}

/* FUN_100087b7 @ 0x101a87b7 (45 bytes, 17 insns) */
void f_101a87b7(void) {
  FTRACE(0x101a87b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a87b7 push esi */
  push32((uint32_t)(ESI));
  /* 101a87b8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101a87bc push 0 */
  push32((uint32_t)(0x0u));
  /* 101a87be and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101a87c1 call dword ptr [0x101ae004] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae004))), 0x101a87c7u);
  /* 101a87c7 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101a87cc jne 0x101a87e2 */
  if (!C.zf) goto L_101a87e2;
  /* 101a87ce mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 101a87d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101a87d3 je 0x101a87e2 */
  if (C.zf) goto L_101a87e2;
  /* 101a87d5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a87d7 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 101a87da mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101a87dc mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 101a87df mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_101a87e2:;
  /* 101a87e2 pop esi */
  ESI = (pop32());
  /* 101a87e3 ret  */
  ESPCHK(0x101a87b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100087e4 @ 0x101a87e4 (328 bytes, 115 insns) */
void f_101a87e4(void) {
  FTRACE(0x101a87e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a87e4 push ebp */
  push32((uint32_t)(EBP));
  /* 101a87e5 mov ebp, esp */
  EBP = (ESP);
  /* 101a87e7 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 101a87ec call 0x101aaef0 */
  push32(0x101a87f1u); f_101aaef0();
  /* 101a87f1 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 101a87f7 push ebx */
  push32((uint32_t)(EBX));
  /* 101a87f8 push eax */
  push32((uint32_t)(EAX));
  /* 101a87f9 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 101a8803 call dword ptr [0x101ae070] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae070))), 0x101a8809u);
  /* 101a8809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a880b je 0x101a8827 */
  if (C.zf) goto L_101a8827;
  /* 101a880d cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8814 jne 0x101a8827 */
  if (!C.zf) goto L_101a8827;
  /* 101a8816 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a881d jb 0x101a8827 */
  if (C.cf) goto L_101a8827;
  /* 101a881f push 1 */
  push32((uint32_t)(0x1u));
  /* 101a8821 pop eax */
  EAX = (pop32());
  /* 101a8822 jmp 0x101a8929 */
  goto L_101a8929;
L_101a8827:;
  /* 101a8827 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101a882d push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 101a8832 push eax */
  push32((uint32_t)(EAX));
  /* 101a8833 push 0x101ae1c8 */
  push32((uint32_t)(0x101ae1c8u));
  /* 101a8838 call dword ptr [0x101ae06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae06c))), 0x101a883eu);
  /* 101a883e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8840 je 0x101a8916 */
  if (C.zf) goto L_101a8916;
  /* 101a8846 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101a8848 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 101a884e cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8854 je 0x101a8869 */
  if (C.zf) goto L_101a8869;
L_101a8856:;
  /* 101a8856 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101a8858 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a885a jl 0x101a8864 */
  if ((C.sf!=C.of)) goto L_101a8864;
  /* 101a885c cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a885e jg 0x101a8864 */
  if ((!C.zf&&C.sf==C.of)) goto L_101a8864;
  /* 101a8860 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a8862 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_101a8864:;
  /* 101a8864 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a8865 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8867 jne 0x101a8856 */
  if (!C.zf) goto L_101a8856;
L_101a8869:;
  /* 101a8869 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101a886f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 101a8871 push eax */
  push32((uint32_t)(EAX));
  /* 101a8872 push 0x101ae1b0 */
  push32((uint32_t)(0x101ae1b0u));
  /* 101a8877 call 0x101aaeb0 */
  push32(0x101a887cu); f_101aaeb0();
  /* 101a887c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a887f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8881 jne 0x101a888b */
  if (!C.zf) goto L_101a888b;
  /* 101a8883 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101a8889 jmp 0x101a88d4 */
  goto L_101a88d4;
L_101a888b:;
  /* 101a888b lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101a8891 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101a8896 push eax */
  push32((uint32_t)(EAX));
  /* 101a8897 push ebx */
  push32((uint32_t)(EBX));
  /* 101a8898 call dword ptr [0x101ae054] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae054))), 0x101a889eu);
  /* 101a889e cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a88a4 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 101a88aa je 0x101a88bf */
  if (C.zf) goto L_101a88bf;
L_101a88ac:;
  /* 101a88ac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101a88ae cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a88b0 jl 0x101a88ba */
  if ((C.sf!=C.of)) goto L_101a88ba;
  /* 101a88b2 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a88b4 jg 0x101a88ba */
  if ((!C.zf&&C.sf==C.of)) goto L_101a88ba;
  /* 101a88b6 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 101a88b8 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_101a88ba:;
  /* 101a88ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a88bb cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a88bd jne 0x101a88ac */
  if (!C.zf) goto L_101a88ac;
L_101a88bf:;
  /* 101a88bf lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 101a88c5 push eax */
  push32((uint32_t)(EAX));
  /* 101a88c6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 101a88cc push eax */
  push32((uint32_t)(EAX));
  /* 101a88cd call 0x101aae30 */
  push32(0x101a88d2u); f_101aae30();
  /* 101a88d2 pop ecx */
  ECX = (pop32());
  /* 101a88d3 pop ecx */
  ECX = (pop32());
L_101a88d4:;
  /* 101a88d4 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a88d6 je 0x101a8916 */
  if (C.zf) goto L_101a8916;
  /* 101a88d8 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 101a88da push eax */
  push32((uint32_t)(EAX));
  /* 101a88db call 0x101aad70 */
  push32(0x101a88e0u); f_101aad70();
  /* 101a88e0 pop ecx */
  ECX = (pop32());
  /* 101a88e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a88e3 pop ecx */
  ECX = (pop32());
  /* 101a88e4 je 0x101a8916 */
  if (C.zf) goto L_101a8916;
  /* 101a88e6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a88e7 mov ecx, eax */
  ECX = (EAX);
  /* 101a88e9 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a88eb je 0x101a88fb */
  if (C.zf) goto L_101a88fb;
L_101a88ed:;
  /* 101a88ed cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a88f0 jne 0x101a88f6 */
  if (!C.zf) goto L_101a88f6;
  /* 101a88f2 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 101a88f4 jmp 0x101a88f7 */
  goto L_101a88f7;
L_101a88f6:;
  /* 101a88f6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_101a88f7:;
  /* 101a88f7 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a88f9 jne 0x101a88ed */
  if (!C.zf) goto L_101a88ed;
L_101a88fb:;
  /* 101a88fb push 0xa */
  push32((uint32_t)(0xau));
  /* 101a88fd push ebx */
  push32((uint32_t)(EBX));
  /* 101a88fe push eax */
  push32((uint32_t)(EAX));
  /* 101a88ff call 0x101aab35 */
  push32(0x101a8904u); f_101aab35();
  /* 101a8904 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8907 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a890a je 0x101a8929 */
  if (C.zf) goto L_101a8929;
  /* 101a890c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a890f je 0x101a8929 */
  if (C.zf) goto L_101a8929;
  /* 101a8911 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8914 je 0x101a8929 */
  if (C.zf) goto L_101a8929;
L_101a8916:;
  /* 101a8916 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101a8919 push eax */
  push32((uint32_t)(EAX));
  /* 101a891a call 0x101a87b7 */
  push32(0x101a891fu); f_101a87b7();
  /* 101a891f cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8923 pop ecx */
  ECX = (pop32());
  /* 101a8924 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8926 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101a8929:;
  /* 101a8929 pop ebx */
  EBX = (pop32());
  /* 101a892a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a892b ret  */
  ESPCHK(0x101a87e4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000892c @ 0x101a892c (93 bytes, 30 insns) */
void f_101a892c(void) {
  FTRACE(0x101a892cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a892c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a892e push 0 */
  push32((uint32_t)(0x0u));
  /* 101a8930 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8934 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101a8939 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101a893c push eax */
  push32((uint32_t)(EAX));
  /* 101a893d call dword ptr [0x101ae078] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae078))), 0x101a8943u);
  /* 101a8943 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8945 mov dword ptr [0x101b7c24], eax */
  w32((uint32_t)(0x101b7c24), (EAX));
  /* 101a894a je 0x101a8982 */
  if (C.zf) goto L_101a8982;
  /* 101a894c call 0x101a87e4 */
  push32(0x101a8951u); f_101a87e4();
  /* 101a8951 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8954 mov dword ptr [0x101b7c28], eax */
  w32((uint32_t)(0x101b7c28), (EAX));
  /* 101a8959 jne 0x101a8968 */
  if (!C.zf) goto L_101a8968;
  /* 101a895b push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 101a8960 call 0x101aaf1f */
  push32(0x101a8965u); f_101aaf1f();
  /* 101a8965 pop ecx */
  ECX = (pop32());
  /* 101a8966 jmp 0x101a8972 */
  goto L_101a8972;
L_101a8968:;
  /* 101a8968 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a896b jne 0x101a8985 */
  if (!C.zf) goto L_101a8985;
  /* 101a896d call 0x101ab770 */
  push32(0x101a8972u); f_101ab770();
L_101a8972:;
  /* 101a8972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8974 jne 0x101a8985 */
  if (!C.zf) goto L_101a8985;
  /* 101a8976 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101a897c call dword ptr [0x101ae074] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae074))), 0x101a8982u);
L_101a8982:;
  /* 101a8982 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a8984 ret  */
  ESPCHK(0x101a892cu, _esp0);
  ESP += 4; return;
L_101a8985:;
  /* 101a8985 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a8987 pop eax */
  EAX = (pop32());
  /* 101a8988 ret  */
  ESPCHK(0x101a892cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008989 @ 0x101a8989 (168 bytes, 56 insns) */
void f_101a8989(void) {
  FTRACE(0x101a8989u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8989 mov eax, dword ptr [0x101b7c28] */
  EAX = (r32((uint32_t)(0x101b7c28)));
  /* 101a898e push esi */
  push32((uint32_t)(ESI));
  /* 101a898f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8992 push edi */
  push32((uint32_t)(EDI));
  /* 101a8993 jne 0x101a89fb */
  if (!C.zf) goto L_101a89fb;
  /* 101a8995 push ebx */
  push32((uint32_t)(EBX));
  /* 101a8996 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101a8998 cmp dword ptr [0x101b69c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b69c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a899e push ebp */
  push32((uint32_t)(EBP));
  /* 101a899f mov ebp, dword ptr [0x101ae080] */
  EBP = (r32((uint32_t)(0x101ae080)));
  /* 101a89a5 jle 0x101a89e7 */
  if ((C.zf||C.sf!=C.of)) goto L_101a89e7;
  /* 101a89a7 mov eax, dword ptr [0x101b69cc] */
  EAX = (r32((uint32_t)(0x101b69cc)));
  /* 101a89ac mov edi, dword ptr [0x101ae07c] */
  EDI = (r32((uint32_t)(0x101ae07c)));
  /* 101a89b2 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_101a89b5:;
  /* 101a89b5 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101a89ba push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 101a89bf push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101a89c1 call edi */
  call_ind((uint32_t)(EDI), 0x101a89c3u);
  /* 101a89c3 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101a89c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a89ca push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101a89cc call edi */
  call_ind((uint32_t)(EDI), 0x101a89ceu);
  /* 101a89ce push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 101a89d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a89d3 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101a89d9 call ebp */
  call_ind((uint32_t)(EBP), 0x101a89dbu);
  /* 101a89db add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a89de inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101a89df cmp ebx, dword ptr [0x101b69c8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101b69c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a89e5 jl 0x101a89b5 */
  if ((C.sf!=C.of)) goto L_101a89b5;
L_101a89e7:;
  /* 101a89e7 push dword ptr [0x101b69cc] */
  push32((uint32_t)(r32((uint32_t)(0x101b69cc))));
  /* 101a89ed push 0 */
  push32((uint32_t)(0x0u));
  /* 101a89ef push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101a89f5 call ebp */
  call_ind((uint32_t)(EBP), 0x101a89f7u);
  /* 101a89f7 pop ebp */
  EBP = (pop32());
  /* 101a89f8 pop ebx */
  EBX = (pop32());
  /* 101a89f9 jmp 0x101a8a22 */
  goto L_101a8a22;
L_101a89fb:;
  /* 101a89fb cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a89fe jne 0x101a8a22 */
  if (!C.zf) goto L_101a8a22;
  /* 101a8a00 mov edi, 0x101b0e60 */
  EDI = (0x101b0e60u);
  /* 101a8a05 mov esi, edi */
  ESI = (EDI);
L_101a8a07:;
  /* 101a8a07 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 101a8a0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8a0c je 0x101a8a1c */
  if (C.zf) goto L_101a8a1c;
  /* 101a8a0e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101a8a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a8a15 push eax */
  push32((uint32_t)(EAX));
  /* 101a8a16 call dword ptr [0x101ae07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae07c))), 0x101a8a1cu);
L_101a8a1c:;
  /* 101a8a1c mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 101a8a1e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8a20 jne 0x101a8a07 */
  if (!C.zf) goto L_101a8a07;
L_101a8a22:;
  /* 101a8a22 push dword ptr [0x101b7c24] */
  push32((uint32_t)(r32((uint32_t)(0x101b7c24))));
  /* 101a8a28 call dword ptr [0x101ae074] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae074))), 0x101a8a2eu);
  /* 101a8a2e pop edi */
  EDI = (pop32());
  /* 101a8a2f pop esi */
  ESI = (pop32());
  /* 101a8a30 ret  */
  ESPCHK(0x101a8989u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a31 @ 0x101a8a31 (57 bytes, 18 insns) */
void f_101a8a31(void) {
  FTRACE(0x101a8a31u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8a31 mov eax, dword ptr [0x101b6650] */
  EAX = (r32((uint32_t)(0x101b6650)));
  /* 101a8a36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8a39 je 0x101a8a48 */
  if (C.zf) goto L_101a8a48;
  /* 101a8a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8a3d jne 0x101a8a69 */
  if (!C.zf) goto L_101a8a69;
  /* 101a8a3f cmp dword ptr [0x101b6654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b6654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8a46 jne 0x101a8a69 */
  if (!C.zf) goto L_101a8a69;
L_101a8a48:;
  /* 101a8a48 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 101a8a4d call 0x101a8a6a */
  push32(0x101a8a52u); f_101a8a6a();
  /* 101a8a52 mov eax, dword ptr [0x101b67a4] */
  EAX = (r32((uint32_t)(0x101b67a4)));
  /* 101a8a57 pop ecx */
  ECX = (pop32());
  /* 101a8a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8a5a je 0x101a8a5e */
  if (C.zf) goto L_101a8a5e;
  /* 101a8a5c call eax */
  call_ind((uint32_t)(EAX), 0x101a8a5eu);
L_101a8a5e:;
  /* 101a8a5e push 0xff */
  push32((uint32_t)(0xffu));
  /* 101a8a63 call 0x101a8a6a */
  push32(0x101a8a68u); f_101a8a6a();
  /* 101a8a68 pop ecx */
  ECX = (pop32());
L_101a8a69:;
  /* 101a8a69 ret  */
  ESPCHK(0x101a8a31u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a6a @ 0x101a8a6a (339 bytes, 100 insns) */
void f_101a8a6a(void) {
  FTRACE(0x101a8a6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8a6a push ebp */
  push32((uint32_t)(EBP));
  /* 101a8a6b mov ebp, esp */
  EBP = (ESP);
  /* 101a8a6d sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8a73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a8a76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101a8a78 mov eax, 0x101b06c0 */
  EAX = (0x101b06c0u);
L_101a8a7d:;
  /* 101a8a7d cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8a7f je 0x101a8a8c */
  if (C.zf) goto L_101a8a8c;
  /* 101a8a81 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8a84 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a8a85 cmp eax, 0x101b0750 */
  { uint32_t _a=(EAX),_b=(0x101b0750u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8a8a jl 0x101a8a7d */
  if ((C.sf!=C.of)) goto L_101a8a7d;
L_101a8a8c:;
  /* 101a8a8c push esi */
  push32((uint32_t)(ESI));
  /* 101a8a8d mov esi, ecx */
  ESI = (ECX);
  /* 101a8a8f shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 101a8a92 cmp edx, dword ptr [esi + 0x101b06c0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x101b06c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8a98 jne 0x101a8bba */
  if (!C.zf) goto L_101a8bba;
  /* 101a8a9e mov eax, dword ptr [0x101b6650] */
  EAX = (r32((uint32_t)(0x101b6650)));
  /* 101a8aa3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8aa6 je 0x101a8b94 */
  if (C.zf) goto L_101a8b94;
  /* 101a8aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8aae jne 0x101a8abd */
  if (!C.zf) goto L_101a8abd;
  /* 101a8ab0 cmp dword ptr [0x101b6654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101b6654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8ab7 je 0x101a8b94 */
  if (C.zf) goto L_101a8b94;
L_101a8abd:;
  /* 101a8abd cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8ac3 je 0x101a8bba */
  if (C.zf) goto L_101a8bba;
  /* 101a8ac9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101a8acf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101a8ad4 push eax */
  push32((uint32_t)(EAX));
  /* 101a8ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a8ad7 call dword ptr [0x101ae054] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae054))), 0x101a8addu);
  /* 101a8add test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8adf jne 0x101a8af4 */
  if (!C.zf) goto L_101a8af4;
  /* 101a8ae1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101a8ae7 push 0x101ae4b8 */
  push32((uint32_t)(0x101ae4b8u));
  /* 101a8aec push eax */
  push32((uint32_t)(EAX));
  /* 101a8aed call 0x101a9b10 */
  push32(0x101a8af2u); f_101a9b10();
  /* 101a8af2 pop ecx */
  ECX = (pop32());
  /* 101a8af3 pop ecx */
  ECX = (pop32());
L_101a8af4:;
  /* 101a8af4 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101a8afa push edi */
  push32((uint32_t)(EDI));
  /* 101a8afb push eax */
  push32((uint32_t)(EAX));
  /* 101a8afc lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 101a8b02 call 0x101a9060 */
  push32(0x101a8b07u); f_101a9060();
  /* 101a8b07 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a8b08 pop ecx */
  ECX = (pop32());
  /* 101a8b09 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8b0c jbe 0x101a8b37 */
  if ((C.cf||C.zf)) goto L_101a8b37;
  /* 101a8b0e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101a8b14 push eax */
  push32((uint32_t)(EAX));
  /* 101a8b15 call 0x101a9060 */
  push32(0x101a8b1au); f_101a9060();
  /* 101a8b1a mov edi, eax */
  EDI = (EAX);
  /* 101a8b1c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101a8b22 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8b25 push 3 */
  push32((uint32_t)(0x3u));
  /* 101a8b27 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8b29 push 0x101ae4b4 */
  push32((uint32_t)(0x101ae4b4u));
  /* 101a8b2e push edi */
  push32((uint32_t)(EDI));
  /* 101a8b2f call 0x101abe20 */
  push32(0x101a8b34u); f_101abe20();
  /* 101a8b34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a8b37:;
  /* 101a8b37 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101a8b3d push 0x101ae498 */
  push32((uint32_t)(0x101ae498u));
  /* 101a8b42 push eax */
  push32((uint32_t)(EAX));
  /* 101a8b43 call 0x101a9b10 */
  push32(0x101a8b48u); f_101a9b10();
  /* 101a8b48 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101a8b4e push edi */
  push32((uint32_t)(EDI));
  /* 101a8b4f push eax */
  push32((uint32_t)(EAX));
  /* 101a8b50 call 0x101a9b20 */
  push32(0x101a8b55u); f_101a9b20();
  /* 101a8b55 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101a8b5b push 0x101ae494 */
  push32((uint32_t)(0x101ae494u));
  /* 101a8b60 push eax */
  push32((uint32_t)(EAX));
  /* 101a8b61 call 0x101a9b20 */
  push32(0x101a8b66u); f_101a9b20();
  /* 101a8b66 push dword ptr [esi + 0x101b06c4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x101b06c4))));
  /* 101a8b6c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101a8b72 push eax */
  push32((uint32_t)(EAX));
  /* 101a8b73 call 0x101a9b20 */
  push32(0x101a8b78u); f_101a9b20();
  /* 101a8b78 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 101a8b7d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101a8b83 push 0x101ae46c */
  push32((uint32_t)(0x101ae46cu));
  /* 101a8b88 push eax */
  push32((uint32_t)(EAX));
  /* 101a8b89 call 0x101abd94 */
  push32(0x101a8b8eu); f_101abd94();
  /* 101a8b8e add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8b91 pop edi */
  EDI = (pop32());
  /* 101a8b92 jmp 0x101a8bba */
  goto L_101a8bba;
L_101a8b94:;
  /* 101a8b94 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101a8b97 lea esi, [esi + 0x101b06c4] */
  ESI = ((uint32_t)(ESI + 0x101b06c4));
  /* 101a8b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 101a8b9f push eax */
  push32((uint32_t)(EAX));
  /* 101a8ba0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101a8ba2 call 0x101a9060 */
  push32(0x101a8ba7u); f_101a9060();
  /* 101a8ba7 pop ecx */
  ECX = (pop32());
  /* 101a8ba8 push eax */
  push32((uint32_t)(EAX));
  /* 101a8ba9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101a8bab push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 101a8bad call dword ptr [0x101ae044] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae044))), 0x101a8bb3u);
  /* 101a8bb3 push eax */
  push32((uint32_t)(EAX));
  /* 101a8bb4 call dword ptr [0x101ae084] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae084))), 0x101a8bbau);
L_101a8bba:;
  /* 101a8bba pop esi */
  ESI = (pop32());
  /* 101a8bbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a8bbc ret  */
  ESPCHK(0x101a8a6au, _esp0);
  ESP += 4; return;
}

/* FUN_10008bbd @ 0x101a8bbd (101 bytes, 34 insns) */
void f_101a8bbd(void) {
  FTRACE(0x101a8bbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8bbd push esi */
  push32((uint32_t)(ESI));
  /* 101a8bbe mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101a8bc2 cmp esi, dword ptr [0x101b7d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8bc8 jae 0x101a8c0a */
  if (!C.cf) goto L_101a8c0a;
  /* 101a8bca mov ecx, esi */
  ECX = (ESI);
  /* 101a8bcc mov eax, esi */
  EAX = (ESI);
  /* 101a8bce sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101a8bd1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101a8bd4 mov ecx, dword ptr [ecx*4 + 0x101b7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101a8bdb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101a8bde test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101a8be3 je 0x101a8c0a */
  if (C.zf) goto L_101a8c0a;
  /* 101a8be5 push edi */
  push32((uint32_t)(EDI));
  /* 101a8be6 push esi */
  push32((uint32_t)(ESI));
  /* 101a8be7 call 0x101ac064 */
  push32(0x101a8becu); f_101ac064();
  /* 101a8bec push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101a8bf0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101a8bf4 push esi */
  push32((uint32_t)(ESI));
  /* 101a8bf5 call 0x101a8c22 */
  push32(0x101a8bfau); f_101a8c22();
  /* 101a8bfa push esi */
  push32((uint32_t)(ESI));
  /* 101a8bfb mov edi, eax */
  EDI = (EAX);
  /* 101a8bfd call 0x101ac0c3 */
  push32(0x101a8c02u); f_101ac0c3();
  /* 101a8c02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8c05 mov eax, edi */
  EAX = (EDI);
  /* 101a8c07 pop edi */
  EDI = (pop32());
  /* 101a8c08 pop esi */
  ESI = (pop32());
  /* 101a8c09 ret  */
  ESPCHK(0x101a8bbdu, _esp0);
  ESP += 4; return;
L_101a8c0a:;
  /* 101a8c0a call 0x101abf91 */
  push32(0x101a8c0fu); f_101abf91();
  /* 101a8c0f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101a8c15 call 0x101abf9a */
  push32(0x101a8c1au); f_101abf9a();
  /* 101a8c1a and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101a8c1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a8c20 pop esi */
  ESI = (pop32());
  /* 101a8c21 ret  */
  ESPCHK(0x101a8bbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008c22 @ 0x101a8c22 (115 bytes, 41 insns) */
void f_101a8c22(void) {
  FTRACE(0x101a8c22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8c22 push esi */
  push32((uint32_t)(ESI));
  /* 101a8c23 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101a8c27 push edi */
  push32((uint32_t)(EDI));
  /* 101a8c28 push esi */
  push32((uint32_t)(ESI));
  /* 101a8c29 call 0x101ac022 */
  push32(0x101a8c2eu); f_101ac022();
  /* 101a8c2e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8c31 pop ecx */
  ECX = (pop32());
  /* 101a8c32 jne 0x101a8c41 */
  if (!C.zf) goto L_101a8c41;
  /* 101a8c34 call 0x101abf91 */
  push32(0x101a8c39u); f_101abf91();
  /* 101a8c39 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101a8c3f jmp 0x101a8c6e */
  goto L_101a8c6e;
L_101a8c41:;
  /* 101a8c41 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 101a8c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a8c47 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101a8c4b push eax */
  push32((uint32_t)(EAX));
  /* 101a8c4c call dword ptr [0x101ae000] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae000))), 0x101a8c52u);
  /* 101a8c52 mov edi, eax */
  EDI = (EAX);
  /* 101a8c54 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8c57 jne 0x101a8c61 */
  if (!C.zf) goto L_101a8c61;
  /* 101a8c59 call dword ptr [0x101ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae03c))), 0x101a8c5fu);
  /* 101a8c5f jmp 0x101a8c63 */
  goto L_101a8c63;
L_101a8c61:;
  /* 101a8c61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101a8c63:;
  /* 101a8c63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8c65 je 0x101a8c73 */
  if (C.zf) goto L_101a8c73;
  /* 101a8c67 push eax */
  push32((uint32_t)(EAX));
  /* 101a8c68 call 0x101abf1e */
  push32(0x101a8c6du); f_101abf1e();
  /* 101a8c6d pop ecx */
  ECX = (pop32());
L_101a8c6e:;
  /* 101a8c6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a8c71 jmp 0x101a8c92 */
  goto L_101a8c92;
L_101a8c73:;
  /* 101a8c73 mov ecx, esi */
  ECX = (ESI);
  /* 101a8c75 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 101a8c78 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101a8c7b mov eax, esi */
  EAX = (ESI);
  /* 101a8c7d mov ecx, dword ptr [ecx*4 + 0x101b7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101a8c84 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101a8c87 and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 101a8c8c lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 101a8c90 mov eax, edi */
  EAX = (EDI);
L_101a8c92:;
  /* 101a8c92 pop edi */
  EDI = (pop32());
  /* 101a8c93 pop esi */
  ESI = (pop32());
  /* 101a8c94 ret  */
  ESPCHK(0x101a8c22u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c95 @ 0x101a8c95 (101 bytes, 34 insns) */
void f_101a8c95(void) {
  FTRACE(0x101a8c95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8c95 push esi */
  push32((uint32_t)(ESI));
  /* 101a8c96 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101a8c9a cmp esi, dword ptr [0x101b7d40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101b7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8ca0 jae 0x101a8ce2 */
  if (!C.cf) goto L_101a8ce2;
  /* 101a8ca2 mov ecx, esi */
  ECX = (ESI);
  /* 101a8ca4 mov eax, esi */
  EAX = (ESI);
  /* 101a8ca6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101a8ca9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101a8cac mov ecx, dword ptr [ecx*4 + 0x101b7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101a8cb3 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101a8cb6 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101a8cbb je 0x101a8ce2 */
  if (C.zf) goto L_101a8ce2;
  /* 101a8cbd push edi */
  push32((uint32_t)(EDI));
  /* 101a8cbe push esi */
  push32((uint32_t)(ESI));
  /* 101a8cbf call 0x101ac064 */
  push32(0x101a8cc4u); f_101ac064();
  /* 101a8cc4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101a8cc8 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101a8ccc push esi */
  push32((uint32_t)(ESI));
  /* 101a8ccd call 0x101a8cfa */
  push32(0x101a8cd2u); f_101a8cfa();
  /* 101a8cd2 push esi */
  push32((uint32_t)(ESI));
  /* 101a8cd3 mov edi, eax */
  EDI = (EAX);
  /* 101a8cd5 call 0x101ac0c3 */
  push32(0x101a8cdau); f_101ac0c3();
  /* 101a8cda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8cdd mov eax, edi */
  EAX = (EDI);
  /* 101a8cdf pop edi */
  EDI = (pop32());
  /* 101a8ce0 pop esi */
  ESI = (pop32());
  /* 101a8ce1 ret  */
  ESPCHK(0x101a8c95u, _esp0);
  ESP += 4; return;
L_101a8ce2:;
  /* 101a8ce2 call 0x101abf91 */
  push32(0x101a8ce7u); f_101abf91();
  /* 101a8ce7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101a8ced call 0x101abf9a */
  push32(0x101a8cf2u); f_101abf9a();
  /* 101a8cf2 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101a8cf5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a8cf8 pop esi */
  ESI = (pop32());
  /* 101a8cf9 ret  */
  ESPCHK(0x101a8c95u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cfa @ 0x101a8cfa (395 bytes, 135 insns) */
void f_101a8cfa(void) {
  FTRACE(0x101a8cfau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8cfa push ebp */
  push32((uint32_t)(EBP));
  /* 101a8cfb mov ebp, esp */
  EBP = (ESP);
  /* 101a8cfd sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8d03 push ebx */
  push32((uint32_t)(EBX));
  /* 101a8d04 push esi */
  push32((uint32_t)(ESI));
  /* 101a8d05 push edi */
  push32((uint32_t)(EDI));
  /* 101a8d06 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101a8d08 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8d0b mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 101a8d0e mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 101a8d11 jne 0x101a8d1a */
  if (!C.zf) goto L_101a8d1a;
L_101a8d13:;
  /* 101a8d13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a8d15 jmp 0x101a8e80 */
  goto L_101a8e80;
L_101a8d1a:;
  /* 101a8d1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a8d1d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101a8d20 lea ebx, [eax*4 + 0x101b7c40] */
  EBX = ((uint32_t)(EAX*4 + 0x101b7c40));
  /* 101a8d27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a8d2a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101a8d2d lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 101a8d30 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101a8d32 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101a8d35 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101a8d3a je 0x101a8d4a */
  if (C.zf) goto L_101a8d4a;
  /* 101a8d3c push 2 */
  push32((uint32_t)(0x2u));
  /* 101a8d3e push edi */
  push32((uint32_t)(EDI));
  /* 101a8d3f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a8d42 call 0x101a8c22 */
  push32(0x101a8d47u); f_101a8c22();
  /* 101a8d47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101a8d4a:;
  /* 101a8d4a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101a8d4c add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8d4e test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101a8d52 je 0x101a8e19 */
  if (C.zf) goto L_101a8e19;
  /* 101a8d58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a8d5b cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8d5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101a8d61 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 101a8d64 jbe 0x101a8e54 */
  if ((C.cf||C.zf)) goto L_101a8e54;
L_101a8d6a:;
  /* 101a8d6a lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_101a8d70:;
  /* 101a8d70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a8d73 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8d76 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8d79 jae 0x101a8da4 */
  if (!C.cf) goto L_101a8da4;
  /* 101a8d7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a8d7e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101a8d81 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 101a8d83 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8d86 jne 0x101a8d8f */
  if (!C.zf) goto L_101a8d8f;
  /* 101a8d88 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 101a8d8b mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 101a8d8e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_101a8d8f:;
  /* 101a8d8f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101a8d91 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101a8d92 mov ecx, eax */
  ECX = (EAX);
  /* 101a8d94 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 101a8d9a sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8d9c cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8da2 jl 0x101a8d70 */
  if ((C.sf!=C.of)) goto L_101a8d70;
L_101a8da4:;
  /* 101a8da4 mov edi, eax */
  EDI = (EAX);
  /* 101a8da6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 101a8dac sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8dae lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101a8db1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a8db3 push eax */
  push32((uint32_t)(EAX));
  /* 101a8db4 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 101a8dba push edi */
  push32((uint32_t)(EDI));
  /* 101a8dbb push eax */
  push32((uint32_t)(EAX));
  /* 101a8dbc mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101a8dbe push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 101a8dc1 call dword ptr [0x101ae084] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae084))), 0x101a8dc7u);
  /* 101a8dc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8dc9 je 0x101a8e0e */
  if (C.zf) goto L_101a8e0e;
  /* 101a8dcb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101a8dce add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101a8dd1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8dd3 jl 0x101a8de0 */
  if ((C.sf!=C.of)) goto L_101a8de0;
  /* 101a8dd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101a8dd8 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8ddb cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8dde jb 0x101a8d6a */
  if (C.cf) goto L_101a8d6a;
L_101a8de0:;
  /* 101a8de0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101a8de2:;
  /* 101a8de2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101a8de5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8de7 jne 0x101a8e7d */
  if (!C.zf) goto L_101a8e7d;
  /* 101a8ded cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8df0 je 0x101a8e54 */
  if (C.zf) goto L_101a8e54;
  /* 101a8df2 push 5 */
  push32((uint32_t)(0x5u));
  /* 101a8df4 pop esi */
  ESI = (pop32());
  /* 101a8df5 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8df8 jne 0x101a8e46 */
  if (!C.zf) goto L_101a8e46;
  /* 101a8dfa call 0x101abf91 */
  push32(0x101a8dffu); f_101abf91();
  /* 101a8dff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101a8e05 call 0x101abf9a */
  push32(0x101a8e0au); f_101abf9a();
  /* 101a8e0a mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 101a8e0c jmp 0x101a8e4f */
  goto L_101a8e4f;
L_101a8e0e:;
  /* 101a8e0e call dword ptr [0x101ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae03c))), 0x101a8e14u);
  /* 101a8e14 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 101a8e17 jmp 0x101a8de0 */
  goto L_101a8de0;
L_101a8e19:;
  /* 101a8e19 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 101a8e1c push edi */
  push32((uint32_t)(EDI));
  /* 101a8e1d push ecx */
  push32((uint32_t)(ECX));
  /* 101a8e1e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101a8e21 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a8e24 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101a8e26 call dword ptr [0x101ae084] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae084))), 0x101a8e2cu);
  /* 101a8e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8e2e je 0x101a8e3b */
  if (C.zf) goto L_101a8e3b;
  /* 101a8e30 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101a8e33 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 101a8e36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101a8e39 jmp 0x101a8de2 */
  goto L_101a8de2;
L_101a8e3b:;
  /* 101a8e3b call dword ptr [0x101ae03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae03c))), 0x101a8e41u);
  /* 101a8e41 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 101a8e44 jmp 0x101a8de2 */
  goto L_101a8de2;
L_101a8e46:;
  /* 101a8e46 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a8e49 call 0x101abf1e */
  push32(0x101a8e4eu); f_101abf1e();
  /* 101a8e4e pop ecx */
  ECX = (pop32());
L_101a8e4f:;
  /* 101a8e4f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a8e52 jmp 0x101a8e80 */
  goto L_101a8e80;
L_101a8e54:;
  /* 101a8e54 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101a8e56 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101a8e5b je 0x101a8e69 */
  if (C.zf) goto L_101a8e69;
  /* 101a8e5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a8e60 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101a8e63 je 0x101a8d13 */
  if (C.zf) goto L_101a8d13;
L_101a8e69:;
  /* 101a8e69 call 0x101abf91 */
  push32(0x101a8e6eu); f_101abf91();
  /* 101a8e6e mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 101a8e74 call 0x101abf9a */
  push32(0x101a8e79u); f_101abf9a();
  /* 101a8e79 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 101a8e7b jmp 0x101a8e4f */
  goto L_101a8e4f;
L_101a8e7d:;
  /* 101a8e7d sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101a8e80:;
  /* 101a8e80 pop edi */
  EDI = (pop32());
  /* 101a8e81 pop esi */
  ESI = (pop32());
  /* 101a8e82 pop ebx */
  EBX = (pop32());
  /* 101a8e83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101a8e84 ret  */
  ESPCHK(0x101a8cfau, _esp0);
  ESP += 4; return;
}

/* FUN_10008e85 @ 0x101a8e85 (68 bytes, 19 insns) */
void f_101a8e85(void) {
  FTRACE(0x101a8e85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8e85 inc dword ptr [0x101b67a8] */
  { uint32_t _r=(r32((uint32_t)(0x101b67a8)))+1; w32((uint32_t)(0x101b67a8), (_r)); fl_inc(_r,32); }
  /* 101a8e8b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101a8e90 call 0x101aa2cf */
  push32(0x101a8e95u); f_101aa2cf();
  /* 101a8e95 pop ecx */
  ECX = (pop32());
  /* 101a8e96 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a8e9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a8e9c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 101a8e9f je 0x101a8eae */
  if (C.zf) goto L_101a8eae;
  /* 101a8ea1 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 101a8ea5 mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 101a8eac jmp 0x101a8ebf */
  goto L_101a8ebf;
L_101a8eae:;
  /* 101a8eae or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 101a8eb2 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 101a8eb5 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 101a8eb8 mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_101a8ebf:;
  /* 101a8ebf mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 101a8ec2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101a8ec6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 101a8ec8 ret  */
  ESPCHK(0x101a8e85u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ec9 @ 0x101a8ec9 (41 bytes, 13 insns) */
void f_101a8ec9(void) {
  FTRACE(0x101a8ec9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8ec9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a8ecd cmp eax, dword ptr [0x101b7d40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101b7d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8ed3 jb 0x101a8ed8 */
  if (C.cf) goto L_101a8ed8;
  /* 101a8ed5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a8ed7 ret  */
  ESPCHK(0x101a8ec9u, _esp0);
  ESP += 4; return;
L_101a8ed8:;
  /* 101a8ed8 mov ecx, eax */
  ECX = (EAX);
  /* 101a8eda and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101a8edd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101a8ee0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101a8ee3 mov ecx, dword ptr [ecx*4 + 0x101b7c40] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101b7c40)));
  /* 101a8eea mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 101a8eee and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 101a8ef1 ret  */
  ESPCHK(0x101a8ec9u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fae @ 0x101a8fae (47 bytes, 17 insns) */
void f_101a8fae(void) {
  FTRACE(0x101a8faeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8fae mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a8fb2 mov ecx, 0x101b0750 */
  ECX = (0x101b0750u);
  /* 101a8fb7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8fb9 jb 0x101a8fd2 */
  if (C.cf) goto L_101a8fd2;
  /* 101a8fbb cmp eax, 0x101b09b0 */
  { uint32_t _a=(EAX),_b=(0x101b09b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8fc0 ja 0x101a8fd2 */
  if ((!C.cf&&!C.zf)) goto L_101a8fd2;
  /* 101a8fc2 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a8fc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101a8fc7 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8fca push eax */
  push32((uint32_t)(EAX));
  /* 101a8fcb call 0x101aa033 */
  push32(0x101a8fd0u); f_101aa033();
  /* 101a8fd0 pop ecx */
  ECX = (pop32());
  /* 101a8fd1 ret  */
  ESPCHK(0x101a8faeu, _esp0);
  ESP += 4; return;
L_101a8fd2:;
  /* 101a8fd2 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8fd5 push eax */
  push32((uint32_t)(EAX));
  /* 101a8fd6 call dword ptr [0x101ae00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae00c))), 0x101a8fdcu);
  /* 101a8fdc ret  */
  ESPCHK(0x101a8faeu, _esp0);
  ESP += 4; return;
}

/* FUN_10008fdd @ 0x101a8fdd (35 bytes, 13 insns) */
void f_101a8fdd(void) {
  FTRACE(0x101a8fddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a8fdd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a8fe1 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a8fe4 jge 0x101a8ff1 */
  if ((C.sf==C.of)) goto L_101a8ff1;
  /* 101a8fe6 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8fe9 push eax */
  push32((uint32_t)(EAX));
  /* 101a8fea call 0x101aa033 */
  push32(0x101a8fefu); f_101aa033();
  /* 101a8fef pop ecx */
  ECX = (pop32());
  /* 101a8ff0 ret  */
  ESPCHK(0x101a8fddu, _esp0);
  ESP += 4; return;
L_101a8ff1:;
  /* 101a8ff1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a8ff5 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a8ff8 push eax */
  push32((uint32_t)(EAX));
  /* 101a8ff9 call dword ptr [0x101ae00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae00c))), 0x101a8fffu);
  /* 101a8fff ret  */
  ESPCHK(0x101a8fddu, _esp0);
  ESP += 4; return;
}

/* FUN_10009000 @ 0x101a9000 (47 bytes, 17 insns) */
void f_101a9000(void) {
  FTRACE(0x101a9000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9000 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a9004 mov ecx, 0x101b0750 */
  ECX = (0x101b0750u);
  /* 101a9009 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a900b jb 0x101a9024 */
  if (C.cf) goto L_101a9024;
  /* 101a900d cmp eax, 0x101b09b0 */
  { uint32_t _a=(EAX),_b=(0x101b09b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9012 ja 0x101a9024 */
  if ((!C.cf&&!C.zf)) goto L_101a9024;
  /* 101a9014 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9016 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101a9019 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a901c push eax */
  push32((uint32_t)(EAX));
  /* 101a901d call 0x101aa094 */
  push32(0x101a9022u); f_101aa094();
  /* 101a9022 pop ecx */
  ECX = (pop32());
  /* 101a9023 ret  */
  ESPCHK(0x101a9000u, _esp0);
  ESP += 4; return;
L_101a9024:;
  /* 101a9024 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9027 push eax */
  push32((uint32_t)(EAX));
  /* 101a9028 call dword ptr [0x101ae008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae008))), 0x101a902eu);
  /* 101a902e ret  */
  ESPCHK(0x101a9000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000902f @ 0x101a902f (35 bytes, 13 insns) */
void f_101a902f(void) {
  FTRACE(0x101a902fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a902f mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a9033 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9036 jge 0x101a9043 */
  if ((C.sf==C.of)) goto L_101a9043;
  /* 101a9038 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a903b push eax */
  push32((uint32_t)(EAX));
  /* 101a903c call 0x101aa094 */
  push32(0x101a9041u); f_101aa094();
  /* 101a9041 pop ecx */
  ECX = (pop32());
  /* 101a9042 ret  */
  ESPCHK(0x101a902fu, _esp0);
  ESP += 4; return;
L_101a9043:;
  /* 101a9043 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a9047 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a904a push eax */
  push32((uint32_t)(EAX));
  /* 101a904b call dword ptr [0x101ae008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae008))), 0x101a9051u);
  /* 101a9051 ret  */
  ESPCHK(0x101a902fu, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x101a9060 (123 bytes, 44 insns) */
void f_101a9060(void) {
  FTRACE(0x101a9060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9060 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a9064 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101a906a je 0x101a9080 */
  if (C.zf) goto L_101a9080;
L_101a906c:;
  /* 101a906c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101a906e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101a906f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a9071 je 0x101a90b3 */
  if (C.zf) goto L_101a90b3;
  /* 101a9073 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101a9079 jne 0x101a906c */
  if (!C.zf) goto L_101a906c;
  /* 101a907b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101a9080:;
  /* 101a9080 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101a9082 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101a9087 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9089 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101a908c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101a908e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a9091 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101a9096 je 0x101a9080 */
  if (C.zf) goto L_101a9080;
  /* 101a9098 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 101a909b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101a909d je 0x101a90d1 */
  if (C.zf) goto L_101a90d1;
  /* 101a909f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101a90a1 je 0x101a90c7 */
  if (C.zf) goto L_101a90c7;
  /* 101a90a3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 101a90a8 je 0x101a90bd */
  if (C.zf) goto L_101a90bd;
  /* 101a90aa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 101a90af je 0x101a90b3 */
  if (C.zf) goto L_101a90b3;
  /* 101a90b1 jmp 0x101a9080 */
  goto L_101a9080;
L_101a90b3:;
  /* 101a90b3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 101a90b6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a90ba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a90bc ret  */
  ESPCHK(0x101a9060u, _esp0);
  ESP += 4; return;
L_101a90bd:;
  /* 101a90bd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 101a90c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a90c4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a90c6 ret  */
  ESPCHK(0x101a9060u, _esp0);
  ESP += 4; return;
L_101a90c7:;
  /* 101a90c7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 101a90ca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a90ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a90d0 ret  */
  ESPCHK(0x101a9060u, _esp0);
  ESP += 4; return;
L_101a90d1:;
  /* 101a90d1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 101a90d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101a90d8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a90da ret  */
  ESPCHK(0x101a9060u, _esp0);
  ESP += 4; return;
}

/* FUN_100090db @ 0x101a90db (89 bytes, 39 insns) */
void f_101a90db(void) {
  FTRACE(0x101a90dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a90db push ebp */
  push32((uint32_t)(EBP));
  /* 101a90dc mov ebp, esp */
  EBP = (ESP);
  /* 101a90de push ebx */
  push32((uint32_t)(EBX));
  /* 101a90df push esi */
  push32((uint32_t)(ESI));
  /* 101a90e0 mov esi, 0x101b69b4 */
  ESI = (0x101b69b4u);
  /* 101a90e5 push edi */
  push32((uint32_t)(EDI));
  /* 101a90e6 push esi */
  push32((uint32_t)(ESI));
  /* 101a90e7 call dword ptr [0x101ae090] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae090))), 0x101a90edu);
  /* 101a90ed mov edi, dword ptr [0x101ae08c] */
  EDI = (r32((uint32_t)(0x101ae08c)));
  /* 101a90f3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101a90f5 cmp dword ptr [0x101b69b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101b69b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a90fb je 0x101a910b */
  if (C.zf) goto L_101a910b;
  /* 101a90fd push esi */
  push32((uint32_t)(ESI));
  /* 101a90fe call edi */
  call_ind((uint32_t)(EDI), 0x101a9100u);
  /* 101a9100 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101a9102 call 0x101aa033 */
  push32(0x101a9107u); f_101aa033();
  /* 101a9107 pop ecx */
  ECX = (pop32());
  /* 101a9108 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a910a pop ebx */
  EBX = (pop32());
L_101a910b:;
  /* 101a910b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101a910e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101a9111 call 0x101a9134 */
  push32(0x101a9116u); f_101a9134();
  /* 101a9116 pop ecx */
  ECX = (pop32());
  /* 101a9117 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101a911a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101a911c pop ecx */
  ECX = (pop32());
  /* 101a911d je 0x101a9129 */
  if (C.zf) goto L_101a9129;
  /* 101a911f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101a9121 call 0x101aa094 */
  push32(0x101a9126u); f_101aa094();
  /* 101a9126 pop ecx */
  ECX = (pop32());
  /* 101a9127 jmp 0x101a912c */
  goto L_101a912c;
L_101a9129:;
  /* 101a9129 push esi */
  push32((uint32_t)(ESI));
  /* 101a912a call edi */
  call_ind((uint32_t)(EDI), 0x101a912cu);
L_101a912c:;
  /* 101a912c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101a912f pop edi */
  EDI = (pop32());
  /* 101a9130 pop esi */
  ESI = (pop32());
  /* 101a9131 pop ebx */
  EBX = (pop32());
  /* 101a9132 pop ebp */
  EBP = (pop32());
  /* 101a9133 ret  */
  ESPCHK(0x101a90dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009134 @ 0x101a9134 (105 bytes, 38 insns) */
void f_101a9134(void) {
  FTRACE(0x101a9134u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9134 push ebp */
  push32((uint32_t)(EBP));
  /* 101a9135 mov ebp, esp */
  EBP = (ESP);
  /* 101a9137 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101a913a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a913c jne 0x101a9140 */
  if (!C.zf) goto L_101a9140;
  /* 101a913e pop ebp */
  EBP = (pop32());
  /* 101a913f ret  */
  ESPCHK(0x101a9134u, _esp0);
  ESP += 4; return;
L_101a9140:;
  /* 101a9140 cmp dword ptr [0x101b6838], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101b6838))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9147 jne 0x101a915b */
  if (!C.zf) goto L_101a915b;
  /* 101a9149 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 101a914d cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101a9152 ja 0x101a918d */
  if ((!C.cf&&!C.zf)) goto L_101a918d;
  /* 101a9154 push 1 */
  push32((uint32_t)(0x1u));
  /* 101a9156 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101a9158 pop eax */
  EAX = (pop32());
  /* 101a9159 pop ebp */
  EBP = (pop32());
  /* 101a915a ret  */
  ESPCHK(0x101a9134u, _esp0);
  ESP += 4; return;
L_101a915b:;
  /* 101a915b lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 101a915e and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 101a9162 push ecx */
  push32((uint32_t)(ECX));
  /* 101a9163 push 0 */
  push32((uint32_t)(0x0u));
  /* 101a9165 push dword ptr [0x101b0be0] */
  push32((uint32_t)(r32((uint32_t)(0x101b0be0))));
  /* 101a916b push eax */
  push32((uint32_t)(EAX));
  /* 101a916c lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 101a916f push 1 */
  push32((uint32_t)(0x1u));
  /* 101a9171 push eax */
  push32((uint32_t)(EAX));
  /* 101a9172 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 101a9177 push dword ptr [0x101b6848] */
  push32((uint32_t)(r32((uint32_t)(0x101b6848))));
  /* 101a917d call dword ptr [0x101ae060] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ae060))), 0x101a9183u);
  /* 101a9183 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101a9185 je 0x101a918d */
  if (C.zf) goto L_101a918d;
  /* 101a9187 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a918b je 0x101a919b */
  if (C.zf) goto L_101a919b;
L_101a918d:;
  /* 101a918d call 0x101abf91 */
  push32(0x101a9192u); f_101abf91();
  /* 101a9192 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 101a9198 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101a919b:;
  /* 101a919b pop ebp */
  EBP = (pop32());
  /* 101a919c ret  */
  ESPCHK(0x101a9134u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x101a91a0 (104 bytes, 43 insns) */
void f_101a91a0(void) {
  FTRACE(0x101a91a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a91a0 push ebx */
  push32((uint32_t)(EBX));
  /* 101a91a1 push esi */
  push32((uint32_t)(ESI));
  /* 101a91a2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 101a91a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a91a8 jne 0x101a91c2 */
  if (!C.zf) goto L_101a91c2;
  /* 101a91aa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 101a91ae mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101a91b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101a91b4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a91b6 mov ebx, eax */
  EBX = (EAX);
  /* 101a91b8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101a91bc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a91be mov edx, ebx */
  EDX = (EBX);
  /* 101a91c0 jmp 0x101a9203 */
  goto L_101a9203;
L_101a91c2:;
  /* 101a91c2 mov ecx, eax */
  ECX = (EAX);
  /* 101a91c4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101a91c8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101a91cc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_101a91d0:;
  /* 101a91d0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101a91d2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101a91d4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101a91d6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101a91d8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101a91da jne 0x101a91d0 */
  if (!C.zf) goto L_101a91d0;
  /* 101a91dc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a91de mov esi, eax */
  ESI = (EAX);
  /* 101a91e0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101a91e4 mov ecx, eax */
  ECX = (EAX);
  /* 101a91e6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101a91ea mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101a91ec add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a91ee jb 0x101a91fe */
  if (C.cf) goto L_101a91fe;
  /* 101a91f0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a91f4 ja 0x101a91fe */
  if ((!C.cf&&!C.zf)) goto L_101a91fe;
  /* 101a91f6 jb 0x101a91ff */
  if (C.cf) goto L_101a91ff;
  /* 101a91f8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a91fc jbe 0x101a91ff */
  if ((C.cf||C.zf)) goto L_101a91ff;
L_101a91fe:;
  /* 101a91fe dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_101a91ff:;
  /* 101a91ff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101a9201 mov eax, esi */
  EAX = (ESI);
L_101a9203:;
  /* 101a9203 pop esi */
  ESI = (pop32());
  /* 101a9204 pop ebx */
  EBX = (pop32());
  /* 101a9205 ret 0x10 */
  ESPCHK(0x101a91a0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x101a9210 (117 bytes, 44 insns) */
void f_101a9210(void) {
  FTRACE(0x101a9210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101a9210 push ebx */
  push32((uint32_t)(EBX));
  /* 101a9211 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101a9215 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101a9217 jne 0x101a9231 */
  if (!C.zf) goto L_101a9231;
  /* 101a9219 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 101a921d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101a9221 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101a9223 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a9225 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101a9229 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a922b mov eax, edx */
  EAX = (EDX);
  /* 101a922d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101a922f jmp 0x101a9281 */
  goto L_101a9281;
L_101a9231:;
  /* 101a9231 mov ecx, eax */
  ECX = (EAX);
  /* 101a9233 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 101a9237 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 101a923b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_101a923f:;
  /* 101a923f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101a9241 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101a9243 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101a9245 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101a9247 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101a9249 jne 0x101a923f */
  if (!C.zf) goto L_101a923f;
  /* 101a924b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101a924d mov ecx, eax */
  ECX = (EAX);
  /* 101a924f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101a9253 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 101a9254 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101a9258 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101a925a jb 0x101a926a */
  if (C.cf) goto L_101a926a;
  /* 101a925c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9260 ja 0x101a926a */
  if ((!C.cf&&!C.zf)) goto L_101a926a;
  /* 101a9262 jb 0x101a9272 */
  if (C.cf) goto L_101a9272;
  /* 101a9264 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101a9268 jbe 0x101a9272 */
  if ((C.cf||C.zf)) goto L_101a9272;
L_101a926a:;
  /* 101a926a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a926e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101a9272:;
  /* 101a9272 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a9276 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101a927a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 101a927c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101a927e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101a9281:;
  /* 101a9281 pop ebx */
  EBX = (pop32());
  /* 101a9282 ret 0x10 */
  ESPCHK(0x101a9210u, _esp0);
  ESP += 20; return;
}

