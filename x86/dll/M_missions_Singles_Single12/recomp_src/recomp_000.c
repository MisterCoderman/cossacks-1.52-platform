#include "recomp.h"

/* FUN_10001000 @ 0x110e1000 (20 bytes, 6 insns) */
void f_110e1000(void) {
  FTRACE(0x110e1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e1005 jne 0x110e100c */
  if (!C.zf) goto L_110e100c;
  /* 110e1007 call 0x110e21f0 */
  push32(0x110e100cu); f_110e21f0();
L_110e100c:;
  /* 110e100c mov eax, 1 */
  EAX = (0x1u);
  /* 110e1011 ret 0xc */
  ESPCHK(0x110e1000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001020 @ 0x110e1020 (415 bytes, 111 insns) */
void f_110e1020(void) {
  FTRACE(0x110e1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1020 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e1024 push ebx */
  push32((uint32_t)(EBX));
  /* 110e1025 push ebp */
  push32((uint32_t)(EBP));
  /* 110e1026 mov ebp, ecx */
  EBP = (ECX);
  /* 110e1028 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 110e102c mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 110e1030 mov dword ptr [ebp + 0x2a7], eax */
  w32((uint32_t)(EBP + 0x2a7), (EAX));
  /* 110e1036 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 110e103a mov dword ptr [ebp + 0x28c], eax */
  w32((uint32_t)(EBP + 0x28c), (EAX));
  /* 110e1040 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 110e1044 mov dword ptr [ebp + 0x2ab], eax */
  w32((uint32_t)(EBP + 0x2ab), (EAX));
  /* 110e104a mov eax, dword ptr [esp + 0x3c] */
  EAX = (r32((uint32_t)(ESP + 0x3c)));
  /* 110e104e mov dword ptr [ebp + 0x284], ecx */
  w32((uint32_t)(EBP + 0x284), (ECX));
  /* 110e1054 mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 110e1058 mov dword ptr [ebp + 0x288], edx */
  w32((uint32_t)(EBP + 0x288), (EDX));
  /* 110e105e mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 110e1062 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 110e1065 mov dword ptr [ebp + 0x290], ecx */
  w32((uint32_t)(EBP + 0x290), (ECX));
  /* 110e106b mov dword ptr [ebp + 0x294], edx */
  w32((uint32_t)(EBP + 0x294), (EDX));
  /* 110e1071 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 110e1075 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 110e1078 mov al, byte ptr [esp + 0x1c] */
  AL = (r8((uint32_t)(ESP + 0x1c)));
  /* 110e107c push esi */
  push32((uint32_t)(ESI));
  /* 110e107d mov dword ptr [ebp + 0x280], edx */
  w32((uint32_t)(EBP + 0x280), (EDX));
  /* 110e1083 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 110e1087 push edi */
  push32((uint32_t)(EDI));
  /* 110e1088 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 110e108c mov dword ptr [ebp + 0x2f1], ecx */
  w32((uint32_t)(EBP + 0x2f1), (ECX));
  /* 110e1092 mov byte ptr [ebp + 0x2e8], al */
  w8((uint32_t)(EBP + 0x2e8), (AL));
  /* 110e1098 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e109b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e109d mov byte ptr [ebp + 0x2f5], 1 */
  w8((uint32_t)(EBP + 0x2f5), (0x1u));
  /* 110e10a4 mov dword ptr [ebp + 0x2e9], edx */
  w32((uint32_t)(EBP + 0x2e9), (EDX));
  /* 110e10aa mov dword ptr [ebp + 0x2fa], 1 */
  w32((uint32_t)(EBP + 0x2fa), (0x1u));
  /* 110e10b4 mov byte ptr [ebp + 0x2fe], 1 */
  w8((uint32_t)(EBP + 0x2fe), (0x1u));
  /* 110e10bb lea ebx, [ebp + 0x298] */
  EBX = ((uint32_t)(EBP + 0x298));
  /* 110e10c1 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e10c3 not ecx */
  ECX = (~(ECX));
  /* 110e10c5 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e10c7 mov eax, ecx */
  EAX = (ECX);
  /* 110e10c9 mov esi, edi */
  ESI = (EDI);
  /* 110e10cb mov edi, ebx */
  EDI = (EBX);
  /* 110e10cd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e10cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e10d2 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e10d4 mov ecx, eax */
  ECX = (EAX);
  /* 110e10d6 mov al, byte ptr [esp + 0x14] */
  AL = (r8((uint32_t)(ESP + 0x14)));
  /* 110e10da and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e10dd cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e10df rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e10e1 mov byte ptr [ebp + 0x2af], al */
  w8((uint32_t)(EBP + 0x2af), (AL));
  /* 110e10e7 mov dword ptr [ebp + 0x2bc], 0x12c */
  w32((uint32_t)(EBP + 0x2bc), (0x12cu));
  /* 110e10f1 mov dword ptr [ebp + 0x2cc], ebx */
  w32((uint32_t)(EBP + 0x2cc), (EBX));
  /* 110e10f7 mov dword ptr [ebp + 0x2c8], ebx */
  w32((uint32_t)(EBP + 0x2c8), (EBX));
  /* 110e10fd mov dword ptr [ebp + 0x2c4], ebx */
  w32((uint32_t)(EBP + 0x2c4), (EBX));
  /* 110e1103 mov dword ptr [ebp + 0x2c0], ebx */
  w32((uint32_t)(EBP + 0x2c0), (EBX));
  /* 110e1109 mov dword ptr [ebp + 0x2b8], ebx */
  w32((uint32_t)(EBP + 0x2b8), (EBX));
  /* 110e110f jne 0x110e11b8 */
  if (!C.zf) goto L_110e11b8;
  /* 110e1115 cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1117 je 0x110e1123 */
  if (C.zf) goto L_110e1123;
  /* 110e1119 cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e111c je 0x110e1123 */
  if (C.zf) goto L_110e1123;
  /* 110e111e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1121 jne 0x110e1163 */
  if (!C.zf) goto L_110e1163;
L_110e1123:;
  /* 110e1123 lea esi, [ebp + 0x2b0] */
  ESI = ((uint32_t)(EBP + 0x2b0));
  /* 110e1129 push esi */
  push32((uint32_t)(ESI));
  /* 110e112a call dword ptr [0x110e9178] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9178))), 0x110e1130u);
  /* 110e1130 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 110e1134 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 110e1138 push ebx */
  push32((uint32_t)(EBX));
  /* 110e1139 push ecx */
  push32((uint32_t)(ECX));
  /* 110e113a push edx */
  push32((uint32_t)(EDX));
  /* 110e113b push 0x110ed330 */
  push32((uint32_t)(0x110ed330u));
  /* 110e1140 push 0x110ed6b8 */
  push32((uint32_t)(0x110ed6b8u));
  /* 110e1145 push 0x110ed350 */
  push32((uint32_t)(0x110ed350u));
  /* 110e114a call dword ptr [0x110e917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e917c))), 0x110e1150u);
  /* 110e1150 push esi */
  push32((uint32_t)(ESI));
  /* 110e1151 push 0x110ed350 */
  push32((uint32_t)(0x110ed350u));
  /* 110e1156 call dword ptr [0x110e9174] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9174))), 0x110e115cu);
  /* 110e115c mov edx, dword ptr [esp + 0x4c] */
  EDX = (r32((uint32_t)(ESP + 0x4c)));
  /* 110e1160 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e1163:;
  /* 110e1163 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e1165 je 0x110e117e */
  if (C.zf) goto L_110e117e;
  /* 110e1167 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e1168 je 0x110e118e */
  if (C.zf) goto L_110e118e;
  /* 110e116a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e116b je 0x110e119e */
  if (C.zf) goto L_110e119e;
  /* 110e116d pop edi */
  EDI = (pop32());
  /* 110e116e mov dword ptr [ebp + 0x2ed], 0xf */
  w32((uint32_t)(EBP + 0x2ed), (0xfu));
  /* 110e1178 pop esi */
  ESI = (pop32());
  /* 110e1179 pop ebp */
  EBP = (pop32());
  /* 110e117a pop ebx */
  EBX = (pop32());
  /* 110e117b ret 0x34 */
  ESPCHK(0x110e1020u, _esp0);
  ESP += 56; return;
L_110e117e:;
  /* 110e117e lea eax, [ebp + 0x2b0] */
  EAX = ((uint32_t)(EBP + 0x2b0));
  /* 110e1184 push eax */
  push32((uint32_t)(EAX));
  /* 110e1185 call dword ptr [0x110e9184] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9184))), 0x110e118bu);
  /* 110e118b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e118e:;
  /* 110e118e lea ecx, [ebp + 0x2b0] */
  ECX = ((uint32_t)(EBP + 0x2b0));
  /* 110e1194 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1195 call dword ptr [0x110e9188] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9188))), 0x110e119bu);
  /* 110e119b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e119e:;
  /* 110e119e lea edx, [ebp + 0x2b0] */
  EDX = ((uint32_t)(EBP + 0x2b0));
  /* 110e11a4 push edx */
  push32((uint32_t)(EDX));
  /* 110e11a5 call dword ptr [0x110e9180] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9180))), 0x110e11abu);
  /* 110e11ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e11ae mov dword ptr [ebp + 0x2ed], 0xf */
  w32((uint32_t)(EBP + 0x2ed), (0xfu));
L_110e11b8:;
  /* 110e11b8 pop edi */
  EDI = (pop32());
  /* 110e11b9 pop esi */
  ESI = (pop32());
  /* 110e11ba pop ebp */
  EBP = (pop32());
  /* 110e11bb pop ebx */
  EBX = (pop32());
  /* 110e11bc ret 0x34 */
  ESPCHK(0x110e1020u, _esp0);
  ESP += 56; return;
}

/* FUN_100011c0 @ 0x110e11c0 (73 bytes, 15 insns) */
void f_110e11c0(void) {
  FTRACE(0x110e11c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e11c0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 110e11c4 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 110e11c8 mov dword ptr [ecx + 0x284], eax */
  w32((uint32_t)(ECX + 0x284), (EAX));
  /* 110e11ce mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 110e11d2 mov dword ptr [ecx + 0x288], edx */
  w32((uint32_t)(ECX + 0x288), (EDX));
  /* 110e11d8 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 110e11dc mov dword ptr [ecx + 0x28c], eax */
  w32((uint32_t)(ECX + 0x28c), (EAX));
  /* 110e11e2 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 110e11e6 mov dword ptr [ecx + 0x290], edx */
  w32((uint32_t)(ECX + 0x290), (EDX));
  /* 110e11ec mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e11f0 mov dword ptr [ecx + 0x294], eax */
  w32((uint32_t)(ECX + 0x294), (EAX));
  /* 110e11f6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e11fa mov dword ptr [ecx + 0x280], edx */
  w32((uint32_t)(ECX + 0x280), (EDX));
  /* 110e1200 mov dword ptr [ecx + 0x2ab], eax */
  w32((uint32_t)(ECX + 0x2ab), (EAX));
  /* 110e1206 ret 0x1c */
  ESPCHK(0x110e11c0u, _esp0);
  ESP += 32; return;
}

/* FUN_10001210 @ 0x110e1210 (27 bytes, 10 insns) */
void f_110e1210(void) {
  FTRACE(0x110e1210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1210 push esi */
  push32((uint32_t)(ESI));
  /* 110e1211 mov esi, ecx */
  ESI = (ECX);
  /* 110e1213 mov al, byte ptr [esi + 0x2af] */
  AL = (r8((uint32_t)(ESI + 0x2af)));
  /* 110e1219 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e121b jne 0x110e1229 */
  if (!C.zf) goto L_110e1229;
  /* 110e121d call 0x110e12e0 */
  push32(0x110e1222u); f_110e12e0();
  /* 110e1222 mov ecx, esi */
  ECX = (ESI);
  /* 110e1224 call 0x110e13e0 */
  push32(0x110e1229u); f_110e13e0();
L_110e1229:;
  /* 110e1229 pop esi */
  ESI = (pop32());
  /* 110e122a ret  */
  ESPCHK(0x110e1210u, _esp0);
  ESP += 4; return;
}

/* FUN_10001230 @ 0x110e1230 (167 bytes, 40 insns) */
void f_110e1230(void) {
  FTRACE(0x110e1230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1230 push ebx */
  push32((uint32_t)(EBX));
  /* 110e1231 mov ebx, dword ptr [ecx + 0x2bc] */
  EBX = (r32((uint32_t)(ECX + 0x2bc)));
  /* 110e1237 mov edx, 0x12c */
  EDX = (0x12cu);
  /* 110e123c push esi */
  push32((uint32_t)(ESI));
  /* 110e123d mov esi, dword ptr [ecx + 0x2b8] */
  ESI = (r32((uint32_t)(ECX + 0x2b8)));
  /* 110e1243 mov eax, 0x64 */
  EAX = (0x64u);
  /* 110e1248 push edi */
  push32((uint32_t)(EDI));
  /* 110e1249 mov edi, dword ptr [ecx + 0x2c0] */
  EDI = (r32((uint32_t)(ECX + 0x2c0)));
  /* 110e124f mov dword ptr [ecx + 0x2e4], edx */
  w32((uint32_t)(ECX + 0x2e4), (EDX));
  /* 110e1255 mov dword ptr [ecx + 0x2e0], edx */
  w32((uint32_t)(ECX + 0x2e0), (EDX));
  /* 110e125b mov dword ptr [ecx + 0x2d0], eax */
  w32((uint32_t)(ECX + 0x2d0), (EAX));
  /* 110e1261 mov dword ptr [ecx + 0x2d8], eax */
  w32((uint32_t)(ECX + 0x2d8), (EAX));
  /* 110e1267 mov dword ptr [ecx + 0x2d4], 0xc8 */
  w32((uint32_t)(ECX + 0x2d4), (0xc8u));
  /* 110e1271 mov dword ptr [ecx + 0x2dc], 0x1f4 */
  w32((uint32_t)(ECX + 0x2dc), (0x1f4u));
  /* 110e127b mov edx, 0xc */
  EDX = (0xcu);
L_110e1280:;
  /* 110e1280 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1282 jle 0x110e128b */
  if ((C.zf||C.sf!=C.of)) goto L_110e128b;
  /* 110e1284 add dword ptr [ecx + 0x2d0], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2d0))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2d0), (_r)); fl_add(_a,_b,_r,32); }
L_110e128b:;
  /* 110e128b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e128d jle 0x110e1296 */
  if ((C.zf||C.sf!=C.of)) goto L_110e1296;
  /* 110e128f add dword ptr [ecx + 0x2d8], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2d8))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2d8), (_r)); fl_add(_a,_b,_r,32); }
L_110e1296:;
  /* 110e1296 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1298 jle 0x110e12a1 */
  if ((C.zf||C.sf!=C.of)) goto L_110e12a1;
  /* 110e129a add dword ptr [ecx + 0x2d4], -0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2d4))),_b=(0xfffffff0u),_r=_a+_b; w32((uint32_t)(ECX + 0x2d4), (_r)); fl_add(_a,_b,_r,32); }
L_110e12a1:;
  /* 110e12a1 cmp dword ptr [ecx + 0x2c8], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2c8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e12a7 jle 0x110e12b0 */
  if ((C.zf||C.sf!=C.of)) goto L_110e12b0;
  /* 110e12a9 add dword ptr [ecx + 0x2e0], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2e0))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2e0), (_r)); fl_add(_a,_b,_r,32); }
L_110e12b0:;
  /* 110e12b0 cmp dword ptr [ecx + 0x2cc], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2cc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e12b6 jle 0x110e12bf */
  if ((C.zf||C.sf!=C.of)) goto L_110e12bf;
  /* 110e12b8 add dword ptr [ecx + 0x2e4], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2e4))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2e4), (_r)); fl_add(_a,_b,_r,32); }
L_110e12bf:;
  /* 110e12bf cmp dword ptr [ecx + 0x2c4], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2c4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e12c5 jle 0x110e12ce */
  if ((C.zf||C.sf!=C.of)) goto L_110e12ce;
  /* 110e12c7 add dword ptr [ecx + 0x2dc], -0x28 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2dc))),_b=(0xffffffd8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2dc), (_r)); fl_add(_a,_b,_r,32); }
L_110e12ce:;
  /* 110e12ce add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e12d0 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e12d1 jne 0x110e1280 */
  if (!C.zf) goto L_110e1280;
  /* 110e12d3 pop edi */
  EDI = (pop32());
  /* 110e12d4 pop esi */
  ESI = (pop32());
  /* 110e12d5 pop ebx */
  EBX = (pop32());
  /* 110e12d6 ret  */
  ESPCHK(0x110e1230u, _esp0);
  ESP += 4; return;
}

/* FUN_100012e0 @ 0x110e12e0 (225 bytes, 63 insns) [1 switch table(s)] */
void f_110e12e0(void) {
  FTRACE(0x110e12e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e12e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110e12e1 push esi */
  push32((uint32_t)(ESI));
  /* 110e12e2 push edi */
  push32((uint32_t)(EDI));
  /* 110e12e3 mov esi, ecx */
  ESI = (ECX);
  /* 110e12e5 call 0x110e14c0 */
  push32(0x110e12eau); f_110e14c0();
  /* 110e12ea xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 110e12ec mov dword ptr [esi + 0x2ed], eax */
  w32((uint32_t)(ESI + 0x2ed), (EAX));
  /* 110e12f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e12f4 jle 0x110e1380 */
  if ((C.zf||C.sf!=C.of)) goto L_110e1380;
L_110e12fa:;
  /* 110e12fa mov cl, byte ptr [esi + 0x2f5] */
  CL = (r8((uint32_t)(ESI + 0x2f5)));
  /* 110e1300 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 110e1302 je 0x110e1380 */
  if (C.zf) goto L_110e1380;
  /* 110e1304 mov edi, dword ptr [esi + 0x2f6] */
  EDI = (r32((uint32_t)(ESI + 0x2f6)));
  /* 110e130a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e130c jle 0x110e1377 */
  if ((C.zf||C.sf!=C.of)) goto L_110e1377;
  /* 110e130e mov edx, dword ptr [esi + 0x2bc] */
  EDX = (r32((uint32_t)(ESI + 0x2bc)));
  /* 110e1314 cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1317 jl 0x110e1377 */
  if ((C.sf!=C.of)) goto L_110e1377;
  /* 110e1319 mov ecx, dword ptr [esi + 0x2e9] */
  ECX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 110e131f cmp ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1322 ja 0x110e1361 */
  if ((!C.cf&&!C.zf)) goto L_110e1361;
  /* 110e1324 jmp dword ptr [ecx*4 + 0x110e13c4] */
  switch (ECX) {
    case 0: goto L_110e132b;
    case 1: goto L_110e133d;
    case 2: goto L_110e1334;
    case 3: goto L_110e135a;
    case 4: goto L_110e1348;
    case 5: goto L_110e1351;
    default: x86_unimpl("switch@0x110e1324 out of table"); return;
  }
L_110e132b:;
  /* 110e132b add dword ptr [esi + 0x2b8], 0x19 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2b8))),_b=(0x19u),_r=_a+_b; w32((uint32_t)(ESI + 0x2b8), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e1332 jmp 0x110e1361 */
  goto L_110e1361;
L_110e1334:;
  /* 110e1334 add dword ptr [esi + 0x2c0], 0x19 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2c0))),_b=(0x19u),_r=_a+_b; w32((uint32_t)(ESI + 0x2c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e133b jmp 0x110e1361 */
  goto L_110e1361;
L_110e133d:;
  /* 110e133d add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1340 mov dword ptr [esi + 0x2bc], edx */
  w32((uint32_t)(ESI + 0x2bc), (EDX));
  /* 110e1346 jmp 0x110e1361 */
  goto L_110e1361;
L_110e1348:;
  /* 110e1348 add dword ptr [esi + 0x2c8], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2c8))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x2c8), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e134f jmp 0x110e1361 */
  goto L_110e1361;
L_110e1351:;
  /* 110e1351 add dword ptr [esi + 0x2cc], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2cc))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x2cc), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e1358 jmp 0x110e1361 */
  goto L_110e1361;
L_110e135a:;
  /* 110e135a add dword ptr [esi + 0x2c4], 5 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2c4))),_b=(0x5u),_r=_a+_b; w32((uint32_t)(ESI + 0x2c4), (_r)); fl_add(_a,_b,_r,32); }
L_110e1361:;
  /* 110e1361 mov ecx, dword ptr [esi + 0x2bc] */
  ECX = (r32((uint32_t)(ESI + 0x2bc)));
  /* 110e1367 add ecx, -5 */
  { uint32_t _a=(ECX),_b=(0xfffffffbu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e136a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 110e136b mov dword ptr [esi + 0x2bc], ecx */
  w32((uint32_t)(ESI + 0x2bc), (ECX));
  /* 110e1371 mov dword ptr [esi + 0x2f6], edi */
  w32((uint32_t)(ESI + 0x2f6), (EDI));
L_110e1377:;
  /* 110e1377 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 110e1378 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e137a jl 0x110e12fa */
  if ((C.sf!=C.of)) goto L_110e12fa;
L_110e1380:;
  /* 110e1380 mov ecx, dword ptr [esi + 0x2fa] */
  ECX = (r32((uint32_t)(ESI + 0x2fa)));
  /* 110e1386 mov edx, 3 */
  EDX = (0x3u);
  /* 110e138b sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e138d mov edi, dword ptr [esi + 0x2f6] */
  EDI = (r32((uint32_t)(ESI + 0x2f6)));
  /* 110e1393 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e1396 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e1399 mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 110e139f add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e13a1 push ecx */
  push32((uint32_t)(ECX));
  /* 110e13a2 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 110e13a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e13a6 push eax */
  push32((uint32_t)(EAX));
  /* 110e13a7 mov dword ptr [esi + 0x2f6], edi */
  w32((uint32_t)(ESI + 0x2f6), (EDI));
  /* 110e13ad call dword ptr [0x110e9168] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9168))), 0x110e13b3u);
  /* 110e13b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e13b6 mov ecx, esi */
  ECX = (ESI);
  /* 110e13b8 call 0x110e1230 */
  push32(0x110e13bdu); f_110e1230();
  /* 110e13bd pop edi */
  EDI = (pop32());
  /* 110e13be pop esi */
  ESI = (pop32());
  /* 110e13bf pop ebp */
  EBP = (pop32());
  /* 110e13c0 ret  */
  ESPCHK(0x110e12e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100013e0 @ 0x110e13e0 (224 bytes, 57 insns) */
void f_110e13e0(void) {
  FTRACE(0x110e13e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e13e0 push esi */
  push32((uint32_t)(ESI));
  /* 110e13e1 mov esi, ecx */
  ESI = (ECX);
  /* 110e13e3 cmp dword ptr [esi + 0x2f6], 0x3e8 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2f6))),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e13ed jle 0x110e14be */
  if ((C.zf||C.sf!=C.of)) goto L_110e14be;
  /* 110e13f3 call 0x110e14c0 */
  push32(0x110e13f8u); f_110e14c0();
  /* 110e13f8 cmp eax, dword ptr [esi + 0x2f1] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x2f1))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e13fe jge 0x110e14be */
  if ((C.sf==C.of)) goto L_110e14be;
  /* 110e1404 mov ecx, esi */
  ECX = (ESI);
  /* 110e1406 call 0x110e14c0 */
  push32(0x110e140bu); f_110e14c0();
  /* 110e140b mov dword ptr [esi + 0x2ed], eax */
  w32((uint32_t)(ESI + 0x2ed), (EAX));
  /* 110e1411 mov eax, dword ptr [esi + 0x2e9] */
  EAX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 110e1417 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e1419 je 0x110e1425 */
  if (C.zf) goto L_110e1425;
  /* 110e141b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e141e je 0x110e1425 */
  if (C.zf) goto L_110e1425;
  /* 110e1420 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1423 jne 0x110e149f */
  if (!C.zf) goto L_110e149f;
L_110e1425:;
  /* 110e1425 mov eax, dword ptr [esi + 0x2ab] */
  EAX = (r32((uint32_t)(ESI + 0x2ab)));
  /* 110e142b mov cl, byte ptr [esi + 0x2e8] */
  CL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 110e1431 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1433 push eax */
  push32((uint32_t)(EAX));
  /* 110e1434 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1435 push 0x110ed330 */
  push32((uint32_t)(0x110ed330u));
  /* 110e143a push 0x110ed2f8 */
  push32((uint32_t)(0x110ed2f8u));
  /* 110e143f push 0x110ed350 */
  push32((uint32_t)(0x110ed350u));
  /* 110e1444 call dword ptr [0x110e917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e917c))), 0x110e144au);
  /* 110e144a mov eax, dword ptr [esi + 0x2e9] */
  EAX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 110e1450 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1453 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e1456 je 0x110e1460 */
  if (C.zf) goto L_110e1460;
  /* 110e1458 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e1459 je 0x110e146e */
  if (C.zf) goto L_110e146e;
  /* 110e145b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e145c je 0x110e147c */
  if (C.zf) goto L_110e147c;
  /* 110e145e jmp 0x110e148a */
  goto L_110e148a;
L_110e1460:;
  /* 110e1460 push 0x110ed350 */
  push32((uint32_t)(0x110ed350u));
  /* 110e1465 call dword ptr [0x110e9184] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9184))), 0x110e146bu);
  /* 110e146b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e146e:;
  /* 110e146e push 0x110ed350 */
  push32((uint32_t)(0x110ed350u));
  /* 110e1473 call dword ptr [0x110e9188] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9188))), 0x110e1479u);
  /* 110e1479 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e147c:;
  /* 110e147c push 0x110ed350 */
  push32((uint32_t)(0x110ed350u));
  /* 110e1481 call dword ptr [0x110e9180] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9180))), 0x110e1487u);
  /* 110e1487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e148a:;
  /* 110e148a lea edx, [esi + 0x2b0] */
  EDX = ((uint32_t)(ESI + 0x2b0));
  /* 110e1490 push edx */
  push32((uint32_t)(EDX));
  /* 110e1491 push 0x110ed350 */
  push32((uint32_t)(0x110ed350u));
  /* 110e1496 call dword ptr [0x110e9174] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9174))), 0x110e149cu);
  /* 110e149c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e149f:;
  /* 110e149f mov ecx, dword ptr [esi + 0x2f6] */
  ECX = (r32((uint32_t)(ESI + 0x2f6)));
  /* 110e14a5 mov eax, dword ptr [esi + 0x2ed] */
  EAX = (r32((uint32_t)(ESI + 0x2ed)));
  /* 110e14ab add ecx, 0xfffffc18 */
  { uint32_t _a=(ECX),_b=(0xfffffc18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e14b1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e14b2 mov dword ptr [esi + 0x2f6], ecx */
  w32((uint32_t)(ESI + 0x2f6), (ECX));
  /* 110e14b8 mov dword ptr [esi + 0x2ed], eax */
  w32((uint32_t)(ESI + 0x2ed), (EAX));
L_110e14be:;
  /* 110e14be pop esi */
  ESI = (pop32());
  /* 110e14bf ret  */
  ESPCHK(0x110e13e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014c0 @ 0x110e14c0 (56 bytes, 18 insns) */
void f_110e14c0(void) {
  FTRACE(0x110e14c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e14c0 mov eax, dword ptr [ecx + 0x2e9] */
  EAX = (r32((uint32_t)(ECX + 0x2e9)));
  /* 110e14c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e14c8 je 0x110e14e7 */
  if (C.zf) goto L_110e14e7;
  /* 110e14ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e14cd je 0x110e14e7 */
  if (C.zf) goto L_110e14e7;
  /* 110e14cf cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e14d2 je 0x110e14e7 */
  if (C.zf) goto L_110e14e7;
  /* 110e14d4 mov eax, dword ptr [ecx + 0x2ed] */
  EAX = (r32((uint32_t)(ECX + 0x2ed)));
  /* 110e14da mov ecx, dword ptr [ecx + 0x2f1] */
  ECX = (r32((uint32_t)(ECX + 0x2f1)));
  /* 110e14e0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e14e2 jl 0x110e14f7 */
  if ((C.sf!=C.of)) goto L_110e14f7;
  /* 110e14e4 mov eax, ecx */
  EAX = (ECX);
  /* 110e14e6 ret  */
  ESPCHK(0x110e14c0u, _esp0);
  ESP += 4; return;
L_110e14e7:;
  /* 110e14e7 add ecx, 0x2b0 */
  { uint32_t _a=(ECX),_b=(0x2b0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e14ed push ecx */
  push32((uint32_t)(ECX));
  /* 110e14ee call dword ptr [0x110e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9170))), 0x110e14f4u);
  /* 110e14f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e14f7:;
  /* 110e14f7 ret  */
  ESPCHK(0x110e14c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001500 @ 0x110e1500 (194 bytes, 58 insns) [1 switch table(s)] */
void f_110e1500(void) {
  FTRACE(0x110e1500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1500 push ebp */
  push32((uint32_t)(EBP));
  /* 110e1501 push esi */
  push32((uint32_t)(ESI));
  /* 110e1502 mov esi, ecx */
  ESI = (ECX);
  /* 110e1504 push edi */
  push32((uint32_t)(EDI));
  /* 110e1505 mov al, byte ptr [esi + 0x2af] */
  AL = (r8((uint32_t)(ESI + 0x2af)));
  /* 110e150b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e150d jne 0x110e15bc */
  if (!C.zf) goto L_110e15bc;
  /* 110e1513 mov al, byte ptr [esi + 0x2fe] */
  AL = (r8((uint32_t)(ESI + 0x2fe)));
  /* 110e1519 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 110e151d mov ebp, dword ptr [0x110e915c] */
  EBP = (r32((uint32_t)(0x110e915c)));
  /* 110e1523 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e1525 je 0x110e1595 */
  if (C.zf) goto L_110e1595;
  /* 110e1527 mov eax, dword ptr [esi + 0x2ab] */
  EAX = (r32((uint32_t)(ESI + 0x2ab)));
  /* 110e152d push edi */
  push32((uint32_t)(EDI));
  /* 110e152e push 0x110ed680 */
  push32((uint32_t)(0x110ed680u));
  /* 110e1533 push eax */
  push32((uint32_t)(EAX));
  /* 110e1534 call ebp */
  call_ind((uint32_t)(EBP), 0x110e1536u);
  /* 110e1536 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e153b je 0x110e1595 */
  if (C.zf) goto L_110e1595;
  /* 110e153d push 0x110ea050 */
  push32((uint32_t)(0x110ea050u));
  /* 110e1542 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1544 push 0x110ea048 */
  push32((uint32_t)(0x110ea048u));
  /* 110e1549 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e154b call dword ptr [0x110e916c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e916c))), 0x110e1551u);
  /* 110e1551 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1554 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1557 ja 0x110e1595 */
  if ((!C.cf&&!C.zf)) goto L_110e1595;
  /* 110e1559 jmp dword ptr [eax*4 + 0x110e15c4] */
  switch (EAX) {
    case 0: goto L_110e1560;
    case 1: goto L_110e1570;
    case 2: goto L_110e157f;
    case 3: goto L_110e158e;
    default: x86_unimpl("switch@0x110e1559 out of table"); return;
  }
L_110e1560:;
  /* 110e1560 mov ecx, esi */
  ECX = (ESI);
  /* 110e1562 call 0x110e15e0 */
  push32(0x110e1567u); f_110e15e0();
  /* 110e1567 mov byte ptr [esi + 0x2fe], 1 */
  w8((uint32_t)(ESI + 0x2fe), (0x1u));
  /* 110e156e jmp 0x110e1595 */
  goto L_110e1595;
L_110e1570:;
  /* 110e1570 mov ecx, esi */
  ECX = (ESI);
  /* 110e1572 call 0x110e1680 */
  push32(0x110e1577u); f_110e1680();
  /* 110e1577 mov byte ptr [esi + 0x2fe], al */
  w8((uint32_t)(ESI + 0x2fe), (AL));
  /* 110e157d jmp 0x110e1595 */
  goto L_110e1595;
L_110e157f:;
  /* 110e157f mov ecx, esi */
  ECX = (ESI);
  /* 110e1581 call 0x110e16b0 */
  push32(0x110e1586u); f_110e16b0();
  /* 110e1586 mov byte ptr [esi + 0x2fe], al */
  w8((uint32_t)(ESI + 0x2fe), (AL));
  /* 110e158c jmp 0x110e1595 */
  goto L_110e1595;
L_110e158e:;
  /* 110e158e mov byte ptr [esi + 0x2fe], 0 */
  w8((uint32_t)(ESI + 0x2fe), (0x0u));
L_110e1595:;
  /* 110e1595 mov al, byte ptr [esi + 0x2fe] */
  AL = (r8((uint32_t)(ESI + 0x2fe)));
  /* 110e159b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e159d jne 0x110e15bc */
  if (!C.zf) goto L_110e15bc;
  /* 110e159f mov ecx, dword ptr [esi + 0x2ab] */
  ECX = (r32((uint32_t)(ESI + 0x2ab)));
  /* 110e15a5 push edi */
  push32((uint32_t)(EDI));
  /* 110e15a6 push 0x110ed680 */
  push32((uint32_t)(0x110ed680u));
  /* 110e15ab push ecx */
  push32((uint32_t)(ECX));
  /* 110e15ac call ebp */
  call_ind((uint32_t)(EBP), 0x110e15aeu);
  /* 110e15ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e15b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e15b3 jne 0x110e15bc */
  if (!C.zf) goto L_110e15bc;
  /* 110e15b5 mov byte ptr [esi + 0x2fe], 1 */
  w8((uint32_t)(ESI + 0x2fe), (0x1u));
L_110e15bc:;
  /* 110e15bc pop edi */
  EDI = (pop32());
  /* 110e15bd pop esi */
  ESI = (pop32());
  /* 110e15be pop ebp */
  EBP = (pop32());
  /* 110e15bf ret 4 */
  ESPCHK(0x110e1500u, _esp0);
  ESP += 8; return;
}

/* FUN_100015e0 @ 0x110e15e0 (152 bytes, 44 insns) */
void f_110e15e0(void) {
  FTRACE(0x110e15e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e15e0 push esi */
  push32((uint32_t)(ESI));
  /* 110e15e1 mov esi, ecx */
  ESI = (ECX);
  /* 110e15e3 call 0x110e14c0 */
  push32(0x110e15e8u); f_110e14c0();
  /* 110e15e8 mov edx, dword ptr [esi + 0x2f6] */
  EDX = (r32((uint32_t)(ESI + 0x2f6)));
  /* 110e15ee mov ecx, dword ptr [esi + 0x2fa] */
  ECX = (r32((uint32_t)(ESI + 0x2fa)));
  /* 110e15f4 push eax */
  push32((uint32_t)(EAX));
  /* 110e15f5 push edx */
  push32((uint32_t)(EDX));
  /* 110e15f6 mov edx, ecx */
  EDX = (ECX);
  /* 110e15f8 push eax */
  push32((uint32_t)(EAX));
  /* 110e15f9 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e15fc push edx */
  push32((uint32_t)(EDX));
  /* 110e15fd mov edx, 3 */
  EDX = (0x3u);
  /* 110e1602 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e1604 mov ecx, dword ptr [esi + 0x2c8] */
  ECX = (r32((uint32_t)(ESI + 0x2c8)));
  /* 110e160a imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e160d mov eax, dword ptr [esi + 0x2cc] */
  EAX = (r32((uint32_t)(ESI + 0x2cc)));
  /* 110e1613 push edx */
  push32((uint32_t)(EDX));
  /* 110e1614 mov edx, dword ptr [esi + 0x2c4] */
  EDX = (r32((uint32_t)(ESI + 0x2c4)));
  /* 110e161a push eax */
  push32((uint32_t)(EAX));
  /* 110e161b mov eax, dword ptr [esi + 0x2c0] */
  EAX = (r32((uint32_t)(ESI + 0x2c0)));
  /* 110e1621 push 0x110ed713 */
  push32((uint32_t)(0x110ed713u));
  /* 110e1626 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1627 mov ecx, dword ptr [esi + 0x2bc] */
  ECX = (r32((uint32_t)(ESI + 0x2bc)));
  /* 110e162d push 0x110ed704 */
  push32((uint32_t)(0x110ed704u));
  /* 110e1632 push edx */
  push32((uint32_t)(EDX));
  /* 110e1633 mov edx, dword ptr [esi + 0x2b8] */
  EDX = (r32((uint32_t)(ESI + 0x2b8)));
  /* 110e1639 push 0x110ed6f5 */
  push32((uint32_t)(0x110ed6f5u));
  /* 110e163e push eax */
  push32((uint32_t)(EAX));
  /* 110e163f mov eax, dword ptr [esi + 0x2e9] */
  EAX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 110e1645 push 0x110ed6e6 */
  push32((uint32_t)(0x110ed6e6u));
  /* 110e164a push ecx */
  push32((uint32_t)(ECX));
  /* 110e164b lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 110e164e push 0x110ed6d7 */
  push32((uint32_t)(0x110ed6d7u));
  /* 110e1653 push edx */
  push32((uint32_t)(EDX));
  /* 110e1654 push 0x110ed6c8 */
  push32((uint32_t)(0x110ed6c8u));
  /* 110e1659 lea eax, [eax + eax*4 + 0x110ed6c8] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x110ed6c8));
  /* 110e1660 add esi, 0x298 */
  { uint32_t _a=(ESI),_b=(0x298u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1666 push eax */
  push32((uint32_t)(EAX));
  /* 110e1667 push esi */
  push32((uint32_t)(ESI));
  /* 110e1668 push 0x110ea068 */
  push32((uint32_t)(0x110ea068u));
  /* 110e166d call dword ptr [0x110e9164] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9164))), 0x110e1673u);
  /* 110e1673 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1676 pop esi */
  ESI = (pop32());
  /* 110e1677 ret  */
  ESPCHK(0x110e15e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001680 @ 0x110e1680 (36 bytes, 12 insns) */
void f_110e1680(void) {
  FTRACE(0x110e1680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1680 push esi */
  push32((uint32_t)(ESI));
  /* 110e1681 push 0x110ea078 */
  push32((uint32_t)(0x110ea078u));
  /* 110e1686 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1688 push 0x110ea070 */
  push32((uint32_t)(0x110ea070u));
  /* 110e168d mov esi, ecx */
  ESI = (ECX);
  /* 110e168f push 9 */
  push32((uint32_t)(0x9u));
  /* 110e1691 call dword ptr [0x110e916c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e916c))), 0x110e1697u);
  /* 110e1697 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e169a mov dword ptr [esi + 0x2fa], eax */
  w32((uint32_t)(ESI + 0x2fa), (EAX));
  /* 110e16a0 mov al, 1 */
  AL = (0x1u);
  /* 110e16a2 pop esi */
  ESI = (pop32());
  /* 110e16a3 ret  */
  ESPCHK(0x110e1680u, _esp0);
  ESP += 4; return;
}

/* FUN_100016b0 @ 0x110e16b0 (65 bytes, 27 insns) */
void f_110e16b0(void) {
  FTRACE(0x110e16b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e16b0 push esi */
  push32((uint32_t)(ESI));
  /* 110e16b1 mov esi, dword ptr [0x110e916c] */
  ESI = (r32((uint32_t)(0x110e916c)));
  /* 110e16b7 push edi */
  push32((uint32_t)(EDI));
  /* 110e16b8 mov edi, ecx */
  EDI = (ECX);
L_110e16ba:;
  /* 110e16ba push 0x110ea09c */
  push32((uint32_t)(0x110ea09cu));
  /* 110e16bf push 0 */
  push32((uint32_t)(0x0u));
  /* 110e16c1 push 0x110ea094 */
  push32((uint32_t)(0x110ea094u));
  /* 110e16c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e16c8 call esi */
  call_ind((uint32_t)(ESI), 0x110e16cau);
  /* 110e16ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e16cd sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e16d0 je 0x110e16e3 */
  if (C.zf) goto L_110e16e3;
  /* 110e16d2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e16d3 je 0x110e16da */
  if (C.zf) goto L_110e16da;
  /* 110e16d5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e16d6 je 0x110e16ec */
  if (C.zf) goto L_110e16ec;
  /* 110e16d8 jmp 0x110e16ba */
  goto L_110e16ba;
L_110e16da:;
  /* 110e16da mov ecx, edi */
  ECX = (EDI);
  /* 110e16dc call 0x110e1830 */
  push32(0x110e16e1u); f_110e1830();
  /* 110e16e1 jmp 0x110e16ba */
  goto L_110e16ba;
L_110e16e3:;
  /* 110e16e3 mov ecx, edi */
  ECX = (EDI);
  /* 110e16e5 call 0x110e1700 */
  push32(0x110e16eau); f_110e1700();
  /* 110e16ea jmp 0x110e16ba */
  goto L_110e16ba;
L_110e16ec:;
  /* 110e16ec pop edi */
  EDI = (pop32());
  /* 110e16ed mov al, 1 */
  AL = (0x1u);
  /* 110e16ef pop esi */
  ESI = (pop32());
  /* 110e16f0 ret  */
  ESPCHK(0x110e16b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001700 @ 0x110e1700 (245 bytes, 83 insns) [2 switch table(s)] */
void f_110e1700(void) {
  FTRACE(0x110e1700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1700 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1701 push ebx */
  push32((uint32_t)(EBX));
  /* 110e1702 push ebp */
  push32((uint32_t)(EBP));
  /* 110e1703 push esi */
  push32((uint32_t)(ESI));
  /* 110e1704 mov esi, dword ptr [0x110e916c] */
  ESI = (r32((uint32_t)(0x110e916c)));
  /* 110e170a push edi */
  push32((uint32_t)(EDI));
  /* 110e170b push 0x110ea0cc */
  push32((uint32_t)(0x110ea0ccu));
  /* 110e1710 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1712 push 0x110ea0c4 */
  push32((uint32_t)(0x110ea0c4u));
  /* 110e1717 mov ebx, ecx */
  EBX = (ECX);
  /* 110e1719 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e171b call esi */
  call_ind((uint32_t)(ESI), 0x110e171du);
  /* 110e171d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1720 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1723 ja 0x110e1753 */
  if ((!C.cf&&!C.zf)) goto L_110e1753;
  /* 110e1725 jmp dword ptr [eax*4 + 0x110e17f8] */
  switch (EAX) {
    case 0: goto L_110e172c;
    case 1: goto L_110e1730;
    case 2: goto L_110e1737;
    case 3: goto L_110e173e;
    case 4: goto L_110e1745;
    case 5: goto L_110e174c;
    case 6: goto L_110e1776;
    case 7: goto L_110e177a;
    case 8: goto L_110e1781;
    case 9: goto L_110e1788;
    case 10: goto L_110e178f;
    case 11: goto L_110e1796;
    default: x86_unimpl("switch@0x110e1725 out of table"); return;
  }
L_110e172c:;
  /* 110e172c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e172e jmp 0x110e1757 */
  goto L_110e1757;
L_110e1730:;
  /* 110e1730 mov edi, 1 */
  EDI = (0x1u);
  /* 110e1735 jmp 0x110e1757 */
  goto L_110e1757;
L_110e1737:;
  /* 110e1737 mov edi, 2 */
  EDI = (0x2u);
  /* 110e173c jmp 0x110e1757 */
  goto L_110e1757;
L_110e173e:;
  /* 110e173e mov edi, 3 */
  EDI = (0x3u);
  /* 110e1743 jmp 0x110e1757 */
  goto L_110e1757;
L_110e1745:;
  /* 110e1745 mov edi, 4 */
  EDI = (0x4u);
  /* 110e174a jmp 0x110e1757 */
  goto L_110e1757;
L_110e174c:;
  /* 110e174c mov edi, 5 */
  EDI = (0x5u);
  /* 110e1751 jmp 0x110e1757 */
  goto L_110e1757;
L_110e1753:;
  /* 110e1753 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_110e1757:;
  /* 110e1757 push 0x110ea0cc */
  push32((uint32_t)(0x110ea0ccu));
  /* 110e175c push 0 */
  push32((uint32_t)(0x0u));
  /* 110e175e push 0x110ea0bc */
  push32((uint32_t)(0x110ea0bcu));
  /* 110e1763 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e1765 call esi */
  call_ind((uint32_t)(ESI), 0x110e1767u);
  /* 110e1767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e176a cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e176d ja 0x110e179d */
  if ((!C.cf&&!C.zf)) goto L_110e179d;
  /* 110e176f jmp dword ptr [eax*4 + 0x110e1810] */
  switch (EAX) {
    case 0: goto L_110e1776;
    case 1: goto L_110e177a;
    case 2: goto L_110e1781;
    case 3: goto L_110e1788;
    case 4: goto L_110e178f;
    case 5: goto L_110e1796;
    default: x86_unimpl("switch@0x110e176f out of table"); return;
  }
L_110e1776:;
  /* 110e1776 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e1778 jmp 0x110e17a1 */
  goto L_110e17a1;
L_110e177a:;
  /* 110e177a mov esi, 1 */
  ESI = (0x1u);
  /* 110e177f jmp 0x110e17a1 */
  goto L_110e17a1;
L_110e1781:;
  /* 110e1781 mov esi, 2 */
  ESI = (0x2u);
  /* 110e1786 jmp 0x110e17a1 */
  goto L_110e17a1;
L_110e1788:;
  /* 110e1788 mov esi, 3 */
  ESI = (0x3u);
  /* 110e178d jmp 0x110e17a1 */
  goto L_110e17a1;
L_110e178f:;
  /* 110e178f mov esi, 4 */
  ESI = (0x4u);
  /* 110e1794 jmp 0x110e17a1 */
  goto L_110e17a1;
L_110e1796:;
  /* 110e1796 mov esi, 5 */
  ESI = (0x5u);
  /* 110e179b jmp 0x110e17a1 */
  goto L_110e17a1;
L_110e179d:;
  /* 110e179d mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_110e17a1:;
  /* 110e17a1 mov ecx, ebx */
  ECX = (EBX);
  /* 110e17a3 call 0x110e1230 */
  push32(0x110e17a8u); f_110e1230();
  /* 110e17a8 push edi */
  push32((uint32_t)(EDI));
  /* 110e17a9 mov ecx, ebx */
  ECX = (EBX);
  /* 110e17ab call 0x110e1f50 */
  push32(0x110e17b0u); f_110e1f50();
  /* 110e17b0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 110e17b3 push esi */
  push32((uint32_t)(ESI));
  /* 110e17b4 mov ecx, ebx */
  ECX = (EBX);
  /* 110e17b6 lea ebp, [eax + eax*4] */
  EBP = ((uint32_t)(EAX + EAX*4));
  /* 110e17b9 shl ebp, 2 */
  EBP = (sh_shl((uint32_t)(EBP), (0x2u)&0x1f, 32));
  /* 110e17bc call 0x110e1f50 */
  push32(0x110e17c1u); f_110e1f50();
  /* 110e17c1 mov ecx, eax */
  ECX = (EAX);
  /* 110e17c3 mov eax, ebp */
  EAX = (EBP);
  /* 110e17c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110e17c6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e17c8 push eax */
  push32((uint32_t)(EAX));
  /* 110e17c9 lea eax, [esi + esi*2] */
  EAX = ((uint32_t)(ESI + ESI*2));
  /* 110e17cc lea edx, [eax + eax*4 + 0x110ed6c8] */
  EDX = ((uint32_t)(EAX + EAX*4 + 0x110ed6c8));
  /* 110e17d3 lea eax, [edi + edi*2] */
  EAX = ((uint32_t)(EDI + EDI*2));
  /* 110e17d6 push edx */
  push32((uint32_t)(EDX));
  /* 110e17d7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 110e17d9 lea eax, [eax + eax*4 + 0x110ed6c8] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x110ed6c8));
  /* 110e17e0 push eax */
  push32((uint32_t)(EAX));
  /* 110e17e1 push 0x110ea0b0 */
  push32((uint32_t)(0x110ea0b0u));
  /* 110e17e6 call dword ptr [0x110e9164] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9164))), 0x110e17ecu);
  /* 110e17ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e17ef pop edi */
  EDI = (pop32());
  /* 110e17f0 pop esi */
  ESI = (pop32());
  /* 110e17f1 pop ebp */
  EBP = (pop32());
  /* 110e17f2 pop ebx */
  EBX = (pop32());
  /* 110e17f3 pop ecx */
  ECX = (pop32());
  /* 110e17f4 ret  */
  ESPCHK(0x110e1700u, _esp0);
  ESP += 4; return;
}

/* FUN_10001830 @ 0x110e1830 (307 bytes, 112 insns) */
void f_110e1830(void) {
  FTRACE(0x110e1830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1830 push ebx */
  push32((uint32_t)(EBX));
  /* 110e1831 mov ebx, dword ptr [0x110e916c] */
  EBX = (r32((uint32_t)(0x110e916c)));
  /* 110e1837 push esi */
  push32((uint32_t)(ESI));
  /* 110e1838 push edi */
  push32((uint32_t)(EDI));
  /* 110e1839 push 0x110ea12c */
  push32((uint32_t)(0x110ea12cu));
  /* 110e183e push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1840 push 0x110ea120 */
  push32((uint32_t)(0x110ea120u));
  /* 110e1845 mov edi, ecx */
  EDI = (ECX);
  /* 110e1847 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e1849 call ebx */
  call_ind((uint32_t)(EBX), 0x110e184bu);
  /* 110e184b push 0x110ea10c */
  push32((uint32_t)(0x110ea10cu));
  /* 110e1850 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1852 push 0x110ea100 */
  push32((uint32_t)(0x110ea100u));
  /* 110e1857 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e1859 mov esi, eax */
  ESI = (EAX);
  /* 110e185b call ebx */
  call_ind((uint32_t)(EBX), 0x110e185du);
  /* 110e185d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1860 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e1863 je 0x110e1902 */
  if (C.zf) goto L_110e1902;
  /* 110e1869 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e186a je 0x110e18bd */
  if (C.zf) goto L_110e18bd;
  /* 110e186c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e186d jne 0x110e195f */
  if (!C.zf) goto L_110e195f;
  /* 110e1873 shl esi, 6 */
  ESI = (sh_shl((uint32_t)(ESI), (0x6u)&0x1f, 32));
  /* 110e1876 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1878 push esi */
  push32((uint32_t)(ESI));
  /* 110e1879 call dword ptr [0x110e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9170))), 0x110e187fu);
  /* 110e187f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e1884 je 0x110e18ab */
  if (C.zf) goto L_110e18ab;
  /* 110e1886 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1888 push esi */
  push32((uint32_t)(ESI));
  /* 110e1889 call dword ptr [0x110e9158] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9158))), 0x110e188fu);
  /* 110e188f mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 110e1892 push eax */
  push32((uint32_t)(EAX));
  /* 110e1893 call dword ptr [0x110e9150] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9150))), 0x110e1899u);
  /* 110e1899 push 0x110ea0f8 */
  push32((uint32_t)(0x110ea0f8u));
  /* 110e189e call dword ptr [0x110e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9160))), 0x110e18a4u);
  /* 110e18a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e18a7 pop edi */
  EDI = (pop32());
  /* 110e18a8 pop esi */
  ESI = (pop32());
  /* 110e18a9 pop ebx */
  EBX = (pop32());
  /* 110e18aa ret  */
  ESPCHK(0x110e1830u, _esp0);
  ESP += 4; return;
L_110e18ab:;
  /* 110e18ab push 0x110ea0f0 */
  push32((uint32_t)(0x110ea0f0u));
  /* 110e18b0 call dword ptr [0x110e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9160))), 0x110e18b6u);
  /* 110e18b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e18b9 pop edi */
  EDI = (pop32());
  /* 110e18ba pop esi */
  ESI = (pop32());
  /* 110e18bb pop ebx */
  EBX = (pop32());
  /* 110e18bc ret  */
  ESPCHK(0x110e1830u, _esp0);
  ESP += 4; return;
L_110e18bd:;
  /* 110e18bd mov ecx, esi */
  ECX = (ESI);
  /* 110e18bf shl ecx, 6 */
  ECX = (sh_shl((uint32_t)(ECX), (0x6u)&0x1f, 32));
  /* 110e18c2 lea ebx, [ecx + edi] */
  EBX = ((uint32_t)(ECX + EDI*1));
  /* 110e18c5 push ebx */
  push32((uint32_t)(EBX));
  /* 110e18c6 call dword ptr [0x110e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9170))), 0x110e18ccu);
  /* 110e18cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e18cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e18d1 jne 0x110e18f6 */
  if (!C.zf) goto L_110e18f6;
  /* 110e18d3 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 110e18d9 mov al, byte ptr [edi + 0x2e8] */
  AL = (r8((uint32_t)(EDI + 0x2e8)));
  /* 110e18df mov ecx, dword ptr [edi + 0x2a7] */
  ECX = (r32((uint32_t)(EDI + 0x2a7)));
  /* 110e18e5 push edx */
  push32((uint32_t)(EDX));
  /* 110e18e6 push eax */
  push32((uint32_t)(EAX));
  /* 110e18e7 lea edx, [edi + 0x298] */
  EDX = ((uint32_t)(EDI + 0x298));
  /* 110e18ed push ecx */
  push32((uint32_t)(ECX));
  /* 110e18ee push edx */
  push32((uint32_t)(EDX));
  /* 110e18ef mov ecx, ebx */
  ECX = (EBX);
  /* 110e18f1 call 0x110e20b0 */
  push32(0x110e18f6u); f_110e20b0();
L_110e18f6:;
  /* 110e18f6 push esi */
  push32((uint32_t)(ESI));
  /* 110e18f7 mov ecx, edi */
  ECX = (EDI);
  /* 110e18f9 call 0x110e1970 */
  push32(0x110e18feu); f_110e1970();
  /* 110e18fe pop edi */
  EDI = (pop32());
  /* 110e18ff pop esi */
  ESI = (pop32());
  /* 110e1900 pop ebx */
  EBX = (pop32());
  /* 110e1901 ret  */
  ESPCHK(0x110e1830u, _esp0);
  ESP += 4; return;
L_110e1902:;
  /* 110e1902 shl esi, 6 */
  ESI = (sh_shl((uint32_t)(ESI), (0x6u)&0x1f, 32));
  /* 110e1905 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1907 push esi */
  push32((uint32_t)(ESI));
  /* 110e1908 call dword ptr [0x110e9170] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9170))), 0x110e190eu);
  /* 110e190e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e1913 je 0x110e1951 */
  if (C.zf) goto L_110e1951;
  /* 110e1915 mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 110e1918 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 110e191b mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 110e191e add esi, 0x29 */
  { uint32_t _a=(ESI),_b=(0x29u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1921 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 110e1924 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 110e1927 push edx */
  push32((uint32_t)(EDX));
  /* 110e1928 mov edx, dword ptr [esi - 0x1c] */
  EDX = (r32((uint32_t)(ESI + -0x1c)));
  /* 110e192b lea eax, [eax + eax*4 + 0x110ed6c8] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x110ed6c8));
  /* 110e1932 lea ecx, [ecx + ecx*4 + 0x110ed6c8] */
  ECX = ((uint32_t)(ECX + ECX*4 + 0x110ed6c8));
  /* 110e1939 push eax */
  push32((uint32_t)(EAX));
  /* 110e193a push edx */
  push32((uint32_t)(EDX));
  /* 110e193b push ecx */
  push32((uint32_t)(ECX));
  /* 110e193c push eax */
  push32((uint32_t)(EAX));
  /* 110e193d push ecx */
  push32((uint32_t)(ECX));
  /* 110e193e push esi */
  push32((uint32_t)(ESI));
  /* 110e193f push 0x110ea0e8 */
  push32((uint32_t)(0x110ea0e8u));
  /* 110e1944 call dword ptr [0x110e9164] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9164))), 0x110e194au);
  /* 110e194a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e194d pop edi */
  EDI = (pop32());
  /* 110e194e pop esi */
  ESI = (pop32());
  /* 110e194f pop ebx */
  EBX = (pop32());
  /* 110e1950 ret  */
  ESPCHK(0x110e1830u, _esp0);
  ESP += 4; return;
L_110e1951:;
  /* 110e1951 push 0x110ea0e0 */
  push32((uint32_t)(0x110ea0e0u));
  /* 110e1956 call dword ptr [0x110e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9160))), 0x110e195cu);
  /* 110e195c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e195f:;
  /* 110e195f pop edi */
  EDI = (pop32());
  /* 110e1960 pop esi */
  ESI = (pop32());
  /* 110e1961 pop ebx */
  EBX = (pop32());
  /* 110e1962 ret  */
  ESPCHK(0x110e1830u, _esp0);
  ESP += 4; return;
}

/* FUN_10001970 @ 0x110e1970 (263 bytes, 86 insns) [2 switch table(s)] */
void f_110e1970(void) {
  FTRACE(0x110e1970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1970 push ebx */
  push32((uint32_t)(EBX));
  /* 110e1971 push ebp */
  push32((uint32_t)(EBP));
  /* 110e1972 push esi */
  push32((uint32_t)(ESI));
  /* 110e1973 push edi */
  push32((uint32_t)(EDI));
  /* 110e1974 mov edi, ecx */
  EDI = (ECX);
  /* 110e1976 mov esi, dword ptr [0x110e916c] */
  ESI = (r32((uint32_t)(0x110e916c)));
  /* 110e197c mov eax, dword ptr [edi + 0x280] */
  EAX = (r32((uint32_t)(EDI + 0x280)));
  /* 110e1982 push eax */
  push32((uint32_t)(EAX));
  /* 110e1983 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1985 push 0x110ea16c */
  push32((uint32_t)(0x110ea16cu));
  /* 110e198a push 9 */
  push32((uint32_t)(0x9u));
  /* 110e198c call esi */
  call_ind((uint32_t)(ESI), 0x110e198eu);
  /* 110e198e push 0x110ea0cc */
  push32((uint32_t)(0x110ea0ccu));
  /* 110e1993 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1995 push 0x110ea0c4 */
  push32((uint32_t)(0x110ea0c4u));
  /* 110e199a push 9 */
  push32((uint32_t)(0x9u));
  /* 110e199c mov ebp, eax */
  EBP = (EAX);
  /* 110e199e call esi */
  call_ind((uint32_t)(ESI), 0x110e19a0u);
  /* 110e19a0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e19a3 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e19a6 ja 0x110e19d6 */
  if ((!C.cf&&!C.zf)) goto L_110e19d6;
  /* 110e19a8 jmp dword ptr [eax*4 + 0x110e1a78] */
  switch (EAX) {
    case 0: goto L_110e19af;
    case 1: goto L_110e19b3;
    case 2: goto L_110e19ba;
    case 3: goto L_110e19c1;
    case 4: goto L_110e19c8;
    case 5: goto L_110e19cf;
    case 6: goto L_110e19f9;
    case 7: goto L_110e19fd;
    case 8: goto L_110e1a04;
    case 9: goto L_110e1a0b;
    case 10: goto L_110e1a12;
    case 11: goto L_110e1a19;
    default: x86_unimpl("switch@0x110e19a8 out of table"); return;
  }
L_110e19af:;
  /* 110e19af xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e19b1 jmp 0x110e19da */
  goto L_110e19da;
L_110e19b3:;
  /* 110e19b3 mov ebx, 1 */
  EBX = (0x1u);
  /* 110e19b8 jmp 0x110e19da */
  goto L_110e19da;
L_110e19ba:;
  /* 110e19ba mov ebx, 2 */
  EBX = (0x2u);
  /* 110e19bf jmp 0x110e19da */
  goto L_110e19da;
L_110e19c1:;
  /* 110e19c1 mov ebx, 3 */
  EBX = (0x3u);
  /* 110e19c6 jmp 0x110e19da */
  goto L_110e19da;
L_110e19c8:;
  /* 110e19c8 mov ebx, 4 */
  EBX = (0x4u);
  /* 110e19cd jmp 0x110e19da */
  goto L_110e19da;
L_110e19cf:;
  /* 110e19cf mov ebx, 5 */
  EBX = (0x5u);
  /* 110e19d4 jmp 0x110e19da */
  goto L_110e19da;
L_110e19d6:;
  /* 110e19d6 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
L_110e19da:;
  /* 110e19da push 0x110ea0cc */
  push32((uint32_t)(0x110ea0ccu));
  /* 110e19df push 0 */
  push32((uint32_t)(0x0u));
  /* 110e19e1 push 0x110ea0bc */
  push32((uint32_t)(0x110ea0bcu));
  /* 110e19e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e19e8 call esi */
  call_ind((uint32_t)(ESI), 0x110e19eau);
  /* 110e19ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e19ed cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e19f0 ja 0x110e1a20 */
  if ((!C.cf&&!C.zf)) goto L_110e1a20;
  /* 110e19f2 jmp dword ptr [eax*4 + 0x110e1a90] */
  switch (EAX) {
    case 0: goto L_110e19f9;
    case 1: goto L_110e19fd;
    case 2: goto L_110e1a04;
    case 3: goto L_110e1a0b;
    case 4: goto L_110e1a12;
    case 5: goto L_110e1a19;
    default: x86_unimpl("switch@0x110e19f2 out of table"); return;
  }
L_110e19f9:;
  /* 110e19f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e19fb jmp 0x110e1a24 */
  goto L_110e1a24;
L_110e19fd:;
  /* 110e19fd mov ecx, 1 */
  ECX = (0x1u);
  /* 110e1a02 jmp 0x110e1a24 */
  goto L_110e1a24;
L_110e1a04:;
  /* 110e1a04 mov ecx, 2 */
  ECX = (0x2u);
  /* 110e1a09 jmp 0x110e1a24 */
  goto L_110e1a24;
L_110e1a0b:;
  /* 110e1a0b mov ecx, 3 */
  ECX = (0x3u);
  /* 110e1a10 jmp 0x110e1a24 */
  goto L_110e1a24;
L_110e1a12:;
  /* 110e1a12 mov ecx, 4 */
  ECX = (0x4u);
  /* 110e1a17 jmp 0x110e1a24 */
  goto L_110e1a24;
L_110e1a19:;
  /* 110e1a19 mov ecx, 5 */
  ECX = (0x5u);
  /* 110e1a1e jmp 0x110e1a24 */
  goto L_110e1a24;
L_110e1a20:;
  /* 110e1a20 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
L_110e1a24:;
  /* 110e1a24 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 110e1a28 mov eax, dword ptr [edi + ebp*4 + 0x284] */
  EAX = (r32((uint32_t)(EDI + EBP*4 + 0x284)));
  /* 110e1a2f shl edx, 6 */
  EDX = (sh_shl((uint32_t)(EDX), (0x6u)&0x1f, 32));
  /* 110e1a32 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1a33 mov ecx, dword ptr [eax + 0x2a7] */
  ECX = (r32((uint32_t)(EAX + 0x2a7)));
  /* 110e1a39 lea esi, [edx + edi] */
  ESI = ((uint32_t)(EDX + EDI*1));
  /* 110e1a3c push ebx */
  push32((uint32_t)(EBX));
  /* 110e1a3d add eax, 0x298 */
  { uint32_t _a=(EAX),_b=(0x298u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1a42 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1a43 push eax */
  push32((uint32_t)(EAX));
  /* 110e1a44 mov ecx, esi */
  ECX = (ESI);
  /* 110e1a46 call 0x110e2120 */
  push32(0x110e1a4bu); f_110e2120();
  /* 110e1a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1a4d push esi */
  push32((uint32_t)(ESI));
  /* 110e1a4e call dword ptr [0x110e9158] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9158))), 0x110e1a54u);
  /* 110e1a54 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 110e1a5a mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 110e1a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1a61 push edx */
  push32((uint32_t)(EDX));
  /* 110e1a62 push eax */
  push32((uint32_t)(EAX));
  /* 110e1a63 call dword ptr [0x110e9154] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9154))), 0x110e1a69u);
  /* 110e1a69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1a6c mov byte ptr [esi + 0x19], 0 */
  w8((uint32_t)(ESI + 0x19), (0x0u));
  /* 110e1a70 pop edi */
  EDI = (pop32());
  /* 110e1a71 pop esi */
  ESI = (pop32());
  /* 110e1a72 pop ebp */
  EBP = (pop32());
  /* 110e1a73 pop ebx */
  EBX = (pop32());
  /* 110e1a74 ret 4 */
  ESPCHK(0x110e1970u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ab0 @ 0x110e1ab0 (304 bytes, 118 insns) */
void f_110e1ab0(void) {
  FTRACE(0x110e1ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1ab0 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1ab1 push ebx */
  push32((uint32_t)(EBX));
  /* 110e1ab2 push ebp */
  push32((uint32_t)(EBP));
  /* 110e1ab3 push esi */
  push32((uint32_t)(ESI));
  /* 110e1ab4 push edi */
  push32((uint32_t)(EDI));
  /* 110e1ab5 mov edi, ecx */
  EDI = (ECX);
  /* 110e1ab7 mov al, byte ptr [edi + 0x2e8] */
  AL = (r8((uint32_t)(EDI + 0x2e8)));
  /* 110e1abd mov ecx, dword ptr [edi + 0x2ab] */
  ECX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 110e1ac3 push eax */
  push32((uint32_t)(EAX));
  /* 110e1ac4 push 0x110ed358 */
  push32((uint32_t)(0x110ed358u));
  /* 110e1ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1aca call dword ptr [0x110e915c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e915c))), 0x110e1ad0u);
  /* 110e1ad0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1ad3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e1ad5 je 0x110e1bd8 */
  if (C.zf) goto L_110e1bd8;
  /* 110e1adb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e1add mov ebx, edi */
  EBX = (EDI);
L_110e1adf:;
  /* 110e1adf mov al, byte ptr [ebx + 0x19] */
  AL = (r8((uint32_t)(EBX + 0x19)));
  /* 110e1ae2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e1ae4 jne 0x110e1afb */
  if (!C.zf) goto L_110e1afb;
  /* 110e1ae6 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 110e1aec push ebx */
  push32((uint32_t)(EBX));
  /* 110e1aed push edx */
  push32((uint32_t)(EDX));
  /* 110e1aee call dword ptr [0x110e9144] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9144))), 0x110e1af4u);
  /* 110e1af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1af7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e1af9 jne 0x110e1b64 */
  if (!C.zf) goto L_110e1b64;
L_110e1afb:;
  /* 110e1afb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e1afc add ebx, 0x40 */
  { uint32_t _a=(EBX),_b=(0x40u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1aff cmp esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1b02 jl 0x110e1adf */
  if ((C.sf!=C.of)) goto L_110e1adf;
  /* 110e1b04 mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 110e1b0c lea ebp, [edi + 0x284] */
  EBP = ((uint32_t)(EDI + 0x284));
L_110e1b12:;
  /* 110e1b12 cmp dword ptr [ebp], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1b16 je 0x110e1b4b */
  if (C.zf) goto L_110e1b4b;
  /* 110e1b18 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e1b1a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_110e1b1c:;
  /* 110e1b1c mov ecx, dword ptr [ebp] */
  ECX = (r32((uint32_t)(EBP)));
  /* 110e1b1f lea eax, [ecx + esi] */
  EAX = ((uint32_t)(ECX + ESI*1));
  /* 110e1b22 mov cl, byte ptr [ecx + esi + 0x19] */
  CL = (r8((uint32_t)(ECX + ESI*1 + 0x19)));
  /* 110e1b26 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 110e1b28 je 0x110e1b3f */
  if (C.zf) goto L_110e1b3f;
  /* 110e1b2a mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 110e1b30 push eax */
  push32((uint32_t)(EAX));
  /* 110e1b31 push edx */
  push32((uint32_t)(EDX));
  /* 110e1b32 call dword ptr [0x110e9144] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9144))), 0x110e1b38u);
  /* 110e1b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e1b3d jne 0x110e1b92 */
  if (!C.zf) goto L_110e1b92;
L_110e1b3f:;
  /* 110e1b3f add esi, 0x40 */
  { uint32_t _a=(ESI),_b=(0x40u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1b42 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e1b43 cmp esi, 0x280 */
  { uint32_t _a=(ESI),_b=(0x280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1b49 jl 0x110e1b1c */
  if ((C.sf!=C.of)) goto L_110e1b1c;
L_110e1b4b:;
  /* 110e1b4b mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110e1b4f add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1b52 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e1b53 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1b56 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 110e1b5a jl 0x110e1b12 */
  if ((C.sf!=C.of)) goto L_110e1b12;
  /* 110e1b5c pop edi */
  EDI = (pop32());
  /* 110e1b5d pop esi */
  ESI = (pop32());
  /* 110e1b5e pop ebp */
  EBP = (pop32());
  /* 110e1b5f xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 110e1b61 pop ebx */
  EBX = (pop32());
  /* 110e1b62 pop ecx */
  ECX = (pop32());
  /* 110e1b63 ret  */
  ESPCHK(0x110e1ab0u, _esp0);
  ESP += 4; return;
L_110e1b64:;
  /* 110e1b64 shl esi, 6 */
  ESI = (sh_shl((uint32_t)(ESI), (0x6u)&0x1f, 32));
  /* 110e1b67 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1b69 mov ecx, edi */
  ECX = (EDI);
  /* 110e1b6b push esi */
  push32((uint32_t)(ESI));
  /* 110e1b6c mov byte ptr [esi + 0x19], 1 */
  w8((uint32_t)(ESI + 0x19), (0x1u));
  /* 110e1b70 call 0x110e1be0 */
  push32(0x110e1b75u); f_110e1be0();
  /* 110e1b75 push esi */
  push32((uint32_t)(ESI));
  /* 110e1b76 mov ecx, edi */
  ECX = (EDI);
  /* 110e1b78 call 0x110e1c20 */
  push32(0x110e1b7du); f_110e1c20();
  /* 110e1b7d mov eax, dword ptr [esi + 0x3c] */
  EAX = (r32((uint32_t)(ESI + 0x3c)));
  /* 110e1b80 push eax */
  push32((uint32_t)(EAX));
  /* 110e1b81 push esi */
  push32((uint32_t)(ESI));
  /* 110e1b82 call 0x110e2af0 */
  push32(0x110e1b87u); f_110e2af0();
  /* 110e1b87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1b8a mov al, 1 */
  AL = (0x1u);
  /* 110e1b8c pop edi */
  EDI = (pop32());
  /* 110e1b8d pop esi */
  ESI = (pop32());
  /* 110e1b8e pop ebp */
  EBP = (pop32());
  /* 110e1b8f pop ebx */
  EBX = (pop32());
  /* 110e1b90 pop ecx */
  ECX = (pop32());
  /* 110e1b91 ret  */
  ESPCHK(0x110e1ab0u, _esp0);
  ESP += 4; return;
L_110e1b92:;
  /* 110e1b92 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 110e1b96 shl ebx, 6 */
  EBX = (sh_shl((uint32_t)(EBX), (0x6u)&0x1f, 32));
  /* 110e1b99 mov eax, dword ptr [edi + esi*4 + 0x284] */
  EAX = (r32((uint32_t)(EDI + ESI*4 + 0x284)));
  /* 110e1ba0 mov byte ptr [eax + ebx + 0x19], 0 */
  w8((uint32_t)(EAX + EBX*1 + 0x19), (0x0u));
  /* 110e1ba5 mov eax, dword ptr [edi + esi*4 + 0x284] */
  EAX = (r32((uint32_t)(EDI + ESI*4 + 0x284)));
  /* 110e1bac push eax */
  push32((uint32_t)(EAX));
  /* 110e1bad lea ecx, [ebx + eax] */
  ECX = ((uint32_t)(EBX + EAX*1));
  /* 110e1bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1bb1 mov ecx, edi */
  ECX = (EDI);
  /* 110e1bb3 call 0x110e1c80 */
  push32(0x110e1bb8u); f_110e1c80();
  /* 110e1bb8 mov edx, dword ptr [edi + esi*4 + 0x284] */
  EDX = (r32((uint32_t)(EDI + ESI*4 + 0x284)));
  /* 110e1bbf mov ecx, dword ptr [edx + ebx + 0x38] */
  ECX = (r32((uint32_t)(EDX + EBX*1 + 0x38)));
  /* 110e1bc3 lea eax, [edx + ebx] */
  EAX = ((uint32_t)(EDX + EBX*1));
  /* 110e1bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1bc7 push eax */
  push32((uint32_t)(EAX));
  /* 110e1bc8 call 0x110e2af0 */
  push32(0x110e1bcdu); f_110e2af0();
  /* 110e1bcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1bd0 mov al, 1 */
  AL = (0x1u);
  /* 110e1bd2 pop edi */
  EDI = (pop32());
  /* 110e1bd3 pop esi */
  ESI = (pop32());
  /* 110e1bd4 pop ebp */
  EBP = (pop32());
  /* 110e1bd5 pop ebx */
  EBX = (pop32());
  /* 110e1bd6 pop ecx */
  ECX = (pop32());
  /* 110e1bd7 ret  */
  ESPCHK(0x110e1ab0u, _esp0);
  ESP += 4; return;
L_110e1bd8:;
  /* 110e1bd8 pop edi */
  EDI = (pop32());
  /* 110e1bd9 pop esi */
  ESI = (pop32());
  /* 110e1bda pop ebp */
  EBP = (pop32());
  /* 110e1bdb xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 110e1bdd pop ebx */
  EBX = (pop32());
  /* 110e1bde pop ecx */
  ECX = (pop32());
  /* 110e1bdf ret  */
  ESPCHK(0x110e1ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001be0 @ 0x110e1be0 (51 bytes, 22 insns) */
void f_110e1be0(void) {
  FTRACE(0x110e1be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1be0 push esi */
  push32((uint32_t)(ESI));
  /* 110e1be1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e1be5 push edi */
  push32((uint32_t)(EDI));
  /* 110e1be6 mov edi, ecx */
  EDI = (ECX);
  /* 110e1be8 mov eax, dword ptr [esi + 0xd] */
  EAX = (r32((uint32_t)(ESI + 0xd)));
  /* 110e1beb mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 110e1bee push eax */
  push32((uint32_t)(EAX));
  /* 110e1bef push ecx */
  push32((uint32_t)(ECX));
  /* 110e1bf0 mov ecx, edi */
  ECX = (EDI);
  /* 110e1bf2 call 0x110e1fc0 */
  push32(0x110e1bf7u); f_110e1fc0();
  /* 110e1bf7 mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 110e1bfa mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 110e1bfd push edx */
  push32((uint32_t)(EDX));
  /* 110e1bfe push eax */
  push32((uint32_t)(EAX));
  /* 110e1bff mov ecx, edi */
  ECX = (EDI);
  /* 110e1c01 call 0x110e1fc0 */
  push32(0x110e1c06u); f_110e1fc0();
  /* 110e1c06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e1c08 pop edi */
  EDI = (pop32());
  /* 110e1c09 mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 110e1c0c mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 110e1c0f pop esi */
  ESI = (pop32());
  /* 110e1c10 ret 4 */
  ESPCHK(0x110e1be0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001c20 @ 0x110e1c20 (91 bytes, 36 insns) */
void f_110e1c20(void) {
  FTRACE(0x110e1c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1c20 push esi */
  push32((uint32_t)(ESI));
  /* 110e1c21 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e1c25 push edi */
  push32((uint32_t)(EDI));
  /* 110e1c26 mov edi, ecx */
  EDI = (ECX);
  /* 110e1c28 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 110e1c2b push eax */
  push32((uint32_t)(EAX));
  /* 110e1c2c call 0x110e1ee0 */
  push32(0x110e1c31u); f_110e1ee0();
  /* 110e1c31 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1c34 jl 0x110e1c4f */
  if ((C.sf!=C.of)) goto L_110e1c4f;
  /* 110e1c36 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 110e1c39 push -0x64 */
  push32((uint32_t)(0xffffff9cu));
  /* 110e1c3b push ecx */
  push32((uint32_t)(ECX));
  /* 110e1c3c mov ecx, edi */
  ECX = (EDI);
  /* 110e1c3e mov dword ptr [esi + 0xd], 0x64 */
  w32((uint32_t)(ESI + 0xd), (0x64u));
  /* 110e1c45 call 0x110e1fc0 */
  push32(0x110e1c4au); f_110e1fc0();
  /* 110e1c4a pop edi */
  EDI = (pop32());
  /* 110e1c4b pop esi */
  ESI = (pop32());
  /* 110e1c4c ret 4 */
  ESPCHK(0x110e1c20u, _esp0);
  ESP += 8; return;
L_110e1c4f:;
  /* 110e1c4f mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 110e1c52 mov ecx, edi */
  ECX = (EDI);
  /* 110e1c54 push edx */
  push32((uint32_t)(EDX));
  /* 110e1c55 call 0x110e1ee0 */
  push32(0x110e1c5au); f_110e1ee0();
  /* 110e1c5a mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 110e1c5d mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 110e1c60 push eax */
  push32((uint32_t)(EAX));
  /* 110e1c61 mov ecx, edi */
  ECX = (EDI);
  /* 110e1c63 call 0x110e1ee0 */
  push32(0x110e1c68u); f_110e1ee0();
  /* 110e1c68 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 110e1c6b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e1c6d push eax */
  push32((uint32_t)(EAX));
  /* 110e1c6e push ecx */
  push32((uint32_t)(ECX));
  /* 110e1c6f mov ecx, edi */
  ECX = (EDI);
  /* 110e1c71 call 0x110e1fc0 */
  push32(0x110e1c76u); f_110e1fc0();
  /* 110e1c76 pop edi */
  EDI = (pop32());
  /* 110e1c77 pop esi */
  ESI = (pop32());
  /* 110e1c78 ret 4 */
  ESPCHK(0x110e1c20u, _esp0);
  ESP += 8; return;
}

/* FUN_10001c80 @ 0x110e1c80 (601 bytes, 230 insns) */
void f_110e1c80(void) {
  FTRACE(0x110e1c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1c80 push ebx */
  push32((uint32_t)(EBX));
  /* 110e1c81 push ebp */
  push32((uint32_t)(EBP));
  /* 110e1c82 push esi */
  push32((uint32_t)(ESI));
  /* 110e1c83 mov esi, ecx */
  ESI = (ECX);
  /* 110e1c85 push edi */
  push32((uint32_t)(EDI));
  /* 110e1c86 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 110e1c8a mov al, byte ptr [esi + 0x2af] */
  AL = (r8((uint32_t)(ESI + 0x2af)));
  /* 110e1c90 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e1c92 je 0x110e1e03 */
  if (C.zf) goto L_110e1e03;
  /* 110e1c98 mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1c9b mov ebx, dword ptr [esp + 0x18] */
  EBX = (r32((uint32_t)(ESP + 0x18)));
  /* 110e1c9f push eax */
  push32((uint32_t)(EAX));
  /* 110e1ca0 mov ecx, ebx */
  ECX = (EBX);
  /* 110e1ca2 call 0x110e1f50 */
  push32(0x110e1ca7u); f_110e1f50();
  /* 110e1ca7 imul eax, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e1cab mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1cae mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 110e1cb2 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1cb3 mov ecx, esi */
  ECX = (ESI);
  /* 110e1cb5 call 0x110e2090 */
  push32(0x110e1cbau); f_110e2090();
  /* 110e1cba mov dl, byte ptr [esi + 0x2e8] */
  DL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 110e1cc0 push eax */
  push32((uint32_t)(EAX));
  /* 110e1cc1 dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 110e1cc3 push edx */
  push32((uint32_t)(EDX));
  /* 110e1cc4 call dword ptr [0x110e9148] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9148))), 0x110e1ccau);
  /* 110e1cca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1ccd mov ebp, eax */
  EBP = (EAX);
  /* 110e1ccf mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1cd2 mov ecx, ebx */
  ECX = (EBX);
  /* 110e1cd4 push eax */
  push32((uint32_t)(EAX));
  /* 110e1cd5 call 0x110e1f50 */
  push32(0x110e1cdau); f_110e1f50();
  /* 110e1cda imul ebp, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e1cdd cmp dword ptr [esp + 0x14], ebp */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1ce1 jg 0x110e1d70 */
  if ((!C.zf&&C.sf==C.of)) goto L_110e1d70;
  /* 110e1ce7 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 110e1cea mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1ced push ecx */
  push32((uint32_t)(ECX));
  /* 110e1cee push edx */
  push32((uint32_t)(EDX));
  /* 110e1cef mov ecx, esi */
  ECX = (ESI);
  /* 110e1cf1 call 0x110e2090 */
  push32(0x110e1cf6u); f_110e2090();
  /* 110e1cf6 push eax */
  push32((uint32_t)(EAX));
  /* 110e1cf7 mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 110e1cfd dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 110e1cff push eax */
  push32((uint32_t)(EAX));
  /* 110e1d00 call dword ptr [0x110e9168] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9168))), 0x110e1d06u);
  /* 110e1d06 mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1d09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1d0c mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 110e1d13 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1d14 mov ecx, ebx */
  ECX = (EBX);
  /* 110e1d16 call 0x110e1f50 */
  push32(0x110e1d1bu); f_110e1f50();
  /* 110e1d1b mov ecx, eax */
  ECX = (EAX);
  /* 110e1d1d mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 110e1d21 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110e1d22 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e1d24 mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1d27 mov ecx, esi */
  ECX = (ESI);
  /* 110e1d29 push edx */
  push32((uint32_t)(EDX));
  /* 110e1d2a mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 110e1d2d call 0x110e2090 */
  push32(0x110e1d32u); f_110e2090();
  /* 110e1d32 push eax */
  push32((uint32_t)(EAX));
  /* 110e1d33 mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 110e1d39 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 110e1d3b push eax */
  push32((uint32_t)(EAX));
  /* 110e1d3c call dword ptr [0x110e9148] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9148))), 0x110e1d42u);
  /* 110e1d42 mov ecx, dword ptr [edi + 0x15] */
  ECX = (r32((uint32_t)(EDI + 0x15)));
  /* 110e1d45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1d48 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e1d4a mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1d4d push eax */
  push32((uint32_t)(EAX));
  /* 110e1d4e push ecx */
  push32((uint32_t)(ECX));
  /* 110e1d4f mov ecx, esi */
  ECX = (ESI);
  /* 110e1d51 call 0x110e2090 */
  push32(0x110e1d56u); f_110e2090();
  /* 110e1d56 mov dl, byte ptr [esi + 0x2e8] */
  DL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 110e1d5c push eax */
  push32((uint32_t)(EAX));
  /* 110e1d5d dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 110e1d5f push edx */
  push32((uint32_t)(EDX));
  /* 110e1d60 call dword ptr [0x110e914c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e914c))), 0x110e1d66u);
  /* 110e1d66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1d69 pop edi */
  EDI = (pop32());
  /* 110e1d6a pop esi */
  ESI = (pop32());
  /* 110e1d6b pop ebp */
  EBP = (pop32());
  /* 110e1d6c pop ebx */
  EBX = (pop32());
  /* 110e1d6d ret 8 */
  ESPCHK(0x110e1c80u, _esp0);
  ESP += 12; return;
L_110e1d70:;
  /* 110e1d70 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1d73 mov ecx, esi */
  ECX = (ESI);
  /* 110e1d75 push eax */
  push32((uint32_t)(EAX));
  /* 110e1d76 call 0x110e2090 */
  push32(0x110e1d7bu); f_110e2090();
  /* 110e1d7b mov cl, byte ptr [esi + 0x2e8] */
  CL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 110e1d81 push eax */
  push32((uint32_t)(EAX));
  /* 110e1d82 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 110e1d84 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1d85 call dword ptr [0x110e9148] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9148))), 0x110e1d8bu);
  /* 110e1d8b mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1d91 mov ecx, esi */
  ECX = (ESI);
  /* 110e1d93 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 110e1d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e1d98 push edx */
  push32((uint32_t)(EDX));
  /* 110e1d99 call 0x110e2090 */
  push32(0x110e1d9eu); f_110e2090();
  /* 110e1d9e push eax */
  push32((uint32_t)(EAX));
  /* 110e1d9f mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 110e1da5 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 110e1da7 push eax */
  push32((uint32_t)(EAX));
  /* 110e1da8 call dword ptr [0x110e914c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e914c))), 0x110e1daeu);
  /* 110e1dae mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1db1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1db4 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1db5 mov ecx, ebx */
  ECX = (EBX);
  /* 110e1db7 call 0x110e1f50 */
  push32(0x110e1dbcu); f_110e1f50();
  /* 110e1dbc mov ecx, eax */
  ECX = (EAX);
  /* 110e1dbe mov eax, ebp */
  EAX = (EBP);
  /* 110e1dc0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110e1dc1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e1dc3 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 110e1dc6 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1dc9 push edx */
  push32((uint32_t)(EDX));
  /* 110e1dca sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e1dcc mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 110e1dcf mov ecx, ebx */
  ECX = (EBX);
  /* 110e1dd1 call 0x110e1f50 */
  push32(0x110e1dd6u); f_110e1f50();
  /* 110e1dd6 mov ecx, eax */
  ECX = (EAX);
  /* 110e1dd8 mov eax, ebp */
  EAX = (EBP);
  /* 110e1dda cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110e1ddb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e1ddd mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1de0 mov ecx, esi */
  ECX = (ESI);
  /* 110e1de2 push eax */
  push32((uint32_t)(EAX));
  /* 110e1de3 push edx */
  push32((uint32_t)(EDX));
  /* 110e1de4 call 0x110e2090 */
  push32(0x110e1de9u); f_110e2090();
  /* 110e1de9 push eax */
  push32((uint32_t)(EAX));
  /* 110e1dea mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 110e1df0 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 110e1df2 push eax */
  push32((uint32_t)(EAX));
  /* 110e1df3 call dword ptr [0x110e9168] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9168))), 0x110e1df9u);
  /* 110e1df9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1dfc pop edi */
  EDI = (pop32());
  /* 110e1dfd pop esi */
  ESI = (pop32());
  /* 110e1dfe pop ebp */
  EBP = (pop32());
  /* 110e1dff pop ebx */
  EBX = (pop32());
  /* 110e1e00 ret 8 */
  ESPCHK(0x110e1c80u, _esp0);
  ESP += 12; return;
L_110e1e03:;
  /* 110e1e03 mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1e06 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1e07 mov ecx, esi */
  ECX = (ESI);
  /* 110e1e09 call 0x110e1f50 */
  push32(0x110e1e0eu); f_110e1f50();
  /* 110e1e0e mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1e11 mov ebp, eax */
  EBP = (EAX);
  /* 110e1e13 imul ebp, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e1e17 push edx */
  push32((uint32_t)(EDX));
  /* 110e1e18 mov ecx, esi */
  ECX = (ESI);
  /* 110e1e1a call 0x110e1f50 */
  push32(0x110e1e1fu); f_110e1f50();
  /* 110e1e1f mov ebx, eax */
  EBX = (EAX);
  /* 110e1e21 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1e24 push eax */
  push32((uint32_t)(EAX));
  /* 110e1e25 mov ecx, esi */
  ECX = (ESI);
  /* 110e1e27 call 0x110e1ee0 */
  push32(0x110e1e2cu); f_110e1ee0();
  /* 110e1e2c imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e1e2f cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1e31 jg 0x110e1e73 */
  if ((!C.zf&&C.sf==C.of)) goto L_110e1e73;
  /* 110e1e33 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 110e1e36 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1e39 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1e3a push edx */
  push32((uint32_t)(EDX));
  /* 110e1e3b mov ecx, esi */
  ECX = (ESI);
  /* 110e1e3d call 0x110e1fc0 */
  push32(0x110e1e42u); f_110e1fc0();
  /* 110e1e42 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1e45 mov ecx, esi */
  ECX = (ESI);
  /* 110e1e47 push eax */
  push32((uint32_t)(EAX));
  /* 110e1e48 mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 110e1e4f call 0x110e1f50 */
  push32(0x110e1e54u); f_110e1f50();
  /* 110e1e54 mov ecx, eax */
  ECX = (EAX);
  /* 110e1e56 mov eax, ebp */
  EAX = (EBP);
  /* 110e1e58 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110e1e59 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e1e5b mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1e5e mov ecx, esi */
  ECX = (ESI);
  /* 110e1e60 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 110e1e63 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e1e65 push eax */
  push32((uint32_t)(EAX));
  /* 110e1e66 push edx */
  push32((uint32_t)(EDX));
  /* 110e1e67 call 0x110e1fc0 */
  push32(0x110e1e6cu); f_110e1fc0();
  /* 110e1e6c pop edi */
  EDI = (pop32());
  /* 110e1e6d pop esi */
  ESI = (pop32());
  /* 110e1e6e pop ebp */
  EBP = (pop32());
  /* 110e1e6f pop ebx */
  EBX = (pop32());
  /* 110e1e70 ret 8 */
  ESPCHK(0x110e1c80u, _esp0);
  ESP += 12; return;
L_110e1e73:;
  /* 110e1e73 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1e76 mov ecx, esi */
  ECX = (ESI);
  /* 110e1e78 push eax */
  push32((uint32_t)(EAX));
  /* 110e1e79 call 0x110e1ee0 */
  push32(0x110e1e7eu); f_110e1ee0();
  /* 110e1e7e mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1e81 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 110e1e84 push ecx */
  push32((uint32_t)(ECX));
  /* 110e1e85 mov ecx, esi */
  ECX = (ESI);
  /* 110e1e87 call 0x110e1ee0 */
  push32(0x110e1e8cu); f_110e1ee0();
  /* 110e1e8c mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 110e1e8f mov ecx, esi */
  ECX = (ESI);
  /* 110e1e91 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e1e93 push eax */
  push32((uint32_t)(EAX));
  /* 110e1e94 push edx */
  push32((uint32_t)(EDX));
  /* 110e1e95 call 0x110e1fc0 */
  push32(0x110e1e9au); f_110e1fc0();
  /* 110e1e9a mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1e9d mov ecx, esi */
  ECX = (ESI);
  /* 110e1e9f push eax */
  push32((uint32_t)(EAX));
  /* 110e1ea0 call 0x110e1f50 */
  push32(0x110e1ea5u); f_110e1f50();
  /* 110e1ea5 mov ecx, eax */
  ECX = (EAX);
  /* 110e1ea7 mov eax, ebx */
  EAX = (EBX);
  /* 110e1ea9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110e1eaa idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e1eac mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 110e1eaf mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1eb2 push edx */
  push32((uint32_t)(EDX));
  /* 110e1eb3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e1eb5 mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 110e1eb8 mov ecx, esi */
  ECX = (ESI);
  /* 110e1eba call 0x110e1f50 */
  push32(0x110e1ebfu); f_110e1f50();
  /* 110e1ebf mov ecx, eax */
  ECX = (EAX);
  /* 110e1ec1 mov eax, ebx */
  EAX = (EBX);
  /* 110e1ec3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 110e1ec4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e1ec6 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 110e1ec9 mov ecx, esi */
  ECX = (ESI);
  /* 110e1ecb push eax */
  push32((uint32_t)(EAX));
  /* 110e1ecc push edx */
  push32((uint32_t)(EDX));
  /* 110e1ecd call 0x110e1fc0 */
  push32(0x110e1ed2u); f_110e1fc0();
  /* 110e1ed2 pop edi */
  EDI = (pop32());
  /* 110e1ed3 pop esi */
  ESI = (pop32());
  /* 110e1ed4 pop ebp */
  EBP = (pop32());
  /* 110e1ed5 pop ebx */
  EBX = (pop32());
  /* 110e1ed6 ret 8 */
  ESPCHK(0x110e1c80u, _esp0);
  ESP += 12; return;
}

/* FUN_10001ee0 @ 0x110e1ee0 (75 bytes, 18 insns) [1 switch table(s)] */
void f_110e1ee0(void) {
  FTRACE(0x110e1ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1ee0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e1ee4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1ee7 ja 0x110e1f26 */
  if ((!C.cf&&!C.zf)) goto L_110e1f26;
  /* 110e1ee9 jmp dword ptr [eax*4 + 0x110e1f2c] */
  switch (EAX) {
    case 0: goto L_110e1ef0;
    case 1: goto L_110e1ef9;
    case 2: goto L_110e1f02;
    case 3: goto L_110e1f0b;
    case 4: goto L_110e1f14;
    case 5: goto L_110e1f1d;
    default: x86_unimpl("switch@0x110e1ee9 out of table"); return;
  }
L_110e1ef0:;
  /* 110e1ef0 mov eax, dword ptr [ecx + 0x2b8] */
  EAX = (r32((uint32_t)(ECX + 0x2b8)));
  /* 110e1ef6 ret 4 */
  ESPCHK(0x110e1ee0u, _esp0);
  ESP += 8; return;
L_110e1ef9:;
  /* 110e1ef9 mov eax, dword ptr [ecx + 0x2bc] */
  EAX = (r32((uint32_t)(ECX + 0x2bc)));
  /* 110e1eff ret 4 */
  ESPCHK(0x110e1ee0u, _esp0);
  ESP += 8; return;
L_110e1f02:;
  /* 110e1f02 mov eax, dword ptr [ecx + 0x2c0] */
  EAX = (r32((uint32_t)(ECX + 0x2c0)));
  /* 110e1f08 ret 4 */
  ESPCHK(0x110e1ee0u, _esp0);
  ESP += 8; return;
L_110e1f0b:;
  /* 110e1f0b mov eax, dword ptr [ecx + 0x2c4] */
  EAX = (r32((uint32_t)(ECX + 0x2c4)));
  /* 110e1f11 ret 4 */
  ESPCHK(0x110e1ee0u, _esp0);
  ESP += 8; return;
L_110e1f14:;
  /* 110e1f14 mov eax, dword ptr [ecx + 0x2c8] */
  EAX = (r32((uint32_t)(ECX + 0x2c8)));
  /* 110e1f1a ret 4 */
  ESPCHK(0x110e1ee0u, _esp0);
  ESP += 8; return;
L_110e1f1d:;
  /* 110e1f1d mov eax, dword ptr [ecx + 0x2cc] */
  EAX = (r32((uint32_t)(ECX + 0x2cc)));
  /* 110e1f23 ret 4 */
  ESPCHK(0x110e1ee0u, _esp0);
  ESP += 8; return;
L_110e1f26:;
  /* 110e1f26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e1f28 ret 4 */
  ESPCHK(0x110e1ee0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001f50 @ 0x110e1f50 (75 bytes, 18 insns) [1 switch table(s)] */
void f_110e1f50(void) {
  FTRACE(0x110e1f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1f50 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e1f54 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1f57 ja 0x110e1f96 */
  if ((!C.cf&&!C.zf)) goto L_110e1f96;
  /* 110e1f59 jmp dword ptr [eax*4 + 0x110e1f9c] */
  switch (EAX) {
    case 0: goto L_110e1f60;
    case 1: goto L_110e1f69;
    case 2: goto L_110e1f72;
    case 3: goto L_110e1f7b;
    case 4: goto L_110e1f84;
    case 5: goto L_110e1f8d;
    default: x86_unimpl("switch@0x110e1f59 out of table"); return;
  }
L_110e1f60:;
  /* 110e1f60 mov eax, dword ptr [ecx + 0x2d0] */
  EAX = (r32((uint32_t)(ECX + 0x2d0)));
  /* 110e1f66 ret 4 */
  ESPCHK(0x110e1f50u, _esp0);
  ESP += 8; return;
L_110e1f69:;
  /* 110e1f69 mov eax, dword ptr [ecx + 0x2d4] */
  EAX = (r32((uint32_t)(ECX + 0x2d4)));
  /* 110e1f6f ret 4 */
  ESPCHK(0x110e1f50u, _esp0);
  ESP += 8; return;
L_110e1f72:;
  /* 110e1f72 mov eax, dword ptr [ecx + 0x2d8] */
  EAX = (r32((uint32_t)(ECX + 0x2d8)));
  /* 110e1f78 ret 4 */
  ESPCHK(0x110e1f50u, _esp0);
  ESP += 8; return;
L_110e1f7b:;
  /* 110e1f7b mov eax, dword ptr [ecx + 0x2dc] */
  EAX = (r32((uint32_t)(ECX + 0x2dc)));
  /* 110e1f81 ret 4 */
  ESPCHK(0x110e1f50u, _esp0);
  ESP += 8; return;
L_110e1f84:;
  /* 110e1f84 mov eax, dword ptr [ecx + 0x2e0] */
  EAX = (r32((uint32_t)(ECX + 0x2e0)));
  /* 110e1f8a ret 4 */
  ESPCHK(0x110e1f50u, _esp0);
  ESP += 8; return;
L_110e1f8d:;
  /* 110e1f8d mov eax, dword ptr [ecx + 0x2e4] */
  EAX = (r32((uint32_t)(ECX + 0x2e4)));
  /* 110e1f93 ret 4 */
  ESPCHK(0x110e1f50u, _esp0);
  ESP += 8; return;
L_110e1f96:;
  /* 110e1f96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e1f98 ret 4 */
  ESPCHK(0x110e1f50u, _esp0);
  ESP += 8; return;
}

/* FUN_10001fc0 @ 0x110e1fc0 (146 bytes, 34 insns) [1 switch table(s)] */
void f_110e1fc0(void) {
  FTRACE(0x110e1fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e1fc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e1fc4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e1fc7 ja 0x110e204f */
  if ((!C.cf&&!C.zf)) goto L_110e204f;
  /* 110e1fcd jmp dword ptr [eax*4 + 0x110e2054] */
  switch (EAX) {
    case 0: goto L_110e1fd4;
    case 1: goto L_110e1fe9;
    case 2: goto L_110e1ffe;
    case 3: goto L_110e2013;
    case 4: goto L_110e2028;
    case 5: goto L_110e203d;
    default: x86_unimpl("switch@0x110e1fcd out of table"); return;
  }
L_110e1fd4:;
  /* 110e1fd4 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e1fd8 mov edx, dword ptr [ecx + 0x2b8] */
  EDX = (r32((uint32_t)(ECX + 0x2b8)));
  /* 110e1fde add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1fe0 mov dword ptr [ecx + 0x2b8], edx */
  w32((uint32_t)(ECX + 0x2b8), (EDX));
  /* 110e1fe6 ret 8 */
  ESPCHK(0x110e1fc0u, _esp0);
  ESP += 12; return;
L_110e1fe9:;
  /* 110e1fe9 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e1fed mov eax, dword ptr [ecx + 0x2bc] */
  EAX = (r32((uint32_t)(ECX + 0x2bc)));
  /* 110e1ff3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e1ff5 mov dword ptr [ecx + 0x2bc], eax */
  w32((uint32_t)(ECX + 0x2bc), (EAX));
  /* 110e1ffb ret 8 */
  ESPCHK(0x110e1fc0u, _esp0);
  ESP += 12; return;
L_110e1ffe:;
  /* 110e1ffe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e2002 mov edx, dword ptr [ecx + 0x2c0] */
  EDX = (r32((uint32_t)(ECX + 0x2c0)));
  /* 110e2008 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e200a mov dword ptr [ecx + 0x2c0], edx */
  w32((uint32_t)(ECX + 0x2c0), (EDX));
  /* 110e2010 ret 8 */
  ESPCHK(0x110e1fc0u, _esp0);
  ESP += 12; return;
L_110e2013:;
  /* 110e2013 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e2017 mov eax, dword ptr [ecx + 0x2c4] */
  EAX = (r32((uint32_t)(ECX + 0x2c4)));
  /* 110e201d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e201f mov dword ptr [ecx + 0x2c4], eax */
  w32((uint32_t)(ECX + 0x2c4), (EAX));
  /* 110e2025 ret 8 */
  ESPCHK(0x110e1fc0u, _esp0);
  ESP += 12; return;
L_110e2028:;
  /* 110e2028 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e202c mov edx, dword ptr [ecx + 0x2c8] */
  EDX = (r32((uint32_t)(ECX + 0x2c8)));
  /* 110e2032 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2034 mov dword ptr [ecx + 0x2c8], edx */
  w32((uint32_t)(ECX + 0x2c8), (EDX));
  /* 110e203a ret 8 */
  ESPCHK(0x110e1fc0u, _esp0);
  ESP += 12; return;
L_110e203d:;
  /* 110e203d mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e2041 mov eax, dword ptr [ecx + 0x2cc] */
  EAX = (r32((uint32_t)(ECX + 0x2cc)));
  /* 110e2047 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2049 mov dword ptr [ecx + 0x2cc], eax */
  w32((uint32_t)(ECX + 0x2cc), (EAX));
L_110e204f:;
  /* 110e204f ret 8 */
  ESPCHK(0x110e1fc0u, _esp0);
  ESP += 12; return;
}

/* FUN_10002070 @ 0x110e2070 (29 bytes, 7 insns) */
void f_110e2070(void) {
  FTRACE(0x110e2070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2070 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e2074 mov dl, byte ptr [esp + 8] */
  DL = (r8((uint32_t)(ESP + 0x8)));
  /* 110e2078 mov byte ptr [ecx + 0x2f5], dl */
  w8((uint32_t)(ECX + 0x2f5), (DL));
  /* 110e207e lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 110e2081 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 110e2084 mov dword ptr [ecx + 0x2f1], eax */
  w32((uint32_t)(ECX + 0x2f1), (EAX));
  /* 110e208a ret 8 */
  ESPCHK(0x110e2070u, _esp0);
  ESP += 12; return;
}

/* FUN_10002090 @ 0x110e2090 (30 bytes, 9 insns) */
void f_110e2090(void) {
  FTRACE(0x110e2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2090 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e2094 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2097 jne 0x110e20a1 */
  if (!C.zf) goto L_110e20a1;
  /* 110e2099 mov eax, 1 */
  EAX = (0x1u);
  /* 110e209e ret 4 */
  ESPCHK(0x110e2090u, _esp0);
  ESP += 8; return;
L_110e20a1:;
  /* 110e20a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e20a4 jne 0x110e20ab */
  if (!C.zf) goto L_110e20ab;
  /* 110e20a6 mov eax, 3 */
  EAX = (0x3u);
L_110e20ab:;
  /* 110e20ab ret 4 */
  ESPCHK(0x110e2090u, _esp0);
  ESP += 8; return;
}

/* FUN_100020b0 @ 0x110e20b0 (103 bytes, 42 insns) */
void f_110e20b0(void) {
  FTRACE(0x110e20b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e20b0 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110e20b4 push ebx */
  push32((uint32_t)(EBX));
  /* 110e20b5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 110e20b9 push ebp */
  push32((uint32_t)(EBP));
  /* 110e20ba push esi */
  push32((uint32_t)(ESI));
  /* 110e20bb push edi */
  push32((uint32_t)(EDI));
  /* 110e20bc push 0 */
  push32((uint32_t)(0x0u));
  /* 110e20be push eax */
  push32((uint32_t)(EAX));
  /* 110e20bf push ebx */
  push32((uint32_t)(EBX));
  /* 110e20c0 mov ebp, ecx */
  EBP = (ECX);
  /* 110e20c2 push 0x110ed358 */
  push32((uint32_t)(0x110ed358u));
  /* 110e20c7 push 0x110ed2f8 */
  push32((uint32_t)(0x110ed2f8u));
  /* 110e20cc push ebp */
  push32((uint32_t)(EBP));
  /* 110e20cd call dword ptr [0x110e917c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e917c))), 0x110e20d3u);
  /* 110e20d3 mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 110e20d7 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e20da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e20dc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e20df repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e20e1 not ecx */
  ECX = (~(ECX));
  /* 110e20e3 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e20e5 lea edx, [ebp + 0x1a] */
  EDX = ((uint32_t)(EBP + 0x1a));
  /* 110e20e8 mov eax, ecx */
  EAX = (ECX);
  /* 110e20ea mov esi, edi */
  ESI = (EDI);
  /* 110e20ec mov edi, edx */
  EDI = (EDX);
  /* 110e20ee shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e20f1 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e20f3 mov ecx, eax */
  ECX = (EAX);
  /* 110e20f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e20f7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e20fa rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e20fc mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 110e2100 pop edi */
  EDI = (pop32());
  /* 110e2101 mov dword ptr [ebp + 0x38], ecx */
  w32((uint32_t)(EBP + 0x38), (ECX));
  /* 110e2104 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 110e2107 mov byte ptr [ebp + 0x19], 0 */
  w8((uint32_t)(EBP + 0x19), (0x0u));
  /* 110e210b mov dword ptr [ebp + 0x15], eax */
  w32((uint32_t)(EBP + 0x15), (EAX));
  /* 110e210e mov dword ptr [ebp + 0xd], eax */
  w32((uint32_t)(EBP + 0xd), (EAX));
  /* 110e2111 pop esi */
  ESI = (pop32());
  /* 110e2112 pop ebp */
  EBP = (pop32());
  /* 110e2113 pop ebx */
  EBX = (pop32());
  /* 110e2114 ret 0x10 */
  ESPCHK(0x110e20b0u, _esp0);
  ESP += 20; return;
}

/* FUN_10002120 @ 0x110e2120 (79 bytes, 33 insns) */
void f_110e2120(void) {
  FTRACE(0x110e2120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2120 push ebx */
  push32((uint32_t)(EBX));
  /* 110e2121 push esi */
  push32((uint32_t)(ESI));
  /* 110e2122 mov edx, ecx */
  EDX = (ECX);
  /* 110e2124 push edi */
  push32((uint32_t)(EDI));
  /* 110e2125 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 110e2129 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e212c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e212e lea ebx, [edx + 0x29] */
  EBX = ((uint32_t)(EDX + 0x29));
  /* 110e2131 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e2133 not ecx */
  ECX = (~(ECX));
  /* 110e2135 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e2137 mov eax, ecx */
  EAX = (ECX);
  /* 110e2139 mov esi, edi */
  ESI = (EDI);
  /* 110e213b mov edi, ebx */
  EDI = (EBX);
  /* 110e213d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e2140 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e2142 mov ecx, eax */
  ECX = (EAX);
  /* 110e2144 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e2146 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e2149 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e214b mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 110e214f mov byte ptr [edx + 0x19], al */
  w8((uint32_t)(EDX + 0x19), (AL));
  /* 110e2152 mov dword ptr [edx + 0x3c], ecx */
  w32((uint32_t)(EDX + 0x3c), (ECX));
  /* 110e2155 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 110e2159 mov dword ptr [edx + 0x15], eax */
  w32((uint32_t)(EDX + 0x15), (EAX));
  /* 110e215c mov dword ptr [edx + 0xd], eax */
  w32((uint32_t)(EDX + 0xd), (EAX));
  /* 110e215f mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 110e2163 pop edi */
  EDI = (pop32());
  /* 110e2164 pop esi */
  ESI = (pop32());
  /* 110e2165 mov dword ptr [edx + 9], eax */
  w32((uint32_t)(EDX + 0x9), (EAX));
  /* 110e2168 mov dword ptr [edx + 0x11], ecx */
  w32((uint32_t)(EDX + 0x11), (ECX));
  /* 110e216b pop ebx */
  EBX = (pop32());
  /* 110e216c ret 0x10 */
  ESPCHK(0x110e2120u, _esp0);
  ESP += 20; return;
}

/* OnInit @ 0x110e21f0 (438 bytes, 112 insns) */
void f_110e21f0(void) {
  FTRACE(0x110e21f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e21f0 push ebx */
  push32((uint32_t)(EBX));
  /* 110e21f1 push esi */
  push32((uint32_t)(ESI));
  /* 110e21f2 mov esi, dword ptr [0x110e9128] */
  ESI = (r32((uint32_t)(0x110e9128)));
  /* 110e21f8 push edi */
  push32((uint32_t)(EDI));
  /* 110e21f9 push 0x110ea26c */
  push32((uint32_t)(0x110ea26cu));
  /* 110e21fe push 0x110ed2f8 */
  push32((uint32_t)(0x110ed2f8u));
  /* 110e2203 call esi */
  call_ind((uint32_t)(ESI), 0x110e2205u);
  /* 110e2205 push 0x110ea260 */
  push32((uint32_t)(0x110ea260u));
  /* 110e220a push 0x110ed6b8 */
  push32((uint32_t)(0x110ed6b8u));
  /* 110e220f call esi */
  call_ind((uint32_t)(ESI), 0x110e2211u);
  /* 110e2211 mov esi, dword ptr [0x110e9120] */
  ESI = (r32((uint32_t)(0x110e9120)));
  /* 110e2217 push 0x110ea254 */
  push32((uint32_t)(0x110ea254u));
  /* 110e221c push 0x110ed358 */
  push32((uint32_t)(0x110ed358u));
  /* 110e2221 call esi */
  call_ind((uint32_t)(ESI), 0x110e2223u);
  /* 110e2223 push 0x110ea240 */
  push32((uint32_t)(0x110ea240u));
  /* 110e2228 push 0x110ed330 */
  push32((uint32_t)(0x110ed330u));
  /* 110e222d call esi */
  call_ind((uint32_t)(ESI), 0x110e222fu);
  /* 110e222f push 0x110ea230 */
  push32((uint32_t)(0x110ea230u));
  /* 110e2234 push 0x110ed680 */
  push32((uint32_t)(0x110ed680u));
  /* 110e2239 call esi */
  call_ind((uint32_t)(ESI), 0x110e223bu);
  /* 110e223b push 0x110ed350 */
  push32((uint32_t)(0x110ed350u));
  /* 110e2240 call dword ptr [0x110e9178] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9178))), 0x110e2246u);
  /* 110e2246 mov edi, dword ptr [0x110e9130] */
  EDI = (r32((uint32_t)(0x110e9130)));
  /* 110e224c push 8 */
  push32((uint32_t)(0x8u));
  /* 110e224e push 0x110ed350 */
  push32((uint32_t)(0x110ed350u));
  /* 110e2253 call edi */
  call_ind((uint32_t)(EDI), 0x110e2255u);
  /* 110e2255 push 0x2ff */
  push32((uint32_t)(0x2ffu));
  /* 110e225a push 0x110ecff8 */
  push32((uint32_t)(0x110ecff8u));
  /* 110e225f call edi */
  call_ind((uint32_t)(EDI), 0x110e2261u);
  /* 110e2261 mov esi, dword ptr [0x110e9134] */
  ESI = (r32((uint32_t)(0x110e9134)));
  /* 110e2267 push 0x110ea228 */
  push32((uint32_t)(0x110ea228u));
  /* 110e226c push 0x110ecfe0 */
  push32((uint32_t)(0x110ecfe0u));
  /* 110e2271 call esi */
  call_ind((uint32_t)(ESI), 0x110e2273u);
  /* 110e2273 mov ebx, dword ptr [0x110e912c] */
  EBX = (r32((uint32_t)(0x110e912c)));
  /* 110e2279 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e227c mov dword ptr [0x110ed2a3], 0x110ecfe0 */
  w32((uint32_t)(0x110ed2a3), (0x110ecfe0u));
  /* 110e2286 push 0x110ea218 */
  push32((uint32_t)(0x110ea218u));
  /* 110e228b push 0x110ed348 */
  push32((uint32_t)(0x110ed348u));
  /* 110e2290 call ebx */
  call_ind((uint32_t)(EBX), 0x110e2292u);
  /* 110e2292 push 0x110ea20c */
  push32((uint32_t)(0x110ea20cu));
  /* 110e2297 push 0x110ed698 */
  push32((uint32_t)(0x110ed698u));
  /* 110e229c call ebx */
  call_ind((uint32_t)(EBX), 0x110e229eu);
  /* 110e229e push 0x2ff */
  push32((uint32_t)(0x2ffu));
  /* 110e22a3 push 0x110ed380 */
  push32((uint32_t)(0x110ed380u));
  /* 110e22a8 call edi */
  call_ind((uint32_t)(EDI), 0x110e22aau);
  /* 110e22aa push 0x110ea204 */
  push32((uint32_t)(0x110ea204u));
  /* 110e22af push 0x110ed368 */
  push32((uint32_t)(0x110ed368u));
  /* 110e22b4 call esi */
  call_ind((uint32_t)(ESI), 0x110e22b6u);
  /* 110e22b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 110e22b8 push 0x110ea040 */
  push32((uint32_t)(0x110ea040u));
  /* 110e22bd mov dword ptr [0x110ed62b], 0x110ed368 */
  w32((uint32_t)(0x110ed62b), (0x110ed368u));
  /* 110e22c7 call edi */
  call_ind((uint32_t)(EDI), 0x110e22c9u);
  /* 110e22c9 push 0x110ea1f4 */
  push32((uint32_t)(0x110ea1f4u));
  /* 110e22ce push 0x110ed360 */
  push32((uint32_t)(0x110ed360u));
  /* 110e22d3 call ebx */
  call_ind((uint32_t)(EBX), 0x110e22d5u);
  /* 110e22d5 push 0x110ea1e8 */
  push32((uint32_t)(0x110ea1e8u));
  /* 110e22da push 0x110ecfd8 */
  push32((uint32_t)(0x110ecfd8u));
  /* 110e22df call ebx */
  call_ind((uint32_t)(EBX), 0x110e22e1u);
  /* 110e22e1 push 0x110ea1dc */
  push32((uint32_t)(0x110ea1dcu));
  /* 110e22e6 push 0x110ed320 */
  push32((uint32_t)(0x110ed320u));
  /* 110e22eb call esi */
  call_ind((uint32_t)(ESI), 0x110e22edu);
  /* 110e22ed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e22f0 push 0x110ea1d4 */
  push32((uint32_t)(0x110ea1d4u));
  /* 110e22f5 push 0x110ed370 */
  push32((uint32_t)(0x110ed370u));
  /* 110e22fa call esi */
  call_ind((uint32_t)(ESI), 0x110e22fcu);
  /* 110e22fc push 0x110ea1cc */
  push32((uint32_t)(0x110ea1ccu));
  /* 110e2301 push 0x110ed378 */
  push32((uint32_t)(0x110ed378u));
  /* 110e2306 call esi */
  call_ind((uint32_t)(ESI), 0x110e2308u);
  /* 110e2308 push 0x110ea1c4 */
  push32((uint32_t)(0x110ea1c4u));
  /* 110e230d push 0x110ed688 */
  push32((uint32_t)(0x110ed688u));
  /* 110e2312 call esi */
  call_ind((uint32_t)(ESI), 0x110e2314u);
  /* 110e2314 mov esi, dword ptr [0x110e913c] */
  ESI = (r32((uint32_t)(0x110e913c)));
  /* 110e231a push 0x110ea1bc */
  push32((uint32_t)(0x110ea1bcu));
  /* 110e231f push 0x110ecfe8 */
  push32((uint32_t)(0x110ecfe8u));
  /* 110e2324 call esi */
  call_ind((uint32_t)(ESI), 0x110e2326u);
  /* 110e2326 push 0x110ea1b4 */
  push32((uint32_t)(0x110ea1b4u));
  /* 110e232b push 0x110ecff0 */
  push32((uint32_t)(0x110ecff0u));
  /* 110e2330 call esi */
  call_ind((uint32_t)(ESI), 0x110e2332u);
  /* 110e2332 push 0x110ea1ac */
  push32((uint32_t)(0x110ea1acu));
  /* 110e2337 push 0x110ed338 */
  push32((uint32_t)(0x110ed338u));
  /* 110e233c call esi */
  call_ind((uint32_t)(ESI), 0x110e233eu);
  /* 110e233e push 0x110ea1a4 */
  push32((uint32_t)(0x110ea1a4u));
  /* 110e2343 push 0x110ed328 */
  push32((uint32_t)(0x110ed328u));
  /* 110e2348 call esi */
  call_ind((uint32_t)(ESI), 0x110e234au);
  /* 110e234a push 0x110ea19c */
  push32((uint32_t)(0x110ea19cu));
  /* 110e234f push 0x110ed690 */
  push32((uint32_t)(0x110ed690u));
  /* 110e2354 call esi */
  call_ind((uint32_t)(ESI), 0x110e2356u);
  /* 110e2356 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2359 push 0x110ea194 */
  push32((uint32_t)(0x110ea194u));
  /* 110e235e push 0x110ed6a8 */
  push32((uint32_t)(0x110ed6a8u));
  /* 110e2363 call esi */
  call_ind((uint32_t)(ESI), 0x110e2365u);
  /* 110e2365 push 0x110ea18c */
  push32((uint32_t)(0x110ea18cu));
  /* 110e236a push 0x110ed6a0 */
  push32((uint32_t)(0x110ed6a0u));
  /* 110e236f call esi */
  call_ind((uint32_t)(ESI), 0x110e2371u);
  /* 110e2371 push 0x110ea184 */
  push32((uint32_t)(0x110ea184u));
  /* 110e2376 push 0x110ed6b0 */
  push32((uint32_t)(0x110ed6b0u));
  /* 110e237b call esi */
  call_ind((uint32_t)(ESI), 0x110e237du);
  /* 110e237d push 3 */
  push32((uint32_t)(0x3u));
  /* 110e237f push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2381 call dword ptr [0x110e9140] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9140))), 0x110e2387u);
  /* 110e2387 mov esi, dword ptr [0x110e9138] */
  ESI = (r32((uint32_t)(0x110e9138)));
  /* 110e238d push 0x110ea17c */
  push32((uint32_t)(0x110ea17cu));
  /* 110e2392 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2394 call esi */
  call_ind((uint32_t)(ESI), 0x110e2396u);
  /* 110e2396 push 0x110ea174 */
  push32((uint32_t)(0x110ea174u));
  /* 110e239b push 2 */
  push32((uint32_t)(0x2u));
  /* 110e239d call esi */
  call_ind((uint32_t)(ESI), 0x110e239fu);
  /* 110e239f add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e23a2 pop edi */
  EDI = (pop32());
  /* 110e23a3 pop esi */
  ESI = (pop32());
  /* 110e23a4 pop ebx */
  EBX = (pop32());
  /* 110e23a5 ret  */
  ESPCHK(0x110e21f0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x110e23b0 (1850 bytes, 615 insns) */
void f_110e23b0(void) {
  FTRACE(0x110e23b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e23b0 mov al, byte ptr [0x110ed728] */
  AL = (r8((uint32_t)(0x110ed728)));
  /* 110e23b5 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e23b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e23ba push ebx */
  push32((uint32_t)(EBX));
  /* 110e23bb push ebp */
  push32((uint32_t)(EBP));
  /* 110e23bc push esi */
  push32((uint32_t)(ESI));
  /* 110e23bd push edi */
  push32((uint32_t)(EDI));
  /* 110e23be jne 0x110e265b */
  if (!C.zf) goto L_110e265b;
  /* 110e23c4 push 0x110ea33c */
  push32((uint32_t)(0x110ea33cu));
  /* 110e23c9 push 0x110ea324 */
  push32((uint32_t)(0x110ea324u));
  /* 110e23ce mov byte ptr [0x110ed728], 1 */
  w8((uint32_t)(0x110ed728), (0x1u));
  /* 110e23d5 call 0x110e316f */
  push32(0x110e23dau); f_110e316f();
  /* 110e23da mov esi, eax */
  ESI = (EAX);
  /* 110e23dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e23df test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e23e1 jne 0x110e250c */
  if (!C.zf) goto L_110e250c;
  /* 110e23e7 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e23ea mov edi, 0x110ea31c */
  EDI = (0x110ea31cu);
  /* 110e23ef repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e23f1 not ecx */
  ECX = (~(ECX));
  /* 110e23f3 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e23f5 mov eax, ecx */
  EAX = (ECX);
  /* 110e23f7 mov esi, edi */
  ESI = (EDI);
  /* 110e23f9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e23fc mov edi, 0x110ed6c8 */
  EDI = (0x110ed6c8u);
  /* 110e2401 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e2403 mov ecx, eax */
  ECX = (EAX);
  /* 110e2405 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e2407 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e240a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e240c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e240f mov edi, 0x110ea314 */
  EDI = (0x110ea314u);
  /* 110e2414 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e2416 not ecx */
  ECX = (~(ECX));
  /* 110e2418 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e241a mov edx, ecx */
  EDX = (ECX);
  /* 110e241c mov esi, edi */
  ESI = (EDI);
  /* 110e241e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e2421 mov edi, 0x110ed6d7 */
  EDI = (0x110ed6d7u);
  /* 110e2426 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e2428 mov ecx, edx */
  ECX = (EDX);
  /* 110e242a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e242d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e242f or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e2432 mov edi, 0x110ea30c */
  EDI = (0x110ea30cu);
  /* 110e2437 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e2439 not ecx */
  ECX = (~(ECX));
  /* 110e243b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e243d mov eax, ecx */
  EAX = (ECX);
  /* 110e243f mov esi, edi */
  ESI = (EDI);
  /* 110e2441 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e2444 mov edi, 0x110ed6e6 */
  EDI = (0x110ed6e6u);
  /* 110e2449 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e244b mov ecx, eax */
  ECX = (EAX);
  /* 110e244d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e244f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e2452 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e2454 mov edi, 0x110ea304 */
  EDI = (0x110ea304u);
  /* 110e2459 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e245c repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e245e not ecx */
  ECX = (~(ECX));
  /* 110e2460 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e2462 mov edx, ecx */
  EDX = (ECX);
  /* 110e2464 mov esi, edi */
  ESI = (EDI);
  /* 110e2466 mov edi, 0x110ed6f5 */
  EDI = (0x110ed6f5u);
  /* 110e246b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e246e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e2470 mov ecx, edx */
  ECX = (EDX);
  /* 110e2472 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e2475 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e2477 mov edi, 0x110ea2fc */
  EDI = (0x110ea2fcu);
  /* 110e247c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e247f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e2481 not ecx */
  ECX = (~(ECX));
  /* 110e2483 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e2485 mov eax, ecx */
  EAX = (ECX);
  /* 110e2487 mov esi, edi */
  ESI = (EDI);
  /* 110e2489 mov edi, 0x110ed704 */
  EDI = (0x110ed704u);
  /* 110e248e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e2491 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e2493 mov ecx, eax */
  ECX = (EAX);
  /* 110e2495 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e2497 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e249a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e249c mov edi, 0x110ea2f4 */
  EDI = (0x110ea2f4u);
  /* 110e24a1 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e24a4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e24a6 not ecx */
  ECX = (~(ECX));
  /* 110e24a8 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e24aa mov edx, ecx */
  EDX = (ECX);
  /* 110e24ac mov esi, edi */
  ESI = (EDI);
  /* 110e24ae mov edi, 0x110ed713 */
  EDI = (0x110ed713u);
  /* 110e24b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e24b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e24b8 mov ecx, edx */
  ECX = (EDX);
  /* 110e24ba and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e24bd rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e24bf mov edi, 0x110ea2ec */
  EDI = (0x110ea2ecu);
  /* 110e24c4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e24c7 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e24c9 not ecx */
  ECX = (~(ECX));
  /* 110e24cb sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e24cd mov eax, ecx */
  EAX = (ECX);
  /* 110e24cf mov esi, edi */
  ESI = (EDI);
  /* 110e24d1 mov edi, 0x110ed300 */
  EDI = (0x110ed300u);
  /* 110e24d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e24d9 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e24db mov ecx, eax */
  ECX = (EAX);
  /* 110e24dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e24df and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e24e2 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e24e4 mov edi, 0x110ea2e4 */
  EDI = (0x110ea2e4u);
  /* 110e24e9 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e24ec repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 110e24ee not ecx */
  ECX = (~(ECX));
  /* 110e24f0 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e24f2 mov edx, ecx */
  EDX = (ECX);
  /* 110e24f4 mov esi, edi */
  ESI = (EDI);
  /* 110e24f6 mov edi, 0x110ed30f */
  EDI = (0x110ed30fu);
  /* 110e24fb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e24fe rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e2500 mov ecx, edx */
  ECX = (EDX);
  /* 110e2502 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e2505 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 110e2507 jmp 0x110e265b */
  goto L_110e265b;
L_110e250c:;
  /* 110e250c push 2 */
  push32((uint32_t)(0x2u));
  /* 110e250e push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2510 push esi */
  push32((uint32_t)(ESI));
  /* 110e2511 call 0x110e3085 */
  push32(0x110e2516u); f_110e3085();
  /* 110e2516 push esi */
  push32((uint32_t)(ESI));
  /* 110e2517 call 0x110e2f02 */
  push32(0x110e251cu); f_110e2f02();
  /* 110e251c mov ebx, eax */
  EBX = (EAX);
  /* 110e251e lea eax, [ebx + 1] */
  EAX = ((uint32_t)(EBX + 0x1));
  /* 110e2521 push eax */
  push32((uint32_t)(EAX));
  /* 110e2522 call 0x110e2ef4 */
  push32(0x110e2527u); f_110e2ef4();
  /* 110e2527 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2529 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e252b push esi */
  push32((uint32_t)(ESI));
  /* 110e252c mov edi, eax */
  EDI = (EAX);
  /* 110e252e call 0x110e3085 */
  push32(0x110e2533u); f_110e3085();
  /* 110e2533 push esi */
  push32((uint32_t)(ESI));
  /* 110e2534 push ebx */
  push32((uint32_t)(EBX));
  /* 110e2535 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2537 push edi */
  push32((uint32_t)(EDI));
  /* 110e2538 call 0x110e2ddd */
  push32(0x110e253du); f_110e2ddd();
  /* 110e253d push esi */
  push32((uint32_t)(ESI));
  /* 110e253e call 0x110e2d60 */
  push32(0x110e2543u); f_110e2d60();
  /* 110e2543 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2546 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e2548 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
L_110e254a:;
  /* 110e254a test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 110e254c jne 0x110e2555 */
  if (!C.zf) goto L_110e2555;
  /* 110e254e push 0x110ea2dc */
  push32((uint32_t)(0x110ea2dcu));
  /* 110e2553 jmp 0x110e258f */
  goto L_110e258f;
L_110e2555:;
  /* 110e2555 cmp ebp, 1 */
  { uint32_t _a=(EBP),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2558 jne 0x110e2561 */
  if (!C.zf) goto L_110e2561;
  /* 110e255a push 0x110ea2d4 */
  push32((uint32_t)(0x110ea2d4u));
  /* 110e255f jmp 0x110e258f */
  goto L_110e258f;
L_110e2561:;
  /* 110e2561 cmp ebp, 2 */
  { uint32_t _a=(EBP),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2564 jne 0x110e256d */
  if (!C.zf) goto L_110e256d;
  /* 110e2566 push 0x110ea2cc */
  push32((uint32_t)(0x110ea2ccu));
  /* 110e256b jmp 0x110e258f */
  goto L_110e258f;
L_110e256d:;
  /* 110e256d cmp ebp, 3 */
  { uint32_t _a=(EBP),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2570 jne 0x110e2579 */
  if (!C.zf) goto L_110e2579;
  /* 110e2572 push 0x110ea2c4 */
  push32((uint32_t)(0x110ea2c4u));
  /* 110e2577 jmp 0x110e258f */
  goto L_110e258f;
L_110e2579:;
  /* 110e2579 cmp ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e257c jne 0x110e2585 */
  if (!C.zf) goto L_110e2585;
  /* 110e257e push 0x110ea2bc */
  push32((uint32_t)(0x110ea2bcu));
  /* 110e2583 jmp 0x110e258f */
  goto L_110e258f;
L_110e2585:;
  /* 110e2585 cmp ebp, 5 */
  { uint32_t _a=(EBP),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2588 jne 0x110e259c */
  if (!C.zf) goto L_110e259c;
  /* 110e258a push 0x110ea2b4 */
  push32((uint32_t)(0x110ea2b4u));
L_110e258f:;
  /* 110e258f push edi */
  push32((uint32_t)(EDI));
  /* 110e2590 call 0x110e2ce0 */
  push32(0x110e2595u); f_110e2ce0();
  /* 110e2595 mov esi, eax */
  ESI = (EAX);
  /* 110e2597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e259a sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_110e259c:;
  /* 110e259c add esi, 5 */
  { uint32_t _a=(ESI),_b=(0x5u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e259f push 0x110ea2b0 */
  push32((uint32_t)(0x110ea2b0u));
  /* 110e25a4 lea ebx, [esi + edi] */
  EBX = ((uint32_t)(ESI + EDI*1));
  /* 110e25a7 push ebx */
  push32((uint32_t)(EBX));
  /* 110e25a8 call 0x110e2ca0 */
  push32(0x110e25adu); f_110e2ca0();
  /* 110e25ad lea ecx, [ebp + ebp*2] */
  ECX = ((uint32_t)(EBP + EBP*2));
  /* 110e25b1 push eax */
  push32((uint32_t)(EAX));
  /* 110e25b2 push ebx */
  push32((uint32_t)(EBX));
  /* 110e25b3 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 110e25b7 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 110e25ba mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 110e25be lea ecx, [ecx + 0x110ed6c8] */
  ECX = ((uint32_t)(ECX + 0x110ed6c8));
  /* 110e25c4 push ecx */
  push32((uint32_t)(ECX));
  /* 110e25c5 call 0x110e2ba0 */
  push32(0x110e25cau); f_110e2ba0();
  /* 110e25ca mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 110e25ce mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 110e25d2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e25d5 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 110e25d6 cmp ebp, 6 */
  { uint32_t _a=(EBP),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e25d9 mov byte ptr [edx + eax + 0x110ed6c8], 0 */
  w8((uint32_t)(EDX + EAX*1 + 0x110ed6c8), (0x0u));
  /* 110e25e1 jl 0x110e254a */
  if ((C.sf!=C.of)) goto L_110e254a;
  /* 110e25e7 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
L_110e25e9:;
  /* 110e25e9 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 110e25eb jne 0x110e25f4 */
  if (!C.zf) goto L_110e25f4;
  /* 110e25ed push 0x110ea2ec */
  push32((uint32_t)(0x110ea2ecu));
  /* 110e25f2 jmp 0x110e25fe */
  goto L_110e25fe;
L_110e25f4:;
  /* 110e25f4 cmp ebp, 1 */
  { uint32_t _a=(EBP),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e25f7 jne 0x110e260b */
  if (!C.zf) goto L_110e260b;
  /* 110e25f9 push 0x110ea2e4 */
  push32((uint32_t)(0x110ea2e4u));
L_110e25fe:;
  /* 110e25fe push edi */
  push32((uint32_t)(EDI));
  /* 110e25ff call 0x110e2ce0 */
  push32(0x110e2604u); f_110e2ce0();
  /* 110e2604 mov esi, eax */
  ESI = (EAX);
  /* 110e2606 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2609 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_110e260b:;
  /* 110e260b add esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e260e push 0x110ea2b0 */
  push32((uint32_t)(0x110ea2b0u));
  /* 110e2613 lea ebx, [esi + edi] */
  EBX = ((uint32_t)(ESI + EDI*1));
  /* 110e2616 push ebx */
  push32((uint32_t)(EBX));
  /* 110e2617 call 0x110e2ca0 */
  push32(0x110e261cu); f_110e2ca0();
  /* 110e261c lea ecx, [ebp + ebp*2] */
  ECX = ((uint32_t)(EBP + EBP*2));
  /* 110e2620 push eax */
  push32((uint32_t)(EAX));
  /* 110e2621 push ebx */
  push32((uint32_t)(EBX));
  /* 110e2622 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 110e2626 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 110e2629 mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 110e262d lea ecx, [ecx + 0x110ed300] */
  ECX = ((uint32_t)(ECX + 0x110ed300));
  /* 110e2633 push ecx */
  push32((uint32_t)(ECX));
  /* 110e2634 call 0x110e2ba0 */
  push32(0x110e2639u); f_110e2ba0();
  /* 110e2639 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 110e263d mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 110e2641 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2644 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 110e2645 cmp ebp, 2 */
  { uint32_t _a=(EBP),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2648 mov byte ptr [edx + eax + 0x110ed300], 0 */
  w8((uint32_t)(EDX + EAX*1 + 0x110ed300), (0x0u));
  /* 110e2650 jl 0x110e25e9 */
  if ((C.sf!=C.of)) goto L_110e25e9;
  /* 110e2652 push edi */
  push32((uint32_t)(EDI));
  /* 110e2653 call 0x110e2b90 */
  push32(0x110e2658u); f_110e2b90();
  /* 110e2658 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e265b:;
  /* 110e265b push 1 */
  push32((uint32_t)(0x1u));
  /* 110e265d call dword ptr [0x110e90ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90ec))), 0x110e2663u);
  /* 110e2663 mov ebp, dword ptr [0x110e90e8] */
  EBP = (r32((uint32_t)(0x110e90e8)));
  /* 110e2669 mov ebx, dword ptr [0x110e90f4] */
  EBX = (r32((uint32_t)(0x110e90f4)));
  /* 110e266f mov esi, dword ptr [0x110e914c] */
  ESI = (r32((uint32_t)(0x110e914c)));
  /* 110e2675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2678 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e267a je 0x110e2832 */
  if (C.zf) goto L_110e2832;
  /* 110e2680 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2682 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2684 call dword ptr [0x110e90f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90f8))), 0x110e268au);
  /* 110e268a push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 110e268f push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2691 call ebp */
  call_ind((uint32_t)(EBP), 0x110e2693u);
  /* 110e2693 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 110e2695 call ebx */
  call_ind((uint32_t)(EBX), 0x110e2697u);
  /* 110e2697 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 110e2699 call ebx */
  call_ind((uint32_t)(EBX), 0x110e269bu);
  /* 110e269b mov edi, dword ptr [0x110e90f0] */
  EDI = (r32((uint32_t)(0x110e90f0)));
  /* 110e26a1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 110e26a3 call edi */
  call_ind((uint32_t)(EDI), 0x110e26a5u);
  /* 110e26a5 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 110e26a7 call edi */
  call_ind((uint32_t)(EDI), 0x110e26a9u);
  /* 110e26a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e26ab push 0x110ed360 */
  push32((uint32_t)(0x110ed360u));
  /* 110e26b0 call dword ptr [0x110e9158] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9158))), 0x110e26b6u);
  /* 110e26b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e26b8 call dword ptr [0x110e9100] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9100))), 0x110e26beu);
  /* 110e26be push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e26c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e26c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e26c7 call esi */
  call_ind((uint32_t)(ESI), 0x110e26c9u);
  /* 110e26c9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e26ce push 3 */
  push32((uint32_t)(0x3u));
  /* 110e26d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e26d2 call esi */
  call_ind((uint32_t)(ESI), 0x110e26d4u);
  /* 110e26d4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e26d7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e26dc push 2 */
  push32((uint32_t)(0x2u));
  /* 110e26de push 0 */
  push32((uint32_t)(0x0u));
  /* 110e26e0 call esi */
  call_ind((uint32_t)(ESI), 0x110e26e2u);
  /* 110e26e2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e26e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e26e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e26eb call esi */
  call_ind((uint32_t)(ESI), 0x110e26edu);
  /* 110e26ed push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e26f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 110e26f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e26f6 call esi */
  call_ind((uint32_t)(ESI), 0x110e26f8u);
  /* 110e26f8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e26fd push 5 */
  push32((uint32_t)(0x5u));
  /* 110e26ff push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2701 call esi */
  call_ind((uint32_t)(ESI), 0x110e2703u);
  /* 110e2703 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e2708 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e270a push 2 */
  push32((uint32_t)(0x2u));
  /* 110e270c call esi */
  call_ind((uint32_t)(ESI), 0x110e270eu);
  /* 110e270e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e2713 push 3 */
  push32((uint32_t)(0x3u));
  /* 110e2715 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2717 call esi */
  call_ind((uint32_t)(ESI), 0x110e2719u);
  /* 110e2719 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e271c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e2721 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2723 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2725 call esi */
  call_ind((uint32_t)(ESI), 0x110e2727u);
  /* 110e2727 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e272c push 1 */
  push32((uint32_t)(0x1u));
  /* 110e272e push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2730 call esi */
  call_ind((uint32_t)(ESI), 0x110e2732u);
  /* 110e2732 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e2737 push 4 */
  push32((uint32_t)(0x4u));
  /* 110e2739 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e273b call esi */
  call_ind((uint32_t)(ESI), 0x110e273du);
  /* 110e273d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 110e2742 push 5 */
  push32((uint32_t)(0x5u));
  /* 110e2744 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2746 call esi */
  call_ind((uint32_t)(ESI), 0x110e2748u);
  /* 110e2748 mov edi, dword ptr [0x110e9104] */
  EDI = (r32((uint32_t)(0x110e9104)));
  /* 110e274e push 0x110ecfe8 */
  push32((uint32_t)(0x110ecfe8u));
  /* 110e2753 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2755 call edi */
  call_ind((uint32_t)(EDI), 0x110e2757u);
  /* 110e2757 push 0x110ecff0 */
  push32((uint32_t)(0x110ecff0u));
  /* 110e275c push 0 */
  push32((uint32_t)(0x0u));
  /* 110e275e call edi */
  call_ind((uint32_t)(EDI), 0x110e2760u);
  /* 110e2760 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2763 push 0x110ed338 */
  push32((uint32_t)(0x110ed338u));
  /* 110e2768 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e276a call edi */
  call_ind((uint32_t)(EDI), 0x110e276cu);
  /* 110e276c push 0x110ed328 */
  push32((uint32_t)(0x110ed328u));
  /* 110e2771 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2773 call edi */
  call_ind((uint32_t)(EDI), 0x110e2775u);
  /* 110e2775 push 0x110ed690 */
  push32((uint32_t)(0x110ed690u));
  /* 110e277a push 0 */
  push32((uint32_t)(0x0u));
  /* 110e277c call edi */
  call_ind((uint32_t)(EDI), 0x110e277eu);
  /* 110e277e push 0x110ed6a8 */
  push32((uint32_t)(0x110ed6a8u));
  /* 110e2783 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2785 call edi */
  call_ind((uint32_t)(EDI), 0x110e2787u);
  /* 110e2787 push 0x110ed6a0 */
  push32((uint32_t)(0x110ed6a0u));
  /* 110e278c push 0 */
  push32((uint32_t)(0x0u));
  /* 110e278e call edi */
  call_ind((uint32_t)(EDI), 0x110e2790u);
  /* 110e2790 push 0x110ed6b0 */
  push32((uint32_t)(0x110ed6b0u));
  /* 110e2795 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2797 call edi */
  call_ind((uint32_t)(EDI), 0x110e2799u);
  /* 110e2799 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e279b call dword ptr [0x110e90fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90fc))), 0x110e27a1u);
  /* 110e27a1 push eax */
  push32((uint32_t)(EAX));
  /* 110e27a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e27a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e27a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e27a8 push 0x110ea2a4 */
  push32((uint32_t)(0x110ea2a4u));
  /* 110e27ad push 2 */
  push32((uint32_t)(0x2u));
  /* 110e27af call dword ptr [0x110e910c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e910c))), 0x110e27b5u);
  /* 110e27b5 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e27b8 mov ecx, 0x110ecff8 */
  ECX = (0x110ecff8u);
  /* 110e27bd push 3 */
  push32((uint32_t)(0x3u));
  /* 110e27bf push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27c7 push 0x110ed380 */
  push32((uint32_t)(0x110ed380u));
  /* 110e27cc push 0x110ea2a0 */
  push32((uint32_t)(0x110ea2a0u));
  /* 110e27d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 110e27d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e27d5 push 0x110ecfe0 */
  push32((uint32_t)(0x110ecfe0u));
  /* 110e27da push 0x110ed300 */
  push32((uint32_t)(0x110ed300u));
  /* 110e27df push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27e3 call 0x110e1020 */
  push32(0x110e27e8u); f_110e1020();
  /* 110e27e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27ea push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27ec push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27ee push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e27f2 push 0x110ecff8 */
  push32((uint32_t)(0x110ecff8u));
  /* 110e27f7 push 0x110ea29c */
  push32((uint32_t)(0x110ea29cu));
  /* 110e27fc push 3 */
  push32((uint32_t)(0x3u));
  /* 110e27fe push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2800 push 0x110ed368 */
  push32((uint32_t)(0x110ed368u));
  /* 110e2805 push 0x110ed30f */
  push32((uint32_t)(0x110ed30fu));
  /* 110e280a push 1 */
  push32((uint32_t)(0x1u));
  /* 110e280c push 1 */
  push32((uint32_t)(0x1u));
  /* 110e280e mov ecx, 0x110ed380 */
  ECX = (0x110ed380u);
  /* 110e2813 call 0x110e1020 */
  push32(0x110e2818u); f_110e1020();
  /* 110e2818 push 0x110ea294 */
  push32((uint32_t)(0x110ea294u));
  /* 110e281d call dword ptr [0x110e9160] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9160))), 0x110e2823u);
  /* 110e2823 push 0xa */
  push32((uint32_t)(0xau));
  /* 110e2825 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2827 call ebp */
  call_ind((uint32_t)(EBP), 0x110e2829u);
  /* 110e2829 push 0xa */
  push32((uint32_t)(0xau));
  /* 110e282b push 3 */
  push32((uint32_t)(0x3u));
  /* 110e282d call ebp */
  call_ind((uint32_t)(EBP), 0x110e282fu);
  /* 110e282f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2832:;
  /* 110e2832 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2834 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2836 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2838 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e283a push 0x110ed380 */
  push32((uint32_t)(0x110ed380u));
  /* 110e283f push 0x110ea2a0 */
  push32((uint32_t)(0x110ea2a0u));
  /* 110e2844 push 0x110ecfe0 */
  push32((uint32_t)(0x110ecfe0u));
  /* 110e2849 mov ecx, 0x110ecff8 */
  ECX = (0x110ecff8u);
  /* 110e284e mov dword ptr [0x110ea040], 0x110ecff8 */
  w32((uint32_t)(0x110ea040), (0x110ecff8u));
  /* 110e2858 mov dword ptr [0x110ea044], 0x110ed380 */
  w32((uint32_t)(0x110ea044), (0x110ed380u));
  /* 110e2862 call 0x110e11c0 */
  push32(0x110e2867u); f_110e11c0();
  /* 110e2867 mov edi, dword ptr [0x110e9170] */
  EDI = (r32((uint32_t)(0x110e9170)));
  /* 110e286d push 0x110ed698 */
  push32((uint32_t)(0x110ed698u));
  /* 110e2872 call edi */
  call_ind((uint32_t)(EDI), 0x110e2874u);
  /* 110e2874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2877 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e287a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 110e287d push ecx */
  push32((uint32_t)(ECX));
  /* 110e287e push 0x110ed348 */
  push32((uint32_t)(0x110ed348u));
  /* 110e2883 call edi */
  call_ind((uint32_t)(EDI), 0x110e2885u);
  /* 110e2885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2888 mov ecx, 0x110ecff8 */
  ECX = (0x110ecff8u);
  /* 110e288d push eax */
  push32((uint32_t)(EAX));
  /* 110e288e call 0x110e2070 */
  push32(0x110e2893u); f_110e2070();
  /* 110e2893 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2895 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2897 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2899 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e289b push 0x110ecff8 */
  push32((uint32_t)(0x110ecff8u));
  /* 110e28a0 push 0x110ea29c */
  push32((uint32_t)(0x110ea29cu));
  /* 110e28a5 push 0x110ed368 */
  push32((uint32_t)(0x110ed368u));
  /* 110e28aa mov ecx, 0x110ed380 */
  ECX = (0x110ed380u);
  /* 110e28af call 0x110e11c0 */
  push32(0x110e28b4u); f_110e11c0();
  /* 110e28b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e28b6 mov ecx, 0x110ecff8 */
  ECX = (0x110ecff8u);
  /* 110e28bb call 0x110e1500 */
  push32(0x110e28c0u); f_110e1500();
  /* 110e28c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e28c2 mov ecx, 0x110ed380 */
  ECX = (0x110ed380u);
  /* 110e28c7 call 0x110e1500 */
  push32(0x110e28ccu); f_110e1500();
  /* 110e28cc mov edi, dword ptr [0x110e9110] */
  EDI = (r32((uint32_t)(0x110e9110)));
  /* 110e28d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e28d4 call edi */
  call_ind((uint32_t)(EDI), 0x110e28d6u);
  /* 110e28d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e28d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e28db je 0x110e28f4 */
  if (C.zf) goto L_110e28f4;
  /* 110e28dd mov ecx, 0x110ecff8 */
  ECX = (0x110ecff8u);
  /* 110e28e2 call 0x110e1ab0 */
  push32(0x110e28e7u); f_110e1ab0();
  /* 110e28e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e28e9 je 0x110e28f4 */
  if (C.zf) goto L_110e28f4;
  /* 110e28eb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 110e28ed push 2 */
  push32((uint32_t)(0x2u));
  /* 110e28ef call ebp */
  call_ind((uint32_t)(EBP), 0x110e28f1u);
  /* 110e28f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e28f4:;
  /* 110e28f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e28f6 call edi */
  call_ind((uint32_t)(EDI), 0x110e28f8u);
  /* 110e28f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e28fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e28fd je 0x110e2916 */
  if (C.zf) goto L_110e2916;
  /* 110e28ff mov ecx, 0x110ed380 */
  ECX = (0x110ed380u);
  /* 110e2904 call 0x110e1ab0 */
  push32(0x110e2909u); f_110e1ab0();
  /* 110e2909 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e290b je 0x110e2916 */
  if (C.zf) goto L_110e2916;
  /* 110e290d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 110e290f push 3 */
  push32((uint32_t)(0x3u));
  /* 110e2911 call ebp */
  call_ind((uint32_t)(EBP), 0x110e2913u);
  /* 110e2913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2916:;
  /* 110e2916 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2918 call edi */
  call_ind((uint32_t)(EDI), 0x110e291au);
  /* 110e291a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e291d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e291f je 0x110e2951 */
  if (C.zf) goto L_110e2951;
  /* 110e2921 mov ecx, 0x110ecff8 */
  ECX = (0x110ecff8u);
  /* 110e2926 call 0x110e1210 */
  push32(0x110e292bu); f_110e1210();
  /* 110e292b mov ecx, 0x110ed380 */
  ECX = (0x110ed380u);
  /* 110e2930 call 0x110e1210 */
  push32(0x110e2935u); f_110e1210();
  /* 110e2935 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2937 call dword ptr [0x110e90fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90fc))), 0x110e293du);
  /* 110e293d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2940 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 110e2943 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 110e2946 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 110e2949 push edx */
  push32((uint32_t)(EDX));
  /* 110e294a push 1 */
  push32((uint32_t)(0x1u));
  /* 110e294c call ebp */
  call_ind((uint32_t)(EBP), 0x110e294eu);
  /* 110e294e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2951:;
  /* 110e2951 mov ebp, dword ptr [0x110e90ec] */
  EBP = (r32((uint32_t)(0x110e90ec)));
  /* 110e2957 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2959 call ebp */
  call_ind((uint32_t)(EBP), 0x110e295bu);
  /* 110e295b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e295e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e2960 je 0x110e29a6 */
  if (C.zf) goto L_110e29a6;
  /* 110e2962 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2964 push 0x110ed688 */
  push32((uint32_t)(0x110ed688u));
  /* 110e2969 call dword ptr [0x110e9108] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9108))), 0x110e296fu);
  /* 110e296f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e2974 je 0x110e29a6 */
  if (C.zf) goto L_110e29a6;
  /* 110e2976 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2978 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e297a call dword ptr [0x110e90f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90f8))), 0x110e2980u);
  /* 110e2980 mov edi, dword ptr [0x110e9160] */
  EDI = (r32((uint32_t)(0x110e9160)));
  /* 110e2986 push 0x110ea28c */
  push32((uint32_t)(0x110ea28cu));
  /* 110e298b call edi */
  call_ind((uint32_t)(EDI), 0x110e298du);
  /* 110e298d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 110e298f call ebx */
  call_ind((uint32_t)(EBX), 0x110e2991u);
  /* 110e2991 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 110e2993 call ebx */
  call_ind((uint32_t)(EBX), 0x110e2995u);
  /* 110e2995 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 110e2997 call dword ptr [0x110e90f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90f0))), 0x110e299du);
  /* 110e299d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 110e299f call ebx */
  call_ind((uint32_t)(EBX), 0x110e29a1u);
  /* 110e29a1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e29a4 jmp 0x110e29ac */
  goto L_110e29ac;
L_110e29a6:;
  /* 110e29a6 mov edi, dword ptr [0x110e9160] */
  EDI = (r32((uint32_t)(0x110e9160)));
L_110e29ac:;
  /* 110e29ac push 3 */
  push32((uint32_t)(0x3u));
  /* 110e29ae call ebp */
  call_ind((uint32_t)(EBP), 0x110e29b0u);
  /* 110e29b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e29b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e29b5 je 0x110e29ec */
  if (C.zf) goto L_110e29ec;
  /* 110e29b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e29b9 push 0x110ed320 */
  push32((uint32_t)(0x110ed320u));
  /* 110e29be call dword ptr [0x110e9108] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9108))), 0x110e29c4u);
  /* 110e29c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e29c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e29c9 je 0x110e29ec */
  if (C.zf) goto L_110e29ec;
  /* 110e29cb push 0x110ea284 */
  push32((uint32_t)(0x110ea284u));
  /* 110e29d0 call edi */
  call_ind((uint32_t)(EDI), 0x110e29d2u);
  /* 110e29d2 push 0x110ed690 */
  push32((uint32_t)(0x110ed690u));
  /* 110e29d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e29d9 call dword ptr [0x110e9118] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9118))), 0x110e29dfu);
  /* 110e29df push 0 */
  push32((uint32_t)(0x0u));
  /* 110e29e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 110e29e3 call dword ptr [0x110e90f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90f8))), 0x110e29e9u);
  /* 110e29e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e29ec:;
  /* 110e29ec mov ebx, dword ptr [0x110e911c] */
  EBX = (r32((uint32_t)(0x110e911c)));
  /* 110e29f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e29f4 call ebx */
  call_ind((uint32_t)(EBX), 0x110e29f6u);
  /* 110e29f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e29f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e29fb je 0x110e2a0d */
  if (C.zf) goto L_110e2a0d;
  /* 110e29fd push 0x110ea27c */
  push32((uint32_t)(0x110ea27cu));
  /* 110e2a02 call edi */
  call_ind((uint32_t)(EDI), 0x110e2a04u);
  /* 110e2a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2a07 call dword ptr [0x110e9114] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9114))), 0x110e2a0du);
L_110e2a0d:;
  /* 110e2a0d push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2a0f call ebx */
  call_ind((uint32_t)(EBX), 0x110e2a11u);
  /* 110e2a11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2a14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e2a16 je 0x110e2a28 */
  if (C.zf) goto L_110e2a28;
  /* 110e2a18 push 0x110ea274 */
  push32((uint32_t)(0x110ea274u));
  /* 110e2a1d call edi */
  call_ind((uint32_t)(EDI), 0x110e2a1fu);
  /* 110e2a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2a22 call dword ptr [0x110e9124] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9124))), 0x110e2a28u);
L_110e2a28:;
  /* 110e2a28 mov edi, dword ptr [0x110e9148] */
  EDI = (r32((uint32_t)(0x110e9148)));
  /* 110e2a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2a32 call edi */
  call_ind((uint32_t)(EDI), 0x110e2a34u);
  /* 110e2a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2a37 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2a3c jle 0x110e2a4c */
  if ((C.zf||C.sf!=C.of)) goto L_110e2a4c;
  /* 110e2a3e push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 110e2a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2a47 call esi */
  call_ind((uint32_t)(ESI), 0x110e2a49u);
  /* 110e2a49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2a4c:;
  /* 110e2a4c push 3 */
  push32((uint32_t)(0x3u));
  /* 110e2a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2a50 call edi */
  call_ind((uint32_t)(EDI), 0x110e2a52u);
  /* 110e2a52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2a55 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2a5a jle 0x110e2a6a */
  if ((C.zf||C.sf!=C.of)) goto L_110e2a6a;
  /* 110e2a5c push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 110e2a61 push 3 */
  push32((uint32_t)(0x3u));
  /* 110e2a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2a65 call esi */
  call_ind((uint32_t)(ESI), 0x110e2a67u);
  /* 110e2a67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2a6a:;
  /* 110e2a6a push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2a6e call edi */
  call_ind((uint32_t)(EDI), 0x110e2a70u);
  /* 110e2a70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2a73 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2a78 jle 0x110e2a88 */
  if ((C.zf||C.sf!=C.of)) goto L_110e2a88;
  /* 110e2a7a push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 110e2a7f push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2a83 call esi */
  call_ind((uint32_t)(ESI), 0x110e2a85u);
  /* 110e2a85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2a88:;
  /* 110e2a88 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2a8c call edi */
  call_ind((uint32_t)(EDI), 0x110e2a8eu);
  /* 110e2a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2a91 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2a96 jle 0x110e2aa6 */
  if ((C.zf||C.sf!=C.of)) goto L_110e2aa6;
  /* 110e2a98 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 110e2a9d push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2a9f push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2aa1 call esi */
  call_ind((uint32_t)(ESI), 0x110e2aa3u);
  /* 110e2aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2aa6:;
  /* 110e2aa6 push 4 */
  push32((uint32_t)(0x4u));
  /* 110e2aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2aaa call edi */
  call_ind((uint32_t)(EDI), 0x110e2aacu);
  /* 110e2aac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2aaf cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2ab4 jle 0x110e2ac4 */
  if ((C.zf||C.sf!=C.of)) goto L_110e2ac4;
  /* 110e2ab6 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 110e2abb push 4 */
  push32((uint32_t)(0x4u));
  /* 110e2abd push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2abf call esi */
  call_ind((uint32_t)(ESI), 0x110e2ac1u);
  /* 110e2ac1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2ac4:;
  /* 110e2ac4 push 5 */
  push32((uint32_t)(0x5u));
  /* 110e2ac6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2ac8 call edi */
  call_ind((uint32_t)(EDI), 0x110e2acau);
  /* 110e2aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2acd cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2ad2 jle 0x110e2ae2 */
  if ((C.zf||C.sf!=C.of)) goto L_110e2ae2;
  /* 110e2ad4 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 110e2ad9 push 5 */
  push32((uint32_t)(0x5u));
  /* 110e2adb push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2add call esi */
  call_ind((uint32_t)(ESI), 0x110e2adfu);
  /* 110e2adf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2ae2:;
  /* 110e2ae2 pop edi */
  EDI = (pop32());
  /* 110e2ae3 pop esi */
  ESI = (pop32());
  /* 110e2ae4 pop ebp */
  EBP = (pop32());
  /* 110e2ae5 pop ebx */
  EBX = (pop32());
  /* 110e2ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2ae9 ret  */
  ESPCHK(0x110e23b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002af0 @ 0x110e2af0 (160 bytes, 59 insns) */
void f_110e2af0(void) {
  FTRACE(0x110e2af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2af0 push esi */
  push32((uint32_t)(ESI));
  /* 110e2af1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e2af5 push edi */
  push32((uint32_t)(EDI));
  /* 110e2af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2af8 push esi */
  push32((uint32_t)(ESI));
  /* 110e2af9 call dword ptr [0x110e9158] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9158))), 0x110e2affu);
  /* 110e2aff mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 110e2b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2b06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e2b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2b0a je 0x110e2b4e */
  if (C.zf) goto L_110e2b4e;
  /* 110e2b0c mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 110e2b0f mov edi, dword ptr [0x110e9154] */
  EDI = (r32((uint32_t)(0x110e9154)));
  /* 110e2b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2b17 push 0x110ed370 */
  push32((uint32_t)(0x110ed370u));
  /* 110e2b1c push eax */
  push32((uint32_t)(EAX));
  /* 110e2b1d call edi */
  call_ind((uint32_t)(EDI), 0x110e2b1fu);
  /* 110e2b1f mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 110e2b22 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2b24 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 110e2b26 push 0x110ed378 */
  push32((uint32_t)(0x110ed378u));
  /* 110e2b2b push ecx */
  push32((uint32_t)(ECX));
  /* 110e2b2c call edi */
  call_ind((uint32_t)(EDI), 0x110e2b2eu);
  /* 110e2b2e mov edx, dword ptr [0x110ea044] */
  EDX = (r32((uint32_t)(0x110ea044)));
  /* 110e2b34 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 110e2b37 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2b39 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 110e2b3e mov eax, dword ptr [edx + 0x2ab] */
  EAX = (r32((uint32_t)(EDX + 0x2ab)));
  /* 110e2b44 push eax */
  push32((uint32_t)(EAX));
  /* 110e2b45 push ecx */
  push32((uint32_t)(ECX));
  /* 110e2b46 call edi */
  call_ind((uint32_t)(EDI), 0x110e2b48u);
  /* 110e2b48 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2b4b pop edi */
  EDI = (pop32());
  /* 110e2b4c pop esi */
  ESI = (pop32());
  /* 110e2b4d ret  */
  ESPCHK(0x110e2af0u, _esp0);
  ESP += 4; return;
L_110e2b4e:;
  /* 110e2b4e mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 110e2b51 mov edi, dword ptr [0x110e9154] */
  EDI = (r32((uint32_t)(0x110e9154)));
  /* 110e2b57 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 110e2b59 push 0x110ed378 */
  push32((uint32_t)(0x110ed378u));
  /* 110e2b5e push edx */
  push32((uint32_t)(EDX));
  /* 110e2b5f call edi */
  call_ind((uint32_t)(EDI), 0x110e2b61u);
  /* 110e2b61 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 110e2b64 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2b66 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 110e2b6b push 0x110ed370 */
  push32((uint32_t)(0x110ed370u));
  /* 110e2b70 push eax */
  push32((uint32_t)(EAX));
  /* 110e2b71 call edi */
  call_ind((uint32_t)(EDI), 0x110e2b73u);
  /* 110e2b73 mov ecx, dword ptr [0x110ea040] */
  ECX = (r32((uint32_t)(0x110ea040)));
  /* 110e2b79 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 110e2b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 110e2b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 110e2b80 mov edx, dword ptr [ecx + 0x2ab] */
  EDX = (r32((uint32_t)(ECX + 0x2ab)));
  /* 110e2b86 push edx */
  push32((uint32_t)(EDX));
  /* 110e2b87 push eax */
  push32((uint32_t)(EAX));
  /* 110e2b88 call edi */
  call_ind((uint32_t)(EDI), 0x110e2b8au);
  /* 110e2b8a add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2b8d pop edi */
  EDI = (pop32());
  /* 110e2b8e pop esi */
  ESI = (pop32());
  /* 110e2b8f ret  */
  ESPCHK(0x110e2af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b90 @ 0x110e2b90 (11 bytes, 4 insns) */
void f_110e2b90(void) {
  FTRACE(0x110e2b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2b90 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 110e2b94 call 0x110e332b */
  push32(0x110e2b99u); f_110e332b();
  /* 110e2b99 pop ecx */
  ECX = (pop32());
  /* 110e2b9a ret  */
  ESPCHK(0x110e2b90u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x110e2ba0 (254 bytes, 109 insns) */
void f_110e2ba0(void) {
  FTRACE(0x110e2ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2ba0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 110e2ba4 push edi */
  push32((uint32_t)(EDI));
  /* 110e2ba5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110e2ba7 je 0x110e2c23 */
  if (C.zf) goto L_110e2c23;
  /* 110e2ba9 push esi */
  push32((uint32_t)(ESI));
  /* 110e2baa push ebx */
  push32((uint32_t)(EBX));
  /* 110e2bab mov ebx, ecx */
  EBX = (ECX);
  /* 110e2bad mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 110e2bb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 110e2bb7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 110e2bbb jne 0x110e2bc4 */
  if (!C.zf) goto L_110e2bc4;
  /* 110e2bbd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e2bc0 jne 0x110e2c31 */
  if (!C.zf) goto L_110e2c31;
  /* 110e2bc2 jmp 0x110e2be5 */
  goto L_110e2be5;
L_110e2bc4:;
  /* 110e2bc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e2bc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e2bc7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e2bc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e2bca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e2bcb je 0x110e2bf2 */
  if (C.zf) goto L_110e2bf2;
  /* 110e2bcd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e2bcf je 0x110e2bfa */
  if (C.zf) goto L_110e2bfa;
  /* 110e2bd1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 110e2bd7 jne 0x110e2bc4 */
  if (!C.zf) goto L_110e2bc4;
  /* 110e2bd9 mov ebx, ecx */
  EBX = (ECX);
  /* 110e2bdb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e2bde jne 0x110e2c31 */
  if (!C.zf) goto L_110e2c31;
L_110e2be0:;
  /* 110e2be0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 110e2be3 je 0x110e2bf2 */
  if (C.zf) goto L_110e2bf2;
L_110e2be5:;
  /* 110e2be5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e2be7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e2be8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e2bea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e2beb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e2bed je 0x110e2c1e */
  if (C.zf) goto L_110e2c1e;
  /* 110e2bef dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110e2bf0 jne 0x110e2be5 */
  if (!C.zf) goto L_110e2be5;
L_110e2bf2:;
  /* 110e2bf2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110e2bf6 pop ebx */
  EBX = (pop32());
  /* 110e2bf7 pop esi */
  ESI = (pop32());
  /* 110e2bf8 pop edi */
  EDI = (pop32());
  /* 110e2bf9 ret  */
  ESPCHK(0x110e2ba0u, _esp0);
  ESP += 4; return;
L_110e2bfa:;
  /* 110e2bfa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110e2c00 je 0x110e2c14 */
  if (C.zf) goto L_110e2c14;
L_110e2c02:;
  /* 110e2c02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e2c04 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e2c05 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e2c06 je 0x110e2c96 */
  if (C.zf) goto L_110e2c96;
  /* 110e2c0c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110e2c12 jne 0x110e2c02 */
  if (!C.zf) goto L_110e2c02;
L_110e2c14:;
  /* 110e2c14 mov ebx, ecx */
  EBX = (ECX);
  /* 110e2c16 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e2c19 jne 0x110e2c87 */
  if (!C.zf) goto L_110e2c87;
L_110e2c1b:;
  /* 110e2c1b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e2c1d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_110e2c1e:;
  /* 110e2c1e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110e2c1f jne 0x110e2c1b */
  if (!C.zf) goto L_110e2c1b;
  /* 110e2c21 pop ebx */
  EBX = (pop32());
  /* 110e2c22 pop esi */
  ESI = (pop32());
L_110e2c23:;
  /* 110e2c23 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e2c27 pop edi */
  EDI = (pop32());
  /* 110e2c28 ret  */
  ESPCHK(0x110e2ba0u, _esp0);
  ESP += 4; return;
L_110e2c29:;
  /* 110e2c29 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110e2c2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2c2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e2c2f je 0x110e2be0 */
  if (C.zf) goto L_110e2be0;
L_110e2c31:;
  /* 110e2c31 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110e2c36 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110e2c38 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2c3a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e2c3d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110e2c3f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 110e2c41 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2c44 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110e2c49 je 0x110e2c29 */
  if (C.zf) goto L_110e2c29;
  /* 110e2c4b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e2c4d je 0x110e2c7b */
  if (C.zf) goto L_110e2c7b;
  /* 110e2c4f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 110e2c51 je 0x110e2c71 */
  if (C.zf) goto L_110e2c71;
  /* 110e2c53 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 110e2c59 je 0x110e2c67 */
  if (C.zf) goto L_110e2c67;
  /* 110e2c5b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 110e2c61 jne 0x110e2c29 */
  if (!C.zf) goto L_110e2c29;
  /* 110e2c63 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110e2c65 jmp 0x110e2c7f */
  goto L_110e2c7f;
L_110e2c67:;
  /* 110e2c67 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110e2c6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110e2c6f jmp 0x110e2c7f */
  goto L_110e2c7f;
L_110e2c71:;
  /* 110e2c71 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 110e2c77 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110e2c79 jmp 0x110e2c7f */
  goto L_110e2c7f;
L_110e2c7b:;
  /* 110e2c7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110e2c7d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_110e2c7f:;
  /* 110e2c7f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2c82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e2c84 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e2c85 je 0x110e2c91 */
  if (C.zf) goto L_110e2c91;
L_110e2c87:;
  /* 110e2c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e2c89:;
  /* 110e2c89 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 110e2c8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2c8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e2c8f jne 0x110e2c89 */
  if (!C.zf) goto L_110e2c89;
L_110e2c91:;
  /* 110e2c91 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 110e2c94 jne 0x110e2c1b */
  if (!C.zf) goto L_110e2c1b;
L_110e2c96:;
  /* 110e2c96 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110e2c9a pop ebx */
  EBX = (pop32());
  /* 110e2c9b pop esi */
  ESI = (pop32());
  /* 110e2c9c pop edi */
  EDI = (pop32());
  /* 110e2c9d ret  */
  ESPCHK(0x110e2ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ca0 @ 0x110e2ca0 (62 bytes, 35 insns) */
void f_110e2ca0(void) {
  FTRACE(0x110e2ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 110e2ca1 mov ebp, esp */
  EBP = (ESP);
  /* 110e2ca3 push esi */
  push32((uint32_t)(ESI));
  /* 110e2ca4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e2ca6 push eax */
  push32((uint32_t)(EAX));
  /* 110e2ca7 push eax */
  push32((uint32_t)(EAX));
  /* 110e2ca8 push eax */
  push32((uint32_t)(EAX));
  /* 110e2ca9 push eax */
  push32((uint32_t)(EAX));
  /* 110e2caa push eax */
  push32((uint32_t)(EAX));
  /* 110e2cab push eax */
  push32((uint32_t)(EAX));
  /* 110e2cac push eax */
  push32((uint32_t)(EAX));
  /* 110e2cad push eax */
  push32((uint32_t)(EAX));
  /* 110e2cae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e2cb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e2cb4:;
  /* 110e2cb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 110e2cb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110e2cb8 je 0x110e2cc1 */
  if (C.zf) goto L_110e2cc1;
  /* 110e2cba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110e2cbb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x110e2cbb");
  /* 110e2cbf jmp 0x110e2cb4 */
  goto L_110e2cb4;
L_110e2cc1:;
  /* 110e2cc1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e2cc4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e2cc7 nop  */
  /* nop */
L_110e2cc8:;
  /* 110e2cc8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e2cc9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e2ccb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 110e2ccd je 0x110e2cd6 */
  if (C.zf) goto L_110e2cd6;
  /* 110e2ccf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e2cd0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x110e2cd0");
  /* 110e2cd4 jae 0x110e2cc8 */
  if (!C.cf) goto L_110e2cc8;
L_110e2cd6:;
  /* 110e2cd6 mov eax, ecx */
  EAX = (ECX);
  /* 110e2cd8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2cdb pop esi */
  ESI = (pop32());
  /* 110e2cdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e2cdd ret  */
  ESPCHK(0x110e2ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce0 @ 0x110e2ce0 (133 bytes, 68 insns) */
void f_110e2ce0(void) {
  FTRACE(0x110e2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2ce0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e2ce4 push edi */
  push32((uint32_t)(EDI));
  /* 110e2ce5 push ebx */
  push32((uint32_t)(EBX));
  /* 110e2ce6 push esi */
  push32((uint32_t)(ESI));
  /* 110e2ce7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110e2ce9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 110e2ced test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e2cef je 0x110e2d5a */
  if (C.zf) goto L_110e2d5a;
  /* 110e2cf1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 110e2cf4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 110e2cf6 je 0x110e2d47 */
  if (C.zf) goto L_110e2d47;
L_110e2cf8:;
  /* 110e2cf8 mov esi, edi */
  ESI = (EDI);
  /* 110e2cfa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 110e2cfe mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 110e2d00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e2d01 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e2d03 je 0x110e2d1a */
  if (C.zf) goto L_110e2d1a;
  /* 110e2d05 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e2d07 je 0x110e2d14 */
  if (C.zf) goto L_110e2d14;
L_110e2d09:;
  /* 110e2d09 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e2d0b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110e2d0c:;
  /* 110e2d0c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e2d0e je 0x110e2d1a */
  if (C.zf) goto L_110e2d1a;
  /* 110e2d10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e2d12 jne 0x110e2d09 */
  if (!C.zf) goto L_110e2d09;
L_110e2d14:;
  /* 110e2d14 pop esi */
  ESI = (pop32());
  /* 110e2d15 pop ebx */
  EBX = (pop32());
  /* 110e2d16 pop edi */
  EDI = (pop32());
  /* 110e2d17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e2d19 ret  */
  ESPCHK(0x110e2ce0u, _esp0);
  ESP += 4; return;
L_110e2d1a:;
  /* 110e2d1a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e2d1c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e2d1d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e2d1f jne 0x110e2d0c */
  if (!C.zf) goto L_110e2d0c;
  /* 110e2d21 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_110e2d24:;
  /* 110e2d24 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 110e2d27 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110e2d29 je 0x110e2d53 */
  if (C.zf) goto L_110e2d53;
  /* 110e2d2b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e2d2d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2d30 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e2d32 jne 0x110e2cf8 */
  if (!C.zf) goto L_110e2cf8;
  /* 110e2d34 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 110e2d37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e2d39 je 0x110e2d53 */
  if (C.zf) goto L_110e2d53;
  /* 110e2d3b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 110e2d3e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2d41 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e2d43 je 0x110e2d24 */
  if (C.zf) goto L_110e2d24;
  /* 110e2d45 jmp 0x110e2cf8 */
  goto L_110e2cf8;
L_110e2d47:;
  /* 110e2d47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e2d49 pop esi */
  ESI = (pop32());
  /* 110e2d4a pop ebx */
  EBX = (pop32());
  /* 110e2d4b pop edi */
  EDI = (pop32());
  /* 110e2d4c mov al, dl */
  AL = (DL);
  /* 110e2d4e jmp 0x110e3436 */
  jmp_ind(0x110e3436u); return;
L_110e2d53:;
  /* 110e2d53 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 110e2d56 pop esi */
  ESI = (pop32());
  /* 110e2d57 pop ebx */
  EBX = (pop32());
  /* 110e2d58 pop edi */
  EDI = (pop32());
  /* 110e2d59 ret  */
  ESPCHK(0x110e2ce0u, _esp0);
  ESP += 4; return;
L_110e2d5a:;
  /* 110e2d5a mov eax, edi */
  EAX = (EDI);
  /* 110e2d5c pop esi */
  ESI = (pop32());
  /* 110e2d5d pop ebx */
  EBX = (pop32());
  /* 110e2d5e pop edi */
  EDI = (pop32());
  /* 110e2d5f ret  */
  ESPCHK(0x110e2ce0u, _esp0);
  ESP += 4; return;
  /* 110e2d60 push esi */
  push32((uint32_t)(ESI));
  /* 110e2d61 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
}

/* FUN_10002d60 @ 0x110e2d60 (49 bytes, 20 insns) */
void f_110e2d60(void) {
  FTRACE(0x110e2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2d60 push esi */
  push32((uint32_t)(ESI));
  /* 110e2d61 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e2d65 push edi */
  push32((uint32_t)(EDI));
  /* 110e2d66 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 110e2d69 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 110e2d6d je 0x110e2d75 */
  if (C.zf) goto L_110e2d75;
  /* 110e2d6f and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 110e2d73 jmp 0x110e2d8c */
  goto L_110e2d8c;
L_110e2d75:;
  /* 110e2d75 push esi */
  push32((uint32_t)(ESI));
  /* 110e2d76 call 0x110e35a8 */
  push32(0x110e2d7bu); f_110e35a8();
  /* 110e2d7b push esi */
  push32((uint32_t)(ESI));
  /* 110e2d7c call 0x110e2d91 */
  push32(0x110e2d81u); f_110e2d91();
  /* 110e2d81 push esi */
  push32((uint32_t)(ESI));
  /* 110e2d82 mov edi, eax */
  EDI = (EAX);
  /* 110e2d84 call 0x110e35fa */
  push32(0x110e2d89u); f_110e35fa();
  /* 110e2d89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e2d8c:;
  /* 110e2d8c mov eax, edi */
  EAX = (EDI);
  /* 110e2d8e pop edi */
  EDI = (pop32());
  /* 110e2d8f pop esi */
  ESI = (pop32());
  /* 110e2d90 ret  */
  ESPCHK(0x110e2d60u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x110e2d91 (76 bytes, 30 insns) */
void f_110e2d91(void) {
  FTRACE(0x110e2d91u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2d91 push esi */
  push32((uint32_t)(ESI));
  /* 110e2d92 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e2d96 push edi */
  push32((uint32_t)(EDI));
  /* 110e2d97 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 110e2d9a test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 110e2d9e je 0x110e2dd4 */
  if (C.zf) goto L_110e2dd4;
  /* 110e2da0 push esi */
  push32((uint32_t)(ESI));
  /* 110e2da1 call 0x110e3785 */
  push32(0x110e2da6u); f_110e3785();
  /* 110e2da6 push esi */
  push32((uint32_t)(ESI));
  /* 110e2da7 mov edi, eax */
  EDI = (EAX);
  /* 110e2da9 call 0x110e372c */
  push32(0x110e2daeu); f_110e372c();
  /* 110e2dae push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 110e2db1 call 0x110e364c */
  push32(0x110e2db6u); f_110e364c();
  /* 110e2db6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2db9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e2dbb jge 0x110e2dc2 */
  if ((C.sf==C.of)) goto L_110e2dc2;
  /* 110e2dbd or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 110e2dc0 jmp 0x110e2dd4 */
  goto L_110e2dd4;
L_110e2dc2:;
  /* 110e2dc2 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 110e2dc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e2dc7 je 0x110e2dd4 */
  if (C.zf) goto L_110e2dd4;
  /* 110e2dc9 push eax */
  push32((uint32_t)(EAX));
  /* 110e2dca call 0x110e332b */
  push32(0x110e2dcfu); f_110e332b();
  /* 110e2dcf and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 110e2dd3 pop ecx */
  ECX = (pop32());
L_110e2dd4:;
  /* 110e2dd4 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 110e2dd8 mov eax, edi */
  EAX = (EDI);
  /* 110e2dda pop edi */
  EDI = (pop32());
  /* 110e2ddb pop esi */
  ESI = (pop32());
  /* 110e2ddc ret  */
  ESPCHK(0x110e2d91u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ddd @ 0x110e2ddd (47 bytes, 18 insns) */
void f_110e2ddd(void) {
  FTRACE(0x110e2dddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2ddd push ebp */
  push32((uint32_t)(EBP));
  /* 110e2dde mov ebp, esp */
  EBP = (ESP);
  /* 110e2de0 push esi */
  push32((uint32_t)(ESI));
  /* 110e2de1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110e2de4 call 0x110e35a8 */
  push32(0x110e2de9u); f_110e35a8();
  /* 110e2de9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110e2dec push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e2def push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e2df2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e2df5 call 0x110e2e0c */
  push32(0x110e2dfau); f_110e2e0c();
  /* 110e2dfa push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 110e2dfd mov esi, eax */
  ESI = (EAX);
  /* 110e2dff call 0x110e35fa */
  push32(0x110e2e04u); f_110e35fa();
  /* 110e2e04 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2e07 mov eax, esi */
  EAX = (ESI);
  /* 110e2e09 pop esi */
  ESI = (pop32());
  /* 110e2e0a pop ebp */
  EBP = (pop32());
  /* 110e2e0b ret  */
  ESPCHK(0x110e2dddu, _esp0);
  ESP += 4; return;
}

/* FUN_10002e0c @ 0x110e2e0c (232 bytes, 92 insns) */
void f_110e2e0c(void) {
  FTRACE(0x110e2e0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2e0c push ebp */
  push32((uint32_t)(EBP));
  /* 110e2e0d mov ebp, esp */
  EBP = (ESP);
  /* 110e2e0f push ecx */
  push32((uint32_t)(ECX));
  /* 110e2e10 push ebx */
  push32((uint32_t)(EBX));
  /* 110e2e11 push esi */
  push32((uint32_t)(ESI));
  /* 110e2e12 push edi */
  push32((uint32_t)(EDI));
  /* 110e2e13 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e2e16 imul edi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e2e1a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e2e1d mov ecx, edi */
  ECX = (EDI);
  /* 110e2e1f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e2e21 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 110e2e24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 110e2e27 jne 0x110e2e30 */
  if (!C.zf) goto L_110e2e30;
  /* 110e2e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e2e2b jmp 0x110e2ed9 */
  goto L_110e2ed9;
L_110e2e30:;
  /* 110e2e30 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 110e2e33 test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 110e2e39 je 0x110e2e43 */
  if (C.zf) goto L_110e2e43;
  /* 110e2e3b mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 110e2e3e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 110e2e41 jmp 0x110e2e4f */
  goto L_110e2e4f;
L_110e2e43:;
  /* 110e2e43 mov dword ptr [ebp + 0x14], 0x1000 */
  w32((uint32_t)(EBP + 0x14), (0x1000u));
  /* 110e2e4a jmp 0x110e2e4f */
  goto L_110e2e4f;
L_110e2e4c:;
  /* 110e2e4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
L_110e2e4f:;
  /* 110e2e4f test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 110e2e55 je 0x110e2e81 */
  if (C.zf) goto L_110e2e81;
  /* 110e2e57 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 110e2e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e2e5c je 0x110e2e81 */
  if (C.zf) goto L_110e2e81;
  /* 110e2e5e cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2e60 mov edi, ecx */
  EDI = (ECX);
  /* 110e2e62 jb 0x110e2e66 */
  if (C.cf) goto L_110e2e66;
  /* 110e2e64 mov edi, eax */
  EDI = (EAX);
L_110e2e66:;
  /* 110e2e66 push edi */
  push32((uint32_t)(EDI));
  /* 110e2e67 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110e2e69 push ebx */
  push32((uint32_t)(EBX));
  /* 110e2e6a call 0x110e3bb0 */
  push32(0x110e2e6fu); f_110e3bb0();
  /* 110e2e6f sub dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e2e72 sub dword ptr [esi + 4], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EDI),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e2e75 add dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e2e77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2e7a add ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2e7c mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 110e2e7f jmp 0x110e2ecc */
  goto L_110e2ecc;
L_110e2e81:;
  /* 110e2e81 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2e84 jb 0x110e2eb4 */
  if (C.cf) goto L_110e2eb4;
  /* 110e2e86 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2e8a mov eax, ecx */
  EAX = (ECX);
  /* 110e2e8c je 0x110e2e97 */
  if (C.zf) goto L_110e2e97;
  /* 110e2e8e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110e2e90 div dword ptr [ebp + 0x14] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x14))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e2e93 mov eax, ecx */
  EAX = (ECX);
  /* 110e2e95 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_110e2e97:;
  /* 110e2e97 push eax */
  push32((uint32_t)(EAX));
  /* 110e2e98 push ebx */
  push32((uint32_t)(EBX));
  /* 110e2e99 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 110e2e9c call 0x110e396a */
  push32(0x110e2ea1u); f_110e396a();
  /* 110e2ea1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e2ea6 je 0x110e2ede */
  if (C.zf) goto L_110e2ede;
  /* 110e2ea8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2eab je 0x110e2ee4 */
  if (C.zf) goto L_110e2ee4;
  /* 110e2ead sub dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e2eb0 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2eb2 jmp 0x110e2ecc */
  goto L_110e2ecc;
L_110e2eb4:;
  /* 110e2eb4 push esi */
  push32((uint32_t)(ESI));
  /* 110e2eb5 call 0x110e388e */
  push32(0x110e2ebau); f_110e388e();
  /* 110e2eba cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2ebd pop ecx */
  ECX = (pop32());
  /* 110e2ebe je 0x110e2ee8 */
  if (C.zf) goto L_110e2ee8;
  /* 110e2ec0 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 110e2ec2 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 110e2ec5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e2ec6 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 110e2ec9 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_110e2ecc:;
  /* 110e2ecc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2ed0 jne 0x110e2e4c */
  if (!C.zf) goto L_110e2e4c;
  /* 110e2ed6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
L_110e2ed9:;
  /* 110e2ed9 pop edi */
  EDI = (pop32());
  /* 110e2eda pop esi */
  ESI = (pop32());
  /* 110e2edb pop ebx */
  EBX = (pop32());
  /* 110e2edc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e2edd ret  */
  ESPCHK(0x110e2e0cu, _esp0);
  ESP += 4; return;
L_110e2ede:;
  /* 110e2ede or dword ptr [esi + 0xc], 0x10 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x10u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 110e2ee2 jmp 0x110e2ee8 */
  goto L_110e2ee8;
L_110e2ee4:;
  /* 110e2ee4 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
L_110e2ee8:;
  /* 110e2ee8 mov eax, edi */
  EAX = (EDI);
  /* 110e2eea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110e2eec sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e2eef div dword ptr [ebp + 0xc] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 110e2ef2 jmp 0x110e2ed9 */
  goto L_110e2ed9;
}

/* operator_new @ 0x110e2ef4 (14 bytes, 6 insns) */
void f_110e2ef4(void) {
  FTRACE(0x110e2ef4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2ef4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2ef6 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 110e2efa call 0x110e3ef7 */
  push32(0x110e2effu); f_110e3ef7();
  /* 110e2eff pop ecx */
  ECX = (pop32());
  /* 110e2f00 pop ecx */
  ECX = (pop32());
  /* 110e2f01 ret  */
  ESPCHK(0x110e2ef4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f02 @ 0x110e2f02 (34 bytes, 15 insns) */
void f_110e2f02(void) {
  FTRACE(0x110e2f02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2f02 push esi */
  push32((uint32_t)(ESI));
  /* 110e2f03 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e2f07 push edi */
  push32((uint32_t)(EDI));
  /* 110e2f08 push esi */
  push32((uint32_t)(ESI));
  /* 110e2f09 call 0x110e35a8 */
  push32(0x110e2f0eu); f_110e35a8();
  /* 110e2f0e push esi */
  push32((uint32_t)(ESI));
  /* 110e2f0f call 0x110e2f24 */
  push32(0x110e2f14u); f_110e2f24();
  /* 110e2f14 push esi */
  push32((uint32_t)(ESI));
  /* 110e2f15 mov edi, eax */
  EDI = (EAX);
  /* 110e2f17 call 0x110e35fa */
  push32(0x110e2f1cu); f_110e35fa();
  /* 110e2f1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2f1f mov eax, edi */
  EAX = (EDI);
  /* 110e2f21 pop edi */
  EDI = (pop32());
  /* 110e2f22 pop esi */
  ESI = (pop32());
  /* 110e2f23 ret  */
  ESPCHK(0x110e2f02u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f24 @ 0x110e2f24 (353 bytes, 127 insns) */
void f_110e2f24(void) {
  FTRACE(0x110e2f24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e2f24 push ebp */
  push32((uint32_t)(EBP));
  /* 110e2f25 mov ebp, esp */
  EBP = (ESP);
  /* 110e2f27 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e2f2a push ebx */
  push32((uint32_t)(EBX));
  /* 110e2f2b push esi */
  push32((uint32_t)(ESI));
  /* 110e2f2c push edi */
  push32((uint32_t)(EDI));
  /* 110e2f2d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e2f30 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e2f32 mov esi, dword ptr [edi + 0x10] */
  ESI = (r32((uint32_t)(EDI + 0x10)));
  /* 110e2f35 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2f38 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 110e2f3b jge 0x110e2f40 */
  if ((C.sf==C.of)) goto L_110e2f40;
  /* 110e2f3d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_110e2f40:;
  /* 110e2f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e2f42 push ebx */
  push32((uint32_t)(EBX));
  /* 110e2f43 push esi */
  push32((uint32_t)(ESI));
  /* 110e2f44 call 0x110e42b4 */
  push32(0x110e2f49u); f_110e42b4();
  /* 110e2f49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2f4c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2f4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110e2f51 jl 0x110e2fb2 */
  if ((C.sf!=C.of)) goto L_110e2fb2;
  /* 110e2f53 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 110e2f56 test cx, 0x108 */
  { uint32_t _r=(CX)&(0x108u); fl_logic(_r,16); }
  /* 110e2f5b jne 0x110e2f65 */
  if (!C.zf) goto L_110e2f65;
  /* 110e2f5d sub eax, dword ptr [edi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e2f60 jmp 0x110e3080 */
  goto L_110e3080;
L_110e2f65:;
  /* 110e2f65 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e2f67 mov edx, dword ptr [edi + 8] */
  EDX = (r32((uint32_t)(EDI + 0x8)));
  /* 110e2f6a mov ebx, eax */
  EBX = (EAX);
  /* 110e2f6c sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e2f6e test cl, 3 */
  { uint32_t _r=(CL)&(0x3u); fl_logic(_r,8); }
  /* 110e2f71 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 110e2f74 je 0x110e2fa2 */
  if (C.zf) goto L_110e2fa2;
  /* 110e2f76 mov ebx, esi */
  EBX = (ESI);
  /* 110e2f78 mov ecx, esi */
  ECX = (ESI);
  /* 110e2f7a sar ebx, 5 */
  EBX = (sh_sar((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 110e2f7d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 110e2f80 mov ebx, dword ptr [ebx*4 + 0x110edd00] */
  EBX = (r32((uint32_t)(EBX*4 + 0x110edd00)));
  /* 110e2f87 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 110e2f8a test byte ptr [ebx + ecx*4 + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBX + ECX*4 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 110e2f8f je 0x110e2fba */
  if (C.zf) goto L_110e2fba;
  /* 110e2f91 mov ecx, edx */
  ECX = (EDX);
L_110e2f93:;
  /* 110e2f93 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2f95 jae 0x110e2fba */
  if (!C.cf) goto L_110e2fba;
  /* 110e2f97 cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e2f9a jne 0x110e2f9f */
  if (!C.zf) goto L_110e2f9f;
  /* 110e2f9c inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_110e2f9f:;
  /* 110e2f9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e2fa0 jmp 0x110e2f93 */
  goto L_110e2f93;
L_110e2fa2:;
  /* 110e2fa2 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 110e2fa5 jne 0x110e2fba */
  if (!C.zf) goto L_110e2fba;
  /* 110e2fa7 call 0x110e4092 */
  push32(0x110e2facu); f_110e4092();
  /* 110e2fac mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_110e2fb2:;
  /* 110e2fb2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e2fb5 jmp 0x110e3080 */
  goto L_110e3080;
L_110e2fba:;
  /* 110e2fba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e2fbe jne 0x110e2fc8 */
  if (!C.zf) goto L_110e2fc8;
  /* 110e2fc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e2fc3 jmp 0x110e3080 */
  goto L_110e3080;
L_110e2fc8:;
  /* 110e2fc8 test byte ptr [edi + 0xc], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xc)))&(0x1u); fl_logic(_r,8); }
  /* 110e2fcc je 0x110e3078 */
  if (C.zf) goto L_110e3078;
  /* 110e2fd2 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 110e2fd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110e2fd7 jne 0x110e2fe1 */
  if (!C.zf) goto L_110e2fe1;
  /* 110e2fd9 and dword ptr [ebp - 8], ecx */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(ECX); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 110e2fdc jmp 0x110e3078 */
  goto L_110e3078;
L_110e2fe1:;
  /* 110e2fe1 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e2fe3 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e2fe5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110e2fe8 mov eax, esi */
  EAX = (ESI);
  /* 110e2fea sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110e2fed lea ebx, [eax*4 + 0x110edd00] */
  EBX = ((uint32_t)(EAX*4 + 0x110edd00));
  /* 110e2ff4 mov eax, esi */
  EAX = (ESI);
  /* 110e2ff6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e2ff9 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 110e2ffc mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 110e2ffe shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 110e3001 test byte ptr [esi + eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 110e3006 je 0x110e3072 */
  if (C.zf) goto L_110e3072;
  /* 110e3008 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e300a push 0 */
  push32((uint32_t)(0x0u));
  /* 110e300c push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 110e300f call 0x110e42b4 */
  push32(0x110e3014u); f_110e42b4();
  /* 110e3014 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3017 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e301a jne 0x110e3039 */
  if (!C.zf) goto L_110e3039;
  /* 110e301c mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 110e301f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3022 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_110e3024:;
  /* 110e3024 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3026 jae 0x110e3033 */
  if (!C.cf) goto L_110e3033;
  /* 110e3028 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e302b jne 0x110e3030 */
  if (!C.zf) goto L_110e3030;
  /* 110e302d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_110e3030:;
  /* 110e3030 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e3031 jmp 0x110e3024 */
  goto L_110e3024;
L_110e3033:;
  /* 110e3033 test byte ptr [edi + 0xd], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xd)))&(0x20u); fl_logic(_r,8); }
  /* 110e3037 jmp 0x110e306d */
  goto L_110e306d;
L_110e3039:;
  /* 110e3039 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e303b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 110e303e push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 110e3041 call 0x110e42b4 */
  push32(0x110e3046u); f_110e42b4();
  /* 110e3046 mov eax, 0x200 */
  EAX = (0x200u);
  /* 110e304b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e304e cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3051 ja 0x110e3060 */
  if ((!C.cf&&!C.zf)) goto L_110e3060;
  /* 110e3053 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 110e3056 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 110e3059 je 0x110e3060 */
  if (C.zf) goto L_110e3060;
  /* 110e305b test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 110e305e je 0x110e3063 */
  if (C.zf) goto L_110e3063;
L_110e3060:;
  /* 110e3060 mov eax, dword ptr [edi + 0x18] */
  EAX = (r32((uint32_t)(EDI + 0x18)));
L_110e3063:;
  /* 110e3063 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 110e3066 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 110e3068 test byte ptr [esi + eax + 4], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x4u); fl_logic(_r,8); }
L_110e306d:;
  /* 110e306d je 0x110e3072 */
  if (C.zf) goto L_110e3072;
  /* 110e306f inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_110e3072:;
  /* 110e3072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3075 sub dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_sub(_a,_b,_r,32); }
L_110e3078:;
  /* 110e3078 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e307b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e307e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_110e3080:;
  /* 110e3080 pop edi */
  EDI = (pop32());
  /* 110e3081 pop esi */
  ESI = (pop32());
  /* 110e3082 pop ebx */
  EBX = (pop32());
  /* 110e3083 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3084 ret  */
  ESPCHK(0x110e2f24u, _esp0);
  ESP += 4; return;
}

/* FUN_10003085 @ 0x110e3085 (44 bytes, 17 insns) */
void f_110e3085(void) {
  FTRACE(0x110e3085u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3085 push ebp */
  push32((uint32_t)(EBP));
  /* 110e3086 mov ebp, esp */
  EBP = (ESP);
  /* 110e3088 push esi */
  push32((uint32_t)(ESI));
  /* 110e3089 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e308c call 0x110e35a8 */
  push32(0x110e3091u); f_110e35a8();
  /* 110e3091 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e3094 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 110e3097 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e309a call 0x110e30b1 */
  push32(0x110e309fu); f_110e30b1();
  /* 110e309f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e30a2 mov esi, eax */
  ESI = (EAX);
  /* 110e30a4 call 0x110e35fa */
  push32(0x110e30a9u); f_110e35fa();
  /* 110e30a9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e30ac mov eax, esi */
  EAX = (ESI);
  /* 110e30ae pop esi */
  ESI = (pop32());
  /* 110e30af pop ebp */
  EBP = (pop32());
  /* 110e30b0 ret  */
  ESPCHK(0x110e3085u, _esp0);
  ESP += 4; return;
}

/* FUN_100030b1 @ 0x110e30b1 (141 bytes, 55 insns) */
void f_110e30b1(void) {
  FTRACE(0x110e30b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e30b1 push esi */
  push32((uint32_t)(ESI));
  /* 110e30b2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e30b6 push edi */
  push32((uint32_t)(EDI));
  /* 110e30b7 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 110e30ba test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 110e30bc je 0x110e312d */
  if (C.zf) goto L_110e312d;
  /* 110e30be mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 110e30c2 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e30c4 je 0x110e30d0 */
  if (C.zf) goto L_110e30d0;
  /* 110e30c6 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e30c9 je 0x110e30d0 */
  if (C.zf) goto L_110e30d0;
  /* 110e30cb cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e30ce jne 0x110e312d */
  if (!C.zf) goto L_110e312d;
L_110e30d0:;
  /* 110e30d0 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 110e30d2 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e30d5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 110e30d8 jne 0x110e30e7 */
  if (!C.zf) goto L_110e30e7;
  /* 110e30da push esi */
  push32((uint32_t)(ESI));
  /* 110e30db call 0x110e2f24 */
  push32(0x110e30e0u); f_110e2f24();
  /* 110e30e0 add dword ptr [esp + 0x14], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EAX),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e30e4 pop ecx */
  ECX = (pop32());
  /* 110e30e5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_110e30e7:;
  /* 110e30e7 push esi */
  push32((uint32_t)(ESI));
  /* 110e30e8 call 0x110e3785 */
  push32(0x110e30edu); f_110e3785();
  /* 110e30ed mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 110e30f0 pop ecx */
  ECX = (pop32());
  /* 110e30f1 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 110e30f3 je 0x110e30fc */
  if (C.zf) goto L_110e30fc;
  /* 110e30f5 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 110e30f7 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 110e30fa jmp 0x110e3110 */
  goto L_110e3110;
L_110e30fc:;
  /* 110e30fc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 110e30fe je 0x110e3110 */
  if (C.zf) goto L_110e3110;
  /* 110e3100 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 110e3102 je 0x110e3110 */
  if (C.zf) goto L_110e3110;
  /* 110e3104 test ah, 4 */
  { uint32_t _r=(AH)&(0x4u); fl_logic(_r,8); }
  /* 110e3107 jne 0x110e3110 */
  if (!C.zf) goto L_110e3110;
  /* 110e3109 mov dword ptr [esi + 0x18], 0x200 */
  w32((uint32_t)(ESI + 0x18), (0x200u));
L_110e3110:;
  /* 110e3110 push edi */
  push32((uint32_t)(EDI));
  /* 110e3111 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 110e3115 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 110e3118 call 0x110e42b4 */
  push32(0x110e311du); f_110e42b4();
  /* 110e311d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3120 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e3122 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3125 setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 110e3128 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e3129 mov eax, ecx */
  EAX = (ECX);
  /* 110e312b jmp 0x110e313b */
  goto L_110e313b;
L_110e312d:;
  /* 110e312d call 0x110e4092 */
  push32(0x110e3132u); f_110e4092();
  /* 110e3132 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 110e3138 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_110e313b:;
  /* 110e313b pop edi */
  EDI = (pop32());
  /* 110e313c pop esi */
  ESI = (pop32());
  /* 110e313d ret  */
  ESPCHK(0x110e30b1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000313e @ 0x110e313e (49 bytes, 21 insns) */
void f_110e313e(void) {
  FTRACE(0x110e313eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e313e push esi */
  push32((uint32_t)(ESI));
  /* 110e313f call 0x110e44fc */
  push32(0x110e3144u); f_110e44fc();
  /* 110e3144 mov esi, eax */
  ESI = (EAX);
  /* 110e3146 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e3148 jne 0x110e314c */
  if (!C.zf) goto L_110e314c;
  /* 110e314a pop esi */
  ESI = (pop32());
  /* 110e314b ret  */
  ESPCHK(0x110e313eu, _esp0);
  ESP += 4; return;
L_110e314c:;
  /* 110e314c push edi */
  push32((uint32_t)(EDI));
  /* 110e314d push esi */
  push32((uint32_t)(ESI));
  /* 110e314e push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e3152 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e3156 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e315a call 0x110e438c */
  push32(0x110e315fu); f_110e438c();
  /* 110e315f push esi */
  push32((uint32_t)(ESI));
  /* 110e3160 mov edi, eax */
  EDI = (EAX);
  /* 110e3162 call 0x110e35fa */
  push32(0x110e3167u); f_110e35fa();
  /* 110e3167 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e316a mov eax, edi */
  EAX = (EDI);
  /* 110e316c pop edi */
  EDI = (pop32());
  /* 110e316d pop esi */
  ESI = (pop32());
  /* 110e316e ret  */
  ESPCHK(0x110e313eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000316f @ 0x110e316f (19 bytes, 6 insns) */
void f_110e316f(void) {
  FTRACE(0x110e316fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e316f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 110e3171 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 110e3175 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 110e3179 call 0x110e313e */
  push32(0x110e317eu); f_110e313e();
  /* 110e317e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3181 ret  */
  ESPCHK(0x110e316fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003182 @ 0x110e3182 (217 bytes, 57 insns) */
void f_110e3182(void) {
  FTRACE(0x110e3182u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3182 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e3186 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3189 jne 0x110e3217 */
  if (!C.zf) goto L_110e3217;
  /* 110e318f call dword ptr [0x110e9070] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9070))), 0x110e3195u);
  /* 110e3195 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e3197 mov dword ptr [0x110ed748], eax */
  w32((uint32_t)(0x110ed748), (EAX));
  /* 110e319c call 0x110e4e1b */
  push32(0x110e31a1u); f_110e4e1b();
  /* 110e31a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e31a3 pop ecx */
  ECX = (pop32());
  /* 110e31a4 je 0x110e31e2 */
  if (C.zf) goto L_110e31e2;
  /* 110e31a6 mov eax, dword ptr [0x110ed748] */
  EAX = (r32((uint32_t)(0x110ed748)));
  /* 110e31ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e31ad mov cl, byte ptr [0x110ed749] */
  CL = (r8((uint32_t)(0x110ed749)));
  /* 110e31b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e31b8 shr dword ptr [0x110ed748], 0x10 */
  w32((uint32_t)(0x110ed748), (sh_shr((uint32_t)(r32((uint32_t)(0x110ed748))), (0x10u)&0x1f, 32)));
  /* 110e31bf mov dword ptr [0x110ed750], eax */
  w32((uint32_t)(0x110ed750), (EAX));
  /* 110e31c4 mov dword ptr [0x110ed754], ecx */
  w32((uint32_t)(0x110ed754), (ECX));
  /* 110e31ca shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110e31cd add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e31cf mov dword ptr [0x110ed74c], eax */
  w32((uint32_t)(0x110ed74c), (EAX));
  /* 110e31d4 call 0x110e46e2 */
  push32(0x110e31d9u); f_110e46e2();
  /* 110e31d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e31db jne 0x110e31e6 */
  if (!C.zf) goto L_110e31e6;
  /* 110e31dd call 0x110e4e78 */
  push32(0x110e31e2u); f_110e4e78();
L_110e31e2:;
  /* 110e31e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e31e4 jmp 0x110e3258 */
  goto L_110e3258;
L_110e31e6:;
  /* 110e31e6 call dword ptr [0x110e906c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e906c))), 0x110e31ecu);
  /* 110e31ec mov dword ptr [0x110eee24], eax */
  w32((uint32_t)(0x110eee24), (EAX));
  /* 110e31f1 call 0x110e4b74 */
  push32(0x110e31f6u); f_110e4b74();
  /* 110e31f6 mov dword ptr [0x110ed730], eax */
  w32((uint32_t)(0x110ed730), (EAX));
  /* 110e31fb call 0x110e40a4 */
  push32(0x110e3200u); f_110e40a4();
  /* 110e3200 call 0x110e4927 */
  push32(0x110e3205u); f_110e4927();
  /* 110e3205 call 0x110e486e */
  push32(0x110e320au); f_110e486e();
  /* 110e320a call 0x110e45c4 */
  push32(0x110e320fu); f_110e45c4();
  /* 110e320f inc dword ptr [0x110ed72c] */
  { uint32_t _r=(r32((uint32_t)(0x110ed72c)))+1; w32((uint32_t)(0x110ed72c), (_r)); fl_inc(_r,32); }
  /* 110e3215 jmp 0x110e3255 */
  goto L_110e3255;
L_110e3217:;
  /* 110e3217 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e3219 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e321b jne 0x110e3249 */
  if (!C.zf) goto L_110e3249;
  /* 110e321d cmp dword ptr [0x110ed72c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x110ed72c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3223 jle 0x110e31e2 */
  if ((C.zf||C.sf!=C.of)) goto L_110e31e2;
  /* 110e3225 dec dword ptr [0x110ed72c] */
  { uint32_t _r=(r32((uint32_t)(0x110ed72c)))-1; w32((uint32_t)(0x110ed72c), (_r)); fl_dec(_r,32); }
  /* 110e322b cmp dword ptr [0x110ed780], ecx */
  { uint32_t _a=(r32((uint32_t)(0x110ed780))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3231 jne 0x110e3238 */
  if (!C.zf) goto L_110e3238;
  /* 110e3233 call 0x110e4602 */
  push32(0x110e3238u); f_110e4602();
L_110e3238:;
  /* 110e3238 call 0x110e4260 */
  push32(0x110e323du); f_110e4260();
  /* 110e323d call 0x110e4736 */
  push32(0x110e3242u); f_110e4736();
  /* 110e3242 call 0x110e4e78 */
  push32(0x110e3247u); f_110e4e78();
  /* 110e3247 jmp 0x110e3255 */
  goto L_110e3255;
L_110e3249:;
  /* 110e3249 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e324c jne 0x110e3255 */
  if (!C.zf) goto L_110e3255;
  /* 110e324e push ecx */
  push32((uint32_t)(ECX));
  /* 110e324f call 0x110e47ce */
  push32(0x110e3254u); f_110e47ce();
  /* 110e3254 pop ecx */
  ECX = (pop32());
L_110e3255:;
  /* 110e3255 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e3257 pop eax */
  EAX = (pop32());
L_110e3258:;
  /* 110e3258 ret 0xc */
  ESPCHK(0x110e3182u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x110e325b (157 bytes, 73 insns) */
void f_110e325b(void) {
  FTRACE(0x110e325bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e325b push ebp */
  push32((uint32_t)(EBP));
  /* 110e325c mov ebp, esp */
  EBP = (ESP);
  /* 110e325e push ebx */
  push32((uint32_t)(EBX));
  /* 110e325f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3262 push esi */
  push32((uint32_t)(ESI));
  /* 110e3263 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e3266 push edi */
  push32((uint32_t)(EDI));
  /* 110e3267 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 110e326a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e326c jne 0x110e3277 */
  if (!C.zf) goto L_110e3277;
  /* 110e326e cmp dword ptr [0x110ed72c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110ed72c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3275 jmp 0x110e329d */
  goto L_110e329d;
L_110e3277:;
  /* 110e3277 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e327a je 0x110e3281 */
  if (C.zf) goto L_110e3281;
  /* 110e327c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e327f jne 0x110e32a3 */
  if (!C.zf) goto L_110e32a3;
L_110e3281:;
  /* 110e3281 mov eax, dword ptr [0x110eee28] */
  EAX = (r32((uint32_t)(0x110eee28)));
  /* 110e3286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3288 je 0x110e3293 */
  if (C.zf) goto L_110e3293;
  /* 110e328a push edi */
  push32((uint32_t)(EDI));
  /* 110e328b push esi */
  push32((uint32_t)(ESI));
  /* 110e328c push ebx */
  push32((uint32_t)(EBX));
  /* 110e328d call eax */
  call_ind((uint32_t)(EAX), 0x110e328fu);
  /* 110e328f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3291 je 0x110e329f */
  if (C.zf) goto L_110e329f;
L_110e3293:;
  /* 110e3293 push edi */
  push32((uint32_t)(EDI));
  /* 110e3294 push esi */
  push32((uint32_t)(ESI));
  /* 110e3295 push ebx */
  push32((uint32_t)(EBX));
  /* 110e3296 call 0x110e3182 */
  push32(0x110e329bu); f_110e3182();
  /* 110e329b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_110e329d:;
  /* 110e329d jne 0x110e32a3 */
  if (!C.zf) goto L_110e32a3;
L_110e329f:;
  /* 110e329f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e32a1 jmp 0x110e32f1 */
  goto L_110e32f1;
L_110e32a3:;
  /* 110e32a3 push edi */
  push32((uint32_t)(EDI));
  /* 110e32a4 push esi */
  push32((uint32_t)(ESI));
  /* 110e32a5 push ebx */
  push32((uint32_t)(EBX));
  /* 110e32a6 call 0x110e1000 */
  push32(0x110e32abu); f_110e1000();
  /* 110e32ab cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e32ae mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 110e32b1 jne 0x110e32bf */
  if (!C.zf) goto L_110e32bf;
  /* 110e32b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e32b5 jne 0x110e32ee */
  if (!C.zf) goto L_110e32ee;
  /* 110e32b7 push edi */
  push32((uint32_t)(EDI));
  /* 110e32b8 push eax */
  push32((uint32_t)(EAX));
  /* 110e32b9 push ebx */
  push32((uint32_t)(EBX));
  /* 110e32ba call 0x110e3182 */
  push32(0x110e32bfu); f_110e3182();
L_110e32bf:;
  /* 110e32bf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e32c1 je 0x110e32c8 */
  if (C.zf) goto L_110e32c8;
  /* 110e32c3 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e32c6 jne 0x110e32ee */
  if (!C.zf) goto L_110e32ee;
L_110e32c8:;
  /* 110e32c8 push edi */
  push32((uint32_t)(EDI));
  /* 110e32c9 push esi */
  push32((uint32_t)(ESI));
  /* 110e32ca push ebx */
  push32((uint32_t)(EBX));
  /* 110e32cb call 0x110e3182 */
  push32(0x110e32d0u); f_110e3182();
  /* 110e32d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e32d2 jne 0x110e32d7 */
  if (!C.zf) goto L_110e32d7;
  /* 110e32d4 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_110e32d7:;
  /* 110e32d7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e32db je 0x110e32ee */
  if (C.zf) goto L_110e32ee;
  /* 110e32dd mov eax, dword ptr [0x110eee28] */
  EAX = (r32((uint32_t)(0x110eee28)));
  /* 110e32e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e32e4 je 0x110e32ee */
  if (C.zf) goto L_110e32ee;
  /* 110e32e6 push edi */
  push32((uint32_t)(EDI));
  /* 110e32e7 push esi */
  push32((uint32_t)(ESI));
  /* 110e32e8 push ebx */
  push32((uint32_t)(EBX));
  /* 110e32e9 call eax */
  call_ind((uint32_t)(EAX), 0x110e32ebu);
  /* 110e32eb mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_110e32ee:;
  /* 110e32ee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_110e32f1:;
  /* 110e32f1 pop edi */
  EDI = (pop32());
  /* 110e32f2 pop esi */
  ESI = (pop32());
  /* 110e32f3 pop ebx */
  EBX = (pop32());
  /* 110e32f4 pop ebp */
  EBP = (pop32());
  /* 110e32f5 ret 0xc */
  ESPCHK(0x110e325bu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x110e32f8 (48 bytes, 15 insns) */
void f_110e32f8(void) {
  FTRACE(0x110e32f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e32f8 mov eax, dword ptr [0x110ed738] */
  EAX = (r32((uint32_t)(0x110ed738)));
  /* 110e32fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3300 je 0x110e330f */
  if (C.zf) goto L_110e330f;
  /* 110e3302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3304 jne 0x110e3314 */
  if (!C.zf) goto L_110e3314;
  /* 110e3306 cmp dword ptr [0x110ed73c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110ed73c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e330d jne 0x110e3314 */
  if (!C.zf) goto L_110e3314;
L_110e330f:;
  /* 110e330f call 0x110e4f20 */
  push32(0x110e3314u); f_110e4f20();
L_110e3314:;
  /* 110e3314 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 110e3318 call 0x110e4f59 */
  push32(0x110e331du); f_110e4f59();
  /* 110e331d push 0xff */
  push32((uint32_t)(0xffu));
  /* 110e3322 call dword ptr [0x110ea340] */
  call_ind((uint32_t)(r32((uint32_t)(0x110ea340))), 0x110e3328u);
  /* 110e3328 pop ecx */
  ECX = (pop32());
  /* 110e3329 pop ecx */
  ECX = (pop32());
  /* 110e332a ret  */
  ESPCHK(0x110e32f8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000332b @ 0x110e332b (215 bytes, 75 insns) */
void f_110e332b(void) {
  FTRACE(0x110e332bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e332b push ebp */
  push32((uint32_t)(EBP));
  /* 110e332c mov ebp, esp */
  EBP = (ESP);
  /* 110e332e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110e3330 push 0x110e9190 */
  push32((uint32_t)(0x110e9190u));
  /* 110e3335 push 0x110e6124 */
  push32((uint32_t)(0x110e6124u));
  /* 110e333a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110e3340 push eax */
  push32((uint32_t)(EAX));
  /* 110e3341 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110e3348 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e334b push ebx */
  push32((uint32_t)(EBX));
  /* 110e334c push esi */
  push32((uint32_t)(ESI));
  /* 110e334d push edi */
  push32((uint32_t)(EDI));
  /* 110e334e mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3351 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e3353 je 0x110e3405 */
  if (C.zf) { jmp_ind(0x110e3405u); return; }
  /* 110e3359 mov eax, dword ptr [0x110edce8] */
  EAX = (r32((uint32_t)(0x110edce8)));
  /* 110e335e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3361 jne 0x110e339e */
  if (!C.zf) goto L_110e339e;
  /* 110e3363 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e3365 call 0x110e5fb6 */
  push32(0x110e336au); f_110e5fb6();
  /* 110e336a pop ecx */
  ECX = (pop32());
  /* 110e336b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e336f push esi */
  push32((uint32_t)(ESI));
  /* 110e3370 call 0x110e50f4 */
  push32(0x110e3375u); f_110e50f4();
  /* 110e3375 pop ecx */
  ECX = (pop32());
  /* 110e3376 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 110e3379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e337b je 0x110e3386 */
  if (C.zf) goto L_110e3386;
  /* 110e337d push esi */
  push32((uint32_t)(ESI));
  /* 110e337e push eax */
  push32((uint32_t)(EAX));
  /* 110e337f call 0x110e511f */
  push32(0x110e3384u); f_110e511f();
  /* 110e3384 pop ecx */
  ECX = (pop32());
  /* 110e3385 pop ecx */
  ECX = (pop32());
L_110e3386:;
  /* 110e3386 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e338a call 0x110e3395 */
  push32(0x110e338fu); f_110e3395();
  /* 110e338f cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3393 jmp 0x110e33e6 */
  goto L_110e33e6;
  /* 110e3395 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e3397 call 0x110e6017 */
  push32(0x110e339cu); f_110e6017();
  /* 110e339c pop ecx */
  ECX = (pop32());
  /* 110e339d ret  */
  ESPCHK(0x110e332bu, _esp0);
  ESP += 4; return;
L_110e339e:;
  /* 110e339e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e33a1 jne 0x110e33f6 */
  if (!C.zf) goto L_110e33f6;
  /* 110e33a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e33a5 call 0x110e5fb6 */
  push32(0x110e33aau); f_110e5fb6();
  /* 110e33aa pop ecx */
  ECX = (pop32());
  /* 110e33ab mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110e33b2 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 110e33b5 push eax */
  push32((uint32_t)(EAX));
  /* 110e33b6 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 110e33b9 push eax */
  push32((uint32_t)(EAX));
  /* 110e33ba push esi */
  push32((uint32_t)(ESI));
  /* 110e33bb call 0x110e5b59 */
  push32(0x110e33c0u); f_110e5b59();
  /* 110e33c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e33c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 110e33c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e33c8 je 0x110e33d9 */
  if (C.zf) goto L_110e33d9;
  /* 110e33ca push eax */
  push32((uint32_t)(EAX));
  /* 110e33cb push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 110e33ce push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 110e33d1 call 0x110e5bb0 */
  push32(0x110e33d6u); f_110e5bb0();
  /* 110e33d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e33d9:;
  /* 110e33d9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e33dd call 0x110e33ed */
  push32(0x110e33e2u); f_110e33ed();
  /* 110e33e2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_110e33e6:;
  /* 110e33e6 jne 0x110e3405 */
  if (!C.zf) { jmp_ind(0x110e3405u); return; }
  /* 110e33e8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e33eb jmp 0x110e33f7 */
  goto L_110e33f7;
  /* 110e33ed push 9 */
  push32((uint32_t)(0x9u));
  /* 110e33ef call 0x110e6017 */
  push32(0x110e33f4u); f_110e6017();
  /* 110e33f4 pop ecx */
  ECX = (pop32());
  /* 110e33f5 ret  */
  ESPCHK(0x110e332bu, _esp0);
  ESP += 4; return;
L_110e33f6:;
  /* 110e33f6 push esi */
  push32((uint32_t)(ESI));
L_110e33f7:;
  /* 110e33f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e33f9 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
}

/* FUN_10003395 @ 0x110e3395 (9 bytes, 4 insns) */
void f_110e3395(void) {
  FTRACE(0x110e3395u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3395 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e3397 call 0x110e6017 */
  push32(0x110e339cu); f_110e6017();
  /* 110e339c pop ecx */
  ECX = (pop32());
  /* 110e339d ret  */
  ESPCHK(0x110e3395u, _esp0);
  ESP += 4; return;
}

/* FUN_100033ed @ 0x110e33ed (9 bytes, 4 insns) */
void f_110e33ed(void) {
  FTRACE(0x110e33edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e33ed push 9 */
  push32((uint32_t)(0x9u));
  /* 110e33ef call 0x110e6017 */
  push32(0x110e33f4u); f_110e6017();
  /* 110e33f4 pop ecx */
  ECX = (pop32());
  /* 110e33f5 ret  */
  ESPCHK(0x110e33edu, _esp0);
  ESP += 4; return;
}

/* FUN_10003430 @ 0x110e3430 (188 bytes, 86 insns) */
void f_110e3430(void) {
  FTRACE(0x110e3430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3430 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e3432 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 110e3436 push ebx */
  push32((uint32_t)(EBX));
  /* 110e3437 mov ebx, eax */
  EBX = (EAX);
  /* 110e3439 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 110e343c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e3440 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 110e3446 je 0x110e345b */
  if (C.zf) goto L_110e345b;
L_110e3448:;
  /* 110e3448 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 110e344a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110e344b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e344d je 0x110e3420 */
  if (C.zf) { jmp_ind(0x110e3420u); return; }
  /* 110e344f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 110e3451 je 0x110e34a4 */
  if (C.zf) goto L_110e34a4;
  /* 110e3453 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 110e3459 jne 0x110e3448 */
  if (!C.zf) goto L_110e3448;
L_110e345b:;
  /* 110e345b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 110e345d push edi */
  push32((uint32_t)(EDI));
  /* 110e345e mov eax, ebx */
  EAX = (EBX);
  /* 110e3460 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 110e3463 push esi */
  push32((uint32_t)(ESI));
  /* 110e3464 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_110e3466:;
  /* 110e3466 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 110e3468 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 110e346d mov eax, ecx */
  EAX = (ECX);
  /* 110e346f mov esi, edi */
  ESI = (EDI);
  /* 110e3471 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 110e3473 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3475 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3477 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110e347a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e347d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 110e347f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 110e3481 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3484 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 110e348a jne 0x110e34a8 */
  if (!C.zf) goto L_110e34a8;
  /* 110e348c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 110e3491 je 0x110e3466 */
  if (C.zf) goto L_110e3466;
  /* 110e3493 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 110e3498 jne 0x110e34a2 */
  if (!C.zf) goto L_110e34a2;
  /* 110e349a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 110e34a0 jne 0x110e3466 */
  if (!C.zf) goto L_110e3466;
L_110e34a2:;
  /* 110e34a2 pop esi */
  ESI = (pop32());
  /* 110e34a3 pop edi */
  EDI = (pop32());
L_110e34a4:;
  /* 110e34a4 pop ebx */
  EBX = (pop32());
  /* 110e34a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e34a7 ret  */
  ESPCHK(0x110e3430u, _esp0);
  ESP += 4; return;
L_110e34a8:;
  /* 110e34a8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 110e34ab cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e34ad je 0x110e34e5 */
  if (C.zf) goto L_110e34e5;
  /* 110e34af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e34b1 je 0x110e34a2 */
  if (C.zf) goto L_110e34a2;
  /* 110e34b3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e34b5 je 0x110e34de */
  if (C.zf) goto L_110e34de;
  /* 110e34b7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110e34b9 je 0x110e34a2 */
  if (C.zf) goto L_110e34a2;
  /* 110e34bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 110e34be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e34c0 je 0x110e34d7 */
  if (C.zf) goto L_110e34d7;
  /* 110e34c2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e34c4 je 0x110e34a2 */
  if (C.zf) goto L_110e34a2;
  /* 110e34c6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e34c8 je 0x110e34d0 */
  if (C.zf) goto L_110e34d0;
  /* 110e34ca test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 110e34cc je 0x110e34a2 */
  if (C.zf) goto L_110e34a2;
  /* 110e34ce jmp 0x110e3466 */
  goto L_110e3466;
L_110e34d0:;
  /* 110e34d0 pop esi */
  ESI = (pop32());
  /* 110e34d1 pop edi */
  EDI = (pop32());
  /* 110e34d2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 110e34d5 pop ebx */
  EBX = (pop32());
  /* 110e34d6 ret  */
  ESPCHK(0x110e3430u, _esp0);
  ESP += 4; return;
L_110e34d7:;
  /* 110e34d7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 110e34da pop esi */
  ESI = (pop32());
  /* 110e34db pop edi */
  EDI = (pop32());
  /* 110e34dc pop ebx */
  EBX = (pop32());
  /* 110e34dd ret  */
  ESPCHK(0x110e3430u, _esp0);
  ESP += 4; return;
L_110e34de:;
  /* 110e34de lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 110e34e1 pop esi */
  ESI = (pop32());
  /* 110e34e2 pop edi */
  EDI = (pop32());
  /* 110e34e3 pop ebx */
  EBX = (pop32());
  /* 110e34e4 ret  */
  ESPCHK(0x110e3430u, _esp0);
  ESP += 4; return;
L_110e34e5:;
  /* 110e34e5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 110e34e8 pop esi */
  ESI = (pop32());
  /* 110e34e9 pop edi */
  EDI = (pop32());
  /* 110e34ea pop ebx */
  EBX = (pop32());
  /* 110e34eb ret  */
  ESPCHK(0x110e3430u, _esp0);
  ESP += 4; return;
}

/* FUN_100035a8 @ 0x110e35a8 (47 bytes, 17 insns) */
void f_110e35a8(void) {
  FTRACE(0x110e35a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e35a8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e35ac mov ecx, 0x110ea350 */
  ECX = (0x110ea350u);
  /* 110e35b1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e35b3 jb 0x110e35cc */
  if (C.cf) goto L_110e35cc;
  /* 110e35b5 cmp eax, 0x110ea5b0 */
  { uint32_t _a=(EAX),_b=(0x110ea5b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e35ba ja 0x110e35cc */
  if ((!C.cf&&!C.zf)) goto L_110e35cc;
  /* 110e35bc sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e35be sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110e35c1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e35c4 push eax */
  push32((uint32_t)(EAX));
  /* 110e35c5 call 0x110e5fb6 */
  push32(0x110e35cau); f_110e5fb6();
  /* 110e35ca pop ecx */
  ECX = (pop32());
  /* 110e35cb ret  */
  ESPCHK(0x110e35a8u, _esp0);
  ESP += 4; return;
L_110e35cc:;
  /* 110e35cc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e35cf push eax */
  push32((uint32_t)(EAX));
  /* 110e35d0 call dword ptr [0x110e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9078))), 0x110e35d6u);
  /* 110e35d6 ret  */
  ESPCHK(0x110e35a8u, _esp0);
  ESP += 4; return;
}

/* FUN_100035d7 @ 0x110e35d7 (35 bytes, 13 insns) */
void f_110e35d7(void) {
  FTRACE(0x110e35d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e35d7 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e35db cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e35de jge 0x110e35eb */
  if ((C.sf==C.of)) goto L_110e35eb;
  /* 110e35e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e35e3 push eax */
  push32((uint32_t)(EAX));
  /* 110e35e4 call 0x110e5fb6 */
  push32(0x110e35e9u); f_110e5fb6();
  /* 110e35e9 pop ecx */
  ECX = (pop32());
  /* 110e35ea ret  */
  ESPCHK(0x110e35d7u, _esp0);
  ESP += 4; return;
L_110e35eb:;
  /* 110e35eb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e35ef add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e35f2 push eax */
  push32((uint32_t)(EAX));
  /* 110e35f3 call dword ptr [0x110e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9078))), 0x110e35f9u);
  /* 110e35f9 ret  */
  ESPCHK(0x110e35d7u, _esp0);
  ESP += 4; return;
}

/* FUN_100035fa @ 0x110e35fa (47 bytes, 17 insns) */
void f_110e35fa(void) {
  FTRACE(0x110e35fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e35fa mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e35fe mov ecx, 0x110ea350 */
  ECX = (0x110ea350u);
  /* 110e3603 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3605 jb 0x110e361e */
  if (C.cf) goto L_110e361e;
  /* 110e3607 cmp eax, 0x110ea5b0 */
  { uint32_t _a=(EAX),_b=(0x110ea5b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e360c ja 0x110e361e */
  if ((!C.cf&&!C.zf)) goto L_110e361e;
  /* 110e360e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3610 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110e3613 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3616 push eax */
  push32((uint32_t)(EAX));
  /* 110e3617 call 0x110e6017 */
  push32(0x110e361cu); f_110e6017();
  /* 110e361c pop ecx */
  ECX = (pop32());
  /* 110e361d ret  */
  ESPCHK(0x110e35fau, _esp0);
  ESP += 4; return;
L_110e361e:;
  /* 110e361e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3621 push eax */
  push32((uint32_t)(EAX));
  /* 110e3622 call dword ptr [0x110e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e907c))), 0x110e3628u);
  /* 110e3628 ret  */
  ESPCHK(0x110e35fau, _esp0);
  ESP += 4; return;
}

/* FUN_10003629 @ 0x110e3629 (35 bytes, 13 insns) */
void f_110e3629(void) {
  FTRACE(0x110e3629u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3629 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e362d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3630 jge 0x110e363d */
  if ((C.sf==C.of)) goto L_110e363d;
  /* 110e3632 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3635 push eax */
  push32((uint32_t)(EAX));
  /* 110e3636 call 0x110e6017 */
  push32(0x110e363bu); f_110e6017();
  /* 110e363b pop ecx */
  ECX = (pop32());
  /* 110e363c ret  */
  ESPCHK(0x110e3629u, _esp0);
  ESP += 4; return;
L_110e363d:;
  /* 110e363d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e3641 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3644 push eax */
  push32((uint32_t)(EAX));
  /* 110e3645 call dword ptr [0x110e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e907c))), 0x110e364bu);
  /* 110e364b ret  */
  ESPCHK(0x110e3629u, _esp0);
  ESP += 4; return;
}

/* FUN_1000364c @ 0x110e364c (93 bytes, 32 insns) */
void f_110e364c(void) {
  FTRACE(0x110e364cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e364c push esi */
  push32((uint32_t)(ESI));
  /* 110e364d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e3651 cmp esi, dword ptr [0x110ede00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110ede00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3657 jae 0x110e3691 */
  if (!C.cf) goto L_110e3691;
  /* 110e3659 mov ecx, esi */
  ECX = (ESI);
  /* 110e365b mov eax, esi */
  EAX = (ESI);
  /* 110e365d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e3660 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e3663 mov ecx, dword ptr [ecx*4 + 0x110edd00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e366a lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110e366d test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e3672 je 0x110e3691 */
  if (C.zf) goto L_110e3691;
  /* 110e3674 push edi */
  push32((uint32_t)(EDI));
  /* 110e3675 push esi */
  push32((uint32_t)(ESI));
  /* 110e3676 call 0x110e661a */
  push32(0x110e367bu); f_110e661a();
  /* 110e367b push esi */
  push32((uint32_t)(ESI));
  /* 110e367c call 0x110e36a9 */
  push32(0x110e3681u); f_110e36a9();
  /* 110e3681 push esi */
  push32((uint32_t)(ESI));
  /* 110e3682 mov edi, eax */
  EDI = (EAX);
  /* 110e3684 call 0x110e6679 */
  push32(0x110e3689u); f_110e6679();
  /* 110e3689 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e368c mov eax, edi */
  EAX = (EDI);
  /* 110e368e pop edi */
  EDI = (pop32());
  /* 110e368f pop esi */
  ESI = (pop32());
  /* 110e3690 ret  */
  ESPCHK(0x110e364cu, _esp0);
  ESP += 4; return;
L_110e3691:;
  /* 110e3691 call 0x110e4092 */
  push32(0x110e3696u); f_110e4092();
  /* 110e3696 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e369c call 0x110e409b */
  push32(0x110e36a1u); f_110e409b();
  /* 110e36a1 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e36a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e36a7 pop esi */
  ESI = (pop32());
  /* 110e36a8 ret  */
  ESPCHK(0x110e364cu, _esp0);
  ESP += 4; return;
}

/* FUN_100036a9 @ 0x110e36a9 (131 bytes, 52 insns) */
void f_110e36a9(void) {
  FTRACE(0x110e36a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e36a9 push esi */
  push32((uint32_t)(ESI));
  /* 110e36aa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e36ae push edi */
  push32((uint32_t)(EDI));
  /* 110e36af push esi */
  push32((uint32_t)(ESI));
  /* 110e36b0 call 0x110e65d8 */
  push32(0x110e36b5u); f_110e65d8();
  /* 110e36b5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e36b8 pop ecx */
  ECX = (pop32());
  /* 110e36b9 je 0x110e36f7 */
  if (C.zf) goto L_110e36f7;
  /* 110e36bb cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e36be je 0x110e36c5 */
  if (C.zf) goto L_110e36c5;
  /* 110e36c0 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e36c3 jne 0x110e36db */
  if (!C.zf) goto L_110e36db;
L_110e36c5:;
  /* 110e36c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e36c7 call 0x110e65d8 */
  push32(0x110e36ccu); f_110e65d8();
  /* 110e36cc push 1 */
  push32((uint32_t)(0x1u));
  /* 110e36ce mov edi, eax */
  EDI = (EAX);
  /* 110e36d0 call 0x110e65d8 */
  push32(0x110e36d5u); f_110e65d8();
  /* 110e36d5 pop ecx */
  ECX = (pop32());
  /* 110e36d6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e36d8 pop ecx */
  ECX = (pop32());
  /* 110e36d9 je 0x110e36f7 */
  if (C.zf) goto L_110e36f7;
L_110e36db:;
  /* 110e36db push esi */
  push32((uint32_t)(ESI));
  /* 110e36dc call 0x110e65d8 */
  push32(0x110e36e1u); f_110e65d8();
  /* 110e36e1 pop ecx */
  ECX = (pop32());
  /* 110e36e2 push eax */
  push32((uint32_t)(EAX));
  /* 110e36e3 call dword ptr [0x110e9084] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9084))), 0x110e36e9u);
  /* 110e36e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e36eb jne 0x110e36f7 */
  if (!C.zf) goto L_110e36f7;
  /* 110e36ed call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e36f3u);
  /* 110e36f3 mov edi, eax */
  EDI = (EAX);
  /* 110e36f5 jmp 0x110e36f9 */
  goto L_110e36f9;
L_110e36f7:;
  /* 110e36f7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_110e36f9:;
  /* 110e36f9 push esi */
  push32((uint32_t)(ESI));
  /* 110e36fa call 0x110e6559 */
  push32(0x110e36ffu); f_110e6559();
  /* 110e36ff mov eax, esi */
  EAX = (ESI);
  /* 110e3701 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 110e3704 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 110e3707 pop ecx */
  ECX = (pop32());
  /* 110e3708 mov eax, dword ptr [eax*4 + 0x110edd00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x110edd00)));
  /* 110e370f lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 110e3712 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 110e3717 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e3719 je 0x110e3727 */
  if (C.zf) goto L_110e3727;
  /* 110e371b push edi */
  push32((uint32_t)(EDI));
  /* 110e371c call 0x110e401f */
  push32(0x110e3721u); f_110e401f();
  /* 110e3721 pop ecx */
  ECX = (pop32());
  /* 110e3722 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e3725 jmp 0x110e3729 */
  goto L_110e3729;
L_110e3727:;
  /* 110e3727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e3729:;
  /* 110e3729 pop edi */
  EDI = (pop32());
  /* 110e372a pop esi */
  ESI = (pop32());
  /* 110e372b ret  */
  ESPCHK(0x110e36a9u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x110e372c (43 bytes, 17 insns) */
void f_110e372c(void) {
  FTRACE(0x110e372cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e372c push esi */
  push32((uint32_t)(ESI));
  /* 110e372d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e3731 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 110e3734 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 110e3736 je 0x110e3755 */
  if (C.zf) goto L_110e3755;
  /* 110e3738 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 110e373a je 0x110e3755 */
  if (C.zf) goto L_110e3755;
  /* 110e373c push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 110e373f call 0x110e332b */
  push32(0x110e3744u); f_110e332b();
  /* 110e3744 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 110e374a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e374c pop ecx */
  ECX = (pop32());
  /* 110e374d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110e374f mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 110e3752 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_110e3755:;
  /* 110e3755 pop esi */
  ESI = (pop32());
  /* 110e3756 ret  */
  ESPCHK(0x110e372cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003757 @ 0x110e3757 (46 bytes, 22 insns) */
void f_110e3757(void) {
  FTRACE(0x110e3757u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3757 push esi */
  push32((uint32_t)(ESI));
  /* 110e3758 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e375c push esi */
  push32((uint32_t)(ESI));
  /* 110e375d call 0x110e3785 */
  push32(0x110e3762u); f_110e3785();
  /* 110e3762 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3764 pop ecx */
  ECX = (pop32());
  /* 110e3765 je 0x110e376c */
  if (C.zf) goto L_110e376c;
  /* 110e3767 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e376a pop esi */
  ESI = (pop32());
  /* 110e376b ret  */
  ESPCHK(0x110e3757u, _esp0);
  ESP += 4; return;
L_110e376c:;
  /* 110e376c test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 110e3770 je 0x110e3781 */
  if (C.zf) goto L_110e3781;
  /* 110e3772 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 110e3775 call 0x110e669b */
  push32(0x110e377au); f_110e669b();
  /* 110e377a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e377c pop ecx */
  ECX = (pop32());
  /* 110e377d pop esi */
  ESI = (pop32());
  /* 110e377e sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3780 ret  */
  ESPCHK(0x110e3757u, _esp0);
  ESP += 4; return;
L_110e3781:;
  /* 110e3781 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e3783 pop esi */
  ESI = (pop32());
  /* 110e3784 ret  */
  ESPCHK(0x110e3757u, _esp0);
  ESP += 4; return;
}

/* FUN_10003785 @ 0x110e3785 (92 bytes, 40 insns) */
void f_110e3785(void) {
  FTRACE(0x110e3785u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3785 push ebx */
  push32((uint32_t)(EBX));
  /* 110e3786 push esi */
  push32((uint32_t)(ESI));
  /* 110e3787 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 110e378b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e378d push edi */
  push32((uint32_t)(EDI));
  /* 110e378e mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 110e3791 mov ecx, eax */
  ECX = (EAX);
  /* 110e3793 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 110e3796 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3799 jne 0x110e37d2 */
  if (!C.zf) goto L_110e37d2;
  /* 110e379b test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 110e379f je 0x110e37d2 */
  if (C.zf) goto L_110e37d2;
  /* 110e37a1 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 110e37a4 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 110e37a6 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e37a8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e37aa jle 0x110e37d2 */
  if ((C.zf||C.sf!=C.of)) goto L_110e37d2;
  /* 110e37ac push edi */
  push32((uint32_t)(EDI));
  /* 110e37ad push eax */
  push32((uint32_t)(EAX));
  /* 110e37ae push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 110e37b1 call 0x110e672e */
  push32(0x110e37b6u); f_110e672e();
  /* 110e37b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e37b9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e37bb jne 0x110e37cb */
  if (!C.zf) goto L_110e37cb;
  /* 110e37bd mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 110e37c0 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 110e37c2 je 0x110e37d2 */
  if (C.zf) goto L_110e37d2;
  /* 110e37c4 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 110e37c6 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 110e37c9 jmp 0x110e37d2 */
  goto L_110e37d2;
L_110e37cb:;
  /* 110e37cb or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 110e37cf or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_110e37d2:;
  /* 110e37d2 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 110e37d5 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 110e37d9 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110e37db pop edi */
  EDI = (pop32());
  /* 110e37dc mov eax, ebx */
  EAX = (EBX);
  /* 110e37de pop esi */
  ESI = (pop32());
  /* 110e37df pop ebx */
  EBX = (pop32());
  /* 110e37e0 ret  */
  ESPCHK(0x110e3785u, _esp0);
  ESP += 4; return;
}

/* FUN_100037ea @ 0x110e37ea (164 bytes, 66 insns) */
void f_110e37ea(void) {
  FTRACE(0x110e37eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e37ea push ebx */
  push32((uint32_t)(EBX));
  /* 110e37eb push esi */
  push32((uint32_t)(ESI));
  /* 110e37ec push edi */
  push32((uint32_t)(EDI));
  /* 110e37ed push 2 */
  push32((uint32_t)(0x2u));
  /* 110e37ef xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e37f1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e37f3 call 0x110e5fb6 */
  push32(0x110e37f8u); f_110e5fb6();
  /* 110e37f8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e37fa pop ecx */
  ECX = (pop32());
  /* 110e37fb cmp dword ptr [0x110eee20], esi */
  { uint32_t _a=(r32((uint32_t)(0x110eee20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3801 jle 0x110e3877 */
  if ((C.zf||C.sf!=C.of)) goto L_110e3877;
L_110e3803:;
  /* 110e3803 mov eax, dword ptr [0x110ede04] */
  EAX = (r32((uint32_t)(0x110ede04)));
  /* 110e3808 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 110e380b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e380d je 0x110e386e */
  if (C.zf) goto L_110e386e;
  /* 110e380f test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 110e3813 je 0x110e386e */
  if (C.zf) goto L_110e386e;
  /* 110e3815 push eax */
  push32((uint32_t)(EAX));
  /* 110e3816 push esi */
  push32((uint32_t)(ESI));
  /* 110e3817 call 0x110e35d7 */
  push32(0x110e381cu); f_110e35d7();
  /* 110e381c mov eax, dword ptr [0x110ede04] */
  EAX = (r32((uint32_t)(0x110ede04)));
  /* 110e3821 pop ecx */
  ECX = (pop32());
  /* 110e3822 pop ecx */
  ECX = (pop32());
  /* 110e3823 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 110e3826 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 110e3829 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 110e382c je 0x110e385e */
  if (C.zf) goto L_110e385e;
  /* 110e382e cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3833 jne 0x110e3844 */
  if (!C.zf) goto L_110e3844;
  /* 110e3835 push eax */
  push32((uint32_t)(EAX));
  /* 110e3836 call 0x110e3757 */
  push32(0x110e383bu); f_110e3757();
  /* 110e383b cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e383e pop ecx */
  ECX = (pop32());
  /* 110e383f je 0x110e385e */
  if (C.zf) goto L_110e385e;
  /* 110e3841 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e3842 jmp 0x110e385e */
  goto L_110e385e;
L_110e3844:;
  /* 110e3844 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3849 jne 0x110e385e */
  if (!C.zf) goto L_110e385e;
  /* 110e384b test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 110e384e je 0x110e385e */
  if (C.zf) goto L_110e385e;
  /* 110e3850 push eax */
  push32((uint32_t)(EAX));
  /* 110e3851 call 0x110e3757 */
  push32(0x110e3856u); f_110e3757();
  /* 110e3856 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3859 pop ecx */
  ECX = (pop32());
  /* 110e385a jne 0x110e385e */
  if (!C.zf) goto L_110e385e;
  /* 110e385c or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_110e385e:;
  /* 110e385e mov eax, dword ptr [0x110ede04] */
  EAX = (r32((uint32_t)(0x110ede04)));
  /* 110e3863 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 110e3866 push esi */
  push32((uint32_t)(ESI));
  /* 110e3867 call 0x110e3629 */
  push32(0x110e386cu); f_110e3629();
  /* 110e386c pop ecx */
  ECX = (pop32());
  /* 110e386d pop ecx */
  ECX = (pop32());
L_110e386e:;
  /* 110e386e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e386f cmp esi, dword ptr [0x110eee20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110eee20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3875 jl 0x110e3803 */
  if ((C.sf!=C.of)) goto L_110e3803;
L_110e3877:;
  /* 110e3877 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e3879 call 0x110e6017 */
  push32(0x110e387eu); f_110e6017();
  /* 110e387e cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3883 pop ecx */
  ECX = (pop32());
  /* 110e3884 mov eax, ebx */
  EAX = (EBX);
  /* 110e3886 je 0x110e388a */
  if (C.zf) goto L_110e388a;
  /* 110e3888 mov eax, edi */
  EAX = (EDI);
L_110e388a:;
  /* 110e388a pop edi */
  EDI = (pop32());
  /* 110e388b pop esi */
  ESI = (pop32());
  /* 110e388c pop ebx */
  EBX = (pop32());
  /* 110e388d ret  */
  ESPCHK(0x110e37eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000388e @ 0x110e388e (220 bytes, 79 insns) */
void f_110e388e(void) {
  FTRACE(0x110e388eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e388e push esi */
  push32((uint32_t)(ESI));
  /* 110e388f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e3893 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 110e3896 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 110e3898 je 0x110e3965 */
  if (C.zf) goto L_110e3965;
  /* 110e389e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 110e38a0 jne 0x110e3965 */
  if (!C.zf) goto L_110e3965;
  /* 110e38a6 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 110e38a8 je 0x110e38b4 */
  if (C.zf) goto L_110e38b4;
  /* 110e38aa or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 110e38ac mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 110e38af jmp 0x110e3965 */
  goto L_110e3965;
L_110e38b4:;
  /* 110e38b4 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 110e38b6 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 110e38ba mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 110e38bd jne 0x110e38c8 */
  if (!C.zf) goto L_110e38c8;
  /* 110e38bf push esi */
  push32((uint32_t)(ESI));
  /* 110e38c0 call 0x110e691e */
  push32(0x110e38c5u); f_110e691e();
  /* 110e38c5 pop ecx */
  ECX = (pop32());
  /* 110e38c6 jmp 0x110e38cd */
  goto L_110e38cd;
L_110e38c8:;
  /* 110e38c8 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 110e38cb mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
L_110e38cd:;
  /* 110e38cd push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 110e38d0 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 110e38d3 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 110e38d6 call 0x110e396a */
  push32(0x110e38dbu); f_110e396a();
  /* 110e38db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e38de mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 110e38e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e38e3 je 0x110e3954 */
  if (C.zf) goto L_110e3954;
  /* 110e38e5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e38e8 je 0x110e3954 */
  if (C.zf) goto L_110e3954;
  /* 110e38ea mov edx, dword ptr [esi + 0xc] */
  EDX = (r32((uint32_t)(ESI + 0xc)));
  /* 110e38ed test dl, 0x82 */
  { uint32_t _r=(DL)&(0x82u); fl_logic(_r,8); }
  /* 110e38f0 jne 0x110e3929 */
  if (!C.zf) goto L_110e3929;
  /* 110e38f2 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 110e38f5 push edi */
  push32((uint32_t)(EDI));
  /* 110e38f6 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e38f9 je 0x110e3912 */
  if (C.zf) goto L_110e3912;
  /* 110e38fb mov edi, ecx */
  EDI = (ECX);
  /* 110e38fd sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 110e3900 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 110e3903 mov edi, dword ptr [edi*4 + 0x110edd00] */
  EDI = (r32((uint32_t)(EDI*4 + 0x110edd00)));
  /* 110e390a lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 110e390d lea edi, [edi + ecx*4] */
  EDI = ((uint32_t)(EDI + ECX*4));
  /* 110e3910 jmp 0x110e3917 */
  goto L_110e3917;
L_110e3912:;
  /* 110e3912 mov edi, 0x110ea738 */
  EDI = (0x110ea738u);
L_110e3917:;
  /* 110e3917 mov cl, byte ptr [edi + 4] */
  CL = (r8((uint32_t)(EDI + 0x4)));
  /* 110e391a pop edi */
  EDI = (pop32());
  /* 110e391b and cl, 0x82 */
  { uint32_t _r=(CL)&(0x82u); CL = (_r); fl_logic(_r,8); }
  /* 110e391e cmp cl, 0x82 */
  { uint32_t _a=(CL),_b=(0x82u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3921 jne 0x110e3929 */
  if (!C.zf) goto L_110e3929;
  /* 110e3923 or dh, 0x20 */
  { uint32_t _r=(C.d.b.h)|(0x20u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 110e3926 mov dword ptr [esi + 0xc], edx */
  w32((uint32_t)(ESI + 0xc), (EDX));
L_110e3929:;
  /* 110e3929 cmp dword ptr [esi + 0x18], 0x200 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3930 jne 0x110e3946 */
  if (!C.zf) goto L_110e3946;
  /* 110e3932 mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 110e3935 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 110e3938 je 0x110e3946 */
  if (C.zf) goto L_110e3946;
  /* 110e393a test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 110e393d jne 0x110e3946 */
  if (!C.zf) goto L_110e3946;
  /* 110e393f mov dword ptr [esi + 0x18], 0x1000 */
  w32((uint32_t)(ESI + 0x18), (0x1000u));
L_110e3946:;
  /* 110e3946 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 110e3948 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e3949 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 110e394c movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 110e394f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e3950 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 110e3952 pop esi */
  ESI = (pop32());
  /* 110e3953 ret  */
  ESPCHK(0x110e388eu, _esp0);
  ESP += 4; return;
L_110e3954:;
  /* 110e3954 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e3956 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3958 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 110e395b add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e395e or dword ptr [esi + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(EAX); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 110e3961 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
L_110e3965:;
  /* 110e3965 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e3968 pop esi */
  ESI = (pop32());
  /* 110e3969 ret  */
  ESPCHK(0x110e388eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000396a @ 0x110e396a (101 bytes, 34 insns) */
void f_110e396a(void) {
  FTRACE(0x110e396au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e396a push esi */
  push32((uint32_t)(ESI));
  /* 110e396b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e396f cmp esi, dword ptr [0x110ede00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110ede00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3975 jae 0x110e39b7 */
  if (!C.cf) goto L_110e39b7;
  /* 110e3977 mov ecx, esi */
  ECX = (ESI);
  /* 110e3979 mov eax, esi */
  EAX = (ESI);
  /* 110e397b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e397e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e3981 mov ecx, dword ptr [ecx*4 + 0x110edd00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e3988 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110e398b test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e3990 je 0x110e39b7 */
  if (C.zf) goto L_110e39b7;
  /* 110e3992 push edi */
  push32((uint32_t)(EDI));
  /* 110e3993 push esi */
  push32((uint32_t)(ESI));
  /* 110e3994 call 0x110e661a */
  push32(0x110e3999u); f_110e661a();
  /* 110e3999 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e399d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e39a1 push esi */
  push32((uint32_t)(ESI));
  /* 110e39a2 call 0x110e39cf */
  push32(0x110e39a7u); f_110e39cf();
  /* 110e39a7 push esi */
  push32((uint32_t)(ESI));
  /* 110e39a8 mov edi, eax */
  EDI = (EAX);
  /* 110e39aa call 0x110e6679 */
  push32(0x110e39afu); f_110e6679();
  /* 110e39af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e39b2 mov eax, edi */
  EAX = (EDI);
  /* 110e39b4 pop edi */
  EDI = (pop32());
  /* 110e39b5 pop esi */
  ESI = (pop32());
  /* 110e39b6 ret  */
  ESPCHK(0x110e396au, _esp0);
  ESP += 4; return;
L_110e39b7:;
  /* 110e39b7 call 0x110e4092 */
  push32(0x110e39bcu); f_110e4092();
  /* 110e39bc mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e39c2 call 0x110e409b */
  push32(0x110e39c7u); f_110e409b();
  /* 110e39c7 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e39ca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e39cd pop esi */
  ESI = (pop32());
  /* 110e39ce ret  */
  ESPCHK(0x110e396au, _esp0);
  ESP += 4; return;
}

/* FUN_100039cf @ 0x110e39cf (473 bytes, 170 insns) */
void f_110e39cf(void) {
  FTRACE(0x110e39cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e39cf push ebp */
  push32((uint32_t)(EBP));
  /* 110e39d0 mov ebp, esp */
  EBP = (ESP);
  /* 110e39d2 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e39d5 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 110e39d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e39dd push ebx */
  push32((uint32_t)(EBX));
  /* 110e39de mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e39e1 push esi */
  push32((uint32_t)(ESI));
  /* 110e39e2 push edi */
  push32((uint32_t)(EDI));
  /* 110e39e3 mov edx, ebx */
  EDX = (EBX);
  /* 110e39e5 je 0x110e3ba1 */
  if (C.zf) goto L_110e3ba1;
  /* 110e39eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e39ee mov ecx, eax */
  ECX = (EAX);
  /* 110e39f0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e39f3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e39f6 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 110e39f9 mov eax, dword ptr [ecx*4 + 0x110edd00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e3a00 lea edi, [ecx*4 + 0x110edd00] */
  EDI = ((uint32_t)(ECX*4 + 0x110edd00));
  /* 110e3a07 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 110e3a0a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3a0c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 110e3a0f test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 110e3a12 jne 0x110e3ba1 */
  if (!C.zf) goto L_110e3ba1;
  /* 110e3a18 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 110e3a1b je 0x110e3a3a */
  if (C.zf) goto L_110e3a3a;
  /* 110e3a1d mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 110e3a20 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3a22 je 0x110e3a3a */
  if (C.zf) goto L_110e3a3a;
  /* 110e3a24 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 110e3a27 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 110e3a29 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e3a2b lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 110e3a2e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 110e3a35 mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_110e3a3a:;
  /* 110e3a3a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 110e3a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 110e3a3f push eax */
  push32((uint32_t)(EAX));
  /* 110e3a40 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e3a42 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e3a45 push edx */
  push32((uint32_t)(EDX));
  /* 110e3a46 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 110e3a49 call dword ptr [0x110e9088] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9088))), 0x110e3a4fu);
  /* 110e3a4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3a51 jne 0x110e3a8c */
  if (!C.zf) goto L_110e3a8c;
  /* 110e3a53 call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e3a59u);
  /* 110e3a59 push 5 */
  push32((uint32_t)(0x5u));
  /* 110e3a5b pop esi */
  ESI = (pop32());
  /* 110e3a5c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3a5e jne 0x110e3a74 */
  if (!C.zf) goto L_110e3a74;
  /* 110e3a60 call 0x110e4092 */
  push32(0x110e3a65u); f_110e4092();
  /* 110e3a65 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e3a6b call 0x110e409b */
  push32(0x110e3a70u); f_110e409b();
  /* 110e3a70 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 110e3a72 jmp 0x110e3a84 */
  goto L_110e3a84;
L_110e3a74:;
  /* 110e3a74 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3a77 je 0x110e3ba1 */
  if (C.zf) goto L_110e3ba1;
  /* 110e3a7d push eax */
  push32((uint32_t)(EAX));
  /* 110e3a7e call 0x110e401f */
  push32(0x110e3a83u); f_110e401f();
  /* 110e3a83 pop ecx */
  ECX = (pop32());
L_110e3a84:;
  /* 110e3a84 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e3a87 jmp 0x110e3ba3 */
  goto L_110e3ba3;
L_110e3a8c:;
  /* 110e3a8c mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e3a8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110e3a91 add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e3a94 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 110e3a98 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 110e3a9c test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 110e3a9e je 0x110e3b9c */
  if (C.zf) goto L_110e3b9c;
  /* 110e3aa4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110e3aa6 je 0x110e3ab1 */
  if (C.zf) goto L_110e3ab1;
  /* 110e3aa8 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3aab jne 0x110e3ab1 */
  if (!C.zf) goto L_110e3ab1;
  /* 110e3aad or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 110e3aaf jmp 0x110e3ab3 */
  goto L_110e3ab3;
L_110e3ab1:;
  /* 110e3ab1 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_110e3ab3:;
  /* 110e3ab3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 110e3ab5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e3ab8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e3abb mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 110e3abe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3ac0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3ac2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110e3ac5 jae 0x110e3b96 */
  if (!C.cf) goto L_110e3b96;
L_110e3acb:;
  /* 110e3acb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110e3ace mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 110e3ad0 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3ad2 je 0x110e3b86 */
  if (C.zf) goto L_110e3b86;
  /* 110e3ad8 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3ada je 0x110e3ae7 */
  if (C.zf) goto L_110e3ae7;
  /* 110e3adc mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 110e3ade inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e3adf inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 110e3ae2 jmp 0x110e3b78 */
  goto L_110e3b78;
L_110e3ae7:;
  /* 110e3ae7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e3ae8 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3aeb jae 0x110e3b05 */
  if (!C.cf) goto L_110e3b05;
  /* 110e3aed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110e3af0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e3af1 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3af4 jne 0x110e3afc */
  if (!C.zf) goto L_110e3afc;
  /* 110e3af6 add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e3afa jmp 0x110e3b5a */
  goto L_110e3b5a;
L_110e3afc:;
  /* 110e3afc mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 110e3aff inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e3b00 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 110e3b03 jmp 0x110e3b78 */
  goto L_110e3b78;
L_110e3b05:;
  /* 110e3b05 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 110e3b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e3b0a push eax */
  push32((uint32_t)(EAX));
  /* 110e3b0b inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 110e3b0e lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 110e3b11 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e3b13 push eax */
  push32((uint32_t)(EAX));
  /* 110e3b14 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e3b16 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 110e3b19 call dword ptr [0x110e9088] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9088))), 0x110e3b1fu);
  /* 110e3b1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3b21 jne 0x110e3b2d */
  if (!C.zf) goto L_110e3b2d;
  /* 110e3b23 call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e3b29u);
  /* 110e3b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3b2b jne 0x110e3b74 */
  if (!C.zf) goto L_110e3b74;
L_110e3b2d:;
  /* 110e3b2d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3b31 je 0x110e3b74 */
  if (C.zf) goto L_110e3b74;
  /* 110e3b33 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e3b35 test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 110e3b3a je 0x110e3b4f */
  if (C.zf) goto L_110e3b4f;
  /* 110e3b3c mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 110e3b3f cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3b41 je 0x110e3b5a */
  if (C.zf) goto L_110e3b5a;
  /* 110e3b43 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 110e3b46 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 110e3b48 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e3b49 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 110e3b4d jmp 0x110e3b78 */
  goto L_110e3b78;
L_110e3b4f:;
  /* 110e3b4f cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3b52 jne 0x110e3b5f */
  if (!C.zf) goto L_110e3b5f;
  /* 110e3b54 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3b58 jne 0x110e3b5f */
  if (!C.zf) goto L_110e3b5f;
L_110e3b5a:;
  /* 110e3b5a mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 110e3b5d jmp 0x110e3b77 */
  goto L_110e3b77;
L_110e3b5f:;
  /* 110e3b5f push 1 */
  push32((uint32_t)(0x1u));
  /* 110e3b61 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110e3b63 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e3b66 call 0x110e4319 */
  push32(0x110e3b6bu); f_110e4319();
  /* 110e3b6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3b6e cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e3b72 je 0x110e3b78 */
  if (C.zf) goto L_110e3b78;
L_110e3b74:;
  /* 110e3b74 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_110e3b77:;
  /* 110e3b77 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_110e3b78:;
  /* 110e3b78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e3b7b cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3b7e jb 0x110e3acb */
  if (C.cf) goto L_110e3acb;
  /* 110e3b84 jmp 0x110e3b96 */
  goto L_110e3b96;
L_110e3b86:;
  /* 110e3b86 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e3b88 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 110e3b8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e3b8e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 110e3b90 jne 0x110e3b96 */
  if (!C.zf) goto L_110e3b96;
  /* 110e3b92 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 110e3b94 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_110e3b96:;
  /* 110e3b96 sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3b99 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_110e3b9c:;
  /* 110e3b9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e3b9f jmp 0x110e3ba3 */
  goto L_110e3ba3;
L_110e3ba1:;
  /* 110e3ba1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e3ba3:;
  /* 110e3ba3 pop edi */
  EDI = (pop32());
  /* 110e3ba4 pop esi */
  ESI = (pop32());
  /* 110e3ba5 pop ebx */
  EBX = (pop32());
  /* 110e3ba6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3ba7 ret  */
  ESPCHK(0x110e39cfu, _esp0);
  ESP += 4; return;
}

/* FUN_10003bb0 @ 0x110e3bb0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_110e3bb0(void) {
  FTRACE(0x110e3bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 110e3bb1 mov ebp, esp */
  EBP = (ESP);
  /* 110e3bb3 push edi */
  push32((uint32_t)(EDI));
  /* 110e3bb4 push esi */
  push32((uint32_t)(ESI));
  /* 110e3bb5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e3bb8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110e3bbb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3bbe mov eax, ecx */
  EAX = (ECX);
  /* 110e3bc0 mov edx, ecx */
  EDX = (ECX);
  /* 110e3bc2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3bc4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3bc6 jbe 0x110e3bd0 */
  if ((C.cf||C.zf)) goto L_110e3bd0;
  /* 110e3bc8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3bca jb 0x110e3d48 */
  if (C.cf) goto L_110e3d48;
L_110e3bd0:;
  /* 110e3bd0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110e3bd6 jne 0x110e3bec */
  if (!C.zf) goto L_110e3bec;
  /* 110e3bd8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e3bdb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110e3bde cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3be1 jb 0x110e3c0c */
  if (C.cf) goto L_110e3c0c;
  /* 110e3be3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e3be5 jmp dword ptr [edx*4 + 0x110e3cf8] */
  switch (EDX) {
    case 0: goto L_110e3d08;
    case 1: goto L_110e3d10;
    case 2: goto L_110e3d1c;
    case 3: goto L_110e3d30;
    default: x86_unimpl("switch@0x110e3be5 out of table"); return;
  }
L_110e3bec:;
  /* 110e3bec mov eax, edi */
  EAX = (EDI);
  /* 110e3bee mov edx, 3 */
  EDX = (0x3u);
  /* 110e3bf3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3bf6 jb 0x110e3c04 */
  if (C.cf) goto L_110e3c04;
  /* 110e3bf8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110e3bfb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3bfd jmp dword ptr [eax*4 + 0x110e3c10] */
  switch (EAX) {
    case 1: goto L_110e3c20;
    case 2: goto L_110e3c4c;
    case 3: goto L_110e3c70;
    default: x86_unimpl("switch@0x110e3bfd out of table"); return;
  }
L_110e3c04:;
  /* 110e3c04 jmp dword ptr [ecx*4 + 0x110e3d08] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x110e3d08)))); return;
  /* 110e3c0b nop  */
  /* nop */
L_110e3c0c:;
  /* 110e3c0c jmp dword ptr [ecx*4 + 0x110e3c8c] */
  switch (ECX) {
    case 0: goto L_110e3cef;
    case 1: goto L_110e3cdc;
    case 2: goto L_110e3cd4;
    case 3: goto L_110e3ccc;
    case 4: goto L_110e3cc4;
    case 5: goto L_110e3cbc;
    case 6: goto L_110e3cb4;
    case 7: goto L_110e3cac;
    default: x86_unimpl("switch@0x110e3c0c out of table"); return;
  }
  /* 110e3c13 nop  */
  /* nop */
L_110e3c20:;
  /* 110e3c20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e3c22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e3c24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e3c26 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e3c29 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e3c2c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e3c2f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e3c32 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e3c35 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3c38 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3c3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3c3e jb 0x110e3c0c */
  if (C.cf) goto L_110e3c0c;
  /* 110e3c40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e3c42 jmp dword ptr [edx*4 + 0x110e3cf8] */
  switch (EDX) {
    case 0: goto L_110e3d08;
    case 1: goto L_110e3d10;
    case 2: goto L_110e3d1c;
    case 3: goto L_110e3d30;
    default: x86_unimpl("switch@0x110e3c42 out of table"); return;
  }
  /* 110e3c49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e3c4c:;
  /* 110e3c4c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e3c4e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e3c50 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e3c52 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e3c55 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e3c58 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e3c5b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3c5e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3c61 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3c64 jb 0x110e3c0c */
  if (C.cf) goto L_110e3c0c;
  /* 110e3c66 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e3c68 jmp dword ptr [edx*4 + 0x110e3cf8] */
  switch (EDX) {
    case 0: goto L_110e3d08;
    case 1: goto L_110e3d10;
    case 2: goto L_110e3d1c;
    case 3: goto L_110e3d30;
    default: x86_unimpl("switch@0x110e3c68 out of table"); return;
  }
  /* 110e3c6f nop  */
  /* nop */
L_110e3c70:;
  /* 110e3c70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e3c72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e3c74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e3c76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e3c77 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e3c7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e3c7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3c7e jb 0x110e3c0c */
  if (C.cf) goto L_110e3c0c;
  /* 110e3c80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e3c82 jmp dword ptr [edx*4 + 0x110e3cf8] */
  switch (EDX) {
    case 0: goto L_110e3d08;
    case 1: goto L_110e3d10;
    case 2: goto L_110e3d1c;
    case 3: goto L_110e3d30;
    default: x86_unimpl("switch@0x110e3c82 out of table"); return;
  }
  /* 110e3c89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e3cac:;
  /* 110e3cac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 110e3cb0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_110e3cb4:;
  /* 110e3cb4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 110e3cb8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_110e3cbc:;
  /* 110e3cbc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 110e3cc0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_110e3cc4:;
  /* 110e3cc4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 110e3cc8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_110e3ccc:;
  /* 110e3ccc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 110e3cd0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_110e3cd4:;
  /* 110e3cd4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 110e3cd8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_110e3cdc:;
  /* 110e3cdc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 110e3ce0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 110e3ce4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110e3ceb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3ced add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110e3cef:;
  /* 110e3cef jmp dword ptr [edx*4 + 0x110e3cf8] */
  switch (EDX) {
    case 0: goto L_110e3d08;
    case 1: goto L_110e3d10;
    case 2: goto L_110e3d1c;
    case 3: goto L_110e3d30;
    default: x86_unimpl("switch@0x110e3cef out of table"); return;
  }
  /* 110e3cf6 mov edi, edi */
  EDI = (EDI);
L_110e3d08:;
  /* 110e3d08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3d0b pop esi */
  ESI = (pop32());
  /* 110e3d0c pop edi */
  EDI = (pop32());
  /* 110e3d0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3d0e ret  */
  ESPCHK(0x110e3bb0u, _esp0);
  ESP += 4; return;
  /* 110e3d0f nop  */
  /* nop */
L_110e3d10:;
  /* 110e3d10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e3d12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e3d14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3d17 pop esi */
  ESI = (pop32());
  /* 110e3d18 pop edi */
  EDI = (pop32());
  /* 110e3d19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3d1a ret  */
  ESPCHK(0x110e3bb0u, _esp0);
  ESP += 4; return;
  /* 110e3d1b nop  */
  /* nop */
L_110e3d1c:;
  /* 110e3d1c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e3d1e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e3d20 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e3d23 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e3d26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3d29 pop esi */
  ESI = (pop32());
  /* 110e3d2a pop edi */
  EDI = (pop32());
  /* 110e3d2b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3d2c ret  */
  ESPCHK(0x110e3bb0u, _esp0);
  ESP += 4; return;
  /* 110e3d2d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e3d30:;
  /* 110e3d30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e3d32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110e3d34 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e3d37 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e3d3a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e3d3d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e3d40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3d43 pop esi */
  ESI = (pop32());
  /* 110e3d44 pop edi */
  EDI = (pop32());
  /* 110e3d45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3d46 ret  */
  ESPCHK(0x110e3bb0u, _esp0);
  ESP += 4; return;
  /* 110e3d47 nop  */
  /* nop */
L_110e3d48:;
  /* 110e3d48 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 110e3d4c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 110e3d50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110e3d56 jne 0x110e3d7c */
  if (!C.zf) goto L_110e3d7c;
  /* 110e3d58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e3d5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 110e3d5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3d61 jb 0x110e3d70 */
  if (C.cf) goto L_110e3d70;
  /* 110e3d63 std  */
  C.df=1;
  /* 110e3d64 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e3d66 cld  */
  C.df=0;
  /* 110e3d67 jmp dword ptr [edx*4 + 0x110e3e90] */
  switch (EDX) {
    case 0: goto L_110e3ea0;
    case 1: goto L_110e3ea8;
    case 2: goto L_110e3eb8;
    case 3: goto L_110e3ecc;
    default: x86_unimpl("switch@0x110e3d67 out of table"); return;
  }
  /* 110e3d6e mov edi, edi */
  EDI = (EDI);
L_110e3d70:;
  /* 110e3d70 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e3d72 jmp dword ptr [ecx*4 + 0x110e3e40] */
  switch (ECX) {
    case 0: goto L_110e3e87;
    default: x86_unimpl("switch@0x110e3d72 out of table"); return;
  }
  /* 110e3d79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e3d7c:;
  /* 110e3d7c mov eax, edi */
  EAX = (EDI);
  /* 110e3d7e mov edx, 3 */
  EDX = (0x3u);
  /* 110e3d83 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3d86 jb 0x110e3d94 */
  if (C.cf) goto L_110e3d94;
  /* 110e3d88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 110e3d8b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3d8d jmp dword ptr [eax*4 + 0x110e3d98] */
  switch (EAX) {
    case 1: goto L_110e3da8;
    case 2: goto L_110e3dc8;
    case 3: goto L_110e3df0;
    default: x86_unimpl("switch@0x110e3d8d out of table"); return;
  }
L_110e3d94:;
  /* 110e3d94 jmp dword ptr [ecx*4 + 0x110e3e90] */
  switch (ECX) {
    case 0: goto L_110e3ea0;
    case 1: goto L_110e3ea8;
    case 2: goto L_110e3eb8;
    case 3: goto L_110e3ecc;
    default: x86_unimpl("switch@0x110e3d94 out of table"); return;
  }
  /* 110e3d9b nop  */
  /* nop */
L_110e3da8:;
  /* 110e3da8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e3dab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e3dad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e3db0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 110e3db1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e3db4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 110e3db5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3db8 jb 0x110e3d70 */
  if (C.cf) goto L_110e3d70;
  /* 110e3dba std  */
  C.df=1;
  /* 110e3dbb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e3dbd cld  */
  C.df=0;
  /* 110e3dbe jmp dword ptr [edx*4 + 0x110e3e90] */
  switch (EDX) {
    case 0: goto L_110e3ea0;
    case 1: goto L_110e3ea8;
    case 2: goto L_110e3eb8;
    case 3: goto L_110e3ecc;
    default: x86_unimpl("switch@0x110e3dbe out of table"); return;
  }
  /* 110e3dc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e3dc8:;
  /* 110e3dc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e3dcb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e3dcd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e3dd0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e3dd3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e3dd6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e3dd9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3ddc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3ddf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3de2 jb 0x110e3d70 */
  if (C.cf) goto L_110e3d70;
  /* 110e3de4 std  */
  C.df=1;
  /* 110e3de5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e3de7 cld  */
  C.df=0;
  /* 110e3de8 jmp dword ptr [edx*4 + 0x110e3e90] */
  switch (EDX) {
    case 0: goto L_110e3ea0;
    case 1: goto L_110e3ea8;
    case 2: goto L_110e3eb8;
    case 3: goto L_110e3ecc;
    default: x86_unimpl("switch@0x110e3de8 out of table"); return;
  }
  /* 110e3def nop  */
  /* nop */
L_110e3df0:;
  /* 110e3df0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e3df3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e3df5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e3df8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e3dfb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e3dfe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e3e01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110e3e04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e3e07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3e0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3e0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3e10 jb 0x110e3d70 */
  if (C.cf) goto L_110e3d70;
  /* 110e3e16 std  */
  C.df=1;
  /* 110e3e17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 110e3e19 cld  */
  C.df=0;
  /* 110e3e1a jmp dword ptr [edx*4 + 0x110e3e90] */
  switch (EDX) {
    case 0: goto L_110e3ea0;
    case 1: goto L_110e3ea8;
    case 2: goto L_110e3eb8;
    case 3: goto L_110e3ecc;
    default: x86_unimpl("switch@0x110e3e1a out of table"); return;
  }
  /* 110e3e21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 110e3e24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 110e3e25 push cs */
  push32((uint32_t)(C.seg_cs));
  /* 110e3e27 adc dword ptr [esi + edi + 0xe], ecx */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0xe))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0xe), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e3e2b adc dword ptr [esi + edi + 0xe], edx */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0xe))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0xe), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e3e2f adc dword ptr [esi + edi + 0xe], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0xe))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0xe), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e3e33 adc dword ptr [esi + edi + 0xe], esp */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0xe))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0xe), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e3e37 adc dword ptr [esi + edi + 0xe], ebp */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0xe))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0xe), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e3e3b adc dword ptr [esi + edi + 0xe], esi */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0xe))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0xe), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e3e44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 110e3e48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 110e3e4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 110e3e50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 110e3e54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 110e3e58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 110e3e5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 110e3e60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 110e3e64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 110e3e68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 110e3e6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 110e3e70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 110e3e74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 110e3e78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 110e3e7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 110e3e83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3e85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_110e3e87:;
  /* 110e3e87 jmp dword ptr [edx*4 + 0x110e3e90] */
  switch (EDX) {
    case 0: goto L_110e3ea0;
    case 1: goto L_110e3ea8;
    case 2: goto L_110e3eb8;
    case 3: goto L_110e3ecc;
    default: x86_unimpl("switch@0x110e3e87 out of table"); return;
  }
  /* 110e3e8e mov edi, edi */
  EDI = (EDI);
L_110e3ea0:;
  /* 110e3ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3ea3 pop esi */
  ESI = (pop32());
  /* 110e3ea4 pop edi */
  EDI = (pop32());
  /* 110e3ea5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3ea6 ret  */
  ESPCHK(0x110e3bb0u, _esp0);
  ESP += 4; return;
  /* 110e3ea7 nop  */
  /* nop */
L_110e3ea8:;
  /* 110e3ea8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e3eab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e3eae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3eb1 pop esi */
  ESI = (pop32());
  /* 110e3eb2 pop edi */
  EDI = (pop32());
  /* 110e3eb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3eb4 ret  */
  ESPCHK(0x110e3bb0u, _esp0);
  ESP += 4; return;
  /* 110e3eb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_110e3eb8:;
  /* 110e3eb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e3ebb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e3ebe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e3ec1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e3ec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3ec7 pop esi */
  ESI = (pop32());
  /* 110e3ec8 pop edi */
  EDI = (pop32());
  /* 110e3ec9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3eca ret  */
  ESPCHK(0x110e3bb0u, _esp0);
  ESP += 4; return;
  /* 110e3ecb nop  */
  /* nop */
L_110e3ecc:;
  /* 110e3ecc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 110e3ecf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 110e3ed2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 110e3ed5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 110e3ed8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 110e3edb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 110e3ede mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3ee1 pop esi */
  ESI = (pop32());
  /* 110e3ee2 pop edi */
  EDI = (pop32());
  /* 110e3ee3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e3ee4 ret  */
  ESPCHK(0x110e3bb0u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x110e3ee5 (18 bytes, 6 insns) */
void f_110e3ee5(void) {
  FTRACE(0x110e3ee5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3ee5 push dword ptr [0x110ed8f8] */
  push32((uint32_t)(r32((uint32_t)(0x110ed8f8))));
  /* 110e3eeb push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 110e3eef call 0x110e3ef7 */
  push32(0x110e3ef4u); f_110e3ef7();
  /* 110e3ef4 pop ecx */
  ECX = (pop32());
  /* 110e3ef5 pop ecx */
  ECX = (pop32());
  /* 110e3ef6 ret  */
  ESPCHK(0x110e3ee5u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x110e3ef7 (44 bytes, 16 insns) */
void f_110e3ef7(void) {
  FTRACE(0x110e3ef7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3ef7 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3efc ja 0x110e3f20 */
  if ((!C.cf&&!C.zf)) goto L_110e3f20;
L_110e3efe:;
  /* 110e3efe push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 110e3f02 call 0x110e3f23 */
  push32(0x110e3f07u); f_110e3f23();
  /* 110e3f07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3f09 pop ecx */
  ECX = (pop32());
  /* 110e3f0a jne 0x110e3f22 */
  if (!C.zf) goto L_110e3f22;
  /* 110e3f0c cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3f10 je 0x110e3f22 */
  if (C.zf) goto L_110e3f22;
  /* 110e3f12 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 110e3f16 call 0x110e6962 */
  push32(0x110e3f1bu); f_110e6962();
  /* 110e3f1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3f1d pop ecx */
  ECX = (pop32());
  /* 110e3f1e jne 0x110e3efe */
  if (!C.zf) goto L_110e3efe;
L_110e3f20:;
  /* 110e3f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e3f22:;
  /* 110e3f22 ret  */
  ESPCHK(0x110e3ef7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f23 @ 0x110e3f23 (231 bytes, 81 insns) */
void f_110e3f23(void) {
  FTRACE(0x110e3f23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3f23 push ebp */
  push32((uint32_t)(EBP));
  /* 110e3f24 mov ebp, esp */
  EBP = (ESP);
  /* 110e3f26 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110e3f28 push 0x110e91a8 */
  push32((uint32_t)(0x110e91a8u));
  /* 110e3f2d push 0x110e6124 */
  push32((uint32_t)(0x110e6124u));
  /* 110e3f32 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 110e3f38 push eax */
  push32((uint32_t)(EAX));
  /* 110e3f39 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 110e3f40 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e3f43 push ebx */
  push32((uint32_t)(EBX));
  /* 110e3f44 push esi */
  push32((uint32_t)(ESI));
  /* 110e3f45 push edi */
  push32((uint32_t)(EDI));
  /* 110e3f46 mov eax, dword ptr [0x110edce8] */
  EAX = (r32((uint32_t)(0x110edce8)));
  /* 110e3f4b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3f4e jne 0x110e3f93 */
  if (!C.zf) goto L_110e3f93;
  /* 110e3f50 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3f53 cmp esi, dword ptr [0x110edce0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110edce0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3f59 ja 0x110e3ff2 */
  if ((!C.cf&&!C.zf)) goto L_110e3ff2;
  /* 110e3f5f push 9 */
  push32((uint32_t)(0x9u));
  /* 110e3f61 call 0x110e5fb6 */
  push32(0x110e3f66u); f_110e5fb6();
  /* 110e3f66 pop ecx */
  ECX = (pop32());
  /* 110e3f67 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e3f6b push esi */
  push32((uint32_t)(ESI));
  /* 110e3f6c call 0x110e5448 */
  push32(0x110e3f71u); f_110e5448();
  /* 110e3f71 pop ecx */
  ECX = (pop32());
  /* 110e3f72 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 110e3f75 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e3f79 call 0x110e3f8a */
  push32(0x110e3f7eu); f_110e3f8a();
  /* 110e3f7e mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110e3f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3f83 je 0x110e3ff2 */
  if (C.zf) goto L_110e3ff2;
  /* 110e3f85 jmp 0x110e4010 */
  jmp_ind(0x110e4010u); return;
  /* 110e3f8a push 9 */
  push32((uint32_t)(0x9u));
  /* 110e3f8c call 0x110e6017 */
  push32(0x110e3f91u); f_110e6017();
  /* 110e3f91 pop ecx */
  ECX = (pop32());
  /* 110e3f92 ret  */
  ESPCHK(0x110e3f23u, _esp0);
  ESP += 4; return;
L_110e3f93:;
  /* 110e3f93 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3f96 jne 0x110e3ff2 */
  if (!C.zf) goto L_110e3ff2;
  /* 110e3f98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3f9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3f9d je 0x110e3fa7 */
  if (C.zf) goto L_110e3fa7;
  /* 110e3f9f lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 110e3fa2 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 110e3fa5 jmp 0x110e3faa */
  goto L_110e3faa;
L_110e3fa7:;
  /* 110e3fa7 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 110e3fa9 pop esi */
  ESI = (pop32());
L_110e3faa:;
  /* 110e3faa mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 110e3fad cmp esi, dword ptr [0x110ec81c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110ec81c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e3fb3 ja 0x110e3fe3 */
  if ((!C.cf&&!C.zf)) goto L_110e3fe3;
  /* 110e3fb5 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e3fb7 call 0x110e5fb6 */
  push32(0x110e3fbcu); f_110e5fb6();
  /* 110e3fbc pop ecx */
  ECX = (pop32());
  /* 110e3fbd mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110e3fc4 mov eax, esi */
  EAX = (ESI);
  /* 110e3fc6 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 110e3fc9 push eax */
  push32((uint32_t)(EAX));
  /* 110e3fca call 0x110e5bf5 */
  push32(0x110e3fcfu); f_110e5bf5();
  /* 110e3fcf pop ecx */
  ECX = (pop32());
  /* 110e3fd0 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 110e3fd3 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e3fd7 call 0x110e3fe9 */
  push32(0x110e3fdcu); f_110e3fe9();
  /* 110e3fdc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 110e3fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3fe1 jne 0x110e4010 */
  if (!C.zf) { jmp_ind(0x110e4010u); return; }
L_110e3fe3:;
  /* 110e3fe3 push esi */
  push32((uint32_t)(ESI));
  /* 110e3fe4 jmp 0x110e4002 */
  goto L_110e4002;
  /* 110e3fe6 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3fe9 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e3feb call 0x110e6017 */
  push32(0x110e3ff0u); f_110e6017();
  /* 110e3ff0 pop ecx */
  ECX = (pop32());
  /* 110e3ff1 ret  */
  ESPCHK(0x110e3f23u, _esp0);
  ESP += 4; return;
L_110e3ff2:;
  /* 110e3ff2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e3ff5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e3ff7 jne 0x110e3ffc */
  if (!C.zf) goto L_110e3ffc;
  /* 110e3ff9 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e3ffb pop eax */
  EAX = (pop32());
L_110e3ffc:;
  /* 110e3ffc add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e3fff and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 110e4001 push eax */
  push32((uint32_t)(EAX));
L_110e4002:;
  /* 110e4002 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4004 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
}

/* FUN_10003f8a @ 0x110e3f8a (9 bytes, 4 insns) */
void f_110e3f8a(void) {
  FTRACE(0x110e3f8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3f8a push 9 */
  push32((uint32_t)(0x9u));
  /* 110e3f8c call 0x110e6017 */
  push32(0x110e3f91u); f_110e6017();
  /* 110e3f91 pop ecx */
  ECX = (pop32());
  /* 110e3f92 ret  */
  ESPCHK(0x110e3f8au, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe9 @ 0x110e3fe9 (9 bytes, 4 insns) */
void f_110e3fe9(void) {
  FTRACE(0x110e3fe9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e3fe9 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e3feb call 0x110e6017 */
  push32(0x110e3ff0u); f_110e6017();
  /* 110e3ff0 pop ecx */
  ECX = (pop32());
  /* 110e3ff1 ret  */
  ESPCHK(0x110e3fe9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000401f @ 0x110e401f (115 bytes, 37 insns) */
void f_110e401f(void) {
  FTRACE(0x110e401fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e401f push esi */
  push32((uint32_t)(ESI));
  /* 110e4020 call 0x110e409b */
  push32(0x110e4025u); f_110e409b();
  /* 110e4025 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e4029 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e402b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110e402d mov eax, 0x110ea5d0 */
  EAX = (0x110ea5d0u);
L_110e4032:;
  /* 110e4032 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4034 je 0x110e4058 */
  if (C.zf) goto L_110e4058;
  /* 110e4036 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4039 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e403a cmp eax, 0x110ea738 */
  { uint32_t _a=(EAX),_b=(0x110ea738u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e403f jl 0x110e4032 */
  if ((C.sf!=C.of)) goto L_110e4032;
  /* 110e4041 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4044 jb 0x110e4068 */
  if (C.cf) goto L_110e4068;
  /* 110e4046 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4049 ja 0x110e4068 */
  if ((!C.cf&&!C.zf)) goto L_110e4068;
  /* 110e404b call 0x110e4092 */
  push32(0x110e4050u); f_110e4092();
  /* 110e4050 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 110e4056 pop esi */
  ESI = (pop32());
  /* 110e4057 ret  */
  ESPCHK(0x110e401fu, _esp0);
  ESP += 4; return;
L_110e4058:;
  /* 110e4058 call 0x110e4092 */
  push32(0x110e405du); f_110e4092();
  /* 110e405d mov ecx, dword ptr [esi*8 + 0x110ea5d4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x110ea5d4)));
  /* 110e4064 pop esi */
  ESI = (pop32());
  /* 110e4065 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110e4067 ret  */
  ESPCHK(0x110e401fu, _esp0);
  ESP += 4; return;
L_110e4068:;
  /* 110e4068 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e406e jb 0x110e4085 */
  if (C.cf) goto L_110e4085;
  /* 110e4070 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4076 ja 0x110e4085 */
  if ((!C.cf&&!C.zf)) goto L_110e4085;
  /* 110e4078 call 0x110e4092 */
  push32(0x110e407du); f_110e4092();
  /* 110e407d mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 110e4083 pop esi */
  ESI = (pop32());
  /* 110e4084 ret  */
  ESPCHK(0x110e401fu, _esp0);
  ESP += 4; return;
L_110e4085:;
  /* 110e4085 call 0x110e4092 */
  push32(0x110e408au); f_110e4092();
  /* 110e408a mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 110e4090 pop esi */
  ESI = (pop32());
  /* 110e4091 ret  */
  ESPCHK(0x110e401fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004092 @ 0x110e4092 (9 bytes, 3 insns) */
void f_110e4092(void) {
  FTRACE(0x110e4092u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4092 call 0x110e4767 */
  push32(0x110e4097u); f_110e4767();
  /* 110e4097 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e409a ret  */
  ESPCHK(0x110e4092u, _esp0);
  ESP += 4; return;
}

/* FUN_1000409b @ 0x110e409b (9 bytes, 3 insns) */
void f_110e409b(void) {
  FTRACE(0x110e409bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e409b call 0x110e4767 */
  push32(0x110e40a0u); f_110e4767();
  /* 110e40a0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e40a3 ret  */
  ESPCHK(0x110e409bu, _esp0);
  ESP += 4; return;
}

/* FUN_100040a4 @ 0x110e40a4 (444 bytes, 150 insns) */
void f_110e40a4(void) {
  FTRACE(0x110e40a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e40a4 push ebp */
  push32((uint32_t)(EBP));
  /* 110e40a5 mov ebp, esp */
  EBP = (ESP);
  /* 110e40a7 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e40aa push ebx */
  push32((uint32_t)(EBX));
  /* 110e40ab push esi */
  push32((uint32_t)(ESI));
  /* 110e40ac push edi */
  push32((uint32_t)(EDI));
  /* 110e40ad push 0x480 */
  push32((uint32_t)(0x480u));
  /* 110e40b2 call 0x110e3ee5 */
  push32(0x110e40b7u); f_110e3ee5();
  /* 110e40b7 mov esi, eax */
  ESI = (EAX);
  /* 110e40b9 pop ecx */
  ECX = (pop32());
  /* 110e40ba test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e40bc jne 0x110e40c6 */
  if (!C.zf) goto L_110e40c6;
  /* 110e40be push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 110e40c0 call 0x110e32f8 */
  push32(0x110e40c5u); f_110e32f8();
  /* 110e40c5 pop ecx */
  ECX = (pop32());
L_110e40c6:;
  /* 110e40c6 mov dword ptr [0x110edd00], esi */
  w32((uint32_t)(0x110edd00), (ESI));
  /* 110e40cc mov dword ptr [0x110ede00], 0x20 */
  w32((uint32_t)(0x110ede00), (0x20u));
  /* 110e40d6 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_110e40dc:;
  /* 110e40dc cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e40de jae 0x110e40fe */
  if (!C.cf) goto L_110e40fe;
  /* 110e40e0 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 110e40e4 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 110e40e7 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 110e40eb mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 110e40ef mov eax, dword ptr [0x110edd00] */
  EAX = (r32((uint32_t)(0x110edd00)));
  /* 110e40f4 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e40f7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e40fc jmp 0x110e40dc */
  goto L_110e40dc;
L_110e40fe:;
  /* 110e40fe lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 110e4101 push eax */
  push32((uint32_t)(EAX));
  /* 110e4102 call dword ptr [0x110e909c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e909c))), 0x110e4108u);
  /* 110e4108 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 110e410d je 0x110e41e4 */
  if (C.zf) goto L_110e41e4;
  /* 110e4113 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110e4116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4118 je 0x110e41e4 */
  if (C.zf) goto L_110e41e4;
  /* 110e411e mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 110e4120 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 110e4123 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 110e4126 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110e4129 mov eax, 0x800 */
  EAX = (0x800u);
  /* 110e412e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4130 jl 0x110e4134 */
  if ((C.sf!=C.of)) goto L_110e4134;
  /* 110e4132 mov edi, eax */
  EDI = (EAX);
L_110e4134:;
  /* 110e4134 cmp dword ptr [0x110ede00], edi */
  { uint32_t _a=(r32((uint32_t)(0x110ede00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e413a jge 0x110e4192 */
  if ((C.sf==C.of)) goto L_110e4192;
  /* 110e413c mov esi, 0x110edd04 */
  ESI = (0x110edd04u);
L_110e4141:;
  /* 110e4141 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 110e4146 call 0x110e3ee5 */
  push32(0x110e414bu); f_110e3ee5();
  /* 110e414b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e414d pop ecx */
  ECX = (pop32());
  /* 110e414e je 0x110e418c */
  if (C.zf) goto L_110e418c;
  /* 110e4150 add dword ptr [0x110ede00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x110ede00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x110ede00), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e4157 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110e4159 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_110e415f:;
  /* 110e415f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4161 jae 0x110e417f */
  if (!C.cf) goto L_110e417f;
  /* 110e4163 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 110e4167 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e416a and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 110e416e mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 110e4172 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 110e4174 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4177 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e417d jmp 0x110e415f */
  goto L_110e415f;
L_110e417f:;
  /* 110e417f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4182 cmp dword ptr [0x110ede00], edi */
  { uint32_t _a=(r32((uint32_t)(0x110ede00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4188 jl 0x110e4141 */
  if ((C.sf!=C.of)) goto L_110e4141;
  /* 110e418a jmp 0x110e4192 */
  goto L_110e4192;
L_110e418c:;
  /* 110e418c mov edi, dword ptr [0x110ede00] */
  EDI = (r32((uint32_t)(0x110ede00)));
L_110e4192:;
  /* 110e4192 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e4194 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e4196 jle 0x110e41e4 */
  if ((C.zf||C.sf!=C.of)) goto L_110e41e4;
L_110e4198:;
  /* 110e4198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e419b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110e419d cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e41a0 je 0x110e41da */
  if (C.zf) goto L_110e41da;
  /* 110e41a2 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 110e41a4 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 110e41a6 je 0x110e41da */
  if (C.zf) goto L_110e41da;
  /* 110e41a8 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 110e41aa jne 0x110e41b7 */
  if (!C.zf) goto L_110e41b7;
  /* 110e41ac push ecx */
  push32((uint32_t)(ECX));
  /* 110e41ad call dword ptr [0x110e9098] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9098))), 0x110e41b3u);
  /* 110e41b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e41b5 je 0x110e41da */
  if (C.zf) goto L_110e41da;
L_110e41b7:;
  /* 110e41b7 mov ecx, esi */
  ECX = (ESI);
  /* 110e41b9 mov eax, esi */
  EAX = (ESI);
  /* 110e41bb sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e41be and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e41c1 mov ecx, dword ptr [ecx*4 + 0x110edd00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e41c8 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110e41cb lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 110e41ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e41d1 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 110e41d3 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110e41d5 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 110e41d7 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_110e41da:;
  /* 110e41da add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e41de inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e41df inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e41e0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e41e2 jl 0x110e4198 */
  if ((C.sf!=C.of)) goto L_110e4198;
L_110e41e4:;
  /* 110e41e4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_110e41e6:;
  /* 110e41e6 mov ecx, dword ptr [0x110edd00] */
  ECX = (r32((uint32_t)(0x110edd00)));
  /* 110e41ec lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 110e41ef cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e41f3 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 110e41f6 jne 0x110e4245 */
  if (!C.zf) goto L_110e4245;
  /* 110e41f8 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110e41fa mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 110e41fe jne 0x110e4205 */
  if (!C.zf) goto L_110e4205;
  /* 110e4200 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 110e4202 pop eax */
  EAX = (pop32());
  /* 110e4203 jmp 0x110e420f */
  goto L_110e420f;
L_110e4205:;
  /* 110e4205 mov eax, ebx */
  EAX = (EBX);
  /* 110e4207 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e4208 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 110e420a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e420c add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_110e420f:;
  /* 110e420f push eax */
  push32((uint32_t)(EAX));
  /* 110e4210 call dword ptr [0x110e9094] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9094))), 0x110e4216u);
  /* 110e4216 mov edi, eax */
  EDI = (EAX);
  /* 110e4218 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e421b je 0x110e4234 */
  if (C.zf) goto L_110e4234;
  /* 110e421d push edi */
  push32((uint32_t)(EDI));
  /* 110e421e call dword ptr [0x110e9098] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9098))), 0x110e4224u);
  /* 110e4224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4226 je 0x110e4234 */
  if (C.zf) goto L_110e4234;
  /* 110e4228 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e422d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 110e422f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4232 jne 0x110e423a */
  if (!C.zf) goto L_110e423a;
L_110e4234:;
  /* 110e4234 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 110e4238 jmp 0x110e4249 */
  goto L_110e4249;
L_110e423a:;
  /* 110e423a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e423d jne 0x110e4249 */
  if (!C.zf) goto L_110e4249;
  /* 110e423f or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 110e4243 jmp 0x110e4249 */
  goto L_110e4249;
L_110e4245:;
  /* 110e4245 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_110e4249:;
  /* 110e4249 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e424a cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e424d jl 0x110e41e6 */
  if ((C.sf!=C.of)) goto L_110e41e6;
  /* 110e424f push dword ptr [0x110ede00] */
  push32((uint32_t)(r32((uint32_t)(0x110ede00))));
  /* 110e4255 call dword ptr [0x110e9090] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9090))), 0x110e425bu);
  /* 110e425b pop edi */
  EDI = (pop32());
  /* 110e425c pop esi */
  ESI = (pop32());
  /* 110e425d pop ebx */
  EBX = (pop32());
  /* 110e425e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e425f ret  */
  ESPCHK(0x110e40a4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004260 @ 0x110e4260 (84 bytes, 33 insns) */
void f_110e4260(void) {
  FTRACE(0x110e4260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4260 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4261 push esi */
  push32((uint32_t)(ESI));
  /* 110e4262 push edi */
  push32((uint32_t)(EDI));
  /* 110e4263 mov esi, 0x110edd00 */
  ESI = (0x110edd00u);
L_110e4268:;
  /* 110e4268 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110e426a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e426c je 0x110e42a5 */
  if (C.zf) goto L_110e42a5;
  /* 110e426e mov edi, eax */
  EDI = (EAX);
  /* 110e4270 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4275 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4277 jae 0x110e429a */
  if (!C.cf) goto L_110e429a;
  /* 110e4279 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_110e427c:;
  /* 110e427c cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4280 je 0x110e4289 */
  if (C.zf) goto L_110e4289;
  /* 110e4282 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4283 call dword ptr [0x110e90a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90a0))), 0x110e4289u);
L_110e4289:;
  /* 110e4289 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110e428b add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e428e add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4293 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4296 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4298 jb 0x110e427c */
  if (C.cf) goto L_110e427c;
L_110e429a:;
  /* 110e429a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110e429c call 0x110e332b */
  push32(0x110e42a1u); f_110e332b();
  /* 110e42a1 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 110e42a4 pop ecx */
  ECX = (pop32());
L_110e42a5:;
  /* 110e42a5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e42a8 cmp esi, 0x110ede00 */
  { uint32_t _a=(ESI),_b=(0x110ede00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e42ae jl 0x110e4268 */
  if ((C.sf!=C.of)) goto L_110e4268;
  /* 110e42b0 pop edi */
  EDI = (pop32());
  /* 110e42b1 pop esi */
  ESI = (pop32());
  /* 110e42b2 pop ebx */
  EBX = (pop32());
  /* 110e42b3 ret  */
  ESPCHK(0x110e4260u, _esp0);
  ESP += 4; return;
}

/* FUN_100042b4 @ 0x110e42b4 (101 bytes, 34 insns) */
void f_110e42b4(void) {
  FTRACE(0x110e42b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e42b4 push esi */
  push32((uint32_t)(ESI));
  /* 110e42b5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e42b9 cmp esi, dword ptr [0x110ede00] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110ede00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e42bf jae 0x110e4301 */
  if (!C.cf) goto L_110e4301;
  /* 110e42c1 mov ecx, esi */
  ECX = (ESI);
  /* 110e42c3 mov eax, esi */
  EAX = (ESI);
  /* 110e42c5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e42c8 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 110e42cb mov ecx, dword ptr [ecx*4 + 0x110edd00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e42d2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110e42d5 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 110e42da je 0x110e4301 */
  if (C.zf) goto L_110e4301;
  /* 110e42dc push edi */
  push32((uint32_t)(EDI));
  /* 110e42dd push esi */
  push32((uint32_t)(ESI));
  /* 110e42de call 0x110e661a */
  push32(0x110e42e3u); f_110e661a();
  /* 110e42e3 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e42e7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e42eb push esi */
  push32((uint32_t)(ESI));
  /* 110e42ec call 0x110e4319 */
  push32(0x110e42f1u); f_110e4319();
  /* 110e42f1 push esi */
  push32((uint32_t)(ESI));
  /* 110e42f2 mov edi, eax */
  EDI = (EAX);
  /* 110e42f4 call 0x110e6679 */
  push32(0x110e42f9u); f_110e6679();
  /* 110e42f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e42fc mov eax, edi */
  EAX = (EDI);
  /* 110e42fe pop edi */
  EDI = (pop32());
  /* 110e42ff pop esi */
  ESI = (pop32());
  /* 110e4300 ret  */
  ESPCHK(0x110e42b4u, _esp0);
  ESP += 4; return;
L_110e4301:;
  /* 110e4301 call 0x110e4092 */
  push32(0x110e4306u); f_110e4092();
  /* 110e4306 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e430c call 0x110e409b */
  push32(0x110e4311u); f_110e409b();
  /* 110e4311 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e4314 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e4317 pop esi */
  ESI = (pop32());
  /* 110e4318 ret  */
  ESPCHK(0x110e42b4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004319 @ 0x110e4319 (115 bytes, 41 insns) */
void f_110e4319(void) {
  FTRACE(0x110e4319u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4319 push esi */
  push32((uint32_t)(ESI));
  /* 110e431a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e431e push edi */
  push32((uint32_t)(EDI));
  /* 110e431f push esi */
  push32((uint32_t)(ESI));
  /* 110e4320 call 0x110e65d8 */
  push32(0x110e4325u); f_110e65d8();
  /* 110e4325 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4328 pop ecx */
  ECX = (pop32());
  /* 110e4329 jne 0x110e4338 */
  if (!C.zf) goto L_110e4338;
  /* 110e432b call 0x110e4092 */
  push32(0x110e4330u); f_110e4092();
  /* 110e4330 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 110e4336 jmp 0x110e4365 */
  goto L_110e4365;
L_110e4338:;
  /* 110e4338 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 110e433c push 0 */
  push32((uint32_t)(0x0u));
  /* 110e433e push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 110e4342 push eax */
  push32((uint32_t)(EAX));
  /* 110e4343 call dword ptr [0x110e90a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90a4))), 0x110e4349u);
  /* 110e4349 mov edi, eax */
  EDI = (EAX);
  /* 110e434b cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e434e jne 0x110e4358 */
  if (!C.zf) goto L_110e4358;
  /* 110e4350 call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e4356u);
  /* 110e4356 jmp 0x110e435a */
  goto L_110e435a;
L_110e4358:;
  /* 110e4358 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e435a:;
  /* 110e435a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e435c je 0x110e436a */
  if (C.zf) goto L_110e436a;
  /* 110e435e push eax */
  push32((uint32_t)(EAX));
  /* 110e435f call 0x110e401f */
  push32(0x110e4364u); f_110e401f();
  /* 110e4364 pop ecx */
  ECX = (pop32());
L_110e4365:;
  /* 110e4365 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e4368 jmp 0x110e4389 */
  goto L_110e4389;
L_110e436a:;
  /* 110e436a mov ecx, esi */
  ECX = (ESI);
  /* 110e436c and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 110e436f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 110e4372 mov eax, esi */
  EAX = (ESI);
  /* 110e4374 mov ecx, dword ptr [ecx*4 + 0x110edd00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x110edd00)));
  /* 110e437b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 110e437e and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 110e4383 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 110e4387 mov eax, edi */
  EAX = (EDI);
L_110e4389:;
  /* 110e4389 pop edi */
  EDI = (pop32());
  /* 110e438a pop esi */
  ESI = (pop32());
  /* 110e438b ret  */
  ESPCHK(0x110e4319u, _esp0);
  ESP += 4; return;
}

/* FUN_1000438c @ 0x110e438c (368 bytes, 124 insns) */
void f_110e438c(void) {
  FTRACE(0x110e438cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e438c push ebp */
  push32((uint32_t)(EBP));
  /* 110e438d mov ebp, esp */
  EBP = (ESP);
  /* 110e438f push ecx */
  push32((uint32_t)(ECX));
  /* 110e4390 push ecx */
  push32((uint32_t)(ECX));
  /* 110e4391 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4392 push esi */
  push32((uint32_t)(ESI));
  /* 110e4393 mov esi, dword ptr [0x110ed900] */
  ESI = (r32((uint32_t)(0x110ed900)));
  /* 110e4399 push edi */
  push32((uint32_t)(EDI));
  /* 110e439a mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e439d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e439f mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 110e43a2 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 110e43a5 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 110e43a7 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e43a9 je 0x110e43c5 */
  if (C.zf) goto L_110e43c5;
  /* 110e43ab cmp al, 0x72 */
  { uint32_t _a=(AL),_b=(0x72u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e43ad je 0x110e43be */
  if (C.zf) goto L_110e43be;
  /* 110e43af cmp al, 0x77 */
  { uint32_t _a=(AL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e43b1 jne 0x110e44d9 */
  if (!C.zf) goto L_110e44d9;
  /* 110e43b7 mov ecx, 0x301 */
  ECX = (0x301u);
  /* 110e43bc jmp 0x110e43ca */
  goto L_110e43ca;
L_110e43be:;
  /* 110e43be xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e43c0 or esi, 1 */
  { uint32_t _r=(ESI)|(0x1u); ESI = (_r); fl_logic(_r,32); }
  /* 110e43c3 jmp 0x110e43cd */
  goto L_110e43cd;
L_110e43c5:;
  /* 110e43c5 mov ecx, 0x109 */
  ECX = (0x109u);
L_110e43ca:;
  /* 110e43ca or esi, 2 */
  { uint32_t _r=(ESI)|(0x2u); ESI = (_r); fl_logic(_r,32); }
L_110e43cd:;
  /* 110e43cd push 1 */
  push32((uint32_t)(0x1u));
  /* 110e43cf pop edx */
  EDX = (pop32());
L_110e43d0:;
  /* 110e43d0 mov al, byte ptr [edi + 1] */
  AL = (r8((uint32_t)(EDI + 0x1)));
  /* 110e43d3 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e43d4 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e43d6 je 0x110e44bf */
  if (C.zf) goto L_110e44bf;
  /* 110e43dc cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e43de je 0x110e44bf */
  if (C.zf) goto L_110e44bf;
  /* 110e43e4 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 110e43e7 cmp eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e43ea jg 0x110e445e */
  if ((!C.zf&&C.sf==C.of)) goto L_110e445e;
  /* 110e43ec je 0x110e444e */
  if (C.zf) goto L_110e444e;
  /* 110e43ee sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e43f1 je 0x110e4438 */
  if (C.zf) goto L_110e4438;
  /* 110e43f3 sub eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e43f6 je 0x110e442e */
  if (C.zf) goto L_110e442e;
  /* 110e43f8 sub eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e43fb je 0x110e4419 */
  if (C.zf) goto L_110e4419;
  /* 110e43fd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e43fe jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e4404 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4407 jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e440d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110e4414 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 110e4417 jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e4419:;
  /* 110e4419 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e441c jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e4422 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110e4429 or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 110e442c jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e442e:;
  /* 110e442e test cl, 0x40 */
  { uint32_t _r=(CL)&(0x40u); fl_logic(_r,8); }
  /* 110e4431 jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e4433 or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 110e4436 jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e4438:;
  /* 110e4438 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 110e443b jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e443d and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 110e4440 and esi, 0xfffffffc */
  { uint32_t _r=(ESI)&(0xfffffffcu); ESI = (_r); fl_logic(_r,32); }
  /* 110e4443 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 110e4446 or esi, 0x80 */
  { uint32_t _r=(ESI)|(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 110e444c jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e444e:;
  /* 110e444e mov eax, 0x1000 */
  EAX = (0x1000u);
  /* 110e4453 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 110e4455 jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e4457 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 110e4459 jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e445e:;
  /* 110e445e sub eax, 0x62 */
  { uint32_t _a=(EAX),_b=(0x62u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e4461 je 0x110e44ab */
  if (C.zf) goto L_110e44ab;
  /* 110e4463 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e4464 je 0x110e4494 */
  if (C.zf) goto L_110e4494;
  /* 110e4466 sub eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e4469 je 0x110e447d */
  if (C.zf) goto L_110e447d;
  /* 110e446b sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e446e jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e4470 test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 110e4473 jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e4475 or ch, 0x40 */
  { uint32_t _r=(C.c.b.h)|(0x40u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 110e4478 jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e447d:;
  /* 110e447d cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4480 jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e4482 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 110e4489 and esi, 0xffffbfff */
  { uint32_t _r=(ESI)&(0xffffbfffu); ESI = (_r); fl_logic(_r,32); }
  /* 110e448f jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e4494:;
  /* 110e4494 cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4497 jne 0x110e44b0 */
  if (!C.zf) goto L_110e44b0;
  /* 110e4499 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 110e44a0 or esi, 0x4000 */
  { uint32_t _r=(ESI)|(0x4000u); ESI = (_r); fl_logic(_r,32); }
  /* 110e44a6 jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e44ab:;
  /* 110e44ab test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 110e44ae je 0x110e44b7 */
  if (C.zf) goto L_110e44b7;
L_110e44b0:;
  /* 110e44b0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110e44b2 jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e44b7:;
  /* 110e44b7 or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 110e44ba jmp 0x110e43d0 */
  goto L_110e43d0;
L_110e44bf:;
  /* 110e44bf push 0x1a4 */
  push32((uint32_t)(0x1a4u));
  /* 110e44c4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 110e44c7 push ecx */
  push32((uint32_t)(ECX));
  /* 110e44c8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e44cb call 0x110e697d */
  push32(0x110e44d0u); f_110e697d();
  /* 110e44d0 mov ecx, eax */
  ECX = (EAX);
  /* 110e44d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e44d5 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e44d7 jge 0x110e44dd */
  if ((C.sf==C.of)) goto L_110e44dd;
L_110e44d9:;
  /* 110e44d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e44db jmp 0x110e44f7 */
  goto L_110e44f7;
L_110e44dd:;
  /* 110e44dd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110e44e0 inc dword ptr [0x110ed740] */
  { uint32_t _r=(r32((uint32_t)(0x110ed740)))+1; w32((uint32_t)(0x110ed740), (_r)); fl_inc(_r,32); }
  /* 110e44e6 mov dword ptr [eax + 0xc], esi */
  w32((uint32_t)(EAX + 0xc), (ESI));
  /* 110e44e9 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 110e44ec mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 110e44ee mov dword ptr [eax + 8], ebx */
  w32((uint32_t)(EAX + 0x8), (EBX));
  /* 110e44f1 mov dword ptr [eax + 0x1c], ebx */
  w32((uint32_t)(EAX + 0x1c), (EBX));
  /* 110e44f4 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
L_110e44f7:;
  /* 110e44f7 pop edi */
  EDI = (pop32());
  /* 110e44f8 pop esi */
  ESI = (pop32());
  /* 110e44f9 pop ebx */
  EBX = (pop32());
  /* 110e44fa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e44fb ret  */
  ESPCHK(0x110e438cu, _esp0);
  ESP += 4; return;
}

/* FUN_100044fc @ 0x110e44fc (200 bytes, 73 insns) */
void f_110e44fc(void) {
  FTRACE(0x110e44fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e44fc push ebx */
  push32((uint32_t)(EBX));
  /* 110e44fd push esi */
  push32((uint32_t)(ESI));
  /* 110e44fe push edi */
  push32((uint32_t)(EDI));
  /* 110e44ff push 2 */
  push32((uint32_t)(0x2u));
  /* 110e4501 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e4503 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e4505 call 0x110e5fb6 */
  push32(0x110e450au); f_110e5fb6();
  /* 110e450a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e450c cmp dword ptr [0x110eee20], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110eee20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4512 pop ecx */
  ECX = (pop32());
  /* 110e4513 jle 0x110e45b6 */
  if ((C.zf||C.sf!=C.of)) goto L_110e45b6;
L_110e4519:;
  /* 110e4519 mov eax, dword ptr [0x110ede04] */
  EAX = (r32((uint32_t)(0x110ede04)));
  /* 110e451e mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 110e4521 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4523 je 0x110e455c */
  if (C.zf) goto L_110e455c;
  /* 110e4525 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 110e4529 jne 0x110e454c */
  if (!C.zf) goto L_110e454c;
  /* 110e452b push eax */
  push32((uint32_t)(EAX));
  /* 110e452c push esi */
  push32((uint32_t)(ESI));
  /* 110e452d call 0x110e35d7 */
  push32(0x110e4532u); f_110e35d7();
  /* 110e4532 pop ecx */
  ECX = (pop32());
  /* 110e4533 pop ecx */
  ECX = (pop32());
  /* 110e4534 mov ecx, dword ptr [0x110ede04] */
  ECX = (r32((uint32_t)(0x110ede04)));
  /* 110e453a mov eax, dword ptr [ecx + esi*4] */
  EAX = (r32((uint32_t)(ECX + ESI*4)));
  /* 110e453d test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 110e4541 je 0x110e4557 */
  if (C.zf) goto L_110e4557;
  /* 110e4543 push eax */
  push32((uint32_t)(EAX));
  /* 110e4544 push esi */
  push32((uint32_t)(ESI));
  /* 110e4545 call 0x110e3629 */
  push32(0x110e454au); f_110e3629();
  /* 110e454a pop ecx */
  ECX = (pop32());
  /* 110e454b pop ecx */
  ECX = (pop32());
L_110e454c:;
  /* 110e454c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e454d cmp esi, dword ptr [0x110eee20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110eee20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4553 jl 0x110e4519 */
  if ((C.sf!=C.of)) goto L_110e4519;
  /* 110e4555 jmp 0x110e45b6 */
  goto L_110e45b6;
L_110e4557:;
  /* 110e4557 mov edi, dword ptr [ecx + esi*4] */
  EDI = (r32((uint32_t)(ECX + ESI*4)));
  /* 110e455a jmp 0x110e45a0 */
  goto L_110e45a0;
L_110e455c:;
  /* 110e455c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 110e455e shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 110e4561 call 0x110e3ee5 */
  push32(0x110e4566u); f_110e3ee5();
  /* 110e4566 pop ecx */
  ECX = (pop32());
  /* 110e4567 mov ecx, dword ptr [0x110ede04] */
  ECX = (r32((uint32_t)(0x110ede04)));
  /* 110e456d mov dword ptr [esi + ecx], eax */
  w32((uint32_t)(ESI + ECX*1), (EAX));
  /* 110e4570 mov eax, dword ptr [0x110ede04] */
  EAX = (r32((uint32_t)(0x110ede04)));
  /* 110e4575 mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 110e4578 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e457a je 0x110e45b6 */
  if (C.zf) goto L_110e45b6;
  /* 110e457c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e457f push eax */
  push32((uint32_t)(EAX));
  /* 110e4580 call dword ptr [0x110e9000] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9000))), 0x110e4586u);
  /* 110e4586 mov eax, dword ptr [0x110ede04] */
  EAX = (r32((uint32_t)(0x110ede04)));
  /* 110e458b mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 110e458e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4591 push eax */
  push32((uint32_t)(EAX));
  /* 110e4592 call dword ptr [0x110e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9078))), 0x110e4598u);
  /* 110e4598 mov eax, dword ptr [0x110ede04] */
  EAX = (r32((uint32_t)(0x110ede04)));
  /* 110e459d mov edi, dword ptr [esi + eax] */
  EDI = (r32((uint32_t)(ESI + EAX*1)));
L_110e45a0:;
  /* 110e45a0 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e45a2 je 0x110e45b6 */
  if (C.zf) goto L_110e45b6;
  /* 110e45a4 or dword ptr [edi + 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI + 0x10)))|(0xffffffffu); w32((uint32_t)(EDI + 0x10), (_r)); fl_logic(_r,32); }
  /* 110e45a8 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
  /* 110e45ab mov dword ptr [edi + 0xc], ebx */
  w32((uint32_t)(EDI + 0xc), (EBX));
  /* 110e45ae mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 110e45b1 mov dword ptr [edi], ebx */
  w32((uint32_t)(EDI), (EBX));
  /* 110e45b3 mov dword ptr [edi + 0x1c], ebx */
  w32((uint32_t)(EDI + 0x1c), (EBX));
L_110e45b6:;
  /* 110e45b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 110e45b8 call 0x110e6017 */
  push32(0x110e45bdu); f_110e6017();
  /* 110e45bd pop ecx */
  ECX = (pop32());
  /* 110e45be mov eax, edi */
  EAX = (EDI);
  /* 110e45c0 pop edi */
  EDI = (pop32());
  /* 110e45c1 pop esi */
  ESI = (pop32());
  /* 110e45c2 pop ebx */
  EBX = (pop32());
  /* 110e45c3 ret  */
  ESPCHK(0x110e44fcu, _esp0);
  ESP += 4; return;
}

/* FUN_100045c4 @ 0x110e45c4 (45 bytes, 12 insns) */
void f_110e45c4(void) {
  FTRACE(0x110e45c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e45c4 mov eax, dword ptr [0x110edcfc] */
  EAX = (r32((uint32_t)(0x110edcfc)));
  /* 110e45c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e45cb je 0x110e45cf */
  if (C.zf) goto L_110e45cf;
  /* 110e45cd call eax */
  call_ind((uint32_t)(EAX), 0x110e45cfu);
L_110e45cf:;
  /* 110e45cf push 0x110ea01c */
  push32((uint32_t)(0x110ea01cu));
  /* 110e45d4 push 0x110ea010 */
  push32((uint32_t)(0x110ea010u));
  /* 110e45d9 call 0x110e46c8 */
  push32(0x110e45deu); f_110e46c8();
  /* 110e45de push 0x110ea00c */
  push32((uint32_t)(0x110ea00cu));
  /* 110e45e3 push 0x110ea000 */
  push32((uint32_t)(0x110ea000u));
  /* 110e45e8 call 0x110e46c8 */
  push32(0x110e45edu); f_110e46c8();
  /* 110e45ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e45f0 ret  */
  ESPCHK(0x110e45c4u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x110e45f1 (17 bytes, 6 insns) */
void f_110e45f1(void) {
  FTRACE(0x110e45f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e45f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e45f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e45f5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 110e45f9 call 0x110e4611 */
  push32(0x110e45feu); f_110e4611();
  /* 110e45fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4601 ret  */
  ESPCHK(0x110e45f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10004602 @ 0x110e4602 (15 bytes, 6 insns) */
void f_110e4602(void) {
  FTRACE(0x110e4602u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4602 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e4604 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4606 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4608 call 0x110e4611 */
  push32(0x110e460du); f_110e4611();
  /* 110e460d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4610 ret  */
  ESPCHK(0x110e4602u, _esp0);
  ESP += 4; return;
}

/* FUN_10004611 @ 0x110e4611 (163 bytes, 53 insns) */
void f_110e4611(void) {
  FTRACE(0x110e4611u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4611 push edi */
  push32((uint32_t)(EDI));
  /* 110e4612 call 0x110e46b6 */
  push32(0x110e4617u); f_110e46b6();
  /* 110e4617 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e4619 pop edi */
  EDI = (pop32());
  /* 110e461a cmp dword ptr [0x110ed784], edi */
  { uint32_t _a=(r32((uint32_t)(0x110ed784))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4620 jne 0x110e4633 */
  if (!C.zf) goto L_110e4633;
  /* 110e4622 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 110e4626 call dword ptr [0x110e90b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90b4))), 0x110e462cu);
  /* 110e462c push eax */
  push32((uint32_t)(EAX));
  /* 110e462d call dword ptr [0x110e90b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90b0))), 0x110e4633u);
L_110e4633:;
  /* 110e4633 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4638 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4639 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 110e463d mov dword ptr [0x110ed780], edi */
  w32((uint32_t)(0x110ed780), (EDI));
  /* 110e4643 mov byte ptr [0x110ed77c], bl */
  w8((uint32_t)(0x110ed77c), (BL));
  /* 110e4649 jne 0x110e4687 */
  if (!C.zf) goto L_110e4687;
  /* 110e464b mov eax, dword ptr [0x110edcf8] */
  EAX = (r32((uint32_t)(0x110edcf8)));
  /* 110e4650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4652 je 0x110e4676 */
  if (C.zf) goto L_110e4676;
  /* 110e4654 mov ecx, dword ptr [0x110edcf4] */
  ECX = (r32((uint32_t)(0x110edcf4)));
  /* 110e465a push esi */
  push32((uint32_t)(ESI));
  /* 110e465b lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 110e465e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4660 jb 0x110e4675 */
  if (C.cf) goto L_110e4675;
L_110e4662:;
  /* 110e4662 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110e4664 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4666 je 0x110e466a */
  if (C.zf) goto L_110e466a;
  /* 110e4668 call eax */
  call_ind((uint32_t)(EAX), 0x110e466au);
L_110e466a:;
  /* 110e466a sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e466d cmp esi, dword ptr [0x110edcf8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110edcf8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4673 jae 0x110e4662 */
  if (!C.cf) goto L_110e4662;
L_110e4675:;
  /* 110e4675 pop esi */
  ESI = (pop32());
L_110e4676:;
  /* 110e4676 push 0x110ea028 */
  push32((uint32_t)(0x110ea028u));
  /* 110e467b push 0x110ea020 */
  push32((uint32_t)(0x110ea020u));
  /* 110e4680 call 0x110e46c8 */
  push32(0x110e4685u); f_110e46c8();
  /* 110e4685 pop ecx */
  ECX = (pop32());
  /* 110e4686 pop ecx */
  ECX = (pop32());
L_110e4687:;
  /* 110e4687 push 0x110ea030 */
  push32((uint32_t)(0x110ea030u));
  /* 110e468c push 0x110ea02c */
  push32((uint32_t)(0x110ea02cu));
  /* 110e4691 call 0x110e46c8 */
  push32(0x110e4696u); f_110e46c8();
  /* 110e4696 pop ecx */
  ECX = (pop32());
  /* 110e4697 pop ecx */
  ECX = (pop32());
  /* 110e4698 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110e469a pop ebx */
  EBX = (pop32());
  /* 110e469b je 0x110e46a4 */
  if (C.zf) goto L_110e46a4;
  /* 110e469d call 0x110e46bf */
  push32(0x110e46a2u); f_110e46bf();
  /* 110e46a2 pop edi */
  EDI = (pop32());
  /* 110e46a3 ret  */
  ESPCHK(0x110e4611u, _esp0);
  ESP += 4; return;
L_110e46a4:;
  /* 110e46a4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 110e46a8 mov dword ptr [0x110ed784], edi */
  w32((uint32_t)(0x110ed784), (EDI));
  /* 110e46ae call dword ptr [0x110e9004] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9004))), 0x110e46b4u);
  /* 110e46b4 pop edi */
  EDI = (pop32());
  /* 110e46b5 ret  */
  ESPCHK(0x110e4611u, _esp0);
  ESP += 4; return;
}

/* FUN_100046b6 @ 0x110e46b6 (9 bytes, 4 insns) */
void f_110e46b6(void) {
  FTRACE(0x110e46b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e46b6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 110e46b8 call 0x110e5fb6 */
  push32(0x110e46bdu); f_110e5fb6();
  /* 110e46bd pop ecx */
  ECX = (pop32());
  /* 110e46be ret  */
  ESPCHK(0x110e46b6u, _esp0);
  ESP += 4; return;
}

/* FUN_100046bf @ 0x110e46bf (9 bytes, 4 insns) */
void f_110e46bf(void) {
  FTRACE(0x110e46bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e46bf push 0xd */
  push32((uint32_t)(0xdu));
  /* 110e46c1 call 0x110e6017 */
  push32(0x110e46c6u); f_110e6017();
  /* 110e46c6 pop ecx */
  ECX = (pop32());
  /* 110e46c7 ret  */
  ESPCHK(0x110e46bfu, _esp0);
  ESP += 4; return;
}

/* FUN_100046c8 @ 0x110e46c8 (26 bytes, 12 insns) */
void f_110e46c8(void) {
  FTRACE(0x110e46c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e46c8 push esi */
  push32((uint32_t)(ESI));
  /* 110e46c9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_110e46cd:;
  /* 110e46cd cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e46d1 jae 0x110e46e0 */
  if (!C.cf) goto L_110e46e0;
  /* 110e46d3 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110e46d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e46d7 je 0x110e46db */
  if (C.zf) goto L_110e46db;
  /* 110e46d9 call eax */
  call_ind((uint32_t)(EAX), 0x110e46dbu);
L_110e46db:;
  /* 110e46db add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e46de jmp 0x110e46cd */
  goto L_110e46cd;
L_110e46e0:;
  /* 110e46e0 pop esi */
  ESI = (pop32());
  /* 110e46e1 ret  */
  ESPCHK(0x110e46c8u, _esp0);
  ESP += 4; return;
}

/* FUN_100046e2 @ 0x110e46e2 (84 bytes, 32 insns) */
void f_110e46e2(void) {
  FTRACE(0x110e46e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e46e2 push esi */
  push32((uint32_t)(ESI));
  /* 110e46e3 call 0x110e5f21 */
  push32(0x110e46e8u); f_110e5f21();
  /* 110e46e8 call dword ptr [0x110e90c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90c0))), 0x110e46eeu);
  /* 110e46ee cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e46f1 mov dword ptr [0x110ea75c], eax */
  w32((uint32_t)(0x110ea75c), (EAX));
  /* 110e46f6 je 0x110e4732 */
  if (C.zf) goto L_110e4732;
  /* 110e46f8 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 110e46fa push 1 */
  push32((uint32_t)(0x1u));
  /* 110e46fc call 0x110e61fc */
  push32(0x110e4701u); f_110e61fc();
  /* 110e4701 mov esi, eax */
  ESI = (EAX);
  /* 110e4703 pop ecx */
  ECX = (pop32());
  /* 110e4704 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4706 pop ecx */
  ECX = (pop32());
  /* 110e4707 je 0x110e4732 */
  if (C.zf) goto L_110e4732;
  /* 110e4709 push esi */
  push32((uint32_t)(ESI));
  /* 110e470a push dword ptr [0x110ea75c] */
  push32((uint32_t)(r32((uint32_t)(0x110ea75c))));
  /* 110e4710 call dword ptr [0x110e90bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90bc))), 0x110e4716u);
  /* 110e4716 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4718 je 0x110e4732 */
  if (C.zf) goto L_110e4732;
  /* 110e471a push esi */
  push32((uint32_t)(ESI));
  /* 110e471b call 0x110e4754 */
  push32(0x110e4720u); f_110e4754();
  /* 110e4720 pop ecx */
  ECX = (pop32());
  /* 110e4721 call dword ptr [0x110e90b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90b8))), 0x110e4727u);
  /* 110e4727 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 110e472b push 1 */
  push32((uint32_t)(0x1u));
  /* 110e472d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110e472f pop eax */
  EAX = (pop32());
  /* 110e4730 pop esi */
  ESI = (pop32());
  /* 110e4731 ret  */
  ESPCHK(0x110e46e2u, _esp0);
  ESP += 4; return;
L_110e4732:;
  /* 110e4732 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e4734 pop esi */
  ESI = (pop32());
  /* 110e4735 ret  */
  ESPCHK(0x110e46e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004736 @ 0x110e4736 (30 bytes, 8 insns) */
void f_110e4736(void) {
  FTRACE(0x110e4736u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4736 call 0x110e5f4a */
  push32(0x110e473bu); f_110e5f4a();
  /* 110e473b mov eax, dword ptr [0x110ea75c] */
  EAX = (r32((uint32_t)(0x110ea75c)));
  /* 110e4740 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4743 je 0x110e4753 */
  if (C.zf) goto L_110e4753;
  /* 110e4745 push eax */
  push32((uint32_t)(EAX));
  /* 110e4746 call dword ptr [0x110e90c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90c4))), 0x110e474cu);
  /* 110e474c or dword ptr [0x110ea75c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x110ea75c)))|(0xffffffffu); w32((uint32_t)(0x110ea75c), (_r)); fl_logic(_r,32); }
L_110e4753:;
  /* 110e4753 ret  */
  ESPCHK(0x110e4736u, _esp0);
  ESP += 4; return;
}

/* FUN_10004754 @ 0x110e4754 (19 bytes, 4 insns) */
void f_110e4754(void) {
  FTRACE(0x110e4754u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4754 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e4758 mov dword ptr [eax + 0x50], 0x110ec8f0 */
  w32((uint32_t)(EAX + 0x50), (0x110ec8f0u));
  /* 110e475f mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 110e4766 ret  */
  ESPCHK(0x110e4754u, _esp0);
  ESP += 4; return;
}

/* FUN_10004767 @ 0x110e4767 (103 bytes, 38 insns) */
void f_110e4767(void) {
  FTRACE(0x110e4767u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4767 push esi */
  push32((uint32_t)(ESI));
  /* 110e4768 push edi */
  push32((uint32_t)(EDI));
  /* 110e4769 call dword ptr [0x110e9080] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9080))), 0x110e476fu);
  /* 110e476f push dword ptr [0x110ea75c] */
  push32((uint32_t)(r32((uint32_t)(0x110ea75c))));
  /* 110e4775 mov edi, eax */
  EDI = (EAX);
  /* 110e4777 call dword ptr [0x110e90cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90cc))), 0x110e477du);
  /* 110e477d mov esi, eax */
  ESI = (EAX);
  /* 110e477f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4781 jne 0x110e47c2 */
  if (!C.zf) goto L_110e47c2;
  /* 110e4783 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 110e4785 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e4787 call 0x110e61fc */
  push32(0x110e478cu); f_110e61fc();
  /* 110e478c mov esi, eax */
  ESI = (EAX);
  /* 110e478e pop ecx */
  ECX = (pop32());
  /* 110e478f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4791 pop ecx */
  ECX = (pop32());
  /* 110e4792 je 0x110e47ba */
  if (C.zf) goto L_110e47ba;
  /* 110e4794 push esi */
  push32((uint32_t)(ESI));
  /* 110e4795 push dword ptr [0x110ea75c] */
  push32((uint32_t)(r32((uint32_t)(0x110ea75c))));
  /* 110e479b call dword ptr [0x110e90bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90bc))), 0x110e47a1u);
  /* 110e47a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e47a3 je 0x110e47ba */
  if (C.zf) goto L_110e47ba;
  /* 110e47a5 push esi */
  push32((uint32_t)(ESI));
  /* 110e47a6 call 0x110e4754 */
  push32(0x110e47abu); f_110e4754();
  /* 110e47ab pop ecx */
  ECX = (pop32());
  /* 110e47ac call dword ptr [0x110e90b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90b8))), 0x110e47b2u);
  /* 110e47b2 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 110e47b6 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110e47b8 jmp 0x110e47c2 */
  goto L_110e47c2;
L_110e47ba:;
  /* 110e47ba push 0x10 */
  push32((uint32_t)(0x10u));
  /* 110e47bc call 0x110e32f8 */
  push32(0x110e47c1u); f_110e32f8();
  /* 110e47c1 pop ecx */
  ECX = (pop32());
L_110e47c2:;
  /* 110e47c2 push edi */
  push32((uint32_t)(EDI));
  /* 110e47c3 call dword ptr [0x110e90c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90c8))), 0x110e47c9u);
  /* 110e47c9 mov eax, esi */
  EAX = (ESI);
  /* 110e47cb pop edi */
  EDI = (pop32());
  /* 110e47cc pop esi */
  ESI = (pop32());
  /* 110e47cd ret  */
  ESPCHK(0x110e4767u, _esp0);
  ESP += 4; return;
}

/* FUN_100047ce @ 0x110e47ce (160 bytes, 62 insns) */
void f_110e47ce(void) {
  FTRACE(0x110e47ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e47ce mov eax, dword ptr [0x110ea75c] */
  EAX = (r32((uint32_t)(0x110ea75c)));
  /* 110e47d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e47d6 je 0x110e486d */
  if (C.zf) goto L_110e486d;
  /* 110e47dc push esi */
  push32((uint32_t)(ESI));
  /* 110e47dd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e47e1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e47e3 jne 0x110e47f2 */
  if (!C.zf) goto L_110e47f2;
  /* 110e47e5 push eax */
  push32((uint32_t)(EAX));
  /* 110e47e6 call dword ptr [0x110e90cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90cc))), 0x110e47ecu);
  /* 110e47ec mov esi, eax */
  ESI = (EAX);
  /* 110e47ee test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e47f0 je 0x110e485e */
  if (C.zf) goto L_110e485e;
L_110e47f2:;
  /* 110e47f2 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 110e47f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e47f7 je 0x110e4800 */
  if (C.zf) goto L_110e4800;
  /* 110e47f9 push eax */
  push32((uint32_t)(EAX));
  /* 110e47fa call 0x110e332b */
  push32(0x110e47ffu); f_110e332b();
  /* 110e47ff pop ecx */
  ECX = (pop32());
L_110e4800:;
  /* 110e4800 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 110e4803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4805 je 0x110e480e */
  if (C.zf) goto L_110e480e;
  /* 110e4807 push eax */
  push32((uint32_t)(EAX));
  /* 110e4808 call 0x110e332b */
  push32(0x110e480du); f_110e332b();
  /* 110e480d pop ecx */
  ECX = (pop32());
L_110e480e:;
  /* 110e480e mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 110e4811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4813 je 0x110e481c */
  if (C.zf) goto L_110e481c;
  /* 110e4815 push eax */
  push32((uint32_t)(EAX));
  /* 110e4816 call 0x110e332b */
  push32(0x110e481bu); f_110e332b();
  /* 110e481b pop ecx */
  ECX = (pop32());
L_110e481c:;
  /* 110e481c mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 110e481f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4821 je 0x110e482a */
  if (C.zf) goto L_110e482a;
  /* 110e4823 push eax */
  push32((uint32_t)(EAX));
  /* 110e4824 call 0x110e332b */
  push32(0x110e4829u); f_110e332b();
  /* 110e4829 pop ecx */
  ECX = (pop32());
L_110e482a:;
  /* 110e482a mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 110e482d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e482f je 0x110e4838 */
  if (C.zf) goto L_110e4838;
  /* 110e4831 push eax */
  push32((uint32_t)(EAX));
  /* 110e4832 call 0x110e332b */
  push32(0x110e4837u); f_110e332b();
  /* 110e4837 pop ecx */
  ECX = (pop32());
L_110e4838:;
  /* 110e4838 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 110e483b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e483d je 0x110e4846 */
  if (C.zf) goto L_110e4846;
  /* 110e483f push eax */
  push32((uint32_t)(EAX));
  /* 110e4840 call 0x110e332b */
  push32(0x110e4845u); f_110e332b();
  /* 110e4845 pop ecx */
  ECX = (pop32());
L_110e4846:;
  /* 110e4846 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 110e4849 cmp eax, 0x110ec8f0 */
  { uint32_t _a=(EAX),_b=(0x110ec8f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e484e je 0x110e4857 */
  if (C.zf) goto L_110e4857;
  /* 110e4850 push eax */
  push32((uint32_t)(EAX));
  /* 110e4851 call 0x110e332b */
  push32(0x110e4856u); f_110e332b();
  /* 110e4856 pop ecx */
  ECX = (pop32());
L_110e4857:;
  /* 110e4857 push esi */
  push32((uint32_t)(ESI));
  /* 110e4858 call 0x110e332b */
  push32(0x110e485du); f_110e332b();
  /* 110e485d pop ecx */
  ECX = (pop32());
L_110e485e:;
  /* 110e485e push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4860 push dword ptr [0x110ea75c] */
  push32((uint32_t)(r32((uint32_t)(0x110ea75c))));
  /* 110e4866 call dword ptr [0x110e90bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90bc))), 0x110e486cu);
  /* 110e486c pop esi */
  ESI = (pop32());
L_110e486d:;
  /* 110e486d ret  */
  ESPCHK(0x110e47ceu, _esp0);
  ESP += 4; return;
}

/* FUN_1000486e @ 0x110e486e (185 bytes, 71 insns) */
void f_110e486e(void) {
  FTRACE(0x110e486eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e486e push ebx */
  push32((uint32_t)(EBX));
  /* 110e486f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e4871 cmp dword ptr [0x110edcf0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110edcf0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4877 push esi */
  push32((uint32_t)(ESI));
  /* 110e4878 push edi */
  push32((uint32_t)(EDI));
  /* 110e4879 jne 0x110e4880 */
  if (!C.zf) goto L_110e4880;
  /* 110e487b call 0x110e7193 */
  push32(0x110e4880u); f_110e7193();
L_110e4880:;
  /* 110e4880 mov esi, dword ptr [0x110ed730] */
  ESI = (r32((uint32_t)(0x110ed730)));
  /* 110e4886 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_110e4888:;
  /* 110e4888 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e488a cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e488c je 0x110e48a0 */
  if (C.zf) goto L_110e48a0;
  /* 110e488e cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4890 je 0x110e4893 */
  if (C.zf) goto L_110e4893;
  /* 110e4892 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_110e4893:;
  /* 110e4893 push esi */
  push32((uint32_t)(ESI));
  /* 110e4894 call 0x110e6d40 */
  push32(0x110e4899u); f_110e6d40();
  /* 110e4899 pop ecx */
  ECX = (pop32());
  /* 110e489a lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 110e489e jmp 0x110e4888 */
  goto L_110e4888;
L_110e48a0:;
  /* 110e48a0 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 110e48a7 push eax */
  push32((uint32_t)(EAX));
  /* 110e48a8 call 0x110e3ee5 */
  push32(0x110e48adu); f_110e3ee5();
  /* 110e48ad mov esi, eax */
  ESI = (EAX);
  /* 110e48af pop ecx */
  ECX = (pop32());
  /* 110e48b0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e48b2 mov dword ptr [0x110ed764], esi */
  w32((uint32_t)(0x110ed764), (ESI));
  /* 110e48b8 jne 0x110e48c2 */
  if (!C.zf) goto L_110e48c2;
  /* 110e48ba push 9 */
  push32((uint32_t)(0x9u));
  /* 110e48bc call 0x110e32f8 */
  push32(0x110e48c1u); f_110e32f8();
  /* 110e48c1 pop ecx */
  ECX = (pop32());
L_110e48c2:;
  /* 110e48c2 mov edi, dword ptr [0x110ed730] */
  EDI = (r32((uint32_t)(0x110ed730)));
  /* 110e48c8 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e48ca je 0x110e4905 */
  if (C.zf) goto L_110e4905;
  /* 110e48cc push ebp */
  push32((uint32_t)(EBP));
L_110e48cd:;
  /* 110e48cd push edi */
  push32((uint32_t)(EDI));
  /* 110e48ce call 0x110e6d40 */
  push32(0x110e48d3u); f_110e6d40();
  /* 110e48d3 mov ebp, eax */
  EBP = (EAX);
  /* 110e48d5 pop ecx */
  ECX = (pop32());
  /* 110e48d6 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 110e48d7 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e48da je 0x110e48fe */
  if (C.zf) goto L_110e48fe;
  /* 110e48dc push ebp */
  push32((uint32_t)(EBP));
  /* 110e48dd call 0x110e3ee5 */
  push32(0x110e48e2u); f_110e3ee5();
  /* 110e48e2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e48e4 pop ecx */
  ECX = (pop32());
  /* 110e48e5 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110e48e7 jne 0x110e48f1 */
  if (!C.zf) goto L_110e48f1;
  /* 110e48e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 110e48eb call 0x110e32f8 */
  push32(0x110e48f0u); f_110e32f8();
  /* 110e48f0 pop ecx */
  ECX = (pop32());
L_110e48f1:;
  /* 110e48f1 push edi */
  push32((uint32_t)(EDI));
  /* 110e48f2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110e48f4 call 0x110e6c50 */
  push32(0x110e48f9u); f_110e6c50();
  /* 110e48f9 pop ecx */
  ECX = (pop32());
  /* 110e48fa add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e48fd pop ecx */
  ECX = (pop32());
L_110e48fe:;
  /* 110e48fe add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4900 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4902 jne 0x110e48cd */
  if (!C.zf) goto L_110e48cd;
  /* 110e4904 pop ebp */
  EBP = (pop32());
L_110e4905:;
  /* 110e4905 push dword ptr [0x110ed730] */
  push32((uint32_t)(r32((uint32_t)(0x110ed730))));
  /* 110e490b call 0x110e332b */
  push32(0x110e4910u); f_110e332b();
  /* 110e4910 pop ecx */
  ECX = (pop32());
  /* 110e4911 mov dword ptr [0x110ed730], ebx */
  w32((uint32_t)(0x110ed730), (EBX));
  /* 110e4917 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 110e4919 pop edi */
  EDI = (pop32());
  /* 110e491a pop esi */
  ESI = (pop32());
  /* 110e491b mov dword ptr [0x110edcec], 1 */
  w32((uint32_t)(0x110edcec), (0x1u));
  /* 110e4925 pop ebx */
  EBX = (pop32());
  /* 110e4926 ret  */
  ESPCHK(0x110e486eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004927 @ 0x110e4927 (153 bytes, 62 insns) */
void f_110e4927(void) {
  FTRACE(0x110e4927u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4927 push ebp */
  push32((uint32_t)(EBP));
  /* 110e4928 mov ebp, esp */
  EBP = (ESP);
  /* 110e492a push ecx */
  push32((uint32_t)(ECX));
  /* 110e492b push ecx */
  push32((uint32_t)(ECX));
  /* 110e492c push ebx */
  push32((uint32_t)(EBX));
  /* 110e492d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e492f cmp dword ptr [0x110edcf0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110edcf0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4935 push esi */
  push32((uint32_t)(ESI));
  /* 110e4936 push edi */
  push32((uint32_t)(EDI));
  /* 110e4937 jne 0x110e493e */
  if (!C.zf) goto L_110e493e;
  /* 110e4939 call 0x110e7193 */
  push32(0x110e493eu); f_110e7193();
L_110e493e:;
  /* 110e493e mov esi, 0x110ed788 */
  ESI = (0x110ed788u);
  /* 110e4943 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 110e4948 push esi */
  push32((uint32_t)(ESI));
  /* 110e4949 push ebx */
  push32((uint32_t)(EBX));
  /* 110e494a call dword ptr [0x110e90d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90d0))), 0x110e4950u);
  /* 110e4950 mov eax, dword ptr [0x110eee24] */
  EAX = (r32((uint32_t)(0x110eee24)));
  /* 110e4955 mov dword ptr [0x110ed774], esi */
  w32((uint32_t)(0x110ed774), (ESI));
  /* 110e495b mov edi, esi */
  EDI = (ESI);
  /* 110e495d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e495f je 0x110e4963 */
  if (C.zf) goto L_110e4963;
  /* 110e4961 mov edi, eax */
  EDI = (EAX);
L_110e4963:;
  /* 110e4963 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 110e4966 push eax */
  push32((uint32_t)(EAX));
  /* 110e4967 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 110e496a push eax */
  push32((uint32_t)(EAX));
  /* 110e496b push ebx */
  push32((uint32_t)(EBX));
  /* 110e496c push ebx */
  push32((uint32_t)(EBX));
  /* 110e496d push edi */
  push32((uint32_t)(EDI));
  /* 110e496e call 0x110e49c0 */
  push32(0x110e4973u); f_110e49c0();
  /* 110e4973 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e4976 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e4979 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 110e497c push eax */
  push32((uint32_t)(EAX));
  /* 110e497d call 0x110e3ee5 */
  push32(0x110e4982u); f_110e3ee5();
  /* 110e4982 mov esi, eax */
  ESI = (EAX);
  /* 110e4984 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4987 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4989 jne 0x110e4993 */
  if (!C.zf) goto L_110e4993;
  /* 110e498b push 8 */
  push32((uint32_t)(0x8u));
  /* 110e498d call 0x110e32f8 */
  push32(0x110e4992u); f_110e32f8();
  /* 110e4992 pop ecx */
  ECX = (pop32());
L_110e4993:;
  /* 110e4993 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 110e4996 push eax */
  push32((uint32_t)(EAX));
  /* 110e4997 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 110e499a push eax */
  push32((uint32_t)(EAX));
  /* 110e499b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e499e lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 110e49a1 push eax */
  push32((uint32_t)(EAX));
  /* 110e49a2 push esi */
  push32((uint32_t)(ESI));
  /* 110e49a3 push edi */
  push32((uint32_t)(EDI));
  /* 110e49a4 call 0x110e49c0 */
  push32(0x110e49a9u); f_110e49c0();
  /* 110e49a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e49ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e49af dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e49b0 mov dword ptr [0x110ed75c], esi */
  w32((uint32_t)(0x110ed75c), (ESI));
  /* 110e49b6 pop edi */
  EDI = (pop32());
  /* 110e49b7 pop esi */
  ESI = (pop32());
  /* 110e49b8 mov dword ptr [0x110ed758], eax */
  w32((uint32_t)(0x110ed758), (EAX));
  /* 110e49bd pop ebx */
  EBX = (pop32());
  /* 110e49be leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e49bf ret  */
  ESPCHK(0x110e4927u, _esp0);
  ESP += 4; return;
}

/* FUN_100049c0 @ 0x110e49c0 (436 bytes, 187 insns) */
void f_110e49c0(void) {
  FTRACE(0x110e49c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e49c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110e49c1 mov ebp, esp */
  EBP = (ESP);
  /* 110e49c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110e49c6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110e49c9 push ebx */
  push32((uint32_t)(EBX));
  /* 110e49ca push esi */
  push32((uint32_t)(ESI));
  /* 110e49cb and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 110e49ce mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 110e49d1 push edi */
  push32((uint32_t)(EDI));
  /* 110e49d2 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e49d5 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 110e49db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e49de test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e49e0 je 0x110e49ea */
  if (C.zf) goto L_110e49ea;
  /* 110e49e2 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 110e49e4 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e49e7 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_110e49ea:;
  /* 110e49ea cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e49ed jne 0x110e4a33 */
  if (!C.zf) goto L_110e4a33;
L_110e49ef:;
  /* 110e49ef mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 110e49f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e49f3 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e49f6 je 0x110e4a21 */
  if (C.zf) goto L_110e4a21;
  /* 110e49f8 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e49fa je 0x110e4a21 */
  if (C.zf) goto L_110e4a21;
  /* 110e49fc movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 110e49ff test byte ptr [edx + 0x110edbc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x110edbc1)))&(0x4u); fl_logic(_r,8); }
  /* 110e4a06 je 0x110e4a14 */
  if (C.zf) goto L_110e4a14;
  /* 110e4a08 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110e4a0a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4a0c je 0x110e4a14 */
  if (C.zf) goto L_110e4a14;
  /* 110e4a0e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110e4a10 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110e4a12 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e4a13 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_110e4a14:;
  /* 110e4a14 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110e4a16 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4a18 je 0x110e49ef */
  if (C.zf) goto L_110e49ef;
  /* 110e4a1a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110e4a1c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110e4a1e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e4a1f jmp 0x110e49ef */
  goto L_110e49ef;
L_110e4a21:;
  /* 110e4a21 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110e4a23 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4a25 je 0x110e4a2b */
  if (C.zf) goto L_110e4a2b;
  /* 110e4a27 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 110e4a2a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110e4a2b:;
  /* 110e4a2b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4a2e jne 0x110e4a76 */
  if (!C.zf) goto L_110e4a76;
  /* 110e4a30 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4a31 jmp 0x110e4a76 */
  goto L_110e4a76;
L_110e4a33:;
  /* 110e4a33 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110e4a35 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4a37 je 0x110e4a3e */
  if (C.zf) goto L_110e4a3e;
  /* 110e4a39 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110e4a3b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110e4a3d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110e4a3e:;
  /* 110e4a3e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110e4a40 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4a41 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 110e4a44 test byte ptr [ebx + 0x110edbc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x110edbc1)))&(0x4u); fl_logic(_r,8); }
  /* 110e4a4b je 0x110e4a59 */
  if (C.zf) goto L_110e4a59;
  /* 110e4a4d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110e4a4f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4a51 je 0x110e4a58 */
  if (C.zf) goto L_110e4a58;
  /* 110e4a53 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 110e4a55 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 110e4a57 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110e4a58:;
  /* 110e4a58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_110e4a59:;
  /* 110e4a59 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4a5c je 0x110e4a67 */
  if (C.zf) goto L_110e4a67;
  /* 110e4a5e test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e4a60 je 0x110e4a6b */
  if (C.zf) goto L_110e4a6b;
  /* 110e4a62 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4a65 jne 0x110e4a33 */
  if (!C.zf) goto L_110e4a33;
L_110e4a67:;
  /* 110e4a67 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e4a69 jne 0x110e4a6e */
  if (!C.zf) goto L_110e4a6e;
L_110e4a6b:;
  /* 110e4a6b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 110e4a6c jmp 0x110e4a76 */
  goto L_110e4a76;
L_110e4a6e:;
  /* 110e4a6e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4a70 je 0x110e4a76 */
  if (C.zf) goto L_110e4a76;
  /* 110e4a72 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_110e4a76:;
  /* 110e4a76 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_110e4a7a:;
  /* 110e4a7a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4a7d je 0x110e4b63 */
  if (C.zf) goto L_110e4b63;
L_110e4a83:;
  /* 110e4a83 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110e4a85 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4a88 je 0x110e4a8f */
  if (C.zf) goto L_110e4a8f;
  /* 110e4a8a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4a8d jne 0x110e4a92 */
  if (!C.zf) goto L_110e4a92;
L_110e4a8f:;
  /* 110e4a8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4a90 jmp 0x110e4a83 */
  goto L_110e4a83;
L_110e4a92:;
  /* 110e4a92 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4a95 je 0x110e4b63 */
  if (C.zf) goto L_110e4b63;
  /* 110e4a9b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e4a9d je 0x110e4aa7 */
  if (C.zf) goto L_110e4aa7;
  /* 110e4a9f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 110e4aa1 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4aa4 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_110e4aa7:;
  /* 110e4aa7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110e4aaa inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_110e4aac:;
  /* 110e4aac mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 110e4ab3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_110e4ab5:;
  /* 110e4ab5 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4ab8 jne 0x110e4abe */
  if (!C.zf) goto L_110e4abe;
  /* 110e4aba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4abb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e4abc jmp 0x110e4ab5 */
  goto L_110e4ab5;
L_110e4abe:;
  /* 110e4abe cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4ac1 jne 0x110e4aef */
  if (!C.zf) goto L_110e4aef;
  /* 110e4ac3 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 110e4ac6 jne 0x110e4aed */
  if (!C.zf) goto L_110e4aed;
  /* 110e4ac8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e4aca cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4acd je 0x110e4adc */
  if (C.zf) goto L_110e4adc;
  /* 110e4acf cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4ad3 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 110e4ad6 jne 0x110e4adc */
  if (!C.zf) goto L_110e4adc;
  /* 110e4ad8 mov eax, edx */
  EAX = (EDX);
  /* 110e4ada jmp 0x110e4adf */
  goto L_110e4adf;
L_110e4adc:;
  /* 110e4adc mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_110e4adf:;
  /* 110e4adf mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e4ae2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110e4ae4 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4ae7 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 110e4aea mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_110e4aed:;
  /* 110e4aed shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_110e4aef:;
  /* 110e4aef mov edx, ebx */
  EDX = (EBX);
  /* 110e4af1 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110e4af2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110e4af4 je 0x110e4b04 */
  if (C.zf) goto L_110e4b04;
  /* 110e4af6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_110e4af7:;
  /* 110e4af7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4af9 je 0x110e4aff */
  if (C.zf) goto L_110e4aff;
  /* 110e4afb mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 110e4afe inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110e4aff:;
  /* 110e4aff inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110e4b01 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110e4b02 jne 0x110e4af7 */
  if (!C.zf) goto L_110e4af7;
L_110e4b04:;
  /* 110e4b04 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110e4b06 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110e4b08 je 0x110e4b54 */
  if (C.zf) goto L_110e4b54;
  /* 110e4b0a cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4b0e jne 0x110e4b1a */
  if (!C.zf) goto L_110e4b1a;
  /* 110e4b10 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4b13 je 0x110e4b54 */
  if (C.zf) goto L_110e4b54;
  /* 110e4b15 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4b18 je 0x110e4b54 */
  if (C.zf) goto L_110e4b54;
L_110e4b1a:;
  /* 110e4b1a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4b1e je 0x110e4b4e */
  if (C.zf) goto L_110e4b4e;
  /* 110e4b20 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4b22 je 0x110e4b3d */
  if (C.zf) goto L_110e4b3d;
  /* 110e4b24 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 110e4b27 test byte ptr [ebx + 0x110edbc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x110edbc1)))&(0x4u); fl_logic(_r,8); }
  /* 110e4b2e je 0x110e4b36 */
  if (C.zf) goto L_110e4b36;
  /* 110e4b30 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110e4b32 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e4b33 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4b34 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_110e4b36:;
  /* 110e4b36 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 110e4b38 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110e4b3a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e4b3b jmp 0x110e4b4c */
  goto L_110e4b4c;
L_110e4b3d:;
  /* 110e4b3d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 110e4b40 test byte ptr [edx + 0x110edbc1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x110edbc1)))&(0x4u); fl_logic(_r,8); }
  /* 110e4b47 je 0x110e4b4c */
  if (C.zf) goto L_110e4b4c;
  /* 110e4b49 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4b4a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_110e4b4c:;
  /* 110e4b4c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_110e4b4e:;
  /* 110e4b4e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4b4f jmp 0x110e4aac */
  goto L_110e4aac;
L_110e4b54:;
  /* 110e4b54 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e4b56 je 0x110e4b5c */
  if (C.zf) goto L_110e4b5c;
  /* 110e4b58 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 110e4b5b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_110e4b5c:;
  /* 110e4b5c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 110e4b5e jmp 0x110e4a7a */
  goto L_110e4a7a;
L_110e4b63:;
  /* 110e4b63 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e4b65 je 0x110e4b6a */
  if (C.zf) goto L_110e4b6a;
  /* 110e4b67 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_110e4b6a:;
  /* 110e4b6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110e4b6d pop edi */
  EDI = (pop32());
  /* 110e4b6e pop esi */
  ESI = (pop32());
  /* 110e4b6f pop ebx */
  EBX = (pop32());
  /* 110e4b70 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 110e4b72 pop ebp */
  EBP = (pop32());
  /* 110e4b73 ret  */
  ESPCHK(0x110e49c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b74 @ 0x110e4b74 (306 bytes, 132 insns) */
void f_110e4b74(void) {
  FTRACE(0x110e4b74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4b74 push ecx */
  push32((uint32_t)(ECX));
  /* 110e4b75 push ecx */
  push32((uint32_t)(ECX));
  /* 110e4b76 mov eax, dword ptr [0x110ed88c] */
  EAX = (r32((uint32_t)(0x110ed88c)));
  /* 110e4b7b push ebx */
  push32((uint32_t)(EBX));
  /* 110e4b7c push ebp */
  push32((uint32_t)(EBP));
  /* 110e4b7d mov ebp, dword ptr [0x110e90a8] */
  EBP = (r32((uint32_t)(0x110e90a8)));
  /* 110e4b83 push esi */
  push32((uint32_t)(ESI));
  /* 110e4b84 push edi */
  push32((uint32_t)(EDI));
  /* 110e4b85 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e4b87 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e4b89 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e4b8b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4b8d jne 0x110e4bc2 */
  if (!C.zf) goto L_110e4bc2;
  /* 110e4b8f call ebp */
  call_ind((uint32_t)(EBP), 0x110e4b91u);
  /* 110e4b91 mov esi, eax */
  ESI = (EAX);
  /* 110e4b93 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4b95 je 0x110e4ba3 */
  if (C.zf) goto L_110e4ba3;
  /* 110e4b97 mov dword ptr [0x110ed88c], 1 */
  w32((uint32_t)(0x110ed88c), (0x1u));
  /* 110e4ba1 jmp 0x110e4bcb */
  goto L_110e4bcb;
L_110e4ba3:;
  /* 110e4ba3 call dword ptr [0x110e90e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90e0))), 0x110e4ba9u);
  /* 110e4ba9 mov edi, eax */
  EDI = (EAX);
  /* 110e4bab cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4bad je 0x110e4c9d */
  if (C.zf) goto L_110e4c9d;
  /* 110e4bb3 mov dword ptr [0x110ed88c], 2 */
  w32((uint32_t)(0x110ed88c), (0x2u));
  /* 110e4bbd jmp 0x110e4c51 */
  goto L_110e4c51;
L_110e4bc2:;
  /* 110e4bc2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4bc5 jne 0x110e4c4c */
  if (!C.zf) goto L_110e4c4c;
L_110e4bcb:;
  /* 110e4bcb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4bcd jne 0x110e4bdb */
  if (!C.zf) goto L_110e4bdb;
  /* 110e4bcf call ebp */
  call_ind((uint32_t)(EBP), 0x110e4bd1u);
  /* 110e4bd1 mov esi, eax */
  ESI = (EAX);
  /* 110e4bd3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4bd5 je 0x110e4c9d */
  if (C.zf) goto L_110e4c9d;
L_110e4bdb:;
  /* 110e4bdb cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 110e4bde mov eax, esi */
  EAX = (ESI);
  /* 110e4be0 je 0x110e4bf0 */
  if (C.zf) goto L_110e4bf0;
L_110e4be2:;
  /* 110e4be2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4be3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4be4 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 110e4be7 jne 0x110e4be2 */
  if (!C.zf) goto L_110e4be2;
  /* 110e4be9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4bea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4beb cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 110e4bee jne 0x110e4be2 */
  if (!C.zf) goto L_110e4be2;
L_110e4bf0:;
  /* 110e4bf0 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e4bf2 mov edi, dword ptr [0x110e90dc] */
  EDI = (r32((uint32_t)(0x110e90dc)));
  /* 110e4bf8 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110e4bfa push ebx */
  push32((uint32_t)(EBX));
  /* 110e4bfb push ebx */
  push32((uint32_t)(EBX));
  /* 110e4bfc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4bfd push ebx */
  push32((uint32_t)(EBX));
  /* 110e4bfe push ebx */
  push32((uint32_t)(EBX));
  /* 110e4bff push eax */
  push32((uint32_t)(EAX));
  /* 110e4c00 push esi */
  push32((uint32_t)(ESI));
  /* 110e4c01 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4c02 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4c03 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 110e4c07 call edi */
  call_ind((uint32_t)(EDI), 0x110e4c09u);
  /* 110e4c09 mov ebp, eax */
  EBP = (EAX);
  /* 110e4c0b cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4c0d je 0x110e4c41 */
  if (C.zf) goto L_110e4c41;
  /* 110e4c0f push ebp */
  push32((uint32_t)(EBP));
  /* 110e4c10 call 0x110e3ee5 */
  push32(0x110e4c15u); f_110e3ee5();
  /* 110e4c15 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4c17 pop ecx */
  ECX = (pop32());
  /* 110e4c18 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 110e4c1c je 0x110e4c41 */
  if (C.zf) goto L_110e4c41;
  /* 110e4c1e push ebx */
  push32((uint32_t)(EBX));
  /* 110e4c1f push ebx */
  push32((uint32_t)(EBX));
  /* 110e4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 110e4c21 push eax */
  push32((uint32_t)(EAX));
  /* 110e4c22 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 110e4c26 push esi */
  push32((uint32_t)(ESI));
  /* 110e4c27 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4c28 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4c29 call edi */
  call_ind((uint32_t)(EDI), 0x110e4c2bu);
  /* 110e4c2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4c2d jne 0x110e4c3d */
  if (!C.zf) goto L_110e4c3d;
  /* 110e4c2f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 110e4c33 call 0x110e332b */
  push32(0x110e4c38u); f_110e332b();
  /* 110e4c38 pop ecx */
  ECX = (pop32());
  /* 110e4c39 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_110e4c3d:;
  /* 110e4c3d mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_110e4c41:;
  /* 110e4c41 push esi */
  push32((uint32_t)(ESI));
  /* 110e4c42 call dword ptr [0x110e90d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90d8))), 0x110e4c48u);
  /* 110e4c48 mov eax, ebx */
  EAX = (EBX);
  /* 110e4c4a jmp 0x110e4c9f */
  goto L_110e4c9f;
L_110e4c4c:;
  /* 110e4c4c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4c4f jne 0x110e4c9d */
  if (!C.zf) goto L_110e4c9d;
L_110e4c51:;
  /* 110e4c51 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4c53 jne 0x110e4c61 */
  if (!C.zf) goto L_110e4c61;
  /* 110e4c55 call dword ptr [0x110e90e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90e0))), 0x110e4c5bu);
  /* 110e4c5b mov edi, eax */
  EDI = (EAX);
  /* 110e4c5d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4c5f je 0x110e4c9d */
  if (C.zf) goto L_110e4c9d;
L_110e4c61:;
  /* 110e4c61 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4c63 mov eax, edi */
  EAX = (EDI);
  /* 110e4c65 je 0x110e4c71 */
  if (C.zf) goto L_110e4c71;
L_110e4c67:;
  /* 110e4c67 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4c68 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4c6a jne 0x110e4c67 */
  if (!C.zf) goto L_110e4c67;
  /* 110e4c6c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4c6d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4c6f jne 0x110e4c67 */
  if (!C.zf) goto L_110e4c67;
L_110e4c71:;
  /* 110e4c71 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e4c73 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4c74 mov ebp, eax */
  EBP = (EAX);
  /* 110e4c76 push ebp */
  push32((uint32_t)(EBP));
  /* 110e4c77 call 0x110e3ee5 */
  push32(0x110e4c7cu); f_110e3ee5();
  /* 110e4c7c mov esi, eax */
  ESI = (EAX);
  /* 110e4c7e pop ecx */
  ECX = (pop32());
  /* 110e4c7f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4c81 jne 0x110e4c87 */
  if (!C.zf) goto L_110e4c87;
  /* 110e4c83 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e4c85 jmp 0x110e4c92 */
  goto L_110e4c92;
L_110e4c87:;
  /* 110e4c87 push ebp */
  push32((uint32_t)(EBP));
  /* 110e4c88 push edi */
  push32((uint32_t)(EDI));
  /* 110e4c89 push esi */
  push32((uint32_t)(ESI));
  /* 110e4c8a call 0x110e3bb0 */
  push32(0x110e4c8fu); f_110e3bb0();
  /* 110e4c8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e4c92:;
  /* 110e4c92 push edi */
  push32((uint32_t)(EDI));
  /* 110e4c93 call dword ptr [0x110e90d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90d4))), 0x110e4c99u);
  /* 110e4c99 mov eax, esi */
  EAX = (ESI);
  /* 110e4c9b jmp 0x110e4c9f */
  goto L_110e4c9f;
L_110e4c9d:;
  /* 110e4c9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e4c9f:;
  /* 110e4c9f pop edi */
  EDI = (pop32());
  /* 110e4ca0 pop esi */
  ESI = (pop32());
  /* 110e4ca1 pop ebp */
  EBP = (pop32());
  /* 110e4ca2 pop ebx */
  EBX = (pop32());
  /* 110e4ca3 pop ecx */
  ECX = (pop32());
  /* 110e4ca4 pop ecx */
  ECX = (pop32());
  /* 110e4ca5 ret  */
  ESPCHK(0x110e4b74u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ca6 @ 0x110e4ca6 (45 bytes, 17 insns) */
void f_110e4ca6(void) {
  FTRACE(0x110e4ca6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4ca6 push esi */
  push32((uint32_t)(ESI));
  /* 110e4ca7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e4cab push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4cad and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 110e4cb0 call dword ptr [0x110e9068] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9068))), 0x110e4cb6u);
  /* 110e4cb6 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 110e4cbb jne 0x110e4cd1 */
  if (!C.zf) goto L_110e4cd1;
  /* 110e4cbd mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 110e4cc0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110e4cc2 je 0x110e4cd1 */
  if (C.zf) goto L_110e4cd1;
  /* 110e4cc4 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4cc6 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 110e4cc9 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 110e4ccb mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 110e4cce mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_110e4cd1:;
  /* 110e4cd1 pop esi */
  ESI = (pop32());
  /* 110e4cd2 ret  */
  ESPCHK(0x110e4ca6u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cd3 @ 0x110e4cd3 (328 bytes, 115 insns) */
void f_110e4cd3(void) {
  FTRACE(0x110e4cd3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4cd3 push ebp */
  push32((uint32_t)(EBP));
  /* 110e4cd4 mov ebp, esp */
  EBP = (ESP);
  /* 110e4cd6 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 110e4cdb call 0x110e7410 */
  push32(0x110e4ce0u); f_110e7410();
  /* 110e4ce0 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 110e4ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4ce7 push eax */
  push32((uint32_t)(EAX));
  /* 110e4ce8 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 110e4cf2 call dword ptr [0x110e9060] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9060))), 0x110e4cf8u);
  /* 110e4cf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4cfa je 0x110e4d16 */
  if (C.zf) goto L_110e4d16;
  /* 110e4cfc cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4d03 jne 0x110e4d16 */
  if (!C.zf) goto L_110e4d16;
  /* 110e4d05 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4d0c jb 0x110e4d16 */
  if (C.cf) goto L_110e4d16;
  /* 110e4d0e push 1 */
  push32((uint32_t)(0x1u));
  /* 110e4d10 pop eax */
  EAX = (pop32());
  /* 110e4d11 jmp 0x110e4e18 */
  goto L_110e4e18;
L_110e4d16:;
  /* 110e4d16 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 110e4d1c push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 110e4d21 push eax */
  push32((uint32_t)(EAX));
  /* 110e4d22 push 0x110e91d8 */
  push32((uint32_t)(0x110e91d8u));
  /* 110e4d27 call dword ptr [0x110e90ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90ac))), 0x110e4d2du);
  /* 110e4d2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4d2f je 0x110e4e05 */
  if (C.zf) goto L_110e4e05;
  /* 110e4d35 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e4d37 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 110e4d3d cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4d43 je 0x110e4d58 */
  if (C.zf) goto L_110e4d58;
L_110e4d45:;
  /* 110e4d45 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 110e4d47 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4d49 jl 0x110e4d53 */
  if ((C.sf!=C.of)) goto L_110e4d53;
  /* 110e4d4b cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4d4d jg 0x110e4d53 */
  if ((!C.zf&&C.sf==C.of)) goto L_110e4d53;
  /* 110e4d4f sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110e4d51 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_110e4d53:;
  /* 110e4d53 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e4d54 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4d56 jne 0x110e4d45 */
  if (!C.zf) goto L_110e4d45;
L_110e4d58:;
  /* 110e4d58 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 110e4d5e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 110e4d60 push eax */
  push32((uint32_t)(EAX));
  /* 110e4d61 push 0x110e91c0 */
  push32((uint32_t)(0x110e91c0u));
  /* 110e4d66 call 0x110e73d0 */
  push32(0x110e4d6bu); f_110e73d0();
  /* 110e4d6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4d6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4d70 jne 0x110e4d7a */
  if (!C.zf) goto L_110e4d7a;
  /* 110e4d72 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 110e4d78 jmp 0x110e4dc3 */
  goto L_110e4dc3;
L_110e4d7a:;
  /* 110e4d7a lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 110e4d80 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 110e4d85 push eax */
  push32((uint32_t)(EAX));
  /* 110e4d86 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4d87 call dword ptr [0x110e90d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90d0))), 0x110e4d8du);
  /* 110e4d8d cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4d93 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 110e4d99 je 0x110e4dae */
  if (C.zf) goto L_110e4dae;
L_110e4d9b:;
  /* 110e4d9b mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 110e4d9d cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4d9f jl 0x110e4da9 */
  if ((C.sf!=C.of)) goto L_110e4da9;
  /* 110e4da1 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4da3 jg 0x110e4da9 */
  if ((!C.zf&&C.sf==C.of)) goto L_110e4da9;
  /* 110e4da5 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 110e4da7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_110e4da9:;
  /* 110e4da9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e4daa cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4dac jne 0x110e4d9b */
  if (!C.zf) goto L_110e4d9b;
L_110e4dae:;
  /* 110e4dae lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 110e4db4 push eax */
  push32((uint32_t)(EAX));
  /* 110e4db5 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 110e4dbb push eax */
  push32((uint32_t)(EAX));
  /* 110e4dbc call 0x110e2ce0 */
  push32(0x110e4dc1u); f_110e2ce0();
  /* 110e4dc1 pop ecx */
  ECX = (pop32());
  /* 110e4dc2 pop ecx */
  ECX = (pop32());
L_110e4dc3:;
  /* 110e4dc3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4dc5 je 0x110e4e05 */
  if (C.zf) goto L_110e4e05;
  /* 110e4dc7 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 110e4dc9 push eax */
  push32((uint32_t)(EAX));
  /* 110e4dca call 0x110e3430 */
  push32(0x110e4dcfu); f_110e3430();
  /* 110e4dcf pop ecx */
  ECX = (pop32());
  /* 110e4dd0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4dd2 pop ecx */
  ECX = (pop32());
  /* 110e4dd3 je 0x110e4e05 */
  if (C.zf) goto L_110e4e05;
  /* 110e4dd5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4dd6 mov ecx, eax */
  ECX = (EAX);
  /* 110e4dd8 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4dda je 0x110e4dea */
  if (C.zf) goto L_110e4dea;
L_110e4ddc:;
  /* 110e4ddc cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4ddf jne 0x110e4de5 */
  if (!C.zf) goto L_110e4de5;
  /* 110e4de1 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 110e4de3 jmp 0x110e4de6 */
  goto L_110e4de6;
L_110e4de5:;
  /* 110e4de5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_110e4de6:;
  /* 110e4de6 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4de8 jne 0x110e4ddc */
  if (!C.zf) goto L_110e4ddc;
L_110e4dea:;
  /* 110e4dea push 0xa */
  push32((uint32_t)(0xau));
  /* 110e4dec push ebx */
  push32((uint32_t)(EBX));
  /* 110e4ded push eax */
  push32((uint32_t)(EAX));
  /* 110e4dee call 0x110e71af */
  push32(0x110e4df3u); f_110e71af();
  /* 110e4df3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4df6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4df9 je 0x110e4e18 */
  if (C.zf) goto L_110e4e18;
  /* 110e4dfb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4dfe je 0x110e4e18 */
  if (C.zf) goto L_110e4e18;
  /* 110e4e00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4e03 je 0x110e4e18 */
  if (C.zf) goto L_110e4e18;
L_110e4e05:;
  /* 110e4e05 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 110e4e08 push eax */
  push32((uint32_t)(EAX));
  /* 110e4e09 call 0x110e4ca6 */
  push32(0x110e4e0eu); f_110e4ca6();
  /* 110e4e0e cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e4e12 pop ecx */
  ECX = (pop32());
  /* 110e4e13 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e4e15 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_110e4e18:;
  /* 110e4e18 pop ebx */
  EBX = (pop32());
  /* 110e4e19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e4e1a ret  */
  ESPCHK(0x110e4cd3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e1b @ 0x110e4e1b (93 bytes, 30 insns) */
void f_110e4e1b(void) {
  FTRACE(0x110e4e1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4e1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e4e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4e1f cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4e23 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 110e4e28 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 110e4e2b push eax */
  push32((uint32_t)(EAX));
  /* 110e4e2c call dword ptr [0x110e9064] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9064))), 0x110e4e32u);
  /* 110e4e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4e34 mov dword ptr [0x110edce4], eax */
  w32((uint32_t)(0x110edce4), (EAX));
  /* 110e4e39 je 0x110e4e71 */
  if (C.zf) goto L_110e4e71;
  /* 110e4e3b call 0x110e4cd3 */
  push32(0x110e4e40u); f_110e4cd3();
  /* 110e4e40 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4e43 mov dword ptr [0x110edce8], eax */
  w32((uint32_t)(0x110edce8), (EAX));
  /* 110e4e48 jne 0x110e4e57 */
  if (!C.zf) goto L_110e4e57;
  /* 110e4e4a push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 110e4e4f call 0x110e50ac */
  push32(0x110e4e54u); f_110e50ac();
  /* 110e4e54 pop ecx */
  ECX = (pop32());
  /* 110e4e55 jmp 0x110e4e61 */
  goto L_110e4e61;
L_110e4e57:;
  /* 110e4e57 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4e5a jne 0x110e4e74 */
  if (!C.zf) goto L_110e4e74;
  /* 110e4e5c call 0x110e58fd */
  push32(0x110e4e61u); f_110e58fd();
L_110e4e61:;
  /* 110e4e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4e63 jne 0x110e4e74 */
  if (!C.zf) goto L_110e4e74;
  /* 110e4e65 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e4e6b call dword ptr [0x110e905c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e905c))), 0x110e4e71u);
L_110e4e71:;
  /* 110e4e71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e4e73 ret  */
  ESPCHK(0x110e4e1bu, _esp0);
  ESP += 4; return;
L_110e4e74:;
  /* 110e4e74 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e4e76 pop eax */
  EAX = (pop32());
  /* 110e4e77 ret  */
  ESPCHK(0x110e4e1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004e78 @ 0x110e4e78 (168 bytes, 56 insns) */
void f_110e4e78(void) {
  FTRACE(0x110e4e78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4e78 mov eax, dword ptr [0x110edce8] */
  EAX = (r32((uint32_t)(0x110edce8)));
  /* 110e4e7d push esi */
  push32((uint32_t)(ESI));
  /* 110e4e7e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4e81 push edi */
  push32((uint32_t)(EDI));
  /* 110e4e82 jne 0x110e4eea */
  if (!C.zf) goto L_110e4eea;
  /* 110e4e84 push ebx */
  push32((uint32_t)(EBX));
  /* 110e4e85 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 110e4e87 cmp dword ptr [0x110edcd8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x110edcd8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4e8d push ebp */
  push32((uint32_t)(EBP));
  /* 110e4e8e mov ebp, dword ptr [0x110e9074] */
  EBP = (r32((uint32_t)(0x110e9074)));
  /* 110e4e94 jle 0x110e4ed6 */
  if ((C.zf||C.sf!=C.of)) goto L_110e4ed6;
  /* 110e4e96 mov eax, dword ptr [0x110edcdc] */
  EAX = (r32((uint32_t)(0x110edcdc)));
  /* 110e4e9b mov edi, dword ptr [0x110e9054] */
  EDI = (r32((uint32_t)(0x110e9054)));
  /* 110e4ea1 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_110e4ea4:;
  /* 110e4ea4 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 110e4ea9 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 110e4eae push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110e4eb0 call edi */
  call_ind((uint32_t)(EDI), 0x110e4eb2u);
  /* 110e4eb2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 110e4eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4eb9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110e4ebb call edi */
  call_ind((uint32_t)(EDI), 0x110e4ebdu);
  /* 110e4ebd push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 110e4ec0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4ec2 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e4ec8 call ebp */
  call_ind((uint32_t)(EBP), 0x110e4ecau);
  /* 110e4eca add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4ecd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e4ece cmp ebx, dword ptr [0x110edcd8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x110edcd8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4ed4 jl 0x110e4ea4 */
  if ((C.sf!=C.of)) goto L_110e4ea4;
L_110e4ed6:;
  /* 110e4ed6 push dword ptr [0x110edcdc] */
  push32((uint32_t)(r32((uint32_t)(0x110edcdc))));
  /* 110e4edc push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4ede push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e4ee4 call ebp */
  call_ind((uint32_t)(EBP), 0x110e4ee6u);
  /* 110e4ee6 pop ebp */
  EBP = (pop32());
  /* 110e4ee7 pop ebx */
  EBX = (pop32());
  /* 110e4ee8 jmp 0x110e4f11 */
  goto L_110e4f11;
L_110e4eea:;
  /* 110e4eea cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4eed jne 0x110e4f11 */
  if (!C.zf) goto L_110e4f11;
  /* 110e4eef mov edi, 0x110ea7f8 */
  EDI = (0x110ea7f8u);
  /* 110e4ef4 mov esi, edi */
  ESI = (EDI);
L_110e4ef6:;
  /* 110e4ef6 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 110e4ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4efb je 0x110e4f0b */
  if (C.zf) goto L_110e4f0b;
  /* 110e4efd push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 110e4f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4f04 push eax */
  push32((uint32_t)(EAX));
  /* 110e4f05 call dword ptr [0x110e9054] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9054))), 0x110e4f0bu);
L_110e4f0b:;
  /* 110e4f0b mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 110e4f0d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4f0f jne 0x110e4ef6 */
  if (!C.zf) goto L_110e4ef6;
L_110e4f11:;
  /* 110e4f11 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e4f17 call dword ptr [0x110e905c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e905c))), 0x110e4f1du);
  /* 110e4f1d pop edi */
  EDI = (pop32());
  /* 110e4f1e pop esi */
  ESI = (pop32());
  /* 110e4f1f ret  */
  ESPCHK(0x110e4e78u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f20 @ 0x110e4f20 (57 bytes, 18 insns) */
void f_110e4f20(void) {
  FTRACE(0x110e4f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4f20 mov eax, dword ptr [0x110ed738] */
  EAX = (r32((uint32_t)(0x110ed738)));
  /* 110e4f25 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4f28 je 0x110e4f37 */
  if (C.zf) goto L_110e4f37;
  /* 110e4f2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4f2c jne 0x110e4f58 */
  if (!C.zf) goto L_110e4f58;
  /* 110e4f2e cmp dword ptr [0x110ed73c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110ed73c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4f35 jne 0x110e4f58 */
  if (!C.zf) goto L_110e4f58;
L_110e4f37:;
  /* 110e4f37 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 110e4f3c call 0x110e4f59 */
  push32(0x110e4f41u); f_110e4f59();
  /* 110e4f41 mov eax, dword ptr [0x110ed890] */
  EAX = (r32((uint32_t)(0x110ed890)));
  /* 110e4f46 pop ecx */
  ECX = (pop32());
  /* 110e4f47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4f49 je 0x110e4f4d */
  if (C.zf) goto L_110e4f4d;
  /* 110e4f4b call eax */
  call_ind((uint32_t)(EAX), 0x110e4f4du);
L_110e4f4d:;
  /* 110e4f4d push 0xff */
  push32((uint32_t)(0xffu));
  /* 110e4f52 call 0x110e4f59 */
  push32(0x110e4f57u); f_110e4f59();
  /* 110e4f57 pop ecx */
  ECX = (pop32());
L_110e4f58:;
  /* 110e4f58 ret  */
  ESPCHK(0x110e4f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f59 @ 0x110e4f59 (339 bytes, 100 insns) */
void f_110e4f59(void) {
  FTRACE(0x110e4f59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e4f59 push ebp */
  push32((uint32_t)(EBP));
  /* 110e4f5a mov ebp, esp */
  EBP = (ESP);
  /* 110e4f5c sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e4f62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e4f65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110e4f67 mov eax, 0x110ea768 */
  EAX = (0x110ea768u);
L_110e4f6c:;
  /* 110e4f6c cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4f6e je 0x110e4f7b */
  if (C.zf) goto L_110e4f7b;
  /* 110e4f70 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e4f73 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 110e4f74 cmp eax, 0x110ea7f8 */
  { uint32_t _a=(EAX),_b=(0x110ea7f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4f79 jl 0x110e4f6c */
  if ((C.sf!=C.of)) goto L_110e4f6c;
L_110e4f7b:;
  /* 110e4f7b push esi */
  push32((uint32_t)(ESI));
  /* 110e4f7c mov esi, ecx */
  ESI = (ECX);
  /* 110e4f7e shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 110e4f81 cmp edx, dword ptr [esi + 0x110ea768] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x110ea768))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4f87 jne 0x110e50a9 */
  if (!C.zf) goto L_110e50a9;
  /* 110e4f8d mov eax, dword ptr [0x110ed738] */
  EAX = (r32((uint32_t)(0x110ed738)));
  /* 110e4f92 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4f95 je 0x110e5083 */
  if (C.zf) goto L_110e5083;
  /* 110e4f9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4f9d jne 0x110e4fac */
  if (!C.zf) goto L_110e4fac;
  /* 110e4f9f cmp dword ptr [0x110ed73c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110ed73c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4fa6 je 0x110e5083 */
  if (C.zf) goto L_110e5083;
L_110e4fac:;
  /* 110e4fac cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4fb2 je 0x110e50a9 */
  if (C.zf) goto L_110e50a9;
  /* 110e4fb8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110e4fbe push 0x104 */
  push32((uint32_t)(0x104u));
  /* 110e4fc3 push eax */
  push32((uint32_t)(EAX));
  /* 110e4fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e4fc6 call dword ptr [0x110e90d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e90d0))), 0x110e4fccu);
  /* 110e4fcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e4fce jne 0x110e4fe3 */
  if (!C.zf) goto L_110e4fe3;
  /* 110e4fd0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110e4fd6 push 0x110e94c8 */
  push32((uint32_t)(0x110e94c8u));
  /* 110e4fdb push eax */
  push32((uint32_t)(EAX));
  /* 110e4fdc call 0x110e6c50 */
  push32(0x110e4fe1u); f_110e6c50();
  /* 110e4fe1 pop ecx */
  ECX = (pop32());
  /* 110e4fe2 pop ecx */
  ECX = (pop32());
L_110e4fe3:;
  /* 110e4fe3 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110e4fe9 push edi */
  push32((uint32_t)(EDI));
  /* 110e4fea push eax */
  push32((uint32_t)(EAX));
  /* 110e4feb lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 110e4ff1 call 0x110e6d40 */
  push32(0x110e4ff6u); f_110e6d40();
  /* 110e4ff6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e4ff7 pop ecx */
  ECX = (pop32());
  /* 110e4ff8 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e4ffb jbe 0x110e5026 */
  if ((C.cf||C.zf)) goto L_110e5026;
  /* 110e4ffd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110e5003 push eax */
  push32((uint32_t)(EAX));
  /* 110e5004 call 0x110e6d40 */
  push32(0x110e5009u); f_110e6d40();
  /* 110e5009 mov edi, eax */
  EDI = (EAX);
  /* 110e500b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 110e5011 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5014 push 3 */
  push32((uint32_t)(0x3u));
  /* 110e5016 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5018 push 0x110e94c4 */
  push32((uint32_t)(0x110e94c4u));
  /* 110e501d push edi */
  push32((uint32_t)(EDI));
  /* 110e501e call 0x110e2ba0 */
  push32(0x110e5023u); f_110e2ba0();
  /* 110e5023 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e5026:;
  /* 110e5026 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110e502c push 0x110e94a8 */
  push32((uint32_t)(0x110e94a8u));
  /* 110e5031 push eax */
  push32((uint32_t)(EAX));
  /* 110e5032 call 0x110e6c50 */
  push32(0x110e5037u); f_110e6c50();
  /* 110e5037 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110e503d push edi */
  push32((uint32_t)(EDI));
  /* 110e503e push eax */
  push32((uint32_t)(EAX));
  /* 110e503f call 0x110e6c60 */
  push32(0x110e5044u); f_110e6c60();
  /* 110e5044 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110e504a push 0x110e94a4 */
  push32((uint32_t)(0x110e94a4u));
  /* 110e504f push eax */
  push32((uint32_t)(EAX));
  /* 110e5050 call 0x110e6c60 */
  push32(0x110e5055u); f_110e6c60();
  /* 110e5055 push dword ptr [esi + 0x110ea76c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x110ea76c))));
  /* 110e505b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110e5061 push eax */
  push32((uint32_t)(EAX));
  /* 110e5062 call 0x110e6c60 */
  push32(0x110e5067u); f_110e6c60();
  /* 110e5067 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 110e506c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 110e5072 push 0x110e947c */
  push32((uint32_t)(0x110e947cu));
  /* 110e5077 push eax */
  push32((uint32_t)(EAX));
  /* 110e5078 call 0x110e743f */
  push32(0x110e507du); f_110e743f();
  /* 110e507d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5080 pop edi */
  EDI = (pop32());
  /* 110e5081 jmp 0x110e50a9 */
  goto L_110e50a9;
L_110e5083:;
  /* 110e5083 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 110e5086 lea esi, [esi + 0x110ea76c] */
  ESI = ((uint32_t)(ESI + 0x110ea76c));
  /* 110e508c push 0 */
  push32((uint32_t)(0x0u));
  /* 110e508e push eax */
  push32((uint32_t)(EAX));
  /* 110e508f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110e5091 call 0x110e6d40 */
  push32(0x110e5096u); f_110e6d40();
  /* 110e5096 pop ecx */
  ECX = (pop32());
  /* 110e5097 push eax */
  push32((uint32_t)(EAX));
  /* 110e5098 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110e509a push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 110e509c call dword ptr [0x110e9094] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9094))), 0x110e50a2u);
  /* 110e50a2 push eax */
  push32((uint32_t)(EAX));
  /* 110e50a3 call dword ptr [0x110e9050] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9050))), 0x110e50a9u);
L_110e50a9:;
  /* 110e50a9 pop esi */
  ESI = (pop32());
  /* 110e50aa leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e50ab ret  */
  ESPCHK(0x110e4f59u, _esp0);
  ESP += 4; return;
}

/* FUN_100050ac @ 0x110e50ac (72 bytes, 17 insns) */
void f_110e50ac(void) {
  FTRACE(0x110e50acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e50ac push 0x140 */
  push32((uint32_t)(0x140u));
  /* 110e50b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e50b3 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e50b9 call dword ptr [0x110e908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e908c))), 0x110e50bfu);
  /* 110e50bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e50c1 mov dword ptr [0x110edcdc], eax */
  w32((uint32_t)(0x110edcdc), (EAX));
  /* 110e50c6 jne 0x110e50c9 */
  if (!C.zf) goto L_110e50c9;
  /* 110e50c8 ret  */
  ESPCHK(0x110e50acu, _esp0);
  ESP += 4; return;
L_110e50c9:;
  /* 110e50c9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e50cd and dword ptr [0x110edcd4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110edcd4)))&(0x0u); w32((uint32_t)(0x110edcd4), (_r)); fl_logic(_r,32); }
  /* 110e50d4 and dword ptr [0x110edcd8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110edcd8)))&(0x0u); w32((uint32_t)(0x110edcd8), (_r)); fl_logic(_r,32); }
  /* 110e50db push 1 */
  push32((uint32_t)(0x1u));
  /* 110e50dd mov dword ptr [0x110edcd0], eax */
  w32((uint32_t)(0x110edcd0), (EAX));
  /* 110e50e2 mov dword ptr [0x110edce0], ecx */
  w32((uint32_t)(0x110edce0), (ECX));
  /* 110e50e8 mov dword ptr [0x110edcc8], 0x10 */
  w32((uint32_t)(0x110edcc8), (0x10u));
  /* 110e50f2 pop eax */
  EAX = (pop32());
  /* 110e50f3 ret  */
  ESPCHK(0x110e50acu, _esp0);
  ESP += 4; return;
}

/* FUN_100050f4 @ 0x110e50f4 (43 bytes, 14 insns) */
void f_110e50f4(void) {
  FTRACE(0x110e50f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e50f4 mov eax, dword ptr [0x110edcd8] */
  EAX = (r32((uint32_t)(0x110edcd8)));
  /* 110e50f9 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 110e50fc mov eax, dword ptr [0x110edcdc] */
  EAX = (r32((uint32_t)(0x110edcdc)));
  /* 110e5101 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_110e5104:;
  /* 110e5104 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5106 jae 0x110e511c */
  if (!C.cf) goto L_110e511c;
  /* 110e5108 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e510c sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e510f cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5115 jb 0x110e511e */
  if (C.cf) goto L_110e511e;
  /* 110e5117 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e511a jmp 0x110e5104 */
  goto L_110e5104;
L_110e511c:;
  /* 110e511c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e511e:;
  /* 110e511e ret  */
  ESPCHK(0x110e50f4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000511f @ 0x110e511f (809 bytes, 265 insns) */
void f_110e511f(void) {
  FTRACE(0x110e511fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e511f push ebp */
  push32((uint32_t)(EBP));
  /* 110e5120 mov ebp, esp */
  EBP = (ESP);
  /* 110e5122 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5125 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5128 push ebx */
  push32((uint32_t)(EBX));
  /* 110e5129 push esi */
  push32((uint32_t)(ESI));
  /* 110e512a mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e512d mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 110e5130 push edi */
  push32((uint32_t)(EDI));
  /* 110e5131 mov edi, esi */
  EDI = (ESI);
  /* 110e5133 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5136 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5139 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 110e513c mov ecx, edi */
  ECX = (EDI);
  /* 110e513e imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e5144 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 110e514b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110e514e mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 110e5150 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e5151 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 110e5154 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110e5157 jne 0x110e5443 */
  if (!C.zf) goto L_110e5443;
  /* 110e515d mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 110e5160 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 110e5163 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 110e5166 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 110e5169 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 110e516c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110e516f test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 110e5172 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 110e5175 jne 0x110e51f5 */
  if (!C.zf) goto L_110e51f5;
  /* 110e5177 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 110e517a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e517b cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e517e jbe 0x110e5183 */
  if ((C.cf||C.zf)) goto L_110e5183;
  /* 110e5180 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110e5182 pop edx */
  EDX = (pop32());
L_110e5183:;
  /* 110e5183 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 110e5186 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5189 jne 0x110e51d7 */
  if (!C.zf) goto L_110e51d7;
  /* 110e518b cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e518e jae 0x110e51ae */
  if (!C.cf) goto L_110e51ae;
  /* 110e5190 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110e5195 mov ecx, edx */
  ECX = (EDX);
  /* 110e5197 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110e5199 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 110e519d not ebx */
  EBX = (~(EBX));
  /* 110e519f and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 110e51a3 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 110e51a5 jne 0x110e51cf */
  if (!C.zf) goto L_110e51cf;
  /* 110e51a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e51aa and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 110e51ac jmp 0x110e51cf */
  goto L_110e51cf;
L_110e51ae:;
  /* 110e51ae lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 110e51b1 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110e51b6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110e51b8 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 110e51bc not ebx */
  EBX = (~(EBX));
  /* 110e51be and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 110e51c5 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 110e51c7 jne 0x110e51cf */
  if (!C.zf) goto L_110e51cf;
  /* 110e51c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e51cc and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_110e51cf:;
  /* 110e51cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e51d2 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e51d5 jmp 0x110e51da */
  goto L_110e51da;
L_110e51d7:;
  /* 110e51d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_110e51da:;
  /* 110e51da mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 110e51dd mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 110e51e0 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e51e3 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 110e51e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e51e9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110e51ec mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 110e51ef mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 110e51f2 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_110e51f5:;
  /* 110e51f5 mov edx, ecx */
  EDX = (ECX);
  /* 110e51f7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 110e51fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e51fb cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e51fe jbe 0x110e5203 */
  if ((C.cf||C.zf)) goto L_110e5203;
  /* 110e5200 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110e5202 pop edx */
  EDX = (pop32());
L_110e5203:;
  /* 110e5203 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e5206 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 110e5209 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 110e520c jne 0x110e52a6 */
  if (!C.zf) goto L_110e52a6;
  /* 110e5212 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5215 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 110e5218 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 110e521b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110e521d mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 110e5220 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110e5221 pop esi */
  ESI = (pop32());
  /* 110e5222 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5224 jbe 0x110e5228 */
  if ((C.cf||C.zf)) goto L_110e5228;
  /* 110e5226 mov ebx, esi */
  EBX = (ESI);
L_110e5228:;
  /* 110e5228 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e522b mov edx, ecx */
  EDX = (ECX);
  /* 110e522d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110e5230 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 110e5233 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e5234 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5236 jbe 0x110e523a */
  if ((C.cf||C.zf)) goto L_110e523a;
  /* 110e5238 mov edx, esi */
  EDX = (ESI);
L_110e523a:;
  /* 110e523a cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e523c je 0x110e52a1 */
  if (C.zf) goto L_110e52a1;
  /* 110e523e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e5241 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 110e5244 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5247 jne 0x110e5289 */
  if (!C.zf) goto L_110e5289;
  /* 110e5249 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e524c jae 0x110e526a */
  if (!C.cf) goto L_110e526a;
  /* 110e524e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 110e5253 mov ecx, ebx */
  ECX = (EBX);
  /* 110e5255 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 110e5257 not esi */
  ESI = (~(ESI));
  /* 110e5259 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 110e525d dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 110e5261 jne 0x110e5289 */
  if (!C.zf) goto L_110e5289;
  /* 110e5263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5266 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 110e5268 jmp 0x110e5289 */
  goto L_110e5289;
L_110e526a:;
  /* 110e526a lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 110e526d mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 110e5272 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 110e5274 not esi */
  ESI = (~(ESI));
  /* 110e5276 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 110e527d dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 110e5281 jne 0x110e5289 */
  if (!C.zf) goto L_110e5289;
  /* 110e5283 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5286 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_110e5289:;
  /* 110e5289 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e528c mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 110e528f mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 110e5292 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 110e5295 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110e5298 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 110e529b mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 110e529e mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_110e52a1:;
  /* 110e52a1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 110e52a4 jmp 0x110e52a9 */
  goto L_110e52a9;
L_110e52a6:;
  /* 110e52a6 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_110e52a9:;
  /* 110e52a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e52ad jne 0x110e52b7 */
  if (!C.zf) goto L_110e52b7;
  /* 110e52af cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e52b1 je 0x110e5338 */
  if (C.zf) goto L_110e5338;
L_110e52b7:;
  /* 110e52b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110e52ba mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 110e52be lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 110e52c1 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 110e52c4 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 110e52c7 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 110e52ca mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 110e52cd mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 110e52d0 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 110e52d3 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e52d6 jne 0x110e5338 */
  if (!C.zf) goto L_110e5338;
  /* 110e52d8 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 110e52dc cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e52df mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 110e52e2 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 110e52e4 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 110e52e8 jae 0x110e530f */
  if (!C.cf) goto L_110e530f;
  /* 110e52ea cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e52ee jne 0x110e52fe */
  if (!C.zf) goto L_110e52fe;
  /* 110e52f0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110e52f5 mov ecx, edx */
  ECX = (EDX);
  /* 110e52f7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110e52f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e52fc or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_110e52fe:;
  /* 110e52fe mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110e5303 mov ecx, edx */
  ECX = (EDX);
  /* 110e5305 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110e5307 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 110e530b or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e530d jmp 0x110e5338 */
  goto L_110e5338;
L_110e530f:;
  /* 110e530f cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e5313 jne 0x110e5325 */
  if (!C.zf) goto L_110e5325;
  /* 110e5315 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 110e5318 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110e531d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110e531f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5322 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_110e5325:;
  /* 110e5325 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 110e5328 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110e532d shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110e532f lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 110e5336 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_110e5338:;
  /* 110e5338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e533b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110e533d mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 110e5341 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110e5344 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 110e5346 jne 0x110e5443 */
  if (!C.zf) goto L_110e5443;
  /* 110e534c mov eax, dword ptr [0x110edcd4] */
  EAX = (r32((uint32_t)(0x110edcd4)));
  /* 110e5351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e5353 je 0x110e5435 */
  if (C.zf) goto L_110e5435;
  /* 110e5359 mov ecx, dword ptr [0x110edccc] */
  ECX = (r32((uint32_t)(0x110edccc)));
  /* 110e535f mov esi, dword ptr [0x110e9054] */
  ESI = (r32((uint32_t)(0x110e9054)));
  /* 110e5365 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 110e5368 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e536b mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 110e5370 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 110e5375 push ebx */
  push32((uint32_t)(EBX));
  /* 110e5376 push ecx */
  push32((uint32_t)(ECX));
  /* 110e5377 call esi */
  call_ind((uint32_t)(ESI), 0x110e5379u);
  /* 110e5379 mov ecx, dword ptr [0x110edccc] */
  ECX = (r32((uint32_t)(0x110edccc)));
  /* 110e537f mov eax, dword ptr [0x110edcd4] */
  EAX = (r32((uint32_t)(0x110edcd4)));
  /* 110e5384 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110e5389 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110e538b or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 110e538e mov eax, dword ptr [0x110edcd4] */
  EAX = (r32((uint32_t)(0x110edcd4)));
  /* 110e5393 mov ecx, dword ptr [0x110edccc] */
  ECX = (r32((uint32_t)(0x110edccc)));
  /* 110e5399 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 110e539c and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 110e53a4 mov eax, dword ptr [0x110edcd4] */
  EAX = (r32((uint32_t)(0x110edcd4)));
  /* 110e53a9 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 110e53ac dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 110e53af mov eax, dword ptr [0x110edcd4] */
  EAX = (r32((uint32_t)(0x110edcd4)));
  /* 110e53b4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110e53b7 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e53bb jne 0x110e53c6 */
  if (!C.zf) goto L_110e53c6;
  /* 110e53bd and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 110e53c1 mov eax, dword ptr [0x110edcd4] */
  EAX = (r32((uint32_t)(0x110edcd4)));
L_110e53c6:;
  /* 110e53c6 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e53ca jne 0x110e5435 */
  if (!C.zf) goto L_110e5435;
  /* 110e53cc push ebx */
  push32((uint32_t)(EBX));
  /* 110e53cd push 0 */
  push32((uint32_t)(0x0u));
  /* 110e53cf push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 110e53d2 call esi */
  call_ind((uint32_t)(ESI), 0x110e53d4u);
  /* 110e53d4 mov eax, dword ptr [0x110edcd4] */
  EAX = (r32((uint32_t)(0x110edcd4)));
  /* 110e53d9 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 110e53dc push 0 */
  push32((uint32_t)(0x0u));
  /* 110e53de push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e53e4 call dword ptr [0x110e9074] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9074))), 0x110e53eau);
  /* 110e53ea mov eax, dword ptr [0x110edcd8] */
  EAX = (r32((uint32_t)(0x110edcd8)));
  /* 110e53ef mov edx, dword ptr [0x110edcdc] */
  EDX = (r32((uint32_t)(0x110edcdc)));
  /* 110e53f5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 110e53f8 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 110e53fb mov ecx, eax */
  ECX = (EAX);
  /* 110e53fd mov eax, dword ptr [0x110edcd4] */
  EAX = (r32((uint32_t)(0x110edcd4)));
  /* 110e5402 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5404 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 110e5408 push ecx */
  push32((uint32_t)(ECX));
  /* 110e5409 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 110e540c push ecx */
  push32((uint32_t)(ECX));
  /* 110e540d push eax */
  push32((uint32_t)(EAX));
  /* 110e540e call 0x110e74d0 */
  push32(0x110e5413u); f_110e74d0();
  /* 110e5413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5416 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5419 dec dword ptr [0x110edcd8] */
  { uint32_t _r=(r32((uint32_t)(0x110edcd8)))-1; w32((uint32_t)(0x110edcd8), (_r)); fl_dec(_r,32); }
  /* 110e541f cmp eax, dword ptr [0x110edcd4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110edcd4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5425 jbe 0x110e542b */
  if ((C.cf||C.zf)) goto L_110e542b;
  /* 110e5427 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_110e542b:;
  /* 110e542b mov eax, dword ptr [0x110edcdc] */
  EAX = (r32((uint32_t)(0x110edcdc)));
  /* 110e5430 mov dword ptr [0x110edcd0], eax */
  w32((uint32_t)(0x110edcd0), (EAX));
L_110e5435:;
  /* 110e5435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5438 mov dword ptr [0x110edccc], edi */
  w32((uint32_t)(0x110edccc), (EDI));
  /* 110e543e mov dword ptr [0x110edcd4], eax */
  w32((uint32_t)(0x110edcd4), (EAX));
L_110e5443:;
  /* 110e5443 pop edi */
  EDI = (pop32());
  /* 110e5444 pop esi */
  ESI = (pop32());
  /* 110e5445 pop ebx */
  EBX = (pop32());
  /* 110e5446 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e5447 ret  */
  ESPCHK(0x110e511fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005448 @ 0x110e5448 (777 bytes, 275 insns) */
void f_110e5448(void) {
  FTRACE(0x110e5448u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5448 push ebp */
  push32((uint32_t)(EBP));
  /* 110e5449 mov ebp, esp */
  EBP = (ESP);
  /* 110e544b sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e544e mov eax, dword ptr [0x110edcd8] */
  EAX = (r32((uint32_t)(0x110edcd8)));
  /* 110e5453 mov edx, dword ptr [0x110edcdc] */
  EDX = (r32((uint32_t)(0x110edcdc)));
  /* 110e5459 push ebx */
  push32((uint32_t)(EBX));
  /* 110e545a push esi */
  push32((uint32_t)(ESI));
  /* 110e545b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 110e545e push edi */
  push32((uint32_t)(EDI));
  /* 110e545f lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 110e5462 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5465 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 110e5468 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 110e546b and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 110e546e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110e5471 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 110e5474 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110e5475 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5478 jge 0x110e5488 */
  if ((C.sf==C.of)) goto L_110e5488;
  /* 110e547a or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 110e547d shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 110e547f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 110e5483 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 110e5486 jmp 0x110e5498 */
  goto L_110e5498;
L_110e5488:;
  /* 110e5488 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e548b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e548e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 110e5490 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 110e5492 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 110e5495 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110e5498:;
  /* 110e5498 mov eax, dword ptr [0x110edcd0] */
  EAX = (r32((uint32_t)(0x110edcd0)));
  /* 110e549d mov ebx, eax */
  EBX = (EAX);
  /* 110e549f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e54a1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110e54a4 jae 0x110e54bf */
  if (!C.cf) goto L_110e54bf;
L_110e54a6:;
  /* 110e54a6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 110e54a9 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 110e54ab and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 110e54ae and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 110e54b0 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 110e54b2 jne 0x110e54bf */
  if (!C.zf) goto L_110e54bf;
  /* 110e54b4 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e54b7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e54ba mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110e54bd jb 0x110e54a6 */
  if (C.cf) goto L_110e54a6;
L_110e54bf:;
  /* 110e54bf cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e54c2 jne 0x110e553d */
  if (!C.zf) goto L_110e553d;
  /* 110e54c4 mov ebx, edx */
  EBX = (EDX);
L_110e54c6:;
  /* 110e54c6 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e54c8 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110e54cb jae 0x110e54e2 */
  if (!C.cf) goto L_110e54e2;
  /* 110e54cd mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 110e54d0 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 110e54d2 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 110e54d5 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 110e54d7 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 110e54d9 jne 0x110e54e0 */
  if (!C.zf) goto L_110e54e0;
  /* 110e54db add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e54de jmp 0x110e54c6 */
  goto L_110e54c6;
L_110e54e0:;
  /* 110e54e0 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_110e54e2:;
  /* 110e54e2 jne 0x110e553d */
  if (!C.zf) goto L_110e553d;
L_110e54e4:;
  /* 110e54e4 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e54e7 jae 0x110e54fa */
  if (!C.cf) goto L_110e54fa;
  /* 110e54e9 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e54ed jne 0x110e54f7 */
  if (!C.zf) goto L_110e54f7;
  /* 110e54ef add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e54f2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110e54f5 jmp 0x110e54e4 */
  goto L_110e54e4;
L_110e54f7:;
  /* 110e54f7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_110e54fa:;
  /* 110e54fa jne 0x110e5522 */
  if (!C.zf) goto L_110e5522;
  /* 110e54fc mov ebx, edx */
  EBX = (EDX);
L_110e54fe:;
  /* 110e54fe cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5500 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110e5503 jae 0x110e5512 */
  if (!C.cf) goto L_110e5512;
  /* 110e5505 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5509 jne 0x110e5510 */
  if (!C.zf) goto L_110e5510;
  /* 110e550b add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e550e jmp 0x110e54fe */
  goto L_110e54fe;
L_110e5510:;
  /* 110e5510 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_110e5512:;
  /* 110e5512 jne 0x110e5522 */
  if (!C.zf) goto L_110e5522;
  /* 110e5514 call 0x110e5751 */
  push32(0x110e5519u); f_110e5751();
  /* 110e5519 mov ebx, eax */
  EBX = (EAX);
  /* 110e551b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110e551d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110e5520 je 0x110e5536 */
  if (C.zf) goto L_110e5536;
L_110e5522:;
  /* 110e5522 push ebx */
  push32((uint32_t)(EBX));
  /* 110e5523 call 0x110e5802 */
  push32(0x110e5528u); f_110e5802();
  /* 110e5528 pop ecx */
  ECX = (pop32());
  /* 110e5529 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 110e552c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110e552e mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 110e5531 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5534 jne 0x110e553d */
  if (!C.zf) goto L_110e553d;
L_110e5536:;
  /* 110e5536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e5538 jmp 0x110e574c */
  goto L_110e574c;
L_110e553d:;
  /* 110e553d mov dword ptr [0x110edcd0], ebx */
  w32((uint32_t)(0x110edcd0), (EBX));
  /* 110e5543 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 110e5546 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 110e5548 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e554b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110e554e je 0x110e5564 */
  if (C.zf) goto L_110e5564;
  /* 110e5550 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 110e5557 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 110e555b and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 110e555e and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 110e5560 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 110e5562 jne 0x110e559b */
  if (!C.zf) goto L_110e559b;
L_110e5564:;
  /* 110e5564 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 110e556a mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 110e556d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 110e5570 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 110e5573 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e5577 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 110e557a or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 110e557c mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 110e557f jne 0x110e5598 */
  if (!C.zf) goto L_110e5598;
L_110e5581:;
  /* 110e5581 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 110e5587 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 110e558a and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 110e558d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5590 mov edi, esi */
  EDI = (ESI);
  /* 110e5592 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 110e5594 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 110e5596 je 0x110e5581 */
  if (C.zf) goto L_110e5581;
L_110e5598:;
  /* 110e5598 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_110e559b:;
  /* 110e559b mov ecx, edx */
  ECX = (EDX);
  /* 110e559d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e559f imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e55a5 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 110e55ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110e55af mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 110e55b3 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 110e55b5 jne 0x110e55c4 */
  if (!C.zf) goto L_110e55c4;
  /* 110e55b7 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 110e55be push 0x20 */
  push32((uint32_t)(0x20u));
  /* 110e55c0 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 110e55c3 pop edi */
  EDI = (pop32());
L_110e55c4:;
  /* 110e55c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110e55c6 jl 0x110e55cd */
  if ((C.sf!=C.of)) goto L_110e55cd;
  /* 110e55c8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 110e55ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110e55cb jmp 0x110e55c4 */
  goto L_110e55c4;
L_110e55cd:;
  /* 110e55cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110e55d0 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 110e55d4 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 110e55d6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e55d9 mov esi, ecx */
  ESI = (ECX);
  /* 110e55db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110e55de sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 110e55e1 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 110e55e2 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e55e5 jle 0x110e55ea */
  if ((C.zf||C.sf!=C.of)) goto L_110e55ea;
  /* 110e55e7 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110e55e9 pop esi */
  ESI = (pop32());
L_110e55ea:;
  /* 110e55ea cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e55ec je 0x110e56ff */
  if (C.zf) goto L_110e56ff;
  /* 110e55f2 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110e55f5 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e55f8 jne 0x110e565b */
  if (!C.zf) goto L_110e565b;
  /* 110e55fa cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e55fd jge 0x110e562a */
  if ((C.sf==C.of)) goto L_110e562a;
  /* 110e55ff mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110e5604 mov ecx, edi */
  ECX = (EDI);
  /* 110e5606 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110e5608 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e560b lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 110e560f not ebx */
  EBX = (~(EBX));
  /* 110e5611 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 110e5614 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 110e5618 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 110e561c dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 110e561e jne 0x110e5658 */
  if (!C.zf) goto L_110e5658;
  /* 110e5620 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5623 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110e5626 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 110e5628 jmp 0x110e565b */
  goto L_110e565b;
L_110e562a:;
  /* 110e562a lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 110e562d mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 110e5632 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 110e5634 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e5637 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 110e563b lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 110e5642 not ebx */
  EBX = (~(EBX));
  /* 110e5644 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 110e5646 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 110e5648 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 110e564b jne 0x110e5658 */
  if (!C.zf) goto L_110e5658;
  /* 110e564d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5650 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110e5653 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 110e5656 jmp 0x110e565b */
  goto L_110e565b;
L_110e5658:;
  /* 110e5658 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_110e565b:;
  /* 110e565b mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 110e565e mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 110e5661 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5665 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 110e5668 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110e566b mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 110e566e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 110e5671 je 0x110e570b */
  if (C.zf) goto L_110e570b;
  /* 110e5677 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110e567a mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 110e567e lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 110e5681 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 110e5684 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 110e5687 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 110e568a mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110e568d mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 110e5690 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 110e5693 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5696 jne 0x110e56fc */
  if (!C.zf) goto L_110e56fc;
  /* 110e5698 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 110e569c cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e569f mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 110e56a2 jge 0x110e56cd */
  if ((C.sf==C.of)) goto L_110e56cd;
  /* 110e56a4 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 110e56a6 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e56aa mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 110e56ae jne 0x110e56bb */
  if (!C.zf) goto L_110e56bb;
  /* 110e56b0 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 110e56b5 mov ecx, esi */
  ECX = (ESI);
  /* 110e56b7 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 110e56b9 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_110e56bb:;
  /* 110e56bb mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 110e56c0 mov ecx, esi */
  ECX = (ESI);
  /* 110e56c2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 110e56c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e56c7 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 110e56cb jmp 0x110e56fc */
  goto L_110e56fc;
L_110e56cd:;
  /* 110e56cd inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 110e56cf cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e56d3 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 110e56d7 jne 0x110e56e6 */
  if (!C.zf) goto L_110e56e6;
  /* 110e56d9 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 110e56dc mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 110e56e1 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 110e56e3 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_110e56e6:;
  /* 110e56e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e56e9 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 110e56f0 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 110e56f3 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 110e56f8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 110e56fa or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_110e56fc:;
  /* 110e56fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_110e56ff:;
  /* 110e56ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110e5701 je 0x110e570e */
  if (C.zf) goto L_110e570e;
  /* 110e5703 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110e5705 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 110e5709 jmp 0x110e570e */
  goto L_110e570e;
L_110e570b:;
  /* 110e570b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_110e570e:;
  /* 110e570e mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 110e5711 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5713 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 110e5716 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110e5718 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 110e571c mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 110e571f mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 110e5721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110e5723 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 110e5726 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 110e5728 jne 0x110e5744 */
  if (!C.zf) goto L_110e5744;
  /* 110e572a cmp ebx, dword ptr [0x110edcd4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x110edcd4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5730 jne 0x110e5744 */
  if (!C.zf) goto L_110e5744;
  /* 110e5732 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e5735 cmp ecx, dword ptr [0x110edccc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110edccc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e573b jne 0x110e5744 */
  if (!C.zf) goto L_110e5744;
  /* 110e573d and dword ptr [0x110edcd4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x110edcd4)))&(0x0u); w32((uint32_t)(0x110edcd4), (_r)); fl_logic(_r,32); }
L_110e5744:;
  /* 110e5744 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e5747 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110e5749 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_110e574c:;
  /* 110e574c pop edi */
  EDI = (pop32());
  /* 110e574d pop esi */
  ESI = (pop32());
  /* 110e574e pop ebx */
  EBX = (pop32());
  /* 110e574f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e5750 ret  */
  ESPCHK(0x110e5448u, _esp0);
  ESP += 4; return;
}

/* FUN_10005751 @ 0x110e5751 (177 bytes, 53 insns) */
void f_110e5751(void) {
  FTRACE(0x110e5751u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5751 mov eax, dword ptr [0x110edcd8] */
  EAX = (r32((uint32_t)(0x110edcd8)));
  /* 110e5756 mov ecx, dword ptr [0x110edcc8] */
  ECX = (r32((uint32_t)(0x110edcc8)));
  /* 110e575c push esi */
  push32((uint32_t)(ESI));
  /* 110e575d push edi */
  push32((uint32_t)(EDI));
  /* 110e575e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 110e5760 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5762 jne 0x110e5794 */
  if (!C.zf) goto L_110e5794;
  /* 110e5764 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 110e5768 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 110e576b push eax */
  push32((uint32_t)(EAX));
  /* 110e576c push dword ptr [0x110edcdc] */
  push32((uint32_t)(r32((uint32_t)(0x110edcdc))));
  /* 110e5772 push edi */
  push32((uint32_t)(EDI));
  /* 110e5773 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e5779 call dword ptr [0x110e904c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e904c))), 0x110e577fu);
  /* 110e577f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5781 je 0x110e57e4 */
  if (C.zf) goto L_110e57e4;
  /* 110e5783 add dword ptr [0x110edcc8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x110edcc8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x110edcc8), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e578a mov dword ptr [0x110edcdc], eax */
  w32((uint32_t)(0x110edcdc), (EAX));
  /* 110e578f mov eax, dword ptr [0x110edcd8] */
  EAX = (r32((uint32_t)(0x110edcd8)));
L_110e5794:;
  /* 110e5794 mov ecx, dword ptr [0x110edcdc] */
  ECX = (r32((uint32_t)(0x110edcdc)));
  /* 110e579a push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 110e579f push 8 */
  push32((uint32_t)(0x8u));
  /* 110e57a1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 110e57a4 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e57aa lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 110e57ad call dword ptr [0x110e908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e908c))), 0x110e57b3u);
  /* 110e57b3 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e57b5 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 110e57b8 je 0x110e57e4 */
  if (C.zf) goto L_110e57e4;
  /* 110e57ba push 4 */
  push32((uint32_t)(0x4u));
  /* 110e57bc push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 110e57c1 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 110e57c6 push edi */
  push32((uint32_t)(EDI));
  /* 110e57c7 call dword ptr [0x110e9058] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9058))), 0x110e57cdu);
  /* 110e57cd cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e57cf mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 110e57d2 jne 0x110e57e8 */
  if (!C.zf) goto L_110e57e8;
  /* 110e57d4 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 110e57d7 push edi */
  push32((uint32_t)(EDI));
  /* 110e57d8 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e57de call dword ptr [0x110e9074] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9074))), 0x110e57e4u);
L_110e57e4:;
  /* 110e57e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e57e6 jmp 0x110e57ff */
  goto L_110e57ff;
L_110e57e8:;
  /* 110e57e8 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 110e57ec mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 110e57ee mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 110e57f1 inc dword ptr [0x110edcd8] */
  { uint32_t _r=(r32((uint32_t)(0x110edcd8)))+1; w32((uint32_t)(0x110edcd8), (_r)); fl_inc(_r,32); }
  /* 110e57f7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 110e57fa or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 110e57fd mov eax, esi */
  EAX = (ESI);
L_110e57ff:;
  /* 110e57ff pop edi */
  EDI = (pop32());
  /* 110e5800 pop esi */
  ESI = (pop32());
  /* 110e5801 ret  */
  ESPCHK(0x110e5751u, _esp0);
  ESP += 4; return;
}

/* FUN_10005802 @ 0x110e5802 (251 bytes, 85 insns) */
void f_110e5802(void) {
  FTRACE(0x110e5802u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5802 push ebp */
  push32((uint32_t)(EBP));
  /* 110e5803 mov ebp, esp */
  EBP = (ESP);
  /* 110e5805 push ecx */
  push32((uint32_t)(ECX));
  /* 110e5806 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5809 push ebx */
  push32((uint32_t)(EBX));
  /* 110e580a push esi */
  push32((uint32_t)(ESI));
  /* 110e580b push edi */
  push32((uint32_t)(EDI));
  /* 110e580c mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 110e580f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 110e5812 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_110e5814:;
  /* 110e5814 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e5816 jl 0x110e581d */
  if ((C.sf!=C.of)) goto L_110e581d;
  /* 110e5818 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 110e581a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e581b jmp 0x110e5814 */
  goto L_110e5814;
L_110e581d:;
  /* 110e581d mov eax, ebx */
  EAX = (EBX);
  /* 110e581f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 110e5821 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e5827 pop edx */
  EDX = (pop32());
  /* 110e5828 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 110e582f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110e5832:;
  /* 110e5832 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 110e5835 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 110e5838 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e583b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e583c jne 0x110e5832 */
  if (!C.zf) goto L_110e5832;
  /* 110e583e mov edi, ebx */
  EDI = (EBX);
  /* 110e5840 push 4 */
  push32((uint32_t)(0x4u));
  /* 110e5842 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 110e5845 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5848 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 110e584d push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 110e5852 push edi */
  push32((uint32_t)(EDI));
  /* 110e5853 call dword ptr [0x110e9058] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9058))), 0x110e5859u);
  /* 110e5859 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e585b jne 0x110e5865 */
  if (!C.zf) goto L_110e5865;
  /* 110e585d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110e5860 jmp 0x110e58f8 */
  goto L_110e58f8;
L_110e5865:;
  /* 110e5865 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 110e586b cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e586d ja 0x110e58ab */
  if ((!C.cf&&!C.zf)) goto L_110e58ab;
  /* 110e586f lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_110e5872:;
  /* 110e5872 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 110e5876 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 110e587d lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 110e5883 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 110e588a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110e588c lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 110e5892 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 110e5895 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 110e589f add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e58a4 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 110e58a7 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e58a9 jbe 0x110e5872 */
  if ((C.cf||C.zf)) goto L_110e5872;
L_110e58ab:;
  /* 110e58ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e58ae lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 110e58b1 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e58b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e58b8 pop edi */
  EDI = (pop32());
  /* 110e58b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 110e58bc mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 110e58bf lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 110e58c2 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 110e58c5 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 110e58c8 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 110e58cd mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 110e58d4 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 110e58d7 mov cl, al */
  CL = (AL);
  /* 110e58d9 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 110e58db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e58dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e58e0 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 110e58e3 jne 0x110e58e8 */
  if (!C.zf) goto L_110e58e8;
  /* 110e58e5 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_110e58e8:;
  /* 110e58e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 110e58ed mov ecx, ebx */
  ECX = (EBX);
  /* 110e58ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 110e58f1 not edx */
  EDX = (~(EDX));
  /* 110e58f3 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 110e58f6 mov eax, ebx */
  EAX = (EBX);
L_110e58f8:;
  /* 110e58f8 pop edi */
  EDI = (pop32());
  /* 110e58f9 pop esi */
  ESI = (pop32());
  /* 110e58fa pop ebx */
  EBX = (pop32());
  /* 110e58fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e58fc ret  */
  ESPCHK(0x110e5802u, _esp0);
  ESP += 4; return;
}

/* FUN_100058fd @ 0x110e58fd (324 bytes, 102 insns) */
void f_110e58fd(void) {
  FTRACE(0x110e58fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e58fd cmp dword ptr [0x110ea808], -1 */
  { uint32_t _a=(r32((uint32_t)(0x110ea808))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5904 push ebx */
  push32((uint32_t)(EBX));
  /* 110e5905 push ebp */
  push32((uint32_t)(EBP));
  /* 110e5906 push esi */
  push32((uint32_t)(ESI));
  /* 110e5907 push edi */
  push32((uint32_t)(EDI));
  /* 110e5908 jne 0x110e5911 */
  if (!C.zf) goto L_110e5911;
  /* 110e590a mov esi, 0x110ea7f8 */
  ESI = (0x110ea7f8u);
  /* 110e590f jmp 0x110e592e */
  goto L_110e592e;
L_110e5911:;
  /* 110e5911 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 110e5916 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e5918 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e591e call dword ptr [0x110e908c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e908c))), 0x110e5924u);
  /* 110e5924 mov esi, eax */
  ESI = (EAX);
  /* 110e5926 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 110e5928 je 0x110e5a3a */
  if (C.zf) goto L_110e5a3a;
L_110e592e:;
  /* 110e592e mov ebp, dword ptr [0x110e9058] */
  EBP = (r32((uint32_t)(0x110e9058)));
  /* 110e5934 push 4 */
  push32((uint32_t)(0x4u));
  /* 110e5936 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 110e593b push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 110e5940 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e5942 call ebp */
  call_ind((uint32_t)(EBP), 0x110e5944u);
  /* 110e5944 mov edi, eax */
  EDI = (EAX);
  /* 110e5946 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e5948 je 0x110e5a23 */
  if (C.zf) goto L_110e5a23;
  /* 110e594e push 4 */
  push32((uint32_t)(0x4u));
  /* 110e5950 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 110e5955 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 110e595a push ebx */
  push32((uint32_t)(EBX));
  /* 110e595b push edi */
  push32((uint32_t)(EDI));
  /* 110e595c call ebp */
  call_ind((uint32_t)(EBP), 0x110e595eu);
  /* 110e595e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e5960 je 0x110e5a15 */
  if (C.zf) goto L_110e5a15;
  /* 110e5966 mov eax, 0x110ea7f8 */
  EAX = (0x110ea7f8u);
  /* 110e596b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e596d jne 0x110e598d */
  if (!C.zf) goto L_110e598d;
  /* 110e596f cmp dword ptr [0x110ea7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110ea7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5976 jne 0x110e597d */
  if (!C.zf) goto L_110e597d;
  /* 110e5978 mov dword ptr [0x110ea7f8], eax */
  w32((uint32_t)(0x110ea7f8), (EAX));
L_110e597d:;
  /* 110e597d cmp dword ptr [0x110ea7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110ea7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5984 jne 0x110e59a2 */
  if (!C.zf) goto L_110e59a2;
  /* 110e5986 mov dword ptr [0x110ea7fc], eax */
  w32((uint32_t)(0x110ea7fc), (EAX));
  /* 110e598b jmp 0x110e59a2 */
  goto L_110e59a2;
L_110e598d:;
  /* 110e598d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 110e598f mov eax, dword ptr [0x110ea7fc] */
  EAX = (r32((uint32_t)(0x110ea7fc)));
  /* 110e5994 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 110e5997 mov dword ptr [0x110ea7fc], esi */
  w32((uint32_t)(0x110ea7fc), (ESI));
  /* 110e599d mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 110e59a0 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_110e59a2:;
  /* 110e59a2 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 110e59a8 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 110e59ae mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 110e59b1 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 110e59b4 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 110e59b7 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 110e59ba mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 110e59bd xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 110e59bf mov ecx, 0xf1 */
  ECX = (0xf1u);
L_110e59c4:;
  /* 110e59c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110e59c6 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e59c9 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 110e59cc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e59cd and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 110e59cf dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 110e59d0 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 110e59d1 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110e59d3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 110e59d6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e59d9 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e59df jl 0x110e59c4 */
  if ((C.sf!=C.of)) goto L_110e59c4;
  /* 110e59e1 push ebx */
  push32((uint32_t)(EBX));
  /* 110e59e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e59e4 push edi */
  push32((uint32_t)(EDI));
  /* 110e59e5 call 0x110e7810 */
  push32(0x110e59eau); f_110e7810();
  /* 110e59ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110e59ed:;
  /* 110e59ed mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 110e59f0 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e59f2 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e59f4 jae 0x110e5a11 */
  if (!C.cf) goto L_110e5a11;
  /* 110e59f6 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 110e59fd lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 110e5a00 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 110e5a02 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 110e5a09 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5a0f jmp 0x110e59ed */
  goto L_110e59ed;
L_110e5a11:;
  /* 110e5a11 mov eax, esi */
  EAX = (ESI);
  /* 110e5a13 jmp 0x110e5a3c */
  goto L_110e5a3c;
L_110e5a15:;
  /* 110e5a15 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 110e5a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 110e5a1c push edi */
  push32((uint32_t)(EDI));
  /* 110e5a1d call dword ptr [0x110e9054] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9054))), 0x110e5a23u);
L_110e5a23:;
  /* 110e5a23 cmp esi, 0x110ea7f8 */
  { uint32_t _a=(ESI),_b=(0x110ea7f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5a29 je 0x110e5a3a */
  if (C.zf) goto L_110e5a3a;
  /* 110e5a2b push esi */
  push32((uint32_t)(ESI));
  /* 110e5a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 110e5a2e push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e5a34 call dword ptr [0x110e9074] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9074))), 0x110e5a3au);
L_110e5a3a:;
  /* 110e5a3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e5a3c:;
  /* 110e5a3c pop edi */
  EDI = (pop32());
  /* 110e5a3d pop esi */
  ESI = (pop32());
  /* 110e5a3e pop ebp */
  EBP = (pop32());
  /* 110e5a3f pop ebx */
  EBX = (pop32());
  /* 110e5a40 ret  */
  ESPCHK(0x110e58fdu, _esp0);
  ESP += 4; return;
}

/* FUN_10005a41 @ 0x110e5a41 (86 bytes, 27 insns) */
void f_110e5a41(void) {
  FTRACE(0x110e5a41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5a41 push esi */
  push32((uint32_t)(ESI));
  /* 110e5a42 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 110e5a46 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 110e5a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 110e5a4d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 110e5a50 call dword ptr [0x110e9054] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9054))), 0x110e5a56u);
  /* 110e5a56 cmp dword ptr [0x110ec818], esi */
  { uint32_t _a=(r32((uint32_t)(0x110ec818))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5a5c jne 0x110e5a66 */
  if (!C.zf) goto L_110e5a66;
  /* 110e5a5e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 110e5a61 mov dword ptr [0x110ec818], eax */
  w32((uint32_t)(0x110ec818), (EAX));
L_110e5a66:;
  /* 110e5a66 cmp esi, 0x110ea7f8 */
  { uint32_t _a=(ESI),_b=(0x110ea7f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5a6c je 0x110e5a8e */
  if (C.zf) goto L_110e5a8e;
  /* 110e5a6e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 110e5a71 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 110e5a73 push esi */
  push32((uint32_t)(ESI));
  /* 110e5a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e5a76 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110e5a78 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110e5a7a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 110e5a7d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 110e5a80 push dword ptr [0x110edce4] */
  push32((uint32_t)(r32((uint32_t)(0x110edce4))));
  /* 110e5a86 call dword ptr [0x110e9074] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9074))), 0x110e5a8cu);
  /* 110e5a8c pop esi */
  ESI = (pop32());
  /* 110e5a8d ret  */
  ESPCHK(0x110e5a41u, _esp0);
  ESP += 4; return;
L_110e5a8e:;
  /* 110e5a8e or dword ptr [0x110ea808], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x110ea808)))|(0xffffffffu); w32((uint32_t)(0x110ea808), (_r)); fl_logic(_r,32); }
  /* 110e5a95 pop esi */
  ESI = (pop32());
  /* 110e5a96 ret  */
  ESPCHK(0x110e5a41u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a97 @ 0x110e5a97 (194 bytes, 66 insns) */
void f_110e5a97(void) {
  FTRACE(0x110e5a97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5a97 push ebp */
  push32((uint32_t)(EBP));
  /* 110e5a98 mov ebp, esp */
  EBP = (ESP);
  /* 110e5a9a push ecx */
  push32((uint32_t)(ECX));
  /* 110e5a9b push ebx */
  push32((uint32_t)(EBX));
  /* 110e5a9c push esi */
  push32((uint32_t)(ESI));
  /* 110e5a9d mov esi, dword ptr [0x110ea7fc] */
  ESI = (r32((uint32_t)(0x110ea7fc)));
  /* 110e5aa3 push edi */
  push32((uint32_t)(EDI));
L_110e5aa4:;
  /* 110e5aa4 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5aa8 je 0x110e5b42 */
  if (C.zf) goto L_110e5b42;
  /* 110e5aae and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e5ab2 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 110e5ab8 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_110e5abd:;
  /* 110e5abd cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5ac3 jne 0x110e5afe */
  if (!C.zf) goto L_110e5afe;
  /* 110e5ac5 mov eax, ebx */
  EAX = (EBX);
  /* 110e5ac7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 110e5acc add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5acf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 110e5ad4 push eax */
  push32((uint32_t)(EAX));
  /* 110e5ad5 call dword ptr [0x110e9054] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9054))), 0x110e5adbu);
  /* 110e5adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e5add je 0x110e5afe */
  if (C.zf) goto L_110e5afe;
  /* 110e5adf or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 110e5ae2 dec dword ptr [0x110ed894] */
  { uint32_t _r=(r32((uint32_t)(0x110ed894)))-1; w32((uint32_t)(0x110ed894), (_r)); fl_dec(_r,32); }
  /* 110e5ae8 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 110e5aeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e5aed je 0x110e5af3 */
  if (C.zf) goto L_110e5af3;
  /* 110e5aef cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5af1 jbe 0x110e5af6 */
  if ((C.cf||C.zf)) goto L_110e5af6;
L_110e5af3:;
  /* 110e5af3 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_110e5af6:;
  /* 110e5af6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 110e5af9 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 110e5afc je 0x110e5b0b */
  if (C.zf) goto L_110e5b0b;
L_110e5afe:;
  /* 110e5afe sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5b04 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5b07 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 110e5b09 jge 0x110e5abd */
  if ((C.sf==C.of)) goto L_110e5abd;
L_110e5b0b:;
  /* 110e5b0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b0f mov ecx, esi */
  ECX = (ESI);
  /* 110e5b11 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 110e5b14 je 0x110e5b42 */
  if (C.zf) goto L_110e5b42;
  /* 110e5b16 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b1a jne 0x110e5b42 */
  if (!C.zf) goto L_110e5b42;
  /* 110e5b1c push 1 */
  push32((uint32_t)(0x1u));
  /* 110e5b1e lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 110e5b21 pop edx */
  EDX = (pop32());
L_110e5b22:;
  /* 110e5b22 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b25 jne 0x110e5b33 */
  if (!C.zf) goto L_110e5b33;
  /* 110e5b27 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 110e5b28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5b2b cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b31 jl 0x110e5b22 */
  if ((C.sf!=C.of)) goto L_110e5b22;
L_110e5b33:;
  /* 110e5b33 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b39 jne 0x110e5b42 */
  if (!C.zf) goto L_110e5b42;
  /* 110e5b3b push ecx */
  push32((uint32_t)(ECX));
  /* 110e5b3c call 0x110e5a41 */
  push32(0x110e5b41u); f_110e5a41();
  /* 110e5b41 pop ecx */
  ECX = (pop32());
L_110e5b42:;
  /* 110e5b42 cmp esi, dword ptr [0x110ea7fc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110ea7fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b48 je 0x110e5b54 */
  if (C.zf) goto L_110e5b54;
  /* 110e5b4a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b4e jg 0x110e5aa4 */
  if ((!C.zf&&C.sf==C.of)) goto L_110e5aa4;
L_110e5b54:;
  /* 110e5b54 pop edi */
  EDI = (pop32());
  /* 110e5b55 pop esi */
  ESI = (pop32());
  /* 110e5b56 pop ebx */
  EBX = (pop32());
  /* 110e5b57 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e5b58 ret  */
  ESPCHK(0x110e5a97u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b59 @ 0x110e5b59 (87 bytes, 34 insns) */
void f_110e5b59(void) {
  FTRACE(0x110e5b59u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5b59 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e5b5d mov edx, 0x110ea7f8 */
  EDX = (0x110ea7f8u);
  /* 110e5b62 push esi */
  push32((uint32_t)(ESI));
  /* 110e5b63 mov ecx, edx */
  ECX = (EDX);
L_110e5b65:;
  /* 110e5b65 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b68 jbe 0x110e5b6f */
  if ((C.cf||C.zf)) goto L_110e5b6f;
  /* 110e5b6a cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b6d jb 0x110e5b77 */
  if (C.cf) goto L_110e5b77;
L_110e5b6f:;
  /* 110e5b6f mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 110e5b71 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b73 je 0x110e5bac */
  if (C.zf) goto L_110e5bac;
  /* 110e5b75 jmp 0x110e5b65 */
  goto L_110e5b65;
L_110e5b77:;
  /* 110e5b77 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 110e5b79 jne 0x110e5bac */
  if (!C.zf) goto L_110e5bac;
  /* 110e5b7b mov esi, eax */
  ESI = (EAX);
  /* 110e5b7d mov edx, 0x100 */
  EDX = (0x100u);
  /* 110e5b82 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 110e5b88 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5b8a jb 0x110e5bac */
  if (C.cf) goto L_110e5bac;
  /* 110e5b8c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 110e5b90 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 110e5b92 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 110e5b96 mov ecx, eax */
  ECX = (EAX);
  /* 110e5b98 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 110e5b9d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5b9f mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 110e5ba1 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5ba3 pop esi */
  ESI = (pop32());
  /* 110e5ba4 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 110e5ba7 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 110e5bab ret  */
  ESPCHK(0x110e5b59u, _esp0);
  ESP += 4; return;
L_110e5bac:;
  /* 110e5bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110e5bae pop esi */
  ESI = (pop32());
  /* 110e5baf ret  */
  ESPCHK(0x110e5b59u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bb0 @ 0x110e5bb0 (69 bytes, 19 insns) */
void f_110e5bb0(void) {
  FTRACE(0x110e5bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5bb0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 110e5bb4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 110e5bb8 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5bbb sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 110e5bbe lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 110e5bc2 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 110e5bc6 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 110e5bc9 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e5bcb and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 110e5bce cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5bd4 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 110e5bdb jne 0x110e5bf4 */
  if (!C.zf) goto L_110e5bf4;
  /* 110e5bdd inc dword ptr [0x110ed894] */
  { uint32_t _r=(r32((uint32_t)(0x110ed894)))+1; w32((uint32_t)(0x110ed894), (_r)); fl_inc(_r,32); }
  /* 110e5be3 cmp dword ptr [0x110ed894], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x110ed894))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5bea jne 0x110e5bf4 */
  if (!C.zf) goto L_110e5bf4;
  /* 110e5bec push 0x10 */
  push32((uint32_t)(0x10u));
  /* 110e5bee call 0x110e5a97 */
  push32(0x110e5bf3u); f_110e5a97();
  /* 110e5bf3 pop ecx */
  ECX = (pop32());
L_110e5bf4:;
  /* 110e5bf4 ret  */
  ESPCHK(0x110e5bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf5 @ 0x110e5bf5 (520 bytes, 180 insns) */
void f_110e5bf5(void) {
  FTRACE(0x110e5bf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5bf5 push ebp */
  push32((uint32_t)(EBP));
  /* 110e5bf6 mov ebp, esp */
  EBP = (ESP);
  /* 110e5bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 110e5bf9 push ecx */
  push32((uint32_t)(ECX));
  /* 110e5bfa push ebx */
  push32((uint32_t)(EBX));
  /* 110e5bfb push esi */
  push32((uint32_t)(ESI));
  /* 110e5bfc mov esi, dword ptr [0x110ec818] */
  ESI = (r32((uint32_t)(0x110ec818)));
  /* 110e5c02 push edi */
  push32((uint32_t)(EDI));
L_110e5c03:;
  /* 110e5c03 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 110e5c06 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5c09 je 0x110e5cae */
  if (C.zf) goto L_110e5cae;
  /* 110e5c0f mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 110e5c12 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 110e5c18 mov eax, edi */
  EAX = (EDI);
  /* 110e5c1a sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5c1c sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5c1f sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 110e5c22 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 110e5c25 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5c27 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5c29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110e5c2c jae 0x110e5c68 */
  if (!C.cf) goto L_110e5c68;
L_110e5c2e:;
  /* 110e5c2e mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 110e5c30 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5c33 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5c35 jl 0x110e5c51 */
  if ((C.sf!=C.of)) goto L_110e5c51;
  /* 110e5c37 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5c3a jbe 0x110e5c51 */
  if ((C.cf||C.zf)) goto L_110e5c51;
  /* 110e5c3c push ebx */
  push32((uint32_t)(EBX));
  /* 110e5c3d push ecx */
  push32((uint32_t)(ECX));
  /* 110e5c3e push eax */
  push32((uint32_t)(EAX));
  /* 110e5c3f call 0x110e5dfd */
  push32(0x110e5c44u); f_110e5dfd();
  /* 110e5c44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e5c49 jne 0x110e5cc0 */
  if (!C.zf) goto L_110e5cc0;
  /* 110e5c4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e5c4e mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_110e5c51:;
  /* 110e5c51 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5c54 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 110e5c5a add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5c5f cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5c61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110e5c64 jb 0x110e5c2e */
  if (C.cf) goto L_110e5c2e;
  /* 110e5c66 jmp 0x110e5c6b */
  goto L_110e5c6b;
L_110e5c68:;
  /* 110e5c68 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_110e5c6b:;
  /* 110e5c6b mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 110e5c6e mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 110e5c71 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 110e5c74 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110e5c77 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5c79 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110e5c7c jae 0x110e5cb1 */
  if (!C.cf) goto L_110e5cb1;
L_110e5c7e:;
  /* 110e5c7e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 110e5c80 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5c82 jl 0x110e5c9d */
  if ((C.sf!=C.of)) goto L_110e5c9d;
  /* 110e5c84 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5c87 jbe 0x110e5c9d */
  if ((C.cf||C.zf)) goto L_110e5c9d;
  /* 110e5c89 push ebx */
  push32((uint32_t)(EBX));
  /* 110e5c8a push eax */
  push32((uint32_t)(EAX));
  /* 110e5c8b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 110e5c8e call 0x110e5dfd */
  push32(0x110e5c93u); f_110e5dfd();
  /* 110e5c93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5c96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e5c98 jne 0x110e5cc0 */
  if (!C.zf) goto L_110e5cc0;
  /* 110e5c9a mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_110e5c9d:;
  /* 110e5c9d add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e5ca4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5ca7 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5caa jb 0x110e5c7e */
  if (C.cf) goto L_110e5c7e;
  /* 110e5cac jmp 0x110e5cb1 */
  goto L_110e5cb1;
L_110e5cae:;
  /* 110e5cae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_110e5cb1:;
  /* 110e5cb1 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 110e5cb3 cmp esi, dword ptr [0x110ec818] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x110ec818))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5cb9 je 0x110e5cd0 */
  if (C.zf) goto L_110e5cd0;
  /* 110e5cbb jmp 0x110e5c03 */
  goto L_110e5c03;
L_110e5cc0:;
  /* 110e5cc0 mov dword ptr [0x110ec818], esi */
  w32((uint32_t)(0x110ec818), (ESI));
  /* 110e5cc6 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e5cc8 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 110e5ccb jmp 0x110e5df8 */
  goto L_110e5df8;
L_110e5cd0:;
  /* 110e5cd0 mov eax, 0x110ea7f8 */
  EAX = (0x110ea7f8u);
  /* 110e5cd5 mov edi, eax */
  EDI = (EAX);
L_110e5cd7:;
  /* 110e5cd7 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5cdb je 0x110e5ce3 */
  if (C.zf) goto L_110e5ce3;
  /* 110e5cdd cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5ce1 jne 0x110e5cef */
  if (!C.zf) goto L_110e5cef;
L_110e5ce3:;
  /* 110e5ce3 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 110e5ce5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5ce7 je 0x110e5dc4 */
  if (C.zf) goto L_110e5dc4;
  /* 110e5ced jmp 0x110e5cd7 */
  goto L_110e5cd7;
L_110e5cef:;
  /* 110e5cef mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 110e5cf2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 110e5cf6 mov esi, ebx */
  ESI = (EBX);
  /* 110e5cf8 mov eax, ebx */
  EAX = (EBX);
  /* 110e5cfa sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5cfc sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5cff sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 110e5d02 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 110e5d05 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5d08 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5d0b jne 0x110e5d1e */
  if (!C.zf) goto L_110e5d1e;
L_110e5d0d:;
  /* 110e5d0d cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5d11 jge 0x110e5d1e */
  if ((C.sf==C.of)) goto L_110e5d1e;
  /* 110e5d13 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5d16 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 110e5d19 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5d1c je 0x110e5d0d */
  if (C.zf) goto L_110e5d0d;
L_110e5d1e:;
  /* 110e5d1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e5d21 push 4 */
  push32((uint32_t)(0x4u));
  /* 110e5d23 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 110e5d26 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 110e5d2b push eax */
  push32((uint32_t)(EAX));
  /* 110e5d2c push esi */
  push32((uint32_t)(ESI));
  /* 110e5d2d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110e5d30 call dword ptr [0x110e9058] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9058))), 0x110e5d36u);
  /* 110e5d36 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5d38 jne 0x110e5df6 */
  if (!C.zf) goto L_110e5df6;
  /* 110e5d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 110e5d40 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 110e5d43 push esi */
  push32((uint32_t)(ESI));
  /* 110e5d44 call 0x110e7810 */
  push32(0x110e5d49u); f_110e7810();
  /* 110e5d49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110e5d4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5d4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110e5d51 mov ecx, ebx */
  ECX = (EBX);
  /* 110e5d53 jle 0x110e5d85 */
  if ((C.zf||C.sf!=C.of)) goto L_110e5d85;
  /* 110e5d55 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 110e5d58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_110e5d5b:;
  /* 110e5d5b or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 110e5d62 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 110e5d65 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 110e5d68 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 110e5d6d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110e5d6f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 110e5d71 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 110e5d78 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5d7d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5d80 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 110e5d83 jne 0x110e5d5b */
  if (!C.zf) goto L_110e5d5b;
L_110e5d85:;
  /* 110e5d85 mov dword ptr [0x110ec818], edi */
  w32((uint32_t)(0x110ec818), (EDI));
  /* 110e5d8b lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_110e5d91:;
  /* 110e5d91 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5d93 jae 0x110e5da1 */
  if (!C.cf) goto L_110e5da1;
  /* 110e5d95 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5d98 je 0x110e5d9f */
  if (C.zf) goto L_110e5d9f;
  /* 110e5d9a add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5d9d jmp 0x110e5d91 */
  goto L_110e5d91;
L_110e5d9f:;
  /* 110e5d9f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_110e5da1:;
  /* 110e5da1 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5da3 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 110e5da5 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 110e5da8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5dab mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 110e5dae mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 110e5db1 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e5db3 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e5db6 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 110e5dba lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 110e5dc0 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 110e5dc2 jmp 0x110e5df8 */
  goto L_110e5df8;
L_110e5dc4:;
  /* 110e5dc4 call 0x110e58fd */
  push32(0x110e5dc9u); f_110e58fd();
  /* 110e5dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e5dcb je 0x110e5df6 */
  if (C.zf) goto L_110e5df6;
  /* 110e5dcd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 110e5dd0 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 110e5dd3 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 110e5dd7 mov dword ptr [0x110ec818], eax */
  w32((uint32_t)(0x110ec818), (EAX));
  /* 110e5ddc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 110e5dde mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 110e5de3 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5de5 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 110e5de8 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 110e5deb sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e5dee lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 110e5df4 jmp 0x110e5df8 */
  goto L_110e5df8;
L_110e5df6:;
  /* 110e5df6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e5df8:;
  /* 110e5df8 pop edi */
  EDI = (pop32());
  /* 110e5df9 pop esi */
  ESI = (pop32());
  /* 110e5dfa pop ebx */
  EBX = (pop32());
  /* 110e5dfb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e5dfc ret  */
  ESPCHK(0x110e5bf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dfd @ 0x110e5dfd (292 bytes, 125 insns) */
void f_110e5dfd(void) {
  FTRACE(0x110e5dfdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5dfd push ebp */
  push32((uint32_t)(EBP));
  /* 110e5dfe mov ebp, esp */
  EBP = (ESP);
  /* 110e5e00 push ecx */
  push32((uint32_t)(ECX));
  /* 110e5e01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5e04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110e5e07 push ebx */
  push32((uint32_t)(EBX));
  /* 110e5e08 push esi */
  push32((uint32_t)(ESI));
  /* 110e5e09 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 110e5e0c push edi */
  push32((uint32_t)(EDI));
  /* 110e5e0d mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 110e5e0f lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 110e5e15 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5e17 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 110e5e1a mov eax, edi */
  EAX = (EDI);
  /* 110e5e1c mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 110e5e1f jb 0x110e5e42 */
  if (C.cf) goto L_110e5e42;
  /* 110e5e21 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 110e5e24 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 110e5e26 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5e28 jae 0x110e5e31 */
  if (!C.cf) goto L_110e5e31;
  /* 110e5e2a add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 110e5e2c sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e5e2f jmp 0x110e5e3a */
  goto L_110e5e3a;
L_110e5e31:;
  /* 110e5e31 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 110e5e35 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 110e5e38 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_110e5e3a:;
  /* 110e5e3a lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 110e5e3d jmp 0x110e5f10 */
  goto L_110e5f10;
L_110e5e42:;
  /* 110e5e42 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5e44 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e5e47 je 0x110e5e4b */
  if (C.zf) goto L_110e5e4b;
  /* 110e5e49 mov eax, esi */
  EAX = (ESI);
L_110e5e4b:;
  /* 110e5e4b lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 110e5e4e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5e50 jae 0x110e5e95 */
  if (!C.cf) goto L_110e5e95;
L_110e5e52:;
  /* 110e5e52 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 110e5e54 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 110e5e56 jne 0x110e5e88 */
  if (!C.zf) goto L_110e5e88;
  /* 110e5e58 push 1 */
  push32((uint32_t)(0x1u));
  /* 110e5e5a lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 110e5e5d pop esi */
  ESI = (pop32());
L_110e5e5e:;
  /* 110e5e5e cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e5e61 jne 0x110e5e67 */
  if (!C.zf) goto L_110e5e67;
  /* 110e5e63 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e5e64 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 110e5e65 jmp 0x110e5e5e */
  goto L_110e5e5e;
L_110e5e67:;
  /* 110e5e67 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5e69 jae 0x110e5eb9 */
  if (!C.cf) goto L_110e5eb9;
  /* 110e5e6b cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5e6e jne 0x110e5e75 */
  if (!C.zf) goto L_110e5e75;
  /* 110e5e70 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 110e5e73 jmp 0x110e5e81 */
  goto L_110e5e81;
L_110e5e75:;
  /* 110e5e75 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e5e78 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5e7b jb 0x110e5f1a */
  if (C.cf) goto L_110e5f1a;
L_110e5e81:;
  /* 110e5e81 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 110e5e84 mov eax, ebx */
  EAX = (EBX);
  /* 110e5e86 jmp 0x110e5e8d */
  goto L_110e5e8d;
L_110e5e88:;
  /* 110e5e88 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 110e5e8b add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_110e5e8d:;
  /* 110e5e8d lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 110e5e90 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5e93 jb 0x110e5e52 */
  if (C.cf) goto L_110e5e52;
L_110e5e95:;
  /* 110e5e95 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_110e5e98:;
  /* 110e5e98 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5e9a jae 0x110e5f1a */
  if (!C.cf) goto L_110e5f1a;
  /* 110e5e9c lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 110e5e9f cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5ea2 jae 0x110e5f1a */
  if (!C.cf) goto L_110e5f1a;
  /* 110e5ea4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 110e5ea6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 110e5ea8 jne 0x110e5eea */
  if (!C.zf) goto L_110e5eea;
  /* 110e5eaa push 1 */
  push32((uint32_t)(0x1u));
  /* 110e5eac lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 110e5eaf pop eax */
  EAX = (pop32());
L_110e5eb0:;
  /* 110e5eb0 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 110e5eb3 jne 0x110e5eda */
  if (!C.zf) goto L_110e5eda;
  /* 110e5eb5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 110e5eb6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 110e5eb7 jmp 0x110e5eb0 */
  goto L_110e5eb0;
L_110e5eb9:;
  /* 110e5eb9 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 110e5ebc cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5ebf jae 0x110e5eca */
  if (!C.cf) goto L_110e5eca;
  /* 110e5ec1 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5ec3 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 110e5ec5 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 110e5ec8 jmp 0x110e5ed3 */
  goto L_110e5ed3;
L_110e5eca:;
  /* 110e5eca and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 110e5ece lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 110e5ed1 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_110e5ed3:;
  /* 110e5ed3 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110e5ed5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5ed8 jmp 0x110e5f10 */
  goto L_110e5f10;
L_110e5eda:;
  /* 110e5eda cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5edc jae 0x110e5ef1 */
  if (!C.cf) goto L_110e5ef1;
  /* 110e5ede sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 110e5ee1 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5ee4 jb 0x110e5f1a */
  if (C.cf) goto L_110e5f1a;
  /* 110e5ee6 mov esi, ebx */
  ESI = (EBX);
  /* 110e5ee8 jmp 0x110e5e98 */
  goto L_110e5e98;
L_110e5eea:;
  /* 110e5eea movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 110e5eed add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5eef jmp 0x110e5e98 */
  goto L_110e5e98;
L_110e5ef1:;
  /* 110e5ef1 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 110e5ef4 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5ef7 jae 0x110e5f02 */
  if (!C.cf) goto L_110e5f02;
  /* 110e5ef9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5efb mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 110e5efd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 110e5f00 jmp 0x110e5f0b */
  goto L_110e5f0b;
L_110e5f02:;
  /* 110e5f02 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 110e5f06 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 110e5f09 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_110e5f0b:;
  /* 110e5f0b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 110e5f0d lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_110e5f10:;
  /* 110e5f10 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110e5f13 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 110e5f16 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110e5f18 jmp 0x110e5f1c */
  goto L_110e5f1c;
L_110e5f1a:;
  /* 110e5f1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110e5f1c:;
  /* 110e5f1c pop edi */
  EDI = (pop32());
  /* 110e5f1d pop esi */
  ESI = (pop32());
  /* 110e5f1e pop ebx */
  EBX = (pop32());
  /* 110e5f1f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 110e5f20 ret  */
  ESPCHK(0x110e5dfdu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f21 @ 0x110e5f21 (41 bytes, 12 insns) */
void f_110e5f21(void) {
  FTRACE(0x110e5f21u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5f21 push esi */
  push32((uint32_t)(ESI));
  /* 110e5f22 mov esi, dword ptr [0x110e9000] */
  ESI = (r32((uint32_t)(0x110e9000)));
  /* 110e5f28 push dword ptr [0x110ec864] */
  push32((uint32_t)(r32((uint32_t)(0x110ec864))));
  /* 110e5f2e call esi */
  call_ind((uint32_t)(ESI), 0x110e5f30u);
  /* 110e5f30 push dword ptr [0x110ec854] */
  push32((uint32_t)(r32((uint32_t)(0x110ec854))));
  /* 110e5f36 call esi */
  call_ind((uint32_t)(ESI), 0x110e5f38u);
  /* 110e5f38 push dword ptr [0x110ec844] */
  push32((uint32_t)(r32((uint32_t)(0x110ec844))));
  /* 110e5f3e call esi */
  call_ind((uint32_t)(ESI), 0x110e5f40u);
  /* 110e5f40 push dword ptr [0x110ec824] */
  push32((uint32_t)(r32((uint32_t)(0x110ec824))));
  /* 110e5f46 call esi */
  call_ind((uint32_t)(ESI), 0x110e5f48u);
  /* 110e5f48 pop esi */
  ESI = (pop32());
  /* 110e5f49 ret  */
  ESPCHK(0x110e5f21u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f4a @ 0x110e5f4a (108 bytes, 34 insns) */
void f_110e5f4a(void) {
  FTRACE(0x110e5f4au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5f4a push esi */
  push32((uint32_t)(ESI));
  /* 110e5f4b push edi */
  push32((uint32_t)(EDI));
  /* 110e5f4c mov edi, dword ptr [0x110e90a0] */
  EDI = (r32((uint32_t)(0x110e90a0)));
  /* 110e5f52 mov esi, 0x110ec820 */
  ESI = (0x110ec820u);
L_110e5f57:;
  /* 110e5f57 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110e5f59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110e5f5b je 0x110e5f88 */
  if (C.zf) goto L_110e5f88;
  /* 110e5f5d cmp esi, 0x110ec864 */
  { uint32_t _a=(ESI),_b=(0x110ec864u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5f63 je 0x110e5f88 */
  if (C.zf) goto L_110e5f88;
  /* 110e5f65 cmp esi, 0x110ec854 */
  { uint32_t _a=(ESI),_b=(0x110ec854u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5f6b je 0x110e5f88 */
  if (C.zf) goto L_110e5f88;
  /* 110e5f6d cmp esi, 0x110ec844 */
  { uint32_t _a=(ESI),_b=(0x110ec844u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5f73 je 0x110e5f88 */
  if (C.zf) goto L_110e5f88;
  /* 110e5f75 cmp esi, 0x110ec824 */
  { uint32_t _a=(ESI),_b=(0x110ec824u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5f7b je 0x110e5f88 */
  if (C.zf) goto L_110e5f88;
  /* 110e5f7d push eax */
  push32((uint32_t)(EAX));
  /* 110e5f7e call edi */
  call_ind((uint32_t)(EDI), 0x110e5f80u);
  /* 110e5f80 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110e5f82 call 0x110e332b */
  push32(0x110e5f87u); f_110e332b();
  /* 110e5f87 pop ecx */
  ECX = (pop32());
L_110e5f88:;
  /* 110e5f88 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110e5f8b cmp esi, 0x110ec8e0 */
  { uint32_t _a=(ESI),_b=(0x110ec8e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5f91 jl 0x110e5f57 */
  if ((C.sf!=C.of)) goto L_110e5f57;
  /* 110e5f93 push dword ptr [0x110ec844] */
  push32((uint32_t)(r32((uint32_t)(0x110ec844))));
  /* 110e5f99 call edi */
  call_ind((uint32_t)(EDI), 0x110e5f9bu);
  /* 110e5f9b push dword ptr [0x110ec854] */
  push32((uint32_t)(r32((uint32_t)(0x110ec854))));
  /* 110e5fa1 call edi */
  call_ind((uint32_t)(EDI), 0x110e5fa3u);
  /* 110e5fa3 push dword ptr [0x110ec864] */
  push32((uint32_t)(r32((uint32_t)(0x110ec864))));
  /* 110e5fa9 call edi */
  call_ind((uint32_t)(EDI), 0x110e5fabu);
  /* 110e5fab push dword ptr [0x110ec824] */
  push32((uint32_t)(r32((uint32_t)(0x110ec824))));
  /* 110e5fb1 call edi */
  call_ind((uint32_t)(EDI), 0x110e5fb3u);
  /* 110e5fb3 pop edi */
  EDI = (pop32());
  /* 110e5fb4 pop esi */
  ESI = (pop32());
  /* 110e5fb5 ret  */
  ESPCHK(0x110e5f4au, _esp0);
  ESP += 4; return;
}

/* FUN_10005fb6 @ 0x110e5fb6 (97 bytes, 37 insns) */
void f_110e5fb6(void) {
  FTRACE(0x110e5fb6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e5fb6 push ebp */
  push32((uint32_t)(EBP));
  /* 110e5fb7 mov ebp, esp */
  EBP = (ESP);
  /* 110e5fb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e5fbc push esi */
  push32((uint32_t)(ESI));
  /* 110e5fbd cmp dword ptr [eax*4 + 0x110ec820], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x110ec820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5fc5 lea esi, [eax*4 + 0x110ec820] */
  ESI = ((uint32_t)(EAX*4 + 0x110ec820));
  /* 110e5fcc jne 0x110e600c */
  if (!C.zf) goto L_110e600c;
  /* 110e5fce push edi */
  push32((uint32_t)(EDI));
  /* 110e5fcf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 110e5fd1 call 0x110e3ee5 */
  push32(0x110e5fd6u); f_110e3ee5();
  /* 110e5fd6 mov edi, eax */
  EDI = (EAX);
  /* 110e5fd8 pop ecx */
  ECX = (pop32());
  /* 110e5fd9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 110e5fdb jne 0x110e5fe5 */
  if (!C.zf) goto L_110e5fe5;
  /* 110e5fdd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110e5fdf call 0x110e32f8 */
  push32(0x110e5fe4u); f_110e32f8();
  /* 110e5fe4 pop ecx */
  ECX = (pop32());
L_110e5fe5:;
  /* 110e5fe5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110e5fe7 call 0x110e5fb6 */
  push32(0x110e5fecu); f_110e5fb6();
  /* 110e5fec cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e5fef pop ecx */
  ECX = (pop32());
  /* 110e5ff0 push edi */
  push32((uint32_t)(EDI));
  /* 110e5ff1 jne 0x110e5ffd */
  if (!C.zf) goto L_110e5ffd;
  /* 110e5ff3 call dword ptr [0x110e9000] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9000))), 0x110e5ff9u);
  /* 110e5ff9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 110e5ffb jmp 0x110e6003 */
  goto L_110e6003;
L_110e5ffd:;
  /* 110e5ffd call 0x110e332b */
  push32(0x110e6002u); f_110e332b();
  /* 110e6002 pop ecx */
  ECX = (pop32());
L_110e6003:;
  /* 110e6003 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110e6005 call 0x110e6017 */
  push32(0x110e600au); f_110e6017();
  /* 110e600a pop ecx */
  ECX = (pop32());
  /* 110e600b pop edi */
  EDI = (pop32());
L_110e600c:;
  /* 110e600c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 110e600e call dword ptr [0x110e9078] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e9078))), 0x110e6014u);
  /* 110e6014 pop esi */
  ESI = (pop32());
  /* 110e6015 pop ebp */
  EBP = (pop32());
  /* 110e6016 ret  */
  ESPCHK(0x110e5fb6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006017 @ 0x110e6017 (21 bytes, 7 insns) */
void f_110e6017(void) {
  FTRACE(0x110e6017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e6017 push ebp */
  push32((uint32_t)(EBP));
  /* 110e6018 mov ebp, esp */
  EBP = (ESP);
  /* 110e601a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110e601d push dword ptr [eax*4 + 0x110ec820] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x110ec820))));
  /* 110e6024 call dword ptr [0x110e907c] */
  call_ind((uint32_t)(r32((uint32_t)(0x110e907c))), 0x110e602au);
  /* 110e602a pop ebp */
  EBP = (pop32());
  /* 110e602b ret  */
  ESPCHK(0x110e6017u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x110e602c (32 bytes, 18 insns) */
void f_110e602c(void) {
  FTRACE(0x110e602cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e602c push ebp */
  push32((uint32_t)(EBP));
  /* 110e602d mov ebp, esp */
  EBP = (ESP);
  /* 110e602f push ebx */
  push32((uint32_t)(EBX));
  /* 110e6030 push esi */
  push32((uint32_t)(ESI));
  /* 110e6031 push edi */
  push32((uint32_t)(EDI));
  /* 110e6032 push ebp */
  push32((uint32_t)(EBP));
  /* 110e6033 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e6035 push 0 */
  push32((uint32_t)(0x0u));
  /* 110e6037 push 0x110e6044 */
  push32((uint32_t)(0x110e6044u));
  /* 110e603c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 110e603f call 0x110e83d4 */
  push32(0x110e6044u); f_110e83d4();
  /* 110e6044 pop ebp */
  EBP = (pop32());
  /* 110e6045 pop edi */
  EDI = (pop32());
  /* 110e6046 pop esi */
  ESI = (pop32());
  /* 110e6047 pop ebx */
  EBX = (pop32());
  /* 110e6048 mov esp, ebp */
  ESP = (EBP);
  /* 110e604a pop ebp */
  EBP = (pop32());
  /* 110e604b ret  */
  ESPCHK(0x110e602cu, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x110e606e (104 bytes, 33 insns) */
void f_110e606e(void) {
  FTRACE(0x110e606eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110e606e push ebx */
  push32((uint32_t)(EBX));
  /* 110e606f push esi */
  push32((uint32_t)(ESI));
  /* 110e6070 push edi */
  push32((uint32_t)(EDI));
  /* 110e6071 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110e6075 push eax */
  push32((uint32_t)(EAX));
  /* 110e6076 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 110e6078 push 0x110e604c */
  push32((uint32_t)(0x110e604cu));
  /* 110e607d push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 110e6084 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_110e608b:;
  /* 110e608b mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 110e608f mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 110e6092 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 110e6095 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e6098 je 0x110e60c8 */
  if (C.zf) goto L_110e60c8;
  /* 110e609a cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e609e je 0x110e60c8 */
  if (C.zf) goto L_110e60c8;
  /* 110e60a0 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 110e60a3 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 110e60a6 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 110e60aa mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 110e60ad cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110e60b2 jne 0x110e60c6 */
  if (!C.zf) goto L_110e60c6;
  /* 110e60b4 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 110e60b9 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 110e60bd call 0x110e6102 */
  push32(0x110e60c2u); f_110e6102();
  /* 110e60c2 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x110e60c6u);
L_110e60c6:;
  /* 110e60c6 jmp 0x110e608b */
  goto L_110e608b;
L_110e60c8:;
  /* 110e60c8 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 110e60cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110e60d2 pop edi */
  EDI = (pop32());
  /* 110e60d3 pop esi */
  ESI = (pop32());
  /* 110e60d4 pop ebx */
  EBX = (pop32());
  /* 110e60d5 ret  */
  ESPCHK(0x110e606eu, _esp0);
  ESP += 4; return;
}

