#include "recomp.h"

/* FUN_10001000 @ 0x118e1000 (157 bytes, 61 insns) */
void f_118e1000(void) {
  FTRACE(0x118e1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1000 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1003 push esi */
  push32((uint32_t)(ESI));
  /* 118e1004 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 118e1008 push edi */
  push32((uint32_t)(EDI));
  /* 118e1009 mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 118e100d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e100f jne 0x118e1025 */
  if (!C.zf) goto L_118e1025;
  /* 118e1011 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e1013 jne 0x118e1025 */
  if (!C.zf) goto L_118e1025;
  /* 118e1015 mov eax, 0xc0 */
  EAX = (0xc0u);
  /* 118e101a pop edi */
  EDI = (pop32());
  /* 118e101b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e1020 pop esi */
  ESI = (pop32());
  /* 118e1021 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1024 ret  */
  ESPCHK(0x118e1000u, _esp0);
  ESP += 4; return;
L_118e1025:;
  /* 118e1025 mov eax, esi */
  EAX = (ESI);
  /* 118e1027 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e1028 mov ecx, eax */
  ECX = (EAX);
  /* 118e102a mov eax, edi */
  EAX = (EDI);
  /* 118e102c xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 118e102e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1030 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e1031 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 118e1033 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1035 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1037 jle 0x118e1057 */
  if ((C.zf||C.sf!=C.of)) goto L_118e1057;
  /* 118e1039 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118e103c push ecx */
  push32((uint32_t)(ECX));
  /* 118e103d push eax */
  push32((uint32_t)(EAX));
  /* 118e103e call 0x118e46f7 */
  push32(0x118e1043u); f_118e46f7();
  /* 118e1043 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1046 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e1048 mov cl, byte ptr [eax*2 + 0x118f48f8] */
  CL = (r8((uint32_t)(EAX*2 + 0x118f48f8)));
  /* 118e104f mov dword ptr [esp + 0xc], edx */
  w32((uint32_t)(ESP + 0xc), (EDX));
  /* 118e1053 mov eax, ecx */
  EAX = (ECX);
  /* 118e1055 jmp 0x118e1078 */
  goto L_118e1078;
L_118e1057:;
  /* 118e1057 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 118e105a push eax */
  push32((uint32_t)(EAX));
  /* 118e105b push ecx */
  push32((uint32_t)(ECX));
  /* 118e105c call 0x118e46f7 */
  push32(0x118e1061u); f_118e46f7();
  /* 118e1061 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 118e1065 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118e1067 mov dl, byte ptr [eax*2 + 0x118f48f8] */
  DL = (r8((uint32_t)(EAX*2 + 0x118f48f8)));
  /* 118e106e mov eax, 0x40 */
  EAX = (0x40u);
  /* 118e1073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1076 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_118e1078:;
  /* 118e1078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e107a jge 0x118e1085 */
  if ((C.sf==C.of)) goto L_118e1085;
  /* 118e107c mov ecx, 0x80 */
  ECX = (0x80u);
  /* 118e1081 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1083 mov eax, ecx */
  EAX = (ECX);
L_118e1085:;
  /* 118e1085 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e1087 jge 0x118e1092 */
  if ((C.sf==C.of)) goto L_118e1092;
  /* 118e1089 mov edx, 0x100 */
  EDX = (0x100u);
  /* 118e108e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1090 mov eax, edx */
  EAX = (EDX);
L_118e1092:;
  /* 118e1092 pop edi */
  EDI = (pop32());
  /* 118e1093 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e1098 pop esi */
  ESI = (pop32());
  /* 118e1099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e109c ret  */
  ESPCHK(0x118e1000u, _esp0);
  ESP += 4; return;
}

/* FUN_100010c0 @ 0x118e10c0 (22 bytes, 9 insns) */
void f_118e10c0(void) {
  FTRACE(0x118e10c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e10c0 push esi */
  push32((uint32_t)(ESI));
  /* 118e10c1 mov esi, ecx */
  ESI = (ECX);
  /* 118e10c3 push 0x118f1084 */
  push32((uint32_t)(0x118f1084u));
  /* 118e10c8 push esi */
  push32((uint32_t)(ESI));
  /* 118e10c9 call dword ptr [0x118ef1dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1dc))), 0x118e10cfu);
  /* 118e10cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e10d2 mov eax, esi */
  EAX = (ESI);
  /* 118e10d4 pop esi */
  ESI = (pop32());
  /* 118e10d5 ret  */
  ESPCHK(0x118e10c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100010e0 @ 0x118e10e0 (64 bytes, 18 insns) */
void f_118e10e0(void) {
  FTRACE(0x118e10e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e10e0 push esi */
  push32((uint32_t)(ESI));
  /* 118e10e1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e10e5 cmp dword ptr [esi*8 + 0x118f5094], 0x554e4954 */
  { uint32_t _a=(r32((uint32_t)(ESI*8 + 0x118f5094))),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e10f0 je 0x118e1103 */
  if (C.zf) goto L_118e1103;
  /* 118e10f2 lea eax, [esi*8 + 0x118f5090] */
  EAX = ((uint32_t)(ESI*8 + 0x118f5090));
  /* 118e10f9 push eax */
  push32((uint32_t)(EAX));
  /* 118e10fa call dword ptr [0x118ef1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d0))), 0x118e1100u);
  /* 118e1100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e1103:;
  /* 118e1103 lea ecx, [esi*8 + 0x118f5090] */
  ECX = ((uint32_t)(ESI*8 + 0x118f5090));
  /* 118e110a push 0 */
  push32((uint32_t)(0x0u));
  /* 118e110c push ecx */
  push32((uint32_t)(ECX));
  /* 118e110d push esi */
  push32((uint32_t)(ESI));
  /* 118e110e call dword ptr [0x118ef1d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d4))), 0x118e1114u);
  /* 118e1114 push esi */
  push32((uint32_t)(ESI));
  /* 118e1115 call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e111bu);
  /* 118e111b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e111e pop esi */
  ESI = (pop32());
  /* 118e111f ret  */
  ESPCHK(0x118e10e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001120 @ 0x118e1120 (33 bytes, 11 insns) */
void f_118e1120(void) {
  FTRACE(0x118e1120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1120 push esi */
  push32((uint32_t)(ESI));
  /* 118e1121 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e1125 push esi */
  push32((uint32_t)(ESI));
  /* 118e1126 call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e112cu);
  /* 118e112c lea eax, [esi*8 + 0x118f5090] */
  EAX = ((uint32_t)(ESI*8 + 0x118f5090));
  /* 118e1133 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1135 push eax */
  push32((uint32_t)(EAX));
  /* 118e1136 call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e113cu);
  /* 118e113c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e113f pop esi */
  ESI = (pop32());
  /* 118e1140 ret  */
  ESPCHK(0x118e1120u, _esp0);
  ESP += 4; return;
}

/* FUN_10001160 @ 0x118e1160 (13 bytes, 4 insns) */
void f_118e1160(void) {
  FTRACE(0x118e1160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1160 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e1162 mov ecx, 0x118f5028 */
  ECX = (0x118f5028u);
  /* 118e1167 call 0x118ecc81 */
  push32(0x118e116cu); f_118ecc81();
  /* 118e116c ret  */
  ESPCHK(0x118e1160u, _esp0);
  ESP += 4; return;
}

/* FUN_10001170 @ 0x118e1170 (12 bytes, 4 insns) */
void f_118e1170(void) {
  FTRACE(0x118e1170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1170 push 0x118e1180 */
  push32((uint32_t)(0x118e1180u));
  /* 118e1175 call 0x118e479a */
  push32(0x118e117au); f_118e479a();
  /* 118e117a pop ecx */
  ECX = (pop32());
  /* 118e117b ret  */
  ESPCHK(0x118e1170u, _esp0);
  ESP += 4; return;
}

/* FUN_100011a0 @ 0x118e11a0 (75 bytes, 30 insns) */
void f_118e11a0(void) {
  FTRACE(0x118e11a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e11a0 push esi */
  push32((uint32_t)(ESI));
  /* 118e11a1 mov esi, ecx */
  ESI = (ECX);
  /* 118e11a3 push edi */
  push32((uint32_t)(EDI));
  /* 118e11a4 mov edi, dword ptr [0x118ef1d0] */
  EDI = (r32((uint32_t)(0x118ef1d0)));
  /* 118e11aa lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 118e11ad push eax */
  push32((uint32_t)(EAX));
  /* 118e11ae call edi */
  call_ind((uint32_t)(EDI), 0x118e11b0u);
  /* 118e11b0 lea ecx, [esi + 0x34] */
  ECX = ((uint32_t)(ESI + 0x34));
  /* 118e11b3 push ecx */
  push32((uint32_t)(ECX));
  /* 118e11b4 call edi */
  call_ind((uint32_t)(EDI), 0x118e11b6u);
  /* 118e11b6 lea edx, [esi + 0x3c] */
  EDX = ((uint32_t)(ESI + 0x3c));
  /* 118e11b9 push edx */
  push32((uint32_t)(EDX));
  /* 118e11ba call edi */
  call_ind((uint32_t)(EDI), 0x118e11bcu);
  /* 118e11bc lea eax, [esi + 0x44] */
  EAX = ((uint32_t)(ESI + 0x44));
  /* 118e11bf push eax */
  push32((uint32_t)(EAX));
  /* 118e11c0 call edi */
  call_ind((uint32_t)(EDI), 0x118e11c2u);
  /* 118e11c2 lea ecx, [esi + 0x4c] */
  ECX = ((uint32_t)(ESI + 0x4c));
  /* 118e11c5 push ecx */
  push32((uint32_t)(ECX));
  /* 118e11c6 call edi */
  call_ind((uint32_t)(EDI), 0x118e11c8u);
  /* 118e11c8 lea edx, [esi + 0x60] */
  EDX = ((uint32_t)(ESI + 0x60));
  /* 118e11cb mov dword ptr [esi + 0x54], 1 */
  w32((uint32_t)(ESI + 0x54), (0x1u));
  /* 118e11d2 push edx */
  push32((uint32_t)(EDX));
  /* 118e11d3 mov dword ptr [esi + 0x58], 0xfa0 */
  w32((uint32_t)(ESI + 0x58), (0xfa0u));
  /* 118e11da mov dword ptr [esi + 0x5c], 0 */
  w32((uint32_t)(ESI + 0x5c), (0x0u));
  /* 118e11e1 call edi */
  call_ind((uint32_t)(EDI), 0x118e11e3u);
  /* 118e11e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e11e6 mov eax, esi */
  EAX = (ESI);
  /* 118e11e8 pop edi */
  EDI = (pop32());
  /* 118e11e9 pop esi */
  ESI = (pop32());
  /* 118e11ea ret  */
  ESPCHK(0x118e11a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100011f0 @ 0x118e11f0 (10 bytes, 3 insns) */
void f_118e11f0(void) {
  FTRACE(0x118e11f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e11f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e11f4 mov dword ptr [ecx + 0x54], eax */
  w32((uint32_t)(ECX + 0x54), (EAX));
  /* 118e11f7 ret 4 */
  ESPCHK(0x118e11f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001200 @ 0x118e1200 (9 bytes, 3 insns) */
void f_118e1200(void) {
  FTRACE(0x118e1200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1200 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1204 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118e1206 ret 4 */
  ESPCHK(0x118e1200u, _esp0);
  ESP += 8; return;
}

/* FUN_10001210 @ 0x118e1210 (47 bytes, 17 insns) */
void f_118e1210(void) {
  FTRACE(0x118e1210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1210 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1214 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1217 push esi */
  push32((uint32_t)(ESI));
  /* 118e1218 mov esi, ecx */
  ESI = (ECX);
  /* 118e121a lea ecx, [esp + 4] */
  ECX = ((uint32_t)(ESP + 0x4));
  /* 118e121e push eax */
  push32((uint32_t)(EAX));
  /* 118e121f push ecx */
  push32((uint32_t)(ECX));
  /* 118e1220 call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e1226u);
  /* 118e1226 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1229 lea edx, [esp + 0xc] */
  EDX = ((uint32_t)(ESP + 0xc));
  /* 118e122d push esi */
  push32((uint32_t)(ESI));
  /* 118e122e push edx */
  push32((uint32_t)(EDX));
  /* 118e122f call dword ptr [0x118ef1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1bc))), 0x118e1235u);
  /* 118e1235 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1238 pop esi */
  ESI = (pop32());
  /* 118e1239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e123c ret 4 */
  ESPCHK(0x118e1210u, _esp0);
  ESP += 8; return;
}

/* FUN_10001240 @ 0x118e1240 (21 bytes, 7 insns) */
void f_118e1240(void) {
  FTRACE(0x118e1240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1240 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1244 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1247 push eax */
  push32((uint32_t)(EAX));
  /* 118e1248 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1249 call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e124fu);
  /* 118e124f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1252 ret 4 */
  ESPCHK(0x118e1240u, _esp0);
  ESP += 8; return;
}

/* FUN_10001260 @ 0x118e1260 (21 bytes, 7 insns) */
void f_118e1260(void) {
  FTRACE(0x118e1260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1260 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1264 add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1267 push eax */
  push32((uint32_t)(EAX));
  /* 118e1268 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1269 call dword ptr [0x118ef1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b4))), 0x118e126fu);
  /* 118e126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1272 ret 4 */
  ESPCHK(0x118e1260u, _esp0);
  ESP += 8; return;
}

/* FUN_10001280 @ 0x118e1280 (21 bytes, 7 insns) */
void f_118e1280(void) {
  FTRACE(0x118e1280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1280 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1284 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1287 push eax */
  push32((uint32_t)(EAX));
  /* 118e1288 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1289 call dword ptr [0x118ef1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b4))), 0x118e128fu);
  /* 118e128f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1292 ret 4 */
  ESPCHK(0x118e1280u, _esp0);
  ESP += 8; return;
}

/* FUN_100012a0 @ 0x118e12a0 (212 bytes, 85 insns) */
void f_118e12a0(void) {
  FTRACE(0x118e12a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e12a0 push ebx */
  push32((uint32_t)(EBX));
  /* 118e12a1 mov ebx, dword ptr [0x118ef19c] */
  EBX = (r32((uint32_t)(0x118ef19c)));
  /* 118e12a7 push esi */
  push32((uint32_t)(ESI));
  /* 118e12a8 mov esi, ecx */
  ESI = (ECX);
  /* 118e12aa push edi */
  push32((uint32_t)(EDI));
  /* 118e12ab lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118e12ae push eax */
  push32((uint32_t)(EAX));
  /* 118e12af call ebx */
  call_ind((uint32_t)(EBX), 0x118e12b1u);
  /* 118e12b1 mov edi, dword ptr [0x118ef1a0] */
  EDI = (r32((uint32_t)(0x118ef1a0)));
  /* 118e12b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e12ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e12bc jne 0x118e12dc */
  if (!C.zf) goto L_118e12dc;
  /* 118e12be lea eax, [esi + 0x3c] */
  EAX = ((uint32_t)(ESI + 0x3c));
  /* 118e12c1 push eax */
  push32((uint32_t)(EAX));
  /* 118e12c2 call ebx */
  call_ind((uint32_t)(EBX), 0x118e12c4u);
  /* 118e12c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e12c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e12c9 jne 0x118e12dc */
  if (!C.zf) goto L_118e12dc;
  /* 118e12cb lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 118e12ce push ecx */
  push32((uint32_t)(ECX));
  /* 118e12cf call dword ptr [0x118ef1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1a4))), 0x118e12d5u);
  /* 118e12d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e12d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e12da jne 0x118e12e7 */
  if (!C.zf) goto L_118e12e7;
L_118e12dc:;
  /* 118e12dc call edi */
  call_ind((uint32_t)(EDI), 0x118e12deu);
  /* 118e12de cmp eax, dword ptr [esi + 0x5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e12e1 jle 0x118e136e */
  if ((C.zf||C.sf!=C.of)) goto L_118e136e;
L_118e12e7:;
  /* 118e12e7 push ebp */
  push32((uint32_t)(EBP));
  /* 118e12e8 call edi */
  call_ind((uint32_t)(EDI), 0x118e12eau);
  /* 118e12ea mov ebx, dword ptr [esi + 0x58] */
  EBX = (r32((uint32_t)(ESI + 0x58)));
  /* 118e12ed mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 118e12ef add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e12f1 push edx */
  push32((uint32_t)(EDX));
  /* 118e12f2 mov dword ptr [esi + 0x5c], eax */
  w32((uint32_t)(ESI + 0x5c), (EAX));
  /* 118e12f5 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 118e12f8 push eax */
  push32((uint32_t)(EAX));
  /* 118e12f9 call dword ptr [0x118ef1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1a8))), 0x118e12ffu);
  /* 118e12ff mov edi, eax */
  EDI = (EAX);
  /* 118e1301 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1304 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e1305 mov eax, 0x55555556 */
  EAX = (0x55555556u);
  /* 118e130a imul edi, dword ptr [esi + 0x54] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESI + 0x54)))*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e130e imul edi */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(EDI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 118e1310 mov ecx, edx */
  ECX = (EDX);
  /* 118e1312 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 118e1315 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1317 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118e1319 jle 0x118e1337 */
  if ((C.zf||C.sf!=C.of)) goto L_118e1337;
  /* 118e131b lea ebp, [esi + 0x1c] */
  EBP = ((uint32_t)(ESI + 0x1c));
  /* 118e131e mov ebx, edx */
  EBX = (EDX);
L_118e1320:;
  /* 118e1320 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 118e1323 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1325 push eax */
  push32((uint32_t)(EAX));
  /* 118e1326 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118e1329 push ebp */
  push32((uint32_t)(EBP));
  /* 118e132a push eax */
  push32((uint32_t)(EAX));
  /* 118e132b call dword ptr [0x118ef1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ac))), 0x118e1331u);
  /* 118e1331 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1334 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118e1335 jne 0x118e1320 */
  if (!C.zf) goto L_118e1320;
L_118e1337:;
  /* 118e1337 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e1339 jle 0x118e1355 */
  if ((C.zf||C.sf!=C.of)) goto L_118e1355;
  /* 118e133b lea ebx, [esi + 0x3c] */
  EBX = ((uint32_t)(ESI + 0x3c));
  /* 118e133e lea ebp, [esi + 0x24] */
  EBP = ((uint32_t)(ESI + 0x24));
L_118e1341:;
  /* 118e1341 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1343 push ebx */
  push32((uint32_t)(EBX));
  /* 118e1344 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118e1347 push ebp */
  push32((uint32_t)(EBP));
  /* 118e1348 push eax */
  push32((uint32_t)(EAX));
  /* 118e1349 call dword ptr [0x118ef1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ac))), 0x118e134fu);
  /* 118e134f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1352 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118e1353 jne 0x118e1341 */
  if (!C.zf) goto L_118e1341;
L_118e1355:;
  /* 118e1355 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1357 call dword ptr [0x118ef1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b0))), 0x118e135du);
  /* 118e135d imul eax, dword ptr [esp + 0x18] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x18)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e1362 mov ecx, dword ptr [esi + 0x54] */
  ECX = (r32((uint32_t)(ESI + 0x54)));
  /* 118e1365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1368 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e136a mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 118e136d pop ebp */
  EBP = (pop32());
L_118e136e:;
  /* 118e136e pop edi */
  EDI = (pop32());
  /* 118e136f pop esi */
  ESI = (pop32());
  /* 118e1370 pop ebx */
  EBX = (pop32());
  /* 118e1371 ret 4 */
  ESPCHK(0x118e12a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001380 @ 0x118e1380 (68 bytes, 28 insns) */
void f_118e1380(void) {
  FTRACE(0x118e1380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1380 push esi */
  push32((uint32_t)(ESI));
  /* 118e1381 mov esi, ecx */
  ESI = (ECX);
  /* 118e1383 push edi */
  push32((uint32_t)(EDI));
  /* 118e1384 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e1386 push eax */
  push32((uint32_t)(EAX));
  /* 118e1387 call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e138du);
  /* 118e138d mov edi, dword ptr [0x118ef1ec] */
  EDI = (r32((uint32_t)(0x118ef1ec)));
  /* 118e1393 lea ecx, [esi + 0x4c] */
  ECX = ((uint32_t)(ESI + 0x4c));
  /* 118e1396 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1398 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1399 call edi */
  call_ind((uint32_t)(EDI), 0x118e139bu);
  /* 118e139b lea edx, [esi + 0x44] */
  EDX = ((uint32_t)(ESI + 0x44));
  /* 118e139e push 1 */
  push32((uint32_t)(0x1u));
  /* 118e13a0 push edx */
  push32((uint32_t)(EDX));
  /* 118e13a1 call edi */
  call_ind((uint32_t)(EDI), 0x118e13a3u);
  /* 118e13a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e13a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e13a8 call 0x118e47e8 */
  push32(0x118e13adu); f_118e47e8();
  /* 118e13ad mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 118e13af push eax */
  push32((uint32_t)(EAX));
  /* 118e13b0 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e13b4 push eax */
  push32((uint32_t)(EAX));
  /* 118e13b5 push ecx */
  push32((uint32_t)(ECX));
  /* 118e13b6 call dword ptr [0x118ef1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e0))), 0x118e13bcu);
  /* 118e13bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e13bf pop edi */
  EDI = (pop32());
  /* 118e13c0 pop esi */
  ESI = (pop32());
  /* 118e13c1 ret 4 */
  ESPCHK(0x118e1380u, _esp0);
  ESP += 8; return;
}

/* FUN_100013d0 @ 0x118e13d0 (59 bytes, 28 insns) */
void f_118e13d0(void) {
  FTRACE(0x118e13d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e13d0 push esi */
  push32((uint32_t)(ESI));
  /* 118e13d1 mov esi, ecx */
  ESI = (ECX);
  /* 118e13d3 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118e13d6 push eax */
  push32((uint32_t)(EAX));
  /* 118e13d7 call dword ptr [0x118ef1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1a4))), 0x118e13ddu);
  /* 118e13dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e13e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e13e2 je 0x118e1407 */
  if (C.zf) goto L_118e1407;
  /* 118e13e4 lea ecx, [esi + 0x44] */
  ECX = ((uint32_t)(ESI + 0x44));
  /* 118e13e7 push edi */
  push32((uint32_t)(EDI));
  /* 118e13e8 mov edi, dword ptr [0x118ef1bc] */
  EDI = (r32((uint32_t)(0x118ef1bc)));
  /* 118e13ee lea edx, [esi + 0x34] */
  EDX = ((uint32_t)(ESI + 0x34));
  /* 118e13f1 push ecx */
  push32((uint32_t)(ECX));
  /* 118e13f2 push edx */
  push32((uint32_t)(EDX));
  /* 118e13f3 call edi */
  call_ind((uint32_t)(EDI), 0x118e13f5u);
  /* 118e13f5 lea eax, [esi + 0x4c] */
  EAX = ((uint32_t)(ESI + 0x4c));
  /* 118e13f8 add esi, 0x3c */
  { uint32_t _a=(ESI),_b=(0x3cu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e13fb push eax */
  push32((uint32_t)(EAX));
  /* 118e13fc push esi */
  push32((uint32_t)(ESI));
  /* 118e13fd call edi */
  call_ind((uint32_t)(EDI), 0x118e13ffu);
  /* 118e13ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1402 mov al, 1 */
  AL = (0x1u);
  /* 118e1404 pop edi */
  EDI = (pop32());
  /* 118e1405 pop esi */
  ESI = (pop32());
  /* 118e1406 ret  */
  ESPCHK(0x118e13d0u, _esp0);
  ESP += 4; return;
L_118e1407:;
  /* 118e1407 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118e1409 pop esi */
  ESI = (pop32());
  /* 118e140a ret  */
  ESPCHK(0x118e13d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001430 @ 0x118e1430 (10 bytes, 3 insns) */
void f_118e1430(void) {
  FTRACE(0x118e1430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1430 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1434 mov dword ptr [ecx + 1], eax */
  w32((uint32_t)(ECX + 0x1), (EAX));
  /* 118e1437 ret 4 */
  ESPCHK(0x118e1430u, _esp0);
  ESP += 8; return;
}

/* FUN_10001440 @ 0x118e1440 (32 bytes, 12 insns) */
void f_118e1440(void) {
  FTRACE(0x118e1440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1440 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1444 push esi */
  push32((uint32_t)(ESI));
  /* 118e1445 mov esi, ecx */
  ESI = (ECX);
  /* 118e1447 push eax */
  push32((uint32_t)(EAX));
  /* 118e1448 lea ecx, [esi + 5] */
  ECX = ((uint32_t)(ESI + 0x5));
  /* 118e144b push ecx */
  push32((uint32_t)(ECX));
  /* 118e144c call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e1452u);
  /* 118e1452 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e1456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1459 mov dword ptr [esi + 0xd], edx */
  w32((uint32_t)(ESI + 0xd), (EDX));
  /* 118e145c pop esi */
  ESI = (pop32());
  /* 118e145d ret 8 */
  ESPCHK(0x118e1440u, _esp0);
  ESP += 12; return;
}

/* FUN_10001460 @ 0x118e1460 (21 bytes, 7 insns) */
void f_118e1460(void) {
  FTRACE(0x118e1460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1460 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1464 add ecx, 0x11 */
  { uint32_t _a=(ECX),_b=(0x11u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1467 push eax */
  push32((uint32_t)(EAX));
  /* 118e1468 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1469 call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e146fu);
  /* 118e146f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1472 ret 4 */
  ESPCHK(0x118e1460u, _esp0);
  ESP += 8; return;
}

/* FUN_10001480 @ 0x118e1480 (45 bytes, 14 insns) */
void f_118e1480(void) {
  FTRACE(0x118e1480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1480 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1484 push esi */
  push32((uint32_t)(ESI));
  /* 118e1485 mov esi, ecx */
  ESI = (ECX);
  /* 118e1487 push eax */
  push32((uint32_t)(EAX));
  /* 118e1488 mov ecx, dword ptr [esi + 0x166] */
  ECX = (r32((uint32_t)(ESI + 0x166)));
  /* 118e148e lea edx, [esi + ecx*8 + 0x22] */
  EDX = ((uint32_t)(ESI + ECX*8 + 0x22));
  /* 118e1492 push edx */
  push32((uint32_t)(EDX));
  /* 118e1493 call dword ptr [0x118ef1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b8))), 0x118e1499u);
  /* 118e1499 mov eax, dword ptr [esi + 0x166] */
  EAX = (r32((uint32_t)(ESI + 0x166)));
  /* 118e149f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e14a2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e14a3 mov dword ptr [esi + 0x166], eax */
  w32((uint32_t)(ESI + 0x166), (EAX));
  /* 118e14a9 pop esi */
  ESI = (pop32());
  /* 118e14aa ret 4 */
  ESPCHK(0x118e1480u, _esp0);
  ESP += 8; return;
}

/* FUN_100014b0 @ 0x118e14b0 (48 bytes, 14 insns) */
void f_118e14b0(void) {
  FTRACE(0x118e14b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e14b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e14b4 push esi */
  push32((uint32_t)(ESI));
  /* 118e14b5 mov esi, ecx */
  ESI = (ECX);
  /* 118e14b7 push eax */
  push32((uint32_t)(EAX));
  /* 118e14b8 mov ecx, dword ptr [esi + 0x166] */
  ECX = (r32((uint32_t)(ESI + 0x166)));
  /* 118e14be lea edx, [esi + ecx*8 + 0xc2] */
  EDX = ((uint32_t)(ESI + ECX*8 + 0xc2));
  /* 118e14c5 push edx */
  push32((uint32_t)(EDX));
  /* 118e14c6 call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e14ccu);
  /* 118e14cc mov eax, dword ptr [esi + 0x166] */
  EAX = (r32((uint32_t)(ESI + 0x166)));
  /* 118e14d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e14d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e14d6 mov dword ptr [esi + 0x166], eax */
  w32((uint32_t)(ESI + 0x166), (EAX));
  /* 118e14dc pop esi */
  ESI = (pop32());
  /* 118e14dd ret 4 */
  ESPCHK(0x118e14b0u, _esp0);
  ESP += 8; return;
}

/* FUN_100014e0 @ 0x118e14e0 (650 bytes, 209 insns) */
void f_118e14e0(void) {
  FTRACE(0x118e14e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e14e0 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e14e3 push esi */
  push32((uint32_t)(ESI));
  /* 118e14e4 mov esi, ecx */
  ESI = (ECX);
  /* 118e14e6 mov eax, dword ptr [esi + 0x162] */
  EAX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e14ec push eax */
  push32((uint32_t)(EAX));
  /* 118e14ed call 0x118e1770 */
  push32(0x118e14f2u); f_118e1770();
  /* 118e14f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e14f4 je 0x118e1517 */
  if (C.zf) goto L_118e1517;
  /* 118e14f6 mov eax, dword ptr [esi + 0x162] */
  EAX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e14fc mov ecx, dword ptr [esi + 0x166] */
  ECX = (r32((uint32_t)(ESI + 0x166)));
  /* 118e1502 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1504 jne 0x118e150d */
  if (!C.zf) goto L_118e150d;
  /* 118e1506 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e1508 pop esi */
  ESI = (pop32());
  /* 118e1509 add esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e150c ret  */
  ESPCHK(0x118e14e0u, _esp0);
  ESP += 4; return;
L_118e150d:;
  /* 118e150d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e150e mov byte ptr [esi], 0 */
  w8((uint32_t)(ESI), (0x0u));
  /* 118e1511 mov dword ptr [esi + 0x162], eax */
  w32((uint32_t)(ESI + 0x162), (EAX));
L_118e1517:;
  /* 118e1517 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e1519 push ebx */
  push32((uint32_t)(EBX));
  /* 118e151a push ebp */
  push32((uint32_t)(EBP));
  /* 118e151b push edi */
  push32((uint32_t)(EDI));
  /* 118e151c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e151e jne 0x118e15fd */
  if (!C.zf) goto L_118e15fd;
  /* 118e1524 mov ecx, dword ptr [esi + 0x162] */
  ECX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e152a mov byte ptr [esi], 1 */
  w8((uint32_t)(ESI), (0x1u));
  /* 118e152d cmp dword ptr [esi + ecx*8 + 0xc6], 0x554e4954 */
  { uint32_t _a=(r32((uint32_t)(ESI + ECX*8 + 0xc6))),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1538 jne 0x118e15b7 */
  if (!C.zf) goto L_118e15b7;
  /* 118e153a mov dl, byte ptr [esi + 1] */
  DL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e153d mov ebx, dword ptr [0x118ef1d8] */
  EBX = (r32((uint32_t)(0x118ef1d8)));
  /* 118e1543 push edx */
  push32((uint32_t)(EDX));
  /* 118e1544 call ebx */
  call_ind((uint32_t)(EBX), 0x118e1546u);
  /* 118e1546 mov ebp, dword ptr [0x118ef1ec] */
  EBP = (r32((uint32_t)(0x118ef1ec)));
  /* 118e154c lea eax, [esi + 5] */
  EAX = ((uint32_t)(ESI + 0x5));
  /* 118e154f push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1551 push eax */
  push32((uint32_t)(EAX));
  /* 118e1552 call ebp */
  call_ind((uint32_t)(EBP), 0x118e1554u);
  /* 118e1554 mov ecx, dword ptr [esi + 0x162] */
  ECX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e155a mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e155d lea edx, [esi + ecx*8 + 0xc2] */
  EDX = ((uint32_t)(ESI + ECX*8 + 0xc2));
  /* 118e1564 push edx */
  push32((uint32_t)(EDX));
  /* 118e1565 push eax */
  push32((uint32_t)(EAX));
  /* 118e1566 call dword ptr [0x118ef198] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef198))), 0x118e156cu);
  /* 118e156c mov edx, dword ptr [esi + 0x162] */
  EDX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e1572 mov cx, word ptr [esi + 0xd] */
  CX = (r16((uint32_t)(ESI + 0xd)));
  /* 118e1576 lea edi, [esi + 0x19] */
  EDI = ((uint32_t)(ESI + 0x19));
  /* 118e1579 push ecx */
  push32((uint32_t)(ECX));
  /* 118e157a lea eax, [esi + edx*8 + 0xc2] */
  EAX = ((uint32_t)(ESI + EDX*8 + 0xc2));
  /* 118e1581 push eax */
  push32((uint32_t)(EAX));
  /* 118e1582 push edi */
  push32((uint32_t)(EDI));
  /* 118e1583 call dword ptr [0x118ef1e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e4))), 0x118e1589u);
  /* 118e1589 mov cl, byte ptr [esi + 1] */
  CL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e158c push ecx */
  push32((uint32_t)(ECX));
  /* 118e158d call ebx */
  call_ind((uint32_t)(EBX), 0x118e158fu);
  /* 118e158f lea edx, [esi + 0x11] */
  EDX = ((uint32_t)(ESI + 0x11));
  /* 118e1592 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1594 push edx */
  push32((uint32_t)(EDX));
  /* 118e1595 call ebp */
  call_ind((uint32_t)(EBP), 0x118e1597u);
  /* 118e1597 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e159a push 0 */
  push32((uint32_t)(0x0u));
  /* 118e159c push 0 */
  push32((uint32_t)(0x0u));
  /* 118e159e push edi */
  push32((uint32_t)(EDI));
  /* 118e159f push eax */
  push32((uint32_t)(EAX));
  /* 118e15a0 call dword ptr [0x118ef1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e0))), 0x118e15a6u);
  /* 118e15a6 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e15a9 mov byte ptr [esi + 0x21], 0 */
  w8((uint32_t)(ESI + 0x21), (0x0u));
  /* 118e15ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e15af pop edi */
  EDI = (pop32());
  /* 118e15b0 pop ebp */
  EBP = (pop32());
  /* 118e15b1 pop ebx */
  EBX = (pop32());
  /* 118e15b2 pop esi */
  ESI = (pop32());
  /* 118e15b3 add esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e15b6 ret  */
  ESPCHK(0x118e14e0u, _esp0);
  ESP += 4; return;
L_118e15b7:;
  /* 118e15b7 mov cl, byte ptr [esi + 1] */
  CL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e15ba push ecx */
  push32((uint32_t)(ECX));
  /* 118e15bb call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e15c1u);
  /* 118e15c1 mov edi, dword ptr [0x118ef1ec] */
  EDI = (r32((uint32_t)(0x118ef1ec)));
  /* 118e15c7 lea edx, [esi + 5] */
  EDX = ((uint32_t)(ESI + 0x5));
  /* 118e15ca push 0 */
  push32((uint32_t)(0x0u));
  /* 118e15cc push edx */
  push32((uint32_t)(EDX));
  /* 118e15cd call edi */
  call_ind((uint32_t)(EDI), 0x118e15cfu);
  /* 118e15cf lea eax, [esi + 0x11] */
  EAX = ((uint32_t)(ESI + 0x11));
  /* 118e15d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e15d4 push eax */
  push32((uint32_t)(EAX));
  /* 118e15d5 call edi */
  call_ind((uint32_t)(EDI), 0x118e15d7u);
  /* 118e15d7 mov ecx, dword ptr [esi + 0x162] */
  ECX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e15dd mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e15e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e15e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e15e4 lea edx, [esi + ecx*8 + 0x22] */
  EDX = ((uint32_t)(ESI + ECX*8 + 0x22));
  /* 118e15e8 push edx */
  push32((uint32_t)(EDX));
  /* 118e15e9 push eax */
  push32((uint32_t)(EAX));
  /* 118e15ea call dword ptr [0x118ef1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e0))), 0x118e15f0u);
  /* 118e15f0 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e15f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e15f5 pop edi */
  EDI = (pop32());
  /* 118e15f6 pop ebp */
  EBP = (pop32());
  /* 118e15f7 pop ebx */
  EBX = (pop32());
  /* 118e15f8 pop esi */
  ESI = (pop32());
  /* 118e15f9 add esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e15fc ret  */
  ESPCHK(0x118e14e0u, _esp0);
  ESP += 4; return;
L_118e15fd:;
  /* 118e15fd mov ecx, dword ptr [esi + 0x162] */
  ECX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e1603 cmp dword ptr [esi + ecx*8 + 0xc6], 0x554e4954 */
  { uint32_t _a=(r32((uint32_t)(ESI + ECX*8 + 0xc6))),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e160e jne 0x118e1760 */
  if (!C.zf) goto L_118e1760;
  /* 118e1614 mov dl, byte ptr [esi + 1] */
  DL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e1617 push edx */
  push32((uint32_t)(EDX));
  /* 118e1618 call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e161eu);
  /* 118e161e mov eax, dword ptr [esi + 0x162] */
  EAX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e1624 mov dl, byte ptr [esi + 1] */
  DL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e1627 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1629 lea ecx, [esi + eax*8 + 0xc2] */
  ECX = ((uint32_t)(ESI + EAX*8 + 0xc2));
  /* 118e1630 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1631 push edx */
  push32((uint32_t)(EDX));
  /* 118e1632 call dword ptr [0x118ef194] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef194))), 0x118e1638u);
  /* 118e1638 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e163b push eax */
  push32((uint32_t)(EAX));
  /* 118e163c call dword ptr [0x118ef1c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1c4))), 0x118e1642u);
  /* 118e1642 lea edi, [esi + 5] */
  EDI = ((uint32_t)(ESI + 0x5));
  /* 118e1645 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1647 push edi */
  push32((uint32_t)(EDI));
  /* 118e1648 call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e164eu);
  /* 118e164e mov ecx, dword ptr [esi + 0x162] */
  ECX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e1654 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e1657 lea edx, [esi + ecx*8 + 0xc2] */
  EDX = ((uint32_t)(ESI + ECX*8 + 0xc2));
  /* 118e165e push edx */
  push32((uint32_t)(EDX));
  /* 118e165f push eax */
  push32((uint32_t)(EAX));
  /* 118e1660 call dword ptr [0x118ef198] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef198))), 0x118e1666u);
  /* 118e1666 mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 118e1669 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e166c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e166e jne 0x118e1760 */
  if (!C.zf) goto L_118e1760;
  /* 118e1674 lea ebx, [esi + 0x11] */
  EBX = ((uint32_t)(ESI + 0x11));
  /* 118e1677 lea ebp, [esi + 0x19] */
  EBP = ((uint32_t)(ESI + 0x19));
  /* 118e167a push ebx */
  push32((uint32_t)(EBX));
  /* 118e167b push ebp */
  push32((uint32_t)(EBP));
  /* 118e167c call dword ptr [0x118ef1f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f8))), 0x118e1682u);
  /* 118e1682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e1687 jle 0x118e1760 */
  if ((C.zf||C.sf!=C.of)) goto L_118e1760;
  /* 118e168d mov cx, word ptr [esi + 0xd] */
  CX = (r16((uint32_t)(ESI + 0xd)));
  /* 118e1691 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1692 push edi */
  push32((uint32_t)(EDI));
  /* 118e1693 push ebp */
  push32((uint32_t)(EBP));
  /* 118e1694 call dword ptr [0x118ef1e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e4))), 0x118e169au);
  /* 118e169a mov dl, byte ptr [esi + 1] */
  DL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e169d push edx */
  push32((uint32_t)(EDX));
  /* 118e169e call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e16a4u);
  /* 118e16a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e16a6 push ebx */
  push32((uint32_t)(EBX));
  /* 118e16a7 call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e16adu);
  /* 118e16ad mov ecx, dword ptr [esi + 0x162] */
  ECX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e16b3 mov ebx, dword ptr [0x118ef1fc] */
  EBX = (r32((uint32_t)(0x118ef1fc)));
  /* 118e16b9 lea eax, [esp + 0x3c] */
  EAX = ((uint32_t)(ESP + 0x3c));
  /* 118e16bd push eax */
  push32((uint32_t)(EAX));
  /* 118e16be lea edx, [esi + ecx*8 + 0xc2] */
  EDX = ((uint32_t)(ESI + ECX*8 + 0xc2));
  /* 118e16c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e16c7 push edx */
  push32((uint32_t)(EDX));
  /* 118e16c8 call ebx */
  call_ind((uint32_t)(EBX), 0x118e16cau);
  /* 118e16ca lea eax, [esp + 0x74] */
  EAX = ((uint32_t)(ESP + 0x74));
  /* 118e16ce push eax */
  push32((uint32_t)(EAX));
  /* 118e16cf push 0 */
  push32((uint32_t)(0x0u));
  /* 118e16d1 push edi */
  push32((uint32_t)(EDI));
  /* 118e16d2 call ebx */
  call_ind((uint32_t)(EBX), 0x118e16d4u);
  /* 118e16d4 mov ecx, dword ptr [esp + 0x68] */
  ECX = (r32((uint32_t)(ESP + 0x68)));
  /* 118e16d8 mov edx, dword ptr [esp + 0x94] */
  EDX = (r32((uint32_t)(ESP + 0x94)));
  /* 118e16df mov eax, dword ptr [esp + 0x98] */
  EAX = (r32((uint32_t)(ESP + 0x98)));
  /* 118e16e6 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e16e8 mov edx, dword ptr [esp + 0x6c] */
  EDX = (r32((uint32_t)(ESP + 0x6c)));
  /* 118e16ec mov dword ptr [esp + 0x40], ecx */
  w32((uint32_t)(ESP + 0x40), (ECX));
  /* 118e16f0 fild dword ptr [esp + 0x40] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x40)));
  /* 118e16f4 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e16f6 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e16f9 mov dword ptr [esp + 0x10], edx */
  w32((uint32_t)(ESP + 0x10), (EDX));
  /* 118e16fd fstp qword ptr [esp + 0x14] */
  wf64((uint32_t)(ESP + 0x14), FPU_ST(0));
  (void)fpu_pop();
  /* 118e1701 fild dword ptr [esp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(ESP + 0x10)));
  /* 118e1705 fst qword ptr [esp + 0x1c] */
  wf64((uint32_t)(ESP + 0x1c), FPU_ST(0));
  /* 118e1709 fmul qword ptr [esp + 0x1c] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(ESP + 0x1c)));
  /* 118e170d fld qword ptr [esp + 0x14] */
  fpu_push(rf64((uint32_t)(ESP + 0x14)));
  /* 118e1711 fmul qword ptr [esp + 0x14] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(ESP + 0x14)));
  /* 118e1715 faddp st(1) */
  FPU_ST(1) = FPU_ST(1) + FPU_ST(0);
  (void)fpu_pop();
  /* 118e1717 fsqrt  */
  FPU_ST(0) = __builtin_sqrt(FPU_ST(0));
  /* 118e1719 fdivr qword ptr [esp + 0x14] */
  FPU_ST(0) = (rf64((uint32_t)(ESP + 0x14))) / FPU_ST(0);
  /* 118e171d call 0x118e4810 */
  push32(0x118e1722u); f_118e4810();
  /* 118e1722 fmul qword ptr [0x118ef218] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x118ef218)));
  /* 118e1728 call 0x118e46d0 */
  push32(0x118e172du); f_118e46d0();
  /* 118e172d fld qword ptr [esp + 0x1c] */
  fpu_push(rf64((uint32_t)(ESP + 0x1c)));
  /* 118e1731 fcomp qword ptr [0x118ef210] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef210)));
  (void)fpu_pop();
  /* 118e1737 mov byte ptr [esp + 0x10], al */
  w8((uint32_t)(ESP + 0x10), (AL));
  /* 118e173b fnstsw ax */
  AX = fpu_status();
  /* 118e173d test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 118e1740 je 0x118e1747 */
  if (C.zf) goto L_118e1747;
  /* 118e1742 add byte ptr [esp + 0x10], 0x7f */
  { uint32_t _a=(r8((uint32_t)(ESP + 0x10))),_b=(0x7fu),_r=_a+_b; w8((uint32_t)(ESP + 0x10), (_r)); fl_add(_a,_b,_r,8); }
L_118e1747:;
  /* 118e1747 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e174b mov cl, byte ptr [esi + 1] */
  CL = (r8((uint32_t)(ESI + 0x1)));
  /* 118e174e push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1750 push eax */
  push32((uint32_t)(EAX));
  /* 118e1751 push ebp */
  push32((uint32_t)(EBP));
  /* 118e1752 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1753 call dword ptr [0x118ef1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e0))), 0x118e1759u);
  /* 118e1759 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e175c mov byte ptr [esi + 0x21], 1 */
  w8((uint32_t)(ESI + 0x21), (0x1u));
L_118e1760:;
  /* 118e1760 pop edi */
  EDI = (pop32());
  /* 118e1761 pop ebp */
  EBP = (pop32());
  /* 118e1762 pop ebx */
  EBX = (pop32());
  /* 118e1763 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e1765 pop esi */
  ESI = (pop32());
  /* 118e1766 add esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1769 ret  */
  ESPCHK(0x118e14e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001770 @ 0x118e1770 (164 bytes, 62 insns) */
void f_118e1770(void) {
  FTRACE(0x118e1770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1770 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1771 push esi */
  push32((uint32_t)(ESI));
  /* 118e1772 mov esi, ecx */
  ESI = (ECX);
  /* 118e1774 mov eax, dword ptr [esi + 0x162] */
  EAX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e177a mov ecx, dword ptr [esi + eax*8 + 0xc6] */
  ECX = (r32((uint32_t)(ESI + EAX*8 + 0xc6)));
  /* 118e1781 lea eax, [esi + eax*8] */
  EAX = ((uint32_t)(ESI + EAX*8));
  /* 118e1784 cmp ecx, 0x554e4954 */
  { uint32_t _a=(ECX),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e178a jne 0x118e17a5 */
  if (!C.zf) goto L_118e17a5;
  /* 118e178c add eax, 0xc2 */
  { uint32_t _a=(EAX),_b=(0xc2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1791 push eax */
  push32((uint32_t)(EAX));
  /* 118e1792 call dword ptr [0x118ef19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef19c))), 0x118e1798u);
  /* 118e1798 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e179b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e179d setle al */
  AL = (((C.zf||C.sf!=C.of)) ? 1u : 0u);
  /* 118e17a0 pop esi */
  ESI = (pop32());
  /* 118e17a1 pop ecx */
  ECX = (pop32());
  /* 118e17a2 ret 4 */
  ESPCHK(0x118e1770u, _esp0);
  ESP += 8; return;
L_118e17a5:;
  /* 118e17a5 push ebx */
  push32((uint32_t)(EBX));
  /* 118e17a6 mov ebx, dword ptr [0x118ef19c] */
  EBX = (r32((uint32_t)(0x118ef19c)));
  /* 118e17ac push ebp */
  push32((uint32_t)(EBP));
  /* 118e17ad push edi */
  push32((uint32_t)(EDI));
  /* 118e17ae lea edi, [esi + 0x11] */
  EDI = ((uint32_t)(ESI + 0x11));
  /* 118e17b1 push edi */
  push32((uint32_t)(EDI));
  /* 118e17b2 call ebx */
  call_ind((uint32_t)(EBX), 0x118e17b4u);
  /* 118e17b4 push edi */
  push32((uint32_t)(EDI));
  /* 118e17b5 mov ebp, eax */
  EBP = (EAX);
  /* 118e17b7 call ebx */
  call_ind((uint32_t)(EBX), 0x118e17b9u);
  /* 118e17b9 mov ecx, eax */
  ECX = (EAX);
  /* 118e17bb mov eax, 0x66666667 */
  EAX = (0x66666667u);
  /* 118e17c0 add ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e17c2 mov ebp, dword ptr [0x118ef1f8] */
  EBP = (r32((uint32_t)(0x118ef1f8)));
  /* 118e17c8 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 118e17cb imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 118e17cd mov eax, dword ptr [esi + 0x162] */
  EAX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e17d3 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 118e17d6 mov ecx, edx */
  ECX = (EDX);
  /* 118e17d8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 118e17db add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e17dd lea ecx, [esi + eax*8 + 0x22] */
  ECX = ((uint32_t)(ESI + EAX*8 + 0x22));
  /* 118e17e1 mov ebx, edx */
  EBX = (EDX);
  /* 118e17e3 lea edx, [esi + 5] */
  EDX = ((uint32_t)(ESI + 0x5));
  /* 118e17e6 push edx */
  push32((uint32_t)(EDX));
  /* 118e17e7 push ecx */
  push32((uint32_t)(ECX));
  /* 118e17e8 call ebp */
  call_ind((uint32_t)(EBP), 0x118e17eau);
  /* 118e17ea mov edx, eax */
  EDX = (EAX);
  /* 118e17ec mov eax, dword ptr [esi + 0x162] */
  EAX = (r32((uint32_t)(ESI + 0x162)));
  /* 118e17f2 push edi */
  push32((uint32_t)(EDI));
  /* 118e17f3 mov dword ptr [esp + 0x24], edx */
  w32((uint32_t)(ESP + 0x24), (EDX));
  /* 118e17f7 lea ecx, [esi + eax*8 + 0x22] */
  ECX = ((uint32_t)(ESI + EAX*8 + 0x22));
  /* 118e17fb push ecx */
  push32((uint32_t)(ECX));
  /* 118e17fc call ebp */
  call_ind((uint32_t)(EBP), 0x118e17feu);
  /* 118e17fe mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 118e1802 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1805 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1807 pop edi */
  EDI = (pop32());
  /* 118e1808 cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e180a pop ebp */
  EBP = (pop32());
  /* 118e180b pop ebx */
  EBX = (pop32());
  /* 118e180c setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 118e180f pop esi */
  ESI = (pop32());
  /* 118e1810 pop ecx */
  ECX = (pop32());
  /* 118e1811 ret 4 */
  ESPCHK(0x118e1770u, _esp0);
  ESP += 8; return;
}

/* FUN_10001830 @ 0x118e1830 (16 bytes, 5 insns) */
void f_118e1830(void) {
  FTRACE(0x118e1830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1830 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1834 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e1838 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118e183a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 118e183d ret 8 */
  ESPCHK(0x118e1830u, _esp0);
  ESP += 12; return;
}

/* FUN_10001840 @ 0x118e1840 (44 bytes, 15 insns) */
void f_118e1840(void) {
  FTRACE(0x118e1840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1840 mov eax, dword ptr [ecx + 0x59] */
  EAX = (r32((uint32_t)(ECX + 0x59)));
  /* 118e1843 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1846 jne 0x118e184d */
  if (!C.zf) goto L_118e184d;
  /* 118e1848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e184a ret 4 */
  ESPCHK(0x118e1840u, _esp0);
  ESP += 8; return;
L_118e184d:;
  /* 118e184d lea edx, [ecx + eax*8 + 9] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x9));
  /* 118e1851 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e1852 mov dword ptr [ecx + 0x59], eax */
  w32((uint32_t)(ECX + 0x59), (EAX));
  /* 118e1855 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1859 push eax */
  push32((uint32_t)(EAX));
  /* 118e185a push edx */
  push32((uint32_t)(EDX));
  /* 118e185b call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e1861u);
  /* 118e1861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1864 mov eax, 1 */
  EAX = (0x1u);
  /* 118e1869 ret 4 */
  ESPCHK(0x118e1840u, _esp0);
  ESP += 8; return;
}

/* FUN_10001870 @ 0x118e1870 (101 bytes, 42 insns) */
void f_118e1870(void) {
  FTRACE(0x118e1870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1870 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1873 push ebx */
  push32((uint32_t)(EBX));
  /* 118e1874 mov ebx, dword ptr [0x118ef1e4] */
  EBX = (r32((uint32_t)(0x118ef1e4)));
  /* 118e187a push ebp */
  push32((uint32_t)(EBP));
  /* 118e187b push esi */
  push32((uint32_t)(ESI));
  /* 118e187c push edi */
  push32((uint32_t)(EDI));
  /* 118e187d mov edi, ecx */
  EDI = (ECX);
  /* 118e187f xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 118e1881 lea esi, [edi + 9] */
  ESI = ((uint32_t)(EDI + 0x9));
L_118e1884:;
  /* 118e1884 cmp dword ptr [esi + 4], 0x554e4954 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e188b jne 0x118e18ca */
  if (!C.zf) goto L_118e18ca;
  /* 118e188d push esi */
  push32((uint32_t)(ESI));
  /* 118e188e call dword ptr [0x118ef19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef19c))), 0x118e1894u);
  /* 118e1894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1897 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e1899 je 0x118e18c1 */
  if (C.zf) goto L_118e18c1;
  /* 118e189b mov ax, word ptr [edi + 4] */
  AX = (r16((uint32_t)(EDI + 0x4)));
  /* 118e189f lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 118e18a3 push eax */
  push32((uint32_t)(EAX));
  /* 118e18a4 push esi */
  push32((uint32_t)(ESI));
  /* 118e18a5 push ecx */
  push32((uint32_t)(ECX));
  /* 118e18a6 call ebx */
  call_ind((uint32_t)(EBX), 0x118e18a8u);
  /* 118e18a8 mov dl, byte ptr [edi] */
  DL = (r8((uint32_t)(EDI)));
  /* 118e18aa lea eax, [esp + 0x1c] */
  EAX = ((uint32_t)(ESP + 0x1c));
  /* 118e18ae push edx */
  push32((uint32_t)(EDX));
  /* 118e18af push eax */
  push32((uint32_t)(EAX));
  /* 118e18b0 call dword ptr [0x118ef190] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef190))), 0x118e18b6u);
  /* 118e18b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e18b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e18bb je 0x118e18c1 */
  if (C.zf) goto L_118e18c1;
  /* 118e18bd mov byte ptr [edi + 8], 1 */
  w8((uint32_t)(EDI + 0x8), (0x1u));
L_118e18c1:;
  /* 118e18c1 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 118e18c2 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e18c5 cmp ebp, 0xa */
  { uint32_t _a=(EBP),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e18c8 jl 0x118e1884 */
  if ((C.sf!=C.of)) goto L_118e1884;
L_118e18ca:;
  /* 118e18ca mov al, byte ptr [edi + 8] */
  AL = (r8((uint32_t)(EDI + 0x8)));
  /* 118e18cd pop edi */
  EDI = (pop32());
  /* 118e18ce pop esi */
  ESI = (pop32());
  /* 118e18cf pop ebp */
  EBP = (pop32());
  /* 118e18d0 pop ebx */
  EBX = (pop32());
  /* 118e18d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e18d4 ret  */
  ESPCHK(0x118e1870u, _esp0);
  ESP += 4; return;
}

/* FUN_100018f0 @ 0x118e18f0 (88 bytes, 25 insns) */
void f_118e18f0(void) {
  FTRACE(0x118e18f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e18f0 push esi */
  push32((uint32_t)(ESI));
  /* 118e18f1 mov esi, ecx */
  ESI = (ECX);
  /* 118e18f3 mov eax, dword ptr [esi + 0x140] */
  EAX = (r32((uint32_t)(ESI + 0x140)));
  /* 118e18f9 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e18fc jne 0x118e1904 */
  if (!C.zf) goto L_118e1904;
  /* 118e18fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e1900 pop esi */
  ESI = (pop32());
  /* 118e1901 ret 0xc */
  ESPCHK(0x118e18f0u, _esp0);
  ESP += 16; return;
L_118e1904:;
  /* 118e1904 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e1908 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e1909 push ecx */
  push32((uint32_t)(ECX));
  /* 118e190a mov dword ptr [esi + 0x140], eax */
  w32((uint32_t)(ESI + 0x140), (EAX));
  /* 118e1910 lea edx, [esi + eax*8] */
  EDX = ((uint32_t)(ESI + EAX*8));
  /* 118e1913 push edx */
  push32((uint32_t)(EDX));
  /* 118e1914 call dword ptr [0x118ef1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b8))), 0x118e191au);
  /* 118e191a mov eax, dword ptr [esi + 0x140] */
  EAX = (r32((uint32_t)(ESI + 0x140)));
  /* 118e1920 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e1924 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1927 mov dword ptr [esi + eax*4 + 0xa0], ecx */
  w32((uint32_t)(ESI + EAX*4 + 0xa0), (ECX));
  /* 118e192e mov edx, dword ptr [esi + 0x140] */
  EDX = (r32((uint32_t)(ESI + 0x140)));
  /* 118e1934 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e1938 mov dword ptr [esi + edx*4 + 0xf0], eax */
  w32((uint32_t)(ESI + EDX*4 + 0xf0), (EAX));
  /* 118e193f mov eax, 1 */
  EAX = (0x1u);
  /* 118e1944 pop esi */
  ESI = (pop32());
  /* 118e1945 ret 0xc */
  ESPCHK(0x118e18f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10001950 @ 0x118e1950 (65 bytes, 29 insns) */
void f_118e1950(void) {
  FTRACE(0x118e1950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1950 push ebx */
  push32((uint32_t)(EBX));
  /* 118e1951 push ebp */
  push32((uint32_t)(EBP));
  /* 118e1952 mov ebp, ecx */
  EBP = (ECX);
  /* 118e1954 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e1956 mov eax, dword ptr [ebp + 0x140] */
  EAX = (r32((uint32_t)(EBP + 0x140)));
  /* 118e195c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e195e jle 0x118e198e */
  if ((C.zf||C.sf!=C.of)) goto L_118e198e;
  /* 118e1960 push esi */
  push32((uint32_t)(ESI));
  /* 118e1961 push edi */
  push32((uint32_t)(EDI));
  /* 118e1962 mov edi, ebp */
  EDI = (EBP);
  /* 118e1964 lea esi, [ebp + 0xf0] */
  ESI = ((uint32_t)(EBP + 0xf0));
L_118e196a:;
  /* 118e196a mov al, byte ptr [esi - 0x50] */
  AL = (r8((uint32_t)(ESI + -0x50)));
  /* 118e196d mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118e196f push eax */
  push32((uint32_t)(EAX));
  /* 118e1970 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1971 push edi */
  push32((uint32_t)(EDI));
  /* 118e1972 call dword ptr [0x118ef18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef18c))), 0x118e1978u);
  /* 118e1978 mov eax, dword ptr [ebp + 0x140] */
  EAX = (r32((uint32_t)(EBP + 0x140)));
  /* 118e197e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1981 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e1982 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1985 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1988 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e198a jl 0x118e196a */
  if ((C.sf!=C.of)) goto L_118e196a;
  /* 118e198c pop edi */
  EDI = (pop32());
  /* 118e198d pop esi */
  ESI = (pop32());
L_118e198e:;
  /* 118e198e pop ebp */
  EBP = (pop32());
  /* 118e198f pop ebx */
  EBX = (pop32());
  /* 118e1990 ret  */
  ESPCHK(0x118e1950u, _esp0);
  ESP += 4; return;
}

/* FUN_100019a0 @ 0x118e19a0 (57 bytes, 25 insns) */
void f_118e19a0(void) {
  FTRACE(0x118e19a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e19a0 push ebx */
  push32((uint32_t)(EBX));
  /* 118e19a1 mov ebx, ecx */
  EBX = (ECX);
  /* 118e19a3 push esi */
  push32((uint32_t)(ESI));
  /* 118e19a4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e19a6 mov eax, dword ptr [ebx + 0x140] */
  EAX = (r32((uint32_t)(EBX + 0x140)));
  /* 118e19ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e19ae jle 0x118e19d6 */
  if ((C.zf||C.sf!=C.of)) goto L_118e19d6;
  /* 118e19b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e19b1 mov ebp, dword ptr [0x118ef188] */
  EBP = (r32((uint32_t)(0x118ef188)));
  /* 118e19b7 push edi */
  push32((uint32_t)(EDI));
  /* 118e19b8 lea edi, [ebx + 0xa0] */
  EDI = ((uint32_t)(EBX + 0xa0));
L_118e19be:;
  /* 118e19be mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 118e19c0 push eax */
  push32((uint32_t)(EAX));
  /* 118e19c1 call ebp */
  call_ind((uint32_t)(EBP), 0x118e19c3u);
  /* 118e19c3 mov eax, dword ptr [ebx + 0x140] */
  EAX = (r32((uint32_t)(EBX + 0x140)));
  /* 118e19c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e19cc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e19cd add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e19d0 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e19d2 jl 0x118e19be */
  if ((C.sf!=C.of)) goto L_118e19be;
  /* 118e19d4 pop edi */
  EDI = (pop32());
  /* 118e19d5 pop ebp */
  EBP = (pop32());
L_118e19d6:;
  /* 118e19d6 pop esi */
  ESI = (pop32());
  /* 118e19d7 pop ebx */
  EBX = (pop32());
  /* 118e19d8 ret  */
  ESPCHK(0x118e19a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100019f0 @ 0x118e19f0 (21 bytes, 7 insns) */
void f_118e19f0(void) {
  FTRACE(0x118e19f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e19f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e19f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e19f7 push eax */
  push32((uint32_t)(EAX));
  /* 118e19f8 push ecx */
  push32((uint32_t)(ECX));
  /* 118e19f9 call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e19ffu);
  /* 118e19ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1a02 ret 4 */
  ESPCHK(0x118e19f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001a10 @ 0x118e1a10 (50 bytes, 15 insns) */
void f_118e1a10(void) {
  FTRACE(0x118e1a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1a10 mov eax, dword ptr [ecx + 0xac] */
  EAX = (r32((uint32_t)(ECX + 0xac)));
  /* 118e1a16 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1a19 jne 0x118e1a20 */
  if (!C.zf) goto L_118e1a20;
  /* 118e1a1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e1a1d ret 4 */
  ESPCHK(0x118e1a10u, _esp0);
  ESP += 8; return;
L_118e1a20:;
  /* 118e1a20 lea edx, [ecx + eax*8 + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0xc));
  /* 118e1a24 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e1a25 mov dword ptr [ecx + 0xac], eax */
  w32((uint32_t)(ECX + 0xac), (EAX));
  /* 118e1a2b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1a2f push eax */
  push32((uint32_t)(EAX));
  /* 118e1a30 push edx */
  push32((uint32_t)(EDX));
  /* 118e1a31 call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e1a37u);
  /* 118e1a37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1a3a mov eax, 1 */
  EAX = (0x1u);
  /* 118e1a3f ret 4 */
  ESPCHK(0x118e1a10u, _esp0);
  ESP += 8; return;
}

/* FUN_10001a50 @ 0x118e1a50 (136 bytes, 53 insns) */
void f_118e1a50(void) {
  FTRACE(0x118e1a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1a50 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1a53 push ebp */
  push32((uint32_t)(EBP));
  /* 118e1a54 push esi */
  push32((uint32_t)(ESI));
  /* 118e1a55 mov esi, ecx */
  ESI = (ECX);
  /* 118e1a57 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 118e1a5c lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 118e1a60 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 118e1a63 push eax */
  push32((uint32_t)(EAX));
  /* 118e1a64 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1a65 call dword ptr [0x118ef1e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e4))), 0x118e1a6bu);
  /* 118e1a6b mov eax, dword ptr [esi + 0xac] */
  EAX = (r32((uint32_t)(ESI + 0xac)));
  /* 118e1a71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1a74 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 118e1a76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e1a78 jle 0x118e1ad2 */
  if ((C.zf||C.sf!=C.of)) goto L_118e1ad2;
  /* 118e1a7a push ebx */
  push32((uint32_t)(EBX));
  /* 118e1a7b push edi */
  push32((uint32_t)(EDI));
  /* 118e1a7c lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
L_118e1a7f:;
  /* 118e1a7f push edi */
  push32((uint32_t)(EDI));
  /* 118e1a80 call dword ptr [0x118ef19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef19c))), 0x118e1a86u);
  /* 118e1a86 lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 118e1a8a push edi */
  push32((uint32_t)(EDI));
  /* 118e1a8b push edx */
  push32((uint32_t)(EDX));
  /* 118e1a8c mov ebx, eax */
  EBX = (EAX);
  /* 118e1a8e call dword ptr [0x118ef1f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f8))), 0x118e1a94u);
  /* 118e1a94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1a97 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1a99 je 0x118e1ac2 */
  if (C.zf) goto L_118e1ac2;
  /* 118e1a9b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e1a9d push eax */
  push32((uint32_t)(EAX));
  /* 118e1a9e call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e1aa4u);
  /* 118e1aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1aa6 push edi */
  push32((uint32_t)(EDI));
  /* 118e1aa7 call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e1aadu);
  /* 118e1aad mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 118e1aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1ab1 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 118e1ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1ab8 push edx */
  push32((uint32_t)(EDX));
  /* 118e1ab9 call dword ptr [0x118ef1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f0))), 0x118e1abfu);
  /* 118e1abf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e1ac2:;
  /* 118e1ac2 mov eax, dword ptr [esi + 0xac] */
  EAX = (r32((uint32_t)(ESI + 0xac)));
  /* 118e1ac8 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 118e1ac9 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1acc cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1ace jl 0x118e1a7f */
  if ((C.sf!=C.of)) goto L_118e1a7f;
  /* 118e1ad0 pop edi */
  EDI = (pop32());
  /* 118e1ad1 pop ebx */
  EBX = (pop32());
L_118e1ad2:;
  /* 118e1ad2 pop esi */
  ESI = (pop32());
  /* 118e1ad3 pop ebp */
  EBP = (pop32());
  /* 118e1ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1ad7 ret  */
  ESPCHK(0x118e1a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ae0 @ 0x118e1ae0 (13 bytes, 3 insns) */
void f_118e1ae0(void) {
  FTRACE(0x118e1ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1ae0 mov eax, ecx */
  EAX = (ECX);
  /* 118e1ae2 mov dword ptr [eax + 0x320], 0 */
  w32((uint32_t)(EAX + 0x320), (0x0u));
  /* 118e1aec ret  */
  ESPCHK(0x118e1ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001af0 @ 0x118e1af0 (46 bytes, 15 insns) */
void f_118e1af0(void) {
  FTRACE(0x118e1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1af0 mov eax, dword ptr [ecx + 0x320] */
  EAX = (r32((uint32_t)(ECX + 0x320)));
  /* 118e1af6 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1af9 jne 0x118e1b00 */
  if (!C.zf) goto L_118e1b00;
  /* 118e1afb xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118e1afd ret 4 */
  ESPCHK(0x118e1af0u, _esp0);
  ESP += 8; return;
L_118e1b00:;
  /* 118e1b00 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 118e1b03 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e1b04 mov dword ptr [ecx + 0x320], eax */
  w32((uint32_t)(ECX + 0x320), (EAX));
  /* 118e1b0a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1b0e push eax */
  push32((uint32_t)(EAX));
  /* 118e1b0f push edx */
  push32((uint32_t)(EDX));
  /* 118e1b10 call dword ptr [0x118ef1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b8))), 0x118e1b16u);
  /* 118e1b16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1b19 mov al, 1 */
  AL = (0x1u);
  /* 118e1b1b ret 4 */
  ESPCHK(0x118e1af0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001b20 @ 0x118e1b20 (10 bytes, 3 insns) */
void f_118e1b20(void) {
  FTRACE(0x118e1b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1b20 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1b24 lea eax, [ecx + eax*8] */
  EAX = ((uint32_t)(ECX + EAX*8));
  /* 118e1b27 ret 4 */
  ESPCHK(0x118e1b20u, _esp0);
  ESP += 8; return;
}

/* FUN_10001bc0 @ 0x118e1bc0 (57 bytes, 17 insns) */
void f_118e1bc0(void) {
  FTRACE(0x118e1bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1bc0 push esi */
  push32((uint32_t)(ESI));
  /* 118e1bc1 mov esi, dword ptr [0x118ef184] */
  ESI = (r32((uint32_t)(0x118ef184)));
  /* 118e1bc7 push 0xf424 */
  push32((uint32_t)(0xf424u));
  /* 118e1bcc push 0x118f5c28 */
  push32((uint32_t)(0x118f5c28u));
  /* 118e1bd1 call esi */
  call_ind((uint32_t)(ESI), 0x118e1bd3u);
  /* 118e1bd3 push 0x294 */
  push32((uint32_t)(0x294u));
  /* 118e1bd8 push 0x118f57a0 */
  push32((uint32_t)(0x118f57a0u));
  /* 118e1bdd call esi */
  call_ind((uint32_t)(ESI), 0x118e1bdfu);
  /* 118e1bdf push 0x3cf0 */
  push32((uint32_t)(0x3cf0u));
  /* 118e1be4 push 0x119056f8 */
  push32((uint32_t)(0x119056f8u));
  /* 118e1be9 call esi */
  call_ind((uint32_t)(ESI), 0x118e1bebu);
  /* 118e1beb push 4 */
  push32((uint32_t)(0x4u));
  /* 118e1bed push 0x119093e8 */
  push32((uint32_t)(0x119093e8u));
  /* 118e1bf2 call esi */
  call_ind((uint32_t)(ESI), 0x118e1bf4u);
  /* 118e1bf4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1bf7 pop esi */
  ESI = (pop32());
  /* 118e1bf8 ret  */
  ESPCHK(0x118e1bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c00 @ 0x118e1c00 (40 bytes, 16 insns) */
void f_118e1c00(void) {
  FTRACE(0x118e1c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1c00 push esi */
  push32((uint32_t)(ESI));
  /* 118e1c01 mov esi, ecx */
  ESI = (ECX);
  /* 118e1c03 push edi */
  push32((uint32_t)(EDI));
  /* 118e1c04 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118e1c07 mov dword ptr [esi], 0 */
  w32((uint32_t)(ESI), (0x0u));
  /* 118e1c0d push eax */
  push32((uint32_t)(EAX));
  /* 118e1c0e call dword ptr [0x118ef1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d0))), 0x118e1c14u);
  /* 118e1c14 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 118e1c17 mov ecx, 6 */
  ECX = (0x6u);
  /* 118e1c1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e1c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1c21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 118e1c23 mov eax, esi */
  EAX = (ESI);
  /* 118e1c25 pop edi */
  EDI = (pop32());
  /* 118e1c26 pop esi */
  ESI = (pop32());
  /* 118e1c27 ret  */
  ESPCHK(0x118e1c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c30 @ 0x118e1c30 (202 bytes, 78 insns) */
void f_118e1c30(void) {
  FTRACE(0x118e1c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1c30 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1c33 push ebx */
  push32((uint32_t)(EBX));
  /* 118e1c34 push ebp */
  push32((uint32_t)(EBP));
  /* 118e1c35 mov ebp, ecx */
  EBP = (ECX);
  /* 118e1c37 push esi */
  push32((uint32_t)(ESI));
  /* 118e1c38 push edi */
  push32((uint32_t)(EDI));
  /* 118e1c39 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e1c3b lea edi, [ebp + 0x1c] */
  EDI = ((uint32_t)(EBP + 0x1c));
  /* 118e1c3e mov ebx, edi */
  EBX = (EDI);
L_118e1c40:;
  /* 118e1c40 push esi */
  push32((uint32_t)(ESI));
  /* 118e1c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1c43 call dword ptr [0x118ef174] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef174))), 0x118e1c49u);
  /* 118e1c49 mov ecx, dword ptr [ebx] */
  ECX = (r32((uint32_t)(EBX)));
  /* 118e1c4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1c4e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1c50 jl 0x118e1ce0 */
  if ((C.sf!=C.of)) goto L_118e1ce0;
  /* 118e1c56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e1c57 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1c5a cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1c5d jl 0x118e1c40 */
  if ((C.sf!=C.of)) goto L_118e1c40;
  /* 118e1c5f mov ebx, dword ptr [0x118ef178] */
  EBX = (r32((uint32_t)(0x118ef178)));
  /* 118e1c65 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118e1c67:;
  /* 118e1c67 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118e1c69 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e1c6b push eax */
  push32((uint32_t)(EAX));
  /* 118e1c6c push esi */
  push32((uint32_t)(ESI));
  /* 118e1c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1c6f call ebx */
  call_ind((uint32_t)(EBX), 0x118e1c71u);
  /* 118e1c71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1c74 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e1c75 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1c78 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1c7b jl 0x118e1c67 */
  if ((C.sf!=C.of)) goto L_118e1c67;
  /* 118e1c7d lea esi, [ebp + 0xc] */
  ESI = ((uint32_t)(EBP + 0xc));
  /* 118e1c80 call 0x118e47e8 */
  push32(0x118e1c85u); f_118e47e8();
  /* 118e1c85 mov ecx, dword ptr [esp + 0x40] */
  ECX = (r32((uint32_t)(ESP + 0x40)));
  /* 118e1c89 mov dl, byte ptr [ebp] */
  DL = (r8((uint32_t)(EBP)));
  /* 118e1c8c push eax */
  push32((uint32_t)(EAX));
  /* 118e1c8d push ecx */
  push32((uint32_t)(ECX));
  /* 118e1c8e add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1c91 push edx */
  push32((uint32_t)(EDX));
  /* 118e1c92 push ebp */
  push32((uint32_t)(EBP));
  /* 118e1c93 push 0x118f5798 */
  push32((uint32_t)(0x118f5798u));
  /* 118e1c98 push esi */
  push32((uint32_t)(ESI));
  /* 118e1c99 call dword ptr [0x118ef17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef17c))), 0x118e1c9fu);
  /* 118e1c9f lea eax, [esp + 0x28] */
  EAX = ((uint32_t)(ESP + 0x28));
  /* 118e1ca3 push eax */
  push32((uint32_t)(EAX));
  /* 118e1ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1ca6 push esi */
  push32((uint32_t)(ESI));
  /* 118e1ca7 call dword ptr [0x118ef1fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1fc))), 0x118e1cadu);
  /* 118e1cad mov edi, dword ptr [esp + 0x48] */
  EDI = (r32((uint32_t)(ESP + 0x48)));
  /* 118e1cb1 mov esi, dword ptr [esp + 0x4c] */
  ESI = (r32((uint32_t)(ESP + 0x4c)));
  /* 118e1cb5 mov eax, 0x64 */
  EAX = (0x64u);
  /* 118e1cba lea ecx, [esp + 0x34] */
  ECX = ((uint32_t)(ESP + 0x34));
  /* 118e1cbe add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1cc0 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1cc3 mov dword ptr [esp + 0x4c], edi */
  w32((uint32_t)(ESP + 0x4c), (EDI));
  /* 118e1cc7 mov dword ptr [esp + 0x50], esi */
  w32((uint32_t)(ESP + 0x50), (ESI));
  /* 118e1ccb call dword ptr [0x118ef1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1c0))), 0x118e1cd1u);
  /* 118e1cd1 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1cd4 mov al, 1 */
  AL = (0x1u);
  /* 118e1cd6 pop edi */
  EDI = (pop32());
  /* 118e1cd7 pop esi */
  ESI = (pop32());
  /* 118e1cd8 pop ebp */
  EBP = (pop32());
  /* 118e1cd9 pop ebx */
  EBX = (pop32());
  /* 118e1cda add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1cdd ret 4 */
  ESPCHK(0x118e1c30u, _esp0);
  ESP += 8; return;
L_118e1ce0:;
  /* 118e1ce0 push 0x118f108c */
  push32((uint32_t)(0x118f108cu));
  /* 118e1ce5 call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e1cebu);
  /* 118e1ceb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1cee xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118e1cf0 pop edi */
  EDI = (pop32());
  /* 118e1cf1 pop esi */
  ESI = (pop32());
  /* 118e1cf2 pop ebp */
  EBP = (pop32());
  /* 118e1cf3 pop ebx */
  EBX = (pop32());
  /* 118e1cf4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1cf7 ret 4 */
  ESPCHK(0x118e1c30u, _esp0);
  ESP += 8; return;
}

/* FUN_10001d00 @ 0x118e1d00 (67 bytes, 29 insns) */
void f_118e1d00(void) {
  FTRACE(0x118e1d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1d00 push esi */
  push32((uint32_t)(ESI));
  /* 118e1d01 mov esi, ecx */
  ESI = (ECX);
  /* 118e1d03 push edi */
  push32((uint32_t)(EDI));
  /* 118e1d04 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 118e1d08 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e1d0a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1d0c jne 0x118e1d15 */
  if (!C.zf) goto L_118e1d15;
  /* 118e1d0e pop edi */
  EDI = (pop32());
  /* 118e1d0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e1d11 pop esi */
  ESI = (pop32());
  /* 118e1d12 ret 4 */
  ESPCHK(0x118e1d00u, _esp0);
  ESP += 8; return;
L_118e1d15:;
  /* 118e1d15 push eax */
  push32((uint32_t)(EAX));
  /* 118e1d16 call 0x118e10e0 */
  push32(0x118e1d1bu); f_118e10e0();
  /* 118e1d1b lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 118e1d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1d20 push eax */
  push32((uint32_t)(EAX));
  /* 118e1d21 call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e1d27u);
  /* 118e1d27 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 118e1d29 push edi */
  push32((uint32_t)(EDI));
  /* 118e1d2a push ecx */
  push32((uint32_t)(ECX));
  /* 118e1d2b call dword ptr [0x118ef1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1c8))), 0x118e1d31u);
  /* 118e1d31 mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 118e1d33 push edx */
  push32((uint32_t)(EDX));
  /* 118e1d34 call 0x118e1120 */
  push32(0x118e1d39u); f_118e1120();
  /* 118e1d39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1d3c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 118e1d3e pop edi */
  EDI = (pop32());
  /* 118e1d3f pop esi */
  ESI = (pop32());
  /* 118e1d40 ret 4 */
  ESPCHK(0x118e1d00u, _esp0);
  ESP += 8; return;
}

/* FUN_10001d50 @ 0x118e1d50 (45 bytes, 13 insns) */
void f_118e1d50(void) {
  FTRACE(0x118e1d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1d50 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1d54 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e1d58 mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 118e1d5b mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e1d5f mov dword ptr [ecx + 0x20], edx */
  w32((uint32_t)(ECX + 0x20), (EDX));
  /* 118e1d62 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e1d66 mov dword ptr [ecx + 0x24], eax */
  w32((uint32_t)(ECX + 0x24), (EAX));
  /* 118e1d69 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e1d6d mov dword ptr [ecx + 0x28], edx */
  w32((uint32_t)(ECX + 0x28), (EDX));
  /* 118e1d70 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 118e1d74 mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 118e1d77 mov dword ptr [ecx + 0x30], edx */
  w32((uint32_t)(ECX + 0x30), (EDX));
  /* 118e1d7a ret 0x18 */
  ESPCHK(0x118e1d50u, _esp0);
  ESP += 28; return;
}

/* FUN_10001d80 @ 0x118e1d80 (21 bytes, 7 insns) */
void f_118e1d80(void) {
  FTRACE(0x118e1d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1d80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1d84 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1d87 push eax */
  push32((uint32_t)(EAX));
  /* 118e1d88 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1d89 call dword ptr [0x118ef1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b4))), 0x118e1d8fu);
  /* 118e1d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1d92 ret 4 */
  ESPCHK(0x118e1d80u, _esp0);
  ESP += 8; return;
}

/* FUN_10001da0 @ 0x118e1da0 (23 bytes, 9 insns) */
void f_118e1da0(void) {
  FTRACE(0x118e1da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1da0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1da3 push ecx */
  push32((uint32_t)(ECX));
  /* 118e1da4 call dword ptr [0x118ef19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef19c))), 0x118e1daau);
  /* 118e1daa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1dad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e1daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e1db1 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 118e1db4 mov al, cl */
  AL = (CL);
  /* 118e1db6 ret  */
  ESPCHK(0x118e1da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dc0 @ 0x118e1dc0 (127 bytes, 48 insns) */
void f_118e1dc0(void) {
  FTRACE(0x118e1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1dc0 sub esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e1dc3 push esi */
  push32((uint32_t)(ESI));
  /* 118e1dc4 push edi */
  push32((uint32_t)(EDI));
  /* 118e1dc5 mov edi, ecx */
  EDI = (ECX);
  /* 118e1dc7 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118e1dc9 lea esi, [eax*8 + 0x118f5090] */
  ESI = ((uint32_t)(EAX*8 + 0x118f5090));
  /* 118e1dd0 mov eax, dword ptr [eax*8 + 0x118f5094] */
  EAX = (r32((uint32_t)(EAX*8 + 0x118f5094)));
  /* 118e1dd7 cmp eax, 0x554e4954 */
  { uint32_t _a=(EAX),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1ddc je 0x118e1de8 */
  if (C.zf) goto L_118e1de8;
  /* 118e1dde push esi */
  push32((uint32_t)(ESI));
  /* 118e1ddf call dword ptr [0x118ef1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d0))), 0x118e1de5u);
  /* 118e1de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e1de8:;
  /* 118e1de8 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 118e1dea push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1dec push esi */
  push32((uint32_t)(ESI));
  /* 118e1ded push ecx */
  push32((uint32_t)(ECX));
  /* 118e1dee call dword ptr [0x118ef1d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d4))), 0x118e1df4u);
  /* 118e1df4 push esi */
  push32((uint32_t)(ESI));
  /* 118e1df5 call dword ptr [0x118ef19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef19c))), 0x118e1dfbu);
  /* 118e1dfb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1dfe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e1e01 jne 0x118e1e37 */
  if (!C.zf) goto L_118e1e37;
  /* 118e1e03 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 118e1e07 add edi, 0xc */
  { uint32_t _a=(EDI),_b=(0xcu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1e0a push edx */
  push32((uint32_t)(EDX));
  /* 118e1e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1e0d push edi */
  push32((uint32_t)(EDI));
  /* 118e1e0e mov edi, dword ptr [0x118ef1fc] */
  EDI = (r32((uint32_t)(0x118ef1fc)));
  /* 118e1e14 call edi */
  call_ind((uint32_t)(EDI), 0x118e1e16u);
  /* 118e1e16 lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 118e1e1a push eax */
  push32((uint32_t)(EAX));
  /* 118e1e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 118e1e1d push esi */
  push32((uint32_t)(ESI));
  /* 118e1e1e call edi */
  call_ind((uint32_t)(EDI), 0x118e1e20u);
  /* 118e1e20 mov cx, word ptr [esp + 0x20] */
  CX = (r16((uint32_t)(ESP + 0x20)));
  /* 118e1e25 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1e28 cmp cx, word ptr [esp + 0x34] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(ESP + 0x34))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e1e2d jne 0x118e1e37 */
  if (!C.zf) goto L_118e1e37;
  /* 118e1e2f pop edi */
  EDI = (pop32());
  /* 118e1e30 mov al, 1 */
  AL = (0x1u);
  /* 118e1e32 pop esi */
  ESI = (pop32());
  /* 118e1e33 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1e36 ret  */
  ESPCHK(0x118e1dc0u, _esp0);
  ESP += 4; return;
L_118e1e37:;
  /* 118e1e37 pop edi */
  EDI = (pop32());
  /* 118e1e38 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118e1e3a pop esi */
  ESI = (pop32());
  /* 118e1e3b add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1e3e ret  */
  ESPCHK(0x118e1dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e40 @ 0x118e1e40 (16 bytes, 7 insns) */
void f_118e1e40(void) {
  FTRACE(0x118e1e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1e40 push esi */
  push32((uint32_t)(ESI));
  /* 118e1e41 mov esi, ecx */
  ESI = (ECX);
  /* 118e1e43 call 0x118e1c00 */
  push32(0x118e1e48u); f_118e1c00();
  /* 118e1e48 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 118e1e4c mov eax, esi */
  EAX = (ESI);
  /* 118e1e4e pop esi */
  ESI = (pop32());
  /* 118e1e4f ret  */
  ESPCHK(0x118e1e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e50 @ 0x118e1e50 (58 bytes, 23 insns) */
void f_118e1e50(void) {
  FTRACE(0x118e1e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1e50 push esi */
  push32((uint32_t)(ESI));
  /* 118e1e51 mov esi, ecx */
  ESI = (ECX);
  /* 118e1e53 call 0x118e1da0 */
  push32(0x118e1e58u); f_118e1da0();
  /* 118e1e58 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e1e5a je 0x118e1e84 */
  if (C.zf) goto L_118e1e84;
  /* 118e1e5c mov ecx, esi */
  ECX = (ESI);
  /* 118e1e5e call 0x118e1dc0 */
  push32(0x118e1e63u); f_118e1dc0();
  /* 118e1e63 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e1e65 je 0x118e1e80 */
  if (C.zf) goto L_118e1e80;
  /* 118e1e67 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 118e1e6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e1e6d je 0x118e1e80 */
  if (C.zf) goto L_118e1e80;
  /* 118e1e6f mov al, byte ptr [esi + 0x34] */
  AL = (r8((uint32_t)(ESI + 0x34)));
  /* 118e1e72 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e1e74 je 0x118e1e84 */
  if (C.zf) goto L_118e1e84;
  /* 118e1e76 mov byte ptr [esi + 0x34], 0 */
  w8((uint32_t)(ESI + 0x34), (0x0u));
  /* 118e1e7a mov al, 1 */
  AL = (0x1u);
  /* 118e1e7c pop esi */
  ESI = (pop32());
  /* 118e1e7d ret 4 */
  ESPCHK(0x118e1e50u, _esp0);
  ESP += 8; return;
L_118e1e80:;
  /* 118e1e80 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
L_118e1e84:;
  /* 118e1e84 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118e1e86 pop esi */
  ESI = (pop32());
  /* 118e1e87 ret 4 */
  ESPCHK(0x118e1e50u, _esp0);
  ESP += 8; return;
}

/* FUN_10001e90 @ 0x118e1e90 (15 bytes, 5 insns) */
void f_118e1e90(void) {
  FTRACE(0x118e1e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1e90 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1e94 push eax */
  push32((uint32_t)(EAX));
  /* 118e1e95 call 0x118e1c30 */
  push32(0x118e1e9au); f_118e1c30();
  /* 118e1e9a mov al, 1 */
  AL = (0x1u);
  /* 118e1e9c ret 4 */
  ESPCHK(0x118e1e90u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ea0 @ 0x118e1ea0 (43 bytes, 17 insns) */
void f_118e1ea0(void) {
  FTRACE(0x118e1ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1ea0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1ea4 push esi */
  push32((uint32_t)(ESI));
  /* 118e1ea5 mov esi, ecx */
  ESI = (ECX);
  /* 118e1ea7 push edi */
  push32((uint32_t)(EDI));
  /* 118e1ea8 push eax */
  push32((uint32_t)(EAX));
  /* 118e1ea9 lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 118e1eac push edi */
  push32((uint32_t)(EDI));
  /* 118e1ead call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e1eb3u);
  /* 118e1eb3 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 118e1eb8 add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1ebb push edi */
  push32((uint32_t)(EDI));
  /* 118e1ebc push esi */
  push32((uint32_t)(ESI));
  /* 118e1ebd call dword ptr [0x118ef1e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e4))), 0x118e1ec3u);
  /* 118e1ec3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1ec6 pop edi */
  EDI = (pop32());
  /* 118e1ec7 pop esi */
  ESI = (pop32());
  /* 118e1ec8 ret 4 */
  ESPCHK(0x118e1ea0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ed0 @ 0x118e1ed0 (16 bytes, 5 insns) */
void f_118e1ed0(void) {
  FTRACE(0x118e1ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1ed0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1ed4 add ecx, 0x7c */
  { uint32_t _a=(ECX),_b=(0x7cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1ed7 push eax */
  push32((uint32_t)(EAX));
  /* 118e1ed8 call 0x118e1af0 */
  push32(0x118e1eddu); f_118e1af0();
  /* 118e1edd ret 4 */
  ESPCHK(0x118e1ed0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ee0 @ 0x118e1ee0 (45 bytes, 13 insns) */
void f_118e1ee0(void) {
  FTRACE(0x118e1ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1ee0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1ee4 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e1ee8 mov dword ptr [ecx + 0x3c], eax */
  w32((uint32_t)(ECX + 0x3c), (EAX));
  /* 118e1eeb mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e1eef mov dword ptr [ecx + 0x40], edx */
  w32((uint32_t)(ECX + 0x40), (EDX));
  /* 118e1ef2 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e1ef6 mov dword ptr [ecx + 0x44], eax */
  w32((uint32_t)(ECX + 0x44), (EAX));
  /* 118e1ef9 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e1efd mov dword ptr [ecx + 0x48], edx */
  w32((uint32_t)(ECX + 0x48), (EDX));
  /* 118e1f00 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 118e1f04 mov dword ptr [ecx + 0x4c], eax */
  w32((uint32_t)(ECX + 0x4c), (EAX));
  /* 118e1f07 mov dword ptr [ecx + 0x50], edx */
  w32((uint32_t)(ECX + 0x50), (EDX));
  /* 118e1f0a ret 0x18 */
  ESPCHK(0x118e1ee0u, _esp0);
  ESP += 28; return;
}

/* FUN_10001f10 @ 0x118e1f10 (45 bytes, 13 insns) */
void f_118e1f10(void) {
  FTRACE(0x118e1f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1f10 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1f14 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e1f18 mov dword ptr [ecx + 0x54], eax */
  w32((uint32_t)(ECX + 0x54), (EAX));
  /* 118e1f1b mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e1f1f mov dword ptr [ecx + 0x58], edx */
  w32((uint32_t)(ECX + 0x58), (EDX));
  /* 118e1f22 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e1f26 mov dword ptr [ecx + 0x5c], eax */
  w32((uint32_t)(ECX + 0x5c), (EAX));
  /* 118e1f29 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e1f2d mov dword ptr [ecx + 0x60], edx */
  w32((uint32_t)(ECX + 0x60), (EDX));
  /* 118e1f30 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 118e1f34 mov dword ptr [ecx + 0x64], eax */
  w32((uint32_t)(ECX + 0x64), (EAX));
  /* 118e1f37 mov dword ptr [ecx + 0x68], edx */
  w32((uint32_t)(ECX + 0x68), (EDX));
  /* 118e1f3a ret 0x18 */
  ESPCHK(0x118e1f10u, _esp0);
  ESP += 28; return;
}

/* FUN_10001f40 @ 0x118e1f40 (126 bytes, 34 insns) */
void f_118e1f40(void) {
  FTRACE(0x118e1f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1f40 push ebx */
  push32((uint32_t)(EBX));
  /* 118e1f41 push esi */
  push32((uint32_t)(ESI));
  /* 118e1f42 push edi */
  push32((uint32_t)(EDI));
  /* 118e1f43 mov esi, ecx */
  ESI = (ECX);
  /* 118e1f45 call 0x118e1e40 */
  push32(0x118e1f4au); f_118e1e40();
  /* 118e1f4a lea edi, [esi + 0x3d] */
  EDI = ((uint32_t)(ESI + 0x3d));
  /* 118e1f4d mov ecx, edi */
  ECX = (EDI);
  /* 118e1f4f call 0x118e1c00 */
  push32(0x118e1f54u); f_118e1c00();
  /* 118e1f54 lea ecx, [edi + 0x6c] */
  ECX = ((uint32_t)(EDI + 0x6c));
  /* 118e1f57 call 0x118e2860 */
  push32(0x118e1f5cu); f_118e2860();
  /* 118e1f5c lea edi, [esi + 0x3e5] */
  EDI = ((uint32_t)(ESI + 0x3e5));
  /* 118e1f62 mov ebx, 0x64 */
  EBX = (0x64u);
L_118e1f67:;
  /* 118e1f67 mov ecx, edi */
  ECX = (EDI);
  /* 118e1f69 call 0x118e1c00 */
  push32(0x118e1f6eu); f_118e1c00();
  /* 118e1f6e add edi, 0x34 */
  { uint32_t _a=(EDI),_b=(0x34u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1f71 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118e1f72 jne 0x118e1f67 */
  if (!C.zf) goto L_118e1f67;
  /* 118e1f74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e1f76 mov dword ptr [esi + 0x185a], 5 */
  w32((uint32_t)(ESI + 0x185a), (0x5u));
  /* 118e1f80 mov dword ptr [esi + 0x1835], eax */
  w32((uint32_t)(ESI + 0x1835), (EAX));
  /* 118e1f86 mov byte ptr [esi + 0x184d], al */
  w8((uint32_t)(ESI + 0x184d), (AL));
  /* 118e1f8c mov dword ptr [esi + 0x184e], eax */
  w32((uint32_t)(ESI + 0x184e), (EAX));
  /* 118e1f92 mov dword ptr [esi + 0x1852], eax */
  w32((uint32_t)(ESI + 0x1852), (EAX));
  /* 118e1f98 mov dword ptr [esi + 0x1856], eax */
  w32((uint32_t)(ESI + 0x1856), (EAX));
  /* 118e1f9e lea eax, [esi + 0x1862] */
  EAX = ((uint32_t)(ESI + 0x1862));
  /* 118e1fa4 push eax */
  push32((uint32_t)(EAX));
  /* 118e1fa5 mov dword ptr [esi + 0x185e], 0xa */
  w32((uint32_t)(ESI + 0x185e), (0xau));
  /* 118e1faf call dword ptr [0x118ef1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d0))), 0x118e1fb5u);
  /* 118e1fb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e1fb8 mov eax, esi */
  EAX = (ESI);
  /* 118e1fba pop edi */
  EDI = (pop32());
  /* 118e1fbb pop esi */
  ESI = (pop32());
  /* 118e1fbc pop ebx */
  EBX = (pop32());
  /* 118e1fbd ret  */
  ESPCHK(0x118e1f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fc0 @ 0x118e1fc0 (48 bytes, 16 insns) */
void f_118e1fc0(void) {
  FTRACE(0x118e1fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1fc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1fc4 push esi */
  push32((uint32_t)(ESI));
  /* 118e1fc5 mov esi, ecx */
  ESI = (ECX);
  /* 118e1fc7 push eax */
  push32((uint32_t)(EAX));
  /* 118e1fc8 call 0x118e1c30 */
  push32(0x118e1fcdu); f_118e1c30();
  /* 118e1fcd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e1fcf jne 0x118e1fd5 */
  if (!C.zf) goto L_118e1fd5;
  /* 118e1fd1 pop esi */
  ESI = (pop32());
  /* 118e1fd2 ret 4 */
  ESPCHK(0x118e1fc0u, _esp0);
  ESP += 8; return;
L_118e1fd5:;
  /* 118e1fd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e1fd7 mov byte ptr [esi + 0x184d], 1 */
  w8((uint32_t)(ESI + 0x184d), (0x1u));
  /* 118e1fde mov dword ptr [esi + 0x1845], eax */
  w32((uint32_t)(ESI + 0x1845), (EAX));
  /* 118e1fe4 mov dword ptr [esi + 0x184e], eax */
  w32((uint32_t)(ESI + 0x184e), (EAX));
  /* 118e1fea mov al, 1 */
  AL = (0x1u);
  /* 118e1fec pop esi */
  ESI = (pop32());
  /* 118e1fed ret 4 */
  ESPCHK(0x118e1fc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ff0 @ 0x118e1ff0 (13 bytes, 3 insns) */
void f_118e1ff0(void) {
  FTRACE(0x118e1ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e1ff0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e1ff4 mov dword ptr [ecx + 0x3e1], eax */
  w32((uint32_t)(ECX + 0x3e1), (EAX));
  /* 118e1ffa ret 4 */
  ESPCHK(0x118e1ff0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002000 @ 0x118e2000 (21 bytes, 9 insns) */
void f_118e2000(void) {
  FTRACE(0x118e2000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2000 push esi */
  push32((uint32_t)(ESI));
  /* 118e2001 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e2005 push edi */
  push32((uint32_t)(EDI));
  /* 118e2006 lea edi, [ecx + 0x3d] */
  EDI = ((uint32_t)(ECX + 0x3d));
  /* 118e2009 mov ecx, 0xe9 */
  ECX = (0xe9u);
  /* 118e200e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118e2010 pop edi */
  EDI = (pop32());
  /* 118e2011 pop esi */
  ESI = (pop32());
  /* 118e2012 ret 4 */
  ESPCHK(0x118e2000u, _esp0);
  ESP += 8; return;
}

/* FUN_10002020 @ 0x118e2020 (13 bytes, 3 insns) */
void f_118e2020(void) {
  FTRACE(0x118e2020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2020 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2024 mov dword ptr [ecx + 0x1841], eax */
  w32((uint32_t)(ECX + 0x1841), (EAX));
  /* 118e202a ret 4 */
  ESPCHK(0x118e2020u, _esp0);
  ESP += 8; return;
}

/* FUN_10002030 @ 0x118e2030 (87 bytes, 39 insns) */
void f_118e2030(void) {
  FTRACE(0x118e2030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2030 push ebx */
  push32((uint32_t)(EBX));
  /* 118e2031 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2032 push esi */
  push32((uint32_t)(ESI));
  /* 118e2033 mov esi, ecx */
  ESI = (ECX);
  /* 118e2035 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e2037 push edi */
  push32((uint32_t)(EDI));
  /* 118e2038 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 118e203e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e2040 jle 0x118e2079 */
  if ((C.zf||C.sf!=C.of)) goto L_118e2079;
  /* 118e2042 mov ebp, dword ptr [0x118ef1f8] */
  EBP = (r32((uint32_t)(0x118ef1f8)));
  /* 118e2048 lea edi, [esi + 0x3f1] */
  EDI = ((uint32_t)(ESI + 0x3f1));
L_118e204e:;
  /* 118e204e lea ecx, [edi - 0xc] */
  ECX = ((uint32_t)(EDI + -0xc));
  /* 118e2051 call 0x118e1da0 */
  push32(0x118e2056u); f_118e1da0();
  /* 118e2056 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2058 je 0x118e206b */
  if (C.zf) goto L_118e206b;
  /* 118e205a lea eax, [esi + 0x1839] */
  EAX = ((uint32_t)(ESI + 0x1839));
  /* 118e2060 push edi */
  push32((uint32_t)(EDI));
  /* 118e2061 push eax */
  push32((uint32_t)(EAX));
  /* 118e2062 call ebp */
  call_ind((uint32_t)(EBP), 0x118e2064u);
  /* 118e2064 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2067 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e2069 je 0x118e2080 */
  if (C.zf) goto L_118e2080;
L_118e206b:;
  /* 118e206b mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 118e2071 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e2072 add edi, 0x34 */
  { uint32_t _a=(EDI),_b=(0x34u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2075 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2077 jl 0x118e204e */
  if ((C.sf!=C.of)) goto L_118e204e;
L_118e2079:;
  /* 118e2079 pop edi */
  EDI = (pop32());
  /* 118e207a pop esi */
  ESI = (pop32());
  /* 118e207b pop ebp */
  EBP = (pop32());
  /* 118e207c mov al, 1 */
  AL = (0x1u);
  /* 118e207e pop ebx */
  EBX = (pop32());
  /* 118e207f ret  */
  ESPCHK(0x118e2030u, _esp0);
  ESP += 4; return;
L_118e2080:;
  /* 118e2080 pop edi */
  EDI = (pop32());
  /* 118e2081 pop esi */
  ESI = (pop32());
  /* 118e2082 pop ebp */
  EBP = (pop32());
  /* 118e2083 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118e2085 pop ebx */
  EBX = (pop32());
  /* 118e2086 ret  */
  ESPCHK(0x118e2030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002090 @ 0x118e2090 (65 bytes, 32 insns) */
void f_118e2090(void) {
  FTRACE(0x118e2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2090 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2091 push esi */
  push32((uint32_t)(ESI));
  /* 118e2092 push edi */
  push32((uint32_t)(EDI));
  /* 118e2093 mov edi, ecx */
  EDI = (ECX);
  /* 118e2095 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 118e2097 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e2099 mov eax, dword ptr [edi + 0x1835] */
  EAX = (r32((uint32_t)(EDI + 0x1835)));
  /* 118e209f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e20a1 jle 0x118e20cb */
  if ((C.zf||C.sf!=C.of)) goto L_118e20cb;
  /* 118e20a3 push ebx */
  push32((uint32_t)(EBX));
  /* 118e20a4 lea ebx, [edi + 0x3e5] */
  EBX = ((uint32_t)(EDI + 0x3e5));
L_118e20aa:;
  /* 118e20aa mov ecx, ebx */
  ECX = (EBX);
  /* 118e20ac call 0x118e1da0 */
  push32(0x118e20b1u); f_118e1da0();
  /* 118e20b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e20b3 je 0x118e20b6 */
  if (C.zf) goto L_118e20b6;
  /* 118e20b5 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
L_118e20b6:;
  /* 118e20b6 mov eax, dword ptr [edi + 0x1835] */
  EAX = (r32((uint32_t)(EDI + 0x1835)));
  /* 118e20bc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e20bd add ebx, 0x34 */
  { uint32_t _a=(EBX),_b=(0x34u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e20c0 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e20c2 jl 0x118e20aa */
  if ((C.sf!=C.of)) goto L_118e20aa;
  /* 118e20c4 pop ebx */
  EBX = (pop32());
  /* 118e20c5 pop edi */
  EDI = (pop32());
  /* 118e20c6 mov eax, ebp */
  EAX = (EBP);
  /* 118e20c8 pop esi */
  ESI = (pop32());
  /* 118e20c9 pop ebp */
  EBP = (pop32());
  /* 118e20ca ret  */
  ESPCHK(0x118e2090u, _esp0);
  ESP += 4; return;
L_118e20cb:;
  /* 118e20cb pop edi */
  EDI = (pop32());
  /* 118e20cc mov eax, ebp */
  EAX = (EBP);
  /* 118e20ce pop esi */
  ESI = (pop32());
  /* 118e20cf pop ebp */
  EBP = (pop32());
  /* 118e20d0 ret  */
  ESPCHK(0x118e2090u, _esp0);
  ESP += 4; return;
}

/* FUN_100020e0 @ 0x118e20e0 (181 bytes, 71 insns) */
void f_118e20e0(void) {
  FTRACE(0x118e20e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e20e0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e20e3 push ebx */
  push32((uint32_t)(EBX));
  /* 118e20e4 push ebp */
  push32((uint32_t)(EBP));
  /* 118e20e5 push esi */
  push32((uint32_t)(ESI));
  /* 118e20e6 push edi */
  push32((uint32_t)(EDI));
  /* 118e20e7 mov ebp, ecx */
  EBP = (ECX);
  /* 118e20e9 call 0x118e2090 */
  push32(0x118e20eeu); f_118e2090();
  /* 118e20ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e20f0 jne 0x118e20fc */
  if (!C.zf) goto L_118e20fc;
L_118e20f2:;
  /* 118e20f2 pop edi */
  EDI = (pop32());
  /* 118e20f3 pop esi */
  ESI = (pop32());
  /* 118e20f4 pop ebp */
  EBP = (pop32());
  /* 118e20f5 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118e20f7 pop ebx */
  EBX = (pop32());
  /* 118e20f8 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e20fb ret  */
  ESPCHK(0x118e20e0u, _esp0);
  ESP += 4; return;
L_118e20fc:;
  /* 118e20fc mov dword ptr [esp + 0x10], 0x186a0 */
  w32((uint32_t)(ESP + 0x10), (0x186a0u));
  /* 118e2104 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e2106 lea edi, [esp + 0x14] */
  EDI = ((uint32_t)(ESP + 0x14));
  /* 118e210a lea ebx, [ebp + 0x91] */
  EBX = ((uint32_t)(EBP + 0x91));
L_118e2110:;
  /* 118e2110 cmp dword ptr [ebx], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2113 je 0x118e2134 */
  if (C.zf) goto L_118e2134;
  /* 118e2115 push esi */
  push32((uint32_t)(ESI));
  /* 118e2116 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e2118 call dword ptr [0x118ef174] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef174))), 0x118e211eu);
  /* 118e211e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e211f idiv dword ptr [ebx] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBX))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e2121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e2126 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 118e2128 je 0x118e20f2 */
  if (C.zf) goto L_118e20f2;
  /* 118e212a cmp dword ptr [esp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e212e jl 0x118e2134 */
  if ((C.sf!=C.of)) goto L_118e2134;
  /* 118e2130 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
L_118e2134:;
  /* 118e2134 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e2135 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2138 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e213b cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e213e jl 0x118e2110 */
  if ((C.sf!=C.of)) goto L_118e2110;
  /* 118e2140 mov ecx, ebp */
  ECX = (EBP);
  /* 118e2142 call 0x118e2090 */
  push32(0x118e2147u); f_118e2090();
  /* 118e2147 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e214b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e214d jge 0x118e2158 */
  if ((C.sf==C.of)) goto L_118e2158;
  /* 118e214f mov ecx, ebp */
  ECX = (EBP);
  /* 118e2151 call 0x118e2090 */
  push32(0x118e2156u); f_118e2090();
  /* 118e2156 jmp 0x118e215a */
  goto L_118e215a;
L_118e2158:;
  /* 118e2158 mov eax, ecx */
  EAX = (ECX);
L_118e215a:;
  /* 118e215a mov ebx, dword ptr [0x118ef178] */
  EBX = (r32((uint32_t)(0x118ef178)));
  /* 118e2160 mov dword ptr [ebp + 0x184e], eax */
  w32((uint32_t)(EBP + 0x184e), (EAX));
  /* 118e2166 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e2168 lea edi, [ebp + 0x91] */
  EDI = ((uint32_t)(EBP + 0x91));
L_118e216e:;
  /* 118e216e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118e2170 imul eax, dword ptr [ebp + 0x184e] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x184e)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e2177 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e2179 push eax */
  push32((uint32_t)(EAX));
  /* 118e217a push esi */
  push32((uint32_t)(ESI));
  /* 118e217b push 0 */
  push32((uint32_t)(0x0u));
  /* 118e217d call ebx */
  call_ind((uint32_t)(EBX), 0x118e217fu);
  /* 118e217f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2182 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e2183 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2186 cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2189 jl 0x118e216e */
  if ((C.sf!=C.of)) goto L_118e216e;
  /* 118e218b pop edi */
  EDI = (pop32());
  /* 118e218c pop esi */
  ESI = (pop32());
  /* 118e218d pop ebp */
  EBP = (pop32());
  /* 118e218e mov al, 1 */
  AL = (0x1u);
  /* 118e2190 pop ebx */
  EBX = (pop32());
  /* 118e2191 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2194 ret  */
  ESPCHK(0x118e20e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100021a0 @ 0x118e21a0 (161 bytes, 56 insns) */
void f_118e21a0(void) {
  FTRACE(0x118e21a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e21a0 push ebx */
  push32((uint32_t)(EBX));
  /* 118e21a1 push ebp */
  push32((uint32_t)(EBP));
  /* 118e21a2 mov ebx, ecx */
  EBX = (ECX);
  /* 118e21a4 push esi */
  push32((uint32_t)(ESI));
  /* 118e21a5 push edi */
  push32((uint32_t)(EDI));
  /* 118e21a6 mov esi, dword ptr [ebx + 0x184e] */
  ESI = (r32((uint32_t)(EBX + 0x184e)));
  /* 118e21ac call 0x118e2090 */
  push32(0x118e21b1u); f_118e2090();
  /* 118e21b1 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e21b3 jl 0x118e21be */
  if ((C.sf!=C.of)) goto L_118e21be;
  /* 118e21b5 mov ecx, ebx */
  ECX = (EBX);
  /* 118e21b7 call 0x118e2090 */
  push32(0x118e21bcu); f_118e2090();
  /* 118e21bc mov esi, eax */
  ESI = (EAX);
L_118e21be:;
  /* 118e21be mov eax, dword ptr [ebx + 0x8d] */
  EAX = (r32((uint32_t)(EBX + 0x8d)));
  /* 118e21c4 mov ecx, dword ptr [ebx + 0x89] */
  ECX = (r32((uint32_t)(EBX + 0x89)));
  /* 118e21ca mov edx, dword ptr [ebx + 0x85] */
  EDX = (r32((uint32_t)(EBX + 0x85)));
  /* 118e21d0 imul eax, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e21d3 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e21d6 imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e21d9 push eax */
  push32((uint32_t)(EAX));
  /* 118e21da mov eax, dword ptr [ebx + 0x81] */
  EAX = (r32((uint32_t)(EBX + 0x81)));
  /* 118e21e0 push ecx */
  push32((uint32_t)(ECX));
  /* 118e21e1 mov ecx, dword ptr [ebx + 0x7d] */
  ECX = (r32((uint32_t)(EBX + 0x7d)));
  /* 118e21e4 lea ebp, [ebx + 0x79] */
  EBP = ((uint32_t)(EBX + 0x79));
  /* 118e21e7 push edx */
  push32((uint32_t)(EDX));
  /* 118e21e8 imul eax, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e21eb imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e21ee mov edx, esi */
  EDX = (ESI);
  /* 118e21f0 push eax */
  push32((uint32_t)(EAX));
  /* 118e21f1 imul edx, dword ptr [ebp] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP)))*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e21f5 push ecx */
  push32((uint32_t)(ECX));
  /* 118e21f6 push edx */
  push32((uint32_t)(EDX));
  /* 118e21f7 push 0x118f109c */
  push32((uint32_t)(0x118f109cu));
  /* 118e21fc call dword ptr [0x118ef164] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef164))), 0x118e2202u);
  /* 118e2202 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2205 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_118e2207:;
  /* 118e2207 mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 118e220a imul eax, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e220d push eax */
  push32((uint32_t)(EAX));
  /* 118e220e push edi */
  push32((uint32_t)(EDI));
  /* 118e220f push 0 */
  push32((uint32_t)(0x0u));
  /* 118e2211 call dword ptr [0x118ef178] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef178))), 0x118e2217u);
  /* 118e2217 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e221a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e221b add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e221e cmp edi, 6 */
  { uint32_t _a=(EDI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2221 jl 0x118e2207 */
  if ((C.sf!=C.of)) goto L_118e2207;
  /* 118e2223 mov eax, dword ptr [ebx + 0x1856] */
  EAX = (r32((uint32_t)(EBX + 0x1856)));
  /* 118e2229 pop edi */
  EDI = (pop32());
  /* 118e222a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e222b pop esi */
  ESI = (pop32());
  /* 118e222c mov dword ptr [ebx + 0x184e], 0 */
  w32((uint32_t)(EBX + 0x184e), (0x0u));
  /* 118e2236 mov dword ptr [ebx + 0x1856], eax */
  w32((uint32_t)(EBX + 0x1856), (EAX));
  /* 118e223c pop ebp */
  EBP = (pop32());
  /* 118e223d mov al, 1 */
  AL = (0x1u);
  /* 118e223f pop ebx */
  EBX = (pop32());
  /* 118e2240 ret  */
  ESPCHK(0x118e21a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002250 @ 0x118e2250 (13 bytes, 3 insns) */
void f_118e2250(void) {
  FTRACE(0x118e2250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2250 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2254 mov dword ptr [ecx + 0x1852], eax */
  w32((uint32_t)(ECX + 0x1852), (EAX));
  /* 118e225a ret 4 */
  ESPCHK(0x118e2250u, _esp0);
  ESP += 8; return;
}

/* FUN_10002260 @ 0x118e2260 (788 bytes, 225 insns) [1 switch table(s)] */
void f_118e2260(void) {
  FTRACE(0x118e2260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2260 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2261 push esi */
  push32((uint32_t)(ESI));
  /* 118e2262 mov esi, ecx */
  ESI = (ECX);
  /* 118e2264 push edi */
  push32((uint32_t)(EDI));
  /* 118e2265 mov edi, 4 */
  EDI = (0x4u);
  /* 118e226a cmp dword ptr [esi + 0x1845], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1845))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2270 jne 0x118e2285 */
  if (!C.zf) goto L_118e2285;
  /* 118e2272 call 0x118e1da0 */
  push32(0x118e2277u); f_118e1da0();
  /* 118e2277 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2279 je 0x118e2285 */
  if (C.zf) goto L_118e2285;
  /* 118e227b mov dword ptr [esi + 0x1845], 0 */
  w32((uint32_t)(ESI + 0x1845), (0x0u));
L_118e2285:;
  /* 118e2285 mov ecx, esi */
  ECX = (ESI);
  /* 118e2287 call 0x118e1da0 */
  push32(0x118e228cu); f_118e1da0();
  /* 118e228c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e228e jne 0x118e22dc */
  if (!C.zf) goto L_118e22dc;
  /* 118e2290 cmp dword ptr [esi + 0x1845], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1845))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2296 je 0x118e22dc */
  if (C.zf) goto L_118e22dc;
  /* 118e2298 mov al, byte ptr [esi + 0x184d] */
  AL = (r8((uint32_t)(ESI + 0x184d)));
  /* 118e229e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e22a0 je 0x118e22c8 */
  if (C.zf) goto L_118e22c8;
  /* 118e22a2 push 0x118f10b0 */
  push32((uint32_t)(0x118f10b0u));
  /* 118e22a7 call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e22adu);
  /* 118e22ad lea eax, [esi + 0x1862] */
  EAX = ((uint32_t)(ESI + 0x1862));
  /* 118e22b3 lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 118e22b6 push eax */
  push32((uint32_t)(EAX));
  /* 118e22b7 push ecx */
  push32((uint32_t)(ECX));
  /* 118e22b8 mov byte ptr [esi + 0x184d], 0 */
  w8((uint32_t)(ESI + 0x184d), (0x0u));
  /* 118e22bf call dword ptr [0x118ef1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1bc))), 0x118e22c5u);
  /* 118e22c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e22c8:;
  /* 118e22c8 mov dl, byte ptr [esi + 0x1852] */
  DL = (r8((uint32_t)(ESI + 0x1852)));
  /* 118e22ce push edx */
  push32((uint32_t)(EDX));
  /* 118e22cf call dword ptr [0x118ef188] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef188))), 0x118e22d5u);
  /* 118e22d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e22d8 pop edi */
  EDI = (pop32());
  /* 118e22d9 pop esi */
  ESI = (pop32());
  /* 118e22da pop ecx */
  ECX = (pop32());
  /* 118e22db ret  */
  ESPCHK(0x118e2260u, _esp0);
  ESP += 4; return;
L_118e22dc:;
  /* 118e22dc push ebx */
  push32((uint32_t)(EBX));
  /* 118e22dd push ebp */
  push32((uint32_t)(EBP));
  /* 118e22de lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 118e22e1 lea ebp, [esi + 0x1839] */
  EBP = ((uint32_t)(ESI + 0x1839));
  /* 118e22e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118e22e9 push edi */
  push32((uint32_t)(EDI));
  /* 118e22ea push ebp */
  push32((uint32_t)(EBP));
  /* 118e22eb call dword ptr [0x118ef1e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e4))), 0x118e22f1u);
  /* 118e22f1 mov al, byte ptr [esi + 0x1852] */
  AL = (r8((uint32_t)(ESI + 0x1852)));
  /* 118e22f7 push eax */
  push32((uint32_t)(EAX));
  /* 118e22f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e22fa push ebp */
  push32((uint32_t)(EBP));
  /* 118e22fb call dword ptr [0x118ef18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef18c))), 0x118e2301u);
  /* 118e2301 mov eax, dword ptr [esi + 0x1845] */
  EAX = (r32((uint32_t)(ESI + 0x1845)));
  /* 118e2307 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e230a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e230d ja 0x118e24de */
  if ((!C.cf&&!C.zf)) goto L_118e24de;
  /* 118e2313 jmp dword ptr [eax*4 + 0x118e2574] */
  switch (EAX) {
    case 0: goto L_118e237e;
    case 1: goto L_118e23fb;
    case 2: goto L_118e2440;
    case 3: goto L_118e231a;
    default: x86_unimpl("switch@0x118e2313 out of table"); return;
  }
L_118e231a:;
  /* 118e231a mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 118e2320 push edi */
  push32((uint32_t)(EDI));
  /* 118e2321 mov ecx, eax */
  ECX = (EAX);
  /* 118e2323 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118e2326 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2328 lea edx, [ecx*2 + 0x118f57d9] */
  EDX = ((uint32_t)(ECX*2 + 0x118f57d9));
  /* 118e232f push edx */
  push32((uint32_t)(EDX));
  /* 118e2330 call dword ptr [0x118ef1f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f8))), 0x118e2336u);
  /* 118e2336 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e233b je 0x118e234e */
  if (C.zf) goto L_118e234e;
  /* 118e233d mov ecx, esi */
  ECX = (ESI);
  /* 118e233f call 0x118e21a0 */
  push32(0x118e2344u); f_118e21a0();
  /* 118e2344 mov dword ptr [esi + 0x1845], 0 */
  w32((uint32_t)(ESI + 0x1845), (0x0u));
L_118e234e:;
  /* 118e234e mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 118e2354 mov ecx, eax */
  ECX = (EAX);
  /* 118e2356 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118e2359 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e235b lea ecx, [ecx*2 + 0x118f57a0] */
  ECX = ((uint32_t)(ECX*2 + 0x118f57a0));
  /* 118e2362 call 0x118e1da0 */
  push32(0x118e2367u); f_118e1da0();
  /* 118e2367 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2369 jne 0x118e24de */
  if (!C.zf) goto L_118e24de;
  /* 118e236f mov dword ptr [esi + 0x1845], 0 */
  w32((uint32_t)(ESI + 0x1845), (0x0u));
  /* 118e2379 jmp 0x118e24de */
  goto L_118e24de;
L_118e237e:;
  /* 118e237e mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 118e2384 push edi */
  push32((uint32_t)(EDI));
  /* 118e2385 mov edx, eax */
  EDX = (EAX);
  /* 118e2387 shl edx, 5 */
  EDX = (sh_shl((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 118e238a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e238c lea eax, [edx*2 + 0x118f57d9] */
  EAX = ((uint32_t)(EDX*2 + 0x118f57d9));
  /* 118e2393 push eax */
  push32((uint32_t)(EAX));
  /* 118e2394 call dword ptr [0x118ef1f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f8))), 0x118e239au);
  /* 118e239a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e239d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e239f jne 0x118e24de */
  if (!C.zf) goto L_118e24de;
  /* 118e23a5 mov ecx, dword ptr [esi + 0x1841] */
  ECX = (r32((uint32_t)(ESI + 0x1841)));
  /* 118e23ab push ecx */
  push32((uint32_t)(ECX));
  /* 118e23ac call 0x118e10e0 */
  push32(0x118e23b1u); f_118e10e0();
  /* 118e23b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e23b3 push edi */
  push32((uint32_t)(EDI));
  /* 118e23b4 call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e23bau);
  /* 118e23ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e23bd push 0 */
  push32((uint32_t)(0x0u));
  /* 118e23bf call 0x118e47e8 */
  push32(0x118e23c4u); f_118e47e8();
  /* 118e23c4 push eax */
  push32((uint32_t)(EAX));
  /* 118e23c5 mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 118e23cb mov edx, eax */
  EDX = (EAX);
  /* 118e23cd mov cl, byte ptr [esi + 0x1841] */
  CL = (r8((uint32_t)(ESI + 0x1841)));
  /* 118e23d3 shl edx, 5 */
  EDX = (sh_shl((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 118e23d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e23d8 lea eax, [edx*2 + 0x118f57d9] */
  EAX = ((uint32_t)(EDX*2 + 0x118f57d9));
  /* 118e23df push eax */
  push32((uint32_t)(EAX));
  /* 118e23e0 push ecx */
  push32((uint32_t)(ECX));
  /* 118e23e1 call dword ptr [0x118ef1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f0))), 0x118e23e7u);
  /* 118e23e7 mov edx, dword ptr [esi + 0x1841] */
  EDX = (r32((uint32_t)(ESI + 0x1841)));
  /* 118e23ed push edx */
  push32((uint32_t)(EDX));
  /* 118e23ee call 0x118e1120 */
  push32(0x118e23f3u); f_118e1120();
  /* 118e23f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e23f6 jmp 0x118e24de */
  goto L_118e24de;
L_118e23fb:;
  /* 118e23fb lea eax, [esi + 0x71] */
  EAX = ((uint32_t)(ESI + 0x71));
  /* 118e23fe push edi */
  push32((uint32_t)(EDI));
  /* 118e23ff push eax */
  push32((uint32_t)(EAX));
  /* 118e2400 call dword ptr [0x118ef1f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f8))), 0x118e2406u);
  /* 118e2406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2409 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e240b je 0x118e24de */
  if (C.zf) goto L_118e24de;
  /* 118e2411 mov ecx, esi */
  ECX = (ESI);
  /* 118e2413 call 0x118e2030 */
  push32(0x118e2418u); f_118e2030();
  /* 118e2418 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e241a je 0x118e24de */
  if (C.zf) goto L_118e24de;
  /* 118e2420 mov dword ptr [esi + 0x1845], 2 */
  w32((uint32_t)(ESI + 0x1845), (0x2u));
  /* 118e242a call dword ptr [0x118ef1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1a0))), 0x118e2430u);
  /* 118e2430 add eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2435 mov dword ptr [esi + 0x1849], eax */
  w32((uint32_t)(ESI + 0x1849), (EAX));
  /* 118e243b jmp 0x118e24de */
  goto L_118e24de;
L_118e2440:;
  /* 118e2440 call dword ptr [0x118ef1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1a0))), 0x118e2446u);
  /* 118e2446 cmp eax, dword ptr [esi + 0x1849] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x1849))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e244c jle 0x118e24de */
  if ((C.zf||C.sf!=C.of)) goto L_118e24de;
  /* 118e2452 mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 118e2458 mov dword ptr [esi + 0x1845], 3 */
  w32((uint32_t)(ESI + 0x1845), (0x3u));
  /* 118e2462 mov ecx, eax */
  ECX = (EAX);
  /* 118e2464 lea ebx, [esi + 0xa9] */
  EBX = ((uint32_t)(ESI + 0xa9));
  /* 118e246a shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118e246d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e246f mov edx, dword ptr [ecx*2 + 0x118f57dd] */
  EDX = (r32((uint32_t)(ECX*2 + 0x118f57dd)));
  /* 118e2476 push edx */
  push32((uint32_t)(EDX));
  /* 118e2477 mov eax, dword ptr [ecx*2 + 0x118f57d9] */
  EAX = (r32((uint32_t)(ECX*2 + 0x118f57d9)));
  /* 118e247e mov ecx, ebx */
  ECX = (EBX);
  /* 118e2480 push eax */
  push32((uint32_t)(EAX));
  /* 118e2481 call 0x118e1830 */
  push32(0x118e2486u); f_118e1830();
  /* 118e2486 mov ecx, dword ptr [esi + 0x1841] */
  ECX = (r32((uint32_t)(ESI + 0x1841)));
  /* 118e248c push 1 */
  push32((uint32_t)(0x1u));
  /* 118e248e push ecx */
  push32((uint32_t)(ECX));
  /* 118e248f push esi */
  push32((uint32_t)(ESI));
  /* 118e2490 mov ecx, ebx */
  ECX = (EBX);
  /* 118e2492 call 0x118e29c0 */
  push32(0x118e2497u); f_118e29c0();
  /* 118e2497 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 118e249d mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 118e24a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e24a7 jle 0x118e24de */
  if ((C.zf||C.sf!=C.of)) goto L_118e24de;
  /* 118e24a9 lea ebp, [esi + 0x3e5] */
  EBP = ((uint32_t)(ESI + 0x3e5));
L_118e24af:;
  /* 118e24af mov ecx, ebp */
  ECX = (EBP);
  /* 118e24b1 call 0x118e1da0 */
  push32(0x118e24b6u); f_118e1da0();
  /* 118e24b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e24b8 je 0x118e24c8 */
  if (C.zf) goto L_118e24c8;
  /* 118e24ba mov edx, dword ptr [ebp] */
  EDX = (r32((uint32_t)(EBP)));
  /* 118e24bd push 1 */
  push32((uint32_t)(0x1u));
  /* 118e24bf push edx */
  push32((uint32_t)(EDX));
  /* 118e24c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e24c1 mov ecx, ebx */
  ECX = (EBX);
  /* 118e24c3 call 0x118e29c0 */
  push32(0x118e24c8u); f_118e29c0();
L_118e24c8:;
  /* 118e24c8 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e24cc mov ecx, dword ptr [esi + 0x1835] */
  ECX = (r32((uint32_t)(ESI + 0x1835)));
  /* 118e24d2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e24d3 add ebp, 0x34 */
  { uint32_t _a=(EBP),_b=(0x34u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e24d6 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e24d8 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 118e24dc jl 0x118e24af */
  if ((C.sf!=C.of)) goto L_118e24af;
L_118e24de:;
  /* 118e24de mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e24e0 push eax */
  push32((uint32_t)(EAX));
  /* 118e24e1 call 0x118e10e0 */
  push32(0x118e24e6u); f_118e10e0();
  /* 118e24e6 mov ecx, dword ptr [esi + 0x1841] */
  ECX = (r32((uint32_t)(ESI + 0x1841)));
  /* 118e24ec push ecx */
  push32((uint32_t)(ECX));
  /* 118e24ed call 0x118e10e0 */
  push32(0x118e24f2u); f_118e10e0();
  /* 118e24f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e24f4 push edi */
  push32((uint32_t)(EDI));
  /* 118e24f5 call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e24fbu);
  /* 118e24fb mov eax, dword ptr [esi + 0x3e1] */
  EAX = (r32((uint32_t)(ESI + 0x3e1)));
  /* 118e2501 push edi */
  push32((uint32_t)(EDI));
  /* 118e2502 mov edx, eax */
  EDX = (EAX);
  /* 118e2504 shl edx, 5 */
  EDX = (sh_shl((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 118e2507 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2509 lea eax, [edx*2 + 0x118f57d9] */
  EAX = ((uint32_t)(EDX*2 + 0x118f57d9));
  /* 118e2510 push eax */
  push32((uint32_t)(EAX));
  /* 118e2511 call dword ptr [0x118ef1f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f8))), 0x118e2517u);
  /* 118e2517 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e251a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e251c pop ebp */
  EBP = (pop32());
  /* 118e251d pop ebx */
  EBX = (pop32());
  /* 118e251e je 0x118e252a */
  if (C.zf) goto L_118e252a;
  /* 118e2520 mov eax, dword ptr [esi + 0x1845] */
  EAX = (r32((uint32_t)(ESI + 0x1845)));
  /* 118e2526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e2528 je 0x118e2546 */
  if (C.zf) goto L_118e2546;
L_118e252a:;
  /* 118e252a mov eax, dword ptr [esi + 0x1845] */
  EAX = (r32((uint32_t)(ESI + 0x1845)));
  /* 118e2530 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2533 je 0x118e2546 */
  if (C.zf) goto L_118e2546;
  /* 118e2535 cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2538 je 0x118e2546 */
  if (C.zf) goto L_118e2546;
  /* 118e253a mov cl, byte ptr [esi + 0x1841] */
  CL = (r8((uint32_t)(ESI + 0x1841)));
  /* 118e2540 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 118e2542 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2543 push edx */
  push32((uint32_t)(EDX));
  /* 118e2544 jmp 0x118e2550 */
  goto L_118e2550;
L_118e2546:;
  /* 118e2546 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e2548 mov cl, byte ptr [esi + 0x1841] */
  CL = (r8((uint32_t)(ESI + 0x1841)));
  /* 118e254e push eax */
  push32((uint32_t)(EAX));
  /* 118e254f push ecx */
  push32((uint32_t)(ECX));
L_118e2550:;
  /* 118e2550 call dword ptr [0x118ef1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1c8))), 0x118e2556u);
  /* 118e2556 mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 118e2558 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e255b push edx */
  push32((uint32_t)(EDX));
  /* 118e255c call 0x118e1120 */
  push32(0x118e2561u); f_118e1120();
  /* 118e2561 mov eax, dword ptr [esi + 0x1841] */
  EAX = (r32((uint32_t)(ESI + 0x1841)));
  /* 118e2567 push eax */
  push32((uint32_t)(EAX));
  /* 118e2568 call 0x118e1120 */
  push32(0x118e256du); f_118e1120();
  /* 118e256d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2570 pop edi */
  EDI = (pop32());
  /* 118e2571 pop esi */
  ESI = (pop32());
  /* 118e2572 pop ecx */
  ECX = (pop32());
  /* 118e2573 ret  */
  ESPCHK(0x118e2260u, _esp0);
  ESP += 4; return;
}

/* FUN_10002590 @ 0x118e2590 (106 bytes, 40 insns) */
void f_118e2590(void) {
  FTRACE(0x118e2590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2590 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2591 push ebx */
  push32((uint32_t)(EBX));
  /* 118e2592 mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 118e2596 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2597 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 118e259b push esi */
  push32((uint32_t)(ESI));
  /* 118e259c push edi */
  push32((uint32_t)(EDI));
  /* 118e259d mov edi, ecx */
  EDI = (ECX);
  /* 118e259f mov dword ptr [esp + 0x10], 0x64 */
  w32((uint32_t)(ESP + 0x10), (0x64u));
  /* 118e25a7 lea esi, [edi + 0x3e5] */
  ESI = ((uint32_t)(EDI + 0x3e5));
L_118e25ad:;
  /* 118e25ad push 0x118f10c0 */
  push32((uint32_t)(0x118f10c0u));
  /* 118e25b2 mov ecx, esi */
  ECX = (ESI);
  /* 118e25b4 call 0x118e1d80 */
  push32(0x118e25b9u); f_118e1d80();
  /* 118e25b9 mov eax, dword ptr [edi + 0x1841] */
  EAX = (r32((uint32_t)(EDI + 0x1841)));
  /* 118e25bf mov ecx, esi */
  ECX = (ESI);
  /* 118e25c1 push eax */
  push32((uint32_t)(EAX));
  /* 118e25c2 call 0x118e1d00 */
  push32(0x118e25c7u); f_118e1d00();
  /* 118e25c7 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 118e25cb mov edx, dword ptr [esp + 0x20] */
  EDX = (r32((uint32_t)(ESP + 0x20)));
  /* 118e25cf mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 118e25d3 push ebx */
  push32((uint32_t)(EBX));
  /* 118e25d4 push ebp */
  push32((uint32_t)(EBP));
  /* 118e25d5 push ecx */
  push32((uint32_t)(ECX));
  /* 118e25d6 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 118e25da push edx */
  push32((uint32_t)(EDX));
  /* 118e25db push eax */
  push32((uint32_t)(EAX));
  /* 118e25dc push ecx */
  push32((uint32_t)(ECX));
  /* 118e25dd mov ecx, esi */
  ECX = (ESI);
  /* 118e25df call 0x118e1d50 */
  push32(0x118e25e4u); f_118e1d50();
  /* 118e25e4 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e25e8 add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e25eb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e25ec mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 118e25f0 jne 0x118e25ad */
  if (!C.zf) goto L_118e25ad;
  /* 118e25f2 pop edi */
  EDI = (pop32());
  /* 118e25f3 pop esi */
  ESI = (pop32());
  /* 118e25f4 pop ebp */
  EBP = (pop32());
  /* 118e25f5 pop ebx */
  EBX = (pop32());
  /* 118e25f6 pop ecx */
  ECX = (pop32());
  /* 118e25f7 ret 0x18 */
  ESPCHK(0x118e2590u, _esp0);
  ESP += 28; return;
}

/* FUN_10002600 @ 0x118e2600 (78 bytes, 25 insns) */
void f_118e2600(void) {
  FTRACE(0x118e2600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2600 push esi */
  push32((uint32_t)(ESI));
  /* 118e2601 mov esi, ecx */
  ESI = (ECX);
  /* 118e2603 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 118e2609 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e260c je 0x118e264a */
  if (C.zf) goto L_118e264a;
  /* 118e260e lea edx, [eax + eax*2] */
  EDX = ((uint32_t)(EAX + EAX*2));
  /* 118e2611 lea ecx, [esi + 0x1839] */
  ECX = ((uint32_t)(ESI + 0x1839));
  /* 118e2617 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2618 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 118e261b lea ecx, [esi + eax*4 + 0x3e5] */
  ECX = ((uint32_t)(ESI + EAX*4 + 0x3e5));
  /* 118e2622 call 0x118e1e90 */
  push32(0x118e2627u); f_118e1e90();
  /* 118e2627 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2629 je 0x118e263c */
  if (C.zf) goto L_118e263c;
  /* 118e262b mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 118e2631 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e2632 mov dword ptr [esi + 0x1835], eax */
  w32((uint32_t)(ESI + 0x1835), (EAX));
  /* 118e2638 mov al, 1 */
  AL = (0x1u);
  /* 118e263a pop esi */
  ESI = (pop32());
  /* 118e263b ret  */
  ESPCHK(0x118e2600u, _esp0);
  ESP += 4; return;
L_118e263c:;
  /* 118e263c push 0x118f108c */
  push32((uint32_t)(0x118f108cu));
  /* 118e2641 call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e2647u);
  /* 118e2647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e264a:;
  /* 118e264a xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118e264c pop esi */
  ESI = (pop32());
  /* 118e264d ret  */
  ESPCHK(0x118e2600u, _esp0);
  ESP += 4; return;
}

/* FUN_10002650 @ 0x118e2650 (150 bytes, 57 insns) */
void f_118e2650(void) {
  FTRACE(0x118e2650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2650 push esi */
  push32((uint32_t)(ESI));
  /* 118e2651 mov esi, ecx */
  ESI = (ECX);
  /* 118e2653 mov eax, dword ptr [esi + 0x1845] */
  EAX = (r32((uint32_t)(ESI + 0x1845)));
  /* 118e2659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e265b jne 0x118e2674 */
  if (!C.zf) goto L_118e2674;
  /* 118e265d call 0x118e20e0 */
  push32(0x118e2662u); f_118e20e0();
  /* 118e2662 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2664 jne 0x118e2678 */
  if (!C.zf) goto L_118e2678;
  /* 118e2666 push 0x118f108c */
  push32((uint32_t)(0x118f108cu));
  /* 118e266b call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e2671u);
  /* 118e2671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e2674:;
  /* 118e2674 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 118e2676 pop esi */
  ESI = (pop32());
  /* 118e2677 ret  */
  ESPCHK(0x118e2650u, _esp0);
  ESP += 4; return;
L_118e2678:;
  /* 118e2678 mov eax, dword ptr [esi + 0x75] */
  EAX = (r32((uint32_t)(ESI + 0x75)));
  /* 118e267b mov ecx, dword ptr [esi + 0x71] */
  ECX = (r32((uint32_t)(ESI + 0x71)));
  /* 118e267e push ebx */
  push32((uint32_t)(EBX));
  /* 118e267f push ebp */
  push32((uint32_t)(EBP));
  /* 118e2680 lea ebp, [esi + 0xa9] */
  EBP = ((uint32_t)(ESI + 0xa9));
  /* 118e2686 push eax */
  push32((uint32_t)(EAX));
  /* 118e2687 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2688 mov ecx, ebp */
  ECX = (EBP);
  /* 118e268a mov dword ptr [esi + 0x1845], 1 */
  w32((uint32_t)(ESI + 0x1845), (0x1u));
  /* 118e2694 call 0x118e2880 */
  push32(0x118e2699u); f_118e2880();
  /* 118e2699 mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 118e269b push 1 */
  push32((uint32_t)(0x1u));
  /* 118e269d push edx */
  push32((uint32_t)(EDX));
  /* 118e269e push esi */
  push32((uint32_t)(ESI));
  /* 118e269f mov ecx, ebp */
  ECX = (EBP);
  /* 118e26a1 call 0x118e28a0 */
  push32(0x118e26a6u); f_118e28a0();
  /* 118e26a6 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 118e26ac xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e26ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e26b0 jle 0x118e26e0 */
  if ((C.zf||C.sf!=C.of)) goto L_118e26e0;
  /* 118e26b2 push edi */
  push32((uint32_t)(EDI));
  /* 118e26b3 lea edi, [esi + 0x3e5] */
  EDI = ((uint32_t)(ESI + 0x3e5));
L_118e26b9:;
  /* 118e26b9 mov ecx, edi */
  ECX = (EDI);
  /* 118e26bb call 0x118e1da0 */
  push32(0x118e26c0u); f_118e1da0();
  /* 118e26c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e26c2 je 0x118e26d1 */
  if (C.zf) goto L_118e26d1;
  /* 118e26c4 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 118e26c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e26c8 push eax */
  push32((uint32_t)(EAX));
  /* 118e26c9 push edi */
  push32((uint32_t)(EDI));
  /* 118e26ca mov ecx, ebp */
  ECX = (EBP);
  /* 118e26cc call 0x118e28a0 */
  push32(0x118e26d1u); f_118e28a0();
L_118e26d1:;
  /* 118e26d1 mov eax, dword ptr [esi + 0x1835] */
  EAX = (r32((uint32_t)(ESI + 0x1835)));
  /* 118e26d7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 118e26d8 add edi, 0x34 */
  { uint32_t _a=(EDI),_b=(0x34u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e26db cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e26dd jl 0x118e26b9 */
  if ((C.sf!=C.of)) goto L_118e26b9;
  /* 118e26df pop edi */
  EDI = (pop32());
L_118e26e0:;
  /* 118e26e0 pop ebp */
  EBP = (pop32());
  /* 118e26e1 pop ebx */
  EBX = (pop32());
  /* 118e26e2 mov al, 1 */
  AL = (0x1u);
  /* 118e26e4 pop esi */
  ESI = (pop32());
  /* 118e26e5 ret  */
  ESPCHK(0x118e2650u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x118e26f0 (20 bytes, 8 insns) */
void f_118e26f0(void) {
  FTRACE(0x118e26f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e26f0 push esi */
  push32((uint32_t)(ESI));
  /* 118e26f1 mov esi, ecx */
  ESI = (ECX);
  /* 118e26f3 call 0x118e1e40 */
  push32(0x118e26f8u); f_118e1e40();
  /* 118e26f8 mov byte ptr [esi + 0x41], 0 */
  w8((uint32_t)(ESI + 0x41), (0x0u));
  /* 118e26fc mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 118e2700 mov eax, esi */
  EAX = (ESI);
  /* 118e2702 pop esi */
  ESI = (pop32());
  /* 118e2703 ret  */
  ESPCHK(0x118e26f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002710 @ 0x118e2710 (10 bytes, 3 insns) */
void f_118e2710(void) {
  FTRACE(0x118e2710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2710 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2714 mov dword ptr [ecx + 0x35], eax */
  w32((uint32_t)(ECX + 0x35), (EAX));
  /* 118e2717 ret 4 */
  ESPCHK(0x118e2710u, _esp0);
  ESP += 8; return;
}

/* FUN_10002720 @ 0x118e2720 (313 bytes, 111 insns) */
void f_118e2720(void) {
  FTRACE(0x118e2720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2720 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2721 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2722 push esi */
  push32((uint32_t)(ESI));
  /* 118e2723 mov esi, ecx */
  ESI = (ECX);
  /* 118e2725 mov ebp, dword ptr [0x118ef160] */
  EBP = (r32((uint32_t)(0x118ef160)));
  /* 118e272b push edi */
  push32((uint32_t)(EDI));
  /* 118e272c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e272e lea edi, [esi + 4] */
  EDI = ((uint32_t)(ESI + 0x4));
  /* 118e2731 mov byte ptr [esp + 0xc], al */
  w8((uint32_t)(ESP + 0xc), (AL));
  /* 118e2735 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e2739 push ecx */
  push32((uint32_t)(ECX));
  /* 118e273a push edi */
  push32((uint32_t)(EDI));
  /* 118e273b call ebp */
  call_ind((uint32_t)(EBP), 0x118e273du);
  /* 118e273d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2740 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e2742 je 0x118e274c */
  if (C.zf) goto L_118e274c;
  /* 118e2744 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 118e2746 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e2748 push edi */
  push32((uint32_t)(EDI));
  /* 118e2749 push edx */
  push32((uint32_t)(EDX));
  /* 118e274a jmp 0x118e2752 */
  goto L_118e2752;
L_118e274c:;
  /* 118e274c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e274e push 1 */
  push32((uint32_t)(0x1u));
  /* 118e2750 push edi */
  push32((uint32_t)(EDI));
  /* 118e2751 push eax */
  push32((uint32_t)(EAX));
L_118e2752:;
  /* 118e2752 call dword ptr [0x118ef170] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef170))), 0x118e2758u);
  /* 118e2758 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 118e275a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e275d push ecx */
  push32((uint32_t)(ECX));
  /* 118e275e push edi */
  push32((uint32_t)(EDI));
  /* 118e275f call dword ptr [0x118ef168] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef168))), 0x118e2765u);
  /* 118e2765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2768 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e276a jne 0x118e27ab */
  if (!C.zf) goto L_118e27ab;
  /* 118e276c mov al, byte ptr [esi + 0x41] */
  AL = (r8((uint32_t)(ESI + 0x41)));
  /* 118e276f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2771 je 0x118e2854 */
  if (C.zf) goto L_118e2854;
  /* 118e2777 mov byte ptr [esi + 0x41], 0 */
  w8((uint32_t)(ESI + 0x41), (0x0u));
  /* 118e277b mov esi, dword ptr [esi + 0x35] */
  ESI = (r32((uint32_t)(ESI + 0x35)));
  /* 118e277e push 0x118f10dc */
  push32((uint32_t)(0x118f10dcu));
  /* 118e2783 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 118e2786 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e2789 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e278c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e278f lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 118e2792 mov dword ptr [edx*2 + 0x118f746d], 5 */
  w32((uint32_t)(EDX*2 + 0x118f746d), (0x5u));
  /* 118e279d call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e27a3u);
  /* 118e27a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e27a6 pop edi */
  EDI = (pop32());
  /* 118e27a7 pop esi */
  ESI = (pop32());
  /* 118e27a8 pop ebp */
  EBP = (pop32());
  /* 118e27a9 pop ecx */
  ECX = (pop32());
  /* 118e27aa ret  */
  ESPCHK(0x118e2720u, _esp0);
  ESP += 4; return;
L_118e27ab:;
  /* 118e27ab mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e27ad mov byte ptr [esp + 0xc], al */
  w8((uint32_t)(ESP + 0xc), (AL));
  /* 118e27b1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e27b5 push ecx */
  push32((uint32_t)(ECX));
  /* 118e27b6 push edi */
  push32((uint32_t)(EDI));
  /* 118e27b7 call ebp */
  call_ind((uint32_t)(EBP), 0x118e27b9u);
  /* 118e27b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e27bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e27bf jg 0x118e2854 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e2854;
  /* 118e27c5 mov al, byte ptr [esi + 0x41] */
  AL = (r8((uint32_t)(ESI + 0x41)));
  /* 118e27c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e27ca jne 0x118e2836 */
  if (!C.zf) goto L_118e2836;
  /* 118e27cc mov eax, dword ptr [esi + 0x35] */
  EAX = (r32((uint32_t)(ESI + 0x35)));
  /* 118e27cf mov byte ptr [esi + 0x41], 1 */
  w8((uint32_t)(ESI + 0x41), (0x1u));
  /* 118e27d3 push 0x118f10cc */
  push32((uint32_t)(0x118f10ccu));
  /* 118e27d8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e27db lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e27de lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e27e1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e27e4 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 118e27e7 mov dword ptr [edx*2 + 0x118f746d], 0 */
  w32((uint32_t)(EDX*2 + 0x118f746d), (0x0u));
  /* 118e27f2 call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e27f8u);
  /* 118e27f8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e27fa push eax */
  push32((uint32_t)(EAX));
  /* 118e27fb call 0x118e10e0 */
  push32(0x118e2800u); f_118e10e0();
  /* 118e2800 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 118e2802 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e2804 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2805 push edi */
  push32((uint32_t)(EDI));
  /* 118e2806 call dword ptr [0x118ef16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef16c))), 0x118e280cu);
  /* 118e280c mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 118e280e lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 118e2811 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e2813 push edi */
  push32((uint32_t)(EDI));
  /* 118e2814 push edx */
  push32((uint32_t)(EDX));
  /* 118e2815 call dword ptr [0x118ef1d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d4))), 0x118e281bu);
  /* 118e281b push 0x190 */
  push32((uint32_t)(0x190u));
  /* 118e2820 lea eax, [esi + 0x39] */
  EAX = ((uint32_t)(ESI + 0x39));
  /* 118e2823 push edi */
  push32((uint32_t)(EDI));
  /* 118e2824 push eax */
  push32((uint32_t)(EAX));
  /* 118e2825 call dword ptr [0x118ef1e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e4))), 0x118e282bu);
  /* 118e282b mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118e282d push ecx */
  push32((uint32_t)(ECX));
  /* 118e282e call 0x118e1120 */
  push32(0x118e2833u); f_118e1120();
  /* 118e2833 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e2836:;
  /* 118e2836 mov esi, dword ptr [esi + 0x35] */
  ESI = (r32((uint32_t)(ESI + 0x35)));
  /* 118e2839 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 118e283c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e283f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e2842 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e2845 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 118e2848 lea ecx, [edx*2 + 0x118f5c28] */
  ECX = ((uint32_t)(EDX*2 + 0x118f5c28));
  /* 118e284f call 0x118e1da0 */
  push32(0x118e2854u); f_118e1da0();
L_118e2854:;
  /* 118e2854 pop edi */
  EDI = (pop32());
  /* 118e2855 pop esi */
  ESI = (pop32());
  /* 118e2856 pop ebp */
  EBP = (pop32());
  /* 118e2857 pop ecx */
  ECX = (pop32());
  /* 118e2858 ret  */
  ESPCHK(0x118e2720u, _esp0);
  ESP += 4; return;
}

/* FUN_10002860 @ 0x118e2860 (25 bytes, 8 insns) */
void f_118e2860(void) {
  FTRACE(0x118e2860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2860 push esi */
  push32((uint32_t)(ESI));
  /* 118e2861 mov esi, ecx */
  ESI = (ECX);
  /* 118e2863 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 118e2866 call 0x118e1ae0 */
  push32(0x118e286bu); f_118e1ae0();
  /* 118e286b mov dword ptr [esi + 0x334], 0 */
  w32((uint32_t)(ESI + 0x334), (0x0u));
  /* 118e2875 mov eax, esi */
  EAX = (ESI);
  /* 118e2877 pop esi */
  ESI = (pop32());
  /* 118e2878 ret  */
  ESPCHK(0x118e2860u, _esp0);
  ESP += 4; return;
}

/* FUN_10002880 @ 0x118e2880 (17 bytes, 5 insns) */
void f_118e2880(void) {
  FTRACE(0x118e2880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2880 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2884 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e2888 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 118e288b mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 118e288e ret 8 */
  ESPCHK(0x118e2880u, _esp0);
  ESP += 12; return;
}

/* FUN_100028a0 @ 0x118e28a0 (284 bytes, 102 insns) */
void f_118e28a0(void) {
  FTRACE(0x118e28a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e28a0 mov al, byte ptr [esp + 0xc] */
  AL = (r8((uint32_t)(ESP + 0xc)));
  /* 118e28a4 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e28a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e28a9 push ebx */
  push32((uint32_t)(EBX));
  /* 118e28aa mov ebx, ecx */
  EBX = (ECX);
  /* 118e28ac je 0x118e299b */
  if (C.zf) goto L_118e299b;
  /* 118e28b2 push ebp */
  push32((uint32_t)(EBP));
  /* 118e28b3 mov ebp, dword ptr [esp + 0x18] */
  EBP = (r32((uint32_t)(ESP + 0x18)));
  /* 118e28b7 push esi */
  push32((uint32_t)(ESI));
  /* 118e28b8 push edi */
  push32((uint32_t)(EDI));
  /* 118e28b9 push ebp */
  push32((uint32_t)(EBP));
  /* 118e28ba call 0x118e10e0 */
  push32(0x118e28bfu); f_118e10e0();
  /* 118e28bf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 118e28c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e28c5 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e28c8 push eax */
  push32((uint32_t)(EAX));
  /* 118e28c9 call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e28cfu);
  /* 118e28cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e28d2 lea edi, [ebx + 0x10] */
  EDI = ((uint32_t)(EBX + 0x10));
  /* 118e28d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e28d7 call 0x118e47e8 */
  push32(0x118e28dcu); f_118e47e8();
  /* 118e28dc push eax */
  push32((uint32_t)(EAX));
  /* 118e28dd push 0 */
  push32((uint32_t)(0x0u));
  /* 118e28df mov ecx, edi */
  ECX = (EDI);
  /* 118e28e1 call 0x118e1b20 */
  push32(0x118e28e6u); f_118e1b20();
  /* 118e28e6 push eax */
  push32((uint32_t)(EAX));
  /* 118e28e7 push ebp */
  push32((uint32_t)(EBP));
  /* 118e28e8 call dword ptr [0x118ef1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f0))), 0x118e28eeu);
  /* 118e28ee mov eax, dword ptr [ebx + 0x330] */
  EAX = (r32((uint32_t)(EBX + 0x330)));
  /* 118e28f4 mov esi, 1 */
  ESI = (0x1u);
  /* 118e28f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e28fc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e28fe jle 0x118e297c */
  if ((C.zf||C.sf!=C.of)) goto L_118e297c;
L_118e2900:;
  /* 118e2900 lea ecx, [esp + 0x20] */
  ECX = ((uint32_t)(ESP + 0x20));
  /* 118e2904 lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 118e2908 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2909 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 118e290c push edx */
  push32((uint32_t)(EDX));
  /* 118e290d push eax */
  push32((uint32_t)(EAX));
  /* 118e290e mov ecx, edi */
  ECX = (EDI);
  /* 118e2910 call 0x118e1b20 */
  push32(0x118e2915u); f_118e1b20();
  /* 118e2915 push eax */
  push32((uint32_t)(EAX));
  /* 118e2916 call dword ptr [0x118ef1e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e8))), 0x118e291cu);
  /* 118e291c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e291f lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 118e2923 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 118e2927 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2928 push edx */
  push32((uint32_t)(EDX));
  /* 118e2929 push esi */
  push32((uint32_t)(ESI));
  /* 118e292a mov ecx, edi */
  ECX = (EDI);
  /* 118e292c call 0x118e1b20 */
  push32(0x118e2931u); f_118e1b20();
  /* 118e2931 push eax */
  push32((uint32_t)(EAX));
  /* 118e2932 call dword ptr [0x118ef1e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e8))), 0x118e2938u);
  /* 118e2938 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 118e293c mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 118e2940 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 118e2944 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e2946 mov edx, dword ptr [esp + 0x20] */
  EDX = (r32((uint32_t)(ESP + 0x20)));
  /* 118e294a push eax */
  push32((uint32_t)(EAX));
  /* 118e294b sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e294d push ecx */
  push32((uint32_t)(ECX));
  /* 118e294e call 0x118e1000 */
  push32(0x118e2953u); f_118e1000();
  /* 118e2953 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2956 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e295b mov ecx, edi */
  ECX = (EDI);
  /* 118e295d push 2 */
  push32((uint32_t)(0x2u));
  /* 118e295f push eax */
  push32((uint32_t)(EAX));
  /* 118e2960 push esi */
  push32((uint32_t)(ESI));
  /* 118e2961 call 0x118e1b20 */
  push32(0x118e2966u); f_118e1b20();
  /* 118e2966 push eax */
  push32((uint32_t)(EAX));
  /* 118e2967 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2968 call dword ptr [0x118ef1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f0))), 0x118e296eu);
  /* 118e296e mov eax, dword ptr [ebx + 0x330] */
  EAX = (r32((uint32_t)(EBX + 0x330)));
  /* 118e2974 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2977 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e2978 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e297a jl 0x118e2900 */
  if ((C.sf!=C.of)) goto L_118e2900;
L_118e297c:;
  /* 118e297c push 2 */
  push32((uint32_t)(0x2u));
  /* 118e297e call 0x118e47e8 */
  push32(0x118e2983u); f_118e47e8();
  /* 118e2983 lea edx, [ebx + 8] */
  EDX = ((uint32_t)(EBX + 0x8));
  /* 118e2986 push eax */
  push32((uint32_t)(EAX));
  /* 118e2987 push edx */
  push32((uint32_t)(EDX));
  /* 118e2988 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2989 call dword ptr [0x118ef1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f0))), 0x118e298fu);
  /* 118e298f push ebp */
  push32((uint32_t)(EBP));
  /* 118e2990 call 0x118e1120 */
  push32(0x118e2995u); f_118e1120();
  /* 118e2995 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2998 pop edi */
  EDI = (pop32());
  /* 118e2999 pop esi */
  ESI = (pop32());
  /* 118e299a pop ebp */
  EBP = (pop32());
L_118e299b:;
  /* 118e299b mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e299f add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e29a2 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e29a5 push eax */
  push32((uint32_t)(EAX));
  /* 118e29a6 push ebx */
  push32((uint32_t)(EBX));
  /* 118e29a7 call dword ptr [0x118ef1f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f8))), 0x118e29adu);
  /* 118e29ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e29b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e29b2 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 118e29b5 pop ebx */
  EBX = (pop32());
  /* 118e29b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e29b9 ret 0xc */
  ESPCHK(0x118e28a0u, _esp0);
  ESP += 16; return;
}

/* FUN_100029c0 @ 0x118e29c0 (277 bytes, 103 insns) */
void f_118e29c0(void) {
  FTRACE(0x118e29c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e29c0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e29c3 mov al, byte ptr [esp + 0x18] */
  AL = (r8((uint32_t)(ESP + 0x18)));
  /* 118e29c7 push ebp */
  push32((uint32_t)(EBP));
  /* 118e29c8 mov ebp, ecx */
  EBP = (ECX);
  /* 118e29ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e29cc mov dword ptr [esp + 0xc], ebp */
  w32((uint32_t)(ESP + 0xc), (EBP));
  /* 118e29d0 je 0x118e2ab7 */
  if (C.zf) goto L_118e2ab7;
  /* 118e29d6 push ebx */
  push32((uint32_t)(EBX));
  /* 118e29d7 mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 118e29db push esi */
  push32((uint32_t)(ESI));
  /* 118e29dc push edi */
  push32((uint32_t)(EDI));
  /* 118e29dd push ebx */
  push32((uint32_t)(EBX));
  /* 118e29de call 0x118e10e0 */
  push32(0x118e29e3u); f_118e10e0();
  /* 118e29e3 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 118e29e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e29e9 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e29ec push eax */
  push32((uint32_t)(EAX));
  /* 118e29ed call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e29f3u);
  /* 118e29f3 mov esi, dword ptr [ebp + 0x330] */
  ESI = (r32((uint32_t)(EBP + 0x330)));
  /* 118e29f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e29fc dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e29fd lea edi, [ebp + 0x10] */
  EDI = ((uint32_t)(EBP + 0x10));
  /* 118e2a00 mov eax, esi */
  EAX = (ESI);
  /* 118e2a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e2a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e2a06 push eax */
  push32((uint32_t)(EAX));
  /* 118e2a07 mov ecx, edi */
  ECX = (EDI);
  /* 118e2a09 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e2a0a call 0x118e1b20 */
  push32(0x118e2a0fu); f_118e1b20();
  /* 118e2a0f push eax */
  push32((uint32_t)(EAX));
  /* 118e2a10 push ebx */
  push32((uint32_t)(EBX));
  /* 118e2a11 call dword ptr [0x118ef1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f0))), 0x118e2a17u);
  /* 118e2a17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2a1a cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2a1d jle 0x118e2a9b */
  if ((C.zf||C.sf!=C.of)) goto L_118e2a9b;
  /* 118e2a1f lea ebp, [esi + 1] */
  EBP = ((uint32_t)(ESI + 0x1));
L_118e2a22:;
  /* 118e2a22 lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 118e2a26 lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 118e2a2a push ecx */
  push32((uint32_t)(ECX));
  /* 118e2a2b push edx */
  push32((uint32_t)(EDX));
  /* 118e2a2c push ebp */
  push32((uint32_t)(EBP));
  /* 118e2a2d mov ecx, edi */
  ECX = (EDI);
  /* 118e2a2f call 0x118e1b20 */
  push32(0x118e2a34u); f_118e1b20();
  /* 118e2a34 push eax */
  push32((uint32_t)(EAX));
  /* 118e2a35 call dword ptr [0x118ef1e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e8))), 0x118e2a3bu);
  /* 118e2a3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2a3e lea eax, [esp + 0x28] */
  EAX = ((uint32_t)(ESP + 0x28));
  /* 118e2a42 lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 118e2a46 push eax */
  push32((uint32_t)(EAX));
  /* 118e2a47 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2a48 push esi */
  push32((uint32_t)(ESI));
  /* 118e2a49 mov ecx, edi */
  ECX = (EDI);
  /* 118e2a4b call 0x118e1b20 */
  push32(0x118e2a50u); f_118e1b20();
  /* 118e2a50 push eax */
  push32((uint32_t)(EAX));
  /* 118e2a51 call dword ptr [0x118ef1e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e8))), 0x118e2a57u);
  /* 118e2a57 mov edx, dword ptr [esp + 0x34] */
  EDX = (r32((uint32_t)(ESP + 0x34)));
  /* 118e2a5b mov ecx, dword ptr [esp + 0x30] */
  ECX = (r32((uint32_t)(ESP + 0x30)));
  /* 118e2a5f mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 118e2a63 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e2a65 push edx */
  push32((uint32_t)(EDX));
  /* 118e2a66 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 118e2a6a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e2a6c push eax */
  push32((uint32_t)(EAX));
  /* 118e2a6d call 0x118e1000 */
  push32(0x118e2a72u); f_118e1000();
  /* 118e2a72 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2a75 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e2a7a mov ecx, edi */
  ECX = (EDI);
  /* 118e2a7c push 2 */
  push32((uint32_t)(0x2u));
  /* 118e2a7e push eax */
  push32((uint32_t)(EAX));
  /* 118e2a7f push esi */
  push32((uint32_t)(ESI));
  /* 118e2a80 call 0x118e1b20 */
  push32(0x118e2a85u); f_118e1b20();
  /* 118e2a85 push eax */
  push32((uint32_t)(EAX));
  /* 118e2a86 push ebx */
  push32((uint32_t)(EBX));
  /* 118e2a87 call dword ptr [0x118ef1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f0))), 0x118e2a8du);
  /* 118e2a8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2a90 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118e2a91 dec ebp */
  { uint32_t _r=(EBP)-1; EBP = (_r); fl_dec(_r,32); }
  /* 118e2a92 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2a95 jg 0x118e2a22 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e2a22;
  /* 118e2a97 mov ebp, dword ptr [esp + 0x18] */
  EBP = (r32((uint32_t)(ESP + 0x18)));
L_118e2a9b:;
  /* 118e2a9b push 2 */
  push32((uint32_t)(0x2u));
  /* 118e2a9d call 0x118e47e8 */
  push32(0x118e2aa2u); f_118e47e8();
  /* 118e2aa2 push eax */
  push32((uint32_t)(EAX));
  /* 118e2aa3 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2aa4 push ebx */
  push32((uint32_t)(EBX));
  /* 118e2aa5 call dword ptr [0x118ef1f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f0))), 0x118e2aabu);
  /* 118e2aab push ebx */
  push32((uint32_t)(EBX));
  /* 118e2aac call 0x118e1120 */
  push32(0x118e2ab1u); f_118e1120();
  /* 118e2ab1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2ab4 pop edi */
  EDI = (pop32());
  /* 118e2ab5 pop esi */
  ESI = (pop32());
  /* 118e2ab6 pop ebx */
  EBX = (pop32());
L_118e2ab7:;
  /* 118e2ab7 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e2abb add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2abe push ecx */
  push32((uint32_t)(ECX));
  /* 118e2abf push ebp */
  push32((uint32_t)(EBP));
  /* 118e2ac0 call dword ptr [0x118ef1f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f8))), 0x118e2ac6u);
  /* 118e2ac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2ac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e2acb setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 118e2ace pop ebp */
  EBP = (pop32());
  /* 118e2acf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2ad2 ret 0xc */
  ESPCHK(0x118e29c0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002ae0 @ 0x118e2ae0 (162 bytes, 58 insns) */
void f_118e2ae0(void) {
  FTRACE(0x118e2ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2ae0 push ebx */
  push32((uint32_t)(EBX));
  /* 118e2ae1 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2ae2 push esi */
  push32((uint32_t)(ESI));
  /* 118e2ae3 push edi */
  push32((uint32_t)(EDI));
  /* 118e2ae4 mov esi, ecx */
  ESI = (ECX);
  /* 118e2ae6 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118e2ae8 push esi */
  push32((uint32_t)(ESI));
  /* 118e2ae9 call dword ptr [0x118ef184] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef184))), 0x118e2aefu);
  /* 118e2aef mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 118e2af3 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 118e2af7 lea ebx, [esi + 4] */
  EBX = ((uint32_t)(ESI + 0x4));
  /* 118e2afa push ecx */
  push32((uint32_t)(ECX));
  /* 118e2afb push ebx */
  push32((uint32_t)(EBX));
  /* 118e2afc mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 118e2afe call dword ptr [0x118ef1cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1cc))), 0x118e2b04u);
  /* 118e2b04 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 118e2b08 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 118e2b0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2b0d cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2b0f je 0x118e2b27 */
  if (C.zf) goto L_118e2b27;
  /* 118e2b11 lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 118e2b14 push eax */
  push32((uint32_t)(EAX));
  /* 118e2b15 push edi */
  push32((uint32_t)(EDI));
  /* 118e2b16 call dword ptr [0x118ef1b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b8))), 0x118e2b1cu);
  /* 118e2b1c push edi */
  push32((uint32_t)(EDI));
  /* 118e2b1d push ebx */
  push32((uint32_t)(EBX));
  /* 118e2b1e call dword ptr [0x118ef15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef15c))), 0x118e2b24u);
  /* 118e2b24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e2b27:;
  /* 118e2b27 mov edi, dword ptr [0x118ef1d0] */
  EDI = (r32((uint32_t)(0x118ef1d0)));
  /* 118e2b2d lea edx, [esi + 0x14] */
  EDX = ((uint32_t)(ESI + 0x14));
  /* 118e2b30 push edx */
  push32((uint32_t)(EDX));
  /* 118e2b31 call edi */
  call_ind((uint32_t)(EDI), 0x118e2b33u);
  /* 118e2b33 lea eax, [esi + 0x1c] */
  EAX = ((uint32_t)(ESI + 0x1c));
  /* 118e2b36 push eax */
  push32((uint32_t)(EAX));
  /* 118e2b37 call edi */
  call_ind((uint32_t)(EDI), 0x118e2b39u);
  /* 118e2b39 lea ecx, [esi + 0x6c] */
  ECX = ((uint32_t)(ESI + 0x6c));
  /* 118e2b3c push ecx */
  push32((uint32_t)(ECX));
  /* 118e2b3d call edi */
  call_ind((uint32_t)(EDI), 0x118e2b3fu);
  /* 118e2b3f mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 118e2b43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2b46 mov eax, 1 */
  EAX = (0x1u);
  /* 118e2b4b mov dword ptr [esi + 0x30], ebp */
  w32((uint32_t)(ESI + 0x30), (EBP));
  /* 118e2b4e mov dword ptr [esi + 0x34], ebp */
  w32((uint32_t)(ESI + 0x34), (EBP));
  /* 118e2b51 mov dword ptr [esi + 0x38], 0x3c */
  w32((uint32_t)(ESI + 0x38), (0x3cu));
  /* 118e2b58 mov dword ptr [esi + 0x44], ebp */
  w32((uint32_t)(ESI + 0x44), (EBP));
  /* 118e2b5b mov dword ptr [esi + 0x48], ebp */
  w32((uint32_t)(ESI + 0x48), (EBP));
  /* 118e2b5e mov dword ptr [esi + 0x4c], 0x78 */
  w32((uint32_t)(ESI + 0x4c), (0x78u));
  /* 118e2b65 mov dword ptr [esi + 0x54], ebp */
  w32((uint32_t)(ESI + 0x54), (EBP));
  /* 118e2b68 mov dword ptr [esi + 0x50], eax */
  w32((uint32_t)(ESI + 0x50), (EAX));
  /* 118e2b6b mov dword ptr [esi + 0x58], 0xa */
  w32((uint32_t)(ESI + 0x58), (0xau));
  /* 118e2b72 mov dword ptr [esi + 0x5c], eax */
  w32((uint32_t)(ESI + 0x5c), (EAX));
  /* 118e2b75 mov dword ptr [esi + 0x60], ebp */
  w32((uint32_t)(ESI + 0x60), (EBP));
  /* 118e2b78 mov dword ptr [esi + 0x24], edx */
  w32((uint32_t)(ESI + 0x24), (EDX));
  /* 118e2b7b pop edi */
  EDI = (pop32());
  /* 118e2b7c pop esi */
  ESI = (pop32());
  /* 118e2b7d pop ebp */
  EBP = (pop32());
  /* 118e2b7e pop ebx */
  EBX = (pop32());
  /* 118e2b7f ret 0x10 */
  ESPCHK(0x118e2ae0u, _esp0);
  ESP += 20; return;
}

/* FUN_10002b90 @ 0x118e2b90 (10 bytes, 3 insns) */
void f_118e2b90(void) {
  FTRACE(0x118e2b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2b90 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2b94 mov dword ptr [ecx + 0x50], eax */
  w32((uint32_t)(ECX + 0x50), (EAX));
  /* 118e2b97 ret 4 */
  ESPCHK(0x118e2b90u, _esp0);
  ESP += 8; return;
}

/* FUN_10002ba0 @ 0x118e2ba0 (10 bytes, 3 insns) */
void f_118e2ba0(void) {
  FTRACE(0x118e2ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2ba0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2ba4 mov dword ptr [ecx + 0x58], eax */
  w32((uint32_t)(ECX + 0x58), (EAX));
  /* 118e2ba7 ret 4 */
  ESPCHK(0x118e2ba0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002bb0 @ 0x118e2bb0 (10 bytes, 3 insns) */
void f_118e2bb0(void) {
  FTRACE(0x118e2bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2bb0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2bb4 mov dword ptr [ecx + 0x5c], eax */
  w32((uint32_t)(ECX + 0x5c), (EAX));
  /* 118e2bb7 ret 4 */
  ESPCHK(0x118e2bb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002bc0 @ 0x118e2bc0 (10 bytes, 3 insns) */
void f_118e2bc0(void) {
  FTRACE(0x118e2bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2bc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2bc4 mov dword ptr [ecx + 0x60], eax */
  w32((uint32_t)(ECX + 0x60), (EAX));
  /* 118e2bc7 ret 4 */
  ESPCHK(0x118e2bc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002bd0 @ 0x118e2bd0 (39 bytes, 14 insns) */
void f_118e2bd0(void) {
  FTRACE(0x118e2bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2bd0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2bd4 push esi */
  push32((uint32_t)(ESI));
  /* 118e2bd5 mov esi, ecx */
  ESI = (ECX);
  /* 118e2bd7 push eax */
  push32((uint32_t)(EAX));
  /* 118e2bd8 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 118e2bdb push ecx */
  push32((uint32_t)(ECX));
  /* 118e2bdc call dword ptr [0x118ef1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b4))), 0x118e2be2u);
  /* 118e2be2 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e2be6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 118e2bea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2bed mov dword ptr [esi + 0x30], edx */
  w32((uint32_t)(ESI + 0x30), (EDX));
  /* 118e2bf0 mov dword ptr [esi + 0x34], eax */
  w32((uint32_t)(ESI + 0x34), (EAX));
  /* 118e2bf3 pop esi */
  ESI = (pop32());
  /* 118e2bf4 ret 0xc */
  ESPCHK(0x118e2bd0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002c00 @ 0x118e2c00 (39 bytes, 14 insns) */
void f_118e2c00(void) {
  FTRACE(0x118e2c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2c00 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2c04 push esi */
  push32((uint32_t)(ESI));
  /* 118e2c05 mov esi, ecx */
  ESI = (ECX);
  /* 118e2c07 push eax */
  push32((uint32_t)(EAX));
  /* 118e2c08 lea ecx, [esi + 0x3c] */
  ECX = ((uint32_t)(ESI + 0x3c));
  /* 118e2c0b push ecx */
  push32((uint32_t)(ECX));
  /* 118e2c0c call dword ptr [0x118ef1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1b4))), 0x118e2c12u);
  /* 118e2c12 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 118e2c16 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 118e2c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2c1d mov dword ptr [esi + 0x44], edx */
  w32((uint32_t)(ESI + 0x44), (EDX));
  /* 118e2c20 mov dword ptr [esi + 0x48], eax */
  w32((uint32_t)(ESI + 0x48), (EAX));
  /* 118e2c23 pop esi */
  ESI = (pop32());
  /* 118e2c24 ret 0xc */
  ESPCHK(0x118e2c00u, _esp0);
  ESP += 16; return;
}

/* FUN_10002c30 @ 0x118e2c30 (18 bytes, 6 insns) */
void f_118e2c30(void) {
  FTRACE(0x118e2c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2c30 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e2c34 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 118e2c36 mov dword ptr [ecx + 0x64], edx */
  w32((uint32_t)(ECX + 0x64), (EDX));
  /* 118e2c39 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 118e2c3c mov dword ptr [ecx + 0x68], eax */
  w32((uint32_t)(ECX + 0x68), (EAX));
  /* 118e2c3f ret 4 */
  ESPCHK(0x118e2c30u, _esp0);
  ESP += 8; return;
}

/* FUN_10002c50 @ 0x118e2c50 (20 bytes, 8 insns) */
void f_118e2c50(void) {
  FTRACE(0x118e2c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2c50 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2c53 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2c54 call dword ptr [0x118ef19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef19c))), 0x118e2c5au);
  /* 118e2c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2c5d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e2c5f sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e2c61 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e2c63 ret  */
  ESPCHK(0x118e2c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c70 @ 0x118e2c70 (229 bytes, 92 insns) */
void f_118e2c70(void) {
  FTRACE(0x118e2c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2c70 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2c71 push ebx */
  push32((uint32_t)(EBX));
  /* 118e2c72 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2c73 mov ebp, dword ptr [0x118ef19c] */
  EBP = (r32((uint32_t)(0x118ef19c)));
  /* 118e2c79 push esi */
  push32((uint32_t)(ESI));
  /* 118e2c7a mov esi, ecx */
  ESI = (ECX);
  /* 118e2c7c push edi */
  push32((uint32_t)(EDI));
  /* 118e2c7d lea ebx, [esi + 0x1c] */
  EBX = ((uint32_t)(ESI + 0x1c));
  /* 118e2c80 push ebx */
  push32((uint32_t)(EBX));
  /* 118e2c81 call ebp */
  call_ind((uint32_t)(EBP), 0x118e2c83u);
  /* 118e2c83 lea edi, [esi + 0x14] */
  EDI = ((uint32_t)(ESI + 0x14));
  /* 118e2c86 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 118e2c8a push edi */
  push32((uint32_t)(EDI));
  /* 118e2c8b call ebp */
  call_ind((uint32_t)(EBP), 0x118e2c8du);
  /* 118e2c8d mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 118e2c91 mov ecx, dword ptr [esi + 0x24] */
  ECX = (r32((uint32_t)(ESI + 0x24)));
  /* 118e2c94 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2c96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2c99 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2c9b jle 0x118e2ca6 */
  if ((C.zf||C.sf!=C.of)) goto L_118e2ca6;
  /* 118e2c9d pop edi */
  EDI = (pop32());
  /* 118e2c9e pop esi */
  ESI = (pop32());
  /* 118e2c9f pop ebp */
  EBP = (pop32());
  /* 118e2ca0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e2ca3 pop ebx */
  EBX = (pop32());
  /* 118e2ca4 pop ecx */
  ECX = (pop32());
  /* 118e2ca5 ret  */
  ESPCHK(0x118e2c70u, _esp0);
  ESP += 4; return;
L_118e2ca6:;
  /* 118e2ca6 mov ecx, esi */
  ECX = (ESI);
  /* 118e2ca8 call 0x118e2c50 */
  push32(0x118e2cadu); f_118e2c50();
  /* 118e2cad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2caf je 0x118e2d4d */
  if (C.zf) goto L_118e2d4d;
  /* 118e2cb5 lea ebp, [esi + 4] */
  EBP = ((uint32_t)(ESI + 0x4));
  /* 118e2cb8 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2cb9 call dword ptr [0x118ef1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1a4))), 0x118e2cbfu);
  /* 118e2cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2cc2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2cc4 je 0x118e2d4d */
  if (C.zf) goto L_118e2d4d;
  /* 118e2cca mov eax, dword ptr [esi + 0x54] */
  EAX = (r32((uint32_t)(ESI + 0x54)));
  /* 118e2ccd mov ecx, dword ptr [esi + 0x50] */
  ECX = (r32((uint32_t)(ESI + 0x50)));
  /* 118e2cd0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2cd2 jl 0x118e2cdf */
  if ((C.sf!=C.of)) goto L_118e2cdf;
  /* 118e2cd4 mov edi, ebx */
  EDI = (EBX);
  /* 118e2cd6 mov dword ptr [esi + 0x54], 0 */
  w32((uint32_t)(ESI + 0x54), (0x0u));
  /* 118e2cdd jmp 0x118e2ce3 */
  goto L_118e2ce3;
L_118e2cdf:;
  /* 118e2cdf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e2ce0 mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
L_118e2ce3:;
  /* 118e2ce3 mov ebx, dword ptr [0x118ef1a0] */
  EBX = (r32((uint32_t)(0x118ef1a0)));
  /* 118e2ce9 call ebx */
  call_ind((uint32_t)(EBX), 0x118e2cebu);
  /* 118e2ceb cmp eax, dword ptr [esi + 0x60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2cee jle 0x118e2d4d */
  if ((C.zf||C.sf!=C.of)) goto L_118e2d4d;
  /* 118e2cf0 call ebx */
  call_ind((uint32_t)(EBX), 0x118e2cf2u);
  /* 118e2cf2 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
  /* 118e2cf5 call 0x118e47e8 */
  push32(0x118e2cfau); f_118e47e8();
  /* 118e2cfa mov ecx, dword ptr [esi + 0x34] */
  ECX = (r32((uint32_t)(ESI + 0x34)));
  /* 118e2cfd mov ebx, dword ptr [0x118ef1ac] */
  EBX = (r32((uint32_t)(0x118ef1ac)));
  /* 118e2d03 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e2d08 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2d0a jl 0x118e2d24 */
  if ((C.sf!=C.of)) goto L_118e2d24;
  /* 118e2d0c push 3 */
  push32((uint32_t)(0x3u));
  /* 118e2d0e lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 118e2d11 push edi */
  push32((uint32_t)(EDI));
  /* 118e2d12 push eax */
  push32((uint32_t)(EAX));
  /* 118e2d13 push ebp */
  push32((uint32_t)(EBP));
  /* 118e2d14 call ebx */
  call_ind((uint32_t)(EBX), 0x118e2d16u);
  /* 118e2d16 mov ecx, dword ptr [esi + 0x30] */
  ECX = (r32((uint32_t)(ESI + 0x30)));
  /* 118e2d19 mov eax, dword ptr [esi + 0x60] */
  EAX = (r32((uint32_t)(ESI + 0x60)));
  /* 118e2d1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2d1f add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2d21 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
L_118e2d24:;
  /* 118e2d24 call 0x118e47e8 */
  push32(0x118e2d29u); f_118e47e8();
  /* 118e2d29 mov ecx, dword ptr [esi + 0x48] */
  ECX = (r32((uint32_t)(ESI + 0x48)));
  /* 118e2d2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e2d31 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2d33 jl 0x118e2d4d */
  if ((C.sf!=C.of)) goto L_118e2d4d;
  /* 118e2d35 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e2d37 lea edx, [esi + 0x3c] */
  EDX = ((uint32_t)(ESI + 0x3c));
  /* 118e2d3a push edi */
  push32((uint32_t)(EDI));
  /* 118e2d3b push edx */
  push32((uint32_t)(EDX));
  /* 118e2d3c push ebp */
  push32((uint32_t)(EBP));
  /* 118e2d3d call ebx */
  call_ind((uint32_t)(EBX), 0x118e2d3fu);
  /* 118e2d3f mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 118e2d42 mov ecx, dword ptr [esi + 0x60] */
  ECX = (r32((uint32_t)(ESI + 0x60)));
  /* 118e2d45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2d48 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2d4a mov dword ptr [esi + 0x60], ecx */
  w32((uint32_t)(ESI + 0x60), (ECX));
L_118e2d4d:;
  /* 118e2d4d pop edi */
  EDI = (pop32());
  /* 118e2d4e pop esi */
  ESI = (pop32());
  /* 118e2d4f pop ebp */
  EBP = (pop32());
  /* 118e2d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e2d52 pop ebx */
  EBX = (pop32());
  /* 118e2d53 pop ecx */
  ECX = (pop32());
  /* 118e2d54 ret  */
  ESPCHK(0x118e2c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d60 @ 0x118e2d60 (14 bytes, 5 insns) */
void f_118e2d60(void) {
  FTRACE(0x118e2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2d60 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2d63 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2d64 call dword ptr [0x118ef19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef19c))), 0x118e2d6au);
  /* 118e2d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2d6d ret  */
  ESPCHK(0x118e2d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d70 @ 0x118e2d70 (43 bytes, 18 insns) */
void f_118e2d70(void) {
  FTRACE(0x118e2d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2d70 push esi */
  push32((uint32_t)(ESI));
  /* 118e2d71 mov esi, ecx */
  ESI = (ECX);
  /* 118e2d73 call 0x118e2c50 */
  push32(0x118e2d78u); f_118e2c50();
  /* 118e2d78 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2d7a je 0x118e2d97 */
  if (C.zf) goto L_118e2d97;
  /* 118e2d7c lea eax, [esi + 0x1c] */
  EAX = ((uint32_t)(ESI + 0x1c));
  /* 118e2d7f push eax */
  push32((uint32_t)(EAX));
  /* 118e2d80 call dword ptr [0x118ef19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef19c))), 0x118e2d86u);
  /* 118e2d86 mov ecx, dword ptr [esi + 0x58] */
  ECX = (r32((uint32_t)(ESI + 0x58)));
  /* 118e2d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2d8c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2d8e jl 0x118e2d97 */
  if ((C.sf!=C.of)) goto L_118e2d97;
  /* 118e2d90 mov eax, 1 */
  EAX = (0x1u);
  /* 118e2d95 pop esi */
  ESI = (pop32());
  /* 118e2d96 ret  */
  ESPCHK(0x118e2d70u, _esp0);
  ESP += 4; return;
L_118e2d97:;
  /* 118e2d97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e2d99 pop esi */
  ESI = (pop32());
  /* 118e2d9a ret  */
  ESPCHK(0x118e2d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002da0 @ 0x118e2da0 (42 bytes, 18 insns) */
void f_118e2da0(void) {
  FTRACE(0x118e2da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2da0 push esi */
  push32((uint32_t)(ESI));
  /* 118e2da1 mov esi, ecx */
  ESI = (ECX);
  /* 118e2da3 push edi */
  push32((uint32_t)(EDI));
  /* 118e2da4 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 118e2da7 push edi */
  push32((uint32_t)(EDI));
  /* 118e2da8 call dword ptr [0x118ef1f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1f4))), 0x118e2daeu);
  /* 118e2dae lea eax, [esi + 0x6c] */
  EAX = ((uint32_t)(ESI + 0x6c));
  /* 118e2db1 push eax */
  push32((uint32_t)(EAX));
  /* 118e2db2 push edi */
  push32((uint32_t)(EDI));
  /* 118e2db3 call dword ptr [0x118ef1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1bc))), 0x118e2db9u);
  /* 118e2db9 mov ecx, dword ptr [esi + 0x5c] */
  ECX = (r32((uint32_t)(ESI + 0x5c)));
  /* 118e2dbc mov eax, dword ptr [esi + 0x58] */
  EAX = (r32((uint32_t)(ESI + 0x58)));
  /* 118e2dbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2dc2 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2dc4 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
  /* 118e2dc7 pop edi */
  EDI = (pop32());
  /* 118e2dc8 pop esi */
  ESI = (pop32());
  /* 118e2dc9 ret  */
  ESPCHK(0x118e2da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dd0 @ 0x118e2dd0 (94 bytes, 35 insns) */
void f_118e2dd0(void) {
  FTRACE(0x118e2dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2dd0 push esi */
  push32((uint32_t)(ESI));
  /* 118e2dd1 mov esi, ecx */
  ESI = (ECX);
  /* 118e2dd3 call 0x118e2c50 */
  push32(0x118e2dd8u); f_118e2c50();
  /* 118e2dd8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2dda je 0x118e2e2c */
  if (C.zf) goto L_118e2e2c;
  /* 118e2ddc mov ecx, esi */
  ECX = (ESI);
  /* 118e2dde call 0x118e2c70 */
  push32(0x118e2de3u); f_118e2c70();
  /* 118e2de3 mov ecx, esi */
  ECX = (ESI);
  /* 118e2de5 call 0x118e2d70 */
  push32(0x118e2deau); f_118e2d70();
  /* 118e2dea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2dec je 0x118e2e2c */
  if (C.zf) goto L_118e2e2c;
  /* 118e2dee mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 118e2df0 push eax */
  push32((uint32_t)(EAX));
  /* 118e2df1 call 0x118e10e0 */
  push32(0x118e2df6u); f_118e10e0();
  /* 118e2df6 lea ecx, [esi + 0x1c] */
  ECX = ((uint32_t)(ESI + 0x1c));
  /* 118e2df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e2dfb push ecx */
  push32((uint32_t)(ECX));
  /* 118e2dfc call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e2e02u);
  /* 118e2e02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e2e07 call 0x118e47e8 */
  push32(0x118e2e0cu); f_118e47e8();
  /* 118e2e0c push eax */
  push32((uint32_t)(EAX));
  /* 118e2e0d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e2e0f lea edx, [esi + 0x64] */
  EDX = ((uint32_t)(ESI + 0x64));
  /* 118e2e12 push edx */
  push32((uint32_t)(EDX));
  /* 118e2e13 push eax */
  push32((uint32_t)(EAX));
  /* 118e2e14 call dword ptr [0x118ef1e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1e0))), 0x118e2e1au);
  /* 118e2e1a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 118e2e1c push ecx */
  push32((uint32_t)(ECX));
  /* 118e2e1d call 0x118e1120 */
  push32(0x118e2e22u); f_118e1120();
  /* 118e2e22 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e2e25 mov ecx, esi */
  ECX = (ESI);
  /* 118e2e27 call 0x118e2da0 */
  push32(0x118e2e2cu); f_118e2da0();
L_118e2e2c:;
  /* 118e2e2c pop esi */
  ESI = (pop32());
  /* 118e2e2d ret  */
  ESPCHK(0x118e2dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e30 @ 0x118e2e30 (75 bytes, 25 insns) */
void f_118e2e30(void) {
  FTRACE(0x118e2e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e2e30 push esi */
  push32((uint32_t)(ESI));
  /* 118e2e31 mov esi, ecx */
  ESI = (ECX);
  /* 118e2e33 call 0x118e2d70 */
  push32(0x118e2e38u); f_118e2d70();
  /* 118e2e38 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e2e3a je 0x118e2e70 */
  if (C.zf) goto L_118e2e70;
  /* 118e2e3c call 0x118e47e8 */
  push32(0x118e2e41u); f_118e47e8();
  /* 118e2e41 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e2e46 cmp eax, 0xa0 */
  { uint32_t _a=(EAX),_b=(0xa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e2e4b jge 0x118e2e64 */
  if ((C.sf==C.of)) goto L_118e2e64;
  /* 118e2e4d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e2e51 mov ecx, esi */
  ECX = (ESI);
  /* 118e2e53 push eax */
  push32((uint32_t)(EAX));
  /* 118e2e54 call 0x118e2c30 */
  push32(0x118e2e59u); f_118e2c30();
  /* 118e2e59 mov ecx, esi */
  ECX = (ESI);
  /* 118e2e5b call 0x118e2dd0 */
  push32(0x118e2e60u); f_118e2dd0();
  /* 118e2e60 pop esi */
  ESI = (pop32());
  /* 118e2e61 ret 8 */
  ESPCHK(0x118e2e30u, _esp0);
  ESP += 12; return;
L_118e2e64:;
  /* 118e2e64 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e2e68 push ecx */
  push32((uint32_t)(ECX));
  /* 118e2e69 mov ecx, esi */
  ECX = (ESI);
  /* 118e2e6b call 0x118e2c30 */
  push32(0x118e2e70u); f_118e2c30();
L_118e2e70:;
  /* 118e2e70 mov ecx, esi */
  ECX = (ESI);
  /* 118e2e72 call 0x118e2dd0 */
  push32(0x118e2e77u); f_118e2dd0();
  /* 118e2e77 pop esi */
  ESI = (pop32());
  /* 118e2e78 ret 8 */
  ESPCHK(0x118e2e30u, _esp0);
  ESP += 12; return;
}

/* FUN_10003010 @ 0x118e3010 (39 bytes, 21 insns) */
void f_118e3010(void) {
  FTRACE(0x118e3010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e3010 push ebx */
  push32((uint32_t)(EBX));
  /* 118e3011 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e3015 push ebp */
  push32((uint32_t)(EBP));
  /* 118e3016 mov ebp, dword ptr [0x118ef158] */
  EBP = (r32((uint32_t)(0x118ef158)));
  /* 118e301c push esi */
  push32((uint32_t)(ESI));
  /* 118e301d push edi */
  push32((uint32_t)(EDI));
  /* 118e301e mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 118e3022 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_118e3024:;
  /* 118e3024 push edi */
  push32((uint32_t)(EDI));
  /* 118e3025 push esi */
  push32((uint32_t)(ESI));
  /* 118e3026 push ebx */
  push32((uint32_t)(EBX));
  /* 118e3027 call ebp */
  call_ind((uint32_t)(EBP), 0x118e3029u);
  /* 118e3029 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e302c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e302d cmp esi, 6 */
  { uint32_t _a=(ESI),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e3030 jl 0x118e3024 */
  if ((C.sf!=C.of)) goto L_118e3024;
  /* 118e3032 pop edi */
  EDI = (pop32());
  /* 118e3033 pop esi */
  ESI = (pop32());
  /* 118e3034 pop ebp */
  EBP = (pop32());
  /* 118e3035 pop ebx */
  EBX = (pop32());
  /* 118e3036 ret  */
  ESPCHK(0x118e3010u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x118e3040 (3533 bytes, 874 insns) */
void f_118e3040(void) {
  FTRACE(0x118e3040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e3040 push ebx */
  push32((uint32_t)(EBX));
  /* 118e3041 push ebp */
  push32((uint32_t)(EBP));
  /* 118e3042 mov ebp, dword ptr [0x118ef1cc] */
  EBP = (r32((uint32_t)(0x118ef1cc)));
  /* 118e3048 push esi */
  push32((uint32_t)(ESI));
  /* 118e3049 push edi */
  push32((uint32_t)(EDI));
  /* 118e304a push 0x118f15cc */
  push32((uint32_t)(0x118f15ccu));
  /* 118e304f push 0x11905338 */
  push32((uint32_t)(0x11905338u));
  /* 118e3054 call ebp */
  call_ind((uint32_t)(EBP), 0x118e3056u);
  /* 118e3056 push 0x118f15bc */
  push32((uint32_t)(0x118f15bcu));
  /* 118e305b push 0x11905340 */
  push32((uint32_t)(0x11905340u));
  /* 118e3060 call ebp */
  call_ind((uint32_t)(EBP), 0x118e3062u);
  /* 118e3062 push 0x118f15ac */
  push32((uint32_t)(0x118f15acu));
  /* 118e3067 push 0x118f5788 */
  push32((uint32_t)(0x118f5788u));
  /* 118e306c call ebp */
  call_ind((uint32_t)(EBP), 0x118e306eu);
  /* 118e306e push 0x118f159c */
  push32((uint32_t)(0x118f159cu));
  /* 118e3073 push 0x118f5790 */
  push32((uint32_t)(0x118f5790u));
  /* 118e3078 call ebp */
  call_ind((uint32_t)(EBP), 0x118e307au);
  /* 118e307a mov esi, dword ptr [0x118ef1b0] */
  ESI = (r32((uint32_t)(0x118ef1b0)));
  /* 118e3080 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3082 call esi */
  call_ind((uint32_t)(ESI), 0x118e3084u);
  /* 118e3084 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3086 mov ebx, eax */
  EBX = (EAX);
  /* 118e3088 call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e308eu);
  /* 118e308e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3091 cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e3094 jge 0x118e30a6 */
  if ((C.sf==C.of)) goto L_118e30a6;
  /* 118e3096 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e3098 push 0x118f5788 */
  push32((uint32_t)(0x118f5788u));
  /* 118e309d call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e30a3u);
  /* 118e30a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e30a6:;
  /* 118e30a6 mov edi, dword ptr [0x118ef144] */
  EDI = (r32((uint32_t)(0x118ef144)));
  /* 118e30ac push 5 */
  push32((uint32_t)(0x5u));
  /* 118e30ae call edi */
  call_ind((uint32_t)(EDI), 0x118e30b0u);
  /* 118e30b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e30b2 call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e30b8u);
  /* 118e30b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e30bb cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e30be jge 0x118e30d0 */
  if ((C.sf==C.of)) goto L_118e30d0;
  /* 118e30c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e30c2 push 0x118f5790 */
  push32((uint32_t)(0x118f5790u));
  /* 118e30c7 call dword ptr [0x118ef1ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1ec))), 0x118e30cdu);
  /* 118e30cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e30d0:;
  /* 118e30d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e30d2 call edi */
  call_ind((uint32_t)(EDI), 0x118e30d4u);
  /* 118e30d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e30d6 call 0x118e48db */
  push32(0x118e30dbu); f_118e48db();
  /* 118e30db push eax */
  push32((uint32_t)(EAX));
  /* 118e30dc call 0x118e47db */
  push32(0x118e30e1u); f_118e47db();
  /* 118e30e1 push 0x118f56c0 */
  push32((uint32_t)(0x118f56c0u));
  /* 118e30e6 call dword ptr [0x118ef1d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d0))), 0x118e30ecu);
  /* 118e30ec mov ebx, dword ptr [0x118ef1b8] */
  EBX = (r32((uint32_t)(0x118ef1b8)));
  /* 118e30f2 push 0x118f1594 */
  push32((uint32_t)(0x118f1594u));
  /* 118e30f7 push 0x118f5780 */
  push32((uint32_t)(0x118f5780u));
  /* 118e30fc call ebx */
  call_ind((uint32_t)(EBX), 0x118e30feu);
  /* 118e30fe push 0x118f158c */
  push32((uint32_t)(0x118f158cu));
  /* 118e3103 push 0x118f5778 */
  push32((uint32_t)(0x118f5778u));
  /* 118e3108 call ebx */
  call_ind((uint32_t)(EBX), 0x118e310au);
  /* 118e310a push 0x118f1584 */
  push32((uint32_t)(0x118f1584u));
  /* 118e310f push 0x118f5bf8 */
  push32((uint32_t)(0x118f5bf8u));
  /* 118e3114 call ebx */
  call_ind((uint32_t)(EBX), 0x118e3116u);
  /* 118e3116 push 0x118f157c */
  push32((uint32_t)(0x118f157cu));
  /* 118e311b push 0x11905068 */
  push32((uint32_t)(0x11905068u));
  /* 118e3120 call ebx */
  call_ind((uint32_t)(EBX), 0x118e3122u);
  /* 118e3122 push 0x118f1574 */
  push32((uint32_t)(0x118f1574u));
  /* 118e3127 push 0x118f50d8 */
  push32((uint32_t)(0x118f50d8u));
  /* 118e312c call ebx */
  call_ind((uint32_t)(EBX), 0x118e312eu);
  /* 118e312e push 0x118f1568 */
  push32((uint32_t)(0x118f1568u));
  /* 118e3133 push 0x11905058 */
  push32((uint32_t)(0x11905058u));
  /* 118e3138 call ebx */
  call_ind((uint32_t)(EBX), 0x118e313au);
  /* 118e313a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e313d push 0x118f155c */
  push32((uint32_t)(0x118f155cu));
  /* 118e3142 push 0x11905050 */
  push32((uint32_t)(0x11905050u));
  /* 118e3147 call ebx */
  call_ind((uint32_t)(EBX), 0x118e3149u);
  /* 118e3149 mov edi, dword ptr [0x118ef1b4] */
  EDI = (r32((uint32_t)(0x118ef1b4)));
  /* 118e314f push 0x118f1550 */
  push32((uint32_t)(0x118f1550u));
  /* 118e3154 push 0x118f5be8 */
  push32((uint32_t)(0x118f5be8u));
  /* 118e3159 call edi */
  call_ind((uint32_t)(EDI), 0x118e315bu);
  /* 118e315b push 0x118f1540 */
  push32((uint32_t)(0x118f1540u));
  /* 118e3160 push 0x11905330 */
  push32((uint32_t)(0x11905330u));
  /* 118e3165 call edi */
  call_ind((uint32_t)(EDI), 0x118e3167u);
  /* 118e3167 push 0x118f1530 */
  push32((uint32_t)(0x118f1530u));
  /* 118e316c push 0x118f5be0 */
  push32((uint32_t)(0x118f5be0u));
  /* 118e3171 call edi */
  call_ind((uint32_t)(EDI), 0x118e3173u);
  /* 118e3173 push 0x118f1524 */
  push32((uint32_t)(0x118f1524u));
  /* 118e3178 push 0x11905348 */
  push32((uint32_t)(0x11905348u));
  /* 118e317d call edi */
  call_ind((uint32_t)(EDI), 0x118e317fu);
  /* 118e317f push 0x118f1518 */
  push32((uint32_t)(0x118f1518u));
  /* 118e3184 push 0x118f5c00 */
  push32((uint32_t)(0x118f5c00u));
  /* 118e3189 call ebp */
  call_ind((uint32_t)(EBP), 0x118e318bu);
  /* 118e318b mov edi, dword ptr [0x118ef184] */
  EDI = (r32((uint32_t)(0x118ef184)));
  /* 118e3191 push 0x68 */
  push32((uint32_t)(0x68u));
  /* 118e3193 push 0x11905070 */
  push32((uint32_t)(0x11905070u));
  /* 118e3198 call edi */
  call_ind((uint32_t)(EDI), 0x118e319au);
  /* 118e319a add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e319d mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e31a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e31a4 call 0x118e1200 */
  push32(0x118e31a9u); f_118e1200();
  /* 118e31a9 push 0x118f1508 */
  push32((uint32_t)(0x118f1508u));
  /* 118e31ae mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e31b3 call 0x118e1240 */
  push32(0x118e31b8u); f_118e1240();
  /* 118e31b8 push 0x118f14f8 */
  push32((uint32_t)(0x118f14f8u));
  /* 118e31bd mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e31c2 call 0x118e1210 */
  push32(0x118e31c7u); f_118e1210();
  /* 118e31c7 push 0x118f14e8 */
  push32((uint32_t)(0x118f14e8u));
  /* 118e31cc mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e31d1 call 0x118e1210 */
  push32(0x118e31d6u); f_118e1210();
  /* 118e31d6 push 0x118f14d8 */
  push32((uint32_t)(0x118f14d8u));
  /* 118e31db mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e31e0 call 0x118e1210 */
  push32(0x118e31e5u); f_118e1210();
  /* 118e31e5 push 0x118f14c0 */
  push32((uint32_t)(0x118f14c0u));
  /* 118e31ea mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e31ef call 0x118e1260 */
  push32(0x118e31f4u); f_118e1260();
  /* 118e31f4 push 0x118f14a4 */
  push32((uint32_t)(0x118f14a4u));
  /* 118e31f9 mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e31fe call 0x118e1280 */
  push32(0x118e3203u); f_118e1280();
  /* 118e3203 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3205 call esi */
  call_ind((uint32_t)(ESI), 0x118e3207u);
  /* 118e3207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e320a lea eax, [eax + eax + 1] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x1));
  /* 118e320e mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e3213 push eax */
  push32((uint32_t)(EAX));
  /* 118e3214 call 0x118e11f0 */
  push32(0x118e3219u); f_118e11f0();
  /* 118e3219 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118e321b push 0x119050d8 */
  push32((uint32_t)(0x119050d8u));
  /* 118e3220 call edi */
  call_ind((uint32_t)(EDI), 0x118e3222u);
  /* 118e3222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3225 mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e322a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118e322c push 0 */
  push32((uint32_t)(0x0u));
  /* 118e322e push 0x118f1494 */
  push32((uint32_t)(0x118f1494u));
  /* 118e3233 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3235 call 0x118e2ae0 */
  push32(0x118e323au); f_118e2ae0();
  /* 118e323a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 118e323f push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3241 call esi */
  call_ind((uint32_t)(ESI), 0x118e3243u);
  /* 118e3243 mov ecx, 4 */
  ECX = (0x4u);
  /* 118e3248 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e324b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e324d lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 118e3250 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 118e3253 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 118e3256 push ecx */
  push32((uint32_t)(ECX));
  /* 118e3257 push 0x118f14a4 */
  push32((uint32_t)(0x118f14a4u));
  /* 118e325c mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e3261 call 0x118e2bd0 */
  push32(0x118e3266u); f_118e2bd0();
  /* 118e3266 push 0xaa */
  push32((uint32_t)(0xaau));
  /* 118e326b push 0 */
  push32((uint32_t)(0x0u));
  /* 118e326d call esi */
  call_ind((uint32_t)(ESI), 0x118e326fu);
  /* 118e326f mov ecx, 4 */
  ECX = (0x4u);
  /* 118e3274 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3277 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e3279 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 118e327c lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 118e327f mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e3284 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 118e3286 push edx */
  push32((uint32_t)(EDX));
  /* 118e3287 push 0x118f14c0 */
  push32((uint32_t)(0x118f14c0u));
  /* 118e328c call 0x118e2c00 */
  push32(0x118e3291u); f_118e2c00();
  /* 118e3291 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3293 call esi */
  call_ind((uint32_t)(ESI), 0x118e3295u);
  /* 118e3295 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e3296 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e3298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e329b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118e329d add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e32a0 mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e32a5 push eax */
  push32((uint32_t)(EAX));
  /* 118e32a6 call 0x118e2ba0 */
  push32(0x118e32abu); f_118e2ba0();
  /* 118e32ab push 0 */
  push32((uint32_t)(0x0u));
  /* 118e32ad call esi */
  call_ind((uint32_t)(ESI), 0x118e32afu);
  /* 118e32af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e32b2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e32b3 mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e32b8 push eax */
  push32((uint32_t)(EAX));
  /* 118e32b9 call 0x118e2bb0 */
  push32(0x118e32beu); f_118e2bb0();
  /* 118e32be push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118e32c3 mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e32c8 call 0x118e2bc0 */
  push32(0x118e32cdu); f_118e2bc0();
  /* 118e32cd push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118e32cf push 0x11905150 */
  push32((uint32_t)(0x11905150u));
  /* 118e32d4 call edi */
  call_ind((uint32_t)(EDI), 0x118e32d6u);
  /* 118e32d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e32d9 mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e32de push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118e32e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e32e2 push 0x118f1484 */
  push32((uint32_t)(0x118f1484u));
  /* 118e32e7 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e32e9 call 0x118e2ae0 */
  push32(0x118e32eeu); f_118e2ae0();
  /* 118e32ee push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 118e32f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e32f5 call esi */
  call_ind((uint32_t)(ESI), 0x118e32f7u);
  /* 118e32f7 mov ecx, 4 */
  ECX = (0x4u);
  /* 118e32fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e32ff sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e3301 imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3304 push ecx */
  push32((uint32_t)(ECX));
  /* 118e3305 push 0x118f1468 */
  push32((uint32_t)(0x118f1468u));
  /* 118e330a mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e330f call 0x118e2bd0 */
  push32(0x118e3314u); f_118e2bd0();
  /* 118e3314 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118e3316 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3318 call esi */
  call_ind((uint32_t)(ESI), 0x118e331au);
  /* 118e331a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e331d mov edx, 4 */
  EDX = (0x4u);
  /* 118e3322 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e3324 mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e3329 imul edx, edx, 0x19 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x19u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e332c push edx */
  push32((uint32_t)(EDX));
  /* 118e332d push 0x118f1450 */
  push32((uint32_t)(0x118f1450u));
  /* 118e3332 call 0x118e2c00 */
  push32(0x118e3337u); f_118e2c00();
  /* 118e3337 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3339 call esi */
  call_ind((uint32_t)(ESI), 0x118e333bu);
  /* 118e333b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e333e add eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3341 mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e3346 push eax */
  push32((uint32_t)(EAX));
  /* 118e3347 call 0x118e2ba0 */
  push32(0x118e334cu); f_118e2ba0();
  /* 118e334c push 0 */
  push32((uint32_t)(0x0u));
  /* 118e334e call esi */
  call_ind((uint32_t)(ESI), 0x118e3350u);
  /* 118e3350 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3353 mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e3358 push eax */
  push32((uint32_t)(EAX));
  /* 118e3359 call 0x118e2bb0 */
  push32(0x118e335eu); f_118e2bb0();
  /* 118e335e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 118e3363 mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e3368 call 0x118e2bc0 */
  push32(0x118e336du); f_118e2bc0();
  /* 118e336d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118e336f push 0x119051c8 */
  push32((uint32_t)(0x119051c8u));
  /* 118e3374 call edi */
  call_ind((uint32_t)(EDI), 0x118e3376u);
  /* 118e3376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3379 mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e337e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118e3380 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3382 push 0x118f1440 */
  push32((uint32_t)(0x118f1440u));
  /* 118e3387 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3389 call 0x118e2ae0 */
  push32(0x118e338eu); f_118e2ae0();
  /* 118e338e push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 118e3393 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3395 call esi */
  call_ind((uint32_t)(ESI), 0x118e3397u);
  /* 118e3397 mov ecx, 4 */
  ECX = (0x4u);
  /* 118e339c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e339f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e33a1 imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e33a4 push ecx */
  push32((uint32_t)(ECX));
  /* 118e33a5 push 0x118f1424 */
  push32((uint32_t)(0x118f1424u));
  /* 118e33aa mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e33af call 0x118e2bd0 */
  push32(0x118e33b4u); f_118e2bd0();
  /* 118e33b4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118e33b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e33b8 call esi */
  call_ind((uint32_t)(ESI), 0x118e33bau);
  /* 118e33ba mov ecx, 4 */
  ECX = (0x4u);
  /* 118e33bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e33c2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e33c4 lea edx, [ecx + ecx*4] */
  EDX = ((uint32_t)(ECX + ECX*4));
  /* 118e33c7 mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e33cc shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 118e33cf push edx */
  push32((uint32_t)(EDX));
  /* 118e33d0 push 0x118f140c */
  push32((uint32_t)(0x118f140cu));
  /* 118e33d5 call 0x118e2c00 */
  push32(0x118e33dau); f_118e2c00();
  /* 118e33da push 0xe */
  push32((uint32_t)(0xeu));
  /* 118e33dc mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e33e1 call 0x118e2ba0 */
  push32(0x118e33e6u); f_118e2ba0();
  /* 118e33e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e33e8 call esi */
  call_ind((uint32_t)(ESI), 0x118e33eau);
  /* 118e33ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e33ed mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e33f2 push eax */
  push32((uint32_t)(EAX));
  /* 118e33f3 call 0x118e2bb0 */
  push32(0x118e33f8u); f_118e2bb0();
  /* 118e33f8 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118e33fd mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e3402 call 0x118e2bc0 */
  push32(0x118e3407u); f_118e2bc0();
  /* 118e3407 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118e3409 push 0x11905240 */
  push32((uint32_t)(0x11905240u));
  /* 118e340e call edi */
  call_ind((uint32_t)(EDI), 0x118e3410u);
  /* 118e3410 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3413 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e3418 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118e341a push 0 */
  push32((uint32_t)(0x0u));
  /* 118e341c push 0x118f13fc */
  push32((uint32_t)(0x118f13fcu));
  /* 118e3421 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3423 call 0x118e2ae0 */
  push32(0x118e3428u); f_118e2ae0();
  /* 118e3428 push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 118e342d push 0 */
  push32((uint32_t)(0x0u));
  /* 118e342f call esi */
  call_ind((uint32_t)(ESI), 0x118e3431u);
  /* 118e3431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3434 mov ecx, 4 */
  ECX = (0x4u);
  /* 118e3439 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e343b imul ecx, ecx, 0x32 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x32u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e343e push ecx */
  push32((uint32_t)(ECX));
  /* 118e343f push 0x118f13e0 */
  push32((uint32_t)(0x118f13e0u));
  /* 118e3444 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e3449 call 0x118e2bd0 */
  push32(0x118e344eu); f_118e2bd0();
  /* 118e344e push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118e3450 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3452 call esi */
  call_ind((uint32_t)(ESI), 0x118e3454u);
  /* 118e3454 mov edx, 4 */
  EDX = (0x4u);
  /* 118e3459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e345c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e345e mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e3463 imul edx, edx, 0x19 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x19u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3466 push edx */
  push32((uint32_t)(EDX));
  /* 118e3467 push 0x118f13c8 */
  push32((uint32_t)(0x118f13c8u));
  /* 118e346c call 0x118e2c00 */
  push32(0x118e3471u); f_118e2c00();
  /* 118e3471 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3473 call esi */
  call_ind((uint32_t)(ESI), 0x118e3475u);
  /* 118e3475 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3478 lea eax, [eax + eax + 5] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x5));
  /* 118e347c mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e3481 push eax */
  push32((uint32_t)(EAX));
  /* 118e3482 call 0x118e2ba0 */
  push32(0x118e3487u); f_118e2ba0();
  /* 118e3487 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3489 call esi */
  call_ind((uint32_t)(ESI), 0x118e348bu);
  /* 118e348b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e348c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e348e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3491 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118e3493 push eax */
  push32((uint32_t)(EAX));
  /* 118e3494 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e3499 call 0x118e2bb0 */
  push32(0x118e349eu); f_118e2bb0();
  /* 118e349e push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118e34a3 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e34a8 call 0x118e2bc0 */
  push32(0x118e34adu); f_118e2bc0();
  /* 118e34ad push 0x74 */
  push32((uint32_t)(0x74u));
  /* 118e34af push 0x119052b8 */
  push32((uint32_t)(0x119052b8u));
  /* 118e34b4 call edi */
  call_ind((uint32_t)(EDI), 0x118e34b6u);
  /* 118e34b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e34b9 mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e34be push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118e34c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e34c2 push 0x118f13b8 */
  push32((uint32_t)(0x118f13b8u));
  /* 118e34c7 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e34c9 call 0x118e2ae0 */
  push32(0x118e34ceu); f_118e2ae0();
  /* 118e34ce push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 118e34d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e34d5 call esi */
  call_ind((uint32_t)(ESI), 0x118e34d7u);
  /* 118e34d7 mov ecx, 4 */
  ECX = (0x4u);
  /* 118e34dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e34df sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e34e1 lea eax, [ecx*8] */
  EAX = ((uint32_t)(ECX*8));
  /* 118e34e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e34ea lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 118e34ed shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 118e34ef push ecx */
  push32((uint32_t)(ECX));
  /* 118e34f0 push 0x118f14a4 */
  push32((uint32_t)(0x118f14a4u));
  /* 118e34f5 mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e34fa call 0x118e2bd0 */
  push32(0x118e34ffu); f_118e2bd0();
  /* 118e34ff push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118e3501 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3503 call esi */
  call_ind((uint32_t)(ESI), 0x118e3505u);
  /* 118e3505 mov ecx, 4 */
  ECX = (0x4u);
  /* 118e350a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e350d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e350f lea eax, [ecx*8] */
  EAX = ((uint32_t)(ECX*8));
  /* 118e3516 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e3518 mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e351d lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 118e3520 push edx */
  push32((uint32_t)(EDX));
  /* 118e3521 push 0x118f14c0 */
  push32((uint32_t)(0x118f14c0u));
  /* 118e3526 call 0x118e2c00 */
  push32(0x118e352bu); f_118e2c00();
  /* 118e352b push 7 */
  push32((uint32_t)(0x7u));
  /* 118e352d mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e3532 call 0x118e2ba0 */
  push32(0x118e3537u); f_118e2ba0();
  /* 118e3537 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3539 call esi */
  call_ind((uint32_t)(ESI), 0x118e353bu);
  /* 118e353b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e353e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e353f sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e3541 mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e3546 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118e3548 push eax */
  push32((uint32_t)(EAX));
  /* 118e3549 call 0x118e2bb0 */
  push32(0x118e354eu); f_118e2bb0();
  /* 118e354e push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 118e3553 mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e3558 call 0x118e2bc0 */
  push32(0x118e355du); f_118e2bc0();
  /* 118e355d push 0x16a */
  push32((uint32_t)(0x16au));
  /* 118e3562 push 0x118f50f0 */
  push32((uint32_t)(0x118f50f0u));
  /* 118e3567 call edi */
  call_ind((uint32_t)(EDI), 0x118e3569u);
  /* 118e3569 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e356c mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e3571 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3573 call 0x118e1430 */
  push32(0x118e3578u); f_118e1430();
  /* 118e3578 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 118e357d push 0x118f13a4 */
  push32((uint32_t)(0x118f13a4u));
  /* 118e3582 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e3587 call 0x118e1440 */
  push32(0x118e358cu); f_118e1440();
  /* 118e358c push 0x118f1390 */
  push32((uint32_t)(0x118f1390u));
  /* 118e3591 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e3596 call 0x118e1460 */
  push32(0x118e359bu); f_118e1460();
  /* 118e359b push 0x118f1384 */
  push32((uint32_t)(0x118f1384u));
  /* 118e35a0 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e35a5 call 0x118e14b0 */
  push32(0x118e35aau); f_118e14b0();
  /* 118e35aa push 0x118f137c */
  push32((uint32_t)(0x118f137cu));
  /* 118e35af mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e35b4 call 0x118e14b0 */
  push32(0x118e35b9u); f_118e14b0();
  /* 118e35b9 push 0x118f1374 */
  push32((uint32_t)(0x118f1374u));
  /* 118e35be mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e35c3 call 0x118e14b0 */
  push32(0x118e35c8u); f_118e14b0();
  /* 118e35c8 push 0x118f136c */
  push32((uint32_t)(0x118f136cu));
  /* 118e35cd mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e35d2 call 0x118e14b0 */
  push32(0x118e35d7u); f_118e14b0();
  /* 118e35d7 push 0x118f1364 */
  push32((uint32_t)(0x118f1364u));
  /* 118e35dc mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e35e1 call 0x118e14b0 */
  push32(0x118e35e6u); f_118e14b0();
  /* 118e35e6 push 0x118f135c */
  push32((uint32_t)(0x118f135cu));
  /* 118e35eb mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e35f0 call 0x118e14b0 */
  push32(0x118e35f5u); f_118e14b0();
  /* 118e35f5 push 0x118f1354 */
  push32((uint32_t)(0x118f1354u));
  /* 118e35fa mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e35ff call 0x118e14b0 */
  push32(0x118e3604u); f_118e14b0();
  /* 118e3604 push 0x118f134c */
  push32((uint32_t)(0x118f134cu));
  /* 118e3609 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e360e call 0x118e14b0 */
  push32(0x118e3613u); f_118e14b0();
  /* 118e3613 push 0x118f1344 */
  push32((uint32_t)(0x118f1344u));
  /* 118e3618 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e361d call 0x118e14b0 */
  push32(0x118e3622u); f_118e14b0();
  /* 118e3622 push 0x118f133c */
  push32((uint32_t)(0x118f133cu));
  /* 118e3627 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e362c call 0x118e14b0 */
  push32(0x118e3631u); f_118e14b0();
  /* 118e3631 push 0x118f1330 */
  push32((uint32_t)(0x118f1330u));
  /* 118e3636 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e363b call 0x118e14b0 */
  push32(0x118e3640u); f_118e14b0();
  /* 118e3640 push 0x118f1328 */
  push32((uint32_t)(0x118f1328u));
  /* 118e3645 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e364a call 0x118e14b0 */
  push32(0x118e364fu); f_118e14b0();
  /* 118e364f push 0x118f1584 */
  push32((uint32_t)(0x118f1584u));
  /* 118e3654 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e3659 call 0x118e1480 */
  push32(0x118e365eu); f_118e1480();
  /* 118e365e push 0x16a */
  push32((uint32_t)(0x16au));
  /* 118e3663 push 0x118f5260 */
  push32((uint32_t)(0x118f5260u));
  /* 118e3668 call edi */
  call_ind((uint32_t)(EDI), 0x118e366au);
  /* 118e366a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e366d mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e3672 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3674 call 0x118e1430 */
  push32(0x118e3679u); f_118e1430();
  /* 118e3679 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 118e367e push 0x118f1314 */
  push32((uint32_t)(0x118f1314u));
  /* 118e3683 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e3688 call 0x118e1440 */
  push32(0x118e368du); f_118e1440();
  /* 118e368d push 0x118f1300 */
  push32((uint32_t)(0x118f1300u));
  /* 118e3692 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e3697 call 0x118e1460 */
  push32(0x118e369cu); f_118e1460();
  /* 118e369c push 0x118f12f8 */
  push32((uint32_t)(0x118f12f8u));
  /* 118e36a1 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e36a6 call 0x118e14b0 */
  push32(0x118e36abu); f_118e14b0();
  /* 118e36ab push 0x118f12f0 */
  push32((uint32_t)(0x118f12f0u));
  /* 118e36b0 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e36b5 call 0x118e14b0 */
  push32(0x118e36bau); f_118e14b0();
  /* 118e36ba push 0x118f12e8 */
  push32((uint32_t)(0x118f12e8u));
  /* 118e36bf mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e36c4 call 0x118e14b0 */
  push32(0x118e36c9u); f_118e14b0();
  /* 118e36c9 push 0x118f1364 */
  push32((uint32_t)(0x118f1364u));
  /* 118e36ce mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e36d3 call 0x118e14b0 */
  push32(0x118e36d8u); f_118e14b0();
  /* 118e36d8 push 0x118f137c */
  push32((uint32_t)(0x118f137cu));
  /* 118e36dd mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e36e2 call 0x118e14b0 */
  push32(0x118e36e7u); f_118e14b0();
  /* 118e36e7 push 0x118f1374 */
  push32((uint32_t)(0x118f1374u));
  /* 118e36ec mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e36f1 call 0x118e14b0 */
  push32(0x118e36f6u); f_118e14b0();
  /* 118e36f6 push 0x118f135c */
  push32((uint32_t)(0x118f135cu));
  /* 118e36fb mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e3700 call 0x118e14b0 */
  push32(0x118e3705u); f_118e14b0();
  /* 118e3705 push 0x118f1354 */
  push32((uint32_t)(0x118f1354u));
  /* 118e370a mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e370f call 0x118e14b0 */
  push32(0x118e3714u); f_118e14b0();
  /* 118e3714 push 0x118f1328 */
  push32((uint32_t)(0x118f1328u));
  /* 118e3719 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e371e call 0x118e14b0 */
  push32(0x118e3723u); f_118e14b0();
  /* 118e3723 push 0x118f136c */
  push32((uint32_t)(0x118f136cu));
  /* 118e3728 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e372d call 0x118e14b0 */
  push32(0x118e3732u); f_118e14b0();
  /* 118e3732 push 0x118f134c */
  push32((uint32_t)(0x118f134cu));
  /* 118e3737 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e373c call 0x118e14b0 */
  push32(0x118e3741u); f_118e14b0();
  /* 118e3741 push 0x118f1344 */
  push32((uint32_t)(0x118f1344u));
  /* 118e3746 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e374b call 0x118e14b0 */
  push32(0x118e3750u); f_118e14b0();
  /* 118e3750 push 0x118f133c */
  push32((uint32_t)(0x118f133cu));
  /* 118e3755 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e375a call 0x118e14b0 */
  push32(0x118e375fu); f_118e14b0();
  /* 118e375f push 0x118f1330 */
  push32((uint32_t)(0x118f1330u));
  /* 118e3764 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e3769 call 0x118e14b0 */
  push32(0x118e376eu); f_118e14b0();
  /* 118e376e push 0x118f1574 */
  push32((uint32_t)(0x118f1574u));
  /* 118e3773 mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e3778 call 0x118e1480 */
  push32(0x118e377du); f_118e1480();
  /* 118e377d push 0x16a */
  push32((uint32_t)(0x16au));
  /* 118e3782 push 0x118f53d0 */
  push32((uint32_t)(0x118f53d0u));
  /* 118e3787 call edi */
  call_ind((uint32_t)(EDI), 0x118e3789u);
  /* 118e3789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e378c mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e3791 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3793 call 0x118e1430 */
  push32(0x118e3798u); f_118e1430();
  /* 118e3798 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 118e379d push 0x118f12d4 */
  push32((uint32_t)(0x118f12d4u));
  /* 118e37a2 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e37a7 call 0x118e1440 */
  push32(0x118e37acu); f_118e1440();
  /* 118e37ac push 0x118f12c0 */
  push32((uint32_t)(0x118f12c0u));
  /* 118e37b1 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e37b6 call 0x118e1460 */
  push32(0x118e37bbu); f_118e1460();
  /* 118e37bb push 0x118f12b8 */
  push32((uint32_t)(0x118f12b8u));
  /* 118e37c0 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e37c5 call 0x118e14b0 */
  push32(0x118e37cau); f_118e14b0();
  /* 118e37ca push 0x118f136c */
  push32((uint32_t)(0x118f136cu));
  /* 118e37cf mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e37d4 call 0x118e14b0 */
  push32(0x118e37d9u); f_118e14b0();
  /* 118e37d9 push 0x118f137c */
  push32((uint32_t)(0x118f137cu));
  /* 118e37de mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e37e3 call 0x118e14b0 */
  push32(0x118e37e8u); f_118e14b0();
  /* 118e37e8 push 0x118f1374 */
  push32((uint32_t)(0x118f1374u));
  /* 118e37ed mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e37f2 call 0x118e14b0 */
  push32(0x118e37f7u); f_118e14b0();
  /* 118e37f7 push 0x118f1364 */
  push32((uint32_t)(0x118f1364u));
  /* 118e37fc mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e3801 call 0x118e14b0 */
  push32(0x118e3806u); f_118e14b0();
  /* 118e3806 push 0x118f135c */
  push32((uint32_t)(0x118f135cu));
  /* 118e380b mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e3810 call 0x118e14b0 */
  push32(0x118e3815u); f_118e14b0();
  /* 118e3815 push 0x118f1354 */
  push32((uint32_t)(0x118f1354u));
  /* 118e381a mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e381f call 0x118e14b0 */
  push32(0x118e3824u); f_118e14b0();
  /* 118e3824 push 0x118f134c */
  push32((uint32_t)(0x118f134cu));
  /* 118e3829 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e382e call 0x118e14b0 */
  push32(0x118e3833u); f_118e14b0();
  /* 118e3833 push 0x118f1344 */
  push32((uint32_t)(0x118f1344u));
  /* 118e3838 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e383d call 0x118e14b0 */
  push32(0x118e3842u); f_118e14b0();
  /* 118e3842 push 0x118f133c */
  push32((uint32_t)(0x118f133cu));
  /* 118e3847 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e384c call 0x118e14b0 */
  push32(0x118e3851u); f_118e14b0();
  /* 118e3851 push 0x118f1330 */
  push32((uint32_t)(0x118f1330u));
  /* 118e3856 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e385b call 0x118e14b0 */
  push32(0x118e3860u); f_118e14b0();
  /* 118e3860 push 0x118f1328 */
  push32((uint32_t)(0x118f1328u));
  /* 118e3865 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e386a call 0x118e14b0 */
  push32(0x118e386fu); f_118e14b0();
  /* 118e386f push 0x118f1594 */
  push32((uint32_t)(0x118f1594u));
  /* 118e3874 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e3879 call 0x118e1480 */
  push32(0x118e387eu); f_118e1480();
  /* 118e387e push 0x16a */
  push32((uint32_t)(0x16au));
  /* 118e3883 push 0x118f5540 */
  push32((uint32_t)(0x118f5540u));
  /* 118e3888 call edi */
  call_ind((uint32_t)(EDI), 0x118e388au);
  /* 118e388a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e388d mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e3892 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3894 call 0x118e1430 */
  push32(0x118e3899u); f_118e1430();
  /* 118e3899 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 118e389e push 0x118f12a4 */
  push32((uint32_t)(0x118f12a4u));
  /* 118e38a3 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e38a8 call 0x118e1440 */
  push32(0x118e38adu); f_118e1440();
  /* 118e38ad push 0x118f1290 */
  push32((uint32_t)(0x118f1290u));
  /* 118e38b2 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e38b7 call 0x118e1460 */
  push32(0x118e38bcu); f_118e1460();
  /* 118e38bc push 0x118f1288 */
  push32((uint32_t)(0x118f1288u));
  /* 118e38c1 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e38c6 call 0x118e14b0 */
  push32(0x118e38cbu); f_118e14b0();
  /* 118e38cb push 0x118f1280 */
  push32((uint32_t)(0x118f1280u));
  /* 118e38d0 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e38d5 call 0x118e14b0 */
  push32(0x118e38dau); f_118e14b0();
  /* 118e38da push 0x118f1278 */
  push32((uint32_t)(0x118f1278u));
  /* 118e38df mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e38e4 call 0x118e14b0 */
  push32(0x118e38e9u); f_118e14b0();
  /* 118e38e9 push 0x118f1330 */
  push32((uint32_t)(0x118f1330u));
  /* 118e38ee mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e38f3 call 0x118e14b0 */
  push32(0x118e38f8u); f_118e14b0();
  /* 118e38f8 push 0x118f1344 */
  push32((uint32_t)(0x118f1344u));
  /* 118e38fd mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e3902 call 0x118e14b0 */
  push32(0x118e3907u); f_118e14b0();
  /* 118e3907 push 0x118f133c */
  push32((uint32_t)(0x118f133cu));
  /* 118e390c mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e3911 call 0x118e14b0 */
  push32(0x118e3916u); f_118e14b0();
  /* 118e3916 push 0x118f1354 */
  push32((uint32_t)(0x118f1354u));
  /* 118e391b mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e3920 call 0x118e14b0 */
  push32(0x118e3925u); f_118e14b0();
  /* 118e3925 push 0x118f134c */
  push32((uint32_t)(0x118f134cu));
  /* 118e392a mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e392f call 0x118e14b0 */
  push32(0x118e3934u); f_118e14b0();
  /* 118e3934 push 0x118f136c */
  push32((uint32_t)(0x118f136cu));
  /* 118e3939 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e393e call 0x118e14b0 */
  push32(0x118e3943u); f_118e14b0();
  /* 118e3943 push 0x118f1374 */
  push32((uint32_t)(0x118f1374u));
  /* 118e3948 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e394d call 0x118e14b0 */
  push32(0x118e3952u); f_118e14b0();
  /* 118e3952 push 0x118f137c */
  push32((uint32_t)(0x118f137cu));
  /* 118e3957 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e395c call 0x118e14b0 */
  push32(0x118e3961u); f_118e14b0();
  /* 118e3961 push 0x118f1364 */
  push32((uint32_t)(0x118f1364u));
  /* 118e3966 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e396b call 0x118e14b0 */
  push32(0x118e3970u); f_118e14b0();
  /* 118e3970 push 0x118f135c */
  push32((uint32_t)(0x118f135cu));
  /* 118e3975 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e397a call 0x118e14b0 */
  push32(0x118e397fu); f_118e14b0();
  /* 118e397f push 0x118f1328 */
  push32((uint32_t)(0x118f1328u));
  /* 118e3984 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e3989 call 0x118e14b0 */
  push32(0x118e398eu); f_118e14b0();
  /* 118e398e push 0x118f157c */
  push32((uint32_t)(0x118f157cu));
  /* 118e3993 mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e3998 call 0x118e1480 */
  push32(0x118e399du); f_118e1480();
  /* 118e399d push 0x5d */
  push32((uint32_t)(0x5du));
  /* 118e399f push 0x118f4f68 */
  push32((uint32_t)(0x118f4f68u));
  /* 118e39a4 call edi */
  call_ind((uint32_t)(EDI), 0x118e39a6u);
  /* 118e39a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e39a9 mov ecx, 0x118f4f68 */
  ECX = (0x118f4f68u);
  /* 118e39ae push 0x6a4 */
  push32((uint32_t)(0x6a4u));
  /* 118e39b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e39b5 call 0x118e1830 */
  push32(0x118e39bau); f_118e1830();
  /* 118e39ba push 0x118f126c */
  push32((uint32_t)(0x118f126cu));
  /* 118e39bf mov ecx, 0x118f4f68 */
  ECX = (0x118f4f68u);
  /* 118e39c4 call 0x118e1840 */
  push32(0x118e39c9u); f_118e1840();
  /* 118e39c9 push 0x118f1260 */
  push32((uint32_t)(0x118f1260u));
  /* 118e39ce mov ecx, 0x118f4f68 */
  ECX = (0x118f4f68u);
  /* 118e39d3 call 0x118e1840 */
  push32(0x118e39d8u); f_118e1840();
  /* 118e39d8 push 0x118f1254 */
  push32((uint32_t)(0x118f1254u));
  /* 118e39dd mov ecx, 0x118f4f68 */
  ECX = (0x118f4f68u);
  /* 118e39e2 call 0x118e1840 */
  push32(0x118e39e7u); f_118e1840();
  /* 118e39e7 push 0x118f1248 */
  push32((uint32_t)(0x118f1248u));
  /* 118e39ec mov ecx, 0x118f4f68 */
  ECX = (0x118f4f68u);
  /* 118e39f1 call 0x118e1840 */
  push32(0x118e39f6u); f_118e1840();
  /* 118e39f6 push 0x118f123c */
  push32((uint32_t)(0x118f123cu));
  /* 118e39fb mov ecx, 0x118f4f68 */
  ECX = (0x118f4f68u);
  /* 118e3a00 call 0x118e1840 */
  push32(0x118e3a05u); f_118e1840();
  /* 118e3a05 push 0x118f1230 */
  push32((uint32_t)(0x118f1230u));
  /* 118e3a0a mov ecx, 0x118f4f68 */
  ECX = (0x118f4f68u);
  /* 118e3a0f call 0x118e1840 */
  push32(0x118e3a14u); f_118e1840();
  /* 118e3a14 push 0x118f1224 */
  push32((uint32_t)(0x118f1224u));
  /* 118e3a19 mov ecx, 0x118f4f68 */
  ECX = (0x118f4f68u);
  /* 118e3a1e call 0x118e1840 */
  push32(0x118e3a23u); f_118e1840();
  /* 118e3a23 push 0x144 */
  push32((uint32_t)(0x144u));
  /* 118e3a28 push 0x118f5a38 */
  push32((uint32_t)(0x118f5a38u));
  /* 118e3a2d call edi */
  call_ind((uint32_t)(EDI), 0x118e3a2fu);
  /* 118e3a2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3a32 mov ecx, 0x118f5a38 */
  ECX = (0x118f5a38u);
  /* 118e3a37 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e3a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3a3b push 0x118f1218 */
  push32((uint32_t)(0x118f1218u));
  /* 118e3a40 call 0x118e18f0 */
  push32(0x118e3a45u); f_118e18f0();
  /* 118e3a45 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e3a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e3a49 push 0x118f120c */
  push32((uint32_t)(0x118f120cu));
  /* 118e3a4e mov ecx, 0x118f5a38 */
  ECX = (0x118f5a38u);
  /* 118e3a53 call 0x118e18f0 */
  push32(0x118e3a58u); f_118e18f0();
  /* 118e3a58 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e3a5a push 3 */
  push32((uint32_t)(0x3u));
  /* 118e3a5c push 0x118f1200 */
  push32((uint32_t)(0x118f1200u));
  /* 118e3a61 mov ecx, 0x118f5a38 */
  ECX = (0x118f5a38u);
  /* 118e3a66 call 0x118e18f0 */
  push32(0x118e3a6bu); f_118e18f0();
  /* 118e3a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 118e3a6d push 4 */
  push32((uint32_t)(0x4u));
  /* 118e3a6f push 0x118f11f4 */
  push32((uint32_t)(0x118f11f4u));
  /* 118e3a74 mov ecx, 0x118f5a38 */
  ECX = (0x118f5a38u);
  /* 118e3a79 call 0x118e18f0 */
  push32(0x118e3a7eu); f_118e18f0();
  /* 118e3a7e push 1 */
  push32((uint32_t)(0x1u));
  /* 118e3a80 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3a82 push 0x118f11e8 */
  push32((uint32_t)(0x118f11e8u));
  /* 118e3a87 mov ecx, 0x118f5a38 */
  ECX = (0x118f5a38u);
  /* 118e3a8c call 0x118e18f0 */
  push32(0x118e3a91u); f_118e18f0();
  /* 118e3a91 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e3a93 push 6 */
  push32((uint32_t)(0x6u));
  /* 118e3a95 push 0x118f11dc */
  push32((uint32_t)(0x118f11dcu));
  /* 118e3a9a mov ecx, 0x118f5a38 */
  ECX = (0x118f5a38u);
  /* 118e3a9f call 0x118e18f0 */
  push32(0x118e3aa4u); f_118e18f0();
  /* 118e3aa4 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e3aa6 push 7 */
  push32((uint32_t)(0x7u));
  /* 118e3aa8 push 0x118f11d0 */
  push32((uint32_t)(0x118f11d0u));
  /* 118e3aad mov ecx, 0x118f5a38 */
  ECX = (0x118f5a38u);
  /* 118e3ab2 call 0x118e18f0 */
  push32(0x118e3ab7u); f_118e18f0();
  /* 118e3ab7 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 118e3abc push 0x118f56c8 */
  push32((uint32_t)(0x118f56c8u));
  /* 118e3ac1 call edi */
  call_ind((uint32_t)(EDI), 0x118e3ac3u);
  /* 118e3ac3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3ac6 mov ecx, 0x118f56c8 */
  ECX = (0x118f56c8u);
  /* 118e3acb push 3 */
  push32((uint32_t)(0x3u));
  /* 118e3acd call 0x118e1200 */
  push32(0x118e3ad2u); f_118e1200();
  /* 118e3ad2 push 0x118f1518 */
  push32((uint32_t)(0x118f1518u));
  /* 118e3ad7 mov ecx, 0x118f56c8 */
  ECX = (0x118f56c8u);
  /* 118e3adc call 0x118e19f0 */
  push32(0x118e3ae1u); f_118e19f0();
  /* 118e3ae1 push 0x118f11c4 */
  push32((uint32_t)(0x118f11c4u));
  /* 118e3ae6 mov ecx, 0x118f56c8 */
  ECX = (0x118f56c8u);
  /* 118e3aeb call 0x118e1a10 */
  push32(0x118e3af0u); f_118e1a10();
  /* 118e3af0 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 118e3af2 push 0x118f4f08 */
  push32((uint32_t)(0x118f4f08u));
  /* 118e3af7 call edi */
  call_ind((uint32_t)(EDI), 0x118e3af9u);
  /* 118e3af9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3afc mov ecx, 0x118f4f08 */
  ECX = (0x118f4f08u);
  /* 118e3b01 push 0x708 */
  push32((uint32_t)(0x708u));
  /* 118e3b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3b08 call 0x118e1830 */
  push32(0x118e3b0du); f_118e1830();
  /* 118e3b0d push 0x118f11c4 */
  push32((uint32_t)(0x118f11c4u));
  /* 118e3b12 mov ecx, 0x118f4f08 */
  ECX = (0x118f4f08u);
  /* 118e3b17 call 0x118e1840 */
  push32(0x118e3b1cu); f_118e1840();
  /* 118e3b1c push 0x5d */
  push32((uint32_t)(0x5du));
  /* 118e3b1e push 0x118f4fc8 */
  push32((uint32_t)(0x118f4fc8u));
  /* 118e3b23 call edi */
  call_ind((uint32_t)(EDI), 0x118e3b25u);
  /* 118e3b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3b28 mov ecx, 0x118f4fc8 */
  ECX = (0x118f4fc8u);
  /* 118e3b2d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 118e3b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3b34 call 0x118e1830 */
  push32(0x118e3b39u); f_118e1830();
  /* 118e3b39 push 0x118f11c4 */
  push32((uint32_t)(0x118f11c4u));
  /* 118e3b3e mov ecx, 0x118f4fc8 */
  ECX = (0x118f4fc8u);
  /* 118e3b43 call 0x118e1840 */
  push32(0x118e3b48u); f_118e1840();
  /* 118e3b48 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 118e3b4a push 0x118f5b80 */
  push32((uint32_t)(0x118f5b80u));
  /* 118e3b4f call edi */
  call_ind((uint32_t)(EDI), 0x118e3b51u);
  /* 118e3b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3b54 mov ecx, 0x118f5b80 */
  ECX = (0x118f5b80u);
  /* 118e3b59 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 118e3b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3b60 call 0x118e1830 */
  push32(0x118e3b65u); f_118e1830();
  /* 118e3b65 push 0x118f11b8 */
  push32((uint32_t)(0x118f11b8u));
  /* 118e3b6a mov ecx, 0x118f5b80 */
  ECX = (0x118f5b80u);
  /* 118e3b6f call 0x118e1840 */
  push32(0x118e3b74u); f_118e1840();
  /* 118e3b74 push 0x118f1344 */
  push32((uint32_t)(0x118f1344u));
  /* 118e3b79 mov ecx, 0x118f5b80 */
  ECX = (0x118f5b80u);
  /* 118e3b7e call 0x118e1840 */
  push32(0x118e3b83u); f_118e1840();
  /* 118e3b83 push 0x118f133c */
  push32((uint32_t)(0x118f133cu));
  /* 118e3b88 mov ecx, 0x118f5b80 */
  ECX = (0x118f5b80u);
  /* 118e3b8d call 0x118e1840 */
  push32(0x118e3b92u); f_118e1840();
  /* 118e3b92 push 0x118f1354 */
  push32((uint32_t)(0x118f1354u));
  /* 118e3b97 mov ecx, 0x118f5b80 */
  ECX = (0x118f5b80u);
  /* 118e3b9c call 0x118e1840 */
  push32(0x118e3ba1u); f_118e1840();
  /* 118e3ba1 push 0x118f134c */
  push32((uint32_t)(0x118f134cu));
  /* 118e3ba6 mov ecx, 0x118f5b80 */
  ECX = (0x118f5b80u);
  /* 118e3bab call 0x118e1840 */
  push32(0x118e3bb0u); f_118e1840();
  /* 118e3bb0 call 0x118e1bc0 */
  push32(0x118e3bb5u); f_118e1bc0();
  /* 118e3bb5 push 0x3a4 */
  push32((uint32_t)(0x3a4u));
  /* 118e3bba push 0x11905350 */
  push32((uint32_t)(0x11905350u));
  /* 118e3bbf call edi */
  call_ind((uint32_t)(EDI), 0x118e3bc1u);
  /* 118e3bc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3bc4 mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3bc9 push 0x118f11ac */
  push32((uint32_t)(0x118f11acu));
  /* 118e3bce call 0x118e1ea0 */
  push32(0x118e3bd3u); f_118e1ea0();
  /* 118e3bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3bdb push 0x320 */
  push32((uint32_t)(0x320u));
  /* 118e3be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3be2 mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3be7 call 0x118e1ee0 */
  push32(0x118e3becu); f_118e1ee0();
  /* 118e3bec push 0x96 */
  push32((uint32_t)(0x96u));
  /* 118e3bf1 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 118e3bf6 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 118e3bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3bff push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3c01 mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c06 call 0x118e1f10 */
  push32(0x118e3c0bu); f_118e1f10();
  /* 118e3c0b push 0x118f11a4 */
  push32((uint32_t)(0x118f11a4u));
  /* 118e3c10 mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c15 call 0x118e1ed0 */
  push32(0x118e3c1au); f_118e1ed0();
  /* 118e3c1a push 0x118f119c */
  push32((uint32_t)(0x118f119cu));
  /* 118e3c1f mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c24 call 0x118e1ed0 */
  push32(0x118e3c29u); f_118e1ed0();
  /* 118e3c29 push 0x118f1194 */
  push32((uint32_t)(0x118f1194u));
  /* 118e3c2e mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c33 call 0x118e1ed0 */
  push32(0x118e3c38u); f_118e1ed0();
  /* 118e3c38 push 0x118f118c */
  push32((uint32_t)(0x118f118cu));
  /* 118e3c3d mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c42 call 0x118e1ed0 */
  push32(0x118e3c47u); f_118e1ed0();
  /* 118e3c47 push 0x118f1184 */
  push32((uint32_t)(0x118f1184u));
  /* 118e3c4c mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c51 call 0x118e1ed0 */
  push32(0x118e3c56u); f_118e1ed0();
  /* 118e3c56 push 0x118f117c */
  push32((uint32_t)(0x118f117cu));
  /* 118e3c5b mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c60 call 0x118e1ed0 */
  push32(0x118e3c65u); f_118e1ed0();
  /* 118e3c65 push 0x118f1174 */
  push32((uint32_t)(0x118f1174u));
  /* 118e3c6a mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c6f call 0x118e1ed0 */
  push32(0x118e3c74u); f_118e1ed0();
  /* 118e3c74 push 0x118f116c */
  push32((uint32_t)(0x118f116cu));
  /* 118e3c79 mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c7e call 0x118e1ed0 */
  push32(0x118e3c83u); f_118e1ed0();
  /* 118e3c83 push 0x118f1164 */
  push32((uint32_t)(0x118f1164u));
  /* 118e3c88 mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c8d call 0x118e1ed0 */
  push32(0x118e3c92u); f_118e1ed0();
  /* 118e3c92 push 0x118f1158 */
  push32((uint32_t)(0x118f1158u));
  /* 118e3c97 mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3c9c call 0x118e1ed0 */
  push32(0x118e3ca1u); f_118e1ed0();
  /* 118e3ca1 push 0x118f114c */
  push32((uint32_t)(0x118f114cu));
  /* 118e3ca6 mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3cab call 0x118e1ed0 */
  push32(0x118e3cb0u); f_118e1ed0();
  /* 118e3cb0 push 0x118f1140 */
  push32((uint32_t)(0x118f1140u));
  /* 118e3cb5 mov ecx, 0x11905350 */
  ECX = (0x11905350u);
  /* 118e3cba call 0x118e1ed0 */
  push32(0x118e3cbfu); f_118e1ed0();
  /* 118e3cbf mov ecx, 0x118f57a0 */
  ECX = (0x118f57a0u);
  /* 118e3cc4 push 0x118f1524 */
  push32((uint32_t)(0x118f1524u));
  /* 118e3cc9 mov dword ptr [0x11905060], ecx */
  w32((uint32_t)(0x11905060), (ECX));
  /* 118e3ccf call 0x118e1d80 */
  push32(0x118e3cd4u); f_118e1d80();
  /* 118e3cd4 mov ecx, dword ptr [0x11905060] */
  ECX = (r32((uint32_t)(0x11905060)));
  /* 118e3cda push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3cdc call 0x118e2710 */
  push32(0x118e3ce1u); f_118e2710();
  /* 118e3ce1 mov ecx, 0x118f5c28 */
  ECX = (0x118f5c28u);
  /* 118e3ce6 push 0x118f1134 */
  push32((uint32_t)(0x118f1134u));
  /* 118e3ceb mov dword ptr [0x118f5c08], ecx */
  w32((uint32_t)(0x118f5c08), (ECX));
  /* 118e3cf1 call 0x118e1d80 */
  push32(0x118e3cf6u); f_118e1d80();
  /* 118e3cf6 mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3cfc push 3 */
  push32((uint32_t)(0x3u));
  /* 118e3cfe call 0x118e2020 */
  push32(0x118e3d03u); f_118e2020();
  /* 118e3d03 mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3d0b call 0x118e1ff0 */
  push32(0x118e3d10u); f_118e1ff0();
  /* 118e3d10 mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3d18 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118e3d1a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 118e3d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3d21 push 0xa */
  push32((uint32_t)(0xau));
  /* 118e3d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3d25 call 0x118e2590 */
  push32(0x118e3d2au); f_118e2590();
  /* 118e3d2a mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3d30 push 0x11905350 */
  push32((uint32_t)(0x11905350u));
  /* 118e3d35 call 0x118e2000 */
  push32(0x118e3d3au); f_118e2000();
  /* 118e3d3a mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3d42 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 118e3d47 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 118e3d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3d4e push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 118e3d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3d55 call 0x118e1d50 */
  push32(0x118e3d5au); f_118e1d50();
  /* 118e3d5a mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3d60 push 0xa */
  push32((uint32_t)(0xau));
  /* 118e3d62 call 0x118e2250 */
  push32(0x118e3d67u); f_118e2250();
  /* 118e3d67 push 0x118f1128 */
  push32((uint32_t)(0x118f1128u));
  /* 118e3d6c push 0x118f56b8 */
  push32((uint32_t)(0x118f56b8u));
  /* 118e3d71 call ebp */
  call_ind((uint32_t)(EBP), 0x118e3d73u);
  /* 118e3d73 push 0x118f1120 */
  push32((uint32_t)(0x118f1120u));
  /* 118e3d78 push 0x118f50d0 */
  push32((uint32_t)(0x118f50d0u));
  /* 118e3d7d call ebp */
  call_ind((uint32_t)(EBP), 0x118e3d7fu);
  /* 118e3d7f push 0x118f1114 */
  push32((uint32_t)(0x118f1114u));
  /* 118e3d84 push 0x118f56b0 */
  push32((uint32_t)(0x118f56b0u));
  /* 118e3d89 call ebp */
  call_ind((uint32_t)(EBP), 0x118e3d8bu);
  /* 118e3d8b push 0x118f1328 */
  push32((uint32_t)(0x118f1328u));
  /* 118e3d90 push 0x118f5bf0 */
  push32((uint32_t)(0x118f5bf0u));
  /* 118e3d95 call ebp */
  call_ind((uint32_t)(EBP), 0x118e3d97u);
  /* 118e3d97 mov esi, dword ptr [0x118ef148] */
  ESI = (r32((uint32_t)(0x118ef148)));
  /* 118e3d9d push 0x24 */
  push32((uint32_t)(0x24u));
  /* 118e3d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 118e3da1 call esi */
  call_ind((uint32_t)(ESI), 0x118e3da3u);
  /* 118e3da3 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3da5 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e3da7 call esi */
  call_ind((uint32_t)(ESI), 0x118e3da9u);
  /* 118e3da9 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3dab push 4 */
  push32((uint32_t)(0x4u));
  /* 118e3dad call esi */
  call_ind((uint32_t)(ESI), 0x118e3dafu);
  /* 118e3daf mov esi, dword ptr [0x118ef14c] */
  ESI = (r32((uint32_t)(0x118ef14c)));
  /* 118e3db5 push 0x118f110c */
  push32((uint32_t)(0x118f110cu));
  /* 118e3dba push 2 */
  push32((uint32_t)(0x2u));
  /* 118e3dbc call esi */
  call_ind((uint32_t)(ESI), 0x118e3dbeu);
  /* 118e3dbe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3dc1 push 0x118f1104 */
  push32((uint32_t)(0x118f1104u));
  /* 118e3dc6 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e3dc8 call esi */
  call_ind((uint32_t)(ESI), 0x118e3dcau);
  /* 118e3dca push 0x118f10f8 */
  push32((uint32_t)(0x118f10f8u));
  /* 118e3dcf push 4 */
  push32((uint32_t)(0x4u));
  /* 118e3dd1 call esi */
  call_ind((uint32_t)(ESI), 0x118e3dd3u);
  /* 118e3dd3 push 0x118f10f0 */
  push32((uint32_t)(0x118f10f0u));
  /* 118e3dd8 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3dda call esi */
  call_ind((uint32_t)(ESI), 0x118e3ddcu);
  /* 118e3ddc push 0x118f10e8 */
  push32((uint32_t)(0x118f10e8u));
  /* 118e3de1 push 0x118f50e0 */
  push32((uint32_t)(0x118f50e0u));
  /* 118e3de6 call dword ptr [0x118ef150] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef150))), 0x118e3decu);
  /* 118e3dec push 0x118f50e0 */
  push32((uint32_t)(0x118f50e0u));
  /* 118e3df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3df3 call dword ptr [0x118ef154] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef154))), 0x118e3df9u);
  /* 118e3df9 push 0x118f157c */
  push32((uint32_t)(0x118f157cu));
  /* 118e3dfe push 0x118f5c18 */
  push32((uint32_t)(0x118f5c18u));
  /* 118e3e03 call ebx */
  call_ind((uint32_t)(EBX), 0x118e3e05u);
  /* 118e3e05 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3e08 pop edi */
  EDI = (pop32());
  /* 118e3e09 pop esi */
  ESI = (pop32());
  /* 118e3e0a pop ebp */
  EBP = (pop32());
  /* 118e3e0b pop ebx */
  EBX = (pop32());
  /* 118e3e0c ret  */
  ESPCHK(0x118e3040u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e10 @ 0x118e3e10 (429 bytes, 130 insns) */
void f_118e3e10(void) {
  FTRACE(0x118e3e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e3e10 push ebx */
  push32((uint32_t)(EBX));
  /* 118e3e11 push ebp */
  push32((uint32_t)(EBP));
  /* 118e3e12 mov ebp, dword ptr [0x118ef138] */
  EBP = (r32((uint32_t)(0x118ef138)));
  /* 118e3e18 push esi */
  push32((uint32_t)(ESI));
  /* 118e3e19 push edi */
  push32((uint32_t)(EDI));
  /* 118e3e1a mov edi, dword ptr [0x118ef13c] */
  EDI = (r32((uint32_t)(0x118ef13c)));
L_118e3e20:;
  /* 118e3e20 call edi */
  call_ind((uint32_t)(EDI), 0x118e3e22u);
  /* 118e3e22 push 0x118f166c */
  push32((uint32_t)(0x118f166cu));
  /* 118e3e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3e29 push 0x118f1658 */
  push32((uint32_t)(0x118f1658u));
  /* 118e3e2e push 9 */
  push32((uint32_t)(0x9u));
  /* 118e3e30 call ebp */
  call_ind((uint32_t)(EBP), 0x118e3e32u);
  /* 118e3e32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3e35 mov esi, eax */
  ESI = (EAX);
  /* 118e3e37 call edi */
  call_ind((uint32_t)(EDI), 0x118e3e39u);
  /* 118e3e39 mov eax, esi */
  EAX = (ESI);
  /* 118e3e3b sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e3e3e je 0x118e3e89 */
  if (C.zf) goto L_118e3e89;
  /* 118e3e40 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e3e41 jne 0x118e3faf */
  if (!C.zf) goto L_118e3faf;
  /* 118e3e47 mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3e4d call 0x118e2090 */
  push32(0x118e3e52u); f_118e2090();
  /* 118e3e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e3e54 jne 0x118e3e66 */
  if (!C.zf) goto L_118e3e66;
  /* 118e3e56 push 0x118f1648 */
  push32((uint32_t)(0x118f1648u));
  /* 118e3e5b call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e3e61u);
  /* 118e3e61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3e64 jmp 0x118e3e20 */
  goto L_118e3e20;
L_118e3e66:;
  /* 118e3e66 mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3e6c call 0x118e2650 */
  push32(0x118e3e71u); f_118e2650();
  /* 118e3e71 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e3e73 jne 0x118e3fb8 */
  if (!C.zf) goto L_118e3fb8;
  /* 118e3e79 push 0x118f108c */
  push32((uint32_t)(0x118f108cu));
  /* 118e3e7e call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e3e84u);
  /* 118e3e84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3e87 jmp 0x118e3e20 */
  goto L_118e3e20;
L_118e3e89:;
  /* 118e3e89 mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3e8f call 0x118e2090 */
  push32(0x118e3e94u); f_118e2090();
  /* 118e3e94 mov esi, eax */
  ESI = (EAX);
  /* 118e3e96 call edi */
  call_ind((uint32_t)(EDI), 0x118e3e98u);
  /* 118e3e98 push 0x118f1618 */
  push32((uint32_t)(0x118f1618u));
  /* 118e3e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3e9f push 0x118f1604 */
  push32((uint32_t)(0x118f1604u));
  /* 118e3ea4 push 9 */
  push32((uint32_t)(0x9u));
  /* 118e3ea6 call ebp */
  call_ind((uint32_t)(EBP), 0x118e3ea8u);
  /* 118e3ea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3eab mov ebx, eax */
  EBX = (EAX);
  /* 118e3ead call edi */
  call_ind((uint32_t)(EDI), 0x118e3eafu);
  /* 118e3eaf mov eax, ebx */
  EAX = (EBX);
  /* 118e3eb1 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e3eb4 je 0x118e3ef1 */
  if (C.zf) goto L_118e3ef1;
  /* 118e3eb6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e3eb7 jne 0x118e3fa1 */
  if (!C.zf) goto L_118e3fa1;
  /* 118e3ebd cmp esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e3ec0 jge 0x118e3ee1 */
  if ((C.sf==C.of)) goto L_118e3ee1;
  /* 118e3ec2 push 0x118f15f8 */
  push32((uint32_t)(0x118f15f8u));
  /* 118e3ec7 call dword ptr [0x118ef140] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef140))), 0x118e3ecdu);
  /* 118e3ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3ed0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e3ed2 je 0x118e3e89 */
  if (C.zf) goto L_118e3e89;
  /* 118e3ed4 mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3eda call 0x118e2600 */
  push32(0x118e3edfu); f_118e2600();
  /* 118e3edf jmp 0x118e3e89 */
  goto L_118e3e89;
L_118e3ee1:;
  /* 118e3ee1 push 0x118f15e8 */
  push32((uint32_t)(0x118f15e8u));
  /* 118e3ee6 call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e3eecu);
  /* 118e3eec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e3eef jmp 0x118e3e89 */
  goto L_118e3e89;
L_118e3ef1:;
  /* 118e3ef1 mov eax, dword ptr [0x118f5c08] */
  EAX = (r32((uint32_t)(0x118f5c08)));
  /* 118e3ef6 mov ecx, dword ptr [eax + 0x8d] */
  ECX = (r32((uint32_t)(EAX + 0x8d)));
  /* 118e3efc mov edx, dword ptr [eax + 0x89] */
  EDX = (r32((uint32_t)(EAX + 0x89)));
  /* 118e3f02 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f05 imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f08 push ecx */
  push32((uint32_t)(ECX));
  /* 118e3f09 mov ecx, dword ptr [eax + 0x85] */
  ECX = (r32((uint32_t)(EAX + 0x85)));
  /* 118e3f0f push edx */
  push32((uint32_t)(EDX));
  /* 118e3f10 mov edx, dword ptr [eax + 0x81] */
  EDX = (r32((uint32_t)(EAX + 0x81)));
  /* 118e3f16 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f19 imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f1c push ecx */
  push32((uint32_t)(ECX));
  /* 118e3f1d mov ecx, dword ptr [eax + 0x7d] */
  ECX = (r32((uint32_t)(EAX + 0x7d)));
  /* 118e3f20 push edx */
  push32((uint32_t)(EDX));
  /* 118e3f21 mov edx, dword ptr [eax + 0x79] */
  EDX = (r32((uint32_t)(EAX + 0x79)));
  /* 118e3f24 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f27 imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f2a push ecx */
  push32((uint32_t)(ECX));
  /* 118e3f2b mov ecx, dword ptr [eax + 0xa5] */
  ECX = (r32((uint32_t)(EAX + 0xa5)));
  /* 118e3f31 push edx */
  push32((uint32_t)(EDX));
  /* 118e3f32 mov edx, dword ptr [eax + 0xa1] */
  EDX = (r32((uint32_t)(EAX + 0xa1)));
  /* 118e3f38 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f3b imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f3e push ecx */
  push32((uint32_t)(ECX));
  /* 118e3f3f mov ecx, dword ptr [eax + 0x9d] */
  ECX = (r32((uint32_t)(EAX + 0x9d)));
  /* 118e3f45 push edx */
  push32((uint32_t)(EDX));
  /* 118e3f46 mov edx, dword ptr [eax + 0x99] */
  EDX = (r32((uint32_t)(EAX + 0x99)));
  /* 118e3f4c imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f4f imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f52 push ecx */
  push32((uint32_t)(ECX));
  /* 118e3f53 mov ecx, dword ptr [eax + 0x95] */
  ECX = (r32((uint32_t)(EAX + 0x95)));
  /* 118e3f59 push edx */
  push32((uint32_t)(EDX));
  /* 118e3f5a mov edx, dword ptr [eax + 0x91] */
  EDX = (r32((uint32_t)(EAX + 0x91)));
  /* 118e3f60 imul ecx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f63 imul edx, esi */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e3f66 push ecx */
  push32((uint32_t)(ECX));
  /* 118e3f67 mov ecx, dword ptr [eax + 0x415] */
  ECX = (r32((uint32_t)(EAX + 0x415)));
  /* 118e3f6d push edx */
  push32((uint32_t)(EDX));
  /* 118e3f6e mov edx, dword ptr [eax + 0x411] */
  EDX = (r32((uint32_t)(EAX + 0x411)));
  /* 118e3f74 push ecx */
  push32((uint32_t)(ECX));
  /* 118e3f75 mov ecx, dword ptr [eax + 0x40d] */
  ECX = (r32((uint32_t)(EAX + 0x40d)));
  /* 118e3f7b push edx */
  push32((uint32_t)(EDX));
  /* 118e3f7c mov edx, dword ptr [eax + 0x409] */
  EDX = (r32((uint32_t)(EAX + 0x409)));
  /* 118e3f82 push ecx */
  push32((uint32_t)(ECX));
  /* 118e3f83 mov ecx, dword ptr [eax + 0x405] */
  ECX = (r32((uint32_t)(EAX + 0x405)));
  /* 118e3f89 push edx */
  push32((uint32_t)(EDX));
  /* 118e3f8a mov edx, dword ptr [eax + 0x401] */
  EDX = (r32((uint32_t)(EAX + 0x401)));
  /* 118e3f90 push ecx */
  push32((uint32_t)(ECX));
  /* 118e3f91 push edx */
  push32((uint32_t)(EDX));
  /* 118e3f92 push esi */
  push32((uint32_t)(ESI));
  /* 118e3f93 push 0x118f15dc */
  push32((uint32_t)(0x118f15dcu));
  /* 118e3f98 call dword ptr [0x118ef164] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef164))), 0x118e3f9eu);
  /* 118e3f9e add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e3fa1:;
  /* 118e3fa1 cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e3fa4 jl 0x118e3e89 */
  if ((C.sf!=C.of)) goto L_118e3e89;
  /* 118e3faa jmp 0x118e3e20 */
  goto L_118e3e20;
L_118e3faf:;
  /* 118e3faf cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e3fb2 jl 0x118e3e20 */
  if ((C.sf!=C.of)) goto L_118e3e20;
L_118e3fb8:;
  /* 118e3fb8 pop edi */
  EDI = (pop32());
  /* 118e3fb9 pop esi */
  ESI = (pop32());
  /* 118e3fba pop ebp */
  EBP = (pop32());
  /* 118e3fbb pop ebx */
  EBX = (pop32());
  /* 118e3fbc ret  */
  ESPCHK(0x118e3e10u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x118e3fc0 (1689 bytes, 492 insns) */
void f_118e3fc0(void) {
  FTRACE(0x118e3fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e3fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 118e3fc1 push ebx */
  push32((uint32_t)(EBX));
  /* 118e3fc2 push ebp */
  push32((uint32_t)(EBP));
  /* 118e3fc3 push esi */
  push32((uint32_t)(ESI));
  /* 118e3fc4 push edi */
  push32((uint32_t)(EDI));
  /* 118e3fc5 mov edi, dword ptr [0x118ef1b0] */
  EDI = (r32((uint32_t)(0x118ef1b0)));
  /* 118e3fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3fcd call edi */
  call_ind((uint32_t)(EDI), 0x118e3fcfu);
  /* 118e3fcf push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3fd1 push 0x118f56c0 */
  push32((uint32_t)(0x118f56c0u));
  /* 118e3fd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3fd8 mov dword ptr [esp + 0x20], eax */
  w32((uint32_t)(ESP + 0x20), (EAX));
  /* 118e3fdc call dword ptr [0x118ef1d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d4))), 0x118e3fe2u);
  /* 118e3fe2 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3fe4 call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e3feau);
  /* 118e3fea mov esi, dword ptr [0x118ef16c] */
  ESI = (r32((uint32_t)(0x118ef16c)));
  /* 118e3ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e3ff2 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3ff4 push 0x118f5be8 */
  push32((uint32_t)(0x118f5be8u));
  /* 118e3ff9 call esi */
  call_ind((uint32_t)(ESI), 0x118e3ffbu);
  /* 118e3ffb push 1 */
  push32((uint32_t)(0x1u));
  /* 118e3ffd push 5 */
  push32((uint32_t)(0x5u));
  /* 118e3fff push 0x11905330 */
  push32((uint32_t)(0x11905330u));
  /* 118e4004 call esi */
  call_ind((uint32_t)(ESI), 0x118e4006u);
  /* 118e4006 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4008 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e400a push 0x118f5be0 */
  push32((uint32_t)(0x118f5be0u));
  /* 118e400f call esi */
  call_ind((uint32_t)(ESI), 0x118e4011u);
  /* 118e4011 push 5 */
  push32((uint32_t)(0x5u));
  /* 118e4013 call dword ptr [0x118ef1c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1c4))), 0x118e4019u);
  /* 118e4019 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e401b call dword ptr [0x118ef110] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef110))), 0x118e4021u);
  /* 118e4021 mov ebp, dword ptr [0x118ef114] */
  EBP = (r32((uint32_t)(0x118ef114)));
  /* 118e4027 mov esi, dword ptr [0x118ef1ec] */
  ESI = (r32((uint32_t)(0x118ef1ec)));
  /* 118e402d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4030 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4032 je 0x118e411b */
  if (C.zf) goto L_118e411b;
  /* 118e4038 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e403a push 0 */
  push32((uint32_t)(0x0u));
  /* 118e403c call dword ptr [0x118ef118] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef118))), 0x118e4042u);
  /* 118e4042 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4044 call edi */
  call_ind((uint32_t)(EDI), 0x118e4046u);
  /* 118e4046 mov ecx, 5 */
  ECX = (0x5u);
  /* 118e404b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e404d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 118e4050 mov ecx, dword ptr [0x119093ec] */
  ECX = (r32((uint32_t)(0x119093ec)));
  /* 118e4056 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e4059 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e405c shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 118e405f push eax */
  push32((uint32_t)(EAX));
  /* 118e4060 push ecx */
  push32((uint32_t)(ECX));
  /* 118e4061 call 0x118e3010 */
  push32(0x118e4066u); f_118e3010();
  /* 118e4066 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4068 call edi */
  call_ind((uint32_t)(EDI), 0x118e406au);
  /* 118e406a add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e406d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e4070 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e4073 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 118e4076 mov eax, dword ptr [0x118f1080] */
  EAX = (r32((uint32_t)(0x118f1080)));
  /* 118e407b shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 118e407e push edx */
  push32((uint32_t)(EDX));
  /* 118e407f push eax */
  push32((uint32_t)(EAX));
  /* 118e4080 call 0x118e3010 */
  push32(0x118e4085u); f_118e3010();
  /* 118e4085 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 118e4087 push 2 */
  push32((uint32_t)(0x2u));
  /* 118e4089 push 2 */
  push32((uint32_t)(0x2u));
  /* 118e408b push 0 */
  push32((uint32_t)(0x0u));
  /* 118e408d push 0x118f1720 */
  push32((uint32_t)(0x118f1720u));
  /* 118e4092 push 2 */
  push32((uint32_t)(0x2u));
  /* 118e4094 call dword ptr [0x118ef11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef11c))), 0x118e409au);
  /* 118e409a push 0x118f1718 */
  push32((uint32_t)(0x118f1718u));
  /* 118e409f call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e40a5u);
  /* 118e40a5 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 118e40a7 call ebp */
  call_ind((uint32_t)(EBP), 0x118e40a9u);
  /* 118e40a9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e40ac push 0 */
  push32((uint32_t)(0x0u));
  /* 118e40ae call edi */
  call_ind((uint32_t)(EDI), 0x118e40b0u);
  /* 118e40b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e40b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e40b5 jle 0x118e40c2 */
  if ((C.zf||C.sf!=C.of)) goto L_118e40c2;
  /* 118e40b7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 118e40b9 call ebp */
  call_ind((uint32_t)(EBP), 0x118e40bbu);
  /* 118e40bb push 0x54 */
  push32((uint32_t)(0x54u));
  /* 118e40bd call ebp */
  call_ind((uint32_t)(EBP), 0x118e40bfu);
  /* 118e40bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e40c2:;
  /* 118e40c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e40c4 call edi */
  call_ind((uint32_t)(EDI), 0x118e40c6u);
  /* 118e40c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e40c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e40cc jle 0x118e40d5 */
  if ((C.zf||C.sf!=C.of)) goto L_118e40d5;
  /* 118e40ce push 0x59 */
  push32((uint32_t)(0x59u));
  /* 118e40d0 call ebp */
  call_ind((uint32_t)(EBP), 0x118e40d2u);
  /* 118e40d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e40d5:;
  /* 118e40d5 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 118e40d7 call ebp */
  call_ind((uint32_t)(EBP), 0x118e40d9u);
  /* 118e40d9 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 118e40db call ebp */
  call_ind((uint32_t)(EBP), 0x118e40ddu);
  /* 118e40dd push 0 */
  push32((uint32_t)(0x0u));
  /* 118e40df call edi */
  call_ind((uint32_t)(EDI), 0x118e40e1u);
  /* 118e40e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e40e3 mov ebx, eax */
  EBX = (EAX);
  /* 118e40e5 call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e40ebu);
  /* 118e40eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e40ee cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e40f1 jle 0x118e40ff */
  if ((C.zf||C.sf!=C.of)) goto L_118e40ff;
  /* 118e40f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e40f5 push 0x11905340 */
  push32((uint32_t)(0x11905340u));
  /* 118e40fa call esi */
  call_ind((uint32_t)(ESI), 0x118e40fcu);
  /* 118e40fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e40ff:;
  /* 118e40ff cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4102 jle 0x118e4110 */
  if ((C.zf||C.sf!=C.of)) goto L_118e4110;
  /* 118e4104 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4106 push 0x11905338 */
  push32((uint32_t)(0x11905338u));
  /* 118e410b call esi */
  call_ind((uint32_t)(ESI), 0x118e410du);
  /* 118e410d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e4110:;
  /* 118e4110 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e4112 call dword ptr [0x118ef144] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef144))), 0x118e4118u);
  /* 118e4118 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e411b:;
  /* 118e411b mov ecx, 0x118f4f68 */
  ECX = (0x118f4f68u);
  /* 118e4120 call 0x118e1870 */
  push32(0x118e4125u); f_118e1870();
  /* 118e4125 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4127 je 0x118e41ff */
  if (C.zf) goto L_118e41ff;
  /* 118e412d push 1 */
  push32((uint32_t)(0x1u));
  /* 118e412f call dword ptr [0x118ef110] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef110))), 0x118e4135u);
  /* 118e4135 mov ebx, dword ptr [0x118ef120] */
  EBX = (r32((uint32_t)(0x118ef120)));
  /* 118e413b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e413e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4140 je 0x118e4170 */
  if (C.zf) goto L_118e4170;
  /* 118e4142 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4144 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4146 call dword ptr [0x118ef118] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef118))), 0x118e414cu);
  /* 118e414c push 0x118f170c */
  push32((uint32_t)(0x118f170cu));
  /* 118e4151 call dword ptr [0x118ef180] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef180))), 0x118e4157u);
  /* 118e4157 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e415a mov ecx, 0x118f5a38 */
  ECX = (0x118f5a38u);
  /* 118e415f call 0x118e1950 */
  push32(0x118e4164u); f_118e1950();
  /* 118e4164 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 118e4169 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e416b call ebx */
  call_ind((uint32_t)(EBX), 0x118e416du);
  /* 118e416d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e4170:;
  /* 118e4170 mov ecx, 0x118f50f0 */
  ECX = (0x118f50f0u);
  /* 118e4175 call 0x118e14e0 */
  push32(0x118e417au); f_118e14e0();
  /* 118e417a mov ecx, 0x118f5260 */
  ECX = (0x118f5260u);
  /* 118e417f call 0x118e14e0 */
  push32(0x118e4184u); f_118e14e0();
  /* 118e4184 mov ecx, 0x118f53d0 */
  ECX = (0x118f53d0u);
  /* 118e4189 call 0x118e14e0 */
  push32(0x118e418eu); f_118e14e0();
  /* 118e418e mov ecx, 0x118f5540 */
  ECX = (0x118f5540u);
  /* 118e4193 call 0x118e14e0 */
  push32(0x118e4198u); f_118e14e0();
  /* 118e4198 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e419a call dword ptr [0x118ef124] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef124))), 0x118e41a0u);
  /* 118e41a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e41a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e41a5 je 0x118e41ff */
  if (C.zf) goto L_118e41ff;
  /* 118e41a7 mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e41ac call 0x118e13d0 */
  push32(0x118e41b1u); f_118e13d0();
  /* 118e41b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e41b3 je 0x118e41ff */
  if (C.zf) goto L_118e41ff;
  /* 118e41b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e41b7 call edi */
  call_ind((uint32_t)(EDI), 0x118e41b9u);
  /* 118e41b9 mov ecx, 0xc */
  ECX = (0xcu);
  /* 118e41be sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e41c0 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 118e41c3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e41c6 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 118e41c9 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e41cc push ecx */
  push32((uint32_t)(ECX));
  /* 118e41cd push 1 */
  push32((uint32_t)(0x1u));
  /* 118e41cf call ebx */
  call_ind((uint32_t)(EBX), 0x118e41d1u);
  /* 118e41d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e41d4 mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e41d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e41db call 0x118e12a0 */
  push32(0x118e41e0u); f_118e12a0();
  /* 118e41e0 call 0x118e47e8 */
  push32(0x118e41e5u); f_118e47e8();
  /* 118e41e5 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 118e41e7 je 0x118e41f0 */
  if (C.zf) goto L_118e41f0;
  /* 118e41e9 push 0x11905068 */
  push32((uint32_t)(0x11905068u));
  /* 118e41ee jmp 0x118e41f5 */
  goto L_118e41f5;
L_118e41f0:;
  /* 118e41f0 push 0x118f5780 */
  push32((uint32_t)(0x118f5780u));
L_118e41f5:;
  /* 118e41f5 mov ecx, 0x11905070 */
  ECX = (0x11905070u);
  /* 118e41fa call 0x118e1380 */
  push32(0x118e41ffu); f_118e1380();
L_118e41ff:;
  /* 118e41ff push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4201 mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e4206 call 0x118e2b90 */
  push32(0x118e420bu); f_118e2b90();
  /* 118e420b mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e4210 call 0x118e2d60 */
  push32(0x118e4215u); f_118e2d60();
  /* 118e4215 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4218 jge 0x118e4226 */
  if ((C.sf==C.of)) goto L_118e4226;
  /* 118e421a push 4 */
  push32((uint32_t)(0x4u));
  /* 118e421c mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e4221 call 0x118e2b90 */
  push32(0x118e4226u); f_118e2b90();
L_118e4226:;
  /* 118e4226 mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e422b call 0x118e2d60 */
  push32(0x118e4230u); f_118e2d60();
  /* 118e4230 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4233 jle 0x118e4241 */
  if ((C.zf||C.sf!=C.of)) goto L_118e4241;
  /* 118e4235 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4237 mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e423c call 0x118e2b90 */
  push32(0x118e4241u); f_118e2b90();
L_118e4241:;
  /* 118e4241 push 0x11905058 */
  push32((uint32_t)(0x11905058u));
  /* 118e4246 push 0x118f5bf8 */
  push32((uint32_t)(0x118f5bf8u));
  /* 118e424b mov ecx, 0x119050d8 */
  ECX = (0x119050d8u);
  /* 118e4250 call 0x118e2e30 */
  push32(0x118e4255u); f_118e2e30();
  /* 118e4255 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4257 mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e425c call 0x118e2b90 */
  push32(0x118e4261u); f_118e2b90();
  /* 118e4261 mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e4266 call 0x118e2d60 */
  push32(0x118e426bu); f_118e2d60();
  /* 118e426b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e426e jge 0x118e427c */
  if ((C.sf==C.of)) goto L_118e427c;
  /* 118e4270 push 4 */
  push32((uint32_t)(0x4u));
  /* 118e4272 mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e4277 call 0x118e2b90 */
  push32(0x118e427cu); f_118e2b90();
L_118e427c:;
  /* 118e427c mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e4281 call 0x118e2d60 */
  push32(0x118e4286u); f_118e2d60();
  /* 118e4286 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4289 jle 0x118e4297 */
  if ((C.zf||C.sf!=C.of)) goto L_118e4297;
  /* 118e428b push 0 */
  push32((uint32_t)(0x0u));
  /* 118e428d mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e4292 call 0x118e2b90 */
  push32(0x118e4297u); f_118e2b90();
L_118e4297:;
  /* 118e4297 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 118e429b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e429d jle 0x118e42b3 */
  if ((C.zf||C.sf!=C.of)) goto L_118e42b3;
  /* 118e429f push 0x11905068 */
  push32((uint32_t)(0x11905068u));
  /* 118e42a4 push 0x118f5bf8 */
  push32((uint32_t)(0x118f5bf8u));
  /* 118e42a9 mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e42ae call 0x118e2e30 */
  push32(0x118e42b3u); f_118e2e30();
L_118e42b3:;
  /* 118e42b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e42b5 mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e42ba call 0x118e2b90 */
  push32(0x118e42bfu); f_118e2b90();
  /* 118e42bf mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e42c4 call 0x118e2d60 */
  push32(0x118e42c9u); f_118e2d60();
  /* 118e42c9 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e42cc jge 0x118e42da */
  if ((C.sf==C.of)) goto L_118e42da;
  /* 118e42ce push 4 */
  push32((uint32_t)(0x4u));
  /* 118e42d0 mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e42d5 call 0x118e2b90 */
  push32(0x118e42dau); f_118e2b90();
L_118e42da:;
  /* 118e42da mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e42df call 0x118e2d60 */
  push32(0x118e42e4u); f_118e2d60();
  /* 118e42e4 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e42e7 jle 0x118e42f5 */
  if ((C.zf||C.sf!=C.of)) goto L_118e42f5;
  /* 118e42e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e42eb mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e42f0 call 0x118e2b90 */
  push32(0x118e42f5u); f_118e2b90();
L_118e42f5:;
  /* 118e42f5 push 0x11905050 */
  push32((uint32_t)(0x11905050u));
  /* 118e42fa push 0x118f5780 */
  push32((uint32_t)(0x118f5780u));
  /* 118e42ff mov ecx, 0x119051c8 */
  ECX = (0x119051c8u);
  /* 118e4304 call 0x118e2e30 */
  push32(0x118e4309u); f_118e2e30();
  /* 118e4309 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e430b mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e4310 call 0x118e2b90 */
  push32(0x118e4315u); f_118e2b90();
  /* 118e4315 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e431a call 0x118e2d60 */
  push32(0x118e431fu); f_118e2d60();
  /* 118e431f cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4322 jge 0x118e4330 */
  if ((C.sf==C.of)) goto L_118e4330;
  /* 118e4324 push 4 */
  push32((uint32_t)(0x4u));
  /* 118e4326 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e432b call 0x118e2b90 */
  push32(0x118e4330u); f_118e2b90();
L_118e4330:;
  /* 118e4330 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e4335 call 0x118e2d60 */
  push32(0x118e433au); f_118e2d60();
  /* 118e433a cmp eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e433d jle 0x118e434b */
  if ((C.zf||C.sf!=C.of)) goto L_118e434b;
  /* 118e433f push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4341 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e4346 call 0x118e2b90 */
  push32(0x118e434bu); f_118e2b90();
L_118e434b:;
  /* 118e434b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 118e434d jle 0x118e4363 */
  if ((C.zf||C.sf!=C.of)) goto L_118e4363;
  /* 118e434f push 0x11905058 */
  push32((uint32_t)(0x11905058u));
  /* 118e4354 push 0x118f5bf8 */
  push32((uint32_t)(0x118f5bf8u));
  /* 118e4359 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e435e call 0x118e2e30 */
  push32(0x118e4363u); f_118e2e30();
L_118e4363:;
  /* 118e4363 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4365 mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e436a call 0x118e2b90 */
  push32(0x118e436fu); f_118e2b90();
  /* 118e436f mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e4374 call 0x118e2d60 */
  push32(0x118e4379u); f_118e2d60();
  /* 118e4379 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e437c jge 0x118e438a */
  if ((C.sf==C.of)) goto L_118e438a;
  /* 118e437e push 4 */
  push32((uint32_t)(0x4u));
  /* 118e4380 mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e4385 call 0x118e2b90 */
  push32(0x118e438au); f_118e2b90();
L_118e438a:;
  /* 118e438a mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e438f call 0x118e2d60 */
  push32(0x118e4394u); f_118e2d60();
  /* 118e4394 cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4397 jle 0x118e43a5 */
  if ((C.zf||C.sf!=C.of)) goto L_118e43a5;
  /* 118e4399 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e439b mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e43a0 call 0x118e2b90 */
  push32(0x118e43a5u); f_118e2b90();
L_118e43a5:;
  /* 118e43a5 push 0x11905050 */
  push32((uint32_t)(0x11905050u));
  /* 118e43aa push 0x118f50d8 */
  push32((uint32_t)(0x118f50d8u));
  /* 118e43af mov ecx, 0x119052b8 */
  ECX = (0x119052b8u);
  /* 118e43b4 call 0x118e2e30 */
  push32(0x118e43b9u); f_118e2e30();
  /* 118e43b9 mov ecx, dword ptr [0x11905060] */
  ECX = (r32((uint32_t)(0x11905060)));
  /* 118e43bf call 0x118e2720 */
  push32(0x118e43c4u); f_118e2720();
  /* 118e43c4 mov edx, dword ptr [0x11905060] */
  EDX = (r32((uint32_t)(0x11905060)));
  /* 118e43ca mov eax, dword ptr [edx + 0x35] */
  EAX = (r32((uint32_t)(EDX + 0x35)));
  /* 118e43cd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e43d0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e43d3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e43d6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e43d9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e43dc lea ecx, [eax*2 + 0x118f5c28] */
  ECX = ((uint32_t)(EAX*2 + 0x118f5c28));
  /* 118e43e3 call 0x118e1da0 */
  push32(0x118e43e8u); f_118e1da0();
  /* 118e43e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e43ea sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118e43ed push ecx */
  push32((uint32_t)(ECX));
  /* 118e43ee mov ecx, dword ptr [0x11905060] */
  ECX = (r32((uint32_t)(0x11905060)));
  /* 118e43f4 call 0x118e1e50 */
  push32(0x118e43f9u); f_118e1e50();
  /* 118e43f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e43fb je 0x118e4474 */
  if (C.zf) goto L_118e4474;
  /* 118e43fd mov eax, dword ptr [0x118f5c08] */
  EAX = (r32((uint32_t)(0x118f5c08)));
  /* 118e4402 mov edx, dword ptr [eax + 0x30] */
  EDX = (r32((uint32_t)(EAX + 0x30)));
  /* 118e4405 mov ecx, dword ptr [eax + 0x2c] */
  ECX = (r32((uint32_t)(EAX + 0x2c)));
  /* 118e4408 push edx */
  push32((uint32_t)(EDX));
  /* 118e4409 mov edx, dword ptr [eax + 0x28] */
  EDX = (r32((uint32_t)(EAX + 0x28)));
  /* 118e440c push ecx */
  push32((uint32_t)(ECX));
  /* 118e440d mov ecx, dword ptr [eax + 0x24] */
  ECX = (r32((uint32_t)(EAX + 0x24)));
  /* 118e4410 push edx */
  push32((uint32_t)(EDX));
  /* 118e4411 mov edx, dword ptr [eax + 0x20] */
  EDX = (r32((uint32_t)(EAX + 0x20)));
  /* 118e4414 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 118e4417 push ecx */
  push32((uint32_t)(ECX));
  /* 118e4418 push edx */
  push32((uint32_t)(EDX));
  /* 118e4419 push eax */
  push32((uint32_t)(EAX));
  /* 118e441a push 0x118f16fc */
  push32((uint32_t)(0x118f16fcu));
  /* 118e441f call dword ptr [0x118ef164] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef164))), 0x118e4425u);
  /* 118e4425 push 0x118f16ec */
  push32((uint32_t)(0x118f16ecu));
  /* 118e442a call dword ptr [0x118ef140] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef140))), 0x118e4430u);
  /* 118e4430 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4433 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4435 je 0x118e4474 */
  if (C.zf) goto L_118e4474;
  /* 118e4437 mov eax, dword ptr [0x11905060] */
  EAX = (r32((uint32_t)(0x11905060)));
  /* 118e443c lea ecx, [eax + 0x39] */
  ECX = ((uint32_t)(EAX + 0x39));
  /* 118e443f mov eax, dword ptr [eax + 0x35] */
  EAX = (r32((uint32_t)(EAX + 0x35)));
  /* 118e4442 push ecx */
  push32((uint32_t)(ECX));
  /* 118e4443 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e4446 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e4449 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e444c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 118e444f lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 118e4452 lea ecx, [edx*2 + 0x118f5c28] */
  ECX = ((uint32_t)(EDX*2 + 0x118f5c28));
  /* 118e4459 call 0x118e1fc0 */
  push32(0x118e445eu); f_118e1fc0();
  /* 118e445e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4460 jne 0x118e4474 */
  if (!C.zf) goto L_118e4474;
  /* 118e4462 mov ebx, dword ptr [0x118ef180] */
  EBX = (r32((uint32_t)(0x118ef180)));
  /* 118e4468 push 0x118f108c */
  push32((uint32_t)(0x118f108cu));
  /* 118e446d call ebx */
  call_ind((uint32_t)(EBX), 0x118e446fu);
  /* 118e446f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4472 jmp 0x118e447a */
  goto L_118e447a;
L_118e4474:;
  /* 118e4474 mov ebx, dword ptr [0x118ef180] */
  EBX = (r32((uint32_t)(0x118ef180)));
L_118e447a:;
  /* 118e447a mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e4480 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4482 call 0x118e1e50 */
  push32(0x118e4487u); f_118e1e50();
  /* 118e4487 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4489 je 0x118e44c3 */
  if (C.zf) goto L_118e44c3;
  /* 118e448b mov eax, dword ptr [0x118f5c08] */
  EAX = (r32((uint32_t)(0x118f5c08)));
  /* 118e4490 mov ecx, dword ptr [eax + 0x1845] */
  ECX = (r32((uint32_t)(EAX + 0x1845)));
  /* 118e4496 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118e4498 jne 0x118e44a1 */
  if (!C.zf) goto L_118e44a1;
  /* 118e449a call 0x118e3e10 */
  push32(0x118e449fu); f_118e3e10();
  /* 118e449f jmp 0x118e44c3 */
  goto L_118e44c3;
L_118e44a1:;
  /* 118e44a1 push 0x118f16dc */
  push32((uint32_t)(0x118f16dcu));
  /* 118e44a6 call dword ptr [0x118ef140] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef140))), 0x118e44acu);
  /* 118e44ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e44af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e44b1 je 0x118e44c3 */
  if (C.zf) goto L_118e44c3;
  /* 118e44b3 mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e44b9 mov dword ptr [ecx + 0x1845], 0 */
  w32((uint32_t)(ECX + 0x1845), (0x0u));
L_118e44c3:;
  /* 118e44c3 mov ecx, dword ptr [0x118f5c08] */
  ECX = (r32((uint32_t)(0x118f5c08)));
  /* 118e44c9 call 0x118e2260 */
  push32(0x118e44ceu); f_118e2260();
  /* 118e44ce mov ecx, 0x118f4f08 */
  ECX = (0x118f4f08u);
  /* 118e44d3 call 0x118e1870 */
  push32(0x118e44d8u); f_118e1870();
  /* 118e44d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e44da je 0x118e452c */
  if (C.zf) goto L_118e452c;
  /* 118e44dc mov ecx, 0x118f5b80 */
  ECX = (0x118f5b80u);
  /* 118e44e1 call 0x118e1870 */
  push32(0x118e44e6u); f_118e1870();
  /* 118e44e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e44e8 jne 0x118e44f4 */
  if (!C.zf) goto L_118e44f4;
  /* 118e44ea mov ecx, 0x118f56c8 */
  ECX = (0x118f56c8u);
  /* 118e44ef call 0x118e1a50 */
  push32(0x118e44f4u); f_118e1a50();
L_118e44f4:;
  /* 118e44f4 mov ecx, 0x118f4fc8 */
  ECX = (0x118f4fc8u);
  /* 118e44f9 call 0x118e1870 */
  push32(0x118e44feu); f_118e1870();
  /* 118e44fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4500 je 0x118e452c */
  if (C.zf) goto L_118e452c;
  /* 118e4502 push 2 */
  push32((uint32_t)(0x2u));
  /* 118e4504 call dword ptr [0x118ef110] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef110))), 0x118e450au);
  /* 118e450a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e450d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e450f je 0x118e452c */
  if (C.zf) goto L_118e452c;
  /* 118e4511 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4513 push 2 */
  push32((uint32_t)(0x2u));
  /* 118e4515 call dword ptr [0x118ef118] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef118))), 0x118e451bu);
  /* 118e451b push 0x118f16d0 */
  push32((uint32_t)(0x118f16d0u));
  /* 118e4520 call ebx */
  call_ind((uint32_t)(EBX), 0x118e4522u);
  /* 118e4522 push 0x118f16c4 */
  push32((uint32_t)(0x118f16c4u));
  /* 118e4527 call ebx */
  call_ind((uint32_t)(EBX), 0x118e4529u);
  /* 118e4529 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e452c:;
  /* 118e452c mov ecx, 0x118f5b80 */
  ECX = (0x118f5b80u);
  /* 118e4531 call 0x118e1870 */
  push32(0x118e4536u); f_118e1870();
  /* 118e4536 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4538 je 0x118e460e */
  if (C.zf) goto L_118e460e;
  /* 118e453e push 3 */
  push32((uint32_t)(0x3u));
  /* 118e4540 call dword ptr [0x118ef110] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef110))), 0x118e4546u);
  /* 118e4546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4549 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e454b je 0x118e460e */
  if (C.zf) goto L_118e460e;
  /* 118e4551 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4553 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e4555 call dword ptr [0x118ef118] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef118))), 0x118e455bu);
  /* 118e455b push 0x118f16bc */
  push32((uint32_t)(0x118f16bcu));
  /* 118e4560 call ebx */
  call_ind((uint32_t)(EBX), 0x118e4562u);
  /* 118e4562 push 0x118f16b0 */
  push32((uint32_t)(0x118f16b0u));
  /* 118e4567 call ebx */
  call_ind((uint32_t)(EBX), 0x118e4569u);
  /* 118e4569 push 3 */
  push32((uint32_t)(0x3u));
  /* 118e456b call dword ptr [0x118ef1d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1d8))), 0x118e4571u);
  /* 118e4571 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4573 push 0x118f56b8 */
  push32((uint32_t)(0x118f56b8u));
  /* 118e4578 call esi */
  call_ind((uint32_t)(ESI), 0x118e457au);
  /* 118e457a push 1 */
  push32((uint32_t)(0x1u));
  /* 118e457c push 0x118f50d0 */
  push32((uint32_t)(0x118f50d0u));
  /* 118e4581 call esi */
  call_ind((uint32_t)(ESI), 0x118e4583u);
  /* 118e4583 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4585 push 0x118f56b0 */
  push32((uint32_t)(0x118f56b0u));
  /* 118e458a call esi */
  call_ind((uint32_t)(ESI), 0x118e458cu);
  /* 118e458c push 1 */
  push32((uint32_t)(0x1u));
  /* 118e458e push 0x118f5bf0 */
  push32((uint32_t)(0x118f5bf0u));
  /* 118e4593 call esi */
  call_ind((uint32_t)(ESI), 0x118e4595u);
  /* 118e4595 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4597 push 0x11905340 */
  push32((uint32_t)(0x11905340u));
  /* 118e459c call esi */
  call_ind((uint32_t)(ESI), 0x118e459eu);
  /* 118e459e push 1 */
  push32((uint32_t)(0x1u));
  /* 118e45a0 push 0x11905338 */
  push32((uint32_t)(0x11905338u));
  /* 118e45a5 call esi */
  call_ind((uint32_t)(ESI), 0x118e45a7u);
  /* 118e45a7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e45aa push 0 */
  push32((uint32_t)(0x0u));
  /* 118e45ac push 3 */
  push32((uint32_t)(0x3u));
  /* 118e45ae call dword ptr [0x118ef1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef1c8))), 0x118e45b4u);
  /* 118e45b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e45b7 mov ecx, 0x118f5a38 */
  ECX = (0x118f5a38u);
  /* 118e45bc call 0x118e19a0 */
  push32(0x118e45c1u); f_118e19a0();
  /* 118e45c1 mov esi, dword ptr [0x118ef1a0] */
  ESI = (r32((uint32_t)(0x118ef1a0)));
  /* 118e45c7 call esi */
  call_ind((uint32_t)(ESI), 0x118e45c9u);
  /* 118e45c9 push eax */
  push32((uint32_t)(EAX));
  /* 118e45ca mov ecx, 0x11905150 */
  ECX = (0x11905150u);
  /* 118e45cf call 0x118e2bc0 */
  push32(0x118e45d4u); f_118e2bc0();
  /* 118e45d4 call esi */
  call_ind((uint32_t)(ESI), 0x118e45d6u);
  /* 118e45d6 push eax */
  push32((uint32_t)(EAX));
  /* 118e45d7 mov ecx, 0x11905240 */
  ECX = (0x11905240u);
  /* 118e45dc call 0x118e2bc0 */
  push32(0x118e45e1u); f_118e2bc0();
  /* 118e45e1 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 118e45e3 call ebp */
  call_ind((uint32_t)(EBP), 0x118e45e5u);
  /* 118e45e5 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 118e45e7 call ebp */
  call_ind((uint32_t)(EBP), 0x118e45e9u);
  /* 118e45e9 mov esi, dword ptr [0x118ef128] */
  ESI = (r32((uint32_t)(0x118ef128)));
  /* 118e45ef push 0x49 */
  push32((uint32_t)(0x49u));
  /* 118e45f1 call esi */
  call_ind((uint32_t)(ESI), 0x118e45f3u);
  /* 118e45f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e45f5 call edi */
  call_ind((uint32_t)(EDI), 0x118e45f7u);
  /* 118e45f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e45fa cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e45fd jge 0x118e460e */
  if ((C.sf==C.of)) goto L_118e460e;
  /* 118e45ff push 0x45 */
  push32((uint32_t)(0x45u));
  /* 118e4601 call esi */
  call_ind((uint32_t)(ESI), 0x118e4603u);
  /* 118e4603 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 118e4605 call esi */
  call_ind((uint32_t)(ESI), 0x118e4607u);
  /* 118e4607 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 118e4609 call esi */
  call_ind((uint32_t)(ESI), 0x118e460bu);
  /* 118e460b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e460e:;
  /* 118e460e mov dl, byte ptr [0x119093ec] */
  DL = (r8((uint32_t)(0x119093ec)));
  /* 118e4614 mov esi, dword ptr [0x118ef12c] */
  ESI = (r32((uint32_t)(0x118ef12c)));
  /* 118e461a push edx */
  push32((uint32_t)(EDX));
  /* 118e461b call esi */
  call_ind((uint32_t)(ESI), 0x118e461du);
  /* 118e461d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4620 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4622 je 0x118e4634 */
  if (C.zf) goto L_118e4634;
  /* 118e4624 push 0x118f16a8 */
  push32((uint32_t)(0x118f16a8u));
  /* 118e4629 call ebx */
  call_ind((uint32_t)(EBX), 0x118e462bu);
  /* 118e462b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e462e call dword ptr [0x118ef130] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef130))), 0x118e4634u);
L_118e4634:;
  /* 118e4634 mov al, byte ptr [0x118f1080] */
  AL = (r8((uint32_t)(0x118f1080)));
  /* 118e4639 push eax */
  push32((uint32_t)(EAX));
  /* 118e463a call esi */
  call_ind((uint32_t)(ESI), 0x118e463cu);
  /* 118e463c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e463f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4641 je 0x118e4653 */
  if (C.zf) goto L_118e4653;
  /* 118e4643 push 0x118f169c */
  push32((uint32_t)(0x118f169cu));
  /* 118e4648 call ebx */
  call_ind((uint32_t)(EBX), 0x118e464au);
  /* 118e464a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e464d call dword ptr [0x118ef134] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef134))), 0x118e4653u);
L_118e4653:;
  /* 118e4653 pop edi */
  EDI = (pop32());
  /* 118e4654 pop esi */
  ESI = (pop32());
  /* 118e4655 pop ebp */
  EBP = (pop32());
  /* 118e4656 pop ebx */
  EBX = (pop32());
  /* 118e4657 pop ecx */
  ECX = (pop32());
  /* 118e4658 ret  */
  ESPCHK(0x118e3fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004660 @ 0x118e4660 (20 bytes, 6 insns) */
void f_118e4660(void) {
  FTRACE(0x118e4660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4660 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e4664 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e4665 jne 0x118e466c */
  if (!C.zf) goto L_118e466c;
  /* 118e4667 call 0x118e3040 */
  push32(0x118e466cu); f_118e3040();
L_118e466c:;
  /* 118e466c mov eax, 1 */
  EAX = (0x1u);
  /* 118e4671 ret 0xc */
  ESPCHK(0x118e4660u, _esp0);
  ESP += 16; return;
}

/* FUN_10004680 @ 0x118e4680 (23 bytes, 6 insns) */
void f_118e4680(void) {
  FTRACE(0x118e4680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4680 call 0x118e4698 */
  push32(0x118e4685u); f_118e4698();
  /* 118e4685 call 0x118e4bb0 */
  push32(0x118e468au); f_118e4bb0();
  /* 118e468a mov dword ptr [0x119093f4], eax */
  w32((uint32_t)(0x119093f4), (EAX));
  /* 118e468f call 0x118e4b60 */
  push32(0x118e4694u); f_118e4b60();
  /* 118e4694 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 118e4696 ret  */
  ESPCHK(0x118e4680u, _esp0);
  ESP += 4; return;
}

/* FUN_10004698 @ 0x118e4698 (56 bytes, 8 insns) */
void f_118e4698(void) {
  FTRACE(0x118e4698u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4698 mov eax, 0x118e4f89 */
  EAX = (0x118e4f89u);
  /* 118e469d mov dword ptr [0x118f1750], 0x118e4c33 */
  w32((uint32_t)(0x118f1750), (0x118e4c33u));
  /* 118e46a7 mov dword ptr [0x118f174c], eax */
  w32((uint32_t)(0x118f174c), (EAX));
  /* 118e46ac mov dword ptr [0x118f1754], 0x118e4c99 */
  w32((uint32_t)(0x118f1754), (0x118e4c99u));
  /* 118e46b6 mov dword ptr [0x118f1758], 0x118e4bd9 */
  w32((uint32_t)(0x118f1758), (0x118e4bd9u));
  /* 118e46c0 mov dword ptr [0x118f175c], 0x118e4c81 */
  w32((uint32_t)(0x118f175c), (0x118e4c81u));
  /* 118e46ca mov dword ptr [0x118f1760], eax */
  w32((uint32_t)(0x118f1760), (EAX));
  /* 118e46cf ret  */
  ESPCHK(0x118e4698u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x118e46d0 (39 bytes, 16 insns) */
void f_118e46d0(void) {
  FTRACE(0x118e46d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e46d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118e46d1 mov ebp, esp */
  EBP = (ESP);
  /* 118e46d3 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e46d6 wait  */
  /* wait (no observable integer/reg state) */
  /* 118e46d7 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 118e46da wait  */
  /* wait (no observable integer/reg state) */
  /* 118e46db mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 118e46df or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 118e46e2 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 118e46e6 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 118e46e9 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 118e46ec fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 118e46ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e46f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e46f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e46f6 ret  */
  ESPCHK(0x118e46d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046f7 @ 0x118e46f7 (37 bytes, 18 insns) */
void f_118e46f7(void) {
  FTRACE(0x118e46f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e46f7 push ebp */
  push32((uint32_t)(EBP));
  /* 118e46f8 mov ebp, esp */
  EBP = (ESP);
  /* 118e46fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e46fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e46fe idiv dword ptr [ebp + 0xc] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e4701 mov ecx, eax */
  ECX = (EAX);
  /* 118e4703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e4706 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e4707 idiv dword ptr [ebp + 0xc] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e470a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e470e jge 0x118e4718 */
  if ((C.sf==C.of)) goto L_118e4718;
  /* 118e4710 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118e4712 jle 0x118e4718 */
  if ((C.zf||C.sf!=C.of)) goto L_118e4718;
  /* 118e4714 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e4715 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_118e4718:;
  /* 118e4718 mov eax, ecx */
  EAX = (ECX);
  /* 118e471a pop ebp */
  EBP = (pop32());
  /* 118e471b ret  */
  ESPCHK(0x118e46f7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000471c @ 0x118e471c (126 bytes, 37 insns) */
void f_118e471c(void) {
  FTRACE(0x118e471cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e471c push esi */
  push32((uint32_t)(ESI));
  /* 118e471d call 0x118e50f1 */
  push32(0x118e4722u); f_118e50f1();
  /* 118e4722 push dword ptr [0x1190ab50] */
  push32((uint32_t)(r32((uint32_t)(0x1190ab50))));
  /* 118e4728 call 0x118e544c */
  push32(0x118e472du); f_118e544c();
  /* 118e472d mov edx, dword ptr [0x1190ab50] */
  EDX = (r32((uint32_t)(0x1190ab50)));
  /* 118e4733 pop ecx */
  ECX = (pop32());
  /* 118e4734 mov ecx, dword ptr [0x1190ab4c] */
  ECX = (r32((uint32_t)(0x1190ab4c)));
  /* 118e473a mov esi, ecx */
  ESI = (ECX);
  /* 118e473c sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e473e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4741 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4743 jae 0x118e4782 */
  if (!C.cf) goto L_118e4782;
  /* 118e4745 push edx */
  push32((uint32_t)(EDX));
  /* 118e4746 call 0x118e544c */
  push32(0x118e474bu); f_118e544c();
  /* 118e474b add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e474e push eax */
  push32((uint32_t)(EAX));
  /* 118e474f push dword ptr [0x1190ab50] */
  push32((uint32_t)(r32((uint32_t)(0x1190ab50))));
  /* 118e4755 call 0x118e511d */
  push32(0x118e475au); f_118e511d();
  /* 118e475a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e475d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e475f jne 0x118e4765 */
  if (!C.zf) goto L_118e4765;
  /* 118e4761 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 118e4763 jmp 0x118e4791 */
  goto L_118e4791;
L_118e4765:;
  /* 118e4765 mov ecx, dword ptr [0x1190ab4c] */
  ECX = (r32((uint32_t)(0x1190ab4c)));
  /* 118e476b sub ecx, dword ptr [0x1190ab50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1190ab50))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e4771 mov dword ptr [0x1190ab50], eax */
  w32((uint32_t)(0x1190ab50), (EAX));
  /* 118e4776 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118e4779 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
  /* 118e477c mov dword ptr [0x1190ab4c], ecx */
  w32((uint32_t)(0x1190ab4c), (ECX));
L_118e4782:;
  /* 118e4782 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e4786 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118e4788 add dword ptr [0x1190ab4c], 4 */
  { uint32_t _a=(r32((uint32_t)(0x1190ab4c))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(0x1190ab4c), (_r)); fl_add(_a,_b,_r,32); }
  /* 118e478f mov esi, eax */
  ESI = (EAX);
L_118e4791:;
  /* 118e4791 call 0x118e50fa */
  push32(0x118e4796u); f_118e50fa();
  /* 118e4796 mov eax, esi */
  EAX = (ESI);
  /* 118e4798 pop esi */
  ESI = (pop32());
  /* 118e4799 ret  */
  ESPCHK(0x118e471cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000479a @ 0x118e479a (18 bytes, 8 insns) */
void f_118e479a(void) {
  FTRACE(0x118e479au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e479a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118e479e call 0x118e471c */
  push32(0x118e47a3u); f_118e471c();
  /* 118e47a3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e47a5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e47a7 pop ecx */
  ECX = (pop32());
  /* 118e47a8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e47aa dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e47ab ret  */
  ESPCHK(0x118e479au, _esp0);
  ESP += 4; return;
}

/* FUN_100047db @ 0x118e47db (13 bytes, 4 insns) */
void f_118e47db(void) {
  FTRACE(0x118e47dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e47db call 0x118e56f9 */
  push32(0x118e47e0u); f_118e56f9();
  /* 118e47e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 118e47e4 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 118e47e7 ret  */
  ESPCHK(0x118e47dbu, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x118e47e8 (34 bytes, 9 insns) */
void f_118e47e8(void) {
  FTRACE(0x118e47e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e47e8 call 0x118e56f9 */
  push32(0x118e47edu); f_118e56f9();
  /* 118e47ed mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 118e47f0 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118e47f6 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e47fc mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 118e47ff mov eax, ecx */
  EAX = (ECX);
  /* 118e4801 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 118e4804 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e4809 ret  */
  ESPCHK(0x118e47e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004810 @ 0x118e4810 (20 bytes, 6 insns) */
void f_118e4810(void) {
  FTRACE(0x118e4810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4810 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e4813 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 118e4816 call 0x118e5ab8 */
  push32(0x118e481bu); f_118e5ab8();
  /* 118e481b call 0x118e482d */
  push32(0x118e4820u); f_118e482d();
  /* 118e4820 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4823 ret  */
  ESPCHK(0x118e4810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000482d @ 0x118e482d (187 bytes, 56 insns) */
void f_118e482d(void) {
  FTRACE(0x118e482du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e482d push edx */
  push32((uint32_t)(EDX));
  /* 118e482e wait  */
  /* wait (no observable integer/reg state) */
  /* 118e482f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 118e4832 je 0x118e48a1 */
  if (C.zf) goto L_118e48a1;
  /* 118e4834 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e483a je 0x118e4841 */
  if (C.zf) goto L_118e4841;
  /* 118e483c call 0x118e5a45 */
  push32(0x118e4841u); f_118e5a45();
L_118e4841:;
  /* 118e4841 cmp eax, 0x3ff00000 */
  { uint32_t _a=(EAX),_b=(0x3ff00000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4846 jae 0x118e4875 */
  if (!C.cf) goto L_118e4875;
  /* 118e4848 fld1  */
  fpu_push(1.0);
  /* 118e484a fadd st(1) */
  FPU_ST(0) = FPU_ST(0) + FPU_ST(1);
  /* 118e484c fld1  */
  fpu_push(1.0);
  /* 118e484e fsub st(2) */
  FPU_ST(0) = FPU_ST(0) - FPU_ST(2);
  /* 118e4850 fmulp st(1) */
  FPU_ST(1) = FPU_ST(1) * FPU_ST(0);
  (void)fpu_pop();
  /* 118e4852 fsqrt  */
  FPU_ST(0) = __builtin_sqrt(FPU_ST(0));
  /* 118e4854 fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
  /* 118e4856 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_118e4858:;
  /* 118e4858 cmp dword ptr [0x119093f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119093f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e485f jne 0x118e5ace */
  if (!C.zf) { jmp_ind(0x118e5aceu); return; }
  /* 118e4865 mov edx, 0xd */
  EDX = (0xdu);
  /* 118e486a lea ecx, [0x118f1740] */
  ECX = ((uint32_t)(0x118f1740));
  /* 118e4870 jmp 0x118e5adb */
  f_118e5adb(); return;
L_118e4875:;
  /* 118e4875 ja 0x118e48af */
  if ((!C.cf&&!C.zf)) goto L_118e48af;
  /* 118e4877 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 118e487b mov ecx, eax */
  ECX = (EAX);
  /* 118e487d and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e4882 or eax, dword ptr [esp + 8] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(ESP + 0x8))); EAX = (_r); fl_logic(_r,32); }
  /* 118e4886 jne 0x118e48af */
  if (!C.zf) goto L_118e48af;
  /* 118e4888 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 118e488e fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 118e4890 je 0x118e4896 */
  if (C.zf) goto L_118e4896;
  /* 118e4892 fldpi  */
  fpu_push(3.14159265358979311599796346854);
  /* 118e4894 jmp 0x118e4858 */
  goto L_118e4858;
L_118e4896:;
  /* 118e4896 fldz  */
  fpu_push(0.0);
  /* 118e4898 jmp 0x118e4858 */
  goto L_118e4858;
L_118e489a:;
  /* 118e489a call 0x118e5a5c */
  push32(0x118e489fu); f_118e5a5c();
  /* 118e489f jmp 0x118e48bc */
  goto L_118e48bc;
L_118e48a1:;
  /* 118e48a1 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 118e48a6 jne 0x118e489a */
  if (!C.zf) goto L_118e489a;
  /* 118e48a8 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e48ad jne 0x118e489a */
  if (!C.zf) goto L_118e489a;
L_118e48af:;
  /* 118e48af fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 118e48b1 fld xword ptr [0x118f1770] */
  fpu_push(rf80((uint32_t)(0x118f1770)));
  /* 118e48b7 mov eax, 1 */
  EAX = (0x1u);
L_118e48bc:;
  /* 118e48bc cmp dword ptr [0x119093f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119093f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e48c3 jne 0x118e5ace */
  if (!C.zf) { jmp_ind(0x118e5aceu); return; }
  /* 118e48c9 mov edx, 0xd */
  EDX = (0xdu);
  /* 118e48ce lea ecx, [0x118f1740] */
  ECX = ((uint32_t)(0x118f1740));
  /* 118e48d4 call 0x118e59e7 */
  push32(0x118e48d9u); f_118e59e7();
  /* 118e48d9 pop edx */
  EDX = (pop32());
  /* 118e48da ret  */
  ESPCHK(0x118e482du, _esp0);
  ESP += 4; return;
  /* 118e48db push ebp */
  push32((uint32_t)(EBP));
  /* 118e48dc mov ebp, esp */
  EBP = (ESP);
  /* 118e48de sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e48e4 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e48e7 push eax */
  push32((uint32_t)(EAX));
}

/* FUN_100048db @ 0x118e48db (220 bytes, 75 insns) */
void f_118e48db(void) {
  FTRACE(0x118e48dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e48db push ebp */
  push32((uint32_t)(EBP));
  /* 118e48dc mov ebp, esp */
  EBP = (ESP);
  /* 118e48de sub esp, 0xcc */
  { uint32_t _a=(ESP),_b=(0xccu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e48e4 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e48e7 push eax */
  push32((uint32_t)(EAX));
  /* 118e48e8 call dword ptr [0x118ef0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0dc))), 0x118e48eeu);
  /* 118e48ee lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 118e48f1 push eax */
  push32((uint32_t)(EAX));
  /* 118e48f2 call dword ptr [0x118ef0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0d8))), 0x118e48f8u);
  /* 118e48f8 mov ax, word ptr [ebp - 0x16] */
  AX = (r16((uint32_t)(EBP + -0x16)));
  /* 118e48fc cmp ax, word ptr [0x1190940a] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x1190940a))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e4903 jne 0x118e4940 */
  if (!C.zf) goto L_118e4940;
  /* 118e4905 mov ax, word ptr [ebp - 0x18] */
  AX = (r16((uint32_t)(EBP + -0x18)));
  /* 118e4909 cmp ax, word ptr [0x11909408] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11909408))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e4910 jne 0x118e4940 */
  if (!C.zf) goto L_118e4940;
  /* 118e4912 mov ax, word ptr [ebp - 0x1a] */
  AX = (r16((uint32_t)(EBP + -0x1a)));
  /* 118e4916 cmp ax, word ptr [0x11909406] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11909406))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e491d jne 0x118e4940 */
  if (!C.zf) goto L_118e4940;
  /* 118e491f mov ax, word ptr [ebp - 0x1e] */
  AX = (r16((uint32_t)(EBP + -0x1e)));
  /* 118e4923 cmp ax, word ptr [0x11909402] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11909402))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e492a jne 0x118e4940 */
  if (!C.zf) goto L_118e4940;
  /* 118e492c mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 118e4930 cmp ax, word ptr [0x11909400] */
  { uint32_t _a=(AX),_b=(r16((uint32_t)(0x11909400))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e4937 jne 0x118e4940 */
  if (!C.zf) goto L_118e4940;
  /* 118e4939 mov eax, dword ptr [0x119093f8] */
  EAX = (r32((uint32_t)(0x119093f8)));
  /* 118e493e jmp 0x118e4985 */
  goto L_118e4985;
L_118e4940:;
  /* 118e4940 lea eax, [ebp - 0xcc] */
  EAX = ((uint32_t)(EBP + -0xcc));
  /* 118e4946 push eax */
  push32((uint32_t)(EAX));
  /* 118e4947 call dword ptr [0x118ef0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0d4))), 0x118e494du);
  /* 118e494d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4950 je 0x118e496d */
  if (C.zf) goto L_118e496d;
  /* 118e4952 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4955 jne 0x118e4969 */
  if (!C.zf) goto L_118e4969;
  /* 118e4957 cmp word ptr [ebp - 0x32], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x32))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 118e495c je 0x118e4969 */
  if (C.zf) goto L_118e4969;
  /* 118e495e cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4962 je 0x118e4969 */
  if (C.zf) goto L_118e4969;
  /* 118e4964 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4966 pop eax */
  EAX = (pop32());
  /* 118e4967 jmp 0x118e4970 */
  goto L_118e4970;
L_118e4969:;
  /* 118e4969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e496b jmp 0x118e4970 */
  goto L_118e4970;
L_118e496d:;
  /* 118e496d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_118e4970:;
  /* 118e4970 push esi */
  push32((uint32_t)(ESI));
  /* 118e4971 push edi */
  push32((uint32_t)(EDI));
  /* 118e4972 lea esi, [ebp - 0x20] */
  ESI = ((uint32_t)(EBP + -0x20));
  /* 118e4975 mov edi, 0x11909400 */
  EDI = (0x11909400u);
  /* 118e497a movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118e497b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118e497c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118e497d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 118e497e pop edi */
  EDI = (pop32());
  /* 118e497f mov dword ptr [0x119093f8], eax */
  w32((uint32_t)(0x119093f8), (EAX));
  /* 118e4984 pop esi */
  ESI = (pop32());
L_118e4985:;
  /* 118e4985 push eax */
  push32((uint32_t)(EAX));
  /* 118e4986 movzx eax, word ptr [ebp - 4] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x4))));
  /* 118e498a push eax */
  push32((uint32_t)(EAX));
  /* 118e498b movzx eax, word ptr [ebp - 6] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 118e498f push eax */
  push32((uint32_t)(EAX));
  /* 118e4990 movzx eax, word ptr [ebp - 8] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x8))));
  /* 118e4994 push eax */
  push32((uint32_t)(EAX));
  /* 118e4995 movzx eax, word ptr [ebp - 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xa))));
  /* 118e4999 push eax */
  push32((uint32_t)(EAX));
  /* 118e499a movzx eax, word ptr [ebp - 0xe] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0xe))));
  /* 118e499e push eax */
  push32((uint32_t)(EAX));
  /* 118e499f movzx eax, word ptr [ebp - 0x10] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + -0x10))));
  /* 118e49a3 push eax */
  push32((uint32_t)(EAX));
  /* 118e49a4 call 0x118e5bbc */
  push32(0x118e49a9u); f_118e5bbc();
  /* 118e49a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e49ac add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e49af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118e49b1 je 0x118e49b5 */
  if (C.zf) goto L_118e49b5;
  /* 118e49b3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_118e49b5:;
  /* 118e49b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e49b6 ret  */
  ESPCHK(0x118e48dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100049b7 @ 0x118e49b7 (217 bytes, 57 insns) */
void f_118e49b7(void) {
  FTRACE(0x118e49b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e49b7 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 118e49bb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e49be jne 0x118e4a4c */
  if (!C.zf) goto L_118e4a4c;
  /* 118e49c4 call dword ptr [0x118ef0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0e4))), 0x118e49cau);
  /* 118e49ca push 1 */
  push32((uint32_t)(0x1u));
  /* 118e49cc mov dword ptr [0x11909428], eax */
  w32((uint32_t)(0x11909428), (EAX));
  /* 118e49d1 call 0x118e643b */
  push32(0x118e49d6u); f_118e643b();
  /* 118e49d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e49d8 pop ecx */
  ECX = (pop32());
  /* 118e49d9 je 0x118e4a17 */
  if (C.zf) goto L_118e4a17;
  /* 118e49db mov eax, dword ptr [0x11909428] */
  EAX = (r32((uint32_t)(0x11909428)));
  /* 118e49e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e49e2 mov cl, byte ptr [0x11909429] */
  CL = (r8((uint32_t)(0x11909429)));
  /* 118e49e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 118e49ed shr dword ptr [0x11909428], 0x10 */
  w32((uint32_t)(0x11909428), (sh_shr((uint32_t)(r32((uint32_t)(0x11909428))), (0x10u)&0x1f, 32)));
  /* 118e49f4 mov dword ptr [0x11909430], eax */
  w32((uint32_t)(0x11909430), (EAX));
  /* 118e49f9 mov dword ptr [0x11909434], ecx */
  w32((uint32_t)(0x11909434), (ECX));
  /* 118e49ff shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 118e4a02 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4a04 mov dword ptr [0x1190942c], eax */
  w32((uint32_t)(0x1190942c), (EAX));
  /* 118e4a09 call 0x118e5674 */
  push32(0x118e4a0eu); f_118e5674();
  /* 118e4a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4a10 jne 0x118e4a1b */
  if (!C.zf) goto L_118e4a1b;
  /* 118e4a12 call 0x118e6498 */
  push32(0x118e4a17u); f_118e6498();
L_118e4a17:;
  /* 118e4a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e4a19 jmp 0x118e4a8d */
  goto L_118e4a8d;
L_118e4a1b:;
  /* 118e4a1b call dword ptr [0x118ef0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0e0))), 0x118e4a21u);
  /* 118e4a21 mov dword ptr [0x1190ab54], eax */
  w32((uint32_t)(0x1190ab54), (EAX));
  /* 118e4a26 call 0x118e6194 */
  push32(0x118e4a2bu); f_118e6194();
  /* 118e4a2b mov dword ptr [0x11909414], eax */
  w32((uint32_t)(0x11909414), (EAX));
  /* 118e4a30 call 0x118e5c7e */
  push32(0x118e4a35u); f_118e5c7e();
  /* 118e4a35 call 0x118e5f47 */
  push32(0x118e4a3au); f_118e5f47();
  /* 118e4a3a call 0x118e5e8e */
  push32(0x118e4a3fu); f_118e5e8e();
  /* 118e4a3f call 0x118e4fff */
  push32(0x118e4a44u); f_118e4fff();
  /* 118e4a44 inc dword ptr [0x11909410] */
  { uint32_t _r=(r32((uint32_t)(0x11909410)))+1; w32((uint32_t)(0x11909410), (_r)); fl_inc(_r,32); }
  /* 118e4a4a jmp 0x118e4a8a */
  goto L_118e4a8a;
L_118e4a4c:;
  /* 118e4a4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e4a4e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4a50 jne 0x118e4a7e */
  if (!C.zf) goto L_118e4a7e;
  /* 118e4a52 cmp dword ptr [0x11909410], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11909410))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4a58 jle 0x118e4a17 */
  if ((C.zf||C.sf!=C.of)) goto L_118e4a17;
  /* 118e4a5a dec dword ptr [0x11909410] */
  { uint32_t _r=(r32((uint32_t)(0x11909410)))-1; w32((uint32_t)(0x11909410), (_r)); fl_dec(_r,32); }
  /* 118e4a60 cmp dword ptr [0x11909460], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11909460))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4a66 jne 0x118e4a6d */
  if (!C.zf) goto L_118e4a6d;
  /* 118e4a68 call 0x118e503d */
  push32(0x118e4a6du); f_118e503d();
L_118e4a6d:;
  /* 118e4a6d call 0x118e5e3a */
  push32(0x118e4a72u); f_118e5e3a();
  /* 118e4a72 call 0x118e56c8 */
  push32(0x118e4a77u); f_118e56c8();
  /* 118e4a77 call 0x118e6498 */
  push32(0x118e4a7cu); f_118e6498();
  /* 118e4a7c jmp 0x118e4a8a */
  goto L_118e4a8a;
L_118e4a7e:;
  /* 118e4a7e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4a81 jne 0x118e4a8a */
  if (!C.zf) goto L_118e4a8a;
  /* 118e4a83 push ecx */
  push32((uint32_t)(ECX));
  /* 118e4a84 call 0x118e5760 */
  push32(0x118e4a89u); f_118e5760();
  /* 118e4a89 pop ecx */
  ECX = (pop32());
L_118e4a8a:;
  /* 118e4a8a push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4a8c pop eax */
  EAX = (pop32());
L_118e4a8d:;
  /* 118e4a8d ret 0xc */
  ESPCHK(0x118e49b7u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x118e4a90 (157 bytes, 73 insns) */
void f_118e4a90(void) {
  FTRACE(0x118e4a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4a90 push ebp */
  push32((uint32_t)(EBP));
  /* 118e4a91 mov ebp, esp */
  EBP = (ESP);
  /* 118e4a93 push ebx */
  push32((uint32_t)(EBX));
  /* 118e4a94 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e4a97 push esi */
  push32((uint32_t)(ESI));
  /* 118e4a98 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118e4a9b push edi */
  push32((uint32_t)(EDI));
  /* 118e4a9c mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 118e4a9f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e4aa1 jne 0x118e4aac */
  if (!C.zf) goto L_118e4aac;
  /* 118e4aa3 cmp dword ptr [0x11909410], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11909410))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4aaa jmp 0x118e4ad2 */
  goto L_118e4ad2;
L_118e4aac:;
  /* 118e4aac cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4aaf je 0x118e4ab6 */
  if (C.zf) goto L_118e4ab6;
  /* 118e4ab1 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4ab4 jne 0x118e4ad8 */
  if (!C.zf) goto L_118e4ad8;
L_118e4ab6:;
  /* 118e4ab6 mov eax, dword ptr [0x1190ab58] */
  EAX = (r32((uint32_t)(0x1190ab58)));
  /* 118e4abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4abd je 0x118e4ac8 */
  if (C.zf) goto L_118e4ac8;
  /* 118e4abf push edi */
  push32((uint32_t)(EDI));
  /* 118e4ac0 push esi */
  push32((uint32_t)(ESI));
  /* 118e4ac1 push ebx */
  push32((uint32_t)(EBX));
  /* 118e4ac2 call eax */
  call_ind((uint32_t)(EAX), 0x118e4ac4u);
  /* 118e4ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4ac6 je 0x118e4ad4 */
  if (C.zf) goto L_118e4ad4;
L_118e4ac8:;
  /* 118e4ac8 push edi */
  push32((uint32_t)(EDI));
  /* 118e4ac9 push esi */
  push32((uint32_t)(ESI));
  /* 118e4aca push ebx */
  push32((uint32_t)(EBX));
  /* 118e4acb call 0x118e49b7 */
  push32(0x118e4ad0u); f_118e49b7();
  /* 118e4ad0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_118e4ad2:;
  /* 118e4ad2 jne 0x118e4ad8 */
  if (!C.zf) goto L_118e4ad8;
L_118e4ad4:;
  /* 118e4ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e4ad6 jmp 0x118e4b26 */
  goto L_118e4b26;
L_118e4ad8:;
  /* 118e4ad8 push edi */
  push32((uint32_t)(EDI));
  /* 118e4ad9 push esi */
  push32((uint32_t)(ESI));
  /* 118e4ada push ebx */
  push32((uint32_t)(EBX));
  /* 118e4adb call 0x118e4660 */
  push32(0x118e4ae0u); f_118e4660();
  /* 118e4ae0 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4ae3 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 118e4ae6 jne 0x118e4af4 */
  if (!C.zf) goto L_118e4af4;
  /* 118e4ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4aea jne 0x118e4b23 */
  if (!C.zf) goto L_118e4b23;
  /* 118e4aec push edi */
  push32((uint32_t)(EDI));
  /* 118e4aed push eax */
  push32((uint32_t)(EAX));
  /* 118e4aee push ebx */
  push32((uint32_t)(EBX));
  /* 118e4aef call 0x118e49b7 */
  push32(0x118e4af4u); f_118e49b7();
L_118e4af4:;
  /* 118e4af4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e4af6 je 0x118e4afd */
  if (C.zf) goto L_118e4afd;
  /* 118e4af8 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4afb jne 0x118e4b23 */
  if (!C.zf) goto L_118e4b23;
L_118e4afd:;
  /* 118e4afd push edi */
  push32((uint32_t)(EDI));
  /* 118e4afe push esi */
  push32((uint32_t)(ESI));
  /* 118e4aff push ebx */
  push32((uint32_t)(EBX));
  /* 118e4b00 call 0x118e49b7 */
  push32(0x118e4b05u); f_118e49b7();
  /* 118e4b05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4b07 jne 0x118e4b0c */
  if (!C.zf) goto L_118e4b0c;
  /* 118e4b09 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_118e4b0c:;
  /* 118e4b0c cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4b10 je 0x118e4b23 */
  if (C.zf) goto L_118e4b23;
  /* 118e4b12 mov eax, dword ptr [0x1190ab58] */
  EAX = (r32((uint32_t)(0x1190ab58)));
  /* 118e4b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4b19 je 0x118e4b23 */
  if (C.zf) goto L_118e4b23;
  /* 118e4b1b push edi */
  push32((uint32_t)(EDI));
  /* 118e4b1c push esi */
  push32((uint32_t)(ESI));
  /* 118e4b1d push ebx */
  push32((uint32_t)(EBX));
  /* 118e4b1e call eax */
  call_ind((uint32_t)(EAX), 0x118e4b20u);
  /* 118e4b20 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_118e4b23:;
  /* 118e4b23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_118e4b26:;
  /* 118e4b26 pop edi */
  EDI = (pop32());
  /* 118e4b27 pop esi */
  ESI = (pop32());
  /* 118e4b28 pop ebx */
  EBX = (pop32());
  /* 118e4b29 pop ebp */
  EBP = (pop32());
  /* 118e4b2a ret 0xc */
  ESPCHK(0x118e4a90u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x118e4b2d (48 bytes, 15 insns) */
void f_118e4b2d(void) {
  FTRACE(0x118e4b2du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4b2d mov eax, dword ptr [0x1190941c] */
  EAX = (r32((uint32_t)(0x1190941c)));
  /* 118e4b32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4b35 je 0x118e4b44 */
  if (C.zf) goto L_118e4b44;
  /* 118e4b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4b39 jne 0x118e4b49 */
  if (!C.zf) goto L_118e4b49;
  /* 118e4b3b cmp dword ptr [0x11909420], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11909420))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4b42 jne 0x118e4b49 */
  if (!C.zf) goto L_118e4b49;
L_118e4b44:;
  /* 118e4b44 call 0x118e6540 */
  push32(0x118e4b49u); f_118e6540();
L_118e4b49:;
  /* 118e4b49 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 118e4b4d call 0x118e6579 */
  push32(0x118e4b52u); f_118e6579();
  /* 118e4b52 push 0xff */
  push32((uint32_t)(0xffu));
  /* 118e4b57 call dword ptr [0x118f1748] */
  call_ind((uint32_t)(r32((uint32_t)(0x118f1748))), 0x118e4b5du);
  /* 118e4b5d pop ecx */
  ECX = (pop32());
  /* 118e4b5e pop ecx */
  ECX = (pop32());
  /* 118e4b5f ret  */
  ESPCHK(0x118e4b2du, _esp0);
  ESP += 4; return;
}

/* FUN_10004b60 @ 0x118e4b60 (18 bytes, 6 insns) */
void f_118e4b60(void) {
  FTRACE(0x118e4b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4b60 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 118e4b65 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 118e4b6a call 0x118e6701 */
  push32(0x118e4b6fu); f_118e6701();
  /* 118e4b6f pop ecx */
  ECX = (pop32());
  /* 118e4b70 pop ecx */
  ECX = (pop32());
  /* 118e4b71 ret  */
  ESPCHK(0x118e4b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b72 @ 0x118e4b72 (62 bytes, 24 insns) */
void f_118e4b72(void) {
  FTRACE(0x118e4b72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4b72 push ebp */
  push32((uint32_t)(EBP));
  /* 118e4b73 mov ebp, esp */
  EBP = (ESP);
  /* 118e4b75 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e4b78 fld qword ptr [0x118ef230] */
  fpu_push(rf64((uint32_t)(0x118ef230)));
  /* 118e4b7e fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 118e4b81 fld qword ptr [0x118ef228] */
  fpu_push(rf64((uint32_t)(0x118ef228)));
  /* 118e4b87 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 118e4b8a fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 118e4b8d fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 118e4b90 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 118e4b93 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 118e4b96 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 118e4b99 fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 118e4b9c fcomp qword ptr [0x118ef220] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x118ef220)));
  (void)fpu_pop();
  /* 118e4ba2 fnstsw ax */
  AX = fpu_status();
  /* 118e4ba4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 118e4ba5 jbe 0x118e4bac */
  if ((C.cf||C.zf)) goto L_118e4bac;
  /* 118e4ba7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4ba9 pop eax */
  EAX = (pop32());
  /* 118e4baa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e4bab ret  */
  ESPCHK(0x118e4b72u, _esp0);
  ESP += 4; return;
L_118e4bac:;
  /* 118e4bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e4bae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e4baf ret  */
  ESPCHK(0x118e4b72u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bb0 @ 0x118e4bb0 (41 bytes, 13 insns) */
void f_118e4bb0(void) {
  FTRACE(0x118e4bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4bb0 push 0x118ef254 */
  push32((uint32_t)(0x118ef254u));
  /* 118e4bb5 call dword ptr [0x118ef004] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef004))), 0x118e4bbbu);
  /* 118e4bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4bbd je 0x118e4bd4 */
  if (C.zf) goto L_118e4bd4;
  /* 118e4bbf push 0x118ef238 */
  push32((uint32_t)(0x118ef238u));
  /* 118e4bc4 push eax */
  push32((uint32_t)(EAX));
  /* 118e4bc5 call dword ptr [0x118ef0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118ef0e8))), 0x118e4bcbu);
  /* 118e4bcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4bcd je 0x118e4bd4 */
  if (C.zf) goto L_118e4bd4;
  /* 118e4bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4bd1 call eax */
  call_ind((uint32_t)(EAX), 0x118e4bd3u);
  /* 118e4bd3 ret  */
  ESPCHK(0x118e4bb0u, _esp0);
  ESP += 4; return;
L_118e4bd4:;
  /* 118e4bd4 jmp 0x118e4b72 */
  f_118e4b72(); return;
}

/* FUN_10004bd9 @ 0x118e4bd9 (90 bytes, 37 insns) */
void f_118e4bd9(void) {
  FTRACE(0x118e4bd9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4bd9 push esi */
  push32((uint32_t)(ESI));
  /* 118e4bda mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 118e4bde movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 118e4be1 push eax */
  push32((uint32_t)(EAX));
  /* 118e4be2 call 0x118e68a7 */
  push32(0x118e4be7u); f_118e68a7();
  /* 118e4be7 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4bea pop ecx */
  ECX = (pop32());
  /* 118e4beb je 0x118e4c19 */
  if (C.zf) goto L_118e4c19;
L_118e4bed:;
  /* 118e4bed inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e4bee cmp dword ptr [0x118f1858], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118f1858))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4bf5 jle 0x118e4c06 */
  if ((C.zf||C.sf!=C.of)) goto L_118e4c06;
  /* 118e4bf7 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 118e4bfa push 4 */
  push32((uint32_t)(0x4u));
  /* 118e4bfc push eax */
  push32((uint32_t)(EAX));
  /* 118e4bfd call 0x118e6832 */
  push32(0x118e4c02u); f_118e6832();
  /* 118e4c02 pop ecx */
  ECX = (pop32());
  /* 118e4c03 pop ecx */
  ECX = (pop32());
  /* 118e4c04 jmp 0x118e4c15 */
  goto L_118e4c15;
L_118e4c06:;
  /* 118e4c06 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 118e4c09 mov ecx, dword ptr [0x118f1864] */
  ECX = (r32((uint32_t)(0x118f1864)));
  /* 118e4c0f mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 118e4c12 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_118e4c15:;
  /* 118e4c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4c17 jne 0x118e4bed */
  if (!C.zf) goto L_118e4bed;
L_118e4c19:;
  /* 118e4c19 mov cl, byte ptr [0x118f185c] */
  CL = (r8((uint32_t)(0x118f185c)));
  /* 118e4c1f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118e4c21 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 118e4c23 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_118e4c24:;
  /* 118e4c24 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 118e4c26 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 118e4c28 mov al, cl */
  AL = (CL);
  /* 118e4c2a mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 118e4c2c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118e4c2d test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 118e4c2f jne 0x118e4c24 */
  if (!C.zf) goto L_118e4c24;
  /* 118e4c31 pop esi */
  ESI = (pop32());
  /* 118e4c32 ret  */
  ESPCHK(0x118e4bd9u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x118e4c99 (62 bytes, 29 insns) */
void f_118e4c99(void) {
  FTRACE(0x118e4c99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4c99 push ebp */
  push32((uint32_t)(EBP));
  /* 118e4c9a mov ebp, esp */
  EBP = (ESP);
  /* 118e4c9c push ecx */
  push32((uint32_t)(ECX));
  /* 118e4c9d push ecx */
  push32((uint32_t)(ECX));
  /* 118e4c9e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4ca2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 118e4ca5 je 0x118e4cc2 */
  if (C.zf) goto L_118e4cc2;
  /* 118e4ca7 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118e4caa push eax */
  push32((uint32_t)(EAX));
  /* 118e4cab call 0x118e6d73 */
  push32(0x118e4cb0u); f_118e6d73();
  /* 118e4cb0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e4cb3 pop ecx */
  ECX = (pop32());
  /* 118e4cb4 pop ecx */
  ECX = (pop32());
  /* 118e4cb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118e4cb8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118e4cba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118e4cbd mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 118e4cc0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e4cc1 ret  */
  ESPCHK(0x118e4c99u, _esp0);
  ESP += 4; return;
L_118e4cc2:;
  /* 118e4cc2 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 118e4cc5 push eax */
  push32((uint32_t)(EAX));
  /* 118e4cc6 call 0x118e6da0 */
  push32(0x118e4ccbu); f_118e6da0();
  /* 118e4ccb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e4cce pop ecx */
  ECX = (pop32());
  /* 118e4ccf pop ecx */
  ECX = (pop32());
  /* 118e4cd0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e4cd3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 118e4cd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e4cd6 ret  */
  ESPCHK(0x118e4c99u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cd7 @ 0x118e4cd7 (97 bytes, 42 insns) */
void f_118e4cd7(void) {
  FTRACE(0x118e4cd7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4cd7 push ebp */
  push32((uint32_t)(EBP));
  /* 118e4cd8 mov ebp, esp */
  EBP = (ESP);
  /* 118e4cda sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e4cdd lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 118e4ce0 push esi */
  push32((uint32_t)(ESI));
  /* 118e4ce1 push eax */
  push32((uint32_t)(EAX));
  /* 118e4ce2 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4ce5 push eax */
  push32((uint32_t)(EAX));
  /* 118e4ce6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e4ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 118e4cea push ecx */
  push32((uint32_t)(ECX));
  /* 118e4ceb fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 118e4ced fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 118e4cf0 call 0x118e6e44 */
  push32(0x118e4cf5u); f_118e6e44();
  /* 118e4cf5 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118e4cf8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4cfb push eax */
  push32((uint32_t)(EAX));
  /* 118e4cfc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e4cff lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 118e4d02 push eax */
  push32((uint32_t)(EAX));
  /* 118e4d03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e4d05 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4d09 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 118e4d0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e4d0e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e4d10 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 118e4d13 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4d15 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4d17 push ecx */
  push32((uint32_t)(ECX));
  /* 118e4d18 call 0x118e6dcd */
  push32(0x118e4d1du); f_118e6dcd();
  /* 118e4d1d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4d22 push eax */
  push32((uint32_t)(EAX));
  /* 118e4d23 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118e4d26 push esi */
  push32((uint32_t)(ESI));
  /* 118e4d27 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e4d2a call 0x118e4d38 */
  push32(0x118e4d2fu); f_118e4d38();
  /* 118e4d2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e4d32 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4d35 pop esi */
  ESI = (pop32());
  /* 118e4d36 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e4d37 ret  */
  ESPCHK(0x118e4cd7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d38 @ 0x118e4d38 (194 bytes, 91 insns) */
void f_118e4d38(void) {
  FTRACE(0x118e4d38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4d38 push ebp */
  push32((uint32_t)(EBP));
  /* 118e4d39 mov ebp, esp */
  EBP = (ESP);
  /* 118e4d3b push ebx */
  push32((uint32_t)(EBX));
  /* 118e4d3c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 118e4d3e cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e4d41 push esi */
  push32((uint32_t)(ESI));
  /* 118e4d42 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 118e4d45 push edi */
  push32((uint32_t)(EDI));
  /* 118e4d46 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118e4d49 je 0x118e4d66 */
  if (C.zf) goto L_118e4d66;
  /* 118e4d4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e4d4d cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4d50 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 118e4d53 push eax */
  push32((uint32_t)(EAX));
  /* 118e4d54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e4d56 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4d59 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 118e4d5c add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4d5e push eax */
  push32((uint32_t)(EAX));
  /* 118e4d5f call 0x118e4fda */
  push32(0x118e4d64u); f_118e4fda();
  /* 118e4d64 pop ecx */
  ECX = (pop32());
  /* 118e4d65 pop ecx */
  ECX = (pop32());
L_118e4d66:;
  /* 118e4d66 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4d69 mov eax, edi */
  EAX = (EDI);
  /* 118e4d6b jne 0x118e4d73 */
  if (!C.zf) goto L_118e4d73;
  /* 118e4d6d mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 118e4d70 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_118e4d73:;
  /* 118e4d73 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4d76 jle 0x118e4d8a */
  if ((C.zf||C.sf!=C.of)) goto L_118e4d8a;
  /* 118e4d78 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 118e4d7b lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 118e4d7e mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 118e4d80 mov eax, ecx */
  EAX = (ECX);
  /* 118e4d82 mov cl, byte ptr [0x118f185c] */
  CL = (r8((uint32_t)(0x118f185c)));
  /* 118e4d88 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_118e4d8a:;
  /* 118e4d8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e4d8c cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e4d8f push 0x118ef260 */
  push32((uint32_t)(0x118ef260u));
  /* 118e4d94 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118e4d97 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4d99 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4d9c push ecx */
  push32((uint32_t)(ECX));
  /* 118e4d9d call 0x118e6f60 */
  push32(0x118e4da2u); f_118e6f60();
  /* 118e4da2 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4da5 pop ecx */
  ECX = (pop32());
  /* 118e4da6 pop ecx */
  ECX = (pop32());
  /* 118e4da7 mov ecx, eax */
  ECX = (EAX);
  /* 118e4da9 je 0x118e4dae */
  if (C.zf) goto L_118e4dae;
  /* 118e4dab mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_118e4dae:;
  /* 118e4dae mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 118e4db1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e4db2 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e4db5 je 0x118e4df3 */
  if (C.zf) goto L_118e4df3;
  /* 118e4db7 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 118e4dba dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 118e4dbb jns 0x118e4dc2 */
  if (!C.sf) goto L_118e4dc2;
  /* 118e4dbd neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 118e4dbf mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_118e4dc2:;
  /* 118e4dc2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e4dc3 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4dc6 jl 0x118e4dd9 */
  if ((C.sf!=C.of)) goto L_118e4dd9;
  /* 118e4dc8 mov eax, ebx */
  EAX = (EBX);
  /* 118e4dca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 118e4dcc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e4dcd pop esi */
  ESI = (pop32());
  /* 118e4dce idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e4dd0 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 118e4dd2 mov eax, ebx */
  EAX = (EBX);
  /* 118e4dd4 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e4dd5 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e4dd7 mov ebx, edx */
  EBX = (EDX);
L_118e4dd9:;
  /* 118e4dd9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118e4dda cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4ddd jl 0x118e4df0 */
  if ((C.sf!=C.of)) goto L_118e4df0;
  /* 118e4ddf mov eax, ebx */
  EAX = (EBX);
  /* 118e4de1 push 0xa */
  push32((uint32_t)(0xau));
  /* 118e4de3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e4de4 pop esi */
  ESI = (pop32());
  /* 118e4de5 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e4de7 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 118e4de9 mov eax, ebx */
  EAX = (EBX);
  /* 118e4deb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118e4dec idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118e4dee mov ebx, edx */
  EBX = (EDX);
L_118e4df0:;
  /* 118e4df0 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_118e4df3:;
  /* 118e4df3 mov eax, edi */
  EAX = (EDI);
  /* 118e4df5 pop edi */
  EDI = (pop32());
  /* 118e4df6 pop esi */
  ESI = (pop32());
  /* 118e4df7 pop ebx */
  EBX = (pop32());
  /* 118e4df8 pop ebp */
  EBP = (pop32());
  /* 118e4df9 ret  */
  ESPCHK(0x118e4d38u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dfa @ 0x118e4dfa (85 bytes, 37 insns) */
void f_118e4dfa(void) {
  FTRACE(0x118e4dfau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4dfa push ebp */
  push32((uint32_t)(EBP));
  /* 118e4dfb mov ebp, esp */
  EBP = (ESP);
  /* 118e4dfd sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e4e00 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 118e4e03 push esi */
  push32((uint32_t)(ESI));
  /* 118e4e04 push eax */
  push32((uint32_t)(EAX));
  /* 118e4e05 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4e08 push eax */
  push32((uint32_t)(EAX));
  /* 118e4e09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e4e0c push ecx */
  push32((uint32_t)(ECX));
  /* 118e4e0d push ecx */
  push32((uint32_t)(ECX));
  /* 118e4e0e fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 118e4e10 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 118e4e13 call 0x118e6e44 */
  push32(0x118e4e18u); f_118e6e44();
  /* 118e4e18 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118e4e1b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4e1e push eax */
  push32((uint32_t)(EAX));
  /* 118e4e1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e4e22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4e24 push eax */
  push32((uint32_t)(EAX));
  /* 118e4e25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e4e27 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4e2b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 118e4e2e add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4e31 push eax */
  push32((uint32_t)(EAX));
  /* 118e4e32 call 0x118e6dcd */
  push32(0x118e4e37u); f_118e6dcd();
  /* 118e4e37 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 118e4e3c push eax */
  push32((uint32_t)(EAX));
  /* 118e4e3d push esi */
  push32((uint32_t)(ESI));
  /* 118e4e3e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e4e41 call 0x118e4e4f */
  push32(0x118e4e46u); f_118e4e4f();
  /* 118e4e46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118e4e49 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4e4c pop esi */
  ESI = (pop32());
  /* 118e4e4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e4e4e ret  */
  ESPCHK(0x118e4dfau, _esp0);
  ESP += 4; return;
}

/* FUN_10004e4f @ 0x118e4e4f (167 bytes, 73 insns) */
void f_118e4e4f(void) {
  FTRACE(0x118e4e4fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4e4f push ebp */
  push32((uint32_t)(EBP));
  /* 118e4e50 mov ebp, esp */
  EBP = (ESP);
  /* 118e4e52 push ebx */
  push32((uint32_t)(EBX));
  /* 118e4e53 push esi */
  push32((uint32_t)(ESI));
  /* 118e4e54 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 118e4e57 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e4e5a push edi */
  push32((uint32_t)(EDI));
  /* 118e4e5b mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118e4e5e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e4e5f cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e4e63 je 0x118e4e7f */
  if (C.zf) goto L_118e4e7f;
  /* 118e4e65 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4e68 jne 0x118e4e7f */
  if (!C.zf) goto L_118e4e7f;
  /* 118e4e6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118e4e6c cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4e6f sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118e4e72 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4e74 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4e76 mov eax, ecx */
  EAX = (ECX);
  /* 118e4e78 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 118e4e7b and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_118e4e7f:;
  /* 118e4e7f cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4e82 mov edi, ebx */
  EDI = (EBX);
  /* 118e4e84 jne 0x118e4e8c */
  if (!C.zf) goto L_118e4e8c;
  /* 118e4e86 mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 118e4e89 lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_118e4e8c:;
  /* 118e4e8c mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 118e4e8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e4e91 jg 0x118e4ea3 */
  if ((!C.zf&&C.sf==C.of)) goto L_118e4ea3;
  /* 118e4e93 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4e95 push edi */
  push32((uint32_t)(EDI));
  /* 118e4e96 call 0x118e4fda */
  push32(0x118e4e9bu); f_118e4fda();
  /* 118e4e9b pop ecx */
  ECX = (pop32());
  /* 118e4e9c mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 118e4e9f pop ecx */
  ECX = (pop32());
  /* 118e4ea0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e4ea1 jmp 0x118e4ea5 */
  goto L_118e4ea5;
L_118e4ea3:;
  /* 118e4ea3 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118e4ea5:;
  /* 118e4ea5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4ea9 jle 0x118e4eef */
  if ((C.zf||C.sf!=C.of)) goto L_118e4eef;
  /* 118e4eab push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4ead push edi */
  push32((uint32_t)(EDI));
  /* 118e4eae call 0x118e4fda */
  push32(0x118e4eb3u); f_118e4fda();
  /* 118e4eb3 mov al, byte ptr [0x118f185c] */
  AL = (r8((uint32_t)(0x118f185c)));
  /* 118e4eb8 pop ecx */
  ECX = (pop32());
  /* 118e4eb9 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 118e4ebb mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 118e4ebe inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e4ebf pop ecx */
  ECX = (pop32());
  /* 118e4ec0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 118e4ec2 jge 0x118e4eef */
  if ((C.sf==C.of)) goto L_118e4eef;
  /* 118e4ec4 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118e4ec8 je 0x118e4ece */
  if (C.zf) goto L_118e4ece;
  /* 118e4eca neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 118e4ecc jmp 0x118e4ed5 */
  goto L_118e4ed5;
L_118e4ece:;
  /* 118e4ece neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 118e4ed0 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4ed3 jl 0x118e4ed8 */
  if ((C.sf!=C.of)) goto L_118e4ed8;
L_118e4ed5:;
  /* 118e4ed5 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_118e4ed8:;
  /* 118e4ed8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e4edb push edi */
  push32((uint32_t)(EDI));
  /* 118e4edc call 0x118e4fda */
  push32(0x118e4ee1u); f_118e4fda();
  /* 118e4ee1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e4ee4 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 118e4ee6 push edi */
  push32((uint32_t)(EDI));
  /* 118e4ee7 call 0x118e7050 */
  push32(0x118e4eecu); f_118e7050();
  /* 118e4eec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e4eef:;
  /* 118e4eef pop edi */
  EDI = (pop32());
  /* 118e4ef0 mov eax, ebx */
  EAX = (EBX);
  /* 118e4ef2 pop esi */
  ESI = (pop32());
  /* 118e4ef3 pop ebx */
  EBX = (pop32());
  /* 118e4ef4 pop ebp */
  EBP = (pop32());
  /* 118e4ef5 ret  */
  ESPCHK(0x118e4e4fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef6 @ 0x118e4ef6 (147 bytes, 66 insns) */
void f_118e4ef6(void) {
  FTRACE(0x118e4ef6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4ef6 push ebp */
  push32((uint32_t)(EBP));
  /* 118e4ef7 mov ebp, esp */
  EBP = (ESP);
  /* 118e4ef9 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118e4efc push ebx */
  push32((uint32_t)(EBX));
  /* 118e4efd push esi */
  push32((uint32_t)(ESI));
  /* 118e4efe lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 118e4f01 push edi */
  push32((uint32_t)(EDI));
  /* 118e4f02 push eax */
  push32((uint32_t)(EAX));
  /* 118e4f03 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4f06 push eax */
  push32((uint32_t)(EAX));
  /* 118e4f07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118e4f0a push ecx */
  push32((uint32_t)(ECX));
  /* 118e4f0b push ecx */
  push32((uint32_t)(ECX));
  /* 118e4f0c fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 118e4f0e fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 118e4f11 call 0x118e6e44 */
  push32(0x118e4f16u); f_118e6e44();
  /* 118e4f16 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e4f19 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 118e4f1c lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 118e4f1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118e4f21 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4f25 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 118e4f28 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4f2b mov edi, eax */
  EDI = (EAX);
  /* 118e4f2d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4f30 push eax */
  push32((uint32_t)(EAX));
  /* 118e4f31 push ebx */
  push32((uint32_t)(EBX));
  /* 118e4f32 push edi */
  push32((uint32_t)(EDI));
  /* 118e4f33 call 0x118e6dcd */
  push32(0x118e4f38u); f_118e6dcd();
  /* 118e4f38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118e4f3b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4f3e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 118e4f3f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4f41 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 118e4f44 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4f47 jl 0x118e4f6f */
  if ((C.sf!=C.of)) goto L_118e4f6f;
  /* 118e4f49 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4f4b jge 0x118e4f6f */
  if ((C.sf==C.of)) goto L_118e4f6f;
  /* 118e4f4d test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 118e4f4f je 0x118e4f5b */
  if (C.zf) goto L_118e4f5b;
L_118e4f51:;
  /* 118e4f51 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 118e4f53 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 118e4f54 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 118e4f56 jne 0x118e4f51 */
  if (!C.zf) goto L_118e4f51;
  /* 118e4f58 and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_118e4f5b:;
  /* 118e4f5b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4f5e push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4f60 push eax */
  push32((uint32_t)(EAX));
  /* 118e4f61 push ebx */
  push32((uint32_t)(EBX));
  /* 118e4f62 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e4f65 call 0x118e4e4f */
  push32(0x118e4f6au); f_118e4e4f();
  /* 118e4f6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4f6d jmp 0x118e4f84 */
  goto L_118e4f84;
L_118e4f6f:;
  /* 118e4f6f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 118e4f72 push 1 */
  push32((uint32_t)(0x1u));
  /* 118e4f74 push eax */
  push32((uint32_t)(EAX));
  /* 118e4f75 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118e4f78 push ebx */
  push32((uint32_t)(EBX));
  /* 118e4f79 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e4f7c call 0x118e4d38 */
  push32(0x118e4f81u); f_118e4d38();
  /* 118e4f81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118e4f84:;
  /* 118e4f84 pop edi */
  EDI = (pop32());
  /* 118e4f85 pop esi */
  ESI = (pop32());
  /* 118e4f86 pop ebx */
  EBX = (pop32());
  /* 118e4f87 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118e4f88 ret  */
  ESPCHK(0x118e4ef6u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x118e4f89 (81 bytes, 29 insns) */
void f_118e4f89(void) {
  FTRACE(0x118e4f89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4f89 push ebp */
  push32((uint32_t)(EBP));
  /* 118e4f8a mov ebp, esp */
  EBP = (ESP);
  /* 118e4f8c cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4f90 je 0x118e4fc4 */
  if (C.zf) goto L_118e4fc4;
  /* 118e4f92 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4f96 je 0x118e4fc4 */
  if (C.zf) goto L_118e4fc4;
  /* 118e4f98 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118e4f9c jne 0x118e4fb1 */
  if (!C.zf) goto L_118e4fb1;
  /* 118e4f9e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118e4fa1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e4fa4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e4fa7 call 0x118e4dfa */
  push32(0x118e4facu); f_118e4dfa();
  /* 118e4fac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4faf pop ebp */
  EBP = (pop32());
  /* 118e4fb0 ret  */
  ESPCHK(0x118e4f89u, _esp0);
  ESP += 4; return;
L_118e4fb1:;
  /* 118e4fb1 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118e4fb4 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118e4fb7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e4fba push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e4fbd call 0x118e4ef6 */
  push32(0x118e4fc2u); f_118e4ef6();
  /* 118e4fc2 jmp 0x118e4fd5 */
  goto L_118e4fd5;
L_118e4fc4:;
  /* 118e4fc4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 118e4fc7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 118e4fca push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 118e4fcd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 118e4fd0 call 0x118e4cd7 */
  push32(0x118e4fd5u); f_118e4cd7();
L_118e4fd5:;
  /* 118e4fd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4fd8 pop ebp */
  EBP = (pop32());
  /* 118e4fd9 ret  */
  ESPCHK(0x118e4f89u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fda @ 0x118e4fda (37 bytes, 18 insns) */
void f_118e4fda(void) {
  FTRACE(0x118e4fdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4fda push edi */
  push32((uint32_t)(EDI));
  /* 118e4fdb mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 118e4fdf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 118e4fe1 je 0x118e4ffd */
  if (C.zf) goto L_118e4ffd;
  /* 118e4fe3 push esi */
  push32((uint32_t)(ESI));
  /* 118e4fe4 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 118e4fe8 push esi */
  push32((uint32_t)(ESI));
  /* 118e4fe9 call 0x118e73f0 */
  push32(0x118e4feeu); f_118e73f0();
  /* 118e4fee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118e4fef push eax */
  push32((uint32_t)(EAX));
  /* 118e4ff0 push esi */
  push32((uint32_t)(ESI));
  /* 118e4ff1 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4ff3 push esi */
  push32((uint32_t)(ESI));
  /* 118e4ff4 call 0x118e70b0 */
  push32(0x118e4ff9u); f_118e70b0();
  /* 118e4ff9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e4ffc pop esi */
  ESI = (pop32());
L_118e4ffd:;
  /* 118e4ffd pop edi */
  EDI = (pop32());
  /* 118e4ffe ret  */
  ESPCHK(0x118e4fdau, _esp0);
  ESP += 4; return;
}

/* FUN_10004fff @ 0x118e4fff (45 bytes, 12 insns) */
void f_118e4fff(void) {
  FTRACE(0x118e4fffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e4fff mov eax, dword ptr [0x118f1734] */
  EAX = (r32((uint32_t)(0x118f1734)));
  /* 118e5004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118e5006 je 0x118e500a */
  if (C.zf) goto L_118e500a;
  /* 118e5008 call eax */
  call_ind((uint32_t)(EAX), 0x118e500au);
L_118e500a:;
  /* 118e500a push 0x118f1060 */
  push32((uint32_t)(0x118f1060u));
  /* 118e500f push 0x118f104c */
  push32((uint32_t)(0x118f104cu));
  /* 118e5014 call 0x118e5103 */
  push32(0x118e5019u); f_118e5103();
  /* 118e5019 push 0x118f1048 */
  push32((uint32_t)(0x118f1048u));
  /* 118e501e push 0x118f1000 */
  push32((uint32_t)(0x118f1000u));
  /* 118e5023 call 0x118e5103 */
  push32(0x118e5028u); f_118e5103();
  /* 118e5028 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e502b ret  */
  ESPCHK(0x118e4fffu, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x118e502c (17 bytes, 6 insns) */
void f_118e502c(void) {
  FTRACE(0x118e502cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e502c push 0 */
  push32((uint32_t)(0x0u));
  /* 118e502e push 1 */
  push32((uint32_t)(0x1u));
  /* 118e5030 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 118e5034 call 0x118e504c */
  push32(0x118e5039u); f_118e504c();
  /* 118e5039 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e503c ret  */
  ESPCHK(0x118e502cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000503d @ 0x118e503d (15 bytes, 6 insns) */
void f_118e503d(void) {
  FTRACE(0x118e503du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118e503d push 1 */
  push32((uint32_t)(0x1u));
  /* 118e503f push 0 */
  push32((uint32_t)(0x0u));
  /* 118e5041 push 0 */
  push32((uint32_t)(0x0u));
  /* 118e5043 call 0x118e504c */
  push32(0x118e5048u); f_118e504c();
  /* 118e5048 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118e504b ret  */
  ESPCHK(0x118e503du, _esp0);
  ESP += 4; return;
}

