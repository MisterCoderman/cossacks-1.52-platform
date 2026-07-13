#include "recomp.h"

/* FUN_10001000 @ 0x111e1000 (20 bytes, 6 insns) */
void f_111e1000(void) {
  FTRACE(0x111e1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e1005 jne 0x111e100c */
  if (!C.zf) goto L_111e100c;
  /* 111e1007 call 0x111e2580 */
  push32(0x111e100cu); f_111e2580();
L_111e100c:;
  /* 111e100c mov eax, 1 */
  EAX = (0x1u);
  /* 111e1011 ret 0xc */
  ESPCHK(0x111e1000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001020 @ 0x111e1020 (423 bytes, 114 insns) */
void f_111e1020(void) {
  FTRACE(0x111e1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1020 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e1024 push ebx */
  push32((uint32_t)(EBX));
  /* 111e1025 push ebp */
  push32((uint32_t)(EBP));
  /* 111e1026 mov ebp, ecx */
  EBP = (ECX);
  /* 111e1028 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 111e102c mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 111e1030 mov dword ptr [ebp + 0x2a7], eax */
  w32((uint32_t)(EBP + 0x2a7), (EAX));
  /* 111e1036 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 111e103a mov dword ptr [ebp + 0x28c], eax */
  w32((uint32_t)(EBP + 0x28c), (EAX));
  /* 111e1040 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 111e1044 mov dword ptr [ebp + 0x2ab], eax */
  w32((uint32_t)(EBP + 0x2ab), (EAX));
  /* 111e104a mov eax, dword ptr [esp + 0x3c] */
  EAX = (r32((uint32_t)(ESP + 0x3c)));
  /* 111e104e mov dword ptr [ebp + 0x284], ecx */
  w32((uint32_t)(EBP + 0x284), (ECX));
  /* 111e1054 mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 111e1058 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 111e105b mov dword ptr [ebp + 0x290], ecx */
  w32((uint32_t)(EBP + 0x290), (ECX));
  /* 111e1061 mov dword ptr [ebp + 0x288], edx */
  w32((uint32_t)(EBP + 0x288), (EDX));
  /* 111e1067 mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 111e106b lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 111e106e mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 111e1072 mov dword ptr [ebp + 0x2f1], ecx */
  w32((uint32_t)(EBP + 0x2f1), (ECX));
  /* 111e1078 mov cl, byte ptr [esp + 0x1c] */
  CL = (r8((uint32_t)(ESP + 0x1c)));
  /* 111e107c mov dword ptr [ebp + 0x280], eax */
  w32((uint32_t)(EBP + 0x280), (EAX));
  /* 111e1082 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 111e1086 push esi */
  push32((uint32_t)(ESI));
  /* 111e1087 mov dword ptr [ebp + 0x294], edx */
  w32((uint32_t)(EBP + 0x294), (EDX));
  /* 111e108d push edi */
  push32((uint32_t)(EDI));
  /* 111e108e mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 111e1092 mov edx, 1 */
  EDX = (0x1u);
  /* 111e1097 mov byte ptr [ebp + 0x2e8], cl */
  w8((uint32_t)(EBP + 0x2e8), (CL));
  /* 111e109d mov dword ptr [ebp + 0x2e9], eax */
  w32((uint32_t)(EBP + 0x2e9), (EAX));
  /* 111e10a3 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e10a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e10a8 mov byte ptr [ebp + 0x2f5], dl */
  w8((uint32_t)(EBP + 0x2f5), (DL));
  /* 111e10ae mov byte ptr [ebp + 0x2f6], dl */
  w8((uint32_t)(EBP + 0x2f6), (DL));
  /* 111e10b4 mov dword ptr [ebp + 0x2fb], edx */
  w32((uint32_t)(EBP + 0x2fb), (EDX));
  /* 111e10ba mov byte ptr [ebp + 0x2ff], dl */
  w8((uint32_t)(EBP + 0x2ff), (DL));
  /* 111e10c0 lea ebx, [ebp + 0x298] */
  EBX = ((uint32_t)(EBP + 0x298));
  /* 111e10c6 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e10c8 not ecx */
  ECX = (~(ECX));
  /* 111e10ca sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e10cc mov eax, ecx */
  EAX = (ECX);
  /* 111e10ce mov esi, edi */
  ESI = (EDI);
  /* 111e10d0 mov edi, ebx */
  EDI = (EBX);
  /* 111e10d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e10d4 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e10d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e10d9 mov ecx, eax */
  ECX = (EAX);
  /* 111e10db mov al, byte ptr [esp + 0x14] */
  AL = (r8((uint32_t)(ESP + 0x14)));
  /* 111e10df and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e10e2 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e10e4 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e10e6 mov byte ptr [ebp + 0x2af], al */
  w8((uint32_t)(EBP + 0x2af), (AL));
  /* 111e10ec mov dword ptr [ebp + 0x2bc], 0x3e8 */
  w32((uint32_t)(EBP + 0x2bc), (0x3e8u));
  /* 111e10f6 mov dword ptr [ebp + 0x2cc], ebx */
  w32((uint32_t)(EBP + 0x2cc), (EBX));
  /* 111e10fc mov dword ptr [ebp + 0x2c8], ebx */
  w32((uint32_t)(EBP + 0x2c8), (EBX));
  /* 111e1102 mov dword ptr [ebp + 0x2c4], ebx */
  w32((uint32_t)(EBP + 0x2c4), (EBX));
  /* 111e1108 mov dword ptr [ebp + 0x2c0], ebx */
  w32((uint32_t)(EBP + 0x2c0), (EBX));
  /* 111e110e mov dword ptr [ebp + 0x2b8], ebx */
  w32((uint32_t)(EBP + 0x2b8), (EBX));
  /* 111e1114 jne 0x111e11c0 */
  if (!C.zf) goto L_111e11c0;
  /* 111e111a mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 111e111e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1120 je 0x111e112b */
  if (C.zf) goto L_111e112b;
  /* 111e1122 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1124 je 0x111e112b */
  if (C.zf) goto L_111e112b;
  /* 111e1126 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1129 jne 0x111e116b */
  if (!C.zf) goto L_111e116b;
L_111e112b:;
  /* 111e112b lea esi, [ebp + 0x2b0] */
  ESI = ((uint32_t)(EBP + 0x2b0));
  /* 111e1131 push esi */
  push32((uint32_t)(ESI));
  /* 111e1132 call dword ptr [0x111e9178] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9178))), 0x111e1138u);
  /* 111e1138 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 111e113c mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 111e1140 push ebx */
  push32((uint32_t)(EBX));
  /* 111e1141 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1142 push edx */
  push32((uint32_t)(EDX));
  /* 111e1143 push 0x111ed5a8 */
  push32((uint32_t)(0x111ed5a8u));
  /* 111e1148 push 0x111edcf8 */
  push32((uint32_t)(0x111edcf8u));
  /* 111e114d push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e1152 call dword ptr [0x111e917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e917c))), 0x111e1158u);
  /* 111e1158 push esi */
  push32((uint32_t)(ESI));
  /* 111e1159 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e115e call dword ptr [0x111e9174] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9174))), 0x111e1164u);
  /* 111e1164 mov eax, dword ptr [esp + 0x4c] */
  EAX = (r32((uint32_t)(ESP + 0x4c)));
  /* 111e1168 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e116b:;
  /* 111e116b sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e116d je 0x111e1186 */
  if (C.zf) goto L_111e1186;
  /* 111e116f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e1170 je 0x111e1196 */
  if (C.zf) goto L_111e1196;
  /* 111e1172 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e1173 je 0x111e11a6 */
  if (C.zf) goto L_111e11a6;
  /* 111e1175 pop edi */
  EDI = (pop32());
  /* 111e1176 mov dword ptr [ebp + 0x2ed], 0xf */
  w32((uint32_t)(EBP + 0x2ed), (0xfu));
  /* 111e1180 pop esi */
  ESI = (pop32());
  /* 111e1181 pop ebp */
  EBP = (pop32());
  /* 111e1182 pop ebx */
  EBX = (pop32());
  /* 111e1183 ret 0x34 */
  ESPCHK(0x111e1020u, _esp0);
  ESP += 56; return;
L_111e1186:;
  /* 111e1186 lea eax, [ebp + 0x2b0] */
  EAX = ((uint32_t)(EBP + 0x2b0));
  /* 111e118c push eax */
  push32((uint32_t)(EAX));
  /* 111e118d call dword ptr [0x111e9184] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9184))), 0x111e1193u);
  /* 111e1193 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e1196:;
  /* 111e1196 lea ecx, [ebp + 0x2b0] */
  ECX = ((uint32_t)(EBP + 0x2b0));
  /* 111e119c push ecx */
  push32((uint32_t)(ECX));
  /* 111e119d call dword ptr [0x111e9188] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9188))), 0x111e11a3u);
  /* 111e11a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e11a6:;
  /* 111e11a6 lea edx, [ebp + 0x2b0] */
  EDX = ((uint32_t)(EBP + 0x2b0));
  /* 111e11ac push edx */
  push32((uint32_t)(EDX));
  /* 111e11ad call dword ptr [0x111e9180] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9180))), 0x111e11b3u);
  /* 111e11b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e11b6 mov dword ptr [ebp + 0x2ed], 0xf */
  w32((uint32_t)(EBP + 0x2ed), (0xfu));
L_111e11c0:;
  /* 111e11c0 pop edi */
  EDI = (pop32());
  /* 111e11c1 pop esi */
  ESI = (pop32());
  /* 111e11c2 pop ebp */
  EBP = (pop32());
  /* 111e11c3 pop ebx */
  EBX = (pop32());
  /* 111e11c4 ret 0x34 */
  ESPCHK(0x111e1020u, _esp0);
  ESP += 56; return;
}

/* FUN_100011d0 @ 0x111e11d0 (73 bytes, 15 insns) */
void f_111e11d0(void) {
  FTRACE(0x111e11d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e11d0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 111e11d4 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 111e11d8 mov dword ptr [ecx + 0x284], eax */
  w32((uint32_t)(ECX + 0x284), (EAX));
  /* 111e11de mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e11e2 mov dword ptr [ecx + 0x288], edx */
  w32((uint32_t)(ECX + 0x288), (EDX));
  /* 111e11e8 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 111e11ec mov dword ptr [ecx + 0x28c], eax */
  w32((uint32_t)(ECX + 0x28c), (EAX));
  /* 111e11f2 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 111e11f6 mov dword ptr [ecx + 0x290], edx */
  w32((uint32_t)(ECX + 0x290), (EDX));
  /* 111e11fc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e1200 mov dword ptr [ecx + 0x294], eax */
  w32((uint32_t)(ECX + 0x294), (EAX));
  /* 111e1206 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e120a mov dword ptr [ecx + 0x280], edx */
  w32((uint32_t)(ECX + 0x280), (EDX));
  /* 111e1210 mov dword ptr [ecx + 0x2ab], eax */
  w32((uint32_t)(ECX + 0x2ab), (EAX));
  /* 111e1216 ret 0x1c */
  ESPCHK(0x111e11d0u, _esp0);
  ESP += 32; return;
}

/* FUN_10001220 @ 0x111e1220 (27 bytes, 10 insns) */
void f_111e1220(void) {
  FTRACE(0x111e1220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1220 push esi */
  push32((uint32_t)(ESI));
  /* 111e1221 mov esi, ecx */
  ESI = (ECX);
  /* 111e1223 mov al, byte ptr [esi + 0x2af] */
  AL = (r8((uint32_t)(ESI + 0x2af)));
  /* 111e1229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e122b jne 0x111e1239 */
  if (!C.zf) goto L_111e1239;
  /* 111e122d call 0x111e12f0 */
  push32(0x111e1232u); f_111e12f0();
  /* 111e1232 mov ecx, esi */
  ECX = (ESI);
  /* 111e1234 call 0x111e13f0 */
  push32(0x111e1239u); f_111e13f0();
L_111e1239:;
  /* 111e1239 pop esi */
  ESI = (pop32());
  /* 111e123a ret  */
  ESPCHK(0x111e1220u, _esp0);
  ESP += 4; return;
}

/* FUN_10001240 @ 0x111e1240 (167 bytes, 40 insns) */
void f_111e1240(void) {
  FTRACE(0x111e1240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1240 push ebx */
  push32((uint32_t)(EBX));
  /* 111e1241 mov ebx, dword ptr [ecx + 0x2bc] */
  EBX = (r32((uint32_t)(ECX + 0x2bc)));
  /* 111e1247 mov edx, 0x12c */
  EDX = (0x12cu);
  /* 111e124c push esi */
  push32((uint32_t)(ESI));
  /* 111e124d mov esi, dword ptr [ecx + 0x2b8] */
  ESI = (r32((uint32_t)(ECX + 0x2b8)));
  /* 111e1253 mov eax, 0x64 */
  EAX = (0x64u);
  /* 111e1258 push edi */
  push32((uint32_t)(EDI));
  /* 111e1259 mov edi, dword ptr [ecx + 0x2c0] */
  EDI = (r32((uint32_t)(ECX + 0x2c0)));
  /* 111e125f mov dword ptr [ecx + 0x2e4], edx */
  w32((uint32_t)(ECX + 0x2e4), (EDX));
  /* 111e1265 mov dword ptr [ecx + 0x2e0], edx */
  w32((uint32_t)(ECX + 0x2e0), (EDX));
  /* 111e126b mov dword ptr [ecx + 0x2d0], eax */
  w32((uint32_t)(ECX + 0x2d0), (EAX));
  /* 111e1271 mov dword ptr [ecx + 0x2d8], eax */
  w32((uint32_t)(ECX + 0x2d8), (EAX));
  /* 111e1277 mov dword ptr [ecx + 0x2d4], 0xc8 */
  w32((uint32_t)(ECX + 0x2d4), (0xc8u));
  /* 111e1281 mov dword ptr [ecx + 0x2dc], 0x1f4 */
  w32((uint32_t)(ECX + 0x2dc), (0x1f4u));
  /* 111e128b mov edx, 0xc */
  EDX = (0xcu);
L_111e1290:;
  /* 111e1290 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1292 jle 0x111e129b */
  if ((C.zf||C.sf!=C.of)) goto L_111e129b;
  /* 111e1294 add dword ptr [ecx + 0x2d0], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2d0))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2d0), (_r)); fl_add(_a,_b,_r,32); }
L_111e129b:;
  /* 111e129b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e129d jle 0x111e12a6 */
  if ((C.zf||C.sf!=C.of)) goto L_111e12a6;
  /* 111e129f add dword ptr [ecx + 0x2d8], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2d8))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2d8), (_r)); fl_add(_a,_b,_r,32); }
L_111e12a6:;
  /* 111e12a6 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e12a8 jle 0x111e12b1 */
  if ((C.zf||C.sf!=C.of)) goto L_111e12b1;
  /* 111e12aa add dword ptr [ecx + 0x2d4], -0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2d4))),_b=(0xfffffff0u),_r=_a+_b; w32((uint32_t)(ECX + 0x2d4), (_r)); fl_add(_a,_b,_r,32); }
L_111e12b1:;
  /* 111e12b1 cmp dword ptr [ecx + 0x2c8], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2c8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e12b7 jle 0x111e12c0 */
  if ((C.zf||C.sf!=C.of)) goto L_111e12c0;
  /* 111e12b9 add dword ptr [ecx + 0x2e0], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2e0))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2e0), (_r)); fl_add(_a,_b,_r,32); }
L_111e12c0:;
  /* 111e12c0 cmp dword ptr [ecx + 0x2cc], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2cc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e12c6 jle 0x111e12cf */
  if ((C.zf||C.sf!=C.of)) goto L_111e12cf;
  /* 111e12c8 add dword ptr [ecx + 0x2e4], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2e4))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2e4), (_r)); fl_add(_a,_b,_r,32); }
L_111e12cf:;
  /* 111e12cf cmp dword ptr [ecx + 0x2c4], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2c4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e12d5 jle 0x111e12de */
  if ((C.zf||C.sf!=C.of)) goto L_111e12de;
  /* 111e12d7 add dword ptr [ecx + 0x2dc], -0x28 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2dc))),_b=(0xffffffd8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2dc), (_r)); fl_add(_a,_b,_r,32); }
L_111e12de:;
  /* 111e12de add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e12e0 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111e12e1 jne 0x111e1290 */
  if (!C.zf) goto L_111e1290;
  /* 111e12e3 pop edi */
  EDI = (pop32());
  /* 111e12e4 pop esi */
  ESI = (pop32());
  /* 111e12e5 pop ebx */
  EBX = (pop32());
  /* 111e12e6 ret  */
  ESPCHK(0x111e1240u, _esp0);
  ESP += 4; return;
}

/* FUN_100012f0 @ 0x111e12f0 (225 bytes, 63 insns) [1 switch table(s)] */
void f_111e12f0(void) {
  FTRACE(0x111e12f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e12f0 push ebp */
  push32((uint32_t)(EBP));
  /* 111e12f1 push esi */
  push32((uint32_t)(ESI));
  /* 111e12f2 push edi */
  push32((uint32_t)(EDI));
  /* 111e12f3 mov esi, ecx */
  ESI = (ECX);
  /* 111e12f5 call 0x111e14d0 */
  push32(0x111e12fau); f_111e14d0();
  /* 111e12fa xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 111e12fc mov dword ptr [esi + 0x2ed], eax */
  w32((uint32_t)(ESI + 0x2ed), (EAX));
  /* 111e1302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e1304 jle 0x111e1390 */
  if ((C.zf||C.sf!=C.of)) goto L_111e1390;
L_111e130a:;
  /* 111e130a mov cl, byte ptr [esi + 0x2f5] */
  CL = (r8((uint32_t)(ESI + 0x2f5)));
  /* 111e1310 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 111e1312 je 0x111e1390 */
  if (C.zf) goto L_111e1390;
  /* 111e1314 mov edi, dword ptr [esi + 0x2f7] */
  EDI = (r32((uint32_t)(ESI + 0x2f7)));
  /* 111e131a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e131c jle 0x111e1387 */
  if ((C.zf||C.sf!=C.of)) goto L_111e1387;
  /* 111e131e mov edx, dword ptr [esi + 0x2bc] */
  EDX = (r32((uint32_t)(ESI + 0x2bc)));
  /* 111e1324 cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1327 jl 0x111e1387 */
  if ((C.sf!=C.of)) goto L_111e1387;
  /* 111e1329 mov ecx, dword ptr [esi + 0x2e9] */
  ECX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 111e132f cmp ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1332 ja 0x111e1371 */
  if ((!C.cf&&!C.zf)) goto L_111e1371;
  /* 111e1334 jmp dword ptr [ecx*4 + 0x111e13d4] */
  switch (ECX) {
    case 0: goto L_111e133b;
    case 1: goto L_111e134d;
    case 2: goto L_111e1344;
    case 3: goto L_111e136a;
    case 4: goto L_111e1358;
    case 5: goto L_111e1361;
    default: x86_unimpl("switch@0x111e1334 out of table"); return;
  }
L_111e133b:;
  /* 111e133b add dword ptr [esi + 0x2b8], 0x19 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2b8))),_b=(0x19u),_r=_a+_b; w32((uint32_t)(ESI + 0x2b8), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e1342 jmp 0x111e1371 */
  goto L_111e1371;
L_111e1344:;
  /* 111e1344 add dword ptr [esi + 0x2c0], 0x19 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2c0))),_b=(0x19u),_r=_a+_b; w32((uint32_t)(ESI + 0x2c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e134b jmp 0x111e1371 */
  goto L_111e1371;
L_111e134d:;
  /* 111e134d add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1350 mov dword ptr [esi + 0x2bc], edx */
  w32((uint32_t)(ESI + 0x2bc), (EDX));
  /* 111e1356 jmp 0x111e1371 */
  goto L_111e1371;
L_111e1358:;
  /* 111e1358 add dword ptr [esi + 0x2c8], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2c8))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x2c8), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e135f jmp 0x111e1371 */
  goto L_111e1371;
L_111e1361:;
  /* 111e1361 add dword ptr [esi + 0x2cc], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2cc))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x2cc), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e1368 jmp 0x111e1371 */
  goto L_111e1371;
L_111e136a:;
  /* 111e136a add dword ptr [esi + 0x2c4], 5 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2c4))),_b=(0x5u),_r=_a+_b; w32((uint32_t)(ESI + 0x2c4), (_r)); fl_add(_a,_b,_r,32); }
L_111e1371:;
  /* 111e1371 mov ecx, dword ptr [esi + 0x2bc] */
  ECX = (r32((uint32_t)(ESI + 0x2bc)));
  /* 111e1377 add ecx, -5 */
  { uint32_t _a=(ECX),_b=(0xfffffffbu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e137a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 111e137b mov dword ptr [esi + 0x2bc], ecx */
  w32((uint32_t)(ESI + 0x2bc), (ECX));
  /* 111e1381 mov dword ptr [esi + 0x2f7], edi */
  w32((uint32_t)(ESI + 0x2f7), (EDI));
L_111e1387:;
  /* 111e1387 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 111e1388 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e138a jl 0x111e130a */
  if ((C.sf!=C.of)) goto L_111e130a;
L_111e1390:;
  /* 111e1390 mov ecx, dword ptr [esi + 0x2fb] */
  ECX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 111e1396 mov edx, 3 */
  EDX = (0x3u);
  /* 111e139b sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e139d mov edi, dword ptr [esi + 0x2f7] */
  EDI = (r32((uint32_t)(ESI + 0x2f7)));
  /* 111e13a3 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e13a6 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e13a9 mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 111e13af add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e13b1 push ecx */
  push32((uint32_t)(ECX));
  /* 111e13b2 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 111e13b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e13b6 push eax */
  push32((uint32_t)(EAX));
  /* 111e13b7 mov dword ptr [esi + 0x2f7], edi */
  w32((uint32_t)(ESI + 0x2f7), (EDI));
  /* 111e13bd call dword ptr [0x111e9168] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9168))), 0x111e13c3u);
  /* 111e13c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e13c6 mov ecx, esi */
  ECX = (ESI);
  /* 111e13c8 call 0x111e1240 */
  push32(0x111e13cdu); f_111e1240();
  /* 111e13cd pop edi */
  EDI = (pop32());
  /* 111e13ce pop esi */
  ESI = (pop32());
  /* 111e13cf pop ebp */
  EBP = (pop32());
  /* 111e13d0 ret  */
  ESPCHK(0x111e12f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100013f0 @ 0x111e13f0 (224 bytes, 57 insns) */
void f_111e13f0(void) {
  FTRACE(0x111e13f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e13f0 push esi */
  push32((uint32_t)(ESI));
  /* 111e13f1 mov esi, ecx */
  ESI = (ECX);
  /* 111e13f3 cmp dword ptr [esi + 0x2f7], 0x3e8 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2f7))),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e13fd jle 0x111e14ce */
  if ((C.zf||C.sf!=C.of)) goto L_111e14ce;
  /* 111e1403 call 0x111e14d0 */
  push32(0x111e1408u); f_111e14d0();
  /* 111e1408 cmp eax, dword ptr [esi + 0x2f1] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x2f1))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e140e jge 0x111e14ce */
  if ((C.sf==C.of)) goto L_111e14ce;
  /* 111e1414 mov ecx, esi */
  ECX = (ESI);
  /* 111e1416 call 0x111e14d0 */
  push32(0x111e141bu); f_111e14d0();
  /* 111e141b mov dword ptr [esi + 0x2ed], eax */
  w32((uint32_t)(ESI + 0x2ed), (EAX));
  /* 111e1421 mov eax, dword ptr [esi + 0x2e9] */
  EAX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 111e1427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e1429 je 0x111e1435 */
  if (C.zf) goto L_111e1435;
  /* 111e142b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e142e je 0x111e1435 */
  if (C.zf) goto L_111e1435;
  /* 111e1430 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1433 jne 0x111e14af */
  if (!C.zf) goto L_111e14af;
L_111e1435:;
  /* 111e1435 mov eax, dword ptr [esi + 0x2ab] */
  EAX = (r32((uint32_t)(ESI + 0x2ab)));
  /* 111e143b mov cl, byte ptr [esi + 0x2e8] */
  CL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 111e1441 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1443 push eax */
  push32((uint32_t)(EAX));
  /* 111e1444 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1445 push 0x111ed5a8 */
  push32((uint32_t)(0x111ed5a8u));
  /* 111e144a push 0x111ed560 */
  push32((uint32_t)(0x111ed560u));
  /* 111e144f push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e1454 call dword ptr [0x111e917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e917c))), 0x111e145au);
  /* 111e145a mov eax, dword ptr [esi + 0x2e9] */
  EAX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 111e1460 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1463 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e1466 je 0x111e1470 */
  if (C.zf) goto L_111e1470;
  /* 111e1468 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e1469 je 0x111e147e */
  if (C.zf) goto L_111e147e;
  /* 111e146b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e146c je 0x111e148c */
  if (C.zf) goto L_111e148c;
  /* 111e146e jmp 0x111e149a */
  goto L_111e149a;
L_111e1470:;
  /* 111e1470 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e1475 call dword ptr [0x111e9184] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9184))), 0x111e147bu);
  /* 111e147b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e147e:;
  /* 111e147e push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e1483 call dword ptr [0x111e9188] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9188))), 0x111e1489u);
  /* 111e1489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e148c:;
  /* 111e148c push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e1491 call dword ptr [0x111e9180] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9180))), 0x111e1497u);
  /* 111e1497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e149a:;
  /* 111e149a lea edx, [esi + 0x2b0] */
  EDX = ((uint32_t)(ESI + 0x2b0));
  /* 111e14a0 push edx */
  push32((uint32_t)(EDX));
  /* 111e14a1 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e14a6 call dword ptr [0x111e9174] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9174))), 0x111e14acu);
  /* 111e14ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e14af:;
  /* 111e14af mov ecx, dword ptr [esi + 0x2f7] */
  ECX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 111e14b5 mov eax, dword ptr [esi + 0x2ed] */
  EAX = (r32((uint32_t)(ESI + 0x2ed)));
  /* 111e14bb add ecx, 0xfffffc18 */
  { uint32_t _a=(ECX),_b=(0xfffffc18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e14c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e14c2 mov dword ptr [esi + 0x2f7], ecx */
  w32((uint32_t)(ESI + 0x2f7), (ECX));
  /* 111e14c8 mov dword ptr [esi + 0x2ed], eax */
  w32((uint32_t)(ESI + 0x2ed), (EAX));
L_111e14ce:;
  /* 111e14ce pop esi */
  ESI = (pop32());
  /* 111e14cf ret  */
  ESPCHK(0x111e13f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014d0 @ 0x111e14d0 (56 bytes, 18 insns) */
void f_111e14d0(void) {
  FTRACE(0x111e14d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e14d0 mov eax, dword ptr [ecx + 0x2e9] */
  EAX = (r32((uint32_t)(ECX + 0x2e9)));
  /* 111e14d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e14d8 je 0x111e14f7 */
  if (C.zf) goto L_111e14f7;
  /* 111e14da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e14dd je 0x111e14f7 */
  if (C.zf) goto L_111e14f7;
  /* 111e14df cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e14e2 je 0x111e14f7 */
  if (C.zf) goto L_111e14f7;
  /* 111e14e4 mov eax, dword ptr [ecx + 0x2ed] */
  EAX = (r32((uint32_t)(ECX + 0x2ed)));
  /* 111e14ea mov ecx, dword ptr [ecx + 0x2f1] */
  ECX = (r32((uint32_t)(ECX + 0x2f1)));
  /* 111e14f0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e14f2 jl 0x111e1507 */
  if ((C.sf!=C.of)) goto L_111e1507;
  /* 111e14f4 mov eax, ecx */
  EAX = (ECX);
  /* 111e14f6 ret  */
  ESPCHK(0x111e14d0u, _esp0);
  ESP += 4; return;
L_111e14f7:;
  /* 111e14f7 add ecx, 0x2b0 */
  { uint32_t _a=(ECX),_b=(0x2b0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e14fd push ecx */
  push32((uint32_t)(ECX));
  /* 111e14fe call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e1504u);
  /* 111e1504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e1507:;
  /* 111e1507 ret  */
  ESPCHK(0x111e14d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001510 @ 0x111e1510 (208 bytes, 61 insns) [1 switch table(s)] */
void f_111e1510(void) {
  FTRACE(0x111e1510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1510 push ebp */
  push32((uint32_t)(EBP));
  /* 111e1511 push esi */
  push32((uint32_t)(ESI));
  /* 111e1512 mov esi, ecx */
  ESI = (ECX);
  /* 111e1514 push edi */
  push32((uint32_t)(EDI));
  /* 111e1515 mov al, byte ptr [esi + 0x2af] */
  AL = (r8((uint32_t)(ESI + 0x2af)));
  /* 111e151b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e151d jne 0x111e15da */
  if (!C.zf) goto L_111e15da;
  /* 111e1523 mov al, byte ptr [esi + 0x2f6] */
  AL = (r8((uint32_t)(ESI + 0x2f6)));
  /* 111e1529 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e152b je 0x111e15da */
  if (C.zf) goto L_111e15da;
  /* 111e1531 mov al, byte ptr [esi + 0x2ff] */
  AL = (r8((uint32_t)(ESI + 0x2ff)));
  /* 111e1537 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 111e153b mov ebp, dword ptr [0x111e915c] */
  EBP = (r32((uint32_t)(0x111e915c)));
  /* 111e1541 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e1543 je 0x111e15b3 */
  if (C.zf) goto L_111e15b3;
  /* 111e1545 mov eax, dword ptr [esi + 0x2ab] */
  EAX = (r32((uint32_t)(ESI + 0x2ab)));
  /* 111e154b push edi */
  push32((uint32_t)(EDI));
  /* 111e154c push 0x111ed988 */
  push32((uint32_t)(0x111ed988u));
  /* 111e1551 push eax */
  push32((uint32_t)(EAX));
  /* 111e1552 call ebp */
  call_ind((uint32_t)(EBP), 0x111e1554u);
  /* 111e1554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1557 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e1559 je 0x111e15b3 */
  if (C.zf) goto L_111e15b3;
  /* 111e155b push 0x111ea054 */
  push32((uint32_t)(0x111ea054u));
  /* 111e1560 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1562 push 0x111ea04c */
  push32((uint32_t)(0x111ea04cu));
  /* 111e1567 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e1569 call dword ptr [0x111e916c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e916c))), 0x111e156fu);
  /* 111e156f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1572 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1575 ja 0x111e15b3 */
  if ((!C.cf&&!C.zf)) goto L_111e15b3;
  /* 111e1577 jmp dword ptr [eax*4 + 0x111e15e0] */
  switch (EAX) {
    case 0: goto L_111e157e;
    case 1: goto L_111e158e;
    case 2: goto L_111e159d;
    case 3: goto L_111e15ac;
    default: x86_unimpl("switch@0x111e1577 out of table"); return;
  }
L_111e157e:;
  /* 111e157e mov ecx, esi */
  ECX = (ESI);
  /* 111e1580 call 0x111e15f0 */
  push32(0x111e1585u); f_111e15f0();
  /* 111e1585 mov byte ptr [esi + 0x2ff], 1 */
  w8((uint32_t)(ESI + 0x2ff), (0x1u));
  /* 111e158c jmp 0x111e15b3 */
  goto L_111e15b3;
L_111e158e:;
  /* 111e158e mov ecx, esi */
  ECX = (ESI);
  /* 111e1590 call 0x111e1690 */
  push32(0x111e1595u); f_111e1690();
  /* 111e1595 mov byte ptr [esi + 0x2ff], al */
  w8((uint32_t)(ESI + 0x2ff), (AL));
  /* 111e159b jmp 0x111e15b3 */
  goto L_111e15b3;
L_111e159d:;
  /* 111e159d mov ecx, esi */
  ECX = (ESI);
  /* 111e159f call 0x111e16c0 */
  push32(0x111e15a4u); f_111e16c0();
  /* 111e15a4 mov byte ptr [esi + 0x2ff], al */
  w8((uint32_t)(ESI + 0x2ff), (AL));
  /* 111e15aa jmp 0x111e15b3 */
  goto L_111e15b3;
L_111e15ac:;
  /* 111e15ac mov byte ptr [esi + 0x2ff], 0 */
  w8((uint32_t)(ESI + 0x2ff), (0x0u));
L_111e15b3:;
  /* 111e15b3 mov al, byte ptr [esi + 0x2ff] */
  AL = (r8((uint32_t)(ESI + 0x2ff)));
  /* 111e15b9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e15bb jne 0x111e15da */
  if (!C.zf) goto L_111e15da;
  /* 111e15bd mov ecx, dword ptr [esi + 0x2ab] */
  ECX = (r32((uint32_t)(ESI + 0x2ab)));
  /* 111e15c3 push edi */
  push32((uint32_t)(EDI));
  /* 111e15c4 push 0x111ed988 */
  push32((uint32_t)(0x111ed988u));
  /* 111e15c9 push ecx */
  push32((uint32_t)(ECX));
  /* 111e15ca call ebp */
  call_ind((uint32_t)(EBP), 0x111e15ccu);
  /* 111e15cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e15cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e15d1 jne 0x111e15da */
  if (!C.zf) goto L_111e15da;
  /* 111e15d3 mov byte ptr [esi + 0x2ff], 1 */
  w8((uint32_t)(ESI + 0x2ff), (0x1u));
L_111e15da:;
  /* 111e15da pop edi */
  EDI = (pop32());
  /* 111e15db pop esi */
  ESI = (pop32());
  /* 111e15dc pop ebp */
  EBP = (pop32());
  /* 111e15dd ret 4 */
  ESPCHK(0x111e1510u, _esp0);
  ESP += 8; return;
}

/* FUN_100015f0 @ 0x111e15f0 (152 bytes, 44 insns) */
void f_111e15f0(void) {
  FTRACE(0x111e15f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e15f0 push esi */
  push32((uint32_t)(ESI));
  /* 111e15f1 mov esi, ecx */
  ESI = (ECX);
  /* 111e15f3 call 0x111e14d0 */
  push32(0x111e15f8u); f_111e14d0();
  /* 111e15f8 mov edx, dword ptr [esi + 0x2f7] */
  EDX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 111e15fe mov ecx, dword ptr [esi + 0x2fb] */
  ECX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 111e1604 push eax */
  push32((uint32_t)(EAX));
  /* 111e1605 push edx */
  push32((uint32_t)(EDX));
  /* 111e1606 mov edx, ecx */
  EDX = (ECX);
  /* 111e1608 push eax */
  push32((uint32_t)(EAX));
  /* 111e1609 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e160c push edx */
  push32((uint32_t)(EDX));
  /* 111e160d mov edx, 3 */
  EDX = (0x3u);
  /* 111e1612 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e1614 mov ecx, dword ptr [esi + 0x2c8] */
  ECX = (r32((uint32_t)(ESI + 0x2c8)));
  /* 111e161a imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e161d mov eax, dword ptr [esi + 0x2cc] */
  EAX = (r32((uint32_t)(ESI + 0x2cc)));
  /* 111e1623 push edx */
  push32((uint32_t)(EDX));
  /* 111e1624 mov edx, dword ptr [esi + 0x2c4] */
  EDX = (r32((uint32_t)(ESI + 0x2c4)));
  /* 111e162a push eax */
  push32((uint32_t)(EAX));
  /* 111e162b mov eax, dword ptr [esi + 0x2c0] */
  EAX = (r32((uint32_t)(ESI + 0x2c0)));
  /* 111e1631 push 0x111edd53 */
  push32((uint32_t)(0x111edd53u));
  /* 111e1636 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1637 mov ecx, dword ptr [esi + 0x2bc] */
  ECX = (r32((uint32_t)(ESI + 0x2bc)));
  /* 111e163d push 0x111edd44 */
  push32((uint32_t)(0x111edd44u));
  /* 111e1642 push edx */
  push32((uint32_t)(EDX));
  /* 111e1643 mov edx, dword ptr [esi + 0x2b8] */
  EDX = (r32((uint32_t)(ESI + 0x2b8)));
  /* 111e1649 push 0x111edd35 */
  push32((uint32_t)(0x111edd35u));
  /* 111e164e push eax */
  push32((uint32_t)(EAX));
  /* 111e164f mov eax, dword ptr [esi + 0x2e9] */
  EAX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 111e1655 push 0x111edd26 */
  push32((uint32_t)(0x111edd26u));
  /* 111e165a push ecx */
  push32((uint32_t)(ECX));
  /* 111e165b lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 111e165e push 0x111edd17 */
  push32((uint32_t)(0x111edd17u));
  /* 111e1663 push edx */
  push32((uint32_t)(EDX));
  /* 111e1664 push 0x111edd08 */
  push32((uint32_t)(0x111edd08u));
  /* 111e1669 lea eax, [eax + eax*4 + 0x111edd08] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x111edd08));
  /* 111e1670 add esi, 0x298 */
  { uint32_t _a=(ESI),_b=(0x298u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1676 push eax */
  push32((uint32_t)(EAX));
  /* 111e1677 push esi */
  push32((uint32_t)(ESI));
  /* 111e1678 push 0x111ea06c */
  push32((uint32_t)(0x111ea06cu));
  /* 111e167d call dword ptr [0x111e9164] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9164))), 0x111e1683u);
  /* 111e1683 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1686 pop esi */
  ESI = (pop32());
  /* 111e1687 ret  */
  ESPCHK(0x111e15f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001690 @ 0x111e1690 (36 bytes, 12 insns) */
void f_111e1690(void) {
  FTRACE(0x111e1690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1690 push esi */
  push32((uint32_t)(ESI));
  /* 111e1691 push 0x111ea07c */
  push32((uint32_t)(0x111ea07cu));
  /* 111e1696 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1698 push 0x111ea074 */
  push32((uint32_t)(0x111ea074u));
  /* 111e169d mov esi, ecx */
  ESI = (ECX);
  /* 111e169f push 9 */
  push32((uint32_t)(0x9u));
  /* 111e16a1 call dword ptr [0x111e916c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e916c))), 0x111e16a7u);
  /* 111e16a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e16aa mov dword ptr [esi + 0x2fb], eax */
  w32((uint32_t)(ESI + 0x2fb), (EAX));
  /* 111e16b0 mov al, 1 */
  AL = (0x1u);
  /* 111e16b2 pop esi */
  ESI = (pop32());
  /* 111e16b3 ret  */
  ESPCHK(0x111e1690u, _esp0);
  ESP += 4; return;
}

/* FUN_100016c0 @ 0x111e16c0 (65 bytes, 27 insns) */
void f_111e16c0(void) {
  FTRACE(0x111e16c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e16c0 push esi */
  push32((uint32_t)(ESI));
  /* 111e16c1 mov esi, dword ptr [0x111e916c] */
  ESI = (r32((uint32_t)(0x111e916c)));
  /* 111e16c7 push edi */
  push32((uint32_t)(EDI));
  /* 111e16c8 mov edi, ecx */
  EDI = (ECX);
L_111e16ca:;
  /* 111e16ca push 0x111ea0a0 */
  push32((uint32_t)(0x111ea0a0u));
  /* 111e16cf push 0 */
  push32((uint32_t)(0x0u));
  /* 111e16d1 push 0x111ea098 */
  push32((uint32_t)(0x111ea098u));
  /* 111e16d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e16d8 call esi */
  call_ind((uint32_t)(ESI), 0x111e16dau);
  /* 111e16da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e16dd sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e16e0 je 0x111e16f3 */
  if (C.zf) goto L_111e16f3;
  /* 111e16e2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e16e3 je 0x111e16ea */
  if (C.zf) goto L_111e16ea;
  /* 111e16e5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e16e6 je 0x111e16fc */
  if (C.zf) goto L_111e16fc;
  /* 111e16e8 jmp 0x111e16ca */
  goto L_111e16ca;
L_111e16ea:;
  /* 111e16ea mov ecx, edi */
  ECX = (EDI);
  /* 111e16ec call 0x111e1840 */
  push32(0x111e16f1u); f_111e1840();
  /* 111e16f1 jmp 0x111e16ca */
  goto L_111e16ca;
L_111e16f3:;
  /* 111e16f3 mov ecx, edi */
  ECX = (EDI);
  /* 111e16f5 call 0x111e1710 */
  push32(0x111e16fau); f_111e1710();
  /* 111e16fa jmp 0x111e16ca */
  goto L_111e16ca;
L_111e16fc:;
  /* 111e16fc pop edi */
  EDI = (pop32());
  /* 111e16fd mov al, 1 */
  AL = (0x1u);
  /* 111e16ff pop esi */
  ESI = (pop32());
  /* 111e1700 ret  */
  ESPCHK(0x111e16c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001710 @ 0x111e1710 (245 bytes, 83 insns) [2 switch table(s)] */
void f_111e1710(void) {
  FTRACE(0x111e1710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1710 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1711 push ebx */
  push32((uint32_t)(EBX));
  /* 111e1712 push ebp */
  push32((uint32_t)(EBP));
  /* 111e1713 push esi */
  push32((uint32_t)(ESI));
  /* 111e1714 mov esi, dword ptr [0x111e916c] */
  ESI = (r32((uint32_t)(0x111e916c)));
  /* 111e171a push edi */
  push32((uint32_t)(EDI));
  /* 111e171b push 0x111ea0d0 */
  push32((uint32_t)(0x111ea0d0u));
  /* 111e1720 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1722 push 0x111ea0c8 */
  push32((uint32_t)(0x111ea0c8u));
  /* 111e1727 mov ebx, ecx */
  EBX = (ECX);
  /* 111e1729 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e172b call esi */
  call_ind((uint32_t)(ESI), 0x111e172du);
  /* 111e172d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1730 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1733 ja 0x111e1763 */
  if ((!C.cf&&!C.zf)) goto L_111e1763;
  /* 111e1735 jmp dword ptr [eax*4 + 0x111e1808] */
  switch (EAX) {
    case 0: goto L_111e173c;
    case 1: goto L_111e1740;
    case 2: goto L_111e1747;
    case 3: goto L_111e174e;
    case 4: goto L_111e1755;
    case 5: goto L_111e175c;
    case 6: goto L_111e1786;
    case 7: goto L_111e178a;
    case 8: goto L_111e1791;
    case 9: goto L_111e1798;
    case 10: goto L_111e179f;
    case 11: goto L_111e17a6;
    default: x86_unimpl("switch@0x111e1735 out of table"); return;
  }
L_111e173c:;
  /* 111e173c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e173e jmp 0x111e1767 */
  goto L_111e1767;
L_111e1740:;
  /* 111e1740 mov edi, 1 */
  EDI = (0x1u);
  /* 111e1745 jmp 0x111e1767 */
  goto L_111e1767;
L_111e1747:;
  /* 111e1747 mov edi, 2 */
  EDI = (0x2u);
  /* 111e174c jmp 0x111e1767 */
  goto L_111e1767;
L_111e174e:;
  /* 111e174e mov edi, 3 */
  EDI = (0x3u);
  /* 111e1753 jmp 0x111e1767 */
  goto L_111e1767;
L_111e1755:;
  /* 111e1755 mov edi, 4 */
  EDI = (0x4u);
  /* 111e175a jmp 0x111e1767 */
  goto L_111e1767;
L_111e175c:;
  /* 111e175c mov edi, 5 */
  EDI = (0x5u);
  /* 111e1761 jmp 0x111e1767 */
  goto L_111e1767;
L_111e1763:;
  /* 111e1763 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_111e1767:;
  /* 111e1767 push 0x111ea0d0 */
  push32((uint32_t)(0x111ea0d0u));
  /* 111e176c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e176e push 0x111ea0c0 */
  push32((uint32_t)(0x111ea0c0u));
  /* 111e1773 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e1775 call esi */
  call_ind((uint32_t)(ESI), 0x111e1777u);
  /* 111e1777 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e177a cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e177d ja 0x111e17ad */
  if ((!C.cf&&!C.zf)) goto L_111e17ad;
  /* 111e177f jmp dword ptr [eax*4 + 0x111e1820] */
  switch (EAX) {
    case 0: goto L_111e1786;
    case 1: goto L_111e178a;
    case 2: goto L_111e1791;
    case 3: goto L_111e1798;
    case 4: goto L_111e179f;
    case 5: goto L_111e17a6;
    default: x86_unimpl("switch@0x111e177f out of table"); return;
  }
L_111e1786:;
  /* 111e1786 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e1788 jmp 0x111e17b1 */
  goto L_111e17b1;
L_111e178a:;
  /* 111e178a mov esi, 1 */
  ESI = (0x1u);
  /* 111e178f jmp 0x111e17b1 */
  goto L_111e17b1;
L_111e1791:;
  /* 111e1791 mov esi, 2 */
  ESI = (0x2u);
  /* 111e1796 jmp 0x111e17b1 */
  goto L_111e17b1;
L_111e1798:;
  /* 111e1798 mov esi, 3 */
  ESI = (0x3u);
  /* 111e179d jmp 0x111e17b1 */
  goto L_111e17b1;
L_111e179f:;
  /* 111e179f mov esi, 4 */
  ESI = (0x4u);
  /* 111e17a4 jmp 0x111e17b1 */
  goto L_111e17b1;
L_111e17a6:;
  /* 111e17a6 mov esi, 5 */
  ESI = (0x5u);
  /* 111e17ab jmp 0x111e17b1 */
  goto L_111e17b1;
L_111e17ad:;
  /* 111e17ad mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_111e17b1:;
  /* 111e17b1 mov ecx, ebx */
  ECX = (EBX);
  /* 111e17b3 call 0x111e1240 */
  push32(0x111e17b8u); f_111e1240();
  /* 111e17b8 push edi */
  push32((uint32_t)(EDI));
  /* 111e17b9 mov ecx, ebx */
  ECX = (EBX);
  /* 111e17bb call 0x111e1f70 */
  push32(0x111e17c0u); f_111e1f70();
  /* 111e17c0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e17c3 push esi */
  push32((uint32_t)(ESI));
  /* 111e17c4 mov ecx, ebx */
  ECX = (EBX);
  /* 111e17c6 lea ebp, [eax + eax*4] */
  EBP = ((uint32_t)(EAX + EAX*4));
  /* 111e17c9 shl ebp, 2 */
  EBP = (sh_shl((uint32_t)(EBP), (0x2u)&0x1f, 32));
  /* 111e17cc call 0x111e1f70 */
  push32(0x111e17d1u); f_111e1f70();
  /* 111e17d1 mov ecx, eax */
  ECX = (EAX);
  /* 111e17d3 mov eax, ebp */
  EAX = (EBP);
  /* 111e17d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111e17d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e17d8 push eax */
  push32((uint32_t)(EAX));
  /* 111e17d9 lea eax, [esi + esi*2] */
  EAX = ((uint32_t)(ESI + ESI*2));
  /* 111e17dc lea edx, [eax + eax*4 + 0x111edd08] */
  EDX = ((uint32_t)(EAX + EAX*4 + 0x111edd08));
  /* 111e17e3 lea eax, [edi + edi*2] */
  EAX = ((uint32_t)(EDI + EDI*2));
  /* 111e17e6 push edx */
  push32((uint32_t)(EDX));
  /* 111e17e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 111e17e9 lea eax, [eax + eax*4 + 0x111edd08] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x111edd08));
  /* 111e17f0 push eax */
  push32((uint32_t)(EAX));
  /* 111e17f1 push 0x111ea0b4 */
  push32((uint32_t)(0x111ea0b4u));
  /* 111e17f6 call dword ptr [0x111e9164] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9164))), 0x111e17fcu);
  /* 111e17fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e17ff pop edi */
  EDI = (pop32());
  /* 111e1800 pop esi */
  ESI = (pop32());
  /* 111e1801 pop ebp */
  EBP = (pop32());
  /* 111e1802 pop ebx */
  EBX = (pop32());
  /* 111e1803 pop ecx */
  ECX = (pop32());
  /* 111e1804 ret  */
  ESPCHK(0x111e1710u, _esp0);
  ESP += 4; return;
}

/* FUN_10001840 @ 0x111e1840 (307 bytes, 112 insns) */
void f_111e1840(void) {
  FTRACE(0x111e1840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1840 push ebx */
  push32((uint32_t)(EBX));
  /* 111e1841 mov ebx, dword ptr [0x111e916c] */
  EBX = (r32((uint32_t)(0x111e916c)));
  /* 111e1847 push esi */
  push32((uint32_t)(ESI));
  /* 111e1848 push edi */
  push32((uint32_t)(EDI));
  /* 111e1849 push 0x111ea130 */
  push32((uint32_t)(0x111ea130u));
  /* 111e184e push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1850 push 0x111ea124 */
  push32((uint32_t)(0x111ea124u));
  /* 111e1855 mov edi, ecx */
  EDI = (ECX);
  /* 111e1857 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e1859 call ebx */
  call_ind((uint32_t)(EBX), 0x111e185bu);
  /* 111e185b push 0x111ea110 */
  push32((uint32_t)(0x111ea110u));
  /* 111e1860 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1862 push 0x111ea104 */
  push32((uint32_t)(0x111ea104u));
  /* 111e1867 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e1869 mov esi, eax */
  ESI = (EAX);
  /* 111e186b call ebx */
  call_ind((uint32_t)(EBX), 0x111e186du);
  /* 111e186d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1870 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e1873 je 0x111e1912 */
  if (C.zf) goto L_111e1912;
  /* 111e1879 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e187a je 0x111e18cd */
  if (C.zf) goto L_111e18cd;
  /* 111e187c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e187d jne 0x111e196f */
  if (!C.zf) goto L_111e196f;
  /* 111e1883 shl esi, 6 */
  ESI = (sh_shl((uint32_t)(ESI), (0x6u)&0x1f, 32));
  /* 111e1886 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1888 push esi */
  push32((uint32_t)(ESI));
  /* 111e1889 call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e188fu);
  /* 111e188f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e1894 je 0x111e18bb */
  if (C.zf) goto L_111e18bb;
  /* 111e1896 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1898 push esi */
  push32((uint32_t)(ESI));
  /* 111e1899 call dword ptr [0x111e9158] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9158))), 0x111e189fu);
  /* 111e189f mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e18a2 push eax */
  push32((uint32_t)(EAX));
  /* 111e18a3 call dword ptr [0x111e9150] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9150))), 0x111e18a9u);
  /* 111e18a9 push 0x111ea0fc */
  push32((uint32_t)(0x111ea0fcu));
  /* 111e18ae call dword ptr [0x111e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9160))), 0x111e18b4u);
  /* 111e18b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e18b7 pop edi */
  EDI = (pop32());
  /* 111e18b8 pop esi */
  ESI = (pop32());
  /* 111e18b9 pop ebx */
  EBX = (pop32());
  /* 111e18ba ret  */
  ESPCHK(0x111e1840u, _esp0);
  ESP += 4; return;
L_111e18bb:;
  /* 111e18bb push 0x111ea0f4 */
  push32((uint32_t)(0x111ea0f4u));
  /* 111e18c0 call dword ptr [0x111e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9160))), 0x111e18c6u);
  /* 111e18c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e18c9 pop edi */
  EDI = (pop32());
  /* 111e18ca pop esi */
  ESI = (pop32());
  /* 111e18cb pop ebx */
  EBX = (pop32());
  /* 111e18cc ret  */
  ESPCHK(0x111e1840u, _esp0);
  ESP += 4; return;
L_111e18cd:;
  /* 111e18cd mov ecx, esi */
  ECX = (ESI);
  /* 111e18cf shl ecx, 6 */
  ECX = (sh_shl((uint32_t)(ECX), (0x6u)&0x1f, 32));
  /* 111e18d2 lea ebx, [ecx + edi] */
  EBX = ((uint32_t)(ECX + EDI*1));
  /* 111e18d5 push ebx */
  push32((uint32_t)(EBX));
  /* 111e18d6 call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e18dcu);
  /* 111e18dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e18df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e18e1 jne 0x111e1906 */
  if (!C.zf) goto L_111e1906;
  /* 111e18e3 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 111e18e9 mov al, byte ptr [edi + 0x2e8] */
  AL = (r8((uint32_t)(EDI + 0x2e8)));
  /* 111e18ef mov ecx, dword ptr [edi + 0x2a7] */
  ECX = (r32((uint32_t)(EDI + 0x2a7)));
  /* 111e18f5 push edx */
  push32((uint32_t)(EDX));
  /* 111e18f6 push eax */
  push32((uint32_t)(EAX));
  /* 111e18f7 lea edx, [edi + 0x298] */
  EDX = ((uint32_t)(EDI + 0x298));
  /* 111e18fd push ecx */
  push32((uint32_t)(ECX));
  /* 111e18fe push edx */
  push32((uint32_t)(EDX));
  /* 111e18ff mov ecx, ebx */
  ECX = (EBX);
  /* 111e1901 call 0x111e20e0 */
  push32(0x111e1906u); f_111e20e0();
L_111e1906:;
  /* 111e1906 push esi */
  push32((uint32_t)(ESI));
  /* 111e1907 mov ecx, edi */
  ECX = (EDI);
  /* 111e1909 call 0x111e1980 */
  push32(0x111e190eu); f_111e1980();
  /* 111e190e pop edi */
  EDI = (pop32());
  /* 111e190f pop esi */
  ESI = (pop32());
  /* 111e1910 pop ebx */
  EBX = (pop32());
  /* 111e1911 ret  */
  ESPCHK(0x111e1840u, _esp0);
  ESP += 4; return;
L_111e1912:;
  /* 111e1912 shl esi, 6 */
  ESI = (sh_shl((uint32_t)(ESI), (0x6u)&0x1f, 32));
  /* 111e1915 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1917 push esi */
  push32((uint32_t)(ESI));
  /* 111e1918 call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e191eu);
  /* 111e191e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e1923 je 0x111e1961 */
  if (C.zf) goto L_111e1961;
  /* 111e1925 mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 111e1928 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 111e192b mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 111e192e add esi, 0x29 */
  { uint32_t _a=(ESI),_b=(0x29u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1931 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 111e1934 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 111e1937 push edx */
  push32((uint32_t)(EDX));
  /* 111e1938 mov edx, dword ptr [esi - 0x1c] */
  EDX = (r32((uint32_t)(ESI + -0x1c)));
  /* 111e193b lea eax, [eax + eax*4 + 0x111edd08] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x111edd08));
  /* 111e1942 lea ecx, [ecx + ecx*4 + 0x111edd08] */
  ECX = ((uint32_t)(ECX + ECX*4 + 0x111edd08));
  /* 111e1949 push eax */
  push32((uint32_t)(EAX));
  /* 111e194a push edx */
  push32((uint32_t)(EDX));
  /* 111e194b push ecx */
  push32((uint32_t)(ECX));
  /* 111e194c push eax */
  push32((uint32_t)(EAX));
  /* 111e194d push ecx */
  push32((uint32_t)(ECX));
  /* 111e194e push esi */
  push32((uint32_t)(ESI));
  /* 111e194f push 0x111ea0ec */
  push32((uint32_t)(0x111ea0ecu));
  /* 111e1954 call dword ptr [0x111e9164] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9164))), 0x111e195au);
  /* 111e195a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e195d pop edi */
  EDI = (pop32());
  /* 111e195e pop esi */
  ESI = (pop32());
  /* 111e195f pop ebx */
  EBX = (pop32());
  /* 111e1960 ret  */
  ESPCHK(0x111e1840u, _esp0);
  ESP += 4; return;
L_111e1961:;
  /* 111e1961 push 0x111ea0e4 */
  push32((uint32_t)(0x111ea0e4u));
  /* 111e1966 call dword ptr [0x111e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9160))), 0x111e196cu);
  /* 111e196c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e196f:;
  /* 111e196f pop edi */
  EDI = (pop32());
  /* 111e1970 pop esi */
  ESI = (pop32());
  /* 111e1971 pop ebx */
  EBX = (pop32());
  /* 111e1972 ret  */
  ESPCHK(0x111e1840u, _esp0);
  ESP += 4; return;
}

/* FUN_10001980 @ 0x111e1980 (263 bytes, 86 insns) [2 switch table(s)] */
void f_111e1980(void) {
  FTRACE(0x111e1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1980 push ebx */
  push32((uint32_t)(EBX));
  /* 111e1981 push ebp */
  push32((uint32_t)(EBP));
  /* 111e1982 push esi */
  push32((uint32_t)(ESI));
  /* 111e1983 push edi */
  push32((uint32_t)(EDI));
  /* 111e1984 mov edi, ecx */
  EDI = (ECX);
  /* 111e1986 mov esi, dword ptr [0x111e916c] */
  ESI = (r32((uint32_t)(0x111e916c)));
  /* 111e198c mov eax, dword ptr [edi + 0x280] */
  EAX = (r32((uint32_t)(EDI + 0x280)));
  /* 111e1992 push eax */
  push32((uint32_t)(EAX));
  /* 111e1993 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1995 push 0x111ea170 */
  push32((uint32_t)(0x111ea170u));
  /* 111e199a push 9 */
  push32((uint32_t)(0x9u));
  /* 111e199c call esi */
  call_ind((uint32_t)(ESI), 0x111e199eu);
  /* 111e199e push 0x111ea0d0 */
  push32((uint32_t)(0x111ea0d0u));
  /* 111e19a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e19a5 push 0x111ea0c8 */
  push32((uint32_t)(0x111ea0c8u));
  /* 111e19aa push 9 */
  push32((uint32_t)(0x9u));
  /* 111e19ac mov ebp, eax */
  EBP = (EAX);
  /* 111e19ae call esi */
  call_ind((uint32_t)(ESI), 0x111e19b0u);
  /* 111e19b0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e19b3 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e19b6 ja 0x111e19e6 */
  if ((!C.cf&&!C.zf)) goto L_111e19e6;
  /* 111e19b8 jmp dword ptr [eax*4 + 0x111e1a88] */
  switch (EAX) {
    case 0: goto L_111e19bf;
    case 1: goto L_111e19c3;
    case 2: goto L_111e19ca;
    case 3: goto L_111e19d1;
    case 4: goto L_111e19d8;
    case 5: goto L_111e19df;
    case 6: goto L_111e1a09;
    case 7: goto L_111e1a0d;
    case 8: goto L_111e1a14;
    case 9: goto L_111e1a1b;
    case 10: goto L_111e1a22;
    case 11: goto L_111e1a29;
    default: x86_unimpl("switch@0x111e19b8 out of table"); return;
  }
L_111e19bf:;
  /* 111e19bf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e19c1 jmp 0x111e19ea */
  goto L_111e19ea;
L_111e19c3:;
  /* 111e19c3 mov ebx, 1 */
  EBX = (0x1u);
  /* 111e19c8 jmp 0x111e19ea */
  goto L_111e19ea;
L_111e19ca:;
  /* 111e19ca mov ebx, 2 */
  EBX = (0x2u);
  /* 111e19cf jmp 0x111e19ea */
  goto L_111e19ea;
L_111e19d1:;
  /* 111e19d1 mov ebx, 3 */
  EBX = (0x3u);
  /* 111e19d6 jmp 0x111e19ea */
  goto L_111e19ea;
L_111e19d8:;
  /* 111e19d8 mov ebx, 4 */
  EBX = (0x4u);
  /* 111e19dd jmp 0x111e19ea */
  goto L_111e19ea;
L_111e19df:;
  /* 111e19df mov ebx, 5 */
  EBX = (0x5u);
  /* 111e19e4 jmp 0x111e19ea */
  goto L_111e19ea;
L_111e19e6:;
  /* 111e19e6 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
L_111e19ea:;
  /* 111e19ea push 0x111ea0d0 */
  push32((uint32_t)(0x111ea0d0u));
  /* 111e19ef push 0 */
  push32((uint32_t)(0x0u));
  /* 111e19f1 push 0x111ea0c0 */
  push32((uint32_t)(0x111ea0c0u));
  /* 111e19f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e19f8 call esi */
  call_ind((uint32_t)(ESI), 0x111e19fau);
  /* 111e19fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e19fd cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1a00 ja 0x111e1a30 */
  if ((!C.cf&&!C.zf)) goto L_111e1a30;
  /* 111e1a02 jmp dword ptr [eax*4 + 0x111e1aa0] */
  switch (EAX) {
    case 0: goto L_111e1a09;
    case 1: goto L_111e1a0d;
    case 2: goto L_111e1a14;
    case 3: goto L_111e1a1b;
    case 4: goto L_111e1a22;
    case 5: goto L_111e1a29;
    default: x86_unimpl("switch@0x111e1a02 out of table"); return;
  }
L_111e1a09:;
  /* 111e1a09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e1a0b jmp 0x111e1a34 */
  goto L_111e1a34;
L_111e1a0d:;
  /* 111e1a0d mov ecx, 1 */
  ECX = (0x1u);
  /* 111e1a12 jmp 0x111e1a34 */
  goto L_111e1a34;
L_111e1a14:;
  /* 111e1a14 mov ecx, 2 */
  ECX = (0x2u);
  /* 111e1a19 jmp 0x111e1a34 */
  goto L_111e1a34;
L_111e1a1b:;
  /* 111e1a1b mov ecx, 3 */
  ECX = (0x3u);
  /* 111e1a20 jmp 0x111e1a34 */
  goto L_111e1a34;
L_111e1a22:;
  /* 111e1a22 mov ecx, 4 */
  ECX = (0x4u);
  /* 111e1a27 jmp 0x111e1a34 */
  goto L_111e1a34;
L_111e1a29:;
  /* 111e1a29 mov ecx, 5 */
  ECX = (0x5u);
  /* 111e1a2e jmp 0x111e1a34 */
  goto L_111e1a34;
L_111e1a30:;
  /* 111e1a30 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
L_111e1a34:;
  /* 111e1a34 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e1a38 mov eax, dword ptr [edi + ebp*4 + 0x284] */
  EAX = (r32((uint32_t)(EDI + EBP*4 + 0x284)));
  /* 111e1a3f shl edx, 6 */
  EDX = (sh_shl((uint32_t)(EDX), (0x6u)&0x1f, 32));
  /* 111e1a42 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1a43 mov ecx, dword ptr [eax + 0x2a7] */
  ECX = (r32((uint32_t)(EAX + 0x2a7)));
  /* 111e1a49 lea esi, [edx + edi] */
  ESI = ((uint32_t)(EDX + EDI*1));
  /* 111e1a4c push ebx */
  push32((uint32_t)(EBX));
  /* 111e1a4d add eax, 0x298 */
  { uint32_t _a=(EAX),_b=(0x298u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1a52 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1a53 push eax */
  push32((uint32_t)(EAX));
  /* 111e1a54 mov ecx, esi */
  ECX = (ESI);
  /* 111e1a56 call 0x111e2150 */
  push32(0x111e1a5bu); f_111e2150();
  /* 111e1a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1a5d push esi */
  push32((uint32_t)(ESI));
  /* 111e1a5e call dword ptr [0x111e9158] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9158))), 0x111e1a64u);
  /* 111e1a64 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 111e1a6a mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e1a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1a71 push edx */
  push32((uint32_t)(EDX));
  /* 111e1a72 push eax */
  push32((uint32_t)(EAX));
  /* 111e1a73 call dword ptr [0x111e9154] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9154))), 0x111e1a79u);
  /* 111e1a79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1a7c mov byte ptr [esi + 0x19], 0 */
  w8((uint32_t)(ESI + 0x19), (0x0u));
  /* 111e1a80 pop edi */
  EDI = (pop32());
  /* 111e1a81 pop esi */
  ESI = (pop32());
  /* 111e1a82 pop ebp */
  EBP = (pop32());
  /* 111e1a83 pop ebx */
  EBX = (pop32());
  /* 111e1a84 ret 4 */
  ESPCHK(0x111e1980u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ac0 @ 0x111e1ac0 (318 bytes, 121 insns) */
void f_111e1ac0(void) {
  FTRACE(0x111e1ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1ac1 push ebx */
  push32((uint32_t)(EBX));
  /* 111e1ac2 push ebp */
  push32((uint32_t)(EBP));
  /* 111e1ac3 push esi */
  push32((uint32_t)(ESI));
  /* 111e1ac4 push edi */
  push32((uint32_t)(EDI));
  /* 111e1ac5 mov edi, ecx */
  EDI = (ECX);
  /* 111e1ac7 mov al, byte ptr [edi + 0x2f6] */
  AL = (r8((uint32_t)(EDI + 0x2f6)));
  /* 111e1acd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e1acf je 0x111e1bf6 */
  if (C.zf) goto L_111e1bf6;
  /* 111e1ad5 mov al, byte ptr [edi + 0x2e8] */
  AL = (r8((uint32_t)(EDI + 0x2e8)));
  /* 111e1adb mov ecx, dword ptr [edi + 0x2ab] */
  ECX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 111e1ae1 push eax */
  push32((uint32_t)(EAX));
  /* 111e1ae2 push 0x111ed5f8 */
  push32((uint32_t)(0x111ed5f8u));
  /* 111e1ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1ae8 call dword ptr [0x111e915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e915c))), 0x111e1aeeu);
  /* 111e1aee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e1af3 je 0x111e1bf6 */
  if (C.zf) goto L_111e1bf6;
  /* 111e1af9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e1afb mov ebx, edi */
  EBX = (EDI);
L_111e1afd:;
  /* 111e1afd mov al, byte ptr [ebx + 0x19] */
  AL = (r8((uint32_t)(EBX + 0x19)));
  /* 111e1b00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e1b02 jne 0x111e1b19 */
  if (!C.zf) goto L_111e1b19;
  /* 111e1b04 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 111e1b0a push ebx */
  push32((uint32_t)(EBX));
  /* 111e1b0b push edx */
  push32((uint32_t)(EDX));
  /* 111e1b0c call dword ptr [0x111e9144] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9144))), 0x111e1b12u);
  /* 111e1b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1b15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e1b17 jne 0x111e1b82 */
  if (!C.zf) goto L_111e1b82;
L_111e1b19:;
  /* 111e1b19 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e1b1a add ebx, 0x40 */
  { uint32_t _a=(EBX),_b=(0x40u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1b1d cmp esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1b20 jl 0x111e1afd */
  if ((C.sf!=C.of)) goto L_111e1afd;
  /* 111e1b22 mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 111e1b2a lea ebp, [edi + 0x284] */
  EBP = ((uint32_t)(EDI + 0x284));
L_111e1b30:;
  /* 111e1b30 cmp dword ptr [ebp], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1b34 je 0x111e1b69 */
  if (C.zf) goto L_111e1b69;
  /* 111e1b36 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e1b38 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_111e1b3a:;
  /* 111e1b3a mov ecx, dword ptr [ebp] */
  ECX = (r32((uint32_t)(EBP)));
  /* 111e1b3d lea eax, [ecx + esi] */
  EAX = ((uint32_t)(ECX + ESI*1));
  /* 111e1b40 mov cl, byte ptr [ecx + esi + 0x19] */
  CL = (r8((uint32_t)(ECX + ESI*1 + 0x19)));
  /* 111e1b44 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 111e1b46 je 0x111e1b5d */
  if (C.zf) goto L_111e1b5d;
  /* 111e1b48 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 111e1b4e push eax */
  push32((uint32_t)(EAX));
  /* 111e1b4f push edx */
  push32((uint32_t)(EDX));
  /* 111e1b50 call dword ptr [0x111e9144] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9144))), 0x111e1b56u);
  /* 111e1b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e1b5b jne 0x111e1bb0 */
  if (!C.zf) goto L_111e1bb0;
L_111e1b5d:;
  /* 111e1b5d add esi, 0x40 */
  { uint32_t _a=(ESI),_b=(0x40u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1b60 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e1b61 cmp esi, 0x280 */
  { uint32_t _a=(ESI),_b=(0x280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1b67 jl 0x111e1b3a */
  if ((C.sf!=C.of)) goto L_111e1b3a;
L_111e1b69:;
  /* 111e1b69 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111e1b6d add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1b70 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e1b71 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1b74 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 111e1b78 jl 0x111e1b30 */
  if ((C.sf!=C.of)) goto L_111e1b30;
  /* 111e1b7a pop edi */
  EDI = (pop32());
  /* 111e1b7b pop esi */
  ESI = (pop32());
  /* 111e1b7c pop ebp */
  EBP = (pop32());
  /* 111e1b7d xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 111e1b7f pop ebx */
  EBX = (pop32());
  /* 111e1b80 pop ecx */
  ECX = (pop32());
  /* 111e1b81 ret  */
  ESPCHK(0x111e1ac0u, _esp0);
  ESP += 4; return;
L_111e1b82:;
  /* 111e1b82 shl esi, 6 */
  ESI = (sh_shl((uint32_t)(ESI), (0x6u)&0x1f, 32));
  /* 111e1b85 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1b87 mov ecx, edi */
  ECX = (EDI);
  /* 111e1b89 push esi */
  push32((uint32_t)(ESI));
  /* 111e1b8a mov byte ptr [esi + 0x19], 1 */
  w8((uint32_t)(ESI + 0x19), (0x1u));
  /* 111e1b8e call 0x111e1c00 */
  push32(0x111e1b93u); f_111e1c00();
  /* 111e1b93 push esi */
  push32((uint32_t)(ESI));
  /* 111e1b94 mov ecx, edi */
  ECX = (EDI);
  /* 111e1b96 call 0x111e1c40 */
  push32(0x111e1b9bu); f_111e1c40();
  /* 111e1b9b mov eax, dword ptr [esi + 0x3c] */
  EAX = (r32((uint32_t)(ESI + 0x3c)));
  /* 111e1b9e push eax */
  push32((uint32_t)(EAX));
  /* 111e1b9f push esi */
  push32((uint32_t)(ESI));
  /* 111e1ba0 call 0x111e32f0 */
  push32(0x111e1ba5u); f_111e32f0();
  /* 111e1ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1ba8 mov al, 1 */
  AL = (0x1u);
  /* 111e1baa pop edi */
  EDI = (pop32());
  /* 111e1bab pop esi */
  ESI = (pop32());
  /* 111e1bac pop ebp */
  EBP = (pop32());
  /* 111e1bad pop ebx */
  EBX = (pop32());
  /* 111e1bae pop ecx */
  ECX = (pop32());
  /* 111e1baf ret  */
  ESPCHK(0x111e1ac0u, _esp0);
  ESP += 4; return;
L_111e1bb0:;
  /* 111e1bb0 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 111e1bb4 shl ebx, 6 */
  EBX = (sh_shl((uint32_t)(EBX), (0x6u)&0x1f, 32));
  /* 111e1bb7 mov eax, dword ptr [edi + esi*4 + 0x284] */
  EAX = (r32((uint32_t)(EDI + ESI*4 + 0x284)));
  /* 111e1bbe mov byte ptr [eax + ebx + 0x19], 0 */
  w8((uint32_t)(EAX + EBX*1 + 0x19), (0x0u));
  /* 111e1bc3 mov eax, dword ptr [edi + esi*4 + 0x284] */
  EAX = (r32((uint32_t)(EDI + ESI*4 + 0x284)));
  /* 111e1bca push eax */
  push32((uint32_t)(EAX));
  /* 111e1bcb lea ecx, [ebx + eax] */
  ECX = ((uint32_t)(EBX + EAX*1));
  /* 111e1bce push ecx */
  push32((uint32_t)(ECX));
  /* 111e1bcf mov ecx, edi */
  ECX = (EDI);
  /* 111e1bd1 call 0x111e1ca0 */
  push32(0x111e1bd6u); f_111e1ca0();
  /* 111e1bd6 mov edx, dword ptr [edi + esi*4 + 0x284] */
  EDX = (r32((uint32_t)(EDI + ESI*4 + 0x284)));
  /* 111e1bdd mov ecx, dword ptr [edx + ebx + 0x38] */
  ECX = (r32((uint32_t)(EDX + EBX*1 + 0x38)));
  /* 111e1be1 lea eax, [edx + ebx] */
  EAX = ((uint32_t)(EDX + EBX*1));
  /* 111e1be4 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1be5 push eax */
  push32((uint32_t)(EAX));
  /* 111e1be6 call 0x111e32f0 */
  push32(0x111e1bebu); f_111e32f0();
  /* 111e1beb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1bee mov al, 1 */
  AL = (0x1u);
  /* 111e1bf0 pop edi */
  EDI = (pop32());
  /* 111e1bf1 pop esi */
  ESI = (pop32());
  /* 111e1bf2 pop ebp */
  EBP = (pop32());
  /* 111e1bf3 pop ebx */
  EBX = (pop32());
  /* 111e1bf4 pop ecx */
  ECX = (pop32());
  /* 111e1bf5 ret  */
  ESPCHK(0x111e1ac0u, _esp0);
  ESP += 4; return;
L_111e1bf6:;
  /* 111e1bf6 pop edi */
  EDI = (pop32());
  /* 111e1bf7 pop esi */
  ESI = (pop32());
  /* 111e1bf8 pop ebp */
  EBP = (pop32());
  /* 111e1bf9 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 111e1bfb pop ebx */
  EBX = (pop32());
  /* 111e1bfc pop ecx */
  ECX = (pop32());
  /* 111e1bfd ret  */
  ESPCHK(0x111e1ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c00 @ 0x111e1c00 (51 bytes, 22 insns) */
void f_111e1c00(void) {
  FTRACE(0x111e1c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1c00 push esi */
  push32((uint32_t)(ESI));
  /* 111e1c01 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e1c05 push edi */
  push32((uint32_t)(EDI));
  /* 111e1c06 mov edi, ecx */
  EDI = (ECX);
  /* 111e1c08 mov eax, dword ptr [esi + 0xd] */
  EAX = (r32((uint32_t)(ESI + 0xd)));
  /* 111e1c0b mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 111e1c0e push eax */
  push32((uint32_t)(EAX));
  /* 111e1c0f push ecx */
  push32((uint32_t)(ECX));
  /* 111e1c10 mov ecx, edi */
  ECX = (EDI);
  /* 111e1c12 call 0x111e1fe0 */
  push32(0x111e1c17u); f_111e1fe0();
  /* 111e1c17 mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 111e1c1a mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 111e1c1d push edx */
  push32((uint32_t)(EDX));
  /* 111e1c1e push eax */
  push32((uint32_t)(EAX));
  /* 111e1c1f mov ecx, edi */
  ECX = (EDI);
  /* 111e1c21 call 0x111e1fe0 */
  push32(0x111e1c26u); f_111e1fe0();
  /* 111e1c26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e1c28 pop edi */
  EDI = (pop32());
  /* 111e1c29 mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 111e1c2c mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 111e1c2f pop esi */
  ESI = (pop32());
  /* 111e1c30 ret 4 */
  ESPCHK(0x111e1c00u, _esp0);
  ESP += 8; return;
}

/* FUN_10001c40 @ 0x111e1c40 (96 bytes, 36 insns) */
void f_111e1c40(void) {
  FTRACE(0x111e1c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1c40 push esi */
  push32((uint32_t)(ESI));
  /* 111e1c41 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e1c45 push edi */
  push32((uint32_t)(EDI));
  /* 111e1c46 mov edi, ecx */
  EDI = (ECX);
  /* 111e1c48 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 111e1c4b push eax */
  push32((uint32_t)(EAX));
  /* 111e1c4c call 0x111e1f00 */
  push32(0x111e1c51u); f_111e1f00();
  /* 111e1c51 cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1c56 jl 0x111e1c74 */
  if ((C.sf!=C.of)) goto L_111e1c74;
  /* 111e1c58 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 111e1c5b push 0xfffffed4 */
  push32((uint32_t)(0xfffffed4u));
  /* 111e1c60 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1c61 mov ecx, edi */
  ECX = (EDI);
  /* 111e1c63 mov dword ptr [esi + 0xd], 0x12c */
  w32((uint32_t)(ESI + 0xd), (0x12cu));
  /* 111e1c6a call 0x111e1fe0 */
  push32(0x111e1c6fu); f_111e1fe0();
  /* 111e1c6f pop edi */
  EDI = (pop32());
  /* 111e1c70 pop esi */
  ESI = (pop32());
  /* 111e1c71 ret 4 */
  ESPCHK(0x111e1c40u, _esp0);
  ESP += 8; return;
L_111e1c74:;
  /* 111e1c74 mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 111e1c77 mov ecx, edi */
  ECX = (EDI);
  /* 111e1c79 push edx */
  push32((uint32_t)(EDX));
  /* 111e1c7a call 0x111e1f00 */
  push32(0x111e1c7fu); f_111e1f00();
  /* 111e1c7f mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 111e1c82 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 111e1c85 push eax */
  push32((uint32_t)(EAX));
  /* 111e1c86 mov ecx, edi */
  ECX = (EDI);
  /* 111e1c88 call 0x111e1f00 */
  push32(0x111e1c8du); f_111e1f00();
  /* 111e1c8d mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 111e1c90 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e1c92 push eax */
  push32((uint32_t)(EAX));
  /* 111e1c93 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1c94 mov ecx, edi */
  ECX = (EDI);
  /* 111e1c96 call 0x111e1fe0 */
  push32(0x111e1c9bu); f_111e1fe0();
  /* 111e1c9b pop edi */
  EDI = (pop32());
  /* 111e1c9c pop esi */
  ESI = (pop32());
  /* 111e1c9d ret 4 */
  ESPCHK(0x111e1c40u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ca0 @ 0x111e1ca0 (601 bytes, 230 insns) */
void f_111e1ca0(void) {
  FTRACE(0x111e1ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1ca0 push ebx */
  push32((uint32_t)(EBX));
  /* 111e1ca1 push ebp */
  push32((uint32_t)(EBP));
  /* 111e1ca2 push esi */
  push32((uint32_t)(ESI));
  /* 111e1ca3 mov esi, ecx */
  ESI = (ECX);
  /* 111e1ca5 push edi */
  push32((uint32_t)(EDI));
  /* 111e1ca6 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 111e1caa mov al, byte ptr [esi + 0x2af] */
  AL = (r8((uint32_t)(ESI + 0x2af)));
  /* 111e1cb0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e1cb2 je 0x111e1e23 */
  if (C.zf) goto L_111e1e23;
  /* 111e1cb8 mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1cbb mov ebx, dword ptr [esp + 0x18] */
  EBX = (r32((uint32_t)(ESP + 0x18)));
  /* 111e1cbf push eax */
  push32((uint32_t)(EAX));
  /* 111e1cc0 mov ecx, ebx */
  ECX = (EBX);
  /* 111e1cc2 call 0x111e1f70 */
  push32(0x111e1cc7u); f_111e1f70();
  /* 111e1cc7 imul eax, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e1ccb mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1cce mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 111e1cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1cd3 mov ecx, esi */
  ECX = (ESI);
  /* 111e1cd5 call 0x111e20c0 */
  push32(0x111e1cdau); f_111e20c0();
  /* 111e1cda mov dl, byte ptr [esi + 0x2e8] */
  DL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 111e1ce0 push eax */
  push32((uint32_t)(EAX));
  /* 111e1ce1 dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 111e1ce3 push edx */
  push32((uint32_t)(EDX));
  /* 111e1ce4 call dword ptr [0x111e9148] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9148))), 0x111e1ceau);
  /* 111e1cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1ced mov ebp, eax */
  EBP = (EAX);
  /* 111e1cef mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1cf2 mov ecx, ebx */
  ECX = (EBX);
  /* 111e1cf4 push eax */
  push32((uint32_t)(EAX));
  /* 111e1cf5 call 0x111e1f70 */
  push32(0x111e1cfau); f_111e1f70();
  /* 111e1cfa imul ebp, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e1cfd cmp dword ptr [esp + 0x14], ebp */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1d01 jg 0x111e1d90 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e1d90;
  /* 111e1d07 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 111e1d0a mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1d0d push ecx */
  push32((uint32_t)(ECX));
  /* 111e1d0e push edx */
  push32((uint32_t)(EDX));
  /* 111e1d0f mov ecx, esi */
  ECX = (ESI);
  /* 111e1d11 call 0x111e20c0 */
  push32(0x111e1d16u); f_111e20c0();
  /* 111e1d16 push eax */
  push32((uint32_t)(EAX));
  /* 111e1d17 mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 111e1d1d dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 111e1d1f push eax */
  push32((uint32_t)(EAX));
  /* 111e1d20 call dword ptr [0x111e9168] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9168))), 0x111e1d26u);
  /* 111e1d26 mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1d29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1d2c mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 111e1d33 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1d34 mov ecx, ebx */
  ECX = (EBX);
  /* 111e1d36 call 0x111e1f70 */
  push32(0x111e1d3bu); f_111e1f70();
  /* 111e1d3b mov ecx, eax */
  ECX = (EAX);
  /* 111e1d3d mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e1d41 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111e1d42 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e1d44 mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1d47 mov ecx, esi */
  ECX = (ESI);
  /* 111e1d49 push edx */
  push32((uint32_t)(EDX));
  /* 111e1d4a mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 111e1d4d call 0x111e20c0 */
  push32(0x111e1d52u); f_111e20c0();
  /* 111e1d52 push eax */
  push32((uint32_t)(EAX));
  /* 111e1d53 mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 111e1d59 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 111e1d5b push eax */
  push32((uint32_t)(EAX));
  /* 111e1d5c call dword ptr [0x111e9148] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9148))), 0x111e1d62u);
  /* 111e1d62 mov ecx, dword ptr [edi + 0x15] */
  ECX = (r32((uint32_t)(EDI + 0x15)));
  /* 111e1d65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1d68 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e1d6a mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1d6d push eax */
  push32((uint32_t)(EAX));
  /* 111e1d6e push ecx */
  push32((uint32_t)(ECX));
  /* 111e1d6f mov ecx, esi */
  ECX = (ESI);
  /* 111e1d71 call 0x111e20c0 */
  push32(0x111e1d76u); f_111e20c0();
  /* 111e1d76 mov dl, byte ptr [esi + 0x2e8] */
  DL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 111e1d7c push eax */
  push32((uint32_t)(EAX));
  /* 111e1d7d dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 111e1d7f push edx */
  push32((uint32_t)(EDX));
  /* 111e1d80 call dword ptr [0x111e914c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e914c))), 0x111e1d86u);
  /* 111e1d86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1d89 pop edi */
  EDI = (pop32());
  /* 111e1d8a pop esi */
  ESI = (pop32());
  /* 111e1d8b pop ebp */
  EBP = (pop32());
  /* 111e1d8c pop ebx */
  EBX = (pop32());
  /* 111e1d8d ret 8 */
  ESPCHK(0x111e1ca0u, _esp0);
  ESP += 12; return;
L_111e1d90:;
  /* 111e1d90 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1d93 mov ecx, esi */
  ECX = (ESI);
  /* 111e1d95 push eax */
  push32((uint32_t)(EAX));
  /* 111e1d96 call 0x111e20c0 */
  push32(0x111e1d9bu); f_111e20c0();
  /* 111e1d9b mov cl, byte ptr [esi + 0x2e8] */
  CL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 111e1da1 push eax */
  push32((uint32_t)(EAX));
  /* 111e1da2 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 111e1da4 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1da5 call dword ptr [0x111e9148] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9148))), 0x111e1dabu);
  /* 111e1dab mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1db1 mov ecx, esi */
  ECX = (ESI);
  /* 111e1db3 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 111e1db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e1db8 push edx */
  push32((uint32_t)(EDX));
  /* 111e1db9 call 0x111e20c0 */
  push32(0x111e1dbeu); f_111e20c0();
  /* 111e1dbe push eax */
  push32((uint32_t)(EAX));
  /* 111e1dbf mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 111e1dc5 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 111e1dc7 push eax */
  push32((uint32_t)(EAX));
  /* 111e1dc8 call dword ptr [0x111e914c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e914c))), 0x111e1dceu);
  /* 111e1dce mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1dd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1dd4 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1dd5 mov ecx, ebx */
  ECX = (EBX);
  /* 111e1dd7 call 0x111e1f70 */
  push32(0x111e1ddcu); f_111e1f70();
  /* 111e1ddc mov ecx, eax */
  ECX = (EAX);
  /* 111e1dde mov eax, ebp */
  EAX = (EBP);
  /* 111e1de0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111e1de1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e1de3 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 111e1de6 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1de9 push edx */
  push32((uint32_t)(EDX));
  /* 111e1dea sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e1dec mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 111e1def mov ecx, ebx */
  ECX = (EBX);
  /* 111e1df1 call 0x111e1f70 */
  push32(0x111e1df6u); f_111e1f70();
  /* 111e1df6 mov ecx, eax */
  ECX = (EAX);
  /* 111e1df8 mov eax, ebp */
  EAX = (EBP);
  /* 111e1dfa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111e1dfb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e1dfd mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1e00 mov ecx, esi */
  ECX = (ESI);
  /* 111e1e02 push eax */
  push32((uint32_t)(EAX));
  /* 111e1e03 push edx */
  push32((uint32_t)(EDX));
  /* 111e1e04 call 0x111e20c0 */
  push32(0x111e1e09u); f_111e20c0();
  /* 111e1e09 push eax */
  push32((uint32_t)(EAX));
  /* 111e1e0a mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 111e1e10 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 111e1e12 push eax */
  push32((uint32_t)(EAX));
  /* 111e1e13 call dword ptr [0x111e9168] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9168))), 0x111e1e19u);
  /* 111e1e19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e1e1c pop edi */
  EDI = (pop32());
  /* 111e1e1d pop esi */
  ESI = (pop32());
  /* 111e1e1e pop ebp */
  EBP = (pop32());
  /* 111e1e1f pop ebx */
  EBX = (pop32());
  /* 111e1e20 ret 8 */
  ESPCHK(0x111e1ca0u, _esp0);
  ESP += 12; return;
L_111e1e23:;
  /* 111e1e23 mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1e26 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1e27 mov ecx, esi */
  ECX = (ESI);
  /* 111e1e29 call 0x111e1f70 */
  push32(0x111e1e2eu); f_111e1f70();
  /* 111e1e2e mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1e31 mov ebp, eax */
  EBP = (EAX);
  /* 111e1e33 imul ebp, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e1e37 push edx */
  push32((uint32_t)(EDX));
  /* 111e1e38 mov ecx, esi */
  ECX = (ESI);
  /* 111e1e3a call 0x111e1f70 */
  push32(0x111e1e3fu); f_111e1f70();
  /* 111e1e3f mov ebx, eax */
  EBX = (EAX);
  /* 111e1e41 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1e44 push eax */
  push32((uint32_t)(EAX));
  /* 111e1e45 mov ecx, esi */
  ECX = (ESI);
  /* 111e1e47 call 0x111e1f00 */
  push32(0x111e1e4cu); f_111e1f00();
  /* 111e1e4c imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e1e4f cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1e51 jg 0x111e1e93 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e1e93;
  /* 111e1e53 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 111e1e56 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1e59 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1e5a push edx */
  push32((uint32_t)(EDX));
  /* 111e1e5b mov ecx, esi */
  ECX = (ESI);
  /* 111e1e5d call 0x111e1fe0 */
  push32(0x111e1e62u); f_111e1fe0();
  /* 111e1e62 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1e65 mov ecx, esi */
  ECX = (ESI);
  /* 111e1e67 push eax */
  push32((uint32_t)(EAX));
  /* 111e1e68 mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 111e1e6f call 0x111e1f70 */
  push32(0x111e1e74u); f_111e1f70();
  /* 111e1e74 mov ecx, eax */
  ECX = (EAX);
  /* 111e1e76 mov eax, ebp */
  EAX = (EBP);
  /* 111e1e78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111e1e79 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e1e7b mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1e7e mov ecx, esi */
  ECX = (ESI);
  /* 111e1e80 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 111e1e83 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e1e85 push eax */
  push32((uint32_t)(EAX));
  /* 111e1e86 push edx */
  push32((uint32_t)(EDX));
  /* 111e1e87 call 0x111e1fe0 */
  push32(0x111e1e8cu); f_111e1fe0();
  /* 111e1e8c pop edi */
  EDI = (pop32());
  /* 111e1e8d pop esi */
  ESI = (pop32());
  /* 111e1e8e pop ebp */
  EBP = (pop32());
  /* 111e1e8f pop ebx */
  EBX = (pop32());
  /* 111e1e90 ret 8 */
  ESPCHK(0x111e1ca0u, _esp0);
  ESP += 12; return;
L_111e1e93:;
  /* 111e1e93 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1e96 mov ecx, esi */
  ECX = (ESI);
  /* 111e1e98 push eax */
  push32((uint32_t)(EAX));
  /* 111e1e99 call 0x111e1f00 */
  push32(0x111e1e9eu); f_111e1f00();
  /* 111e1e9e mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1ea1 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 111e1ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 111e1ea5 mov ecx, esi */
  ECX = (ESI);
  /* 111e1ea7 call 0x111e1f00 */
  push32(0x111e1eacu); f_111e1f00();
  /* 111e1eac mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 111e1eaf mov ecx, esi */
  ECX = (ESI);
  /* 111e1eb1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e1eb3 push eax */
  push32((uint32_t)(EAX));
  /* 111e1eb4 push edx */
  push32((uint32_t)(EDX));
  /* 111e1eb5 call 0x111e1fe0 */
  push32(0x111e1ebau); f_111e1fe0();
  /* 111e1eba mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1ebd mov ecx, esi */
  ECX = (ESI);
  /* 111e1ebf push eax */
  push32((uint32_t)(EAX));
  /* 111e1ec0 call 0x111e1f70 */
  push32(0x111e1ec5u); f_111e1f70();
  /* 111e1ec5 mov ecx, eax */
  ECX = (EAX);
  /* 111e1ec7 mov eax, ebx */
  EAX = (EBX);
  /* 111e1ec9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111e1eca idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e1ecc mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 111e1ecf mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1ed2 push edx */
  push32((uint32_t)(EDX));
  /* 111e1ed3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e1ed5 mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 111e1ed8 mov ecx, esi */
  ECX = (ESI);
  /* 111e1eda call 0x111e1f70 */
  push32(0x111e1edfu); f_111e1f70();
  /* 111e1edf mov ecx, eax */
  ECX = (EAX);
  /* 111e1ee1 mov eax, ebx */
  EAX = (EBX);
  /* 111e1ee3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 111e1ee4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e1ee6 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 111e1ee9 mov ecx, esi */
  ECX = (ESI);
  /* 111e1eeb push eax */
  push32((uint32_t)(EAX));
  /* 111e1eec push edx */
  push32((uint32_t)(EDX));
  /* 111e1eed call 0x111e1fe0 */
  push32(0x111e1ef2u); f_111e1fe0();
  /* 111e1ef2 pop edi */
  EDI = (pop32());
  /* 111e1ef3 pop esi */
  ESI = (pop32());
  /* 111e1ef4 pop ebp */
  EBP = (pop32());
  /* 111e1ef5 pop ebx */
  EBX = (pop32());
  /* 111e1ef6 ret 8 */
  ESPCHK(0x111e1ca0u, _esp0);
  ESP += 12; return;
}

/* FUN_10001f00 @ 0x111e1f00 (75 bytes, 18 insns) [1 switch table(s)] */
void f_111e1f00(void) {
  FTRACE(0x111e1f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1f00 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e1f04 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1f07 ja 0x111e1f46 */
  if ((!C.cf&&!C.zf)) goto L_111e1f46;
  /* 111e1f09 jmp dword ptr [eax*4 + 0x111e1f4c] */
  switch (EAX) {
    case 0: goto L_111e1f10;
    case 1: goto L_111e1f19;
    case 2: goto L_111e1f22;
    case 3: goto L_111e1f2b;
    case 4: goto L_111e1f34;
    case 5: goto L_111e1f3d;
    default: x86_unimpl("switch@0x111e1f09 out of table"); return;
  }
L_111e1f10:;
  /* 111e1f10 mov eax, dword ptr [ecx + 0x2b8] */
  EAX = (r32((uint32_t)(ECX + 0x2b8)));
  /* 111e1f16 ret 4 */
  ESPCHK(0x111e1f00u, _esp0);
  ESP += 8; return;
L_111e1f19:;
  /* 111e1f19 mov eax, dword ptr [ecx + 0x2bc] */
  EAX = (r32((uint32_t)(ECX + 0x2bc)));
  /* 111e1f1f ret 4 */
  ESPCHK(0x111e1f00u, _esp0);
  ESP += 8; return;
L_111e1f22:;
  /* 111e1f22 mov eax, dword ptr [ecx + 0x2c0] */
  EAX = (r32((uint32_t)(ECX + 0x2c0)));
  /* 111e1f28 ret 4 */
  ESPCHK(0x111e1f00u, _esp0);
  ESP += 8; return;
L_111e1f2b:;
  /* 111e1f2b mov eax, dword ptr [ecx + 0x2c4] */
  EAX = (r32((uint32_t)(ECX + 0x2c4)));
  /* 111e1f31 ret 4 */
  ESPCHK(0x111e1f00u, _esp0);
  ESP += 8; return;
L_111e1f34:;
  /* 111e1f34 mov eax, dword ptr [ecx + 0x2c8] */
  EAX = (r32((uint32_t)(ECX + 0x2c8)));
  /* 111e1f3a ret 4 */
  ESPCHK(0x111e1f00u, _esp0);
  ESP += 8; return;
L_111e1f3d:;
  /* 111e1f3d mov eax, dword ptr [ecx + 0x2cc] */
  EAX = (r32((uint32_t)(ECX + 0x2cc)));
  /* 111e1f43 ret 4 */
  ESPCHK(0x111e1f00u, _esp0);
  ESP += 8; return;
L_111e1f46:;
  /* 111e1f46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e1f48 ret 4 */
  ESPCHK(0x111e1f00u, _esp0);
  ESP += 8; return;
}

/* FUN_10001f70 @ 0x111e1f70 (75 bytes, 18 insns) [1 switch table(s)] */
void f_111e1f70(void) {
  FTRACE(0x111e1f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1f70 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e1f74 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1f77 ja 0x111e1fb6 */
  if ((!C.cf&&!C.zf)) goto L_111e1fb6;
  /* 111e1f79 jmp dword ptr [eax*4 + 0x111e1fbc] */
  switch (EAX) {
    case 0: goto L_111e1f80;
    case 1: goto L_111e1f89;
    case 2: goto L_111e1f92;
    case 3: goto L_111e1f9b;
    case 4: goto L_111e1fa4;
    case 5: goto L_111e1fad;
    default: x86_unimpl("switch@0x111e1f79 out of table"); return;
  }
L_111e1f80:;
  /* 111e1f80 mov eax, dword ptr [ecx + 0x2d0] */
  EAX = (r32((uint32_t)(ECX + 0x2d0)));
  /* 111e1f86 ret 4 */
  ESPCHK(0x111e1f70u, _esp0);
  ESP += 8; return;
L_111e1f89:;
  /* 111e1f89 mov eax, dword ptr [ecx + 0x2d4] */
  EAX = (r32((uint32_t)(ECX + 0x2d4)));
  /* 111e1f8f ret 4 */
  ESPCHK(0x111e1f70u, _esp0);
  ESP += 8; return;
L_111e1f92:;
  /* 111e1f92 mov eax, dword ptr [ecx + 0x2d8] */
  EAX = (r32((uint32_t)(ECX + 0x2d8)));
  /* 111e1f98 ret 4 */
  ESPCHK(0x111e1f70u, _esp0);
  ESP += 8; return;
L_111e1f9b:;
  /* 111e1f9b mov eax, dword ptr [ecx + 0x2dc] */
  EAX = (r32((uint32_t)(ECX + 0x2dc)));
  /* 111e1fa1 ret 4 */
  ESPCHK(0x111e1f70u, _esp0);
  ESP += 8; return;
L_111e1fa4:;
  /* 111e1fa4 mov eax, dword ptr [ecx + 0x2e0] */
  EAX = (r32((uint32_t)(ECX + 0x2e0)));
  /* 111e1faa ret 4 */
  ESPCHK(0x111e1f70u, _esp0);
  ESP += 8; return;
L_111e1fad:;
  /* 111e1fad mov eax, dword ptr [ecx + 0x2e4] */
  EAX = (r32((uint32_t)(ECX + 0x2e4)));
  /* 111e1fb3 ret 4 */
  ESPCHK(0x111e1f70u, _esp0);
  ESP += 8; return;
L_111e1fb6:;
  /* 111e1fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e1fb8 ret 4 */
  ESPCHK(0x111e1f70u, _esp0);
  ESP += 8; return;
}

/* FUN_10001fe0 @ 0x111e1fe0 (146 bytes, 34 insns) [1 switch table(s)] */
void f_111e1fe0(void) {
  FTRACE(0x111e1fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e1fe0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e1fe4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e1fe7 ja 0x111e206f */
  if ((!C.cf&&!C.zf)) goto L_111e206f;
  /* 111e1fed jmp dword ptr [eax*4 + 0x111e2074] */
  switch (EAX) {
    case 0: goto L_111e1ff4;
    case 1: goto L_111e2009;
    case 2: goto L_111e201e;
    case 3: goto L_111e2033;
    case 4: goto L_111e2048;
    case 5: goto L_111e205d;
    default: x86_unimpl("switch@0x111e1fed out of table"); return;
  }
L_111e1ff4:;
  /* 111e1ff4 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e1ff8 mov edx, dword ptr [ecx + 0x2b8] */
  EDX = (r32((uint32_t)(ECX + 0x2b8)));
  /* 111e1ffe add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2000 mov dword ptr [ecx + 0x2b8], edx */
  w32((uint32_t)(ECX + 0x2b8), (EDX));
  /* 111e2006 ret 8 */
  ESPCHK(0x111e1fe0u, _esp0);
  ESP += 12; return;
L_111e2009:;
  /* 111e2009 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e200d mov eax, dword ptr [ecx + 0x2bc] */
  EAX = (r32((uint32_t)(ECX + 0x2bc)));
  /* 111e2013 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2015 mov dword ptr [ecx + 0x2bc], eax */
  w32((uint32_t)(ECX + 0x2bc), (EAX));
  /* 111e201b ret 8 */
  ESPCHK(0x111e1fe0u, _esp0);
  ESP += 12; return;
L_111e201e:;
  /* 111e201e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e2022 mov edx, dword ptr [ecx + 0x2c0] */
  EDX = (r32((uint32_t)(ECX + 0x2c0)));
  /* 111e2028 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e202a mov dword ptr [ecx + 0x2c0], edx */
  w32((uint32_t)(ECX + 0x2c0), (EDX));
  /* 111e2030 ret 8 */
  ESPCHK(0x111e1fe0u, _esp0);
  ESP += 12; return;
L_111e2033:;
  /* 111e2033 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e2037 mov eax, dword ptr [ecx + 0x2c4] */
  EAX = (r32((uint32_t)(ECX + 0x2c4)));
  /* 111e203d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e203f mov dword ptr [ecx + 0x2c4], eax */
  w32((uint32_t)(ECX + 0x2c4), (EAX));
  /* 111e2045 ret 8 */
  ESPCHK(0x111e1fe0u, _esp0);
  ESP += 12; return;
L_111e2048:;
  /* 111e2048 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e204c mov edx, dword ptr [ecx + 0x2c8] */
  EDX = (r32((uint32_t)(ECX + 0x2c8)));
  /* 111e2052 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2054 mov dword ptr [ecx + 0x2c8], edx */
  w32((uint32_t)(ECX + 0x2c8), (EDX));
  /* 111e205a ret 8 */
  ESPCHK(0x111e1fe0u, _esp0);
  ESP += 12; return;
L_111e205d:;
  /* 111e205d mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e2061 mov eax, dword ptr [ecx + 0x2cc] */
  EAX = (r32((uint32_t)(ECX + 0x2cc)));
  /* 111e2067 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2069 mov dword ptr [ecx + 0x2cc], eax */
  w32((uint32_t)(ECX + 0x2cc), (EAX));
L_111e206f:;
  /* 111e206f ret 8 */
  ESPCHK(0x111e1fe0u, _esp0);
  ESP += 12; return;
}

/* FUN_10002090 @ 0x111e2090 (39 bytes, 9 insns) */
void f_111e2090(void) {
  FTRACE(0x111e2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e2090 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e2094 mov dl, byte ptr [esp + 8] */
  DL = (r8((uint32_t)(ESP + 0x8)));
  /* 111e2098 mov byte ptr [ecx + 0x2f5], dl */
  w8((uint32_t)(ECX + 0x2f5), (DL));
  /* 111e209e lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 111e20a1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e20a4 mov dword ptr [ecx + 0x2f1], eax */
  w32((uint32_t)(ECX + 0x2f1), (EAX));
  /* 111e20aa mov al, byte ptr [esp + 0xc] */
  AL = (r8((uint32_t)(ESP + 0xc)));
  /* 111e20ae mov byte ptr [ecx + 0x2f6], al */
  w8((uint32_t)(ECX + 0x2f6), (AL));
  /* 111e20b4 ret 0xc */
  ESPCHK(0x111e2090u, _esp0);
  ESP += 16; return;
}

/* FUN_100020c0 @ 0x111e20c0 (30 bytes, 9 insns) */
void f_111e20c0(void) {
  FTRACE(0x111e20c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e20c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e20c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e20c7 jne 0x111e20d1 */
  if (!C.zf) goto L_111e20d1;
  /* 111e20c9 mov eax, 1 */
  EAX = (0x1u);
  /* 111e20ce ret 4 */
  ESPCHK(0x111e20c0u, _esp0);
  ESP += 8; return;
L_111e20d1:;
  /* 111e20d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e20d4 jne 0x111e20db */
  if (!C.zf) goto L_111e20db;
  /* 111e20d6 mov eax, 3 */
  EAX = (0x3u);
L_111e20db:;
  /* 111e20db ret 4 */
  ESPCHK(0x111e20c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100020e0 @ 0x111e20e0 (103 bytes, 42 insns) */
void f_111e20e0(void) {
  FTRACE(0x111e20e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e20e0 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111e20e4 push ebx */
  push32((uint32_t)(EBX));
  /* 111e20e5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 111e20e9 push ebp */
  push32((uint32_t)(EBP));
  /* 111e20ea push esi */
  push32((uint32_t)(ESI));
  /* 111e20eb push edi */
  push32((uint32_t)(EDI));
  /* 111e20ec push 0 */
  push32((uint32_t)(0x0u));
  /* 111e20ee push eax */
  push32((uint32_t)(EAX));
  /* 111e20ef push ebx */
  push32((uint32_t)(EBX));
  /* 111e20f0 mov ebp, ecx */
  EBP = (ECX);
  /* 111e20f2 push 0x111ed5f8 */
  push32((uint32_t)(0x111ed5f8u));
  /* 111e20f7 push 0x111ed560 */
  push32((uint32_t)(0x111ed560u));
  /* 111e20fc push ebp */
  push32((uint32_t)(EBP));
  /* 111e20fd call dword ptr [0x111e917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e917c))), 0x111e2103u);
  /* 111e2103 mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 111e2107 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e210a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e210c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e210f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e2111 not ecx */
  ECX = (~(ECX));
  /* 111e2113 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2115 lea edx, [ebp + 0x1a] */
  EDX = ((uint32_t)(EBP + 0x1a));
  /* 111e2118 mov eax, ecx */
  EAX = (ECX);
  /* 111e211a mov esi, edi */
  ESI = (EDI);
  /* 111e211c mov edi, edx */
  EDI = (EDX);
  /* 111e211e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e2121 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e2123 mov ecx, eax */
  ECX = (EAX);
  /* 111e2125 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e2127 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e212a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e212c mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 111e2130 pop edi */
  EDI = (pop32());
  /* 111e2131 mov dword ptr [ebp + 0x38], ecx */
  w32((uint32_t)(EBP + 0x38), (ECX));
  /* 111e2134 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 111e2137 mov byte ptr [ebp + 0x19], 0 */
  w8((uint32_t)(EBP + 0x19), (0x0u));
  /* 111e213b mov dword ptr [ebp + 0x15], eax */
  w32((uint32_t)(EBP + 0x15), (EAX));
  /* 111e213e mov dword ptr [ebp + 0xd], eax */
  w32((uint32_t)(EBP + 0xd), (EAX));
  /* 111e2141 pop esi */
  ESI = (pop32());
  /* 111e2142 pop ebp */
  EBP = (pop32());
  /* 111e2143 pop ebx */
  EBX = (pop32());
  /* 111e2144 ret 0x10 */
  ESPCHK(0x111e20e0u, _esp0);
  ESP += 20; return;
}

/* FUN_10002150 @ 0x111e2150 (79 bytes, 33 insns) */
void f_111e2150(void) {
  FTRACE(0x111e2150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e2150 push ebx */
  push32((uint32_t)(EBX));
  /* 111e2151 push esi */
  push32((uint32_t)(ESI));
  /* 111e2152 mov edx, ecx */
  EDX = (ECX);
  /* 111e2154 push edi */
  push32((uint32_t)(EDI));
  /* 111e2155 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 111e2159 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e215c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e215e lea ebx, [edx + 0x29] */
  EBX = ((uint32_t)(EDX + 0x29));
  /* 111e2161 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e2163 not ecx */
  ECX = (~(ECX));
  /* 111e2165 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2167 mov eax, ecx */
  EAX = (ECX);
  /* 111e2169 mov esi, edi */
  ESI = (EDI);
  /* 111e216b mov edi, ebx */
  EDI = (EBX);
  /* 111e216d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e2170 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e2172 mov ecx, eax */
  ECX = (EAX);
  /* 111e2174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e2176 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e2179 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e217b mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e217f mov byte ptr [edx + 0x19], al */
  w8((uint32_t)(EDX + 0x19), (AL));
  /* 111e2182 mov dword ptr [edx + 0x3c], ecx */
  w32((uint32_t)(EDX + 0x3c), (ECX));
  /* 111e2185 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 111e2189 mov dword ptr [edx + 0x15], eax */
  w32((uint32_t)(EDX + 0x15), (EAX));
  /* 111e218c mov dword ptr [edx + 0xd], eax */
  w32((uint32_t)(EDX + 0xd), (EAX));
  /* 111e218f mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 111e2193 pop edi */
  EDI = (pop32());
  /* 111e2194 pop esi */
  ESI = (pop32());
  /* 111e2195 mov dword ptr [edx + 9], eax */
  w32((uint32_t)(EDX + 0x9), (EAX));
  /* 111e2198 mov dword ptr [edx + 0x11], ecx */
  w32((uint32_t)(EDX + 0x11), (ECX));
  /* 111e219b pop ebx */
  EBX = (pop32());
  /* 111e219c ret 0x10 */
  ESPCHK(0x111e2150u, _esp0);
  ESP += 20; return;
}

/* FUN_100021a0 @ 0x111e21a0 (202 bytes, 70 insns) */
void f_111e21a0(void) {
  FTRACE(0x111e21a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e21a0 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e21a4 push ebx */
  push32((uint32_t)(EBX));
  /* 111e21a5 push ebp */
  push32((uint32_t)(EBP));
  /* 111e21a6 push esi */
  push32((uint32_t)(ESI));
  /* 111e21a7 mov esi, ecx */
  ESI = (ECX);
  /* 111e21a9 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 111e21ad mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 111e21b1 mov ebp, dword ptr [0x111e917c] */
  EBP = (r32((uint32_t)(0x111e917c)));
  /* 111e21b7 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 111e21ba mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111e21be push edi */
  push32((uint32_t)(EDI));
  /* 111e21bf mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 111e21c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e21c5 push eax */
  push32((uint32_t)(EAX));
  /* 111e21c6 push edi */
  push32((uint32_t)(EDI));
  /* 111e21c7 push 0x111ed9a8 */
  push32((uint32_t)(0x111ed9a8u));
  /* 111e21cc push 0x111ed560 */
  push32((uint32_t)(0x111ed560u));
  /* 111e21d1 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e21d6 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 111e21d8 mov dword ptr [esi + 4], 0 */
  w32((uint32_t)(ESI + 0x4), (0x0u));
  /* 111e21df mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 111e21e2 mov dword ptr [esi + 0x10], edx */
  w32((uint32_t)(ESI + 0x10), (EDX));
  /* 111e21e5 mov byte ptr [esi + 0x14], 0 */
  w8((uint32_t)(ESI + 0x14), (0x0u));
  /* 111e21e9 call ebp */
  call_ind((uint32_t)(EBP), 0x111e21ebu);
  /* 111e21eb mov ebx, dword ptr [0x111e9174] */
  EBX = (r32((uint32_t)(0x111e9174)));
  /* 111e21f1 lea ecx, [esi + 0x15] */
  ECX = ((uint32_t)(ESI + 0x15));
  /* 111e21f4 push ecx */
  push32((uint32_t)(ECX));
  /* 111e21f5 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e21fa call ebx */
  call_ind((uint32_t)(EBX), 0x111e21fcu);
  /* 111e21fc mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 111e2200 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2202 push edx */
  push32((uint32_t)(EDX));
  /* 111e2203 push edi */
  push32((uint32_t)(EDI));
  /* 111e2204 push 0x111ed9a8 */
  push32((uint32_t)(0x111ed9a8u));
  /* 111e2209 push 0x111ed560 */
  push32((uint32_t)(0x111ed560u));
  /* 111e220e push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e2213 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2215u);
  /* 111e2215 lea eax, [esi + 0x1d] */
  EAX = ((uint32_t)(ESI + 0x1d));
  /* 111e2218 push eax */
  push32((uint32_t)(EAX));
  /* 111e2219 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e221e call ebx */
  call_ind((uint32_t)(EBX), 0x111e2220u);
  /* 111e2220 mov ecx, dword ptr [esp + 0x5c] */
  ECX = (r32((uint32_t)(ESP + 0x5c)));
  /* 111e2224 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2227 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2229 push ecx */
  push32((uint32_t)(ECX));
  /* 111e222a push edi */
  push32((uint32_t)(EDI));
  /* 111e222b push 0x111ed9a8 */
  push32((uint32_t)(0x111ed9a8u));
  /* 111e2230 push 0x111ed560 */
  push32((uint32_t)(0x111ed560u));
  /* 111e2235 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e223a call ebp */
  call_ind((uint32_t)(EBP), 0x111e223cu);
  /* 111e223c lea edx, [esi + 0x25] */
  EDX = ((uint32_t)(ESI + 0x25));
  /* 111e223f push edx */
  push32((uint32_t)(EDX));
  /* 111e2240 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e2245 call ebx */
  call_ind((uint32_t)(EBX), 0x111e2247u);
  /* 111e2247 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 111e224a mov edi, dword ptr [0x111e9138] */
  EDI = (r32((uint32_t)(0x111e9138)));
  /* 111e2250 push 0xa */
  push32((uint32_t)(0xau));
  /* 111e2252 push eax */
  push32((uint32_t)(EAX));
  /* 111e2253 call edi */
  call_ind((uint32_t)(EDI), 0x111e2255u);
  /* 111e2255 mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 111e2259 mov dl, byte ptr [esi + 0x10] */
  DL = (r8((uint32_t)(ESI + 0x10)));
  /* 111e225c push ecx */
  push32((uint32_t)(ECX));
  /* 111e225d push edx */
  push32((uint32_t)(EDX));
  /* 111e225e call edi */
  call_ind((uint32_t)(EDI), 0x111e2260u);
  /* 111e2260 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2263 pop edi */
  EDI = (pop32());
  /* 111e2264 pop esi */
  ESI = (pop32());
  /* 111e2265 pop ebp */
  EBP = (pop32());
  /* 111e2266 pop ebx */
  EBX = (pop32());
  /* 111e2267 ret 0x1c */
  ESPCHK(0x111e21a0u, _esp0);
  ESP += 32; return;
}

/* FUN_10002270 @ 0x111e2270 (335 bytes, 116 insns) */
void f_111e2270(void) {
  FTRACE(0x111e2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e2270 push ebx */
  push32((uint32_t)(EBX));
  /* 111e2271 push ebp */
  push32((uint32_t)(EBP));
  /* 111e2272 push esi */
  push32((uint32_t)(ESI));
  /* 111e2273 mov esi, ecx */
  ESI = (ECX);
  /* 111e2275 push edi */
  push32((uint32_t)(EDI));
  /* 111e2276 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 111e2279 push eax */
  push32((uint32_t)(EAX));
  /* 111e227a call dword ptr [0x111e913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e913c))), 0x111e2280u);
  /* 111e2280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2283 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e2285 je 0x111e23b8 */
  if (C.zf) goto L_111e23b8;
  /* 111e228b mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 111e228e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e2290 je 0x111e23b8 */
  if (C.zf) goto L_111e23b8;
  /* 111e2296 mov cl, byte ptr [esi + 0xc] */
  CL = (r8((uint32_t)(ESI + 0xc)));
  /* 111e2299 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 111e229b push ecx */
  push32((uint32_t)(ECX));
  /* 111e229c call dword ptr [0x111e9138] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9138))), 0x111e22a2u);
  /* 111e22a2 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 111e22a5 lea edx, [esi + 0x15] */
  EDX = ((uint32_t)(ESI + 0x15));
  /* 111e22a8 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 111e22a9 push edx */
  push32((uint32_t)(EDX));
  /* 111e22aa mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 111e22ad call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e22b3u);
  /* 111e22b3 mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 111e22b7 mov ebx, dword ptr [0x111e917c] */
  EBX = (r32((uint32_t)(0x111e917c)));
  /* 111e22bd mov ebp, dword ptr [0x111e9158] */
  EBP = (r32((uint32_t)(0x111e9158)));
  /* 111e22c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e22c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e22c8 je 0x111e230e */
  if (C.zf) goto L_111e230e;
  /* 111e22ca mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e22ce mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 111e22d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e22d2 push eax */
  push32((uint32_t)(EAX));
  /* 111e22d3 push ecx */
  push32((uint32_t)(ECX));
  /* 111e22d4 push 0x111ed5c0 */
  push32((uint32_t)(0x111ed5c0u));
  /* 111e22d9 push 0x111ed560 */
  push32((uint32_t)(0x111ed560u));
  /* 111e22de push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e22e3 call ebx */
  call_ind((uint32_t)(EBX), 0x111e22e5u);
  /* 111e22e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e22e7 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e22ec call ebp */
  call_ind((uint32_t)(EBP), 0x111e22eeu);
  /* 111e22ee mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 111e22f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e22f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e22f4 push edi */
  push32((uint32_t)(EDI));
  /* 111e22f5 push edx */
  push32((uint32_t)(EDX));
  /* 111e22f6 call dword ptr [0x111e9140] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9140))), 0x111e22fcu);
  /* 111e22fc lea eax, [esi + 0x2d] */
  EAX = ((uint32_t)(ESI + 0x2d));
  /* 111e22ff push eax */
  push32((uint32_t)(EAX));
  /* 111e2300 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e2305 call dword ptr [0x111e9174] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9174))), 0x111e230bu);
  /* 111e230b add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e230e:;
  /* 111e230e lea ecx, [esi + 0x1d] */
  ECX = ((uint32_t)(ESI + 0x1d));
  /* 111e2311 push ecx */
  push32((uint32_t)(ECX));
  /* 111e2312 call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e2318u);
  /* 111e2318 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e231b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e231d je 0x111e2363 */
  if (C.zf) goto L_111e2363;
  /* 111e231f mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 111e2323 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e2325 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2327 push edx */
  push32((uint32_t)(EDX));
  /* 111e2328 push eax */
  push32((uint32_t)(EAX));
  /* 111e2329 push 0x111ed5c0 */
  push32((uint32_t)(0x111ed5c0u));
  /* 111e232e push 0x111ed560 */
  push32((uint32_t)(0x111ed560u));
  /* 111e2333 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e2338 call ebx */
  call_ind((uint32_t)(EBX), 0x111e233au);
  /* 111e233a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e233c push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e2341 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2343u);
  /* 111e2343 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 111e2345 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2347 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2349 push edi */
  push32((uint32_t)(EDI));
  /* 111e234a push ecx */
  push32((uint32_t)(ECX));
  /* 111e234b call dword ptr [0x111e9140] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9140))), 0x111e2351u);
  /* 111e2351 lea edx, [esi + 0x2d] */
  EDX = ((uint32_t)(ESI + 0x2d));
  /* 111e2354 push edx */
  push32((uint32_t)(EDX));
  /* 111e2355 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e235a call dword ptr [0x111e9174] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9174))), 0x111e2360u);
  /* 111e2360 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e2363:;
  /* 111e2363 lea eax, [esi + 0x25] */
  EAX = ((uint32_t)(ESI + 0x25));
  /* 111e2366 push eax */
  push32((uint32_t)(EAX));
  /* 111e2367 call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e236du);
  /* 111e236d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e2372 je 0x111e23b8 */
  if (C.zf) goto L_111e23b8;
  /* 111e2374 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 111e2378 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 111e237a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e237c push ecx */
  push32((uint32_t)(ECX));
  /* 111e237d push edx */
  push32((uint32_t)(EDX));
  /* 111e237e push 0x111ed598 */
  push32((uint32_t)(0x111ed598u));
  /* 111e2383 push 0x111ed560 */
  push32((uint32_t)(0x111ed560u));
  /* 111e2388 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e238d call ebx */
  call_ind((uint32_t)(EBX), 0x111e238fu);
  /* 111e238f push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2391 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e2396 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2398u);
  /* 111e2398 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e239a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e239c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e239e push edi */
  push32((uint32_t)(EDI));
  /* 111e239f push eax */
  push32((uint32_t)(EAX));
  /* 111e23a0 call dword ptr [0x111e9140] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9140))), 0x111e23a6u);
  /* 111e23a6 add esi, 0x35 */
  { uint32_t _a=(ESI),_b=(0x35u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e23a9 push esi */
  push32((uint32_t)(ESI));
  /* 111e23aa push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e23af call dword ptr [0x111e9174] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9174))), 0x111e23b5u);
  /* 111e23b5 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e23b8:;
  /* 111e23b8 pop edi */
  EDI = (pop32());
  /* 111e23b9 pop esi */
  ESI = (pop32());
  /* 111e23ba pop ebp */
  EBP = (pop32());
  /* 111e23bb pop ebx */
  EBX = (pop32());
  /* 111e23bc ret 0x10 */
  ESPCHK(0x111e2270u, _esp0);
  ESP += 20; return;
}

/* FUN_100023c0 @ 0x111e23c0 (126 bytes, 52 insns) */
void f_111e23c0(void) {
  FTRACE(0x111e23c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e23c0 push ebx */
  push32((uint32_t)(EBX));
  /* 111e23c1 push ebp */
  push32((uint32_t)(EBP));
  /* 111e23c2 push esi */
  push32((uint32_t)(ESI));
  /* 111e23c3 mov esi, ecx */
  ESI = (ECX);
  /* 111e23c5 push edi */
  push32((uint32_t)(EDI));
  /* 111e23c6 mov al, byte ptr [esi + 0x10] */
  AL = (r8((uint32_t)(ESI + 0x10)));
  /* 111e23c9 push eax */
  push32((uint32_t)(EAX));
  /* 111e23ca call dword ptr [0x111e913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e913c))), 0x111e23d0u);
  /* 111e23d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e23d3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e23d5 je 0x111e2437 */
  if (C.zf) goto L_111e2437;
  /* 111e23d7 mov ebp, dword ptr [0x111e9170] */
  EBP = (r32((uint32_t)(0x111e9170)));
  /* 111e23dd lea edi, [esi + 0x2d] */
  EDI = ((uint32_t)(ESI + 0x2d));
  /* 111e23e0 push edi */
  push32((uint32_t)(EDI));
  /* 111e23e1 call ebp */
  call_ind((uint32_t)(EBP), 0x111e23e3u);
  /* 111e23e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e23e6 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e23e9 jg 0x111e2437 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e2437;
  /* 111e23eb lea ebx, [esi + 0x35] */
  EBX = ((uint32_t)(ESI + 0x35));
  /* 111e23ee push ebx */
  push32((uint32_t)(EBX));
  /* 111e23ef call ebp */
  call_ind((uint32_t)(EBP), 0x111e23f1u);
  /* 111e23f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e23f4 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e23f7 jg 0x111e2437 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e2437;
  /* 111e23f9 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e23fd push 0 */
  push32((uint32_t)(0x0u));
  /* 111e23ff push edi */
  push32((uint32_t)(EDI));
  /* 111e2400 mov edi, dword ptr [0x111e9158] */
  EDI = (r32((uint32_t)(0x111e9158)));
  /* 111e2406 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 111e2409 mov byte ptr [esi + 0x14], 1 */
  w8((uint32_t)(ESI + 0x14), (0x1u));
  /* 111e240d call edi */
  call_ind((uint32_t)(EDI), 0x111e240fu);
  /* 111e240f push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2411 push ebx */
  push32((uint32_t)(EBX));
  /* 111e2412 call edi */
  call_ind((uint32_t)(EDI), 0x111e2414u);
  /* 111e2414 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 111e2418 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e241a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e241c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e241e push edx */
  push32((uint32_t)(EDX));
  /* 111e241f push eax */
  push32((uint32_t)(EAX));
  /* 111e2420 call dword ptr [0x111e9140] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9140))), 0x111e2426u);
  /* 111e2426 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 111e2429 mov dl, byte ptr [esi + 0x10] */
  DL = (r8((uint32_t)(ESI + 0x10)));
  /* 111e242c push ecx */
  push32((uint32_t)(ECX));
  /* 111e242d push edx */
  push32((uint32_t)(EDX));
  /* 111e242e call dword ptr [0x111e9138] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9138))), 0x111e2434u);
  /* 111e2434 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e2437:;
  /* 111e2437 pop edi */
  EDI = (pop32());
  /* 111e2438 pop esi */
  ESI = (pop32());
  /* 111e2439 pop ebp */
  EBP = (pop32());
  /* 111e243a pop ebx */
  EBX = (pop32());
  /* 111e243b ret 8 */
  ESPCHK(0x111e23c0u, _esp0);
  ESP += 12; return;
}

/* OnInit @ 0x111e2580 (908 bytes, 235 insns) */
void f_111e2580(void) {
  FTRACE(0x111e2580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e2580 push ebx */
  push32((uint32_t)(EBX));
  /* 111e2581 push ebp */
  push32((uint32_t)(EBP));
  /* 111e2582 push esi */
  push32((uint32_t)(ESI));
  /* 111e2583 mov esi, dword ptr [0x111e911c] */
  ESI = (r32((uint32_t)(0x111e911c)));
  /* 111e2589 push edi */
  push32((uint32_t)(EDI));
  /* 111e258a push 0x111ea48c */
  push32((uint32_t)(0x111ea48cu));
  /* 111e258f push 0x111ed560 */
  push32((uint32_t)(0x111ed560u));
  /* 111e2594 call esi */
  call_ind((uint32_t)(ESI), 0x111e2596u);
  /* 111e2596 push 0x111ea480 */
  push32((uint32_t)(0x111ea480u));
  /* 111e259b push 0x111edcf8 */
  push32((uint32_t)(0x111edcf8u));
  /* 111e25a0 call esi */
  call_ind((uint32_t)(ESI), 0x111e25a2u);
  /* 111e25a2 mov edi, dword ptr [0x111e9114] */
  EDI = (r32((uint32_t)(0x111e9114)));
  /* 111e25a8 push 0x111ea474 */
  push32((uint32_t)(0x111ea474u));
  /* 111e25ad push 0x111ed5f8 */
  push32((uint32_t)(0x111ed5f8u));
  /* 111e25b2 call edi */
  call_ind((uint32_t)(EDI), 0x111e25b4u);
  /* 111e25b4 push 0x111ea460 */
  push32((uint32_t)(0x111ea460u));
  /* 111e25b9 push 0x111ed5a8 */
  push32((uint32_t)(0x111ed5a8u));
  /* 111e25be call edi */
  call_ind((uint32_t)(EDI), 0x111e25c0u);
  /* 111e25c0 push 0x111ea450 */
  push32((uint32_t)(0x111ea450u));
  /* 111e25c5 push 0x111ed988 */
  push32((uint32_t)(0x111ed988u));
  /* 111e25ca call edi */
  call_ind((uint32_t)(EDI), 0x111e25ccu);
  /* 111e25cc push 0x111ea444 */
  push32((uint32_t)(0x111ea444u));
  /* 111e25d1 push 0x111ed9a8 */
  push32((uint32_t)(0x111ed9a8u));
  /* 111e25d6 call edi */
  call_ind((uint32_t)(EDI), 0x111e25d8u);
  /* 111e25d8 push 0x111ea430 */
  push32((uint32_t)(0x111ea430u));
  /* 111e25dd push 0x111ed5c0 */
  push32((uint32_t)(0x111ed5c0u));
  /* 111e25e2 call edi */
  call_ind((uint32_t)(EDI), 0x111e25e4u);
  /* 111e25e4 push 0x111ea41c */
  push32((uint32_t)(0x111ea41cu));
  /* 111e25e9 push 0x111ed598 */
  push32((uint32_t)(0x111ed598u));
  /* 111e25ee call edi */
  call_ind((uint32_t)(EDI), 0x111e25f0u);
  /* 111e25f0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e25f3 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e25f8 call dword ptr [0x111e9178] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9178))), 0x111e25feu);
  /* 111e25fe mov ebx, dword ptr [0x111e9124] */
  EBX = (r32((uint32_t)(0x111e9124)));
  /* 111e2604 push 8 */
  push32((uint32_t)(0x8u));
  /* 111e2606 push 0x111ed5e8 */
  push32((uint32_t)(0x111ed5e8u));
  /* 111e260b call ebx */
  call_ind((uint32_t)(EBX), 0x111e260du);
  /* 111e260d push 0x300 */
  push32((uint32_t)(0x300u));
  /* 111e2612 push 0x111ed240 */
  push32((uint32_t)(0x111ed240u));
  /* 111e2617 call ebx */
  call_ind((uint32_t)(EBX), 0x111e2619u);
  /* 111e2619 mov esi, dword ptr [0x111e9128] */
  ESI = (r32((uint32_t)(0x111e9128)));
  /* 111e261f push 0x111ea414 */
  push32((uint32_t)(0x111ea414u));
  /* 111e2624 push 0x111ed5d8 */
  push32((uint32_t)(0x111ed5d8u));
  /* 111e2629 call esi */
  call_ind((uint32_t)(ESI), 0x111e262bu);
  /* 111e262b mov ebp, dword ptr [0x111e9120] */
  EBP = (r32((uint32_t)(0x111e9120)));
  /* 111e2631 push 0x111ea408 */
  push32((uint32_t)(0x111ea408u));
  /* 111e2636 push 0x111ed558 */
  push32((uint32_t)(0x111ed558u));
  /* 111e263b call ebp */
  call_ind((uint32_t)(EBP), 0x111e263du);
  /* 111e263d push 0x111ea3f8 */
  push32((uint32_t)(0x111ea3f8u));
  /* 111e2642 push 0x111ed668 */
  push32((uint32_t)(0x111ed668u));
  /* 111e2647 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2649u);
  /* 111e2649 push 0x111ea3e8 */
  push32((uint32_t)(0x111ea3e8u));
  /* 111e264e push 0x111ed600 */
  push32((uint32_t)(0x111ed600u));
  /* 111e2653 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2655u);
  /* 111e2655 push 0x111ea3dc */
  push32((uint32_t)(0x111ea3dcu));
  /* 111e265a push 0x111ed628 */
  push32((uint32_t)(0x111ed628u));
  /* 111e265f call esi */
  call_ind((uint32_t)(ESI), 0x111e2661u);
  /* 111e2661 push 0x111ea3cc */
  push32((uint32_t)(0x111ea3ccu));
  /* 111e2666 push 0x111ed660 */
  push32((uint32_t)(0x111ed660u));
  /* 111e266b call esi */
  call_ind((uint32_t)(ESI), 0x111e266du);
  /* 111e266d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2670 push 0x111ea3bc */
  push32((uint32_t)(0x111ea3bcu));
  /* 111e2675 push 0x111ed658 */
  push32((uint32_t)(0x111ed658u));
  /* 111e267a call esi */
  call_ind((uint32_t)(ESI), 0x111e267cu);
  /* 111e267c push 0x111ea3ac */
  push32((uint32_t)(0x111ea3acu));
  /* 111e2681 push 0x111ed650 */
  push32((uint32_t)(0x111ed650u));
  /* 111e2686 call esi */
  call_ind((uint32_t)(ESI), 0x111e2688u);
  /* 111e2688 push 0x111ea39c */
  push32((uint32_t)(0x111ea39cu));
  /* 111e268d push 0x111ed640 */
  push32((uint32_t)(0x111ed640u));
  /* 111e2692 call esi */
  call_ind((uint32_t)(ESI), 0x111e2694u);
  /* 111e2694 push 0x111ea38c */
  push32((uint32_t)(0x111ea38cu));
  /* 111e2699 push 0x111ed638 */
  push32((uint32_t)(0x111ed638u));
  /* 111e269e call esi */
  call_ind((uint32_t)(ESI), 0x111e26a0u);
  /* 111e26a0 push 0x111ea37c */
  push32((uint32_t)(0x111ea37cu));
  /* 111e26a5 push 0x111ed630 */
  push32((uint32_t)(0x111ed630u));
  /* 111e26aa call esi */
  call_ind((uint32_t)(ESI), 0x111e26acu);
  /* 111e26ac push 0x111ea36c */
  push32((uint32_t)(0x111ea36cu));
  /* 111e26b1 push 0x111ed980 */
  push32((uint32_t)(0x111ed980u));
  /* 111e26b6 call esi */
  call_ind((uint32_t)(ESI), 0x111e26b8u);
  /* 111e26b8 push 0x111ea35c */
  push32((uint32_t)(0x111ea35cu));
  /* 111e26bd push 0x111ed978 */
  push32((uint32_t)(0x111ed978u));
  /* 111e26c2 call esi */
  call_ind((uint32_t)(ESI), 0x111e26c4u);
  /* 111e26c4 push 0x111ea34c */
  push32((uint32_t)(0x111ea34cu));
  /* 111e26c9 push 0x111ed970 */
  push32((uint32_t)(0x111ed970u));
  /* 111e26ce call esi */
  call_ind((uint32_t)(ESI), 0x111e26d0u);
  /* 111e26d0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e26d3 mov dword ptr [0x111ed4eb], 0x111ed5d8 */
  w32((uint32_t)(0x111ed4eb), (0x111ed5d8u));
  /* 111e26dd push 0x300 */
  push32((uint32_t)(0x300u));
  /* 111e26e2 push 0x111ed9f0 */
  push32((uint32_t)(0x111ed9f0u));
  /* 111e26e7 call ebx */
  call_ind((uint32_t)(EBX), 0x111e26e9u);
  /* 111e26e9 push 0x111ea340 */
  push32((uint32_t)(0x111ea340u));
  /* 111e26ee push 0x111ed5a0 */
  push32((uint32_t)(0x111ed5a0u));
  /* 111e26f3 call esi */
  call_ind((uint32_t)(ESI), 0x111e26f5u);
  /* 111e26f5 push 0x111ea330 */
  push32((uint32_t)(0x111ea330u));
  /* 111e26fa push 0x111ed5f0 */
  push32((uint32_t)(0x111ed5f0u));
  /* 111e26ff call ebp */
  call_ind((uint32_t)(EBP), 0x111e2701u);
  /* 111e2701 push 0x111ea31c */
  push32((uint32_t)(0x111ea31cu));
  /* 111e2706 push 0x111edcf0 */
  push32((uint32_t)(0x111edcf0u));
  /* 111e270b call ebp */
  call_ind((uint32_t)(EBP), 0x111e270du);
  /* 111e270d push 0x111ea308 */
  push32((uint32_t)(0x111ea308u));
  /* 111e2712 push 0x111ed540 */
  push32((uint32_t)(0x111ed540u));
  /* 111e2717 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2719u);
  /* 111e2719 push 0x111ea2f8 */
  push32((uint32_t)(0x111ea2f8u));
  /* 111e271e push 0x111ed9a0 */
  push32((uint32_t)(0x111ed9a0u));
  /* 111e2723 call esi */
  call_ind((uint32_t)(ESI), 0x111e2725u);
  /* 111e2725 push 0x111ea2e4 */
  push32((uint32_t)(0x111ea2e4u));
  /* 111e272a push 0x111ed228 */
  push32((uint32_t)(0x111ed228u));
  /* 111e272f call esi */
  call_ind((uint32_t)(ESI), 0x111e2731u);
  /* 111e2731 push 0x111ea2d0 */
  push32((uint32_t)(0x111ea2d0u));
  /* 111e2736 push 0x111ed230 */
  push32((uint32_t)(0x111ed230u));
  /* 111e273b call esi */
  call_ind((uint32_t)(ESI), 0x111e273du);
  /* 111e273d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2740 push 0x111ea2bc */
  push32((uint32_t)(0x111ea2bcu));
  /* 111e2745 push 0x111ed218 */
  push32((uint32_t)(0x111ed218u));
  /* 111e274a call esi */
  call_ind((uint32_t)(ESI), 0x111e274cu);
  /* 111e274c push 0x111ea2a8 */
  push32((uint32_t)(0x111ea2a8u));
  /* 111e2751 push 0x111ed220 */
  push32((uint32_t)(0x111ed220u));
  /* 111e2756 call esi */
  call_ind((uint32_t)(ESI), 0x111e2758u);
  /* 111e2758 push 0x300 */
  push32((uint32_t)(0x300u));
  /* 111e275d push 0x111ed670 */
  push32((uint32_t)(0x111ed670u));
  /* 111e2762 mov dword ptr [0x111edc9b], 0x111ed5a0 */
  w32((uint32_t)(0x111edc9b), (0x111ed5a0u));
  /* 111e276c call ebx */
  call_ind((uint32_t)(EBX), 0x111e276eu);
  /* 111e276e push 0x111ea2a0 */
  push32((uint32_t)(0x111ea2a0u));
  /* 111e2773 push 0x111ed620 */
  push32((uint32_t)(0x111ed620u));
  /* 111e2778 call esi */
  call_ind((uint32_t)(ESI), 0x111e277au);
  /* 111e277a push 0xc */
  push32((uint32_t)(0xcu));
  /* 111e277c push 0x111ea040 */
  push32((uint32_t)(0x111ea040u));
  /* 111e2781 mov dword ptr [0x111ed91b], 0x111ed620 */
  w32((uint32_t)(0x111ed91b), (0x111ed620u));
  /* 111e278b call ebx */
  call_ind((uint32_t)(EBX), 0x111e278du);
  /* 111e278d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 111e278f push 0x111edd70 */
  push32((uint32_t)(0x111edd70u));
  /* 111e2794 call ebx */
  call_ind((uint32_t)(EBX), 0x111e2796u);
  /* 111e2796 push 0x111ea294 */
  push32((uint32_t)(0x111ea294u));
  /* 111e279b push 0x111ed9c0 */
  push32((uint32_t)(0x111ed9c0u));
  /* 111e27a0 call esi */
  call_ind((uint32_t)(ESI), 0x111e27a2u);
  /* 111e27a2 push 0x111ea288 */
  push32((uint32_t)(0x111ea288u));
  /* 111e27a7 push 0x111ed9c8 */
  push32((uint32_t)(0x111ed9c8u));
  /* 111e27ac call esi */
  call_ind((uint32_t)(ESI), 0x111e27aeu);
  /* 111e27ae add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e27b1 push 0x111ea27c */
  push32((uint32_t)(0x111ea27cu));
  /* 111e27b6 push 0x111ed9b8 */
  push32((uint32_t)(0x111ed9b8u));
  /* 111e27bb call esi */
  call_ind((uint32_t)(ESI), 0x111e27bdu);
  /* 111e27bd push 0x111ea270 */
  push32((uint32_t)(0x111ea270u));
  /* 111e27c2 push 0x111ed5d0 */
  push32((uint32_t)(0x111ed5d0u));
  /* 111e27c7 call esi */
  call_ind((uint32_t)(ESI), 0x111e27c9u);
  /* 111e27c9 push 0x111ea264 */
  push32((uint32_t)(0x111ea264u));
  /* 111e27ce push 0x111ed5e0 */
  push32((uint32_t)(0x111ed5e0u));
  /* 111e27d3 call esi */
  call_ind((uint32_t)(ESI), 0x111e27d5u);
  /* 111e27d5 push 0x111ea258 */
  push32((uint32_t)(0x111ea258u));
  /* 111e27da push 0x111ed5c8 */
  push32((uint32_t)(0x111ed5c8u));
  /* 111e27df call esi */
  call_ind((uint32_t)(ESI), 0x111e27e1u);
  /* 111e27e1 push 0x111ea24c */
  push32((uint32_t)(0x111ea24cu));
  /* 111e27e6 push 0x111ed9b0 */
  push32((uint32_t)(0x111ed9b0u));
  /* 111e27eb call esi */
  call_ind((uint32_t)(ESI), 0x111e27edu);
  /* 111e27ed push 0x3d */
  push32((uint32_t)(0x3du));
  /* 111e27ef push 0x111eddb0 */
  push32((uint32_t)(0x111eddb0u));
  /* 111e27f4 call ebx */
  call_ind((uint32_t)(EBX), 0x111e27f6u);
  /* 111e27f6 push 0x111ea240 */
  push32((uint32_t)(0x111ea240u));
  /* 111e27fb push 0x111ed9e0 */
  push32((uint32_t)(0x111ed9e0u));
  /* 111e2800 call esi */
  call_ind((uint32_t)(ESI), 0x111e2802u);
  /* 111e2802 push 0x111ea234 */
  push32((uint32_t)(0x111ea234u));
  /* 111e2807 push 0x111ed9e8 */
  push32((uint32_t)(0x111ed9e8u));
  /* 111e280c call esi */
  call_ind((uint32_t)(ESI), 0x111e280eu);
  /* 111e280e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2811 push 0x111ea228 */
  push32((uint32_t)(0x111ea228u));
  /* 111e2816 push 0x111ed9d8 */
  push32((uint32_t)(0x111ed9d8u));
  /* 111e281b call esi */
  call_ind((uint32_t)(ESI), 0x111e281du);
  /* 111e281d push 0x111ea21c */
  push32((uint32_t)(0x111ea21cu));
  /* 111e2822 push 0x111ed618 */
  push32((uint32_t)(0x111ed618u));
  /* 111e2827 call esi */
  call_ind((uint32_t)(ESI), 0x111e2829u);
  /* 111e2829 push 0x111ea210 */
  push32((uint32_t)(0x111ea210u));
  /* 111e282e push 0x111ed608 */
  push32((uint32_t)(0x111ed608u));
  /* 111e2833 call esi */
  call_ind((uint32_t)(ESI), 0x111e2835u);
  /* 111e2835 push 0x111ea204 */
  push32((uint32_t)(0x111ea204u));
  /* 111e283a push 0x111ed610 */
  push32((uint32_t)(0x111ed610u));
  /* 111e283f call esi */
  call_ind((uint32_t)(ESI), 0x111e2841u);
  /* 111e2841 push 0x111ea1f8 */
  push32((uint32_t)(0x111ea1f8u));
  /* 111e2846 push 0x111ed238 */
  push32((uint32_t)(0x111ed238u));
  /* 111e284b call esi */
  call_ind((uint32_t)(ESI), 0x111e284du);
  /* 111e284d push 0x111ea1e8 */
  push32((uint32_t)(0x111ea1e8u));
  /* 111e2852 push 0x111ed990 */
  push32((uint32_t)(0x111ed990u));
  /* 111e2857 call edi */
  call_ind((uint32_t)(EDI), 0x111e2859u);
  /* 111e2859 push 0x111ea1dc */
  push32((uint32_t)(0x111ea1dcu));
  /* 111e285e push 0x111edd68 */
  push32((uint32_t)(0x111edd68u));
  /* 111e2863 call edi */
  call_ind((uint32_t)(EDI), 0x111e2865u);
  /* 111e2865 push 0x111ea1cc */
  push32((uint32_t)(0x111ea1ccu));
  /* 111e286a push 0x111ed648 */
  push32((uint32_t)(0x111ed648u));
  /* 111e286f call edi */
  call_ind((uint32_t)(EDI), 0x111e2871u);
  /* 111e2871 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2874 push 0x111ea1c0 */
  push32((uint32_t)(0x111ea1c0u));
  /* 111e2879 push 0x111edd00 */
  push32((uint32_t)(0x111edd00u));
  /* 111e287e call edi */
  call_ind((uint32_t)(EDI), 0x111e2880u);
  /* 111e2880 mov esi, dword ptr [0x111e9130] */
  ESI = (r32((uint32_t)(0x111e9130)));
  /* 111e2886 push 0x111ea1b8 */
  push32((uint32_t)(0x111ea1b8u));
  /* 111e288b push 0x111ed550 */
  push32((uint32_t)(0x111ed550u));
  /* 111e2890 call esi */
  call_ind((uint32_t)(ESI), 0x111e2892u);
  /* 111e2892 push 0x111ea1b0 */
  push32((uint32_t)(0x111ea1b0u));
  /* 111e2897 push 0x111ed548 */
  push32((uint32_t)(0x111ed548u));
  /* 111e289c call esi */
  call_ind((uint32_t)(ESI), 0x111e289eu);
  /* 111e289e push 0x111ea1a8 */
  push32((uint32_t)(0x111ea1a8u));
  /* 111e28a3 push 0x111ed5b8 */
  push32((uint32_t)(0x111ed5b8u));
  /* 111e28a8 call esi */
  call_ind((uint32_t)(ESI), 0x111e28aau);
  /* 111e28aa push 0x111ea1a0 */
  push32((uint32_t)(0x111ea1a0u));
  /* 111e28af push 0x111ed5b0 */
  push32((uint32_t)(0x111ed5b0u));
  /* 111e28b4 call esi */
  call_ind((uint32_t)(ESI), 0x111e28b6u);
  /* 111e28b6 push 0x111ea198 */
  push32((uint32_t)(0x111ea198u));
  /* 111e28bb push 0x111ed998 */
  push32((uint32_t)(0x111ed998u));
  /* 111e28c0 call esi */
  call_ind((uint32_t)(ESI), 0x111e28c2u);
  /* 111e28c2 push 0x111ea190 */
  push32((uint32_t)(0x111ea190u));
  /* 111e28c7 push 0x111ed9d0 */
  push32((uint32_t)(0x111ed9d0u));
  /* 111e28cc call esi */
  call_ind((uint32_t)(ESI), 0x111e28ceu);
  /* 111e28ce mov esi, dword ptr [0x111e9134] */
  ESI = (r32((uint32_t)(0x111e9134)));
  /* 111e28d4 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e28d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e28d8 call esi */
  call_ind((uint32_t)(ESI), 0x111e28dau);
  /* 111e28da add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e28dd push 0x24 */
  push32((uint32_t)(0x24u));
  /* 111e28df push 2 */
  push32((uint32_t)(0x2u));
  /* 111e28e1 call esi */
  call_ind((uint32_t)(ESI), 0x111e28e3u);
  /* 111e28e3 mov esi, dword ptr [0x111e912c] */
  ESI = (r32((uint32_t)(0x111e912c)));
  /* 111e28e9 push 0x111ea188 */
  push32((uint32_t)(0x111ea188u));
  /* 111e28ee push 1 */
  push32((uint32_t)(0x1u));
  /* 111e28f0 call esi */
  call_ind((uint32_t)(ESI), 0x111e28f2u);
  /* 111e28f2 push 0x111ea180 */
  push32((uint32_t)(0x111ea180u));
  /* 111e28f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e28f9 call esi */
  call_ind((uint32_t)(ESI), 0x111e28fbu);
  /* 111e28fb push 0x111ea178 */
  push32((uint32_t)(0x111ea178u));
  /* 111e2900 push 5 */
  push32((uint32_t)(0x5u));
  /* 111e2902 call esi */
  call_ind((uint32_t)(ESI), 0x111e2904u);
  /* 111e2904 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2907 pop edi */
  EDI = (pop32());
  /* 111e2908 pop esi */
  ESI = (pop32());
  /* 111e2909 pop ebp */
  EBP = (pop32());
  /* 111e290a pop ebx */
  EBX = (pop32());
  /* 111e290b ret  */
  ESPCHK(0x111e2580u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x111e2910 (2516 bytes, 815 insns) */
void f_111e2910(void) {
  FTRACE(0x111e2910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e2910 mov al, byte ptr [0x111eddf4] */
  AL = (r8((uint32_t)(0x111eddf4)));
  /* 111e2915 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2918 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e291a push ebx */
  push32((uint32_t)(EBX));
  /* 111e291b push ebp */
  push32((uint32_t)(EBP));
  /* 111e291c push esi */
  push32((uint32_t)(ESI));
  /* 111e291d push edi */
  push32((uint32_t)(EDI));
  /* 111e291e jne 0x111e2be8 */
  if (!C.zf) goto L_111e2be8;
  /* 111e2924 push 0x111ea574 */
  push32((uint32_t)(0x111ea574u));
  /* 111e2929 push 0x111ea55c */
  push32((uint32_t)(0x111ea55cu));
  /* 111e292e mov byte ptr [0x111eddf4], 1 */
  w8((uint32_t)(0x111eddf4), (0x1u));
  /* 111e2935 call 0x111e3b6f */
  push32(0x111e293au); f_111e3b6f();
  /* 111e293a mov esi, eax */
  ESI = (EAX);
  /* 111e293c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e293f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e2941 jne 0x111e2a8f */
  if (!C.zf) goto L_111e2a8f;
  /* 111e2947 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e294a mov edi, 0x111ea554 */
  EDI = (0x111ea554u);
  /* 111e294f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e2951 not ecx */
  ECX = (~(ECX));
  /* 111e2953 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2955 mov eax, ecx */
  EAX = (ECX);
  /* 111e2957 mov esi, edi */
  ESI = (EDI);
  /* 111e2959 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e295c mov edi, 0x111edd08 */
  EDI = (0x111edd08u);
  /* 111e2961 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e2963 mov ecx, eax */
  ECX = (EAX);
  /* 111e2965 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e2967 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e296a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e296c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e296f mov edi, 0x111ea54c */
  EDI = (0x111ea54cu);
  /* 111e2974 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e2976 not ecx */
  ECX = (~(ECX));
  /* 111e2978 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e297a mov edx, ecx */
  EDX = (ECX);
  /* 111e297c mov esi, edi */
  ESI = (EDI);
  /* 111e297e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e2981 mov edi, 0x111edd17 */
  EDI = (0x111edd17u);
  /* 111e2986 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e2988 mov ecx, edx */
  ECX = (EDX);
  /* 111e298a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e298d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e298f or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e2992 mov edi, 0x111ea544 */
  EDI = (0x111ea544u);
  /* 111e2997 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e2999 not ecx */
  ECX = (~(ECX));
  /* 111e299b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e299d mov eax, ecx */
  EAX = (ECX);
  /* 111e299f mov esi, edi */
  ESI = (EDI);
  /* 111e29a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e29a4 mov edi, 0x111edd26 */
  EDI = (0x111edd26u);
  /* 111e29a9 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e29ab mov ecx, eax */
  ECX = (EAX);
  /* 111e29ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e29af and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e29b2 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e29b4 mov edi, 0x111ea53c */
  EDI = (0x111ea53cu);
  /* 111e29b9 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e29bc repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e29be not ecx */
  ECX = (~(ECX));
  /* 111e29c0 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e29c2 mov edx, ecx */
  EDX = (ECX);
  /* 111e29c4 mov esi, edi */
  ESI = (EDI);
  /* 111e29c6 mov edi, 0x111edd35 */
  EDI = (0x111edd35u);
  /* 111e29cb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e29ce rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e29d0 mov ecx, edx */
  ECX = (EDX);
  /* 111e29d2 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e29d5 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e29d7 mov edi, 0x111ea534 */
  EDI = (0x111ea534u);
  /* 111e29dc or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e29df repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e29e1 not ecx */
  ECX = (~(ECX));
  /* 111e29e3 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e29e5 mov eax, ecx */
  EAX = (ECX);
  /* 111e29e7 mov esi, edi */
  ESI = (EDI);
  /* 111e29e9 mov edi, 0x111edd44 */
  EDI = (0x111edd44u);
  /* 111e29ee shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e29f1 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e29f3 mov ecx, eax */
  ECX = (EAX);
  /* 111e29f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e29f7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e29fa rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e29fc mov edi, 0x111ea52c */
  EDI = (0x111ea52cu);
  /* 111e2a01 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e2a04 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e2a06 not ecx */
  ECX = (~(ECX));
  /* 111e2a08 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2a0a mov edx, ecx */
  EDX = (ECX);
  /* 111e2a0c mov esi, edi */
  ESI = (EDI);
  /* 111e2a0e mov edi, 0x111edd53 */
  EDI = (0x111edd53u);
  /* 111e2a13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e2a16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e2a18 mov ecx, edx */
  ECX = (EDX);
  /* 111e2a1a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e2a1d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e2a1f mov edi, 0x111ea524 */
  EDI = (0x111ea524u);
  /* 111e2a24 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e2a27 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e2a29 not ecx */
  ECX = (~(ECX));
  /* 111e2a2b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2a2d mov eax, ecx */
  EAX = (ECX);
  /* 111e2a2f mov esi, edi */
  ESI = (EDI);
  /* 111e2a31 mov edi, 0x111ed568 */
  EDI = (0x111ed568u);
  /* 111e2a36 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e2a39 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e2a3b mov ecx, eax */
  ECX = (EAX);
  /* 111e2a3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e2a3f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e2a42 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e2a44 mov edi, 0x111ea518 */
  EDI = (0x111ea518u);
  /* 111e2a49 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e2a4c repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e2a4e not ecx */
  ECX = (~(ECX));
  /* 111e2a50 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2a52 mov edx, ecx */
  EDX = (ECX);
  /* 111e2a54 mov esi, edi */
  ESI = (EDI);
  /* 111e2a56 mov edi, 0x111ed577 */
  EDI = (0x111ed577u);
  /* 111e2a5b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e2a5e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e2a60 mov ecx, edx */
  ECX = (EDX);
  /* 111e2a62 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e2a65 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e2a67 mov edi, 0x111ea510 */
  EDI = (0x111ea510u);
  /* 111e2a6c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e2a6f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 111e2a71 not ecx */
  ECX = (~(ECX));
  /* 111e2a73 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2a75 mov eax, ecx */
  EAX = (ECX);
  /* 111e2a77 mov esi, edi */
  ESI = (EDI);
  /* 111e2a79 mov edi, 0x111ed586 */
  EDI = (0x111ed586u);
  /* 111e2a7e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e2a81 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e2a83 mov ecx, eax */
  ECX = (EAX);
  /* 111e2a85 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e2a88 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 111e2a8a jmp 0x111e2be8 */
  goto L_111e2be8;
L_111e2a8f:;
  /* 111e2a8f push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2a93 push esi */
  push32((uint32_t)(ESI));
  /* 111e2a94 call 0x111e3a85 */
  push32(0x111e2a99u); f_111e3a85();
  /* 111e2a99 push esi */
  push32((uint32_t)(ESI));
  /* 111e2a9a call 0x111e3902 */
  push32(0x111e2a9fu); f_111e3902();
  /* 111e2a9f mov ebx, eax */
  EBX = (EAX);
  /* 111e2aa1 lea ecx, [ebx + 1] */
  ECX = ((uint32_t)(EBX + 0x1));
  /* 111e2aa4 push ecx */
  push32((uint32_t)(ECX));
  /* 111e2aa5 call 0x111e38f4 */
  push32(0x111e2aaau); f_111e38f4();
  /* 111e2aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2aac push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2aae push esi */
  push32((uint32_t)(ESI));
  /* 111e2aaf mov edi, eax */
  EDI = (EAX);
  /* 111e2ab1 call 0x111e3a85 */
  push32(0x111e2ab6u); f_111e3a85();
  /* 111e2ab6 push esi */
  push32((uint32_t)(ESI));
  /* 111e2ab7 push ebx */
  push32((uint32_t)(EBX));
  /* 111e2ab8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2aba push edi */
  push32((uint32_t)(EDI));
  /* 111e2abb call 0x111e37dd */
  push32(0x111e2ac0u); f_111e37dd();
  /* 111e2ac0 push esi */
  push32((uint32_t)(ESI));
  /* 111e2ac1 call 0x111e3760 */
  push32(0x111e2ac6u); f_111e3760();
  /* 111e2ac6 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2ac9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e2acb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_111e2acd:;
  /* 111e2acd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e2acf jne 0x111e2ad8 */
  if (!C.zf) goto L_111e2ad8;
  /* 111e2ad1 push 0x111ea508 */
  push32((uint32_t)(0x111ea508u));
  /* 111e2ad6 jmp 0x111e2b12 */
  goto L_111e2b12;
L_111e2ad8:;
  /* 111e2ad8 cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2adb jne 0x111e2ae4 */
  if (!C.zf) goto L_111e2ae4;
  /* 111e2add push 0x111ea500 */
  push32((uint32_t)(0x111ea500u));
  /* 111e2ae2 jmp 0x111e2b12 */
  goto L_111e2b12;
L_111e2ae4:;
  /* 111e2ae4 cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2ae7 jne 0x111e2af0 */
  if (!C.zf) goto L_111e2af0;
  /* 111e2ae9 push 0x111ea4f8 */
  push32((uint32_t)(0x111ea4f8u));
  /* 111e2aee jmp 0x111e2b12 */
  goto L_111e2b12;
L_111e2af0:;
  /* 111e2af0 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2af3 jne 0x111e2afc */
  if (!C.zf) goto L_111e2afc;
  /* 111e2af5 push 0x111ea4f0 */
  push32((uint32_t)(0x111ea4f0u));
  /* 111e2afa jmp 0x111e2b12 */
  goto L_111e2b12;
L_111e2afc:;
  /* 111e2afc cmp ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2aff jne 0x111e2b08 */
  if (!C.zf) goto L_111e2b08;
  /* 111e2b01 push 0x111ea4e8 */
  push32((uint32_t)(0x111ea4e8u));
  /* 111e2b06 jmp 0x111e2b12 */
  goto L_111e2b12;
L_111e2b08:;
  /* 111e2b08 cmp ebx, 5 */
  { uint32_t _a=(EBX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2b0b jne 0x111e2b1f */
  if (!C.zf) goto L_111e2b1f;
  /* 111e2b0d push 0x111ea4e0 */
  push32((uint32_t)(0x111ea4e0u));
L_111e2b12:;
  /* 111e2b12 push edi */
  push32((uint32_t)(EDI));
  /* 111e2b13 call 0x111e36e0 */
  push32(0x111e2b18u); f_111e36e0();
  /* 111e2b18 mov esi, eax */
  ESI = (EAX);
  /* 111e2b1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2b1d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_111e2b1f:;
  /* 111e2b1f add esi, 5 */
  { uint32_t _a=(ESI),_b=(0x5u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2b22 push 0x111ea4dc */
  push32((uint32_t)(0x111ea4dcu));
  /* 111e2b27 lea ebp, [esi + edi] */
  EBP = ((uint32_t)(ESI + EDI*1));
  /* 111e2b2a push ebp */
  push32((uint32_t)(EBP));
  /* 111e2b2b call 0x111e36a0 */
  push32(0x111e2b30u); f_111e36a0();
  /* 111e2b30 lea ecx, [ebx + ebx*2] */
  ECX = ((uint32_t)(EBX + EBX*2));
  /* 111e2b33 push eax */
  push32((uint32_t)(EAX));
  /* 111e2b34 push ebp */
  push32((uint32_t)(EBP));
  /* 111e2b35 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 111e2b39 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 111e2b3c mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 111e2b40 lea edx, [ecx + 0x111edd08] */
  EDX = ((uint32_t)(ECX + 0x111edd08));
  /* 111e2b46 push edx */
  push32((uint32_t)(EDX));
  /* 111e2b47 call 0x111e35a0 */
  push32(0x111e2b4cu); f_111e35a0();
  /* 111e2b4c mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 111e2b50 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 111e2b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2b57 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e2b58 cmp ebx, 6 */
  { uint32_t _a=(EBX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2b5b mov byte ptr [eax + ecx + 0x111edd08], 0 */
  w8((uint32_t)(EAX + ECX*1 + 0x111edd08), (0x0u));
  /* 111e2b63 jl 0x111e2acd */
  if ((C.sf!=C.of)) goto L_111e2acd;
  /* 111e2b69 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_111e2b6b:;
  /* 111e2b6b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e2b6d jne 0x111e2b76 */
  if (!C.zf) goto L_111e2b76;
  /* 111e2b6f push 0x111ea524 */
  push32((uint32_t)(0x111ea524u));
  /* 111e2b74 jmp 0x111e2b8c */
  goto L_111e2b8c;
L_111e2b76:;
  /* 111e2b76 cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2b79 jne 0x111e2b82 */
  if (!C.zf) goto L_111e2b82;
  /* 111e2b7b push 0x111ea518 */
  push32((uint32_t)(0x111ea518u));
  /* 111e2b80 jmp 0x111e2b8c */
  goto L_111e2b8c;
L_111e2b82:;
  /* 111e2b82 cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2b85 jne 0x111e2b99 */
  if (!C.zf) goto L_111e2b99;
  /* 111e2b87 push 0x111ea510 */
  push32((uint32_t)(0x111ea510u));
L_111e2b8c:;
  /* 111e2b8c push edi */
  push32((uint32_t)(EDI));
  /* 111e2b8d call 0x111e36e0 */
  push32(0x111e2b92u); f_111e36e0();
  /* 111e2b92 mov esi, eax */
  ESI = (EAX);
  /* 111e2b94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2b97 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_111e2b99:;
  /* 111e2b99 add esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2b9c push 0x111ea4dc */
  push32((uint32_t)(0x111ea4dcu));
  /* 111e2ba1 lea ebp, [esi + edi] */
  EBP = ((uint32_t)(ESI + EDI*1));
  /* 111e2ba4 push ebp */
  push32((uint32_t)(EBP));
  /* 111e2ba5 call 0x111e36a0 */
  push32(0x111e2baau); f_111e36a0();
  /* 111e2baa lea ecx, [ebx + ebx*2] */
  ECX = ((uint32_t)(EBX + EBX*2));
  /* 111e2bad push eax */
  push32((uint32_t)(EAX));
  /* 111e2bae push ebp */
  push32((uint32_t)(EBP));
  /* 111e2baf mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 111e2bb3 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 111e2bb6 mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 111e2bba lea edx, [ecx + 0x111ed568] */
  EDX = ((uint32_t)(ECX + 0x111ed568));
  /* 111e2bc0 push edx */
  push32((uint32_t)(EDX));
  /* 111e2bc1 call 0x111e35a0 */
  push32(0x111e2bc6u); f_111e35a0();
  /* 111e2bc6 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 111e2bca mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 111e2bce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2bd1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e2bd2 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2bd5 mov byte ptr [eax + ecx + 0x111ed568], 0 */
  w8((uint32_t)(EAX + ECX*1 + 0x111ed568), (0x0u));
  /* 111e2bdd jl 0x111e2b6b */
  if ((C.sf!=C.of)) goto L_111e2b6b;
  /* 111e2bdf push edi */
  push32((uint32_t)(EDI));
  /* 111e2be0 call 0x111e3590 */
  push32(0x111e2be5u); f_111e3590();
  /* 111e2be5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e2be8:;
  /* 111e2be8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2bea call dword ptr [0x111e90ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90ec))), 0x111e2bf0u);
  /* 111e2bf0 mov ebp, dword ptr [0x111e9138] */
  EBP = (r32((uint32_t)(0x111e9138)));
  /* 111e2bf6 mov esi, dword ptr [0x111e914c] */
  ESI = (r32((uint32_t)(0x111e914c)));
  /* 111e2bfc mov ebx, dword ptr [0x111e90e8] */
  EBX = (r32((uint32_t)(0x111e90e8)));
  /* 111e2c02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2c05 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e2c07 je 0x111e2e5a */
  if (C.zf) goto L_111e2e5a;
  /* 111e2c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c0f push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2c11 call dword ptr [0x111e90f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90f4))), 0x111e2c17u);
  /* 111e2c17 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 111e2c1c push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2c1e call ebp */
  call_ind((uint32_t)(EBP), 0x111e2c20u);
  /* 111e2c20 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 111e2c22 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2c24 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2c26u);
  /* 111e2c26 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 111e2c28 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e2c2a call ebp */
  call_ind((uint32_t)(EBP), 0x111e2c2cu);
  /* 111e2c2c push 0x32 */
  push32((uint32_t)(0x32u));
  /* 111e2c2e push 4 */
  push32((uint32_t)(0x4u));
  /* 111e2c30 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2c32u);
  /* 111e2c32 mov edi, dword ptr [0x111e90f8] */
  EDI = (r32((uint32_t)(0x111e90f8)));
  /* 111e2c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c3a push 0x111ed990 */
  push32((uint32_t)(0x111ed990u));
  /* 111e2c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c41 call edi */
  call_ind((uint32_t)(EDI), 0x111e2c43u);
  /* 111e2c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c45 push 0x111edd68 */
  push32((uint32_t)(0x111edd68u));
  /* 111e2c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c4c call edi */
  call_ind((uint32_t)(EDI), 0x111e2c4eu);
  /* 111e2c4e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c53 push 0x111ed648 */
  push32((uint32_t)(0x111ed648u));
  /* 111e2c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c5a call edi */
  call_ind((uint32_t)(EDI), 0x111e2c5cu);
  /* 111e2c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c5e push 0x111edd00 */
  push32((uint32_t)(0x111edd00u));
  /* 111e2c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c65 call edi */
  call_ind((uint32_t)(EDI), 0x111e2c67u);
  /* 111e2c67 mov edi, dword ptr [0x111e90f0] */
  EDI = (r32((uint32_t)(0x111e90f0)));
  /* 111e2c6d push 0x111ed550 */
  push32((uint32_t)(0x111ed550u));
  /* 111e2c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c74 call edi */
  call_ind((uint32_t)(EDI), 0x111e2c76u);
  /* 111e2c76 push 0x111ed548 */
  push32((uint32_t)(0x111ed548u));
  /* 111e2c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c7d call edi */
  call_ind((uint32_t)(EDI), 0x111e2c7fu);
  /* 111e2c7f push 0x111ed5b8 */
  push32((uint32_t)(0x111ed5b8u));
  /* 111e2c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c86 call edi */
  call_ind((uint32_t)(EDI), 0x111e2c88u);
  /* 111e2c88 push 0x111ed5b0 */
  push32((uint32_t)(0x111ed5b0u));
  /* 111e2c8d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c8f call edi */
  call_ind((uint32_t)(EDI), 0x111e2c91u);
  /* 111e2c91 push 0x111ed998 */
  push32((uint32_t)(0x111ed998u));
  /* 111e2c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2c98 call edi */
  call_ind((uint32_t)(EDI), 0x111e2c9au);
  /* 111e2c9a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2c9d push 0x111ed9d0 */
  push32((uint32_t)(0x111ed9d0u));
  /* 111e2ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2ca4 call edi */
  call_ind((uint32_t)(EDI), 0x111e2ca6u);
  /* 111e2ca6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2cab push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2cad push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2caf call esi */
  call_ind((uint32_t)(ESI), 0x111e2cb1u);
  /* 111e2cb1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2cb6 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e2cb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2cba call esi */
  call_ind((uint32_t)(ESI), 0x111e2cbcu);
  /* 111e2cbc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2cc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2cc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2cc5 call esi */
  call_ind((uint32_t)(ESI), 0x111e2cc7u);
  /* 111e2cc7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2ccc push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2cce push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2cd0 call esi */
  call_ind((uint32_t)(ESI), 0x111e2cd2u);
  /* 111e2cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2cd4 call ebx */
  call_ind((uint32_t)(EBX), 0x111e2cd6u);
  /* 111e2cd6 mov ecx, 5 */
  ECX = (0x5u);
  /* 111e2cdb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2cdd lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 111e2ce0 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 111e2ce3 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 111e2ce6 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 111e2ce9 push edx */
  push32((uint32_t)(EDX));
  /* 111e2cea push 4 */
  push32((uint32_t)(0x4u));
  /* 111e2cec push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2cee call esi */
  call_ind((uint32_t)(ESI), 0x111e2cf0u);
  /* 111e2cf0 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2cf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2cf5 call ebx */
  call_ind((uint32_t)(EBX), 0x111e2cf7u);
  /* 111e2cf7 mov ecx, 5 */
  ECX = (0x5u);
  /* 111e2cfc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e2cfe lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 111e2d01 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 111e2d04 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e2d07 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 111e2d0a push eax */
  push32((uint32_t)(EAX));
  /* 111e2d0b push 5 */
  push32((uint32_t)(0x5u));
  /* 111e2d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d0f call esi */
  call_ind((uint32_t)(ESI), 0x111e2d11u);
  /* 111e2d11 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d18 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2d1a call esi */
  call_ind((uint32_t)(ESI), 0x111e2d1cu);
  /* 111e2d1c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2d21 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e2d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2d25 call esi */
  call_ind((uint32_t)(ESI), 0x111e2d27u);
  /* 111e2d27 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2d2e push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2d30 call esi */
  call_ind((uint32_t)(ESI), 0x111e2d32u);
  /* 111e2d32 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2d39 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2d3b call esi */
  call_ind((uint32_t)(ESI), 0x111e2d3du);
  /* 111e2d3d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2d40 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2d45 push 4 */
  push32((uint32_t)(0x4u));
  /* 111e2d47 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2d49 call esi */
  call_ind((uint32_t)(ESI), 0x111e2d4bu);
  /* 111e2d4b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 111e2d50 push 5 */
  push32((uint32_t)(0x5u));
  /* 111e2d52 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2d54 call esi */
  call_ind((uint32_t)(ESI), 0x111e2d56u);
  /* 111e2d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d58 call ebx */
  call_ind((uint32_t)(EBX), 0x111e2d5au);
  /* 111e2d5a push eax */
  push32((uint32_t)(EAX));
  /* 111e2d5b push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2d5d push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d61 push 0x111ea4d0 */
  push32((uint32_t)(0x111ea4d0u));
  /* 111e2d66 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2d68 call dword ptr [0x111e9100] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9100))), 0x111e2d6eu);
  /* 111e2d6e add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2d71 mov ecx, 0x111ed240 */
  ECX = (0x111ed240u);
  /* 111e2d76 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e2d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d80 push 0x111ed670 */
  push32((uint32_t)(0x111ed670u));
  /* 111e2d85 push 0x111ea4c8 */
  push32((uint32_t)(0x111ea4c8u));
  /* 111e2d8a push 4 */
  push32((uint32_t)(0x4u));
  /* 111e2d8c push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2d8e push 0x111ed5d8 */
  push32((uint32_t)(0x111ed5d8u));
  /* 111e2d93 push 0x111ed568 */
  push32((uint32_t)(0x111ed568u));
  /* 111e2d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2d9c call 0x111e1020 */
  push32(0x111e2da1u); f_111e1020();
  /* 111e2da1 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e2da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2dab push 0x111ed670 */
  push32((uint32_t)(0x111ed670u));
  /* 111e2db0 push 0x111ea4c8 */
  push32((uint32_t)(0x111ea4c8u));
  /* 111e2db5 push 5 */
  push32((uint32_t)(0x5u));
  /* 111e2db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2db9 push 0x111ed5a0 */
  push32((uint32_t)(0x111ed5a0u));
  /* 111e2dbe push 0x111ed577 */
  push32((uint32_t)(0x111ed577u));
  /* 111e2dc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2dc7 mov ecx, 0x111ed9f0 */
  ECX = (0x111ed9f0u);
  /* 111e2dcc call 0x111e1020 */
  push32(0x111e2dd1u); f_111e1020();
  /* 111e2dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2dd9 push 0x111ed9f0 */
  push32((uint32_t)(0x111ed9f0u));
  /* 111e2dde push 0x111ed240 */
  push32((uint32_t)(0x111ed240u));
  /* 111e2de3 push 0x111ea4bc */
  push32((uint32_t)(0x111ea4bcu));
  /* 111e2de8 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e2dea push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2dec push 0x111ed620 */
  push32((uint32_t)(0x111ed620u));
  /* 111e2df1 push 0x111ed586 */
  push32((uint32_t)(0x111ed586u));
  /* 111e2df6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2df8 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2dfa mov ecx, 0x111ed670 */
  ECX = (0x111ed670u);
  /* 111e2dff call 0x111e1020 */
  push32(0x111e2e04u); f_111e1020();
  /* 111e2e04 push 0x111ea4b4 */
  push32((uint32_t)(0x111ea4b4u));
  /* 111e2e09 call dword ptr [0x111e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9160))), 0x111e2e0fu);
  /* 111e2e0f mov edi, dword ptr [0x111e9104] */
  EDI = (r32((uint32_t)(0x111e9104)));
  /* 111e2e15 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e2e17 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2e19 push 0x111ed5d8 */
  push32((uint32_t)(0x111ed5d8u));
  /* 111e2e1e call edi */
  call_ind((uint32_t)(EDI), 0x111e2e20u);
  /* 111e2e20 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2e22 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2e24 push 0x111ed5a0 */
  push32((uint32_t)(0x111ed5a0u));
  /* 111e2e29 call edi */
  call_ind((uint32_t)(EDI), 0x111e2e2bu);
  /* 111e2e2b mov edi, dword ptr [0x111e90fc] */
  EDI = (r32((uint32_t)(0x111e90fc)));
  /* 111e2e31 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 111e2e33 call edi */
  call_ind((uint32_t)(EDI), 0x111e2e35u);
  /* 111e2e35 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 111e2e37 call dword ptr [0x111e910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e910c))), 0x111e2e3du);
  /* 111e2e3d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 111e2e3f call dword ptr [0x111e910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e910c))), 0x111e2e45u);
  /* 111e2e45 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 111e2e47 call dword ptr [0x111e910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e910c))), 0x111e2e4du);
  /* 111e2e4d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 111e2e4f call edi */
  call_ind((uint32_t)(EDI), 0x111e2e51u);
  /* 111e2e51 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111e2e53 call edi */
  call_ind((uint32_t)(EDI), 0x111e2e55u);
  /* 111e2e55 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2e58 jmp 0x111e2e60 */
  goto L_111e2e60;
L_111e2e5a:;
  /* 111e2e5a mov edi, dword ptr [0x111e90fc] */
  EDI = (r32((uint32_t)(0x111e90fc)));
L_111e2e60:;
  /* 111e2e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2e68 push 0x111ed670 */
  push32((uint32_t)(0x111ed670u));
  /* 111e2e6d push 0x111ea4c8 */
  push32((uint32_t)(0x111ea4c8u));
  /* 111e2e72 push 0x111ed5d8 */
  push32((uint32_t)(0x111ed5d8u));
  /* 111e2e77 mov ecx, 0x111ed240 */
  ECX = (0x111ed240u);
  /* 111e2e7c mov dword ptr [0x111ea040], 0x111ed240 */
  w32((uint32_t)(0x111ea040), (0x111ed240u));
  /* 111e2e86 mov dword ptr [0x111ea044], 0x111ed9f0 */
  w32((uint32_t)(0x111ea044), (0x111ed9f0u));
  /* 111e2e90 mov dword ptr [0x111ea048], 0x111ed670 */
  w32((uint32_t)(0x111ea048), (0x111ed670u));
  /* 111e2e9a call 0x111e11d0 */
  push32(0x111e2e9fu); f_111e11d0();
  /* 111e2e9f push 0x111ed600 */
  push32((uint32_t)(0x111ed600u));
  /* 111e2ea4 call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e2eaau);
  /* 111e2eaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2ead cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2eb0 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 111e2eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 111e2eb4 push 0x111ed668 */
  push32((uint32_t)(0x111ed668u));
  /* 111e2eb9 call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e2ebfu);
  /* 111e2ebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2ec2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2ec5 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 111e2ec8 push edx */
  push32((uint32_t)(EDX));
  /* 111e2ec9 push 0x111ed558 */
  push32((uint32_t)(0x111ed558u));
  /* 111e2ece call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e2ed4u);
  /* 111e2ed4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2ed7 mov ecx, 0x111ed240 */
  ECX = (0x111ed240u);
  /* 111e2edc push eax */
  push32((uint32_t)(EAX));
  /* 111e2edd call 0x111e2090 */
  push32(0x111e2ee2u); f_111e2090();
  /* 111e2ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2ee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2eea push 0x111ed670 */
  push32((uint32_t)(0x111ed670u));
  /* 111e2eef push 0x111ea4c8 */
  push32((uint32_t)(0x111ea4c8u));
  /* 111e2ef4 push 0x111ed5a0 */
  push32((uint32_t)(0x111ed5a0u));
  /* 111e2ef9 mov ecx, 0x111ed9f0 */
  ECX = (0x111ed9f0u);
  /* 111e2efe call 0x111e11d0 */
  push32(0x111e2f03u); f_111e11d0();
  /* 111e2f03 push 0x111ed540 */
  push32((uint32_t)(0x111ed540u));
  /* 111e2f08 call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e2f0eu);
  /* 111e2f0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2f11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2f14 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 111e2f17 push eax */
  push32((uint32_t)(EAX));
  /* 111e2f18 push 0x111edcf0 */
  push32((uint32_t)(0x111edcf0u));
  /* 111e2f1d call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e2f23u);
  /* 111e2f23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2f26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e2f29 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 111e2f2c push ecx */
  push32((uint32_t)(ECX));
  /* 111e2f2d push 0x111ed5f0 */
  push32((uint32_t)(0x111ed5f0u));
  /* 111e2f32 call dword ptr [0x111e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9170))), 0x111e2f38u);
  /* 111e2f38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2f3b mov ecx, 0x111ed9f0 */
  ECX = (0x111ed9f0u);
  /* 111e2f40 push eax */
  push32((uint32_t)(EAX));
  /* 111e2f41 call 0x111e2090 */
  push32(0x111e2f46u); f_111e2090();
  /* 111e2f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2f4c push 0x111ed9f0 */
  push32((uint32_t)(0x111ed9f0u));
  /* 111e2f51 push 0x111ed240 */
  push32((uint32_t)(0x111ed240u));
  /* 111e2f56 push 0x111ea4bc */
  push32((uint32_t)(0x111ea4bcu));
  /* 111e2f5b push 0x111ed620 */
  push32((uint32_t)(0x111ed620u));
  /* 111e2f60 mov ecx, 0x111ed670 */
  ECX = (0x111ed670u);
  /* 111e2f65 call 0x111e11d0 */
  push32(0x111e2f6au); f_111e11d0();
  /* 111e2f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2f6c mov ecx, 0x111ed240 */
  ECX = (0x111ed240u);
  /* 111e2f71 call 0x111e1510 */
  push32(0x111e2f76u); f_111e1510();
  /* 111e2f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2f78 mov ecx, 0x111ed9f0 */
  ECX = (0x111ed9f0u);
  /* 111e2f7d call 0x111e1510 */
  push32(0x111e2f82u); f_111e1510();
  /* 111e2f82 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2f84 call dword ptr [0x111e913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e913c))), 0x111e2f8au);
  /* 111e2f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2f8d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e2f8f je 0x111e2fa8 */
  if (C.zf) goto L_111e2fa8;
  /* 111e2f91 mov ecx, 0x111ed240 */
  ECX = (0x111ed240u);
  /* 111e2f96 call 0x111e1ac0 */
  push32(0x111e2f9bu); f_111e1ac0();
  /* 111e2f9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e2f9d je 0x111e2fa8 */
  if (C.zf) goto L_111e2fa8;
  /* 111e2f9f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 111e2fa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e2fa3 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2fa5u);
  /* 111e2fa5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e2fa8:;
  /* 111e2fa8 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e2faa call dword ptr [0x111e913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e913c))), 0x111e2fb0u);
  /* 111e2fb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2fb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e2fb5 je 0x111e2fce */
  if (C.zf) goto L_111e2fce;
  /* 111e2fb7 mov ecx, 0x111ed9f0 */
  ECX = (0x111ed9f0u);
  /* 111e2fbc call 0x111e1ac0 */
  push32(0x111e2fc1u); f_111e1ac0();
  /* 111e2fc1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e2fc3 je 0x111e2fce */
  if (C.zf) goto L_111e2fce;
  /* 111e2fc5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 111e2fc7 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e2fc9 call ebp */
  call_ind((uint32_t)(EBP), 0x111e2fcbu);
  /* 111e2fcb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e2fce:;
  /* 111e2fce push 4 */
  push32((uint32_t)(0x4u));
  /* 111e2fd0 call dword ptr [0x111e913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e913c))), 0x111e2fd6u);
  /* 111e2fd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e2fd9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e2fdb je 0x111e2ff4 */
  if (C.zf) goto L_111e2ff4;
  /* 111e2fdd mov ecx, 0x111ed670 */
  ECX = (0x111ed670u);
  /* 111e2fe2 call 0x111e1ac0 */
  push32(0x111e2fe7u); f_111e1ac0();
  /* 111e2fe7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e2fe9 je 0x111e2ff4 */
  if (C.zf) goto L_111e2ff4;
  /* 111e2feb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 111e2fed push 4 */
  push32((uint32_t)(0x4u));
  /* 111e2fef call ebp */
  call_ind((uint32_t)(EBP), 0x111e2ff1u);
  /* 111e2ff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e2ff4:;
  /* 111e2ff4 push 0x111ed5d8 */
  push32((uint32_t)(0x111ed5d8u));
  /* 111e2ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e2ffb call ebx */
  call_ind((uint32_t)(EBX), 0x111e2ffdu);
  /* 111e2ffd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3000 lea edx, [eax + eax*2 + 5] */
  EDX = ((uint32_t)(EAX + EAX*2 + 0x5));
  /* 111e3004 mov ecx, 0x111edd70 */
  ECX = (0x111edd70u);
  /* 111e3009 push edx */
  push32((uint32_t)(EDX));
  /* 111e300a call 0x111e23c0 */
  push32(0x111e300fu); f_111e23c0();
  /* 111e300f push 0x111ed5a0 */
  push32((uint32_t)(0x111ed5a0u));
  /* 111e3014 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3016 call ebx */
  call_ind((uint32_t)(EBX), 0x111e3018u);
  /* 111e3018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e301b lea eax, [eax + eax*2 + 5] */
  EAX = ((uint32_t)(EAX + EAX*2 + 0x5));
  /* 111e301f mov ecx, 0x111eddb0 */
  ECX = (0x111eddb0u);
  /* 111e3024 push eax */
  push32((uint32_t)(EAX));
  /* 111e3025 call 0x111e23c0 */
  push32(0x111e302au); f_111e23c0();
  /* 111e302a push 0x111ed9b0 */
  push32((uint32_t)(0x111ed9b0u));
  /* 111e302f push 0x111ed5c8 */
  push32((uint32_t)(0x111ed5c8u));
  /* 111e3034 push 0x111ed5e0 */
  push32((uint32_t)(0x111ed5e0u));
  /* 111e3039 push 0x111ed5d0 */
  push32((uint32_t)(0x111ed5d0u));
  /* 111e303e mov ecx, 0x111edd70 */
  ECX = (0x111edd70u);
  /* 111e3043 call 0x111e2270 */
  push32(0x111e3048u); f_111e2270();
  /* 111e3048 push 0x111ed238 */
  push32((uint32_t)(0x111ed238u));
  /* 111e304d push 0x111ed610 */
  push32((uint32_t)(0x111ed610u));
  /* 111e3052 push 0x111ed608 */
  push32((uint32_t)(0x111ed608u));
  /* 111e3057 push 0x111ed618 */
  push32((uint32_t)(0x111ed618u));
  /* 111e305c mov ecx, 0x111eddb0 */
  ECX = (0x111eddb0u);
  /* 111e3061 call 0x111e2270 */
  push32(0x111e3066u); f_111e2270();
  /* 111e3066 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e3068 call dword ptr [0x111e913c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e913c))), 0x111e306eu);
  /* 111e306e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3071 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e3073 je 0x111e30a0 */
  if (C.zf) goto L_111e30a0;
  /* 111e3075 mov ecx, 0x111ed240 */
  ECX = (0x111ed240u);
  /* 111e307a call 0x111e1220 */
  push32(0x111e307fu); f_111e1220();
  /* 111e307f mov ecx, 0x111ed9f0 */
  ECX = (0x111ed9f0u);
  /* 111e3084 call 0x111e1220 */
  push32(0x111e3089u); f_111e1220();
  /* 111e3089 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e308b call ebx */
  call_ind((uint32_t)(EBX), 0x111e308du);
  /* 111e308d add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3090 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e3093 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 111e3096 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 111e3098 push ecx */
  push32((uint32_t)(ECX));
  /* 111e3099 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e309b call ebp */
  call_ind((uint32_t)(EBP), 0x111e309du);
  /* 111e309d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e30a0:;
  /* 111e30a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e30a2 call dword ptr [0x111e90ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90ec))), 0x111e30a8u);
  /* 111e30a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e30ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e30ad je 0x111e3122 */
  if (C.zf) goto L_111e3122;
  /* 111e30af push 0 */
  push32((uint32_t)(0x0u));
  /* 111e30b1 push 0x111ed988 */
  push32((uint32_t)(0x111ed988u));
  /* 111e30b6 push 0x111ed628 */
  push32((uint32_t)(0x111ed628u));
  /* 111e30bb call dword ptr [0x111e915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e915c))), 0x111e30c1u);
  /* 111e30c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e30c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e30c6 je 0x111e3122 */
  if (C.zf) goto L_111e3122;
  /* 111e30c8 mov ebp, dword ptr [0x111e90f4] */
  EBP = (r32((uint32_t)(0x111e90f4)));
  /* 111e30ce push 0 */
  push32((uint32_t)(0x0u));
  /* 111e30d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e30d2 call ebp */
  call_ind((uint32_t)(EBP), 0x111e30d4u);
  /* 111e30d4 push 0x111ea4ac */
  push32((uint32_t)(0x111ea4acu));
  /* 111e30d9 call dword ptr [0x111e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9160))), 0x111e30dfu);
  /* 111e30df push 0x43 */
  push32((uint32_t)(0x43u));
  /* 111e30e1 call edi */
  call_ind((uint32_t)(EDI), 0x111e30e3u);
  /* 111e30e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e30e6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 111e30e8 push 0xa */
  push32((uint32_t)(0xau));
  /* 111e30ea push 0 */
  push32((uint32_t)(0x0u));
  /* 111e30ec call ebx */
  call_ind((uint32_t)(EBX), 0x111e30eeu);
  /* 111e30ee mov ecx, 5 */
  ECX = (0x5u);
  /* 111e30f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e30f6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e30f8 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 111e30fb mov ecx, 0x111edd70 */
  ECX = (0x111edd70u);
  /* 111e3100 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e3103 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 111e3106 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 111e3109 push edx */
  push32((uint32_t)(EDX));
  /* 111e310a push 5 */
  push32((uint32_t)(0x5u));
  /* 111e310c push 0x111ed9b8 */
  push32((uint32_t)(0x111ed9b8u));
  /* 111e3111 push 0x111ed9c8 */
  push32((uint32_t)(0x111ed9c8u));
  /* 111e3116 push 0x111ed9c0 */
  push32((uint32_t)(0x111ed9c0u));
  /* 111e311b call 0x111e21a0 */
  push32(0x111e3120u); f_111e21a0();
  /* 111e3120 jmp 0x111e3128 */
  goto L_111e3128;
L_111e3122:;
  /* 111e3122 mov ebp, dword ptr [0x111e90f4] */
  EBP = (r32((uint32_t)(0x111e90f4)));
L_111e3128:;
  /* 111e3128 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e312a call dword ptr [0x111e90ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90ec))), 0x111e3130u);
  /* 111e3130 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3133 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e3135 je 0x111e31a2 */
  if (C.zf) goto L_111e31a2;
  /* 111e3137 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3139 push 0x111ed988 */
  push32((uint32_t)(0x111ed988u));
  /* 111e313e push 0x111ed9a0 */
  push32((uint32_t)(0x111ed9a0u));
  /* 111e3143 call dword ptr [0x111e915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e915c))), 0x111e3149u);
  /* 111e3149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e314c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e314e je 0x111e31a2 */
  if (C.zf) goto L_111e31a2;
  /* 111e3150 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3152 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e3154 call ebp */
  call_ind((uint32_t)(EBP), 0x111e3156u);
  /* 111e3156 push 0x111ea4a4 */
  push32((uint32_t)(0x111ea4a4u));
  /* 111e315b call dword ptr [0x111e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9160))), 0x111e3161u);
  /* 111e3161 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 111e3163 call edi */
  call_ind((uint32_t)(EDI), 0x111e3165u);
  /* 111e3165 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3168 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 111e316a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 111e316c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e316e call ebx */
  call_ind((uint32_t)(EBX), 0x111e3170u);
  /* 111e3170 mov ecx, 5 */
  ECX = (0x5u);
  /* 111e3175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3178 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e317a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 111e317d mov ecx, 0x111eddb0 */
  ECX = (0x111eddb0u);
  /* 111e3182 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e3185 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e3188 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 111e318b push eax */
  push32((uint32_t)(EAX));
  /* 111e318c push 5 */
  push32((uint32_t)(0x5u));
  /* 111e318e push 0x111ed9d8 */
  push32((uint32_t)(0x111ed9d8u));
  /* 111e3193 push 0x111ed9e8 */
  push32((uint32_t)(0x111ed9e8u));
  /* 111e3198 push 0x111ed9e0 */
  push32((uint32_t)(0x111ed9e0u));
  /* 111e319d call 0x111e21a0 */
  push32(0x111e31a2u); f_111e21a0();
L_111e31a2:;
  /* 111e31a2 mov ebx, dword ptr [0x111e90ec] */
  EBX = (r32((uint32_t)(0x111e90ec)));
  /* 111e31a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 111e31aa call ebx */
  call_ind((uint32_t)(EBX), 0x111e31acu);
  /* 111e31ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e31af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e31b1 je 0x111e31de */
  if (C.zf) goto L_111e31de;
  /* 111e31b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e31b5 call ebx */
  call_ind((uint32_t)(EBX), 0x111e31b7u);
  /* 111e31b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e31ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e31bc jne 0x111e31de */
  if (!C.zf) goto L_111e31de;
  /* 111e31be push 3 */
  push32((uint32_t)(0x3u));
  /* 111e31c0 call ebx */
  call_ind((uint32_t)(EBX), 0x111e31c2u);
  /* 111e31c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e31c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e31c7 jne 0x111e31de */
  if (!C.zf) goto L_111e31de;
  /* 111e31c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e31cb push 4 */
  push32((uint32_t)(0x4u));
  /* 111e31cd call ebp */
  call_ind((uint32_t)(EBP), 0x111e31cfu);
  /* 111e31cf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 111e31d1 call dword ptr [0x111e910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e910c))), 0x111e31d7u);
  /* 111e31d7 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 111e31d9 call edi */
  call_ind((uint32_t)(EDI), 0x111e31dbu);
  /* 111e31db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e31de:;
  /* 111e31de mov edi, dword ptr [0x111e9110] */
  EDI = (r32((uint32_t)(0x111e9110)));
  /* 111e31e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e31e6 call edi */
  call_ind((uint32_t)(EDI), 0x111e31e8u);
  /* 111e31e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e31eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e31ed je 0x111e3203 */
  if (C.zf) goto L_111e3203;
  /* 111e31ef push 0x111ea49c */
  push32((uint32_t)(0x111ea49cu));
  /* 111e31f4 call dword ptr [0x111e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9160))), 0x111e31fau);
  /* 111e31fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e31fd call dword ptr [0x111e9108] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9108))), 0x111e3203u);
L_111e3203:;
  /* 111e3203 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3205 call edi */
  call_ind((uint32_t)(EDI), 0x111e3207u);
  /* 111e3207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e320a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e320c je 0x111e3222 */
  if (C.zf) goto L_111e3222;
  /* 111e320e push 0x111ea494 */
  push32((uint32_t)(0x111ea494u));
  /* 111e3213 call dword ptr [0x111e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9160))), 0x111e3219u);
  /* 111e3219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e321c call dword ptr [0x111e9118] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9118))), 0x111e3222u);
L_111e3222:;
  /* 111e3222 mov edi, dword ptr [0x111e9148] */
  EDI = (r32((uint32_t)(0x111e9148)));
  /* 111e3228 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e322a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e322c call edi */
  call_ind((uint32_t)(EDI), 0x111e322eu);
  /* 111e322e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3231 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3236 jle 0x111e3246 */
  if ((C.zf||C.sf!=C.of)) goto L_111e3246;
  /* 111e3238 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 111e323d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e323f push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3241 call esi */
  call_ind((uint32_t)(ESI), 0x111e3243u);
  /* 111e3243 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e3246:;
  /* 111e3246 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e3248 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e324a call edi */
  call_ind((uint32_t)(EDI), 0x111e324cu);
  /* 111e324c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e324f cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3254 jle 0x111e3264 */
  if ((C.zf||C.sf!=C.of)) goto L_111e3264;
  /* 111e3256 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 111e325b push 3 */
  push32((uint32_t)(0x3u));
  /* 111e325d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e325f call esi */
  call_ind((uint32_t)(ESI), 0x111e3261u);
  /* 111e3261 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e3264:;
  /* 111e3264 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3266 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3268 call edi */
  call_ind((uint32_t)(EDI), 0x111e326au);
  /* 111e326a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e326d cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3272 jle 0x111e3282 */
  if ((C.zf||C.sf!=C.of)) goto L_111e3282;
  /* 111e3274 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 111e3279 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e327b push 0 */
  push32((uint32_t)(0x0u));
  /* 111e327d call esi */
  call_ind((uint32_t)(ESI), 0x111e327fu);
  /* 111e327f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e3282:;
  /* 111e3282 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e3284 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3286 call edi */
  call_ind((uint32_t)(EDI), 0x111e3288u);
  /* 111e3288 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e328b cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3290 jle 0x111e32a0 */
  if ((C.zf||C.sf!=C.of)) goto L_111e32a0;
  /* 111e3292 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 111e3297 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e3299 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e329b call esi */
  call_ind((uint32_t)(ESI), 0x111e329du);
  /* 111e329d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e32a0:;
  /* 111e32a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 111e32a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e32a4 call edi */
  call_ind((uint32_t)(EDI), 0x111e32a6u);
  /* 111e32a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e32a9 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e32ae jle 0x111e32be */
  if ((C.zf||C.sf!=C.of)) goto L_111e32be;
  /* 111e32b0 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 111e32b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 111e32b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e32b9 call esi */
  call_ind((uint32_t)(ESI), 0x111e32bbu);
  /* 111e32bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e32be:;
  /* 111e32be push 5 */
  push32((uint32_t)(0x5u));
  /* 111e32c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e32c2 call edi */
  call_ind((uint32_t)(EDI), 0x111e32c4u);
  /* 111e32c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e32c7 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e32cc jle 0x111e32dc */
  if ((C.zf||C.sf!=C.of)) goto L_111e32dc;
  /* 111e32ce push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 111e32d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 111e32d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e32d7 call esi */
  call_ind((uint32_t)(ESI), 0x111e32d9u);
  /* 111e32d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e32dc:;
  /* 111e32dc pop edi */
  EDI = (pop32());
  /* 111e32dd pop esi */
  ESI = (pop32());
  /* 111e32de pop ebp */
  EBP = (pop32());
  /* 111e32df pop ebx */
  EBX = (pop32());
  /* 111e32e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e32e3 ret  */
  ESPCHK(0x111e2910u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x111e32f0 (662 bytes, 240 insns) */
void f_111e32f0(void) {
  FTRACE(0x111e32f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e32f0 push esi */
  push32((uint32_t)(ESI));
  /* 111e32f1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e32f5 push edi */
  push32((uint32_t)(EDI));
  /* 111e32f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e32f8 push esi */
  push32((uint32_t)(ESI));
  /* 111e32f9 call dword ptr [0x111e9158] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9158))), 0x111e32ffu);
  /* 111e32ff mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 111e3302 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 111e3306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3309 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e330c je 0x111e331f */
  if (C.zf) goto L_111e331f;
  /* 111e330e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e330f je 0x111e33d7 */
  if (C.zf) goto L_111e33d7;
  /* 111e3315 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e3316 je 0x111e344a */
  if (C.zf) goto L_111e344a;
  /* 111e331c pop edi */
  EDI = (pop32());
  /* 111e331d pop esi */
  ESI = (pop32());
  /* 111e331e ret  */
  ESPCHK(0x111e32f0u, _esp0);
  ESP += 4; return;
L_111e331f:;
  /* 111e331f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3322 jne 0x111e344a */
  if (!C.zf) goto L_111e344a;
  /* 111e3328 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e332b mov edi, dword ptr [0x111e9154] */
  EDI = (r32((uint32_t)(0x111e9154)));
  /* 111e3331 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3333 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111e3335 push 0x111ed660 */
  push32((uint32_t)(0x111ed660u));
  /* 111e333a push eax */
  push32((uint32_t)(EAX));
  /* 111e333b call edi */
  call_ind((uint32_t)(EDI), 0x111e333du);
  /* 111e333d mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e3340 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3342 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111e3344 push 0x111ed658 */
  push32((uint32_t)(0x111ed658u));
  /* 111e3349 push ecx */
  push32((uint32_t)(ECX));
  /* 111e334a call edi */
  call_ind((uint32_t)(EDI), 0x111e334cu);
  /* 111e334c mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e334f push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3351 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111e3353 push 0x111ed650 */
  push32((uint32_t)(0x111ed650u));
  /* 111e3358 push edx */
  push32((uint32_t)(EDX));
  /* 111e3359 call edi */
  call_ind((uint32_t)(EDI), 0x111e335bu);
  /* 111e335b mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e335e push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3360 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 111e3362 push 0x111ed640 */
  push32((uint32_t)(0x111ed640u));
  /* 111e3367 push eax */
  push32((uint32_t)(EAX));
  /* 111e3368 call edi */
  call_ind((uint32_t)(EDI), 0x111e336au);
  /* 111e336a mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e336d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3370 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3372 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 111e3374 push 0x111ed638 */
  push32((uint32_t)(0x111ed638u));
  /* 111e3379 push ecx */
  push32((uint32_t)(ECX));
  /* 111e337a call edi */
  call_ind((uint32_t)(EDI), 0x111e337cu);
  /* 111e337c mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e337f push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3381 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 111e3383 push 0x111ed630 */
  push32((uint32_t)(0x111ed630u));
  /* 111e3388 push edx */
  push32((uint32_t)(EDX));
  /* 111e3389 call edi */
  call_ind((uint32_t)(EDI), 0x111e338bu);
  /* 111e338b mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e338e push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3390 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111e3392 push 0x111ed980 */
  push32((uint32_t)(0x111ed980u));
  /* 111e3397 push eax */
  push32((uint32_t)(EAX));
  /* 111e3398 call edi */
  call_ind((uint32_t)(EDI), 0x111e339au);
  /* 111e339a mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e339d push 2 */
  push32((uint32_t)(0x2u));
  /* 111e339f push 0x60 */
  push32((uint32_t)(0x60u));
  /* 111e33a1 push 0x111ed978 */
  push32((uint32_t)(0x111ed978u));
  /* 111e33a6 push ecx */
  push32((uint32_t)(ECX));
  /* 111e33a7 call edi */
  call_ind((uint32_t)(EDI), 0x111e33a9u);
  /* 111e33a9 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e33ac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e33af push 2 */
  push32((uint32_t)(0x2u));
  /* 111e33b1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 111e33b3 push 0x111ed970 */
  push32((uint32_t)(0x111ed970u));
  /* 111e33b8 push edx */
  push32((uint32_t)(EDX));
  /* 111e33b9 call edi */
  call_ind((uint32_t)(EDI), 0x111e33bbu);
  /* 111e33bb mov eax, dword ptr [0x111ea048] */
  EAX = (r32((uint32_t)(0x111ea048)));
  /* 111e33c0 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e33c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e33c5 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 111e33c7 mov ecx, dword ptr [eax + 0x2ab] */
  ECX = (r32((uint32_t)(EAX + 0x2ab)));
  /* 111e33cd push ecx */
  push32((uint32_t)(ECX));
  /* 111e33ce push edx */
  push32((uint32_t)(EDX));
  /* 111e33cf call edi */
  call_ind((uint32_t)(EDI), 0x111e33d1u);
  /* 111e33d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e33d4 pop edi */
  EDI = (pop32());
  /* 111e33d5 pop esi */
  ESI = (pop32());
  /* 111e33d6 ret  */
  ESPCHK(0x111e32f0u, _esp0);
  ESP += 4; return;
L_111e33d7:;
  /* 111e33d7 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e33da jne 0x111e344a */
  if (!C.zf) goto L_111e344a;
  /* 111e33dc mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e33df mov edi, dword ptr [0x111e9154] */
  EDI = (r32((uint32_t)(0x111e9154)));
  /* 111e33e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e33e7 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 111e33ec push 0x111ed228 */
  push32((uint32_t)(0x111ed228u));
  /* 111e33f1 push eax */
  push32((uint32_t)(EAX));
  /* 111e33f2 call edi */
  call_ind((uint32_t)(EDI), 0x111e33f4u);
  /* 111e33f4 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e33f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e33f9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 111e33fe push 0x111ed230 */
  push32((uint32_t)(0x111ed230u));
  /* 111e3403 push ecx */
  push32((uint32_t)(ECX));
  /* 111e3404 call edi */
  call_ind((uint32_t)(EDI), 0x111e3406u);
  /* 111e3406 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e3409 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e340b push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 111e3410 push 0x111ed218 */
  push32((uint32_t)(0x111ed218u));
  /* 111e3415 push edx */
  push32((uint32_t)(EDX));
  /* 111e3416 call edi */
  call_ind((uint32_t)(EDI), 0x111e3418u);
  /* 111e3418 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e341b push 2 */
  push32((uint32_t)(0x2u));
  /* 111e341d push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 111e3422 push 0x111ed220 */
  push32((uint32_t)(0x111ed220u));
  /* 111e3427 push eax */
  push32((uint32_t)(EAX));
  /* 111e3428 call edi */
  call_ind((uint32_t)(EDI), 0x111e342au);
  /* 111e342a mov ecx, dword ptr [0x111ea048] */
  ECX = (r32((uint32_t)(0x111ea048)));
  /* 111e3430 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e3433 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3436 mov edx, dword ptr [ecx + 0x2ab] */
  EDX = (r32((uint32_t)(ECX + 0x2ab)));
  /* 111e343c push 2 */
  push32((uint32_t)(0x2u));
  /* 111e343e push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3440 push edx */
  push32((uint32_t)(EDX));
  /* 111e3441 push eax */
  push32((uint32_t)(EAX));
  /* 111e3442 call edi */
  call_ind((uint32_t)(EDI), 0x111e3444u);
  /* 111e3444 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3447 pop edi */
  EDI = (pop32());
  /* 111e3448 pop esi */
  ESI = (pop32());
  /* 111e3449 ret  */
  ESPCHK(0x111e32f0u, _esp0);
  ESP += 4; return;
L_111e344a:;
  /* 111e344a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111e344c jne 0x111e351f */
  if (!C.zf) goto L_111e351f;
  /* 111e3452 mov edi, dword ptr [0x111e9154] */
  EDI = (r32((uint32_t)(0x111e9154)));
  /* 111e3458 push ecx */
  push32((uint32_t)(ECX));
  /* 111e3459 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e345c push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 111e3461 push 0x111ed970 */
  push32((uint32_t)(0x111ed970u));
  /* 111e3466 push ecx */
  push32((uint32_t)(ECX));
  /* 111e3467 call edi */
  call_ind((uint32_t)(EDI), 0x111e3469u);
  /* 111e3469 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e346c push 2 */
  push32((uint32_t)(0x2u));
  /* 111e346e push 0x90 */
  push32((uint32_t)(0x90u));
  /* 111e3473 push 0x111ed978 */
  push32((uint32_t)(0x111ed978u));
  /* 111e3478 push edx */
  push32((uint32_t)(EDX));
  /* 111e3479 call edi */
  call_ind((uint32_t)(EDI), 0x111e347bu);
  /* 111e347b mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e347e push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3480 push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 111e3485 push 0x111ed980 */
  push32((uint32_t)(0x111ed980u));
  /* 111e348a push eax */
  push32((uint32_t)(EAX));
  /* 111e348b call edi */
  call_ind((uint32_t)(EDI), 0x111e348du);
  /* 111e348d mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e3490 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3492 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 111e3497 push 0x111ed630 */
  push32((uint32_t)(0x111ed630u));
  /* 111e349c push ecx */
  push32((uint32_t)(ECX));
  /* 111e349d call edi */
  call_ind((uint32_t)(EDI), 0x111e349fu);
  /* 111e349f mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e34a2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e34a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e34a7 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 111e34ac push 0x111ed638 */
  push32((uint32_t)(0x111ed638u));
  /* 111e34b1 push edx */
  push32((uint32_t)(EDX));
  /* 111e34b2 call edi */
  call_ind((uint32_t)(EDI), 0x111e34b4u);
  /* 111e34b4 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e34b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e34b9 push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 111e34be push 0x111ed640 */
  push32((uint32_t)(0x111ed640u));
  /* 111e34c3 push eax */
  push32((uint32_t)(EAX));
  /* 111e34c4 call edi */
  call_ind((uint32_t)(EDI), 0x111e34c6u);
  /* 111e34c6 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e34c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e34cb push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 111e34d0 push 0x111ed650 */
  push32((uint32_t)(0x111ed650u));
  /* 111e34d5 push ecx */
  push32((uint32_t)(ECX));
  /* 111e34d6 call edi */
  call_ind((uint32_t)(EDI), 0x111e34d8u);
  /* 111e34d8 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e34db push 2 */
  push32((uint32_t)(0x2u));
  /* 111e34dd push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 111e34e2 push 0x111ed658 */
  push32((uint32_t)(0x111ed658u));
  /* 111e34e7 push edx */
  push32((uint32_t)(EDX));
  /* 111e34e8 call edi */
  call_ind((uint32_t)(EDI), 0x111e34eau);
  /* 111e34ea mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e34ed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e34f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e34f2 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 111e34f7 push 0x111ed660 */
  push32((uint32_t)(0x111ed660u));
  /* 111e34fc push eax */
  push32((uint32_t)(EAX));
  /* 111e34fd call edi */
  call_ind((uint32_t)(EDI), 0x111e34ffu);
  /* 111e34ff mov ecx, dword ptr [0x111ea040] */
  ECX = (r32((uint32_t)(0x111ea040)));
  /* 111e3505 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e3508 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e350a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 111e350f mov edx, dword ptr [ecx + 0x2ab] */
  EDX = (r32((uint32_t)(ECX + 0x2ab)));
  /* 111e3515 push edx */
  push32((uint32_t)(EDX));
  /* 111e3516 push eax */
  push32((uint32_t)(EAX));
  /* 111e3517 call edi */
  call_ind((uint32_t)(EDI), 0x111e3519u);
  /* 111e3519 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e351c pop edi */
  EDI = (pop32());
  /* 111e351d pop esi */
  ESI = (pop32());
  /* 111e351e ret  */
  ESPCHK(0x111e32f0u, _esp0);
  ESP += 4; return;
L_111e351f:;
  /* 111e351f cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3522 jne 0x111e3583 */
  if (!C.zf) goto L_111e3583;
  /* 111e3524 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e3527 mov edi, dword ptr [0x111e9154] */
  EDI = (r32((uint32_t)(0x111e9154)));
  /* 111e352d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e352f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111e3531 push 0x111ed220 */
  push32((uint32_t)(0x111ed220u));
  /* 111e3536 push ecx */
  push32((uint32_t)(ECX));
  /* 111e3537 call edi */
  call_ind((uint32_t)(EDI), 0x111e3539u);
  /* 111e3539 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e353c push 2 */
  push32((uint32_t)(0x2u));
  /* 111e353e push 0x46 */
  push32((uint32_t)(0x46u));
  /* 111e3540 push 0x111ed218 */
  push32((uint32_t)(0x111ed218u));
  /* 111e3545 push edx */
  push32((uint32_t)(EDX));
  /* 111e3546 call edi */
  call_ind((uint32_t)(EDI), 0x111e3548u);
  /* 111e3548 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e354b push 2 */
  push32((uint32_t)(0x2u));
  /* 111e354d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111e354f push 0x111ed230 */
  push32((uint32_t)(0x111ed230u));
  /* 111e3554 push eax */
  push32((uint32_t)(EAX));
  /* 111e3555 call edi */
  call_ind((uint32_t)(EDI), 0x111e3557u);
  /* 111e3557 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e355a push 2 */
  push32((uint32_t)(0x2u));
  /* 111e355c push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111e355e push 0x111ed228 */
  push32((uint32_t)(0x111ed228u));
  /* 111e3563 push ecx */
  push32((uint32_t)(ECX));
  /* 111e3564 call edi */
  call_ind((uint32_t)(EDI), 0x111e3566u);
  /* 111e3566 mov edx, dword ptr [0x111ea044] */
  EDX = (r32((uint32_t)(0x111ea044)));
  /* 111e356c mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 111e356f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3572 mov eax, dword ptr [edx + 0x2ab] */
  EAX = (r32((uint32_t)(EDX + 0x2ab)));
  /* 111e3578 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e357a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e357c push eax */
  push32((uint32_t)(EAX));
  /* 111e357d push ecx */
  push32((uint32_t)(ECX));
  /* 111e357e call edi */
  call_ind((uint32_t)(EDI), 0x111e3580u);
  /* 111e3580 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e3583:;
  /* 111e3583 pop edi */
  EDI = (pop32());
  /* 111e3584 pop esi */
  ESI = (pop32());
  /* 111e3585 ret  */
  ESPCHK(0x111e32f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003590 @ 0x111e3590 (11 bytes, 4 insns) */
void f_111e3590(void) {
  FTRACE(0x111e3590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3590 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 111e3594 call 0x111e3d2b */
  push32(0x111e3599u); f_111e3d2b();
  /* 111e3599 pop ecx */
  ECX = (pop32());
  /* 111e359a ret  */
  ESPCHK(0x111e3590u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x111e35a0 (254 bytes, 109 insns) */
void f_111e35a0(void) {
  FTRACE(0x111e35a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e35a0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 111e35a4 push edi */
  push32((uint32_t)(EDI));
  /* 111e35a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111e35a7 je 0x111e3623 */
  if (C.zf) goto L_111e3623;
  /* 111e35a9 push esi */
  push32((uint32_t)(ESI));
  /* 111e35aa push ebx */
  push32((uint32_t)(EBX));
  /* 111e35ab mov ebx, ecx */
  EBX = (ECX);
  /* 111e35ad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 111e35b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 111e35b7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 111e35bb jne 0x111e35c4 */
  if (!C.zf) goto L_111e35c4;
  /* 111e35bd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e35c0 jne 0x111e3631 */
  if (!C.zf) goto L_111e3631;
  /* 111e35c2 jmp 0x111e35e5 */
  goto L_111e35e5;
L_111e35c4:;
  /* 111e35c4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e35c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e35c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e35c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e35ca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e35cb je 0x111e35f2 */
  if (C.zf) goto L_111e35f2;
  /* 111e35cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e35cf je 0x111e35fa */
  if (C.zf) goto L_111e35fa;
  /* 111e35d1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 111e35d7 jne 0x111e35c4 */
  if (!C.zf) goto L_111e35c4;
  /* 111e35d9 mov ebx, ecx */
  EBX = (ECX);
  /* 111e35db shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e35de jne 0x111e3631 */
  if (!C.zf) goto L_111e3631;
L_111e35e0:;
  /* 111e35e0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 111e35e3 je 0x111e35f2 */
  if (C.zf) goto L_111e35f2;
L_111e35e5:;
  /* 111e35e5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e35e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e35e8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e35ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e35eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e35ed je 0x111e361e */
  if (C.zf) goto L_111e361e;
  /* 111e35ef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 111e35f0 jne 0x111e35e5 */
  if (!C.zf) goto L_111e35e5;
L_111e35f2:;
  /* 111e35f2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111e35f6 pop ebx */
  EBX = (pop32());
  /* 111e35f7 pop esi */
  ESI = (pop32());
  /* 111e35f8 pop edi */
  EDI = (pop32());
  /* 111e35f9 ret  */
  ESPCHK(0x111e35a0u, _esp0);
  ESP += 4; return;
L_111e35fa:;
  /* 111e35fa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111e3600 je 0x111e3614 */
  if (C.zf) goto L_111e3614;
L_111e3602:;
  /* 111e3602 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e3604 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e3605 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e3606 je 0x111e3696 */
  if (C.zf) goto L_111e3696;
  /* 111e360c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111e3612 jne 0x111e3602 */
  if (!C.zf) goto L_111e3602;
L_111e3614:;
  /* 111e3614 mov ebx, ecx */
  EBX = (ECX);
  /* 111e3616 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e3619 jne 0x111e3687 */
  if (!C.zf) goto L_111e3687;
L_111e361b:;
  /* 111e361b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e361d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_111e361e:;
  /* 111e361e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 111e361f jne 0x111e361b */
  if (!C.zf) goto L_111e361b;
  /* 111e3621 pop ebx */
  EBX = (pop32());
  /* 111e3622 pop esi */
  ESI = (pop32());
L_111e3623:;
  /* 111e3623 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e3627 pop edi */
  EDI = (pop32());
  /* 111e3628 ret  */
  ESPCHK(0x111e35a0u, _esp0);
  ESP += 4; return;
L_111e3629:;
  /* 111e3629 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111e362b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e362e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e362f je 0x111e35e0 */
  if (C.zf) goto L_111e35e0;
L_111e3631:;
  /* 111e3631 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 111e3636 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 111e3638 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e363a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e363d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 111e363f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 111e3641 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3644 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 111e3649 je 0x111e3629 */
  if (C.zf) goto L_111e3629;
  /* 111e364b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e364d je 0x111e367b */
  if (C.zf) goto L_111e367b;
  /* 111e364f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 111e3651 je 0x111e3671 */
  if (C.zf) goto L_111e3671;
  /* 111e3653 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 111e3659 je 0x111e3667 */
  if (C.zf) goto L_111e3667;
  /* 111e365b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 111e3661 jne 0x111e3629 */
  if (!C.zf) goto L_111e3629;
  /* 111e3663 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111e3665 jmp 0x111e367f */
  goto L_111e367f;
L_111e3667:;
  /* 111e3667 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 111e366d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111e366f jmp 0x111e367f */
  goto L_111e367f;
L_111e3671:;
  /* 111e3671 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 111e3677 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 111e3679 jmp 0x111e367f */
  goto L_111e367f;
L_111e367b:;
  /* 111e367b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111e367d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_111e367f:;
  /* 111e367f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e3684 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e3685 je 0x111e3691 */
  if (C.zf) goto L_111e3691;
L_111e3687:;
  /* 111e3687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e3689:;
  /* 111e3689 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 111e368b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e368e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e368f jne 0x111e3689 */
  if (!C.zf) goto L_111e3689;
L_111e3691:;
  /* 111e3691 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 111e3694 jne 0x111e361b */
  if (!C.zf) goto L_111e361b;
L_111e3696:;
  /* 111e3696 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 111e369a pop ebx */
  EBX = (pop32());
  /* 111e369b pop esi */
  ESI = (pop32());
  /* 111e369c pop edi */
  EDI = (pop32());
  /* 111e369d ret  */
  ESPCHK(0x111e35a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036a0 @ 0x111e36a0 (62 bytes, 35 insns) */
void f_111e36a0(void) {
  FTRACE(0x111e36a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e36a0 push ebp */
  push32((uint32_t)(EBP));
  /* 111e36a1 mov ebp, esp */
  EBP = (ESP);
  /* 111e36a3 push esi */
  push32((uint32_t)(ESI));
  /* 111e36a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e36a6 push eax */
  push32((uint32_t)(EAX));
  /* 111e36a7 push eax */
  push32((uint32_t)(EAX));
  /* 111e36a8 push eax */
  push32((uint32_t)(EAX));
  /* 111e36a9 push eax */
  push32((uint32_t)(EAX));
  /* 111e36aa push eax */
  push32((uint32_t)(EAX));
  /* 111e36ab push eax */
  push32((uint32_t)(EAX));
  /* 111e36ac push eax */
  push32((uint32_t)(EAX));
  /* 111e36ad push eax */
  push32((uint32_t)(EAX));
  /* 111e36ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e36b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e36b4:;
  /* 111e36b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 111e36b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111e36b8 je 0x111e36c1 */
  if (C.zf) goto L_111e36c1;
  /* 111e36ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111e36bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x111e36bb");
  /* 111e36bf jmp 0x111e36b4 */
  goto L_111e36b4;
L_111e36c1:;
  /* 111e36c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e36c4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e36c7 nop  */
  /* nop */
L_111e36c8:;
  /* 111e36c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e36c9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e36cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 111e36cd je 0x111e36d6 */
  if (C.zf) goto L_111e36d6;
  /* 111e36cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e36d0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x111e36d0");
  /* 111e36d4 jae 0x111e36c8 */
  if (!C.cf) goto L_111e36c8;
L_111e36d6:;
  /* 111e36d6 mov eax, ecx */
  EAX = (ECX);
  /* 111e36d8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e36db pop esi */
  ESI = (pop32());
  /* 111e36dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e36dd ret  */
  ESPCHK(0x111e36a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036e0 @ 0x111e36e0 (133 bytes, 68 insns) */
void f_111e36e0(void) {
  FTRACE(0x111e36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e36e0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e36e4 push edi */
  push32((uint32_t)(EDI));
  /* 111e36e5 push ebx */
  push32((uint32_t)(EBX));
  /* 111e36e6 push esi */
  push32((uint32_t)(ESI));
  /* 111e36e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 111e36e9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 111e36ed test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e36ef je 0x111e375a */
  if (C.zf) goto L_111e375a;
  /* 111e36f1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 111e36f4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 111e36f6 je 0x111e3747 */
  if (C.zf) goto L_111e3747;
L_111e36f8:;
  /* 111e36f8 mov esi, edi */
  ESI = (EDI);
  /* 111e36fa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e36fe mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 111e3700 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e3701 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e3703 je 0x111e371a */
  if (C.zf) goto L_111e371a;
  /* 111e3705 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e3707 je 0x111e3714 */
  if (C.zf) goto L_111e3714;
L_111e3709:;
  /* 111e3709 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e370b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_111e370c:;
  /* 111e370c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e370e je 0x111e371a */
  if (C.zf) goto L_111e371a;
  /* 111e3710 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e3712 jne 0x111e3709 */
  if (!C.zf) goto L_111e3709;
L_111e3714:;
  /* 111e3714 pop esi */
  ESI = (pop32());
  /* 111e3715 pop ebx */
  EBX = (pop32());
  /* 111e3716 pop edi */
  EDI = (pop32());
  /* 111e3717 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e3719 ret  */
  ESPCHK(0x111e36e0u, _esp0);
  ESP += 4; return;
L_111e371a:;
  /* 111e371a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e371c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e371d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e371f jne 0x111e370c */
  if (!C.zf) goto L_111e370c;
  /* 111e3721 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_111e3724:;
  /* 111e3724 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 111e3727 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111e3729 je 0x111e3753 */
  if (C.zf) goto L_111e3753;
  /* 111e372b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e372d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3730 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e3732 jne 0x111e36f8 */
  if (!C.zf) goto L_111e36f8;
  /* 111e3734 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 111e3737 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e3739 je 0x111e3753 */
  if (C.zf) goto L_111e3753;
  /* 111e373b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 111e373e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3741 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e3743 je 0x111e3724 */
  if (C.zf) goto L_111e3724;
  /* 111e3745 jmp 0x111e36f8 */
  goto L_111e36f8;
L_111e3747:;
  /* 111e3747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e3749 pop esi */
  ESI = (pop32());
  /* 111e374a pop ebx */
  EBX = (pop32());
  /* 111e374b pop edi */
  EDI = (pop32());
  /* 111e374c mov al, dl */
  AL = (DL);
  /* 111e374e jmp 0x111e3e36 */
  jmp_ind(0x111e3e36u); return;
L_111e3753:;
  /* 111e3753 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 111e3756 pop esi */
  ESI = (pop32());
  /* 111e3757 pop ebx */
  EBX = (pop32());
  /* 111e3758 pop edi */
  EDI = (pop32());
  /* 111e3759 ret  */
  ESPCHK(0x111e36e0u, _esp0);
  ESP += 4; return;
L_111e375a:;
  /* 111e375a mov eax, edi */
  EAX = (EDI);
  /* 111e375c pop esi */
  ESI = (pop32());
  /* 111e375d pop ebx */
  EBX = (pop32());
  /* 111e375e pop edi */
  EDI = (pop32());
  /* 111e375f ret  */
  ESPCHK(0x111e36e0u, _esp0);
  ESP += 4; return;
  /* 111e3760 push esi */
  push32((uint32_t)(ESI));
  /* 111e3761 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
}

/* FUN_10003760 @ 0x111e3760 (49 bytes, 20 insns) */
void f_111e3760(void) {
  FTRACE(0x111e3760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3760 push esi */
  push32((uint32_t)(ESI));
  /* 111e3761 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e3765 push edi */
  push32((uint32_t)(EDI));
  /* 111e3766 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 111e3769 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 111e376d je 0x111e3775 */
  if (C.zf) goto L_111e3775;
  /* 111e376f and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 111e3773 jmp 0x111e378c */
  goto L_111e378c;
L_111e3775:;
  /* 111e3775 push esi */
  push32((uint32_t)(ESI));
  /* 111e3776 call 0x111e3fa8 */
  push32(0x111e377bu); f_111e3fa8();
  /* 111e377b push esi */
  push32((uint32_t)(ESI));
  /* 111e377c call 0x111e3791 */
  push32(0x111e3781u); f_111e3791();
  /* 111e3781 push esi */
  push32((uint32_t)(ESI));
  /* 111e3782 mov edi, eax */
  EDI = (EAX);
  /* 111e3784 call 0x111e3ffa */
  push32(0x111e3789u); f_111e3ffa();
  /* 111e3789 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e378c:;
  /* 111e378c mov eax, edi */
  EAX = (EDI);
  /* 111e378e pop edi */
  EDI = (pop32());
  /* 111e378f pop esi */
  ESI = (pop32());
  /* 111e3790 ret  */
  ESPCHK(0x111e3760u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x111e3791 (76 bytes, 30 insns) */
void f_111e3791(void) {
  FTRACE(0x111e3791u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3791 push esi */
  push32((uint32_t)(ESI));
  /* 111e3792 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e3796 push edi */
  push32((uint32_t)(EDI));
  /* 111e3797 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 111e379a test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 111e379e je 0x111e37d4 */
  if (C.zf) goto L_111e37d4;
  /* 111e37a0 push esi */
  push32((uint32_t)(ESI));
  /* 111e37a1 call 0x111e4185 */
  push32(0x111e37a6u); f_111e4185();
  /* 111e37a6 push esi */
  push32((uint32_t)(ESI));
  /* 111e37a7 mov edi, eax */
  EDI = (EAX);
  /* 111e37a9 call 0x111e412c */
  push32(0x111e37aeu); f_111e412c();
  /* 111e37ae push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 111e37b1 call 0x111e404c */
  push32(0x111e37b6u); f_111e404c();
  /* 111e37b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e37b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e37bb jge 0x111e37c2 */
  if ((C.sf==C.of)) goto L_111e37c2;
  /* 111e37bd or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 111e37c0 jmp 0x111e37d4 */
  goto L_111e37d4;
L_111e37c2:;
  /* 111e37c2 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 111e37c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e37c7 je 0x111e37d4 */
  if (C.zf) goto L_111e37d4;
  /* 111e37c9 push eax */
  push32((uint32_t)(EAX));
  /* 111e37ca call 0x111e3d2b */
  push32(0x111e37cfu); f_111e3d2b();
  /* 111e37cf and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 111e37d3 pop ecx */
  ECX = (pop32());
L_111e37d4:;
  /* 111e37d4 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 111e37d8 mov eax, edi */
  EAX = (EDI);
  /* 111e37da pop edi */
  EDI = (pop32());
  /* 111e37db pop esi */
  ESI = (pop32());
  /* 111e37dc ret  */
  ESPCHK(0x111e3791u, _esp0);
  ESP += 4; return;
}

/* FUN_100037dd @ 0x111e37dd (47 bytes, 18 insns) */
void f_111e37dd(void) {
  FTRACE(0x111e37ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e37dd push ebp */
  push32((uint32_t)(EBP));
  /* 111e37de mov ebp, esp */
  EBP = (ESP);
  /* 111e37e0 push esi */
  push32((uint32_t)(ESI));
  /* 111e37e1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111e37e4 call 0x111e3fa8 */
  push32(0x111e37e9u); f_111e3fa8();
  /* 111e37e9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111e37ec push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e37ef push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e37f2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e37f5 call 0x111e380c */
  push32(0x111e37fau); f_111e380c();
  /* 111e37fa push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 111e37fd mov esi, eax */
  ESI = (EAX);
  /* 111e37ff call 0x111e3ffa */
  push32(0x111e3804u); f_111e3ffa();
  /* 111e3804 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3807 mov eax, esi */
  EAX = (ESI);
  /* 111e3809 pop esi */
  ESI = (pop32());
  /* 111e380a pop ebp */
  EBP = (pop32());
  /* 111e380b ret  */
  ESPCHK(0x111e37ddu, _esp0);
  ESP += 4; return;
}

/* FUN_1000380c @ 0x111e380c (232 bytes, 92 insns) */
void f_111e380c(void) {
  FTRACE(0x111e380cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e380c push ebp */
  push32((uint32_t)(EBP));
  /* 111e380d mov ebp, esp */
  EBP = (ESP);
  /* 111e380f push ecx */
  push32((uint32_t)(ECX));
  /* 111e3810 push ebx */
  push32((uint32_t)(EBX));
  /* 111e3811 push esi */
  push32((uint32_t)(ESI));
  /* 111e3812 push edi */
  push32((uint32_t)(EDI));
  /* 111e3813 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e3816 imul edi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e381a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e381d mov ecx, edi */
  ECX = (EDI);
  /* 111e381f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e3821 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 111e3824 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 111e3827 jne 0x111e3830 */
  if (!C.zf) goto L_111e3830;
  /* 111e3829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e382b jmp 0x111e38d9 */
  goto L_111e38d9;
L_111e3830:;
  /* 111e3830 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 111e3833 test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 111e3839 je 0x111e3843 */
  if (C.zf) goto L_111e3843;
  /* 111e383b mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 111e383e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 111e3841 jmp 0x111e384f */
  goto L_111e384f;
L_111e3843:;
  /* 111e3843 mov dword ptr [ebp + 0x14], 0x1000 */
  w32((uint32_t)(EBP + 0x14), (0x1000u));
  /* 111e384a jmp 0x111e384f */
  goto L_111e384f;
L_111e384c:;
  /* 111e384c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
L_111e384f:;
  /* 111e384f test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 111e3855 je 0x111e3881 */
  if (C.zf) goto L_111e3881;
  /* 111e3857 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 111e385a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e385c je 0x111e3881 */
  if (C.zf) goto L_111e3881;
  /* 111e385e cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3860 mov edi, ecx */
  EDI = (ECX);
  /* 111e3862 jb 0x111e3866 */
  if (C.cf) goto L_111e3866;
  /* 111e3864 mov edi, eax */
  EDI = (EAX);
L_111e3866:;
  /* 111e3866 push edi */
  push32((uint32_t)(EDI));
  /* 111e3867 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111e3869 push ebx */
  push32((uint32_t)(EBX));
  /* 111e386a call 0x111e45b0 */
  push32(0x111e386fu); f_111e45b0();
  /* 111e386f sub dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e3872 sub dword ptr [esi + 4], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EDI),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e3875 add dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e3877 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e387a add ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e387c mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 111e387f jmp 0x111e38cc */
  goto L_111e38cc;
L_111e3881:;
  /* 111e3881 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3884 jb 0x111e38b4 */
  if (C.cf) goto L_111e38b4;
  /* 111e3886 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e388a mov eax, ecx */
  EAX = (ECX);
  /* 111e388c je 0x111e3897 */
  if (C.zf) goto L_111e3897;
  /* 111e388e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111e3890 div dword ptr [ebp + 0x14] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x14))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e3893 mov eax, ecx */
  EAX = (ECX);
  /* 111e3895 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_111e3897:;
  /* 111e3897 push eax */
  push32((uint32_t)(EAX));
  /* 111e3898 push ebx */
  push32((uint32_t)(EBX));
  /* 111e3899 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 111e389c call 0x111e436a */
  push32(0x111e38a1u); f_111e436a();
  /* 111e38a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e38a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e38a6 je 0x111e38de */
  if (C.zf) goto L_111e38de;
  /* 111e38a8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e38ab je 0x111e38e4 */
  if (C.zf) goto L_111e38e4;
  /* 111e38ad sub dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e38b0 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e38b2 jmp 0x111e38cc */
  goto L_111e38cc;
L_111e38b4:;
  /* 111e38b4 push esi */
  push32((uint32_t)(ESI));
  /* 111e38b5 call 0x111e428e */
  push32(0x111e38bau); f_111e428e();
  /* 111e38ba cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e38bd pop ecx */
  ECX = (pop32());
  /* 111e38be je 0x111e38e8 */
  if (C.zf) goto L_111e38e8;
  /* 111e38c0 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 111e38c2 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 111e38c5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e38c6 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 111e38c9 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_111e38cc:;
  /* 111e38cc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e38d0 jne 0x111e384c */
  if (!C.zf) goto L_111e384c;
  /* 111e38d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
L_111e38d9:;
  /* 111e38d9 pop edi */
  EDI = (pop32());
  /* 111e38da pop esi */
  ESI = (pop32());
  /* 111e38db pop ebx */
  EBX = (pop32());
  /* 111e38dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e38dd ret  */
  ESPCHK(0x111e380cu, _esp0);
  ESP += 4; return;
L_111e38de:;
  /* 111e38de or dword ptr [esi + 0xc], 0x10 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x10u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 111e38e2 jmp 0x111e38e8 */
  goto L_111e38e8;
L_111e38e4:;
  /* 111e38e4 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
L_111e38e8:;
  /* 111e38e8 mov eax, edi */
  EAX = (EDI);
  /* 111e38ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111e38ec sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e38ef div dword ptr [ebp + 0xc] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 111e38f2 jmp 0x111e38d9 */
  goto L_111e38d9;
}

/* operator_new @ 0x111e38f4 (14 bytes, 6 insns) */
void f_111e38f4(void) {
  FTRACE(0x111e38f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e38f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e38f6 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 111e38fa call 0x111e48f7 */
  push32(0x111e38ffu); f_111e48f7();
  /* 111e38ff pop ecx */
  ECX = (pop32());
  /* 111e3900 pop ecx */
  ECX = (pop32());
  /* 111e3901 ret  */
  ESPCHK(0x111e38f4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003902 @ 0x111e3902 (34 bytes, 15 insns) */
void f_111e3902(void) {
  FTRACE(0x111e3902u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3902 push esi */
  push32((uint32_t)(ESI));
  /* 111e3903 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e3907 push edi */
  push32((uint32_t)(EDI));
  /* 111e3908 push esi */
  push32((uint32_t)(ESI));
  /* 111e3909 call 0x111e3fa8 */
  push32(0x111e390eu); f_111e3fa8();
  /* 111e390e push esi */
  push32((uint32_t)(ESI));
  /* 111e390f call 0x111e3924 */
  push32(0x111e3914u); f_111e3924();
  /* 111e3914 push esi */
  push32((uint32_t)(ESI));
  /* 111e3915 mov edi, eax */
  EDI = (EAX);
  /* 111e3917 call 0x111e3ffa */
  push32(0x111e391cu); f_111e3ffa();
  /* 111e391c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e391f mov eax, edi */
  EAX = (EDI);
  /* 111e3921 pop edi */
  EDI = (pop32());
  /* 111e3922 pop esi */
  ESI = (pop32());
  /* 111e3923 ret  */
  ESPCHK(0x111e3902u, _esp0);
  ESP += 4; return;
}

/* FUN_10003924 @ 0x111e3924 (353 bytes, 127 insns) */
void f_111e3924(void) {
  FTRACE(0x111e3924u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3924 push ebp */
  push32((uint32_t)(EBP));
  /* 111e3925 mov ebp, esp */
  EBP = (ESP);
  /* 111e3927 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e392a push ebx */
  push32((uint32_t)(EBX));
  /* 111e392b push esi */
  push32((uint32_t)(ESI));
  /* 111e392c push edi */
  push32((uint32_t)(EDI));
  /* 111e392d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e3930 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e3932 mov esi, dword ptr [edi + 0x10] */
  ESI = (r32((uint32_t)(EDI + 0x10)));
  /* 111e3935 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3938 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 111e393b jge 0x111e3940 */
  if ((C.sf==C.of)) goto L_111e3940;
  /* 111e393d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_111e3940:;
  /* 111e3940 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e3942 push ebx */
  push32((uint32_t)(EBX));
  /* 111e3943 push esi */
  push32((uint32_t)(ESI));
  /* 111e3944 call 0x111e4cb4 */
  push32(0x111e3949u); f_111e4cb4();
  /* 111e3949 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e394c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e394e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111e3951 jl 0x111e39b2 */
  if ((C.sf!=C.of)) goto L_111e39b2;
  /* 111e3953 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 111e3956 test cx, 0x108 */
  { uint32_t _r=(CX)&(0x108u); fl_logic(_r,16); }
  /* 111e395b jne 0x111e3965 */
  if (!C.zf) goto L_111e3965;
  /* 111e395d sub eax, dword ptr [edi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e3960 jmp 0x111e3a80 */
  goto L_111e3a80;
L_111e3965:;
  /* 111e3965 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e3967 mov edx, dword ptr [edi + 8] */
  EDX = (r32((uint32_t)(EDI + 0x8)));
  /* 111e396a mov ebx, eax */
  EBX = (EAX);
  /* 111e396c sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e396e test cl, 3 */
  { uint32_t _r=(CL)&(0x3u); fl_logic(_r,8); }
  /* 111e3971 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 111e3974 je 0x111e39a2 */
  if (C.zf) goto L_111e39a2;
  /* 111e3976 mov ebx, esi */
  EBX = (ESI);
  /* 111e3978 mov ecx, esi */
  ECX = (ESI);
  /* 111e397a sar ebx, 5 */
  EBX = (sh_sar((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 111e397d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111e3980 mov ebx, dword ptr [ebx*4 + 0x111ee3c0] */
  EBX = (r32((uint32_t)(EBX*4 + 0x111ee3c0)));
  /* 111e3987 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 111e398a test byte ptr [ebx + ecx*4 + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBX + ECX*4 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 111e398f je 0x111e39ba */
  if (C.zf) goto L_111e39ba;
  /* 111e3991 mov ecx, edx */
  ECX = (EDX);
L_111e3993:;
  /* 111e3993 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3995 jae 0x111e39ba */
  if (!C.cf) goto L_111e39ba;
  /* 111e3997 cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e399a jne 0x111e399f */
  if (!C.zf) goto L_111e399f;
  /* 111e399c inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_111e399f:;
  /* 111e399f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e39a0 jmp 0x111e3993 */
  goto L_111e3993;
L_111e39a2:;
  /* 111e39a2 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 111e39a5 jne 0x111e39ba */
  if (!C.zf) goto L_111e39ba;
  /* 111e39a7 call 0x111e4a92 */
  push32(0x111e39acu); f_111e4a92();
  /* 111e39ac mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_111e39b2:;
  /* 111e39b2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e39b5 jmp 0x111e3a80 */
  goto L_111e3a80;
L_111e39ba:;
  /* 111e39ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e39be jne 0x111e39c8 */
  if (!C.zf) goto L_111e39c8;
  /* 111e39c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e39c3 jmp 0x111e3a80 */
  goto L_111e3a80;
L_111e39c8:;
  /* 111e39c8 test byte ptr [edi + 0xc], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xc)))&(0x1u); fl_logic(_r,8); }
  /* 111e39cc je 0x111e3a78 */
  if (C.zf) goto L_111e3a78;
  /* 111e39d2 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 111e39d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111e39d7 jne 0x111e39e1 */
  if (!C.zf) goto L_111e39e1;
  /* 111e39d9 and dword ptr [ebp - 8], ecx */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(ECX); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 111e39dc jmp 0x111e3a78 */
  goto L_111e3a78;
L_111e39e1:;
  /* 111e39e1 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e39e3 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e39e5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111e39e8 mov eax, esi */
  EAX = (ESI);
  /* 111e39ea sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111e39ed lea ebx, [eax*4 + 0x111ee3c0] */
  EBX = ((uint32_t)(EAX*4 + 0x111ee3c0));
  /* 111e39f4 mov eax, esi */
  EAX = (ESI);
  /* 111e39f6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e39f9 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 111e39fc mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 111e39fe shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 111e3a01 test byte ptr [esi + eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 111e3a06 je 0x111e3a72 */
  if (C.zf) goto L_111e3a72;
  /* 111e3a08 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e3a0a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3a0c push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 111e3a0f call 0x111e4cb4 */
  push32(0x111e3a14u); f_111e4cb4();
  /* 111e3a14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3a17 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3a1a jne 0x111e3a39 */
  if (!C.zf) goto L_111e3a39;
  /* 111e3a1c mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 111e3a1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e3a22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_111e3a24:;
  /* 111e3a24 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3a26 jae 0x111e3a33 */
  if (!C.cf) goto L_111e3a33;
  /* 111e3a28 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e3a2b jne 0x111e3a30 */
  if (!C.zf) goto L_111e3a30;
  /* 111e3a2d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_111e3a30:;
  /* 111e3a30 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e3a31 jmp 0x111e3a24 */
  goto L_111e3a24;
L_111e3a33:;
  /* 111e3a33 test byte ptr [edi + 0xd], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xd)))&(0x20u); fl_logic(_r,8); }
  /* 111e3a37 jmp 0x111e3a6d */
  goto L_111e3a6d;
L_111e3a39:;
  /* 111e3a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3a3b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 111e3a3e push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 111e3a41 call 0x111e4cb4 */
  push32(0x111e3a46u); f_111e4cb4();
  /* 111e3a46 mov eax, 0x200 */
  EAX = (0x200u);
  /* 111e3a4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3a4e cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3a51 ja 0x111e3a60 */
  if ((!C.cf&&!C.zf)) goto L_111e3a60;
  /* 111e3a53 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 111e3a56 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 111e3a59 je 0x111e3a60 */
  if (C.zf) goto L_111e3a60;
  /* 111e3a5b test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 111e3a5e je 0x111e3a63 */
  if (C.zf) goto L_111e3a63;
L_111e3a60:;
  /* 111e3a60 mov eax, dword ptr [edi + 0x18] */
  EAX = (r32((uint32_t)(EDI + 0x18)));
L_111e3a63:;
  /* 111e3a63 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 111e3a66 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 111e3a68 test byte ptr [esi + eax + 4], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x4u); fl_logic(_r,8); }
L_111e3a6d:;
  /* 111e3a6d je 0x111e3a72 */
  if (C.zf) goto L_111e3a72;
  /* 111e3a6f inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_111e3a72:;
  /* 111e3a72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e3a75 sub dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_sub(_a,_b,_r,32); }
L_111e3a78:;
  /* 111e3a78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e3a7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e3a7e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111e3a80:;
  /* 111e3a80 pop edi */
  EDI = (pop32());
  /* 111e3a81 pop esi */
  ESI = (pop32());
  /* 111e3a82 pop ebx */
  EBX = (pop32());
  /* 111e3a83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e3a84 ret  */
  ESPCHK(0x111e3924u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a85 @ 0x111e3a85 (44 bytes, 17 insns) */
void f_111e3a85(void) {
  FTRACE(0x111e3a85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3a85 push ebp */
  push32((uint32_t)(EBP));
  /* 111e3a86 mov ebp, esp */
  EBP = (ESP);
  /* 111e3a88 push esi */
  push32((uint32_t)(ESI));
  /* 111e3a89 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e3a8c call 0x111e3fa8 */
  push32(0x111e3a91u); f_111e3fa8();
  /* 111e3a91 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e3a94 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 111e3a97 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e3a9a call 0x111e3ab1 */
  push32(0x111e3a9fu); f_111e3ab1();
  /* 111e3a9f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e3aa2 mov esi, eax */
  ESI = (EAX);
  /* 111e3aa4 call 0x111e3ffa */
  push32(0x111e3aa9u); f_111e3ffa();
  /* 111e3aa9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3aac mov eax, esi */
  EAX = (ESI);
  /* 111e3aae pop esi */
  ESI = (pop32());
  /* 111e3aaf pop ebp */
  EBP = (pop32());
  /* 111e3ab0 ret  */
  ESPCHK(0x111e3a85u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ab1 @ 0x111e3ab1 (141 bytes, 55 insns) */
void f_111e3ab1(void) {
  FTRACE(0x111e3ab1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3ab1 push esi */
  push32((uint32_t)(ESI));
  /* 111e3ab2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e3ab6 push edi */
  push32((uint32_t)(EDI));
  /* 111e3ab7 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 111e3aba test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 111e3abc je 0x111e3b2d */
  if (C.zf) goto L_111e3b2d;
  /* 111e3abe mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 111e3ac2 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e3ac4 je 0x111e3ad0 */
  if (C.zf) goto L_111e3ad0;
  /* 111e3ac6 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3ac9 je 0x111e3ad0 */
  if (C.zf) goto L_111e3ad0;
  /* 111e3acb cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3ace jne 0x111e3b2d */
  if (!C.zf) goto L_111e3b2d;
L_111e3ad0:;
  /* 111e3ad0 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 111e3ad2 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3ad5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 111e3ad8 jne 0x111e3ae7 */
  if (!C.zf) goto L_111e3ae7;
  /* 111e3ada push esi */
  push32((uint32_t)(ESI));
  /* 111e3adb call 0x111e3924 */
  push32(0x111e3ae0u); f_111e3924();
  /* 111e3ae0 add dword ptr [esp + 0x14], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EAX),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e3ae4 pop ecx */
  ECX = (pop32());
  /* 111e3ae5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_111e3ae7:;
  /* 111e3ae7 push esi */
  push32((uint32_t)(ESI));
  /* 111e3ae8 call 0x111e4185 */
  push32(0x111e3aedu); f_111e4185();
  /* 111e3aed mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 111e3af0 pop ecx */
  ECX = (pop32());
  /* 111e3af1 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 111e3af3 je 0x111e3afc */
  if (C.zf) goto L_111e3afc;
  /* 111e3af5 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 111e3af7 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 111e3afa jmp 0x111e3b10 */
  goto L_111e3b10;
L_111e3afc:;
  /* 111e3afc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 111e3afe je 0x111e3b10 */
  if (C.zf) goto L_111e3b10;
  /* 111e3b00 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 111e3b02 je 0x111e3b10 */
  if (C.zf) goto L_111e3b10;
  /* 111e3b04 test ah, 4 */
  { uint32_t _r=(AH)&(0x4u); fl_logic(_r,8); }
  /* 111e3b07 jne 0x111e3b10 */
  if (!C.zf) goto L_111e3b10;
  /* 111e3b09 mov dword ptr [esi + 0x18], 0x200 */
  w32((uint32_t)(ESI + 0x18), (0x200u));
L_111e3b10:;
  /* 111e3b10 push edi */
  push32((uint32_t)(EDI));
  /* 111e3b11 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 111e3b15 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 111e3b18 call 0x111e4cb4 */
  push32(0x111e3b1du); f_111e4cb4();
  /* 111e3b1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3b20 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e3b22 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3b25 setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 111e3b28 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e3b29 mov eax, ecx */
  EAX = (ECX);
  /* 111e3b2b jmp 0x111e3b3b */
  goto L_111e3b3b;
L_111e3b2d:;
  /* 111e3b2d call 0x111e4a92 */
  push32(0x111e3b32u); f_111e4a92();
  /* 111e3b32 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 111e3b38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_111e3b3b:;
  /* 111e3b3b pop edi */
  EDI = (pop32());
  /* 111e3b3c pop esi */
  ESI = (pop32());
  /* 111e3b3d ret  */
  ESPCHK(0x111e3ab1u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b3e @ 0x111e3b3e (49 bytes, 21 insns) */
void f_111e3b3e(void) {
  FTRACE(0x111e3b3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3b3e push esi */
  push32((uint32_t)(ESI));
  /* 111e3b3f call 0x111e4efc */
  push32(0x111e3b44u); f_111e4efc();
  /* 111e3b44 mov esi, eax */
  ESI = (EAX);
  /* 111e3b46 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e3b48 jne 0x111e3b4c */
  if (!C.zf) goto L_111e3b4c;
  /* 111e3b4a pop esi */
  ESI = (pop32());
  /* 111e3b4b ret  */
  ESPCHK(0x111e3b3eu, _esp0);
  ESP += 4; return;
L_111e3b4c:;
  /* 111e3b4c push edi */
  push32((uint32_t)(EDI));
  /* 111e3b4d push esi */
  push32((uint32_t)(ESI));
  /* 111e3b4e push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e3b52 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e3b56 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e3b5a call 0x111e4d8c */
  push32(0x111e3b5fu); f_111e4d8c();
  /* 111e3b5f push esi */
  push32((uint32_t)(ESI));
  /* 111e3b60 mov edi, eax */
  EDI = (EAX);
  /* 111e3b62 call 0x111e3ffa */
  push32(0x111e3b67u); f_111e3ffa();
  /* 111e3b67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3b6a mov eax, edi */
  EAX = (EDI);
  /* 111e3b6c pop edi */
  EDI = (pop32());
  /* 111e3b6d pop esi */
  ESI = (pop32());
  /* 111e3b6e ret  */
  ESPCHK(0x111e3b3eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b6f @ 0x111e3b6f (19 bytes, 6 insns) */
void f_111e3b6f(void) {
  FTRACE(0x111e3b6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3b6f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 111e3b71 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 111e3b75 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 111e3b79 call 0x111e3b3e */
  push32(0x111e3b7eu); f_111e3b3e();
  /* 111e3b7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3b81 ret  */
  ESPCHK(0x111e3b6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b82 @ 0x111e3b82 (217 bytes, 57 insns) */
void f_111e3b82(void) {
  FTRACE(0x111e3b82u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3b82 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e3b86 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3b89 jne 0x111e3c17 */
  if (!C.zf) goto L_111e3c17;
  /* 111e3b8f call dword ptr [0x111e9070] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9070))), 0x111e3b95u);
  /* 111e3b95 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e3b97 mov dword ptr [0x111ede14], eax */
  w32((uint32_t)(0x111ede14), (EAX));
  /* 111e3b9c call 0x111e581b */
  push32(0x111e3ba1u); f_111e581b();
  /* 111e3ba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3ba3 pop ecx */
  ECX = (pop32());
  /* 111e3ba4 je 0x111e3be2 */
  if (C.zf) goto L_111e3be2;
  /* 111e3ba6 mov eax, dword ptr [0x111ede14] */
  EAX = (r32((uint32_t)(0x111ede14)));
  /* 111e3bab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e3bad mov cl, byte ptr [0x111ede15] */
  CL = (r8((uint32_t)(0x111ede15)));
  /* 111e3bb3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e3bb8 shr dword ptr [0x111ede14], 0x10 */
  w32((uint32_t)(0x111ede14), (sh_shr((uint32_t)(r32((uint32_t)(0x111ede14))), (0x10u)&0x1f, 32)));
  /* 111e3bbf mov dword ptr [0x111ede1c], eax */
  w32((uint32_t)(0x111ede1c), (EAX));
  /* 111e3bc4 mov dword ptr [0x111ede20], ecx */
  w32((uint32_t)(0x111ede20), (ECX));
  /* 111e3bca shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111e3bcd add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3bcf mov dword ptr [0x111ede18], eax */
  w32((uint32_t)(0x111ede18), (EAX));
  /* 111e3bd4 call 0x111e50e2 */
  push32(0x111e3bd9u); f_111e50e2();
  /* 111e3bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3bdb jne 0x111e3be6 */
  if (!C.zf) goto L_111e3be6;
  /* 111e3bdd call 0x111e5878 */
  push32(0x111e3be2u); f_111e5878();
L_111e3be2:;
  /* 111e3be2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e3be4 jmp 0x111e3c58 */
  goto L_111e3c58;
L_111e3be6:;
  /* 111e3be6 call dword ptr [0x111e906c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e906c))), 0x111e3becu);
  /* 111e3bec mov dword ptr [0x111ef4e4], eax */
  w32((uint32_t)(0x111ef4e4), (EAX));
  /* 111e3bf1 call 0x111e5574 */
  push32(0x111e3bf6u); f_111e5574();
  /* 111e3bf6 mov dword ptr [0x111eddfc], eax */
  w32((uint32_t)(0x111eddfc), (EAX));
  /* 111e3bfb call 0x111e4aa4 */
  push32(0x111e3c00u); f_111e4aa4();
  /* 111e3c00 call 0x111e5327 */
  push32(0x111e3c05u); f_111e5327();
  /* 111e3c05 call 0x111e526e */
  push32(0x111e3c0au); f_111e526e();
  /* 111e3c0a call 0x111e4fc4 */
  push32(0x111e3c0fu); f_111e4fc4();
  /* 111e3c0f inc dword ptr [0x111eddf8] */
  { uint32_t _r=(r32((uint32_t)(0x111eddf8)))+1; w32((uint32_t)(0x111eddf8), (_r)); fl_inc(_r,32); }
  /* 111e3c15 jmp 0x111e3c55 */
  goto L_111e3c55;
L_111e3c17:;
  /* 111e3c17 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e3c19 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3c1b jne 0x111e3c49 */
  if (!C.zf) goto L_111e3c49;
  /* 111e3c1d cmp dword ptr [0x111eddf8], ecx */
  { uint32_t _a=(r32((uint32_t)(0x111eddf8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3c23 jle 0x111e3be2 */
  if ((C.zf||C.sf!=C.of)) goto L_111e3be2;
  /* 111e3c25 dec dword ptr [0x111eddf8] */
  { uint32_t _r=(r32((uint32_t)(0x111eddf8)))-1; w32((uint32_t)(0x111eddf8), (_r)); fl_dec(_r,32); }
  /* 111e3c2b cmp dword ptr [0x111ede4c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x111ede4c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3c31 jne 0x111e3c38 */
  if (!C.zf) goto L_111e3c38;
  /* 111e3c33 call 0x111e5002 */
  push32(0x111e3c38u); f_111e5002();
L_111e3c38:;
  /* 111e3c38 call 0x111e4c60 */
  push32(0x111e3c3du); f_111e4c60();
  /* 111e3c3d call 0x111e5136 */
  push32(0x111e3c42u); f_111e5136();
  /* 111e3c42 call 0x111e5878 */
  push32(0x111e3c47u); f_111e5878();
  /* 111e3c47 jmp 0x111e3c55 */
  goto L_111e3c55;
L_111e3c49:;
  /* 111e3c49 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3c4c jne 0x111e3c55 */
  if (!C.zf) goto L_111e3c55;
  /* 111e3c4e push ecx */
  push32((uint32_t)(ECX));
  /* 111e3c4f call 0x111e51ce */
  push32(0x111e3c54u); f_111e51ce();
  /* 111e3c54 pop ecx */
  ECX = (pop32());
L_111e3c55:;
  /* 111e3c55 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e3c57 pop eax */
  EAX = (pop32());
L_111e3c58:;
  /* 111e3c58 ret 0xc */
  ESPCHK(0x111e3b82u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x111e3c5b (157 bytes, 73 insns) */
void f_111e3c5b(void) {
  FTRACE(0x111e3c5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3c5b push ebp */
  push32((uint32_t)(EBP));
  /* 111e3c5c mov ebp, esp */
  EBP = (ESP);
  /* 111e3c5e push ebx */
  push32((uint32_t)(EBX));
  /* 111e3c5f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e3c62 push esi */
  push32((uint32_t)(ESI));
  /* 111e3c63 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e3c66 push edi */
  push32((uint32_t)(EDI));
  /* 111e3c67 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 111e3c6a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e3c6c jne 0x111e3c77 */
  if (!C.zf) goto L_111e3c77;
  /* 111e3c6e cmp dword ptr [0x111eddf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111eddf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3c75 jmp 0x111e3c9d */
  goto L_111e3c9d;
L_111e3c77:;
  /* 111e3c77 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3c7a je 0x111e3c81 */
  if (C.zf) goto L_111e3c81;
  /* 111e3c7c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3c7f jne 0x111e3ca3 */
  if (!C.zf) goto L_111e3ca3;
L_111e3c81:;
  /* 111e3c81 mov eax, dword ptr [0x111ef4e8] */
  EAX = (r32((uint32_t)(0x111ef4e8)));
  /* 111e3c86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3c88 je 0x111e3c93 */
  if (C.zf) goto L_111e3c93;
  /* 111e3c8a push edi */
  push32((uint32_t)(EDI));
  /* 111e3c8b push esi */
  push32((uint32_t)(ESI));
  /* 111e3c8c push ebx */
  push32((uint32_t)(EBX));
  /* 111e3c8d call eax */
  call_ind((uint32_t)(EAX), 0x111e3c8fu);
  /* 111e3c8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3c91 je 0x111e3c9f */
  if (C.zf) goto L_111e3c9f;
L_111e3c93:;
  /* 111e3c93 push edi */
  push32((uint32_t)(EDI));
  /* 111e3c94 push esi */
  push32((uint32_t)(ESI));
  /* 111e3c95 push ebx */
  push32((uint32_t)(EBX));
  /* 111e3c96 call 0x111e3b82 */
  push32(0x111e3c9bu); f_111e3b82();
  /* 111e3c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_111e3c9d:;
  /* 111e3c9d jne 0x111e3ca3 */
  if (!C.zf) goto L_111e3ca3;
L_111e3c9f:;
  /* 111e3c9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e3ca1 jmp 0x111e3cf1 */
  goto L_111e3cf1;
L_111e3ca3:;
  /* 111e3ca3 push edi */
  push32((uint32_t)(EDI));
  /* 111e3ca4 push esi */
  push32((uint32_t)(ESI));
  /* 111e3ca5 push ebx */
  push32((uint32_t)(EBX));
  /* 111e3ca6 call 0x111e1000 */
  push32(0x111e3cabu); f_111e1000();
  /* 111e3cab cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3cae mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 111e3cb1 jne 0x111e3cbf */
  if (!C.zf) goto L_111e3cbf;
  /* 111e3cb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3cb5 jne 0x111e3cee */
  if (!C.zf) goto L_111e3cee;
  /* 111e3cb7 push edi */
  push32((uint32_t)(EDI));
  /* 111e3cb8 push eax */
  push32((uint32_t)(EAX));
  /* 111e3cb9 push ebx */
  push32((uint32_t)(EBX));
  /* 111e3cba call 0x111e3b82 */
  push32(0x111e3cbfu); f_111e3b82();
L_111e3cbf:;
  /* 111e3cbf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e3cc1 je 0x111e3cc8 */
  if (C.zf) goto L_111e3cc8;
  /* 111e3cc3 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3cc6 jne 0x111e3cee */
  if (!C.zf) goto L_111e3cee;
L_111e3cc8:;
  /* 111e3cc8 push edi */
  push32((uint32_t)(EDI));
  /* 111e3cc9 push esi */
  push32((uint32_t)(ESI));
  /* 111e3cca push ebx */
  push32((uint32_t)(EBX));
  /* 111e3ccb call 0x111e3b82 */
  push32(0x111e3cd0u); f_111e3b82();
  /* 111e3cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3cd2 jne 0x111e3cd7 */
  if (!C.zf) goto L_111e3cd7;
  /* 111e3cd4 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_111e3cd7:;
  /* 111e3cd7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3cdb je 0x111e3cee */
  if (C.zf) goto L_111e3cee;
  /* 111e3cdd mov eax, dword ptr [0x111ef4e8] */
  EAX = (r32((uint32_t)(0x111ef4e8)));
  /* 111e3ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3ce4 je 0x111e3cee */
  if (C.zf) goto L_111e3cee;
  /* 111e3ce6 push edi */
  push32((uint32_t)(EDI));
  /* 111e3ce7 push esi */
  push32((uint32_t)(ESI));
  /* 111e3ce8 push ebx */
  push32((uint32_t)(EBX));
  /* 111e3ce9 call eax */
  call_ind((uint32_t)(EAX), 0x111e3cebu);
  /* 111e3ceb mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_111e3cee:;
  /* 111e3cee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_111e3cf1:;
  /* 111e3cf1 pop edi */
  EDI = (pop32());
  /* 111e3cf2 pop esi */
  ESI = (pop32());
  /* 111e3cf3 pop ebx */
  EBX = (pop32());
  /* 111e3cf4 pop ebp */
  EBP = (pop32());
  /* 111e3cf5 ret 0xc */
  ESPCHK(0x111e3c5bu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x111e3cf8 (48 bytes, 15 insns) */
void f_111e3cf8(void) {
  FTRACE(0x111e3cf8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3cf8 mov eax, dword ptr [0x111ede04] */
  EAX = (r32((uint32_t)(0x111ede04)));
  /* 111e3cfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3d00 je 0x111e3d0f */
  if (C.zf) goto L_111e3d0f;
  /* 111e3d02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3d04 jne 0x111e3d14 */
  if (!C.zf) goto L_111e3d14;
  /* 111e3d06 cmp dword ptr [0x111ede08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111ede08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3d0d jne 0x111e3d14 */
  if (!C.zf) goto L_111e3d14;
L_111e3d0f:;
  /* 111e3d0f call 0x111e5920 */
  push32(0x111e3d14u); f_111e5920();
L_111e3d14:;
  /* 111e3d14 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 111e3d18 call 0x111e5959 */
  push32(0x111e3d1du); f_111e5959();
  /* 111e3d1d push 0xff */
  push32((uint32_t)(0xffu));
  /* 111e3d22 call dword ptr [0x111ea580] */
  call_ind((uint32_t)(r32((uint32_t)(0x111ea580))), 0x111e3d28u);
  /* 111e3d28 pop ecx */
  ECX = (pop32());
  /* 111e3d29 pop ecx */
  ECX = (pop32());
  /* 111e3d2a ret  */
  ESPCHK(0x111e3cf8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d2b @ 0x111e3d2b (215 bytes, 75 insns) */
void f_111e3d2b(void) {
  FTRACE(0x111e3d2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3d2b push ebp */
  push32((uint32_t)(EBP));
  /* 111e3d2c mov ebp, esp */
  EBP = (ESP);
  /* 111e3d2e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111e3d30 push 0x111e9190 */
  push32((uint32_t)(0x111e9190u));
  /* 111e3d35 push 0x111e6b24 */
  push32((uint32_t)(0x111e6b24u));
  /* 111e3d3a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111e3d40 push eax */
  push32((uint32_t)(EAX));
  /* 111e3d41 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111e3d48 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e3d4b push ebx */
  push32((uint32_t)(EBX));
  /* 111e3d4c push esi */
  push32((uint32_t)(ESI));
  /* 111e3d4d push edi */
  push32((uint32_t)(EDI));
  /* 111e3d4e mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e3d51 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e3d53 je 0x111e3e05 */
  if (C.zf) { jmp_ind(0x111e3e05u); return; }
  /* 111e3d59 mov eax, dword ptr [0x111ee3a8] */
  EAX = (r32((uint32_t)(0x111ee3a8)));
  /* 111e3d5e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3d61 jne 0x111e3d9e */
  if (!C.zf) goto L_111e3d9e;
  /* 111e3d63 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e3d65 call 0x111e69b6 */
  push32(0x111e3d6au); f_111e69b6();
  /* 111e3d6a pop ecx */
  ECX = (pop32());
  /* 111e3d6b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e3d6f push esi */
  push32((uint32_t)(ESI));
  /* 111e3d70 call 0x111e5af4 */
  push32(0x111e3d75u); f_111e5af4();
  /* 111e3d75 pop ecx */
  ECX = (pop32());
  /* 111e3d76 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111e3d79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3d7b je 0x111e3d86 */
  if (C.zf) goto L_111e3d86;
  /* 111e3d7d push esi */
  push32((uint32_t)(ESI));
  /* 111e3d7e push eax */
  push32((uint32_t)(EAX));
  /* 111e3d7f call 0x111e5b1f */
  push32(0x111e3d84u); f_111e5b1f();
  /* 111e3d84 pop ecx */
  ECX = (pop32());
  /* 111e3d85 pop ecx */
  ECX = (pop32());
L_111e3d86:;
  /* 111e3d86 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e3d8a call 0x111e3d95 */
  push32(0x111e3d8fu); f_111e3d95();
  /* 111e3d8f cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3d93 jmp 0x111e3de6 */
  goto L_111e3de6;
  /* 111e3d95 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e3d97 call 0x111e6a17 */
  push32(0x111e3d9cu); f_111e6a17();
  /* 111e3d9c pop ecx */
  ECX = (pop32());
  /* 111e3d9d ret  */
  ESPCHK(0x111e3d2bu, _esp0);
  ESP += 4; return;
L_111e3d9e:;
  /* 111e3d9e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3da1 jne 0x111e3df6 */
  if (!C.zf) goto L_111e3df6;
  /* 111e3da3 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e3da5 call 0x111e69b6 */
  push32(0x111e3daau); f_111e69b6();
  /* 111e3daa pop ecx */
  ECX = (pop32());
  /* 111e3dab mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111e3db2 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 111e3db5 push eax */
  push32((uint32_t)(EAX));
  /* 111e3db6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 111e3db9 push eax */
  push32((uint32_t)(EAX));
  /* 111e3dba push esi */
  push32((uint32_t)(ESI));
  /* 111e3dbb call 0x111e6559 */
  push32(0x111e3dc0u); f_111e6559();
  /* 111e3dc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3dc3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 111e3dc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e3dc8 je 0x111e3dd9 */
  if (C.zf) goto L_111e3dd9;
  /* 111e3dca push eax */
  push32((uint32_t)(EAX));
  /* 111e3dcb push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 111e3dce push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 111e3dd1 call 0x111e65b0 */
  push32(0x111e3dd6u); f_111e65b0();
  /* 111e3dd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e3dd9:;
  /* 111e3dd9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e3ddd call 0x111e3ded */
  push32(0x111e3de2u); f_111e3ded();
  /* 111e3de2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_111e3de6:;
  /* 111e3de6 jne 0x111e3e05 */
  if (!C.zf) { jmp_ind(0x111e3e05u); return; }
  /* 111e3de8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e3deb jmp 0x111e3df7 */
  goto L_111e3df7;
  /* 111e3ded push 9 */
  push32((uint32_t)(0x9u));
  /* 111e3def call 0x111e6a17 */
  push32(0x111e3df4u); f_111e6a17();
  /* 111e3df4 pop ecx */
  ECX = (pop32());
  /* 111e3df5 ret  */
  ESPCHK(0x111e3d2bu, _esp0);
  ESP += 4; return;
L_111e3df6:;
  /* 111e3df6 push esi */
  push32((uint32_t)(ESI));
L_111e3df7:;
  /* 111e3df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e3df9 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
}

/* FUN_10003d95 @ 0x111e3d95 (9 bytes, 4 insns) */
void f_111e3d95(void) {
  FTRACE(0x111e3d95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3d95 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e3d97 call 0x111e6a17 */
  push32(0x111e3d9cu); f_111e6a17();
  /* 111e3d9c pop ecx */
  ECX = (pop32());
  /* 111e3d9d ret  */
  ESPCHK(0x111e3d95u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ded @ 0x111e3ded (9 bytes, 4 insns) */
void f_111e3ded(void) {
  FTRACE(0x111e3dedu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3ded push 9 */
  push32((uint32_t)(0x9u));
  /* 111e3def call 0x111e6a17 */
  push32(0x111e3df4u); f_111e6a17();
  /* 111e3df4 pop ecx */
  ECX = (pop32());
  /* 111e3df5 ret  */
  ESPCHK(0x111e3dedu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e30 @ 0x111e3e30 (188 bytes, 86 insns) */
void f_111e3e30(void) {
  FTRACE(0x111e3e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3e30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e3e32 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 111e3e36 push ebx */
  push32((uint32_t)(EBX));
  /* 111e3e37 mov ebx, eax */
  EBX = (EAX);
  /* 111e3e39 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 111e3e3c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e3e40 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 111e3e46 je 0x111e3e5b */
  if (C.zf) goto L_111e3e5b;
L_111e3e48:;
  /* 111e3e48 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 111e3e4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111e3e4b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e3e4d je 0x111e3e20 */
  if (C.zf) { jmp_ind(0x111e3e20u); return; }
  /* 111e3e4f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 111e3e51 je 0x111e3ea4 */
  if (C.zf) goto L_111e3ea4;
  /* 111e3e53 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 111e3e59 jne 0x111e3e48 */
  if (!C.zf) goto L_111e3e48;
L_111e3e5b:;
  /* 111e3e5b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 111e3e5d push edi */
  push32((uint32_t)(EDI));
  /* 111e3e5e mov eax, ebx */
  EAX = (EBX);
  /* 111e3e60 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 111e3e63 push esi */
  push32((uint32_t)(ESI));
  /* 111e3e64 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_111e3e66:;
  /* 111e3e66 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 111e3e68 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 111e3e6d mov eax, ecx */
  EAX = (ECX);
  /* 111e3e6f mov esi, edi */
  ESI = (EDI);
  /* 111e3e71 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 111e3e73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3e75 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3e77 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 111e3e7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e3e7d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 111e3e7f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 111e3e81 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3e84 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 111e3e8a jne 0x111e3ea8 */
  if (!C.zf) goto L_111e3ea8;
  /* 111e3e8c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 111e3e91 je 0x111e3e66 */
  if (C.zf) goto L_111e3e66;
  /* 111e3e93 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 111e3e98 jne 0x111e3ea2 */
  if (!C.zf) goto L_111e3ea2;
  /* 111e3e9a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 111e3ea0 jne 0x111e3e66 */
  if (!C.zf) goto L_111e3e66;
L_111e3ea2:;
  /* 111e3ea2 pop esi */
  ESI = (pop32());
  /* 111e3ea3 pop edi */
  EDI = (pop32());
L_111e3ea4:;
  /* 111e3ea4 pop ebx */
  EBX = (pop32());
  /* 111e3ea5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e3ea7 ret  */
  ESPCHK(0x111e3e30u, _esp0);
  ESP += 4; return;
L_111e3ea8:;
  /* 111e3ea8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 111e3eab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e3ead je 0x111e3ee5 */
  if (C.zf) goto L_111e3ee5;
  /* 111e3eaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e3eb1 je 0x111e3ea2 */
  if (C.zf) goto L_111e3ea2;
  /* 111e3eb3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e3eb5 je 0x111e3ede */
  if (C.zf) goto L_111e3ede;
  /* 111e3eb7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111e3eb9 je 0x111e3ea2 */
  if (C.zf) goto L_111e3ea2;
  /* 111e3ebb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 111e3ebe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e3ec0 je 0x111e3ed7 */
  if (C.zf) goto L_111e3ed7;
  /* 111e3ec2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e3ec4 je 0x111e3ea2 */
  if (C.zf) goto L_111e3ea2;
  /* 111e3ec6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e3ec8 je 0x111e3ed0 */
  if (C.zf) goto L_111e3ed0;
  /* 111e3eca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 111e3ecc je 0x111e3ea2 */
  if (C.zf) goto L_111e3ea2;
  /* 111e3ece jmp 0x111e3e66 */
  goto L_111e3e66;
L_111e3ed0:;
  /* 111e3ed0 pop esi */
  ESI = (pop32());
  /* 111e3ed1 pop edi */
  EDI = (pop32());
  /* 111e3ed2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 111e3ed5 pop ebx */
  EBX = (pop32());
  /* 111e3ed6 ret  */
  ESPCHK(0x111e3e30u, _esp0);
  ESP += 4; return;
L_111e3ed7:;
  /* 111e3ed7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 111e3eda pop esi */
  ESI = (pop32());
  /* 111e3edb pop edi */
  EDI = (pop32());
  /* 111e3edc pop ebx */
  EBX = (pop32());
  /* 111e3edd ret  */
  ESPCHK(0x111e3e30u, _esp0);
  ESP += 4; return;
L_111e3ede:;
  /* 111e3ede lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 111e3ee1 pop esi */
  ESI = (pop32());
  /* 111e3ee2 pop edi */
  EDI = (pop32());
  /* 111e3ee3 pop ebx */
  EBX = (pop32());
  /* 111e3ee4 ret  */
  ESPCHK(0x111e3e30u, _esp0);
  ESP += 4; return;
L_111e3ee5:;
  /* 111e3ee5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 111e3ee8 pop esi */
  ESI = (pop32());
  /* 111e3ee9 pop edi */
  EDI = (pop32());
  /* 111e3eea pop ebx */
  EBX = (pop32());
  /* 111e3eeb ret  */
  ESPCHK(0x111e3e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa8 @ 0x111e3fa8 (47 bytes, 17 insns) */
void f_111e3fa8(void) {
  FTRACE(0x111e3fa8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3fa8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e3fac mov ecx, 0x111ea590 */
  ECX = (0x111ea590u);
  /* 111e3fb1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3fb3 jb 0x111e3fcc */
  if (C.cf) goto L_111e3fcc;
  /* 111e3fb5 cmp eax, 0x111ea7f0 */
  { uint32_t _a=(EAX),_b=(0x111ea7f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3fba ja 0x111e3fcc */
  if ((!C.cf&&!C.zf)) goto L_111e3fcc;
  /* 111e3fbc sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e3fbe sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111e3fc1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3fc4 push eax */
  push32((uint32_t)(EAX));
  /* 111e3fc5 call 0x111e69b6 */
  push32(0x111e3fcau); f_111e69b6();
  /* 111e3fca pop ecx */
  ECX = (pop32());
  /* 111e3fcb ret  */
  ESPCHK(0x111e3fa8u, _esp0);
  ESP += 4; return;
L_111e3fcc:;
  /* 111e3fcc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3fcf push eax */
  push32((uint32_t)(EAX));
  /* 111e3fd0 call dword ptr [0x111e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9078))), 0x111e3fd6u);
  /* 111e3fd6 ret  */
  ESPCHK(0x111e3fa8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd7 @ 0x111e3fd7 (35 bytes, 13 insns) */
void f_111e3fd7(void) {
  FTRACE(0x111e3fd7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3fd7 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e3fdb cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e3fde jge 0x111e3feb */
  if ((C.sf==C.of)) goto L_111e3feb;
  /* 111e3fe0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3fe3 push eax */
  push32((uint32_t)(EAX));
  /* 111e3fe4 call 0x111e69b6 */
  push32(0x111e3fe9u); f_111e69b6();
  /* 111e3fe9 pop ecx */
  ECX = (pop32());
  /* 111e3fea ret  */
  ESPCHK(0x111e3fd7u, _esp0);
  ESP += 4; return;
L_111e3feb:;
  /* 111e3feb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e3fef add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e3ff2 push eax */
  push32((uint32_t)(EAX));
  /* 111e3ff3 call dword ptr [0x111e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9078))), 0x111e3ff9u);
  /* 111e3ff9 ret  */
  ESPCHK(0x111e3fd7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ffa @ 0x111e3ffa (47 bytes, 17 insns) */
void f_111e3ffa(void) {
  FTRACE(0x111e3ffau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e3ffa mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e3ffe mov ecx, 0x111ea590 */
  ECX = (0x111ea590u);
  /* 111e4003 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4005 jb 0x111e401e */
  if (C.cf) goto L_111e401e;
  /* 111e4007 cmp eax, 0x111ea7f0 */
  { uint32_t _a=(EAX),_b=(0x111ea7f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e400c ja 0x111e401e */
  if ((!C.cf&&!C.zf)) goto L_111e401e;
  /* 111e400e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4010 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111e4013 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4016 push eax */
  push32((uint32_t)(EAX));
  /* 111e4017 call 0x111e6a17 */
  push32(0x111e401cu); f_111e6a17();
  /* 111e401c pop ecx */
  ECX = (pop32());
  /* 111e401d ret  */
  ESPCHK(0x111e3ffau, _esp0);
  ESP += 4; return;
L_111e401e:;
  /* 111e401e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4021 push eax */
  push32((uint32_t)(EAX));
  /* 111e4022 call dword ptr [0x111e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e907c))), 0x111e4028u);
  /* 111e4028 ret  */
  ESPCHK(0x111e3ffau, _esp0);
  ESP += 4; return;
}

/* FUN_10004029 @ 0x111e4029 (35 bytes, 13 insns) */
void f_111e4029(void) {
  FTRACE(0x111e4029u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4029 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e402d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4030 jge 0x111e403d */
  if ((C.sf==C.of)) goto L_111e403d;
  /* 111e4032 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4035 push eax */
  push32((uint32_t)(EAX));
  /* 111e4036 call 0x111e6a17 */
  push32(0x111e403bu); f_111e6a17();
  /* 111e403b pop ecx */
  ECX = (pop32());
  /* 111e403c ret  */
  ESPCHK(0x111e4029u, _esp0);
  ESP += 4; return;
L_111e403d:;
  /* 111e403d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e4041 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4044 push eax */
  push32((uint32_t)(EAX));
  /* 111e4045 call dword ptr [0x111e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e907c))), 0x111e404bu);
  /* 111e404b ret  */
  ESPCHK(0x111e4029u, _esp0);
  ESP += 4; return;
}

/* FUN_1000404c @ 0x111e404c (93 bytes, 32 insns) */
void f_111e404c(void) {
  FTRACE(0x111e404cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e404c push esi */
  push32((uint32_t)(ESI));
  /* 111e404d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e4051 cmp esi, dword ptr [0x111ee4c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111ee4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4057 jae 0x111e4091 */
  if (!C.cf) goto L_111e4091;
  /* 111e4059 mov ecx, esi */
  ECX = (ESI);
  /* 111e405b mov eax, esi */
  EAX = (ESI);
  /* 111e405d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e4060 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4063 mov ecx, dword ptr [ecx*4 + 0x111ee3c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e406a lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 111e406d test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e4072 je 0x111e4091 */
  if (C.zf) goto L_111e4091;
  /* 111e4074 push edi */
  push32((uint32_t)(EDI));
  /* 111e4075 push esi */
  push32((uint32_t)(ESI));
  /* 111e4076 call 0x111e701a */
  push32(0x111e407bu); f_111e701a();
  /* 111e407b push esi */
  push32((uint32_t)(ESI));
  /* 111e407c call 0x111e40a9 */
  push32(0x111e4081u); f_111e40a9();
  /* 111e4081 push esi */
  push32((uint32_t)(ESI));
  /* 111e4082 mov edi, eax */
  EDI = (EAX);
  /* 111e4084 call 0x111e7079 */
  push32(0x111e4089u); f_111e7079();
  /* 111e4089 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e408c mov eax, edi */
  EAX = (EDI);
  /* 111e408e pop edi */
  EDI = (pop32());
  /* 111e408f pop esi */
  ESI = (pop32());
  /* 111e4090 ret  */
  ESPCHK(0x111e404cu, _esp0);
  ESP += 4; return;
L_111e4091:;
  /* 111e4091 call 0x111e4a92 */
  push32(0x111e4096u); f_111e4a92();
  /* 111e4096 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e409c call 0x111e4a9b */
  push32(0x111e40a1u); f_111e4a9b();
  /* 111e40a1 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e40a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e40a7 pop esi */
  ESI = (pop32());
  /* 111e40a8 ret  */
  ESPCHK(0x111e404cu, _esp0);
  ESP += 4; return;
}

/* FUN_100040a9 @ 0x111e40a9 (131 bytes, 52 insns) */
void f_111e40a9(void) {
  FTRACE(0x111e40a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e40a9 push esi */
  push32((uint32_t)(ESI));
  /* 111e40aa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e40ae push edi */
  push32((uint32_t)(EDI));
  /* 111e40af push esi */
  push32((uint32_t)(ESI));
  /* 111e40b0 call 0x111e6fd8 */
  push32(0x111e40b5u); f_111e6fd8();
  /* 111e40b5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e40b8 pop ecx */
  ECX = (pop32());
  /* 111e40b9 je 0x111e40f7 */
  if (C.zf) goto L_111e40f7;
  /* 111e40bb cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e40be je 0x111e40c5 */
  if (C.zf) goto L_111e40c5;
  /* 111e40c0 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e40c3 jne 0x111e40db */
  if (!C.zf) goto L_111e40db;
L_111e40c5:;
  /* 111e40c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e40c7 call 0x111e6fd8 */
  push32(0x111e40ccu); f_111e6fd8();
  /* 111e40cc push 1 */
  push32((uint32_t)(0x1u));
  /* 111e40ce mov edi, eax */
  EDI = (EAX);
  /* 111e40d0 call 0x111e6fd8 */
  push32(0x111e40d5u); f_111e6fd8();
  /* 111e40d5 pop ecx */
  ECX = (pop32());
  /* 111e40d6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e40d8 pop ecx */
  ECX = (pop32());
  /* 111e40d9 je 0x111e40f7 */
  if (C.zf) goto L_111e40f7;
L_111e40db:;
  /* 111e40db push esi */
  push32((uint32_t)(ESI));
  /* 111e40dc call 0x111e6fd8 */
  push32(0x111e40e1u); f_111e6fd8();
  /* 111e40e1 pop ecx */
  ECX = (pop32());
  /* 111e40e2 push eax */
  push32((uint32_t)(EAX));
  /* 111e40e3 call dword ptr [0x111e9084] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9084))), 0x111e40e9u);
  /* 111e40e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e40eb jne 0x111e40f7 */
  if (!C.zf) goto L_111e40f7;
  /* 111e40ed call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e40f3u);
  /* 111e40f3 mov edi, eax */
  EDI = (EAX);
  /* 111e40f5 jmp 0x111e40f9 */
  goto L_111e40f9;
L_111e40f7:;
  /* 111e40f7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_111e40f9:;
  /* 111e40f9 push esi */
  push32((uint32_t)(ESI));
  /* 111e40fa call 0x111e6f59 */
  push32(0x111e40ffu); f_111e6f59();
  /* 111e40ff mov eax, esi */
  EAX = (ESI);
  /* 111e4101 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 111e4104 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 111e4107 pop ecx */
  ECX = (pop32());
  /* 111e4108 mov eax, dword ptr [eax*4 + 0x111ee3c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x111ee3c0)));
  /* 111e410f lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 111e4112 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 111e4117 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e4119 je 0x111e4127 */
  if (C.zf) goto L_111e4127;
  /* 111e411b push edi */
  push32((uint32_t)(EDI));
  /* 111e411c call 0x111e4a1f */
  push32(0x111e4121u); f_111e4a1f();
  /* 111e4121 pop ecx */
  ECX = (pop32());
  /* 111e4122 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4125 jmp 0x111e4129 */
  goto L_111e4129;
L_111e4127:;
  /* 111e4127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e4129:;
  /* 111e4129 pop edi */
  EDI = (pop32());
  /* 111e412a pop esi */
  ESI = (pop32());
  /* 111e412b ret  */
  ESPCHK(0x111e40a9u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x111e412c (43 bytes, 17 insns) */
void f_111e412c(void) {
  FTRACE(0x111e412cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e412c push esi */
  push32((uint32_t)(ESI));
  /* 111e412d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e4131 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 111e4134 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 111e4136 je 0x111e4155 */
  if (C.zf) goto L_111e4155;
  /* 111e4138 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 111e413a je 0x111e4155 */
  if (C.zf) goto L_111e4155;
  /* 111e413c push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 111e413f call 0x111e3d2b */
  push32(0x111e4144u); f_111e3d2b();
  /* 111e4144 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 111e414a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e414c pop ecx */
  ECX = (pop32());
  /* 111e414d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111e414f mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 111e4152 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_111e4155:;
  /* 111e4155 pop esi */
  ESI = (pop32());
  /* 111e4156 ret  */
  ESPCHK(0x111e412cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004157 @ 0x111e4157 (46 bytes, 22 insns) */
void f_111e4157(void) {
  FTRACE(0x111e4157u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4157 push esi */
  push32((uint32_t)(ESI));
  /* 111e4158 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e415c push esi */
  push32((uint32_t)(ESI));
  /* 111e415d call 0x111e4185 */
  push32(0x111e4162u); f_111e4185();
  /* 111e4162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4164 pop ecx */
  ECX = (pop32());
  /* 111e4165 je 0x111e416c */
  if (C.zf) goto L_111e416c;
  /* 111e4167 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e416a pop esi */
  ESI = (pop32());
  /* 111e416b ret  */
  ESPCHK(0x111e4157u, _esp0);
  ESP += 4; return;
L_111e416c:;
  /* 111e416c test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 111e4170 je 0x111e4181 */
  if (C.zf) goto L_111e4181;
  /* 111e4172 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 111e4175 call 0x111e709b */
  push32(0x111e417au); f_111e709b();
  /* 111e417a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e417c pop ecx */
  ECX = (pop32());
  /* 111e417d pop esi */
  ESI = (pop32());
  /* 111e417e sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4180 ret  */
  ESPCHK(0x111e4157u, _esp0);
  ESP += 4; return;
L_111e4181:;
  /* 111e4181 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e4183 pop esi */
  ESI = (pop32());
  /* 111e4184 ret  */
  ESPCHK(0x111e4157u, _esp0);
  ESP += 4; return;
}

/* FUN_10004185 @ 0x111e4185 (92 bytes, 40 insns) */
void f_111e4185(void) {
  FTRACE(0x111e4185u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4185 push ebx */
  push32((uint32_t)(EBX));
  /* 111e4186 push esi */
  push32((uint32_t)(ESI));
  /* 111e4187 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 111e418b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e418d push edi */
  push32((uint32_t)(EDI));
  /* 111e418e mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 111e4191 mov ecx, eax */
  ECX = (EAX);
  /* 111e4193 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 111e4196 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4199 jne 0x111e41d2 */
  if (!C.zf) goto L_111e41d2;
  /* 111e419b test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 111e419f je 0x111e41d2 */
  if (C.zf) goto L_111e41d2;
  /* 111e41a1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 111e41a4 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 111e41a6 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e41a8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e41aa jle 0x111e41d2 */
  if ((C.zf||C.sf!=C.of)) goto L_111e41d2;
  /* 111e41ac push edi */
  push32((uint32_t)(EDI));
  /* 111e41ad push eax */
  push32((uint32_t)(EAX));
  /* 111e41ae push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 111e41b1 call 0x111e712e */
  push32(0x111e41b6u); f_111e712e();
  /* 111e41b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e41b9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e41bb jne 0x111e41cb */
  if (!C.zf) goto L_111e41cb;
  /* 111e41bd mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 111e41c0 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 111e41c2 je 0x111e41d2 */
  if (C.zf) goto L_111e41d2;
  /* 111e41c4 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 111e41c6 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 111e41c9 jmp 0x111e41d2 */
  goto L_111e41d2;
L_111e41cb:;
  /* 111e41cb or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 111e41cf or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_111e41d2:;
  /* 111e41d2 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 111e41d5 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 111e41d9 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111e41db pop edi */
  EDI = (pop32());
  /* 111e41dc mov eax, ebx */
  EAX = (EBX);
  /* 111e41de pop esi */
  ESI = (pop32());
  /* 111e41df pop ebx */
  EBX = (pop32());
  /* 111e41e0 ret  */
  ESPCHK(0x111e4185u, _esp0);
  ESP += 4; return;
}

/* FUN_100041ea @ 0x111e41ea (164 bytes, 66 insns) */
void f_111e41ea(void) {
  FTRACE(0x111e41eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e41ea push ebx */
  push32((uint32_t)(EBX));
  /* 111e41eb push esi */
  push32((uint32_t)(ESI));
  /* 111e41ec push edi */
  push32((uint32_t)(EDI));
  /* 111e41ed push 2 */
  push32((uint32_t)(0x2u));
  /* 111e41ef xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e41f1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e41f3 call 0x111e69b6 */
  push32(0x111e41f8u); f_111e69b6();
  /* 111e41f8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e41fa pop ecx */
  ECX = (pop32());
  /* 111e41fb cmp dword ptr [0x111ef4e0], esi */
  { uint32_t _a=(r32((uint32_t)(0x111ef4e0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4201 jle 0x111e4277 */
  if ((C.zf||C.sf!=C.of)) goto L_111e4277;
L_111e4203:;
  /* 111e4203 mov eax, dword ptr [0x111ee4c4] */
  EAX = (r32((uint32_t)(0x111ee4c4)));
  /* 111e4208 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 111e420b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e420d je 0x111e426e */
  if (C.zf) goto L_111e426e;
  /* 111e420f test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 111e4213 je 0x111e426e */
  if (C.zf) goto L_111e426e;
  /* 111e4215 push eax */
  push32((uint32_t)(EAX));
  /* 111e4216 push esi */
  push32((uint32_t)(ESI));
  /* 111e4217 call 0x111e3fd7 */
  push32(0x111e421cu); f_111e3fd7();
  /* 111e421c mov eax, dword ptr [0x111ee4c4] */
  EAX = (r32((uint32_t)(0x111ee4c4)));
  /* 111e4221 pop ecx */
  ECX = (pop32());
  /* 111e4222 pop ecx */
  ECX = (pop32());
  /* 111e4223 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 111e4226 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 111e4229 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 111e422c je 0x111e425e */
  if (C.zf) goto L_111e425e;
  /* 111e422e cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4233 jne 0x111e4244 */
  if (!C.zf) goto L_111e4244;
  /* 111e4235 push eax */
  push32((uint32_t)(EAX));
  /* 111e4236 call 0x111e4157 */
  push32(0x111e423bu); f_111e4157();
  /* 111e423b cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e423e pop ecx */
  ECX = (pop32());
  /* 111e423f je 0x111e425e */
  if (C.zf) goto L_111e425e;
  /* 111e4241 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e4242 jmp 0x111e425e */
  goto L_111e425e;
L_111e4244:;
  /* 111e4244 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4249 jne 0x111e425e */
  if (!C.zf) goto L_111e425e;
  /* 111e424b test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 111e424e je 0x111e425e */
  if (C.zf) goto L_111e425e;
  /* 111e4250 push eax */
  push32((uint32_t)(EAX));
  /* 111e4251 call 0x111e4157 */
  push32(0x111e4256u); f_111e4157();
  /* 111e4256 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4259 pop ecx */
  ECX = (pop32());
  /* 111e425a jne 0x111e425e */
  if (!C.zf) goto L_111e425e;
  /* 111e425c or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_111e425e:;
  /* 111e425e mov eax, dword ptr [0x111ee4c4] */
  EAX = (r32((uint32_t)(0x111ee4c4)));
  /* 111e4263 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 111e4266 push esi */
  push32((uint32_t)(ESI));
  /* 111e4267 call 0x111e4029 */
  push32(0x111e426cu); f_111e4029();
  /* 111e426c pop ecx */
  ECX = (pop32());
  /* 111e426d pop ecx */
  ECX = (pop32());
L_111e426e:;
  /* 111e426e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e426f cmp esi, dword ptr [0x111ef4e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111ef4e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4275 jl 0x111e4203 */
  if ((C.sf!=C.of)) goto L_111e4203;
L_111e4277:;
  /* 111e4277 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e4279 call 0x111e6a17 */
  push32(0x111e427eu); f_111e6a17();
  /* 111e427e cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4283 pop ecx */
  ECX = (pop32());
  /* 111e4284 mov eax, ebx */
  EAX = (EBX);
  /* 111e4286 je 0x111e428a */
  if (C.zf) goto L_111e428a;
  /* 111e4288 mov eax, edi */
  EAX = (EDI);
L_111e428a:;
  /* 111e428a pop edi */
  EDI = (pop32());
  /* 111e428b pop esi */
  ESI = (pop32());
  /* 111e428c pop ebx */
  EBX = (pop32());
  /* 111e428d ret  */
  ESPCHK(0x111e41eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000428e @ 0x111e428e (220 bytes, 79 insns) */
void f_111e428e(void) {
  FTRACE(0x111e428eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e428e push esi */
  push32((uint32_t)(ESI));
  /* 111e428f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e4293 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 111e4296 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 111e4298 je 0x111e4365 */
  if (C.zf) goto L_111e4365;
  /* 111e429e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 111e42a0 jne 0x111e4365 */
  if (!C.zf) goto L_111e4365;
  /* 111e42a6 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 111e42a8 je 0x111e42b4 */
  if (C.zf) goto L_111e42b4;
  /* 111e42aa or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 111e42ac mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 111e42af jmp 0x111e4365 */
  goto L_111e4365;
L_111e42b4:;
  /* 111e42b4 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 111e42b6 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 111e42ba mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 111e42bd jne 0x111e42c8 */
  if (!C.zf) goto L_111e42c8;
  /* 111e42bf push esi */
  push32((uint32_t)(ESI));
  /* 111e42c0 call 0x111e731e */
  push32(0x111e42c5u); f_111e731e();
  /* 111e42c5 pop ecx */
  ECX = (pop32());
  /* 111e42c6 jmp 0x111e42cd */
  goto L_111e42cd;
L_111e42c8:;
  /* 111e42c8 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 111e42cb mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
L_111e42cd:;
  /* 111e42cd push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 111e42d0 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 111e42d3 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 111e42d6 call 0x111e436a */
  push32(0x111e42dbu); f_111e436a();
  /* 111e42db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e42de mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 111e42e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e42e3 je 0x111e4354 */
  if (C.zf) goto L_111e4354;
  /* 111e42e5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e42e8 je 0x111e4354 */
  if (C.zf) goto L_111e4354;
  /* 111e42ea mov edx, dword ptr [esi + 0xc] */
  EDX = (r32((uint32_t)(ESI + 0xc)));
  /* 111e42ed test dl, 0x82 */
  { uint32_t _r=(DL)&(0x82u); fl_logic(_r,8); }
  /* 111e42f0 jne 0x111e4329 */
  if (!C.zf) goto L_111e4329;
  /* 111e42f2 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 111e42f5 push edi */
  push32((uint32_t)(EDI));
  /* 111e42f6 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e42f9 je 0x111e4312 */
  if (C.zf) goto L_111e4312;
  /* 111e42fb mov edi, ecx */
  EDI = (ECX);
  /* 111e42fd sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 111e4300 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 111e4303 mov edi, dword ptr [edi*4 + 0x111ee3c0] */
  EDI = (r32((uint32_t)(EDI*4 + 0x111ee3c0)));
  /* 111e430a lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 111e430d lea edi, [edi + ecx*4] */
  EDI = ((uint32_t)(EDI + ECX*4));
  /* 111e4310 jmp 0x111e4317 */
  goto L_111e4317;
L_111e4312:;
  /* 111e4312 mov edi, 0x111ea978 */
  EDI = (0x111ea978u);
L_111e4317:;
  /* 111e4317 mov cl, byte ptr [edi + 4] */
  CL = (r8((uint32_t)(EDI + 0x4)));
  /* 111e431a pop edi */
  EDI = (pop32());
  /* 111e431b and cl, 0x82 */
  { uint32_t _r=(CL)&(0x82u); CL = (_r); fl_logic(_r,8); }
  /* 111e431e cmp cl, 0x82 */
  { uint32_t _a=(CL),_b=(0x82u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4321 jne 0x111e4329 */
  if (!C.zf) goto L_111e4329;
  /* 111e4323 or dh, 0x20 */
  { uint32_t _r=(C.d.b.h)|(0x20u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 111e4326 mov dword ptr [esi + 0xc], edx */
  w32((uint32_t)(ESI + 0xc), (EDX));
L_111e4329:;
  /* 111e4329 cmp dword ptr [esi + 0x18], 0x200 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4330 jne 0x111e4346 */
  if (!C.zf) goto L_111e4346;
  /* 111e4332 mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 111e4335 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 111e4338 je 0x111e4346 */
  if (C.zf) goto L_111e4346;
  /* 111e433a test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 111e433d jne 0x111e4346 */
  if (!C.zf) goto L_111e4346;
  /* 111e433f mov dword ptr [esi + 0x18], 0x1000 */
  w32((uint32_t)(ESI + 0x18), (0x1000u));
L_111e4346:;
  /* 111e4346 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 111e4348 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e4349 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 111e434c movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 111e434f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e4350 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 111e4352 pop esi */
  ESI = (pop32());
  /* 111e4353 ret  */
  ESPCHK(0x111e428eu, _esp0);
  ESP += 4; return;
L_111e4354:;
  /* 111e4354 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e4356 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4358 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 111e435b add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e435e or dword ptr [esi + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(EAX); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 111e4361 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
L_111e4365:;
  /* 111e4365 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4368 pop esi */
  ESI = (pop32());
  /* 111e4369 ret  */
  ESPCHK(0x111e428eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000436a @ 0x111e436a (101 bytes, 34 insns) */
void f_111e436a(void) {
  FTRACE(0x111e436au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e436a push esi */
  push32((uint32_t)(ESI));
  /* 111e436b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e436f cmp esi, dword ptr [0x111ee4c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111ee4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4375 jae 0x111e43b7 */
  if (!C.cf) goto L_111e43b7;
  /* 111e4377 mov ecx, esi */
  ECX = (ESI);
  /* 111e4379 mov eax, esi */
  EAX = (ESI);
  /* 111e437b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e437e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4381 mov ecx, dword ptr [ecx*4 + 0x111ee3c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e4388 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 111e438b test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e4390 je 0x111e43b7 */
  if (C.zf) goto L_111e43b7;
  /* 111e4392 push edi */
  push32((uint32_t)(EDI));
  /* 111e4393 push esi */
  push32((uint32_t)(ESI));
  /* 111e4394 call 0x111e701a */
  push32(0x111e4399u); f_111e701a();
  /* 111e4399 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e439d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e43a1 push esi */
  push32((uint32_t)(ESI));
  /* 111e43a2 call 0x111e43cf */
  push32(0x111e43a7u); f_111e43cf();
  /* 111e43a7 push esi */
  push32((uint32_t)(ESI));
  /* 111e43a8 mov edi, eax */
  EDI = (EAX);
  /* 111e43aa call 0x111e7079 */
  push32(0x111e43afu); f_111e7079();
  /* 111e43af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e43b2 mov eax, edi */
  EAX = (EDI);
  /* 111e43b4 pop edi */
  EDI = (pop32());
  /* 111e43b5 pop esi */
  ESI = (pop32());
  /* 111e43b6 ret  */
  ESPCHK(0x111e436au, _esp0);
  ESP += 4; return;
L_111e43b7:;
  /* 111e43b7 call 0x111e4a92 */
  push32(0x111e43bcu); f_111e4a92();
  /* 111e43bc mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e43c2 call 0x111e4a9b */
  push32(0x111e43c7u); f_111e4a9b();
  /* 111e43c7 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e43ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e43cd pop esi */
  ESI = (pop32());
  /* 111e43ce ret  */
  ESPCHK(0x111e436au, _esp0);
  ESP += 4; return;
}

/* FUN_100043cf @ 0x111e43cf (473 bytes, 170 insns) */
void f_111e43cf(void) {
  FTRACE(0x111e43cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e43cf push ebp */
  push32((uint32_t)(EBP));
  /* 111e43d0 mov ebp, esp */
  EBP = (ESP);
  /* 111e43d2 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e43d5 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 111e43d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e43dd push ebx */
  push32((uint32_t)(EBX));
  /* 111e43de mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e43e1 push esi */
  push32((uint32_t)(ESI));
  /* 111e43e2 push edi */
  push32((uint32_t)(EDI));
  /* 111e43e3 mov edx, ebx */
  EDX = (EBX);
  /* 111e43e5 je 0x111e45a1 */
  if (C.zf) goto L_111e45a1;
  /* 111e43eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e43ee mov ecx, eax */
  ECX = (EAX);
  /* 111e43f0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e43f3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e43f6 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 111e43f9 mov eax, dword ptr [ecx*4 + 0x111ee3c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e4400 lea edi, [ecx*4 + 0x111ee3c0] */
  EDI = ((uint32_t)(ECX*4 + 0x111ee3c0));
  /* 111e4407 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 111e440a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e440c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 111e440f test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 111e4412 jne 0x111e45a1 */
  if (!C.zf) goto L_111e45a1;
  /* 111e4418 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 111e441b je 0x111e443a */
  if (C.zf) goto L_111e443a;
  /* 111e441d mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 111e4420 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4422 je 0x111e443a */
  if (C.zf) goto L_111e443a;
  /* 111e4424 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 111e4427 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 111e4429 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e442b lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 111e442e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111e4435 mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_111e443a:;
  /* 111e443a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 111e443d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e443f push eax */
  push32((uint32_t)(EAX));
  /* 111e4440 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e4442 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e4445 push edx */
  push32((uint32_t)(EDX));
  /* 111e4446 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 111e4449 call dword ptr [0x111e9088] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9088))), 0x111e444fu);
  /* 111e444f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4451 jne 0x111e448c */
  if (!C.zf) goto L_111e448c;
  /* 111e4453 call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e4459u);
  /* 111e4459 push 5 */
  push32((uint32_t)(0x5u));
  /* 111e445b pop esi */
  ESI = (pop32());
  /* 111e445c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e445e jne 0x111e4474 */
  if (!C.zf) goto L_111e4474;
  /* 111e4460 call 0x111e4a92 */
  push32(0x111e4465u); f_111e4a92();
  /* 111e4465 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e446b call 0x111e4a9b */
  push32(0x111e4470u); f_111e4a9b();
  /* 111e4470 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 111e4472 jmp 0x111e4484 */
  goto L_111e4484;
L_111e4474:;
  /* 111e4474 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4477 je 0x111e45a1 */
  if (C.zf) goto L_111e45a1;
  /* 111e447d push eax */
  push32((uint32_t)(EAX));
  /* 111e447e call 0x111e4a1f */
  push32(0x111e4483u); f_111e4a1f();
  /* 111e4483 pop ecx */
  ECX = (pop32());
L_111e4484:;
  /* 111e4484 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4487 jmp 0x111e45a3 */
  goto L_111e45a3;
L_111e448c:;
  /* 111e448c mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e448e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111e4491 add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e4494 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 111e4498 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 111e449c test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 111e449e je 0x111e459c */
  if (C.zf) goto L_111e459c;
  /* 111e44a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111e44a6 je 0x111e44b1 */
  if (C.zf) goto L_111e44b1;
  /* 111e44a8 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e44ab jne 0x111e44b1 */
  if (!C.zf) goto L_111e44b1;
  /* 111e44ad or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 111e44af jmp 0x111e44b3 */
  goto L_111e44b3;
L_111e44b1:;
  /* 111e44b1 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_111e44b3:;
  /* 111e44b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 111e44b5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e44b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e44bb mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 111e44be add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e44c0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e44c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111e44c5 jae 0x111e4596 */
  if (!C.cf) goto L_111e4596;
L_111e44cb:;
  /* 111e44cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111e44ce mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 111e44d0 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e44d2 je 0x111e4586 */
  if (C.zf) goto L_111e4586;
  /* 111e44d8 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e44da je 0x111e44e7 */
  if (C.zf) goto L_111e44e7;
  /* 111e44dc mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 111e44de inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e44df inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 111e44e2 jmp 0x111e4578 */
  goto L_111e4578;
L_111e44e7:;
  /* 111e44e7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e44e8 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e44eb jae 0x111e4505 */
  if (!C.cf) goto L_111e4505;
  /* 111e44ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 111e44f0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e44f1 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e44f4 jne 0x111e44fc */
  if (!C.zf) goto L_111e44fc;
  /* 111e44f6 add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e44fa jmp 0x111e455a */
  goto L_111e455a;
L_111e44fc:;
  /* 111e44fc mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 111e44ff inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e4500 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 111e4503 jmp 0x111e4578 */
  goto L_111e4578;
L_111e4505:;
  /* 111e4505 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 111e4508 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e450a push eax */
  push32((uint32_t)(EAX));
  /* 111e450b inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 111e450e lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 111e4511 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e4513 push eax */
  push32((uint32_t)(EAX));
  /* 111e4514 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e4516 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 111e4519 call dword ptr [0x111e9088] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9088))), 0x111e451fu);
  /* 111e451f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4521 jne 0x111e452d */
  if (!C.zf) goto L_111e452d;
  /* 111e4523 call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e4529u);
  /* 111e4529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e452b jne 0x111e4574 */
  if (!C.zf) goto L_111e4574;
L_111e452d:;
  /* 111e452d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4531 je 0x111e4574 */
  if (C.zf) goto L_111e4574;
  /* 111e4533 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e4535 test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 111e453a je 0x111e454f */
  if (C.zf) goto L_111e454f;
  /* 111e453c mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 111e453f cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4541 je 0x111e455a */
  if (C.zf) goto L_111e455a;
  /* 111e4543 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 111e4546 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 111e4548 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e4549 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 111e454d jmp 0x111e4578 */
  goto L_111e4578;
L_111e454f:;
  /* 111e454f cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4552 jne 0x111e455f */
  if (!C.zf) goto L_111e455f;
  /* 111e4554 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4558 jne 0x111e455f */
  if (!C.zf) goto L_111e455f;
L_111e455a:;
  /* 111e455a mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 111e455d jmp 0x111e4577 */
  goto L_111e4577;
L_111e455f:;
  /* 111e455f push 1 */
  push32((uint32_t)(0x1u));
  /* 111e4561 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111e4563 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e4566 call 0x111e4d19 */
  push32(0x111e456bu); f_111e4d19();
  /* 111e456b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e456e cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4572 je 0x111e4578 */
  if (C.zf) goto L_111e4578;
L_111e4574:;
  /* 111e4574 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_111e4577:;
  /* 111e4577 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_111e4578:;
  /* 111e4578 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e457b cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e457e jb 0x111e44cb */
  if (C.cf) goto L_111e44cb;
  /* 111e4584 jmp 0x111e4596 */
  goto L_111e4596;
L_111e4586:;
  /* 111e4586 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e4588 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 111e458c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e458e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 111e4590 jne 0x111e4596 */
  if (!C.zf) goto L_111e4596;
  /* 111e4592 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 111e4594 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_111e4596:;
  /* 111e4596 sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4599 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_111e459c:;
  /* 111e459c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e459f jmp 0x111e45a3 */
  goto L_111e45a3;
L_111e45a1:;
  /* 111e45a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e45a3:;
  /* 111e45a3 pop edi */
  EDI = (pop32());
  /* 111e45a4 pop esi */
  ESI = (pop32());
  /* 111e45a5 pop ebx */
  EBX = (pop32());
  /* 111e45a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e45a7 ret  */
  ESPCHK(0x111e43cfu, _esp0);
  ESP += 4; return;
}

/* FUN_100045b0 @ 0x111e45b0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_111e45b0(void) {
  FTRACE(0x111e45b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e45b0 push ebp */
  push32((uint32_t)(EBP));
  /* 111e45b1 mov ebp, esp */
  EBP = (ESP);
  /* 111e45b3 push edi */
  push32((uint32_t)(EDI));
  /* 111e45b4 push esi */
  push32((uint32_t)(ESI));
  /* 111e45b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e45b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 111e45bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e45be mov eax, ecx */
  EAX = (ECX);
  /* 111e45c0 mov edx, ecx */
  EDX = (ECX);
  /* 111e45c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e45c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e45c6 jbe 0x111e45d0 */
  if ((C.cf||C.zf)) goto L_111e45d0;
  /* 111e45c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e45ca jb 0x111e4748 */
  if (C.cf) goto L_111e4748;
L_111e45d0:;
  /* 111e45d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111e45d6 jne 0x111e45ec */
  if (!C.zf) goto L_111e45ec;
  /* 111e45d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e45db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111e45de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e45e1 jb 0x111e460c */
  if (C.cf) goto L_111e460c;
  /* 111e45e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e45e5 jmp dword ptr [edx*4 + 0x111e46f8] */
  switch (EDX) {
    case 0: goto L_111e4708;
    case 1: goto L_111e4710;
    case 2: goto L_111e471c;
    case 3: goto L_111e4730;
    default: x86_unimpl("switch@0x111e45e5 out of table"); return;
  }
L_111e45ec:;
  /* 111e45ec mov eax, edi */
  EAX = (EDI);
  /* 111e45ee mov edx, 3 */
  EDX = (0x3u);
  /* 111e45f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e45f6 jb 0x111e4604 */
  if (C.cf) goto L_111e4604;
  /* 111e45f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111e45fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e45fd jmp dword ptr [eax*4 + 0x111e4610] */
  switch (EAX) {
    case 1: goto L_111e4620;
    case 2: goto L_111e464c;
    case 3: goto L_111e4670;
    default: x86_unimpl("switch@0x111e45fd out of table"); return;
  }
L_111e4604:;
  /* 111e4604 jmp dword ptr [ecx*4 + 0x111e4708] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x111e4708)))); return;
  /* 111e460b nop  */
  /* nop */
L_111e460c:;
  /* 111e460c jmp dword ptr [ecx*4 + 0x111e468c] */
  switch (ECX) {
    case 0: goto L_111e46ef;
    case 1: goto L_111e46dc;
    case 2: goto L_111e46d4;
    case 3: goto L_111e46cc;
    case 4: goto L_111e46c4;
    case 5: goto L_111e46bc;
    case 6: goto L_111e46b4;
    case 7: goto L_111e46ac;
    default: x86_unimpl("switch@0x111e460c out of table"); return;
  }
  /* 111e4613 nop  */
  /* nop */
L_111e4620:;
  /* 111e4620 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e4622 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e4624 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e4626 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e4629 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e462c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e462f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e4632 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e4635 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4638 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e463b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e463e jb 0x111e460c */
  if (C.cf) goto L_111e460c;
  /* 111e4640 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e4642 jmp dword ptr [edx*4 + 0x111e46f8] */
  switch (EDX) {
    case 0: goto L_111e4708;
    case 1: goto L_111e4710;
    case 2: goto L_111e471c;
    case 3: goto L_111e4730;
    default: x86_unimpl("switch@0x111e4642 out of table"); return;
  }
  /* 111e4649 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e464c:;
  /* 111e464c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e464e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e4650 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e4652 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e4655 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e4658 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e465b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e465e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4661 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4664 jb 0x111e460c */
  if (C.cf) goto L_111e460c;
  /* 111e4666 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e4668 jmp dword ptr [edx*4 + 0x111e46f8] */
  switch (EDX) {
    case 0: goto L_111e4708;
    case 1: goto L_111e4710;
    case 2: goto L_111e471c;
    case 3: goto L_111e4730;
    default: x86_unimpl("switch@0x111e4668 out of table"); return;
  }
  /* 111e466f nop  */
  /* nop */
L_111e4670:;
  /* 111e4670 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e4672 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e4674 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e4676 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e4677 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e467a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e467b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e467e jb 0x111e460c */
  if (C.cf) goto L_111e460c;
  /* 111e4680 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e4682 jmp dword ptr [edx*4 + 0x111e46f8] */
  switch (EDX) {
    case 0: goto L_111e4708;
    case 1: goto L_111e4710;
    case 2: goto L_111e471c;
    case 3: goto L_111e4730;
    default: x86_unimpl("switch@0x111e4682 out of table"); return;
  }
  /* 111e4689 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e46ac:;
  /* 111e46ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 111e46b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_111e46b4:;
  /* 111e46b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 111e46b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_111e46bc:;
  /* 111e46bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 111e46c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_111e46c4:;
  /* 111e46c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 111e46c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_111e46cc:;
  /* 111e46cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 111e46d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_111e46d4:;
  /* 111e46d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 111e46d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_111e46dc:;
  /* 111e46dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 111e46e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 111e46e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111e46eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e46ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111e46ef:;
  /* 111e46ef jmp dword ptr [edx*4 + 0x111e46f8] */
  switch (EDX) {
    case 0: goto L_111e4708;
    case 1: goto L_111e4710;
    case 2: goto L_111e471c;
    case 3: goto L_111e4730;
    default: x86_unimpl("switch@0x111e46ef out of table"); return;
  }
  /* 111e46f6 mov edi, edi */
  EDI = (EDI);
L_111e4708:;
  /* 111e4708 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e470b pop esi */
  ESI = (pop32());
  /* 111e470c pop edi */
  EDI = (pop32());
  /* 111e470d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e470e ret  */
  ESPCHK(0x111e45b0u, _esp0);
  ESP += 4; return;
  /* 111e470f nop  */
  /* nop */
L_111e4710:;
  /* 111e4710 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e4712 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e4714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e4717 pop esi */
  ESI = (pop32());
  /* 111e4718 pop edi */
  EDI = (pop32());
  /* 111e4719 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e471a ret  */
  ESPCHK(0x111e45b0u, _esp0);
  ESP += 4; return;
  /* 111e471b nop  */
  /* nop */
L_111e471c:;
  /* 111e471c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e471e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e4720 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e4723 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e4726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e4729 pop esi */
  ESI = (pop32());
  /* 111e472a pop edi */
  EDI = (pop32());
  /* 111e472b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e472c ret  */
  ESPCHK(0x111e45b0u, _esp0);
  ESP += 4; return;
  /* 111e472d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e4730:;
  /* 111e4730 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e4732 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 111e4734 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e4737 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e473a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e473d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e4740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e4743 pop esi */
  ESI = (pop32());
  /* 111e4744 pop edi */
  EDI = (pop32());
  /* 111e4745 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e4746 ret  */
  ESPCHK(0x111e45b0u, _esp0);
  ESP += 4; return;
  /* 111e4747 nop  */
  /* nop */
L_111e4748:;
  /* 111e4748 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 111e474c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 111e4750 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 111e4756 jne 0x111e477c */
  if (!C.zf) goto L_111e477c;
  /* 111e4758 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e475b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 111e475e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4761 jb 0x111e4770 */
  if (C.cf) goto L_111e4770;
  /* 111e4763 std  */
  C.df=1;
  /* 111e4764 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e4766 cld  */
  C.df=0;
  /* 111e4767 jmp dword ptr [edx*4 + 0x111e4890] */
  switch (EDX) {
    case 0: goto L_111e48a0;
    case 1: goto L_111e48a8;
    case 2: goto L_111e48b8;
    case 3: goto L_111e48cc;
    default: x86_unimpl("switch@0x111e4767 out of table"); return;
  }
  /* 111e476e mov edi, edi */
  EDI = (EDI);
L_111e4770:;
  /* 111e4770 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e4772 jmp dword ptr [ecx*4 + 0x111e4840] */
  switch (ECX) {
    case 0: goto L_111e4887;
    default: x86_unimpl("switch@0x111e4772 out of table"); return;
  }
  /* 111e4779 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e477c:;
  /* 111e477c mov eax, edi */
  EAX = (EDI);
  /* 111e477e mov edx, 3 */
  EDX = (0x3u);
  /* 111e4783 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4786 jb 0x111e4794 */
  if (C.cf) goto L_111e4794;
  /* 111e4788 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 111e478b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e478d jmp dword ptr [eax*4 + 0x111e4798] */
  switch (EAX) {
    case 1: goto L_111e47a8;
    case 2: goto L_111e47c8;
    case 3: goto L_111e47f0;
    default: x86_unimpl("switch@0x111e478d out of table"); return;
  }
L_111e4794:;
  /* 111e4794 jmp dword ptr [ecx*4 + 0x111e4890] */
  switch (ECX) {
    case 0: goto L_111e48a0;
    case 1: goto L_111e48a8;
    case 2: goto L_111e48b8;
    case 3: goto L_111e48cc;
    default: x86_unimpl("switch@0x111e4794 out of table"); return;
  }
  /* 111e479b nop  */
  /* nop */
L_111e47a8:;
  /* 111e47a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e47ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e47ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e47b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 111e47b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e47b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 111e47b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e47b8 jb 0x111e4770 */
  if (C.cf) goto L_111e4770;
  /* 111e47ba std  */
  C.df=1;
  /* 111e47bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e47bd cld  */
  C.df=0;
  /* 111e47be jmp dword ptr [edx*4 + 0x111e4890] */
  switch (EDX) {
    case 0: goto L_111e48a0;
    case 1: goto L_111e48a8;
    case 2: goto L_111e48b8;
    case 3: goto L_111e48cc;
    default: x86_unimpl("switch@0x111e47be out of table"); return;
  }
  /* 111e47c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e47c8:;
  /* 111e47c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e47cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e47cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e47d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e47d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e47d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e47d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e47dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e47df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e47e2 jb 0x111e4770 */
  if (C.cf) goto L_111e4770;
  /* 111e47e4 std  */
  C.df=1;
  /* 111e47e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e47e7 cld  */
  C.df=0;
  /* 111e47e8 jmp dword ptr [edx*4 + 0x111e4890] */
  switch (EDX) {
    case 0: goto L_111e48a0;
    case 1: goto L_111e48a8;
    case 2: goto L_111e48b8;
    case 3: goto L_111e48cc;
    default: x86_unimpl("switch@0x111e47e8 out of table"); return;
  }
  /* 111e47ef nop  */
  /* nop */
L_111e47f0:;
  /* 111e47f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e47f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e47f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e47f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e47fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e47fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e4801 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 111e4804 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e4807 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e480a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e480d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4810 jb 0x111e4770 */
  if (C.cf) goto L_111e4770;
  /* 111e4816 std  */
  C.df=1;
  /* 111e4817 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 111e4819 cld  */
  C.df=0;
  /* 111e481a jmp dword ptr [edx*4 + 0x111e4890] */
  switch (EDX) {
    case 0: goto L_111e48a0;
    case 1: goto L_111e48a8;
    case 2: goto L_111e48b8;
    case 3: goto L_111e48cc;
    default: x86_unimpl("switch@0x111e481a out of table"); return;
  }
  /* 111e4821 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 111e4824 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 111e4825 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e4826 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 111e4827 adc dword ptr [eax + ecx*2 + 0x1e], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*2 + 0x1e))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ECX*2 + 0x1e), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e482b adc dword ptr [eax + ecx*2 + 0x1e], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*2 + 0x1e))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ECX*2 + 0x1e), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e482f adc dword ptr [eax + ecx*2 + 0x1e], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*2 + 0x1e))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ECX*2 + 0x1e), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e4833 adc dword ptr [eax + ecx*2 + 0x1e], esp */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*2 + 0x1e))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ECX*2 + 0x1e), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e4837 adc dword ptr [eax + ecx*2 + 0x1e], ebp */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*2 + 0x1e))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ECX*2 + 0x1e), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e483b adc dword ptr [eax + ecx*2 + 0x1e], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*2 + 0x1e))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ECX*2 + 0x1e), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e4844 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 111e4848 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 111e484c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 111e4850 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 111e4854 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 111e4858 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 111e485c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 111e4860 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 111e4864 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 111e4868 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 111e486c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 111e4870 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 111e4874 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 111e4878 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 111e487c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 111e4883 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4885 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_111e4887:;
  /* 111e4887 jmp dword ptr [edx*4 + 0x111e4890] */
  switch (EDX) {
    case 0: goto L_111e48a0;
    case 1: goto L_111e48a8;
    case 2: goto L_111e48b8;
    case 3: goto L_111e48cc;
    default: x86_unimpl("switch@0x111e4887 out of table"); return;
  }
  /* 111e488e mov edi, edi */
  EDI = (EDI);
L_111e48a0:;
  /* 111e48a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e48a3 pop esi */
  ESI = (pop32());
  /* 111e48a4 pop edi */
  EDI = (pop32());
  /* 111e48a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e48a6 ret  */
  ESPCHK(0x111e45b0u, _esp0);
  ESP += 4; return;
  /* 111e48a7 nop  */
  /* nop */
L_111e48a8:;
  /* 111e48a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e48ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e48ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e48b1 pop esi */
  ESI = (pop32());
  /* 111e48b2 pop edi */
  EDI = (pop32());
  /* 111e48b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e48b4 ret  */
  ESPCHK(0x111e45b0u, _esp0);
  ESP += 4; return;
  /* 111e48b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_111e48b8:;
  /* 111e48b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e48bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e48be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e48c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e48c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e48c7 pop esi */
  ESI = (pop32());
  /* 111e48c8 pop edi */
  EDI = (pop32());
  /* 111e48c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e48ca ret  */
  ESPCHK(0x111e45b0u, _esp0);
  ESP += 4; return;
  /* 111e48cb nop  */
  /* nop */
L_111e48cc:;
  /* 111e48cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 111e48cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 111e48d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 111e48d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 111e48d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 111e48db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 111e48de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e48e1 pop esi */
  ESI = (pop32());
  /* 111e48e2 pop edi */
  EDI = (pop32());
  /* 111e48e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e48e4 ret  */
  ESPCHK(0x111e45b0u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x111e48e5 (18 bytes, 6 insns) */
void f_111e48e5(void) {
  FTRACE(0x111e48e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e48e5 push dword ptr [0x111edfc8] */
  push32((uint32_t)(r32((uint32_t)(0x111edfc8))));
  /* 111e48eb push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 111e48ef call 0x111e48f7 */
  push32(0x111e48f4u); f_111e48f7();
  /* 111e48f4 pop ecx */
  ECX = (pop32());
  /* 111e48f5 pop ecx */
  ECX = (pop32());
  /* 111e48f6 ret  */
  ESPCHK(0x111e48e5u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x111e48f7 (44 bytes, 16 insns) */
void f_111e48f7(void) {
  FTRACE(0x111e48f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e48f7 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e48fc ja 0x111e4920 */
  if ((!C.cf&&!C.zf)) goto L_111e4920;
L_111e48fe:;
  /* 111e48fe push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 111e4902 call 0x111e4923 */
  push32(0x111e4907u); f_111e4923();
  /* 111e4907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4909 pop ecx */
  ECX = (pop32());
  /* 111e490a jne 0x111e4922 */
  if (!C.zf) goto L_111e4922;
  /* 111e490c cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4910 je 0x111e4922 */
  if (C.zf) goto L_111e4922;
  /* 111e4912 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 111e4916 call 0x111e7362 */
  push32(0x111e491bu); f_111e7362();
  /* 111e491b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e491d pop ecx */
  ECX = (pop32());
  /* 111e491e jne 0x111e48fe */
  if (!C.zf) goto L_111e48fe;
L_111e4920:;
  /* 111e4920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e4922:;
  /* 111e4922 ret  */
  ESPCHK(0x111e48f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004923 @ 0x111e4923 (231 bytes, 81 insns) */
void f_111e4923(void) {
  FTRACE(0x111e4923u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4923 push ebp */
  push32((uint32_t)(EBP));
  /* 111e4924 mov ebp, esp */
  EBP = (ESP);
  /* 111e4926 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 111e4928 push 0x111e91a8 */
  push32((uint32_t)(0x111e91a8u));
  /* 111e492d push 0x111e6b24 */
  push32((uint32_t)(0x111e6b24u));
  /* 111e4932 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 111e4938 push eax */
  push32((uint32_t)(EAX));
  /* 111e4939 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 111e4940 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4943 push ebx */
  push32((uint32_t)(EBX));
  /* 111e4944 push esi */
  push32((uint32_t)(ESI));
  /* 111e4945 push edi */
  push32((uint32_t)(EDI));
  /* 111e4946 mov eax, dword ptr [0x111ee3a8] */
  EAX = (r32((uint32_t)(0x111ee3a8)));
  /* 111e494b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e494e jne 0x111e4993 */
  if (!C.zf) goto L_111e4993;
  /* 111e4950 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e4953 cmp esi, dword ptr [0x111ee3a0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111ee3a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4959 ja 0x111e49f2 */
  if ((!C.cf&&!C.zf)) goto L_111e49f2;
  /* 111e495f push 9 */
  push32((uint32_t)(0x9u));
  /* 111e4961 call 0x111e69b6 */
  push32(0x111e4966u); f_111e69b6();
  /* 111e4966 pop ecx */
  ECX = (pop32());
  /* 111e4967 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e496b push esi */
  push32((uint32_t)(ESI));
  /* 111e496c call 0x111e5e48 */
  push32(0x111e4971u); f_111e5e48();
  /* 111e4971 pop ecx */
  ECX = (pop32());
  /* 111e4972 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111e4975 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e4979 call 0x111e498a */
  push32(0x111e497eu); f_111e498a();
  /* 111e497e mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111e4981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4983 je 0x111e49f2 */
  if (C.zf) goto L_111e49f2;
  /* 111e4985 jmp 0x111e4a10 */
  jmp_ind(0x111e4a10u); return;
  /* 111e498a push 9 */
  push32((uint32_t)(0x9u));
  /* 111e498c call 0x111e6a17 */
  push32(0x111e4991u); f_111e6a17();
  /* 111e4991 pop ecx */
  ECX = (pop32());
  /* 111e4992 ret  */
  ESPCHK(0x111e4923u, _esp0);
  ESP += 4; return;
L_111e4993:;
  /* 111e4993 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4996 jne 0x111e49f2 */
  if (!C.zf) goto L_111e49f2;
  /* 111e4998 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e499b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e499d je 0x111e49a7 */
  if (C.zf) goto L_111e49a7;
  /* 111e499f lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 111e49a2 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 111e49a5 jmp 0x111e49aa */
  goto L_111e49aa;
L_111e49a7:;
  /* 111e49a7 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 111e49a9 pop esi */
  ESI = (pop32());
L_111e49aa:;
  /* 111e49aa mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 111e49ad cmp esi, dword ptr [0x111eca5c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111eca5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e49b3 ja 0x111e49e3 */
  if ((!C.cf&&!C.zf)) goto L_111e49e3;
  /* 111e49b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e49b7 call 0x111e69b6 */
  push32(0x111e49bcu); f_111e69b6();
  /* 111e49bc pop ecx */
  ECX = (pop32());
  /* 111e49bd mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111e49c4 mov eax, esi */
  EAX = (ESI);
  /* 111e49c6 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111e49c9 push eax */
  push32((uint32_t)(EAX));
  /* 111e49ca call 0x111e65f5 */
  push32(0x111e49cfu); f_111e65f5();
  /* 111e49cf pop ecx */
  ECX = (pop32());
  /* 111e49d0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 111e49d3 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e49d7 call 0x111e49e9 */
  push32(0x111e49dcu); f_111e49e9();
  /* 111e49dc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 111e49df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e49e1 jne 0x111e4a10 */
  if (!C.zf) { jmp_ind(0x111e4a10u); return; }
L_111e49e3:;
  /* 111e49e3 push esi */
  push32((uint32_t)(ESI));
  /* 111e49e4 jmp 0x111e4a02 */
  goto L_111e4a02;
  /* 111e49e6 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 111e49e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e49eb call 0x111e6a17 */
  push32(0x111e49f0u); f_111e6a17();
  /* 111e49f0 pop ecx */
  ECX = (pop32());
  /* 111e49f1 ret  */
  ESPCHK(0x111e4923u, _esp0);
  ESP += 4; return;
L_111e49f2:;
  /* 111e49f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e49f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e49f7 jne 0x111e49fc */
  if (!C.zf) goto L_111e49fc;
  /* 111e49f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e49fb pop eax */
  EAX = (pop32());
L_111e49fc:;
  /* 111e49fc add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e49ff and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 111e4a01 push eax */
  push32((uint32_t)(EAX));
L_111e4a02:;
  /* 111e4a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e4a04 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
}

/* FUN_1000498a @ 0x111e498a (9 bytes, 4 insns) */
void f_111e498a(void) {
  FTRACE(0x111e498au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e498a push 9 */
  push32((uint32_t)(0x9u));
  /* 111e498c call 0x111e6a17 */
  push32(0x111e4991u); f_111e6a17();
  /* 111e4991 pop ecx */
  ECX = (pop32());
  /* 111e4992 ret  */
  ESPCHK(0x111e498au, _esp0);
  ESP += 4; return;
}

/* FUN_100049e9 @ 0x111e49e9 (9 bytes, 4 insns) */
void f_111e49e9(void) {
  FTRACE(0x111e49e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e49e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e49eb call 0x111e6a17 */
  push32(0x111e49f0u); f_111e6a17();
  /* 111e49f0 pop ecx */
  ECX = (pop32());
  /* 111e49f1 ret  */
  ESPCHK(0x111e49e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a1f @ 0x111e4a1f (115 bytes, 37 insns) */
void f_111e4a1f(void) {
  FTRACE(0x111e4a1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4a1f push esi */
  push32((uint32_t)(ESI));
  /* 111e4a20 call 0x111e4a9b */
  push32(0x111e4a25u); f_111e4a9b();
  /* 111e4a25 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e4a29 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e4a2b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111e4a2d mov eax, 0x111ea810 */
  EAX = (0x111ea810u);
L_111e4a32:;
  /* 111e4a32 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4a34 je 0x111e4a58 */
  if (C.zf) goto L_111e4a58;
  /* 111e4a36 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4a39 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e4a3a cmp eax, 0x111ea978 */
  { uint32_t _a=(EAX),_b=(0x111ea978u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4a3f jl 0x111e4a32 */
  if ((C.sf!=C.of)) goto L_111e4a32;
  /* 111e4a41 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4a44 jb 0x111e4a68 */
  if (C.cf) goto L_111e4a68;
  /* 111e4a46 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4a49 ja 0x111e4a68 */
  if ((!C.cf&&!C.zf)) goto L_111e4a68;
  /* 111e4a4b call 0x111e4a92 */
  push32(0x111e4a50u); f_111e4a92();
  /* 111e4a50 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 111e4a56 pop esi */
  ESI = (pop32());
  /* 111e4a57 ret  */
  ESPCHK(0x111e4a1fu, _esp0);
  ESP += 4; return;
L_111e4a58:;
  /* 111e4a58 call 0x111e4a92 */
  push32(0x111e4a5du); f_111e4a92();
  /* 111e4a5d mov ecx, dword ptr [esi*8 + 0x111ea814] */
  ECX = (r32((uint32_t)(ESI*8 + 0x111ea814)));
  /* 111e4a64 pop esi */
  ESI = (pop32());
  /* 111e4a65 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111e4a67 ret  */
  ESPCHK(0x111e4a1fu, _esp0);
  ESP += 4; return;
L_111e4a68:;
  /* 111e4a68 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4a6e jb 0x111e4a85 */
  if (C.cf) goto L_111e4a85;
  /* 111e4a70 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4a76 ja 0x111e4a85 */
  if ((!C.cf&&!C.zf)) goto L_111e4a85;
  /* 111e4a78 call 0x111e4a92 */
  push32(0x111e4a7du); f_111e4a92();
  /* 111e4a7d mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 111e4a83 pop esi */
  ESI = (pop32());
  /* 111e4a84 ret  */
  ESPCHK(0x111e4a1fu, _esp0);
  ESP += 4; return;
L_111e4a85:;
  /* 111e4a85 call 0x111e4a92 */
  push32(0x111e4a8au); f_111e4a92();
  /* 111e4a8a mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 111e4a90 pop esi */
  ESI = (pop32());
  /* 111e4a91 ret  */
  ESPCHK(0x111e4a1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004a92 @ 0x111e4a92 (9 bytes, 3 insns) */
void f_111e4a92(void) {
  FTRACE(0x111e4a92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4a92 call 0x111e5167 */
  push32(0x111e4a97u); f_111e5167();
  /* 111e4a97 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4a9a ret  */
  ESPCHK(0x111e4a92u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a9b @ 0x111e4a9b (9 bytes, 3 insns) */
void f_111e4a9b(void) {
  FTRACE(0x111e4a9bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4a9b call 0x111e5167 */
  push32(0x111e4aa0u); f_111e5167();
  /* 111e4aa0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4aa3 ret  */
  ESPCHK(0x111e4a9bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004aa4 @ 0x111e4aa4 (444 bytes, 150 insns) */
void f_111e4aa4(void) {
  FTRACE(0x111e4aa4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4aa4 push ebp */
  push32((uint32_t)(EBP));
  /* 111e4aa5 mov ebp, esp */
  EBP = (ESP);
  /* 111e4aa7 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4aaa push ebx */
  push32((uint32_t)(EBX));
  /* 111e4aab push esi */
  push32((uint32_t)(ESI));
  /* 111e4aac push edi */
  push32((uint32_t)(EDI));
  /* 111e4aad push 0x480 */
  push32((uint32_t)(0x480u));
  /* 111e4ab2 call 0x111e48e5 */
  push32(0x111e4ab7u); f_111e48e5();
  /* 111e4ab7 mov esi, eax */
  ESI = (EAX);
  /* 111e4ab9 pop ecx */
  ECX = (pop32());
  /* 111e4aba test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e4abc jne 0x111e4ac6 */
  if (!C.zf) goto L_111e4ac6;
  /* 111e4abe push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 111e4ac0 call 0x111e3cf8 */
  push32(0x111e4ac5u); f_111e3cf8();
  /* 111e4ac5 pop ecx */
  ECX = (pop32());
L_111e4ac6:;
  /* 111e4ac6 mov dword ptr [0x111ee3c0], esi */
  w32((uint32_t)(0x111ee3c0), (ESI));
  /* 111e4acc mov dword ptr [0x111ee4c0], 0x20 */
  w32((uint32_t)(0x111ee4c0), (0x20u));
  /* 111e4ad6 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_111e4adc:;
  /* 111e4adc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4ade jae 0x111e4afe */
  if (!C.cf) goto L_111e4afe;
  /* 111e4ae0 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 111e4ae4 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 111e4ae7 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 111e4aeb mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 111e4aef mov eax, dword ptr [0x111ee3c0] */
  EAX = (r32((uint32_t)(0x111ee3c0)));
  /* 111e4af4 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4af7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4afc jmp 0x111e4adc */
  goto L_111e4adc;
L_111e4afe:;
  /* 111e4afe lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 111e4b01 push eax */
  push32((uint32_t)(EAX));
  /* 111e4b02 call dword ptr [0x111e909c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e909c))), 0x111e4b08u);
  /* 111e4b08 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 111e4b0d je 0x111e4be4 */
  if (C.zf) goto L_111e4be4;
  /* 111e4b13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 111e4b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4b18 je 0x111e4be4 */
  if (C.zf) goto L_111e4be4;
  /* 111e4b1e mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 111e4b20 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 111e4b23 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 111e4b26 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111e4b29 mov eax, 0x800 */
  EAX = (0x800u);
  /* 111e4b2e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4b30 jl 0x111e4b34 */
  if ((C.sf!=C.of)) goto L_111e4b34;
  /* 111e4b32 mov edi, eax */
  EDI = (EAX);
L_111e4b34:;
  /* 111e4b34 cmp dword ptr [0x111ee4c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x111ee4c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4b3a jge 0x111e4b92 */
  if ((C.sf==C.of)) goto L_111e4b92;
  /* 111e4b3c mov esi, 0x111ee3c4 */
  ESI = (0x111ee3c4u);
L_111e4b41:;
  /* 111e4b41 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 111e4b46 call 0x111e48e5 */
  push32(0x111e4b4bu); f_111e48e5();
  /* 111e4b4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4b4d pop ecx */
  ECX = (pop32());
  /* 111e4b4e je 0x111e4b8c */
  if (C.zf) goto L_111e4b8c;
  /* 111e4b50 add dword ptr [0x111ee4c0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x111ee4c0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x111ee4c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e4b57 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111e4b59 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_111e4b5f:;
  /* 111e4b5f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4b61 jae 0x111e4b7f */
  if (!C.cf) goto L_111e4b7f;
  /* 111e4b63 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 111e4b67 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e4b6a and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 111e4b6e mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 111e4b72 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 111e4b74 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4b77 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4b7d jmp 0x111e4b5f */
  goto L_111e4b5f;
L_111e4b7f:;
  /* 111e4b7f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4b82 cmp dword ptr [0x111ee4c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x111ee4c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4b88 jl 0x111e4b41 */
  if ((C.sf!=C.of)) goto L_111e4b41;
  /* 111e4b8a jmp 0x111e4b92 */
  goto L_111e4b92;
L_111e4b8c:;
  /* 111e4b8c mov edi, dword ptr [0x111ee4c0] */
  EDI = (r32((uint32_t)(0x111ee4c0)));
L_111e4b92:;
  /* 111e4b92 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e4b94 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e4b96 jle 0x111e4be4 */
  if ((C.zf||C.sf!=C.of)) goto L_111e4be4;
L_111e4b98:;
  /* 111e4b98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e4b9b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 111e4b9d cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4ba0 je 0x111e4bda */
  if (C.zf) goto L_111e4bda;
  /* 111e4ba2 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 111e4ba4 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 111e4ba6 je 0x111e4bda */
  if (C.zf) goto L_111e4bda;
  /* 111e4ba8 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 111e4baa jne 0x111e4bb7 */
  if (!C.zf) goto L_111e4bb7;
  /* 111e4bac push ecx */
  push32((uint32_t)(ECX));
  /* 111e4bad call dword ptr [0x111e9098] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9098))), 0x111e4bb3u);
  /* 111e4bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4bb5 je 0x111e4bda */
  if (C.zf) goto L_111e4bda;
L_111e4bb7:;
  /* 111e4bb7 mov ecx, esi */
  ECX = (ESI);
  /* 111e4bb9 mov eax, esi */
  EAX = (ESI);
  /* 111e4bbb sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e4bbe and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4bc1 mov ecx, dword ptr [ecx*4 + 0x111ee3c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e4bc8 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 111e4bcb lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 111e4bce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e4bd1 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 111e4bd3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111e4bd5 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 111e4bd7 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_111e4bda:;
  /* 111e4bda add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e4bde inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e4bdf inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e4be0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4be2 jl 0x111e4b98 */
  if ((C.sf!=C.of)) goto L_111e4b98;
L_111e4be4:;
  /* 111e4be4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_111e4be6:;
  /* 111e4be6 mov ecx, dword ptr [0x111ee3c0] */
  ECX = (r32((uint32_t)(0x111ee3c0)));
  /* 111e4bec lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 111e4bef cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4bf3 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 111e4bf6 jne 0x111e4c45 */
  if (!C.zf) goto L_111e4c45;
  /* 111e4bf8 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e4bfa mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 111e4bfe jne 0x111e4c05 */
  if (!C.zf) goto L_111e4c05;
  /* 111e4c00 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 111e4c02 pop eax */
  EAX = (pop32());
  /* 111e4c03 jmp 0x111e4c0f */
  goto L_111e4c0f;
L_111e4c05:;
  /* 111e4c05 mov eax, ebx */
  EAX = (EBX);
  /* 111e4c07 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e4c08 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 111e4c0a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4c0c add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111e4c0f:;
  /* 111e4c0f push eax */
  push32((uint32_t)(EAX));
  /* 111e4c10 call dword ptr [0x111e9094] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9094))), 0x111e4c16u);
  /* 111e4c16 mov edi, eax */
  EDI = (EAX);
  /* 111e4c18 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4c1b je 0x111e4c34 */
  if (C.zf) goto L_111e4c34;
  /* 111e4c1d push edi */
  push32((uint32_t)(EDI));
  /* 111e4c1e call dword ptr [0x111e9098] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9098))), 0x111e4c24u);
  /* 111e4c24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4c26 je 0x111e4c34 */
  if (C.zf) goto L_111e4c34;
  /* 111e4c28 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4c2d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 111e4c2f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4c32 jne 0x111e4c3a */
  if (!C.zf) goto L_111e4c3a;
L_111e4c34:;
  /* 111e4c34 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 111e4c38 jmp 0x111e4c49 */
  goto L_111e4c49;
L_111e4c3a:;
  /* 111e4c3a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4c3d jne 0x111e4c49 */
  if (!C.zf) goto L_111e4c49;
  /* 111e4c3f or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 111e4c43 jmp 0x111e4c49 */
  goto L_111e4c49;
L_111e4c45:;
  /* 111e4c45 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_111e4c49:;
  /* 111e4c49 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e4c4a cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4c4d jl 0x111e4be6 */
  if ((C.sf!=C.of)) goto L_111e4be6;
  /* 111e4c4f push dword ptr [0x111ee4c0] */
  push32((uint32_t)(r32((uint32_t)(0x111ee4c0))));
  /* 111e4c55 call dword ptr [0x111e9090] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9090))), 0x111e4c5bu);
  /* 111e4c5b pop edi */
  EDI = (pop32());
  /* 111e4c5c pop esi */
  ESI = (pop32());
  /* 111e4c5d pop ebx */
  EBX = (pop32());
  /* 111e4c5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e4c5f ret  */
  ESPCHK(0x111e4aa4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c60 @ 0x111e4c60 (84 bytes, 33 insns) */
void f_111e4c60(void) {
  FTRACE(0x111e4c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4c60 push ebx */
  push32((uint32_t)(EBX));
  /* 111e4c61 push esi */
  push32((uint32_t)(ESI));
  /* 111e4c62 push edi */
  push32((uint32_t)(EDI));
  /* 111e4c63 mov esi, 0x111ee3c0 */
  ESI = (0x111ee3c0u);
L_111e4c68:;
  /* 111e4c68 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 111e4c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4c6c je 0x111e4ca5 */
  if (C.zf) goto L_111e4ca5;
  /* 111e4c6e mov edi, eax */
  EDI = (EAX);
  /* 111e4c70 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4c75 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4c77 jae 0x111e4c9a */
  if (!C.cf) goto L_111e4c9a;
  /* 111e4c79 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_111e4c7c:;
  /* 111e4c7c cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4c80 je 0x111e4c89 */
  if (C.zf) goto L_111e4c89;
  /* 111e4c82 push ebx */
  push32((uint32_t)(EBX));
  /* 111e4c83 call dword ptr [0x111e90a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90a0))), 0x111e4c89u);
L_111e4c89:;
  /* 111e4c89 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 111e4c8b add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4c8e add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4c93 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4c96 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4c98 jb 0x111e4c7c */
  if (C.cf) goto L_111e4c7c;
L_111e4c9a:;
  /* 111e4c9a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111e4c9c call 0x111e3d2b */
  push32(0x111e4ca1u); f_111e3d2b();
  /* 111e4ca1 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 111e4ca4 pop ecx */
  ECX = (pop32());
L_111e4ca5:;
  /* 111e4ca5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4ca8 cmp esi, 0x111ee4c0 */
  { uint32_t _a=(ESI),_b=(0x111ee4c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4cae jl 0x111e4c68 */
  if ((C.sf!=C.of)) goto L_111e4c68;
  /* 111e4cb0 pop edi */
  EDI = (pop32());
  /* 111e4cb1 pop esi */
  ESI = (pop32());
  /* 111e4cb2 pop ebx */
  EBX = (pop32());
  /* 111e4cb3 ret  */
  ESPCHK(0x111e4c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cb4 @ 0x111e4cb4 (101 bytes, 34 insns) */
void f_111e4cb4(void) {
  FTRACE(0x111e4cb4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4cb4 push esi */
  push32((uint32_t)(ESI));
  /* 111e4cb5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e4cb9 cmp esi, dword ptr [0x111ee4c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111ee4c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4cbf jae 0x111e4d01 */
  if (!C.cf) goto L_111e4d01;
  /* 111e4cc1 mov ecx, esi */
  ECX = (ESI);
  /* 111e4cc3 mov eax, esi */
  EAX = (ESI);
  /* 111e4cc5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e4cc8 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4ccb mov ecx, dword ptr [ecx*4 + 0x111ee3c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e4cd2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 111e4cd5 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 111e4cda je 0x111e4d01 */
  if (C.zf) goto L_111e4d01;
  /* 111e4cdc push edi */
  push32((uint32_t)(EDI));
  /* 111e4cdd push esi */
  push32((uint32_t)(ESI));
  /* 111e4cde call 0x111e701a */
  push32(0x111e4ce3u); f_111e701a();
  /* 111e4ce3 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e4ce7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e4ceb push esi */
  push32((uint32_t)(ESI));
  /* 111e4cec call 0x111e4d19 */
  push32(0x111e4cf1u); f_111e4d19();
  /* 111e4cf1 push esi */
  push32((uint32_t)(ESI));
  /* 111e4cf2 mov edi, eax */
  EDI = (EAX);
  /* 111e4cf4 call 0x111e7079 */
  push32(0x111e4cf9u); f_111e7079();
  /* 111e4cf9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4cfc mov eax, edi */
  EAX = (EDI);
  /* 111e4cfe pop edi */
  EDI = (pop32());
  /* 111e4cff pop esi */
  ESI = (pop32());
  /* 111e4d00 ret  */
  ESPCHK(0x111e4cb4u, _esp0);
  ESP += 4; return;
L_111e4d01:;
  /* 111e4d01 call 0x111e4a92 */
  push32(0x111e4d06u); f_111e4a92();
  /* 111e4d06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e4d0c call 0x111e4a9b */
  push32(0x111e4d11u); f_111e4a9b();
  /* 111e4d11 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e4d14 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4d17 pop esi */
  ESI = (pop32());
  /* 111e4d18 ret  */
  ESPCHK(0x111e4cb4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d19 @ 0x111e4d19 (115 bytes, 41 insns) */
void f_111e4d19(void) {
  FTRACE(0x111e4d19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4d19 push esi */
  push32((uint32_t)(ESI));
  /* 111e4d1a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e4d1e push edi */
  push32((uint32_t)(EDI));
  /* 111e4d1f push esi */
  push32((uint32_t)(ESI));
  /* 111e4d20 call 0x111e6fd8 */
  push32(0x111e4d25u); f_111e6fd8();
  /* 111e4d25 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4d28 pop ecx */
  ECX = (pop32());
  /* 111e4d29 jne 0x111e4d38 */
  if (!C.zf) goto L_111e4d38;
  /* 111e4d2b call 0x111e4a92 */
  push32(0x111e4d30u); f_111e4a92();
  /* 111e4d30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 111e4d36 jmp 0x111e4d65 */
  goto L_111e4d65;
L_111e4d38:;
  /* 111e4d38 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 111e4d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e4d3e push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 111e4d42 push eax */
  push32((uint32_t)(EAX));
  /* 111e4d43 call dword ptr [0x111e90a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90a4))), 0x111e4d49u);
  /* 111e4d49 mov edi, eax */
  EDI = (EAX);
  /* 111e4d4b cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4d4e jne 0x111e4d58 */
  if (!C.zf) goto L_111e4d58;
  /* 111e4d50 call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e4d56u);
  /* 111e4d56 jmp 0x111e4d5a */
  goto L_111e4d5a;
L_111e4d58:;
  /* 111e4d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e4d5a:;
  /* 111e4d5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4d5c je 0x111e4d6a */
  if (C.zf) goto L_111e4d6a;
  /* 111e4d5e push eax */
  push32((uint32_t)(EAX));
  /* 111e4d5f call 0x111e4a1f */
  push32(0x111e4d64u); f_111e4a1f();
  /* 111e4d64 pop ecx */
  ECX = (pop32());
L_111e4d65:;
  /* 111e4d65 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e4d68 jmp 0x111e4d89 */
  goto L_111e4d89;
L_111e4d6a:;
  /* 111e4d6a mov ecx, esi */
  ECX = (ESI);
  /* 111e4d6c and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 111e4d6f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 111e4d72 mov eax, esi */
  EAX = (ESI);
  /* 111e4d74 mov ecx, dword ptr [ecx*4 + 0x111ee3c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x111ee3c0)));
  /* 111e4d7b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 111e4d7e and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 111e4d83 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 111e4d87 mov eax, edi */
  EAX = (EDI);
L_111e4d89:;
  /* 111e4d89 pop edi */
  EDI = (pop32());
  /* 111e4d8a pop esi */
  ESI = (pop32());
  /* 111e4d8b ret  */
  ESPCHK(0x111e4d19u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d8c @ 0x111e4d8c (368 bytes, 124 insns) */
void f_111e4d8c(void) {
  FTRACE(0x111e4d8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4d8c push ebp */
  push32((uint32_t)(EBP));
  /* 111e4d8d mov ebp, esp */
  EBP = (ESP);
  /* 111e4d8f push ecx */
  push32((uint32_t)(ECX));
  /* 111e4d90 push ecx */
  push32((uint32_t)(ECX));
  /* 111e4d91 push ebx */
  push32((uint32_t)(EBX));
  /* 111e4d92 push esi */
  push32((uint32_t)(ESI));
  /* 111e4d93 mov esi, dword ptr [0x111edfd0] */
  ESI = (r32((uint32_t)(0x111edfd0)));
  /* 111e4d99 push edi */
  push32((uint32_t)(EDI));
  /* 111e4d9a mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e4d9d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e4d9f mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 111e4da2 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 111e4da5 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 111e4da7 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4da9 je 0x111e4dc5 */
  if (C.zf) goto L_111e4dc5;
  /* 111e4dab cmp al, 0x72 */
  { uint32_t _a=(AL),_b=(0x72u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4dad je 0x111e4dbe */
  if (C.zf) goto L_111e4dbe;
  /* 111e4daf cmp al, 0x77 */
  { uint32_t _a=(AL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4db1 jne 0x111e4ed9 */
  if (!C.zf) goto L_111e4ed9;
  /* 111e4db7 mov ecx, 0x301 */
  ECX = (0x301u);
  /* 111e4dbc jmp 0x111e4dca */
  goto L_111e4dca;
L_111e4dbe:;
  /* 111e4dbe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e4dc0 or esi, 1 */
  { uint32_t _r=(ESI)|(0x1u); ESI = (_r); fl_logic(_r,32); }
  /* 111e4dc3 jmp 0x111e4dcd */
  goto L_111e4dcd;
L_111e4dc5:;
  /* 111e4dc5 mov ecx, 0x109 */
  ECX = (0x109u);
L_111e4dca:;
  /* 111e4dca or esi, 2 */
  { uint32_t _r=(ESI)|(0x2u); ESI = (_r); fl_logic(_r,32); }
L_111e4dcd:;
  /* 111e4dcd push 1 */
  push32((uint32_t)(0x1u));
  /* 111e4dcf pop edx */
  EDX = (pop32());
L_111e4dd0:;
  /* 111e4dd0 mov al, byte ptr [edi + 1] */
  AL = (r8((uint32_t)(EDI + 0x1)));
  /* 111e4dd3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e4dd4 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e4dd6 je 0x111e4ebf */
  if (C.zf) goto L_111e4ebf;
  /* 111e4ddc cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4dde je 0x111e4ebf */
  if (C.zf) goto L_111e4ebf;
  /* 111e4de4 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 111e4de7 cmp eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4dea jg 0x111e4e5e */
  if ((!C.zf&&C.sf==C.of)) goto L_111e4e5e;
  /* 111e4dec je 0x111e4e4e */
  if (C.zf) goto L_111e4e4e;
  /* 111e4dee sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4df1 je 0x111e4e38 */
  if (C.zf) goto L_111e4e38;
  /* 111e4df3 sub eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4df6 je 0x111e4e2e */
  if (C.zf) goto L_111e4e2e;
  /* 111e4df8 sub eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4dfb je 0x111e4e19 */
  if (C.zf) goto L_111e4e19;
  /* 111e4dfd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e4dfe jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e04 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4e07 jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e0d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111e4e14 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 111e4e17 jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4e19:;
  /* 111e4e19 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4e1c jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e22 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 111e4e29 or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 111e4e2c jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4e2e:;
  /* 111e4e2e test cl, 0x40 */
  { uint32_t _r=(CL)&(0x40u); fl_logic(_r,8); }
  /* 111e4e31 jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e33 or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 111e4e36 jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4e38:;
  /* 111e4e38 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 111e4e3b jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e3d and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 111e4e40 and esi, 0xfffffffc */
  { uint32_t _r=(ESI)&(0xfffffffcu); ESI = (_r); fl_logic(_r,32); }
  /* 111e4e43 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 111e4e46 or esi, 0x80 */
  { uint32_t _r=(ESI)|(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 111e4e4c jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4e4e:;
  /* 111e4e4e mov eax, 0x1000 */
  EAX = (0x1000u);
  /* 111e4e53 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 111e4e55 jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 111e4e59 jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4e5e:;
  /* 111e4e5e sub eax, 0x62 */
  { uint32_t _a=(EAX),_b=(0x62u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4e61 je 0x111e4eab */
  if (C.zf) goto L_111e4eab;
  /* 111e4e63 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e4e64 je 0x111e4e94 */
  if (C.zf) goto L_111e4e94;
  /* 111e4e66 sub eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4e69 je 0x111e4e7d */
  if (C.zf) goto L_111e4e7d;
  /* 111e4e6b sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e4e6e jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e70 test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 111e4e73 jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e75 or ch, 0x40 */
  { uint32_t _r=(C.c.b.h)|(0x40u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 111e4e78 jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4e7d:;
  /* 111e4e7d cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4e80 jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e82 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111e4e89 and esi, 0xffffbfff */
  { uint32_t _r=(ESI)&(0xffffbfffu); ESI = (_r); fl_logic(_r,32); }
  /* 111e4e8f jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4e94:;
  /* 111e4e94 cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4e97 jne 0x111e4eb0 */
  if (!C.zf) goto L_111e4eb0;
  /* 111e4e99 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 111e4ea0 or esi, 0x4000 */
  { uint32_t _r=(ESI)|(0x4000u); ESI = (_r); fl_logic(_r,32); }
  /* 111e4ea6 jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4eab:;
  /* 111e4eab test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 111e4eae je 0x111e4eb7 */
  if (C.zf) goto L_111e4eb7;
L_111e4eb0:;
  /* 111e4eb0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111e4eb2 jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4eb7:;
  /* 111e4eb7 or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 111e4eba jmp 0x111e4dd0 */
  goto L_111e4dd0;
L_111e4ebf:;
  /* 111e4ebf push 0x1a4 */
  push32((uint32_t)(0x1a4u));
  /* 111e4ec4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 111e4ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 111e4ec8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 111e4ecb call 0x111e737d */
  push32(0x111e4ed0u); f_111e737d();
  /* 111e4ed0 mov ecx, eax */
  ECX = (EAX);
  /* 111e4ed2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4ed5 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4ed7 jge 0x111e4edd */
  if ((C.sf==C.of)) goto L_111e4edd;
L_111e4ed9:;
  /* 111e4ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e4edb jmp 0x111e4ef7 */
  goto L_111e4ef7;
L_111e4edd:;
  /* 111e4edd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111e4ee0 inc dword ptr [0x111ede0c] */
  { uint32_t _r=(r32((uint32_t)(0x111ede0c)))+1; w32((uint32_t)(0x111ede0c), (_r)); fl_inc(_r,32); }
  /* 111e4ee6 mov dword ptr [eax + 0xc], esi */
  w32((uint32_t)(EAX + 0xc), (ESI));
  /* 111e4ee9 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 111e4eec mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 111e4eee mov dword ptr [eax + 8], ebx */
  w32((uint32_t)(EAX + 0x8), (EBX));
  /* 111e4ef1 mov dword ptr [eax + 0x1c], ebx */
  w32((uint32_t)(EAX + 0x1c), (EBX));
  /* 111e4ef4 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
L_111e4ef7:;
  /* 111e4ef7 pop edi */
  EDI = (pop32());
  /* 111e4ef8 pop esi */
  ESI = (pop32());
  /* 111e4ef9 pop ebx */
  EBX = (pop32());
  /* 111e4efa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e4efb ret  */
  ESPCHK(0x111e4d8cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004efc @ 0x111e4efc (200 bytes, 73 insns) */
void f_111e4efc(void) {
  FTRACE(0x111e4efcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4efc push ebx */
  push32((uint32_t)(EBX));
  /* 111e4efd push esi */
  push32((uint32_t)(ESI));
  /* 111e4efe push edi */
  push32((uint32_t)(EDI));
  /* 111e4eff push 2 */
  push32((uint32_t)(0x2u));
  /* 111e4f01 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e4f03 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e4f05 call 0x111e69b6 */
  push32(0x111e4f0au); f_111e69b6();
  /* 111e4f0a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e4f0c cmp dword ptr [0x111ef4e0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111ef4e0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4f12 pop ecx */
  ECX = (pop32());
  /* 111e4f13 jle 0x111e4fb6 */
  if ((C.zf||C.sf!=C.of)) goto L_111e4fb6;
L_111e4f19:;
  /* 111e4f19 mov eax, dword ptr [0x111ee4c4] */
  EAX = (r32((uint32_t)(0x111ee4c4)));
  /* 111e4f1e mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 111e4f21 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4f23 je 0x111e4f5c */
  if (C.zf) goto L_111e4f5c;
  /* 111e4f25 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 111e4f29 jne 0x111e4f4c */
  if (!C.zf) goto L_111e4f4c;
  /* 111e4f2b push eax */
  push32((uint32_t)(EAX));
  /* 111e4f2c push esi */
  push32((uint32_t)(ESI));
  /* 111e4f2d call 0x111e3fd7 */
  push32(0x111e4f32u); f_111e3fd7();
  /* 111e4f32 pop ecx */
  ECX = (pop32());
  /* 111e4f33 pop ecx */
  ECX = (pop32());
  /* 111e4f34 mov ecx, dword ptr [0x111ee4c4] */
  ECX = (r32((uint32_t)(0x111ee4c4)));
  /* 111e4f3a mov eax, dword ptr [ecx + esi*4] */
  EAX = (r32((uint32_t)(ECX + ESI*4)));
  /* 111e4f3d test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 111e4f41 je 0x111e4f57 */
  if (C.zf) goto L_111e4f57;
  /* 111e4f43 push eax */
  push32((uint32_t)(EAX));
  /* 111e4f44 push esi */
  push32((uint32_t)(ESI));
  /* 111e4f45 call 0x111e4029 */
  push32(0x111e4f4au); f_111e4029();
  /* 111e4f4a pop ecx */
  ECX = (pop32());
  /* 111e4f4b pop ecx */
  ECX = (pop32());
L_111e4f4c:;
  /* 111e4f4c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e4f4d cmp esi, dword ptr [0x111ef4e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111ef4e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4f53 jl 0x111e4f19 */
  if ((C.sf!=C.of)) goto L_111e4f19;
  /* 111e4f55 jmp 0x111e4fb6 */
  goto L_111e4fb6;
L_111e4f57:;
  /* 111e4f57 mov edi, dword ptr [ecx + esi*4] */
  EDI = (r32((uint32_t)(ECX + ESI*4)));
  /* 111e4f5a jmp 0x111e4fa0 */
  goto L_111e4fa0;
L_111e4f5c:;
  /* 111e4f5c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 111e4f5e shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 111e4f61 call 0x111e48e5 */
  push32(0x111e4f66u); f_111e48e5();
  /* 111e4f66 pop ecx */
  ECX = (pop32());
  /* 111e4f67 mov ecx, dword ptr [0x111ee4c4] */
  ECX = (r32((uint32_t)(0x111ee4c4)));
  /* 111e4f6d mov dword ptr [esi + ecx], eax */
  w32((uint32_t)(ESI + ECX*1), (EAX));
  /* 111e4f70 mov eax, dword ptr [0x111ee4c4] */
  EAX = (r32((uint32_t)(0x111ee4c4)));
  /* 111e4f75 mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 111e4f78 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4f7a je 0x111e4fb6 */
  if (C.zf) goto L_111e4fb6;
  /* 111e4f7c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4f7f push eax */
  push32((uint32_t)(EAX));
  /* 111e4f80 call dword ptr [0x111e9000] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9000))), 0x111e4f86u);
  /* 111e4f86 mov eax, dword ptr [0x111ee4c4] */
  EAX = (r32((uint32_t)(0x111ee4c4)));
  /* 111e4f8b mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 111e4f8e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4f91 push eax */
  push32((uint32_t)(EAX));
  /* 111e4f92 call dword ptr [0x111e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9078))), 0x111e4f98u);
  /* 111e4f98 mov eax, dword ptr [0x111ee4c4] */
  EAX = (r32((uint32_t)(0x111ee4c4)));
  /* 111e4f9d mov edi, dword ptr [esi + eax] */
  EDI = (r32((uint32_t)(ESI + EAX*1)));
L_111e4fa0:;
  /* 111e4fa0 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e4fa2 je 0x111e4fb6 */
  if (C.zf) goto L_111e4fb6;
  /* 111e4fa4 or dword ptr [edi + 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI + 0x10)))|(0xffffffffu); w32((uint32_t)(EDI + 0x10), (_r)); fl_logic(_r,32); }
  /* 111e4fa8 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
  /* 111e4fab mov dword ptr [edi + 0xc], ebx */
  w32((uint32_t)(EDI + 0xc), (EBX));
  /* 111e4fae mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 111e4fb1 mov dword ptr [edi], ebx */
  w32((uint32_t)(EDI), (EBX));
  /* 111e4fb3 mov dword ptr [edi + 0x1c], ebx */
  w32((uint32_t)(EDI + 0x1c), (EBX));
L_111e4fb6:;
  /* 111e4fb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 111e4fb8 call 0x111e6a17 */
  push32(0x111e4fbdu); f_111e6a17();
  /* 111e4fbd pop ecx */
  ECX = (pop32());
  /* 111e4fbe mov eax, edi */
  EAX = (EDI);
  /* 111e4fc0 pop edi */
  EDI = (pop32());
  /* 111e4fc1 pop esi */
  ESI = (pop32());
  /* 111e4fc2 pop ebx */
  EBX = (pop32());
  /* 111e4fc3 ret  */
  ESPCHK(0x111e4efcu, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc4 @ 0x111e4fc4 (45 bytes, 12 insns) */
void f_111e4fc4(void) {
  FTRACE(0x111e4fc4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4fc4 mov eax, dword ptr [0x111ee3bc] */
  EAX = (r32((uint32_t)(0x111ee3bc)));
  /* 111e4fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e4fcb je 0x111e4fcf */
  if (C.zf) goto L_111e4fcf;
  /* 111e4fcd call eax */
  call_ind((uint32_t)(EAX), 0x111e4fcfu);
L_111e4fcf:;
  /* 111e4fcf push 0x111ea028 */
  push32((uint32_t)(0x111ea028u));
  /* 111e4fd4 push 0x111ea01c */
  push32((uint32_t)(0x111ea01cu));
  /* 111e4fd9 call 0x111e50c8 */
  push32(0x111e4fdeu); f_111e50c8();
  /* 111e4fde push 0x111ea018 */
  push32((uint32_t)(0x111ea018u));
  /* 111e4fe3 push 0x111ea000 */
  push32((uint32_t)(0x111ea000u));
  /* 111e4fe8 call 0x111e50c8 */
  push32(0x111e4fedu); f_111e50c8();
  /* 111e4fed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e4ff0 ret  */
  ESPCHK(0x111e4fc4u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x111e4ff1 (17 bytes, 6 insns) */
void f_111e4ff1(void) {
  FTRACE(0x111e4ff1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e4ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e4ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e4ff5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 111e4ff9 call 0x111e5011 */
  push32(0x111e4ffeu); f_111e5011();
  /* 111e4ffe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5001 ret  */
  ESPCHK(0x111e4ff1u, _esp0);
  ESP += 4; return;
}

/* FUN_10005002 @ 0x111e5002 (15 bytes, 6 insns) */
void f_111e5002(void) {
  FTRACE(0x111e5002u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5002 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e5004 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e5006 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e5008 call 0x111e5011 */
  push32(0x111e500du); f_111e5011();
  /* 111e500d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5010 ret  */
  ESPCHK(0x111e5002u, _esp0);
  ESP += 4; return;
}

/* FUN_10005011 @ 0x111e5011 (163 bytes, 53 insns) */
void f_111e5011(void) {
  FTRACE(0x111e5011u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5011 push edi */
  push32((uint32_t)(EDI));
  /* 111e5012 call 0x111e50b6 */
  push32(0x111e5017u); f_111e50b6();
  /* 111e5017 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e5019 pop edi */
  EDI = (pop32());
  /* 111e501a cmp dword ptr [0x111ede50], edi */
  { uint32_t _a=(r32((uint32_t)(0x111ede50))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5020 jne 0x111e5033 */
  if (!C.zf) goto L_111e5033;
  /* 111e5022 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 111e5026 call dword ptr [0x111e90b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90b4))), 0x111e502cu);
  /* 111e502c push eax */
  push32((uint32_t)(EAX));
  /* 111e502d call dword ptr [0x111e90b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90b0))), 0x111e5033u);
L_111e5033:;
  /* 111e5033 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5038 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5039 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 111e503d mov dword ptr [0x111ede4c], edi */
  w32((uint32_t)(0x111ede4c), (EDI));
  /* 111e5043 mov byte ptr [0x111ede48], bl */
  w8((uint32_t)(0x111ede48), (BL));
  /* 111e5049 jne 0x111e5087 */
  if (!C.zf) goto L_111e5087;
  /* 111e504b mov eax, dword ptr [0x111ee3b8] */
  EAX = (r32((uint32_t)(0x111ee3b8)));
  /* 111e5050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5052 je 0x111e5076 */
  if (C.zf) goto L_111e5076;
  /* 111e5054 mov ecx, dword ptr [0x111ee3b4] */
  ECX = (r32((uint32_t)(0x111ee3b4)));
  /* 111e505a push esi */
  push32((uint32_t)(ESI));
  /* 111e505b lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 111e505e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5060 jb 0x111e5075 */
  if (C.cf) goto L_111e5075;
L_111e5062:;
  /* 111e5062 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 111e5064 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5066 je 0x111e506a */
  if (C.zf) goto L_111e506a;
  /* 111e5068 call eax */
  call_ind((uint32_t)(EAX), 0x111e506au);
L_111e506a:;
  /* 111e506a sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e506d cmp esi, dword ptr [0x111ee3b8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111ee3b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5073 jae 0x111e5062 */
  if (!C.cf) goto L_111e5062;
L_111e5075:;
  /* 111e5075 pop esi */
  ESI = (pop32());
L_111e5076:;
  /* 111e5076 push 0x111ea034 */
  push32((uint32_t)(0x111ea034u));
  /* 111e507b push 0x111ea02c */
  push32((uint32_t)(0x111ea02cu));
  /* 111e5080 call 0x111e50c8 */
  push32(0x111e5085u); f_111e50c8();
  /* 111e5085 pop ecx */
  ECX = (pop32());
  /* 111e5086 pop ecx */
  ECX = (pop32());
L_111e5087:;
  /* 111e5087 push 0x111ea03c */
  push32((uint32_t)(0x111ea03cu));
  /* 111e508c push 0x111ea038 */
  push32((uint32_t)(0x111ea038u));
  /* 111e5091 call 0x111e50c8 */
  push32(0x111e5096u); f_111e50c8();
  /* 111e5096 pop ecx */
  ECX = (pop32());
  /* 111e5097 pop ecx */
  ECX = (pop32());
  /* 111e5098 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e509a pop ebx */
  EBX = (pop32());
  /* 111e509b je 0x111e50a4 */
  if (C.zf) goto L_111e50a4;
  /* 111e509d call 0x111e50bf */
  push32(0x111e50a2u); f_111e50bf();
  /* 111e50a2 pop edi */
  EDI = (pop32());
  /* 111e50a3 ret  */
  ESPCHK(0x111e5011u, _esp0);
  ESP += 4; return;
L_111e50a4:;
  /* 111e50a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 111e50a8 mov dword ptr [0x111ede50], edi */
  w32((uint32_t)(0x111ede50), (EDI));
  /* 111e50ae call dword ptr [0x111e9004] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9004))), 0x111e50b4u);
  /* 111e50b4 pop edi */
  EDI = (pop32());
  /* 111e50b5 ret  */
  ESPCHK(0x111e5011u, _esp0);
  ESP += 4; return;
}

/* FUN_100050b6 @ 0x111e50b6 (9 bytes, 4 insns) */
void f_111e50b6(void) {
  FTRACE(0x111e50b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e50b6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 111e50b8 call 0x111e69b6 */
  push32(0x111e50bdu); f_111e69b6();
  /* 111e50bd pop ecx */
  ECX = (pop32());
  /* 111e50be ret  */
  ESPCHK(0x111e50b6u, _esp0);
  ESP += 4; return;
}

/* FUN_100050bf @ 0x111e50bf (9 bytes, 4 insns) */
void f_111e50bf(void) {
  FTRACE(0x111e50bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e50bf push 0xd */
  push32((uint32_t)(0xdu));
  /* 111e50c1 call 0x111e6a17 */
  push32(0x111e50c6u); f_111e6a17();
  /* 111e50c6 pop ecx */
  ECX = (pop32());
  /* 111e50c7 ret  */
  ESPCHK(0x111e50bfu, _esp0);
  ESP += 4; return;
}

/* FUN_100050c8 @ 0x111e50c8 (26 bytes, 12 insns) */
void f_111e50c8(void) {
  FTRACE(0x111e50c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e50c8 push esi */
  push32((uint32_t)(ESI));
  /* 111e50c9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_111e50cd:;
  /* 111e50cd cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e50d1 jae 0x111e50e0 */
  if (!C.cf) goto L_111e50e0;
  /* 111e50d3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 111e50d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e50d7 je 0x111e50db */
  if (C.zf) goto L_111e50db;
  /* 111e50d9 call eax */
  call_ind((uint32_t)(EAX), 0x111e50dbu);
L_111e50db:;
  /* 111e50db add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e50de jmp 0x111e50cd */
  goto L_111e50cd;
L_111e50e0:;
  /* 111e50e0 pop esi */
  ESI = (pop32());
  /* 111e50e1 ret  */
  ESPCHK(0x111e50c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100050e2 @ 0x111e50e2 (84 bytes, 32 insns) */
void f_111e50e2(void) {
  FTRACE(0x111e50e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e50e2 push esi */
  push32((uint32_t)(ESI));
  /* 111e50e3 call 0x111e6921 */
  push32(0x111e50e8u); f_111e6921();
  /* 111e50e8 call dword ptr [0x111e90c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90c0))), 0x111e50eeu);
  /* 111e50ee cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e50f1 mov dword ptr [0x111ea99c], eax */
  w32((uint32_t)(0x111ea99c), (EAX));
  /* 111e50f6 je 0x111e5132 */
  if (C.zf) goto L_111e5132;
  /* 111e50f8 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 111e50fa push 1 */
  push32((uint32_t)(0x1u));
  /* 111e50fc call 0x111e6bfc */
  push32(0x111e5101u); f_111e6bfc();
  /* 111e5101 mov esi, eax */
  ESI = (EAX);
  /* 111e5103 pop ecx */
  ECX = (pop32());
  /* 111e5104 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5106 pop ecx */
  ECX = (pop32());
  /* 111e5107 je 0x111e5132 */
  if (C.zf) goto L_111e5132;
  /* 111e5109 push esi */
  push32((uint32_t)(ESI));
  /* 111e510a push dword ptr [0x111ea99c] */
  push32((uint32_t)(r32((uint32_t)(0x111ea99c))));
  /* 111e5110 call dword ptr [0x111e90bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90bc))), 0x111e5116u);
  /* 111e5116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5118 je 0x111e5132 */
  if (C.zf) goto L_111e5132;
  /* 111e511a push esi */
  push32((uint32_t)(ESI));
  /* 111e511b call 0x111e5154 */
  push32(0x111e5120u); f_111e5154();
  /* 111e5120 pop ecx */
  ECX = (pop32());
  /* 111e5121 call dword ptr [0x111e90b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90b8))), 0x111e5127u);
  /* 111e5127 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 111e512b push 1 */
  push32((uint32_t)(0x1u));
  /* 111e512d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111e512f pop eax */
  EAX = (pop32());
  /* 111e5130 pop esi */
  ESI = (pop32());
  /* 111e5131 ret  */
  ESPCHK(0x111e50e2u, _esp0);
  ESP += 4; return;
L_111e5132:;
  /* 111e5132 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e5134 pop esi */
  ESI = (pop32());
  /* 111e5135 ret  */
  ESPCHK(0x111e50e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10005136 @ 0x111e5136 (30 bytes, 8 insns) */
void f_111e5136(void) {
  FTRACE(0x111e5136u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5136 call 0x111e694a */
  push32(0x111e513bu); f_111e694a();
  /* 111e513b mov eax, dword ptr [0x111ea99c] */
  EAX = (r32((uint32_t)(0x111ea99c)));
  /* 111e5140 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5143 je 0x111e5153 */
  if (C.zf) goto L_111e5153;
  /* 111e5145 push eax */
  push32((uint32_t)(EAX));
  /* 111e5146 call dword ptr [0x111e90c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90c4))), 0x111e514cu);
  /* 111e514c or dword ptr [0x111ea99c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x111ea99c)))|(0xffffffffu); w32((uint32_t)(0x111ea99c), (_r)); fl_logic(_r,32); }
L_111e5153:;
  /* 111e5153 ret  */
  ESPCHK(0x111e5136u, _esp0);
  ESP += 4; return;
}

/* FUN_10005154 @ 0x111e5154 (19 bytes, 4 insns) */
void f_111e5154(void) {
  FTRACE(0x111e5154u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5154 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e5158 mov dword ptr [eax + 0x50], 0x111ecb30 */
  w32((uint32_t)(EAX + 0x50), (0x111ecb30u));
  /* 111e515f mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 111e5166 ret  */
  ESPCHK(0x111e5154u, _esp0);
  ESP += 4; return;
}

/* FUN_10005167 @ 0x111e5167 (103 bytes, 38 insns) */
void f_111e5167(void) {
  FTRACE(0x111e5167u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5167 push esi */
  push32((uint32_t)(ESI));
  /* 111e5168 push edi */
  push32((uint32_t)(EDI));
  /* 111e5169 call dword ptr [0x111e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9080))), 0x111e516fu);
  /* 111e516f push dword ptr [0x111ea99c] */
  push32((uint32_t)(r32((uint32_t)(0x111ea99c))));
  /* 111e5175 mov edi, eax */
  EDI = (EAX);
  /* 111e5177 call dword ptr [0x111e90cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90cc))), 0x111e517du);
  /* 111e517d mov esi, eax */
  ESI = (EAX);
  /* 111e517f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5181 jne 0x111e51c2 */
  if (!C.zf) goto L_111e51c2;
  /* 111e5183 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 111e5185 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e5187 call 0x111e6bfc */
  push32(0x111e518cu); f_111e6bfc();
  /* 111e518c mov esi, eax */
  ESI = (EAX);
  /* 111e518e pop ecx */
  ECX = (pop32());
  /* 111e518f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5191 pop ecx */
  ECX = (pop32());
  /* 111e5192 je 0x111e51ba */
  if (C.zf) goto L_111e51ba;
  /* 111e5194 push esi */
  push32((uint32_t)(ESI));
  /* 111e5195 push dword ptr [0x111ea99c] */
  push32((uint32_t)(r32((uint32_t)(0x111ea99c))));
  /* 111e519b call dword ptr [0x111e90bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90bc))), 0x111e51a1u);
  /* 111e51a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e51a3 je 0x111e51ba */
  if (C.zf) goto L_111e51ba;
  /* 111e51a5 push esi */
  push32((uint32_t)(ESI));
  /* 111e51a6 call 0x111e5154 */
  push32(0x111e51abu); f_111e5154();
  /* 111e51ab pop ecx */
  ECX = (pop32());
  /* 111e51ac call dword ptr [0x111e90b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90b8))), 0x111e51b2u);
  /* 111e51b2 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 111e51b6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111e51b8 jmp 0x111e51c2 */
  goto L_111e51c2;
L_111e51ba:;
  /* 111e51ba push 0x10 */
  push32((uint32_t)(0x10u));
  /* 111e51bc call 0x111e3cf8 */
  push32(0x111e51c1u); f_111e3cf8();
  /* 111e51c1 pop ecx */
  ECX = (pop32());
L_111e51c2:;
  /* 111e51c2 push edi */
  push32((uint32_t)(EDI));
  /* 111e51c3 call dword ptr [0x111e90c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90c8))), 0x111e51c9u);
  /* 111e51c9 mov eax, esi */
  EAX = (ESI);
  /* 111e51cb pop edi */
  EDI = (pop32());
  /* 111e51cc pop esi */
  ESI = (pop32());
  /* 111e51cd ret  */
  ESPCHK(0x111e5167u, _esp0);
  ESP += 4; return;
}

/* FUN_100051ce @ 0x111e51ce (160 bytes, 62 insns) */
void f_111e51ce(void) {
  FTRACE(0x111e51ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e51ce mov eax, dword ptr [0x111ea99c] */
  EAX = (r32((uint32_t)(0x111ea99c)));
  /* 111e51d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e51d6 je 0x111e526d */
  if (C.zf) goto L_111e526d;
  /* 111e51dc push esi */
  push32((uint32_t)(ESI));
  /* 111e51dd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e51e1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e51e3 jne 0x111e51f2 */
  if (!C.zf) goto L_111e51f2;
  /* 111e51e5 push eax */
  push32((uint32_t)(EAX));
  /* 111e51e6 call dword ptr [0x111e90cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90cc))), 0x111e51ecu);
  /* 111e51ec mov esi, eax */
  ESI = (EAX);
  /* 111e51ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e51f0 je 0x111e525e */
  if (C.zf) goto L_111e525e;
L_111e51f2:;
  /* 111e51f2 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 111e51f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e51f7 je 0x111e5200 */
  if (C.zf) goto L_111e5200;
  /* 111e51f9 push eax */
  push32((uint32_t)(EAX));
  /* 111e51fa call 0x111e3d2b */
  push32(0x111e51ffu); f_111e3d2b();
  /* 111e51ff pop ecx */
  ECX = (pop32());
L_111e5200:;
  /* 111e5200 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 111e5203 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5205 je 0x111e520e */
  if (C.zf) goto L_111e520e;
  /* 111e5207 push eax */
  push32((uint32_t)(EAX));
  /* 111e5208 call 0x111e3d2b */
  push32(0x111e520du); f_111e3d2b();
  /* 111e520d pop ecx */
  ECX = (pop32());
L_111e520e:;
  /* 111e520e mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 111e5211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5213 je 0x111e521c */
  if (C.zf) goto L_111e521c;
  /* 111e5215 push eax */
  push32((uint32_t)(EAX));
  /* 111e5216 call 0x111e3d2b */
  push32(0x111e521bu); f_111e3d2b();
  /* 111e521b pop ecx */
  ECX = (pop32());
L_111e521c:;
  /* 111e521c mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 111e521f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5221 je 0x111e522a */
  if (C.zf) goto L_111e522a;
  /* 111e5223 push eax */
  push32((uint32_t)(EAX));
  /* 111e5224 call 0x111e3d2b */
  push32(0x111e5229u); f_111e3d2b();
  /* 111e5229 pop ecx */
  ECX = (pop32());
L_111e522a:;
  /* 111e522a mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 111e522d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e522f je 0x111e5238 */
  if (C.zf) goto L_111e5238;
  /* 111e5231 push eax */
  push32((uint32_t)(EAX));
  /* 111e5232 call 0x111e3d2b */
  push32(0x111e5237u); f_111e3d2b();
  /* 111e5237 pop ecx */
  ECX = (pop32());
L_111e5238:;
  /* 111e5238 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 111e523b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e523d je 0x111e5246 */
  if (C.zf) goto L_111e5246;
  /* 111e523f push eax */
  push32((uint32_t)(EAX));
  /* 111e5240 call 0x111e3d2b */
  push32(0x111e5245u); f_111e3d2b();
  /* 111e5245 pop ecx */
  ECX = (pop32());
L_111e5246:;
  /* 111e5246 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 111e5249 cmp eax, 0x111ecb30 */
  { uint32_t _a=(EAX),_b=(0x111ecb30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e524e je 0x111e5257 */
  if (C.zf) goto L_111e5257;
  /* 111e5250 push eax */
  push32((uint32_t)(EAX));
  /* 111e5251 call 0x111e3d2b */
  push32(0x111e5256u); f_111e3d2b();
  /* 111e5256 pop ecx */
  ECX = (pop32());
L_111e5257:;
  /* 111e5257 push esi */
  push32((uint32_t)(ESI));
  /* 111e5258 call 0x111e3d2b */
  push32(0x111e525du); f_111e3d2b();
  /* 111e525d pop ecx */
  ECX = (pop32());
L_111e525e:;
  /* 111e525e push 0 */
  push32((uint32_t)(0x0u));
  /* 111e5260 push dword ptr [0x111ea99c] */
  push32((uint32_t)(r32((uint32_t)(0x111ea99c))));
  /* 111e5266 call dword ptr [0x111e90bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90bc))), 0x111e526cu);
  /* 111e526c pop esi */
  ESI = (pop32());
L_111e526d:;
  /* 111e526d ret  */
  ESPCHK(0x111e51ceu, _esp0);
  ESP += 4; return;
}

/* FUN_1000526e @ 0x111e526e (185 bytes, 71 insns) */
void f_111e526e(void) {
  FTRACE(0x111e526eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e526e push ebx */
  push32((uint32_t)(EBX));
  /* 111e526f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e5271 cmp dword ptr [0x111ee3b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111ee3b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5277 push esi */
  push32((uint32_t)(ESI));
  /* 111e5278 push edi */
  push32((uint32_t)(EDI));
  /* 111e5279 jne 0x111e5280 */
  if (!C.zf) goto L_111e5280;
  /* 111e527b call 0x111e7b93 */
  push32(0x111e5280u); f_111e7b93();
L_111e5280:;
  /* 111e5280 mov esi, dword ptr [0x111eddfc] */
  ESI = (r32((uint32_t)(0x111eddfc)));
  /* 111e5286 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_111e5288:;
  /* 111e5288 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e528a cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e528c je 0x111e52a0 */
  if (C.zf) goto L_111e52a0;
  /* 111e528e cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5290 je 0x111e5293 */
  if (C.zf) goto L_111e5293;
  /* 111e5292 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_111e5293:;
  /* 111e5293 push esi */
  push32((uint32_t)(ESI));
  /* 111e5294 call 0x111e7740 */
  push32(0x111e5299u); f_111e7740();
  /* 111e5299 pop ecx */
  ECX = (pop32());
  /* 111e529a lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 111e529e jmp 0x111e5288 */
  goto L_111e5288;
L_111e52a0:;
  /* 111e52a0 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 111e52a7 push eax */
  push32((uint32_t)(EAX));
  /* 111e52a8 call 0x111e48e5 */
  push32(0x111e52adu); f_111e48e5();
  /* 111e52ad mov esi, eax */
  ESI = (EAX);
  /* 111e52af pop ecx */
  ECX = (pop32());
  /* 111e52b0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e52b2 mov dword ptr [0x111ede30], esi */
  w32((uint32_t)(0x111ede30), (ESI));
  /* 111e52b8 jne 0x111e52c2 */
  if (!C.zf) goto L_111e52c2;
  /* 111e52ba push 9 */
  push32((uint32_t)(0x9u));
  /* 111e52bc call 0x111e3cf8 */
  push32(0x111e52c1u); f_111e3cf8();
  /* 111e52c1 pop ecx */
  ECX = (pop32());
L_111e52c2:;
  /* 111e52c2 mov edi, dword ptr [0x111eddfc] */
  EDI = (r32((uint32_t)(0x111eddfc)));
  /* 111e52c8 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e52ca je 0x111e5305 */
  if (C.zf) goto L_111e5305;
  /* 111e52cc push ebp */
  push32((uint32_t)(EBP));
L_111e52cd:;
  /* 111e52cd push edi */
  push32((uint32_t)(EDI));
  /* 111e52ce call 0x111e7740 */
  push32(0x111e52d3u); f_111e7740();
  /* 111e52d3 mov ebp, eax */
  EBP = (EAX);
  /* 111e52d5 pop ecx */
  ECX = (pop32());
  /* 111e52d6 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 111e52d7 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e52da je 0x111e52fe */
  if (C.zf) goto L_111e52fe;
  /* 111e52dc push ebp */
  push32((uint32_t)(EBP));
  /* 111e52dd call 0x111e48e5 */
  push32(0x111e52e2u); f_111e48e5();
  /* 111e52e2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e52e4 pop ecx */
  ECX = (pop32());
  /* 111e52e5 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111e52e7 jne 0x111e52f1 */
  if (!C.zf) goto L_111e52f1;
  /* 111e52e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 111e52eb call 0x111e3cf8 */
  push32(0x111e52f0u); f_111e3cf8();
  /* 111e52f0 pop ecx */
  ECX = (pop32());
L_111e52f1:;
  /* 111e52f1 push edi */
  push32((uint32_t)(EDI));
  /* 111e52f2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111e52f4 call 0x111e7650 */
  push32(0x111e52f9u); f_111e7650();
  /* 111e52f9 pop ecx */
  ECX = (pop32());
  /* 111e52fa add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e52fd pop ecx */
  ECX = (pop32());
L_111e52fe:;
  /* 111e52fe add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5300 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5302 jne 0x111e52cd */
  if (!C.zf) goto L_111e52cd;
  /* 111e5304 pop ebp */
  EBP = (pop32());
L_111e5305:;
  /* 111e5305 push dword ptr [0x111eddfc] */
  push32((uint32_t)(r32((uint32_t)(0x111eddfc))));
  /* 111e530b call 0x111e3d2b */
  push32(0x111e5310u); f_111e3d2b();
  /* 111e5310 pop ecx */
  ECX = (pop32());
  /* 111e5311 mov dword ptr [0x111eddfc], ebx */
  w32((uint32_t)(0x111eddfc), (EBX));
  /* 111e5317 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 111e5319 pop edi */
  EDI = (pop32());
  /* 111e531a pop esi */
  ESI = (pop32());
  /* 111e531b mov dword ptr [0x111ee3ac], 1 */
  w32((uint32_t)(0x111ee3ac), (0x1u));
  /* 111e5325 pop ebx */
  EBX = (pop32());
  /* 111e5326 ret  */
  ESPCHK(0x111e526eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005327 @ 0x111e5327 (153 bytes, 62 insns) */
void f_111e5327(void) {
  FTRACE(0x111e5327u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5327 push ebp */
  push32((uint32_t)(EBP));
  /* 111e5328 mov ebp, esp */
  EBP = (ESP);
  /* 111e532a push ecx */
  push32((uint32_t)(ECX));
  /* 111e532b push ecx */
  push32((uint32_t)(ECX));
  /* 111e532c push ebx */
  push32((uint32_t)(EBX));
  /* 111e532d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e532f cmp dword ptr [0x111ee3b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111ee3b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5335 push esi */
  push32((uint32_t)(ESI));
  /* 111e5336 push edi */
  push32((uint32_t)(EDI));
  /* 111e5337 jne 0x111e533e */
  if (!C.zf) goto L_111e533e;
  /* 111e5339 call 0x111e7b93 */
  push32(0x111e533eu); f_111e7b93();
L_111e533e:;
  /* 111e533e mov esi, 0x111ede54 */
  ESI = (0x111ede54u);
  /* 111e5343 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 111e5348 push esi */
  push32((uint32_t)(ESI));
  /* 111e5349 push ebx */
  push32((uint32_t)(EBX));
  /* 111e534a call dword ptr [0x111e90d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90d0))), 0x111e5350u);
  /* 111e5350 mov eax, dword ptr [0x111ef4e4] */
  EAX = (r32((uint32_t)(0x111ef4e4)));
  /* 111e5355 mov dword ptr [0x111ede40], esi */
  w32((uint32_t)(0x111ede40), (ESI));
  /* 111e535b mov edi, esi */
  EDI = (ESI);
  /* 111e535d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e535f je 0x111e5363 */
  if (C.zf) goto L_111e5363;
  /* 111e5361 mov edi, eax */
  EDI = (EAX);
L_111e5363:;
  /* 111e5363 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 111e5366 push eax */
  push32((uint32_t)(EAX));
  /* 111e5367 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 111e536a push eax */
  push32((uint32_t)(EAX));
  /* 111e536b push ebx */
  push32((uint32_t)(EBX));
  /* 111e536c push ebx */
  push32((uint32_t)(EBX));
  /* 111e536d push edi */
  push32((uint32_t)(EDI));
  /* 111e536e call 0x111e53c0 */
  push32(0x111e5373u); f_111e53c0();
  /* 111e5373 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e5376 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e5379 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 111e537c push eax */
  push32((uint32_t)(EAX));
  /* 111e537d call 0x111e48e5 */
  push32(0x111e5382u); f_111e48e5();
  /* 111e5382 mov esi, eax */
  ESI = (EAX);
  /* 111e5384 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5387 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5389 jne 0x111e5393 */
  if (!C.zf) goto L_111e5393;
  /* 111e538b push 8 */
  push32((uint32_t)(0x8u));
  /* 111e538d call 0x111e3cf8 */
  push32(0x111e5392u); f_111e3cf8();
  /* 111e5392 pop ecx */
  ECX = (pop32());
L_111e5393:;
  /* 111e5393 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 111e5396 push eax */
  push32((uint32_t)(EAX));
  /* 111e5397 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 111e539a push eax */
  push32((uint32_t)(EAX));
  /* 111e539b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e539e lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 111e53a1 push eax */
  push32((uint32_t)(EAX));
  /* 111e53a2 push esi */
  push32((uint32_t)(ESI));
  /* 111e53a3 push edi */
  push32((uint32_t)(EDI));
  /* 111e53a4 call 0x111e53c0 */
  push32(0x111e53a9u); f_111e53c0();
  /* 111e53a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e53ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e53af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e53b0 mov dword ptr [0x111ede28], esi */
  w32((uint32_t)(0x111ede28), (ESI));
  /* 111e53b6 pop edi */
  EDI = (pop32());
  /* 111e53b7 pop esi */
  ESI = (pop32());
  /* 111e53b8 mov dword ptr [0x111ede24], eax */
  w32((uint32_t)(0x111ede24), (EAX));
  /* 111e53bd pop ebx */
  EBX = (pop32());
  /* 111e53be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e53bf ret  */
  ESPCHK(0x111e5327u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c0 @ 0x111e53c0 (436 bytes, 187 insns) */
void f_111e53c0(void) {
  FTRACE(0x111e53c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e53c0 push ebp */
  push32((uint32_t)(EBP));
  /* 111e53c1 mov ebp, esp */
  EBP = (ESP);
  /* 111e53c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 111e53c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111e53c9 push ebx */
  push32((uint32_t)(EBX));
  /* 111e53ca push esi */
  push32((uint32_t)(ESI));
  /* 111e53cb and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 111e53ce mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 111e53d1 push edi */
  push32((uint32_t)(EDI));
  /* 111e53d2 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e53d5 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 111e53db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e53de test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e53e0 je 0x111e53ea */
  if (C.zf) goto L_111e53ea;
  /* 111e53e2 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 111e53e4 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e53e7 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_111e53ea:;
  /* 111e53ea cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e53ed jne 0x111e5433 */
  if (!C.zf) goto L_111e5433;
L_111e53ef:;
  /* 111e53ef mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 111e53f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e53f3 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e53f6 je 0x111e5421 */
  if (C.zf) goto L_111e5421;
  /* 111e53f8 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e53fa je 0x111e5421 */
  if (C.zf) goto L_111e5421;
  /* 111e53fc movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 111e53ff test byte ptr [edx + 0x111ee281], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x111ee281)))&(0x4u); fl_logic(_r,8); }
  /* 111e5406 je 0x111e5414 */
  if (C.zf) goto L_111e5414;
  /* 111e5408 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 111e540a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e540c je 0x111e5414 */
  if (C.zf) goto L_111e5414;
  /* 111e540e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 111e5410 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 111e5412 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e5413 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_111e5414:;
  /* 111e5414 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 111e5416 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5418 je 0x111e53ef */
  if (C.zf) goto L_111e53ef;
  /* 111e541a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 111e541c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 111e541e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e541f jmp 0x111e53ef */
  goto L_111e53ef;
L_111e5421:;
  /* 111e5421 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 111e5423 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5425 je 0x111e542b */
  if (C.zf) goto L_111e542b;
  /* 111e5427 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 111e542a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_111e542b:;
  /* 111e542b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e542e jne 0x111e5476 */
  if (!C.zf) goto L_111e5476;
  /* 111e5430 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e5431 jmp 0x111e5476 */
  goto L_111e5476;
L_111e5433:;
  /* 111e5433 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 111e5435 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5437 je 0x111e543e */
  if (C.zf) goto L_111e543e;
  /* 111e5439 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 111e543b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 111e543d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_111e543e:;
  /* 111e543e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 111e5440 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e5441 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 111e5444 test byte ptr [ebx + 0x111ee281], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x111ee281)))&(0x4u); fl_logic(_r,8); }
  /* 111e544b je 0x111e5459 */
  if (C.zf) goto L_111e5459;
  /* 111e544d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 111e544f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5451 je 0x111e5458 */
  if (C.zf) goto L_111e5458;
  /* 111e5453 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 111e5455 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 111e5457 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_111e5458:;
  /* 111e5458 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_111e5459:;
  /* 111e5459 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e545c je 0x111e5467 */
  if (C.zf) goto L_111e5467;
  /* 111e545e test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e5460 je 0x111e546b */
  if (C.zf) goto L_111e546b;
  /* 111e5462 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5465 jne 0x111e5433 */
  if (!C.zf) goto L_111e5433;
L_111e5467:;
  /* 111e5467 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e5469 jne 0x111e546e */
  if (!C.zf) goto L_111e546e;
L_111e546b:;
  /* 111e546b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 111e546c jmp 0x111e5476 */
  goto L_111e5476;
L_111e546e:;
  /* 111e546e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5470 je 0x111e5476 */
  if (C.zf) goto L_111e5476;
  /* 111e5472 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_111e5476:;
  /* 111e5476 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_111e547a:;
  /* 111e547a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e547d je 0x111e5563 */
  if (C.zf) goto L_111e5563;
L_111e5483:;
  /* 111e5483 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 111e5485 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5488 je 0x111e548f */
  if (C.zf) goto L_111e548f;
  /* 111e548a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e548d jne 0x111e5492 */
  if (!C.zf) goto L_111e5492;
L_111e548f:;
  /* 111e548f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e5490 jmp 0x111e5483 */
  goto L_111e5483;
L_111e5492:;
  /* 111e5492 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5495 je 0x111e5563 */
  if (C.zf) goto L_111e5563;
  /* 111e549b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e549d je 0x111e54a7 */
  if (C.zf) goto L_111e54a7;
  /* 111e549f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 111e54a1 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e54a4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_111e54a7:;
  /* 111e54a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 111e54aa inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_111e54ac:;
  /* 111e54ac mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 111e54b3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_111e54b5:;
  /* 111e54b5 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e54b8 jne 0x111e54be */
  if (!C.zf) goto L_111e54be;
  /* 111e54ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e54bb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e54bc jmp 0x111e54b5 */
  goto L_111e54b5;
L_111e54be:;
  /* 111e54be cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e54c1 jne 0x111e54ef */
  if (!C.zf) goto L_111e54ef;
  /* 111e54c3 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 111e54c6 jne 0x111e54ed */
  if (!C.zf) goto L_111e54ed;
  /* 111e54c8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e54ca cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e54cd je 0x111e54dc */
  if (C.zf) goto L_111e54dc;
  /* 111e54cf cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e54d3 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 111e54d6 jne 0x111e54dc */
  if (!C.zf) goto L_111e54dc;
  /* 111e54d8 mov eax, edx */
  EAX = (EDX);
  /* 111e54da jmp 0x111e54df */
  goto L_111e54df;
L_111e54dc:;
  /* 111e54dc mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_111e54df:;
  /* 111e54df mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e54e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111e54e4 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e54e7 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 111e54ea mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_111e54ed:;
  /* 111e54ed shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_111e54ef:;
  /* 111e54ef mov edx, ebx */
  EDX = (EBX);
  /* 111e54f1 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 111e54f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111e54f4 je 0x111e5504 */
  if (C.zf) goto L_111e5504;
  /* 111e54f6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_111e54f7:;
  /* 111e54f7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e54f9 je 0x111e54ff */
  if (C.zf) goto L_111e54ff;
  /* 111e54fb mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 111e54fe inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_111e54ff:;
  /* 111e54ff inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 111e5501 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 111e5502 jne 0x111e54f7 */
  if (!C.zf) goto L_111e54f7;
L_111e5504:;
  /* 111e5504 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 111e5506 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 111e5508 je 0x111e5554 */
  if (C.zf) goto L_111e5554;
  /* 111e550a cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e550e jne 0x111e551a */
  if (!C.zf) goto L_111e551a;
  /* 111e5510 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5513 je 0x111e5554 */
  if (C.zf) goto L_111e5554;
  /* 111e5515 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5518 je 0x111e5554 */
  if (C.zf) goto L_111e5554;
L_111e551a:;
  /* 111e551a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e551e je 0x111e554e */
  if (C.zf) goto L_111e554e;
  /* 111e5520 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5522 je 0x111e553d */
  if (C.zf) goto L_111e553d;
  /* 111e5524 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 111e5527 test byte ptr [ebx + 0x111ee281], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x111ee281)))&(0x4u); fl_logic(_r,8); }
  /* 111e552e je 0x111e5536 */
  if (C.zf) goto L_111e5536;
  /* 111e5530 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 111e5532 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e5533 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e5534 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_111e5536:;
  /* 111e5536 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 111e5538 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 111e553a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e553b jmp 0x111e554c */
  goto L_111e554c;
L_111e553d:;
  /* 111e553d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 111e5540 test byte ptr [edx + 0x111ee281], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x111ee281)))&(0x4u); fl_logic(_r,8); }
  /* 111e5547 je 0x111e554c */
  if (C.zf) goto L_111e554c;
  /* 111e5549 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e554a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_111e554c:;
  /* 111e554c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_111e554e:;
  /* 111e554e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e554f jmp 0x111e54ac */
  goto L_111e54ac;
L_111e5554:;
  /* 111e5554 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e5556 je 0x111e555c */
  if (C.zf) goto L_111e555c;
  /* 111e5558 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 111e555b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_111e555c:;
  /* 111e555c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 111e555e jmp 0x111e547a */
  goto L_111e547a;
L_111e5563:;
  /* 111e5563 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e5565 je 0x111e556a */
  if (C.zf) goto L_111e556a;
  /* 111e5567 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_111e556a:;
  /* 111e556a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 111e556d pop edi */
  EDI = (pop32());
  /* 111e556e pop esi */
  ESI = (pop32());
  /* 111e556f pop ebx */
  EBX = (pop32());
  /* 111e5570 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 111e5572 pop ebp */
  EBP = (pop32());
  /* 111e5573 ret  */
  ESPCHK(0x111e53c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005574 @ 0x111e5574 (306 bytes, 132 insns) */
void f_111e5574(void) {
  FTRACE(0x111e5574u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5574 push ecx */
  push32((uint32_t)(ECX));
  /* 111e5575 push ecx */
  push32((uint32_t)(ECX));
  /* 111e5576 mov eax, dword ptr [0x111edf58] */
  EAX = (r32((uint32_t)(0x111edf58)));
  /* 111e557b push ebx */
  push32((uint32_t)(EBX));
  /* 111e557c push ebp */
  push32((uint32_t)(EBP));
  /* 111e557d mov ebp, dword ptr [0x111e90a8] */
  EBP = (r32((uint32_t)(0x111e90a8)));
  /* 111e5583 push esi */
  push32((uint32_t)(ESI));
  /* 111e5584 push edi */
  push32((uint32_t)(EDI));
  /* 111e5585 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e5587 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e5589 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e558b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e558d jne 0x111e55c2 */
  if (!C.zf) goto L_111e55c2;
  /* 111e558f call ebp */
  call_ind((uint32_t)(EBP), 0x111e5591u);
  /* 111e5591 mov esi, eax */
  ESI = (EAX);
  /* 111e5593 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5595 je 0x111e55a3 */
  if (C.zf) goto L_111e55a3;
  /* 111e5597 mov dword ptr [0x111edf58], 1 */
  w32((uint32_t)(0x111edf58), (0x1u));
  /* 111e55a1 jmp 0x111e55cb */
  goto L_111e55cb;
L_111e55a3:;
  /* 111e55a3 call dword ptr [0x111e90e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90e0))), 0x111e55a9u);
  /* 111e55a9 mov edi, eax */
  EDI = (EAX);
  /* 111e55ab cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e55ad je 0x111e569d */
  if (C.zf) goto L_111e569d;
  /* 111e55b3 mov dword ptr [0x111edf58], 2 */
  w32((uint32_t)(0x111edf58), (0x2u));
  /* 111e55bd jmp 0x111e5651 */
  goto L_111e5651;
L_111e55c2:;
  /* 111e55c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e55c5 jne 0x111e564c */
  if (!C.zf) goto L_111e564c;
L_111e55cb:;
  /* 111e55cb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e55cd jne 0x111e55db */
  if (!C.zf) goto L_111e55db;
  /* 111e55cf call ebp */
  call_ind((uint32_t)(EBP), 0x111e55d1u);
  /* 111e55d1 mov esi, eax */
  ESI = (EAX);
  /* 111e55d3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e55d5 je 0x111e569d */
  if (C.zf) goto L_111e569d;
L_111e55db:;
  /* 111e55db cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 111e55de mov eax, esi */
  EAX = (ESI);
  /* 111e55e0 je 0x111e55f0 */
  if (C.zf) goto L_111e55f0;
L_111e55e2:;
  /* 111e55e2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e55e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e55e4 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 111e55e7 jne 0x111e55e2 */
  if (!C.zf) goto L_111e55e2;
  /* 111e55e9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e55ea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e55eb cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 111e55ee jne 0x111e55e2 */
  if (!C.zf) goto L_111e55e2;
L_111e55f0:;
  /* 111e55f0 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e55f2 mov edi, dword ptr [0x111e90dc] */
  EDI = (r32((uint32_t)(0x111e90dc)));
  /* 111e55f8 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111e55fa push ebx */
  push32((uint32_t)(EBX));
  /* 111e55fb push ebx */
  push32((uint32_t)(EBX));
  /* 111e55fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e55fd push ebx */
  push32((uint32_t)(EBX));
  /* 111e55fe push ebx */
  push32((uint32_t)(EBX));
  /* 111e55ff push eax */
  push32((uint32_t)(EAX));
  /* 111e5600 push esi */
  push32((uint32_t)(ESI));
  /* 111e5601 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5602 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5603 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 111e5607 call edi */
  call_ind((uint32_t)(EDI), 0x111e5609u);
  /* 111e5609 mov ebp, eax */
  EBP = (EAX);
  /* 111e560b cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e560d je 0x111e5641 */
  if (C.zf) goto L_111e5641;
  /* 111e560f push ebp */
  push32((uint32_t)(EBP));
  /* 111e5610 call 0x111e48e5 */
  push32(0x111e5615u); f_111e48e5();
  /* 111e5615 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5617 pop ecx */
  ECX = (pop32());
  /* 111e5618 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 111e561c je 0x111e5641 */
  if (C.zf) goto L_111e5641;
  /* 111e561e push ebx */
  push32((uint32_t)(EBX));
  /* 111e561f push ebx */
  push32((uint32_t)(EBX));
  /* 111e5620 push ebp */
  push32((uint32_t)(EBP));
  /* 111e5621 push eax */
  push32((uint32_t)(EAX));
  /* 111e5622 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 111e5626 push esi */
  push32((uint32_t)(ESI));
  /* 111e5627 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5628 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5629 call edi */
  call_ind((uint32_t)(EDI), 0x111e562bu);
  /* 111e562b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e562d jne 0x111e563d */
  if (!C.zf) goto L_111e563d;
  /* 111e562f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 111e5633 call 0x111e3d2b */
  push32(0x111e5638u); f_111e3d2b();
  /* 111e5638 pop ecx */
  ECX = (pop32());
  /* 111e5639 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_111e563d:;
  /* 111e563d mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_111e5641:;
  /* 111e5641 push esi */
  push32((uint32_t)(ESI));
  /* 111e5642 call dword ptr [0x111e90d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90d8))), 0x111e5648u);
  /* 111e5648 mov eax, ebx */
  EAX = (EBX);
  /* 111e564a jmp 0x111e569f */
  goto L_111e569f;
L_111e564c:;
  /* 111e564c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e564f jne 0x111e569d */
  if (!C.zf) goto L_111e569d;
L_111e5651:;
  /* 111e5651 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5653 jne 0x111e5661 */
  if (!C.zf) goto L_111e5661;
  /* 111e5655 call dword ptr [0x111e90e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90e0))), 0x111e565bu);
  /* 111e565b mov edi, eax */
  EDI = (EAX);
  /* 111e565d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e565f je 0x111e569d */
  if (C.zf) goto L_111e569d;
L_111e5661:;
  /* 111e5661 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5663 mov eax, edi */
  EAX = (EDI);
  /* 111e5665 je 0x111e5671 */
  if (C.zf) goto L_111e5671;
L_111e5667:;
  /* 111e5667 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e5668 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e566a jne 0x111e5667 */
  if (!C.zf) goto L_111e5667;
  /* 111e566c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e566d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e566f jne 0x111e5667 */
  if (!C.zf) goto L_111e5667;
L_111e5671:;
  /* 111e5671 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5673 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e5674 mov ebp, eax */
  EBP = (EAX);
  /* 111e5676 push ebp */
  push32((uint32_t)(EBP));
  /* 111e5677 call 0x111e48e5 */
  push32(0x111e567cu); f_111e48e5();
  /* 111e567c mov esi, eax */
  ESI = (EAX);
  /* 111e567e pop ecx */
  ECX = (pop32());
  /* 111e567f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5681 jne 0x111e5687 */
  if (!C.zf) goto L_111e5687;
  /* 111e5683 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e5685 jmp 0x111e5692 */
  goto L_111e5692;
L_111e5687:;
  /* 111e5687 push ebp */
  push32((uint32_t)(EBP));
  /* 111e5688 push edi */
  push32((uint32_t)(EDI));
  /* 111e5689 push esi */
  push32((uint32_t)(ESI));
  /* 111e568a call 0x111e45b0 */
  push32(0x111e568fu); f_111e45b0();
  /* 111e568f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e5692:;
  /* 111e5692 push edi */
  push32((uint32_t)(EDI));
  /* 111e5693 call dword ptr [0x111e90d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90d4))), 0x111e5699u);
  /* 111e5699 mov eax, esi */
  EAX = (ESI);
  /* 111e569b jmp 0x111e569f */
  goto L_111e569f;
L_111e569d:;
  /* 111e569d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e569f:;
  /* 111e569f pop edi */
  EDI = (pop32());
  /* 111e56a0 pop esi */
  ESI = (pop32());
  /* 111e56a1 pop ebp */
  EBP = (pop32());
  /* 111e56a2 pop ebx */
  EBX = (pop32());
  /* 111e56a3 pop ecx */
  ECX = (pop32());
  /* 111e56a4 pop ecx */
  ECX = (pop32());
  /* 111e56a5 ret  */
  ESPCHK(0x111e5574u, _esp0);
  ESP += 4; return;
}

/* FUN_100056a6 @ 0x111e56a6 (45 bytes, 17 insns) */
void f_111e56a6(void) {
  FTRACE(0x111e56a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e56a6 push esi */
  push32((uint32_t)(ESI));
  /* 111e56a7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e56ab push 0 */
  push32((uint32_t)(0x0u));
  /* 111e56ad and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 111e56b0 call dword ptr [0x111e9068] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9068))), 0x111e56b6u);
  /* 111e56b6 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 111e56bb jne 0x111e56d1 */
  if (!C.zf) goto L_111e56d1;
  /* 111e56bd mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 111e56c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111e56c2 je 0x111e56d1 */
  if (C.zf) goto L_111e56d1;
  /* 111e56c4 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e56c6 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 111e56c9 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 111e56cb mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 111e56ce mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_111e56d1:;
  /* 111e56d1 pop esi */
  ESI = (pop32());
  /* 111e56d2 ret  */
  ESPCHK(0x111e56a6u, _esp0);
  ESP += 4; return;
}

/* FUN_100056d3 @ 0x111e56d3 (328 bytes, 115 insns) */
void f_111e56d3(void) {
  FTRACE(0x111e56d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e56d3 push ebp */
  push32((uint32_t)(EBP));
  /* 111e56d4 mov ebp, esp */
  EBP = (ESP);
  /* 111e56d6 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 111e56db call 0x111e7e10 */
  push32(0x111e56e0u); f_111e7e10();
  /* 111e56e0 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 111e56e6 push ebx */
  push32((uint32_t)(EBX));
  /* 111e56e7 push eax */
  push32((uint32_t)(EAX));
  /* 111e56e8 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 111e56f2 call dword ptr [0x111e9060] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9060))), 0x111e56f8u);
  /* 111e56f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e56fa je 0x111e5716 */
  if (C.zf) goto L_111e5716;
  /* 111e56fc cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5703 jne 0x111e5716 */
  if (!C.zf) goto L_111e5716;
  /* 111e5705 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e570c jb 0x111e5716 */
  if (C.cf) goto L_111e5716;
  /* 111e570e push 1 */
  push32((uint32_t)(0x1u));
  /* 111e5710 pop eax */
  EAX = (pop32());
  /* 111e5711 jmp 0x111e5818 */
  goto L_111e5818;
L_111e5716:;
  /* 111e5716 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 111e571c push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 111e5721 push eax */
  push32((uint32_t)(EAX));
  /* 111e5722 push 0x111e91d8 */
  push32((uint32_t)(0x111e91d8u));
  /* 111e5727 call dword ptr [0x111e90ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90ac))), 0x111e572du);
  /* 111e572d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e572f je 0x111e5805 */
  if (C.zf) goto L_111e5805;
  /* 111e5735 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e5737 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 111e573d cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5743 je 0x111e5758 */
  if (C.zf) goto L_111e5758;
L_111e5745:;
  /* 111e5745 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 111e5747 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5749 jl 0x111e5753 */
  if ((C.sf!=C.of)) goto L_111e5753;
  /* 111e574b cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e574d jg 0x111e5753 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e5753;
  /* 111e574f sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111e5751 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_111e5753:;
  /* 111e5753 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e5754 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5756 jne 0x111e5745 */
  if (!C.zf) goto L_111e5745;
L_111e5758:;
  /* 111e5758 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 111e575e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 111e5760 push eax */
  push32((uint32_t)(EAX));
  /* 111e5761 push 0x111e91c0 */
  push32((uint32_t)(0x111e91c0u));
  /* 111e5766 call 0x111e7dd0 */
  push32(0x111e576bu); f_111e7dd0();
  /* 111e576b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e576e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5770 jne 0x111e577a */
  if (!C.zf) goto L_111e577a;
  /* 111e5772 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 111e5778 jmp 0x111e57c3 */
  goto L_111e57c3;
L_111e577a:;
  /* 111e577a lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 111e5780 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 111e5785 push eax */
  push32((uint32_t)(EAX));
  /* 111e5786 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5787 call dword ptr [0x111e90d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90d0))), 0x111e578du);
  /* 111e578d cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5793 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 111e5799 je 0x111e57ae */
  if (C.zf) goto L_111e57ae;
L_111e579b:;
  /* 111e579b mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 111e579d cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e579f jl 0x111e57a9 */
  if ((C.sf!=C.of)) goto L_111e57a9;
  /* 111e57a1 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e57a3 jg 0x111e57a9 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e57a9;
  /* 111e57a5 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 111e57a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_111e57a9:;
  /* 111e57a9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e57aa cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e57ac jne 0x111e579b */
  if (!C.zf) goto L_111e579b;
L_111e57ae:;
  /* 111e57ae lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 111e57b4 push eax */
  push32((uint32_t)(EAX));
  /* 111e57b5 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 111e57bb push eax */
  push32((uint32_t)(EAX));
  /* 111e57bc call 0x111e36e0 */
  push32(0x111e57c1u); f_111e36e0();
  /* 111e57c1 pop ecx */
  ECX = (pop32());
  /* 111e57c2 pop ecx */
  ECX = (pop32());
L_111e57c3:;
  /* 111e57c3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e57c5 je 0x111e5805 */
  if (C.zf) goto L_111e5805;
  /* 111e57c7 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 111e57c9 push eax */
  push32((uint32_t)(EAX));
  /* 111e57ca call 0x111e3e30 */
  push32(0x111e57cfu); f_111e3e30();
  /* 111e57cf pop ecx */
  ECX = (pop32());
  /* 111e57d0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e57d2 pop ecx */
  ECX = (pop32());
  /* 111e57d3 je 0x111e5805 */
  if (C.zf) goto L_111e5805;
  /* 111e57d5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e57d6 mov ecx, eax */
  ECX = (EAX);
  /* 111e57d8 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e57da je 0x111e57ea */
  if (C.zf) goto L_111e57ea;
L_111e57dc:;
  /* 111e57dc cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e57df jne 0x111e57e5 */
  if (!C.zf) goto L_111e57e5;
  /* 111e57e1 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 111e57e3 jmp 0x111e57e6 */
  goto L_111e57e6;
L_111e57e5:;
  /* 111e57e5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_111e57e6:;
  /* 111e57e6 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e57e8 jne 0x111e57dc */
  if (!C.zf) goto L_111e57dc;
L_111e57ea:;
  /* 111e57ea push 0xa */
  push32((uint32_t)(0xau));
  /* 111e57ec push ebx */
  push32((uint32_t)(EBX));
  /* 111e57ed push eax */
  push32((uint32_t)(EAX));
  /* 111e57ee call 0x111e7baf */
  push32(0x111e57f3u); f_111e7baf();
  /* 111e57f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e57f6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e57f9 je 0x111e5818 */
  if (C.zf) goto L_111e5818;
  /* 111e57fb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e57fe je 0x111e5818 */
  if (C.zf) goto L_111e5818;
  /* 111e5800 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5803 je 0x111e5818 */
  if (C.zf) goto L_111e5818;
L_111e5805:;
  /* 111e5805 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 111e5808 push eax */
  push32((uint32_t)(EAX));
  /* 111e5809 call 0x111e56a6 */
  push32(0x111e580eu); f_111e56a6();
  /* 111e580e cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5812 pop ecx */
  ECX = (pop32());
  /* 111e5813 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5815 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111e5818:;
  /* 111e5818 pop ebx */
  EBX = (pop32());
  /* 111e5819 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e581a ret  */
  ESPCHK(0x111e56d3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000581b @ 0x111e581b (93 bytes, 30 insns) */
void f_111e581b(void) {
  FTRACE(0x111e581bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e581b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e581d push 0 */
  push32((uint32_t)(0x0u));
  /* 111e581f cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5823 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111e5828 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 111e582b push eax */
  push32((uint32_t)(EAX));
  /* 111e582c call dword ptr [0x111e9064] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9064))), 0x111e5832u);
  /* 111e5832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5834 mov dword ptr [0x111ee3a4], eax */
  w32((uint32_t)(0x111ee3a4), (EAX));
  /* 111e5839 je 0x111e5871 */
  if (C.zf) goto L_111e5871;
  /* 111e583b call 0x111e56d3 */
  push32(0x111e5840u); f_111e56d3();
  /* 111e5840 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5843 mov dword ptr [0x111ee3a8], eax */
  w32((uint32_t)(0x111ee3a8), (EAX));
  /* 111e5848 jne 0x111e5857 */
  if (!C.zf) goto L_111e5857;
  /* 111e584a push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 111e584f call 0x111e5aac */
  push32(0x111e5854u); f_111e5aac();
  /* 111e5854 pop ecx */
  ECX = (pop32());
  /* 111e5855 jmp 0x111e5861 */
  goto L_111e5861;
L_111e5857:;
  /* 111e5857 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e585a jne 0x111e5874 */
  if (!C.zf) goto L_111e5874;
  /* 111e585c call 0x111e62fd */
  push32(0x111e5861u); f_111e62fd();
L_111e5861:;
  /* 111e5861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5863 jne 0x111e5874 */
  if (!C.zf) goto L_111e5874;
  /* 111e5865 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e586b call dword ptr [0x111e905c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e905c))), 0x111e5871u);
L_111e5871:;
  /* 111e5871 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e5873 ret  */
  ESPCHK(0x111e581bu, _esp0);
  ESP += 4; return;
L_111e5874:;
  /* 111e5874 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e5876 pop eax */
  EAX = (pop32());
  /* 111e5877 ret  */
  ESPCHK(0x111e581bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005878 @ 0x111e5878 (168 bytes, 56 insns) */
void f_111e5878(void) {
  FTRACE(0x111e5878u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5878 mov eax, dword ptr [0x111ee3a8] */
  EAX = (r32((uint32_t)(0x111ee3a8)));
  /* 111e587d push esi */
  push32((uint32_t)(ESI));
  /* 111e587e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5881 push edi */
  push32((uint32_t)(EDI));
  /* 111e5882 jne 0x111e58ea */
  if (!C.zf) goto L_111e58ea;
  /* 111e5884 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5885 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 111e5887 cmp dword ptr [0x111ee398], ebx */
  { uint32_t _a=(r32((uint32_t)(0x111ee398))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e588d push ebp */
  push32((uint32_t)(EBP));
  /* 111e588e mov ebp, dword ptr [0x111e9074] */
  EBP = (r32((uint32_t)(0x111e9074)));
  /* 111e5894 jle 0x111e58d6 */
  if ((C.zf||C.sf!=C.of)) goto L_111e58d6;
  /* 111e5896 mov eax, dword ptr [0x111ee39c] */
  EAX = (r32((uint32_t)(0x111ee39c)));
  /* 111e589b mov edi, dword ptr [0x111e9054] */
  EDI = (r32((uint32_t)(0x111e9054)));
  /* 111e58a1 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_111e58a4:;
  /* 111e58a4 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 111e58a9 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 111e58ae push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111e58b0 call edi */
  call_ind((uint32_t)(EDI), 0x111e58b2u);
  /* 111e58b2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111e58b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e58b9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111e58bb call edi */
  call_ind((uint32_t)(EDI), 0x111e58bdu);
  /* 111e58bd push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 111e58c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e58c2 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e58c8 call ebp */
  call_ind((uint32_t)(EBP), 0x111e58cau);
  /* 111e58ca add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e58cd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e58ce cmp ebx, dword ptr [0x111ee398] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x111ee398))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e58d4 jl 0x111e58a4 */
  if ((C.sf!=C.of)) goto L_111e58a4;
L_111e58d6:;
  /* 111e58d6 push dword ptr [0x111ee39c] */
  push32((uint32_t)(r32((uint32_t)(0x111ee39c))));
  /* 111e58dc push 0 */
  push32((uint32_t)(0x0u));
  /* 111e58de push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e58e4 call ebp */
  call_ind((uint32_t)(EBP), 0x111e58e6u);
  /* 111e58e6 pop ebp */
  EBP = (pop32());
  /* 111e58e7 pop ebx */
  EBX = (pop32());
  /* 111e58e8 jmp 0x111e5911 */
  goto L_111e5911;
L_111e58ea:;
  /* 111e58ea cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e58ed jne 0x111e5911 */
  if (!C.zf) goto L_111e5911;
  /* 111e58ef mov edi, 0x111eaa38 */
  EDI = (0x111eaa38u);
  /* 111e58f4 mov esi, edi */
  ESI = (EDI);
L_111e58f6:;
  /* 111e58f6 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 111e58f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e58fb je 0x111e590b */
  if (C.zf) goto L_111e590b;
  /* 111e58fd push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111e5902 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e5904 push eax */
  push32((uint32_t)(EAX));
  /* 111e5905 call dword ptr [0x111e9054] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9054))), 0x111e590bu);
L_111e590b:;
  /* 111e590b mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 111e590d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e590f jne 0x111e58f6 */
  if (!C.zf) goto L_111e58f6;
L_111e5911:;
  /* 111e5911 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e5917 call dword ptr [0x111e905c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e905c))), 0x111e591du);
  /* 111e591d pop edi */
  EDI = (pop32());
  /* 111e591e pop esi */
  ESI = (pop32());
  /* 111e591f ret  */
  ESPCHK(0x111e5878u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x111e5920 (57 bytes, 18 insns) */
void f_111e5920(void) {
  FTRACE(0x111e5920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5920 mov eax, dword ptr [0x111ede04] */
  EAX = (r32((uint32_t)(0x111ede04)));
  /* 111e5925 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5928 je 0x111e5937 */
  if (C.zf) goto L_111e5937;
  /* 111e592a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e592c jne 0x111e5958 */
  if (!C.zf) goto L_111e5958;
  /* 111e592e cmp dword ptr [0x111ede08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111ede08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5935 jne 0x111e5958 */
  if (!C.zf) goto L_111e5958;
L_111e5937:;
  /* 111e5937 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 111e593c call 0x111e5959 */
  push32(0x111e5941u); f_111e5959();
  /* 111e5941 mov eax, dword ptr [0x111edf5c] */
  EAX = (r32((uint32_t)(0x111edf5c)));
  /* 111e5946 pop ecx */
  ECX = (pop32());
  /* 111e5947 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5949 je 0x111e594d */
  if (C.zf) goto L_111e594d;
  /* 111e594b call eax */
  call_ind((uint32_t)(EAX), 0x111e594du);
L_111e594d:;
  /* 111e594d push 0xff */
  push32((uint32_t)(0xffu));
  /* 111e5952 call 0x111e5959 */
  push32(0x111e5957u); f_111e5959();
  /* 111e5957 pop ecx */
  ECX = (pop32());
L_111e5958:;
  /* 111e5958 ret  */
  ESPCHK(0x111e5920u, _esp0);
  ESP += 4; return;
}

/* FUN_10005959 @ 0x111e5959 (339 bytes, 100 insns) */
void f_111e5959(void) {
  FTRACE(0x111e5959u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5959 push ebp */
  push32((uint32_t)(EBP));
  /* 111e595a mov ebp, esp */
  EBP = (ESP);
  /* 111e595c sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5962 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5965 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 111e5967 mov eax, 0x111ea9a8 */
  EAX = (0x111ea9a8u);
L_111e596c:;
  /* 111e596c cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e596e je 0x111e597b */
  if (C.zf) goto L_111e597b;
  /* 111e5970 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5973 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 111e5974 cmp eax, 0x111eaa38 */
  { uint32_t _a=(EAX),_b=(0x111eaa38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5979 jl 0x111e596c */
  if ((C.sf!=C.of)) goto L_111e596c;
L_111e597b:;
  /* 111e597b push esi */
  push32((uint32_t)(ESI));
  /* 111e597c mov esi, ecx */
  ESI = (ECX);
  /* 111e597e shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 111e5981 cmp edx, dword ptr [esi + 0x111ea9a8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x111ea9a8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5987 jne 0x111e5aa9 */
  if (!C.zf) goto L_111e5aa9;
  /* 111e598d mov eax, dword ptr [0x111ede04] */
  EAX = (r32((uint32_t)(0x111ede04)));
  /* 111e5992 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5995 je 0x111e5a83 */
  if (C.zf) goto L_111e5a83;
  /* 111e599b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e599d jne 0x111e59ac */
  if (!C.zf) goto L_111e59ac;
  /* 111e599f cmp dword ptr [0x111ede08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x111ede08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e59a6 je 0x111e5a83 */
  if (C.zf) goto L_111e5a83;
L_111e59ac:;
  /* 111e59ac cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e59b2 je 0x111e5aa9 */
  if (C.zf) goto L_111e5aa9;
  /* 111e59b8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 111e59be push 0x104 */
  push32((uint32_t)(0x104u));
  /* 111e59c3 push eax */
  push32((uint32_t)(EAX));
  /* 111e59c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e59c6 call dword ptr [0x111e90d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e90d0))), 0x111e59ccu);
  /* 111e59cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e59ce jne 0x111e59e3 */
  if (!C.zf) goto L_111e59e3;
  /* 111e59d0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 111e59d6 push 0x111e94c8 */
  push32((uint32_t)(0x111e94c8u));
  /* 111e59db push eax */
  push32((uint32_t)(EAX));
  /* 111e59dc call 0x111e7650 */
  push32(0x111e59e1u); f_111e7650();
  /* 111e59e1 pop ecx */
  ECX = (pop32());
  /* 111e59e2 pop ecx */
  ECX = (pop32());
L_111e59e3:;
  /* 111e59e3 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 111e59e9 push edi */
  push32((uint32_t)(EDI));
  /* 111e59ea push eax */
  push32((uint32_t)(EAX));
  /* 111e59eb lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 111e59f1 call 0x111e7740 */
  push32(0x111e59f6u); f_111e7740();
  /* 111e59f6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e59f7 pop ecx */
  ECX = (pop32());
  /* 111e59f8 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e59fb jbe 0x111e5a26 */
  if ((C.cf||C.zf)) goto L_111e5a26;
  /* 111e59fd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 111e5a03 push eax */
  push32((uint32_t)(EAX));
  /* 111e5a04 call 0x111e7740 */
  push32(0x111e5a09u); f_111e7740();
  /* 111e5a09 mov edi, eax */
  EDI = (EAX);
  /* 111e5a0b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 111e5a11 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5a14 push 3 */
  push32((uint32_t)(0x3u));
  /* 111e5a16 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5a18 push 0x111e94c4 */
  push32((uint32_t)(0x111e94c4u));
  /* 111e5a1d push edi */
  push32((uint32_t)(EDI));
  /* 111e5a1e call 0x111e35a0 */
  push32(0x111e5a23u); f_111e35a0();
  /* 111e5a23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e5a26:;
  /* 111e5a26 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 111e5a2c push 0x111e94a8 */
  push32((uint32_t)(0x111e94a8u));
  /* 111e5a31 push eax */
  push32((uint32_t)(EAX));
  /* 111e5a32 call 0x111e7650 */
  push32(0x111e5a37u); f_111e7650();
  /* 111e5a37 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 111e5a3d push edi */
  push32((uint32_t)(EDI));
  /* 111e5a3e push eax */
  push32((uint32_t)(EAX));
  /* 111e5a3f call 0x111e7660 */
  push32(0x111e5a44u); f_111e7660();
  /* 111e5a44 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 111e5a4a push 0x111e94a4 */
  push32((uint32_t)(0x111e94a4u));
  /* 111e5a4f push eax */
  push32((uint32_t)(EAX));
  /* 111e5a50 call 0x111e7660 */
  push32(0x111e5a55u); f_111e7660();
  /* 111e5a55 push dword ptr [esi + 0x111ea9ac] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x111ea9ac))));
  /* 111e5a5b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 111e5a61 push eax */
  push32((uint32_t)(EAX));
  /* 111e5a62 call 0x111e7660 */
  push32(0x111e5a67u); f_111e7660();
  /* 111e5a67 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 111e5a6c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 111e5a72 push 0x111e947c */
  push32((uint32_t)(0x111e947cu));
  /* 111e5a77 push eax */
  push32((uint32_t)(EAX));
  /* 111e5a78 call 0x111e7e3f */
  push32(0x111e5a7du); f_111e7e3f();
  /* 111e5a7d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5a80 pop edi */
  EDI = (pop32());
  /* 111e5a81 jmp 0x111e5aa9 */
  goto L_111e5aa9;
L_111e5a83:;
  /* 111e5a83 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 111e5a86 lea esi, [esi + 0x111ea9ac] */
  ESI = ((uint32_t)(ESI + 0x111ea9ac));
  /* 111e5a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e5a8e push eax */
  push32((uint32_t)(EAX));
  /* 111e5a8f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111e5a91 call 0x111e7740 */
  push32(0x111e5a96u); f_111e7740();
  /* 111e5a96 pop ecx */
  ECX = (pop32());
  /* 111e5a97 push eax */
  push32((uint32_t)(EAX));
  /* 111e5a98 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111e5a9a push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 111e5a9c call dword ptr [0x111e9094] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9094))), 0x111e5aa2u);
  /* 111e5aa2 push eax */
  push32((uint32_t)(EAX));
  /* 111e5aa3 call dword ptr [0x111e9050] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9050))), 0x111e5aa9u);
L_111e5aa9:;
  /* 111e5aa9 pop esi */
  ESI = (pop32());
  /* 111e5aaa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e5aab ret  */
  ESPCHK(0x111e5959u, _esp0);
  ESP += 4; return;
}

/* FUN_10005aac @ 0x111e5aac (72 bytes, 17 insns) */
void f_111e5aac(void) {
  FTRACE(0x111e5aacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5aac push 0x140 */
  push32((uint32_t)(0x140u));
  /* 111e5ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e5ab3 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e5ab9 call dword ptr [0x111e908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e908c))), 0x111e5abfu);
  /* 111e5abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5ac1 mov dword ptr [0x111ee39c], eax */
  w32((uint32_t)(0x111ee39c), (EAX));
  /* 111e5ac6 jne 0x111e5ac9 */
  if (!C.zf) goto L_111e5ac9;
  /* 111e5ac8 ret  */
  ESPCHK(0x111e5aacu, _esp0);
  ESP += 4; return;
L_111e5ac9:;
  /* 111e5ac9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e5acd and dword ptr [0x111ee394], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111ee394)))&(0x0u); w32((uint32_t)(0x111ee394), (_r)); fl_logic(_r,32); }
  /* 111e5ad4 and dword ptr [0x111ee398], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111ee398)))&(0x0u); w32((uint32_t)(0x111ee398), (_r)); fl_logic(_r,32); }
  /* 111e5adb push 1 */
  push32((uint32_t)(0x1u));
  /* 111e5add mov dword ptr [0x111ee390], eax */
  w32((uint32_t)(0x111ee390), (EAX));
  /* 111e5ae2 mov dword ptr [0x111ee3a0], ecx */
  w32((uint32_t)(0x111ee3a0), (ECX));
  /* 111e5ae8 mov dword ptr [0x111ee388], 0x10 */
  w32((uint32_t)(0x111ee388), (0x10u));
  /* 111e5af2 pop eax */
  EAX = (pop32());
  /* 111e5af3 ret  */
  ESPCHK(0x111e5aacu, _esp0);
  ESP += 4; return;
}

/* FUN_10005af4 @ 0x111e5af4 (43 bytes, 14 insns) */
void f_111e5af4(void) {
  FTRACE(0x111e5af4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5af4 mov eax, dword ptr [0x111ee398] */
  EAX = (r32((uint32_t)(0x111ee398)));
  /* 111e5af9 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 111e5afc mov eax, dword ptr [0x111ee39c] */
  EAX = (r32((uint32_t)(0x111ee39c)));
  /* 111e5b01 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_111e5b04:;
  /* 111e5b04 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5b06 jae 0x111e5b1c */
  if (!C.cf) goto L_111e5b1c;
  /* 111e5b08 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e5b0c sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5b0f cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5b15 jb 0x111e5b1e */
  if (C.cf) goto L_111e5b1e;
  /* 111e5b17 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5b1a jmp 0x111e5b04 */
  goto L_111e5b04;
L_111e5b1c:;
  /* 111e5b1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e5b1e:;
  /* 111e5b1e ret  */
  ESPCHK(0x111e5af4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b1f @ 0x111e5b1f (809 bytes, 265 insns) */
void f_111e5b1f(void) {
  FTRACE(0x111e5b1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5b1f push ebp */
  push32((uint32_t)(EBP));
  /* 111e5b20 mov ebp, esp */
  EBP = (ESP);
  /* 111e5b22 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5b25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5b28 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5b29 push esi */
  push32((uint32_t)(ESI));
  /* 111e5b2a mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e5b2d mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 111e5b30 push edi */
  push32((uint32_t)(EDI));
  /* 111e5b31 mov edi, esi */
  EDI = (ESI);
  /* 111e5b33 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5b36 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5b39 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 111e5b3c mov ecx, edi */
  ECX = (EDI);
  /* 111e5b3e imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e5b44 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 111e5b4b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111e5b4e mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 111e5b50 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e5b51 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 111e5b54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111e5b57 jne 0x111e5e43 */
  if (!C.zf) goto L_111e5e43;
  /* 111e5b5d mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 111e5b60 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 111e5b63 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 111e5b66 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 111e5b69 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 111e5b6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 111e5b6f test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 111e5b72 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 111e5b75 jne 0x111e5bf5 */
  if (!C.zf) goto L_111e5bf5;
  /* 111e5b77 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111e5b7a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111e5b7b cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5b7e jbe 0x111e5b83 */
  if ((C.cf||C.zf)) goto L_111e5b83;
  /* 111e5b80 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111e5b82 pop edx */
  EDX = (pop32());
L_111e5b83:;
  /* 111e5b83 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 111e5b86 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5b89 jne 0x111e5bd7 */
  if (!C.zf) goto L_111e5bd7;
  /* 111e5b8b cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5b8e jae 0x111e5bae */
  if (!C.cf) goto L_111e5bae;
  /* 111e5b90 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 111e5b95 mov ecx, edx */
  ECX = (EDX);
  /* 111e5b97 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 111e5b99 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 111e5b9d not ebx */
  EBX = (~(EBX));
  /* 111e5b9f and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 111e5ba3 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 111e5ba5 jne 0x111e5bcf */
  if (!C.zf) goto L_111e5bcf;
  /* 111e5ba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5baa and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 111e5bac jmp 0x111e5bcf */
  goto L_111e5bcf;
L_111e5bae:;
  /* 111e5bae lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 111e5bb1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 111e5bb6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 111e5bb8 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 111e5bbc not ebx */
  EBX = (~(EBX));
  /* 111e5bbe and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 111e5bc5 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 111e5bc7 jne 0x111e5bcf */
  if (!C.zf) goto L_111e5bcf;
  /* 111e5bc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5bcc and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_111e5bcf:;
  /* 111e5bcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e5bd2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e5bd5 jmp 0x111e5bda */
  goto L_111e5bda;
L_111e5bd7:;
  /* 111e5bd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_111e5bda:;
  /* 111e5bda mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 111e5bdd mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 111e5be0 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5be3 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 111e5be6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e5be9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111e5bec mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 111e5bef mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 111e5bf2 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_111e5bf5:;
  /* 111e5bf5 mov edx, ecx */
  EDX = (ECX);
  /* 111e5bf7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111e5bfa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111e5bfb cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5bfe jbe 0x111e5c03 */
  if ((C.cf||C.zf)) goto L_111e5c03;
  /* 111e5c00 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111e5c02 pop edx */
  EDX = (pop32());
L_111e5c03:;
  /* 111e5c03 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e5c06 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 111e5c09 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 111e5c0c jne 0x111e5ca6 */
  if (!C.zf) goto L_111e5ca6;
  /* 111e5c12 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5c15 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 111e5c18 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 111e5c1b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111e5c1d mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 111e5c20 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 111e5c21 pop esi */
  ESI = (pop32());
  /* 111e5c22 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5c24 jbe 0x111e5c28 */
  if ((C.cf||C.zf)) goto L_111e5c28;
  /* 111e5c26 mov ebx, esi */
  EBX = (ESI);
L_111e5c28:;
  /* 111e5c28 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5c2b mov edx, ecx */
  EDX = (ECX);
  /* 111e5c2d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111e5c30 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 111e5c33 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111e5c34 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5c36 jbe 0x111e5c3a */
  if ((C.cf||C.zf)) goto L_111e5c3a;
  /* 111e5c38 mov edx, esi */
  EDX = (ESI);
L_111e5c3a:;
  /* 111e5c3a cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5c3c je 0x111e5ca1 */
  if (C.zf) goto L_111e5ca1;
  /* 111e5c3e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e5c41 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 111e5c44 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5c47 jne 0x111e5c89 */
  if (!C.zf) goto L_111e5c89;
  /* 111e5c49 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5c4c jae 0x111e5c6a */
  if (!C.cf) goto L_111e5c6a;
  /* 111e5c4e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 111e5c53 mov ecx, ebx */
  ECX = (EBX);
  /* 111e5c55 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 111e5c57 not esi */
  ESI = (~(ESI));
  /* 111e5c59 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 111e5c5d dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 111e5c61 jne 0x111e5c89 */
  if (!C.zf) goto L_111e5c89;
  /* 111e5c63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5c66 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 111e5c68 jmp 0x111e5c89 */
  goto L_111e5c89;
L_111e5c6a:;
  /* 111e5c6a lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 111e5c6d mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 111e5c72 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 111e5c74 not esi */
  ESI = (~(ESI));
  /* 111e5c76 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 111e5c7d dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 111e5c81 jne 0x111e5c89 */
  if (!C.zf) goto L_111e5c89;
  /* 111e5c83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5c86 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_111e5c89:;
  /* 111e5c89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e5c8c mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 111e5c8f mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 111e5c92 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 111e5c95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 111e5c98 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 111e5c9b mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 111e5c9e mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_111e5ca1:;
  /* 111e5ca1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 111e5ca4 jmp 0x111e5ca9 */
  goto L_111e5ca9;
L_111e5ca6:;
  /* 111e5ca6 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_111e5ca9:;
  /* 111e5ca9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5cad jne 0x111e5cb7 */
  if (!C.zf) goto L_111e5cb7;
  /* 111e5caf cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5cb1 je 0x111e5d38 */
  if (C.zf) goto L_111e5d38;
L_111e5cb7:;
  /* 111e5cb7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 111e5cba mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 111e5cbe lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 111e5cc1 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 111e5cc4 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 111e5cc7 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 111e5cca mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 111e5ccd mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 111e5cd0 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 111e5cd3 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5cd6 jne 0x111e5d38 */
  if (!C.zf) goto L_111e5d38;
  /* 111e5cd8 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 111e5cdc cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5cdf mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 111e5ce2 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 111e5ce4 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 111e5ce8 jae 0x111e5d0f */
  if (!C.cf) goto L_111e5d0f;
  /* 111e5cea cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5cee jne 0x111e5cfe */
  if (!C.zf) goto L_111e5cfe;
  /* 111e5cf0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 111e5cf5 mov ecx, edx */
  ECX = (EDX);
  /* 111e5cf7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 111e5cf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5cfc or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_111e5cfe:;
  /* 111e5cfe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 111e5d03 mov ecx, edx */
  ECX = (EDX);
  /* 111e5d05 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 111e5d07 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 111e5d0b or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e5d0d jmp 0x111e5d38 */
  goto L_111e5d38;
L_111e5d0f:;
  /* 111e5d0f cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5d13 jne 0x111e5d25 */
  if (!C.zf) goto L_111e5d25;
  /* 111e5d15 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 111e5d18 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 111e5d1d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 111e5d1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5d22 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_111e5d25:;
  /* 111e5d25 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 111e5d28 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111e5d2d shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111e5d2f lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 111e5d36 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_111e5d38:;
  /* 111e5d38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e5d3b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111e5d3d mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 111e5d41 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 111e5d44 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 111e5d46 jne 0x111e5e43 */
  if (!C.zf) goto L_111e5e43;
  /* 111e5d4c mov eax, dword ptr [0x111ee394] */
  EAX = (r32((uint32_t)(0x111ee394)));
  /* 111e5d51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e5d53 je 0x111e5e35 */
  if (C.zf) goto L_111e5e35;
  /* 111e5d59 mov ecx, dword ptr [0x111ee38c] */
  ECX = (r32((uint32_t)(0x111ee38c)));
  /* 111e5d5f mov esi, dword ptr [0x111e9054] */
  ESI = (r32((uint32_t)(0x111e9054)));
  /* 111e5d65 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 111e5d68 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5d6b mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 111e5d70 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 111e5d75 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5d76 push ecx */
  push32((uint32_t)(ECX));
  /* 111e5d77 call esi */
  call_ind((uint32_t)(ESI), 0x111e5d79u);
  /* 111e5d79 mov ecx, dword ptr [0x111ee38c] */
  ECX = (r32((uint32_t)(0x111ee38c)));
  /* 111e5d7f mov eax, dword ptr [0x111ee394] */
  EAX = (r32((uint32_t)(0x111ee394)));
  /* 111e5d84 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111e5d89 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111e5d8b or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 111e5d8e mov eax, dword ptr [0x111ee394] */
  EAX = (r32((uint32_t)(0x111ee394)));
  /* 111e5d93 mov ecx, dword ptr [0x111ee38c] */
  ECX = (r32((uint32_t)(0x111ee38c)));
  /* 111e5d99 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 111e5d9c and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 111e5da4 mov eax, dword ptr [0x111ee394] */
  EAX = (r32((uint32_t)(0x111ee394)));
  /* 111e5da9 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 111e5dac dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 111e5daf mov eax, dword ptr [0x111ee394] */
  EAX = (r32((uint32_t)(0x111ee394)));
  /* 111e5db4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111e5db7 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e5dbb jne 0x111e5dc6 */
  if (!C.zf) goto L_111e5dc6;
  /* 111e5dbd and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 111e5dc1 mov eax, dword ptr [0x111ee394] */
  EAX = (r32((uint32_t)(0x111ee394)));
L_111e5dc6:;
  /* 111e5dc6 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5dca jne 0x111e5e35 */
  if (!C.zf) goto L_111e5e35;
  /* 111e5dcc push ebx */
  push32((uint32_t)(EBX));
  /* 111e5dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 111e5dcf push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 111e5dd2 call esi */
  call_ind((uint32_t)(ESI), 0x111e5dd4u);
  /* 111e5dd4 mov eax, dword ptr [0x111ee394] */
  EAX = (r32((uint32_t)(0x111ee394)));
  /* 111e5dd9 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 111e5ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 111e5dde push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e5de4 call dword ptr [0x111e9074] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9074))), 0x111e5deau);
  /* 111e5dea mov eax, dword ptr [0x111ee398] */
  EAX = (r32((uint32_t)(0x111ee398)));
  /* 111e5def mov edx, dword ptr [0x111ee39c] */
  EDX = (r32((uint32_t)(0x111ee39c)));
  /* 111e5df5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e5df8 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 111e5dfb mov ecx, eax */
  ECX = (EAX);
  /* 111e5dfd mov eax, dword ptr [0x111ee394] */
  EAX = (r32((uint32_t)(0x111ee394)));
  /* 111e5e02 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5e04 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 111e5e08 push ecx */
  push32((uint32_t)(ECX));
  /* 111e5e09 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 111e5e0c push ecx */
  push32((uint32_t)(ECX));
  /* 111e5e0d push eax */
  push32((uint32_t)(EAX));
  /* 111e5e0e call 0x111e7ed0 */
  push32(0x111e5e13u); f_111e7ed0();
  /* 111e5e13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5e16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5e19 dec dword ptr [0x111ee398] */
  { uint32_t _r=(r32((uint32_t)(0x111ee398)))-1; w32((uint32_t)(0x111ee398), (_r)); fl_dec(_r,32); }
  /* 111e5e1f cmp eax, dword ptr [0x111ee394] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x111ee394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5e25 jbe 0x111e5e2b */
  if ((C.cf||C.zf)) goto L_111e5e2b;
  /* 111e5e27 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_111e5e2b:;
  /* 111e5e2b mov eax, dword ptr [0x111ee39c] */
  EAX = (r32((uint32_t)(0x111ee39c)));
  /* 111e5e30 mov dword ptr [0x111ee390], eax */
  w32((uint32_t)(0x111ee390), (EAX));
L_111e5e35:;
  /* 111e5e35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5e38 mov dword ptr [0x111ee38c], edi */
  w32((uint32_t)(0x111ee38c), (EDI));
  /* 111e5e3e mov dword ptr [0x111ee394], eax */
  w32((uint32_t)(0x111ee394), (EAX));
L_111e5e43:;
  /* 111e5e43 pop edi */
  EDI = (pop32());
  /* 111e5e44 pop esi */
  ESI = (pop32());
  /* 111e5e45 pop ebx */
  EBX = (pop32());
  /* 111e5e46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e5e47 ret  */
  ESPCHK(0x111e5b1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005e48 @ 0x111e5e48 (777 bytes, 275 insns) */
void f_111e5e48(void) {
  FTRACE(0x111e5e48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e5e48 push ebp */
  push32((uint32_t)(EBP));
  /* 111e5e49 mov ebp, esp */
  EBP = (ESP);
  /* 111e5e4b sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5e4e mov eax, dword ptr [0x111ee398] */
  EAX = (r32((uint32_t)(0x111ee398)));
  /* 111e5e53 mov edx, dword ptr [0x111ee39c] */
  EDX = (r32((uint32_t)(0x111ee39c)));
  /* 111e5e59 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5e5a push esi */
  push32((uint32_t)(ESI));
  /* 111e5e5b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e5e5e push edi */
  push32((uint32_t)(EDI));
  /* 111e5e5f lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 111e5e62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e5e65 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 111e5e68 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 111e5e6b and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 111e5e6e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 111e5e71 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 111e5e74 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 111e5e75 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5e78 jge 0x111e5e88 */
  if ((C.sf==C.of)) goto L_111e5e88;
  /* 111e5e7a or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 111e5e7d shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 111e5e7f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 111e5e83 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 111e5e86 jmp 0x111e5e98 */
  goto L_111e5e98;
L_111e5e88:;
  /* 111e5e88 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5e8b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e5e8e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 111e5e90 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 111e5e92 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 111e5e95 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_111e5e98:;
  /* 111e5e98 mov eax, dword ptr [0x111ee390] */
  EAX = (r32((uint32_t)(0x111ee390)));
  /* 111e5e9d mov ebx, eax */
  EBX = (EAX);
  /* 111e5e9f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5ea1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111e5ea4 jae 0x111e5ebf */
  if (!C.cf) goto L_111e5ebf;
L_111e5ea6:;
  /* 111e5ea6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 111e5ea9 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 111e5eab and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 111e5eae and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 111e5eb0 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 111e5eb2 jne 0x111e5ebf */
  if (!C.zf) goto L_111e5ebf;
  /* 111e5eb4 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5eb7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5eba mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111e5ebd jb 0x111e5ea6 */
  if (C.cf) goto L_111e5ea6;
L_111e5ebf:;
  /* 111e5ebf cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5ec2 jne 0x111e5f3d */
  if (!C.zf) goto L_111e5f3d;
  /* 111e5ec4 mov ebx, edx */
  EBX = (EDX);
L_111e5ec6:;
  /* 111e5ec6 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5ec8 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111e5ecb jae 0x111e5ee2 */
  if (!C.cf) goto L_111e5ee2;
  /* 111e5ecd mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 111e5ed0 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 111e5ed2 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 111e5ed5 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 111e5ed7 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 111e5ed9 jne 0x111e5ee0 */
  if (!C.zf) goto L_111e5ee0;
  /* 111e5edb add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5ede jmp 0x111e5ec6 */
  goto L_111e5ec6;
L_111e5ee0:;
  /* 111e5ee0 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_111e5ee2:;
  /* 111e5ee2 jne 0x111e5f3d */
  if (!C.zf) goto L_111e5f3d;
L_111e5ee4:;
  /* 111e5ee4 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5ee7 jae 0x111e5efa */
  if (!C.cf) goto L_111e5efa;
  /* 111e5ee9 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5eed jne 0x111e5ef7 */
  if (!C.zf) goto L_111e5ef7;
  /* 111e5eef add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5ef2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111e5ef5 jmp 0x111e5ee4 */
  goto L_111e5ee4;
L_111e5ef7:;
  /* 111e5ef7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_111e5efa:;
  /* 111e5efa jne 0x111e5f22 */
  if (!C.zf) goto L_111e5f22;
  /* 111e5efc mov ebx, edx */
  EBX = (EDX);
L_111e5efe:;
  /* 111e5efe cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5f00 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111e5f03 jae 0x111e5f12 */
  if (!C.cf) goto L_111e5f12;
  /* 111e5f05 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5f09 jne 0x111e5f10 */
  if (!C.zf) goto L_111e5f10;
  /* 111e5f0b add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5f0e jmp 0x111e5efe */
  goto L_111e5efe;
L_111e5f10:;
  /* 111e5f10 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_111e5f12:;
  /* 111e5f12 jne 0x111e5f22 */
  if (!C.zf) goto L_111e5f22;
  /* 111e5f14 call 0x111e6151 */
  push32(0x111e5f19u); f_111e6151();
  /* 111e5f19 mov ebx, eax */
  EBX = (EAX);
  /* 111e5f1b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e5f1d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111e5f20 je 0x111e5f36 */
  if (C.zf) goto L_111e5f36;
L_111e5f22:;
  /* 111e5f22 push ebx */
  push32((uint32_t)(EBX));
  /* 111e5f23 call 0x111e6202 */
  push32(0x111e5f28u); f_111e6202();
  /* 111e5f28 pop ecx */
  ECX = (pop32());
  /* 111e5f29 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 111e5f2c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 111e5f2e mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 111e5f31 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5f34 jne 0x111e5f3d */
  if (!C.zf) goto L_111e5f3d;
L_111e5f36:;
  /* 111e5f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e5f38 jmp 0x111e614c */
  goto L_111e614c;
L_111e5f3d:;
  /* 111e5f3d mov dword ptr [0x111ee390], ebx */
  w32((uint32_t)(0x111ee390), (EBX));
  /* 111e5f43 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 111e5f46 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 111e5f48 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5f4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 111e5f4e je 0x111e5f64 */
  if (C.zf) goto L_111e5f64;
  /* 111e5f50 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 111e5f57 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 111e5f5b and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 111e5f5e and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 111e5f60 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 111e5f62 jne 0x111e5f9b */
  if (!C.zf) goto L_111e5f9b;
L_111e5f64:;
  /* 111e5f64 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 111e5f6a mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 111e5f6d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 111e5f70 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 111e5f73 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e5f77 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 111e5f7a or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 111e5f7c mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 111e5f7f jne 0x111e5f98 */
  if (!C.zf) goto L_111e5f98;
L_111e5f81:;
  /* 111e5f81 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 111e5f87 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 111e5f8a and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 111e5f8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e5f90 mov edi, esi */
  EDI = (ESI);
  /* 111e5f92 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 111e5f94 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 111e5f96 je 0x111e5f81 */
  if (C.zf) goto L_111e5f81;
L_111e5f98:;
  /* 111e5f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_111e5f9b:;
  /* 111e5f9b mov ecx, edx */
  ECX = (EDX);
  /* 111e5f9d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e5f9f imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e5fa5 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 111e5fac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 111e5faf mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 111e5fb3 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 111e5fb5 jne 0x111e5fc4 */
  if (!C.zf) goto L_111e5fc4;
  /* 111e5fb7 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 111e5fbe push 0x20 */
  push32((uint32_t)(0x20u));
  /* 111e5fc0 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 111e5fc3 pop edi */
  EDI = (pop32());
L_111e5fc4:;
  /* 111e5fc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111e5fc6 jl 0x111e5fcd */
  if ((C.sf!=C.of)) goto L_111e5fcd;
  /* 111e5fc8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 111e5fca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 111e5fcb jmp 0x111e5fc4 */
  goto L_111e5fc4;
L_111e5fcd:;
  /* 111e5fcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111e5fd0 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 111e5fd4 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 111e5fd6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e5fd9 mov esi, ecx */
  ESI = (ECX);
  /* 111e5fdb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 111e5fde sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 111e5fe1 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 111e5fe2 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5fe5 jle 0x111e5fea */
  if ((C.zf||C.sf!=C.of)) goto L_111e5fea;
  /* 111e5fe7 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111e5fe9 pop esi */
  ESI = (pop32());
L_111e5fea:;
  /* 111e5fea cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5fec je 0x111e60ff */
  if (C.zf) goto L_111e60ff;
  /* 111e5ff2 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 111e5ff5 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5ff8 jne 0x111e605b */
  if (!C.zf) goto L_111e605b;
  /* 111e5ffa cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e5ffd jge 0x111e602a */
  if ((C.sf==C.of)) goto L_111e602a;
  /* 111e5fff mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 111e6004 mov ecx, edi */
  ECX = (EDI);
  /* 111e6006 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 111e6008 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e600b lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 111e600f not ebx */
  EBX = (~(EBX));
  /* 111e6011 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 111e6014 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 111e6018 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 111e601c dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 111e601e jne 0x111e6058 */
  if (!C.zf) goto L_111e6058;
  /* 111e6020 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e6023 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111e6026 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 111e6028 jmp 0x111e605b */
  goto L_111e605b;
L_111e602a:;
  /* 111e602a lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 111e602d mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 111e6032 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 111e6034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e6037 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 111e603b lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 111e6042 not ebx */
  EBX = (~(EBX));
  /* 111e6044 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 111e6046 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 111e6048 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 111e604b jne 0x111e6058 */
  if (!C.zf) goto L_111e6058;
  /* 111e604d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e6050 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 111e6053 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 111e6056 jmp 0x111e605b */
  goto L_111e605b;
L_111e6058:;
  /* 111e6058 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_111e605b:;
  /* 111e605b mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 111e605e mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 111e6061 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6065 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 111e6068 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 111e606b mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 111e606e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 111e6071 je 0x111e610b */
  if (C.zf) goto L_111e610b;
  /* 111e6077 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 111e607a mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 111e607e lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 111e6081 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 111e6084 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 111e6087 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 111e608a mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 111e608d mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 111e6090 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 111e6093 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6096 jne 0x111e60fc */
  if (!C.zf) goto L_111e60fc;
  /* 111e6098 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 111e609c cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e609f mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 111e60a2 jge 0x111e60cd */
  if ((C.sf==C.of)) goto L_111e60cd;
  /* 111e60a4 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 111e60a6 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e60aa mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 111e60ae jne 0x111e60bb */
  if (!C.zf) goto L_111e60bb;
  /* 111e60b0 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 111e60b5 mov ecx, esi */
  ECX = (ESI);
  /* 111e60b7 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 111e60b9 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_111e60bb:;
  /* 111e60bb mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 111e60c0 mov ecx, esi */
  ECX = (ESI);
  /* 111e60c2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 111e60c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e60c7 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 111e60cb jmp 0x111e60fc */
  goto L_111e60fc;
L_111e60cd:;
  /* 111e60cd inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 111e60cf cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e60d3 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 111e60d7 jne 0x111e60e6 */
  if (!C.zf) goto L_111e60e6;
  /* 111e60d9 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 111e60dc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 111e60e1 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 111e60e3 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_111e60e6:;
  /* 111e60e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e60e9 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 111e60f0 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 111e60f3 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 111e60f8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 111e60fa or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_111e60fc:;
  /* 111e60fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_111e60ff:;
  /* 111e60ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111e6101 je 0x111e610e */
  if (C.zf) goto L_111e610e;
  /* 111e6103 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111e6105 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 111e6109 jmp 0x111e610e */
  goto L_111e610e;
L_111e610b:;
  /* 111e610b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_111e610e:;
  /* 111e610e mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 111e6111 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6113 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 111e6116 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 111e6118 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 111e611c mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 111e611f mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 111e6121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 111e6123 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 111e6126 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 111e6128 jne 0x111e6144 */
  if (!C.zf) goto L_111e6144;
  /* 111e612a cmp ebx, dword ptr [0x111ee394] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x111ee394))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6130 jne 0x111e6144 */
  if (!C.zf) goto L_111e6144;
  /* 111e6132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e6135 cmp ecx, dword ptr [0x111ee38c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x111ee38c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e613b jne 0x111e6144 */
  if (!C.zf) goto L_111e6144;
  /* 111e613d and dword ptr [0x111ee394], 0 */
  { uint32_t _r=(r32((uint32_t)(0x111ee394)))&(0x0u); w32((uint32_t)(0x111ee394), (_r)); fl_logic(_r,32); }
L_111e6144:;
  /* 111e6144 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e6147 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111e6149 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_111e614c:;
  /* 111e614c pop edi */
  EDI = (pop32());
  /* 111e614d pop esi */
  ESI = (pop32());
  /* 111e614e pop ebx */
  EBX = (pop32());
  /* 111e614f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e6150 ret  */
  ESPCHK(0x111e5e48u, _esp0);
  ESP += 4; return;
}

/* FUN_10006151 @ 0x111e6151 (177 bytes, 53 insns) */
void f_111e6151(void) {
  FTRACE(0x111e6151u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6151 mov eax, dword ptr [0x111ee398] */
  EAX = (r32((uint32_t)(0x111ee398)));
  /* 111e6156 mov ecx, dword ptr [0x111ee388] */
  ECX = (r32((uint32_t)(0x111ee388)));
  /* 111e615c push esi */
  push32((uint32_t)(ESI));
  /* 111e615d push edi */
  push32((uint32_t)(EDI));
  /* 111e615e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 111e6160 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6162 jne 0x111e6194 */
  if (!C.zf) goto L_111e6194;
  /* 111e6164 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 111e6168 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 111e616b push eax */
  push32((uint32_t)(EAX));
  /* 111e616c push dword ptr [0x111ee39c] */
  push32((uint32_t)(r32((uint32_t)(0x111ee39c))));
  /* 111e6172 push edi */
  push32((uint32_t)(EDI));
  /* 111e6173 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e6179 call dword ptr [0x111e904c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e904c))), 0x111e617fu);
  /* 111e617f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6181 je 0x111e61e4 */
  if (C.zf) goto L_111e61e4;
  /* 111e6183 add dword ptr [0x111ee388], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x111ee388))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x111ee388), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e618a mov dword ptr [0x111ee39c], eax */
  w32((uint32_t)(0x111ee39c), (EAX));
  /* 111e618f mov eax, dword ptr [0x111ee398] */
  EAX = (r32((uint32_t)(0x111ee398)));
L_111e6194:;
  /* 111e6194 mov ecx, dword ptr [0x111ee39c] */
  ECX = (r32((uint32_t)(0x111ee39c)));
  /* 111e619a push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 111e619f push 8 */
  push32((uint32_t)(0x8u));
  /* 111e61a1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 111e61a4 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e61aa lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 111e61ad call dword ptr [0x111e908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e908c))), 0x111e61b3u);
  /* 111e61b3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e61b5 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 111e61b8 je 0x111e61e4 */
  if (C.zf) goto L_111e61e4;
  /* 111e61ba push 4 */
  push32((uint32_t)(0x4u));
  /* 111e61bc push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 111e61c1 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 111e61c6 push edi */
  push32((uint32_t)(EDI));
  /* 111e61c7 call dword ptr [0x111e9058] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9058))), 0x111e61cdu);
  /* 111e61cd cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e61cf mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 111e61d2 jne 0x111e61e8 */
  if (!C.zf) goto L_111e61e8;
  /* 111e61d4 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 111e61d7 push edi */
  push32((uint32_t)(EDI));
  /* 111e61d8 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e61de call dword ptr [0x111e9074] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9074))), 0x111e61e4u);
L_111e61e4:;
  /* 111e61e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e61e6 jmp 0x111e61ff */
  goto L_111e61ff;
L_111e61e8:;
  /* 111e61e8 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 111e61ec mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 111e61ee mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 111e61f1 inc dword ptr [0x111ee398] */
  { uint32_t _r=(r32((uint32_t)(0x111ee398)))+1; w32((uint32_t)(0x111ee398), (_r)); fl_inc(_r,32); }
  /* 111e61f7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 111e61fa or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 111e61fd mov eax, esi */
  EAX = (ESI);
L_111e61ff:;
  /* 111e61ff pop edi */
  EDI = (pop32());
  /* 111e6200 pop esi */
  ESI = (pop32());
  /* 111e6201 ret  */
  ESPCHK(0x111e6151u, _esp0);
  ESP += 4; return;
}

/* FUN_10006202 @ 0x111e6202 (251 bytes, 85 insns) */
void f_111e6202(void) {
  FTRACE(0x111e6202u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6202 push ebp */
  push32((uint32_t)(EBP));
  /* 111e6203 mov ebp, esp */
  EBP = (ESP);
  /* 111e6205 push ecx */
  push32((uint32_t)(ECX));
  /* 111e6206 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e6209 push ebx */
  push32((uint32_t)(EBX));
  /* 111e620a push esi */
  push32((uint32_t)(ESI));
  /* 111e620b push edi */
  push32((uint32_t)(EDI));
  /* 111e620c mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 111e620f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 111e6212 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_111e6214:;
  /* 111e6214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e6216 jl 0x111e621d */
  if ((C.sf!=C.of)) goto L_111e621d;
  /* 111e6218 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 111e621a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e621b jmp 0x111e6214 */
  goto L_111e6214;
L_111e621d:;
  /* 111e621d mov eax, ebx */
  EAX = (EBX);
  /* 111e621f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 111e6221 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e6227 pop edx */
  EDX = (pop32());
  /* 111e6228 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 111e622f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_111e6232:;
  /* 111e6232 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 111e6235 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 111e6238 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e623b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111e623c jne 0x111e6232 */
  if (!C.zf) goto L_111e6232;
  /* 111e623e mov edi, ebx */
  EDI = (EBX);
  /* 111e6240 push 4 */
  push32((uint32_t)(0x4u));
  /* 111e6242 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 111e6245 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6248 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111e624d push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111e6252 push edi */
  push32((uint32_t)(EDI));
  /* 111e6253 call dword ptr [0x111e9058] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9058))), 0x111e6259u);
  /* 111e6259 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e625b jne 0x111e6265 */
  if (!C.zf) goto L_111e6265;
  /* 111e625d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 111e6260 jmp 0x111e62f8 */
  goto L_111e62f8;
L_111e6265:;
  /* 111e6265 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 111e626b cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e626d ja 0x111e62ab */
  if ((!C.cf&&!C.zf)) goto L_111e62ab;
  /* 111e626f lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_111e6272:;
  /* 111e6272 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 111e6276 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 111e627d lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 111e6283 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 111e628a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111e628c lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 111e6292 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111e6295 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 111e629f add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e62a4 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 111e62a7 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e62a9 jbe 0x111e6272 */
  if ((C.cf||C.zf)) goto L_111e6272;
L_111e62ab:;
  /* 111e62ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e62ae lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 111e62b1 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e62b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e62b8 pop edi */
  EDI = (pop32());
  /* 111e62b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111e62bc mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 111e62bf lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 111e62c2 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 111e62c5 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111e62c8 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 111e62cd mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 111e62d4 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 111e62d7 mov cl, al */
  CL = (AL);
  /* 111e62d9 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 111e62db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e62dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e62e0 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 111e62e3 jne 0x111e62e8 */
  if (!C.zf) goto L_111e62e8;
  /* 111e62e5 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_111e62e8:;
  /* 111e62e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 111e62ed mov ecx, ebx */
  ECX = (EBX);
  /* 111e62ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 111e62f1 not edx */
  EDX = (~(EDX));
  /* 111e62f3 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 111e62f6 mov eax, ebx */
  EAX = (EBX);
L_111e62f8:;
  /* 111e62f8 pop edi */
  EDI = (pop32());
  /* 111e62f9 pop esi */
  ESI = (pop32());
  /* 111e62fa pop ebx */
  EBX = (pop32());
  /* 111e62fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e62fc ret  */
  ESPCHK(0x111e6202u, _esp0);
  ESP += 4; return;
}

/* FUN_100062fd @ 0x111e62fd (324 bytes, 102 insns) */
void f_111e62fd(void) {
  FTRACE(0x111e62fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e62fd cmp dword ptr [0x111eaa48], -1 */
  { uint32_t _a=(r32((uint32_t)(0x111eaa48))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6304 push ebx */
  push32((uint32_t)(EBX));
  /* 111e6305 push ebp */
  push32((uint32_t)(EBP));
  /* 111e6306 push esi */
  push32((uint32_t)(ESI));
  /* 111e6307 push edi */
  push32((uint32_t)(EDI));
  /* 111e6308 jne 0x111e6311 */
  if (!C.zf) goto L_111e6311;
  /* 111e630a mov esi, 0x111eaa38 */
  ESI = (0x111eaa38u);
  /* 111e630f jmp 0x111e632e */
  goto L_111e632e;
L_111e6311:;
  /* 111e6311 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 111e6316 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e6318 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e631e call dword ptr [0x111e908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e908c))), 0x111e6324u);
  /* 111e6324 mov esi, eax */
  ESI = (EAX);
  /* 111e6326 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 111e6328 je 0x111e643a */
  if (C.zf) goto L_111e643a;
L_111e632e:;
  /* 111e632e mov ebp, dword ptr [0x111e9058] */
  EBP = (r32((uint32_t)(0x111e9058)));
  /* 111e6334 push 4 */
  push32((uint32_t)(0x4u));
  /* 111e6336 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 111e633b push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 111e6340 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e6342 call ebp */
  call_ind((uint32_t)(EBP), 0x111e6344u);
  /* 111e6344 mov edi, eax */
  EDI = (EAX);
  /* 111e6346 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e6348 je 0x111e6423 */
  if (C.zf) goto L_111e6423;
  /* 111e634e push 4 */
  push32((uint32_t)(0x4u));
  /* 111e6350 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 111e6355 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111e635a push ebx */
  push32((uint32_t)(EBX));
  /* 111e635b push edi */
  push32((uint32_t)(EDI));
  /* 111e635c call ebp */
  call_ind((uint32_t)(EBP), 0x111e635eu);
  /* 111e635e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e6360 je 0x111e6415 */
  if (C.zf) goto L_111e6415;
  /* 111e6366 mov eax, 0x111eaa38 */
  EAX = (0x111eaa38u);
  /* 111e636b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e636d jne 0x111e638d */
  if (!C.zf) goto L_111e638d;
  /* 111e636f cmp dword ptr [0x111eaa38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111eaa38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6376 jne 0x111e637d */
  if (!C.zf) goto L_111e637d;
  /* 111e6378 mov dword ptr [0x111eaa38], eax */
  w32((uint32_t)(0x111eaa38), (EAX));
L_111e637d:;
  /* 111e637d cmp dword ptr [0x111eaa3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x111eaa3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6384 jne 0x111e63a2 */
  if (!C.zf) goto L_111e63a2;
  /* 111e6386 mov dword ptr [0x111eaa3c], eax */
  w32((uint32_t)(0x111eaa3c), (EAX));
  /* 111e638b jmp 0x111e63a2 */
  goto L_111e63a2;
L_111e638d:;
  /* 111e638d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 111e638f mov eax, dword ptr [0x111eaa3c] */
  EAX = (r32((uint32_t)(0x111eaa3c)));
  /* 111e6394 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 111e6397 mov dword ptr [0x111eaa3c], esi */
  w32((uint32_t)(0x111eaa3c), (ESI));
  /* 111e639d mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 111e63a0 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_111e63a2:;
  /* 111e63a2 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 111e63a8 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 111e63ae mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 111e63b1 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 111e63b4 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 111e63b7 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 111e63ba mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 111e63bd xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 111e63bf mov ecx, 0xf1 */
  ECX = (0xf1u);
L_111e63c4:;
  /* 111e63c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 111e63c6 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e63c9 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 111e63cc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111e63cd and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 111e63cf dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 111e63d0 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 111e63d1 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111e63d3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111e63d6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e63d9 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e63df jl 0x111e63c4 */
  if ((C.sf!=C.of)) goto L_111e63c4;
  /* 111e63e1 push ebx */
  push32((uint32_t)(EBX));
  /* 111e63e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e63e4 push edi */
  push32((uint32_t)(EDI));
  /* 111e63e5 call 0x111e8210 */
  push32(0x111e63eau); f_111e8210();
  /* 111e63ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_111e63ed:;
  /* 111e63ed mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 111e63f0 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e63f2 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e63f4 jae 0x111e6411 */
  if (!C.cf) goto L_111e6411;
  /* 111e63f6 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 111e63fd lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 111e6400 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 111e6402 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 111e6409 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e640f jmp 0x111e63ed */
  goto L_111e63ed;
L_111e6411:;
  /* 111e6411 mov eax, esi */
  EAX = (ESI);
  /* 111e6413 jmp 0x111e643c */
  goto L_111e643c;
L_111e6415:;
  /* 111e6415 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111e641a push 0 */
  push32((uint32_t)(0x0u));
  /* 111e641c push edi */
  push32((uint32_t)(EDI));
  /* 111e641d call dword ptr [0x111e9054] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9054))), 0x111e6423u);
L_111e6423:;
  /* 111e6423 cmp esi, 0x111eaa38 */
  { uint32_t _a=(ESI),_b=(0x111eaa38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6429 je 0x111e643a */
  if (C.zf) goto L_111e643a;
  /* 111e642b push esi */
  push32((uint32_t)(ESI));
  /* 111e642c push 0 */
  push32((uint32_t)(0x0u));
  /* 111e642e push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e6434 call dword ptr [0x111e9074] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9074))), 0x111e643au);
L_111e643a:;
  /* 111e643a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e643c:;
  /* 111e643c pop edi */
  EDI = (pop32());
  /* 111e643d pop esi */
  ESI = (pop32());
  /* 111e643e pop ebp */
  EBP = (pop32());
  /* 111e643f pop ebx */
  EBX = (pop32());
  /* 111e6440 ret  */
  ESPCHK(0x111e62fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10006441 @ 0x111e6441 (86 bytes, 27 insns) */
void f_111e6441(void) {
  FTRACE(0x111e6441u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6441 push esi */
  push32((uint32_t)(ESI));
  /* 111e6442 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 111e6446 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 111e644b push 0 */
  push32((uint32_t)(0x0u));
  /* 111e644d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 111e6450 call dword ptr [0x111e9054] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9054))), 0x111e6456u);
  /* 111e6456 cmp dword ptr [0x111eca58], esi */
  { uint32_t _a=(r32((uint32_t)(0x111eca58))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e645c jne 0x111e6466 */
  if (!C.zf) goto L_111e6466;
  /* 111e645e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 111e6461 mov dword ptr [0x111eca58], eax */
  w32((uint32_t)(0x111eca58), (EAX));
L_111e6466:;
  /* 111e6466 cmp esi, 0x111eaa38 */
  { uint32_t _a=(ESI),_b=(0x111eaa38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e646c je 0x111e648e */
  if (C.zf) goto L_111e648e;
  /* 111e646e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 111e6471 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 111e6473 push esi */
  push32((uint32_t)(ESI));
  /* 111e6474 push 0 */
  push32((uint32_t)(0x0u));
  /* 111e6476 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 111e6478 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 111e647a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 111e647d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 111e6480 push dword ptr [0x111ee3a4] */
  push32((uint32_t)(r32((uint32_t)(0x111ee3a4))));
  /* 111e6486 call dword ptr [0x111e9074] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9074))), 0x111e648cu);
  /* 111e648c pop esi */
  ESI = (pop32());
  /* 111e648d ret  */
  ESPCHK(0x111e6441u, _esp0);
  ESP += 4; return;
L_111e648e:;
  /* 111e648e or dword ptr [0x111eaa48], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x111eaa48)))|(0xffffffffu); w32((uint32_t)(0x111eaa48), (_r)); fl_logic(_r,32); }
  /* 111e6495 pop esi */
  ESI = (pop32());
  /* 111e6496 ret  */
  ESPCHK(0x111e6441u, _esp0);
  ESP += 4; return;
}

/* FUN_10006497 @ 0x111e6497 (194 bytes, 66 insns) */
void f_111e6497(void) {
  FTRACE(0x111e6497u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6497 push ebp */
  push32((uint32_t)(EBP));
  /* 111e6498 mov ebp, esp */
  EBP = (ESP);
  /* 111e649a push ecx */
  push32((uint32_t)(ECX));
  /* 111e649b push ebx */
  push32((uint32_t)(EBX));
  /* 111e649c push esi */
  push32((uint32_t)(ESI));
  /* 111e649d mov esi, dword ptr [0x111eaa3c] */
  ESI = (r32((uint32_t)(0x111eaa3c)));
  /* 111e64a3 push edi */
  push32((uint32_t)(EDI));
L_111e64a4:;
  /* 111e64a4 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e64a8 je 0x111e6542 */
  if (C.zf) goto L_111e6542;
  /* 111e64ae and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e64b2 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 111e64b8 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_111e64bd:;
  /* 111e64bd cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e64c3 jne 0x111e64fe */
  if (!C.zf) goto L_111e64fe;
  /* 111e64c5 mov eax, ebx */
  EAX = (EBX);
  /* 111e64c7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 111e64cc add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e64cf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111e64d4 push eax */
  push32((uint32_t)(EAX));
  /* 111e64d5 call dword ptr [0x111e9054] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9054))), 0x111e64dbu);
  /* 111e64db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e64dd je 0x111e64fe */
  if (C.zf) goto L_111e64fe;
  /* 111e64df or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 111e64e2 dec dword ptr [0x111edf60] */
  { uint32_t _r=(r32((uint32_t)(0x111edf60)))-1; w32((uint32_t)(0x111edf60), (_r)); fl_dec(_r,32); }
  /* 111e64e8 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 111e64eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e64ed je 0x111e64f3 */
  if (C.zf) goto L_111e64f3;
  /* 111e64ef cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e64f1 jbe 0x111e64f6 */
  if ((C.cf||C.zf)) goto L_111e64f6;
L_111e64f3:;
  /* 111e64f3 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_111e64f6:;
  /* 111e64f6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 111e64f9 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 111e64fc je 0x111e650b */
  if (C.zf) goto L_111e650b;
L_111e64fe:;
  /* 111e64fe sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e6504 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e6507 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 111e6509 jge 0x111e64bd */
  if ((C.sf==C.of)) goto L_111e64bd;
L_111e650b:;
  /* 111e650b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e650f mov ecx, esi */
  ECX = (ESI);
  /* 111e6511 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 111e6514 je 0x111e6542 */
  if (C.zf) goto L_111e6542;
  /* 111e6516 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e651a jne 0x111e6542 */
  if (!C.zf) goto L_111e6542;
  /* 111e651c push 1 */
  push32((uint32_t)(0x1u));
  /* 111e651e lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 111e6521 pop edx */
  EDX = (pop32());
L_111e6522:;
  /* 111e6522 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6525 jne 0x111e6533 */
  if (!C.zf) goto L_111e6533;
  /* 111e6527 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 111e6528 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e652b cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6531 jl 0x111e6522 */
  if ((C.sf!=C.of)) goto L_111e6522;
L_111e6533:;
  /* 111e6533 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6539 jne 0x111e6542 */
  if (!C.zf) goto L_111e6542;
  /* 111e653b push ecx */
  push32((uint32_t)(ECX));
  /* 111e653c call 0x111e6441 */
  push32(0x111e6541u); f_111e6441();
  /* 111e6541 pop ecx */
  ECX = (pop32());
L_111e6542:;
  /* 111e6542 cmp esi, dword ptr [0x111eaa3c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111eaa3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6548 je 0x111e6554 */
  if (C.zf) goto L_111e6554;
  /* 111e654a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e654e jg 0x111e64a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_111e64a4;
L_111e6554:;
  /* 111e6554 pop edi */
  EDI = (pop32());
  /* 111e6555 pop esi */
  ESI = (pop32());
  /* 111e6556 pop ebx */
  EBX = (pop32());
  /* 111e6557 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e6558 ret  */
  ESPCHK(0x111e6497u, _esp0);
  ESP += 4; return;
}

/* FUN_10006559 @ 0x111e6559 (87 bytes, 34 insns) */
void f_111e6559(void) {
  FTRACE(0x111e6559u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6559 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e655d mov edx, 0x111eaa38 */
  EDX = (0x111eaa38u);
  /* 111e6562 push esi */
  push32((uint32_t)(ESI));
  /* 111e6563 mov ecx, edx */
  ECX = (EDX);
L_111e6565:;
  /* 111e6565 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6568 jbe 0x111e656f */
  if ((C.cf||C.zf)) goto L_111e656f;
  /* 111e656a cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e656d jb 0x111e6577 */
  if (C.cf) goto L_111e6577;
L_111e656f:;
  /* 111e656f mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 111e6571 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6573 je 0x111e65ac */
  if (C.zf) goto L_111e65ac;
  /* 111e6575 jmp 0x111e6565 */
  goto L_111e6565;
L_111e6577:;
  /* 111e6577 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 111e6579 jne 0x111e65ac */
  if (!C.zf) goto L_111e65ac;
  /* 111e657b mov esi, eax */
  ESI = (EAX);
  /* 111e657d mov edx, 0x100 */
  EDX = (0x100u);
  /* 111e6582 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 111e6588 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e658a jb 0x111e65ac */
  if (C.cf) goto L_111e65ac;
  /* 111e658c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 111e6590 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 111e6592 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 111e6596 mov ecx, eax */
  ECX = (EAX);
  /* 111e6598 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 111e659d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e659f mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 111e65a1 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e65a3 pop esi */
  ESI = (pop32());
  /* 111e65a4 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111e65a7 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 111e65ab ret  */
  ESPCHK(0x111e6559u, _esp0);
  ESP += 4; return;
L_111e65ac:;
  /* 111e65ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 111e65ae pop esi */
  ESI = (pop32());
  /* 111e65af ret  */
  ESPCHK(0x111e6559u, _esp0);
  ESP += 4; return;
}

/* FUN_100065b0 @ 0x111e65b0 (69 bytes, 19 insns) */
void f_111e65b0(void) {
  FTRACE(0x111e65b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e65b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 111e65b4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 111e65b8 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e65bb sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 111e65be lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 111e65c2 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 111e65c6 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 111e65c9 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e65cb and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 111e65ce cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e65d4 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 111e65db jne 0x111e65f4 */
  if (!C.zf) goto L_111e65f4;
  /* 111e65dd inc dword ptr [0x111edf60] */
  { uint32_t _r=(r32((uint32_t)(0x111edf60)))+1; w32((uint32_t)(0x111edf60), (_r)); fl_inc(_r,32); }
  /* 111e65e3 cmp dword ptr [0x111edf60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x111edf60))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e65ea jne 0x111e65f4 */
  if (!C.zf) goto L_111e65f4;
  /* 111e65ec push 0x10 */
  push32((uint32_t)(0x10u));
  /* 111e65ee call 0x111e6497 */
  push32(0x111e65f3u); f_111e6497();
  /* 111e65f3 pop ecx */
  ECX = (pop32());
L_111e65f4:;
  /* 111e65f4 ret  */
  ESPCHK(0x111e65b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100065f5 @ 0x111e65f5 (520 bytes, 180 insns) */
void f_111e65f5(void) {
  FTRACE(0x111e65f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e65f5 push ebp */
  push32((uint32_t)(EBP));
  /* 111e65f6 mov ebp, esp */
  EBP = (ESP);
  /* 111e65f8 push ecx */
  push32((uint32_t)(ECX));
  /* 111e65f9 push ecx */
  push32((uint32_t)(ECX));
  /* 111e65fa push ebx */
  push32((uint32_t)(EBX));
  /* 111e65fb push esi */
  push32((uint32_t)(ESI));
  /* 111e65fc mov esi, dword ptr [0x111eca58] */
  ESI = (r32((uint32_t)(0x111eca58)));
  /* 111e6602 push edi */
  push32((uint32_t)(EDI));
L_111e6603:;
  /* 111e6603 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 111e6606 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6609 je 0x111e66ae */
  if (C.zf) goto L_111e66ae;
  /* 111e660f mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 111e6612 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 111e6618 mov eax, edi */
  EAX = (EDI);
  /* 111e661a sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e661c sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e661f sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 111e6622 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 111e6625 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6627 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111e662c jae 0x111e6668 */
  if (!C.cf) goto L_111e6668;
L_111e662e:;
  /* 111e662e mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 111e6630 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e6633 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6635 jl 0x111e6651 */
  if ((C.sf!=C.of)) goto L_111e6651;
  /* 111e6637 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e663a jbe 0x111e6651 */
  if ((C.cf||C.zf)) goto L_111e6651;
  /* 111e663c push ebx */
  push32((uint32_t)(EBX));
  /* 111e663d push ecx */
  push32((uint32_t)(ECX));
  /* 111e663e push eax */
  push32((uint32_t)(EAX));
  /* 111e663f call 0x111e67fd */
  push32(0x111e6644u); f_111e67fd();
  /* 111e6644 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e6649 jne 0x111e66c0 */
  if (!C.zf) goto L_111e66c0;
  /* 111e664b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e664e mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_111e6651:;
  /* 111e6651 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6654 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 111e665a add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e665f cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6661 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 111e6664 jb 0x111e662e */
  if (C.cf) goto L_111e662e;
  /* 111e6666 jmp 0x111e666b */
  goto L_111e666b;
L_111e6668:;
  /* 111e6668 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_111e666b:;
  /* 111e666b mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 111e666e mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 111e6671 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 111e6674 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111e6677 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6679 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 111e667c jae 0x111e66b1 */
  if (!C.cf) goto L_111e66b1;
L_111e667e:;
  /* 111e667e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 111e6680 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6682 jl 0x111e669d */
  if ((C.sf!=C.of)) goto L_111e669d;
  /* 111e6684 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6687 jbe 0x111e669d */
  if ((C.cf||C.zf)) goto L_111e669d;
  /* 111e6689 push ebx */
  push32((uint32_t)(EBX));
  /* 111e668a push eax */
  push32((uint32_t)(EAX));
  /* 111e668b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 111e668e call 0x111e67fd */
  push32(0x111e6693u); f_111e67fd();
  /* 111e6693 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e6698 jne 0x111e66c0 */
  if (!C.zf) goto L_111e66c0;
  /* 111e669a mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_111e669d:;
  /* 111e669d add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e66a4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e66a7 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e66aa jb 0x111e667e */
  if (C.cf) goto L_111e667e;
  /* 111e66ac jmp 0x111e66b1 */
  goto L_111e66b1;
L_111e66ae:;
  /* 111e66ae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_111e66b1:;
  /* 111e66b1 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 111e66b3 cmp esi, dword ptr [0x111eca58] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x111eca58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e66b9 je 0x111e66d0 */
  if (C.zf) goto L_111e66d0;
  /* 111e66bb jmp 0x111e6603 */
  goto L_111e6603;
L_111e66c0:;
  /* 111e66c0 mov dword ptr [0x111eca58], esi */
  w32((uint32_t)(0x111eca58), (ESI));
  /* 111e66c6 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e66c8 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 111e66cb jmp 0x111e67f8 */
  goto L_111e67f8;
L_111e66d0:;
  /* 111e66d0 mov eax, 0x111eaa38 */
  EAX = (0x111eaa38u);
  /* 111e66d5 mov edi, eax */
  EDI = (EAX);
L_111e66d7:;
  /* 111e66d7 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e66db je 0x111e66e3 */
  if (C.zf) goto L_111e66e3;
  /* 111e66dd cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e66e1 jne 0x111e66ef */
  if (!C.zf) goto L_111e66ef;
L_111e66e3:;
  /* 111e66e3 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 111e66e5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e66e7 je 0x111e67c4 */
  if (C.zf) goto L_111e67c4;
  /* 111e66ed jmp 0x111e66d7 */
  goto L_111e66d7;
L_111e66ef:;
  /* 111e66ef mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 111e66f2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 111e66f6 mov esi, ebx */
  ESI = (EBX);
  /* 111e66f8 mov eax, ebx */
  EAX = (EBX);
  /* 111e66fa sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e66fc sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e66ff sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 111e6702 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 111e6705 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6708 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e670b jne 0x111e671e */
  if (!C.zf) goto L_111e671e;
L_111e670d:;
  /* 111e670d cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6711 jge 0x111e671e */
  if ((C.sf==C.of)) goto L_111e671e;
  /* 111e6713 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6716 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 111e6719 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e671c je 0x111e670d */
  if (C.zf) goto L_111e670d;
L_111e671e:;
  /* 111e671e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e6721 push 4 */
  push32((uint32_t)(0x4u));
  /* 111e6723 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 111e6726 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 111e672b push eax */
  push32((uint32_t)(EAX));
  /* 111e672c push esi */
  push32((uint32_t)(ESI));
  /* 111e672d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 111e6730 call dword ptr [0x111e9058] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9058))), 0x111e6736u);
  /* 111e6736 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6738 jne 0x111e67f6 */
  if (!C.zf) goto L_111e67f6;
  /* 111e673e push 0 */
  push32((uint32_t)(0x0u));
  /* 111e6740 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 111e6743 push esi */
  push32((uint32_t)(ESI));
  /* 111e6744 call 0x111e8210 */
  push32(0x111e6749u); f_111e8210();
  /* 111e6749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 111e674c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 111e674f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 111e6751 mov ecx, ebx */
  ECX = (EBX);
  /* 111e6753 jle 0x111e6785 */
  if ((C.zf||C.sf!=C.of)) goto L_111e6785;
  /* 111e6755 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 111e6758 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_111e675b:;
  /* 111e675b or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 111e6762 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 111e6765 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 111e6768 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 111e676d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 111e676f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111e6771 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 111e6778 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e677d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6780 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 111e6783 jne 0x111e675b */
  if (!C.zf) goto L_111e675b;
L_111e6785:;
  /* 111e6785 mov dword ptr [0x111eca58], edi */
  w32((uint32_t)(0x111eca58), (EDI));
  /* 111e678b lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_111e6791:;
  /* 111e6791 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6793 jae 0x111e67a1 */
  if (!C.cf) goto L_111e67a1;
  /* 111e6795 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6798 je 0x111e679f */
  if (C.zf) goto L_111e679f;
  /* 111e679a add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e679d jmp 0x111e6791 */
  goto L_111e6791;
L_111e679f:;
  /* 111e679f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_111e67a1:;
  /* 111e67a1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e67a3 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 111e67a5 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 111e67a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e67ab mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 111e67ae mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 111e67b1 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e67b3 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e67b6 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 111e67ba lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 111e67c0 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 111e67c2 jmp 0x111e67f8 */
  goto L_111e67f8;
L_111e67c4:;
  /* 111e67c4 call 0x111e62fd */
  push32(0x111e67c9u); f_111e62fd();
  /* 111e67c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e67cb je 0x111e67f6 */
  if (C.zf) goto L_111e67f6;
  /* 111e67cd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 111e67d0 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 111e67d3 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 111e67d7 mov dword ptr [0x111eca58], eax */
  w32((uint32_t)(0x111eca58), (EAX));
  /* 111e67dc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 111e67de mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 111e67e3 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e67e5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 111e67e8 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 111e67eb sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e67ee lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 111e67f4 jmp 0x111e67f8 */
  goto L_111e67f8;
L_111e67f6:;
  /* 111e67f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e67f8:;
  /* 111e67f8 pop edi */
  EDI = (pop32());
  /* 111e67f9 pop esi */
  ESI = (pop32());
  /* 111e67fa pop ebx */
  EBX = (pop32());
  /* 111e67fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e67fc ret  */
  ESPCHK(0x111e65f5u, _esp0);
  ESP += 4; return;
}

/* FUN_100067fd @ 0x111e67fd (292 bytes, 125 insns) */
void f_111e67fd(void) {
  FTRACE(0x111e67fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e67fd push ebp */
  push32((uint32_t)(EBP));
  /* 111e67fe mov ebp, esp */
  EBP = (ESP);
  /* 111e6800 push ecx */
  push32((uint32_t)(ECX));
  /* 111e6801 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e6804 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 111e6807 push ebx */
  push32((uint32_t)(EBX));
  /* 111e6808 push esi */
  push32((uint32_t)(ESI));
  /* 111e6809 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 111e680c push edi */
  push32((uint32_t)(EDI));
  /* 111e680d mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 111e680f lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 111e6815 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6817 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 111e681a mov eax, edi */
  EAX = (EDI);
  /* 111e681c mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 111e681f jb 0x111e6842 */
  if (C.cf) goto L_111e6842;
  /* 111e6821 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 111e6824 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 111e6826 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6828 jae 0x111e6831 */
  if (!C.cf) goto L_111e6831;
  /* 111e682a add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 111e682c sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e682f jmp 0x111e683a */
  goto L_111e683a;
L_111e6831:;
  /* 111e6831 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 111e6835 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 111e6838 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_111e683a:;
  /* 111e683a lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 111e683d jmp 0x111e6910 */
  goto L_111e6910;
L_111e6842:;
  /* 111e6842 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e6844 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e6847 je 0x111e684b */
  if (C.zf) goto L_111e684b;
  /* 111e6849 mov eax, esi */
  EAX = (ESI);
L_111e684b:;
  /* 111e684b lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 111e684e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6850 jae 0x111e6895 */
  if (!C.cf) goto L_111e6895;
L_111e6852:;
  /* 111e6852 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 111e6854 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 111e6856 jne 0x111e6888 */
  if (!C.zf) goto L_111e6888;
  /* 111e6858 push 1 */
  push32((uint32_t)(0x1u));
  /* 111e685a lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 111e685d pop esi */
  ESI = (pop32());
L_111e685e:;
  /* 111e685e cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e6861 jne 0x111e6867 */
  if (!C.zf) goto L_111e6867;
  /* 111e6863 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e6864 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 111e6865 jmp 0x111e685e */
  goto L_111e685e;
L_111e6867:;
  /* 111e6867 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6869 jae 0x111e68b9 */
  if (!C.cf) goto L_111e68b9;
  /* 111e686b cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e686e jne 0x111e6875 */
  if (!C.zf) goto L_111e6875;
  /* 111e6870 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 111e6873 jmp 0x111e6881 */
  goto L_111e6881;
L_111e6875:;
  /* 111e6875 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e6878 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e687b jb 0x111e691a */
  if (C.cf) goto L_111e691a;
L_111e6881:;
  /* 111e6881 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 111e6884 mov eax, ebx */
  EAX = (EBX);
  /* 111e6886 jmp 0x111e688d */
  goto L_111e688d;
L_111e6888:;
  /* 111e6888 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 111e688b add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_111e688d:;
  /* 111e688d lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 111e6890 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6893 jb 0x111e6852 */
  if (C.cf) goto L_111e6852;
L_111e6895:;
  /* 111e6895 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_111e6898:;
  /* 111e6898 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e689a jae 0x111e691a */
  if (!C.cf) goto L_111e691a;
  /* 111e689c lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 111e689f cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e68a2 jae 0x111e691a */
  if (!C.cf) goto L_111e691a;
  /* 111e68a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 111e68a6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 111e68a8 jne 0x111e68ea */
  if (!C.zf) goto L_111e68ea;
  /* 111e68aa push 1 */
  push32((uint32_t)(0x1u));
  /* 111e68ac lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 111e68af pop eax */
  EAX = (pop32());
L_111e68b0:;
  /* 111e68b0 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 111e68b3 jne 0x111e68da */
  if (!C.zf) goto L_111e68da;
  /* 111e68b5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 111e68b6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 111e68b7 jmp 0x111e68b0 */
  goto L_111e68b0;
L_111e68b9:;
  /* 111e68b9 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 111e68bc cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e68bf jae 0x111e68ca */
  if (!C.cf) goto L_111e68ca;
  /* 111e68c1 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e68c3 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 111e68c5 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 111e68c8 jmp 0x111e68d3 */
  goto L_111e68d3;
L_111e68ca:;
  /* 111e68ca and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 111e68ce lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 111e68d1 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_111e68d3:;
  /* 111e68d3 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 111e68d5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 111e68d8 jmp 0x111e6910 */
  goto L_111e6910;
L_111e68da:;
  /* 111e68da cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e68dc jae 0x111e68f1 */
  if (!C.cf) goto L_111e68f1;
  /* 111e68de sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 111e68e1 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e68e4 jb 0x111e691a */
  if (C.cf) goto L_111e691a;
  /* 111e68e6 mov esi, ebx */
  ESI = (EBX);
  /* 111e68e8 jmp 0x111e6898 */
  goto L_111e6898;
L_111e68ea:;
  /* 111e68ea movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 111e68ed add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e68ef jmp 0x111e6898 */
  goto L_111e6898;
L_111e68f1:;
  /* 111e68f1 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 111e68f4 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e68f7 jae 0x111e6902 */
  if (!C.cf) goto L_111e6902;
  /* 111e68f9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e68fb mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 111e68fd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 111e6900 jmp 0x111e690b */
  goto L_111e690b;
L_111e6902:;
  /* 111e6902 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 111e6906 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 111e6909 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_111e690b:;
  /* 111e690b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 111e690d lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_111e6910:;
  /* 111e6910 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 111e6913 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 111e6916 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 111e6918 jmp 0x111e691c */
  goto L_111e691c;
L_111e691a:;
  /* 111e691a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_111e691c:;
  /* 111e691c pop edi */
  EDI = (pop32());
  /* 111e691d pop esi */
  ESI = (pop32());
  /* 111e691e pop ebx */
  EBX = (pop32());
  /* 111e691f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 111e6920 ret  */
  ESPCHK(0x111e67fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10006921 @ 0x111e6921 (41 bytes, 12 insns) */
void f_111e6921(void) {
  FTRACE(0x111e6921u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e6921 push esi */
  push32((uint32_t)(ESI));
  /* 111e6922 mov esi, dword ptr [0x111e9000] */
  ESI = (r32((uint32_t)(0x111e9000)));
  /* 111e6928 push dword ptr [0x111ecaa4] */
  push32((uint32_t)(r32((uint32_t)(0x111ecaa4))));
  /* 111e692e call esi */
  call_ind((uint32_t)(ESI), 0x111e6930u);
  /* 111e6930 push dword ptr [0x111eca94] */
  push32((uint32_t)(r32((uint32_t)(0x111eca94))));
  /* 111e6936 call esi */
  call_ind((uint32_t)(ESI), 0x111e6938u);
  /* 111e6938 push dword ptr [0x111eca84] */
  push32((uint32_t)(r32((uint32_t)(0x111eca84))));
  /* 111e693e call esi */
  call_ind((uint32_t)(ESI), 0x111e6940u);
  /* 111e6940 push dword ptr [0x111eca64] */
  push32((uint32_t)(r32((uint32_t)(0x111eca64))));
  /* 111e6946 call esi */
  call_ind((uint32_t)(ESI), 0x111e6948u);
  /* 111e6948 pop esi */
  ESI = (pop32());
  /* 111e6949 ret  */
  ESPCHK(0x111e6921u, _esp0);
  ESP += 4; return;
}

/* FUN_1000694a @ 0x111e694a (108 bytes, 34 insns) */
void f_111e694a(void) {
  FTRACE(0x111e694au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e694a push esi */
  push32((uint32_t)(ESI));
  /* 111e694b push edi */
  push32((uint32_t)(EDI));
  /* 111e694c mov edi, dword ptr [0x111e90a0] */
  EDI = (r32((uint32_t)(0x111e90a0)));
  /* 111e6952 mov esi, 0x111eca60 */
  ESI = (0x111eca60u);
L_111e6957:;
  /* 111e6957 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 111e6959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 111e695b je 0x111e6988 */
  if (C.zf) goto L_111e6988;
  /* 111e695d cmp esi, 0x111ecaa4 */
  { uint32_t _a=(ESI),_b=(0x111ecaa4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6963 je 0x111e6988 */
  if (C.zf) goto L_111e6988;
  /* 111e6965 cmp esi, 0x111eca94 */
  { uint32_t _a=(ESI),_b=(0x111eca94u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e696b je 0x111e6988 */
  if (C.zf) goto L_111e6988;
  /* 111e696d cmp esi, 0x111eca84 */
  { uint32_t _a=(ESI),_b=(0x111eca84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6973 je 0x111e6988 */
  if (C.zf) goto L_111e6988;
  /* 111e6975 cmp esi, 0x111eca64 */
  { uint32_t _a=(ESI),_b=(0x111eca64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e697b je 0x111e6988 */
  if (C.zf) goto L_111e6988;
  /* 111e697d push eax */
  push32((uint32_t)(EAX));
  /* 111e697e call edi */
  call_ind((uint32_t)(EDI), 0x111e6980u);
  /* 111e6980 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111e6982 call 0x111e3d2b */
  push32(0x111e6987u); f_111e3d2b();
  /* 111e6987 pop ecx */
  ECX = (pop32());
L_111e6988:;
  /* 111e6988 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 111e698b cmp esi, 0x111ecb20 */
  { uint32_t _a=(ESI),_b=(0x111ecb20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e6991 jl 0x111e6957 */
  if ((C.sf!=C.of)) goto L_111e6957;
  /* 111e6993 push dword ptr [0x111eca84] */
  push32((uint32_t)(r32((uint32_t)(0x111eca84))));
  /* 111e6999 call edi */
  call_ind((uint32_t)(EDI), 0x111e699bu);
  /* 111e699b push dword ptr [0x111eca94] */
  push32((uint32_t)(r32((uint32_t)(0x111eca94))));
  /* 111e69a1 call edi */
  call_ind((uint32_t)(EDI), 0x111e69a3u);
  /* 111e69a3 push dword ptr [0x111ecaa4] */
  push32((uint32_t)(r32((uint32_t)(0x111ecaa4))));
  /* 111e69a9 call edi */
  call_ind((uint32_t)(EDI), 0x111e69abu);
  /* 111e69ab push dword ptr [0x111eca64] */
  push32((uint32_t)(r32((uint32_t)(0x111eca64))));
  /* 111e69b1 call edi */
  call_ind((uint32_t)(EDI), 0x111e69b3u);
  /* 111e69b3 pop edi */
  EDI = (pop32());
  /* 111e69b4 pop esi */
  ESI = (pop32());
  /* 111e69b5 ret  */
  ESPCHK(0x111e694au, _esp0);
  ESP += 4; return;
}

/* FUN_100069b6 @ 0x111e69b6 (97 bytes, 37 insns) */
void f_111e69b6(void) {
  FTRACE(0x111e69b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 111e69b6 push ebp */
  push32((uint32_t)(EBP));
  /* 111e69b7 mov ebp, esp */
  EBP = (ESP);
  /* 111e69b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 111e69bc push esi */
  push32((uint32_t)(ESI));
  /* 111e69bd cmp dword ptr [eax*4 + 0x111eca60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x111eca60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e69c5 lea esi, [eax*4 + 0x111eca60] */
  ESI = ((uint32_t)(EAX*4 + 0x111eca60));
  /* 111e69cc jne 0x111e6a0c */
  if (!C.zf) goto L_111e6a0c;
  /* 111e69ce push edi */
  push32((uint32_t)(EDI));
  /* 111e69cf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 111e69d1 call 0x111e48e5 */
  push32(0x111e69d6u); f_111e48e5();
  /* 111e69d6 mov edi, eax */
  EDI = (EAX);
  /* 111e69d8 pop ecx */
  ECX = (pop32());
  /* 111e69d9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 111e69db jne 0x111e69e5 */
  if (!C.zf) goto L_111e69e5;
  /* 111e69dd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111e69df call 0x111e3cf8 */
  push32(0x111e69e4u); f_111e3cf8();
  /* 111e69e4 pop ecx */
  ECX = (pop32());
L_111e69e5:;
  /* 111e69e5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111e69e7 call 0x111e69b6 */
  push32(0x111e69ecu); f_111e69b6();
  /* 111e69ec cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 111e69ef pop ecx */
  ECX = (pop32());
  /* 111e69f0 push edi */
  push32((uint32_t)(EDI));
  /* 111e69f1 jne 0x111e69fd */
  if (!C.zf) goto L_111e69fd;
  /* 111e69f3 call dword ptr [0x111e9000] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9000))), 0x111e69f9u);
  /* 111e69f9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 111e69fb jmp 0x111e6a03 */
  goto L_111e6a03;
L_111e69fd:;
  /* 111e69fd call 0x111e3d2b */
  push32(0x111e6a02u); f_111e3d2b();
  /* 111e6a02 pop ecx */
  ECX = (pop32());
L_111e6a03:;
  /* 111e6a03 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 111e6a05 call 0x111e6a17 */
  push32(0x111e6a0au); f_111e6a17();
  /* 111e6a0a pop ecx */
  ECX = (pop32());
  /* 111e6a0b pop edi */
  EDI = (pop32());
L_111e6a0c:;
  /* 111e6a0c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 111e6a0e call dword ptr [0x111e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x111e9078))), 0x111e6a14u);
  /* 111e6a14 pop esi */
  ESI = (pop32());
  /* 111e6a15 pop ebp */
  EBP = (pop32());
  /* 111e6a16 ret  */
  ESPCHK(0x111e69b6u, _esp0);
  ESP += 4; return;
}

