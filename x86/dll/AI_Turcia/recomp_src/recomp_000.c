#include "recomp.h"

/* FUN_10001000 @ 0x101e1000 (85 bytes, 29 insns) */
void f_101e1000(void) {
  FTRACE(0x101e1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e1000 mov eax, dword ptr [0x101f0b20] */
  EAX = (r32((uint32_t)(0x101f0b20)));
  /* 101e1005 push esi */
  push32((uint32_t)(ESI));
  /* 101e1006 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e1009 jg 0x101e1053 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e1053;
  /* 101e100b push 0x101ee330 */
  push32((uint32_t)(0x101ee330u));
  /* 101e1010 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e1016u);
  /* 101e1016 mov ecx, eax */
  ECX = (EAX);
  /* 101e1018 mov eax, 0x38e38e39 */
  EAX = (0x38e38e39u);
  /* 101e101d imul ecx */
  { int64_t _p=(int64_t)(int32_t)EAX*(int64_t)(int32_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=((int64_t)(int32_t)EAX!=_p); }
  /* 101e101f sar edx, 3 */
  EDX = (sh_sar((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 101e1022 mov eax, edx */
  EAX = (EDX);
  /* 101e1024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1027 shr eax, 0x1f */
  EAX = (sh_shr((uint32_t)(EAX), (0x1fu)&0x1f, 32));
  /* 101e102a add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e102c mov esi, edx */
  ESI = (EDX);
  /* 101e102e je 0x101e1053 */
  if (C.zf) goto L_101e1053;
  /* 101e1030 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e1032 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e1034 push esi */
  push32((uint32_t)(ESI));
  /* 101e1035 push 0x101ee380 */
  push32((uint32_t)(0x101ee380u));
  /* 101e103a call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e1040u);
  /* 101e1040 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e1042 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e1044 push esi */
  push32((uint32_t)(ESI));
  /* 101e1045 push 0x101ee318 */
  push32((uint32_t)(0x101ee318u));
  /* 101e104a call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e1050u);
  /* 101e1050 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e1053:;
  /* 101e1053 pop esi */
  ESI = (pop32());
  /* 101e1054 ret  */
  ESPCHK(0x101e1000u, _esp0);
  ESP += 4; return;
}

/* FUN_10001060 @ 0x101e1060 (369 bytes, 82 insns) */
void f_101e1060(void) {
  FTRACE(0x101e1060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e1060 push ebx */
  push32((uint32_t)(EBX));
  /* 101e1061 push esi */
  push32((uint32_t)(ESI));
  /* 101e1062 call dword ptr [0x101f0f90] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f90))), 0x101e1068u);
  /* 101e1068 push 0x101f0c98 */
  push32((uint32_t)(0x101f0c98u));
  /* 101e106d mov dword ptr [0x101f0da4], eax */
  w32((uint32_t)(0x101f0da4), (EAX));
  /* 101e1072 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e1078u);
  /* 101e1078 mov ebx, 1 */
  EBX = (0x1u);
  /* 101e107d mov esi, eax */
  ESI = (EAX);
  /* 101e107f push ebx */
  push32((uint32_t)(EBX));
  /* 101e1080 call 0x101e2be0 */
  push32(0x101e1085u); f_101e2be0();
  /* 101e1085 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e1087 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e1089 call 0x101e2be0 */
  push32(0x101e108eu); f_101e2be0();
  /* 101e108e push 5 */
  push32((uint32_t)(0x5u));
  /* 101e1090 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e1092 call 0x101e2be0 */
  push32(0x101e1097u); f_101e2be0();
  /* 101e1097 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e1099 mov eax, dword ptr [0x101f0da4] */
  EAX = (r32((uint32_t)(0x101f0da4)));
  /* 101e109e push 3 */
  push32((uint32_t)(0x3u));
  /* 101e10a0 mov dword ptr [0x101f0cb8], esi */
  w32((uint32_t)(0x101f0cb8), (ESI));
  /* 101e10a6 lea ecx, [eax + eax*2] */
  ECX = ((uint32_t)(EAX + EAX*2));
  /* 101e10a9 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101e10ac lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 101e10af lea eax, [eax + ecx*2] */
  EAX = ((uint32_t)(EAX + ECX*2));
  /* 101e10b2 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 101e10b5 mov ecx, dword ptr [eax + 0x101ee6e8] */
  ECX = (r32((uint32_t)(EAX + 0x101ee6e8)));
  /* 101e10bb lea edx, [eax + 0x101ee558] */
  EDX = ((uint32_t)(EAX + 0x101ee558));
  /* 101e10c1 mov dword ptr [0x101f0cc8], edx */
  w32((uint32_t)(0x101f0cc8), (EDX));
  /* 101e10c7 lea edx, [eax + 0x101ee6ec] */
  EDX = ((uint32_t)(EAX + 0x101ee6ec));
  /* 101e10cd mov dword ptr [0x101f1094], ecx */
  w32((uint32_t)(0x101f1094), (ECX));
  /* 101e10d3 mov ecx, dword ptr [eax + 0x101ee87c] */
  ECX = (r32((uint32_t)(EAX + 0x101ee87c)));
  /* 101e10d9 mov dword ptr [0x101f0ccc], edx */
  w32((uint32_t)(0x101f0ccc), (EDX));
  /* 101e10df lea edx, [eax + 0x101ee880] */
  EDX = ((uint32_t)(EAX + 0x101ee880));
  /* 101e10e5 mov dword ptr [0x101f1098], ecx */
  w32((uint32_t)(0x101f1098), (ECX));
  /* 101e10eb mov dword ptr [0x101f0d40], edx */
  w32((uint32_t)(0x101f0d40), (EDX));
  /* 101e10f1 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e10f7u);
  /* 101e10f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e10f9 mov dword ptr [0x101f0d80], eax */
  w32((uint32_t)(0x101f0d80), (EAX));
  /* 101e10fe call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e1104u);
  /* 101e1104 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e1106 mov dword ptr [0x101ee300], eax */
  w32((uint32_t)(0x101ee300), (EAX));
  /* 101e110b call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e1111u);
  /* 101e1111 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e1113 mov dword ptr [0x101f0e58], eax */
  w32((uint32_t)(0x101f0e58), (EAX));
  /* 101e1118 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e111eu);
  /* 101e111e push 5 */
  push32((uint32_t)(0x5u));
  /* 101e1120 mov dword ptr [0x101ee388], eax */
  w32((uint32_t)(0x101ee388), (EAX));
  /* 101e1125 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e112bu);
  /* 101e112b push ebx */
  push32((uint32_t)(EBX));
  /* 101e112c mov dword ptr [0x101f0bf8], eax */
  w32((uint32_t)(0x101f0bf8), (EAX));
  /* 101e1131 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e1137u);
  /* 101e1137 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e113a mov dword ptr [0x101f0e10], eax */
  w32((uint32_t)(0x101f0e10), (EAX));
  /* 101e113f call 0x101e21a0 */
  push32(0x101e1144u); f_101e21a0();
  /* 101e1144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1146 jne 0x101e1152 */
  if (!C.zf) goto L_101e1152;
  /* 101e1148 mov dword ptr [0x101ec1f0], 4 */
  w32((uint32_t)(0x101ec1f0), (0x4u));
L_101e1152:;
  /* 101e1152 push 0x101ec0c8 */
  push32((uint32_t)(0x101ec0c8u));
  /* 101e1157 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e1159 call dword ptr [0x101f0f9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f9c))), 0x101e115fu);
  /* 101e115f push 0x101f1028 */
  push32((uint32_t)(0x101f1028u));
  /* 101e1164 call 0x101e2bd0 */
  push32(0x101e1169u); f_101e2bd0();
  /* 101e1169 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101e116b push 0x101ec1ec */
  push32((uint32_t)(0x101ec1ecu));
  /* 101e1170 call 0x101e2bb0 */
  push32(0x101e1175u); f_101e2bb0();
  /* 101e1175 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1178 mov byte ptr [0x101f0c90], bl */
  w8((uint32_t)(0x101f0c90), (BL));
  /* 101e117e mov byte ptr [0x101f0c92], bl */
  w8((uint32_t)(0x101f0c92), (BL));
  /* 101e1184 mov byte ptr [0x101f0c94], bl */
  w8((uint32_t)(0x101f0c94), (BL));
  /* 101e118a mov byte ptr [0x101f0c95], bl */
  w8((uint32_t)(0x101f0c95), (BL));
  /* 101e1190 mov byte ptr [0x101f0deb], bl */
  w8((uint32_t)(0x101f0deb), (BL));
  /* 101e1196 mov byte ptr [0x101f0de9], bl */
  w8((uint32_t)(0x101f0de9), (BL));
  /* 101e119c mov byte ptr [0x101f0dec], bl */
  w8((uint32_t)(0x101f0dec), (BL));
  /* 101e11a2 mov byte ptr [0x101f0ded], bl */
  w8((uint32_t)(0x101f0ded), (BL));
  /* 101e11a8 pop esi */
  ESI = (pop32());
  /* 101e11a9 mov byte ptr [0x101f0c93], 0 */
  w8((uint32_t)(0x101f0c93), (0x0u));
  /* 101e11b0 mov byte ptr [0x101f0c91], 0 */
  w8((uint32_t)(0x101f0c91), (0x0u));
  /* 101e11b7 mov byte ptr [0x101f0de8], 0 */
  w8((uint32_t)(0x101f0de8), (0x0u));
  /* 101e11be mov byte ptr [0x101f0dea], 0 */
  w8((uint32_t)(0x101f0dea), (0x0u));
  /* 101e11c5 mov dword ptr [0x101f10dc], 0 */
  w32((uint32_t)(0x101f10dc), (0x0u));
  /* 101e11cf pop ebx */
  EBX = (pop32());
  /* 101e11d0 ret  */
  ESPCHK(0x101e1060u, _esp0);
  ESP += 4; return;
}

/* InitAI @ 0x101e11e0 (3372 bytes, 861 insns) */
void f_101e11e0(void) {
  FTRACE(0x101e11e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e11e0 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e11e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e11e7 je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e11ed push 0x101ecc10 */
  push32((uint32_t)(0x101ecc10u));
  /* 101e11f2 push 0x101ee4e8 */
  push32((uint32_t)(0x101ee4e8u));
  /* 101e11f7 call eax */
  call_ind((uint32_t)(EAX), 0x101e11f9u);
  /* 101e11f9 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e11fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1203 je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e1209 push 0x101ecbfc */
  push32((uint32_t)(0x101ecbfcu));
  /* 101e120e push 0x101ee330 */
  push32((uint32_t)(0x101ee330u));
  /* 101e1213 call eax */
  call_ind((uint32_t)(EAX), 0x101e1215u);
  /* 101e1215 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e121d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e121f je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e1225 push 0x101ecbe8 */
  push32((uint32_t)(0x101ecbe8u));
  /* 101e122a push 0x101f0c98 */
  push32((uint32_t)(0x101f0c98u));
  /* 101e122f call eax */
  call_ind((uint32_t)(EAX), 0x101e1231u);
  /* 101e1231 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e123b je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e1241 push 0x101ecbd4 */
  push32((uint32_t)(0x101ecbd4u));
  /* 101e1246 push 0x101f0bd0 */
  push32((uint32_t)(0x101f0bd0u));
  /* 101e124b call eax */
  call_ind((uint32_t)(EAX), 0x101e124du);
  /* 101e124d mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1257 je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e125d push 0x101ecbc0 */
  push32((uint32_t)(0x101ecbc0u));
  /* 101e1262 push 0x101f0c68 */
  push32((uint32_t)(0x101f0c68u));
  /* 101e1267 call eax */
  call_ind((uint32_t)(EAX), 0x101e1269u);
  /* 101e1269 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e126e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1271 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1273 je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e1279 push 0x101ecbb0 */
  push32((uint32_t)(0x101ecbb0u));
  /* 101e127e push 0x101f0d08 */
  push32((uint32_t)(0x101f0d08u));
  /* 101e1283 call eax */
  call_ind((uint32_t)(EAX), 0x101e1285u);
  /* 101e1285 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e128a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e128d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e128f je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e1291 push 0x101ecb9c */
  push32((uint32_t)(0x101ecb9cu));
  /* 101e1296 push 0x101f0e68 */
  push32((uint32_t)(0x101f0e68u));
  /* 101e129b call eax */
  call_ind((uint32_t)(EAX), 0x101e129du);
  /* 101e129d mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e12a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e12a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e12a7 je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e12a9 push 0x101ecb90 */
  push32((uint32_t)(0x101ecb90u));
  /* 101e12ae push 0x101f0e48 */
  push32((uint32_t)(0x101f0e48u));
  /* 101e12b3 call eax */
  call_ind((uint32_t)(EAX), 0x101e12b5u);
  /* 101e12b5 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e12ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e12bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e12bf je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e12c1 push 0x101ecb84 */
  push32((uint32_t)(0x101ecb84u));
  /* 101e12c6 push 0x101ee328 */
  push32((uint32_t)(0x101ee328u));
  /* 101e12cb call eax */
  call_ind((uint32_t)(EAX), 0x101e12cdu);
  /* 101e12cd mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e12d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e12d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e12d7 je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e12d9 push 0x101ecb74 */
  push32((uint32_t)(0x101ecb74u));
  /* 101e12de push 0x101ee508 */
  push32((uint32_t)(0x101ee508u));
  /* 101e12e3 call eax */
  call_ind((uint32_t)(EAX), 0x101e12e5u);
  /* 101e12e5 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e12ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e12ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e12ef je 0x101e1300 */
  if (C.zf) goto L_101e1300;
  /* 101e12f1 push 0x101ecb68 */
  push32((uint32_t)(0x101ecb68u));
  /* 101e12f6 push 0x101f0d18 */
  push32((uint32_t)(0x101f0d18u));
  /* 101e12fb call eax */
  call_ind((uint32_t)(EAX), 0x101e12fdu);
  /* 101e12fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e1300:;
  /* 101e1300 push 0x101ecbfc */
  push32((uint32_t)(0x101ecbfcu));
  /* 101e1305 call 0x101e2ba0 */
  push32(0x101e130au); f_101e2ba0();
  /* 101e130a mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e130f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1314 je 0x101e1372 */
  if (C.zf) goto L_101e1372;
  /* 101e1316 push 0x101ecb50 */
  push32((uint32_t)(0x101ecb50u));
  /* 101e131b push 0x101f0d68 */
  push32((uint32_t)(0x101f0d68u));
  /* 101e1320 call eax */
  call_ind((uint32_t)(EAX), 0x101e1322u);
  /* 101e1322 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1327 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e132a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e132c je 0x101e1372 */
  if (C.zf) goto L_101e1372;
  /* 101e132e push 0x101ecb38 */
  push32((uint32_t)(0x101ecb38u));
  /* 101e1333 push 0x101f0df0 */
  push32((uint32_t)(0x101f0df0u));
  /* 101e1338 call eax */
  call_ind((uint32_t)(EAX), 0x101e133au);
  /* 101e133a mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e133f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1344 je 0x101e1372 */
  if (C.zf) goto L_101e1372;
  /* 101e1346 push 0x101ecb24 */
  push32((uint32_t)(0x101ecb24u));
  /* 101e134b push 0x101ee380 */
  push32((uint32_t)(0x101ee380u));
  /* 101e1350 call eax */
  call_ind((uint32_t)(EAX), 0x101e1352u);
  /* 101e1352 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1357 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e135a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e135c je 0x101e1372 */
  if (C.zf) goto L_101e1372;
  /* 101e135e push 0x101ecb0c */
  push32((uint32_t)(0x101ecb0cu));
  /* 101e1363 push 0x101ee318 */
  push32((uint32_t)(0x101ee318u));
  /* 101e1368 call eax */
  call_ind((uint32_t)(EAX), 0x101e136au);
  /* 101e136a mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e136f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e1372:;
  /* 101e1372 mov ecx, dword ptr [0x101f0e8c] */
  ECX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1378 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e137a je 0x101e13b6 */
  if (C.zf) goto L_101e13b6;
  /* 101e137c push 0x101ecaf4 */
  push32((uint32_t)(0x101ecaf4u));
  /* 101e1381 push 0x101f0d50 */
  push32((uint32_t)(0x101f0d50u));
  /* 101e1386 call ecx */
  call_ind((uint32_t)(ECX), 0x101e1388u);
  /* 101e1388 mov ecx, dword ptr [0x101f0e8c] */
  ECX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e138e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1391 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e1393 je 0x101e13b1 */
  if (C.zf) goto L_101e13b1;
  /* 101e1395 push 0x101ecadc */
  push32((uint32_t)(0x101ecadcu));
  /* 101e139a push 0x101f0b40 */
  push32((uint32_t)(0x101f0b40u));
  /* 101e139f call ecx */
  call_ind((uint32_t)(ECX), 0x101e13a1u);
  /* 101e13a1 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e13a6 mov ecx, dword ptr [0x101f0e8c] */
  ECX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e13ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e13af jmp 0x101e13b6 */
  goto L_101e13b6;
L_101e13b1:;
  /* 101e13b1 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
L_101e13b6:;
  /* 101e13b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e13b8 je 0x101e157f */
  if (C.zf) goto L_101e157f;
  /* 101e13be push 0x101ecac8 */
  push32((uint32_t)(0x101ecac8u));
  /* 101e13c3 push 0x101f0b30 */
  push32((uint32_t)(0x101f0b30u));
  /* 101e13c8 call eax */
  call_ind((uint32_t)(EAX), 0x101e13cau);
  /* 101e13ca mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e13cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e13d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e13d4 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e13da push 0x101ecab8 */
  push32((uint32_t)(0x101ecab8u));
  /* 101e13df push 0x101f0b50 */
  push32((uint32_t)(0x101f0b50u));
  /* 101e13e4 call eax */
  call_ind((uint32_t)(EAX), 0x101e13e6u);
  /* 101e13e6 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e13eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e13ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e13f0 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e13f6 push 0x101ecaa4 */
  push32((uint32_t)(0x101ecaa4u));
  /* 101e13fb push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e1400 call eax */
  call_ind((uint32_t)(EAX), 0x101e1402u);
  /* 101e1402 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1407 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e140a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e140c je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e1412 push 0x101eca98 */
  push32((uint32_t)(0x101eca98u));
  /* 101e1417 push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e141c call eax */
  call_ind((uint32_t)(EAX), 0x101e141eu);
  /* 101e141e mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1426 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1428 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e142e push 0x101eca8c */
  push32((uint32_t)(0x101eca8cu));
  /* 101e1433 push 0x101f0b18 */
  push32((uint32_t)(0x101f0b18u));
  /* 101e1438 call eax */
  call_ind((uint32_t)(EAX), 0x101e143au);
  /* 101e143a mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e143f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1442 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1444 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e144a push 0x101eca78 */
  push32((uint32_t)(0x101eca78u));
  /* 101e144f push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e1454 call eax */
  call_ind((uint32_t)(EAX), 0x101e1456u);
  /* 101e1456 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e145b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e145e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1460 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e1466 push 0x101eca60 */
  push32((uint32_t)(0x101eca60u));
  /* 101e146b push 0x101f0b58 */
  push32((uint32_t)(0x101f0b58u));
  /* 101e1470 call eax */
  call_ind((uint32_t)(EAX), 0x101e1472u);
  /* 101e1472 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e147a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e147c je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e1482 push 0x101eca4c */
  push32((uint32_t)(0x101eca4cu));
  /* 101e1487 push 0x101ee2f0 */
  push32((uint32_t)(0x101ee2f0u));
  /* 101e148c call eax */
  call_ind((uint32_t)(EAX), 0x101e148eu);
  /* 101e148e mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1496 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1498 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e149e push 0x101eca3c */
  push32((uint32_t)(0x101eca3cu));
  /* 101e14a3 push 0x101ee4d8 */
  push32((uint32_t)(0x101ee4d8u));
  /* 101e14a8 call eax */
  call_ind((uint32_t)(EAX), 0x101e14aau);
  /* 101e14aa mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e14af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e14b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e14b4 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e14ba push 0x101eca28 */
  push32((uint32_t)(0x101eca28u));
  /* 101e14bf push 0x101f0d10 */
  push32((uint32_t)(0x101f0d10u));
  /* 101e14c4 call eax */
  call_ind((uint32_t)(EAX), 0x101e14c6u);
  /* 101e14c6 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e14cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e14ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e14d0 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e14d6 push 0x101eca14 */
  push32((uint32_t)(0x101eca14u));
  /* 101e14db push 0x101f0c08 */
  push32((uint32_t)(0x101f0c08u));
  /* 101e14e0 call eax */
  call_ind((uint32_t)(EAX), 0x101e14e2u);
  /* 101e14e2 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e14e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e14ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e14ec je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e14f2 push 0x101eca08 */
  push32((uint32_t)(0x101eca08u));
  /* 101e14f7 push 0x101f0dd0 */
  push32((uint32_t)(0x101f0dd0u));
  /* 101e14fc call eax */
  call_ind((uint32_t)(EAX), 0x101e14feu);
  /* 101e14fe mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1508 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e150a push 0x101ec9f8 */
  push32((uint32_t)(0x101ec9f8u));
  /* 101e150f push 0x101ee518 */
  push32((uint32_t)(0x101ee518u));
  /* 101e1514 call eax */
  call_ind((uint32_t)(EAX), 0x101e1516u);
  /* 101e1516 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e151b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e151e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1520 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e1522 push 0x101ec9ec */
  push32((uint32_t)(0x101ec9ecu));
  /* 101e1527 push 0x101f0b28 */
  push32((uint32_t)(0x101f0b28u));
  /* 101e152c call eax */
  call_ind((uint32_t)(EAX), 0x101e152eu);
  /* 101e152e mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1533 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1536 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1538 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e153a push 0x101ec9dc */
  push32((uint32_t)(0x101ec9dcu));
  /* 101e153f push 0x101ee4f8 */
  push32((uint32_t)(0x101ee4f8u));
  /* 101e1544 call eax */
  call_ind((uint32_t)(EAX), 0x101e1546u);
  /* 101e1546 mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e154b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e154e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1550 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e1552 push 0x101ec9d0 */
  push32((uint32_t)(0x101ec9d0u));
  /* 101e1557 push 0x101ee530 */
  push32((uint32_t)(0x101ee530u));
  /* 101e155c call eax */
  call_ind((uint32_t)(EAX), 0x101e155eu);
  /* 101e155e mov eax, dword ptr [0x101f0e88] */
  EAX = (r32((uint32_t)(0x101f0e88)));
  /* 101e1563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1566 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1568 je 0x101e1579 */
  if (C.zf) goto L_101e1579;
  /* 101e156a push 0x101ec9c4 */
  push32((uint32_t)(0x101ec9c4u));
  /* 101e156f push 0x101f0e60 */
  push32((uint32_t)(0x101f0e60u));
  /* 101e1574 call eax */
  call_ind((uint32_t)(EAX), 0x101e1576u);
  /* 101e1576 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e1579:;
  /* 101e1579 mov ecx, dword ptr [0x101f0e8c] */
  ECX = (r32((uint32_t)(0x101f0e8c)));
L_101e157f:;
  /* 101e157f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e1581 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1587 push 0x101ec9bc */
  push32((uint32_t)(0x101ec9bcu));
  /* 101e158c push 0x101f0de0 */
  push32((uint32_t)(0x101f0de0u));
  /* 101e1591 call ecx */
  call_ind((uint32_t)(ECX), 0x101e1593u);
  /* 101e1593 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1598 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e159b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e159d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e15a3 push 0x101ec9b4 */
  push32((uint32_t)(0x101ec9b4u));
  /* 101e15a8 push 0x101ee550 */
  push32((uint32_t)(0x101ee550u));
  /* 101e15ad call eax */
  call_ind((uint32_t)(EAX), 0x101e15afu);
  /* 101e15af mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e15b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e15b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e15b9 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e15bf push 0x101ec9a0 */
  push32((uint32_t)(0x101ec9a0u));
  /* 101e15c4 push 0x101f0dd8 */
  push32((uint32_t)(0x101f0dd8u));
  /* 101e15c9 call eax */
  call_ind((uint32_t)(EAX), 0x101e15cbu);
  /* 101e15cb mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e15d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e15d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e15d5 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e15db push 0x101ec98c */
  push32((uint32_t)(0x101ec98cu));
  /* 101e15e0 push 0x101f0dc0 */
  push32((uint32_t)(0x101f0dc0u));
  /* 101e15e5 call eax */
  call_ind((uint32_t)(EAX), 0x101e15e7u);
  /* 101e15e7 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e15ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e15ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e15f1 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e15f7 push 0x101ec978 */
  push32((uint32_t)(0x101ec978u));
  /* 101e15fc push 0x101f0dc8 */
  push32((uint32_t)(0x101f0dc8u));
  /* 101e1601 call eax */
  call_ind((uint32_t)(EAX), 0x101e1603u);
  /* 101e1603 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e160b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e160d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1613 push 0x101ec964 */
  push32((uint32_t)(0x101ec964u));
  /* 101e1618 push 0x101f0db0 */
  push32((uint32_t)(0x101f0db0u));
  /* 101e161d call eax */
  call_ind((uint32_t)(EAX), 0x101e161fu);
  /* 101e161f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1627 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1629 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e162f push 0x101ec950 */
  push32((uint32_t)(0x101ec950u));
  /* 101e1634 push 0x101f0db8 */
  push32((uint32_t)(0x101f0db8u));
  /* 101e1639 call eax */
  call_ind((uint32_t)(EAX), 0x101e163bu);
  /* 101e163b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1643 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1645 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e164b push 0x101ec93c */
  push32((uint32_t)(0x101ec93cu));
  /* 101e1650 push 0x101f0da8 */
  push32((uint32_t)(0x101f0da8u));
  /* 101e1655 call eax */
  call_ind((uint32_t)(EAX), 0x101e1657u);
  /* 101e1657 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e165c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e165f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1661 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1667 push 0x101ec924 */
  push32((uint32_t)(0x101ec924u));
  /* 101e166c push 0x101f0e50 */
  push32((uint32_t)(0x101f0e50u));
  /* 101e1671 call eax */
  call_ind((uint32_t)(EAX), 0x101e1673u);
  /* 101e1673 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1678 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e167b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e167d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1683 push 0x101ec91c */
  push32((uint32_t)(0x101ec91cu));
  /* 101e1688 push 0x101ee320 */
  push32((uint32_t)(0x101ee320u));
  /* 101e168d call eax */
  call_ind((uint32_t)(EAX), 0x101e168fu);
  /* 101e168f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1697 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1699 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e169f push 0x101ec904 */
  push32((uint32_t)(0x101ec904u));
  /* 101e16a4 push 0x101f0e28 */
  push32((uint32_t)(0x101f0e28u));
  /* 101e16a9 call eax */
  call_ind((uint32_t)(EAX), 0x101e16abu);
  /* 101e16ab mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e16b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e16b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e16b5 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e16bb push 0x101ec8e8 */
  push32((uint32_t)(0x101ec8e8u));
  /* 101e16c0 push 0x101f0e30 */
  push32((uint32_t)(0x101f0e30u));
  /* 101e16c5 call eax */
  call_ind((uint32_t)(EAX), 0x101e16c7u);
  /* 101e16c7 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e16cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e16cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e16d1 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e16d7 push 0x101ec8cc */
  push32((uint32_t)(0x101ec8ccu));
  /* 101e16dc push 0x101f0e18 */
  push32((uint32_t)(0x101f0e18u));
  /* 101e16e1 call eax */
  call_ind((uint32_t)(EAX), 0x101e16e3u);
  /* 101e16e3 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e16e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e16eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e16ed je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e16f3 push 0x101ec8b0 */
  push32((uint32_t)(0x101ec8b0u));
  /* 101e16f8 push 0x101f0e20 */
  push32((uint32_t)(0x101f0e20u));
  /* 101e16fd call eax */
  call_ind((uint32_t)(EAX), 0x101e16ffu);
  /* 101e16ff mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1704 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1707 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1709 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e170f push 0x101ec894 */
  push32((uint32_t)(0x101ec894u));
  /* 101e1714 push 0x101f0e38 */
  push32((uint32_t)(0x101f0e38u));
  /* 101e1719 call eax */
  call_ind((uint32_t)(EAX), 0x101e171bu);
  /* 101e171b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1720 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1725 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e172b push 0x101ec87c */
  push32((uint32_t)(0x101ec87cu));
  /* 101e1730 push 0x101f0d88 */
  push32((uint32_t)(0x101f0d88u));
  /* 101e1735 call eax */
  call_ind((uint32_t)(EAX), 0x101e1737u);
  /* 101e1737 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e173c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e173f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1741 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1747 push 0x101ec860 */
  push32((uint32_t)(0x101ec860u));
  /* 101e174c push 0x101f0d70 */
  push32((uint32_t)(0x101f0d70u));
  /* 101e1751 call eax */
  call_ind((uint32_t)(EAX), 0x101e1753u);
  /* 101e1753 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e175b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e175d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1763 push 0x101ec844 */
  push32((uint32_t)(0x101ec844u));
  /* 101e1768 push 0x101f0d78 */
  push32((uint32_t)(0x101f0d78u));
  /* 101e176d call eax */
  call_ind((uint32_t)(EAX), 0x101e176fu);
  /* 101e176f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1774 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1779 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e177f push 0x101ec828 */
  push32((uint32_t)(0x101ec828u));
  /* 101e1784 push 0x101f0d90 */
  push32((uint32_t)(0x101f0d90u));
  /* 101e1789 call eax */
  call_ind((uint32_t)(EAX), 0x101e178bu);
  /* 101e178b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1790 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1795 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e179b push 0x101ec80c */
  push32((uint32_t)(0x101ec80cu));
  /* 101e17a0 push 0x101f0d98 */
  push32((uint32_t)(0x101f0d98u));
  /* 101e17a5 call eax */
  call_ind((uint32_t)(EAX), 0x101e17a7u);
  /* 101e17a7 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e17ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e17af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e17b1 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e17b7 push 0x101ec7f4 */
  push32((uint32_t)(0x101ec7f4u));
  /* 101e17bc push 0x101f0df8 */
  push32((uint32_t)(0x101f0df8u));
  /* 101e17c1 call eax */
  call_ind((uint32_t)(EAX), 0x101e17c3u);
  /* 101e17c3 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e17c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e17cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e17cd je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e17d3 push 0x101ec7dc */
  push32((uint32_t)(0x101ec7dcu));
  /* 101e17d8 push 0x101f0e00 */
  push32((uint32_t)(0x101f0e00u));
  /* 101e17dd call eax */
  call_ind((uint32_t)(EAX), 0x101e17dfu);
  /* 101e17df mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e17e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e17e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e17e9 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e17ef push 0x101ec7c4 */
  push32((uint32_t)(0x101ec7c4u));
  /* 101e17f4 push 0x101f0e08 */
  push32((uint32_t)(0x101f0e08u));
  /* 101e17f9 call eax */
  call_ind((uint32_t)(EAX), 0x101e17fbu);
  /* 101e17fb mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1800 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1805 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e180b push 0x101ec7ac */
  push32((uint32_t)(0x101ec7acu));
  /* 101e1810 push 0x101f0cd8 */
  push32((uint32_t)(0x101f0cd8u));
  /* 101e1815 call eax */
  call_ind((uint32_t)(EAX), 0x101e1817u);
  /* 101e1817 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e181c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e181f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1821 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1827 push 0x101ec794 */
  push32((uint32_t)(0x101ec794u));
  /* 101e182c push 0x101f0ce0 */
  push32((uint32_t)(0x101f0ce0u));
  /* 101e1831 call eax */
  call_ind((uint32_t)(EAX), 0x101e1833u);
  /* 101e1833 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1838 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e183b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e183d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1843 push 0x101ec77c */
  push32((uint32_t)(0x101ec77cu));
  /* 101e1848 push 0x101f0cf0 */
  push32((uint32_t)(0x101f0cf0u));
  /* 101e184d call eax */
  call_ind((uint32_t)(EAX), 0x101e184fu);
  /* 101e184f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1859 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e185f push 0x101ec760 */
  push32((uint32_t)(0x101ec760u));
  /* 101e1864 push 0x101f0b88 */
  push32((uint32_t)(0x101f0b88u));
  /* 101e1869 call eax */
  call_ind((uint32_t)(EAX), 0x101e186bu);
  /* 101e186b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1875 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e187b push 0x101ec744 */
  push32((uint32_t)(0x101ec744u));
  /* 101e1880 push 0x101f0b80 */
  push32((uint32_t)(0x101f0b80u));
  /* 101e1885 call eax */
  call_ind((uint32_t)(EAX), 0x101e1887u);
  /* 101e1887 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e188c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e188f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1891 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1897 push 0x101ec728 */
  push32((uint32_t)(0x101ec728u));
  /* 101e189c push 0x101f0b78 */
  push32((uint32_t)(0x101f0b78u));
  /* 101e18a1 call eax */
  call_ind((uint32_t)(EAX), 0x101e18a3u);
  /* 101e18a3 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e18a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e18ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e18ad je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e18b3 push 0x101ec70c */
  push32((uint32_t)(0x101ec70cu));
  /* 101e18b8 push 0x101f0b70 */
  push32((uint32_t)(0x101f0b70u));
  /* 101e18bd call eax */
  call_ind((uint32_t)(EAX), 0x101e18bfu);
  /* 101e18bf mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e18c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e18c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e18c9 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e18cf push 0x101ec6f0 */
  push32((uint32_t)(0x101ec6f0u));
  /* 101e18d4 push 0x101f0b68 */
  push32((uint32_t)(0x101f0b68u));
  /* 101e18d9 call eax */
  call_ind((uint32_t)(EAX), 0x101e18dbu);
  /* 101e18db mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e18e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e18e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e18e5 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e18eb push 0x101ec6d4 */
  push32((uint32_t)(0x101ec6d4u));
  /* 101e18f0 push 0x101f0b60 */
  push32((uint32_t)(0x101f0b60u));
  /* 101e18f5 call eax */
  call_ind((uint32_t)(EAX), 0x101e18f7u);
  /* 101e18f7 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e18fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e18ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1901 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1907 push 0x101ec6b8 */
  push32((uint32_t)(0x101ec6b8u));
  /* 101e190c push 0x101f0c38 */
  push32((uint32_t)(0x101f0c38u));
  /* 101e1911 call eax */
  call_ind((uint32_t)(EAX), 0x101e1913u);
  /* 101e1913 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e191b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e191d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1923 push 0x101ec69c */
  push32((uint32_t)(0x101ec69cu));
  /* 101e1928 push 0x101f0c30 */
  push32((uint32_t)(0x101f0c30u));
  /* 101e192d call eax */
  call_ind((uint32_t)(EAX), 0x101e192fu);
  /* 101e192f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1937 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1939 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e193f push 0x101ec680 */
  push32((uint32_t)(0x101ec680u));
  /* 101e1944 push 0x101f0c28 */
  push32((uint32_t)(0x101f0c28u));
  /* 101e1949 call eax */
  call_ind((uint32_t)(EAX), 0x101e194bu);
  /* 101e194b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1950 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1953 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1955 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e195b push 0x101ec664 */
  push32((uint32_t)(0x101ec664u));
  /* 101e1960 push 0x101f0c20 */
  push32((uint32_t)(0x101f0c20u));
  /* 101e1965 call eax */
  call_ind((uint32_t)(EAX), 0x101e1967u);
  /* 101e1967 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e196c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e196f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1971 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1977 push 0x101ec648 */
  push32((uint32_t)(0x101ec648u));
  /* 101e197c push 0x101f0c10 */
  push32((uint32_t)(0x101f0c10u));
  /* 101e1981 call eax */
  call_ind((uint32_t)(EAX), 0x101e1983u);
  /* 101e1983 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1988 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e198b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e198d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1993 push 0x101ec62c */
  push32((uint32_t)(0x101ec62cu));
  /* 101e1998 push 0x101f0c60 */
  push32((uint32_t)(0x101f0c60u));
  /* 101e199d call eax */
  call_ind((uint32_t)(EAX), 0x101e199fu);
  /* 101e199f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e19a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e19a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e19a9 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e19af push 0x101ec618 */
  push32((uint32_t)(0x101ec618u));
  /* 101e19b4 push 0x101ee348 */
  push32((uint32_t)(0x101ee348u));
  /* 101e19b9 call eax */
  call_ind((uint32_t)(EAX), 0x101e19bbu);
  /* 101e19bb mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e19c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e19c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e19c5 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e19cb push 0x101ec604 */
  push32((uint32_t)(0x101ec604u));
  /* 101e19d0 push 0x101ee338 */
  push32((uint32_t)(0x101ee338u));
  /* 101e19d5 call eax */
  call_ind((uint32_t)(EAX), 0x101e19d7u);
  /* 101e19d7 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e19dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e19df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e19e1 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e19e7 push 0x101ec5f0 */
  push32((uint32_t)(0x101ec5f0u));
  /* 101e19ec push 0x101ee340 */
  push32((uint32_t)(0x101ee340u));
  /* 101e19f1 call eax */
  call_ind((uint32_t)(EAX), 0x101e19f3u);
  /* 101e19f3 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e19f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e19fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e19fd je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1a03 push 0x101ec5dc */
  push32((uint32_t)(0x101ec5dcu));
  /* 101e1a08 push 0x101ee3c0 */
  push32((uint32_t)(0x101ee3c0u));
  /* 101e1a0d call eax */
  call_ind((uint32_t)(EAX), 0x101e1a0fu);
  /* 101e1a0f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1a14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1a19 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1a1f push 0x101ec5c8 */
  push32((uint32_t)(0x101ec5c8u));
  /* 101e1a24 push 0x101ee3c8 */
  push32((uint32_t)(0x101ee3c8u));
  /* 101e1a29 call eax */
  call_ind((uint32_t)(EAX), 0x101e1a2bu);
  /* 101e1a2b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1a33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1a35 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1a3b push 0x101ec5b4 */
  push32((uint32_t)(0x101ec5b4u));
  /* 101e1a40 push 0x101ee3b0 */
  push32((uint32_t)(0x101ee3b0u));
  /* 101e1a45 call eax */
  call_ind((uint32_t)(EAX), 0x101e1a47u);
  /* 101e1a47 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1a4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1a4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1a51 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1a57 push 0x101ec5a0 */
  push32((uint32_t)(0x101ec5a0u));
  /* 101e1a5c push 0x101ee3b8 */
  push32((uint32_t)(0x101ee3b8u));
  /* 101e1a61 call eax */
  call_ind((uint32_t)(EAX), 0x101e1a63u);
  /* 101e1a63 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1a68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1a6d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1a73 push 0x101ec590 */
  push32((uint32_t)(0x101ec590u));
  /* 101e1a78 push 0x101f0cf8 */
  push32((uint32_t)(0x101f0cf8u));
  /* 101e1a7d call eax */
  call_ind((uint32_t)(EAX), 0x101e1a7fu);
  /* 101e1a7f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1a84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1a89 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1a8f push 0x101ec57c */
  push32((uint32_t)(0x101ec57cu));
  /* 101e1a94 push 0x101f0ce8 */
  push32((uint32_t)(0x101f0ce8u));
  /* 101e1a99 call eax */
  call_ind((uint32_t)(EAX), 0x101e1a9bu);
  /* 101e1a9b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1aa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1aa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1aa5 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1aab push 0x101ec568 */
  push32((uint32_t)(0x101ec568u));
  /* 101e1ab0 push 0x101f0ca8 */
  push32((uint32_t)(0x101f0ca8u));
  /* 101e1ab5 call eax */
  call_ind((uint32_t)(EAX), 0x101e1ab7u);
  /* 101e1ab7 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1abc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1ac1 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1ac7 push 0x101ec554 */
  push32((uint32_t)(0x101ec554u));
  /* 101e1acc push 0x101f0ca0 */
  push32((uint32_t)(0x101f0ca0u));
  /* 101e1ad1 call eax */
  call_ind((uint32_t)(EAX), 0x101e1ad3u);
  /* 101e1ad3 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1ad8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1add je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1ae3 push 0x101ec540 */
  push32((uint32_t)(0x101ec540u));
  /* 101e1ae8 push 0x101f0cb0 */
  push32((uint32_t)(0x101f0cb0u));
  /* 101e1aed call eax */
  call_ind((uint32_t)(EAX), 0x101e1aefu);
  /* 101e1aef mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1af7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1af9 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1aff push 0x101ec52c */
  push32((uint32_t)(0x101ec52cu));
  /* 101e1b04 push 0x101f0bb0 */
  push32((uint32_t)(0x101f0bb0u));
  /* 101e1b09 call eax */
  call_ind((uint32_t)(EAX), 0x101e1b0bu);
  /* 101e1b0b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1b10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1b15 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1b1b push 0x101ec518 */
  push32((uint32_t)(0x101ec518u));
  /* 101e1b20 push 0x101f0bb8 */
  push32((uint32_t)(0x101f0bb8u));
  /* 101e1b25 call eax */
  call_ind((uint32_t)(EAX), 0x101e1b27u);
  /* 101e1b27 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1b2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1b2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1b31 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1b37 push 0x101ec504 */
  push32((uint32_t)(0x101ec504u));
  /* 101e1b3c push 0x101f0bc0 */
  push32((uint32_t)(0x101f0bc0u));
  /* 101e1b41 call eax */
  call_ind((uint32_t)(EAX), 0x101e1b43u);
  /* 101e1b43 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1b48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1b4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1b4d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1b53 push 0x101ec4f0 */
  push32((uint32_t)(0x101ec4f0u));
  /* 101e1b58 push 0x101f0bc8 */
  push32((uint32_t)(0x101f0bc8u));
  /* 101e1b5d call eax */
  call_ind((uint32_t)(EAX), 0x101e1b5fu);
  /* 101e1b5f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1b69 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1b6f push 0x101ec4e8 */
  push32((uint32_t)(0x101ec4e8u));
  /* 101e1b74 push 0x101f0cc0 */
  push32((uint32_t)(0x101f0cc0u));
  /* 101e1b79 call eax */
  call_ind((uint32_t)(EAX), 0x101e1b7bu);
  /* 101e1b7b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1b80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1b83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1b85 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1b8b push 0x101ec4e0 */
  push32((uint32_t)(0x101ec4e0u));
  /* 101e1b90 push 0x101f0ba8 */
  push32((uint32_t)(0x101f0ba8u));
  /* 101e1b95 call eax */
  call_ind((uint32_t)(EAX), 0x101e1b97u);
  /* 101e1b97 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1b9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1b9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1ba1 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1ba7 push 0x101ec4d8 */
  push32((uint32_t)(0x101ec4d8u));
  /* 101e1bac push 0x101f0b90 */
  push32((uint32_t)(0x101f0b90u));
  /* 101e1bb1 call eax */
  call_ind((uint32_t)(EAX), 0x101e1bb3u);
  /* 101e1bb3 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1bbd je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1bc3 push 0x101ec4d0 */
  push32((uint32_t)(0x101ec4d0u));
  /* 101e1bc8 push 0x101f0b98 */
  push32((uint32_t)(0x101f0b98u));
  /* 101e1bcd call eax */
  call_ind((uint32_t)(EAX), 0x101e1bcfu);
  /* 101e1bcf mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1bd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1bd9 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1bdf push 0x101ec4c8 */
  push32((uint32_t)(0x101ec4c8u));
  /* 101e1be4 push 0x101f0ba0 */
  push32((uint32_t)(0x101f0ba0u));
  /* 101e1be9 call eax */
  call_ind((uint32_t)(EAX), 0x101e1bebu);
  /* 101e1beb mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1bf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1bf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1bf5 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1bfb push 0x101ec4c0 */
  push32((uint32_t)(0x101ec4c0u));
  /* 101e1c00 push 0x101f0d60 */
  push32((uint32_t)(0x101f0d60u));
  /* 101e1c05 call eax */
  call_ind((uint32_t)(EAX), 0x101e1c07u);
  /* 101e1c07 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1c0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1c0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1c11 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1c17 push 0x101ec4b8 */
  push32((uint32_t)(0x101ec4b8u));
  /* 101e1c1c push 0x101f0c18 */
  push32((uint32_t)(0x101f0c18u));
  /* 101e1c21 call eax */
  call_ind((uint32_t)(EAX), 0x101e1c23u);
  /* 101e1c23 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1c28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1c2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1c2d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1c33 push 0x101ec4b0 */
  push32((uint32_t)(0x101ec4b0u));
  /* 101e1c38 push 0x101f0c58 */
  push32((uint32_t)(0x101f0c58u));
  /* 101e1c3d call eax */
  call_ind((uint32_t)(EAX), 0x101e1c3fu);
  /* 101e1c3f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1c44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1c49 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1c4f push 0x101ec4a8 */
  push32((uint32_t)(0x101ec4a8u));
  /* 101e1c54 push 0x101f0d30 */
  push32((uint32_t)(0x101f0d30u));
  /* 101e1c59 call eax */
  call_ind((uint32_t)(EAX), 0x101e1c5bu);
  /* 101e1c5b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1c60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1c63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1c65 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1c6b push 0x101ec4a0 */
  push32((uint32_t)(0x101ec4a0u));
  /* 101e1c70 push 0x101f0d38 */
  push32((uint32_t)(0x101f0d38u));
  /* 101e1c75 call eax */
  call_ind((uint32_t)(EAX), 0x101e1c77u);
  /* 101e1c77 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1c7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1c7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1c81 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1c87 push 0x101ec498 */
  push32((uint32_t)(0x101ec498u));
  /* 101e1c8c push 0x101f0c70 */
  push32((uint32_t)(0x101f0c70u));
  /* 101e1c91 call eax */
  call_ind((uint32_t)(EAX), 0x101e1c93u);
  /* 101e1c93 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1c9d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1ca3 push 0x101ec490 */
  push32((uint32_t)(0x101ec490u));
  /* 101e1ca8 push 0x101f0c80 */
  push32((uint32_t)(0x101f0c80u));
  /* 101e1cad call eax */
  call_ind((uint32_t)(EAX), 0x101e1cafu);
  /* 101e1caf mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1cb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1cb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1cb9 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1cbf push 0x101ec488 */
  push32((uint32_t)(0x101ec488u));
  /* 101e1cc4 push 0x101f0c88 */
  push32((uint32_t)(0x101f0c88u));
  /* 101e1cc9 call eax */
  call_ind((uint32_t)(EAX), 0x101e1ccbu);
  /* 101e1ccb mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1cd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1cd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1cd5 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1cdb push 0x101ec480 */
  push32((uint32_t)(0x101ec480u));
  /* 101e1ce0 push 0x101f0c78 */
  push32((uint32_t)(0x101f0c78u));
  /* 101e1ce5 call eax */
  call_ind((uint32_t)(EAX), 0x101e1ce7u);
  /* 101e1ce7 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1cec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1cf1 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1cf7 push 0x101ec478 */
  push32((uint32_t)(0x101ec478u));
  /* 101e1cfc push 0x101ee528 */
  push32((uint32_t)(0x101ee528u));
  /* 101e1d01 call eax */
  call_ind((uint32_t)(EAX), 0x101e1d03u);
  /* 101e1d03 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1d08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1d0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1d0d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1d13 push 0x101ec470 */
  push32((uint32_t)(0x101ec470u));
  /* 101e1d18 push 0x101ee400 */
  push32((uint32_t)(0x101ee400u));
  /* 101e1d1d call eax */
  call_ind((uint32_t)(EAX), 0x101e1d1fu);
  /* 101e1d1f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1d29 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1d2f push 0x101ec468 */
  push32((uint32_t)(0x101ec468u));
  /* 101e1d34 push 0x101f0c00 */
  push32((uint32_t)(0x101f0c00u));
  /* 101e1d39 call eax */
  call_ind((uint32_t)(EAX), 0x101e1d3bu);
  /* 101e1d3b mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1d40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1d43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1d45 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1d4b push 0x101ec460 */
  push32((uint32_t)(0x101ec460u));
  /* 101e1d50 push 0x101ee540 */
  push32((uint32_t)(0x101ee540u));
  /* 101e1d55 call eax */
  call_ind((uint32_t)(EAX), 0x101e1d57u);
  /* 101e1d57 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1d5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1d61 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1d67 push 0x101ec458 */
  push32((uint32_t)(0x101ec458u));
  /* 101e1d6c push 0x101f0d20 */
  push32((uint32_t)(0x101f0d20u));
  /* 101e1d71 call eax */
  call_ind((uint32_t)(EAX), 0x101e1d73u);
  /* 101e1d73 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1d78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1d7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1d7d je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1d83 push 0x101ec450 */
  push32((uint32_t)(0x101ec450u));
  /* 101e1d88 push 0x101f0d28 */
  push32((uint32_t)(0x101f0d28u));
  /* 101e1d8d call eax */
  call_ind((uint32_t)(EAX), 0x101e1d8fu);
  /* 101e1d8f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1d97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1d99 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1d9f push 0x101ec448 */
  push32((uint32_t)(0x101ec448u));
  /* 101e1da4 push 0x101ee4d0 */
  push32((uint32_t)(0x101ee4d0u));
  /* 101e1da9 call eax */
  call_ind((uint32_t)(EAX), 0x101e1dabu);
  /* 101e1dab mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1db0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1db5 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1dbb push 0x101ec440 */
  push32((uint32_t)(0x101ec440u));
  /* 101e1dc0 push 0x101ee4e0 */
  push32((uint32_t)(0x101ee4e0u));
  /* 101e1dc5 call eax */
  call_ind((uint32_t)(EAX), 0x101e1dc7u);
  /* 101e1dc7 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1dcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1dd1 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1dd3 push 0x101ec438 */
  push32((uint32_t)(0x101ec438u));
  /* 101e1dd8 push 0x101ee308 */
  push32((uint32_t)(0x101ee308u));
  /* 101e1ddd call eax */
  call_ind((uint32_t)(EAX), 0x101e1ddfu);
  /* 101e1ddf mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1de4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1de9 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1deb push 0x101ec430 */
  push32((uint32_t)(0x101ec430u));
  /* 101e1df0 push 0x101ee2f8 */
  push32((uint32_t)(0x101ee2f8u));
  /* 101e1df5 call eax */
  call_ind((uint32_t)(EAX), 0x101e1df7u);
  /* 101e1df7 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1dfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1dff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1e01 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1e03 push 0x101ec428 */
  push32((uint32_t)(0x101ec428u));
  /* 101e1e08 push 0x101ee500 */
  push32((uint32_t)(0x101ee500u));
  /* 101e1e0d call eax */
  call_ind((uint32_t)(EAX), 0x101e1e0fu);
  /* 101e1e0f mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1e19 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1e1b push 0x101ec420 */
  push32((uint32_t)(0x101ec420u));
  /* 101e1e20 push 0x101ee520 */
  push32((uint32_t)(0x101ee520u));
  /* 101e1e25 call eax */
  call_ind((uint32_t)(EAX), 0x101e1e27u);
  /* 101e1e27 mov eax, dword ptr [0x101f0e8c] */
  EAX = (r32((uint32_t)(0x101f0e8c)));
  /* 101e1e2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e1e31 je 0x101e1e42 */
  if (C.zf) goto L_101e1e42;
  /* 101e1e33 push 0x101ec418 */
  push32((uint32_t)(0x101ec418u));
  /* 101e1e38 push 0x101ee548 */
  push32((uint32_t)(0x101ee548u));
  /* 101e1e3d call eax */
  call_ind((uint32_t)(EAX), 0x101e1e3fu);
  /* 101e1e3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e1e42:;
  /* 101e1e42 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e1e44 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e1e46 push 9 */
  push32((uint32_t)(0x9u));
  /* 101e1e48 call dword ptr [0x101f0fa4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fa4))), 0x101e1e4eu);
  /* 101e1e4e push 6 */
  push32((uint32_t)(0x6u));
  /* 101e1e50 call dword ptr [0x101f0fb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fb0))), 0x101e1e56u);
  /* 101e1e56 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e1e58 push 0x101ec404 */
  push32((uint32_t)(0x101ec404u));
  /* 101e1e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 101e1e5f call dword ptr [0x101f0fb4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fb4))), 0x101e1e65u);
  /* 101e1e65 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e1e67 push 0x101ec3f0 */
  push32((uint32_t)(0x101ec3f0u));
  /* 101e1e6c push 1 */
  push32((uint32_t)(0x1u));
  /* 101e1e6e call dword ptr [0x101f0fb4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fb4))), 0x101e1e74u);
  /* 101e1e74 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e1e76 push 0x101ec3dc */
  push32((uint32_t)(0x101ec3dcu));
  /* 101e1e7b push 2 */
  push32((uint32_t)(0x2u));
  /* 101e1e7d call dword ptr [0x101f0fb4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fb4))), 0x101e1e83u);
  /* 101e1e83 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e1e85 push 0x101ec3c8 */
  push32((uint32_t)(0x101ec3c8u));
  /* 101e1e8a push 3 */
  push32((uint32_t)(0x3u));
  /* 101e1e8c call dword ptr [0x101f0fb4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fb4))), 0x101e1e92u);
  /* 101e1e92 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1e95 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e1e97 push 0x101ec3b4 */
  push32((uint32_t)(0x101ec3b4u));
  /* 101e1e9c push 4 */
  push32((uint32_t)(0x4u));
  /* 101e1e9e call dword ptr [0x101f0fb4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fb4))), 0x101e1ea4u);
  /* 101e1ea4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e1ea6 push 0x101ec3a0 */
  push32((uint32_t)(0x101ec3a0u));
  /* 101e1eab push 5 */
  push32((uint32_t)(0x5u));
  /* 101e1ead call dword ptr [0x101f0fb4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fb4))), 0x101e1eb3u);
  /* 101e1eb3 push 0x101ecbe8 */
  push32((uint32_t)(0x101ecbe8u));
  /* 101e1eb8 call dword ptr [0x101f0ff0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0ff0))), 0x101e1ebeu);
  /* 101e1ebe push 0x101ec394 */
  push32((uint32_t)(0x101ec394u));
  /* 101e1ec3 call dword ptr [0x101f0fec] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fec))), 0x101e1ec9u);
  /* 101e1ec9 push 0x101ec384 */
  push32((uint32_t)(0x101ec384u));
  /* 101e1ece call dword ptr [0x101f0ff4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0ff4))), 0x101e1ed4u);
  /* 101e1ed4 push 0x122 */
  push32((uint32_t)(0x122u));
  /* 101e1ed9 call dword ptr [0x101f0fb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fb8))), 0x101e1edfu);
  /* 101e1edf push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101e1ee4 call dword ptr [0x101f0fbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fbc))), 0x101e1eeau);
  /* 101e1eea push 0x82 */
  push32((uint32_t)(0x82u));
  /* 101e1eef call dword ptr [0x101f0fc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fc0))), 0x101e1ef5u);
  /* 101e1ef5 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 101e1efa call dword ptr [0x101f0fc4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fc4))), 0x101e1f00u);
  /* 101e1f00 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e1f02 call dword ptr [0x101f0fc8] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fc8))), 0x101e1f08u);
  /* 101e1f08 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1f0b ret  */
  ESPCHK(0x101e11e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f10 @ 0x101e1f10 (25 bytes, 9 insns) */
void f_101e1f10(void) {
  FTRACE(0x101e1f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e1f10 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101e1f14 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e1f18 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e1f1c push eax */
  push32((uint32_t)(EAX));
  /* 101e1f1d push ecx */
  push32((uint32_t)(ECX));
  /* 101e1f1e push edx */
  push32((uint32_t)(EDX));
  /* 101e1f1f call dword ptr [0x101f0fac] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fac))), 0x101e1f25u);
  /* 101e1f25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1f28 ret  */
  ESPCHK(0x101e1f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f30 @ 0x101e1f30 (368 bytes, 100 insns) */
void f_101e1f30(void) {
  FTRACE(0x101e1f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e1f30 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1f32 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e1f34 push 0x101ee348 */
  push32((uint32_t)(0x101ee348u));
  /* 101e1f39 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1f3fu);
  /* 101e1f3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1f41 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e1f43 push 0x101ee338 */
  push32((uint32_t)(0x101ee338u));
  /* 101e1f48 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1f4eu);
  /* 101e1f4e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1f50 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e1f52 push 0x101ee340 */
  push32((uint32_t)(0x101ee340u));
  /* 101e1f57 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1f5du);
  /* 101e1f5d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1f5f push 0xa */
  push32((uint32_t)(0xau));
  /* 101e1f61 push 0x101ee3c0 */
  push32((uint32_t)(0x101ee3c0u));
  /* 101e1f66 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1f6cu);
  /* 101e1f6c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1f6e push 0xa */
  push32((uint32_t)(0xau));
  /* 101e1f70 push 0x101ee3c8 */
  push32((uint32_t)(0x101ee3c8u));
  /* 101e1f75 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1f7bu);
  /* 101e1f7b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1f7d push 0xa */
  push32((uint32_t)(0xau));
  /* 101e1f7f push 0x101ee3b0 */
  push32((uint32_t)(0x101ee3b0u));
  /* 101e1f84 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1f8au);
  /* 101e1f8a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1f8d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1f8f push 0xa */
  push32((uint32_t)(0xau));
  /* 101e1f91 push 0x101ee3b8 */
  push32((uint32_t)(0x101ee3b8u));
  /* 101e1f96 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1f9cu);
  /* 101e1f9c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1f9e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e1fa0 push 0x101f0e28 */
  push32((uint32_t)(0x101f0e28u));
  /* 101e1fa5 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1fabu);
  /* 101e1fab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1fad push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e1faf push 0x101f0e30 */
  push32((uint32_t)(0x101f0e30u));
  /* 101e1fb4 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1fbau);
  /* 101e1fba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1fbc push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e1fbe push 0x101f0e18 */
  push32((uint32_t)(0x101f0e18u));
  /* 101e1fc3 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1fc9u);
  /* 101e1fc9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1fcb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e1fcd push 0x101f0e20 */
  push32((uint32_t)(0x101f0e20u));
  /* 101e1fd2 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1fd8u);
  /* 101e1fd8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1fda push 0xa */
  push32((uint32_t)(0xau));
  /* 101e1fdc push 0x101f0e38 */
  push32((uint32_t)(0x101f0e38u));
  /* 101e1fe1 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1fe7u);
  /* 101e1fe7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e1fea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1fec push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e1fee push 0x101f0d88 */
  push32((uint32_t)(0x101f0d88u));
  /* 101e1ff3 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e1ff9u);
  /* 101e1ff9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e1ffb push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e1ffd push 0x101f0d70 */
  push32((uint32_t)(0x101f0d70u));
  /* 101e2002 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2008u);
  /* 101e2008 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e200a push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e200c push 0x101f0d78 */
  push32((uint32_t)(0x101f0d78u));
  /* 101e2011 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2017u);
  /* 101e2017 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2019 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e201b push 0x101f0d90 */
  push32((uint32_t)(0x101f0d90u));
  /* 101e2020 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2026u);
  /* 101e2026 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2028 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e202a push 0x101f0d98 */
  push32((uint32_t)(0x101f0d98u));
  /* 101e202f call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2035u);
  /* 101e2035 mov eax, dword ptr [0x101f0b20] */
  EAX = (r32((uint32_t)(0x101f0b20)));
  /* 101e203a add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e203d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2040 jne 0x101e209f */
  if (!C.zf) goto L_101e209f;
  /* 101e2042 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2044 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2046 push 0x101f0df8 */
  push32((uint32_t)(0x101f0df8u));
  /* 101e204b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2051u);
  /* 101e2051 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2053 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2055 push 0x101f0e00 */
  push32((uint32_t)(0x101f0e00u));
  /* 101e205a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2060u);
  /* 101e2060 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2062 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2064 push 0x101f0e08 */
  push32((uint32_t)(0x101f0e08u));
  /* 101e2069 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e206fu);
  /* 101e206f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2071 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2073 push 0x101f0cd8 */
  push32((uint32_t)(0x101f0cd8u));
  /* 101e2078 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e207eu);
  /* 101e207e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2080 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2082 push 0x101f0ce0 */
  push32((uint32_t)(0x101f0ce0u));
  /* 101e2087 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e208du);
  /* 101e208d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e208f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2091 push 0x101f0cf0 */
  push32((uint32_t)(0x101f0cf0u));
  /* 101e2096 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e209cu);
  /* 101e209c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e209f:;
  /* 101e209f ret  */
  ESPCHK(0x101e1f30u, _esp0);
  ESP += 4; return;
}

/* FUN_100020a0 @ 0x101e20a0 (94 bytes, 26 insns) */
void f_101e20a0(void) {
  FTRACE(0x101e20a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e20a0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e20a2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e20a4 push 0x101f0df8 */
  push32((uint32_t)(0x101f0df8u));
  /* 101e20a9 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e20afu);
  /* 101e20af push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e20b1 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e20b3 push 0x101f0e00 */
  push32((uint32_t)(0x101f0e00u));
  /* 101e20b8 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e20beu);
  /* 101e20be push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e20c0 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e20c2 push 0x101f0e08 */
  push32((uint32_t)(0x101f0e08u));
  /* 101e20c7 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e20cdu);
  /* 101e20cd push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e20cf push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e20d1 push 0x101f0cd8 */
  push32((uint32_t)(0x101f0cd8u));
  /* 101e20d6 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e20dcu);
  /* 101e20dc push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e20de push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e20e0 push 0x101f0ce0 */
  push32((uint32_t)(0x101f0ce0u));
  /* 101e20e5 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e20ebu);
  /* 101e20eb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e20ed push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e20ef push 0x101f0cf0 */
  push32((uint32_t)(0x101f0cf0u));
  /* 101e20f4 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e20fau);
  /* 101e20fa add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e20fd ret  */
  ESPCHK(0x101e20a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002100 @ 0x101e2100 (136 bytes, 37 insns) */
void f_101e2100(void) {
  FTRACE(0x101e2100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2100 cmp dword ptr [0x101f0b20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101f0b20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2107 jne 0x101e2148 */
  if (!C.zf) goto L_101e2148;
  /* 101e2109 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e210b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e210d push 0x101f0cf8 */
  push32((uint32_t)(0x101f0cf8u));
  /* 101e2112 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2118u);
  /* 101e2118 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e211a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e211c push 0x101f0ce8 */
  push32((uint32_t)(0x101f0ce8u));
  /* 101e2121 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2127u);
  /* 101e2127 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2129 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e212b push 0x101f0ca8 */
  push32((uint32_t)(0x101f0ca8u));
  /* 101e2130 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2136u);
  /* 101e2136 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2138 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e213a push 0x101f0ca0 */
  push32((uint32_t)(0x101f0ca0u));
  /* 101e213f call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2145u);
  /* 101e2145 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2148:;
  /* 101e2148 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e214a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e214c push 0x101f0bb0 */
  push32((uint32_t)(0x101f0bb0u));
  /* 101e2151 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2157u);
  /* 101e2157 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2159 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e215b push 0x101f0bb8 */
  push32((uint32_t)(0x101f0bb8u));
  /* 101e2160 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2166u);
  /* 101e2166 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2168 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e216a push 0x101f0bc0 */
  push32((uint32_t)(0x101f0bc0u));
  /* 101e216f call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2175u);
  /* 101e2175 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2177 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2179 push 0x101f0bc8 */
  push32((uint32_t)(0x101f0bc8u));
  /* 101e217e call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2184u);
  /* 101e2184 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2187 ret  */
  ESPCHK(0x101e2100u, _esp0);
  ESP += 4; return;
}

/* FUN_10002190 @ 0x101e2190 (6 bytes, 1 insns) */
void f_101e2190(void) {
  FTRACE(0x101e2190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2190 jmp dword ptr [0x101f1004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101f1004)))); return;
}

/* FUN_100021a0 @ 0x101e21a0 (6 bytes, 1 insns) */
void f_101e21a0(void) {
  FTRACE(0x101e21a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e21a0 jmp dword ptr [0x101f1008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101f1008)))); return;
}

/* FUN_100021b0 @ 0x101e21b0 (2527 bytes, 716 insns) */
void f_101e21b0(void) {
  FTRACE(0x101e21b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e21b0 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e21b3 push ebx */
  push32((uint32_t)(EBX));
  /* 101e21b4 push ebp */
  push32((uint32_t)(EBP));
  /* 101e21b5 push esi */
  push32((uint32_t)(ESI));
  /* 101e21b6 push edi */
  push32((uint32_t)(EDI));
  /* 101e21b7 push 0x101ec030 */
  push32((uint32_t)(0x101ec030u));
  /* 101e21bc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e21be call dword ptr [0x101f0f9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f9c))), 0x101e21c4u);
  /* 101e21c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e21c6 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e21ccu);
  /* 101e21cc push 0 */
  push32((uint32_t)(0x0u));
  /* 101e21ce mov edi, eax */
  EDI = (EAX);
  /* 101e21d0 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e21d6u);
  /* 101e21d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e21d8 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 101e21dc call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e21e2u);
  /* 101e21e2 mov ebx, 1 */
  EBX = (0x1u);
  /* 101e21e7 mov esi, eax */
  ESI = (EAX);
  /* 101e21e9 push ebx */
  push32((uint32_t)(EBX));
  /* 101e21ea mov dword ptr [esp + 0x30], esi */
  w32((uint32_t)(ESP + 0x30), (ESI));
  /* 101e21ee call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e21f4u);
  /* 101e21f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e21f6 mov ebp, eax */
  EBP = (EAX);
  /* 101e21f8 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e21feu);
  /* 101e21fe push 4 */
  push32((uint32_t)(0x4u));
  /* 101e2200 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 101e2204 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e220au);
  /* 101e220a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e220c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e220e push ebx */
  push32((uint32_t)(EBX));
  /* 101e220f push 0x101f0b50 */
  push32((uint32_t)(0x101f0b50u));
  /* 101e2214 mov dword ptr [esp + 0x4c], eax */
  w32((uint32_t)(ESP + 0x4c), (EAX));
  /* 101e2218 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e221eu);
  /* 101e221e push 0x101f0b50 */
  push32((uint32_t)(0x101f0b50u));
  /* 101e2223 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e2229u);
  /* 101e2229 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e222c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e222e je 0x101e2496 */
  if (C.zf) goto L_101e2496;
  /* 101e2234 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2236 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2238 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e223a push 0x101f0b30 */
  push32((uint32_t)(0x101f0b30u));
  /* 101e223f call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2245u);
  /* 101e2245 push 0x101f0b30 */
  push32((uint32_t)(0x101f0b30u));
  /* 101e224a call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e2250u);
  /* 101e2250 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e2255 je 0x101e2496 */
  if (C.zf) goto L_101e2496;
  /* 101e225b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e225d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e225f push ebx */
  push32((uint32_t)(EBX));
  /* 101e2260 push 0x101f0d10 */
  push32((uint32_t)(0x101f0d10u));
  /* 101e2265 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e226bu);
  /* 101e226b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e226d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e226f push ebx */
  push32((uint32_t)(EBX));
  /* 101e2270 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e2275 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e227bu);
  /* 101e227b push 0x101f0b18 */
  push32((uint32_t)(0x101f0b18u));
  /* 101e2280 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e2286u);
  /* 101e2286 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e228b je 0x101e22f1 */
  if (C.zf) goto L_101e22f1;
  /* 101e228d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e228f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2291 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e2293 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e2298 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e229eu);
  /* 101e229e push 0x101f0b30 */
  push32((uint32_t)(0x101f0b30u));
  /* 101e22a3 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e22a9u);
  /* 101e22a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e22ac cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e22ae jle 0x101e22f1 */
  if ((C.zf||C.sf!=C.of)) goto L_101e22f1;
  /* 101e22b0 cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e22b6 jle 0x101e22cc */
  if ((C.zf||C.sf!=C.of)) goto L_101e22cc;
  /* 101e22b8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e22ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e22bc push 3 */
  push32((uint32_t)(0x3u));
  /* 101e22be push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e22c3 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e22c9u);
  /* 101e22c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e22cc:;
  /* 101e22cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e22ce push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e22d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e22d2 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e22d7 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e22ddu);
  /* 101e22dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e22df push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e22e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e22e3 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e22e8 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e22eeu);
  /* 101e22ee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e22f1:;
  /* 101e22f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e22f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e22f5 push ebx */
  push32((uint32_t)(EBX));
  /* 101e22f6 push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e22fb call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2301u);
  /* 101e2301 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2304 call dword ptr [0x101f1000] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f1000))), 0x101e230au);
  /* 101e230a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e230c je 0x101e2375 */
  if (C.zf) goto L_101e2375;
  /* 101e230e cmp edi, 0x4b0 */
  { uint32_t _a=(EDI),_b=(0x4b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2314 jle 0x101e2375 */
  if ((C.zf||C.sf!=C.of)) goto L_101e2375;
  /* 101e2316 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e2318 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e231a push 3 */
  push32((uint32_t)(0x3u));
  /* 101e231c push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e2321 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2327u);
  /* 101e2327 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e232a cmp edi, 0x7d0 */
  { uint32_t _a=(EDI),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2330 jle 0x101e2375 */
  if ((C.zf||C.sf!=C.of)) goto L_101e2375;
  /* 101e2332 push ebx */
  push32((uint32_t)(EBX));
  /* 101e2333 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e2335 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e2337 push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e233c call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2342u);
  /* 101e2342 push ebx */
  push32((uint32_t)(EBX));
  /* 101e2343 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e2345 push 6 */
  push32((uint32_t)(0x6u));
  /* 101e2347 push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e234c call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2352u);
  /* 101e2352 push ebx */
  push32((uint32_t)(EBX));
  /* 101e2353 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e2355 push 7 */
  push32((uint32_t)(0x7u));
  /* 101e2357 push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e235c call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2362u);
  /* 101e2362 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2364 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2366 push ebx */
  push32((uint32_t)(EBX));
  /* 101e2367 push 0x101ee4d8 */
  push32((uint32_t)(0x101ee4d8u));
  /* 101e236c call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2372u);
  /* 101e2372 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2375:;
  /* 101e2375 push 0x101f0b18 */
  push32((uint32_t)(0x101f0b18u));
  /* 101e237a call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e2380u);
  /* 101e2380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2383 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e2385 je 0x101e23f3 */
  if (C.zf) goto L_101e23f3;
  /* 101e2387 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e238c call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e2392u);
  /* 101e2392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2395 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2397 jle 0x101e23f3 */
  if ((C.zf||C.sf!=C.of)) goto L_101e23f3;
  /* 101e2399 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e239b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e239d push 2 */
  push32((uint32_t)(0x2u));
  /* 101e239f push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e23a4 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e23aau);
  /* 101e23aa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e23ac push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e23ae push 3 */
  push32((uint32_t)(0x3u));
  /* 101e23b0 push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e23b5 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e23bbu);
  /* 101e23bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e23bd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e23bf push 4 */
  push32((uint32_t)(0x4u));
  /* 101e23c1 push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e23c6 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e23ccu);
  /* 101e23cc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e23ce push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e23d0 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e23d2 push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e23d7 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e23ddu);
  /* 101e23dd add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e23e0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e23e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e23e4 push ebx */
  push32((uint32_t)(EBX));
  /* 101e23e5 push 0x101ee2f0 */
  push32((uint32_t)(0x101ee2f0u));
  /* 101e23ea call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e23f0u);
  /* 101e23f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e23f3:;
  /* 101e23f3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e23f5 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e23f7 push ebx */
  push32((uint32_t)(EBX));
  /* 101e23f8 push 0x101f0b18 */
  push32((uint32_t)(0x101f0b18u));
  /* 101e23fd call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2403u);
  /* 101e2403 push 0x101f0dd0 */
  push32((uint32_t)(0x101f0dd0u));
  /* 101e2408 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e240eu);
  /* 101e240e push 0x101f0dd0 */
  push32((uint32_t)(0x101f0dd0u));
  /* 101e2413 mov esi, eax */
  ESI = (EAX);
  /* 101e2415 call dword ptr [0x101f0fd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd4))), 0x101e241bu);
  /* 101e241b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e241e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2420 jne 0x101e2459 */
  if (!C.zf) goto L_101e2459;
  /* 101e2422 push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e2427 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e242du);
  /* 101e242d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2430 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e2432 je 0x101e2459 */
  if (C.zf) goto L_101e2459;
  /* 101e2434 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e2436 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2438 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e243a push 0x101f0dd0 */
  push32((uint32_t)(0x101f0dd0u));
  /* 101e243f call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2445u);
  /* 101e2445 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e2447 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e2449 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e244b push 0x101f0dd0 */
  push32((uint32_t)(0x101f0dd0u));
  /* 101e2450 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2456u);
  /* 101e2456 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2459:;
  /* 101e2459 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e245e call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e2464u);
  /* 101e2464 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e2469 je 0x101e247f */
  if (C.zf) goto L_101e247f;
  /* 101e246b push 0xa */
  push32((uint32_t)(0xau));
  /* 101e246d push 0xa */
  push32((uint32_t)(0xau));
  /* 101e246f push 2 */
  push32((uint32_t)(0x2u));
  /* 101e2471 push 0x101f0b50 */
  push32((uint32_t)(0x101f0b50u));
  /* 101e2476 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e247cu);
  /* 101e247c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e247f:;
  /* 101e247f push 0xa */
  push32((uint32_t)(0xau));
  /* 101e2481 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e2483 push ebx */
  push32((uint32_t)(EBX));
  /* 101e2484 push 0x101f0b58 */
  push32((uint32_t)(0x101f0b58u));
  /* 101e2489 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e248fu);
  /* 101e248f mov esi, dword ptr [esp + 0x28] */
  ESI = (r32((uint32_t)(ESP + 0x28)));
  /* 101e2493 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2496:;
  /* 101e2496 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2498 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e249a push 0x101f0e50 */
  push32((uint32_t)(0x101f0e50u));
  /* 101e249f call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e24a5u);
  /* 101e24a5 push 0x101f0e50 */
  push32((uint32_t)(0x101f0e50u));
  /* 101e24aa call dword ptr [0x101f0fe0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fe0))), 0x101e24b0u);
  /* 101e24b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e24b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e24b5 je 0x101e25df */
  if (C.zf) goto L_101e25df;
  /* 101e24bb cmp edi, 0x2bc */
  { uint32_t _a=(EDI),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e24c1 jle 0x101e2550 */
  if ((C.zf||C.sf!=C.of)) goto L_101e2550;
  /* 101e24c7 cmp dword ptr [0x101f0b20], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f0b20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e24cd jne 0x101e2525 */
  if (!C.zf) goto L_101e2525;
  /* 101e24cf push 0x101f0bd0 */
  push32((uint32_t)(0x101f0bd0u));
  /* 101e24d4 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e24dau);
  /* 101e24da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e24dd cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e24e0 jge 0x101e2506 */
  if ((C.sf==C.of)) goto L_101e2506;
  /* 101e24e2 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e24e4 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e24e6 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 101e24eb push 0x101ee330 */
  push32((uint32_t)(0x101ee330u));
  /* 101e24f0 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e24f6u);
  /* 101e24f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e24f8 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e24fa push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 101e24ff push 0x101f0bd0 */
  push32((uint32_t)(0x101f0bd0u));
  /* 101e2504 jmp 0x101e2547 */
  goto L_101e2547;
L_101e2506:;
  /* 101e2506 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e2508 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e250a push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101e250f push 0x101f0d08 */
  push32((uint32_t)(0x101f0d08u));
  /* 101e2514 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e251au);
  /* 101e251a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e251c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e251e push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101e2523 jmp 0x101e2542 */
  goto L_101e2542;
L_101e2525:;
  /* 101e2525 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e2527 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e2529 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 101e252e push 0x101f0d08 */
  push32((uint32_t)(0x101f0d08u));
  /* 101e2533 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2539u);
  /* 101e2539 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e253b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e253d push 0x190 */
  push32((uint32_t)(0x190u));
L_101e2542:;
  /* 101e2542 push 0x101ee330 */
  push32((uint32_t)(0x101ee330u));
L_101e2547:;
  /* 101e2547 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e254du);
  /* 101e254d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2550:;
  /* 101e2550 cmp edi, 0xfa */
  { uint32_t _a=(EDI),_b=(0xfau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2556 jle 0x101e256f */
  if ((C.zf||C.sf!=C.of)) goto L_101e256f;
  /* 101e2558 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e255a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e255c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101e2561 push 0x101f0c98 */
  push32((uint32_t)(0x101f0c98u));
  /* 101e2566 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e256cu);
  /* 101e256c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e256f:;
  /* 101e256f cmp edi, 0x12c */
  { uint32_t _a=(EDI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2575 jle 0x101e25be */
  if ((C.zf||C.sf!=C.of)) goto L_101e25be;
  /* 101e2577 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2579 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e257b push 0x190 */
  push32((uint32_t)(0x190u));
  /* 101e2580 push 0x101f0e68 */
  push32((uint32_t)(0x101f0e68u));
  /* 101e2585 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e258bu);
  /* 101e258b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e258d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e258f push 0x190 */
  push32((uint32_t)(0x190u));
  /* 101e2594 push 0x101f0e68 */
  push32((uint32_t)(0x101f0e68u));
  /* 101e2599 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e259fu);
  /* 101e259f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e25a2 cmp ebp, 0x3e8 */
  { uint32_t _a=(EBP),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e25a8 jle 0x101e25be */
  if ((C.zf||C.sf!=C.of)) goto L_101e25be;
  /* 101e25aa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e25ac push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e25ae push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101e25b0 push 0x101f0c68 */
  push32((uint32_t)(0x101f0c68u));
  /* 101e25b5 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e25bbu);
  /* 101e25bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e25be:;
  /* 101e25be push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e25c0 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e25c2 push 0x101f0ba8 */
  push32((uint32_t)(0x101f0ba8u));
  /* 101e25c7 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e25cdu);
  /* 101e25cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e25cf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e25d1 push 0x101ee320 */
  push32((uint32_t)(0x101ee320u));
  /* 101e25d6 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e25dcu);
  /* 101e25dc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e25df:;
  /* 101e25df cmp dword ptr [0x101f0b20], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f0b20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e25e5 jne 0x101e25ff */
  if (!C.zf) goto L_101e25ff;
  /* 101e25e7 push 0x101f0c98 */
  push32((uint32_t)(0x101f0c98u));
  /* 101e25ec call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e25f2u);
  /* 101e25f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e25f5 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e25f8 jle 0x101e25ff */
  if ((C.zf||C.sf!=C.of)) goto L_101e25ff;
  /* 101e25fa call 0x101e20a0 */
  push32(0x101e25ffu); f_101e20a0();
L_101e25ff:;
  /* 101e25ff push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2601 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2603 push 0x101f0cc0 */
  push32((uint32_t)(0x101f0cc0u));
  /* 101e2608 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e260eu);
  /* 101e260e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2610 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101e2612 push 0x101f0d60 */
  push32((uint32_t)(0x101f0d60u));
  /* 101e2617 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e261du);
  /* 101e261d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e261f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e2621 push 0x101f0c18 */
  push32((uint32_t)(0x101f0c18u));
  /* 101e2626 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e262cu);
  /* 101e262c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e262e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e2630 push 0x101f0ba0 */
  push32((uint32_t)(0x101f0ba0u));
  /* 101e2635 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e263bu);
  /* 101e263b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e263d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e263f push 0x101f0ba8 */
  push32((uint32_t)(0x101f0ba8u));
  /* 101e2644 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e264au);
  /* 101e264a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e264c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e264e push 0x101f0b90 */
  push32((uint32_t)(0x101f0b90u));
  /* 101e2653 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2659u);
  /* 101e2659 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e265c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e265e push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e2660 push 0x101f0b98 */
  push32((uint32_t)(0x101f0b98u));
  /* 101e2665 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e266bu);
  /* 101e266b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e266d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e266f push 0x101ee400 */
  push32((uint32_t)(0x101ee400u));
  /* 101e2674 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e267au);
  /* 101e267a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e267c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e267e push 0x101ee550 */
  push32((uint32_t)(0x101ee550u));
  /* 101e2683 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2689u);
  /* 101e2689 push 0x101f0cc0 */
  push32((uint32_t)(0x101f0cc0u));
  /* 101e268e call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e2694u);
  /* 101e2694 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2697 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e2699 je 0x101e28b1 */
  if (C.zf) goto L_101e28b1;
  /* 101e269f cmp dword ptr [0x101f0b20], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f0b20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e26a5 jne 0x101e26bb */
  if (!C.zf) goto L_101e26bb;
  /* 101e26a7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e26a9 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e26ab push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e26ad push 0x101ee508 */
  push32((uint32_t)(0x101ee508u));
  /* 101e26b2 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e26b8u);
  /* 101e26b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e26bb:;
  /* 101e26bb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e26bd push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e26bf push 0x101f0c58 */
  push32((uint32_t)(0x101f0c58u));
  /* 101e26c4 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e26cau);
  /* 101e26ca push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e26cc push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e26ce push 0x101f0c00 */
  push32((uint32_t)(0x101f0c00u));
  /* 101e26d3 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e26d9u);
  /* 101e26d9 push 0x101f0c00 */
  push32((uint32_t)(0x101f0c00u));
  /* 101e26de call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e26e4u);
  /* 101e26e4 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e26e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e26e9 je 0x101e270e */
  if (C.zf) goto L_101e270e;
  /* 101e26eb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e26ed push 0xa */
  push32((uint32_t)(0xau));
  /* 101e26ef push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e26f1 push 0x101f0d18 */
  push32((uint32_t)(0x101f0d18u));
  /* 101e26f6 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e26fcu);
  /* 101e26fc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e26fe push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e2700 push 0x101ee4d0 */
  push32((uint32_t)(0x101ee4d0u));
  /* 101e2705 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e270bu);
  /* 101e270b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e270e:;
  /* 101e270e push 0x101f0d08 */
  push32((uint32_t)(0x101f0d08u));
  /* 101e2713 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e2719u);
  /* 101e2719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e271c cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e271f jle 0x101e2742 */
  if ((C.zf||C.sf!=C.of)) goto L_101e2742;
  /* 101e2721 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2723 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e2725 push 0x101f0d30 */
  push32((uint32_t)(0x101f0d30u));
  /* 101e272a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2730u);
  /* 101e2730 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101e2732 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101e2734 push 0x101f0d38 */
  push32((uint32_t)(0x101f0d38u));
  /* 101e2739 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e273fu);
  /* 101e273f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2742:;
  /* 101e2742 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2744 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101e2746 push 0x101ee308 */
  push32((uint32_t)(0x101ee308u));
  /* 101e274b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2751u);
  /* 101e2751 call 0x101e2100 */
  push32(0x101e2756u); f_101e2100();
  /* 101e2756 push 0x101f0bc8 */
  push32((uint32_t)(0x101f0bc8u));
  /* 101e275b call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e2761u);
  /* 101e2761 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2764 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e2766 je 0x101e277c */
  if (C.zf) goto L_101e277c;
  /* 101e2768 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e276a push 0xa */
  push32((uint32_t)(0xau));
  /* 101e276c push 0xa */
  push32((uint32_t)(0xau));
  /* 101e276e push 0x101ee328 */
  push32((uint32_t)(0x101ee328u));
  /* 101e2773 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2779u);
  /* 101e2779 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e277c:;
  /* 101e277c push 0x101f0ca0 */
  push32((uint32_t)(0x101f0ca0u));
  /* 101e2781 call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e2787u);
  /* 101e2787 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e278a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e278c je 0x101e27a2 */
  if (C.zf) goto L_101e27a2;
  /* 101e278e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2790 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e2792 push 0xc */
  push32((uint32_t)(0xcu));
  /* 101e2794 push 0x101f0e48 */
  push32((uint32_t)(0x101f0e48u));
  /* 101e2799 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e279fu);
  /* 101e279f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e27a2:;
  /* 101e27a2 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e27a4 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e27a6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e27a8 push 0x101ee508 */
  push32((uint32_t)(0x101ee508u));
  /* 101e27ad call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e27b3u);
  /* 101e27b3 call 0x101e1f30 */
  push32(0x101e27b8u); f_101e1f30();
  /* 101e27b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e27ba push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e27bc push 0x101f0b88 */
  push32((uint32_t)(0x101f0b88u));
  /* 101e27c1 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e27c7u);
  /* 101e27c7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e27c9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e27cb push 0x101f0b80 */
  push32((uint32_t)(0x101f0b80u));
  /* 101e27d0 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e27d6u);
  /* 101e27d6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e27d8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e27da push 0x101f0b78 */
  push32((uint32_t)(0x101f0b78u));
  /* 101e27df call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e27e5u);
  /* 101e27e5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e27e7 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e27e9 push 0x101f0b70 */
  push32((uint32_t)(0x101f0b70u));
  /* 101e27ee call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e27f4u);
  /* 101e27f4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e27f7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e27f9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e27fb push 0x101f0b68 */
  push32((uint32_t)(0x101f0b68u));
  /* 101e2800 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2806u);
  /* 101e2806 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2808 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e280a push 0x101f0b60 */
  push32((uint32_t)(0x101f0b60u));
  /* 101e280f call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2815u);
  /* 101e2815 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2817 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2819 push 0x101f0c38 */
  push32((uint32_t)(0x101f0c38u));
  /* 101e281e call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2824u);
  /* 101e2824 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2826 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2828 push 0x101f0c30 */
  push32((uint32_t)(0x101f0c30u));
  /* 101e282d call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2833u);
  /* 101e2833 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2835 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2837 push 0x101f0c28 */
  push32((uint32_t)(0x101f0c28u));
  /* 101e283c call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2842u);
  /* 101e2842 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2844 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2846 push 0x101f0c20 */
  push32((uint32_t)(0x101f0c20u));
  /* 101e284b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2851u);
  /* 101e2851 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2854 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2856 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2858 push 0x101f0c10 */
  push32((uint32_t)(0x101f0c10u));
  /* 101e285d call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2863u);
  /* 101e2863 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2865 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e2867 push 0x101f0c60 */
  push32((uint32_t)(0x101f0c60u));
  /* 101e286c call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2872u);
  /* 101e2872 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e2874 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e2876 push 0x101f0c70 */
  push32((uint32_t)(0x101f0c70u));
  /* 101e287b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2881u);
  /* 101e2881 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e2883 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e2885 push 0x101f0c80 */
  push32((uint32_t)(0x101f0c80u));
  /* 101e288a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2890u);
  /* 101e2890 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e2892 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e2894 push 0x101f0c88 */
  push32((uint32_t)(0x101f0c88u));
  /* 101e2899 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e289fu);
  /* 101e289f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e28a1 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e28a3 push 0x101f0c78 */
  push32((uint32_t)(0x101f0c78u));
  /* 101e28a8 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e28aeu);
  /* 101e28ae add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e28b1:;
  /* 101e28b1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e28b3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e28b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e28b7 push 0x101f0d18 */
  push32((uint32_t)(0x101f0d18u));
  /* 101e28bc call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e28c2u);
  /* 101e28c2 mov eax, dword ptr [0x101f0b20] */
  EAX = (r32((uint32_t)(0x101f0b20)));
  /* 101e28c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e28ca cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e28cc je 0x101e292b */
  if (C.zf) goto L_101e292b;
  /* 101e28ce push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e28d0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e28d2 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e28d4 push 0x101ee4f8 */
  push32((uint32_t)(0x101ee4f8u));
  /* 101e28d9 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e28dfu);
  /* 101e28df push 0xa */
  push32((uint32_t)(0xau));
  /* 101e28e1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e28e3 push 6 */
  push32((uint32_t)(0x6u));
  /* 101e28e5 push 0x101ee530 */
  push32((uint32_t)(0x101ee530u));
  /* 101e28ea call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e28f0u);
  /* 101e28f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e28f2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e28f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 101e28f6 push 0x101ee530 */
  push32((uint32_t)(0x101ee530u));
  /* 101e28fb call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2901u);
  /* 101e2901 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e2903 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2905 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101e2907 push 0x101ee530 */
  push32((uint32_t)(0x101ee530u));
  /* 101e290c call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2912u);
  /* 101e2912 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2915 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e2917 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e2919 push 6 */
  push32((uint32_t)(0x6u));
  /* 101e291b push 0x101f0b28 */
  push32((uint32_t)(0x101f0b28u));
  /* 101e2920 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2926u);
  /* 101e2926 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2929 jmp 0x101e2961 */
  goto L_101e2961;
L_101e292b:;
  /* 101e292b push 0xa */
  push32((uint32_t)(0xau));
  /* 101e292d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e292f push 6 */
  push32((uint32_t)(0x6u));
  /* 101e2931 push 0x101ee530 */
  push32((uint32_t)(0x101ee530u));
  /* 101e2936 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e293cu);
  /* 101e293c push 0xa */
  push32((uint32_t)(0xau));
  /* 101e293e push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e2940 push 0xc */
  push32((uint32_t)(0xcu));
  /* 101e2942 push 0x101ee530 */
  push32((uint32_t)(0x101ee530u));
  /* 101e2947 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e294du);
  /* 101e294d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e294f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e2951 push 6 */
  push32((uint32_t)(0x6u));
  /* 101e2953 push 0x101f0b28 */
  push32((uint32_t)(0x101f0b28u));
  /* 101e2958 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e295eu);
  /* 101e295e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2961:;
  /* 101e2961 push 0x101ee4d8 */
  push32((uint32_t)(0x101ee4d8u));
  /* 101e2966 call dword ptr [0x101f0fd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd4))), 0x101e296cu);
  /* 101e296c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e296f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e2971 je 0x101e2a55 */
  if (C.zf) goto L_101e2a55;
  /* 101e2977 cmp esi, 0x186a0 */
  { uint32_t _a=(ESI),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e297d jle 0x101e298f */
  if ((C.zf||C.sf!=C.of)) goto L_101e298f;
  /* 101e297f push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101e2984 push ebx */
  push32((uint32_t)(EBX));
  /* 101e2985 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e2987 call 0x101e1f10 */
  push32(0x101e298cu); f_101e1f10();
  /* 101e298c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e298f:;
  /* 101e298f cmp dword ptr [esp + 0x10], 0xf4240 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0xf4240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2997 jle 0x101e29a9 */
  if ((C.zf||C.sf!=C.of)) goto L_101e29a9;
  /* 101e2999 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101e299e push ebx */
  push32((uint32_t)(EBX));
  /* 101e299f push 0 */
  push32((uint32_t)(0x0u));
  /* 101e29a1 call 0x101e1f10 */
  push32(0x101e29a6u); f_101e1f10();
  /* 101e29a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e29a9:;
  /* 101e29a9 cmp edi, 0x12c */
  { uint32_t _a=(EDI),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e29af jge 0x101e2a06 */
  if ((C.sf==C.of)) goto L_101e2a06;
  /* 101e29b1 cmp dword ptr [esp + 0x14], 0x2ee0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e29b9 jle 0x101e29c6 */
  if ((C.zf||C.sf!=C.of)) goto L_101e29c6;
  /* 101e29bb push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101e29c0 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e29c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e29c4 jmp 0x101e29fe */
  goto L_101e29fe;
L_101e29c6:;
  /* 101e29c6 cmp ebp, 0xbb8 */
  { uint32_t _a=(EBP),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e29cc jle 0x101e29d8 */
  if ((C.zf||C.sf!=C.of)) goto L_101e29d8;
  /* 101e29ce push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101e29d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e29d5 push ebx */
  push32((uint32_t)(EBX));
  /* 101e29d6 jmp 0x101e29fe */
  goto L_101e29fe;
L_101e29d8:;
  /* 101e29d8 cmp esi, 0x5dc */
  { uint32_t _a=(ESI),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e29de jle 0x101e29eb */
  if ((C.zf||C.sf!=C.of)) goto L_101e29eb;
  /* 101e29e0 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 101e29e5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e29e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e29e9 jmp 0x101e29fe */
  goto L_101e29fe;
L_101e29eb:;
  /* 101e29eb cmp dword ptr [esp + 0x10], 0x5dc */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e29f3 jle 0x101e2a06 */
  if ((C.zf||C.sf!=C.of)) goto L_101e2a06;
  /* 101e29f5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101e29fa push 3 */
  push32((uint32_t)(0x3u));
  /* 101e29fc push 0 */
  push32((uint32_t)(0x0u));
L_101e29fe:;
  /* 101e29fe call 0x101e1f10 */
  push32(0x101e2a03u); f_101e1f10();
  /* 101e2a03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2a06:;
  /* 101e2a06 push 0x101f0d60 */
  push32((uint32_t)(0x101f0d60u));
  /* 101e2a0b call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e2a11u);
  /* 101e2a11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2a14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e2a16 jne 0x101e2a55 */
  if (!C.zf) goto L_101e2a55;
  /* 101e2a18 cmp ebp, 0x320 */
  { uint32_t _a=(EBP),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2a1e jle 0x101e2a55 */
  if ((C.zf||C.sf!=C.of)) goto L_101e2a55;
  /* 101e2a20 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101e2a24 mov esi, 0x2328 */
  ESI = (0x2328u);
  /* 101e2a29 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2a2b jle 0x101e2a3e */
  if ((C.zf||C.sf!=C.of)) goto L_101e2a3e;
  /* 101e2a2d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101e2a32 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e2a34 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e2a36 call 0x101e1f10 */
  push32(0x101e2a3bu); f_101e1f10();
  /* 101e2a3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2a3e:;
  /* 101e2a3e cmp dword ptr [esp + 0x1c], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x1c))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2a42 jle 0x101e2a55 */
  if ((C.zf||C.sf!=C.of)) goto L_101e2a55;
  /* 101e2a44 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101e2a49 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e2a4b push 4 */
  push32((uint32_t)(0x4u));
  /* 101e2a4d call 0x101e1f10 */
  push32(0x101e2a52u); f_101e1f10();
  /* 101e2a52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2a55:;
  /* 101e2a55 call dword ptr [0x101f1000] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f1000))), 0x101e2a5bu);
  /* 101e2a5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e2a5d je 0x101e2aac */
  if (C.zf) goto L_101e2aac;
  /* 101e2a5f push 0x101f0c98 */
  push32((uint32_t)(0x101f0c98u));
  /* 101e2a64 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e2a6au);
  /* 101e2a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2a6d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2a70 jge 0x101e2a82 */
  if ((C.sf==C.of)) goto L_101e2a82;
  /* 101e2a72 cmp edi, 0x7d0 */
  { uint32_t _a=(EDI),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2a78 jge 0x101e2a82 */
  if ((C.sf==C.of)) goto L_101e2a82;
  /* 101e2a7a push 2 */
  push32((uint32_t)(0x2u));
  /* 101e2a7c push 5 */
  push32((uint32_t)(0x5u));
  /* 101e2a7e push 0xa */
  push32((uint32_t)(0xau));
  /* 101e2a80 jmp 0x101e2ab2 */
  goto L_101e2ab2;
L_101e2a82:;
  /* 101e2a82 push 0x101f0b98 */
  push32((uint32_t)(0x101f0b98u));
  /* 101e2a87 call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e2a8du);
  /* 101e2a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2a90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e2a92 je 0x101e2aa4 */
  if (C.zf) goto L_101e2aa4;
  /* 101e2a94 cmp edi, 0x3a98 */
  { uint32_t _a=(EDI),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e2a9a jl 0x101e2aa4 */
  if ((C.sf!=C.of)) goto L_101e2aa4;
  /* 101e2a9c push 4 */
  push32((uint32_t)(0x4u));
  /* 101e2a9e push 6 */
  push32((uint32_t)(0x6u));
  /* 101e2aa0 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e2aa2 jmp 0x101e2ab2 */
  goto L_101e2ab2;
L_101e2aa4:;
  /* 101e2aa4 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e2aa6 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e2aa8 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e2aaa jmp 0x101e2ab2 */
  goto L_101e2ab2;
L_101e2aac:;
  /* 101e2aac push 5 */
  push32((uint32_t)(0x5u));
  /* 101e2aae push 5 */
  push32((uint32_t)(0x5u));
  /* 101e2ab0 push 0 */
  push32((uint32_t)(0x0u));
L_101e2ab2:;
  /* 101e2ab2 call dword ptr [0x101f0fa4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fa4))), 0x101e2ab8u);
  /* 101e2ab8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2abb push 0x101ee400 */
  push32((uint32_t)(0x101ee400u));
  /* 101e2ac0 call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e2ac6u);
  /* 101e2ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2ac9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e2acb pop edi */
  EDI = (pop32());
  /* 101e2acc pop esi */
  ESI = (pop32());
  /* 101e2acd pop ebp */
  EBP = (pop32());
  /* 101e2ace pop ebx */
  EBX = (pop32());
  /* 101e2acf je 0x101e2b77 */
  if (C.zf) goto L_101e2b77;
  /* 101e2ad5 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e2ad7 push 7 */
  push32((uint32_t)(0x7u));
  /* 101e2ad9 push 6 */
  push32((uint32_t)(0x6u));
  /* 101e2adb call dword ptr [0x101f0fa4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fa4))), 0x101e2ae1u);
  /* 101e2ae1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2ae3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101e2ae5 push 7 */
  push32((uint32_t)(0x7u));
  /* 101e2ae7 push 0x101f0b28 */
  push32((uint32_t)(0x101f0b28u));
  /* 101e2aec call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2af2u);
  /* 101e2af2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2af4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101e2af6 push 0x101f0d20 */
  push32((uint32_t)(0x101f0d20u));
  /* 101e2afb call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2b01u);
  /* 101e2b01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2b03 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101e2b05 push 0x101f0d28 */
  push32((uint32_t)(0x101f0d28u));
  /* 101e2b0a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2b10u);
  /* 101e2b10 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2b12 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101e2b14 push 0x101ee540 */
  push32((uint32_t)(0x101ee540u));
  /* 101e2b19 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2b1fu);
  /* 101e2b1f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2b22 push 0x101ee540 */
  push32((uint32_t)(0x101ee540u));
  /* 101e2b27 call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e2b2du);
  /* 101e2b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2b30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e2b32 je 0x101e2b8b */
  if (C.zf) goto L_101e2b8b;
  /* 101e2b34 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2b36 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e2b38 push 0x101ee4e0 */
  push32((uint32_t)(0x101ee4e0u));
  /* 101e2b3d call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2b43u);
  /* 101e2b43 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2b45 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e2b47 push 0x101ee520 */
  push32((uint32_t)(0x101ee520u));
  /* 101e2b4c call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2b52u);
  /* 101e2b52 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2b54 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e2b56 push 0x101ee2f8 */
  push32((uint32_t)(0x101ee2f8u));
  /* 101e2b5b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2b61u);
  /* 101e2b61 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2b63 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e2b65 push 0x101ee500 */
  push32((uint32_t)(0x101ee500u));
  /* 101e2b6a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e2b70u);
  /* 101e2b70 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2b73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2b76 ret  */
  ESPCHK(0x101e21b0u, _esp0);
  ESP += 4; return;
L_101e2b77:;
  /* 101e2b77 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e2b79 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e2b7b push 3 */
  push32((uint32_t)(0x3u));
  /* 101e2b7d push 0x101f0b28 */
  push32((uint32_t)(0x101f0b28u));
  /* 101e2b82 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e2b88u);
  /* 101e2b88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e2b8b:;
  /* 101e2b8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2b8e ret  */
  ESPCHK(0x101e21b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b90 @ 0x101e2b90 (6 bytes, 1 insns) */
void f_101e2b90(void) {
  FTRACE(0x101e2b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2b90 jmp dword ptr [0x101f1010] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x101f1010)))); return;
}

/* FUN_10002ba0 @ 0x101e2ba0 (13 bytes, 5 insns) */
void f_101e2ba0(void) {
  FTRACE(0x101e2ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2ba0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e2ba4 push eax */
  push32((uint32_t)(EAX));
  /* 101e2ba5 call dword ptr [0x101f1014] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f1014))), 0x101e2babu);
  /* 101e2bab pop ecx */
  ECX = (pop32());
  /* 101e2bac ret  */
  ESPCHK(0x101e2ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bb0 @ 0x101e2bb0 (20 bytes, 7 insns) */
void f_101e2bb0(void) {
  FTRACE(0x101e2bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2bb0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e2bb4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e2bb8 push eax */
  push32((uint32_t)(EAX));
  /* 101e2bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 101e2bba call dword ptr [0x101ee390] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ee390))), 0x101e2bc0u);
  /* 101e2bc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2bc3 ret  */
  ESPCHK(0x101e2bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bd0 @ 0x101e2bd0 (13 bytes, 5 insns) */
void f_101e2bd0(void) {
  FTRACE(0x101e2bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2bd0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e2bd4 push eax */
  push32((uint32_t)(EAX));
  /* 101e2bd5 call dword ptr [0x101ee510] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ee510))), 0x101e2bdbu);
  /* 101e2bdb pop ecx */
  ECX = (pop32());
  /* 101e2bdc ret  */
  ESPCHK(0x101e2bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002be0 @ 0x101e2be0 (15 bytes, 5 insns) */
void f_101e2be0(void) {
  FTRACE(0x101e2be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2be0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e2be4 push eax */
  push32((uint32_t)(EAX));
  /* 101e2be5 call dword ptr [0x101f1020] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f1020))), 0x101e2bebu);
  /* 101e2beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2bee ret  */
  ESPCHK(0x101e2be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bf0 @ 0x101e2bf0 (13 bytes, 5 insns) */
void f_101e2bf0(void) {
  FTRACE(0x101e2bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2bf0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e2bf4 push eax */
  push32((uint32_t)(EAX));
  /* 101e2bf5 call dword ptr [0x101ee538] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ee538))), 0x101e2bfbu);
  /* 101e2bfb pop ecx */
  ECX = (pop32());
  /* 101e2bfc ret  */
  ESPCHK(0x101e2bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c00 @ 0x101e2c00 (82 bytes, 28 insns) */
void f_101e2c00(void) {
  FTRACE(0x101e2c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2c00 mov eax, dword ptr [0x101f0e70] */
  EAX = (r32((uint32_t)(0x101f0e70)));
  /* 101e2c05 sub esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e2c0b push esi */
  push32((uint32_t)(ESI));
  /* 101e2c0c push edi */
  push32((uint32_t)(EDI));
  /* 101e2c0d mov edi, dword ptr [esp + 0x10c] */
  EDI = (r32((uint32_t)(ESP + 0x10c)));
  /* 101e2c14 push edi */
  push32((uint32_t)(EDI));
  /* 101e2c15 push eax */
  push32((uint32_t)(EAX));
  /* 101e2c16 call dword ptr [0x101eb088] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb088))), 0x101e2c1cu);
  /* 101e2c1c mov esi, eax */
  ESI = (EAX);
  /* 101e2c1e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e2c20 jne 0x101e2c47 */
  if (!C.zf) goto L_101e2c47;
  /* 101e2c22 push edi */
  push32((uint32_t)(EDI));
  /* 101e2c23 lea ecx, [esp + 0xc] */
  ECX = ((uint32_t)(ESP + 0xc));
  /* 101e2c27 push 0x101ecc34 */
  push32((uint32_t)(0x101ecc34u));
  /* 101e2c2c push ecx */
  push32((uint32_t)(ECX));
  /* 101e2c2d call 0x101e4417 */
  push32(0x101e2c32u); f_101e4417();
  /* 101e2c32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2c35 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 101e2c39 push esi */
  push32((uint32_t)(ESI));
  /* 101e2c3a push 0x101ecc24 */
  push32((uint32_t)(0x101ecc24u));
  /* 101e2c3f push edx */
  push32((uint32_t)(EDX));
  /* 101e2c40 push esi */
  push32((uint32_t)(ESI));
  /* 101e2c41 call dword ptr [0x101eb0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0d4))), 0x101e2c47u);
L_101e2c47:;
  /* 101e2c47 mov eax, esi */
  EAX = (ESI);
  /* 101e2c49 pop edi */
  EDI = (pop32());
  /* 101e2c4a pop esi */
  ESI = (pop32());
  /* 101e2c4b add esp, 0x100 */
  { uint32_t _a=(ESP),_b=(0x100u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2c51 ret  */
  ESPCHK(0x101e2c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c60 @ 0x101e2c60 (1819 bytes, 371 insns) */
void f_101e2c60(void) {
  FTRACE(0x101e2c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e2c60 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e2c64 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e2c65 jne 0x101e3373 */
  if (!C.zf) goto L_101e3373;
  /* 101e2c6b push 0x101ed364 */
  push32((uint32_t)(0x101ed364u));
  /* 101e2c70 call dword ptr [0x101eb004] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb004))), 0x101e2c76u);
  /* 101e2c76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e2c78 mov dword ptr [0x101f0e70], eax */
  w32((uint32_t)(0x101f0e70), (EAX));
  /* 101e2c7d jne 0x101e2c99 */
  if (!C.zf) goto L_101e2c99;
  /* 101e2c7f push eax */
  push32((uint32_t)(EAX));
  /* 101e2c80 push 0x101ed35c */
  push32((uint32_t)(0x101ed35cu));
  /* 101e2c85 push 0x101ed344 */
  push32((uint32_t)(0x101ed344u));
  /* 101e2c8a push eax */
  push32((uint32_t)(EAX));
  /* 101e2c8b call dword ptr [0x101eb0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb0d4))), 0x101e2c91u);
  /* 101e2c91 mov eax, 1 */
  EAX = (0x1u);
  /* 101e2c96 ret 0xc */
  ESPCHK(0x101e2c60u, _esp0);
  ESP += 16; return;
L_101e2c99:;
  /* 101e2c99 push 0x101ed334 */
  push32((uint32_t)(0x101ed334u));
  /* 101e2c9e call 0x101e2c00 */
  push32(0x101e2ca3u); f_101e2c00();
  /* 101e2ca3 push 0x101ed324 */
  push32((uint32_t)(0x101ed324u));
  /* 101e2ca8 mov dword ptr [0x101f0e74], eax */
  w32((uint32_t)(0x101f0e74), (EAX));
  /* 101e2cad call 0x101e2c00 */
  push32(0x101e2cb2u); f_101e2c00();
  /* 101e2cb2 push 0x101ed314 */
  push32((uint32_t)(0x101ed314u));
  /* 101e2cb7 mov dword ptr [0x101f0e78], eax */
  w32((uint32_t)(0x101f0e78), (EAX));
  /* 101e2cbc call 0x101e2c00 */
  push32(0x101e2cc1u); f_101e2c00();
  /* 101e2cc1 push 0x101ed308 */
  push32((uint32_t)(0x101ed308u));
  /* 101e2cc6 mov dword ptr [0x101f0e7c], eax */
  w32((uint32_t)(0x101f0e7c), (EAX));
  /* 101e2ccb call 0x101e2c00 */
  push32(0x101e2cd0u); f_101e2c00();
  /* 101e2cd0 push 0x101ed2f8 */
  push32((uint32_t)(0x101ed2f8u));
  /* 101e2cd5 mov dword ptr [0x101f0e80], eax */
  w32((uint32_t)(0x101f0e80), (EAX));
  /* 101e2cda call 0x101e2c00 */
  push32(0x101e2cdfu); f_101e2c00();
  /* 101e2cdf push 0x101ed2e4 */
  push32((uint32_t)(0x101ed2e4u));
  /* 101e2ce4 mov dword ptr [0x101f0e84], eax */
  w32((uint32_t)(0x101f0e84), (EAX));
  /* 101e2ce9 call 0x101e2c00 */
  push32(0x101e2ceeu); f_101e2c00();
  /* 101e2cee push 0x101ed2d4 */
  push32((uint32_t)(0x101ed2d4u));
  /* 101e2cf3 mov dword ptr [0x101f0e88], eax */
  w32((uint32_t)(0x101f0e88), (EAX));
  /* 101e2cf8 call 0x101e2c00 */
  push32(0x101e2cfdu); f_101e2c00();
  /* 101e2cfd push 0x101ed2c4 */
  push32((uint32_t)(0x101ed2c4u));
  /* 101e2d02 mov dword ptr [0x101f0e8c], eax */
  w32((uint32_t)(0x101f0e8c), (EAX));
  /* 101e2d07 call 0x101e2c00 */
  push32(0x101e2d0cu); f_101e2c00();
  /* 101e2d0c push 0x101ed2b0 */
  push32((uint32_t)(0x101ed2b0u));
  /* 101e2d11 mov dword ptr [0x101f0e90], eax */
  w32((uint32_t)(0x101f0e90), (EAX));
  /* 101e2d16 call 0x101e2c00 */
  push32(0x101e2d1bu); f_101e2c00();
  /* 101e2d1b push 0x101ed29c */
  push32((uint32_t)(0x101ed29cu));
  /* 101e2d20 mov dword ptr [0x101f0e94], eax */
  w32((uint32_t)(0x101f0e94), (EAX));
  /* 101e2d25 call 0x101e2c00 */
  push32(0x101e2d2au); f_101e2c00();
  /* 101e2d2a push 0x101ed28c */
  push32((uint32_t)(0x101ed28cu));
  /* 101e2d2f mov dword ptr [0x101f0e98], eax */
  w32((uint32_t)(0x101f0e98), (EAX));
  /* 101e2d34 call 0x101e2c00 */
  push32(0x101e2d39u); f_101e2c00();
  /* 101e2d39 push 0x101ed27c */
  push32((uint32_t)(0x101ed27cu));
  /* 101e2d3e mov dword ptr [0x101f0e9c], eax */
  w32((uint32_t)(0x101f0e9c), (EAX));
  /* 101e2d43 call 0x101e2c00 */
  push32(0x101e2d48u); f_101e2c00();
  /* 101e2d48 push 0x101ed26c */
  push32((uint32_t)(0x101ed26cu));
  /* 101e2d4d mov dword ptr [0x101f0ea0], eax */
  w32((uint32_t)(0x101f0ea0), (EAX));
  /* 101e2d52 call 0x101e2c00 */
  push32(0x101e2d57u); f_101e2c00();
  /* 101e2d57 push 0x101ed25c */
  push32((uint32_t)(0x101ed25cu));
  /* 101e2d5c mov dword ptr [0x101f0ea4], eax */
  w32((uint32_t)(0x101f0ea4), (EAX));
  /* 101e2d61 call 0x101e2c00 */
  push32(0x101e2d66u); f_101e2c00();
  /* 101e2d66 push 0x101ed24c */
  push32((uint32_t)(0x101ed24cu));
  /* 101e2d6b mov dword ptr [0x101f0ea8], eax */
  w32((uint32_t)(0x101f0ea8), (EAX));
  /* 101e2d70 call 0x101e2c00 */
  push32(0x101e2d75u); f_101e2c00();
  /* 101e2d75 push 0x101ed23c */
  push32((uint32_t)(0x101ed23cu));
  /* 101e2d7a mov dword ptr [0x101f0eac], eax */
  w32((uint32_t)(0x101f0eac), (EAX));
  /* 101e2d7f call 0x101e2c00 */
  push32(0x101e2d84u); f_101e2c00();
  /* 101e2d84 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2d87 mov dword ptr [0x101f0eb0], eax */
  w32((uint32_t)(0x101f0eb0), (EAX));
  /* 101e2d8c push 0x101ed22c */
  push32((uint32_t)(0x101ed22cu));
  /* 101e2d91 call 0x101e2c00 */
  push32(0x101e2d96u); f_101e2c00();
  /* 101e2d96 push 0x101ed21c */
  push32((uint32_t)(0x101ed21cu));
  /* 101e2d9b mov dword ptr [0x101f0eb4], eax */
  w32((uint32_t)(0x101f0eb4), (EAX));
  /* 101e2da0 call 0x101e2c00 */
  push32(0x101e2da5u); f_101e2c00();
  /* 101e2da5 push 0x101ed208 */
  push32((uint32_t)(0x101ed208u));
  /* 101e2daa mov dword ptr [0x101f0eb8], eax */
  w32((uint32_t)(0x101f0eb8), (EAX));
  /* 101e2daf call 0x101e2c00 */
  push32(0x101e2db4u); f_101e2c00();
  /* 101e2db4 push 0x101ed200 */
  push32((uint32_t)(0x101ed200u));
  /* 101e2db9 mov dword ptr [0x101f0ebc], eax */
  w32((uint32_t)(0x101f0ebc), (EAX));
  /* 101e2dbe call 0x101e2c00 */
  push32(0x101e2dc3u); f_101e2c00();
  /* 101e2dc3 push 0x101ed1f0 */
  push32((uint32_t)(0x101ed1f0u));
  /* 101e2dc8 mov dword ptr [0x101f0ec0], eax */
  w32((uint32_t)(0x101f0ec0), (EAX));
  /* 101e2dcd call 0x101e2c00 */
  push32(0x101e2dd2u); f_101e2c00();
  /* 101e2dd2 push 0x101ed1e0 */
  push32((uint32_t)(0x101ed1e0u));
  /* 101e2dd7 mov dword ptr [0x101f0ec4], eax */
  w32((uint32_t)(0x101f0ec4), (EAX));
  /* 101e2ddc call 0x101e2c00 */
  push32(0x101e2de1u); f_101e2c00();
  /* 101e2de1 push 0x101ed1d4 */
  push32((uint32_t)(0x101ed1d4u));
  /* 101e2de6 mov dword ptr [0x101f0ec8], eax */
  w32((uint32_t)(0x101f0ec8), (EAX));
  /* 101e2deb call 0x101e2c00 */
  push32(0x101e2df0u); f_101e2c00();
  /* 101e2df0 push 0x101ed1c4 */
  push32((uint32_t)(0x101ed1c4u));
  /* 101e2df5 mov dword ptr [0x101f0ecc], eax */
  w32((uint32_t)(0x101f0ecc), (EAX));
  /* 101e2dfa call 0x101e2c00 */
  push32(0x101e2dffu); f_101e2c00();
  /* 101e2dff push 0x101ed1bc */
  push32((uint32_t)(0x101ed1bcu));
  /* 101e2e04 mov dword ptr [0x101f0ed0], eax */
  w32((uint32_t)(0x101f0ed0), (EAX));
  /* 101e2e09 call 0x101e2c00 */
  push32(0x101e2e0eu); f_101e2c00();
  /* 101e2e0e push 0x101ed1ac */
  push32((uint32_t)(0x101ed1acu));
  /* 101e2e13 mov dword ptr [0x101f0ee8], eax */
  w32((uint32_t)(0x101f0ee8), (EAX));
  /* 101e2e18 call 0x101e2c00 */
  push32(0x101e2e1du); f_101e2c00();
  /* 101e2e1d push 0x101ed19c */
  push32((uint32_t)(0x101ed19cu));
  /* 101e2e22 mov dword ptr [0x101f0eec], eax */
  w32((uint32_t)(0x101f0eec), (EAX));
  /* 101e2e27 call 0x101e2c00 */
  push32(0x101e2e2cu); f_101e2c00();
  /* 101e2e2c push 0x101ed190 */
  push32((uint32_t)(0x101ed190u));
  /* 101e2e31 mov dword ptr [0x101f0ef0], eax */
  w32((uint32_t)(0x101f0ef0), (EAX));
  /* 101e2e36 call 0x101e2c00 */
  push32(0x101e2e3bu); f_101e2c00();
  /* 101e2e3b push 0x101ed180 */
  push32((uint32_t)(0x101ed180u));
  /* 101e2e40 mov dword ptr [0x101f0ef4], eax */
  w32((uint32_t)(0x101f0ef4), (EAX));
  /* 101e2e45 call 0x101e2c00 */
  push32(0x101e2e4au); f_101e2c00();
  /* 101e2e4a push 0x101ed174 */
  push32((uint32_t)(0x101ed174u));
  /* 101e2e4f mov dword ptr [0x101f0ef8], eax */
  w32((uint32_t)(0x101f0ef8), (EAX));
  /* 101e2e54 call 0x101e2c00 */
  push32(0x101e2e59u); f_101e2c00();
  /* 101e2e59 push 0x101ed164 */
  push32((uint32_t)(0x101ed164u));
  /* 101e2e5e mov dword ptr [0x101f0f14], eax */
  w32((uint32_t)(0x101f0f14), (EAX));
  /* 101e2e63 call 0x101e2c00 */
  push32(0x101e2e68u); f_101e2c00();
  /* 101e2e68 push 0x101ed15c */
  push32((uint32_t)(0x101ed15cu));
  /* 101e2e6d mov dword ptr [0x101f0efc], eax */
  w32((uint32_t)(0x101f0efc), (EAX));
  /* 101e2e72 call 0x101e2c00 */
  push32(0x101e2e77u); f_101e2c00();
  /* 101e2e77 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2e7a mov dword ptr [0x101f0f00], eax */
  w32((uint32_t)(0x101f0f00), (EAX));
  /* 101e2e7f push 0x101ed14c */
  push32((uint32_t)(0x101ed14cu));
  /* 101e2e84 call 0x101e2c00 */
  push32(0x101e2e89u); f_101e2c00();
  /* 101e2e89 push 0x101ed13c */
  push32((uint32_t)(0x101ed13cu));
  /* 101e2e8e mov dword ptr [0x101f0f04], eax */
  w32((uint32_t)(0x101f0f04), (EAX));
  /* 101e2e93 call 0x101e2c00 */
  push32(0x101e2e98u); f_101e2c00();
  /* 101e2e98 push 0x101ed12c */
  push32((uint32_t)(0x101ed12cu));
  /* 101e2e9d mov dword ptr [0x101f0f08], eax */
  w32((uint32_t)(0x101f0f08), (EAX));
  /* 101e2ea2 call 0x101e2c00 */
  push32(0x101e2ea7u); f_101e2c00();
  /* 101e2ea7 push 0x101ed120 */
  push32((uint32_t)(0x101ed120u));
  /* 101e2eac mov dword ptr [0x101f0f0c], eax */
  w32((uint32_t)(0x101f0f0c), (EAX));
  /* 101e2eb1 call 0x101e2c00 */
  push32(0x101e2eb6u); f_101e2c00();
  /* 101e2eb6 push 0x101ed118 */
  push32((uint32_t)(0x101ed118u));
  /* 101e2ebb mov dword ptr [0x101f0f10], eax */
  w32((uint32_t)(0x101f0f10), (EAX));
  /* 101e2ec0 call 0x101e2c00 */
  push32(0x101e2ec5u); f_101e2c00();
  /* 101e2ec5 push 0x101ed108 */
  push32((uint32_t)(0x101ed108u));
  /* 101e2eca mov dword ptr [0x101f0f18], eax */
  w32((uint32_t)(0x101f0f18), (EAX));
  /* 101e2ecf call 0x101e2c00 */
  push32(0x101e2ed4u); f_101e2c00();
  /* 101e2ed4 push 0x101ed0f8 */
  push32((uint32_t)(0x101ed0f8u));
  /* 101e2ed9 mov dword ptr [0x101f0f1c], eax */
  w32((uint32_t)(0x101f0f1c), (EAX));
  /* 101e2ede call 0x101e2c00 */
  push32(0x101e2ee3u); f_101e2c00();
  /* 101e2ee3 push 0x101ed0e8 */
  push32((uint32_t)(0x101ed0e8u));
  /* 101e2ee8 mov dword ptr [0x101f0f20], eax */
  w32((uint32_t)(0x101f0f20), (EAX));
  /* 101e2eed call 0x101e2c00 */
  push32(0x101e2ef2u); f_101e2c00();
  /* 101e2ef2 push 0x101ed0d8 */
  push32((uint32_t)(0x101ed0d8u));
  /* 101e2ef7 mov dword ptr [0x101f0f24], eax */
  w32((uint32_t)(0x101f0f24), (EAX));
  /* 101e2efc call 0x101e2c00 */
  push32(0x101e2f01u); f_101e2c00();
  /* 101e2f01 push 0x101ed0cc */
  push32((uint32_t)(0x101ed0ccu));
  /* 101e2f06 mov dword ptr [0x101f0f28], eax */
  w32((uint32_t)(0x101f0f28), (EAX));
  /* 101e2f0b call 0x101e2c00 */
  push32(0x101e2f10u); f_101e2c00();
  /* 101e2f10 push 0x101ed0c0 */
  push32((uint32_t)(0x101ed0c0u));
  /* 101e2f15 mov dword ptr [0x101f0f2c], eax */
  w32((uint32_t)(0x101f0f2c), (EAX));
  /* 101e2f1a call 0x101e2c00 */
  push32(0x101e2f1fu); f_101e2c00();
  /* 101e2f1f push 0x101ed0b0 */
  push32((uint32_t)(0x101ed0b0u));
  /* 101e2f24 mov dword ptr [0x101f0f30], eax */
  w32((uint32_t)(0x101f0f30), (EAX));
  /* 101e2f29 call 0x101e2c00 */
  push32(0x101e2f2eu); f_101e2c00();
  /* 101e2f2e push 0x101ed0a4 */
  push32((uint32_t)(0x101ed0a4u));
  /* 101e2f33 mov dword ptr [0x101f0f34], eax */
  w32((uint32_t)(0x101f0f34), (EAX));
  /* 101e2f38 call 0x101e2c00 */
  push32(0x101e2f3du); f_101e2c00();
  /* 101e2f3d push 0x101ed098 */
  push32((uint32_t)(0x101ed098u));
  /* 101e2f42 mov dword ptr [0x101f0f38], eax */
  w32((uint32_t)(0x101f0f38), (EAX));
  /* 101e2f47 call 0x101e2c00 */
  push32(0x101e2f4cu); f_101e2c00();
  /* 101e2f4c push 0x101ed08c */
  push32((uint32_t)(0x101ed08cu));
  /* 101e2f51 mov dword ptr [0x101f0f3c], eax */
  w32((uint32_t)(0x101f0f3c), (EAX));
  /* 101e2f56 call 0x101e2c00 */
  push32(0x101e2f5bu); f_101e2c00();
  /* 101e2f5b push 0x101ed080 */
  push32((uint32_t)(0x101ed080u));
  /* 101e2f60 mov dword ptr [0x101f0d00], eax */
  w32((uint32_t)(0x101f0d00), (EAX));
  /* 101e2f65 call 0x101e2c00 */
  push32(0x101e2f6au); f_101e2c00();
  /* 101e2f6a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e2f6d mov dword ptr [0x101f0f40], eax */
  w32((uint32_t)(0x101f0f40), (EAX));
  /* 101e2f72 push 0x101ed074 */
  push32((uint32_t)(0x101ed074u));
  /* 101e2f77 call 0x101e2c00 */
  push32(0x101e2f7cu); f_101e2c00();
  /* 101e2f7c push 0x101ed068 */
  push32((uint32_t)(0x101ed068u));
  /* 101e2f81 mov dword ptr [0x101f0f44], eax */
  w32((uint32_t)(0x101f0f44), (EAX));
  /* 101e2f86 call 0x101e2c00 */
  push32(0x101e2f8bu); f_101e2c00();
  /* 101e2f8b push 0x101ed058 */
  push32((uint32_t)(0x101ed058u));
  /* 101e2f90 mov dword ptr [0x101f0f48], eax */
  w32((uint32_t)(0x101f0f48), (EAX));
  /* 101e2f95 call 0x101e2c00 */
  push32(0x101e2f9au); f_101e2c00();
  /* 101e2f9a push 0x101ed04c */
  push32((uint32_t)(0x101ed04cu));
  /* 101e2f9f mov dword ptr [0x101f0f4c], eax */
  w32((uint32_t)(0x101f0f4c), (EAX));
  /* 101e2fa4 call 0x101e2c00 */
  push32(0x101e2fa9u); f_101e2c00();
  /* 101e2fa9 push 0x101ed040 */
  push32((uint32_t)(0x101ed040u));
  /* 101e2fae mov dword ptr [0x101f0f50], eax */
  w32((uint32_t)(0x101f0f50), (EAX));
  /* 101e2fb3 call 0x101e2c00 */
  push32(0x101e2fb8u); f_101e2c00();
  /* 101e2fb8 mov dword ptr [0x101f0f54], eax */
  w32((uint32_t)(0x101f0f54), (EAX));
  /* 101e2fbd push 0x101ed030 */
  push32((uint32_t)(0x101ed030u));
  /* 101e2fc2 call 0x101e2c00 */
  push32(0x101e2fc7u); f_101e2c00();
  /* 101e2fc7 push 0x101ed020 */
  push32((uint32_t)(0x101ed020u));
  /* 101e2fcc mov dword ptr [0x101f0f58], eax */
  w32((uint32_t)(0x101f0f58), (EAX));
  /* 101e2fd1 call 0x101e2c00 */
  push32(0x101e2fd6u); f_101e2c00();
  /* 101e2fd6 push 0x101ed014 */
  push32((uint32_t)(0x101ed014u));
  /* 101e2fdb mov dword ptr [0x101f0f5c], eax */
  w32((uint32_t)(0x101f0f5c), (EAX));
  /* 101e2fe0 call 0x101e2c00 */
  push32(0x101e2fe5u); f_101e2c00();
  /* 101e2fe5 push 0x101ed00c */
  push32((uint32_t)(0x101ed00cu));
  /* 101e2fea mov dword ptr [0x101f0f60], eax */
  w32((uint32_t)(0x101f0f60), (EAX));
  /* 101e2fef call 0x101e2c00 */
  push32(0x101e2ff4u); f_101e2c00();
  /* 101e2ff4 push 0x101ecffc */
  push32((uint32_t)(0x101ecffcu));
  /* 101e2ff9 mov dword ptr [0x101f0f64], eax */
  w32((uint32_t)(0x101f0f64), (EAX));
  /* 101e2ffe call 0x101e2c00 */
  push32(0x101e3003u); f_101e2c00();
  /* 101e3003 push 0x101ecff4 */
  push32((uint32_t)(0x101ecff4u));
  /* 101e3008 mov dword ptr [0x101f0f68], eax */
  w32((uint32_t)(0x101f0f68), (EAX));
  /* 101e300d call 0x101e2c00 */
  push32(0x101e3012u); f_101e2c00();
  /* 101e3012 push 0x101ecfe8 */
  push32((uint32_t)(0x101ecfe8u));
  /* 101e3017 mov dword ptr [0x101f0f6c], eax */
  w32((uint32_t)(0x101f0f6c), (EAX));
  /* 101e301c call 0x101e2c00 */
  push32(0x101e3021u); f_101e2c00();
  /* 101e3021 push 0x101ecfe0 */
  push32((uint32_t)(0x101ecfe0u));
  /* 101e3026 mov dword ptr [0x101f0f70], eax */
  w32((uint32_t)(0x101f0f70), (EAX));
  /* 101e302b call 0x101e2c00 */
  push32(0x101e3030u); f_101e2c00();
  /* 101e3030 push 0x101ecfcc */
  push32((uint32_t)(0x101ecfccu));
  /* 101e3035 mov dword ptr [0x101f0f74], eax */
  w32((uint32_t)(0x101f0f74), (EAX));
  /* 101e303a call 0x101e2c00 */
  push32(0x101e303fu); f_101e2c00();
  /* 101e303f push 0x101ecfc0 */
  push32((uint32_t)(0x101ecfc0u));
  /* 101e3044 mov dword ptr [0x101ee310], eax */
  w32((uint32_t)(0x101ee310), (EAX));
  /* 101e3049 call 0x101e2c00 */
  push32(0x101e304eu); f_101e2c00();
  /* 101e304e push 0x101ecfb4 */
  push32((uint32_t)(0x101ecfb4u));
  /* 101e3053 mov dword ptr [0x101f0f80], eax */
  w32((uint32_t)(0x101f0f80), (EAX));
  /* 101e3058 call 0x101e2c00 */
  push32(0x101e305du); f_101e2c00();
  /* 101e305d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3060 mov dword ptr [0x101f0f7c], eax */
  w32((uint32_t)(0x101f0f7c), (EAX));
  /* 101e3065 push 0x101ecfa0 */
  push32((uint32_t)(0x101ecfa0u));
  /* 101e306a call 0x101e2c00 */
  push32(0x101e306fu); f_101e2c00();
  /* 101e306f push 0x101ecf90 */
  push32((uint32_t)(0x101ecf90u));
  /* 101e3074 mov dword ptr [0x101f0f84], eax */
  w32((uint32_t)(0x101f0f84), (EAX));
  /* 101e3079 call 0x101e2c00 */
  push32(0x101e307eu); f_101e2c00();
  /* 101e307e push 0x101ecf80 */
  push32((uint32_t)(0x101ecf80u));
  /* 101e3083 mov dword ptr [0x101f0f88], eax */
  w32((uint32_t)(0x101f0f88), (EAX));
  /* 101e3088 call 0x101e2c00 */
  push32(0x101e308du); f_101e2c00();
  /* 101e308d push 0x101ecf70 */
  push32((uint32_t)(0x101ecf70u));
  /* 101e3092 mov dword ptr [0x101f0f8c], eax */
  w32((uint32_t)(0x101f0f8c), (EAX));
  /* 101e3097 call 0x101e2c00 */
  push32(0x101e309cu); f_101e2c00();
  /* 101e309c push 0x101ecf64 */
  push32((uint32_t)(0x101ecf64u));
  /* 101e30a1 mov dword ptr [0x101f0ed8], eax */
  w32((uint32_t)(0x101f0ed8), (EAX));
  /* 101e30a6 call 0x101e2c00 */
  push32(0x101e30abu); f_101e2c00();
  /* 101e30ab push 0x101ecf54 */
  push32((uint32_t)(0x101ecf54u));
  /* 101e30b0 mov dword ptr [0x101f0ed4], eax */
  w32((uint32_t)(0x101f0ed4), (EAX));
  /* 101e30b5 call 0x101e2c00 */
  push32(0x101e30bau); f_101e2c00();
  /* 101e30ba push 0x101ecf40 */
  push32((uint32_t)(0x101ecf40u));
  /* 101e30bf mov dword ptr [0x101f0edc], eax */
  w32((uint32_t)(0x101f0edc), (EAX));
  /* 101e30c4 call 0x101e2c00 */
  push32(0x101e30c9u); f_101e2c00();
  /* 101e30c9 push 0x101ecf28 */
  push32((uint32_t)(0x101ecf28u));
  /* 101e30ce mov dword ptr [0x101f0ee0], eax */
  w32((uint32_t)(0x101f0ee0), (EAX));
  /* 101e30d3 call 0x101e2c00 */
  push32(0x101e30d8u); f_101e2c00();
  /* 101e30d8 push 0x101ecf18 */
  push32((uint32_t)(0x101ecf18u));
  /* 101e30dd mov dword ptr [0x101f0ee4], eax */
  w32((uint32_t)(0x101f0ee4), (EAX));
  /* 101e30e2 call 0x101e2c00 */
  push32(0x101e30e7u); f_101e2c00();
  /* 101e30e7 push 0x101ecf00 */
  push32((uint32_t)(0x101ecf00u));
  /* 101e30ec mov dword ptr [0x101f0fa8], eax */
  w32((uint32_t)(0x101f0fa8), (EAX));
  /* 101e30f1 call 0x101e2c00 */
  push32(0x101e30f6u); f_101e2c00();
  /* 101e30f6 push 0x101ecef0 */
  push32((uint32_t)(0x101ecef0u));
  /* 101e30fb mov dword ptr [0x101f0fd8], eax */
  w32((uint32_t)(0x101f0fd8), (EAX));
  /* 101e3100 call 0x101e2c00 */
  push32(0x101e3105u); f_101e2c00();
  /* 101e3105 push 0x101ecee8 */
  push32((uint32_t)(0x101ecee8u));
  /* 101e310a mov dword ptr [0x101f0fa0], eax */
  w32((uint32_t)(0x101f0fa0), (EAX));
  /* 101e310f call 0x101e2c00 */
  push32(0x101e3114u); f_101e2c00();
  /* 101e3114 push 0x101eced8 */
  push32((uint32_t)(0x101eced8u));
  /* 101e3119 mov dword ptr [0x101f0fac], eax */
  w32((uint32_t)(0x101f0fac), (EAX));
  /* 101e311e call 0x101e2c00 */
  push32(0x101e3123u); f_101e2c00();
  /* 101e3123 push 0x101ececc */
  push32((uint32_t)(0x101ececcu));
  /* 101e3128 mov dword ptr [0x101f0ff8], eax */
  w32((uint32_t)(0x101f0ff8), (EAX));
  /* 101e312d call 0x101e2c00 */
  push32(0x101e3132u); f_101e2c00();
  /* 101e3132 push 0x101ecec4 */
  push32((uint32_t)(0x101ecec4u));
  /* 101e3137 mov dword ptr [0x101f0f90], eax */
  w32((uint32_t)(0x101f0f90), (EAX));
  /* 101e313c call 0x101e2c00 */
  push32(0x101e3141u); f_101e2c00();
  /* 101e3141 push 0x101eceb8 */
  push32((uint32_t)(0x101eceb8u));
  /* 101e3146 mov dword ptr [0x101f0f94], eax */
  w32((uint32_t)(0x101f0f94), (EAX));
  /* 101e314b call 0x101e2c00 */
  push32(0x101e3150u); f_101e2c00();
  /* 101e3150 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3153 mov dword ptr [0x101f0f98], eax */
  w32((uint32_t)(0x101f0f98), (EAX));
  /* 101e3158 push 0x101ecea8 */
  push32((uint32_t)(0x101ecea8u));
  /* 101e315d call 0x101e2c00 */
  push32(0x101e3162u); f_101e2c00();
  /* 101e3162 push 0x101ece94 */
  push32((uint32_t)(0x101ece94u));
  /* 101e3167 mov dword ptr [0x101f0f9c], eax */
  w32((uint32_t)(0x101f0f9c), (EAX));
  /* 101e316c call 0x101e2c00 */
  push32(0x101e3171u); f_101e2c00();
  /* 101e3171 push 0x101ece78 */
  push32((uint32_t)(0x101ece78u));
  /* 101e3176 mov dword ptr [0x101f0fa4], eax */
  w32((uint32_t)(0x101f0fa4), (EAX));
  /* 101e317b call 0x101e2c00 */
  push32(0x101e3180u); f_101e2c00();
  /* 101e3180 push 0x101ece64 */
  push32((uint32_t)(0x101ece64u));
  /* 101e3185 mov dword ptr [0x101f0fb0], eax */
  w32((uint32_t)(0x101f0fb0), (EAX));
  /* 101e318a call 0x101e2c00 */
  push32(0x101e318fu); f_101e2c00();
  /* 101e318f push 0x101ece58 */
  push32((uint32_t)(0x101ece58u));
  /* 101e3194 mov dword ptr [0x101f0fb4], eax */
  w32((uint32_t)(0x101f0fb4), (EAX));
  /* 101e3199 call 0x101e2c00 */
  push32(0x101e319eu); f_101e2c00();
  /* 101e319e push 0x101ece48 */
  push32((uint32_t)(0x101ece48u));
  /* 101e31a3 mov dword ptr [0x101f0fec], eax */
  w32((uint32_t)(0x101f0fec), (EAX));
  /* 101e31a8 call 0x101e2c00 */
  push32(0x101e31adu); f_101e2c00();
  /* 101e31ad push 0x101ece3c */
  push32((uint32_t)(0x101ece3cu));
  /* 101e31b2 mov dword ptr [0x101f0ff0], eax */
  w32((uint32_t)(0x101f0ff0), (EAX));
  /* 101e31b7 call 0x101e2c00 */
  push32(0x101e31bcu); f_101e2c00();
  /* 101e31bc push 0x101ece30 */
  push32((uint32_t)(0x101ece30u));
  /* 101e31c1 mov dword ptr [0x101f0ff4], eax */
  w32((uint32_t)(0x101f0ff4), (EAX));
  /* 101e31c6 call 0x101e2c00 */
  push32(0x101e31cbu); f_101e2c00();
  /* 101e31cb push 0x101ece18 */
  push32((uint32_t)(0x101ece18u));
  /* 101e31d0 mov dword ptr [0x101f0ffc], eax */
  w32((uint32_t)(0x101f0ffc), (EAX));
  /* 101e31d5 call 0x101e2c00 */
  push32(0x101e31dau); f_101e2c00();
  /* 101e31da push 0x101ecdfc */
  push32((uint32_t)(0x101ecdfcu));
  /* 101e31df mov dword ptr [0x101f0fb8], eax */
  w32((uint32_t)(0x101f0fb8), (EAX));
  /* 101e31e4 call 0x101e2c00 */
  push32(0x101e31e9u); f_101e2c00();
  /* 101e31e9 push 0x101ecde0 */
  push32((uint32_t)(0x101ecde0u));
  /* 101e31ee mov dword ptr [0x101f0fbc], eax */
  w32((uint32_t)(0x101f0fbc), (EAX));
  /* 101e31f3 call 0x101e2c00 */
  push32(0x101e31f8u); f_101e2c00();
  /* 101e31f8 push 0x101ecdc8 */
  push32((uint32_t)(0x101ecdc8u));
  /* 101e31fd mov dword ptr [0x101f0fc0], eax */
  w32((uint32_t)(0x101f0fc0), (EAX));
  /* 101e3202 call 0x101e2c00 */
  push32(0x101e3207u); f_101e2c00();
  /* 101e3207 push 0x101ecdb0 */
  push32((uint32_t)(0x101ecdb0u));
  /* 101e320c mov dword ptr [0x101f0fc4], eax */
  w32((uint32_t)(0x101f0fc4), (EAX));
  /* 101e3211 call 0x101e2c00 */
  push32(0x101e3216u); f_101e2c00();
  /* 101e3216 push 0x101ecda4 */
  push32((uint32_t)(0x101ecda4u));
  /* 101e321b mov dword ptr [0x101f0fc8], eax */
  w32((uint32_t)(0x101f0fc8), (EAX));
  /* 101e3220 call 0x101e2c00 */
  push32(0x101e3225u); f_101e2c00();
  /* 101e3225 push 0x101ecd98 */
  push32((uint32_t)(0x101ecd98u));
  /* 101e322a mov dword ptr [0x101f0fcc], eax */
  w32((uint32_t)(0x101f0fcc), (EAX));
  /* 101e322f call 0x101e2c00 */
  push32(0x101e3234u); f_101e2c00();
  /* 101e3234 push 0x101ecd88 */
  push32((uint32_t)(0x101ecd88u));
  /* 101e3239 mov dword ptr [0x101f0fd0], eax */
  w32((uint32_t)(0x101f0fd0), (EAX));
  /* 101e323e call 0x101e2c00 */
  push32(0x101e3243u); f_101e2c00();
  /* 101e3243 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3246 mov dword ptr [0x101f0fd4], eax */
  w32((uint32_t)(0x101f0fd4), (EAX));
  /* 101e324b push 0x101ecd7c */
  push32((uint32_t)(0x101ecd7cu));
  /* 101e3250 call 0x101e2c00 */
  push32(0x101e3255u); f_101e2c00();
  /* 101e3255 push 0x101ecd70 */
  push32((uint32_t)(0x101ecd70u));
  /* 101e325a mov dword ptr [0x101f0fdc], eax */
  w32((uint32_t)(0x101f0fdc), (EAX));
  /* 101e325f call 0x101e2c00 */
  push32(0x101e3264u); f_101e2c00();
  /* 101e3264 push 0x101ecd64 */
  push32((uint32_t)(0x101ecd64u));
  /* 101e3269 mov dword ptr [0x101f0fe0], eax */
  w32((uint32_t)(0x101f0fe0), (EAX));
  /* 101e326e call 0x101e2c00 */
  push32(0x101e3273u); f_101e2c00();
  /* 101e3273 push 0x101ecd54 */
  push32((uint32_t)(0x101ecd54u));
  /* 101e3278 mov dword ptr [0x101f1000], eax */
  w32((uint32_t)(0x101f1000), (EAX));
  /* 101e327d call 0x101e2c00 */
  push32(0x101e3282u); f_101e2c00();
  /* 101e3282 push 0x101ecd48 */
  push32((uint32_t)(0x101ecd48u));
  /* 101e3287 mov dword ptr [0x101f1004], eax */
  w32((uint32_t)(0x101f1004), (EAX));
  /* 101e328c call 0x101e2c00 */
  push32(0x101e3291u); f_101e2c00();
  /* 101e3291 push 0x101ecd3c */
  push32((uint32_t)(0x101ecd3cu));
  /* 101e3296 mov dword ptr [0x101f1008], eax */
  w32((uint32_t)(0x101f1008), (EAX));
  /* 101e329b call 0x101e2c00 */
  push32(0x101e32a0u); f_101e2c00();
  /* 101e32a0 push 0x101ecd30 */
  push32((uint32_t)(0x101ecd30u));
  /* 101e32a5 mov dword ptr [0x101f100c], eax */
  w32((uint32_t)(0x101f100c), (EAX));
  /* 101e32aa call 0x101e2c00 */
  push32(0x101e32afu); f_101e2c00();
  /* 101e32af push 0x101ecd20 */
  push32((uint32_t)(0x101ecd20u));
  /* 101e32b4 mov dword ptr [0x101f1010], eax */
  w32((uint32_t)(0x101f1010), (EAX));
  /* 101e32b9 call 0x101e2c00 */
  push32(0x101e32beu); f_101e2c00();
  /* 101e32be push 0x101ecd10 */
  push32((uint32_t)(0x101ecd10u));
  /* 101e32c3 mov dword ptr [0x101f1014], eax */
  w32((uint32_t)(0x101f1014), (EAX));
  /* 101e32c8 call 0x101e2c00 */
  push32(0x101e32cdu); f_101e2c00();
  /* 101e32cd push 0x101eccfc */
  push32((uint32_t)(0x101eccfcu));
  /* 101e32d2 mov dword ptr [0x101f101c], eax */
  w32((uint32_t)(0x101f101c), (EAX));
  /* 101e32d7 call 0x101e2c00 */
  push32(0x101e32dcu); f_101e2c00();
  /* 101e32dc mov dword ptr [0x101f1018], eax */
  w32((uint32_t)(0x101f1018), (EAX));
  /* 101e32e1 push 0x101ecce4 */
  push32((uint32_t)(0x101ecce4u));
  /* 101e32e6 call 0x101e2c00 */
  push32(0x101e32ebu); f_101e2c00();
  /* 101e32eb push 0x101ecccc */
  push32((uint32_t)(0x101eccccu));
  /* 101e32f0 mov dword ptr [0x101ee510], eax */
  w32((uint32_t)(0x101ee510), (EAX));
  /* 101e32f5 call 0x101e2c00 */
  push32(0x101e32fau); f_101e2c00();
  /* 101e32fa push 0x101eccbc */
  push32((uint32_t)(0x101eccbcu));
  /* 101e32ff mov dword ptr [0x101ee390], eax */
  w32((uint32_t)(0x101ee390), (EAX));
  /* 101e3304 call 0x101e2c00 */
  push32(0x101e3309u); f_101e2c00();
  /* 101e3309 push 0x101eccac */
  push32((uint32_t)(0x101eccacu));
  /* 101e330e mov dword ptr [0x101f1020], eax */
  w32((uint32_t)(0x101f1020), (EAX));
  /* 101e3313 call 0x101e2c00 */
  push32(0x101e3318u); f_101e2c00();
  /* 101e3318 push 0x101ecc9c */
  push32((uint32_t)(0x101ecc9cu));
  /* 101e331d mov dword ptr [0x101f0fe4], eax */
  w32((uint32_t)(0x101f0fe4), (EAX));
  /* 101e3322 call 0x101e2c00 */
  push32(0x101e3327u); f_101e2c00();
  /* 101e3327 push 0x101ecc8c */
  push32((uint32_t)(0x101ecc8cu));
  /* 101e332c mov dword ptr [0x101f0fe8], eax */
  w32((uint32_t)(0x101f0fe8), (EAX));
  /* 101e3331 call 0x101e2c00 */
  push32(0x101e3336u); f_101e2c00();
  /* 101e3336 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3339 mov dword ptr [0x101f0da0], eax */
  w32((uint32_t)(0x101f0da0), (EAX));
  /* 101e333e push 0x101ecc7c */
  push32((uint32_t)(0x101ecc7cu));
  /* 101e3343 call 0x101e2c00 */
  push32(0x101e3348u); f_101e2c00();
  /* 101e3348 push 0x101ecc6c */
  push32((uint32_t)(0x101ecc6cu));
  /* 101e334d mov dword ptr [0x101f0d58], eax */
  w32((uint32_t)(0x101f0d58), (EAX));
  /* 101e3352 call 0x101e2c00 */
  push32(0x101e3357u); f_101e2c00();
  /* 101e3357 push 0x101ecc5c */
  push32((uint32_t)(0x101ecc5cu));
  /* 101e335c mov dword ptr [0x101f0b38], eax */
  w32((uint32_t)(0x101f0b38), (EAX));
  /* 101e3361 call 0x101e2c00 */
  push32(0x101e3366u); f_101e2c00();
  /* 101e3366 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3369 mov dword ptr [0x101ee538], eax */
  w32((uint32_t)(0x101ee538), (EAX));
  /* 101e336e call 0x101e4390 */
  push32(0x101e3373u); f_101e4390();
L_101e3373:;
  /* 101e3373 mov eax, 1 */
  EAX = (0x1u);
  /* 101e3378 ret 0xc */
  ESPCHK(0x101e2c60u, _esp0);
  ESP += 16; return;
}

/* FUN_10003380 @ 0x101e3380 (338 bytes, 92 insns) */
void f_101e3380(void) {
  FTRACE(0x101e3380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e3380 push 0x101f0d08 */
  push32((uint32_t)(0x101f0d08u));
  /* 101e3385 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e338bu);
  /* 101e338b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e338e cmp eax, 0x28 */
  { uint32_t _a=(EAX),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3391 jle 0x101e3402 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3402;
  /* 101e3393 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3395 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e3397 push 0x101ee348 */
  push32((uint32_t)(0x101ee348u));
  /* 101e339c call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e33a2u);
  /* 101e33a2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e33a4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e33a6 push 0x101ee338 */
  push32((uint32_t)(0x101ee338u));
  /* 101e33ab call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e33b1u);
  /* 101e33b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e33b3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e33b5 push 0x101ee340 */
  push32((uint32_t)(0x101ee340u));
  /* 101e33ba call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e33c0u);
  /* 101e33c0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e33c2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e33c4 push 0x101ee3c0 */
  push32((uint32_t)(0x101ee3c0u));
  /* 101e33c9 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e33cfu);
  /* 101e33cf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e33d1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e33d3 push 0x101ee3c8 */
  push32((uint32_t)(0x101ee3c8u));
  /* 101e33d8 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e33deu);
  /* 101e33de push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e33e0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e33e2 push 0x101ee3b0 */
  push32((uint32_t)(0x101ee3b0u));
  /* 101e33e7 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e33edu);
  /* 101e33ed add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e33f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e33f2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e33f4 push 0x101ee3b8 */
  push32((uint32_t)(0x101ee3b8u));
  /* 101e33f9 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e33ffu);
  /* 101e33ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3402:;
  /* 101e3402 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3404 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3406 push 0x101f0e28 */
  push32((uint32_t)(0x101f0e28u));
  /* 101e340b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3411u);
  /* 101e3411 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3413 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3415 push 0x101f0e30 */
  push32((uint32_t)(0x101f0e30u));
  /* 101e341a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3420u);
  /* 101e3420 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3422 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3424 push 0x101f0e18 */
  push32((uint32_t)(0x101f0e18u));
  /* 101e3429 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e342fu);
  /* 101e342f push 0x101f0d78 */
  push32((uint32_t)(0x101f0d78u));
  /* 101e3434 call dword ptr [0x101f0fe0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fe0))), 0x101e343au);
  /* 101e343a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e343d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e343f je 0x101e3453 */
  if (C.zf) goto L_101e3453;
  /* 101e3441 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3443 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3445 push 0x101f0e20 */
  push32((uint32_t)(0x101f0e20u));
  /* 101e344a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3450u);
  /* 101e3450 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3453:;
  /* 101e3453 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3455 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3457 push 0x101f0e38 */
  push32((uint32_t)(0x101f0e38u));
  /* 101e345c call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3462u);
  /* 101e3462 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3464 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3466 push 0x101f0d88 */
  push32((uint32_t)(0x101f0d88u));
  /* 101e346b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3471u);
  /* 101e3471 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3473 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3475 push 0x101f0d70 */
  push32((uint32_t)(0x101f0d70u));
  /* 101e347a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3480u);
  /* 101e3480 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3482 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3484 push 0x101f0d78 */
  push32((uint32_t)(0x101f0d78u));
  /* 101e3489 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e348fu);
  /* 101e348f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3491 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3493 push 0x101f0d90 */
  push32((uint32_t)(0x101f0d90u));
  /* 101e3498 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e349eu);
  /* 101e349e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e34a0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e34a2 push 0x101f0d98 */
  push32((uint32_t)(0x101f0d98u));
  /* 101e34a7 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e34adu);
  /* 101e34ad add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e34b0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e34b2 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101e34b4 push 0x101f0b40 */
  push32((uint32_t)(0x101f0b40u));
  /* 101e34b9 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e34bfu);
  /* 101e34bf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e34c1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101e34c3 push 0x101f0d50 */
  push32((uint32_t)(0x101f0d50u));
  /* 101e34c8 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e34ceu);
  /* 101e34ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e34d1 ret  */
  ESPCHK(0x101e3380u, _esp0);
  ESP += 4; return;
}

/* FUN_100034e0 @ 0x101e34e0 (64 bytes, 18 insns) */
void f_101e34e0(void) {
  FTRACE(0x101e34e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e34e0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e34e2 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101e34e4 push 0x101f0df8 */
  push32((uint32_t)(0x101f0df8u));
  /* 101e34e9 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e34efu);
  /* 101e34ef push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e34f1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101e34f3 push 0x101f0e00 */
  push32((uint32_t)(0x101f0e00u));
  /* 101e34f8 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e34feu);
  /* 101e34fe push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3500 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101e3502 push 0x101f0e08 */
  push32((uint32_t)(0x101f0e08u));
  /* 101e3507 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e350du);
  /* 101e350d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e350f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101e3511 push 0x101f0cd8 */
  push32((uint32_t)(0x101f0cd8u));
  /* 101e3516 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e351cu);
  /* 101e351c add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e351f ret  */
  ESPCHK(0x101e34e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003520 @ 0x101e3520 (127 bytes, 35 insns) */
void f_101e3520(void) {
  FTRACE(0x101e3520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e3520 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3522 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e3524 push 0x101f0cf8 */
  push32((uint32_t)(0x101f0cf8u));
  /* 101e3529 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e352fu);
  /* 101e352f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3531 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e3533 push 0x101f0ce8 */
  push32((uint32_t)(0x101f0ce8u));
  /* 101e3538 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e353eu);
  /* 101e353e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3540 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e3542 push 0x101f0ca8 */
  push32((uint32_t)(0x101f0ca8u));
  /* 101e3547 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e354du);
  /* 101e354d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e354f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e3551 push 0x101f0ca0 */
  push32((uint32_t)(0x101f0ca0u));
  /* 101e3556 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e355cu);
  /* 101e355c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e355e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e3560 push 0x101f0bb0 */
  push32((uint32_t)(0x101f0bb0u));
  /* 101e3565 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e356bu);
  /* 101e356b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e356d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e356f push 0x101f0bb8 */
  push32((uint32_t)(0x101f0bb8u));
  /* 101e3574 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e357au);
  /* 101e357a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e357d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e357f push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e3581 push 0x101f0bc0 */
  push32((uint32_t)(0x101f0bc0u));
  /* 101e3586 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e358cu);
  /* 101e358c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e358e push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e3590 push 0x101f0bc8 */
  push32((uint32_t)(0x101f0bc8u));
  /* 101e3595 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e359bu);
  /* 101e359b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e359e ret  */
  ESPCHK(0x101e3520u, _esp0);
  ESP += 4; return;
}

/* FUN_100035a0 @ 0x101e35a0 (3405 bytes, 948 insns) */
void f_101e35a0(void) {
  FTRACE(0x101e35a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e35a0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e35a3 push ebx */
  push32((uint32_t)(EBX));
  /* 101e35a4 push esi */
  push32((uint32_t)(ESI));
  /* 101e35a5 push edi */
  push32((uint32_t)(EDI));
  /* 101e35a6 push 0x101ec030 */
  push32((uint32_t)(0x101ec030u));
  /* 101e35ab push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e35ad call dword ptr [0x101f0f9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f9c))), 0x101e35b3u);
  /* 101e35b3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e35b5 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e35bbu);
  /* 101e35bb mov ebx, eax */
  EBX = (EAX);
  /* 101e35bd push 0 */
  push32((uint32_t)(0x0u));
  /* 101e35bf mov dword ptr [esp + 0x1c], ebx */
  w32((uint32_t)(ESP + 0x1c), (EBX));
  /* 101e35c3 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e35c9u);
  /* 101e35c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e35cb call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e35d1u);
  /* 101e35d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e35d3 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e35d9u);
  /* 101e35d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e35db mov edi, eax */
  EDI = (EAX);
  /* 101e35dd call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e35e3u);
  /* 101e35e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e35e5 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e35ebu);
  /* 101e35eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e35ed push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e35ef push 1 */
  push32((uint32_t)(0x1u));
  /* 101e35f1 push 0x101f0b50 */
  push32((uint32_t)(0x101f0b50u));
  /* 101e35f6 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e35fcu);
  /* 101e35fc push 0x101f0b50 */
  push32((uint32_t)(0x101f0b50u));
  /* 101e3601 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e3607u);
  /* 101e3607 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e360a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e360c je 0x101e3915 */
  if (C.zf) goto L_101e3915;
  /* 101e3612 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3614 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3616 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3618 push 0x101f0b30 */
  push32((uint32_t)(0x101f0b30u));
  /* 101e361d call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3623u);
  /* 101e3623 mov eax, dword ptr [0x101ee4f0] */
  EAX = (r32((uint32_t)(0x101ee4f0)));
  /* 101e3628 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e362b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e362d jne 0x101e3673 */
  if (!C.zf) goto L_101e3673;
  /* 101e362f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3631 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3633 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3635 push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e363a call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3640u);
  /* 101e3640 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3642 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3644 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3646 push 0x101ee4d8 */
  push32((uint32_t)(0x101ee4d8u));
  /* 101e364b call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3651u);
  /* 101e3651 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3653 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3655 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e3657 call dword ptr [0x101f0fa4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fa4))), 0x101e365du);
  /* 101e365d push 0x101ee4d8 */
  push32((uint32_t)(0x101ee4d8u));
  /* 101e3662 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e3668u);
  /* 101e3668 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e366b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e366d je 0x101e42e6 */
  if (C.zf) goto L_101e42e6;
L_101e3673:;
  /* 101e3673 push 0x101f0b30 */
  push32((uint32_t)(0x101f0b30u));
  /* 101e3678 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e367eu);
  /* 101e367e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e3683 je 0x101e3915 */
  if (C.zf) goto L_101e3915;
  /* 101e3689 push 0x101ee4d8 */
  push32((uint32_t)(0x101ee4d8u));
  /* 101e368e call dword ptr [0x101f0fd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd4))), 0x101e3694u);
  /* 101e3694 push 0x101ee4d8 */
  push32((uint32_t)(0x101ee4d8u));
  /* 101e3699 mov esi, eax */
  ESI = (EAX);
  /* 101e369b call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e36a1u);
  /* 101e36a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e36a4 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e36a6 jne 0x101e36bc */
  if (!C.zf) goto L_101e36bc;
  /* 101e36a8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e36aa push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e36ac push 1 */
  push32((uint32_t)(0x1u));
  /* 101e36ae push 0x101f0d10 */
  push32((uint32_t)(0x101f0d10u));
  /* 101e36b3 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e36b9u);
  /* 101e36b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e36bc:;
  /* 101e36bc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e36be push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e36c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e36c2 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e36c7 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e36cdu);
  /* 101e36cd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e36cf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e36d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e36d3 push 0x101f0b30 */
  push32((uint32_t)(0x101f0b30u));
  /* 101e36d8 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e36deu);
  /* 101e36de push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e36e0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e36e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e36e4 push 0x101f0b18 */
  push32((uint32_t)(0x101f0b18u));
  /* 101e36e9 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e36efu);
  /* 101e36ef push 0x101f0b18 */
  push32((uint32_t)(0x101f0b18u));
  /* 101e36f4 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e36fau);
  /* 101e36fa add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e36fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e36ff je 0x101e3755 */
  if (C.zf) goto L_101e3755;
  /* 101e3701 push 0x101f0b30 */
  push32((uint32_t)(0x101f0b30u));
  /* 101e3706 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e370cu);
  /* 101e370c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e370f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3712 jle 0x101e3755 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3755;
  /* 101e3714 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e371a jle 0x101e3730 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3730;
  /* 101e371c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e371e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3720 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3722 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e3727 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e372du);
  /* 101e372d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3730:;
  /* 101e3730 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3732 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e3734 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e3736 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e373b call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3741u);
  /* 101e3741 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3743 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e3745 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3747 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e374c call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3752u);
  /* 101e3752 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3755:;
  /* 101e3755 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3757 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3759 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e375b push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e3760 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3766u);
  /* 101e3766 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3769 call dword ptr [0x101f1000] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f1000))), 0x101e376fu);
  /* 101e376f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e3771 je 0x101e37cd */
  if (C.zf) goto L_101e37cd;
  /* 101e3773 cmp ebx, 0x4b0 */
  { uint32_t _a=(EBX),_b=(0x4b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3779 jle 0x101e37cd */
  if ((C.zf||C.sf!=C.of)) goto L_101e37cd;
  /* 101e377b push 2 */
  push32((uint32_t)(0x2u));
  /* 101e377d push 0xa */
  push32((uint32_t)(0xau));
  /* 101e377f push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3781 push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e3786 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e378cu);
  /* 101e378c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e378f cmp ebx, 0x7d0 */
  { uint32_t _a=(EBX),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3795 jle 0x101e37cd */
  if ((C.zf||C.sf!=C.of)) goto L_101e37cd;
  /* 101e3797 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3799 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e379b push 5 */
  push32((uint32_t)(0x5u));
  /* 101e379d push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e37a2 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e37a8u);
  /* 101e37a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e37aa push 3 */
  push32((uint32_t)(0x3u));
  /* 101e37ac push 6 */
  push32((uint32_t)(0x6u));
  /* 101e37ae push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e37b3 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e37b9u);
  /* 101e37b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e37bb push 2 */
  push32((uint32_t)(0x2u));
  /* 101e37bd push 7 */
  push32((uint32_t)(0x7u));
  /* 101e37bf push 0x101f0b48 */
  push32((uint32_t)(0x101f0b48u));
  /* 101e37c4 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e37cau);
  /* 101e37ca add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e37cd:;
  /* 101e37cd push 0x101f0c98 */
  push32((uint32_t)(0x101f0c98u));
  /* 101e37d2 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e37d8u);
  /* 101e37d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e37db cmp eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e37de jle 0x101e37f4 */
  if ((C.zf||C.sf!=C.of)) goto L_101e37f4;
  /* 101e37e0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e37e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e37e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e37e6 push 0x101ee4d8 */
  push32((uint32_t)(0x101ee4d8u));
  /* 101e37eb call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e37f1u);
  /* 101e37f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e37f4:;
  /* 101e37f4 push 0x101f0b18 */
  push32((uint32_t)(0x101f0b18u));
  /* 101e37f9 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e37ffu);
  /* 101e37ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3802 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e3804 je 0x101e3885 */
  if (C.zf) goto L_101e3885;
  /* 101e3806 push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e380b call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e3811u);
  /* 101e3811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3814 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3817 jle 0x101e3885 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3885;
  /* 101e3819 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e381b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e381d push 2 */
  push32((uint32_t)(0x2u));
  /* 101e381f push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e3824 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e382au);
  /* 101e382a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e382c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e382e push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3830 push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e3835 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e383bu);
  /* 101e383b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e383d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e383f push 4 */
  push32((uint32_t)(0x4u));
  /* 101e3841 push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e3846 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e384cu);
  /* 101e384c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e384e push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3850 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3852 push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e3857 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e385du);
  /* 101e385d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3860 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3862 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3864 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3866 push 0x101ee2f0 */
  push32((uint32_t)(0x101ee2f0u));
  /* 101e386b call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3871u);
  /* 101e3871 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3873 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e3875 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3877 push 0x101ee2f0 */
  push32((uint32_t)(0x101ee2f0u));
  /* 101e387c call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3882u);
  /* 101e3882 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3885:;
  /* 101e3885 push 0x101f0dd0 */
  push32((uint32_t)(0x101f0dd0u));
  /* 101e388a call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e3890u);
  /* 101e3890 push 0x101f0dd0 */
  push32((uint32_t)(0x101f0dd0u));
  /* 101e3895 mov esi, eax */
  ESI = (EAX);
  /* 101e3897 call dword ptr [0x101f0fd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd4))), 0x101e389du);
  /* 101e389d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e38a0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e38a2 jne 0x101e38db */
  if (!C.zf) goto L_101e38db;
  /* 101e38a4 push 0x101f0bf0 */
  push32((uint32_t)(0x101f0bf0u));
  /* 101e38a9 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e38afu);
  /* 101e38af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e38b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e38b4 je 0x101e38db */
  if (C.zf) goto L_101e38db;
  /* 101e38b6 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e38b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e38ba push 2 */
  push32((uint32_t)(0x2u));
  /* 101e38bc push 0x101f0dd0 */
  push32((uint32_t)(0x101f0dd0u));
  /* 101e38c1 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e38c7u);
  /* 101e38c7 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e38c9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e38cb push 3 */
  push32((uint32_t)(0x3u));
  /* 101e38cd push 0x101f0dd0 */
  push32((uint32_t)(0x101f0dd0u));
  /* 101e38d2 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e38d8u);
  /* 101e38d8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e38db:;
  /* 101e38db push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e38e0 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e38e6u);
  /* 101e38e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e38e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e38eb je 0x101e3901 */
  if (C.zf) goto L_101e3901;
  /* 101e38ed push 0xa */
  push32((uint32_t)(0xau));
  /* 101e38ef push 0xa */
  push32((uint32_t)(0xau));
  /* 101e38f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e38f3 push 0x101f0b50 */
  push32((uint32_t)(0x101f0b50u));
  /* 101e38f8 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e38feu);
  /* 101e38fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3901:;
  /* 101e3901 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e3903 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3905 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3907 push 0x101f0b58 */
  push32((uint32_t)(0x101f0b58u));
  /* 101e390c call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3912u);
  /* 101e3912 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3915:;
  /* 101e3915 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3917 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3919 push 0x101f0e50 */
  push32((uint32_t)(0x101f0e50u));
  /* 101e391e call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3924u);
  /* 101e3924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3927 cmp ebx, 0x2bc */
  { uint32_t _a=(EBX),_b=(0x2bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e392d jle 0x101e3986 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3986;
  /* 101e392f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e3931 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e3933 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 101e3938 push 0x101f0bd0 */
  push32((uint32_t)(0x101f0bd0u));
  /* 101e393d call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3943u);
  /* 101e3943 push 0x101ee330 */
  push32((uint32_t)(0x101ee330u));
  /* 101e3948 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e394eu);
  /* 101e394e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3951 cmp eax, 0xfa */
  { uint32_t _a=(EAX),_b=(0xfau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3956 jle 0x101e396f */
  if ((C.zf||C.sf!=C.of)) goto L_101e396f;
  /* 101e3958 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 101e395a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e395c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101e3961 push 0x101f0d08 */
  push32((uint32_t)(0x101f0d08u));
  /* 101e3966 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e396cu);
  /* 101e396c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e396f:;
  /* 101e396f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3971 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e3973 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101e3978 push 0x101ee330 */
  push32((uint32_t)(0x101ee330u));
  /* 101e397d call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3983u);
  /* 101e3983 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3986:;
  /* 101e3986 cmp ebx, 0xfa */
  { uint32_t _a=(EBX),_b=(0xfau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e398c jle 0x101e39a5 */
  if ((C.zf||C.sf!=C.of)) goto L_101e39a5;
  /* 101e398e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3990 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3992 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101e3997 push 0x101f0c98 */
  push32((uint32_t)(0x101f0c98u));
  /* 101e399c call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e39a2u);
  /* 101e39a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e39a5:;
  /* 101e39a5 cmp ebx, 0x12c */
  { uint32_t _a=(EBX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e39ab jle 0x101e3a4f */
  if ((C.zf||C.sf!=C.of)) goto L_101e3a4f;
  /* 101e39b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e39b3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e39b5 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 101e39ba push 0x101f0e68 */
  push32((uint32_t)(0x101f0e68u));
  /* 101e39bf call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e39c5u);
  /* 101e39c5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e39c7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e39c9 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 101e39ce push 0x101f0e68 */
  push32((uint32_t)(0x101f0e68u));
  /* 101e39d3 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e39d9u);
  /* 101e39d9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e39dc cmp edi, 0x5dc */
  { uint32_t _a=(EDI),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e39e2 jle 0x101e3a4f */
  if ((C.zf||C.sf!=C.of)) goto L_101e3a4f;
  /* 101e39e4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e39e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e39e8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e39ea push 0x101f0c68 */
  push32((uint32_t)(0x101f0c68u));
  /* 101e39ef call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e39f5u);
  /* 101e39f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e39f8 cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e39fe jle 0x101e3a17 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3a17;
  /* 101e3a00 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3a02 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3a04 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 101e3a09 push 0x101f0d68 */
  push32((uint32_t)(0x101f0d68u));
  /* 101e3a0e call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3a14u);
  /* 101e3a14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3a17:;
  /* 101e3a17 cmp edi, 0xbb8 */
  { uint32_t _a=(EDI),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3a1d jle 0x101e3a33 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3a33;
  /* 101e3a1f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3a21 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3a23 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 101e3a25 push 0x101f0d68 */
  push32((uint32_t)(0x101f0d68u));
  /* 101e3a2a call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3a30u);
  /* 101e3a30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3a33:;
  /* 101e3a33 cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3a39 jle 0x101e3a4f */
  if ((C.zf||C.sf!=C.of)) goto L_101e3a4f;
  /* 101e3a3b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3a3d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3a3f push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e3a41 push 0x101f0d68 */
  push32((uint32_t)(0x101f0d68u));
  /* 101e3a46 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3a4cu);
  /* 101e3a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3a4f:;
  /* 101e3a4f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3a51 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e3a53 push 0x101f0ba8 */
  push32((uint32_t)(0x101f0ba8u));
  /* 101e3a58 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3a5eu);
  /* 101e3a5e push 0x101f0d48 */
  push32((uint32_t)(0x101f0d48u));
  /* 101e3a63 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e3a69u);
  /* 101e3a69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e3a6e je 0x101e3a82 */
  if (C.zf) goto L_101e3a82;
  /* 101e3a70 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3a72 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e3a74 push 0x101ee320 */
  push32((uint32_t)(0x101ee320u));
  /* 101e3a79 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3a7fu);
  /* 101e3a7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3a82:;
  /* 101e3a82 push 0x101f0bd0 */
  push32((uint32_t)(0x101f0bd0u));
  /* 101e3a87 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e3a8du);
  /* 101e3a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3a90 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3a93 jle 0x101e3a9a */
  if ((C.zf||C.sf!=C.of)) goto L_101e3a9a;
  /* 101e3a95 call 0x101e34e0 */
  push32(0x101e3a9au); f_101e34e0();
L_101e3a9a:;
  /* 101e3a9a push 0x101ee330 */
  push32((uint32_t)(0x101ee330u));
  /* 101e3a9f call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e3aa5u);
  /* 101e3aa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3aa8 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3aab jle 0x101e3ab2 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3ab2;
  /* 101e3aad call 0x101e3380 */
  push32(0x101e3ab2u); f_101e3380();
L_101e3ab2:;
  /* 101e3ab2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3ab4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3ab6 push 0x101f0cc0 */
  push32((uint32_t)(0x101f0cc0u));
  /* 101e3abb call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3ac1u);
  /* 101e3ac1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3ac3 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 101e3ac5 push 0x101f0d60 */
  push32((uint32_t)(0x101f0d60u));
  /* 101e3aca call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3ad0u);
  /* 101e3ad0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3ad2 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e3ad4 push 0x101f0c18 */
  push32((uint32_t)(0x101f0c18u));
  /* 101e3ad9 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3adfu);
  /* 101e3adf push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3ae1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e3ae3 push 0x101f0ba0 */
  push32((uint32_t)(0x101f0ba0u));
  /* 101e3ae8 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3aeeu);
  /* 101e3aee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3af0 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e3af2 push 0x101f0ba8 */
  push32((uint32_t)(0x101f0ba8u));
  /* 101e3af7 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3afdu);
  /* 101e3afd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3aff push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e3b01 push 0x101f0b90 */
  push32((uint32_t)(0x101f0b90u));
  /* 101e3b06 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3b0cu);
  /* 101e3b0c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3b0f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3b11 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e3b13 push 0x101f0b98 */
  push32((uint32_t)(0x101f0b98u));
  /* 101e3b18 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3b1eu);
  /* 101e3b1e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3b20 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3b22 push 0x101ee400 */
  push32((uint32_t)(0x101ee400u));
  /* 101e3b27 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3b2du);
  /* 101e3b2d push 0x101f0cc0 */
  push32((uint32_t)(0x101f0cc0u));
  /* 101e3b32 call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e3b38u);
  /* 101e3b38 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3b3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e3b3d je 0x101e3d0d */
  if (C.zf) goto L_101e3d0d;
  /* 101e3b43 cmp dword ptr [0x101f0b20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101f0b20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3b4a jne 0x101e3b60 */
  if (!C.zf) goto L_101e3b60;
  /* 101e3b4c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3b4e push 0xa */
  push32((uint32_t)(0xau));
  /* 101e3b50 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e3b52 push 0x101ee508 */
  push32((uint32_t)(0x101ee508u));
  /* 101e3b57 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3b5du);
  /* 101e3b5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3b60:;
  /* 101e3b60 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3b62 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 101e3b64 push 0x101f0c58 */
  push32((uint32_t)(0x101f0c58u));
  /* 101e3b69 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3b6fu);
  /* 101e3b6f push 0x101f0d08 */
  push32((uint32_t)(0x101f0d08u));
  /* 101e3b74 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e3b7au);
  /* 101e3b7a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3b7d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3b80 jle 0x101e3ba3 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3ba3;
  /* 101e3b82 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3b84 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3b86 push 0x101f0d30 */
  push32((uint32_t)(0x101f0d30u));
  /* 101e3b8b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3b91u);
  /* 101e3b91 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 101e3b93 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 101e3b95 push 0x101f0d38 */
  push32((uint32_t)(0x101f0d38u));
  /* 101e3b9a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3ba0u);
  /* 101e3ba0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3ba3:;
  /* 101e3ba3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e3ba5 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 101e3ba7 push 0x101ee308 */
  push32((uint32_t)(0x101ee308u));
  /* 101e3bac call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3bb2u);
  /* 101e3bb2 call 0x101e3520 */
  push32(0x101e3bb7u); f_101e3520();
  /* 101e3bb7 push 0x101f0bc8 */
  push32((uint32_t)(0x101f0bc8u));
  /* 101e3bbc call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e3bc2u);
  /* 101e3bc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3bc5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e3bc7 je 0x101e3bdd */
  if (C.zf) goto L_101e3bdd;
  /* 101e3bc9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3bcb push 0xa */
  push32((uint32_t)(0xau));
  /* 101e3bcd push 0xa */
  push32((uint32_t)(0xau));
  /* 101e3bcf push 0x101ee328 */
  push32((uint32_t)(0x101ee328u));
  /* 101e3bd4 call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3bdau);
  /* 101e3bda add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3bdd:;
  /* 101e3bdd push 0x101f0ca0 */
  push32((uint32_t)(0x101f0ca0u));
  /* 101e3be2 call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e3be8u);
  /* 101e3be8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3beb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e3bed je 0x101e3c03 */
  if (C.zf) goto L_101e3c03;
  /* 101e3bef push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3bf1 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e3bf3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 101e3bf5 push 0x101f0e48 */
  push32((uint32_t)(0x101f0e48u));
  /* 101e3bfa call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3c00u);
  /* 101e3c00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3c03:;
  /* 101e3c03 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c05 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e3c07 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c09 push 0x101ee508 */
  push32((uint32_t)(0x101ee508u));
  /* 101e3c0e call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e3c14u);
  /* 101e3c14 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c16 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3c18 push 0x101f0b88 */
  push32((uint32_t)(0x101f0b88u));
  /* 101e3c1d call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3c23u);
  /* 101e3c23 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c25 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3c27 push 0x101f0b80 */
  push32((uint32_t)(0x101f0b80u));
  /* 101e3c2c call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3c32u);
  /* 101e3c32 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c34 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3c36 push 0x101f0b78 */
  push32((uint32_t)(0x101f0b78u));
  /* 101e3c3b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3c41u);
  /* 101e3c41 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c43 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3c45 push 0x101f0b70 */
  push32((uint32_t)(0x101f0b70u));
  /* 101e3c4a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3c50u);
  /* 101e3c50 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3c53 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c55 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3c57 push 0x101f0b68 */
  push32((uint32_t)(0x101f0b68u));
  /* 101e3c5c call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3c62u);
  /* 101e3c62 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c64 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3c66 push 0x101f0b60 */
  push32((uint32_t)(0x101f0b60u));
  /* 101e3c6b call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3c71u);
  /* 101e3c71 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c73 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3c75 push 0x101f0c38 */
  push32((uint32_t)(0x101f0c38u));
  /* 101e3c7a call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3c80u);
  /* 101e3c80 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c82 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3c84 push 0x101f0c30 */
  push32((uint32_t)(0x101f0c30u));
  /* 101e3c89 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3c8fu);
  /* 101e3c8f push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3c91 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3c93 push 0x101f0c28 */
  push32((uint32_t)(0x101f0c28u));
  /* 101e3c98 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3c9eu);
  /* 101e3c9e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3ca0 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3ca2 push 0x101f0c20 */
  push32((uint32_t)(0x101f0c20u));
  /* 101e3ca7 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3cadu);
  /* 101e3cad add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3cb0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3cb2 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3cb4 push 0x101f0c10 */
  push32((uint32_t)(0x101f0c10u));
  /* 101e3cb9 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3cbfu);
  /* 101e3cbf push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e3cc1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 101e3cc3 push 0x101f0c60 */
  push32((uint32_t)(0x101f0c60u));
  /* 101e3cc8 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3cceu);
  /* 101e3cce push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e3cd0 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e3cd2 push 0x101f0c70 */
  push32((uint32_t)(0x101f0c70u));
  /* 101e3cd7 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3cddu);
  /* 101e3cdd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e3cdf push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e3ce1 push 0x101f0c80 */
  push32((uint32_t)(0x101f0c80u));
  /* 101e3ce6 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3cecu);
  /* 101e3cec push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e3cee push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e3cf0 push 0x101f0c88 */
  push32((uint32_t)(0x101f0c88u));
  /* 101e3cf5 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3cfbu);
  /* 101e3cfb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e3cfd push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e3cff push 0x101f0c78 */
  push32((uint32_t)(0x101f0c78u));
  /* 101e3d04 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e3d0au);
  /* 101e3d0a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3d0d:;
  /* 101e3d0d push 0x101ee4d8 */
  push32((uint32_t)(0x101ee4d8u));
  /* 101e3d12 call dword ptr [0x101f0fd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd4))), 0x101e3d18u);
  /* 101e3d18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e3d1d je 0x101e4144 */
  if (C.zf) goto L_101e4144;
  /* 101e3d23 push ebp */
  push32((uint32_t)(EBP));
  /* 101e3d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e3d26 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3d2cu);
  /* 101e3d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 101e3d2e mov edi, eax */
  EDI = (EAX);
  /* 101e3d30 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3d36u);
  /* 101e3d36 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e3d38 mov esi, eax */
  ESI = (EAX);
  /* 101e3d3a call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3d40u);
  /* 101e3d40 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3d42 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 101e3d46 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3d4cu);
  /* 101e3d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3d4e mov ebp, eax */
  EBP = (EAX);
  /* 101e3d50 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3d56u);
  /* 101e3d56 mov ebx, eax */
  EBX = (EAX);
  /* 101e3d58 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 101e3d5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3d5f cmp eax, 0x96 */
  { uint32_t _a=(EAX),_b=(0x96u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3d64 jge 0x101e3df7 */
  if ((C.sf==C.of)) goto L_101e3df7;
  /* 101e3d6a cmp esi, 0x1388 */
  { uint32_t _a=(ESI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3d70 jle 0x101e3d7d */
  if ((C.zf||C.sf!=C.of)) goto L_101e3d7d;
  /* 101e3d72 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101e3d77 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3d79 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e3d7b jmp 0x101e3def */
  goto L_101e3def;
L_101e3d7d:;
  /* 101e3d7d cmp esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3d83 jle 0x101e3d90 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3d90;
  /* 101e3d85 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 101e3d8a push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3d8c push 2 */
  push32((uint32_t)(0x2u));
  /* 101e3d8e jmp 0x101e3def */
  goto L_101e3def;
L_101e3d90:;
  /* 101e3d90 cmp edi, 0x1388 */
  { uint32_t _a=(EDI),_b=(0x1388u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3d96 jle 0x101e3da3 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3da3;
  /* 101e3d98 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101e3d9d push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 101e3da1 jmp 0x101e3def */
  goto L_101e3def;
L_101e3da3:;
  /* 101e3da3 cmp edi, 0x3e8 */
  { uint32_t _a=(EDI),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3da9 jle 0x101e3db6 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3db6;
  /* 101e3dab push 0x384 */
  push32((uint32_t)(0x384u));
  /* 101e3db0 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e3db4 jmp 0x101e3def */
  goto L_101e3def;
L_101e3db6:;
  /* 101e3db6 cmp ebp, 0x7d0 */
  { uint32_t _a=(EBP),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3dbc jle 0x101e3dc9 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3dc9;
  /* 101e3dbe push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101e3dc3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3dc5 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3dc7 jmp 0x101e3def */
  goto L_101e3def;
L_101e3dc9:;
  /* 101e3dc9 cmp dword ptr [esp + 0x14], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3dd1 jle 0x101e3dde */
  if ((C.zf||C.sf!=C.of)) goto L_101e3dde;
  /* 101e3dd3 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 101e3dd8 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3dda push 4 */
  push32((uint32_t)(0x4u));
  /* 101e3ddc jmp 0x101e3def */
  goto L_101e3def;
L_101e3dde:;
  /* 101e3dde cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3de4 jle 0x101e3df7 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3df7;
  /* 101e3de6 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 101e3deb push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3ded push 1 */
  push32((uint32_t)(0x1u));
L_101e3def:;
  /* 101e3def call 0x101e1f10 */
  push32(0x101e3df4u); f_101e1f10();
  /* 101e3df4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3df7:;
  /* 101e3df7 push 0x101f0b18 */
  push32((uint32_t)(0x101f0b18u));
  /* 101e3dfc call dword ptr [0x101f0fd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd4))), 0x101e3e02u);
  /* 101e3e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3e05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e3e07 je 0x101e3e57 */
  if (C.zf) goto L_101e3e57;
  /* 101e3e09 cmp ebx, 0x3e8 */
  { uint32_t _a=(EBX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3e0f jle 0x101e3e57 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3e57;
  /* 101e3e11 push 0x101f0d60 */
  push32((uint32_t)(0x101f0d60u));
  /* 101e3e16 call dword ptr [0x101f0fe0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fe0))), 0x101e3e1cu);
  /* 101e3e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3e1f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e3e21 jne 0x101e3e57 */
  if (!C.zf) goto L_101e3e57;
  /* 101e3e23 cmp dword ptr [esp + 0x14], 0xbb8 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3e2b jle 0x101e3e3e */
  if ((C.zf||C.sf!=C.of)) goto L_101e3e3e;
  /* 101e3e2d push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 101e3e32 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3e34 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e3e36 call 0x101e1f10 */
  push32(0x101e3e3bu); f_101e1f10();
  /* 101e3e3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3e3e:;
  /* 101e3e3e cmp ebp, 0xfa0 */
  { uint32_t _a=(EBP),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3e44 jle 0x101e3e57 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3e57;
  /* 101e3e46 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101e3e4b push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3e4d push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3e4f call 0x101e1f10 */
  push32(0x101e3e54u); f_101e1f10();
  /* 101e3e54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3e57:;
  /* 101e3e57 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e3e59 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3e5fu);
  /* 101e3e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3e62 cmp eax, 0x1d4c0 */
  { uint32_t _a=(EAX),_b=(0x1d4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3e67 jle 0x101e3e7a */
  if ((C.zf||C.sf!=C.of)) goto L_101e3e7a;
  /* 101e3e69 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 101e3e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3e70 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e3e72 call 0x101e1f10 */
  push32(0x101e3e77u); f_101e1f10();
  /* 101e3e77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3e7a:;
  /* 101e3e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 101e3e7c call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3e82u);
  /* 101e3e82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3e85 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3e8a jle 0x101e3e9d */
  if ((C.zf||C.sf!=C.of)) goto L_101e3e9d;
  /* 101e3e8c push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101e3e91 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e3e95 call 0x101e1f10 */
  push32(0x101e3e9au); f_101e1f10();
  /* 101e3e9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3e9d:;
  /* 101e3e9d push 0x101f0d10 */
  push32((uint32_t)(0x101f0d10u));
  /* 101e3ea2 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e3ea8u);
  /* 101e3ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3eab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e3ead je 0x101e4034 */
  if (C.zf) goto L_101e4034;
  /* 101e3eb3 push 0x101f0cc0 */
  push32((uint32_t)(0x101f0cc0u));
  /* 101e3eb8 call dword ptr [0x101f0fe0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fe0))), 0x101e3ebeu);
  /* 101e3ebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3ec1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e3ec3 jne 0x101e4034 */
  if (!C.zf) goto L_101e4034;
  /* 101e3ec9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3ecb call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3ed1u);
  /* 101e3ed1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3ed4 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3ed9 jle 0x101e3f94 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3f94;
  /* 101e3edf push 0 */
  push32((uint32_t)(0x0u));
  /* 101e3ee1 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3ee7u);
  /* 101e3ee7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3eea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e3eec je 0x101e3f94 */
  if (C.zf) goto L_101e3f94;
  /* 101e3ef2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3ef4 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3efau);
  /* 101e3efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3efd cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3f02 jge 0x101e3f94 */
  if ((C.sf==C.of)) goto L_101e3f94;
  /* 101e3f08 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3f0a call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3f10u);
  /* 101e3f10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3f13 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3f18 jle 0x101e3f2b */
  if ((C.zf||C.sf!=C.of)) goto L_101e3f2b;
  /* 101e3f1a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101e3f1f push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3f21 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3f23 call 0x101e1f10 */
  push32(0x101e3f28u); f_101e1f10();
  /* 101e3f28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3f2b:;
  /* 101e3f2b push 4 */
  push32((uint32_t)(0x4u));
  /* 101e3f2d call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3f33u);
  /* 101e3f33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3f36 cmp eax, 0x1f40 */
  { uint32_t _a=(EAX),_b=(0x1f40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3f3b jle 0x101e3f4e */
  if ((C.zf||C.sf!=C.of)) goto L_101e3f4e;
  /* 101e3f3d push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 101e3f42 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3f44 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e3f46 call 0x101e1f10 */
  push32(0x101e3f4bu); f_101e1f10();
  /* 101e3f4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3f4e:;
  /* 101e3f4e push 2 */
  push32((uint32_t)(0x2u));
  /* 101e3f50 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3f56u);
  /* 101e3f56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3f59 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3f5e jle 0x101e3f71 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3f71;
  /* 101e3f60 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101e3f65 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3f67 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e3f69 call 0x101e1f10 */
  push32(0x101e3f6eu); f_101e1f10();
  /* 101e3f6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3f71:;
  /* 101e3f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3f73 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3f79u);
  /* 101e3f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3f7c cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3f81 jle 0x101e3f94 */
  if ((C.zf||C.sf!=C.of)) goto L_101e3f94;
  /* 101e3f83 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101e3f88 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3f8a push 3 */
  push32((uint32_t)(0x3u));
  /* 101e3f8c call 0x101e1f10 */
  push32(0x101e3f91u); f_101e1f10();
  /* 101e3f91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3f94:;
  /* 101e3f94 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3f96 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3f9cu);
  /* 101e3f9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3f9f cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3fa4 jle 0x101e4034 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4034;
  /* 101e3faa push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3fac call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3fb2u);
  /* 101e3fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3fb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e3fb7 je 0x101e4034 */
  if (C.zf) goto L_101e4034;
  /* 101e3fb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e3fbb call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3fc1u);
  /* 101e3fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3fc4 cmp eax, 0xfa0 */
  { uint32_t _a=(EAX),_b=(0xfa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3fc9 jle 0x101e4034 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4034;
  /* 101e3fcb push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3fcd call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3fd3u);
  /* 101e3fd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3fd6 cmp eax, 0x2ee0 */
  { uint32_t _a=(EAX),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3fdb jle 0x101e3fee */
  if ((C.zf||C.sf!=C.of)) goto L_101e3fee;
  /* 101e3fdd push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101e3fe2 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e3fe4 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e3fe6 call 0x101e1f10 */
  push32(0x101e3febu); f_101e1f10();
  /* 101e3feb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e3fee:;
  /* 101e3fee push 2 */
  push32((uint32_t)(0x2u));
  /* 101e3ff0 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e3ff6u);
  /* 101e3ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e3ff9 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e3ffe jle 0x101e4011 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4011;
  /* 101e4000 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 101e4005 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e4007 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e4009 call 0x101e1f10 */
  push32(0x101e400eu); f_101e1f10();
  /* 101e400e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e4011:;
  /* 101e4011 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e4013 call dword ptr [0x101f0fcc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fcc))), 0x101e4019u);
  /* 101e4019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e401c cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4021 jle 0x101e4034 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4034;
  /* 101e4023 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 101e4028 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e402a push 3 */
  push32((uint32_t)(0x3u));
  /* 101e402c call 0x101e1f10 */
  push32(0x101e4031u); f_101e1f10();
  /* 101e4031 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e4034:;
  /* 101e4034 cmp esi, 0x186a0 */
  { uint32_t _a=(ESI),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e403a jle 0x101e404d */
  if ((C.zf||C.sf!=C.of)) goto L_101e404d;
  /* 101e403c push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101e4041 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e4043 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e4045 call 0x101e1f10 */
  push32(0x101e404au); f_101e1f10();
  /* 101e404a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e404d:;
  /* 101e404d cmp edi, 0xf4240 */
  { uint32_t _a=(EDI),_b=(0xf4240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4053 jle 0x101e4066 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4066;
  /* 101e4055 push 0x15f90 */
  push32((uint32_t)(0x15f90u));
  /* 101e405a push 1 */
  push32((uint32_t)(0x1u));
  /* 101e405c push 0 */
  push32((uint32_t)(0x0u));
  /* 101e405e call 0x101e1f10 */
  push32(0x101e4063u); f_101e1f10();
  /* 101e4063 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e4066:;
  /* 101e4066 cmp dword ptr [esp + 0x10], 0x12c */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e406e jge 0x101e40c2 */
  if ((C.sf==C.of)) goto L_101e40c2;
  /* 101e4070 cmp ebp, 0x2ee0 */
  { uint32_t _a=(EBP),_b=(0x2ee0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4076 jle 0x101e4083 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4083;
  /* 101e4078 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101e407d push 3 */
  push32((uint32_t)(0x3u));
  /* 101e407f push 5 */
  push32((uint32_t)(0x5u));
  /* 101e4081 jmp 0x101e40ba */
  goto L_101e40ba;
L_101e4083:;
  /* 101e4083 cmp ebx, 0xbb8 */
  { uint32_t _a=(EBX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4089 jle 0x101e4096 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4096;
  /* 101e408b push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101e4090 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e4092 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e4094 jmp 0x101e40ba */
  goto L_101e40ba;
L_101e4096:;
  /* 101e4096 cmp esi, 0x5dc */
  { uint32_t _a=(ESI),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e409c jle 0x101e40a9 */
  if ((C.zf||C.sf!=C.of)) goto L_101e40a9;
  /* 101e409e push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 101e40a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e40a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e40a7 jmp 0x101e40ba */
  goto L_101e40ba;
L_101e40a9:;
  /* 101e40a9 cmp edi, 0x5dc */
  { uint32_t _a=(EDI),_b=(0x5dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e40af jle 0x101e40c2 */
  if ((C.zf||C.sf!=C.of)) goto L_101e40c2;
  /* 101e40b1 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 101e40b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e40b8 push 0 */
  push32((uint32_t)(0x0u));
L_101e40ba:;
  /* 101e40ba call 0x101e1f10 */
  push32(0x101e40bfu); f_101e1f10();
  /* 101e40bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e40c2:;
  /* 101e40c2 push 0x101f0d60 */
  push32((uint32_t)(0x101f0d60u));
  /* 101e40c7 call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e40cdu);
  /* 101e40cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e40d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e40d2 jne 0x101e4110 */
  if (!C.zf) goto L_101e4110;
  /* 101e40d4 cmp ebx, 0x320 */
  { uint32_t _a=(EBX),_b=(0x320u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e40da jle 0x101e4110 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4110;
  /* 101e40dc cmp ebp, 0x2328 */
  { uint32_t _a=(EBP),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e40e2 jle 0x101e40f5 */
  if ((C.zf||C.sf!=C.of)) goto L_101e40f5;
  /* 101e40e4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101e40e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e40eb push 5 */
  push32((uint32_t)(0x5u));
  /* 101e40ed call 0x101e1f10 */
  push32(0x101e40f2u); f_101e1f10();
  /* 101e40f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e40f5:;
  /* 101e40f5 cmp dword ptr [esp + 0x14], 0x2328 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e40fd jle 0x101e4110 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4110;
  /* 101e40ff push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 101e4104 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e4106 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e4108 call 0x101e1f10 */
  push32(0x101e410du); f_101e1f10();
  /* 101e410d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e4110:;
  /* 101e4110 call dword ptr [0x101f0f90] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f90))), 0x101e4116u);
  /* 101e4116 mov ecx, dword ptr [eax*4 + 0x101f109c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x101f109c)));
  /* 101e411d pop ebp */
  EBP = (pop32());
  /* 101e411e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e4120 jne 0x101e4144 */
  if (!C.zf) goto L_101e4144;
  /* 101e4122 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 101e4127 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e4129 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e412b call 0x101e1f10 */
  push32(0x101e4130u); f_101e1f10();
  /* 101e4130 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4133 call dword ptr [0x101f0f90] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f90))), 0x101e4139u);
  /* 101e4139 mov dword ptr [eax*4 + 0x101f109c], 1 */
  w32((uint32_t)(EAX*4 + 0x101f109c), (0x1u));
L_101e4144:;
  /* 101e4144 call dword ptr [0x101f1000] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f1000))), 0x101e414au);
  /* 101e414a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e414c je 0x101e419f */
  if (C.zf) goto L_101e419f;
  /* 101e414e push 0x101f0c98 */
  push32((uint32_t)(0x101f0c98u));
  /* 101e4153 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e4159u);
  /* 101e4159 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e415c cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e415f jge 0x101e4173 */
  if ((C.sf==C.of)) goto L_101e4173;
  /* 101e4161 cmp dword ptr [esp + 0xc], 0x7d0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x7d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4169 jge 0x101e4173 */
  if ((C.sf==C.of)) goto L_101e4173;
  /* 101e416b push 2 */
  push32((uint32_t)(0x2u));
  /* 101e416d push 5 */
  push32((uint32_t)(0x5u));
  /* 101e416f push 0xc */
  push32((uint32_t)(0xcu));
  /* 101e4171 jmp 0x101e41a5 */
  goto L_101e41a5;
L_101e4173:;
  /* 101e4173 push 0x101f0b98 */
  push32((uint32_t)(0x101f0b98u));
  /* 101e4178 call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e417eu);
  /* 101e417e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4181 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e4183 je 0x101e4197 */
  if (C.zf) goto L_101e4197;
  /* 101e4185 cmp dword ptr [esp + 0xc], 0x61a8 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x61a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e418d jl 0x101e4197 */
  if ((C.sf!=C.of)) goto L_101e4197;
  /* 101e418f push 4 */
  push32((uint32_t)(0x4u));
  /* 101e4191 push 6 */
  push32((uint32_t)(0x6u));
  /* 101e4193 push 0xc */
  push32((uint32_t)(0xcu));
  /* 101e4195 jmp 0x101e41a5 */
  goto L_101e41a5;
L_101e4197:;
  /* 101e4197 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e4199 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e419b push 0xc */
  push32((uint32_t)(0xcu));
  /* 101e419d jmp 0x101e41a5 */
  goto L_101e41a5;
L_101e419f:;
  /* 101e419f push 5 */
  push32((uint32_t)(0x5u));
  /* 101e41a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e41a3 push 0 */
  push32((uint32_t)(0x0u));
L_101e41a5:;
  /* 101e41a5 call dword ptr [0x101f0fa4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fa4))), 0x101e41abu);
  /* 101e41ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e41ae push 0x101f0c98 */
  push32((uint32_t)(0x101f0c98u));
  /* 101e41b3 call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e41b9u);
  /* 101e41b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e41bb mov esi, eax */
  ESI = (EAX);
  /* 101e41bd call 0x101e2be0 */
  push32(0x101e41c2u); f_101e2be0();
  /* 101e41c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e41c4 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e41c6 call 0x101e2be0 */
  push32(0x101e41cbu); f_101e2be0();
  /* 101e41cb push 5 */
  push32((uint32_t)(0x5u));
  /* 101e41cd sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e41cf call 0x101e2be0 */
  push32(0x101e41d4u); f_101e2be0();
  /* 101e41d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e41d6 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e41d8 call 0x101e2bf0 */
  push32(0x101e41ddu); f_101e2bf0();
  /* 101e41dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e41e0 cmp esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e41e3 jle 0x101e41ef */
  if ((C.zf||C.sf!=C.of)) goto L_101e41ef;
  /* 101e41e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e41e7 call 0x101e2bf0 */
  push32(0x101e41ecu); f_101e2bf0();
  /* 101e41ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e41ef:;
  /* 101e41ef push 0xa */
  push32((uint32_t)(0xau));
  /* 101e41f1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e41f3 push 0x101f0d20 */
  push32((uint32_t)(0x101f0d20u));
  /* 101e41f8 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e41feu);
  /* 101e41fe push 0xa */
  push32((uint32_t)(0xau));
  /* 101e4200 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e4202 push 0x101f0d28 */
  push32((uint32_t)(0x101f0d28u));
  /* 101e4207 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e420du);
  /* 101e420d push 0xa */
  push32((uint32_t)(0xau));
  /* 101e420f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e4211 push 0x101ee548 */
  push32((uint32_t)(0x101ee548u));
  /* 101e4216 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e421cu);
  /* 101e421c push 0x101ee518 */
  push32((uint32_t)(0x101ee518u));
  /* 101e4221 call dword ptr [0x101f0fd4] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd4))), 0x101e4227u);
  /* 101e4227 push 0x101ee518 */
  push32((uint32_t)(0x101ee518u));
  /* 101e422c mov edi, eax */
  EDI = (EAX);
  /* 101e422e call dword ptr [0x101f0fd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fd0))), 0x101e4234u);
  /* 101e4234 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4237 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4239 jne 0x101e4277 */
  if (!C.zf) goto L_101e4277;
  /* 101e423b cmp esi, 0x28 */
  { uint32_t _a=(ESI),_b=(0x28u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e423e jle 0x101e4277 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4277;
  /* 101e4240 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e4242 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e4244 push 4 */
  push32((uint32_t)(0x4u));
  /* 101e4246 push 0x101ee518 */
  push32((uint32_t)(0x101ee518u));
  /* 101e424b call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e4251u);
  /* 101e4251 push 0x101f0cc0 */
  push32((uint32_t)(0x101f0cc0u));
  /* 101e4256 call dword ptr [0x101f0fe0] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fe0))), 0x101e425cu);
  /* 101e425c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e425f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e4261 je 0x101e4277 */
  if (C.zf) goto L_101e4277;
  /* 101e4263 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e4265 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e4267 push 6 */
  push32((uint32_t)(0x6u));
  /* 101e4269 push 0x101ee518 */
  push32((uint32_t)(0x101ee518u));
  /* 101e426e call dword ptr [0x101f0f94] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f94))), 0x101e4274u);
  /* 101e4274 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e4277:;
  /* 101e4277 push 0x101f0cc0 */
  push32((uint32_t)(0x101f0cc0u));
  /* 101e427c call dword ptr [0x101f0fdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0fdc))), 0x101e4282u);
  /* 101e4282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4285 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e4287 je 0x101e42e6 */
  if (C.zf) goto L_101e42e6;
  /* 101e4289 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e428b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e428d push 0x101f0dd8 */
  push32((uint32_t)(0x101f0dd8u));
  /* 101e4292 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e4298u);
  /* 101e4298 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e429a push 0x28 */
  push32((uint32_t)(0x28u));
  /* 101e429c push 0x101f0dc0 */
  push32((uint32_t)(0x101f0dc0u));
  /* 101e42a1 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e42a7u);
  /* 101e42a7 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e42a9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 101e42ab push 0x101f0dc8 */
  push32((uint32_t)(0x101f0dc8u));
  /* 101e42b0 call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e42b6u);
  /* 101e42b6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e42b8 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 101e42ba push 0x101f0db0 */
  push32((uint32_t)(0x101f0db0u));
  /* 101e42bf call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e42c5u);
  /* 101e42c5 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e42c7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 101e42c9 push 0x101f0db8 */
  push32((uint32_t)(0x101f0db8u));
  /* 101e42ce call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e42d4u);
  /* 101e42d4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 101e42d6 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e42d8 push 0x101f0da8 */
  push32((uint32_t)(0x101f0da8u));
  /* 101e42dd call dword ptr [0x101f0f98] */
  call_ind((uint32_t)(r32((uint32_t)(0x101f0f98))), 0x101e42e3u);
  /* 101e42e3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e42e6:;
  /* 101e42e6 pop edi */
  EDI = (pop32());
  /* 101e42e7 pop esi */
  ESI = (pop32());
  /* 101e42e8 pop ebx */
  EBX = (pop32());
  /* 101e42e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e42ec ret  */
  ESPCHK(0x101e35a0u, _esp0);
  ESP += 4; return;
}

/* ProcessAI @ 0x101e42f0 (153 bytes, 34 insns) */
void f_101e42f0(void) {
  FTRACE(0x101e42f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e42f0 call 0x101e1060 */
  push32(0x101e42f5u); f_101e1060();
  /* 101e42f5 push 0x101ec180 */
  push32((uint32_t)(0x101ec180u));
  /* 101e42fa call 0x101e2bd0 */
  push32(0x101e42ffu); f_101e2bd0();
  /* 101e42ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4302 call 0x101e2b90 */
  push32(0x101e4307u); f_101e2b90();
  /* 101e4307 mov dword ptr [0x101f0b20], eax */
  w32((uint32_t)(0x101f0b20), (EAX));
  /* 101e430c call 0x101e2190 */
  push32(0x101e4311u); f_101e2190();
  /* 101e4311 mov dword ptr [0x101f0e40], eax */
  w32((uint32_t)(0x101f0e40), (EAX));
  /* 101e4316 mov eax, dword ptr [0x101f10e4] */
  EAX = (r32((uint32_t)(0x101f10e4)));
  /* 101e431b sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e431e je 0x101e434a */
  if (C.zf) goto L_101e434a;
  /* 101e4320 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4321 je 0x101e4334 */
  if (C.zf) goto L_101e4334;
  /* 101e4323 mov eax, 0x64 */
  EAX = (0x64u);
  /* 101e4328 mov dword ptr [0x101f10e4], eax */
  w32((uint32_t)(0x101f10e4), (EAX));
  /* 101e432d mov dword ptr [0x101ec380], eax */
  w32((uint32_t)(0x101ec380), (EAX));
  /* 101e4332 jmp 0x101e435e */
  goto L_101e435e;
L_101e4334:;
  /* 101e4334 mov dword ptr [0x101f10e4], 0x1e */
  w32((uint32_t)(0x101f10e4), (0x1eu));
  /* 101e433e mov dword ptr [0x101ec380], 0x32 */
  w32((uint32_t)(0x101ec380), (0x32u));
  /* 101e4348 jmp 0x101e435e */
  goto L_101e435e;
L_101e434a:;
  /* 101e434a mov dword ptr [0x101f10e4], 0xa */
  w32((uint32_t)(0x101f10e4), (0xau));
  /* 101e4354 mov dword ptr [0x101ec380], 0x1e */
  w32((uint32_t)(0x101ec380), (0x1eu));
L_101e435e:;
  /* 101e435e call 0x101e21a0 */
  push32(0x101e4363u); f_101e21a0();
  /* 101e4363 mov dword ptr [0x101ee4f0], eax */
  w32((uint32_t)(0x101ee4f0), (EAX));
  /* 101e4368 mov eax, dword ptr [0x101f0b20] */
  EAX = (r32((uint32_t)(0x101f0b20)));
  /* 101e436d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e436f je 0x101e437f */
  if (C.zf) goto L_101e437f;
  /* 101e4371 jle 0x101e4384 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4384;
  /* 101e4373 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4376 jg 0x101e4384 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e4384;
  /* 101e4378 call 0x101e21b0 */
  push32(0x101e437du); f_101e21b0();
  /* 101e437d jmp 0x101e4384 */
  goto L_101e4384;
L_101e437f:;
  /* 101e437f call 0x101e35a0 */
  push32(0x101e4384u); f_101e35a0();
L_101e4384:;
  /* 101e4384 jmp 0x101e1000 */
  f_101e1000(); return;
}

/* OnInit @ 0x101e4390 (5 bytes, 1 insns) */
void f_101e4390(void) {
  FTRACE(0x101e4390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4390 jmp 0x101e11e0 */
  f_101e11e0(); return;
}

/* FUN_100043a0 @ 0x101e43a0 (23 bytes, 6 insns) */
void f_101e43a0(void) {
  FTRACE(0x101e43a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e43a0 call 0x101e43b8 */
  push32(0x101e43a5u); f_101e43b8();
  /* 101e43a5 call 0x101e4662 */
  push32(0x101e43aau); f_101e4662();
  /* 101e43aa mov dword ptr [0x101f10ec], eax */
  w32((uint32_t)(0x101f10ec), (EAX));
  /* 101e43af call 0x101e4612 */
  push32(0x101e43b4u); f_101e4612();
  /* 101e43b4 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 101e43b6 ret  */
  ESPCHK(0x101e43a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b8 @ 0x101e43b8 (56 bytes, 8 insns) */
void f_101e43b8(void) {
  FTRACE(0x101e43b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e43b8 mov eax, 0x101e4a3b */
  EAX = (0x101e4a3bu);
  /* 101e43bd mov dword ptr [0x101ed38c], 0x101e46e5 */
  w32((uint32_t)(0x101ed38c), (0x101e46e5u));
  /* 101e43c7 mov dword ptr [0x101ed388], eax */
  w32((uint32_t)(0x101ed388), (EAX));
  /* 101e43cc mov dword ptr [0x101ed390], 0x101e474b */
  w32((uint32_t)(0x101ed390), (0x101e474bu));
  /* 101e43d6 mov dword ptr [0x101ed394], 0x101e468b */
  w32((uint32_t)(0x101ed394), (0x101e468bu));
  /* 101e43e0 mov dword ptr [0x101ed398], 0x101e4733 */
  w32((uint32_t)(0x101ed398), (0x101e4733u));
  /* 101e43ea mov dword ptr [0x101ed39c], eax */
  w32((uint32_t)(0x101ed39c), (EAX));
  /* 101e43ef ret  */
  ESPCHK(0x101e43b8u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x101e43f0 (39 bytes, 16 insns) */
void f_101e43f0(void) {
  FTRACE(0x101e43f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e43f0 push ebp */
  push32((uint32_t)(EBP));
  /* 101e43f1 mov ebp, esp */
  EBP = (ESP);
  /* 101e43f3 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e43f6 wait  */
  /* wait (no observable integer/reg state) */
  /* 101e43f7 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 101e43fa wait  */
  /* wait (no observable integer/reg state) */
  /* 101e43fb mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 101e43ff or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 101e4402 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 101e4406 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 101e4409 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 101e440c fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 101e440f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e4412 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e4415 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e4416 ret  */
  ESPCHK(0x101e43f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004417 @ 0x101e4417 (82 bytes, 32 insns) */
void f_101e4417(void) {
  FTRACE(0x101e4417u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4417 push ebp */
  push32((uint32_t)(EBP));
  /* 101e4418 mov ebp, esp */
  EBP = (ESP);
  /* 101e441a sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e441d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e4420 push esi */
  push32((uint32_t)(ESI));
  /* 101e4421 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 101e4424 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101e4427 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e442a mov dword ptr [ebp - 0x14], 0x42 */
  w32((uint32_t)(EBP + -0x14), (0x42u));
  /* 101e4431 push eax */
  push32((uint32_t)(EAX));
  /* 101e4432 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101e4435 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e4438 mov dword ptr [ebp - 0x1c], 0x7fffffff */
  w32((uint32_t)(EBP + -0x1c), (0x7fffffffu));
  /* 101e443f push eax */
  push32((uint32_t)(EAX));
  /* 101e4440 call 0x101e4bc9 */
  push32(0x101e4445u); f_101e4bc9();
  /* 101e4445 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4448 dec dword ptr [ebp - 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))-1; w32((uint32_t)(EBP + -0x1c), (_r)); fl_dec(_r,32); }
  /* 101e444b mov esi, eax */
  ESI = (EAX);
  /* 101e444d js 0x101e4457 */
  if (C.sf) goto L_101e4457;
  /* 101e444f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 101e4452 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101e4455 jmp 0x101e4464 */
  goto L_101e4464;
L_101e4457:;
  /* 101e4457 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 101e445a push eax */
  push32((uint32_t)(EAX));
  /* 101e445b push 0 */
  push32((uint32_t)(0x0u));
  /* 101e445d call 0x101e4ab1 */
  push32(0x101e4462u); f_101e4ab1();
  /* 101e4462 pop ecx */
  ECX = (pop32());
  /* 101e4463 pop ecx */
  ECX = (pop32());
L_101e4464:;
  /* 101e4464 mov eax, esi */
  EAX = (ESI);
  /* 101e4466 pop esi */
  ESI = (pop32());
  /* 101e4467 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e4468 ret  */
  ESPCHK(0x101e4417u, _esp0);
  ESP += 4; return;
}

/* FUN_10004469 @ 0x101e4469 (217 bytes, 57 insns) */
void f_101e4469(void) {
  FTRACE(0x101e4469u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4469 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e446d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4470 jne 0x101e44fe */
  if (!C.zf) goto L_101e44fe;
  /* 101e4476 call dword ptr [0x101eb014] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb014))), 0x101e447cu);
  /* 101e447c push 1 */
  push32((uint32_t)(0x1u));
  /* 101e447e mov dword ptr [0x101f1108], eax */
  w32((uint32_t)(0x101f1108), (EAX));
  /* 101e4483 call 0x101e5cc5 */
  push32(0x101e4488u); f_101e5cc5();
  /* 101e4488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e448a pop ecx */
  ECX = (pop32());
  /* 101e448b je 0x101e44c9 */
  if (C.zf) goto L_101e44c9;
  /* 101e448d mov eax, dword ptr [0x101f1108] */
  EAX = (r32((uint32_t)(0x101f1108)));
  /* 101e4492 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e4494 mov cl, byte ptr [0x101f1109] */
  CL = (r8((uint32_t)(0x101f1109)));
  /* 101e449a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e449f shr dword ptr [0x101f1108], 0x10 */
  w32((uint32_t)(0x101f1108), (sh_shr((uint32_t)(r32((uint32_t)(0x101f1108))), (0x10u)&0x1f, 32)));
  /* 101e44a6 mov dword ptr [0x101f1110], eax */
  w32((uint32_t)(0x101f1110), (EAX));
  /* 101e44ab mov dword ptr [0x101f1114], ecx */
  w32((uint32_t)(0x101f1114), (ECX));
  /* 101e44b1 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101e44b4 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e44b6 mov dword ptr [0x101f110c], eax */
  w32((uint32_t)(0x101f110c), (EAX));
  /* 101e44bb call 0x101e54f1 */
  push32(0x101e44c0u); f_101e54f1();
  /* 101e44c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e44c2 jne 0x101e44cd */
  if (!C.zf) goto L_101e44cd;
  /* 101e44c4 call 0x101e5d01 */
  push32(0x101e44c9u); f_101e5d01();
L_101e44c9:;
  /* 101e44c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e44cb jmp 0x101e453f */
  goto L_101e453f;
L_101e44cd:;
  /* 101e44cd call dword ptr [0x101eb010] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb010))), 0x101e44d3u);
  /* 101e44d3 mov dword ptr [0x101f27f4], eax */
  w32((uint32_t)(0x101f27f4), (EAX));
  /* 101e44d8 call 0x101e5b93 */
  push32(0x101e44ddu); f_101e5b93();
  /* 101e44dd mov dword ptr [0x101f10f4], eax */
  w32((uint32_t)(0x101f10f4), (EAX));
  /* 101e44e2 call 0x101e567d */
  push32(0x101e44e7u); f_101e567d();
  /* 101e44e7 call 0x101e5946 */
  push32(0x101e44ecu); f_101e5946();
  /* 101e44ec call 0x101e588d */
  push32(0x101e44f1u); f_101e588d();
  /* 101e44f1 call 0x101e53d3 */
  push32(0x101e44f6u); f_101e53d3();
  /* 101e44f6 inc dword ptr [0x101f10f0] */
  { uint32_t _r=(r32((uint32_t)(0x101f10f0)))+1; w32((uint32_t)(0x101f10f0), (_r)); fl_inc(_r,32); }
  /* 101e44fc jmp 0x101e453c */
  goto L_101e453c;
L_101e44fe:;
  /* 101e44fe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e4500 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4502 jne 0x101e4530 */
  if (!C.zf) goto L_101e4530;
  /* 101e4504 cmp dword ptr [0x101f10f0], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101f10f0))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e450a jle 0x101e44c9 */
  if ((C.zf||C.sf!=C.of)) goto L_101e44c9;
  /* 101e450c dec dword ptr [0x101f10f0] */
  { uint32_t _r=(r32((uint32_t)(0x101f10f0)))-1; w32((uint32_t)(0x101f10f0), (_r)); fl_dec(_r,32); }
  /* 101e4512 cmp dword ptr [0x101f1140], ecx */
  { uint32_t _a=(r32((uint32_t)(0x101f1140))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4518 jne 0x101e451f */
  if (!C.zf) goto L_101e451f;
  /* 101e451a call 0x101e5411 */
  push32(0x101e451fu); f_101e5411();
L_101e451f:;
  /* 101e451f call 0x101e5839 */
  push32(0x101e4524u); f_101e5839();
  /* 101e4524 call 0x101e5545 */
  push32(0x101e4529u); f_101e5545();
  /* 101e4529 call 0x101e5d01 */
  push32(0x101e452eu); f_101e5d01();
  /* 101e452e jmp 0x101e453c */
  goto L_101e453c;
L_101e4530:;
  /* 101e4530 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4533 jne 0x101e453c */
  if (!C.zf) goto L_101e453c;
  /* 101e4535 push ecx */
  push32((uint32_t)(ECX));
  /* 101e4536 call 0x101e55dd */
  push32(0x101e453bu); f_101e55dd();
  /* 101e453b pop ecx */
  ECX = (pop32());
L_101e453c:;
  /* 101e453c push 1 */
  push32((uint32_t)(0x1u));
  /* 101e453e pop eax */
  EAX = (pop32());
L_101e453f:;
  /* 101e453f ret 0xc */
  ESPCHK(0x101e4469u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x101e4542 (157 bytes, 73 insns) */
void f_101e4542(void) {
  FTRACE(0x101e4542u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4542 push ebp */
  push32((uint32_t)(EBP));
  /* 101e4543 mov ebp, esp */
  EBP = (ESP);
  /* 101e4545 push ebx */
  push32((uint32_t)(EBX));
  /* 101e4546 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e4549 push esi */
  push32((uint32_t)(ESI));
  /* 101e454a mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e454d push edi */
  push32((uint32_t)(EDI));
  /* 101e454e mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e4551 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e4553 jne 0x101e455e */
  if (!C.zf) goto L_101e455e;
  /* 101e4555 cmp dword ptr [0x101f10f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101f10f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e455c jmp 0x101e4584 */
  goto L_101e4584;
L_101e455e:;
  /* 101e455e cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4561 je 0x101e4568 */
  if (C.zf) goto L_101e4568;
  /* 101e4563 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4566 jne 0x101e458a */
  if (!C.zf) goto L_101e458a;
L_101e4568:;
  /* 101e4568 mov eax, dword ptr [0x101f27f8] */
  EAX = (r32((uint32_t)(0x101f27f8)));
  /* 101e456d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e456f je 0x101e457a */
  if (C.zf) goto L_101e457a;
  /* 101e4571 push edi */
  push32((uint32_t)(EDI));
  /* 101e4572 push esi */
  push32((uint32_t)(ESI));
  /* 101e4573 push ebx */
  push32((uint32_t)(EBX));
  /* 101e4574 call eax */
  call_ind((uint32_t)(EAX), 0x101e4576u);
  /* 101e4576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e4578 je 0x101e4586 */
  if (C.zf) goto L_101e4586;
L_101e457a:;
  /* 101e457a push edi */
  push32((uint32_t)(EDI));
  /* 101e457b push esi */
  push32((uint32_t)(ESI));
  /* 101e457c push ebx */
  push32((uint32_t)(EBX));
  /* 101e457d call 0x101e4469 */
  push32(0x101e4582u); f_101e4469();
  /* 101e4582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_101e4584:;
  /* 101e4584 jne 0x101e458a */
  if (!C.zf) goto L_101e458a;
L_101e4586:;
  /* 101e4586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e4588 jmp 0x101e45d8 */
  goto L_101e45d8;
L_101e458a:;
  /* 101e458a push edi */
  push32((uint32_t)(EDI));
  /* 101e458b push esi */
  push32((uint32_t)(ESI));
  /* 101e458c push ebx */
  push32((uint32_t)(EBX));
  /* 101e458d call 0x101e2c60 */
  push32(0x101e4592u); f_101e2c60();
  /* 101e4592 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4595 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101e4598 jne 0x101e45a6 */
  if (!C.zf) goto L_101e45a6;
  /* 101e459a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e459c jne 0x101e45d5 */
  if (!C.zf) goto L_101e45d5;
  /* 101e459e push edi */
  push32((uint32_t)(EDI));
  /* 101e459f push eax */
  push32((uint32_t)(EAX));
  /* 101e45a0 push ebx */
  push32((uint32_t)(EBX));
  /* 101e45a1 call 0x101e4469 */
  push32(0x101e45a6u); f_101e4469();
L_101e45a6:;
  /* 101e45a6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e45a8 je 0x101e45af */
  if (C.zf) goto L_101e45af;
  /* 101e45aa cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e45ad jne 0x101e45d5 */
  if (!C.zf) goto L_101e45d5;
L_101e45af:;
  /* 101e45af push edi */
  push32((uint32_t)(EDI));
  /* 101e45b0 push esi */
  push32((uint32_t)(ESI));
  /* 101e45b1 push ebx */
  push32((uint32_t)(EBX));
  /* 101e45b2 call 0x101e4469 */
  push32(0x101e45b7u); f_101e4469();
  /* 101e45b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e45b9 jne 0x101e45be */
  if (!C.zf) goto L_101e45be;
  /* 101e45bb and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_101e45be:;
  /* 101e45be cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e45c2 je 0x101e45d5 */
  if (C.zf) goto L_101e45d5;
  /* 101e45c4 mov eax, dword ptr [0x101f27f8] */
  EAX = (r32((uint32_t)(0x101f27f8)));
  /* 101e45c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e45cb je 0x101e45d5 */
  if (C.zf) goto L_101e45d5;
  /* 101e45cd push edi */
  push32((uint32_t)(EDI));
  /* 101e45ce push esi */
  push32((uint32_t)(ESI));
  /* 101e45cf push ebx */
  push32((uint32_t)(EBX));
  /* 101e45d0 call eax */
  call_ind((uint32_t)(EAX), 0x101e45d2u);
  /* 101e45d2 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101e45d5:;
  /* 101e45d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101e45d8:;
  /* 101e45d8 pop edi */
  EDI = (pop32());
  /* 101e45d9 pop esi */
  ESI = (pop32());
  /* 101e45da pop ebx */
  EBX = (pop32());
  /* 101e45db pop ebp */
  EBP = (pop32());
  /* 101e45dc ret 0xc */
  ESPCHK(0x101e4542u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x101e45df (48 bytes, 15 insns) */
void f_101e45df(void) {
  FTRACE(0x101e45dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e45df mov eax, dword ptr [0x101f10fc] */
  EAX = (r32((uint32_t)(0x101f10fc)));
  /* 101e45e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e45e7 je 0x101e45f6 */
  if (C.zf) goto L_101e45f6;
  /* 101e45e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e45eb jne 0x101e45fb */
  if (!C.zf) goto L_101e45fb;
  /* 101e45ed cmp dword ptr [0x101f1100], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101f1100))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e45f4 jne 0x101e45fb */
  if (!C.zf) goto L_101e45fb;
L_101e45f6:;
  /* 101e45f6 call 0x101e5d76 */
  push32(0x101e45fbu); f_101e5d76();
L_101e45fb:;
  /* 101e45fb push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 101e45ff call 0x101e5daf */
  push32(0x101e4604u); f_101e5daf();
  /* 101e4604 push 0xff */
  push32((uint32_t)(0xffu));
  /* 101e4609 call dword ptr [0x101ed384] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ed384))), 0x101e460fu);
  /* 101e460f pop ecx */
  ECX = (pop32());
  /* 101e4610 pop ecx */
  ECX = (pop32());
  /* 101e4611 ret  */
  ESPCHK(0x101e45dfu, _esp0);
  ESP += 4; return;
}

/* FUN_10004612 @ 0x101e4612 (18 bytes, 6 insns) */
void f_101e4612(void) {
  FTRACE(0x101e4612u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4612 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 101e4617 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 101e461c call 0x101e5f37 */
  push32(0x101e4621u); f_101e5f37();
  /* 101e4621 pop ecx */
  ECX = (pop32());
  /* 101e4622 pop ecx */
  ECX = (pop32());
  /* 101e4623 ret  */
  ESPCHK(0x101e4612u, _esp0);
  ESP += 4; return;
}

/* FUN_10004624 @ 0x101e4624 (62 bytes, 24 insns) */
void f_101e4624(void) {
  FTRACE(0x101e4624u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4624 push ebp */
  push32((uint32_t)(EBP));
  /* 101e4625 mov ebp, esp */
  EBP = (ESP);
  /* 101e4627 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e462a fld qword ptr [0x101eb0f0] */
  fpu_push(rf64((uint32_t)(0x101eb0f0)));
  /* 101e4630 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 101e4633 fld qword ptr [0x101eb0e8] */
  fpu_push(rf64((uint32_t)(0x101eb0e8)));
  /* 101e4639 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 101e463c fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 101e463f fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 101e4642 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 101e4645 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 101e4648 fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 101e464b fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 101e464e fcomp qword ptr [0x101eb0e0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x101eb0e0)));
  (void)fpu_pop();
  /* 101e4654 fnstsw ax */
  AX = fpu_status();
  /* 101e4656 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 101e4657 jbe 0x101e465e */
  if ((C.cf||C.zf)) goto L_101e465e;
  /* 101e4659 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e465b pop eax */
  EAX = (pop32());
  /* 101e465c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e465d ret  */
  ESPCHK(0x101e4624u, _esp0);
  ESP += 4; return;
L_101e465e:;
  /* 101e465e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e4660 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e4661 ret  */
  ESPCHK(0x101e4624u, _esp0);
  ESP += 4; return;
}

/* FUN_10004662 @ 0x101e4662 (41 bytes, 13 insns) */
void f_101e4662(void) {
  FTRACE(0x101e4662u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4662 push 0x101eb114 */
  push32((uint32_t)(0x101eb114u));
  /* 101e4667 call dword ptr [0x101eb004] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb004))), 0x101e466du);
  /* 101e466d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e466f je 0x101e4686 */
  if (C.zf) goto L_101e4686;
  /* 101e4671 push 0x101eb0f8 */
  push32((uint32_t)(0x101eb0f8u));
  /* 101e4676 push eax */
  push32((uint32_t)(EAX));
  /* 101e4677 call dword ptr [0x101eb088] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb088))), 0x101e467du);
  /* 101e467d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e467f je 0x101e4686 */
  if (C.zf) goto L_101e4686;
  /* 101e4681 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e4683 call eax */
  call_ind((uint32_t)(EAX), 0x101e4685u);
  /* 101e4685 ret  */
  ESPCHK(0x101e4662u, _esp0);
  ESP += 4; return;
L_101e4686:;
  /* 101e4686 jmp 0x101e4624 */
  f_101e4624(); return;
}

/* FUN_1000468b @ 0x101e468b (90 bytes, 37 insns) */
void f_101e468b(void) {
  FTRACE(0x101e468bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e468b push esi */
  push32((uint32_t)(ESI));
  /* 101e468c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e4690 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101e4693 push eax */
  push32((uint32_t)(EAX));
  /* 101e4694 call 0x101e60dd */
  push32(0x101e4699u); f_101e60dd();
  /* 101e4699 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e469c pop ecx */
  ECX = (pop32());
  /* 101e469d je 0x101e46cb */
  if (C.zf) goto L_101e46cb;
L_101e469f:;
  /* 101e469f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e46a0 cmp dword ptr [0x101ed468], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101ed468))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e46a7 jle 0x101e46b8 */
  if ((C.zf||C.sf!=C.of)) goto L_101e46b8;
  /* 101e46a9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101e46ac push 4 */
  push32((uint32_t)(0x4u));
  /* 101e46ae push eax */
  push32((uint32_t)(EAX));
  /* 101e46af call 0x101e6068 */
  push32(0x101e46b4u); f_101e6068();
  /* 101e46b4 pop ecx */
  ECX = (pop32());
  /* 101e46b5 pop ecx */
  ECX = (pop32());
  /* 101e46b6 jmp 0x101e46c7 */
  goto L_101e46c7;
L_101e46b8:;
  /* 101e46b8 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101e46bb mov ecx, dword ptr [0x101ed474] */
  ECX = (r32((uint32_t)(0x101ed474)));
  /* 101e46c1 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 101e46c4 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_101e46c7:;
  /* 101e46c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e46c9 jne 0x101e469f */
  if (!C.zf) goto L_101e469f;
L_101e46cb:;
  /* 101e46cb mov cl, byte ptr [0x101ed46c] */
  CL = (r8((uint32_t)(0x101ed46c)));
  /* 101e46d1 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e46d3 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 101e46d5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101e46d6:;
  /* 101e46d6 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 101e46d8 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 101e46da mov al, cl */
  AL = (CL);
  /* 101e46dc mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 101e46de inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e46df test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 101e46e1 jne 0x101e46d6 */
  if (!C.zf) goto L_101e46d6;
  /* 101e46e3 pop esi */
  ESI = (pop32());
  /* 101e46e4 ret  */
  ESPCHK(0x101e468bu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x101e474b (62 bytes, 29 insns) */
void f_101e474b(void) {
  FTRACE(0x101e474bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e474b push ebp */
  push32((uint32_t)(EBP));
  /* 101e474c mov ebp, esp */
  EBP = (ESP);
  /* 101e474e push ecx */
  push32((uint32_t)(ECX));
  /* 101e474f push ecx */
  push32((uint32_t)(ECX));
  /* 101e4750 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4754 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101e4757 je 0x101e4774 */
  if (C.zf) goto L_101e4774;
  /* 101e4759 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101e475c push eax */
  push32((uint32_t)(EAX));
  /* 101e475d call 0x101e65a9 */
  push32(0x101e4762u); f_101e65a9();
  /* 101e4762 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e4765 pop ecx */
  ECX = (pop32());
  /* 101e4766 pop ecx */
  ECX = (pop32());
  /* 101e4767 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e476a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101e476c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e476f mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101e4772 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e4773 ret  */
  ESPCHK(0x101e474bu, _esp0);
  ESP += 4; return;
L_101e4774:;
  /* 101e4774 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e4777 push eax */
  push32((uint32_t)(EAX));
  /* 101e4778 call 0x101e65d6 */
  push32(0x101e477du); f_101e65d6();
  /* 101e477d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e4780 pop ecx */
  ECX = (pop32());
  /* 101e4781 pop ecx */
  ECX = (pop32());
  /* 101e4782 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e4785 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101e4787 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e4788 ret  */
  ESPCHK(0x101e474bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004789 @ 0x101e4789 (97 bytes, 42 insns) */
void f_101e4789(void) {
  FTRACE(0x101e4789u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4789 push ebp */
  push32((uint32_t)(EBP));
  /* 101e478a mov ebp, esp */
  EBP = (ESP);
  /* 101e478c sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e478f lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101e4792 push esi */
  push32((uint32_t)(ESI));
  /* 101e4793 push eax */
  push32((uint32_t)(EAX));
  /* 101e4794 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e4797 push eax */
  push32((uint32_t)(EAX));
  /* 101e4798 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e479b push ecx */
  push32((uint32_t)(ECX));
  /* 101e479c push ecx */
  push32((uint32_t)(ECX));
  /* 101e479d fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 101e479f fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 101e47a2 call 0x101e667a */
  push32(0x101e47a7u); f_101e667a();
  /* 101e47a7 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e47aa lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e47ad push eax */
  push32((uint32_t)(EAX));
  /* 101e47ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e47b1 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 101e47b4 push eax */
  push32((uint32_t)(EAX));
  /* 101e47b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e47b7 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e47bb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101e47be xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e47c0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e47c2 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 101e47c5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e47c7 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e47c9 push ecx */
  push32((uint32_t)(ECX));
  /* 101e47ca call 0x101e6603 */
  push32(0x101e47cfu); f_101e6603();
  /* 101e47cf lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e47d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e47d4 push eax */
  push32((uint32_t)(EAX));
  /* 101e47d5 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e47d8 push esi */
  push32((uint32_t)(ESI));
  /* 101e47d9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e47dc call 0x101e47ea */
  push32(0x101e47e1u); f_101e47ea();
  /* 101e47e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e47e4 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e47e7 pop esi */
  ESI = (pop32());
  /* 101e47e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e47e9 ret  */
  ESPCHK(0x101e4789u, _esp0);
  ESP += 4; return;
}

/* FUN_100047ea @ 0x101e47ea (194 bytes, 91 insns) */
void f_101e47ea(void) {
  FTRACE(0x101e47eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e47ea push ebp */
  push32((uint32_t)(EBP));
  /* 101e47eb mov ebp, esp */
  EBP = (ESP);
  /* 101e47ed push ebx */
  push32((uint32_t)(EBX));
  /* 101e47ee xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e47f0 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e47f3 push esi */
  push32((uint32_t)(ESI));
  /* 101e47f4 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 101e47f7 push edi */
  push32((uint32_t)(EDI));
  /* 101e47f8 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e47fb je 0x101e4818 */
  if (C.zf) goto L_101e4818;
  /* 101e47fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e47ff cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4802 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 101e4805 push eax */
  push32((uint32_t)(EAX));
  /* 101e4806 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e4808 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e480b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101e480e add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4810 push eax */
  push32((uint32_t)(EAX));
  /* 101e4811 call 0x101e4a8c */
  push32(0x101e4816u); f_101e4a8c();
  /* 101e4816 pop ecx */
  ECX = (pop32());
  /* 101e4817 pop ecx */
  ECX = (pop32());
L_101e4818:;
  /* 101e4818 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e481b mov eax, edi */
  EAX = (EDI);
  /* 101e481d jne 0x101e4825 */
  if (!C.zf) goto L_101e4825;
  /* 101e481f mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 101e4822 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_101e4825:;
  /* 101e4825 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4828 jle 0x101e483c */
  if ((C.zf||C.sf!=C.of)) goto L_101e483c;
  /* 101e482a mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101e482d lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101e4830 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101e4832 mov eax, ecx */
  EAX = (ECX);
  /* 101e4834 mov cl, byte ptr [0x101ed46c] */
  CL = (r8((uint32_t)(0x101ed46c)));
  /* 101e483a mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_101e483c:;
  /* 101e483c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e483e cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4841 push 0x101eb128 */
  push32((uint32_t)(0x101eb128u));
  /* 101e4846 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 101e4849 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e484b add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e484e push ecx */
  push32((uint32_t)(ECX));
  /* 101e484f call 0x101e6790 */
  push32(0x101e4854u); f_101e6790();
  /* 101e4854 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4857 pop ecx */
  ECX = (pop32());
  /* 101e4858 pop ecx */
  ECX = (pop32());
  /* 101e4859 mov ecx, eax */
  ECX = (EAX);
  /* 101e485b je 0x101e4860 */
  if (C.zf) goto L_101e4860;
  /* 101e485d mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_101e4860:;
  /* 101e4860 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101e4863 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e4864 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4867 je 0x101e48a5 */
  if (C.zf) goto L_101e48a5;
  /* 101e4869 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 101e486c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e486d jns 0x101e4874 */
  if (!C.sf) goto L_101e4874;
  /* 101e486f neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e4871 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_101e4874:;
  /* 101e4874 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e4875 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4878 jl 0x101e488b */
  if ((C.sf!=C.of)) goto L_101e488b;
  /* 101e487a mov eax, ebx */
  EAX = (EBX);
  /* 101e487c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 101e487e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e487f pop esi */
  ESI = (pop32());
  /* 101e4880 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e4882 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 101e4884 mov eax, ebx */
  EAX = (EBX);
  /* 101e4886 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e4887 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e4889 mov ebx, edx */
  EBX = (EDX);
L_101e488b:;
  /* 101e488b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e488c cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e488f jl 0x101e48a2 */
  if ((C.sf!=C.of)) goto L_101e48a2;
  /* 101e4891 mov eax, ebx */
  EAX = (EBX);
  /* 101e4893 push 0xa */
  push32((uint32_t)(0xau));
  /* 101e4895 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e4896 pop esi */
  ESI = (pop32());
  /* 101e4897 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e4899 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 101e489b mov eax, ebx */
  EAX = (EBX);
  /* 101e489d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e489e idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e48a0 mov ebx, edx */
  EBX = (EDX);
L_101e48a2:;
  /* 101e48a2 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_101e48a5:;
  /* 101e48a5 mov eax, edi */
  EAX = (EDI);
  /* 101e48a7 pop edi */
  EDI = (pop32());
  /* 101e48a8 pop esi */
  ESI = (pop32());
  /* 101e48a9 pop ebx */
  EBX = (pop32());
  /* 101e48aa pop ebp */
  EBP = (pop32());
  /* 101e48ab ret  */
  ESPCHK(0x101e47eau, _esp0);
  ESP += 4; return;
}

/* FUN_100048ac @ 0x101e48ac (85 bytes, 37 insns) */
void f_101e48ac(void) {
  FTRACE(0x101e48acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e48ac push ebp */
  push32((uint32_t)(EBP));
  /* 101e48ad mov ebp, esp */
  EBP = (ESP);
  /* 101e48af sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e48b2 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101e48b5 push esi */
  push32((uint32_t)(ESI));
  /* 101e48b6 push eax */
  push32((uint32_t)(EAX));
  /* 101e48b7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e48ba push eax */
  push32((uint32_t)(EAX));
  /* 101e48bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e48be push ecx */
  push32((uint32_t)(ECX));
  /* 101e48bf push ecx */
  push32((uint32_t)(ECX));
  /* 101e48c0 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 101e48c2 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 101e48c5 call 0x101e667a */
  push32(0x101e48cau); f_101e667a();
  /* 101e48ca mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e48cd lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e48d0 push eax */
  push32((uint32_t)(EAX));
  /* 101e48d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e48d4 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e48d6 push eax */
  push32((uint32_t)(EAX));
  /* 101e48d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e48d9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e48dd sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101e48e0 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e48e3 push eax */
  push32((uint32_t)(EAX));
  /* 101e48e4 call 0x101e6603 */
  push32(0x101e48e9u); f_101e6603();
  /* 101e48e9 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e48ec push 0 */
  push32((uint32_t)(0x0u));
  /* 101e48ee push eax */
  push32((uint32_t)(EAX));
  /* 101e48ef push esi */
  push32((uint32_t)(ESI));
  /* 101e48f0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e48f3 call 0x101e4901 */
  push32(0x101e48f8u); f_101e4901();
  /* 101e48f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e48fb add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e48fe pop esi */
  ESI = (pop32());
  /* 101e48ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e4900 ret  */
  ESPCHK(0x101e48acu, _esp0);
  ESP += 4; return;
}

/* FUN_10004901 @ 0x101e4901 (167 bytes, 73 insns) */
void f_101e4901(void) {
  FTRACE(0x101e4901u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4901 push ebp */
  push32((uint32_t)(EBP));
  /* 101e4902 mov ebp, esp */
  EBP = (ESP);
  /* 101e4904 push ebx */
  push32((uint32_t)(EBX));
  /* 101e4905 push esi */
  push32((uint32_t)(ESI));
  /* 101e4906 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e4909 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e490c push edi */
  push32((uint32_t)(EDI));
  /* 101e490d mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101e4910 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4911 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4915 je 0x101e4931 */
  if (C.zf) goto L_101e4931;
  /* 101e4917 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e491a jne 0x101e4931 */
  if (!C.zf) goto L_101e4931;
  /* 101e491c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e491e cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4921 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 101e4924 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4926 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4928 mov eax, ecx */
  EAX = (ECX);
  /* 101e492a mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101e492d and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_101e4931:;
  /* 101e4931 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4934 mov edi, ebx */
  EDI = (EBX);
  /* 101e4936 jne 0x101e493e */
  if (!C.zf) goto L_101e493e;
  /* 101e4938 mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 101e493b lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_101e493e:;
  /* 101e493e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 101e4941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e4943 jg 0x101e4955 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e4955;
  /* 101e4945 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e4947 push edi */
  push32((uint32_t)(EDI));
  /* 101e4948 call 0x101e4a8c */
  push32(0x101e494du); f_101e4a8c();
  /* 101e494d pop ecx */
  ECX = (pop32());
  /* 101e494e mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 101e4951 pop ecx */
  ECX = (pop32());
  /* 101e4952 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e4953 jmp 0x101e4957 */
  goto L_101e4957;
L_101e4955:;
  /* 101e4955 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101e4957:;
  /* 101e4957 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e495b jle 0x101e49a1 */
  if ((C.zf||C.sf!=C.of)) goto L_101e49a1;
  /* 101e495d push 1 */
  push32((uint32_t)(0x1u));
  /* 101e495f push edi */
  push32((uint32_t)(EDI));
  /* 101e4960 call 0x101e4a8c */
  push32(0x101e4965u); f_101e4a8c();
  /* 101e4965 mov al, byte ptr [0x101ed46c] */
  AL = (r8((uint32_t)(0x101ed46c)));
  /* 101e496a pop ecx */
  ECX = (pop32());
  /* 101e496b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e496d mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 101e4970 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e4971 pop ecx */
  ECX = (pop32());
  /* 101e4972 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e4974 jge 0x101e49a1 */
  if ((C.sf==C.of)) goto L_101e49a1;
  /* 101e4976 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e497a je 0x101e4980 */
  if (C.zf) goto L_101e4980;
  /* 101e497c neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 101e497e jmp 0x101e4987 */
  goto L_101e4987;
L_101e4980:;
  /* 101e4980 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 101e4982 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4985 jl 0x101e498a */
  if ((C.sf!=C.of)) goto L_101e498a;
L_101e4987:;
  /* 101e4987 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_101e498a:;
  /* 101e498a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e498d push edi */
  push32((uint32_t)(EDI));
  /* 101e498e call 0x101e4a8c */
  push32(0x101e4993u); f_101e4a8c();
  /* 101e4993 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e4996 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101e4998 push edi */
  push32((uint32_t)(EDI));
  /* 101e4999 call 0x101e6880 */
  push32(0x101e499eu); f_101e6880();
  /* 101e499e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e49a1:;
  /* 101e49a1 pop edi */
  EDI = (pop32());
  /* 101e49a2 mov eax, ebx */
  EAX = (EBX);
  /* 101e49a4 pop esi */
  ESI = (pop32());
  /* 101e49a5 pop ebx */
  EBX = (pop32());
  /* 101e49a6 pop ebp */
  EBP = (pop32());
  /* 101e49a7 ret  */
  ESPCHK(0x101e4901u, _esp0);
  ESP += 4; return;
}

/* FUN_100049a8 @ 0x101e49a8 (147 bytes, 66 insns) */
void f_101e49a8(void) {
  FTRACE(0x101e49a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e49a8 push ebp */
  push32((uint32_t)(EBP));
  /* 101e49a9 mov ebp, esp */
  EBP = (ESP);
  /* 101e49ab sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e49ae push ebx */
  push32((uint32_t)(EBX));
  /* 101e49af push esi */
  push32((uint32_t)(ESI));
  /* 101e49b0 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101e49b3 push edi */
  push32((uint32_t)(EDI));
  /* 101e49b4 push eax */
  push32((uint32_t)(EAX));
  /* 101e49b5 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e49b8 push eax */
  push32((uint32_t)(EAX));
  /* 101e49b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e49bc push ecx */
  push32((uint32_t)(ECX));
  /* 101e49bd push ecx */
  push32((uint32_t)(ECX));
  /* 101e49be fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 101e49c0 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 101e49c3 call 0x101e667a */
  push32(0x101e49c8u); f_101e667a();
  /* 101e49c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e49cb mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e49ce lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 101e49d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e49d3 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e49d7 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101e49da add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e49dd mov edi, eax */
  EDI = (EAX);
  /* 101e49df lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e49e2 push eax */
  push32((uint32_t)(EAX));
  /* 101e49e3 push ebx */
  push32((uint32_t)(EBX));
  /* 101e49e4 push edi */
  push32((uint32_t)(EDI));
  /* 101e49e5 call 0x101e6603 */
  push32(0x101e49eau); f_101e6603();
  /* 101e49ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e49ed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e49f0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e49f1 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e49f3 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 101e49f6 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e49f9 jl 0x101e4a21 */
  if ((C.sf!=C.of)) goto L_101e4a21;
  /* 101e49fb cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e49fd jge 0x101e4a21 */
  if ((C.sf==C.of)) goto L_101e4a21;
  /* 101e49ff test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 101e4a01 je 0x101e4a0d */
  if (C.zf) goto L_101e4a0d;
L_101e4a03:;
  /* 101e4a03 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 101e4a05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e4a06 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e4a08 jne 0x101e4a03 */
  if (!C.zf) goto L_101e4a03;
  /* 101e4a0a and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_101e4a0d:;
  /* 101e4a0d lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e4a10 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e4a12 push eax */
  push32((uint32_t)(EAX));
  /* 101e4a13 push ebx */
  push32((uint32_t)(EBX));
  /* 101e4a14 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e4a17 call 0x101e4901 */
  push32(0x101e4a1cu); f_101e4901();
  /* 101e4a1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4a1f jmp 0x101e4a36 */
  goto L_101e4a36;
L_101e4a21:;
  /* 101e4a21 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 101e4a24 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e4a26 push eax */
  push32((uint32_t)(EAX));
  /* 101e4a27 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e4a2a push ebx */
  push32((uint32_t)(EBX));
  /* 101e4a2b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e4a2e call 0x101e47ea */
  push32(0x101e4a33u); f_101e47ea();
  /* 101e4a33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e4a36:;
  /* 101e4a36 pop edi */
  EDI = (pop32());
  /* 101e4a37 pop esi */
  ESI = (pop32());
  /* 101e4a38 pop ebx */
  EBX = (pop32());
  /* 101e4a39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e4a3a ret  */
  ESPCHK(0x101e49a8u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x101e4a3b (81 bytes, 29 insns) */
void f_101e4a3b(void) {
  FTRACE(0x101e4a3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4a3b push ebp */
  push32((uint32_t)(EBP));
  /* 101e4a3c mov ebp, esp */
  EBP = (ESP);
  /* 101e4a3e cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4a42 je 0x101e4a76 */
  if (C.zf) goto L_101e4a76;
  /* 101e4a44 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4a48 je 0x101e4a76 */
  if (C.zf) goto L_101e4a76;
  /* 101e4a4a cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4a4e jne 0x101e4a63 */
  if (!C.zf) goto L_101e4a63;
  /* 101e4a50 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e4a53 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e4a56 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e4a59 call 0x101e48ac */
  push32(0x101e4a5eu); f_101e48ac();
  /* 101e4a5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4a61 pop ebp */
  EBP = (pop32());
  /* 101e4a62 ret  */
  ESPCHK(0x101e4a3bu, _esp0);
  ESP += 4; return;
L_101e4a63:;
  /* 101e4a63 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101e4a66 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e4a69 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e4a6c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e4a6f call 0x101e49a8 */
  push32(0x101e4a74u); f_101e49a8();
  /* 101e4a74 jmp 0x101e4a87 */
  goto L_101e4a87;
L_101e4a76:;
  /* 101e4a76 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 101e4a79 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 101e4a7c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e4a7f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e4a82 call 0x101e4789 */
  push32(0x101e4a87u); f_101e4789();
L_101e4a87:;
  /* 101e4a87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4a8a pop ebp */
  EBP = (pop32());
  /* 101e4a8b ret  */
  ESPCHK(0x101e4a3bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004a8c @ 0x101e4a8c (37 bytes, 18 insns) */
void f_101e4a8c(void) {
  FTRACE(0x101e4a8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4a8c push edi */
  push32((uint32_t)(EDI));
  /* 101e4a8d mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 101e4a91 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e4a93 je 0x101e4aaf */
  if (C.zf) goto L_101e4aaf;
  /* 101e4a95 push esi */
  push32((uint32_t)(ESI));
  /* 101e4a96 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101e4a9a push esi */
  push32((uint32_t)(ESI));
  /* 101e4a9b call 0x101e6c20 */
  push32(0x101e4aa0u); f_101e6c20();
  /* 101e4aa0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e4aa1 push eax */
  push32((uint32_t)(EAX));
  /* 101e4aa2 push esi */
  push32((uint32_t)(ESI));
  /* 101e4aa3 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4aa5 push esi */
  push32((uint32_t)(ESI));
  /* 101e4aa6 call 0x101e68e0 */
  push32(0x101e4aabu); f_101e68e0();
  /* 101e4aab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4aae pop esi */
  ESI = (pop32());
L_101e4aaf:;
  /* 101e4aaf pop edi */
  EDI = (pop32());
  /* 101e4ab0 ret  */
  ESPCHK(0x101e4a8cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004ab1 @ 0x101e4ab1 (280 bytes, 106 insns) */
void f_101e4ab1(void) {
  FTRACE(0x101e4ab1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4ab1 push ebp */
  push32((uint32_t)(EBP));
  /* 101e4ab2 mov ebp, esp */
  EBP = (ESP);
  /* 101e4ab4 push ebx */
  push32((uint32_t)(EBX));
  /* 101e4ab5 push esi */
  push32((uint32_t)(ESI));
  /* 101e4ab6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e4ab9 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101e4abc mov ebx, dword ptr [esi + 0x10] */
  EBX = (r32((uint32_t)(ESI + 0x10)));
  /* 101e4abf test al, 0x82 */
  { uint32_t _r=(AL)&(0x82u); fl_logic(_r,8); }
  /* 101e4ac1 je 0x101e4bbd */
  if (C.zf) goto L_101e4bbd;
  /* 101e4ac7 test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 101e4ac9 jne 0x101e4bbd */
  if (!C.zf) goto L_101e4bbd;
  /* 101e4acf test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 101e4ad1 je 0x101e4ae9 */
  if (C.zf) goto L_101e4ae9;
  /* 101e4ad3 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101e4ad7 test al, 0x10 */
  { uint32_t _r=(AL)&(0x10u); fl_logic(_r,8); }
  /* 101e4ad9 je 0x101e4bbd */
  if (C.zf) goto L_101e4bbd;
  /* 101e4adf mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 101e4ae2 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 101e4ae4 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101e4ae6 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_101e4ae9:;
  /* 101e4ae9 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 101e4aec and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101e4af0 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 101e4af4 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 101e4af6 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 101e4af8 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 101e4afc mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 101e4aff jne 0x101e4b23 */
  if (!C.zf) goto L_101e4b23;
  /* 101e4b01 cmp esi, 0x101ed6d0 */
  { uint32_t _a=(ESI),_b=(0x101ed6d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4b07 je 0x101e4b11 */
  if (C.zf) goto L_101e4b11;
  /* 101e4b09 cmp esi, 0x101ed6f0 */
  { uint32_t _a=(ESI),_b=(0x101ed6f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4b0f jne 0x101e4b1c */
  if (!C.zf) goto L_101e4b1c;
L_101e4b11:;
  /* 101e4b11 push ebx */
  push32((uint32_t)(EBX));
  /* 101e4b12 call 0x101e6fb0 */
  push32(0x101e4b17u); f_101e6fb0();
  /* 101e4b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e4b19 pop ecx */
  ECX = (pop32());
  /* 101e4b1a jne 0x101e4b23 */
  if (!C.zf) goto L_101e4b23;
L_101e4b1c:;
  /* 101e4b1c push esi */
  push32((uint32_t)(ESI));
  /* 101e4b1d call 0x101e6f6c */
  push32(0x101e4b22u); f_101e6f6c();
  /* 101e4b22 pop ecx */
  ECX = (pop32());
L_101e4b23:;
  /* 101e4b23 test word ptr [esi + 0xc], 0x108 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x108u); fl_logic(_r,16); }
  /* 101e4b29 push edi */
  push32((uint32_t)(EDI));
  /* 101e4b2a je 0x101e4b93 */
  if (C.zf) goto L_101e4b93;
  /* 101e4b2c mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101e4b2f mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 101e4b31 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4b33 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101e4b36 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 101e4b38 mov ecx, dword ptr [esi + 0x18] */
  ECX = (r32((uint32_t)(ESI + 0x18)));
  /* 101e4b3b dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e4b3c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e4b3e mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 101e4b41 jle 0x101e4b53 */
  if ((C.zf||C.sf!=C.of)) goto L_101e4b53;
  /* 101e4b43 push edi */
  push32((uint32_t)(EDI));
  /* 101e4b44 push eax */
  push32((uint32_t)(EAX));
  /* 101e4b45 push ebx */
  push32((uint32_t)(EBX));
  /* 101e4b46 call 0x101e6d7c */
  push32(0x101e4b4bu); f_101e6d7c();
  /* 101e4b4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4b4e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101e4b51 jmp 0x101e4b89 */
  goto L_101e4b89;
L_101e4b53:;
  /* 101e4b53 cmp ebx, -1 */
  { uint32_t _a=(EBX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4b56 je 0x101e4b71 */
  if (C.zf) goto L_101e4b71;
  /* 101e4b58 mov ecx, ebx */
  ECX = (EBX);
  /* 101e4b5a mov eax, ebx */
  EAX = (EBX);
  /* 101e4b5c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e4b5f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e4b62 mov ecx, dword ptr [ecx*4 + 0x101f26e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e4b69 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101e4b6c lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101e4b6f jmp 0x101e4b76 */
  goto L_101e4b76;
L_101e4b71:;
  /* 101e4b71 mov eax, 0x101ed3b0 */
  EAX = (0x101ed3b0u);
L_101e4b76:;
  /* 101e4b76 test byte ptr [eax + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101e4b7a je 0x101e4b89 */
  if (C.zf) goto L_101e4b89;
  /* 101e4b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 101e4b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 101e4b80 push ebx */
  push32((uint32_t)(EBX));
  /* 101e4b81 call 0x101e6ca4 */
  push32(0x101e4b86u); f_101e6ca4();
  /* 101e4b86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e4b89:;
  /* 101e4b89 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 101e4b8c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 101e4b8f mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101e4b91 jmp 0x101e4ba7 */
  goto L_101e4ba7;
L_101e4b93:;
  /* 101e4b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e4b95 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101e4b98 pop edi */
  EDI = (pop32());
  /* 101e4b99 push edi */
  push32((uint32_t)(EDI));
  /* 101e4b9a push eax */
  push32((uint32_t)(EAX));
  /* 101e4b9b push ebx */
  push32((uint32_t)(EBX));
  /* 101e4b9c call 0x101e6d7c */
  push32(0x101e4ba1u); f_101e6d7c();
  /* 101e4ba1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4ba4 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_101e4ba7:;
  /* 101e4ba7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4baa pop edi */
  EDI = (pop32());
  /* 101e4bab je 0x101e4bb3 */
  if (C.zf) goto L_101e4bb3;
  /* 101e4bad or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 101e4bb1 jmp 0x101e4bc2 */
  goto L_101e4bc2;
L_101e4bb3:;
  /* 101e4bb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e4bb6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e4bbb jmp 0x101e4bc5 */
  goto L_101e4bc5;
L_101e4bbd:;
  /* 101e4bbd or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 101e4bbf mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_101e4bc2:;
  /* 101e4bc2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101e4bc5:;
  /* 101e4bc5 pop esi */
  ESI = (pop32());
  /* 101e4bc6 pop ebx */
  EBX = (pop32());
  /* 101e4bc7 pop ebp */
  EBP = (pop32());
  /* 101e4bc8 ret  */
  ESPCHK(0x101e4ab1u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bc9 @ 0x101e4bc9 (1825 bytes, 595 insns) [1 switch table(s)] */
void f_101e4bc9(void) {
  FTRACE(0x101e4bc9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e4bc9 push ebp */
  push32((uint32_t)(EBP));
  /* 101e4bca mov ebp, esp */
  EBP = (ESP);
  /* 101e4bcc sub esp, 0x248 */
  { uint32_t _a=(ESP),_b=(0x248u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4bd2 push ebx */
  push32((uint32_t)(EBX));
  /* 101e4bd3 push esi */
  push32((uint32_t)(ESI));
  /* 101e4bd4 push edi */
  push32((uint32_t)(EDI));
  /* 101e4bd5 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e4bd8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e4bda mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e4bdc inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e4bdd test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101e4bdf mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 101e4be2 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 101e4be5 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101e4be8 je 0x101e52e2 */
  if (C.zf) goto L_101e52e2;
  /* 101e4bee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101e4bf1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e4bf3 jmp 0x101e4bfd */
  goto L_101e4bfd;
L_101e4bf5:;
  /* 101e4bf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 101e4bf8 mov esi, dword ptr [ebp - 0x30] */
  ESI = (r32((uint32_t)(EBP + -0x30)));
  /* 101e4bfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_101e4bfd:;
  /* 101e4bfd cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4c00 jl 0x101e52e2 */
  if ((C.sf!=C.of)) goto L_101e52e2;
  /* 101e4c06 cmp bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4c09 jl 0x101e4c1e */
  if ((C.sf!=C.of)) goto L_101e4c1e;
  /* 101e4c0b cmp bl, 0x78 */
  { uint32_t _a=(BL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4c0e jg 0x101e4c1e */
  if ((!C.zf&&C.sf==C.of)) goto L_101e4c1e;
  /* 101e4c10 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e4c13 mov al, byte ptr [eax + 0x101eb110] */
  AL = (r8((uint32_t)(EAX + 0x101eb110)));
  /* 101e4c19 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 101e4c1c jmp 0x101e4c20 */
  goto L_101e4c20;
L_101e4c1e:;
  /* 101e4c1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e4c20:;
  /* 101e4c20 movsx eax, byte ptr [esi + eax*8 + 0x101eb130] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI + EAX*8 + 0x101eb130))));
  /* 101e4c28 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 101e4c2b cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4c2e mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 101e4c31 ja 0x101e52d1 */
  if ((!C.cf&&!C.zf)) goto L_101e52d1;
  /* 101e4c37 jmp dword ptr [eax*4 + 0x101e52ea] */
  switch (EAX) {
    case 0: goto L_101e4d68;
    case 1: goto L_101e4c3e;
    case 2: goto L_101e4c59;
    case 3: goto L_101e4ca5;
    case 4: goto L_101e4cdc;
    case 5: goto L_101e4ce4;
    case 6: goto L_101e4d19;
    case 7: goto L_101e4dac;
    default: x86_unimpl("switch@0x101e4c37 out of table"); return;
  }
L_101e4c3e:;
  /* 101e4c3e or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 101e4c42 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 101e4c45 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 101e4c48 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 101e4c4b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 101e4c4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 101e4c51 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101e4c54 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4c59:;
  /* 101e4c59 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e4c5c sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4c5f je 0x101e4c9c */
  if (C.zf) goto L_101e4c9c;
  /* 101e4c61 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4c64 je 0x101e4c93 */
  if (C.zf) goto L_101e4c93;
  /* 101e4c66 sub eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4c69 je 0x101e4c8a */
  if (C.zf) goto L_101e4c8a;
  /* 101e4c6b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4c6c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4c6d je 0x101e4c81 */
  if (C.zf) goto L_101e4c81;
  /* 101e4c6f sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4c72 jne 0x101e52d1 */
  if (!C.zf) goto L_101e52d1;
  /* 101e4c78 or dword ptr [ebp - 4], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x8u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e4c7c jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4c81:;
  /* 101e4c81 or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e4c85 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4c8a:;
  /* 101e4c8a or dword ptr [ebp - 4], 1 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x1u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e4c8e jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4c93:;
  /* 101e4c93 or byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))|(0x80u); w8((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,8); }
  /* 101e4c97 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4c9c:;
  /* 101e4c9c or dword ptr [ebp - 4], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x2u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e4ca0 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4ca5:;
  /* 101e4ca5 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4ca8 jne 0x101e4ccd */
  if (!C.zf) goto L_101e4ccd;
  /* 101e4caa lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e4cad push eax */
  push32((uint32_t)(EAX));
  /* 101e4cae call 0x101e53a8 */
  push32(0x101e4cb3u); f_101e53a8();
  /* 101e4cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e4cb5 pop ecx */
  ECX = (pop32());
  /* 101e4cb6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101e4cb9 jge 0x101e52d1 */
  if ((C.sf==C.of)) goto L_101e52d1;
  /* 101e4cbf or dword ptr [ebp - 4], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x4u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e4cc3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_101e4cc5:;
  /* 101e4cc5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 101e4cc8 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4ccd:;
  /* 101e4ccd mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 101e4cd0 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e4cd3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 101e4cd6 lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 101e4cda jmp 0x101e4cc5 */
  goto L_101e4cc5;
L_101e4cdc:;
  /* 101e4cdc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 101e4cdf jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4ce4:;
  /* 101e4ce4 cmp bl, 0x2a */
  { uint32_t _a=(BL),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4ce7 jne 0x101e4d07 */
  if (!C.zf) goto L_101e4d07;
  /* 101e4ce9 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e4cec push eax */
  push32((uint32_t)(EAX));
  /* 101e4ced call 0x101e53a8 */
  push32(0x101e4cf2u); f_101e53a8();
  /* 101e4cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e4cf4 pop ecx */
  ECX = (pop32());
  /* 101e4cf5 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101e4cf8 jge 0x101e52d1 */
  if ((C.sf==C.of)) goto L_101e52d1;
  /* 101e4cfe or dword ptr [ebp - 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))|(0xffffffffu); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 101e4d02 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4d07:;
  /* 101e4d07 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 101e4d0a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e4d0d lea eax, [ecx + eax*2 - 0x30] */
  EAX = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 101e4d11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 101e4d14 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4d19:;
  /* 101e4d19 cmp bl, 0x49 */
  { uint32_t _a=(BL),_b=(0x49u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4d1c je 0x101e4d4c */
  if (C.zf) goto L_101e4d4c;
  /* 101e4d1e cmp bl, 0x68 */
  { uint32_t _a=(BL),_b=(0x68u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4d21 je 0x101e4d43 */
  if (C.zf) goto L_101e4d43;
  /* 101e4d23 cmp bl, 0x6c */
  { uint32_t _a=(BL),_b=(0x6cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4d26 je 0x101e4d3a */
  if (C.zf) goto L_101e4d3a;
  /* 101e4d28 cmp bl, 0x77 */
  { uint32_t _a=(BL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4d2b jne 0x101e52d1 */
  if (!C.zf) goto L_101e52d1;
  /* 101e4d31 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101e4d35 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4d3a:;
  /* 101e4d3a or dword ptr [ebp - 4], 0x10 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x10u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e4d3e jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4d43:;
  /* 101e4d43 or dword ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x20u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e4d47 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4d4c:;
  /* 101e4d4c cmp byte ptr [edi], 0x36 */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4d4f jne 0x101e4d65 */
  if (!C.zf) goto L_101e4d65;
  /* 101e4d51 cmp byte ptr [edi + 1], 0x34 */
  { uint32_t _a=(r8((uint32_t)(EDI + 0x1))),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4d55 jne 0x101e4d65 */
  if (!C.zf) goto L_101e4d65;
  /* 101e4d57 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e4d58 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e4d59 or byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x80u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101e4d5d mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101e4d60 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4d65:;
  /* 101e4d65 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_101e4d68:;
  /* 101e4d68 mov ecx, dword ptr [0x101ed474] */
  ECX = (r32((uint32_t)(0x101ed474)));
  /* 101e4d6e mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 101e4d71 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 101e4d74 test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101e4d79 je 0x101e4d94 */
  if (C.zf) goto L_101e4d94;
  /* 101e4d7b lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101e4d7e push eax */
  push32((uint32_t)(EAX));
  /* 101e4d7f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e4d82 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e4d85 push eax */
  push32((uint32_t)(EAX));
  /* 101e4d86 call 0x101e530a */
  push32(0x101e4d8bu); f_101e530a();
  /* 101e4d8b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e4d8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4d90 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e4d91 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101e4d94:;
  /* 101e4d94 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101e4d97 push eax */
  push32((uint32_t)(EAX));
  /* 101e4d98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e4d9b movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e4d9e push eax */
  push32((uint32_t)(EAX));
  /* 101e4d9f call 0x101e530a */
  push32(0x101e4da4u); f_101e530a();
  /* 101e4da4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4da7 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e4dac:;
  /* 101e4dac movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e4daf cmp eax, 0x67 */
  { uint32_t _a=(EAX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4db2 jg 0x101e4fd4 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e4fd4;
  /* 101e4db8 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4dbb jge 0x101e4e57 */
  if ((C.sf==C.of)) goto L_101e4e57;
  /* 101e4dc1 cmp eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4dc4 jg 0x101e4eb5 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e4eb5;
  /* 101e4dca je 0x101e5048 */
  if (C.zf) goto L_101e5048;
  /* 101e4dd0 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4dd3 je 0x101e4e78 */
  if (C.zf) goto L_101e4e78;
  /* 101e4dd9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4dda dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4ddb je 0x101e4e4d */
  if (C.zf) goto L_101e4e4d;
  /* 101e4ddd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4dde dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4ddf je 0x101e4e4d */
  if (C.zf) goto L_101e4e4d;
  /* 101e4de1 sub eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4de4 jne 0x101e51d3 */
  if (!C.zf) goto L_101e51d3;
  /* 101e4dea test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101e4df0 jne 0x101e4df6 */
  if (!C.zf) goto L_101e4df6;
  /* 101e4df2 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101e4df6:;
  /* 101e4df6 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 101e4df9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4dfc jne 0x101e4e03 */
  if (!C.zf) goto L_101e4e03;
  /* 101e4dfe mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
L_101e4e03:;
  /* 101e4e03 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e4e06 push eax */
  push32((uint32_t)(EAX));
  /* 101e4e07 call 0x101e53a8 */
  push32(0x101e4e0cu); f_101e53a8();
  /* 101e4e0c test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101e4e12 pop ecx */
  ECX = (pop32());
  /* 101e4e13 mov ecx, eax */
  ECX = (EAX);
  /* 101e4e15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101e4e18 je 0x101e501c */
  if (C.zf) goto L_101e501c;
  /* 101e4e1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e4e20 jne 0x101e4e2b */
  if (!C.zf) goto L_101e4e2b;
  /* 101e4e22 mov ecx, dword ptr [0x101ed3a4] */
  ECX = (r32((uint32_t)(0x101ed3a4)));
  /* 101e4e28 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_101e4e2b:;
  /* 101e4e2b mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 101e4e32 mov eax, ecx */
  EAX = (ECX);
L_101e4e34:;
  /* 101e4e34 mov edx, esi */
  EDX = (ESI);
  /* 101e4e36 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101e4e37 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101e4e39 je 0x101e5013 */
  if (C.zf) goto L_101e5013;
  /* 101e4e3f cmp word ptr [eax], 0 */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e4e43 je 0x101e5013 */
  if (C.zf) goto L_101e5013;
  /* 101e4e49 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e4e4a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e4e4b jmp 0x101e4e34 */
  goto L_101e4e34;
L_101e4e4d:;
  /* 101e4e4d mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 101e4e54 add bl, 0x20 */
  { uint32_t _a=(BL),_b=(0x20u),_r=_a+_b; BL = (_r); fl_add(_a,_b,_r,8); }
L_101e4e57:;
  /* 101e4e57 or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e4e5b lea edi, [ebp - 0x248] */
  EDI = ((uint32_t)(EBP + -0x248));
  /* 101e4e61 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4e63 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 101e4e66 jge 0x101e4f3b */
  if ((C.sf==C.of)) goto L_101e4f3b;
  /* 101e4e6c mov dword ptr [ebp - 0x10], 6 */
  w32((uint32_t)(EBP + -0x10), (0x6u));
  /* 101e4e73 jmp 0x101e4f49 */
  goto L_101e4f49;
L_101e4e78:;
  /* 101e4e78 test word ptr [ebp - 4], 0x830 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x830u); fl_logic(_r,16); }
  /* 101e4e7e jne 0x101e4e84 */
  if (!C.zf) goto L_101e4e84;
  /* 101e4e80 or byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x8u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
L_101e4e84:;
  /* 101e4e84 test word ptr [ebp - 4], 0x810 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x4)))&(0x810u); fl_logic(_r,16); }
  /* 101e4e8a lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e4e8d push eax */
  push32((uint32_t)(EAX));
  /* 101e4e8e je 0x101e4ecb */
  if (C.zf) goto L_101e4ecb;
  /* 101e4e90 call 0x101e53c5 */
  push32(0x101e4e95u); f_101e53c5();
  /* 101e4e95 push eax */
  push32((uint32_t)(EAX));
  /* 101e4e96 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101e4e9c push eax */
  push32((uint32_t)(EAX));
  /* 101e4e9d call 0x101e7139 */
  push32(0x101e4ea2u); f_101e7139();
  /* 101e4ea2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4ea5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101e4ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e4eaa jge 0x101e4ede */
  if ((C.sf==C.of)) goto L_101e4ede;
  /* 101e4eac mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101e4eb3 jmp 0x101e4ede */
  goto L_101e4ede;
L_101e4eb5:;
  /* 101e4eb5 sub eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4eb8 je 0x101e4eec */
  if (C.zf) goto L_101e4eec;
  /* 101e4eba sub eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4ebd je 0x101e4e84 */
  if (C.zf) goto L_101e4e84;
  /* 101e4ebf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4ec0 je 0x101e50ae */
  if (C.zf) goto L_101e50ae;
  /* 101e4ec6 jmp 0x101e51d3 */
  goto L_101e51d3;
L_101e4ecb:;
  /* 101e4ecb call 0x101e53a8 */
  push32(0x101e4ed0u); f_101e53a8();
  /* 101e4ed0 pop ecx */
  ECX = (pop32());
  /* 101e4ed1 mov byte ptr [ebp - 0x248], al */
  w8((uint32_t)(EBP + -0x248), (AL));
  /* 101e4ed7 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_101e4ede:;
  /* 101e4ede lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101e4ee4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101e4ee7 jmp 0x101e51d3 */
  goto L_101e51d3;
L_101e4eec:;
  /* 101e4eec lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e4eef push eax */
  push32((uint32_t)(EAX));
  /* 101e4ef0 call 0x101e53a8 */
  push32(0x101e4ef5u); f_101e53a8();
  /* 101e4ef5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e4ef7 pop ecx */
  ECX = (pop32());
  /* 101e4ef8 je 0x101e4f2d */
  if (C.zf) goto L_101e4f2d;
  /* 101e4efa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 101e4efd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e4eff je 0x101e4f2d */
  if (C.zf) goto L_101e4f2d;
  /* 101e4f01 test byte ptr [ebp - 3], 8 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x8u); fl_logic(_r,8); }
  /* 101e4f05 je 0x101e4f1e */
  if (C.zf) goto L_101e4f1e;
  /* 101e4f07 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 101e4f0a shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101e4f0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101e4f0f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101e4f12 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 101e4f19 jmp 0x101e51d3 */
  goto L_101e51d3;
L_101e4f1e:;
  /* 101e4f1e and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 101e4f22 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101e4f25 movsx eax, word ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EAX))));
  /* 101e4f28 jmp 0x101e51d0 */
  goto L_101e51d0;
L_101e4f2d:;
  /* 101e4f2d mov eax, dword ptr [0x101ed3a0] */
  EAX = (r32((uint32_t)(0x101ed3a0)));
  /* 101e4f32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101e4f35 push eax */
  push32((uint32_t)(EAX));
  /* 101e4f36 jmp 0x101e4fc9 */
  goto L_101e4fc9;
L_101e4f3b:;
  /* 101e4f3b jne 0x101e4f49 */
  if (!C.zf) goto L_101e4f49;
  /* 101e4f3d cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4f40 jne 0x101e4f49 */
  if (!C.zf) goto L_101e4f49;
  /* 101e4f42 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_101e4f49:;
  /* 101e4f49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e4f4c push dword ptr [ebp - 0x34] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x34))));
  /* 101e4f4f add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4f52 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 101e4f55 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 101e4f58 mov ecx, dword ptr [eax - 8] */
  ECX = (r32((uint32_t)(EAX + -0x8)));
  /* 101e4f5b mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
  /* 101e4f5e mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101e4f61 mov dword ptr [ebp - 0x44], eax */
  w32((uint32_t)(EBP + -0x44), (EAX));
  /* 101e4f64 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 101e4f67 push eax */
  push32((uint32_t)(EAX));
  /* 101e4f68 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101e4f6e push eax */
  push32((uint32_t)(EAX));
  /* 101e4f6f lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101e4f72 push eax */
  push32((uint32_t)(EAX));
  /* 101e4f73 call dword ptr [0x101ed388] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ed388))), 0x101e4f79u);
  /* 101e4f79 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 101e4f7c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e4f7f and esi, 0x80 */
  { uint32_t _r=(ESI)&(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 101e4f85 je 0x101e4f9b */
  if (C.zf) goto L_101e4f9b;
  /* 101e4f87 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e4f8b jne 0x101e4f9b */
  if (!C.zf) goto L_101e4f9b;
  /* 101e4f8d lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101e4f93 push eax */
  push32((uint32_t)(EAX));
  /* 101e4f94 call dword ptr [0x101ed394] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ed394))), 0x101e4f9au);
  /* 101e4f9a pop ecx */
  ECX = (pop32());
L_101e4f9b:;
  /* 101e4f9b cmp bl, 0x67 */
  { uint32_t _a=(BL),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4f9e jne 0x101e4fb2 */
  if (!C.zf) goto L_101e4fb2;
  /* 101e4fa0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e4fa2 jne 0x101e4fb2 */
  if (!C.zf) goto L_101e4fb2;
  /* 101e4fa4 lea eax, [ebp - 0x248] */
  EAX = ((uint32_t)(EBP + -0x248));
  /* 101e4faa push eax */
  push32((uint32_t)(EAX));
  /* 101e4fab call dword ptr [0x101ed38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101ed38c))), 0x101e4fb1u);
  /* 101e4fb1 pop ecx */
  ECX = (pop32());
L_101e4fb2:;
  /* 101e4fb2 cmp byte ptr [ebp - 0x248], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x248))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e4fb9 jne 0x101e4fc8 */
  if (!C.zf) goto L_101e4fc8;
  /* 101e4fbb or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101e4fbf lea edi, [ebp - 0x247] */
  EDI = ((uint32_t)(EBP + -0x247));
  /* 101e4fc5 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
L_101e4fc8:;
  /* 101e4fc8 push edi */
  push32((uint32_t)(EDI));
L_101e4fc9:;
  /* 101e4fc9 call 0x101e6c20 */
  push32(0x101e4fceu); f_101e6c20();
  /* 101e4fce pop ecx */
  ECX = (pop32());
  /* 101e4fcf jmp 0x101e51d0 */
  goto L_101e51d0;
L_101e4fd4:;
  /* 101e4fd4 sub eax, 0x69 */
  { uint32_t _a=(EAX),_b=(0x69u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4fd7 je 0x101e50ae */
  if (C.zf) goto L_101e50ae;
  /* 101e4fdd sub eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4fe0 je 0x101e5084 */
  if (C.zf) goto L_101e5084;
  /* 101e4fe6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4fe7 je 0x101e5071 */
  if (C.zf) goto L_101e5071;
  /* 101e4fed dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4fee je 0x101e5041 */
  if (C.zf) goto L_101e5041;
  /* 101e4ff0 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e4ff3 je 0x101e4df6 */
  if (C.zf) goto L_101e4df6;
  /* 101e4ff9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4ffa dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e4ffb je 0x101e50b2 */
  if (C.zf) goto L_101e50b2;
  /* 101e5001 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e5004 jne 0x101e51d3 */
  if (!C.zf) goto L_101e51d3;
  /* 101e500a mov dword ptr [ebp - 0x2c], 0x27 */
  w32((uint32_t)(EBP + -0x2c), (0x27u));
  /* 101e5011 jmp 0x101e504f */
  goto L_101e504f;
L_101e5013:;
  /* 101e5013 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e5015 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101e5017 jmp 0x101e51d0 */
  goto L_101e51d0;
L_101e501c:;
  /* 101e501c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 101e501e jne 0x101e5029 */
  if (!C.zf) goto L_101e5029;
  /* 101e5020 mov ecx, dword ptr [0x101ed3a0] */
  ECX = (r32((uint32_t)(0x101ed3a0)));
  /* 101e5026 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_101e5029:;
  /* 101e5029 mov eax, ecx */
  EAX = (ECX);
L_101e502b:;
  /* 101e502b mov edx, esi */
  EDX = (ESI);
  /* 101e502d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101e502e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101e5030 je 0x101e503a */
  if (C.zf) goto L_101e503a;
  /* 101e5032 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5035 je 0x101e503a */
  if (C.zf) goto L_101e503a;
  /* 101e5037 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5038 jmp 0x101e502b */
  goto L_101e502b;
L_101e503a:;
  /* 101e503a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e503c jmp 0x101e51d0 */
  goto L_101e51d0;
L_101e5041:;
  /* 101e5041 mov dword ptr [ebp - 0x10], 8 */
  w32((uint32_t)(EBP + -0x10), (0x8u));
L_101e5048:;
  /* 101e5048 mov dword ptr [ebp - 0x2c], 7 */
  w32((uint32_t)(EBP + -0x2c), (0x7u));
L_101e504f:;
  /* 101e504f test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101e5053 mov dword ptr [ebp - 0xc], 0x10 */
  w32((uint32_t)(EBP + -0xc), (0x10u));
  /* 101e505a je 0x101e50b9 */
  if (C.zf) goto L_101e50b9;
  /* 101e505c mov al, byte ptr [ebp - 0x2c] */
  AL = (r8((uint32_t)(EBP + -0x2c)));
  /* 101e505f mov byte ptr [ebp - 0x16], 0x30 */
  w8((uint32_t)(EBP + -0x16), (0x30u));
  /* 101e5063 add al, 0x51 */
  { uint32_t _a=(AL),_b=(0x51u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 101e5065 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 101e506c mov byte ptr [ebp - 0x15], al */
  w8((uint32_t)(EBP + -0x15), (AL));
  /* 101e506f jmp 0x101e50b9 */
  goto L_101e50b9;
L_101e5071:;
  /* 101e5071 test byte ptr [ebp - 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101e5075 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
  /* 101e507c je 0x101e50b9 */
  if (C.zf) goto L_101e50b9;
  /* 101e507e or byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x2u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101e5082 jmp 0x101e50b9 */
  goto L_101e50b9;
L_101e5084:;
  /* 101e5084 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e5087 push eax */
  push32((uint32_t)(EAX));
  /* 101e5088 call 0x101e53a8 */
  push32(0x101e508du); f_101e53a8();
  /* 101e508d test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101e5091 pop ecx */
  ECX = (pop32());
  /* 101e5092 je 0x101e509d */
  if (C.zf) goto L_101e509d;
  /* 101e5094 mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 101e5098 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 101e509b jmp 0x101e50a2 */
  goto L_101e50a2;
L_101e509d:;
  /* 101e509d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 101e50a0 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_101e50a2:;
  /* 101e50a2 mov dword ptr [ebp - 0x28], 1 */
  w32((uint32_t)(EBP + -0x28), (0x1u));
  /* 101e50a9 jmp 0x101e52d1 */
  goto L_101e52d1;
L_101e50ae:;
  /* 101e50ae or dword ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0x40u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101e50b2:;
  /* 101e50b2 mov dword ptr [ebp - 0xc], 0xa */
  w32((uint32_t)(EBP + -0xc), (0xau));
L_101e50b9:;
  /* 101e50b9 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101e50bd je 0x101e50cb */
  if (C.zf) goto L_101e50cb;
  /* 101e50bf lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e50c2 push eax */
  push32((uint32_t)(EAX));
  /* 101e50c3 call 0x101e53b5 */
  push32(0x101e50c8u); f_101e53b5();
  /* 101e50c8 pop ecx */
  ECX = (pop32());
  /* 101e50c9 jmp 0x101e510c */
  goto L_101e510c;
L_101e50cb:;
  /* 101e50cb test byte ptr [ebp - 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101e50cf je 0x101e50f2 */
  if (C.zf) goto L_101e50f2;
  /* 101e50d1 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101e50d5 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e50d8 push eax */
  push32((uint32_t)(EAX));
  /* 101e50d9 je 0x101e50e7 */
  if (C.zf) goto L_101e50e7;
  /* 101e50db call 0x101e53a8 */
  push32(0x101e50e0u); f_101e53a8();
  /* 101e50e0 pop ecx */
  ECX = (pop32());
  /* 101e50e1 movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
L_101e50e4:;
  /* 101e50e4 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e50e5 jmp 0x101e510c */
  goto L_101e510c;
L_101e50e7:;
  /* 101e50e7 call 0x101e53a8 */
  push32(0x101e50ecu); f_101e53a8();
  /* 101e50ec pop ecx */
  ECX = (pop32());
  /* 101e50ed movzx eax, ax */
  EAX = ((uint32_t)(AX));
  /* 101e50f0 jmp 0x101e50e4 */
  goto L_101e50e4;
L_101e50f2:;
  /* 101e50f2 test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101e50f6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 101e50f9 push eax */
  push32((uint32_t)(EAX));
  /* 101e50fa je 0x101e5104 */
  if (C.zf) goto L_101e5104;
  /* 101e50fc call 0x101e53a8 */
  push32(0x101e5101u); f_101e53a8();
  /* 101e5101 pop ecx */
  ECX = (pop32());
  /* 101e5102 jmp 0x101e50e4 */
  goto L_101e50e4;
L_101e5104:;
  /* 101e5104 call 0x101e53a8 */
  push32(0x101e5109u); f_101e53a8();
  /* 101e5109 pop ecx */
  ECX = (pop32());
  /* 101e510a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
L_101e510c:;
  /* 101e510c test byte ptr [ebp - 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101e5110 je 0x101e512d */
  if (C.zf) goto L_101e512d;
  /* 101e5112 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101e5114 jg 0x101e512d */
  if ((!C.zf&&C.sf==C.of)) goto L_101e512d;
  /* 101e5116 jl 0x101e511c */
  if ((C.sf!=C.of)) goto L_101e511c;
  /* 101e5118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e511a jae 0x101e512d */
  if (!C.cf) goto L_101e512d;
L_101e511c:;
  /* 101e511c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e511e adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5121 mov esi, eax */
  ESI = (EAX);
  /* 101e5123 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e5125 or byte ptr [ebp - 3], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))|(0x1u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101e5129 mov edi, edx */
  EDI = (EDX);
  /* 101e512b jmp 0x101e5131 */
  goto L_101e5131;
L_101e512d:;
  /* 101e512d mov esi, eax */
  ESI = (EAX);
  /* 101e512f mov edi, edx */
  EDI = (EDX);
L_101e5131:;
  /* 101e5131 test byte ptr [ebp - 3], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x80u); fl_logic(_r,8); }
  /* 101e5135 jne 0x101e513a */
  if (!C.zf) goto L_101e513a;
  /* 101e5137 and edi, 0 */
  { uint32_t _r=(EDI)&(0x0u); EDI = (_r); fl_logic(_r,32); }
L_101e513a:;
  /* 101e513a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e513e jge 0x101e5149 */
  if ((C.sf==C.of)) goto L_101e5149;
  /* 101e5140 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 101e5147 jmp 0x101e514d */
  goto L_101e514d;
L_101e5149:;
  /* 101e5149 and dword ptr [ebp - 4], 0xfffffff7 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0xfffffff7u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_101e514d:;
  /* 101e514d mov eax, esi */
  EAX = (ESI);
  /* 101e514f or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101e5151 jne 0x101e5157 */
  if (!C.zf) goto L_101e5157;
  /* 101e5153 and dword ptr [ebp - 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1c)))&(0x0u); w32((uint32_t)(EBP + -0x1c), (_r)); fl_logic(_r,32); }
L_101e5157:;
  /* 101e5157 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101e515a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_101e515d:;
  /* 101e515d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 101e5160 dec dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))-1; w32((uint32_t)(EBP + -0x10), (_r)); fl_dec(_r,32); }
  /* 101e5163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5165 jg 0x101e516d */
  if ((!C.zf&&C.sf==C.of)) goto L_101e516d;
  /* 101e5167 mov eax, esi */
  EAX = (ESI);
  /* 101e5169 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101e516b je 0x101e51a8 */
  if (C.zf) goto L_101e51a8;
L_101e516d:;
  /* 101e516d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e5170 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e5171 push edx */
  push32((uint32_t)(EDX));
  /* 101e5172 push eax */
  push32((uint32_t)(EAX));
  /* 101e5173 push edi */
  push32((uint32_t)(EDI));
  /* 101e5174 push esi */
  push32((uint32_t)(ESI));
  /* 101e5175 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 101e5178 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 101e517b call 0x101e7270 */
  push32(0x101e5180u); f_101e7270();
  /* 101e5180 push dword ptr [ebp - 0x3c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x3c))));
  /* 101e5183 mov ebx, eax */
  EBX = (EAX);
  /* 101e5185 add ebx, 0x30 */
  { uint32_t _a=(EBX),_b=(0x30u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5188 push dword ptr [ebp - 0x40] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x40))));
  /* 101e518b push edi */
  push32((uint32_t)(EDI));
  /* 101e518c push esi */
  push32((uint32_t)(ESI));
  /* 101e518d call 0x101e7200 */
  push32(0x101e5192u); f_101e7200();
  /* 101e5192 cmp ebx, 0x39 */
  { uint32_t _a=(EBX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5195 mov esi, eax */
  ESI = (EAX);
  /* 101e5197 mov edi, edx */
  EDI = (EDX);
  /* 101e5199 jle 0x101e519e */
  if ((C.zf||C.sf!=C.of)) goto L_101e519e;
  /* 101e519b add ebx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
L_101e519e:;
  /* 101e519e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e51a1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101e51a4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 101e51a6 jmp 0x101e515d */
  goto L_101e515d;
L_101e51a8:;
  /* 101e51a8 lea eax, [ebp - 0x49] */
  EAX = ((uint32_t)(EBP + -0x49));
  /* 101e51ab sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e51ae inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 101e51b1 test byte ptr [ebp - 3], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x2u); fl_logic(_r,8); }
  /* 101e51b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101e51b8 je 0x101e51d3 */
  if (C.zf) goto L_101e51d3;
  /* 101e51ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e51bd cmp byte ptr [ecx], 0x30 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e51c0 jne 0x101e51c6 */
  if (!C.zf) goto L_101e51c6;
  /* 101e51c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e51c4 jne 0x101e51d3 */
  if (!C.zf) goto L_101e51d3;
L_101e51c6:;
  /* 101e51c6 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 101e51c9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e51ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e51cd mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_101e51d0:;
  /* 101e51d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_101e51d3:;
  /* 101e51d3 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e51d7 jne 0x101e52d1 */
  if (!C.zf) goto L_101e52d1;
  /* 101e51dd mov ebx, dword ptr [ebp - 4] */
  EBX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e51e0 test bl, 0x40 */
  { uint32_t _r=(BL)&(0x40u); fl_logic(_r,8); }
  /* 101e51e3 je 0x101e520b */
  if (C.zf) goto L_101e520b;
  /* 101e51e5 test bh, 1 */
  { uint32_t _r=(C.b.b.h)&(0x1u); fl_logic(_r,8); }
  /* 101e51e8 je 0x101e51f0 */
  if (C.zf) goto L_101e51f0;
  /* 101e51ea mov byte ptr [ebp - 0x16], 0x2d */
  w8((uint32_t)(EBP + -0x16), (0x2du));
  /* 101e51ee jmp 0x101e5204 */
  goto L_101e5204;
L_101e51f0:;
  /* 101e51f0 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101e51f3 je 0x101e51fb */
  if (C.zf) goto L_101e51fb;
  /* 101e51f5 mov byte ptr [ebp - 0x16], 0x2b */
  w8((uint32_t)(EBP + -0x16), (0x2bu));
  /* 101e51f9 jmp 0x101e5204 */
  goto L_101e5204;
L_101e51fb:;
  /* 101e51fb test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101e51fe je 0x101e520b */
  if (C.zf) goto L_101e520b;
  /* 101e5200 mov byte ptr [ebp - 0x16], 0x20 */
  w8((uint32_t)(EBP + -0x16), (0x20u));
L_101e5204:;
  /* 101e5204 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
L_101e520b:;
  /* 101e520b mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 101e520e sub esi, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e5211 sub esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e5214 test bl, 0xc */
  { uint32_t _r=(BL)&(0xcu); fl_logic(_r,8); }
  /* 101e5217 jne 0x101e522b */
  if (!C.zf) goto L_101e522b;
  /* 101e5219 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101e521c push eax */
  push32((uint32_t)(EAX));
  /* 101e521d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e5220 push esi */
  push32((uint32_t)(ESI));
  /* 101e5221 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101e5223 call 0x101e533f */
  push32(0x101e5228u); f_101e533f();
  /* 101e5228 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e522b:;
  /* 101e522b lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101e522e push eax */
  push32((uint32_t)(EAX));
  /* 101e522f lea eax, [ebp - 0x16] */
  EAX = ((uint32_t)(EBP + -0x16));
  /* 101e5232 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e5235 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 101e5238 push eax */
  push32((uint32_t)(EAX));
  /* 101e5239 call 0x101e5370 */
  push32(0x101e523eu); f_101e5370();
  /* 101e523e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5241 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101e5244 je 0x101e525d */
  if (C.zf) goto L_101e525d;
  /* 101e5246 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101e5249 jne 0x101e525d */
  if (!C.zf) goto L_101e525d;
  /* 101e524b lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101e524e push eax */
  push32((uint32_t)(EAX));
  /* 101e524f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e5252 push esi */
  push32((uint32_t)(ESI));
  /* 101e5253 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101e5255 call 0x101e533f */
  push32(0x101e525au); f_101e533f();
  /* 101e525a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e525d:;
  /* 101e525d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5261 je 0x101e52a4 */
  if (C.zf) goto L_101e52a4;
  /* 101e5263 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5267 jle 0x101e52a4 */
  if ((C.zf||C.sf!=C.of)) goto L_101e52a4;
  /* 101e5269 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e526c mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e526f lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
L_101e5272:;
  /* 101e5272 mov ax, word ptr [ebx] */
  AX = (r16((uint32_t)(EBX)));
  /* 101e5275 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101e5276 push eax */
  push32((uint32_t)(EAX));
  /* 101e5277 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101e527a push eax */
  push32((uint32_t)(EAX));
  /* 101e527b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101e527c call 0x101e7139 */
  push32(0x101e5281u); f_101e7139();
  /* 101e5281 pop ecx */
  ECX = (pop32());
  /* 101e5282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5284 pop ecx */
  ECX = (pop32());
  /* 101e5285 jle 0x101e52b9 */
  if ((C.zf||C.sf!=C.of)) goto L_101e52b9;
  /* 101e5287 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 101e528a push ecx */
  push32((uint32_t)(ECX));
  /* 101e528b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e528e push eax */
  push32((uint32_t)(EAX));
  /* 101e528f lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 101e5292 push eax */
  push32((uint32_t)(EAX));
  /* 101e5293 call 0x101e5370 */
  push32(0x101e5298u); f_101e5370();
  /* 101e5298 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e529b mov eax, edi */
  EAX = (EDI);
  /* 101e529d dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e529e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e52a0 jne 0x101e5272 */
  if (!C.zf) goto L_101e5272;
  /* 101e52a2 jmp 0x101e52b9 */
  goto L_101e52b9;
L_101e52a4:;
  /* 101e52a4 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101e52a7 push eax */
  push32((uint32_t)(EAX));
  /* 101e52a8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e52ab push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 101e52ae push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 101e52b1 call 0x101e5370 */
  push32(0x101e52b6u); f_101e5370();
  /* 101e52b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e52b9:;
  /* 101e52b9 test byte ptr [ebp - 4], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x4u); fl_logic(_r,8); }
  /* 101e52bd je 0x101e52d1 */
  if (C.zf) goto L_101e52d1;
  /* 101e52bf lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 101e52c2 push eax */
  push32((uint32_t)(EAX));
  /* 101e52c3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e52c6 push esi */
  push32((uint32_t)(ESI));
  /* 101e52c7 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101e52c9 call 0x101e533f */
  push32(0x101e52ceu); f_101e533f();
  /* 101e52ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e52d1:;
  /* 101e52d1 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e52d4 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 101e52d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e52d7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 101e52d9 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
  /* 101e52dc jne 0x101e4bf5 */
  if (!C.zf) goto L_101e4bf5;
L_101e52e2:;
  /* 101e52e2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101e52e5 pop edi */
  EDI = (pop32());
  /* 101e52e6 pop esi */
  ESI = (pop32());
  /* 101e52e7 pop ebx */
  EBX = (pop32());
  /* 101e52e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e52e9 ret  */
  ESPCHK(0x101e4bc9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000530a @ 0x101e530a (53 bytes, 25 insns) */
void f_101e530a(void) {
  FTRACE(0x101e530au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e530a push ebp */
  push32((uint32_t)(EBP));
  /* 101e530b mov ebp, esp */
  EBP = (ESP);
  /* 101e530d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e5310 dec dword ptr [ecx + 4] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))-1; w32((uint32_t)(ECX + 0x4), (_r)); fl_dec(_r,32); }
  /* 101e5313 js 0x101e5323 */
  if (C.sf) goto L_101e5323;
  /* 101e5315 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 101e5317 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 101e531a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 101e531c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101e531e movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 101e5321 jmp 0x101e532e */
  goto L_101e532e;
L_101e5323:;
  /* 101e5323 push ecx */
  push32((uint32_t)(ECX));
  /* 101e5324 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e5327 call 0x101e4ab1 */
  push32(0x101e532cu); f_101e4ab1();
  /* 101e532c pop ecx */
  ECX = (pop32());
  /* 101e532d pop ecx */
  ECX = (pop32());
L_101e532e:;
  /* 101e532e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5331 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e5334 jne 0x101e533b */
  if (!C.zf) goto L_101e533b;
  /* 101e5336 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e5339 pop ebp */
  EBP = (pop32());
  /* 101e533a ret  */
  ESPCHK(0x101e530au, _esp0);
  ESP += 4; return;
L_101e533b:;
  /* 101e533b inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 101e533d pop ebp */
  EBP = (pop32());
  /* 101e533e ret  */
  ESPCHK(0x101e530au, _esp0);
  ESP += 4; return;
}

/* FUN_1000533f @ 0x101e533f (49 bytes, 22 insns) */
void f_101e533f(void) {
  FTRACE(0x101e533fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e533f push esi */
  push32((uint32_t)(ESI));
  /* 101e5340 push edi */
  push32((uint32_t)(EDI));
  /* 101e5341 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 101e5345 mov eax, edi */
  EAX = (EDI);
  /* 101e5347 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e5348 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e534a jle 0x101e536d */
  if ((C.zf||C.sf!=C.of)) goto L_101e536d;
  /* 101e534c mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
L_101e5350:;
  /* 101e5350 push esi */
  push32((uint32_t)(ESI));
  /* 101e5351 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101e5355 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 101e5359 call 0x101e530a */
  push32(0x101e535eu); f_101e530a();
  /* 101e535e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5361 cmp dword ptr [esi], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5364 je 0x101e536d */
  if (C.zf) goto L_101e536d;
  /* 101e5366 mov eax, edi */
  EAX = (EDI);
  /* 101e5368 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e5369 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e536b jg 0x101e5350 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e5350;
L_101e536d:;
  /* 101e536d pop edi */
  EDI = (pop32());
  /* 101e536e pop esi */
  ESI = (pop32());
  /* 101e536f ret  */
  ESPCHK(0x101e533fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005370 @ 0x101e5370 (56 bytes, 27 insns) */
void f_101e5370(void) {
  FTRACE(0x101e5370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5370 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5371 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 101e5375 mov eax, ebx */
  EAX = (EBX);
  /* 101e5377 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e5378 push esi */
  push32((uint32_t)(ESI));
  /* 101e5379 push edi */
  push32((uint32_t)(EDI));
  /* 101e537a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e537c jle 0x101e53a4 */
  if ((C.zf||C.sf!=C.of)) goto L_101e53a4;
  /* 101e537e mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 101e5382 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_101e5386:;
  /* 101e5386 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 101e5389 push edi */
  push32((uint32_t)(EDI));
  /* 101e538a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e538b push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 101e538f push eax */
  push32((uint32_t)(EAX));
  /* 101e5390 call 0x101e530a */
  push32(0x101e5395u); f_101e530a();
  /* 101e5395 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5398 cmp dword ptr [edi], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e539b je 0x101e53a4 */
  if (C.zf) goto L_101e53a4;
  /* 101e539d mov eax, ebx */
  EAX = (EBX);
  /* 101e539f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e53a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e53a2 jg 0x101e5386 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e5386;
L_101e53a4:;
  /* 101e53a4 pop edi */
  EDI = (pop32());
  /* 101e53a5 pop esi */
  ESI = (pop32());
  /* 101e53a6 pop ebx */
  EBX = (pop32());
  /* 101e53a7 ret  */
  ESPCHK(0x101e5370u, _esp0);
  ESP += 4; return;
}

/* FUN_100053a8 @ 0x101e53a8 (13 bytes, 5 insns) */
void f_101e53a8(void) {
  FTRACE(0x101e53a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e53a8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e53ac add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e53af mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101e53b1 mov eax, dword ptr [eax - 4] */
  EAX = (r32((uint32_t)(EAX + -0x4)));
  /* 101e53b4 ret  */
  ESPCHK(0x101e53a8u, _esp0);
  ESP += 4; return;
}

/* FUN_100053b5 @ 0x101e53b5 (16 bytes, 6 insns) */
void f_101e53b5(void) {
  FTRACE(0x101e53b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e53b5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e53b9 add dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e53bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101e53be mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 101e53c1 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 101e53c4 ret  */
  ESPCHK(0x101e53b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c5 @ 0x101e53c5 (14 bytes, 5 insns) */
void f_101e53c5(void) {
  FTRACE(0x101e53c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e53c5 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e53c9 add dword ptr [eax], 4 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e53cc mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 101e53ce mov ax, word ptr [eax - 4] */
  AX = (r16((uint32_t)(EAX + -0x4)));
  /* 101e53d2 ret  */
  ESPCHK(0x101e53c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100053d3 @ 0x101e53d3 (45 bytes, 12 insns) */
void f_101e53d3(void) {
  FTRACE(0x101e53d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e53d3 mov eax, dword ptr [0x101ed378] */
  EAX = (r32((uint32_t)(0x101ed378)));
  /* 101e53d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e53da je 0x101e53de */
  if (C.zf) goto L_101e53de;
  /* 101e53dc call eax */
  call_ind((uint32_t)(EAX), 0x101e53deu);
L_101e53de:;
  /* 101e53de push 0x101ec014 */
  push32((uint32_t)(0x101ec014u));
  /* 101e53e3 push 0x101ec008 */
  push32((uint32_t)(0x101ec008u));
  /* 101e53e8 call 0x101e54d7 */
  push32(0x101e53edu); f_101e54d7();
  /* 101e53ed push 0x101ec004 */
  push32((uint32_t)(0x101ec004u));
  /* 101e53f2 push 0x101ec000 */
  push32((uint32_t)(0x101ec000u));
  /* 101e53f7 call 0x101e54d7 */
  push32(0x101e53fcu); f_101e54d7();
  /* 101e53fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e53ff ret  */
  ESPCHK(0x101e53d3u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x101e5400 (17 bytes, 6 insns) */
void f_101e5400(void) {
  FTRACE(0x101e5400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5400 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e5402 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e5404 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101e5408 call 0x101e5420 */
  push32(0x101e540du); f_101e5420();
  /* 101e540d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5410 ret  */
  ESPCHK(0x101e5400u, _esp0);
  ESP += 4; return;
}

/* FUN_10005411 @ 0x101e5411 (15 bytes, 6 insns) */
void f_101e5411(void) {
  FTRACE(0x101e5411u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5411 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e5413 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e5415 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e5417 call 0x101e5420 */
  push32(0x101e541cu); f_101e5420();
  /* 101e541c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e541f ret  */
  ESPCHK(0x101e5411u, _esp0);
  ESP += 4; return;
}

/* FUN_10005420 @ 0x101e5420 (163 bytes, 53 insns) */
void f_101e5420(void) {
  FTRACE(0x101e5420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5420 push edi */
  push32((uint32_t)(EDI));
  /* 101e5421 call 0x101e54c5 */
  push32(0x101e5426u); f_101e54c5();
  /* 101e5426 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e5428 pop edi */
  EDI = (pop32());
  /* 101e5429 cmp dword ptr [0x101f1144], edi */
  { uint32_t _a=(r32((uint32_t)(0x101f1144))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e542f jne 0x101e5442 */
  if (!C.zf) goto L_101e5442;
  /* 101e5431 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101e5435 call dword ptr [0x101eb020] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb020))), 0x101e543bu);
  /* 101e543b push eax */
  push32((uint32_t)(EAX));
  /* 101e543c call dword ptr [0x101eb01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb01c))), 0x101e5442u);
L_101e5442:;
  /* 101e5442 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5447 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5448 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101e544c mov dword ptr [0x101f1140], edi */
  w32((uint32_t)(0x101f1140), (EDI));
  /* 101e5452 mov byte ptr [0x101f113c], bl */
  w8((uint32_t)(0x101f113c), (BL));
  /* 101e5458 jne 0x101e5496 */
  if (!C.zf) goto L_101e5496;
  /* 101e545a mov eax, dword ptr [0x101f27f0] */
  EAX = (r32((uint32_t)(0x101f27f0)));
  /* 101e545f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5461 je 0x101e5485 */
  if (C.zf) goto L_101e5485;
  /* 101e5463 mov ecx, dword ptr [0x101f27ec] */
  ECX = (r32((uint32_t)(0x101f27ec)));
  /* 101e5469 push esi */
  push32((uint32_t)(ESI));
  /* 101e546a lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 101e546d cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e546f jb 0x101e5484 */
  if (C.cf) goto L_101e5484;
L_101e5471:;
  /* 101e5471 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101e5473 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5475 je 0x101e5479 */
  if (C.zf) goto L_101e5479;
  /* 101e5477 call eax */
  call_ind((uint32_t)(EAX), 0x101e5479u);
L_101e5479:;
  /* 101e5479 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e547c cmp esi, dword ptr [0x101f27f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101f27f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5482 jae 0x101e5471 */
  if (!C.cf) goto L_101e5471;
L_101e5484:;
  /* 101e5484 pop esi */
  ESI = (pop32());
L_101e5485:;
  /* 101e5485 push 0x101ec020 */
  push32((uint32_t)(0x101ec020u));
  /* 101e548a push 0x101ec018 */
  push32((uint32_t)(0x101ec018u));
  /* 101e548f call 0x101e54d7 */
  push32(0x101e5494u); f_101e54d7();
  /* 101e5494 pop ecx */
  ECX = (pop32());
  /* 101e5495 pop ecx */
  ECX = (pop32());
L_101e5496:;
  /* 101e5496 push 0x101ec028 */
  push32((uint32_t)(0x101ec028u));
  /* 101e549b push 0x101ec024 */
  push32((uint32_t)(0x101ec024u));
  /* 101e54a0 call 0x101e54d7 */
  push32(0x101e54a5u); f_101e54d7();
  /* 101e54a5 pop ecx */
  ECX = (pop32());
  /* 101e54a6 pop ecx */
  ECX = (pop32());
  /* 101e54a7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e54a9 pop ebx */
  EBX = (pop32());
  /* 101e54aa je 0x101e54b3 */
  if (C.zf) goto L_101e54b3;
  /* 101e54ac call 0x101e54ce */
  push32(0x101e54b1u); f_101e54ce();
  /* 101e54b1 pop edi */
  EDI = (pop32());
  /* 101e54b2 ret  */
  ESPCHK(0x101e5420u, _esp0);
  ESP += 4; return;
L_101e54b3:;
  /* 101e54b3 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101e54b7 mov dword ptr [0x101f1144], edi */
  w32((uint32_t)(0x101f1144), (EDI));
  /* 101e54bd call dword ptr [0x101eb018] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb018))), 0x101e54c3u);
  /* 101e54c3 pop edi */
  EDI = (pop32());
  /* 101e54c4 ret  */
  ESPCHK(0x101e5420u, _esp0);
  ESP += 4; return;
}

/* FUN_100054c5 @ 0x101e54c5 (9 bytes, 4 insns) */
void f_101e54c5(void) {
  FTRACE(0x101e54c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e54c5 push 0xd */
  push32((uint32_t)(0xdu));
  /* 101e54c7 call 0x101e737a */
  push32(0x101e54ccu); f_101e737a();
  /* 101e54cc pop ecx */
  ECX = (pop32());
  /* 101e54cd ret  */
  ESPCHK(0x101e54c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100054ce @ 0x101e54ce (9 bytes, 4 insns) */
void f_101e54ce(void) {
  FTRACE(0x101e54ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e54ce push 0xd */
  push32((uint32_t)(0xdu));
  /* 101e54d0 call 0x101e73db */
  push32(0x101e54d5u); f_101e73db();
  /* 101e54d5 pop ecx */
  ECX = (pop32());
  /* 101e54d6 ret  */
  ESPCHK(0x101e54ceu, _esp0);
  ESP += 4; return;
}

/* FUN_100054d7 @ 0x101e54d7 (26 bytes, 12 insns) */
void f_101e54d7(void) {
  FTRACE(0x101e54d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e54d7 push esi */
  push32((uint32_t)(ESI));
  /* 101e54d8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_101e54dc:;
  /* 101e54dc cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e54e0 jae 0x101e54ef */
  if (!C.cf) goto L_101e54ef;
  /* 101e54e2 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101e54e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e54e6 je 0x101e54ea */
  if (C.zf) goto L_101e54ea;
  /* 101e54e8 call eax */
  call_ind((uint32_t)(EAX), 0x101e54eau);
L_101e54ea:;
  /* 101e54ea add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e54ed jmp 0x101e54dc */
  goto L_101e54dc;
L_101e54ef:;
  /* 101e54ef pop esi */
  ESI = (pop32());
  /* 101e54f0 ret  */
  ESPCHK(0x101e54d7u, _esp0);
  ESP += 4; return;
}

/* FUN_100054f1 @ 0x101e54f1 (84 bytes, 32 insns) */
void f_101e54f1(void) {
  FTRACE(0x101e54f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e54f1 push esi */
  push32((uint32_t)(ESI));
  /* 101e54f2 call 0x101e72e5 */
  push32(0x101e54f7u); f_101e72e5();
  /* 101e54f7 call dword ptr [0x101eb02c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb02c))), 0x101e54fdu);
  /* 101e54fd cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5500 mov dword ptr [0x101ed3a8], eax */
  w32((uint32_t)(0x101ed3a8), (EAX));
  /* 101e5505 je 0x101e5541 */
  if (C.zf) goto L_101e5541;
  /* 101e5507 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 101e5509 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e550b call 0x101e73f0 */
  push32(0x101e5510u); f_101e73f0();
  /* 101e5510 mov esi, eax */
  ESI = (EAX);
  /* 101e5512 pop ecx */
  ECX = (pop32());
  /* 101e5513 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5515 pop ecx */
  ECX = (pop32());
  /* 101e5516 je 0x101e5541 */
  if (C.zf) goto L_101e5541;
  /* 101e5518 push esi */
  push32((uint32_t)(ESI));
  /* 101e5519 push dword ptr [0x101ed3a8] */
  push32((uint32_t)(r32((uint32_t)(0x101ed3a8))));
  /* 101e551f call dword ptr [0x101eb028] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb028))), 0x101e5525u);
  /* 101e5525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5527 je 0x101e5541 */
  if (C.zf) goto L_101e5541;
  /* 101e5529 push esi */
  push32((uint32_t)(ESI));
  /* 101e552a call 0x101e5563 */
  push32(0x101e552fu); f_101e5563();
  /* 101e552f pop ecx */
  ECX = (pop32());
  /* 101e5530 call dword ptr [0x101eb024] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb024))), 0x101e5536u);
  /* 101e5536 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101e553a push 1 */
  push32((uint32_t)(0x1u));
  /* 101e553c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101e553e pop eax */
  EAX = (pop32());
  /* 101e553f pop esi */
  ESI = (pop32());
  /* 101e5540 ret  */
  ESPCHK(0x101e54f1u, _esp0);
  ESP += 4; return;
L_101e5541:;
  /* 101e5541 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e5543 pop esi */
  ESI = (pop32());
  /* 101e5544 ret  */
  ESPCHK(0x101e54f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10005545 @ 0x101e5545 (30 bytes, 8 insns) */
void f_101e5545(void) {
  FTRACE(0x101e5545u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5545 call 0x101e730e */
  push32(0x101e554au); f_101e730e();
  /* 101e554a mov eax, dword ptr [0x101ed3a8] */
  EAX = (r32((uint32_t)(0x101ed3a8)));
  /* 101e554f cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5552 je 0x101e5562 */
  if (C.zf) goto L_101e5562;
  /* 101e5554 push eax */
  push32((uint32_t)(EAX));
  /* 101e5555 call dword ptr [0x101eb030] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb030))), 0x101e555bu);
  /* 101e555b or dword ptr [0x101ed3a8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x101ed3a8)))|(0xffffffffu); w32((uint32_t)(0x101ed3a8), (_r)); fl_logic(_r,32); }
L_101e5562:;
  /* 101e5562 ret  */
  ESPCHK(0x101e5545u, _esp0);
  ESP += 4; return;
}

/* FUN_10005563 @ 0x101e5563 (19 bytes, 4 insns) */
void f_101e5563(void) {
  FTRACE(0x101e5563u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5563 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e5567 mov dword ptr [eax + 0x50], 0x101ed9f0 */
  w32((uint32_t)(EAX + 0x50), (0x101ed9f0u));
  /* 101e556e mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 101e5575 ret  */
  ESPCHK(0x101e5563u, _esp0);
  ESP += 4; return;
}

/* FUN_10005576 @ 0x101e5576 (103 bytes, 38 insns) */
void f_101e5576(void) {
  FTRACE(0x101e5576u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5576 push esi */
  push32((uint32_t)(ESI));
  /* 101e5577 push edi */
  push32((uint32_t)(EDI));
  /* 101e5578 call dword ptr [0x101eb03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb03c))), 0x101e557eu);
  /* 101e557e push dword ptr [0x101ed3a8] */
  push32((uint32_t)(r32((uint32_t)(0x101ed3a8))));
  /* 101e5584 mov edi, eax */
  EDI = (EAX);
  /* 101e5586 call dword ptr [0x101eb038] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb038))), 0x101e558cu);
  /* 101e558c mov esi, eax */
  ESI = (EAX);
  /* 101e558e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5590 jne 0x101e55d1 */
  if (!C.zf) goto L_101e55d1;
  /* 101e5592 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 101e5594 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e5596 call 0x101e73f0 */
  push32(0x101e559bu); f_101e73f0();
  /* 101e559b mov esi, eax */
  ESI = (EAX);
  /* 101e559d pop ecx */
  ECX = (pop32());
  /* 101e559e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e55a0 pop ecx */
  ECX = (pop32());
  /* 101e55a1 je 0x101e55c9 */
  if (C.zf) goto L_101e55c9;
  /* 101e55a3 push esi */
  push32((uint32_t)(ESI));
  /* 101e55a4 push dword ptr [0x101ed3a8] */
  push32((uint32_t)(r32((uint32_t)(0x101ed3a8))));
  /* 101e55aa call dword ptr [0x101eb028] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb028))), 0x101e55b0u);
  /* 101e55b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e55b2 je 0x101e55c9 */
  if (C.zf) goto L_101e55c9;
  /* 101e55b4 push esi */
  push32((uint32_t)(ESI));
  /* 101e55b5 call 0x101e5563 */
  push32(0x101e55bau); f_101e5563();
  /* 101e55ba pop ecx */
  ECX = (pop32());
  /* 101e55bb call dword ptr [0x101eb024] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb024))), 0x101e55c1u);
  /* 101e55c1 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 101e55c5 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101e55c7 jmp 0x101e55d1 */
  goto L_101e55d1;
L_101e55c9:;
  /* 101e55c9 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101e55cb call 0x101e45df */
  push32(0x101e55d0u); f_101e45df();
  /* 101e55d0 pop ecx */
  ECX = (pop32());
L_101e55d1:;
  /* 101e55d1 push edi */
  push32((uint32_t)(EDI));
  /* 101e55d2 call dword ptr [0x101eb034] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb034))), 0x101e55d8u);
  /* 101e55d8 mov eax, esi */
  EAX = (ESI);
  /* 101e55da pop edi */
  EDI = (pop32());
  /* 101e55db pop esi */
  ESI = (pop32());
  /* 101e55dc ret  */
  ESPCHK(0x101e5576u, _esp0);
  ESP += 4; return;
}

/* FUN_100055dd @ 0x101e55dd (160 bytes, 62 insns) */
void f_101e55dd(void) {
  FTRACE(0x101e55ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e55dd mov eax, dword ptr [0x101ed3a8] */
  EAX = (r32((uint32_t)(0x101ed3a8)));
  /* 101e55e2 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e55e5 je 0x101e567c */
  if (C.zf) goto L_101e567c;
  /* 101e55eb push esi */
  push32((uint32_t)(ESI));
  /* 101e55ec mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e55f0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e55f2 jne 0x101e5601 */
  if (!C.zf) goto L_101e5601;
  /* 101e55f4 push eax */
  push32((uint32_t)(EAX));
  /* 101e55f5 call dword ptr [0x101eb038] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb038))), 0x101e55fbu);
  /* 101e55fb mov esi, eax */
  ESI = (EAX);
  /* 101e55fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e55ff je 0x101e566d */
  if (C.zf) goto L_101e566d;
L_101e5601:;
  /* 101e5601 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 101e5604 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5606 je 0x101e560f */
  if (C.zf) goto L_101e560f;
  /* 101e5608 push eax */
  push32((uint32_t)(EAX));
  /* 101e5609 call 0x101e747d */
  push32(0x101e560eu); f_101e747d();
  /* 101e560e pop ecx */
  ECX = (pop32());
L_101e560f:;
  /* 101e560f mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 101e5612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5614 je 0x101e561d */
  if (C.zf) goto L_101e561d;
  /* 101e5616 push eax */
  push32((uint32_t)(EAX));
  /* 101e5617 call 0x101e747d */
  push32(0x101e561cu); f_101e747d();
  /* 101e561c pop ecx */
  ECX = (pop32());
L_101e561d:;
  /* 101e561d mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 101e5620 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5622 je 0x101e562b */
  if (C.zf) goto L_101e562b;
  /* 101e5624 push eax */
  push32((uint32_t)(EAX));
  /* 101e5625 call 0x101e747d */
  push32(0x101e562au); f_101e747d();
  /* 101e562a pop ecx */
  ECX = (pop32());
L_101e562b:;
  /* 101e562b mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 101e562e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5630 je 0x101e5639 */
  if (C.zf) goto L_101e5639;
  /* 101e5632 push eax */
  push32((uint32_t)(EAX));
  /* 101e5633 call 0x101e747d */
  push32(0x101e5638u); f_101e747d();
  /* 101e5638 pop ecx */
  ECX = (pop32());
L_101e5639:;
  /* 101e5639 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 101e563c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e563e je 0x101e5647 */
  if (C.zf) goto L_101e5647;
  /* 101e5640 push eax */
  push32((uint32_t)(EAX));
  /* 101e5641 call 0x101e747d */
  push32(0x101e5646u); f_101e747d();
  /* 101e5646 pop ecx */
  ECX = (pop32());
L_101e5647:;
  /* 101e5647 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 101e564a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e564c je 0x101e5655 */
  if (C.zf) goto L_101e5655;
  /* 101e564e push eax */
  push32((uint32_t)(EAX));
  /* 101e564f call 0x101e747d */
  push32(0x101e5654u); f_101e747d();
  /* 101e5654 pop ecx */
  ECX = (pop32());
L_101e5655:;
  /* 101e5655 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 101e5658 cmp eax, 0x101ed9f0 */
  { uint32_t _a=(EAX),_b=(0x101ed9f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e565d je 0x101e5666 */
  if (C.zf) goto L_101e5666;
  /* 101e565f push eax */
  push32((uint32_t)(EAX));
  /* 101e5660 call 0x101e747d */
  push32(0x101e5665u); f_101e747d();
  /* 101e5665 pop ecx */
  ECX = (pop32());
L_101e5666:;
  /* 101e5666 push esi */
  push32((uint32_t)(ESI));
  /* 101e5667 call 0x101e747d */
  push32(0x101e566cu); f_101e747d();
  /* 101e566c pop ecx */
  ECX = (pop32());
L_101e566d:;
  /* 101e566d push 0 */
  push32((uint32_t)(0x0u));
  /* 101e566f push dword ptr [0x101ed3a8] */
  push32((uint32_t)(r32((uint32_t)(0x101ed3a8))));
  /* 101e5675 call dword ptr [0x101eb028] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb028))), 0x101e567bu);
  /* 101e567b pop esi */
  ESI = (pop32());
L_101e567c:;
  /* 101e567c ret  */
  ESPCHK(0x101e55ddu, _esp0);
  ESP += 4; return;
}

/* FUN_1000567d @ 0x101e567d (444 bytes, 150 insns) */
void f_101e567d(void) {
  FTRACE(0x101e567du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e567d push ebp */
  push32((uint32_t)(EBP));
  /* 101e567e mov ebp, esp */
  EBP = (ESP);
  /* 101e5680 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e5683 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5684 push esi */
  push32((uint32_t)(ESI));
  /* 101e5685 push edi */
  push32((uint32_t)(EDI));
  /* 101e5686 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 101e568b call 0x101e74c5 */
  push32(0x101e5690u); f_101e74c5();
  /* 101e5690 mov esi, eax */
  ESI = (EAX);
  /* 101e5692 pop ecx */
  ECX = (pop32());
  /* 101e5693 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5695 jne 0x101e569f */
  if (!C.zf) goto L_101e569f;
  /* 101e5697 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 101e5699 call 0x101e45df */
  push32(0x101e569eu); f_101e45df();
  /* 101e569e pop ecx */
  ECX = (pop32());
L_101e569f:;
  /* 101e569f mov dword ptr [0x101f26e0], esi */
  w32((uint32_t)(0x101f26e0), (ESI));
  /* 101e56a5 mov dword ptr [0x101f27e0], 0x20 */
  w32((uint32_t)(0x101f27e0), (0x20u));
  /* 101e56af lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_101e56b5:;
  /* 101e56b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e56b7 jae 0x101e56d7 */
  if (!C.cf) goto L_101e56d7;
  /* 101e56b9 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101e56bd or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101e56c0 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 101e56c4 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 101e56c8 mov eax, dword ptr [0x101f26e0] */
  EAX = (r32((uint32_t)(0x101f26e0)));
  /* 101e56cd add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e56d0 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e56d5 jmp 0x101e56b5 */
  goto L_101e56b5;
L_101e56d7:;
  /* 101e56d7 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 101e56da push eax */
  push32((uint32_t)(EAX));
  /* 101e56db call dword ptr [0x101eb04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb04c))), 0x101e56e1u);
  /* 101e56e1 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e56e6 je 0x101e57bd */
  if (C.zf) goto L_101e57bd;
  /* 101e56ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 101e56ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e56f1 je 0x101e57bd */
  if (C.zf) goto L_101e57bd;
  /* 101e56f7 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 101e56f9 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 101e56fc lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 101e56ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101e5702 mov eax, 0x800 */
  EAX = (0x800u);
  /* 101e5707 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5709 jl 0x101e570d */
  if ((C.sf!=C.of)) goto L_101e570d;
  /* 101e570b mov edi, eax */
  EDI = (EAX);
L_101e570d:;
  /* 101e570d cmp dword ptr [0x101f27e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x101f27e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5713 jge 0x101e576b */
  if ((C.sf==C.of)) goto L_101e576b;
  /* 101e5715 mov esi, 0x101f26e4 */
  ESI = (0x101f26e4u);
L_101e571a:;
  /* 101e571a push 0x480 */
  push32((uint32_t)(0x480u));
  /* 101e571f call 0x101e74c5 */
  push32(0x101e5724u); f_101e74c5();
  /* 101e5724 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5726 pop ecx */
  ECX = (pop32());
  /* 101e5727 je 0x101e5765 */
  if (C.zf) goto L_101e5765;
  /* 101e5729 add dword ptr [0x101f27e0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x101f27e0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x101f27e0), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e5730 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101e5732 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_101e5738:;
  /* 101e5738 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e573a jae 0x101e5758 */
  if (!C.cf) goto L_101e5758;
  /* 101e573c and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 101e5740 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e5743 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 101e5747 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 101e574b mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 101e574d add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5750 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5756 jmp 0x101e5738 */
  goto L_101e5738;
L_101e5758:;
  /* 101e5758 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e575b cmp dword ptr [0x101f27e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x101f27e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5761 jl 0x101e571a */
  if ((C.sf!=C.of)) goto L_101e571a;
  /* 101e5763 jmp 0x101e576b */
  goto L_101e576b;
L_101e5765:;
  /* 101e5765 mov edi, dword ptr [0x101f27e0] */
  EDI = (r32((uint32_t)(0x101f27e0)));
L_101e576b:;
  /* 101e576b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e576d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e576f jle 0x101e57bd */
  if ((C.zf||C.sf!=C.of)) goto L_101e57bd;
L_101e5771:;
  /* 101e5771 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e5774 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 101e5776 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5779 je 0x101e57b3 */
  if (C.zf) goto L_101e57b3;
  /* 101e577b mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 101e577d test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 101e577f je 0x101e57b3 */
  if (C.zf) goto L_101e57b3;
  /* 101e5781 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 101e5783 jne 0x101e5790 */
  if (!C.zf) goto L_101e5790;
  /* 101e5785 push ecx */
  push32((uint32_t)(ECX));
  /* 101e5786 call dword ptr [0x101eb048] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb048))), 0x101e578cu);
  /* 101e578c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e578e je 0x101e57b3 */
  if (C.zf) goto L_101e57b3;
L_101e5790:;
  /* 101e5790 mov ecx, esi */
  ECX = (ESI);
  /* 101e5792 mov eax, esi */
  EAX = (ESI);
  /* 101e5794 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e5797 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e579a mov ecx, dword ptr [ecx*4 + 0x101f26e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e57a1 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101e57a4 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 101e57a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e57aa mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 101e57ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101e57ae mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 101e57b0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_101e57b3:;
  /* 101e57b3 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e57b7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e57b8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101e57b9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e57bb jl 0x101e5771 */
  if ((C.sf!=C.of)) goto L_101e5771;
L_101e57bd:;
  /* 101e57bd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101e57bf:;
  /* 101e57bf mov ecx, dword ptr [0x101f26e0] */
  ECX = (r32((uint32_t)(0x101f26e0)));
  /* 101e57c5 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 101e57c8 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e57cc lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 101e57cf jne 0x101e581e */
  if (!C.zf) goto L_101e581e;
  /* 101e57d1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e57d3 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 101e57d7 jne 0x101e57de */
  if (!C.zf) goto L_101e57de;
  /* 101e57d9 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 101e57db pop eax */
  EAX = (pop32());
  /* 101e57dc jmp 0x101e57e8 */
  goto L_101e57e8;
L_101e57de:;
  /* 101e57de mov eax, ebx */
  EAX = (EBX);
  /* 101e57e0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e57e1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e57e3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e57e5 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101e57e8:;
  /* 101e57e8 push eax */
  push32((uint32_t)(EAX));
  /* 101e57e9 call dword ptr [0x101eb044] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb044))), 0x101e57efu);
  /* 101e57ef mov edi, eax */
  EDI = (EAX);
  /* 101e57f1 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e57f4 je 0x101e580d */
  if (C.zf) goto L_101e580d;
  /* 101e57f6 push edi */
  push32((uint32_t)(EDI));
  /* 101e57f7 call dword ptr [0x101eb048] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb048))), 0x101e57fdu);
  /* 101e57fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e57ff je 0x101e580d */
  if (C.zf) goto L_101e580d;
  /* 101e5801 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e5806 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101e5808 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e580b jne 0x101e5813 */
  if (!C.zf) goto L_101e5813;
L_101e580d:;
  /* 101e580d or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101e5811 jmp 0x101e5822 */
  goto L_101e5822;
L_101e5813:;
  /* 101e5813 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5816 jne 0x101e5822 */
  if (!C.zf) goto L_101e5822;
  /* 101e5818 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 101e581c jmp 0x101e5822 */
  goto L_101e5822;
L_101e581e:;
  /* 101e581e or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_101e5822:;
  /* 101e5822 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101e5823 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5826 jl 0x101e57bf */
  if ((C.sf!=C.of)) goto L_101e57bf;
  /* 101e5828 push dword ptr [0x101f27e0] */
  push32((uint32_t)(r32((uint32_t)(0x101f27e0))));
  /* 101e582e call dword ptr [0x101eb040] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb040))), 0x101e5834u);
  /* 101e5834 pop edi */
  EDI = (pop32());
  /* 101e5835 pop esi */
  ESI = (pop32());
  /* 101e5836 pop ebx */
  EBX = (pop32());
  /* 101e5837 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e5838 ret  */
  ESPCHK(0x101e567du, _esp0);
  ESP += 4; return;
}

/* FUN_10005839 @ 0x101e5839 (84 bytes, 33 insns) */
void f_101e5839(void) {
  FTRACE(0x101e5839u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5839 push ebx */
  push32((uint32_t)(EBX));
  /* 101e583a push esi */
  push32((uint32_t)(ESI));
  /* 101e583b push edi */
  push32((uint32_t)(EDI));
  /* 101e583c mov esi, 0x101f26e0 */
  ESI = (0x101f26e0u);
L_101e5841:;
  /* 101e5841 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101e5843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5845 je 0x101e587e */
  if (C.zf) goto L_101e587e;
  /* 101e5847 mov edi, eax */
  EDI = (EAX);
  /* 101e5849 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e584e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5850 jae 0x101e5873 */
  if (!C.cf) goto L_101e5873;
  /* 101e5852 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_101e5855:;
  /* 101e5855 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5859 je 0x101e5862 */
  if (C.zf) goto L_101e5862;
  /* 101e585b push ebx */
  push32((uint32_t)(EBX));
  /* 101e585c call dword ptr [0x101eb050] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb050))), 0x101e5862u);
L_101e5862:;
  /* 101e5862 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101e5864 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5867 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e586c add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e586f cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5871 jb 0x101e5855 */
  if (C.cf) goto L_101e5855;
L_101e5873:;
  /* 101e5873 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101e5875 call 0x101e747d */
  push32(0x101e587au); f_101e747d();
  /* 101e587a and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 101e587d pop ecx */
  ECX = (pop32());
L_101e587e:;
  /* 101e587e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5881 cmp esi, 0x101f27e0 */
  { uint32_t _a=(ESI),_b=(0x101f27e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5887 jl 0x101e5841 */
  if ((C.sf!=C.of)) goto L_101e5841;
  /* 101e5889 pop edi */
  EDI = (pop32());
  /* 101e588a pop esi */
  ESI = (pop32());
  /* 101e588b pop ebx */
  EBX = (pop32());
  /* 101e588c ret  */
  ESPCHK(0x101e5839u, _esp0);
  ESP += 4; return;
}

/* FUN_1000588d @ 0x101e588d (185 bytes, 71 insns) */
void f_101e588d(void) {
  FTRACE(0x101e588du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e588d push ebx */
  push32((uint32_t)(EBX));
  /* 101e588e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e5890 cmp dword ptr [0x101f27e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f27e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5896 push esi */
  push32((uint32_t)(ESI));
  /* 101e5897 push edi */
  push32((uint32_t)(EDI));
  /* 101e5898 jne 0x101e589f */
  if (!C.zf) goto L_101e589f;
  /* 101e589a call 0x101e7929 */
  push32(0x101e589fu); f_101e7929();
L_101e589f:;
  /* 101e589f mov esi, dword ptr [0x101f10f4] */
  ESI = (r32((uint32_t)(0x101f10f4)));
  /* 101e58a5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101e58a7:;
  /* 101e58a7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e58a9 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e58ab je 0x101e58bf */
  if (C.zf) goto L_101e58bf;
  /* 101e58ad cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e58af je 0x101e58b2 */
  if (C.zf) goto L_101e58b2;
  /* 101e58b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_101e58b2:;
  /* 101e58b2 push esi */
  push32((uint32_t)(ESI));
  /* 101e58b3 call 0x101e6c20 */
  push32(0x101e58b8u); f_101e6c20();
  /* 101e58b8 pop ecx */
  ECX = (pop32());
  /* 101e58b9 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 101e58bd jmp 0x101e58a7 */
  goto L_101e58a7;
L_101e58bf:;
  /* 101e58bf lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 101e58c6 push eax */
  push32((uint32_t)(EAX));
  /* 101e58c7 call 0x101e74c5 */
  push32(0x101e58ccu); f_101e74c5();
  /* 101e58cc mov esi, eax */
  ESI = (EAX);
  /* 101e58ce pop ecx */
  ECX = (pop32());
  /* 101e58cf cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e58d1 mov dword ptr [0x101f1124], esi */
  w32((uint32_t)(0x101f1124), (ESI));
  /* 101e58d7 jne 0x101e58e1 */
  if (!C.zf) goto L_101e58e1;
  /* 101e58d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 101e58db call 0x101e45df */
  push32(0x101e58e0u); f_101e45df();
  /* 101e58e0 pop ecx */
  ECX = (pop32());
L_101e58e1:;
  /* 101e58e1 mov edi, dword ptr [0x101f10f4] */
  EDI = (r32((uint32_t)(0x101f10f4)));
  /* 101e58e7 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e58e9 je 0x101e5924 */
  if (C.zf) goto L_101e5924;
  /* 101e58eb push ebp */
  push32((uint32_t)(EBP));
L_101e58ec:;
  /* 101e58ec push edi */
  push32((uint32_t)(EDI));
  /* 101e58ed call 0x101e6c20 */
  push32(0x101e58f2u); f_101e6c20();
  /* 101e58f2 mov ebp, eax */
  EBP = (EAX);
  /* 101e58f4 pop ecx */
  ECX = (pop32());
  /* 101e58f5 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 101e58f6 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e58f9 je 0x101e591d */
  if (C.zf) goto L_101e591d;
  /* 101e58fb push ebp */
  push32((uint32_t)(EBP));
  /* 101e58fc call 0x101e74c5 */
  push32(0x101e5901u); f_101e74c5();
  /* 101e5901 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5903 pop ecx */
  ECX = (pop32());
  /* 101e5904 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101e5906 jne 0x101e5910 */
  if (!C.zf) goto L_101e5910;
  /* 101e5908 push 9 */
  push32((uint32_t)(0x9u));
  /* 101e590a call 0x101e45df */
  push32(0x101e590fu); f_101e45df();
  /* 101e590f pop ecx */
  ECX = (pop32());
L_101e5910:;
  /* 101e5910 push edi */
  push32((uint32_t)(EDI));
  /* 101e5911 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101e5913 call 0x101e6790 */
  push32(0x101e5918u); f_101e6790();
  /* 101e5918 pop ecx */
  ECX = (pop32());
  /* 101e5919 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e591c pop ecx */
  ECX = (pop32());
L_101e591d:;
  /* 101e591d add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e591f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5921 jne 0x101e58ec */
  if (!C.zf) goto L_101e58ec;
  /* 101e5923 pop ebp */
  EBP = (pop32());
L_101e5924:;
  /* 101e5924 push dword ptr [0x101f10f4] */
  push32((uint32_t)(r32((uint32_t)(0x101f10f4))));
  /* 101e592a call 0x101e747d */
  push32(0x101e592fu); f_101e747d();
  /* 101e592f pop ecx */
  ECX = (pop32());
  /* 101e5930 mov dword ptr [0x101f10f4], ebx */
  w32((uint32_t)(0x101f10f4), (EBX));
  /* 101e5936 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 101e5938 pop edi */
  EDI = (pop32());
  /* 101e5939 pop esi */
  ESI = (pop32());
  /* 101e593a mov dword ptr [0x101f27e4], 1 */
  w32((uint32_t)(0x101f27e4), (0x1u));
  /* 101e5944 pop ebx */
  EBX = (pop32());
  /* 101e5945 ret  */
  ESPCHK(0x101e588du, _esp0);
  ESP += 4; return;
}

/* FUN_10005946 @ 0x101e5946 (153 bytes, 62 insns) */
void f_101e5946(void) {
  FTRACE(0x101e5946u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5946 push ebp */
  push32((uint32_t)(EBP));
  /* 101e5947 mov ebp, esp */
  EBP = (ESP);
  /* 101e5949 push ecx */
  push32((uint32_t)(ECX));
  /* 101e594a push ecx */
  push32((uint32_t)(ECX));
  /* 101e594b push ebx */
  push32((uint32_t)(EBX));
  /* 101e594c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e594e cmp dword ptr [0x101f27e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f27e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5954 push esi */
  push32((uint32_t)(ESI));
  /* 101e5955 push edi */
  push32((uint32_t)(EDI));
  /* 101e5956 jne 0x101e595d */
  if (!C.zf) goto L_101e595d;
  /* 101e5958 call 0x101e7929 */
  push32(0x101e595du); f_101e7929();
L_101e595d:;
  /* 101e595d mov esi, 0x101f1148 */
  ESI = (0x101f1148u);
  /* 101e5962 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101e5967 push esi */
  push32((uint32_t)(ESI));
  /* 101e5968 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5969 call dword ptr [0x101eb054] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb054))), 0x101e596fu);
  /* 101e596f mov eax, dword ptr [0x101f27f4] */
  EAX = (r32((uint32_t)(0x101f27f4)));
  /* 101e5974 mov dword ptr [0x101f1134], esi */
  w32((uint32_t)(0x101f1134), (ESI));
  /* 101e597a mov edi, esi */
  EDI = (ESI);
  /* 101e597c cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e597e je 0x101e5982 */
  if (C.zf) goto L_101e5982;
  /* 101e5980 mov edi, eax */
  EDI = (EAX);
L_101e5982:;
  /* 101e5982 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101e5985 push eax */
  push32((uint32_t)(EAX));
  /* 101e5986 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101e5989 push eax */
  push32((uint32_t)(EAX));
  /* 101e598a push ebx */
  push32((uint32_t)(EBX));
  /* 101e598b push ebx */
  push32((uint32_t)(EBX));
  /* 101e598c push edi */
  push32((uint32_t)(EDI));
  /* 101e598d call 0x101e59df */
  push32(0x101e5992u); f_101e59df();
  /* 101e5992 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e5995 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e5998 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 101e599b push eax */
  push32((uint32_t)(EAX));
  /* 101e599c call 0x101e74c5 */
  push32(0x101e59a1u); f_101e74c5();
  /* 101e59a1 mov esi, eax */
  ESI = (EAX);
  /* 101e59a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e59a6 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e59a8 jne 0x101e59b2 */
  if (!C.zf) goto L_101e59b2;
  /* 101e59aa push 8 */
  push32((uint32_t)(0x8u));
  /* 101e59ac call 0x101e45df */
  push32(0x101e59b1u); f_101e45df();
  /* 101e59b1 pop ecx */
  ECX = (pop32());
L_101e59b2:;
  /* 101e59b2 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 101e59b5 push eax */
  push32((uint32_t)(EAX));
  /* 101e59b6 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101e59b9 push eax */
  push32((uint32_t)(EAX));
  /* 101e59ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e59bd lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 101e59c0 push eax */
  push32((uint32_t)(EAX));
  /* 101e59c1 push esi */
  push32((uint32_t)(ESI));
  /* 101e59c2 push edi */
  push32((uint32_t)(EDI));
  /* 101e59c3 call 0x101e59df */
  push32(0x101e59c8u); f_101e59df();
  /* 101e59c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e59cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e59ce dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e59cf mov dword ptr [0x101f111c], esi */
  w32((uint32_t)(0x101f111c), (ESI));
  /* 101e59d5 pop edi */
  EDI = (pop32());
  /* 101e59d6 pop esi */
  ESI = (pop32());
  /* 101e59d7 mov dword ptr [0x101f1118], eax */
  w32((uint32_t)(0x101f1118), (EAX));
  /* 101e59dc pop ebx */
  EBX = (pop32());
  /* 101e59dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e59de ret  */
  ESPCHK(0x101e5946u, _esp0);
  ESP += 4; return;
}

/* FUN_100059df @ 0x101e59df (436 bytes, 187 insns) */
void f_101e59df(void) {
  FTRACE(0x101e59dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e59df push ebp */
  push32((uint32_t)(EBP));
  /* 101e59e0 mov ebp, esp */
  EBP = (ESP);
  /* 101e59e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 101e59e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101e59e8 push ebx */
  push32((uint32_t)(EBX));
  /* 101e59e9 push esi */
  push32((uint32_t)(ESI));
  /* 101e59ea and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 101e59ed mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e59f0 push edi */
  push32((uint32_t)(EDI));
  /* 101e59f1 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e59f4 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 101e59fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e59fd test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e59ff je 0x101e5a09 */
  if (C.zf) goto L_101e5a09;
  /* 101e5a01 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101e5a03 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5a06 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101e5a09:;
  /* 101e5a09 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5a0c jne 0x101e5a52 */
  if (!C.zf) goto L_101e5a52;
L_101e5a0e:;
  /* 101e5a0e mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 101e5a11 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5a12 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5a15 je 0x101e5a40 */
  if (C.zf) goto L_101e5a40;
  /* 101e5a17 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e5a19 je 0x101e5a40 */
  if (C.zf) goto L_101e5a40;
  /* 101e5a1b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 101e5a1e test byte ptr [edx + 0x101f15a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x101f15a1)))&(0x4u); fl_logic(_r,8); }
  /* 101e5a25 je 0x101e5a33 */
  if (C.zf) goto L_101e5a33;
  /* 101e5a27 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101e5a29 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5a2b je 0x101e5a33 */
  if (C.zf) goto L_101e5a33;
  /* 101e5a2d mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101e5a2f mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101e5a31 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e5a32 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_101e5a33:;
  /* 101e5a33 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101e5a35 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5a37 je 0x101e5a0e */
  if (C.zf) goto L_101e5a0e;
  /* 101e5a39 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101e5a3b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101e5a3d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e5a3e jmp 0x101e5a0e */
  goto L_101e5a0e;
L_101e5a40:;
  /* 101e5a40 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101e5a42 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5a44 je 0x101e5a4a */
  if (C.zf) goto L_101e5a4a;
  /* 101e5a46 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 101e5a49 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101e5a4a:;
  /* 101e5a4a cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5a4d jne 0x101e5a95 */
  if (!C.zf) goto L_101e5a95;
  /* 101e5a4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5a50 jmp 0x101e5a95 */
  goto L_101e5a95;
L_101e5a52:;
  /* 101e5a52 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101e5a54 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5a56 je 0x101e5a5d */
  if (C.zf) goto L_101e5a5d;
  /* 101e5a58 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101e5a5a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101e5a5c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101e5a5d:;
  /* 101e5a5d mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101e5a5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5a60 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 101e5a63 test byte ptr [ebx + 0x101f15a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x101f15a1)))&(0x4u); fl_logic(_r,8); }
  /* 101e5a6a je 0x101e5a78 */
  if (C.zf) goto L_101e5a78;
  /* 101e5a6c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101e5a6e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5a70 je 0x101e5a77 */
  if (C.zf) goto L_101e5a77;
  /* 101e5a72 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 101e5a74 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 101e5a76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101e5a77:;
  /* 101e5a77 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_101e5a78:;
  /* 101e5a78 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5a7b je 0x101e5a86 */
  if (C.zf) goto L_101e5a86;
  /* 101e5a7d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e5a7f je 0x101e5a8a */
  if (C.zf) goto L_101e5a8a;
  /* 101e5a81 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5a84 jne 0x101e5a52 */
  if (!C.zf) goto L_101e5a52;
L_101e5a86:;
  /* 101e5a86 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e5a88 jne 0x101e5a8d */
  if (!C.zf) goto L_101e5a8d;
L_101e5a8a:;
  /* 101e5a8a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e5a8b jmp 0x101e5a95 */
  goto L_101e5a95;
L_101e5a8d:;
  /* 101e5a8d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5a8f je 0x101e5a95 */
  if (C.zf) goto L_101e5a95;
  /* 101e5a91 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_101e5a95:;
  /* 101e5a95 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_101e5a99:;
  /* 101e5a99 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5a9c je 0x101e5b82 */
  if (C.zf) goto L_101e5b82;
L_101e5aa2:;
  /* 101e5aa2 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101e5aa4 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5aa7 je 0x101e5aae */
  if (C.zf) goto L_101e5aae;
  /* 101e5aa9 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5aac jne 0x101e5ab1 */
  if (!C.zf) goto L_101e5ab1;
L_101e5aae:;
  /* 101e5aae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5aaf jmp 0x101e5aa2 */
  goto L_101e5aa2;
L_101e5ab1:;
  /* 101e5ab1 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5ab4 je 0x101e5b82 */
  if (C.zf) goto L_101e5b82;
  /* 101e5aba test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e5abc je 0x101e5ac6 */
  if (C.zf) goto L_101e5ac6;
  /* 101e5abe mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 101e5ac0 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5ac3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_101e5ac6:;
  /* 101e5ac6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 101e5ac9 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_101e5acb:;
  /* 101e5acb mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 101e5ad2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101e5ad4:;
  /* 101e5ad4 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5ad7 jne 0x101e5add */
  if (!C.zf) goto L_101e5add;
  /* 101e5ad9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5ada inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101e5adb jmp 0x101e5ad4 */
  goto L_101e5ad4;
L_101e5add:;
  /* 101e5add cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5ae0 jne 0x101e5b0e */
  if (!C.zf) goto L_101e5b0e;
  /* 101e5ae2 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101e5ae5 jne 0x101e5b0c */
  if (!C.zf) goto L_101e5b0c;
  /* 101e5ae7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e5ae9 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5aec je 0x101e5afb */
  if (C.zf) goto L_101e5afb;
  /* 101e5aee cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5af2 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 101e5af5 jne 0x101e5afb */
  if (!C.zf) goto L_101e5afb;
  /* 101e5af7 mov eax, edx */
  EAX = (EDX);
  /* 101e5af9 jmp 0x101e5afe */
  goto L_101e5afe;
L_101e5afb:;
  /* 101e5afb mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_101e5afe:;
  /* 101e5afe mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e5b01 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e5b03 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5b06 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 101e5b09 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_101e5b0c:;
  /* 101e5b0c shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_101e5b0e:;
  /* 101e5b0e mov edx, ebx */
  EDX = (EBX);
  /* 101e5b10 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e5b11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101e5b13 je 0x101e5b23 */
  if (C.zf) goto L_101e5b23;
  /* 101e5b15 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101e5b16:;
  /* 101e5b16 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5b18 je 0x101e5b1e */
  if (C.zf) goto L_101e5b1e;
  /* 101e5b1a mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 101e5b1d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101e5b1e:;
  /* 101e5b1e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101e5b20 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e5b21 jne 0x101e5b16 */
  if (!C.zf) goto L_101e5b16;
L_101e5b23:;
  /* 101e5b23 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101e5b25 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e5b27 je 0x101e5b73 */
  if (C.zf) goto L_101e5b73;
  /* 101e5b29 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5b2d jne 0x101e5b39 */
  if (!C.zf) goto L_101e5b39;
  /* 101e5b2f cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5b32 je 0x101e5b73 */
  if (C.zf) goto L_101e5b73;
  /* 101e5b34 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5b37 je 0x101e5b73 */
  if (C.zf) goto L_101e5b73;
L_101e5b39:;
  /* 101e5b39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5b3d je 0x101e5b6d */
  if (C.zf) goto L_101e5b6d;
  /* 101e5b3f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5b41 je 0x101e5b5c */
  if (C.zf) goto L_101e5b5c;
  /* 101e5b43 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 101e5b46 test byte ptr [ebx + 0x101f15a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x101f15a1)))&(0x4u); fl_logic(_r,8); }
  /* 101e5b4d je 0x101e5b55 */
  if (C.zf) goto L_101e5b55;
  /* 101e5b4f mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101e5b51 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e5b52 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5b53 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_101e5b55:;
  /* 101e5b55 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 101e5b57 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 101e5b59 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e5b5a jmp 0x101e5b6b */
  goto L_101e5b6b;
L_101e5b5c:;
  /* 101e5b5c movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 101e5b5f test byte ptr [edx + 0x101f15a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x101f15a1)))&(0x4u); fl_logic(_r,8); }
  /* 101e5b66 je 0x101e5b6b */
  if (C.zf) goto L_101e5b6b;
  /* 101e5b68 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5b69 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_101e5b6b:;
  /* 101e5b6b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_101e5b6d:;
  /* 101e5b6d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5b6e jmp 0x101e5acb */
  goto L_101e5acb;
L_101e5b73:;
  /* 101e5b73 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e5b75 je 0x101e5b7b */
  if (C.zf) goto L_101e5b7b;
  /* 101e5b77 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 101e5b7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_101e5b7b:;
  /* 101e5b7b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 101e5b7d jmp 0x101e5a99 */
  goto L_101e5a99;
L_101e5b82:;
  /* 101e5b82 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e5b84 je 0x101e5b89 */
  if (C.zf) goto L_101e5b89;
  /* 101e5b86 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_101e5b89:;
  /* 101e5b89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 101e5b8c pop edi */
  EDI = (pop32());
  /* 101e5b8d pop esi */
  ESI = (pop32());
  /* 101e5b8e pop ebx */
  EBX = (pop32());
  /* 101e5b8f inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 101e5b91 pop ebp */
  EBP = (pop32());
  /* 101e5b92 ret  */
  ESPCHK(0x101e59dfu, _esp0);
  ESP += 4; return;
}

/* FUN_10005b93 @ 0x101e5b93 (306 bytes, 132 insns) */
void f_101e5b93(void) {
  FTRACE(0x101e5b93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5b93 push ecx */
  push32((uint32_t)(ECX));
  /* 101e5b94 push ecx */
  push32((uint32_t)(ECX));
  /* 101e5b95 mov eax, dword ptr [0x101f124c] */
  EAX = (r32((uint32_t)(0x101f124c)));
  /* 101e5b9a push ebx */
  push32((uint32_t)(EBX));
  /* 101e5b9b push ebp */
  push32((uint32_t)(EBP));
  /* 101e5b9c mov ebp, dword ptr [0x101eb068] */
  EBP = (r32((uint32_t)(0x101eb068)));
  /* 101e5ba2 push esi */
  push32((uint32_t)(ESI));
  /* 101e5ba3 push edi */
  push32((uint32_t)(EDI));
  /* 101e5ba4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e5ba6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e5ba8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e5baa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5bac jne 0x101e5be1 */
  if (!C.zf) goto L_101e5be1;
  /* 101e5bae call ebp */
  call_ind((uint32_t)(EBP), 0x101e5bb0u);
  /* 101e5bb0 mov esi, eax */
  ESI = (EAX);
  /* 101e5bb2 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5bb4 je 0x101e5bc2 */
  if (C.zf) goto L_101e5bc2;
  /* 101e5bb6 mov dword ptr [0x101f124c], 1 */
  w32((uint32_t)(0x101f124c), (0x1u));
  /* 101e5bc0 jmp 0x101e5bea */
  goto L_101e5bea;
L_101e5bc2:;
  /* 101e5bc2 call dword ptr [0x101eb064] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb064))), 0x101e5bc8u);
  /* 101e5bc8 mov edi, eax */
  EDI = (EAX);
  /* 101e5bca cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5bcc je 0x101e5cbc */
  if (C.zf) goto L_101e5cbc;
  /* 101e5bd2 mov dword ptr [0x101f124c], 2 */
  w32((uint32_t)(0x101f124c), (0x2u));
  /* 101e5bdc jmp 0x101e5c70 */
  goto L_101e5c70;
L_101e5be1:;
  /* 101e5be1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5be4 jne 0x101e5c6b */
  if (!C.zf) goto L_101e5c6b;
L_101e5bea:;
  /* 101e5bea cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5bec jne 0x101e5bfa */
  if (!C.zf) goto L_101e5bfa;
  /* 101e5bee call ebp */
  call_ind((uint32_t)(EBP), 0x101e5bf0u);
  /* 101e5bf0 mov esi, eax */
  ESI = (EAX);
  /* 101e5bf2 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5bf4 je 0x101e5cbc */
  if (C.zf) goto L_101e5cbc;
L_101e5bfa:;
  /* 101e5bfa cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e5bfd mov eax, esi */
  EAX = (ESI);
  /* 101e5bff je 0x101e5c0f */
  if (C.zf) goto L_101e5c0f;
L_101e5c01:;
  /* 101e5c01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5c02 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5c03 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e5c06 jne 0x101e5c01 */
  if (!C.zf) goto L_101e5c01;
  /* 101e5c08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5c09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5c0a cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e5c0d jne 0x101e5c01 */
  if (!C.zf) goto L_101e5c01;
L_101e5c0f:;
  /* 101e5c0f sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e5c11 mov edi, dword ptr [0x101eb060] */
  EDI = (r32((uint32_t)(0x101eb060)));
  /* 101e5c17 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 101e5c19 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c1a push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c1b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5c1c push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c1d push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c1e push eax */
  push32((uint32_t)(EAX));
  /* 101e5c1f push esi */
  push32((uint32_t)(ESI));
  /* 101e5c20 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c21 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c22 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 101e5c26 call edi */
  call_ind((uint32_t)(EDI), 0x101e5c28u);
  /* 101e5c28 mov ebp, eax */
  EBP = (EAX);
  /* 101e5c2a cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5c2c je 0x101e5c60 */
  if (C.zf) goto L_101e5c60;
  /* 101e5c2e push ebp */
  push32((uint32_t)(EBP));
  /* 101e5c2f call 0x101e74c5 */
  push32(0x101e5c34u); f_101e74c5();
  /* 101e5c34 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5c36 pop ecx */
  ECX = (pop32());
  /* 101e5c37 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101e5c3b je 0x101e5c60 */
  if (C.zf) goto L_101e5c60;
  /* 101e5c3d push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c3e push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c3f push ebp */
  push32((uint32_t)(EBP));
  /* 101e5c40 push eax */
  push32((uint32_t)(EAX));
  /* 101e5c41 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 101e5c45 push esi */
  push32((uint32_t)(ESI));
  /* 101e5c46 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c47 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5c48 call edi */
  call_ind((uint32_t)(EDI), 0x101e5c4au);
  /* 101e5c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5c4c jne 0x101e5c5c */
  if (!C.zf) goto L_101e5c5c;
  /* 101e5c4e push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101e5c52 call 0x101e747d */
  push32(0x101e5c57u); f_101e747d();
  /* 101e5c57 pop ecx */
  ECX = (pop32());
  /* 101e5c58 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_101e5c5c:;
  /* 101e5c5c mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_101e5c60:;
  /* 101e5c60 push esi */
  push32((uint32_t)(ESI));
  /* 101e5c61 call dword ptr [0x101eb05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb05c))), 0x101e5c67u);
  /* 101e5c67 mov eax, ebx */
  EAX = (EBX);
  /* 101e5c69 jmp 0x101e5cbe */
  goto L_101e5cbe;
L_101e5c6b:;
  /* 101e5c6b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5c6e jne 0x101e5cbc */
  if (!C.zf) goto L_101e5cbc;
L_101e5c70:;
  /* 101e5c70 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5c72 jne 0x101e5c80 */
  if (!C.zf) goto L_101e5c80;
  /* 101e5c74 call dword ptr [0x101eb064] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb064))), 0x101e5c7au);
  /* 101e5c7a mov edi, eax */
  EDI = (EAX);
  /* 101e5c7c cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5c7e je 0x101e5cbc */
  if (C.zf) goto L_101e5cbc;
L_101e5c80:;
  /* 101e5c80 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5c82 mov eax, edi */
  EAX = (EDI);
  /* 101e5c84 je 0x101e5c90 */
  if (C.zf) goto L_101e5c90;
L_101e5c86:;
  /* 101e5c86 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5c87 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5c89 jne 0x101e5c86 */
  if (!C.zf) goto L_101e5c86;
  /* 101e5c8b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5c8c cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e5c8e jne 0x101e5c86 */
  if (!C.zf) goto L_101e5c86;
L_101e5c90:;
  /* 101e5c90 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e5c92 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5c93 mov ebp, eax */
  EBP = (EAX);
  /* 101e5c95 push ebp */
  push32((uint32_t)(EBP));
  /* 101e5c96 call 0x101e74c5 */
  push32(0x101e5c9bu); f_101e74c5();
  /* 101e5c9b mov esi, eax */
  ESI = (EAX);
  /* 101e5c9d pop ecx */
  ECX = (pop32());
  /* 101e5c9e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5ca0 jne 0x101e5ca6 */
  if (!C.zf) goto L_101e5ca6;
  /* 101e5ca2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e5ca4 jmp 0x101e5cb1 */
  goto L_101e5cb1;
L_101e5ca6:;
  /* 101e5ca6 push ebp */
  push32((uint32_t)(EBP));
  /* 101e5ca7 push edi */
  push32((uint32_t)(EDI));
  /* 101e5ca8 push esi */
  push32((uint32_t)(ESI));
  /* 101e5ca9 call 0x101e7950 */
  push32(0x101e5caeu); f_101e7950();
  /* 101e5cae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e5cb1:;
  /* 101e5cb1 push edi */
  push32((uint32_t)(EDI));
  /* 101e5cb2 call dword ptr [0x101eb058] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb058))), 0x101e5cb8u);
  /* 101e5cb8 mov eax, esi */
  EAX = (ESI);
  /* 101e5cba jmp 0x101e5cbe */
  goto L_101e5cbe;
L_101e5cbc:;
  /* 101e5cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e5cbe:;
  /* 101e5cbe pop edi */
  EDI = (pop32());
  /* 101e5cbf pop esi */
  ESI = (pop32());
  /* 101e5cc0 pop ebp */
  EBP = (pop32());
  /* 101e5cc1 pop ebx */
  EBX = (pop32());
  /* 101e5cc2 pop ecx */
  ECX = (pop32());
  /* 101e5cc3 pop ecx */
  ECX = (pop32());
  /* 101e5cc4 ret  */
  ESPCHK(0x101e5b93u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cc5 @ 0x101e5cc5 (60 bytes, 20 insns) */
void f_101e5cc5(void) {
  FTRACE(0x101e5cc5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5cc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e5cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e5cc9 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5ccd push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101e5cd2 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 101e5cd5 push eax */
  push32((uint32_t)(EAX));
  /* 101e5cd6 call dword ptr [0x101eb070] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb070))), 0x101e5cdcu);
  /* 101e5cdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5cde mov dword ptr [0x101f26c4], eax */
  w32((uint32_t)(0x101f26c4), (EAX));
  /* 101e5ce3 je 0x101e5cfa */
  if (C.zf) goto L_101e5cfa;
  /* 101e5ce5 call 0x101e7c85 */
  push32(0x101e5ceau); f_101e7c85();
  /* 101e5cea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5cec jne 0x101e5cfd */
  if (!C.zf) goto L_101e5cfd;
  /* 101e5cee push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e5cf4 call dword ptr [0x101eb06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb06c))), 0x101e5cfau);
L_101e5cfa:;
  /* 101e5cfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e5cfc ret  */
  ESPCHK(0x101e5cc5u, _esp0);
  ESP += 4; return;
L_101e5cfd:;
  /* 101e5cfd push 1 */
  push32((uint32_t)(0x1u));
  /* 101e5cff pop eax */
  EAX = (pop32());
  /* 101e5d00 ret  */
  ESPCHK(0x101e5cc5u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d01 @ 0x101e5d01 (117 bytes, 38 insns) */
void f_101e5d01(void) {
  FTRACE(0x101e5d01u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5d01 push ebx */
  push32((uint32_t)(EBX));
  /* 101e5d02 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e5d04 cmp dword ptr [0x101f1470], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f1470))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5d0a push ebp */
  push32((uint32_t)(EBP));
  /* 101e5d0b mov ebp, dword ptr [0x101eb078] */
  EBP = (r32((uint32_t)(0x101eb078)));
  /* 101e5d11 jle 0x101e5d57 */
  if ((C.zf||C.sf!=C.of)) goto L_101e5d57;
  /* 101e5d13 mov eax, dword ptr [0x101f1474] */
  EAX = (r32((uint32_t)(0x101f1474)));
  /* 101e5d18 push esi */
  push32((uint32_t)(ESI));
  /* 101e5d19 push edi */
  push32((uint32_t)(EDI));
  /* 101e5d1a mov edi, dword ptr [0x101eb074] */
  EDI = (r32((uint32_t)(0x101eb074)));
  /* 101e5d20 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_101e5d23:;
  /* 101e5d23 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 101e5d28 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 101e5d2d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101e5d2f call edi */
  call_ind((uint32_t)(EDI), 0x101e5d31u);
  /* 101e5d31 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 101e5d36 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e5d38 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101e5d3a call edi */
  call_ind((uint32_t)(EDI), 0x101e5d3cu);
  /* 101e5d3c push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 101e5d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 101e5d41 push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e5d47 call ebp */
  call_ind((uint32_t)(EBP), 0x101e5d49u);
  /* 101e5d49 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5d4c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101e5d4d cmp ebx, dword ptr [0x101f1470] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101f1470))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5d53 jl 0x101e5d23 */
  if ((C.sf!=C.of)) goto L_101e5d23;
  /* 101e5d55 pop edi */
  EDI = (pop32());
  /* 101e5d56 pop esi */
  ESI = (pop32());
L_101e5d57:;
  /* 101e5d57 push dword ptr [0x101f1474] */
  push32((uint32_t)(r32((uint32_t)(0x101f1474))));
  /* 101e5d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 101e5d5f push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e5d65 call ebp */
  call_ind((uint32_t)(EBP), 0x101e5d67u);
  /* 101e5d67 push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e5d6d call dword ptr [0x101eb06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb06c))), 0x101e5d73u);
  /* 101e5d73 pop ebp */
  EBP = (pop32());
  /* 101e5d74 pop ebx */
  EBX = (pop32());
  /* 101e5d75 ret  */
  ESPCHK(0x101e5d01u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d76 @ 0x101e5d76 (57 bytes, 18 insns) */
void f_101e5d76(void) {
  FTRACE(0x101e5d76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5d76 mov eax, dword ptr [0x101f10fc] */
  EAX = (r32((uint32_t)(0x101f10fc)));
  /* 101e5d7b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5d7e je 0x101e5d8d */
  if (C.zf) goto L_101e5d8d;
  /* 101e5d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5d82 jne 0x101e5dae */
  if (!C.zf) goto L_101e5dae;
  /* 101e5d84 cmp dword ptr [0x101f1100], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101f1100))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5d8b jne 0x101e5dae */
  if (!C.zf) goto L_101e5dae;
L_101e5d8d:;
  /* 101e5d8d push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 101e5d92 call 0x101e5daf */
  push32(0x101e5d97u); f_101e5daf();
  /* 101e5d97 mov eax, dword ptr [0x101f1250] */
  EAX = (r32((uint32_t)(0x101f1250)));
  /* 101e5d9c pop ecx */
  ECX = (pop32());
  /* 101e5d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5d9f je 0x101e5da3 */
  if (C.zf) goto L_101e5da3;
  /* 101e5da1 call eax */
  call_ind((uint32_t)(EAX), 0x101e5da3u);
L_101e5da3:;
  /* 101e5da3 push 0xff */
  push32((uint32_t)(0xffu));
  /* 101e5da8 call 0x101e5daf */
  push32(0x101e5dadu); f_101e5daf();
  /* 101e5dad pop ecx */
  ECX = (pop32());
L_101e5dae:;
  /* 101e5dae ret  */
  ESPCHK(0x101e5d76u, _esp0);
  ESP += 4; return;
}

/* FUN_10005daf @ 0x101e5daf (339 bytes, 100 insns) */
void f_101e5daf(void) {
  FTRACE(0x101e5dafu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5daf push ebp */
  push32((uint32_t)(EBP));
  /* 101e5db0 mov ebp, esp */
  EBP = (ESP);
  /* 101e5db2 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e5db8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e5dbb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e5dbd mov eax, 0x101ed3d8 */
  EAX = (0x101ed3d8u);
L_101e5dc2:;
  /* 101e5dc2 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5dc4 je 0x101e5dd1 */
  if (C.zf) goto L_101e5dd1;
  /* 101e5dc6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5dc9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e5dca cmp eax, 0x101ed468 */
  { uint32_t _a=(EAX),_b=(0x101ed468u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5dcf jl 0x101e5dc2 */
  if ((C.sf!=C.of)) goto L_101e5dc2;
L_101e5dd1:;
  /* 101e5dd1 push esi */
  push32((uint32_t)(ESI));
  /* 101e5dd2 mov esi, ecx */
  ESI = (ECX);
  /* 101e5dd4 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 101e5dd7 cmp edx, dword ptr [esi + 0x101ed3d8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x101ed3d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5ddd jne 0x101e5eff */
  if (!C.zf) goto L_101e5eff;
  /* 101e5de3 mov eax, dword ptr [0x101f10fc] */
  EAX = (r32((uint32_t)(0x101f10fc)));
  /* 101e5de8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5deb je 0x101e5ed9 */
  if (C.zf) goto L_101e5ed9;
  /* 101e5df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5df3 jne 0x101e5e02 */
  if (!C.zf) goto L_101e5e02;
  /* 101e5df5 cmp dword ptr [0x101f1100], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101f1100))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5dfc je 0x101e5ed9 */
  if (C.zf) goto L_101e5ed9;
L_101e5e02:;
  /* 101e5e02 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5e08 je 0x101e5eff */
  if (C.zf) goto L_101e5eff;
  /* 101e5e0e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101e5e14 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 101e5e19 push eax */
  push32((uint32_t)(EAX));
  /* 101e5e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 101e5e1c call dword ptr [0x101eb054] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb054))), 0x101e5e22u);
  /* 101e5e22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e5e24 jne 0x101e5e39 */
  if (!C.zf) goto L_101e5e39;
  /* 101e5e26 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101e5e2c push 0x101eb47c */
  push32((uint32_t)(0x101eb47cu));
  /* 101e5e31 push eax */
  push32((uint32_t)(EAX));
  /* 101e5e32 call 0x101e6790 */
  push32(0x101e5e37u); f_101e6790();
  /* 101e5e37 pop ecx */
  ECX = (pop32());
  /* 101e5e38 pop ecx */
  ECX = (pop32());
L_101e5e39:;
  /* 101e5e39 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101e5e3f push edi */
  push32((uint32_t)(EDI));
  /* 101e5e40 push eax */
  push32((uint32_t)(EAX));
  /* 101e5e41 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 101e5e47 call 0x101e6c20 */
  push32(0x101e5e4cu); f_101e6c20();
  /* 101e5e4c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e5e4d pop ecx */
  ECX = (pop32());
  /* 101e5e4e cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5e51 jbe 0x101e5e7c */
  if ((C.cf||C.zf)) goto L_101e5e7c;
  /* 101e5e53 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101e5e59 push eax */
  push32((uint32_t)(EAX));
  /* 101e5e5a call 0x101e6c20 */
  push32(0x101e5e5fu); f_101e6c20();
  /* 101e5e5f mov edi, eax */
  EDI = (EAX);
  /* 101e5e61 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 101e5e67 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e5e6a push 3 */
  push32((uint32_t)(0x3u));
  /* 101e5e6c add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5e6e push 0x101eb478 */
  push32((uint32_t)(0x101eb478u));
  /* 101e5e73 push edi */
  push32((uint32_t)(EDI));
  /* 101e5e74 call 0x101e8560 */
  push32(0x101e5e79u); f_101e8560();
  /* 101e5e79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e5e7c:;
  /* 101e5e7c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101e5e82 push 0x101eb45c */
  push32((uint32_t)(0x101eb45cu));
  /* 101e5e87 push eax */
  push32((uint32_t)(EAX));
  /* 101e5e88 call 0x101e6790 */
  push32(0x101e5e8du); f_101e6790();
  /* 101e5e8d lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101e5e93 push edi */
  push32((uint32_t)(EDI));
  /* 101e5e94 push eax */
  push32((uint32_t)(EAX));
  /* 101e5e95 call 0x101e67a0 */
  push32(0x101e5e9au); f_101e67a0();
  /* 101e5e9a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101e5ea0 push 0x101eb458 */
  push32((uint32_t)(0x101eb458u));
  /* 101e5ea5 push eax */
  push32((uint32_t)(EAX));
  /* 101e5ea6 call 0x101e67a0 */
  push32(0x101e5eabu); f_101e67a0();
  /* 101e5eab push dword ptr [esi + 0x101ed3dc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x101ed3dc))));
  /* 101e5eb1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101e5eb7 push eax */
  push32((uint32_t)(EAX));
  /* 101e5eb8 call 0x101e67a0 */
  push32(0x101e5ebdu); f_101e67a0();
  /* 101e5ebd push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 101e5ec2 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 101e5ec8 push 0x101eb430 */
  push32((uint32_t)(0x101eb430u));
  /* 101e5ecd push eax */
  push32((uint32_t)(EAX));
  /* 101e5ece call 0x101e84ce */
  push32(0x101e5ed3u); f_101e84ce();
  /* 101e5ed3 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e5ed6 pop edi */
  EDI = (pop32());
  /* 101e5ed7 jmp 0x101e5eff */
  goto L_101e5eff;
L_101e5ed9:;
  /* 101e5ed9 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101e5edc lea esi, [esi + 0x101ed3dc] */
  ESI = ((uint32_t)(ESI + 0x101ed3dc));
  /* 101e5ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e5ee4 push eax */
  push32((uint32_t)(EAX));
  /* 101e5ee5 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101e5ee7 call 0x101e6c20 */
  push32(0x101e5eecu); f_101e6c20();
  /* 101e5eec pop ecx */
  ECX = (pop32());
  /* 101e5eed push eax */
  push32((uint32_t)(EAX));
  /* 101e5eee push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101e5ef0 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 101e5ef2 call dword ptr [0x101eb044] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb044))), 0x101e5ef8u);
  /* 101e5ef8 push eax */
  push32((uint32_t)(EAX));
  /* 101e5ef9 call dword ptr [0x101eb07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb07c))), 0x101e5effu);
L_101e5eff:;
  /* 101e5eff pop esi */
  ESI = (pop32());
  /* 101e5f00 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e5f01 ret  */
  ESPCHK(0x101e5dafu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f02 @ 0x101e5f02 (53 bytes, 25 insns) */
void f_101e5f02(void) {
  FTRACE(0x101e5f02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5f02 push ebp */
  push32((uint32_t)(EBP));
  /* 101e5f03 mov ebp, esp */
  EBP = (ESP);
  /* 101e5f05 push ecx */
  push32((uint32_t)(ECX));
  /* 101e5f06 push esi */
  push32((uint32_t)(ESI));
  /* 101e5f07 wait  */
  /* wait (no observable integer/reg state) */
  /* 101e5f08 fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 101e5f0b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 101e5f0e call 0x101e5f4d */
  push32(0x101e5f13u); f_101e5f4d();
  /* 101e5f13 mov esi, eax */
  ESI = (EAX);
  /* 101e5f15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e5f18 not eax */
  EAX = (~(EAX));
  /* 101e5f1a and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 101e5f1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e5f1f and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101e5f22 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 101e5f24 push esi */
  push32((uint32_t)(ESI));
  /* 101e5f25 call 0x101e5fdf */
  push32(0x101e5f2au); f_101e5fdf();
  /* 101e5f2a pop ecx */
  ECX = (pop32());
  /* 101e5f2b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101e5f2e pop ecx */
  ECX = (pop32());
  /* 101e5f2f fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 101e5f32 mov eax, esi */
  EAX = (ESI);
  /* 101e5f34 pop esi */
  ESI = (pop32());
  /* 101e5f35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e5f36 ret  */
  ESPCHK(0x101e5f02u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f37 @ 0x101e5f37 (22 bytes, 8 insns) */
void f_101e5f37(void) {
  FTRACE(0x101e5f37u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5f37 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e5f3b and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e5f40 push eax */
  push32((uint32_t)(EAX));
  /* 101e5f41 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101e5f45 call 0x101e5f02 */
  push32(0x101e5f4au); f_101e5f02();
  /* 101e5f4a pop ecx */
  ECX = (pop32());
  /* 101e5f4b pop ecx */
  ECX = (pop32());
  /* 101e5f4c ret  */
  ESPCHK(0x101e5f37u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f4d @ 0x101e5f4d (146 bytes, 58 insns) */
void f_101e5f4d(void) {
  FTRACE(0x101e5f4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5f4d push ebx */
  push32((uint32_t)(EBX));
  /* 101e5f4e mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e5f52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e5f54 push ebp */
  push32((uint32_t)(EBP));
  /* 101e5f55 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101e5f58 push edi */
  push32((uint32_t)(EDI));
  /* 101e5f59 je 0x101e5f5e */
  if (C.zf) goto L_101e5f5e;
  /* 101e5f5b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 101e5f5d pop eax */
  EAX = (pop32());
L_101e5f5e:;
  /* 101e5f5e test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101e5f61 je 0x101e5f65 */
  if (C.zf) goto L_101e5f65;
  /* 101e5f63 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101e5f65:;
  /* 101e5f65 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101e5f68 je 0x101e5f6c */
  if (C.zf) goto L_101e5f6c;
  /* 101e5f6a or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101e5f6c:;
  /* 101e5f6c test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101e5f6f je 0x101e5f73 */
  if (C.zf) goto L_101e5f73;
  /* 101e5f71 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101e5f73:;
  /* 101e5f73 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 101e5f76 je 0x101e5f7a */
  if (C.zf) goto L_101e5f7a;
  /* 101e5f78 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_101e5f7a:;
  /* 101e5f7a test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101e5f7d je 0x101e5f84 */
  if (C.zf) goto L_101e5f84;
  /* 101e5f7f or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_101e5f84:;
  /* 101e5f84 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 101e5f87 push esi */
  push32((uint32_t)(ESI));
  /* 101e5f88 mov edx, ecx */
  EDX = (ECX);
  /* 101e5f8a mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 101e5f8f mov edi, 0x300 */
  EDI = (0x300u);
  /* 101e5f94 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 101e5f96 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 101e5f9b je 0x101e5fbc */
  if (C.zf) goto L_101e5fbc;
  /* 101e5f9d cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5fa3 je 0x101e5fb9 */
  if (C.zf) goto L_101e5fb9;
  /* 101e5fa5 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5fab je 0x101e5fb5 */
  if (C.zf) goto L_101e5fb5;
  /* 101e5fad cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5faf jne 0x101e5fbc */
  if (!C.zf) goto L_101e5fbc;
  /* 101e5fb1 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 101e5fb3 jmp 0x101e5fbc */
  goto L_101e5fbc;
L_101e5fb5:;
  /* 101e5fb5 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 101e5fb7 jmp 0x101e5fbc */
  goto L_101e5fbc;
L_101e5fb9:;
  /* 101e5fb9 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_101e5fbc:;
  /* 101e5fbc and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101e5fbe pop esi */
  ESI = (pop32());
  /* 101e5fbf je 0x101e5fcc */
  if (C.zf) goto L_101e5fcc;
  /* 101e5fc1 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e5fc3 jne 0x101e5fd1 */
  if (!C.zf) goto L_101e5fd1;
  /* 101e5fc5 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 101e5fca jmp 0x101e5fd1 */
  goto L_101e5fd1;
L_101e5fcc:;
  /* 101e5fcc or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_101e5fd1:;
  /* 101e5fd1 pop edi */
  EDI = (pop32());
  /* 101e5fd2 pop ebp */
  EBP = (pop32());
  /* 101e5fd3 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 101e5fd6 pop ebx */
  EBX = (pop32());
  /* 101e5fd7 je 0x101e5fde */
  if (C.zf) goto L_101e5fde;
  /* 101e5fd9 or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_101e5fde:;
  /* 101e5fde ret  */
  ESPCHK(0x101e5f4du, _esp0);
  ESP += 4; return;
}

/* FUN_10005fdf @ 0x101e5fdf (137 bytes, 53 insns) */
void f_101e5fdf(void) {
  FTRACE(0x101e5fdfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e5fdf push ebx */
  push32((uint32_t)(EBX));
  /* 101e5fe0 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e5fe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e5fe6 push esi */
  push32((uint32_t)(ESI));
  /* 101e5fe7 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 101e5fea je 0x101e5fef */
  if (C.zf) goto L_101e5fef;
  /* 101e5fec push 1 */
  push32((uint32_t)(0x1u));
  /* 101e5fee pop eax */
  EAX = (pop32());
L_101e5fef:;
  /* 101e5fef test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 101e5ff2 je 0x101e5ff6 */
  if (C.zf) goto L_101e5ff6;
  /* 101e5ff4 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_101e5ff6:;
  /* 101e5ff6 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 101e5ff9 je 0x101e5ffd */
  if (C.zf) goto L_101e5ffd;
  /* 101e5ffb or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101e5ffd:;
  /* 101e5ffd test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101e6000 je 0x101e6004 */
  if (C.zf) goto L_101e6004;
  /* 101e6002 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_101e6004:;
  /* 101e6004 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101e6007 je 0x101e600b */
  if (C.zf) goto L_101e600b;
  /* 101e6009 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_101e600b:;
  /* 101e600b test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 101e6011 je 0x101e6015 */
  if (C.zf) goto L_101e6015;
  /* 101e6013 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101e6015:;
  /* 101e6015 mov ecx, ebx */
  ECX = (EBX);
  /* 101e6017 mov edx, 0x300 */
  EDX = (0x300u);
  /* 101e601c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101e601e mov esi, 0x200 */
  ESI = (0x200u);
  /* 101e6023 je 0x101e6042 */
  if (C.zf) goto L_101e6042;
  /* 101e6025 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e602b je 0x101e603f */
  if (C.zf) goto L_101e603f;
  /* 101e602d cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e602f je 0x101e603a */
  if (C.zf) goto L_101e603a;
  /* 101e6031 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6033 jne 0x101e6042 */
  if (!C.zf) goto L_101e6042;
  /* 101e6035 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 101e6038 jmp 0x101e6042 */
  goto L_101e6042;
L_101e603a:;
  /* 101e603a or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 101e603d jmp 0x101e6042 */
  goto L_101e6042;
L_101e603f:;
  /* 101e603f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_101e6042:;
  /* 101e6042 mov ecx, ebx */
  ECX = (EBX);
  /* 101e6044 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 101e604a je 0x101e6058 */
  if (C.zf) goto L_101e6058;
  /* 101e604c cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6052 jne 0x101e605a */
  if (!C.zf) goto L_101e605a;
  /* 101e6054 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101e6056 jmp 0x101e605a */
  goto L_101e605a;
L_101e6058:;
  /* 101e6058 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_101e605a:;
  /* 101e605a pop esi */
  ESI = (pop32());
  /* 101e605b test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 101e6061 pop ebx */
  EBX = (pop32());
  /* 101e6062 je 0x101e6067 */
  if (C.zf) goto L_101e6067;
  /* 101e6064 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_101e6067:;
  /* 101e6067 ret  */
  ESPCHK(0x101e5fdfu, _esp0);
  ESP += 4; return;
}

/* FUN_10006068 @ 0x101e6068 (117 bytes, 46 insns) */
void f_101e6068(void) {
  FTRACE(0x101e6068u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6068 push ebp */
  push32((uint32_t)(EBP));
  /* 101e6069 mov ebp, esp */
  EBP = (ESP);
  /* 101e606b push ecx */
  push32((uint32_t)(ECX));
  /* 101e606c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e606f lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 101e6072 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6078 ja 0x101e6086 */
  if ((!C.cf&&!C.zf)) goto L_101e6086;
  /* 101e607a mov ecx, dword ptr [0x101ed474] */
  ECX = (r32((uint32_t)(0x101ed474)));
  /* 101e6080 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 101e6084 jmp 0x101e60d8 */
  goto L_101e60d8;
L_101e6086:;
  /* 101e6086 mov ecx, eax */
  ECX = (EAX);
  /* 101e6088 push esi */
  push32((uint32_t)(ESI));
  /* 101e6089 mov esi, dword ptr [0x101ed474] */
  ESI = (r32((uint32_t)(0x101ed474)));
  /* 101e608f sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 101e6092 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 101e6095 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101e609a pop esi */
  ESI = (pop32());
  /* 101e609b je 0x101e60ab */
  if (C.zf) goto L_101e60ab;
  /* 101e609d and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 101e60a1 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 101e60a4 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 101e60a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e60a9 jmp 0x101e60b4 */
  goto L_101e60b4;
L_101e60ab:;
  /* 101e60ab and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 101e60af mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 101e60b2 push 1 */
  push32((uint32_t)(0x1u));
L_101e60b4:;
  /* 101e60b4 pop eax */
  EAX = (pop32());
  /* 101e60b5 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 101e60b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e60ba push 0 */
  push32((uint32_t)(0x0u));
  /* 101e60bc push 0 */
  push32((uint32_t)(0x0u));
  /* 101e60be push ecx */
  push32((uint32_t)(ECX));
  /* 101e60bf push eax */
  push32((uint32_t)(EAX));
  /* 101e60c0 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 101e60c3 push eax */
  push32((uint32_t)(EAX));
  /* 101e60c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e60c6 call 0x101e865e */
  push32(0x101e60cbu); f_101e865e();
  /* 101e60cb add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e60ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e60d0 jne 0x101e60d4 */
  if (!C.zf) goto L_101e60d4;
  /* 101e60d2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e60d3 ret  */
  ESPCHK(0x101e6068u, _esp0);
  ESP += 4; return;
L_101e60d4:;
  /* 101e60d4 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_101e60d8:;
  /* 101e60d8 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101e60db leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e60dc ret  */
  ESPCHK(0x101e6068u, _esp0);
  ESP += 4; return;
}

/* FUN_100060dd @ 0x101e60dd (111 bytes, 44 insns) */
void f_101e60dd(void) {
  FTRACE(0x101e60ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e60dd push ebx */
  push32((uint32_t)(EBX));
  /* 101e60de xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e60e0 cmp dword ptr [0x101f12f4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f12f4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e60e6 jne 0x101e60fb */
  if (!C.zf) goto L_101e60fb;
  /* 101e60e8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e60ec cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e60ef jl 0x101e614a */
  if ((C.sf!=C.of)) goto L_101e614a;
  /* 101e60f1 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e60f4 jg 0x101e614a */
  if ((!C.zf&&C.sf==C.of)) goto L_101e614a;
  /* 101e60f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e60f9 pop ebx */
  EBX = (pop32());
  /* 101e60fa ret  */
  ESPCHK(0x101e60ddu, _esp0);
  ESP += 4; return;
L_101e60fb:;
  /* 101e60fb push esi */
  push32((uint32_t)(ESI));
  /* 101e60fc mov esi, 0x101f145c */
  ESI = (0x101f145cu);
  /* 101e6101 push edi */
  push32((uint32_t)(EDI));
  /* 101e6102 push esi */
  push32((uint32_t)(ESI));
  /* 101e6103 call dword ptr [0x101eb084] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb084))), 0x101e6109u);
  /* 101e6109 cmp dword ptr [0x101f1458], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f1458))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e610f mov edi, dword ptr [0x101eb080] */
  EDI = (r32((uint32_t)(0x101eb080)));
  /* 101e6115 je 0x101e6125 */
  if (C.zf) goto L_101e6125;
  /* 101e6117 push esi */
  push32((uint32_t)(ESI));
  /* 101e6118 call edi */
  call_ind((uint32_t)(EDI), 0x101e611au);
  /* 101e611a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e611c call 0x101e737a */
  push32(0x101e6121u); f_101e737a();
  /* 101e6121 pop ecx */
  ECX = (pop32());
  /* 101e6122 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e6124 pop ebx */
  EBX = (pop32());
L_101e6125:;
  /* 101e6125 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101e6129 call 0x101e614c */
  push32(0x101e612eu); f_101e614c();
  /* 101e612e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e6130 pop ecx */
  ECX = (pop32());
  /* 101e6131 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101e6135 je 0x101e6141 */
  if (C.zf) goto L_101e6141;
  /* 101e6137 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e6139 call 0x101e73db */
  push32(0x101e613eu); f_101e73db();
  /* 101e613e pop ecx */
  ECX = (pop32());
  /* 101e613f jmp 0x101e6144 */
  goto L_101e6144;
L_101e6141:;
  /* 101e6141 push esi */
  push32((uint32_t)(ESI));
  /* 101e6142 call edi */
  call_ind((uint32_t)(EDI), 0x101e6144u);
L_101e6144:;
  /* 101e6144 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e6148 pop edi */
  EDI = (pop32());
  /* 101e6149 pop esi */
  ESI = (pop32());
L_101e614a:;
  /* 101e614a pop ebx */
  EBX = (pop32());
  /* 101e614b ret  */
  ESPCHK(0x101e60ddu, _esp0);
  ESP += 4; return;
}

/* FUN_1000614c @ 0x101e614c (203 bytes, 78 insns) */
void f_101e614c(void) {
  FTRACE(0x101e614cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e614c push ebp */
  push32((uint32_t)(EBP));
  /* 101e614d mov ebp, esp */
  EBP = (ESP);
  /* 101e614f push ecx */
  push32((uint32_t)(ECX));
  /* 101e6150 cmp dword ptr [0x101f12f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101f12f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6157 push ebx */
  push32((uint32_t)(EBX));
  /* 101e6158 push esi */
  push32((uint32_t)(ESI));
  /* 101e6159 push edi */
  push32((uint32_t)(EDI));
  /* 101e615a jne 0x101e6179 */
  if (!C.zf) goto L_101e6179;
  /* 101e615c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e615f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6162 jl 0x101e6212 */
  if ((C.sf!=C.of)) goto L_101e6212;
  /* 101e6168 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e616b jg 0x101e6212 */
  if ((!C.zf&&C.sf==C.of)) goto L_101e6212;
  /* 101e6171 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6174 jmp 0x101e6212 */
  goto L_101e6212;
L_101e6179:;
  /* 101e6179 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e617c mov edi, 0x100 */
  EDI = (0x100u);
  /* 101e6181 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e6183 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6185 pop esi */
  ESI = (pop32());
  /* 101e6186 jge 0x101e61ad */
  if ((C.sf==C.of)) goto L_101e61ad;
  /* 101e6188 cmp dword ptr [0x101ed468], esi */
  { uint32_t _a=(r32((uint32_t)(0x101ed468))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e618e jle 0x101e619b */
  if ((C.zf||C.sf!=C.of)) goto L_101e619b;
  /* 101e6190 push esi */
  push32((uint32_t)(ESI));
  /* 101e6191 push ebx */
  push32((uint32_t)(EBX));
  /* 101e6192 call 0x101e6068 */
  push32(0x101e6197u); f_101e6068();
  /* 101e6197 pop ecx */
  ECX = (pop32());
  /* 101e6198 pop ecx */
  ECX = (pop32());
  /* 101e6199 jmp 0x101e61a5 */
  goto L_101e61a5;
L_101e619b:;
  /* 101e619b mov eax, dword ptr [0x101ed474] */
  EAX = (r32((uint32_t)(0x101ed474)));
  /* 101e61a0 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 101e61a3 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_101e61a5:;
  /* 101e61a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e61a7 jne 0x101e61ad */
  if (!C.zf) goto L_101e61ad;
L_101e61a9:;
  /* 101e61a9 mov eax, ebx */
  EAX = (EBX);
  /* 101e61ab jmp 0x101e6212 */
  goto L_101e6212;
L_101e61ad:;
  /* 101e61ad mov edx, dword ptr [0x101ed474] */
  EDX = (r32((uint32_t)(0x101ed474)));
  /* 101e61b3 mov eax, ebx */
  EAX = (EBX);
  /* 101e61b5 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101e61b8 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 101e61bb test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 101e61c0 je 0x101e61d1 */
  if (C.zf) goto L_101e61d1;
  /* 101e61c2 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 101e61c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e61c8 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 101e61cb mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 101e61ce pop eax */
  EAX = (pop32());
  /* 101e61cf jmp 0x101e61da */
  goto L_101e61da;
L_101e61d1:;
  /* 101e61d1 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 101e61d5 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 101e61d8 mov eax, esi */
  EAX = (ESI);
L_101e61da:;
  /* 101e61da push esi */
  push32((uint32_t)(ESI));
  /* 101e61db push 0 */
  push32((uint32_t)(0x0u));
  /* 101e61dd lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 101e61e0 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e61e2 push ecx */
  push32((uint32_t)(ECX));
  /* 101e61e3 push eax */
  push32((uint32_t)(EAX));
  /* 101e61e4 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101e61e7 push eax */
  push32((uint32_t)(EAX));
  /* 101e61e8 push edi */
  push32((uint32_t)(EDI));
  /* 101e61e9 push dword ptr [0x101f12f4] */
  push32((uint32_t)(r32((uint32_t)(0x101f12f4))));
  /* 101e61ef call 0x101e87a7 */
  push32(0x101e61f4u); f_101e87a7();
  /* 101e61f4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e61f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e61f9 je 0x101e61a9 */
  if (C.zf) goto L_101e61a9;
  /* 101e61fb cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e61fd jne 0x101e6205 */
  if (!C.zf) goto L_101e6205;
  /* 101e61ff movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101e6203 jmp 0x101e6212 */
  goto L_101e6212;
L_101e6205:;
  /* 101e6205 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 101e6209 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101e620d shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101e6210 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_101e6212:;
  /* 101e6212 pop edi */
  EDI = (pop32());
  /* 101e6213 pop esi */
  ESI = (pop32());
  /* 101e6214 pop ebx */
  EBX = (pop32());
  /* 101e6215 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6216 ret  */
  ESPCHK(0x101e614cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006217 @ 0x101e6217 (73 bytes, 36 insns) */
void f_101e6217(void) {
  FTRACE(0x101e6217u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6217 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e621b push esi */
  push32((uint32_t)(ESI));
  /* 101e621c push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101e621e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e621f pop ecx */
  ECX = (pop32());
  /* 101e6220 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e6222 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101e6224 mov esi, eax */
  ESI = (EAX);
  /* 101e6226 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e622a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e622b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e622d pop ecx */
  ECX = (pop32());
  /* 101e622e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6232 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6234 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101e6237 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101e6239 not edx */
  EDX = (~(EDX));
  /* 101e623b test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 101e623e jne 0x101e625c */
  if (!C.zf) goto L_101e625c;
  /* 101e6240 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e6241 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6244 jge 0x101e6257 */
  if ((C.sf==C.of)) goto L_101e6257;
  /* 101e6246 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_101e6249:;
  /* 101e6249 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e624c jne 0x101e625c */
  if (!C.zf) goto L_101e625c;
  /* 101e624e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e624f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6252 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6255 jl 0x101e6249 */
  if ((C.sf!=C.of)) goto L_101e6249;
L_101e6257:;
  /* 101e6257 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e6259 pop eax */
  EAX = (pop32());
  /* 101e625a pop esi */
  ESI = (pop32());
  /* 101e625b ret  */
  ESPCHK(0x101e6217u, _esp0);
  ESP += 4; return;
L_101e625c:;
  /* 101e625c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e625e pop esi */
  ESI = (pop32());
  /* 101e625f ret  */
  ESPCHK(0x101e6217u, _esp0);
  ESP += 4; return;
}

/* FUN_10006260 @ 0x101e6260 (86 bytes, 43 insns) */
void f_101e6260(void) {
  FTRACE(0x101e6260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6260 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6264 push ebx */
  push32((uint32_t)(EBX));
  /* 101e6265 push esi */
  push32((uint32_t)(ESI));
  /* 101e6266 push edi */
  push32((uint32_t)(EDI));
  /* 101e6267 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101e6269 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101e626d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e626e pop ecx */
  ECX = (pop32());
  /* 101e626f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e6271 mov esi, eax */
  ESI = (EAX);
  /* 101e6273 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101e6277 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e6278 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e627a lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 101e627d push edi */
  push32((uint32_t)(EDI));
  /* 101e627e push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101e6280 pop ecx */
  ECX = (pop32());
  /* 101e6281 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e6283 pop eax */
  EAX = (pop32());
  /* 101e6284 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6286 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101e6288 push eax */
  push32((uint32_t)(EAX));
  /* 101e6289 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101e628b call 0x101e89f6 */
  push32(0x101e6290u); f_101e89f6();
  /* 101e6290 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6293 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101e6294 js 0x101e62b2 */
  if (C.sf) goto L_101e62b2;
  /* 101e6296 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_101e6299:;
  /* 101e6299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e629b je 0x101e62b2 */
  if (C.zf) goto L_101e62b2;
  /* 101e629d push edi */
  push32((uint32_t)(EDI));
  /* 101e629e push 1 */
  push32((uint32_t)(0x1u));
  /* 101e62a0 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 101e62a2 call 0x101e89f6 */
  push32(0x101e62a7u); f_101e89f6();
  /* 101e62a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e62aa dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101e62ab sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e62ae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e62b0 jge 0x101e6299 */
  if ((C.sf==C.of)) goto L_101e6299;
L_101e62b2:;
  /* 101e62b2 pop edi */
  EDI = (pop32());
  /* 101e62b3 pop esi */
  ESI = (pop32());
  /* 101e62b4 pop ebx */
  EBX = (pop32());
  /* 101e62b5 ret  */
  ESPCHK(0x101e6260u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b6 @ 0x101e62b6 (140 bytes, 71 insns) */
void f_101e62b6(void) {
  FTRACE(0x101e62b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e62b6 push ebp */
  push32((uint32_t)(EBP));
  /* 101e62b7 mov ebp, esp */
  EBP = (ESP);
  /* 101e62b9 push ecx */
  push32((uint32_t)(ECX));
  /* 101e62ba push ecx */
  push32((uint32_t)(ECX));
  /* 101e62bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e62be push ebx */
  push32((uint32_t)(EBX));
  /* 101e62bf push esi */
  push32((uint32_t)(ESI));
  /* 101e62c0 push edi */
  push32((uint32_t)(EDI));
  /* 101e62c1 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 101e62c4 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101e62c6 pop ecx */
  ECX = (pop32());
  /* 101e62c7 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 101e62cb lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 101e62ce push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101e62d0 mov eax, ebx */
  EAX = (EBX);
  /* 101e62d2 pop esi */
  ESI = (pop32());
  /* 101e62d3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e62d4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e62d6 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101e62d8 mov ecx, eax */
  ECX = (EAX);
  /* 101e62da mov eax, ebx */
  EAX = (EBX);
  /* 101e62dc cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e62dd idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e62df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e62e2 pop esi */
  ESI = (pop32());
  /* 101e62e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e62e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101e62e8 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 101e62eb mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101e62ee sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e62f0 pop edx */
  EDX = (pop32());
  /* 101e62f1 mov ecx, esi */
  ECX = (ESI);
  /* 101e62f3 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101e62f5 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 101e62f7 je 0x101e631a */
  if (C.zf) goto L_101e631a;
  /* 101e62f9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 101e62fa push ebx */
  push32((uint32_t)(EBX));
  /* 101e62fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e62fe call 0x101e6217 */
  push32(0x101e6303u); f_101e6217();
  /* 101e6303 pop ecx */
  ECX = (pop32());
  /* 101e6304 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e6306 pop ecx */
  ECX = (pop32());
  /* 101e6307 jne 0x101e6317 */
  if (!C.zf) goto L_101e6317;
  /* 101e6309 push edi */
  push32((uint32_t)(EDI));
  /* 101e630a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e630d call 0x101e6260 */
  push32(0x101e6312u); f_101e6260();
  /* 101e6312 pop ecx */
  ECX = (pop32());
  /* 101e6313 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101e6316 pop ecx */
  ECX = (pop32());
L_101e6317:;
  /* 101e6317 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101e631a:;
  /* 101e631a or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101e631d mov ecx, esi */
  ECX = (ESI);
  /* 101e631f shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101e6321 push 3 */
  push32((uint32_t)(0x3u));
  /* 101e6323 pop ecx */
  ECX = (pop32());
  /* 101e6324 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e6326 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e6329 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e632a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e632c jge 0x101e633a */
  if ((C.sf==C.of)) goto L_101e633a;
  /* 101e632e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6331 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6333 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 101e6336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e6338 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_101e633a:;
  /* 101e633a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e633d pop edi */
  EDI = (pop32());
  /* 101e633e pop esi */
  ESI = (pop32());
  /* 101e633f pop ebx */
  EBX = (pop32());
  /* 101e6340 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6341 ret  */
  ESPCHK(0x101e62b6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006342 @ 0x101e6342 (27 bytes, 13 insns) */
void f_101e6342(void) {
  FTRACE(0x101e6342u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6342 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6346 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e634a push esi */
  push32((uint32_t)(ESI));
  /* 101e634b push 3 */
  push32((uint32_t)(0x3u));
  /* 101e634d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e634f pop edx */
  EDX = (pop32());
L_101e6350:;
  /* 101e6350 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101e6352 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 101e6355 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6358 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101e6359 jne 0x101e6350 */
  if (!C.zf) goto L_101e6350;
  /* 101e635b pop esi */
  ESI = (pop32());
  /* 101e635c ret  */
  ESPCHK(0x101e6342u, _esp0);
  ESP += 4; return;
}

/* FUN_1000635d @ 0x101e635d (12 bytes, 8 insns) */
void f_101e635d(void) {
  FTRACE(0x101e635du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e635d push edi */
  push32((uint32_t)(EDI));
  /* 101e635e mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e6364 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101e6365 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101e6366 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 101e6367 pop edi */
  EDI = (pop32());
  /* 101e6368 ret  */
  ESPCHK(0x101e635du, _esp0);
  ESP += 4; return;
}

/* FUN_10006369 @ 0x101e6369 (27 bytes, 13 insns) */
void f_101e6369(void) {
  FTRACE(0x101e6369u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6369 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e636d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_101e636f:;
  /* 101e636f cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6372 jne 0x101e6381 */
  if (!C.zf) goto L_101e6381;
  /* 101e6374 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e6375 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6378 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e637b jl 0x101e636f */
  if ((C.sf!=C.of)) goto L_101e636f;
  /* 101e637d push 1 */
  push32((uint32_t)(0x1u));
  /* 101e637f pop eax */
  EAX = (pop32());
  /* 101e6380 ret  */
  ESPCHK(0x101e6369u, _esp0);
  ESP += 4; return;
L_101e6381:;
  /* 101e6381 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e6383 ret  */
  ESPCHK(0x101e6369u, _esp0);
  ESP += 4; return;
}

/* FUN_10006384 @ 0x101e6384 (141 bytes, 64 insns) */
void f_101e6384(void) {
  FTRACE(0x101e6384u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6384 push ebp */
  push32((uint32_t)(EBP));
  /* 101e6385 mov ebp, esp */
  EBP = (ESP);
  /* 101e6387 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e638a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e638d push ebx */
  push32((uint32_t)(EBX));
  /* 101e638e push esi */
  push32((uint32_t)(ESI));
  /* 101e638f push edi */
  push32((uint32_t)(EDI));
  /* 101e6390 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101e6392 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6395 pop ebx */
  EBX = (pop32());
  /* 101e6396 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 101e6399 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e639a mov ecx, ebx */
  ECX = (EBX);
  /* 101e639c mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 101e63a3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e63a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 101e63a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e63ab cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101e63ac idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e63ae and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 101e63b2 mov ecx, edx */
  ECX = (EDX);
  /* 101e63b4 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101e63b6 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e63b8 not esi */
  ESI = (~(ESI));
L_101e63ba:;
  /* 101e63ba mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 101e63bc mov ecx, eax */
  ECX = (EAX);
  /* 101e63be and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 101e63c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101e63c3 mov ecx, edx */
  ECX = (EDX);
  /* 101e63c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101e63c7 or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101e63ca mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 101e63cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e63cf mov ecx, ebx */
  ECX = (EBX);
  /* 101e63d1 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e63d4 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 101e63d6 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 101e63d9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101e63dc jne 0x101e63ba */
  if (!C.zf) goto L_101e63ba;
  /* 101e63de mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 101e63e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e63e3 pop ebx */
  EBX = (pop32());
  /* 101e63e4 mov esi, edi */
  ESI = (EDI);
  /* 101e63e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 101e63e8 pop ecx */
  ECX = (pop32());
  /* 101e63e9 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_101e63ec:;
  /* 101e63ec cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e63ee jl 0x101e63ff */
  if ((C.sf!=C.of)) goto L_101e63ff;
  /* 101e63f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e63f3 mov eax, ecx */
  EAX = (ECX);
  /* 101e63f5 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e63f7 mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 101e63fa mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 101e63fd jmp 0x101e6406 */
  goto L_101e6406;
L_101e63ff:;
  /* 101e63ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6402 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_101e6406:;
  /* 101e6406 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101e6407 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e640a jns 0x101e63ec */
  if (!C.sf) goto L_101e63ec;
  /* 101e640c pop edi */
  EDI = (pop32());
  /* 101e640d pop esi */
  ESI = (pop32());
  /* 101e640e pop ebx */
  EBX = (pop32());
  /* 101e640f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6410 ret  */
  ESPCHK(0x101e6384u, _esp0);
  ESP += 4; return;
}

/* FUN_10006411 @ 0x101e6411 (364 bytes, 138 insns) */
void f_101e6411(void) {
  FTRACE(0x101e6411u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6411 push ebp */
  push32((uint32_t)(EBP));
  /* 101e6412 mov ebp, esp */
  EBP = (ESP);
  /* 101e6414 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6417 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e641a push ebx */
  push32((uint32_t)(EBX));
  /* 101e641b push esi */
  push32((uint32_t)(ESI));
  /* 101e641c push edi */
  push32((uint32_t)(EDI));
  /* 101e641d movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 101e6421 mov ebx, ecx */
  EBX = (ECX);
  /* 101e6423 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 101e6429 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 101e642c mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 101e642f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101e6432 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 101e6435 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 101e6438 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e643b and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 101e6441 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6447 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101e644a shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101e644d cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6453 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101e6456 jne 0x101e647e */
  if (!C.zf) goto L_101e647e;
  /* 101e6458 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e645b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e645d push eax */
  push32((uint32_t)(EAX));
  /* 101e645e call 0x101e6369 */
  push32(0x101e6463u); f_101e6369();
  /* 101e6463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e6465 pop ecx */
  ECX = (pop32());
  /* 101e6466 jne 0x101e653d */
  if (!C.zf) goto L_101e653d;
  /* 101e646c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e646f push eax */
  push32((uint32_t)(EAX));
  /* 101e6470 call 0x101e635d */
  push32(0x101e6475u); f_101e635d();
  /* 101e6475 pop ecx */
  ECX = (pop32());
L_101e6476:;
  /* 101e6476 push 2 */
  push32((uint32_t)(0x2u));
L_101e6478:;
  /* 101e6478 pop eax */
  EAX = (pop32());
  /* 101e6479 jmp 0x101e653f */
  goto L_101e653f;
L_101e647e:;
  /* 101e647e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e6481 push eax */
  push32((uint32_t)(EAX));
  /* 101e6482 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101e6485 push eax */
  push32((uint32_t)(EAX));
  /* 101e6486 call 0x101e6342 */
  push32(0x101e648bu); f_101e6342();
  /* 101e648b push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101e648e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e6491 push eax */
  push32((uint32_t)(EAX));
  /* 101e6492 call 0x101e62b6 */
  push32(0x101e6497u); f_101e62b6();
  /* 101e6497 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e649a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e649c je 0x101e649f */
  if (C.zf) goto L_101e649f;
  /* 101e649e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_101e649f:;
  /* 101e649f mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 101e64a2 mov ecx, eax */
  ECX = (EAX);
  /* 101e64a4 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e64a7 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e64a9 jge 0x101e64b7 */
  if ((C.sf==C.of)) goto L_101e64b7;
  /* 101e64ab lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e64ae push eax */
  push32((uint32_t)(EAX));
  /* 101e64af call 0x101e635d */
  push32(0x101e64b4u); f_101e635d();
  /* 101e64b4 pop ecx */
  ECX = (pop32());
  /* 101e64b5 jmp 0x101e64f3 */
  goto L_101e64f3;
L_101e64b7:;
  /* 101e64b7 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e64b9 jg 0x101e64fa */
  if ((!C.zf&&C.sf==C.of)) goto L_101e64fa;
  /* 101e64bb sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e64bd mov esi, eax */
  ESI = (EAX);
  /* 101e64bf lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 101e64c2 push eax */
  push32((uint32_t)(EAX));
  /* 101e64c3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e64c6 push eax */
  push32((uint32_t)(EAX));
  /* 101e64c7 call 0x101e6342 */
  push32(0x101e64ccu); f_101e6342();
  /* 101e64cc lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e64cf push esi */
  push32((uint32_t)(ESI));
  /* 101e64d0 push eax */
  push32((uint32_t)(EAX));
  /* 101e64d1 call 0x101e6384 */
  push32(0x101e64d6u); f_101e6384();
  /* 101e64d6 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 101e64d9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e64dc push eax */
  push32((uint32_t)(EAX));
  /* 101e64dd call 0x101e62b6 */
  push32(0x101e64e2u); f_101e62b6();
  /* 101e64e2 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 101e64e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e64e6 push eax */
  push32((uint32_t)(EAX));
  /* 101e64e7 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e64ea push eax */
  push32((uint32_t)(EAX));
  /* 101e64eb call 0x101e6384 */
  push32(0x101e64f0u); f_101e6384();
  /* 101e64f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e64f3:;
  /* 101e64f3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 101e64f5 jmp 0x101e6476 */
  goto L_101e6476;
L_101e64fa:;
  /* 101e64fa cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e64fc jl 0x101e6526 */
  if ((C.sf!=C.of)) goto L_101e6526;
  /* 101e64fe lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e6501 push eax */
  push32((uint32_t)(EAX));
  /* 101e6502 call 0x101e635d */
  push32(0x101e6507u); f_101e635d();
  /* 101e6507 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 101e650a or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 101e650e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e6511 push eax */
  push32((uint32_t)(EAX));
  /* 101e6512 call 0x101e6384 */
  push32(0x101e6517u); f_101e6384();
  /* 101e6517 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 101e651a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e651d add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e651f push 1 */
  push32((uint32_t)(0x1u));
  /* 101e6521 jmp 0x101e6478 */
  goto L_101e6478;
L_101e6526:;
  /* 101e6526 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 101e6529 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 101e652c and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 101e6530 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e6533 push eax */
  push32((uint32_t)(EAX));
  /* 101e6534 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6536 call 0x101e6384 */
  push32(0x101e653bu); f_101e6384();
  /* 101e653b pop ecx */
  ECX = (pop32());
  /* 101e653c pop ecx */
  ECX = (pop32());
L_101e653d:;
  /* 101e653d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e653f:;
  /* 101e653f push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101e6541 pop ecx */
  ECX = (pop32());
  /* 101e6542 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6545 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 101e6548 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101e654a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e654d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e654f sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6551 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 101e6557 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101e6559 or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101e655c cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e655f jne 0x101e656e */
  if (!C.zf) goto L_101e656e;
  /* 101e6561 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e6564 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e6567 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 101e656a mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 101e656c jmp 0x101e6578 */
  goto L_101e6578;
L_101e656e:;
  /* 101e656e cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6571 jne 0x101e6578 */
  if (!C.zf) goto L_101e6578;
  /* 101e6573 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e6576 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_101e6578:;
  /* 101e6578 pop edi */
  EDI = (pop32());
  /* 101e6579 pop esi */
  ESI = (pop32());
  /* 101e657a pop ebx */
  EBX = (pop32());
  /* 101e657b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e657c ret  */
  ESPCHK(0x101e6411u, _esp0);
  ESP += 4; return;
}

/* FUN_1000657d @ 0x101e657d (22 bytes, 6 insns) */
void f_101e657d(void) {
  FTRACE(0x101e657du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e657d push 0x101ed680 */
  push32((uint32_t)(0x101ed680u));
  /* 101e6582 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101e6586 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101e658a call 0x101e6411 */
  push32(0x101e658fu); f_101e6411();
  /* 101e658f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6592 ret  */
  ESPCHK(0x101e657du, _esp0);
  ESP += 4; return;
}

/* FUN_10006593 @ 0x101e6593 (22 bytes, 6 insns) */
void f_101e6593(void) {
  FTRACE(0x101e6593u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6593 push 0x101ed698 */
  push32((uint32_t)(0x101ed698u));
  /* 101e6598 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101e659c push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 101e65a0 call 0x101e6411 */
  push32(0x101e65a5u); f_101e6411();
  /* 101e65a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e65a8 ret  */
  ESPCHK(0x101e6593u, _esp0);
  ESP += 4; return;
}

/* FUN_100065a9 @ 0x101e65a9 (45 bytes, 21 insns) */
void f_101e65a9(void) {
  FTRACE(0x101e65a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e65a9 push ebp */
  push32((uint32_t)(EBP));
  /* 101e65aa mov ebp, esp */
  EBP = (ESP);
  /* 101e65ac sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e65af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e65b1 push eax */
  push32((uint32_t)(EAX));
  /* 101e65b2 push eax */
  push32((uint32_t)(EAX));
  /* 101e65b3 push eax */
  push32((uint32_t)(EAX));
  /* 101e65b4 push eax */
  push32((uint32_t)(EAX));
  /* 101e65b5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e65b8 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 101e65bb push eax */
  push32((uint32_t)(EAX));
  /* 101e65bc lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e65bf push eax */
  push32((uint32_t)(EAX));
  /* 101e65c0 call 0x101e8b97 */
  push32(0x101e65c5u); f_101e8b97();
  /* 101e65c5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e65c8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e65cb push eax */
  push32((uint32_t)(EAX));
  /* 101e65cc call 0x101e657d */
  push32(0x101e65d1u); f_101e657d();
  /* 101e65d1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e65d4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e65d5 ret  */
  ESPCHK(0x101e65a9u, _esp0);
  ESP += 4; return;
}

/* FUN_100065d6 @ 0x101e65d6 (45 bytes, 21 insns) */
void f_101e65d6(void) {
  FTRACE(0x101e65d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e65d6 push ebp */
  push32((uint32_t)(EBP));
  /* 101e65d7 mov ebp, esp */
  EBP = (ESP);
  /* 101e65d9 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e65dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e65de push eax */
  push32((uint32_t)(EAX));
  /* 101e65df push eax */
  push32((uint32_t)(EAX));
  /* 101e65e0 push eax */
  push32((uint32_t)(EAX));
  /* 101e65e1 push eax */
  push32((uint32_t)(EAX));
  /* 101e65e2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e65e5 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 101e65e8 push eax */
  push32((uint32_t)(EAX));
  /* 101e65e9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e65ec push eax */
  push32((uint32_t)(EAX));
  /* 101e65ed call 0x101e8b97 */
  push32(0x101e65f2u); f_101e8b97();
  /* 101e65f2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e65f5 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e65f8 push eax */
  push32((uint32_t)(EAX));
  /* 101e65f9 call 0x101e6593 */
  push32(0x101e65feu); f_101e6593();
  /* 101e65fe add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6601 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6602 ret  */
  ESPCHK(0x101e65d6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006603 @ 0x101e6603 (119 bytes, 57 insns) */
void f_101e6603(void) {
  FTRACE(0x101e6603u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6603 push ebp */
  push32((uint32_t)(EBP));
  /* 101e6604 mov ebp, esp */
  EBP = (ESP);
  /* 101e6606 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e6609 push ebx */
  push32((uint32_t)(EBX));
  /* 101e660a mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e660d push esi */
  push32((uint32_t)(ESI));
  /* 101e660e mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6611 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 101e6614 push edi */
  push32((uint32_t)(EDI));
  /* 101e6615 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 101e6618 mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 101e661b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e661d mov eax, edi */
  EAX = (EDI);
  /* 101e661f jle 0x101e6640 */
  if ((C.zf||C.sf!=C.of)) goto L_101e6640;
  /* 101e6621 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101e6624 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101e6626:;
  /* 101e6626 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101e6628 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e662a je 0x101e6632 */
  if (C.zf) goto L_101e6632;
  /* 101e662c movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 101e662f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e6630 jmp 0x101e6635 */
  goto L_101e6635;
L_101e6632:;
  /* 101e6632 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101e6634 pop edx */
  EDX = (pop32());
L_101e6635:;
  /* 101e6635 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101e6637 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e6638 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 101e663b jne 0x101e6626 */
  if (!C.zf) goto L_101e6626;
  /* 101e663d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101e6640:;
  /* 101e6640 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101e6643 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e6645 jl 0x101e6659 */
  if ((C.sf!=C.of)) goto L_101e6659;
  /* 101e6647 cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e664a jl 0x101e6659 */
  if ((C.sf!=C.of)) goto L_101e6659;
L_101e664c:;
  /* 101e664c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101e664d cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e6650 jne 0x101e6657 */
  if (!C.zf) goto L_101e6657;
  /* 101e6652 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101e6655 jmp 0x101e664c */
  goto L_101e664c;
L_101e6657:;
  /* 101e6657 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101e6659:;
  /* 101e6659 cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e665c jne 0x101e6663 */
  if (!C.zf) goto L_101e6663;
  /* 101e665e inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 101e6661 jmp 0x101e6675 */
  goto L_101e6675;
L_101e6663:;
  /* 101e6663 push edi */
  push32((uint32_t)(EDI));
  /* 101e6664 call 0x101e6c20 */
  push32(0x101e6669u); f_101e6c20();
  /* 101e6669 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e666a push eax */
  push32((uint32_t)(EAX));
  /* 101e666b push edi */
  push32((uint32_t)(EDI));
  /* 101e666c push esi */
  push32((uint32_t)(ESI));
  /* 101e666d call 0x101e68e0 */
  push32(0x101e6672u); f_101e68e0();
  /* 101e6672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e6675:;
  /* 101e6675 pop edi */
  EDI = (pop32());
  /* 101e6676 pop esi */
  ESI = (pop32());
  /* 101e6677 pop ebx */
  EBX = (pop32());
  /* 101e6678 pop ebp */
  EBP = (pop32());
  /* 101e6679 ret  */
  ESPCHK(0x101e6603u, _esp0);
  ESP += 4; return;
}

/* FUN_1000667a @ 0x101e667a (92 bytes, 41 insns) */
void f_101e667a(void) {
  FTRACE(0x101e667au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e667a push ebp */
  push32((uint32_t)(EBP));
  /* 101e667b mov ebp, esp */
  EBP = (ESP);
  /* 101e667d sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6680 push esi */
  push32((uint32_t)(ESI));
  /* 101e6681 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 101e6684 push edi */
  push32((uint32_t)(EDI));
  /* 101e6685 push eax */
  push32((uint32_t)(EAX));
  /* 101e6686 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e6689 push eax */
  push32((uint32_t)(EAX));
  /* 101e668a call 0x101e66d6 */
  push32(0x101e668fu); f_101e66d6();
  /* 101e668f pop ecx */
  ECX = (pop32());
  /* 101e6690 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 101e6693 pop ecx */
  ECX = (pop32());
  /* 101e6694 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 101e6697 push eax */
  push32((uint32_t)(EAX));
  /* 101e6698 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e669a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101e669c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e669f mov edi, esp */
  EDI = (ESP);
  /* 101e66a1 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e66a2 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 101e66a3 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 101e66a5 call 0x101e9068 */
  push32(0x101e66aau); f_101e9068();
  /* 101e66aa mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 101e66ad mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 101e66b0 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 101e66b3 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 101e66b7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 101e66b9 movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 101e66bd mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 101e66c0 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 101e66c3 push eax */
  push32((uint32_t)(EAX));
  /* 101e66c4 push edi */
  push32((uint32_t)(EDI));
  /* 101e66c5 call 0x101e6790 */
  push32(0x101e66cau); f_101e6790();
  /* 101e66ca add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e66cd mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 101e66d0 mov eax, esi */
  EAX = (ESI);
  /* 101e66d2 pop edi */
  EDI = (pop32());
  /* 101e66d3 pop esi */
  ESI = (pop32());
  /* 101e66d4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e66d5 ret  */
  ESPCHK(0x101e667au, _esp0);
  ESP += 4; return;
}

/* FUN_100066d6 @ 0x101e66d6 (182 bytes, 70 insns) */
void f_101e66d6(void) {
  FTRACE(0x101e66d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e66d6 push ebp */
  push32((uint32_t)(EBP));
  /* 101e66d7 mov ebp, esp */
  EBP = (ESP);
  /* 101e66d9 push ecx */
  push32((uint32_t)(ECX));
  /* 101e66da mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e66dd push ebx */
  push32((uint32_t)(EBX));
  /* 101e66de push esi */
  push32((uint32_t)(ESI));
  /* 101e66df push edi */
  push32((uint32_t)(EDI));
  /* 101e66e0 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 101e66e4 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 101e66e9 mov ecx, eax */
  ECX = (EAX);
  /* 101e66eb and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 101e66f0 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 101e66f3 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101e66f5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101e66f8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 101e66fb mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 101e66fd movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 101e6700 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 101e6705 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e670a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e670c mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 101e670f je 0x101e6724 */
  if (C.zf) goto L_101e6724;
  /* 101e6711 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6713 je 0x101e671d */
  if (C.zf) goto L_101e671d;
  /* 101e6715 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 101e671b jmp 0x101e6745 */
  goto L_101e6745;
L_101e671d:;
  /* 101e671d mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 101e6722 jmp 0x101e6745 */
  goto L_101e6745;
L_101e6724:;
  /* 101e6724 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e6726 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6728 jne 0x101e673c */
  if (!C.zf) goto L_101e673c;
  /* 101e672a cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e672c jne 0x101e673c */
  if (!C.zf) goto L_101e673c;
  /* 101e672e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6731 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 101e6734 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 101e6736 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 101e673a jmp 0x101e6787 */
  goto L_101e6787;
L_101e673c:;
  /* 101e673c lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 101e6742 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_101e6745:;
  /* 101e6745 mov ecx, edx */
  ECX = (EDX);
  /* 101e6747 shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 101e674a shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 101e674d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 101e674f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6752 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 101e6755 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 101e6758 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 101e675b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_101e675d:;
  /* 101e675d test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 101e675f jne 0x101e677e */
  if (!C.zf) goto L_101e677e;
  /* 101e6761 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 101e6763 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6765 mov ebx, edx */
  EBX = (EDX);
  /* 101e6767 shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 101e676a or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 101e676c lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 101e676f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 101e6771 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 101e6774 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e677a mov ecx, ebx */
  ECX = (EBX);
  /* 101e677c jmp 0x101e675d */
  goto L_101e675d;
L_101e677e:;
  /* 101e677e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e6781 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 101e6783 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_101e6787:;
  /* 101e6787 pop edi */
  EDI = (pop32());
  /* 101e6788 pop esi */
  ESI = (pop32());
  /* 101e6789 pop ebx */
  EBX = (pop32());
  /* 101e678a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e678b ret  */
  ESPCHK(0x101e66d6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006790 @ 0x101e6790 (7 bytes, 3 insns) */
void f_101e6790(void) {
  FTRACE(0x101e6790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6790 push edi */
  push32((uint32_t)(EDI));
  /* 101e6791 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6795 jmp 0x101e6801 */
  jmp_ind(0x101e6801u); return;
}

/* FUN_100067a0 @ 0x101e67a0 (224 bytes, 84 insns) */
void f_101e67a0(void) {
  FTRACE(0x101e67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e67a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e67a4 push edi */
  push32((uint32_t)(EDI));
  /* 101e67a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101e67ab je 0x101e67bc */
  if (C.zf) goto L_101e67bc;
L_101e67ad:;
  /* 101e67ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101e67af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e67b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e67b2 je 0x101e67ef */
  if (C.zf) goto L_101e67ef;
  /* 101e67b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101e67ba jne 0x101e67ad */
  if (!C.zf) goto L_101e67ad;
L_101e67bc:;
  /* 101e67bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101e67be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101e67c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e67c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e67c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101e67ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e67cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101e67d2 je 0x101e67bc */
  if (C.zf) goto L_101e67bc;
  /* 101e67d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 101e67d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e67d9 je 0x101e67fe */
  if (C.zf) goto L_101e67fe;
  /* 101e67db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101e67dd je 0x101e67f9 */
  if (C.zf) goto L_101e67f9;
  /* 101e67df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 101e67e4 je 0x101e67f4 */
  if (C.zf) goto L_101e67f4;
  /* 101e67e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 101e67eb je 0x101e67ef */
  if (C.zf) goto L_101e67ef;
  /* 101e67ed jmp 0x101e67bc */
  goto L_101e67bc;
L_101e67ef:;
  /* 101e67ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 101e67f2 jmp 0x101e6801 */
  goto L_101e6801;
L_101e67f4:;
  /* 101e67f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 101e67f7 jmp 0x101e6801 */
  goto L_101e6801;
L_101e67f9:;
  /* 101e67f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 101e67fc jmp 0x101e6801 */
  goto L_101e6801;
L_101e67fe:;
  /* 101e67fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_101e6801:;
  /* 101e6801 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 101e6805 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101e680b je 0x101e6826 */
  if (C.zf) goto L_101e6826;
L_101e680d:;
  /* 101e680d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101e680f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e6810 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e6812 je 0x101e6878 */
  if (C.zf) goto L_101e6878;
  /* 101e6814 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 101e6816 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e6817 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101e681d jne 0x101e680d */
  if (!C.zf) goto L_101e680d;
  /* 101e681f jmp 0x101e6826 */
  goto L_101e6826;
L_101e6821:;
  /* 101e6821 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101e6823 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101e6826:;
  /* 101e6826 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101e682b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101e682d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e682f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6832 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101e6834 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 101e6836 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6839 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101e683e je 0x101e6821 */
  if (C.zf) goto L_101e6821;
  /* 101e6840 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101e6842 je 0x101e6878 */
  if (C.zf) goto L_101e6878;
  /* 101e6844 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 101e6846 je 0x101e686f */
  if (C.zf) goto L_101e686f;
  /* 101e6848 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 101e684e je 0x101e6862 */
  if (C.zf) goto L_101e6862;
  /* 101e6850 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 101e6856 je 0x101e685a */
  if (C.zf) goto L_101e685a;
  /* 101e6858 jmp 0x101e6821 */
  goto L_101e6821;
L_101e685a:;
  /* 101e685a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 101e685c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6860 pop edi */
  EDI = (pop32());
  /* 101e6861 ret  */
  ESPCHK(0x101e67a0u, _esp0);
  ESP += 4; return;
L_101e6862:;
  /* 101e6862 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 101e6865 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6869 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 101e686d pop edi */
  EDI = (pop32());
  /* 101e686e ret  */
  ESPCHK(0x101e67a0u, _esp0);
  ESP += 4; return;
L_101e686f:;
  /* 101e686f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 101e6872 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6876 pop edi */
  EDI = (pop32());
  /* 101e6877 ret  */
  ESPCHK(0x101e67a0u, _esp0);
  ESP += 4; return;
L_101e6878:;
  /* 101e6878 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 101e687a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e687e pop edi */
  EDI = (pop32());
  /* 101e687f ret  */
  ESPCHK(0x101e67a0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x101e6880 (88 bytes, 40 insns) */
void f_101e6880(void) {
  FTRACE(0x101e6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6880 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 101e6884 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e6888 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101e688a je 0x101e68d3 */
  if (C.zf) goto L_101e68d3;
  /* 101e688c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e688e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 101e6892 push edi */
  push32((uint32_t)(EDI));
  /* 101e6893 mov edi, ecx */
  EDI = (ECX);
  /* 101e6895 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6898 jb 0x101e68c7 */
  if (C.cf) goto L_101e68c7;
  /* 101e689a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e689c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 101e689f je 0x101e68a9 */
  if (C.zf) goto L_101e68a9;
  /* 101e68a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101e68a3:;
  /* 101e68a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e68a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e68a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 101e68a7 jne 0x101e68a3 */
  if (!C.zf) goto L_101e68a3;
L_101e68a9:;
  /* 101e68a9 mov ecx, eax */
  ECX = (EAX);
  /* 101e68ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101e68ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e68b0 mov ecx, eax */
  ECX = (EAX);
  /* 101e68b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101e68b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e68b7 mov ecx, edx */
  ECX = (EDX);
  /* 101e68b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101e68bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e68bf je 0x101e68c7 */
  if (C.zf) goto L_101e68c7;
  /* 101e68c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 101e68c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 101e68c5 je 0x101e68cd */
  if (C.zf) goto L_101e68cd;
L_101e68c7:;
  /* 101e68c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e68c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e68ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101e68cb jne 0x101e68c7 */
  if (!C.zf) goto L_101e68c7;
L_101e68cd:;
  /* 101e68cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e68d1 pop edi */
  EDI = (pop32());
  /* 101e68d2 ret  */
  ESPCHK(0x101e6880u, _esp0);
  ESP += 4; return;
L_101e68d3:;
  /* 101e68d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e68d7 ret  */
  ESPCHK(0x101e6880u, _esp0);
  ESP += 4; return;
}

/* FUN_100068e0 @ 0x101e68e0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_101e68e0(void) {
  FTRACE(0x101e68e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e68e0 push ebp */
  push32((uint32_t)(EBP));
  /* 101e68e1 mov ebp, esp */
  EBP = (ESP);
  /* 101e68e3 push edi */
  push32((uint32_t)(EDI));
  /* 101e68e4 push esi */
  push32((uint32_t)(ESI));
  /* 101e68e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 101e68e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 101e68eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 101e68ee mov eax, ecx */
  EAX = (ECX);
  /* 101e68f0 mov edx, ecx */
  EDX = (ECX);
  /* 101e68f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e68f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e68f6 jbe 0x101e6900 */
  if ((C.cf||C.zf)) goto L_101e6900;
  /* 101e68f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e68fa jb 0x101e6a78 */
  if (C.cf) goto L_101e6a78;
L_101e6900:;
  /* 101e6900 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101e6906 jne 0x101e691c */
  if (!C.zf) goto L_101e691c;
  /* 101e6908 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e690b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101e690e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6911 jb 0x101e693c */
  if (C.cf) goto L_101e693c;
  /* 101e6913 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e6915 jmp dword ptr [edx*4 + 0x101e6a28] */
  switch (EDX) {
    case 0: goto L_101e6a38;
    case 1: goto L_101e6a40;
    case 2: goto L_101e6a4c;
    case 3: goto L_101e6a60;
    default: x86_unimpl("switch@0x101e6915 out of table"); return;
  }
L_101e691c:;
  /* 101e691c mov eax, edi */
  EAX = (EDI);
  /* 101e691e mov edx, 3 */
  EDX = (0x3u);
  /* 101e6923 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6926 jb 0x101e6934 */
  if (C.cf) goto L_101e6934;
  /* 101e6928 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101e692b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e692d jmp dword ptr [eax*4 + 0x101e6940] */
  switch (EAX) {
    case 1: goto L_101e6950;
    case 2: goto L_101e697c;
    case 3: goto L_101e69a0;
    default: x86_unimpl("switch@0x101e692d out of table"); return;
  }
L_101e6934:;
  /* 101e6934 jmp dword ptr [ecx*4 + 0x101e6a38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x101e6a38)))); return;
  /* 101e693b nop  */
  /* nop */
L_101e693c:;
  /* 101e693c jmp dword ptr [ecx*4 + 0x101e69bc] */
  switch (ECX) {
    case 0: goto L_101e6a1f;
    case 1: goto L_101e6a0c;
    case 2: goto L_101e6a04;
    case 3: goto L_101e69fc;
    case 4: goto L_101e69f4;
    case 5: goto L_101e69ec;
    case 6: goto L_101e69e4;
    case 7: goto L_101e69dc;
    default: x86_unimpl("switch@0x101e693c out of table"); return;
  }
  /* 101e6943 nop  */
  /* nop */
L_101e6950:;
  /* 101e6950 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e6952 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e6954 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e6956 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e6959 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e695c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e695f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e6962 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e6965 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6968 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e696b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e696e jb 0x101e693c */
  if (C.cf) goto L_101e693c;
  /* 101e6970 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e6972 jmp dword ptr [edx*4 + 0x101e6a28] */
  switch (EDX) {
    case 0: goto L_101e6a38;
    case 1: goto L_101e6a40;
    case 2: goto L_101e6a4c;
    case 3: goto L_101e6a60;
    default: x86_unimpl("switch@0x101e6972 out of table"); return;
  }
  /* 101e6979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e697c:;
  /* 101e697c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e697e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e6980 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e6982 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e6985 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e6988 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e698b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e698e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6991 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6994 jb 0x101e693c */
  if (C.cf) goto L_101e693c;
  /* 101e6996 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e6998 jmp dword ptr [edx*4 + 0x101e6a28] */
  switch (EDX) {
    case 0: goto L_101e6a38;
    case 1: goto L_101e6a40;
    case 2: goto L_101e6a4c;
    case 3: goto L_101e6a60;
    default: x86_unimpl("switch@0x101e6998 out of table"); return;
  }
  /* 101e699f nop  */
  /* nop */
L_101e69a0:;
  /* 101e69a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e69a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e69a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e69a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101e69a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e69aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 101e69ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e69ae jb 0x101e693c */
  if (C.cf) goto L_101e693c;
  /* 101e69b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e69b2 jmp dword ptr [edx*4 + 0x101e6a28] */
  switch (EDX) {
    case 0: goto L_101e6a38;
    case 1: goto L_101e6a40;
    case 2: goto L_101e6a4c;
    case 3: goto L_101e6a60;
    default: x86_unimpl("switch@0x101e69b2 out of table"); return;
  }
  /* 101e69b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e69dc:;
  /* 101e69dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 101e69e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_101e69e4:;
  /* 101e69e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 101e69e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_101e69ec:;
  /* 101e69ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 101e69f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_101e69f4:;
  /* 101e69f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 101e69f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_101e69fc:;
  /* 101e69fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 101e6a00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_101e6a04:;
  /* 101e6a04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 101e6a08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_101e6a0c:;
  /* 101e6a0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 101e6a10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 101e6a14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101e6a1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6a1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101e6a1f:;
  /* 101e6a1f jmp dword ptr [edx*4 + 0x101e6a28] */
  switch (EDX) {
    case 0: goto L_101e6a38;
    case 1: goto L_101e6a40;
    case 2: goto L_101e6a4c;
    case 3: goto L_101e6a60;
    default: x86_unimpl("switch@0x101e6a1f out of table"); return;
  }
  /* 101e6a26 mov edi, edi */
  EDI = (EDI);
L_101e6a38:;
  /* 101e6a38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6a3b pop esi */
  ESI = (pop32());
  /* 101e6a3c pop edi */
  EDI = (pop32());
  /* 101e6a3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6a3e ret  */
  ESPCHK(0x101e68e0u, _esp0);
  ESP += 4; return;
  /* 101e6a3f nop  */
  /* nop */
L_101e6a40:;
  /* 101e6a40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e6a42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e6a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6a47 pop esi */
  ESI = (pop32());
  /* 101e6a48 pop edi */
  EDI = (pop32());
  /* 101e6a49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6a4a ret  */
  ESPCHK(0x101e68e0u, _esp0);
  ESP += 4; return;
  /* 101e6a4b nop  */
  /* nop */
L_101e6a4c:;
  /* 101e6a4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e6a4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e6a50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e6a53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e6a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6a59 pop esi */
  ESI = (pop32());
  /* 101e6a5a pop edi */
  EDI = (pop32());
  /* 101e6a5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6a5c ret  */
  ESPCHK(0x101e68e0u, _esp0);
  ESP += 4; return;
  /* 101e6a5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e6a60:;
  /* 101e6a60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 101e6a62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 101e6a64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e6a67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e6a6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e6a6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e6a70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6a73 pop esi */
  ESI = (pop32());
  /* 101e6a74 pop edi */
  EDI = (pop32());
  /* 101e6a75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6a76 ret  */
  ESPCHK(0x101e68e0u, _esp0);
  ESP += 4; return;
  /* 101e6a77 nop  */
  /* nop */
L_101e6a78:;
  /* 101e6a78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 101e6a7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 101e6a80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 101e6a86 jne 0x101e6aac */
  if (!C.zf) goto L_101e6aac;
  /* 101e6a88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e6a8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 101e6a8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6a91 jb 0x101e6aa0 */
  if (C.cf) goto L_101e6aa0;
  /* 101e6a93 std  */
  C.df=1;
  /* 101e6a94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e6a96 cld  */
  C.df=0;
  /* 101e6a97 jmp dword ptr [edx*4 + 0x101e6bc0] */
  switch (EDX) {
    case 0: goto L_101e6bd0;
    case 1: goto L_101e6bd8;
    case 2: goto L_101e6be8;
    case 3: goto L_101e6bfc;
    default: x86_unimpl("switch@0x101e6a97 out of table"); return;
  }
  /* 101e6a9e mov edi, edi */
  EDI = (EDI);
L_101e6aa0:;
  /* 101e6aa0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e6aa2 jmp dword ptr [ecx*4 + 0x101e6b70] */
  switch (ECX) {
    case 0: goto L_101e6bb7;
    default: x86_unimpl("switch@0x101e6aa2 out of table"); return;
  }
  /* 101e6aa9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e6aac:;
  /* 101e6aac mov eax, edi */
  EAX = (EDI);
  /* 101e6aae mov edx, 3 */
  EDX = (0x3u);
  /* 101e6ab3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6ab6 jb 0x101e6ac4 */
  if (C.cf) goto L_101e6ac4;
  /* 101e6ab8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 101e6abb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6abd jmp dword ptr [eax*4 + 0x101e6ac8] */
  switch (EAX) {
    case 1: goto L_101e6ad8;
    case 2: goto L_101e6af8;
    case 3: goto L_101e6b20;
    default: x86_unimpl("switch@0x101e6abd out of table"); return;
  }
L_101e6ac4:;
  /* 101e6ac4 jmp dword ptr [ecx*4 + 0x101e6bc0] */
  switch (ECX) {
    case 0: goto L_101e6bd0;
    case 1: goto L_101e6bd8;
    case 2: goto L_101e6be8;
    case 3: goto L_101e6bfc;
    default: x86_unimpl("switch@0x101e6ac4 out of table"); return;
  }
  /* 101e6acb nop  */
  /* nop */
L_101e6ad8:;
  /* 101e6ad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e6adb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e6add mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e6ae0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 101e6ae1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e6ae4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 101e6ae5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6ae8 jb 0x101e6aa0 */
  if (C.cf) goto L_101e6aa0;
  /* 101e6aea std  */
  C.df=1;
  /* 101e6aeb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e6aed cld  */
  C.df=0;
  /* 101e6aee jmp dword ptr [edx*4 + 0x101e6bc0] */
  switch (EDX) {
    case 0: goto L_101e6bd0;
    case 1: goto L_101e6bd8;
    case 2: goto L_101e6be8;
    case 3: goto L_101e6bfc;
    default: x86_unimpl("switch@0x101e6aee out of table"); return;
  }
  /* 101e6af5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e6af8:;
  /* 101e6af8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e6afb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e6afd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e6b00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e6b03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e6b06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e6b09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6b0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6b0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6b12 jb 0x101e6aa0 */
  if (C.cf) goto L_101e6aa0;
  /* 101e6b14 std  */
  C.df=1;
  /* 101e6b15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e6b17 cld  */
  C.df=0;
  /* 101e6b18 jmp dword ptr [edx*4 + 0x101e6bc0] */
  switch (EDX) {
    case 0: goto L_101e6bd0;
    case 1: goto L_101e6bd8;
    case 2: goto L_101e6be8;
    case 3: goto L_101e6bfc;
    default: x86_unimpl("switch@0x101e6b18 out of table"); return;
  }
  /* 101e6b1f nop  */
  /* nop */
L_101e6b20:;
  /* 101e6b20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e6b23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 101e6b25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e6b28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e6b2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e6b2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e6b31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 101e6b34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e6b37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6b3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6b3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6b40 jb 0x101e6aa0 */
  if (C.cf) goto L_101e6aa0;
  /* 101e6b46 std  */
  C.df=1;
  /* 101e6b47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 101e6b49 cld  */
  C.df=0;
  /* 101e6b4a jmp dword ptr [edx*4 + 0x101e6bc0] */
  switch (EDX) {
    case 0: goto L_101e6bd0;
    case 1: goto L_101e6bd8;
    case 2: goto L_101e6be8;
    case 3: goto L_101e6bfc;
    default: x86_unimpl("switch@0x101e6b4a out of table"); return;
  }
  /* 101e6b51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 101e6b54 je 0x101e6bc1 */
  if (C.zf) goto L_101e6bc1;
  /* 101e6b56 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 101e6b57 adc byte ptr [ebx + ebp*2 + 0x1e], bh */
  { uint32_t _a=(r8((uint32_t)(EBX + EBP*2 + 0x1e))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBP*2 + 0x1e), (_r)); fl_add(_a,_b,_r,8); }
  /* 101e6b5b adc byte ptr [ebx + ebp*2 + 0x6b8c101e], al */
  { uint32_t _a=(r8((uint32_t)(EBX + EBP*2 + 0x6b8c101e))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBP*2 + 0x6b8c101e), (_r)); fl_add(_a,_b,_r,8); }
  /* 101e6b62 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 101e6b63 adc byte ptr [ebx + ebp*2 + 0x6b9c101e], dl */
  { uint32_t _a=(r8((uint32_t)(EBX + EBP*2 + 0x6b9c101e))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EBP*2 + 0x6b9c101e), (_r)); fl_add(_a,_b,_r,8); }
  /* 101e6b6a push ds */
  push32((uint32_t)(C.seg_ds));
  /* 101e6b6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 101e6b6d imul ebx, dword ptr [esi], 0x10 */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESI)))*(int64_t)(int32_t)(0x10u); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101e6b74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 101e6b78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 101e6b7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 101e6b80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 101e6b84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 101e6b88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 101e6b8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 101e6b90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 101e6b94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 101e6b98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 101e6b9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 101e6ba0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 101e6ba4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 101e6ba8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 101e6bac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 101e6bb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6bb5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_101e6bb7:;
  /* 101e6bb7 jmp dword ptr [edx*4 + 0x101e6bc0] */
  switch (EDX) {
    case 0: goto L_101e6bd0;
    case 1: goto L_101e6bd8;
    case 2: goto L_101e6be8;
    case 3: goto L_101e6bfc;
    default: x86_unimpl("switch@0x101e6bb7 out of table"); return;
  }
  /* 101e6bbe mov edi, edi */
  EDI = (EDI);
L_101e6bd0:;
  /* 101e6bd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6bd3 pop esi */
  ESI = (pop32());
  /* 101e6bd4 pop edi */
  EDI = (pop32());
  /* 101e6bd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6bd6 ret  */
  ESPCHK(0x101e68e0u, _esp0);
  ESP += 4; return;
  /* 101e6bd7 nop  */
  /* nop */
L_101e6bd8:;
  /* 101e6bd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e6bdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e6bde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6be1 pop esi */
  ESI = (pop32());
  /* 101e6be2 pop edi */
  EDI = (pop32());
  /* 101e6be3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6be4 ret  */
  ESPCHK(0x101e68e0u, _esp0);
  ESP += 4; return;
  /* 101e6be5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_101e6be8:;
  /* 101e6be8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e6beb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e6bee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e6bf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e6bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6bf7 pop esi */
  ESI = (pop32());
  /* 101e6bf8 pop edi */
  EDI = (pop32());
  /* 101e6bf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6bfa ret  */
  ESPCHK(0x101e68e0u, _esp0);
  ESP += 4; return;
  /* 101e6bfb nop  */
  /* nop */
L_101e6bfc:;
  /* 101e6bfc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 101e6bff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 101e6c02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 101e6c05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 101e6c08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 101e6c0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 101e6c0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6c11 pop esi */
  ESI = (pop32());
  /* 101e6c12 pop edi */
  EDI = (pop32());
  /* 101e6c13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6c14 ret  */
  ESPCHK(0x101e68e0u, _esp0);
  ESP += 4; return;
L_101e6bc1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x101e6bc1 (unresolved jump table)"); return;
}

/* _strlen @ 0x101e6c20 (123 bytes, 44 insns) */
void f_101e6c20(void) {
  FTRACE(0x101e6c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6c20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e6c24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101e6c2a je 0x101e6c40 */
  if (C.zf) goto L_101e6c40;
L_101e6c2c:;
  /* 101e6c2c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 101e6c2e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101e6c2f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e6c31 je 0x101e6c73 */
  if (C.zf) goto L_101e6c73;
  /* 101e6c33 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 101e6c39 jne 0x101e6c2c */
  if (!C.zf) goto L_101e6c2c;
  /* 101e6c3b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_101e6c40:;
  /* 101e6c40 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 101e6c42 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 101e6c47 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6c49 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6c4c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 101e6c4e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6c51 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 101e6c56 je 0x101e6c40 */
  if (C.zf) goto L_101e6c40;
  /* 101e6c58 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 101e6c5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 101e6c5d je 0x101e6c91 */
  if (C.zf) goto L_101e6c91;
  /* 101e6c5f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 101e6c61 je 0x101e6c87 */
  if (C.zf) goto L_101e6c87;
  /* 101e6c63 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 101e6c68 je 0x101e6c7d */
  if (C.zf) goto L_101e6c7d;
  /* 101e6c6a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 101e6c6f je 0x101e6c73 */
  if (C.zf) goto L_101e6c73;
  /* 101e6c71 jmp 0x101e6c40 */
  goto L_101e6c40;
L_101e6c73:;
  /* 101e6c73 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 101e6c76 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e6c7a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6c7c ret  */
  ESPCHK(0x101e6c20u, _esp0);
  ESP += 4; return;
L_101e6c7d:;
  /* 101e6c7d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 101e6c80 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e6c84 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6c86 ret  */
  ESPCHK(0x101e6c20u, _esp0);
  ESP += 4; return;
L_101e6c87:;
  /* 101e6c87 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 101e6c8a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e6c8e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6c90 ret  */
  ESPCHK(0x101e6c20u, _esp0);
  ESP += 4; return;
L_101e6c91:;
  /* 101e6c91 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 101e6c94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e6c98 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6c9a ret  */
  ESPCHK(0x101e6c20u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x101e6c9b (9 bytes, 4 insns) */
void f_101e6c9b(void) {
  FTRACE(0x101e6c9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6c9b push 2 */
  push32((uint32_t)(0x2u));
  /* 101e6c9d call 0x101e45df */
  push32(0x101e6ca2u); f_101e45df();
  /* 101e6ca2 pop ecx */
  ECX = (pop32());
  /* 101e6ca3 ret  */
  ESPCHK(0x101e6c9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca4 @ 0x101e6ca4 (101 bytes, 34 insns) */
void f_101e6ca4(void) {
  FTRACE(0x101e6ca4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6ca4 push esi */
  push32((uint32_t)(ESI));
  /* 101e6ca5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6ca9 cmp esi, dword ptr [0x101f27e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101f27e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6caf jae 0x101e6cf1 */
  if (!C.cf) goto L_101e6cf1;
  /* 101e6cb1 mov ecx, esi */
  ECX = (ESI);
  /* 101e6cb3 mov eax, esi */
  EAX = (ESI);
  /* 101e6cb5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e6cb8 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6cbb mov ecx, dword ptr [ecx*4 + 0x101f26e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e6cc2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101e6cc5 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101e6cca je 0x101e6cf1 */
  if (C.zf) goto L_101e6cf1;
  /* 101e6ccc push edi */
  push32((uint32_t)(EDI));
  /* 101e6ccd push esi */
  push32((uint32_t)(ESI));
  /* 101e6cce call 0x101e9441 */
  push32(0x101e6cd3u); f_101e9441();
  /* 101e6cd3 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101e6cd7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101e6cdb push esi */
  push32((uint32_t)(ESI));
  /* 101e6cdc call 0x101e6d09 */
  push32(0x101e6ce1u); f_101e6d09();
  /* 101e6ce1 push esi */
  push32((uint32_t)(ESI));
  /* 101e6ce2 mov edi, eax */
  EDI = (EAX);
  /* 101e6ce4 call 0x101e94a0 */
  push32(0x101e6ce9u); f_101e94a0();
  /* 101e6ce9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6cec mov eax, edi */
  EAX = (EDI);
  /* 101e6cee pop edi */
  EDI = (pop32());
  /* 101e6cef pop esi */
  ESI = (pop32());
  /* 101e6cf0 ret  */
  ESPCHK(0x101e6ca4u, _esp0);
  ESP += 4; return;
L_101e6cf1:;
  /* 101e6cf1 call 0x101e936e */
  push32(0x101e6cf6u); f_101e936e();
  /* 101e6cf6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101e6cfc call 0x101e9377 */
  push32(0x101e6d01u); f_101e9377();
  /* 101e6d01 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e6d04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6d07 pop esi */
  ESI = (pop32());
  /* 101e6d08 ret  */
  ESPCHK(0x101e6ca4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d09 @ 0x101e6d09 (115 bytes, 41 insns) */
void f_101e6d09(void) {
  FTRACE(0x101e6d09u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6d09 push esi */
  push32((uint32_t)(ESI));
  /* 101e6d0a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6d0e push edi */
  push32((uint32_t)(EDI));
  /* 101e6d0f push esi */
  push32((uint32_t)(ESI));
  /* 101e6d10 call 0x101e93ff */
  push32(0x101e6d15u); f_101e93ff();
  /* 101e6d15 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6d18 pop ecx */
  ECX = (pop32());
  /* 101e6d19 jne 0x101e6d28 */
  if (!C.zf) goto L_101e6d28;
  /* 101e6d1b call 0x101e936e */
  push32(0x101e6d20u); f_101e936e();
  /* 101e6d20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101e6d26 jmp 0x101e6d55 */
  goto L_101e6d55;
L_101e6d28:;
  /* 101e6d28 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 101e6d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 101e6d2e push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101e6d32 push eax */
  push32((uint32_t)(EAX));
  /* 101e6d33 call dword ptr [0x101eb000] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb000))), 0x101e6d39u);
  /* 101e6d39 mov edi, eax */
  EDI = (EAX);
  /* 101e6d3b cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6d3e jne 0x101e6d48 */
  if (!C.zf) goto L_101e6d48;
  /* 101e6d40 call dword ptr [0x101eb03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb03c))), 0x101e6d46u);
  /* 101e6d46 jmp 0x101e6d4a */
  goto L_101e6d4a;
L_101e6d48:;
  /* 101e6d48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101e6d4a:;
  /* 101e6d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e6d4c je 0x101e6d5a */
  if (C.zf) goto L_101e6d5a;
  /* 101e6d4e push eax */
  push32((uint32_t)(EAX));
  /* 101e6d4f call 0x101e92fb */
  push32(0x101e6d54u); f_101e92fb();
  /* 101e6d54 pop ecx */
  ECX = (pop32());
L_101e6d55:;
  /* 101e6d55 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6d58 jmp 0x101e6d79 */
  goto L_101e6d79;
L_101e6d5a:;
  /* 101e6d5a mov ecx, esi */
  ECX = (ESI);
  /* 101e6d5c and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 101e6d5f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e6d62 mov eax, esi */
  EAX = (ESI);
  /* 101e6d64 mov ecx, dword ptr [ecx*4 + 0x101f26e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e6d6b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101e6d6e and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 101e6d73 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 101e6d77 mov eax, edi */
  EAX = (EDI);
L_101e6d79:;
  /* 101e6d79 pop edi */
  EDI = (pop32());
  /* 101e6d7a pop esi */
  ESI = (pop32());
  /* 101e6d7b ret  */
  ESPCHK(0x101e6d09u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d7c @ 0x101e6d7c (101 bytes, 34 insns) */
void f_101e6d7c(void) {
  FTRACE(0x101e6d7cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6d7c push esi */
  push32((uint32_t)(ESI));
  /* 101e6d7d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 101e6d81 cmp esi, dword ptr [0x101f27e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x101f27e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6d87 jae 0x101e6dc9 */
  if (!C.cf) goto L_101e6dc9;
  /* 101e6d89 mov ecx, esi */
  ECX = (ESI);
  /* 101e6d8b mov eax, esi */
  EAX = (ESI);
  /* 101e6d8d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e6d90 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6d93 mov ecx, dword ptr [ecx*4 + 0x101f26e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e6d9a lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101e6d9d test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 101e6da2 je 0x101e6dc9 */
  if (C.zf) goto L_101e6dc9;
  /* 101e6da4 push edi */
  push32((uint32_t)(EDI));
  /* 101e6da5 push esi */
  push32((uint32_t)(ESI));
  /* 101e6da6 call 0x101e9441 */
  push32(0x101e6dabu); f_101e9441();
  /* 101e6dab push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101e6daf push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 101e6db3 push esi */
  push32((uint32_t)(ESI));
  /* 101e6db4 call 0x101e6de1 */
  push32(0x101e6db9u); f_101e6de1();
  /* 101e6db9 push esi */
  push32((uint32_t)(ESI));
  /* 101e6dba mov edi, eax */
  EDI = (EAX);
  /* 101e6dbc call 0x101e94a0 */
  push32(0x101e6dc1u); f_101e94a0();
  /* 101e6dc1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6dc4 mov eax, edi */
  EAX = (EDI);
  /* 101e6dc6 pop edi */
  EDI = (pop32());
  /* 101e6dc7 pop esi */
  ESI = (pop32());
  /* 101e6dc8 ret  */
  ESPCHK(0x101e6d7cu, _esp0);
  ESP += 4; return;
L_101e6dc9:;
  /* 101e6dc9 call 0x101e936e */
  push32(0x101e6dceu); f_101e936e();
  /* 101e6dce mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101e6dd4 call 0x101e9377 */
  push32(0x101e6dd9u); f_101e9377();
  /* 101e6dd9 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101e6ddc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6ddf pop esi */
  ESI = (pop32());
  /* 101e6de0 ret  */
  ESPCHK(0x101e6d7cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006de1 @ 0x101e6de1 (395 bytes, 135 insns) */
void f_101e6de1(void) {
  FTRACE(0x101e6de1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6de1 push ebp */
  push32((uint32_t)(EBP));
  /* 101e6de2 mov ebp, esp */
  EBP = (ESP);
  /* 101e6de4 sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6dea push ebx */
  push32((uint32_t)(EBX));
  /* 101e6deb push esi */
  push32((uint32_t)(ESI));
  /* 101e6dec push edi */
  push32((uint32_t)(EDI));
  /* 101e6ded xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e6def cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6df2 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 101e6df5 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 101e6df8 jne 0x101e6e01 */
  if (!C.zf) goto L_101e6e01;
L_101e6dfa:;
  /* 101e6dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e6dfc jmp 0x101e6f67 */
  goto L_101e6f67;
L_101e6e01:;
  /* 101e6e01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6e04 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101e6e07 lea ebx, [eax*4 + 0x101f26e0] */
  EBX = ((uint32_t)(EAX*4 + 0x101f26e0));
  /* 101e6e0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e6e11 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6e14 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 101e6e17 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101e6e19 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 101e6e1c test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 101e6e21 je 0x101e6e31 */
  if (C.zf) goto L_101e6e31;
  /* 101e6e23 push 2 */
  push32((uint32_t)(0x2u));
  /* 101e6e25 push edi */
  push32((uint32_t)(EDI));
  /* 101e6e26 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e6e29 call 0x101e6d09 */
  push32(0x101e6e2eu); f_101e6d09();
  /* 101e6e2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e6e31:;
  /* 101e6e31 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101e6e33 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e6e35 test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 101e6e39 je 0x101e6f00 */
  if (C.zf) goto L_101e6f00;
  /* 101e6e3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e6e42 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6e45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101e6e48 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 101e6e4b jbe 0x101e6f3b */
  if ((C.cf||C.zf)) goto L_101e6f3b;
L_101e6e51:;
  /* 101e6e51 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_101e6e57:;
  /* 101e6e57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e6e5a sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6e5d cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6e60 jae 0x101e6e8b */
  if (!C.cf) goto L_101e6e8b;
  /* 101e6e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e6e65 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 101e6e68 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 101e6e6a cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e6e6d jne 0x101e6e76 */
  if (!C.zf) goto L_101e6e76;
  /* 101e6e6f inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 101e6e72 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 101e6e75 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_101e6e76:;
  /* 101e6e76 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101e6e78 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101e6e79 mov ecx, eax */
  ECX = (EAX);
  /* 101e6e7b lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 101e6e81 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6e83 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6e89 jl 0x101e6e57 */
  if ((C.sf!=C.of)) goto L_101e6e57;
L_101e6e8b:;
  /* 101e6e8b mov edi, eax */
  EDI = (EAX);
  /* 101e6e8d lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 101e6e93 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6e95 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101e6e98 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e6e9a push eax */
  push32((uint32_t)(EAX));
  /* 101e6e9b lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 101e6ea1 push edi */
  push32((uint32_t)(EDI));
  /* 101e6ea2 push eax */
  push32((uint32_t)(EAX));
  /* 101e6ea3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101e6ea5 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 101e6ea8 call dword ptr [0x101eb07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb07c))), 0x101e6eaeu);
  /* 101e6eae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e6eb0 je 0x101e6ef5 */
  if (C.zf) goto L_101e6ef5;
  /* 101e6eb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e6eb5 add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 101e6eb8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6eba jl 0x101e6ec7 */
  if ((C.sf!=C.of)) goto L_101e6ec7;
  /* 101e6ebc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101e6ebf sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e6ec2 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6ec5 jb 0x101e6e51 */
  if (C.cf) goto L_101e6e51;
L_101e6ec7:;
  /* 101e6ec7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_101e6ec9:;
  /* 101e6ec9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101e6ecc cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6ece jne 0x101e6f64 */
  if (!C.zf) goto L_101e6f64;
  /* 101e6ed4 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6ed7 je 0x101e6f3b */
  if (C.zf) goto L_101e6f3b;
  /* 101e6ed9 push 5 */
  push32((uint32_t)(0x5u));
  /* 101e6edb pop esi */
  ESI = (pop32());
  /* 101e6edc cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6edf jne 0x101e6f2d */
  if (!C.zf) goto L_101e6f2d;
  /* 101e6ee1 call 0x101e936e */
  push32(0x101e6ee6u); f_101e936e();
  /* 101e6ee6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 101e6eec call 0x101e9377 */
  push32(0x101e6ef1u); f_101e9377();
  /* 101e6ef1 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 101e6ef3 jmp 0x101e6f36 */
  goto L_101e6f36;
L_101e6ef5:;
  /* 101e6ef5 call dword ptr [0x101eb03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb03c))), 0x101e6efbu);
  /* 101e6efb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 101e6efe jmp 0x101e6ec7 */
  goto L_101e6ec7;
L_101e6f00:;
  /* 101e6f00 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 101e6f03 push edi */
  push32((uint32_t)(EDI));
  /* 101e6f04 push ecx */
  push32((uint32_t)(ECX));
  /* 101e6f05 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 101e6f08 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e6f0b push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 101e6f0d call dword ptr [0x101eb07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb07c))), 0x101e6f13u);
  /* 101e6f13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e6f15 je 0x101e6f22 */
  if (C.zf) goto L_101e6f22;
  /* 101e6f17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 101e6f1a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 101e6f1d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 101e6f20 jmp 0x101e6ec9 */
  goto L_101e6ec9;
L_101e6f22:;
  /* 101e6f22 call dword ptr [0x101eb03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb03c))), 0x101e6f28u);
  /* 101e6f28 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 101e6f2b jmp 0x101e6ec9 */
  goto L_101e6ec9;
L_101e6f2d:;
  /* 101e6f2d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e6f30 call 0x101e92fb */
  push32(0x101e6f35u); f_101e92fb();
  /* 101e6f35 pop ecx */
  ECX = (pop32());
L_101e6f36:;
  /* 101e6f36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6f39 jmp 0x101e6f67 */
  goto L_101e6f67;
L_101e6f3b:;
  /* 101e6f3b mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 101e6f3d test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 101e6f42 je 0x101e6f50 */
  if (C.zf) goto L_101e6f50;
  /* 101e6f44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e6f47 cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101e6f4a je 0x101e6dfa */
  if (C.zf) goto L_101e6dfa;
L_101e6f50:;
  /* 101e6f50 call 0x101e936e */
  push32(0x101e6f55u); f_101e936e();
  /* 101e6f55 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 101e6f5b call 0x101e9377 */
  push32(0x101e6f60u); f_101e9377();
  /* 101e6f60 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 101e6f62 jmp 0x101e6f36 */
  goto L_101e6f36;
L_101e6f64:;
  /* 101e6f64 sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_101e6f67:;
  /* 101e6f67 pop edi */
  EDI = (pop32());
  /* 101e6f68 pop esi */
  ESI = (pop32());
  /* 101e6f69 pop ebx */
  EBX = (pop32());
  /* 101e6f6a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101e6f6b ret  */
  ESPCHK(0x101e6de1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f6c @ 0x101e6f6c (68 bytes, 19 insns) */
void f_101e6f6c(void) {
  FTRACE(0x101e6f6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6f6c inc dword ptr [0x101f1254] */
  { uint32_t _r=(r32((uint32_t)(0x101f1254)))+1; w32((uint32_t)(0x101f1254), (_r)); fl_inc(_r,32); }
  /* 101e6f72 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 101e6f77 call 0x101e74c5 */
  push32(0x101e6f7cu); f_101e74c5();
  /* 101e6f7c pop ecx */
  ECX = (pop32());
  /* 101e6f7d mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e6f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e6f83 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 101e6f86 je 0x101e6f95 */
  if (C.zf) goto L_101e6f95;
  /* 101e6f88 or dword ptr [ecx + 0xc], 8 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x8u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 101e6f8c mov dword ptr [ecx + 0x18], 0x1000 */
  w32((uint32_t)(ECX + 0x18), (0x1000u));
  /* 101e6f93 jmp 0x101e6fa6 */
  goto L_101e6fa6;
L_101e6f95:;
  /* 101e6f95 or dword ptr [ecx + 0xc], 4 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0xc)))|(0x4u); w32((uint32_t)(ECX + 0xc), (_r)); fl_logic(_r,32); }
  /* 101e6f99 lea eax, [ecx + 0x14] */
  EAX = ((uint32_t)(ECX + 0x14));
  /* 101e6f9c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 101e6f9f mov dword ptr [ecx + 0x18], 2 */
  w32((uint32_t)(ECX + 0x18), (0x2u));
L_101e6fa6:;
  /* 101e6fa6 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 101e6fa9 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 101e6fad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 101e6faf ret  */
  ESPCHK(0x101e6f6cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006fb0 @ 0x101e6fb0 (41 bytes, 13 insns) */
void f_101e6fb0(void) {
  FTRACE(0x101e6fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e6fb0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e6fb4 cmp eax, dword ptr [0x101f27e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x101f27e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e6fba jb 0x101e6fbf */
  if (C.cf) goto L_101e6fbf;
  /* 101e6fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e6fbe ret  */
  ESPCHK(0x101e6fb0u, _esp0);
  ESP += 4; return;
L_101e6fbf:;
  /* 101e6fbf mov ecx, eax */
  ECX = (EAX);
  /* 101e6fc1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 101e6fc4 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 101e6fc7 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 101e6fca mov ecx, dword ptr [ecx*4 + 0x101f26e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x101f26e0)));
  /* 101e6fd1 mov al, byte ptr [ecx + eax*4 + 4] */
  AL = (r8((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 101e6fd5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 101e6fd8 ret  */
  ESPCHK(0x101e6fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007095 @ 0x101e7095 (47 bytes, 17 insns) */
void f_101e7095(void) {
  FTRACE(0x101e7095u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7095 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e7099 mov ecx, 0x101ed6b0 */
  ECX = (0x101ed6b0u);
  /* 101e709e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e70a0 jb 0x101e70b9 */
  if (C.cf) goto L_101e70b9;
  /* 101e70a2 cmp eax, 0x101ed910 */
  { uint32_t _a=(EAX),_b=(0x101ed910u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e70a7 ja 0x101e70b9 */
  if ((!C.cf&&!C.zf)) goto L_101e70b9;
  /* 101e70a9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e70ab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101e70ae add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e70b1 push eax */
  push32((uint32_t)(EAX));
  /* 101e70b2 call 0x101e737a */
  push32(0x101e70b7u); f_101e737a();
  /* 101e70b7 pop ecx */
  ECX = (pop32());
  /* 101e70b8 ret  */
  ESPCHK(0x101e7095u, _esp0);
  ESP += 4; return;
L_101e70b9:;
  /* 101e70b9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e70bc push eax */
  push32((uint32_t)(EAX));
  /* 101e70bd call dword ptr [0x101eb008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb008))), 0x101e70c3u);
  /* 101e70c3 ret  */
  ESPCHK(0x101e7095u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c4 @ 0x101e70c4 (35 bytes, 13 insns) */
void f_101e70c4(void) {
  FTRACE(0x101e70c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e70c4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e70c8 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e70cb jge 0x101e70d8 */
  if ((C.sf==C.of)) goto L_101e70d8;
  /* 101e70cd add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e70d0 push eax */
  push32((uint32_t)(EAX));
  /* 101e70d1 call 0x101e737a */
  push32(0x101e70d6u); f_101e737a();
  /* 101e70d6 pop ecx */
  ECX = (pop32());
  /* 101e70d7 ret  */
  ESPCHK(0x101e70c4u, _esp0);
  ESP += 4; return;
L_101e70d8:;
  /* 101e70d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e70dc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e70df push eax */
  push32((uint32_t)(EAX));
  /* 101e70e0 call dword ptr [0x101eb008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb008))), 0x101e70e6u);
  /* 101e70e6 ret  */
  ESPCHK(0x101e70c4u, _esp0);
  ESP += 4; return;
}

/* FUN_100070e7 @ 0x101e70e7 (47 bytes, 17 insns) */
void f_101e70e7(void) {
  FTRACE(0x101e70e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e70e7 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e70eb mov ecx, 0x101ed6b0 */
  ECX = (0x101ed6b0u);
  /* 101e70f0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e70f2 jb 0x101e710b */
  if (C.cf) goto L_101e710b;
  /* 101e70f4 cmp eax, 0x101ed910 */
  { uint32_t _a=(EAX),_b=(0x101ed910u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e70f9 ja 0x101e710b */
  if ((!C.cf&&!C.zf)) goto L_101e710b;
  /* 101e70fb sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e70fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 101e7100 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7103 push eax */
  push32((uint32_t)(EAX));
  /* 101e7104 call 0x101e73db */
  push32(0x101e7109u); f_101e73db();
  /* 101e7109 pop ecx */
  ECX = (pop32());
  /* 101e710a ret  */
  ESPCHK(0x101e70e7u, _esp0);
  ESP += 4; return;
L_101e710b:;
  /* 101e710b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e710e push eax */
  push32((uint32_t)(EAX));
  /* 101e710f call dword ptr [0x101eb00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb00c))), 0x101e7115u);
  /* 101e7115 ret  */
  ESPCHK(0x101e70e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10007116 @ 0x101e7116 (35 bytes, 13 insns) */
void f_101e7116(void) {
  FTRACE(0x101e7116u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7116 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 101e711a cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e711d jge 0x101e712a */
  if ((C.sf==C.of)) goto L_101e712a;
  /* 101e711f add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7122 push eax */
  push32((uint32_t)(EAX));
  /* 101e7123 call 0x101e73db */
  push32(0x101e7128u); f_101e73db();
  /* 101e7128 pop ecx */
  ECX = (pop32());
  /* 101e7129 ret  */
  ESPCHK(0x101e7116u, _esp0);
  ESP += 4; return;
L_101e712a:;
  /* 101e712a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e712e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7131 push eax */
  push32((uint32_t)(EAX));
  /* 101e7132 call dword ptr [0x101eb00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb00c))), 0x101e7138u);
  /* 101e7138 ret  */
  ESPCHK(0x101e7116u, _esp0);
  ESP += 4; return;
}

/* FUN_10007139 @ 0x101e7139 (89 bytes, 39 insns) */
void f_101e7139(void) {
  FTRACE(0x101e7139u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7139 push ebp */
  push32((uint32_t)(EBP));
  /* 101e713a mov ebp, esp */
  EBP = (ESP);
  /* 101e713c push ebx */
  push32((uint32_t)(EBX));
  /* 101e713d push esi */
  push32((uint32_t)(ESI));
  /* 101e713e mov esi, 0x101f145c */
  ESI = (0x101f145cu);
  /* 101e7143 push edi */
  push32((uint32_t)(EDI));
  /* 101e7144 push esi */
  push32((uint32_t)(ESI));
  /* 101e7145 call dword ptr [0x101eb084] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb084))), 0x101e714bu);
  /* 101e714b mov edi, dword ptr [0x101eb080] */
  EDI = (r32((uint32_t)(0x101eb080)));
  /* 101e7151 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 101e7153 cmp dword ptr [0x101f1458], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101f1458))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7159 je 0x101e7169 */
  if (C.zf) goto L_101e7169;
  /* 101e715b push esi */
  push32((uint32_t)(ESI));
  /* 101e715c call edi */
  call_ind((uint32_t)(EDI), 0x101e715eu);
  /* 101e715e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e7160 call 0x101e737a */
  push32(0x101e7165u); f_101e737a();
  /* 101e7165 pop ecx */
  ECX = (pop32());
  /* 101e7166 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e7168 pop ebx */
  EBX = (pop32());
L_101e7169:;
  /* 101e7169 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 101e716c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101e716f call 0x101e7192 */
  push32(0x101e7174u); f_101e7192();
  /* 101e7174 pop ecx */
  ECX = (pop32());
  /* 101e7175 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101e7178 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101e717a pop ecx */
  ECX = (pop32());
  /* 101e717b je 0x101e7187 */
  if (C.zf) goto L_101e7187;
  /* 101e717d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101e717f call 0x101e73db */
  push32(0x101e7184u); f_101e73db();
  /* 101e7184 pop ecx */
  ECX = (pop32());
  /* 101e7185 jmp 0x101e718a */
  goto L_101e718a;
L_101e7187:;
  /* 101e7187 push esi */
  push32((uint32_t)(ESI));
  /* 101e7188 call edi */
  call_ind((uint32_t)(EDI), 0x101e718au);
L_101e718a:;
  /* 101e718a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101e718d pop edi */
  EDI = (pop32());
  /* 101e718e pop esi */
  ESI = (pop32());
  /* 101e718f pop ebx */
  EBX = (pop32());
  /* 101e7190 pop ebp */
  EBP = (pop32());
  /* 101e7191 ret  */
  ESPCHK(0x101e7139u, _esp0);
  ESP += 4; return;
}

/* FUN_10007192 @ 0x101e7192 (105 bytes, 38 insns) */
void f_101e7192(void) {
  FTRACE(0x101e7192u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7192 push ebp */
  push32((uint32_t)(EBP));
  /* 101e7193 mov ebp, esp */
  EBP = (ESP);
  /* 101e7195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e719a jne 0x101e719e */
  if (!C.zf) goto L_101e719e;
  /* 101e719c pop ebp */
  EBP = (pop32());
  /* 101e719d ret  */
  ESPCHK(0x101e7192u, _esp0);
  ESP += 4; return;
L_101e719e:;
  /* 101e719e cmp dword ptr [0x101f12f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101f12f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e71a5 jne 0x101e71b9 */
  if (!C.zf) goto L_101e71b9;
  /* 101e71a7 mov cx, word ptr [ebp + 0xc] */
  CX = (r16((uint32_t)(EBP + 0xc)));
  /* 101e71ab cmp cx, 0xff */
  { uint32_t _a=(CX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 101e71b0 ja 0x101e71eb */
  if ((!C.cf&&!C.zf)) goto L_101e71eb;
  /* 101e71b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e71b4 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 101e71b6 pop eax */
  EAX = (pop32());
  /* 101e71b7 pop ebp */
  EBP = (pop32());
  /* 101e71b8 ret  */
  ESPCHK(0x101e7192u, _esp0);
  ESP += 4; return;
L_101e71b9:;
  /* 101e71b9 lea ecx, [ebp + 8] */
  ECX = ((uint32_t)(EBP + 0x8));
  /* 101e71bc and dword ptr [ebp + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))&(0x0u); w32((uint32_t)(EBP + 0x8), (_r)); fl_logic(_r,32); }
  /* 101e71c0 push ecx */
  push32((uint32_t)(ECX));
  /* 101e71c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e71c3 push dword ptr [0x101ed468] */
  push32((uint32_t)(r32((uint32_t)(0x101ed468))));
  /* 101e71c9 push eax */
  push32((uint32_t)(EAX));
  /* 101e71ca lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 101e71cd push 1 */
  push32((uint32_t)(0x1u));
  /* 101e71cf push eax */
  push32((uint32_t)(EAX));
  /* 101e71d0 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 101e71d5 push dword ptr [0x101f1304] */
  push32((uint32_t)(r32((uint32_t)(0x101f1304))));
  /* 101e71db call dword ptr [0x101eb060] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb060))), 0x101e71e1u);
  /* 101e71e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e71e3 je 0x101e71eb */
  if (C.zf) goto L_101e71eb;
  /* 101e71e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e71e9 je 0x101e71f9 */
  if (C.zf) goto L_101e71f9;
L_101e71eb:;
  /* 101e71eb call 0x101e936e */
  push32(0x101e71f0u); f_101e936e();
  /* 101e71f0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 101e71f6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_101e71f9:;
  /* 101e71f9 pop ebp */
  EBP = (pop32());
  /* 101e71fa ret  */
  ESPCHK(0x101e7192u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x101e7200 (104 bytes, 43 insns) */
void f_101e7200(void) {
  FTRACE(0x101e7200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7200 push ebx */
  push32((uint32_t)(EBX));
  /* 101e7201 push esi */
  push32((uint32_t)(ESI));
  /* 101e7202 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 101e7206 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e7208 jne 0x101e7222 */
  if (!C.zf) goto L_101e7222;
  /* 101e720a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 101e720e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e7212 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e7214 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e7216 mov ebx, eax */
  EBX = (EAX);
  /* 101e7218 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101e721c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e721e mov edx, ebx */
  EDX = (EBX);
  /* 101e7220 jmp 0x101e7263 */
  goto L_101e7263;
L_101e7222:;
  /* 101e7222 mov ecx, eax */
  ECX = (EAX);
  /* 101e7224 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 101e7228 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e722c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_101e7230:;
  /* 101e7230 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101e7232 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101e7234 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101e7236 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101e7238 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e723a jne 0x101e7230 */
  if (!C.zf) goto L_101e7230;
  /* 101e723c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e723e mov esi, eax */
  ESI = (EAX);
  /* 101e7240 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101e7244 mov ecx, eax */
  ECX = (EAX);
  /* 101e7246 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101e724a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101e724c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e724e jb 0x101e725e */
  if (C.cf) goto L_101e725e;
  /* 101e7250 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7254 ja 0x101e725e */
  if ((!C.cf&&!C.zf)) goto L_101e725e;
  /* 101e7256 jb 0x101e725f */
  if (C.cf) goto L_101e725f;
  /* 101e7258 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e725c jbe 0x101e725f */
  if ((C.cf||C.zf)) goto L_101e725f;
L_101e725e:;
  /* 101e725e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_101e725f:;
  /* 101e725f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e7261 mov eax, esi */
  EAX = (ESI);
L_101e7263:;
  /* 101e7263 pop esi */
  ESI = (pop32());
  /* 101e7264 pop ebx */
  EBX = (pop32());
  /* 101e7265 ret 0x10 */
  ESPCHK(0x101e7200u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x101e7270 (117 bytes, 44 insns) */
void f_101e7270(void) {
  FTRACE(0x101e7270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e7270 push ebx */
  push32((uint32_t)(EBX));
  /* 101e7271 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 101e7275 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e7277 jne 0x101e7291 */
  if (!C.zf) goto L_101e7291;
  /* 101e7279 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e727d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 101e7281 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e7283 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e7285 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101e7289 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e728b mov eax, edx */
  EAX = (EDX);
  /* 101e728d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 101e728f jmp 0x101e72e1 */
  goto L_101e72e1;
L_101e7291:;
  /* 101e7291 mov ecx, eax */
  ECX = (EAX);
  /* 101e7293 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 101e7297 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 101e729b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_101e729f:;
  /* 101e729f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 101e72a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 101e72a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 101e72a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 101e72a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 101e72a9 jne 0x101e729f */
  if (!C.zf) goto L_101e729f;
  /* 101e72ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101e72ad mov ecx, eax */
  ECX = (EAX);
  /* 101e72af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101e72b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 101e72b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 101e72b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 101e72ba jb 0x101e72ca */
  if (C.cf) goto L_101e72ca;
  /* 101e72bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e72c0 ja 0x101e72ca */
  if ((!C.cf&&!C.zf)) goto L_101e72ca;
  /* 101e72c2 jb 0x101e72d2 */
  if (C.cf) goto L_101e72d2;
  /* 101e72c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e72c8 jbe 0x101e72d2 */
  if ((C.cf||C.zf)) goto L_101e72d2;
L_101e72ca:;
  /* 101e72ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e72ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101e72d2:;
  /* 101e72d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e72d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101e72da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e72dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 101e72de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_101e72e1:;
  /* 101e72e1 pop ebx */
  EBX = (pop32());
  /* 101e72e2 ret 0x10 */
  ESPCHK(0x101e7270u, _esp0);
  ESP += 20; return;
}

/* FUN_100072e5 @ 0x101e72e5 (41 bytes, 12 insns) */
void f_101e72e5(void) {
  FTRACE(0x101e72e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e72e5 push esi */
  push32((uint32_t)(ESI));
  /* 101e72e6 mov esi, dword ptr [0x101eb090] */
  ESI = (r32((uint32_t)(0x101eb090)));
  /* 101e72ec push dword ptr [0x101ed974] */
  push32((uint32_t)(r32((uint32_t)(0x101ed974))));
  /* 101e72f2 call esi */
  call_ind((uint32_t)(ESI), 0x101e72f4u);
  /* 101e72f4 push dword ptr [0x101ed964] */
  push32((uint32_t)(r32((uint32_t)(0x101ed964))));
  /* 101e72fa call esi */
  call_ind((uint32_t)(ESI), 0x101e72fcu);
  /* 101e72fc push dword ptr [0x101ed954] */
  push32((uint32_t)(r32((uint32_t)(0x101ed954))));
  /* 101e7302 call esi */
  call_ind((uint32_t)(ESI), 0x101e7304u);
  /* 101e7304 push dword ptr [0x101ed934] */
  push32((uint32_t)(r32((uint32_t)(0x101ed934))));
  /* 101e730a call esi */
  call_ind((uint32_t)(ESI), 0x101e730cu);
  /* 101e730c pop esi */
  ESI = (pop32());
  /* 101e730d ret  */
  ESPCHK(0x101e72e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000730e @ 0x101e730e (108 bytes, 34 insns) */
void f_101e730e(void) {
  FTRACE(0x101e730eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e730e push esi */
  push32((uint32_t)(ESI));
  /* 101e730f push edi */
  push32((uint32_t)(EDI));
  /* 101e7310 mov edi, dword ptr [0x101eb050] */
  EDI = (r32((uint32_t)(0x101eb050)));
  /* 101e7316 mov esi, 0x101ed930 */
  ESI = (0x101ed930u);
L_101e731b:;
  /* 101e731b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 101e731d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e731f je 0x101e734c */
  if (C.zf) goto L_101e734c;
  /* 101e7321 cmp esi, 0x101ed974 */
  { uint32_t _a=(ESI),_b=(0x101ed974u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7327 je 0x101e734c */
  if (C.zf) goto L_101e734c;
  /* 101e7329 cmp esi, 0x101ed964 */
  { uint32_t _a=(ESI),_b=(0x101ed964u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e732f je 0x101e734c */
  if (C.zf) goto L_101e734c;
  /* 101e7331 cmp esi, 0x101ed954 */
  { uint32_t _a=(ESI),_b=(0x101ed954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7337 je 0x101e734c */
  if (C.zf) goto L_101e734c;
  /* 101e7339 cmp esi, 0x101ed934 */
  { uint32_t _a=(ESI),_b=(0x101ed934u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e733f je 0x101e734c */
  if (C.zf) goto L_101e734c;
  /* 101e7341 push eax */
  push32((uint32_t)(EAX));
  /* 101e7342 call edi */
  call_ind((uint32_t)(EDI), 0x101e7344u);
  /* 101e7344 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101e7346 call 0x101e747d */
  push32(0x101e734bu); f_101e747d();
  /* 101e734b pop ecx */
  ECX = (pop32());
L_101e734c:;
  /* 101e734c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e734f cmp esi, 0x101ed9f0 */
  { uint32_t _a=(ESI),_b=(0x101ed9f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7355 jl 0x101e731b */
  if ((C.sf!=C.of)) goto L_101e731b;
  /* 101e7357 push dword ptr [0x101ed954] */
  push32((uint32_t)(r32((uint32_t)(0x101ed954))));
  /* 101e735d call edi */
  call_ind((uint32_t)(EDI), 0x101e735fu);
  /* 101e735f push dword ptr [0x101ed964] */
  push32((uint32_t)(r32((uint32_t)(0x101ed964))));
  /* 101e7365 call edi */
  call_ind((uint32_t)(EDI), 0x101e7367u);
  /* 101e7367 push dword ptr [0x101ed974] */
  push32((uint32_t)(r32((uint32_t)(0x101ed974))));
  /* 101e736d call edi */
  call_ind((uint32_t)(EDI), 0x101e736fu);
  /* 101e736f push dword ptr [0x101ed934] */
  push32((uint32_t)(r32((uint32_t)(0x101ed934))));
  /* 101e7375 call edi */
  call_ind((uint32_t)(EDI), 0x101e7377u);
  /* 101e7377 pop edi */
  EDI = (pop32());
  /* 101e7378 pop esi */
  ESI = (pop32());
  /* 101e7379 ret  */
  ESPCHK(0x101e730eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000737a @ 0x101e737a (97 bytes, 37 insns) */
void f_101e737a(void) {
  FTRACE(0x101e737au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e737a push ebp */
  push32((uint32_t)(EBP));
  /* 101e737b mov ebp, esp */
  EBP = (ESP);
  /* 101e737d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e7380 push esi */
  push32((uint32_t)(ESI));
  /* 101e7381 cmp dword ptr [eax*4 + 0x101ed930], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x101ed930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7389 lea esi, [eax*4 + 0x101ed930] */
  ESI = ((uint32_t)(EAX*4 + 0x101ed930));
  /* 101e7390 jne 0x101e73d0 */
  if (!C.zf) goto L_101e73d0;
  /* 101e7392 push edi */
  push32((uint32_t)(EDI));
  /* 101e7393 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 101e7395 call 0x101e74c5 */
  push32(0x101e739au); f_101e74c5();
  /* 101e739a mov edi, eax */
  EDI = (EAX);
  /* 101e739c pop ecx */
  ECX = (pop32());
  /* 101e739d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e739f jne 0x101e73a9 */
  if (!C.zf) goto L_101e73a9;
  /* 101e73a1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101e73a3 call 0x101e45df */
  push32(0x101e73a8u); f_101e45df();
  /* 101e73a8 pop ecx */
  ECX = (pop32());
L_101e73a9:;
  /* 101e73a9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101e73ab call 0x101e737a */
  push32(0x101e73b0u); f_101e737a();
  /* 101e73b0 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e73b3 pop ecx */
  ECX = (pop32());
  /* 101e73b4 push edi */
  push32((uint32_t)(EDI));
  /* 101e73b5 jne 0x101e73c1 */
  if (!C.zf) goto L_101e73c1;
  /* 101e73b7 call dword ptr [0x101eb090] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb090))), 0x101e73bdu);
  /* 101e73bd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 101e73bf jmp 0x101e73c7 */
  goto L_101e73c7;
L_101e73c1:;
  /* 101e73c1 call 0x101e747d */
  push32(0x101e73c6u); f_101e747d();
  /* 101e73c6 pop ecx */
  ECX = (pop32());
L_101e73c7:;
  /* 101e73c7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 101e73c9 call 0x101e73db */
  push32(0x101e73ceu); f_101e73db();
  /* 101e73ce pop ecx */
  ECX = (pop32());
  /* 101e73cf pop edi */
  EDI = (pop32());
L_101e73d0:;
  /* 101e73d0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 101e73d2 call dword ptr [0x101eb008] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb008))), 0x101e73d8u);
  /* 101e73d8 pop esi */
  ESI = (pop32());
  /* 101e73d9 pop ebp */
  EBP = (pop32());
  /* 101e73da ret  */
  ESPCHK(0x101e737au, _esp0);
  ESP += 4; return;
}

/* FUN_100073db @ 0x101e73db (21 bytes, 7 insns) */
void f_101e73db(void) {
  FTRACE(0x101e73dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e73db push ebp */
  push32((uint32_t)(EBP));
  /* 101e73dc mov ebp, esp */
  EBP = (ESP);
  /* 101e73de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101e73e1 push dword ptr [eax*4 + 0x101ed930] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x101ed930))));
  /* 101e73e8 call dword ptr [0x101eb00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb00c))), 0x101e73eeu);
  /* 101e73ee pop ebp */
  EBP = (pop32());
  /* 101e73ef ret  */
  ESPCHK(0x101e73dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100073f0 @ 0x101e73f0 (141 bytes, 56 insns) */
void f_101e73f0(void) {
  FTRACE(0x101e73f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101e73f0 push ebx */
  push32((uint32_t)(EBX));
  /* 101e73f1 push esi */
  push32((uint32_t)(ESI));
  /* 101e73f2 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 101e73f6 push edi */
  push32((uint32_t)(EDI));
  /* 101e73f7 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 101e73fc cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e73ff mov ebx, esi */
  EBX = (ESI);
  /* 101e7401 ja 0x101e7410 */
  if ((!C.cf&&!C.zf)) goto L_101e7410;
  /* 101e7403 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 101e7405 jne 0x101e740a */
  if (!C.zf) goto L_101e740a;
  /* 101e7407 push 1 */
  push32((uint32_t)(0x1u));
  /* 101e7409 pop esi */
  ESI = (pop32());
L_101e740a:;
  /* 101e740a add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101e740d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_101e7410:;
  /* 101e7410 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 101e7412 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7415 ja 0x101e7451 */
  if ((!C.cf&&!C.zf)) goto L_101e7451;
  /* 101e7417 cmp ebx, dword ptr [0x101edb70] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x101edb70))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e741d ja 0x101e743c */
  if ((!C.cf&&!C.zf)) goto L_101e743c;
  /* 101e741f push 9 */
  push32((uint32_t)(0x9u));
  /* 101e7421 call 0x101e737a */
  push32(0x101e7426u); f_101e737a();
  /* 101e7426 push ebx */
  push32((uint32_t)(EBX));
  /* 101e7427 call 0x101e8019 */
  push32(0x101e742cu); f_101e8019();
  /* 101e742c push 9 */
  push32((uint32_t)(0x9u));
  /* 101e742e mov edi, eax */
  EDI = (EAX);
  /* 101e7430 call 0x101e73db */
  push32(0x101e7435u); f_101e73db();
  /* 101e7435 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101e7438 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e743a jne 0x101e7467 */
  if (!C.zf) goto L_101e7467;
L_101e743c:;
  /* 101e743c push esi */
  push32((uint32_t)(ESI));
  /* 101e743d push 8 */
  push32((uint32_t)(0x8u));
  /* 101e743f push dword ptr [0x101f26c4] */
  push32((uint32_t)(r32((uint32_t)(0x101f26c4))));
  /* 101e7445 call dword ptr [0x101eb094] */
  call_ind((uint32_t)(r32((uint32_t)(0x101eb094))), 0x101e744bu);
  /* 101e744b mov edi, eax */
  EDI = (EAX);
  /* 101e744d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 101e744f jne 0x101e7473 */
  if (!C.zf) goto L_101e7473;
L_101e7451:;
  /* 101e7451 cmp dword ptr [0x101f1314], 0 */
  { uint32_t _a=(r32((uint32_t)(0x101f1314))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101e7458 je 0x101e7473 */
  if (C.zf) goto L_101e7473;
  /* 101e745a push esi */
  push32((uint32_t)(ESI));
  /* 101e745b call 0x101e967a */
  push32(0x101e7460u); f_101e967a();
  /* 101e7460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101e7462 pop ecx */
  ECX = (pop32());
  /* 101e7463 je 0x101e7479 */
  if (C.zf) goto L_101e7479;
  /* 101e7465 jmp 0x101e7410 */
  goto L_101e7410;
L_101e7467:;
  /* 101e7467 push ebx */
  push32((uint32_t)(EBX));
  /* 101e7468 push 0 */
  push32((uint32_t)(0x0u));
  /* 101e746a push edi */
  push32((uint32_t)(EDI));
  /* 101e746b call 0x101e6880 */
  push32(0x101e7470u); f_101e6880();
  /* 101e7470 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_101e7473:;
  /* 101e7473 mov eax, edi */
  EAX = (EDI);
L_101e7475:;
  /* 101e7475 pop edi */
  EDI = (pop32());
  /* 101e7476 pop esi */
  ESI = (pop32());
  /* 101e7477 pop ebx */
  EBX = (pop32());
  /* 101e7478 ret  */
  ESPCHK(0x101e73f0u, _esp0);
  ESP += 4; return;
L_101e7479:;
  /* 101e7479 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101e747b jmp 0x101e7475 */
  goto L_101e7475;
}

