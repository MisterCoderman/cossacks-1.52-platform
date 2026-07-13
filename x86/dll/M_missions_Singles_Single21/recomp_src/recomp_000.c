#include "recomp.h"

/* FUN_10001000 @ 0x112a1000 (20 bytes, 6 insns) */
void f_112a1000(void) {
  FTRACE(0x112a1000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a1004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a1005 jne 0x112a100c */
  if (!C.zf) goto L_112a100c;
  /* 112a1007 call 0x112a25d0 */
  push32(0x112a100cu); f_112a25d0();
L_112a100c:;
  /* 112a100c mov eax, 1 */
  EAX = (0x1u);
  /* 112a1011 ret 0xc */
  ESPCHK(0x112a1000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001020 @ 0x112a1020 (423 bytes, 114 insns) */
void f_112a1020(void) {
  FTRACE(0x112a1020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1020 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a1024 push ebx */
  push32((uint32_t)(EBX));
  /* 112a1025 push ebp */
  push32((uint32_t)(EBP));
  /* 112a1026 mov ebp, ecx */
  EBP = (ECX);
  /* 112a1028 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 112a102c mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 112a1030 mov dword ptr [ebp + 0x2a7], eax */
  w32((uint32_t)(EBP + 0x2a7), (EAX));
  /* 112a1036 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 112a103a mov dword ptr [ebp + 0x28c], eax */
  w32((uint32_t)(EBP + 0x28c), (EAX));
  /* 112a1040 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 112a1044 mov dword ptr [ebp + 0x2ab], eax */
  w32((uint32_t)(EBP + 0x2ab), (EAX));
  /* 112a104a mov eax, dword ptr [esp + 0x3c] */
  EAX = (r32((uint32_t)(ESP + 0x3c)));
  /* 112a104e mov dword ptr [ebp + 0x284], ecx */
  w32((uint32_t)(EBP + 0x284), (ECX));
  /* 112a1054 mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 112a1058 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a105b mov dword ptr [ebp + 0x290], ecx */
  w32((uint32_t)(EBP + 0x290), (ECX));
  /* 112a1061 mov dword ptr [ebp + 0x288], edx */
  w32((uint32_t)(EBP + 0x288), (EDX));
  /* 112a1067 mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 112a106b lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 112a106e mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 112a1072 mov dword ptr [ebp + 0x2f1], ecx */
  w32((uint32_t)(EBP + 0x2f1), (ECX));
  /* 112a1078 mov cl, byte ptr [esp + 0x1c] */
  CL = (r8((uint32_t)(ESP + 0x1c)));
  /* 112a107c mov dword ptr [ebp + 0x280], eax */
  w32((uint32_t)(EBP + 0x280), (EAX));
  /* 112a1082 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 112a1086 push esi */
  push32((uint32_t)(ESI));
  /* 112a1087 mov dword ptr [ebp + 0x294], edx */
  w32((uint32_t)(EBP + 0x294), (EDX));
  /* 112a108d push edi */
  push32((uint32_t)(EDI));
  /* 112a108e mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 112a1092 mov edx, 1 */
  EDX = (0x1u);
  /* 112a1097 mov byte ptr [ebp + 0x2e8], cl */
  w8((uint32_t)(EBP + 0x2e8), (CL));
  /* 112a109d mov dword ptr [ebp + 0x2e9], eax */
  w32((uint32_t)(EBP + 0x2e9), (EAX));
  /* 112a10a3 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a10a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a10a8 mov byte ptr [ebp + 0x2f5], dl */
  w8((uint32_t)(EBP + 0x2f5), (DL));
  /* 112a10ae mov byte ptr [ebp + 0x2f6], dl */
  w8((uint32_t)(EBP + 0x2f6), (DL));
  /* 112a10b4 mov dword ptr [ebp + 0x2fb], edx */
  w32((uint32_t)(EBP + 0x2fb), (EDX));
  /* 112a10ba mov byte ptr [ebp + 0x2ff], dl */
  w8((uint32_t)(EBP + 0x2ff), (DL));
  /* 112a10c0 lea ebx, [ebp + 0x298] */
  EBX = ((uint32_t)(EBP + 0x298));
  /* 112a10c6 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a10c8 not ecx */
  ECX = (~(ECX));
  /* 112a10ca sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a10cc mov eax, ecx */
  EAX = (ECX);
  /* 112a10ce mov esi, edi */
  ESI = (EDI);
  /* 112a10d0 mov edi, ebx */
  EDI = (EBX);
  /* 112a10d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a10d4 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a10d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a10d9 mov ecx, eax */
  ECX = (EAX);
  /* 112a10db mov al, byte ptr [esp + 0x14] */
  AL = (r8((uint32_t)(ESP + 0x14)));
  /* 112a10df and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a10e2 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a10e4 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a10e6 mov byte ptr [ebp + 0x2af], al */
  w8((uint32_t)(EBP + 0x2af), (AL));
  /* 112a10ec mov dword ptr [ebp + 0x2bc], 0x3e8 */
  w32((uint32_t)(EBP + 0x2bc), (0x3e8u));
  /* 112a10f6 mov dword ptr [ebp + 0x2cc], ebx */
  w32((uint32_t)(EBP + 0x2cc), (EBX));
  /* 112a10fc mov dword ptr [ebp + 0x2c8], ebx */
  w32((uint32_t)(EBP + 0x2c8), (EBX));
  /* 112a1102 mov dword ptr [ebp + 0x2c4], ebx */
  w32((uint32_t)(EBP + 0x2c4), (EBX));
  /* 112a1108 mov dword ptr [ebp + 0x2c0], ebx */
  w32((uint32_t)(EBP + 0x2c0), (EBX));
  /* 112a110e mov dword ptr [ebp + 0x2b8], ebx */
  w32((uint32_t)(EBP + 0x2b8), (EBX));
  /* 112a1114 jne 0x112a11c0 */
  if (!C.zf) goto L_112a11c0;
  /* 112a111a mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 112a111e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1120 je 0x112a112b */
  if (C.zf) goto L_112a112b;
  /* 112a1122 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1124 je 0x112a112b */
  if (C.zf) goto L_112a112b;
  /* 112a1126 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1129 jne 0x112a116b */
  if (!C.zf) goto L_112a116b;
L_112a112b:;
  /* 112a112b lea esi, [ebp + 0x2b0] */
  ESI = ((uint32_t)(EBP + 0x2b0));
  /* 112a1131 push esi */
  push32((uint32_t)(ESI));
  /* 112a1132 call dword ptr [0x112aa188] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa188))), 0x112a1138u);
  /* 112a1138 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 112a113c mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 112a1140 push ebx */
  push32((uint32_t)(EBX));
  /* 112a1141 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1142 push edx */
  push32((uint32_t)(EDX));
  /* 112a1143 push 0x112ae440 */
  push32((uint32_t)(0x112ae440u));
  /* 112a1148 push 0x112aee78 */
  push32((uint32_t)(0x112aee78u));
  /* 112a114d push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a1152 call dword ptr [0x112aa18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa18c))), 0x112a1158u);
  /* 112a1158 push esi */
  push32((uint32_t)(ESI));
  /* 112a1159 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a115e call dword ptr [0x112aa190] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa190))), 0x112a1164u);
  /* 112a1164 mov eax, dword ptr [esp + 0x4c] */
  EAX = (r32((uint32_t)(ESP + 0x4c)));
  /* 112a1168 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a116b:;
  /* 112a116b sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a116d je 0x112a1186 */
  if (C.zf) goto L_112a1186;
  /* 112a116f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a1170 je 0x112a1196 */
  if (C.zf) goto L_112a1196;
  /* 112a1172 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a1173 je 0x112a11a6 */
  if (C.zf) goto L_112a11a6;
  /* 112a1175 pop edi */
  EDI = (pop32());
  /* 112a1176 mov dword ptr [ebp + 0x2ed], 0xf */
  w32((uint32_t)(EBP + 0x2ed), (0xfu));
  /* 112a1180 pop esi */
  ESI = (pop32());
  /* 112a1181 pop ebp */
  EBP = (pop32());
  /* 112a1182 pop ebx */
  EBX = (pop32());
  /* 112a1183 ret 0x34 */
  ESPCHK(0x112a1020u, _esp0);
  ESP += 56; return;
L_112a1186:;
  /* 112a1186 lea eax, [ebp + 0x2b0] */
  EAX = ((uint32_t)(EBP + 0x2b0));
  /* 112a118c push eax */
  push32((uint32_t)(EAX));
  /* 112a118d call dword ptr [0x112aa194] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa194))), 0x112a1193u);
  /* 112a1193 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a1196:;
  /* 112a1196 lea ecx, [ebp + 0x2b0] */
  ECX = ((uint32_t)(EBP + 0x2b0));
  /* 112a119c push ecx */
  push32((uint32_t)(ECX));
  /* 112a119d call dword ptr [0x112aa198] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa198))), 0x112a11a3u);
  /* 112a11a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a11a6:;
  /* 112a11a6 lea edx, [ebp + 0x2b0] */
  EDX = ((uint32_t)(EBP + 0x2b0));
  /* 112a11ac push edx */
  push32((uint32_t)(EDX));
  /* 112a11ad call dword ptr [0x112aa19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa19c))), 0x112a11b3u);
  /* 112a11b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a11b6 mov dword ptr [ebp + 0x2ed], 0xf */
  w32((uint32_t)(EBP + 0x2ed), (0xfu));
L_112a11c0:;
  /* 112a11c0 pop edi */
  EDI = (pop32());
  /* 112a11c1 pop esi */
  ESI = (pop32());
  /* 112a11c2 pop ebp */
  EBP = (pop32());
  /* 112a11c3 pop ebx */
  EBX = (pop32());
  /* 112a11c4 ret 0x34 */
  ESPCHK(0x112a1020u, _esp0);
  ESP += 56; return;
}

/* FUN_100011d0 @ 0x112a11d0 (73 bytes, 15 insns) */
void f_112a11d0(void) {
  FTRACE(0x112a11d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a11d0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 112a11d4 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 112a11d8 mov dword ptr [ecx + 0x284], eax */
  w32((uint32_t)(ECX + 0x284), (EAX));
  /* 112a11de mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a11e2 mov dword ptr [ecx + 0x288], edx */
  w32((uint32_t)(ECX + 0x288), (EDX));
  /* 112a11e8 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 112a11ec mov dword ptr [ecx + 0x28c], eax */
  w32((uint32_t)(ECX + 0x28c), (EAX));
  /* 112a11f2 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 112a11f6 mov dword ptr [ecx + 0x290], edx */
  w32((uint32_t)(ECX + 0x290), (EDX));
  /* 112a11fc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a1200 mov dword ptr [ecx + 0x294], eax */
  w32((uint32_t)(ECX + 0x294), (EAX));
  /* 112a1206 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a120a mov dword ptr [ecx + 0x280], edx */
  w32((uint32_t)(ECX + 0x280), (EDX));
  /* 112a1210 mov dword ptr [ecx + 0x2ab], eax */
  w32((uint32_t)(ECX + 0x2ab), (EAX));
  /* 112a1216 ret 0x1c */
  ESPCHK(0x112a11d0u, _esp0);
  ESP += 32; return;
}

/* FUN_10001220 @ 0x112a1220 (27 bytes, 10 insns) */
void f_112a1220(void) {
  FTRACE(0x112a1220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1220 push esi */
  push32((uint32_t)(ESI));
  /* 112a1221 mov esi, ecx */
  ESI = (ECX);
  /* 112a1223 mov al, byte ptr [esi + 0x2af] */
  AL = (r8((uint32_t)(ESI + 0x2af)));
  /* 112a1229 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a122b jne 0x112a1239 */
  if (!C.zf) goto L_112a1239;
  /* 112a122d call 0x112a12f0 */
  push32(0x112a1232u); f_112a12f0();
  /* 112a1232 mov ecx, esi */
  ECX = (ESI);
  /* 112a1234 call 0x112a13f0 */
  push32(0x112a1239u); f_112a13f0();
L_112a1239:;
  /* 112a1239 pop esi */
  ESI = (pop32());
  /* 112a123a ret  */
  ESPCHK(0x112a1220u, _esp0);
  ESP += 4; return;
}

/* FUN_10001240 @ 0x112a1240 (167 bytes, 40 insns) */
void f_112a1240(void) {
  FTRACE(0x112a1240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1240 push ebx */
  push32((uint32_t)(EBX));
  /* 112a1241 mov ebx, dword ptr [ecx + 0x2bc] */
  EBX = (r32((uint32_t)(ECX + 0x2bc)));
  /* 112a1247 mov edx, 0x12c */
  EDX = (0x12cu);
  /* 112a124c push esi */
  push32((uint32_t)(ESI));
  /* 112a124d mov esi, dword ptr [ecx + 0x2b8] */
  ESI = (r32((uint32_t)(ECX + 0x2b8)));
  /* 112a1253 mov eax, 0x64 */
  EAX = (0x64u);
  /* 112a1258 push edi */
  push32((uint32_t)(EDI));
  /* 112a1259 mov edi, dword ptr [ecx + 0x2c0] */
  EDI = (r32((uint32_t)(ECX + 0x2c0)));
  /* 112a125f mov dword ptr [ecx + 0x2e4], edx */
  w32((uint32_t)(ECX + 0x2e4), (EDX));
  /* 112a1265 mov dword ptr [ecx + 0x2e0], edx */
  w32((uint32_t)(ECX + 0x2e0), (EDX));
  /* 112a126b mov dword ptr [ecx + 0x2d0], eax */
  w32((uint32_t)(ECX + 0x2d0), (EAX));
  /* 112a1271 mov dword ptr [ecx + 0x2d8], eax */
  w32((uint32_t)(ECX + 0x2d8), (EAX));
  /* 112a1277 mov dword ptr [ecx + 0x2d4], 0xc8 */
  w32((uint32_t)(ECX + 0x2d4), (0xc8u));
  /* 112a1281 mov dword ptr [ecx + 0x2dc], 0x1f4 */
  w32((uint32_t)(ECX + 0x2dc), (0x1f4u));
  /* 112a128b mov edx, 0xc */
  EDX = (0xcu);
L_112a1290:;
  /* 112a1290 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1292 jle 0x112a129b */
  if ((C.zf||C.sf!=C.of)) goto L_112a129b;
  /* 112a1294 add dword ptr [ecx + 0x2d0], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2d0))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2d0), (_r)); fl_add(_a,_b,_r,32); }
L_112a129b:;
  /* 112a129b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a129d jle 0x112a12a6 */
  if ((C.zf||C.sf!=C.of)) goto L_112a12a6;
  /* 112a129f add dword ptr [ecx + 0x2d8], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2d8))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2d8), (_r)); fl_add(_a,_b,_r,32); }
L_112a12a6:;
  /* 112a12a6 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a12a8 jle 0x112a12b1 */
  if ((C.zf||C.sf!=C.of)) goto L_112a12b1;
  /* 112a12aa add dword ptr [ecx + 0x2d4], -0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2d4))),_b=(0xfffffff0u),_r=_a+_b; w32((uint32_t)(ECX + 0x2d4), (_r)); fl_add(_a,_b,_r,32); }
L_112a12b1:;
  /* 112a12b1 cmp dword ptr [ecx + 0x2c8], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2c8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a12b7 jle 0x112a12c0 */
  if ((C.zf||C.sf!=C.of)) goto L_112a12c0;
  /* 112a12b9 add dword ptr [ecx + 0x2e0], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2e0))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2e0), (_r)); fl_add(_a,_b,_r,32); }
L_112a12c0:;
  /* 112a12c0 cmp dword ptr [ecx + 0x2cc], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2cc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a12c6 jle 0x112a12cf */
  if ((C.zf||C.sf!=C.of)) goto L_112a12cf;
  /* 112a12c8 add dword ptr [ecx + 0x2e4], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2e4))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2e4), (_r)); fl_add(_a,_b,_r,32); }
L_112a12cf:;
  /* 112a12cf cmp dword ptr [ecx + 0x2c4], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2c4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a12d5 jle 0x112a12de */
  if ((C.zf||C.sf!=C.of)) goto L_112a12de;
  /* 112a12d7 add dword ptr [ecx + 0x2dc], -0x28 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2dc))),_b=(0xffffffd8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2dc), (_r)); fl_add(_a,_b,_r,32); }
L_112a12de:;
  /* 112a12de add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a12e0 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112a12e1 jne 0x112a1290 */
  if (!C.zf) goto L_112a1290;
  /* 112a12e3 pop edi */
  EDI = (pop32());
  /* 112a12e4 pop esi */
  ESI = (pop32());
  /* 112a12e5 pop ebx */
  EBX = (pop32());
  /* 112a12e6 ret  */
  ESPCHK(0x112a1240u, _esp0);
  ESP += 4; return;
}

/* FUN_100012f0 @ 0x112a12f0 (225 bytes, 63 insns) [1 switch table(s)] */
void f_112a12f0(void) {
  FTRACE(0x112a12f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a12f0 push ebp */
  push32((uint32_t)(EBP));
  /* 112a12f1 push esi */
  push32((uint32_t)(ESI));
  /* 112a12f2 push edi */
  push32((uint32_t)(EDI));
  /* 112a12f3 mov esi, ecx */
  ESI = (ECX);
  /* 112a12f5 call 0x112a14d0 */
  push32(0x112a12fau); f_112a14d0();
  /* 112a12fa xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 112a12fc mov dword ptr [esi + 0x2ed], eax */
  w32((uint32_t)(ESI + 0x2ed), (EAX));
  /* 112a1302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a1304 jle 0x112a1390 */
  if ((C.zf||C.sf!=C.of)) goto L_112a1390;
L_112a130a:;
  /* 112a130a mov cl, byte ptr [esi + 0x2f5] */
  CL = (r8((uint32_t)(ESI + 0x2f5)));
  /* 112a1310 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 112a1312 je 0x112a1390 */
  if (C.zf) goto L_112a1390;
  /* 112a1314 mov edi, dword ptr [esi + 0x2f7] */
  EDI = (r32((uint32_t)(ESI + 0x2f7)));
  /* 112a131a test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a131c jle 0x112a1387 */
  if ((C.zf||C.sf!=C.of)) goto L_112a1387;
  /* 112a131e mov edx, dword ptr [esi + 0x2bc] */
  EDX = (r32((uint32_t)(ESI + 0x2bc)));
  /* 112a1324 cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1327 jl 0x112a1387 */
  if ((C.sf!=C.of)) goto L_112a1387;
  /* 112a1329 mov ecx, dword ptr [esi + 0x2e9] */
  ECX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 112a132f cmp ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1332 ja 0x112a1371 */
  if ((!C.cf&&!C.zf)) goto L_112a1371;
  /* 112a1334 jmp dword ptr [ecx*4 + 0x112a13d4] */
  switch (ECX) {
    case 0: goto L_112a133b;
    case 1: goto L_112a134d;
    case 2: goto L_112a1344;
    case 3: goto L_112a136a;
    case 4: goto L_112a1358;
    case 5: goto L_112a1361;
    default: x86_unimpl("switch@0x112a1334 out of table"); return;
  }
L_112a133b:;
  /* 112a133b add dword ptr [esi + 0x2b8], 0x19 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2b8))),_b=(0x19u),_r=_a+_b; w32((uint32_t)(ESI + 0x2b8), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a1342 jmp 0x112a1371 */
  goto L_112a1371;
L_112a1344:;
  /* 112a1344 add dword ptr [esi + 0x2c0], 0x19 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2c0))),_b=(0x19u),_r=_a+_b; w32((uint32_t)(ESI + 0x2c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a134b jmp 0x112a1371 */
  goto L_112a1371;
L_112a134d:;
  /* 112a134d add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1350 mov dword ptr [esi + 0x2bc], edx */
  w32((uint32_t)(ESI + 0x2bc), (EDX));
  /* 112a1356 jmp 0x112a1371 */
  goto L_112a1371;
L_112a1358:;
  /* 112a1358 add dword ptr [esi + 0x2c8], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2c8))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x2c8), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a135f jmp 0x112a1371 */
  goto L_112a1371;
L_112a1361:;
  /* 112a1361 add dword ptr [esi + 0x2cc], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2cc))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x2cc), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a1368 jmp 0x112a1371 */
  goto L_112a1371;
L_112a136a:;
  /* 112a136a add dword ptr [esi + 0x2c4], 5 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2c4))),_b=(0x5u),_r=_a+_b; w32((uint32_t)(ESI + 0x2c4), (_r)); fl_add(_a,_b,_r,32); }
L_112a1371:;
  /* 112a1371 mov ecx, dword ptr [esi + 0x2bc] */
  ECX = (r32((uint32_t)(ESI + 0x2bc)));
  /* 112a1377 add ecx, -5 */
  { uint32_t _a=(ECX),_b=(0xfffffffbu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a137a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 112a137b mov dword ptr [esi + 0x2bc], ecx */
  w32((uint32_t)(ESI + 0x2bc), (ECX));
  /* 112a1381 mov dword ptr [esi + 0x2f7], edi */
  w32((uint32_t)(ESI + 0x2f7), (EDI));
L_112a1387:;
  /* 112a1387 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 112a1388 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a138a jl 0x112a130a */
  if ((C.sf!=C.of)) goto L_112a130a;
L_112a1390:;
  /* 112a1390 mov ecx, dword ptr [esi + 0x2fb] */
  ECX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 112a1396 mov edx, 3 */
  EDX = (0x3u);
  /* 112a139b sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a139d mov edi, dword ptr [esi + 0x2f7] */
  EDI = (r32((uint32_t)(ESI + 0x2f7)));
  /* 112a13a3 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a13a6 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a13a9 mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 112a13af add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a13b1 push ecx */
  push32((uint32_t)(ECX));
  /* 112a13b2 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 112a13b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a13b6 push eax */
  push32((uint32_t)(EAX));
  /* 112a13b7 mov dword ptr [esi + 0x2f7], edi */
  w32((uint32_t)(ESI + 0x2f7), (EDI));
  /* 112a13bd call dword ptr [0x112aa184] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa184))), 0x112a13c3u);
  /* 112a13c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a13c6 mov ecx, esi */
  ECX = (ESI);
  /* 112a13c8 call 0x112a1240 */
  push32(0x112a13cdu); f_112a1240();
  /* 112a13cd pop edi */
  EDI = (pop32());
  /* 112a13ce pop esi */
  ESI = (pop32());
  /* 112a13cf pop ebp */
  EBP = (pop32());
  /* 112a13d0 ret  */
  ESPCHK(0x112a12f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100013f0 @ 0x112a13f0 (224 bytes, 57 insns) */
void f_112a13f0(void) {
  FTRACE(0x112a13f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a13f0 push esi */
  push32((uint32_t)(ESI));
  /* 112a13f1 mov esi, ecx */
  ESI = (ECX);
  /* 112a13f3 cmp dword ptr [esi + 0x2f7], 0x3e8 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2f7))),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a13fd jle 0x112a14ce */
  if ((C.zf||C.sf!=C.of)) goto L_112a14ce;
  /* 112a1403 call 0x112a14d0 */
  push32(0x112a1408u); f_112a14d0();
  /* 112a1408 cmp eax, dword ptr [esi + 0x2f1] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x2f1))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a140e jge 0x112a14ce */
  if ((C.sf==C.of)) goto L_112a14ce;
  /* 112a1414 mov ecx, esi */
  ECX = (ESI);
  /* 112a1416 call 0x112a14d0 */
  push32(0x112a141bu); f_112a14d0();
  /* 112a141b mov dword ptr [esi + 0x2ed], eax */
  w32((uint32_t)(ESI + 0x2ed), (EAX));
  /* 112a1421 mov eax, dword ptr [esi + 0x2e9] */
  EAX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 112a1427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a1429 je 0x112a1435 */
  if (C.zf) goto L_112a1435;
  /* 112a142b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a142e je 0x112a1435 */
  if (C.zf) goto L_112a1435;
  /* 112a1430 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1433 jne 0x112a14af */
  if (!C.zf) goto L_112a14af;
L_112a1435:;
  /* 112a1435 mov eax, dword ptr [esi + 0x2ab] */
  EAX = (r32((uint32_t)(ESI + 0x2ab)));
  /* 112a143b mov cl, byte ptr [esi + 0x2e8] */
  CL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 112a1441 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1443 push eax */
  push32((uint32_t)(EAX));
  /* 112a1444 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1445 push 0x112ae440 */
  push32((uint32_t)(0x112ae440u));
  /* 112a144a push 0x112ae390 */
  push32((uint32_t)(0x112ae390u));
  /* 112a144f push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a1454 call dword ptr [0x112aa18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa18c))), 0x112a145au);
  /* 112a145a mov eax, dword ptr [esi + 0x2e9] */
  EAX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 112a1460 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1463 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a1466 je 0x112a1470 */
  if (C.zf) goto L_112a1470;
  /* 112a1468 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a1469 je 0x112a147e */
  if (C.zf) goto L_112a147e;
  /* 112a146b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a146c je 0x112a148c */
  if (C.zf) goto L_112a148c;
  /* 112a146e jmp 0x112a149a */
  goto L_112a149a;
L_112a1470:;
  /* 112a1470 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a1475 call dword ptr [0x112aa194] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa194))), 0x112a147bu);
  /* 112a147b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a147e:;
  /* 112a147e push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a1483 call dword ptr [0x112aa198] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa198))), 0x112a1489u);
  /* 112a1489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a148c:;
  /* 112a148c push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a1491 call dword ptr [0x112aa19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa19c))), 0x112a1497u);
  /* 112a1497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a149a:;
  /* 112a149a lea edx, [esi + 0x2b0] */
  EDX = ((uint32_t)(ESI + 0x2b0));
  /* 112a14a0 push edx */
  push32((uint32_t)(EDX));
  /* 112a14a1 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a14a6 call dword ptr [0x112aa190] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa190))), 0x112a14acu);
  /* 112a14ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a14af:;
  /* 112a14af mov ecx, dword ptr [esi + 0x2f7] */
  ECX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 112a14b5 mov eax, dword ptr [esi + 0x2ed] */
  EAX = (r32((uint32_t)(ESI + 0x2ed)));
  /* 112a14bb add ecx, 0xfffffc18 */
  { uint32_t _a=(ECX),_b=(0xfffffc18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a14c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a14c2 mov dword ptr [esi + 0x2f7], ecx */
  w32((uint32_t)(ESI + 0x2f7), (ECX));
  /* 112a14c8 mov dword ptr [esi + 0x2ed], eax */
  w32((uint32_t)(ESI + 0x2ed), (EAX));
L_112a14ce:;
  /* 112a14ce pop esi */
  ESI = (pop32());
  /* 112a14cf ret  */
  ESPCHK(0x112a13f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014d0 @ 0x112a14d0 (56 bytes, 18 insns) */
void f_112a14d0(void) {
  FTRACE(0x112a14d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a14d0 mov eax, dword ptr [ecx + 0x2e9] */
  EAX = (r32((uint32_t)(ECX + 0x2e9)));
  /* 112a14d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a14d8 je 0x112a14f7 */
  if (C.zf) goto L_112a14f7;
  /* 112a14da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a14dd je 0x112a14f7 */
  if (C.zf) goto L_112a14f7;
  /* 112a14df cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a14e2 je 0x112a14f7 */
  if (C.zf) goto L_112a14f7;
  /* 112a14e4 mov eax, dword ptr [ecx + 0x2ed] */
  EAX = (r32((uint32_t)(ECX + 0x2ed)));
  /* 112a14ea mov ecx, dword ptr [ecx + 0x2f1] */
  ECX = (r32((uint32_t)(ECX + 0x2f1)));
  /* 112a14f0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a14f2 jl 0x112a1507 */
  if ((C.sf!=C.of)) goto L_112a1507;
  /* 112a14f4 mov eax, ecx */
  EAX = (ECX);
  /* 112a14f6 ret  */
  ESPCHK(0x112a14d0u, _esp0);
  ESP += 4; return;
L_112a14f7:;
  /* 112a14f7 add ecx, 0x2b0 */
  { uint32_t _a=(ECX),_b=(0x2b0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a14fd push ecx */
  push32((uint32_t)(ECX));
  /* 112a14fe call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a1504u);
  /* 112a1504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a1507:;
  /* 112a1507 ret  */
  ESPCHK(0x112a14d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001510 @ 0x112a1510 (208 bytes, 61 insns) [1 switch table(s)] */
void f_112a1510(void) {
  FTRACE(0x112a1510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1510 push ebp */
  push32((uint32_t)(EBP));
  /* 112a1511 push esi */
  push32((uint32_t)(ESI));
  /* 112a1512 mov esi, ecx */
  ESI = (ECX);
  /* 112a1514 push edi */
  push32((uint32_t)(EDI));
  /* 112a1515 mov al, byte ptr [esi + 0x2af] */
  AL = (r8((uint32_t)(ESI + 0x2af)));
  /* 112a151b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a151d jne 0x112a15da */
  if (!C.zf) goto L_112a15da;
  /* 112a1523 mov al, byte ptr [esi + 0x2f6] */
  AL = (r8((uint32_t)(ESI + 0x2f6)));
  /* 112a1529 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a152b je 0x112a15da */
  if (C.zf) goto L_112a15da;
  /* 112a1531 mov al, byte ptr [esi + 0x2ff] */
  AL = (r8((uint32_t)(ESI + 0x2ff)));
  /* 112a1537 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 112a153b mov ebp, dword ptr [0x112aa178] */
  EBP = (r32((uint32_t)(0x112aa178)));
  /* 112a1541 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a1543 je 0x112a15b3 */
  if (C.zf) goto L_112a15b3;
  /* 112a1545 mov eax, dword ptr [esi + 0x2ab] */
  EAX = (r32((uint32_t)(ESI + 0x2ab)));
  /* 112a154b push edi */
  push32((uint32_t)(EDI));
  /* 112a154c push 0x112aee50 */
  push32((uint32_t)(0x112aee50u));
  /* 112a1551 push eax */
  push32((uint32_t)(EAX));
  /* 112a1552 call ebp */
  call_ind((uint32_t)(EBP), 0x112a1554u);
  /* 112a1554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1557 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a1559 je 0x112a15b3 */
  if (C.zf) goto L_112a15b3;
  /* 112a155b push 0x112ab06c */
  push32((uint32_t)(0x112ab06cu));
  /* 112a1560 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1562 push 0x112ab064 */
  push32((uint32_t)(0x112ab064u));
  /* 112a1567 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a1569 call dword ptr [0x112aa17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa17c))), 0x112a156fu);
  /* 112a156f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1572 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1575 ja 0x112a15b3 */
  if ((!C.cf&&!C.zf)) goto L_112a15b3;
  /* 112a1577 jmp dword ptr [eax*4 + 0x112a15e0] */
  switch (EAX) {
    case 0: goto L_112a157e;
    case 1: goto L_112a158e;
    case 2: goto L_112a159d;
    case 3: goto L_112a15ac;
    default: x86_unimpl("switch@0x112a1577 out of table"); return;
  }
L_112a157e:;
  /* 112a157e mov ecx, esi */
  ECX = (ESI);
  /* 112a1580 call 0x112a15f0 */
  push32(0x112a1585u); f_112a15f0();
  /* 112a1585 mov byte ptr [esi + 0x2ff], 1 */
  w8((uint32_t)(ESI + 0x2ff), (0x1u));
  /* 112a158c jmp 0x112a15b3 */
  goto L_112a15b3;
L_112a158e:;
  /* 112a158e mov ecx, esi */
  ECX = (ESI);
  /* 112a1590 call 0x112a1690 */
  push32(0x112a1595u); f_112a1690();
  /* 112a1595 mov byte ptr [esi + 0x2ff], al */
  w8((uint32_t)(ESI + 0x2ff), (AL));
  /* 112a159b jmp 0x112a15b3 */
  goto L_112a15b3;
L_112a159d:;
  /* 112a159d mov ecx, esi */
  ECX = (ESI);
  /* 112a159f call 0x112a16c0 */
  push32(0x112a15a4u); f_112a16c0();
  /* 112a15a4 mov byte ptr [esi + 0x2ff], al */
  w8((uint32_t)(ESI + 0x2ff), (AL));
  /* 112a15aa jmp 0x112a15b3 */
  goto L_112a15b3;
L_112a15ac:;
  /* 112a15ac mov byte ptr [esi + 0x2ff], 0 */
  w8((uint32_t)(ESI + 0x2ff), (0x0u));
L_112a15b3:;
  /* 112a15b3 mov al, byte ptr [esi + 0x2ff] */
  AL = (r8((uint32_t)(ESI + 0x2ff)));
  /* 112a15b9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a15bb jne 0x112a15da */
  if (!C.zf) goto L_112a15da;
  /* 112a15bd mov ecx, dword ptr [esi + 0x2ab] */
  ECX = (r32((uint32_t)(ESI + 0x2ab)));
  /* 112a15c3 push edi */
  push32((uint32_t)(EDI));
  /* 112a15c4 push 0x112aee50 */
  push32((uint32_t)(0x112aee50u));
  /* 112a15c9 push ecx */
  push32((uint32_t)(ECX));
  /* 112a15ca call ebp */
  call_ind((uint32_t)(EBP), 0x112a15ccu);
  /* 112a15cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a15cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a15d1 jne 0x112a15da */
  if (!C.zf) goto L_112a15da;
  /* 112a15d3 mov byte ptr [esi + 0x2ff], 1 */
  w8((uint32_t)(ESI + 0x2ff), (0x1u));
L_112a15da:;
  /* 112a15da pop edi */
  EDI = (pop32());
  /* 112a15db pop esi */
  ESI = (pop32());
  /* 112a15dc pop ebp */
  EBP = (pop32());
  /* 112a15dd ret 4 */
  ESPCHK(0x112a1510u, _esp0);
  ESP += 8; return;
}

/* FUN_100015f0 @ 0x112a15f0 (152 bytes, 44 insns) */
void f_112a15f0(void) {
  FTRACE(0x112a15f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a15f0 push esi */
  push32((uint32_t)(ESI));
  /* 112a15f1 mov esi, ecx */
  ESI = (ECX);
  /* 112a15f3 call 0x112a14d0 */
  push32(0x112a15f8u); f_112a14d0();
  /* 112a15f8 mov edx, dword ptr [esi + 0x2f7] */
  EDX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 112a15fe mov ecx, dword ptr [esi + 0x2fb] */
  ECX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 112a1604 push eax */
  push32((uint32_t)(EAX));
  /* 112a1605 push edx */
  push32((uint32_t)(EDX));
  /* 112a1606 mov edx, ecx */
  EDX = (ECX);
  /* 112a1608 push eax */
  push32((uint32_t)(EAX));
  /* 112a1609 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a160c push edx */
  push32((uint32_t)(EDX));
  /* 112a160d mov edx, 3 */
  EDX = (0x3u);
  /* 112a1612 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a1614 mov ecx, dword ptr [esi + 0x2c8] */
  ECX = (r32((uint32_t)(ESI + 0x2c8)));
  /* 112a161a imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a161d mov eax, dword ptr [esi + 0x2cc] */
  EAX = (r32((uint32_t)(ESI + 0x2cc)));
  /* 112a1623 push edx */
  push32((uint32_t)(EDX));
  /* 112a1624 mov edx, dword ptr [esi + 0x2c4] */
  EDX = (r32((uint32_t)(ESI + 0x2c4)));
  /* 112a162a push eax */
  push32((uint32_t)(EAX));
  /* 112a162b mov eax, dword ptr [esi + 0x2c0] */
  EAX = (r32((uint32_t)(ESI + 0x2c0)));
  /* 112a1631 push 0x112af22b */
  push32((uint32_t)(0x112af22bu));
  /* 112a1636 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1637 mov ecx, dword ptr [esi + 0x2bc] */
  ECX = (r32((uint32_t)(ESI + 0x2bc)));
  /* 112a163d push 0x112af21c */
  push32((uint32_t)(0x112af21cu));
  /* 112a1642 push edx */
  push32((uint32_t)(EDX));
  /* 112a1643 mov edx, dword ptr [esi + 0x2b8] */
  EDX = (r32((uint32_t)(ESI + 0x2b8)));
  /* 112a1649 push 0x112af20d */
  push32((uint32_t)(0x112af20du));
  /* 112a164e push eax */
  push32((uint32_t)(EAX));
  /* 112a164f mov eax, dword ptr [esi + 0x2e9] */
  EAX = (r32((uint32_t)(ESI + 0x2e9)));
  /* 112a1655 push 0x112af1fe */
  push32((uint32_t)(0x112af1feu));
  /* 112a165a push ecx */
  push32((uint32_t)(ECX));
  /* 112a165b lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a165e push 0x112af1ef */
  push32((uint32_t)(0x112af1efu));
  /* 112a1663 push edx */
  push32((uint32_t)(EDX));
  /* 112a1664 push 0x112af1e0 */
  push32((uint32_t)(0x112af1e0u));
  /* 112a1669 lea eax, [eax + eax*4 + 0x112af1e0] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x112af1e0));
  /* 112a1670 add esi, 0x298 */
  { uint32_t _a=(ESI),_b=(0x298u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1676 push eax */
  push32((uint32_t)(EAX));
  /* 112a1677 push esi */
  push32((uint32_t)(ESI));
  /* 112a1678 push 0x112ab084 */
  push32((uint32_t)(0x112ab084u));
  /* 112a167d call dword ptr [0x112aa174] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa174))), 0x112a1683u);
  /* 112a1683 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1686 pop esi */
  ESI = (pop32());
  /* 112a1687 ret  */
  ESPCHK(0x112a15f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001690 @ 0x112a1690 (36 bytes, 12 insns) */
void f_112a1690(void) {
  FTRACE(0x112a1690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1690 push esi */
  push32((uint32_t)(ESI));
  /* 112a1691 push 0x112ab094 */
  push32((uint32_t)(0x112ab094u));
  /* 112a1696 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1698 push 0x112ab08c */
  push32((uint32_t)(0x112ab08cu));
  /* 112a169d mov esi, ecx */
  ESI = (ECX);
  /* 112a169f push 9 */
  push32((uint32_t)(0x9u));
  /* 112a16a1 call dword ptr [0x112aa17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa17c))), 0x112a16a7u);
  /* 112a16a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a16aa mov dword ptr [esi + 0x2fb], eax */
  w32((uint32_t)(ESI + 0x2fb), (EAX));
  /* 112a16b0 mov al, 1 */
  AL = (0x1u);
  /* 112a16b2 pop esi */
  ESI = (pop32());
  /* 112a16b3 ret  */
  ESPCHK(0x112a1690u, _esp0);
  ESP += 4; return;
}

/* FUN_100016c0 @ 0x112a16c0 (65 bytes, 27 insns) */
void f_112a16c0(void) {
  FTRACE(0x112a16c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a16c0 push esi */
  push32((uint32_t)(ESI));
  /* 112a16c1 mov esi, dword ptr [0x112aa17c] */
  ESI = (r32((uint32_t)(0x112aa17c)));
  /* 112a16c7 push edi */
  push32((uint32_t)(EDI));
  /* 112a16c8 mov edi, ecx */
  EDI = (ECX);
L_112a16ca:;
  /* 112a16ca push 0x112ab0b8 */
  push32((uint32_t)(0x112ab0b8u));
  /* 112a16cf push 0 */
  push32((uint32_t)(0x0u));
  /* 112a16d1 push 0x112ab0b0 */
  push32((uint32_t)(0x112ab0b0u));
  /* 112a16d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a16d8 call esi */
  call_ind((uint32_t)(ESI), 0x112a16dau);
  /* 112a16da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a16dd sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a16e0 je 0x112a16f3 */
  if (C.zf) goto L_112a16f3;
  /* 112a16e2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a16e3 je 0x112a16ea */
  if (C.zf) goto L_112a16ea;
  /* 112a16e5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a16e6 je 0x112a16fc */
  if (C.zf) goto L_112a16fc;
  /* 112a16e8 jmp 0x112a16ca */
  goto L_112a16ca;
L_112a16ea:;
  /* 112a16ea mov ecx, edi */
  ECX = (EDI);
  /* 112a16ec call 0x112a1840 */
  push32(0x112a16f1u); f_112a1840();
  /* 112a16f1 jmp 0x112a16ca */
  goto L_112a16ca;
L_112a16f3:;
  /* 112a16f3 mov ecx, edi */
  ECX = (EDI);
  /* 112a16f5 call 0x112a1710 */
  push32(0x112a16fau); f_112a1710();
  /* 112a16fa jmp 0x112a16ca */
  goto L_112a16ca;
L_112a16fc:;
  /* 112a16fc pop edi */
  EDI = (pop32());
  /* 112a16fd mov al, 1 */
  AL = (0x1u);
  /* 112a16ff pop esi */
  ESI = (pop32());
  /* 112a1700 ret  */
  ESPCHK(0x112a16c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001710 @ 0x112a1710 (245 bytes, 83 insns) [2 switch table(s)] */
void f_112a1710(void) {
  FTRACE(0x112a1710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1710 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1711 push ebx */
  push32((uint32_t)(EBX));
  /* 112a1712 push ebp */
  push32((uint32_t)(EBP));
  /* 112a1713 push esi */
  push32((uint32_t)(ESI));
  /* 112a1714 mov esi, dword ptr [0x112aa17c] */
  ESI = (r32((uint32_t)(0x112aa17c)));
  /* 112a171a push edi */
  push32((uint32_t)(EDI));
  /* 112a171b push 0x112ab0e8 */
  push32((uint32_t)(0x112ab0e8u));
  /* 112a1720 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1722 push 0x112ab0e0 */
  push32((uint32_t)(0x112ab0e0u));
  /* 112a1727 mov ebx, ecx */
  EBX = (ECX);
  /* 112a1729 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a172b call esi */
  call_ind((uint32_t)(ESI), 0x112a172du);
  /* 112a172d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1730 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1733 ja 0x112a1763 */
  if ((!C.cf&&!C.zf)) goto L_112a1763;
  /* 112a1735 jmp dword ptr [eax*4 + 0x112a1808] */
  switch (EAX) {
    case 0: goto L_112a173c;
    case 1: goto L_112a1740;
    case 2: goto L_112a1747;
    case 3: goto L_112a174e;
    case 4: goto L_112a1755;
    case 5: goto L_112a175c;
    case 6: goto L_112a1786;
    case 7: goto L_112a178a;
    case 8: goto L_112a1791;
    case 9: goto L_112a1798;
    case 10: goto L_112a179f;
    case 11: goto L_112a17a6;
    default: x86_unimpl("switch@0x112a1735 out of table"); return;
  }
L_112a173c:;
  /* 112a173c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a173e jmp 0x112a1767 */
  goto L_112a1767;
L_112a1740:;
  /* 112a1740 mov edi, 1 */
  EDI = (0x1u);
  /* 112a1745 jmp 0x112a1767 */
  goto L_112a1767;
L_112a1747:;
  /* 112a1747 mov edi, 2 */
  EDI = (0x2u);
  /* 112a174c jmp 0x112a1767 */
  goto L_112a1767;
L_112a174e:;
  /* 112a174e mov edi, 3 */
  EDI = (0x3u);
  /* 112a1753 jmp 0x112a1767 */
  goto L_112a1767;
L_112a1755:;
  /* 112a1755 mov edi, 4 */
  EDI = (0x4u);
  /* 112a175a jmp 0x112a1767 */
  goto L_112a1767;
L_112a175c:;
  /* 112a175c mov edi, 5 */
  EDI = (0x5u);
  /* 112a1761 jmp 0x112a1767 */
  goto L_112a1767;
L_112a1763:;
  /* 112a1763 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_112a1767:;
  /* 112a1767 push 0x112ab0e8 */
  push32((uint32_t)(0x112ab0e8u));
  /* 112a176c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a176e push 0x112ab0d8 */
  push32((uint32_t)(0x112ab0d8u));
  /* 112a1773 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a1775 call esi */
  call_ind((uint32_t)(ESI), 0x112a1777u);
  /* 112a1777 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a177a cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a177d ja 0x112a17ad */
  if ((!C.cf&&!C.zf)) goto L_112a17ad;
  /* 112a177f jmp dword ptr [eax*4 + 0x112a1820] */
  switch (EAX) {
    case 0: goto L_112a1786;
    case 1: goto L_112a178a;
    case 2: goto L_112a1791;
    case 3: goto L_112a1798;
    case 4: goto L_112a179f;
    case 5: goto L_112a17a6;
    default: x86_unimpl("switch@0x112a177f out of table"); return;
  }
L_112a1786:;
  /* 112a1786 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a1788 jmp 0x112a17b1 */
  goto L_112a17b1;
L_112a178a:;
  /* 112a178a mov esi, 1 */
  ESI = (0x1u);
  /* 112a178f jmp 0x112a17b1 */
  goto L_112a17b1;
L_112a1791:;
  /* 112a1791 mov esi, 2 */
  ESI = (0x2u);
  /* 112a1796 jmp 0x112a17b1 */
  goto L_112a17b1;
L_112a1798:;
  /* 112a1798 mov esi, 3 */
  ESI = (0x3u);
  /* 112a179d jmp 0x112a17b1 */
  goto L_112a17b1;
L_112a179f:;
  /* 112a179f mov esi, 4 */
  ESI = (0x4u);
  /* 112a17a4 jmp 0x112a17b1 */
  goto L_112a17b1;
L_112a17a6:;
  /* 112a17a6 mov esi, 5 */
  ESI = (0x5u);
  /* 112a17ab jmp 0x112a17b1 */
  goto L_112a17b1;
L_112a17ad:;
  /* 112a17ad mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_112a17b1:;
  /* 112a17b1 mov ecx, ebx */
  ECX = (EBX);
  /* 112a17b3 call 0x112a1240 */
  push32(0x112a17b8u); f_112a1240();
  /* 112a17b8 push edi */
  push32((uint32_t)(EDI));
  /* 112a17b9 mov ecx, ebx */
  ECX = (EBX);
  /* 112a17bb call 0x112a1f80 */
  push32(0x112a17c0u); f_112a1f80();
  /* 112a17c0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a17c3 push esi */
  push32((uint32_t)(ESI));
  /* 112a17c4 mov ecx, ebx */
  ECX = (EBX);
  /* 112a17c6 lea ebp, [eax + eax*4] */
  EBP = ((uint32_t)(EAX + EAX*4));
  /* 112a17c9 shl ebp, 2 */
  EBP = (sh_shl((uint32_t)(EBP), (0x2u)&0x1f, 32));
  /* 112a17cc call 0x112a1f80 */
  push32(0x112a17d1u); f_112a1f80();
  /* 112a17d1 mov ecx, eax */
  ECX = (EAX);
  /* 112a17d3 mov eax, ebp */
  EAX = (EBP);
  /* 112a17d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112a17d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a17d8 push eax */
  push32((uint32_t)(EAX));
  /* 112a17d9 lea eax, [esi + esi*2] */
  EAX = ((uint32_t)(ESI + ESI*2));
  /* 112a17dc lea edx, [eax + eax*4 + 0x112af1e0] */
  EDX = ((uint32_t)(EAX + EAX*4 + 0x112af1e0));
  /* 112a17e3 lea eax, [edi + edi*2] */
  EAX = ((uint32_t)(EDI + EDI*2));
  /* 112a17e6 push edx */
  push32((uint32_t)(EDX));
  /* 112a17e7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 112a17e9 lea eax, [eax + eax*4 + 0x112af1e0] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x112af1e0));
  /* 112a17f0 push eax */
  push32((uint32_t)(EAX));
  /* 112a17f1 push 0x112ab0cc */
  push32((uint32_t)(0x112ab0ccu));
  /* 112a17f6 call dword ptr [0x112aa174] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa174))), 0x112a17fcu);
  /* 112a17fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a17ff pop edi */
  EDI = (pop32());
  /* 112a1800 pop esi */
  ESI = (pop32());
  /* 112a1801 pop ebp */
  EBP = (pop32());
  /* 112a1802 pop ebx */
  EBX = (pop32());
  /* 112a1803 pop ecx */
  ECX = (pop32());
  /* 112a1804 ret  */
  ESPCHK(0x112a1710u, _esp0);
  ESP += 4; return;
}

/* FUN_10001840 @ 0x112a1840 (307 bytes, 112 insns) */
void f_112a1840(void) {
  FTRACE(0x112a1840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1840 push ebx */
  push32((uint32_t)(EBX));
  /* 112a1841 mov ebx, dword ptr [0x112aa17c] */
  EBX = (r32((uint32_t)(0x112aa17c)));
  /* 112a1847 push esi */
  push32((uint32_t)(ESI));
  /* 112a1848 push edi */
  push32((uint32_t)(EDI));
  /* 112a1849 push 0x112ab148 */
  push32((uint32_t)(0x112ab148u));
  /* 112a184e push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1850 push 0x112ab13c */
  push32((uint32_t)(0x112ab13cu));
  /* 112a1855 mov edi, ecx */
  EDI = (ECX);
  /* 112a1857 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a1859 call ebx */
  call_ind((uint32_t)(EBX), 0x112a185bu);
  /* 112a185b push 0x112ab128 */
  push32((uint32_t)(0x112ab128u));
  /* 112a1860 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1862 push 0x112ab11c */
  push32((uint32_t)(0x112ab11cu));
  /* 112a1867 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a1869 mov esi, eax */
  ESI = (EAX);
  /* 112a186b call ebx */
  call_ind((uint32_t)(EBX), 0x112a186du);
  /* 112a186d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1870 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a1873 je 0x112a1912 */
  if (C.zf) goto L_112a1912;
  /* 112a1879 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a187a je 0x112a18cd */
  if (C.zf) goto L_112a18cd;
  /* 112a187c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a187d jne 0x112a196f */
  if (!C.zf) goto L_112a196f;
  /* 112a1883 shl esi, 6 */
  ESI = (sh_shl((uint32_t)(ESI), (0x6u)&0x1f, 32));
  /* 112a1886 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1888 push esi */
  push32((uint32_t)(ESI));
  /* 112a1889 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a188fu);
  /* 112a188f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1892 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a1894 je 0x112a18bb */
  if (C.zf) goto L_112a18bb;
  /* 112a1896 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1898 push esi */
  push32((uint32_t)(ESI));
  /* 112a1899 call dword ptr [0x112aa168] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa168))), 0x112a189fu);
  /* 112a189f mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a18a2 push eax */
  push32((uint32_t)(EAX));
  /* 112a18a3 call dword ptr [0x112aa16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa16c))), 0x112a18a9u);
  /* 112a18a9 push 0x112ab114 */
  push32((uint32_t)(0x112ab114u));
  /* 112a18ae call dword ptr [0x112aa170] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa170))), 0x112a18b4u);
  /* 112a18b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a18b7 pop edi */
  EDI = (pop32());
  /* 112a18b8 pop esi */
  ESI = (pop32());
  /* 112a18b9 pop ebx */
  EBX = (pop32());
  /* 112a18ba ret  */
  ESPCHK(0x112a1840u, _esp0);
  ESP += 4; return;
L_112a18bb:;
  /* 112a18bb push 0x112ab10c */
  push32((uint32_t)(0x112ab10cu));
  /* 112a18c0 call dword ptr [0x112aa170] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa170))), 0x112a18c6u);
  /* 112a18c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a18c9 pop edi */
  EDI = (pop32());
  /* 112a18ca pop esi */
  ESI = (pop32());
  /* 112a18cb pop ebx */
  EBX = (pop32());
  /* 112a18cc ret  */
  ESPCHK(0x112a1840u, _esp0);
  ESP += 4; return;
L_112a18cd:;
  /* 112a18cd mov ecx, esi */
  ECX = (ESI);
  /* 112a18cf shl ecx, 6 */
  ECX = (sh_shl((uint32_t)(ECX), (0x6u)&0x1f, 32));
  /* 112a18d2 lea ebx, [ecx + edi] */
  EBX = ((uint32_t)(ECX + EDI*1));
  /* 112a18d5 push ebx */
  push32((uint32_t)(EBX));
  /* 112a18d6 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a18dcu);
  /* 112a18dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a18df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a18e1 jne 0x112a1906 */
  if (!C.zf) goto L_112a1906;
  /* 112a18e3 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 112a18e9 mov al, byte ptr [edi + 0x2e8] */
  AL = (r8((uint32_t)(EDI + 0x2e8)));
  /* 112a18ef mov ecx, dword ptr [edi + 0x2a7] */
  ECX = (r32((uint32_t)(EDI + 0x2a7)));
  /* 112a18f5 push edx */
  push32((uint32_t)(EDX));
  /* 112a18f6 push eax */
  push32((uint32_t)(EAX));
  /* 112a18f7 lea edx, [edi + 0x298] */
  EDX = ((uint32_t)(EDI + 0x298));
  /* 112a18fd push ecx */
  push32((uint32_t)(ECX));
  /* 112a18fe push edx */
  push32((uint32_t)(EDX));
  /* 112a18ff mov ecx, ebx */
  ECX = (EBX);
  /* 112a1901 call 0x112a20f0 */
  push32(0x112a1906u); f_112a20f0();
L_112a1906:;
  /* 112a1906 push esi */
  push32((uint32_t)(ESI));
  /* 112a1907 mov ecx, edi */
  ECX = (EDI);
  /* 112a1909 call 0x112a1980 */
  push32(0x112a190eu); f_112a1980();
  /* 112a190e pop edi */
  EDI = (pop32());
  /* 112a190f pop esi */
  ESI = (pop32());
  /* 112a1910 pop ebx */
  EBX = (pop32());
  /* 112a1911 ret  */
  ESPCHK(0x112a1840u, _esp0);
  ESP += 4; return;
L_112a1912:;
  /* 112a1912 shl esi, 6 */
  ESI = (sh_shl((uint32_t)(ESI), (0x6u)&0x1f, 32));
  /* 112a1915 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1917 push esi */
  push32((uint32_t)(ESI));
  /* 112a1918 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a191eu);
  /* 112a191e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a1923 je 0x112a1961 */
  if (C.zf) goto L_112a1961;
  /* 112a1925 mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 112a1928 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 112a192b mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 112a192e add esi, 0x29 */
  { uint32_t _a=(ESI),_b=(0x29u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1931 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a1934 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 112a1937 push edx */
  push32((uint32_t)(EDX));
  /* 112a1938 mov edx, dword ptr [esi - 0x1c] */
  EDX = (r32((uint32_t)(ESI + -0x1c)));
  /* 112a193b lea eax, [eax + eax*4 + 0x112af1e0] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x112af1e0));
  /* 112a1942 lea ecx, [ecx + ecx*4 + 0x112af1e0] */
  ECX = ((uint32_t)(ECX + ECX*4 + 0x112af1e0));
  /* 112a1949 push eax */
  push32((uint32_t)(EAX));
  /* 112a194a push edx */
  push32((uint32_t)(EDX));
  /* 112a194b push ecx */
  push32((uint32_t)(ECX));
  /* 112a194c push eax */
  push32((uint32_t)(EAX));
  /* 112a194d push ecx */
  push32((uint32_t)(ECX));
  /* 112a194e push esi */
  push32((uint32_t)(ESI));
  /* 112a194f push 0x112ab104 */
  push32((uint32_t)(0x112ab104u));
  /* 112a1954 call dword ptr [0x112aa174] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa174))), 0x112a195au);
  /* 112a195a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a195d pop edi */
  EDI = (pop32());
  /* 112a195e pop esi */
  ESI = (pop32());
  /* 112a195f pop ebx */
  EBX = (pop32());
  /* 112a1960 ret  */
  ESPCHK(0x112a1840u, _esp0);
  ESP += 4; return;
L_112a1961:;
  /* 112a1961 push 0x112ab0fc */
  push32((uint32_t)(0x112ab0fcu));
  /* 112a1966 call dword ptr [0x112aa170] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa170))), 0x112a196cu);
  /* 112a196c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a196f:;
  /* 112a196f pop edi */
  EDI = (pop32());
  /* 112a1970 pop esi */
  ESI = (pop32());
  /* 112a1971 pop ebx */
  EBX = (pop32());
  /* 112a1972 ret  */
  ESPCHK(0x112a1840u, _esp0);
  ESP += 4; return;
}

/* FUN_10001980 @ 0x112a1980 (263 bytes, 86 insns) [2 switch table(s)] */
void f_112a1980(void) {
  FTRACE(0x112a1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1980 push ebx */
  push32((uint32_t)(EBX));
  /* 112a1981 push ebp */
  push32((uint32_t)(EBP));
  /* 112a1982 push esi */
  push32((uint32_t)(ESI));
  /* 112a1983 push edi */
  push32((uint32_t)(EDI));
  /* 112a1984 mov edi, ecx */
  EDI = (ECX);
  /* 112a1986 mov esi, dword ptr [0x112aa17c] */
  ESI = (r32((uint32_t)(0x112aa17c)));
  /* 112a198c mov eax, dword ptr [edi + 0x280] */
  EAX = (r32((uint32_t)(EDI + 0x280)));
  /* 112a1992 push eax */
  push32((uint32_t)(EAX));
  /* 112a1993 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1995 push 0x112ab188 */
  push32((uint32_t)(0x112ab188u));
  /* 112a199a push 9 */
  push32((uint32_t)(0x9u));
  /* 112a199c call esi */
  call_ind((uint32_t)(ESI), 0x112a199eu);
  /* 112a199e push 0x112ab0e8 */
  push32((uint32_t)(0x112ab0e8u));
  /* 112a19a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a19a5 push 0x112ab0e0 */
  push32((uint32_t)(0x112ab0e0u));
  /* 112a19aa push 9 */
  push32((uint32_t)(0x9u));
  /* 112a19ac mov ebp, eax */
  EBP = (EAX);
  /* 112a19ae call esi */
  call_ind((uint32_t)(ESI), 0x112a19b0u);
  /* 112a19b0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a19b3 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a19b6 ja 0x112a19e6 */
  if ((!C.cf&&!C.zf)) goto L_112a19e6;
  /* 112a19b8 jmp dword ptr [eax*4 + 0x112a1a88] */
  switch (EAX) {
    case 0: goto L_112a19bf;
    case 1: goto L_112a19c3;
    case 2: goto L_112a19ca;
    case 3: goto L_112a19d1;
    case 4: goto L_112a19d8;
    case 5: goto L_112a19df;
    case 6: goto L_112a1a09;
    case 7: goto L_112a1a0d;
    case 8: goto L_112a1a14;
    case 9: goto L_112a1a1b;
    case 10: goto L_112a1a22;
    case 11: goto L_112a1a29;
    default: x86_unimpl("switch@0x112a19b8 out of table"); return;
  }
L_112a19bf:;
  /* 112a19bf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a19c1 jmp 0x112a19ea */
  goto L_112a19ea;
L_112a19c3:;
  /* 112a19c3 mov ebx, 1 */
  EBX = (0x1u);
  /* 112a19c8 jmp 0x112a19ea */
  goto L_112a19ea;
L_112a19ca:;
  /* 112a19ca mov ebx, 2 */
  EBX = (0x2u);
  /* 112a19cf jmp 0x112a19ea */
  goto L_112a19ea;
L_112a19d1:;
  /* 112a19d1 mov ebx, 3 */
  EBX = (0x3u);
  /* 112a19d6 jmp 0x112a19ea */
  goto L_112a19ea;
L_112a19d8:;
  /* 112a19d8 mov ebx, 4 */
  EBX = (0x4u);
  /* 112a19dd jmp 0x112a19ea */
  goto L_112a19ea;
L_112a19df:;
  /* 112a19df mov ebx, 5 */
  EBX = (0x5u);
  /* 112a19e4 jmp 0x112a19ea */
  goto L_112a19ea;
L_112a19e6:;
  /* 112a19e6 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
L_112a19ea:;
  /* 112a19ea push 0x112ab0e8 */
  push32((uint32_t)(0x112ab0e8u));
  /* 112a19ef push 0 */
  push32((uint32_t)(0x0u));
  /* 112a19f1 push 0x112ab0d8 */
  push32((uint32_t)(0x112ab0d8u));
  /* 112a19f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a19f8 call esi */
  call_ind((uint32_t)(ESI), 0x112a19fau);
  /* 112a19fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a19fd cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1a00 ja 0x112a1a30 */
  if ((!C.cf&&!C.zf)) goto L_112a1a30;
  /* 112a1a02 jmp dword ptr [eax*4 + 0x112a1aa0] */
  switch (EAX) {
    case 0: goto L_112a1a09;
    case 1: goto L_112a1a0d;
    case 2: goto L_112a1a14;
    case 3: goto L_112a1a1b;
    case 4: goto L_112a1a22;
    case 5: goto L_112a1a29;
    default: x86_unimpl("switch@0x112a1a02 out of table"); return;
  }
L_112a1a09:;
  /* 112a1a09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a1a0b jmp 0x112a1a34 */
  goto L_112a1a34;
L_112a1a0d:;
  /* 112a1a0d mov ecx, 1 */
  ECX = (0x1u);
  /* 112a1a12 jmp 0x112a1a34 */
  goto L_112a1a34;
L_112a1a14:;
  /* 112a1a14 mov ecx, 2 */
  ECX = (0x2u);
  /* 112a1a19 jmp 0x112a1a34 */
  goto L_112a1a34;
L_112a1a1b:;
  /* 112a1a1b mov ecx, 3 */
  ECX = (0x3u);
  /* 112a1a20 jmp 0x112a1a34 */
  goto L_112a1a34;
L_112a1a22:;
  /* 112a1a22 mov ecx, 4 */
  ECX = (0x4u);
  /* 112a1a27 jmp 0x112a1a34 */
  goto L_112a1a34;
L_112a1a29:;
  /* 112a1a29 mov ecx, 5 */
  ECX = (0x5u);
  /* 112a1a2e jmp 0x112a1a34 */
  goto L_112a1a34;
L_112a1a30:;
  /* 112a1a30 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
L_112a1a34:;
  /* 112a1a34 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a1a38 mov eax, dword ptr [edi + ebp*4 + 0x284] */
  EAX = (r32((uint32_t)(EDI + EBP*4 + 0x284)));
  /* 112a1a3f shl edx, 6 */
  EDX = (sh_shl((uint32_t)(EDX), (0x6u)&0x1f, 32));
  /* 112a1a42 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1a43 mov ecx, dword ptr [eax + 0x2a7] */
  ECX = (r32((uint32_t)(EAX + 0x2a7)));
  /* 112a1a49 lea esi, [edx + edi] */
  ESI = ((uint32_t)(EDX + EDI*1));
  /* 112a1a4c push ebx */
  push32((uint32_t)(EBX));
  /* 112a1a4d add eax, 0x298 */
  { uint32_t _a=(EAX),_b=(0x298u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1a52 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1a53 push eax */
  push32((uint32_t)(EAX));
  /* 112a1a54 mov ecx, esi */
  ECX = (ESI);
  /* 112a1a56 call 0x112a2160 */
  push32(0x112a1a5bu); f_112a2160();
  /* 112a1a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1a5d push esi */
  push32((uint32_t)(ESI));
  /* 112a1a5e call dword ptr [0x112aa168] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa168))), 0x112a1a64u);
  /* 112a1a64 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 112a1a6a mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a1a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1a71 push edx */
  push32((uint32_t)(EDX));
  /* 112a1a72 push eax */
  push32((uint32_t)(EAX));
  /* 112a1a73 call dword ptr [0x112aa164] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa164))), 0x112a1a79u);
  /* 112a1a79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1a7c mov byte ptr [esi + 0x19], 0 */
  w8((uint32_t)(ESI + 0x19), (0x0u));
  /* 112a1a80 pop edi */
  EDI = (pop32());
  /* 112a1a81 pop esi */
  ESI = (pop32());
  /* 112a1a82 pop ebp */
  EBP = (pop32());
  /* 112a1a83 pop ebx */
  EBX = (pop32());
  /* 112a1a84 ret 4 */
  ESPCHK(0x112a1980u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ac0 @ 0x112a1ac0 (324 bytes, 125 insns) */
void f_112a1ac0(void) {
  FTRACE(0x112a1ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1ac1 push ebx */
  push32((uint32_t)(EBX));
  /* 112a1ac2 push ebp */
  push32((uint32_t)(EBP));
  /* 112a1ac3 push esi */
  push32((uint32_t)(ESI));
  /* 112a1ac4 push edi */
  push32((uint32_t)(EDI));
  /* 112a1ac5 mov edi, ecx */
  EDI = (ECX);
  /* 112a1ac7 mov al, byte ptr [edi + 0x2f6] */
  AL = (r8((uint32_t)(EDI + 0x2f6)));
  /* 112a1acd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a1acf je 0x112a1bfc */
  if (C.zf) goto L_112a1bfc;
  /* 112a1ad5 mov al, byte ptr [edi + 0x2e8] */
  AL = (r8((uint32_t)(EDI + 0x2e8)));
  /* 112a1adb mov ecx, dword ptr [edi + 0x2ab] */
  ECX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 112a1ae1 push eax */
  push32((uint32_t)(EAX));
  /* 112a1ae2 push 0x112aeab8 */
  push32((uint32_t)(0x112aeab8u));
  /* 112a1ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1ae8 call dword ptr [0x112aa178] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa178))), 0x112a1aeeu);
  /* 112a1aee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a1af3 je 0x112a1bfc */
  if (C.zf) goto L_112a1bfc;
  /* 112a1af9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a1afb mov ebx, edi */
  EBX = (EDI);
L_112a1afd:;
  /* 112a1afd mov al, byte ptr [ebx + 0x19] */
  AL = (r8((uint32_t)(EBX + 0x19)));
  /* 112a1b00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a1b02 jne 0x112a1b19 */
  if (!C.zf) goto L_112a1b19;
  /* 112a1b04 mov edx, dword ptr [edi + 0x2ab] */
  EDX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 112a1b0a push ebx */
  push32((uint32_t)(EBX));
  /* 112a1b0b push edx */
  push32((uint32_t)(EDX));
  /* 112a1b0c call dword ptr [0x112aa160] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa160))), 0x112a1b12u);
  /* 112a1b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1b15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a1b17 jne 0x112a1b82 */
  if (!C.zf) goto L_112a1b82;
L_112a1b19:;
  /* 112a1b19 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a1b1a add ebx, 0x40 */
  { uint32_t _a=(EBX),_b=(0x40u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1b1d cmp esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1b20 jl 0x112a1afd */
  if ((C.sf!=C.of)) goto L_112a1afd;
  /* 112a1b22 mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 112a1b2a lea ebp, [edi + 0x284] */
  EBP = ((uint32_t)(EDI + 0x284));
L_112a1b30:;
  /* 112a1b30 cmp dword ptr [ebp], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1b34 je 0x112a1b69 */
  if (C.zf) goto L_112a1b69;
  /* 112a1b36 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a1b38 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_112a1b3a:;
  /* 112a1b3a mov edx, dword ptr [ebp] */
  EDX = (r32((uint32_t)(EBP)));
  /* 112a1b3d mov cl, byte ptr [esi + edx + 0x19] */
  CL = (r8((uint32_t)(ESI + EDX*1 + 0x19)));
  /* 112a1b41 lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 112a1b44 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 112a1b46 je 0x112a1b5d */
  if (C.zf) goto L_112a1b5d;
  /* 112a1b48 push eax */
  push32((uint32_t)(EAX));
  /* 112a1b49 mov eax, dword ptr [edi + 0x2ab] */
  EAX = (r32((uint32_t)(EDI + 0x2ab)));
  /* 112a1b4f push eax */
  push32((uint32_t)(EAX));
  /* 112a1b50 call dword ptr [0x112aa160] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa160))), 0x112a1b56u);
  /* 112a1b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a1b5b jne 0x112a1bb4 */
  if (!C.zf) goto L_112a1bb4;
L_112a1b5d:;
  /* 112a1b5d add esi, 0x40 */
  { uint32_t _a=(ESI),_b=(0x40u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1b60 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a1b61 cmp esi, 0x280 */
  { uint32_t _a=(ESI),_b=(0x280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1b67 jl 0x112a1b3a */
  if ((C.sf!=C.of)) goto L_112a1b3a;
L_112a1b69:;
  /* 112a1b69 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112a1b6d add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1b70 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a1b71 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1b74 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 112a1b78 jl 0x112a1b30 */
  if ((C.sf!=C.of)) goto L_112a1b30;
  /* 112a1b7a pop edi */
  EDI = (pop32());
  /* 112a1b7b pop esi */
  ESI = (pop32());
  /* 112a1b7c pop ebp */
  EBP = (pop32());
  /* 112a1b7d xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 112a1b7f pop ebx */
  EBX = (pop32());
  /* 112a1b80 pop ecx */
  ECX = (pop32());
  /* 112a1b81 ret  */
  ESPCHK(0x112a1ac0u, _esp0);
  ESP += 4; return;
L_112a1b82:;
  /* 112a1b82 shl esi, 6 */
  ESI = (sh_shl((uint32_t)(ESI), (0x6u)&0x1f, 32));
  /* 112a1b85 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1b87 mov ecx, edi */
  ECX = (EDI);
  /* 112a1b89 push esi */
  push32((uint32_t)(ESI));
  /* 112a1b8a mov byte ptr [esi + 0x19], 1 */
  w8((uint32_t)(ESI + 0x19), (0x1u));
  /* 112a1b8e call 0x112a1c10 */
  push32(0x112a1b93u); f_112a1c10();
  /* 112a1b93 push esi */
  push32((uint32_t)(ESI));
  /* 112a1b94 mov ecx, edi */
  ECX = (EDI);
  /* 112a1b96 call 0x112a1c50 */
  push32(0x112a1b9bu); f_112a1c50();
  /* 112a1b9b mov eax, dword ptr [esi + 0x3c] */
  EAX = (r32((uint32_t)(ESI + 0x3c)));
  /* 112a1b9e mov ecx, dword ptr [esi + 0x38] */
  ECX = (r32((uint32_t)(ESI + 0x38)));
  /* 112a1ba1 push eax */
  push32((uint32_t)(EAX));
  /* 112a1ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1ba3 push esi */
  push32((uint32_t)(ESI));
  /* 112a1ba4 call 0x112a3a10 */
  push32(0x112a1ba9u); f_112a3a10();
  /* 112a1ba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1bac mov al, 1 */
  AL = (0x1u);
  /* 112a1bae pop edi */
  EDI = (pop32());
  /* 112a1baf pop esi */
  ESI = (pop32());
  /* 112a1bb0 pop ebp */
  EBP = (pop32());
  /* 112a1bb1 pop ebx */
  EBX = (pop32());
  /* 112a1bb2 pop ecx */
  ECX = (pop32());
  /* 112a1bb3 ret  */
  ESPCHK(0x112a1ac0u, _esp0);
  ESP += 4; return;
L_112a1bb4:;
  /* 112a1bb4 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 112a1bb8 shl ebx, 6 */
  EBX = (sh_shl((uint32_t)(EBX), (0x6u)&0x1f, 32));
  /* 112a1bbb mov ecx, dword ptr [edi + esi*4 + 0x284] */
  ECX = (r32((uint32_t)(EDI + ESI*4 + 0x284)));
  /* 112a1bc2 mov byte ptr [ecx + ebx + 0x19], 0 */
  w8((uint32_t)(ECX + EBX*1 + 0x19), (0x0u));
  /* 112a1bc7 mov eax, dword ptr [edi + esi*4 + 0x284] */
  EAX = (r32((uint32_t)(EDI + ESI*4 + 0x284)));
  /* 112a1bce push eax */
  push32((uint32_t)(EAX));
  /* 112a1bcf mov ecx, edi */
  ECX = (EDI);
  /* 112a1bd1 lea edx, [ebx + eax] */
  EDX = ((uint32_t)(EBX + EAX*1));
  /* 112a1bd4 push edx */
  push32((uint32_t)(EDX));
  /* 112a1bd5 call 0x112a1cb0 */
  push32(0x112a1bdau); f_112a1cb0();
  /* 112a1bda mov eax, dword ptr [edi + esi*4 + 0x284] */
  EAX = (r32((uint32_t)(EDI + ESI*4 + 0x284)));
  /* 112a1be1 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1be3 mov ecx, dword ptr [eax + 0x38] */
  ECX = (r32((uint32_t)(EAX + 0x38)));
  /* 112a1be6 mov edx, dword ptr [eax + 0x3c] */
  EDX = (r32((uint32_t)(EAX + 0x3c)));
  /* 112a1be9 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1bea push edx */
  push32((uint32_t)(EDX));
  /* 112a1beb push eax */
  push32((uint32_t)(EAX));
  /* 112a1bec call 0x112a3a10 */
  push32(0x112a1bf1u); f_112a3a10();
  /* 112a1bf1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1bf4 mov al, 1 */
  AL = (0x1u);
  /* 112a1bf6 pop edi */
  EDI = (pop32());
  /* 112a1bf7 pop esi */
  ESI = (pop32());
  /* 112a1bf8 pop ebp */
  EBP = (pop32());
  /* 112a1bf9 pop ebx */
  EBX = (pop32());
  /* 112a1bfa pop ecx */
  ECX = (pop32());
  /* 112a1bfb ret  */
  ESPCHK(0x112a1ac0u, _esp0);
  ESP += 4; return;
L_112a1bfc:;
  /* 112a1bfc pop edi */
  EDI = (pop32());
  /* 112a1bfd pop esi */
  ESI = (pop32());
  /* 112a1bfe pop ebp */
  EBP = (pop32());
  /* 112a1bff xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 112a1c01 pop ebx */
  EBX = (pop32());
  /* 112a1c02 pop ecx */
  ECX = (pop32());
  /* 112a1c03 ret  */
  ESPCHK(0x112a1ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c10 @ 0x112a1c10 (51 bytes, 22 insns) */
void f_112a1c10(void) {
  FTRACE(0x112a1c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1c10 push esi */
  push32((uint32_t)(ESI));
  /* 112a1c11 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a1c15 push edi */
  push32((uint32_t)(EDI));
  /* 112a1c16 mov edi, ecx */
  EDI = (ECX);
  /* 112a1c18 mov eax, dword ptr [esi + 0xd] */
  EAX = (r32((uint32_t)(ESI + 0xd)));
  /* 112a1c1b mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 112a1c1e push eax */
  push32((uint32_t)(EAX));
  /* 112a1c1f push ecx */
  push32((uint32_t)(ECX));
  /* 112a1c20 mov ecx, edi */
  ECX = (EDI);
  /* 112a1c22 call 0x112a1ff0 */
  push32(0x112a1c27u); f_112a1ff0();
  /* 112a1c27 mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 112a1c2a mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 112a1c2d push edx */
  push32((uint32_t)(EDX));
  /* 112a1c2e push eax */
  push32((uint32_t)(EAX));
  /* 112a1c2f mov ecx, edi */
  ECX = (EDI);
  /* 112a1c31 call 0x112a1ff0 */
  push32(0x112a1c36u); f_112a1ff0();
  /* 112a1c36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a1c38 pop edi */
  EDI = (pop32());
  /* 112a1c39 mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 112a1c3c mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 112a1c3f pop esi */
  ESI = (pop32());
  /* 112a1c40 ret 4 */
  ESPCHK(0x112a1c10u, _esp0);
  ESP += 8; return;
}

/* FUN_10001c50 @ 0x112a1c50 (96 bytes, 36 insns) */
void f_112a1c50(void) {
  FTRACE(0x112a1c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1c50 push esi */
  push32((uint32_t)(ESI));
  /* 112a1c51 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a1c55 push edi */
  push32((uint32_t)(EDI));
  /* 112a1c56 mov edi, ecx */
  EDI = (ECX);
  /* 112a1c58 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 112a1c5b push eax */
  push32((uint32_t)(EAX));
  /* 112a1c5c call 0x112a1f10 */
  push32(0x112a1c61u); f_112a1f10();
  /* 112a1c61 cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1c66 jl 0x112a1c84 */
  if ((C.sf!=C.of)) goto L_112a1c84;
  /* 112a1c68 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 112a1c6b push 0xfffffed4 */
  push32((uint32_t)(0xfffffed4u));
  /* 112a1c70 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1c71 mov ecx, edi */
  ECX = (EDI);
  /* 112a1c73 mov dword ptr [esi + 0xd], 0x12c */
  w32((uint32_t)(ESI + 0xd), (0x12cu));
  /* 112a1c7a call 0x112a1ff0 */
  push32(0x112a1c7fu); f_112a1ff0();
  /* 112a1c7f pop edi */
  EDI = (pop32());
  /* 112a1c80 pop esi */
  ESI = (pop32());
  /* 112a1c81 ret 4 */
  ESPCHK(0x112a1c50u, _esp0);
  ESP += 8; return;
L_112a1c84:;
  /* 112a1c84 mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 112a1c87 mov ecx, edi */
  ECX = (EDI);
  /* 112a1c89 push edx */
  push32((uint32_t)(EDX));
  /* 112a1c8a call 0x112a1f10 */
  push32(0x112a1c8fu); f_112a1f10();
  /* 112a1c8f mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 112a1c92 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 112a1c95 push eax */
  push32((uint32_t)(EAX));
  /* 112a1c96 mov ecx, edi */
  ECX = (EDI);
  /* 112a1c98 call 0x112a1f10 */
  push32(0x112a1c9du); f_112a1f10();
  /* 112a1c9d mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 112a1ca0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a1ca2 push eax */
  push32((uint32_t)(EAX));
  /* 112a1ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1ca4 mov ecx, edi */
  ECX = (EDI);
  /* 112a1ca6 call 0x112a1ff0 */
  push32(0x112a1cabu); f_112a1ff0();
  /* 112a1cab pop edi */
  EDI = (pop32());
  /* 112a1cac pop esi */
  ESI = (pop32());
  /* 112a1cad ret 4 */
  ESPCHK(0x112a1c50u, _esp0);
  ESP += 8; return;
}

/* FUN_10001cb0 @ 0x112a1cb0 (601 bytes, 230 insns) */
void f_112a1cb0(void) {
  FTRACE(0x112a1cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1cb0 push ebx */
  push32((uint32_t)(EBX));
  /* 112a1cb1 push ebp */
  push32((uint32_t)(EBP));
  /* 112a1cb2 push esi */
  push32((uint32_t)(ESI));
  /* 112a1cb3 mov esi, ecx */
  ESI = (ECX);
  /* 112a1cb5 push edi */
  push32((uint32_t)(EDI));
  /* 112a1cb6 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 112a1cba mov al, byte ptr [esi + 0x2af] */
  AL = (r8((uint32_t)(ESI + 0x2af)));
  /* 112a1cc0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a1cc2 je 0x112a1e33 */
  if (C.zf) goto L_112a1e33;
  /* 112a1cc8 mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1ccb mov ebx, dword ptr [esp + 0x18] */
  EBX = (r32((uint32_t)(ESP + 0x18)));
  /* 112a1ccf push eax */
  push32((uint32_t)(EAX));
  /* 112a1cd0 mov ecx, ebx */
  ECX = (EBX);
  /* 112a1cd2 call 0x112a1f80 */
  push32(0x112a1cd7u); f_112a1f80();
  /* 112a1cd7 imul eax, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a1cdb mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1cde mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 112a1ce2 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1ce3 mov ecx, esi */
  ECX = (ESI);
  /* 112a1ce5 call 0x112a20d0 */
  push32(0x112a1ceau); f_112a20d0();
  /* 112a1cea mov dl, byte ptr [esi + 0x2e8] */
  DL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 112a1cf0 push eax */
  push32((uint32_t)(EAX));
  /* 112a1cf1 dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 112a1cf3 push edx */
  push32((uint32_t)(EDX));
  /* 112a1cf4 call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a1cfau);
  /* 112a1cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1cfd mov ebp, eax */
  EBP = (EAX);
  /* 112a1cff mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1d02 mov ecx, ebx */
  ECX = (EBX);
  /* 112a1d04 push eax */
  push32((uint32_t)(EAX));
  /* 112a1d05 call 0x112a1f80 */
  push32(0x112a1d0au); f_112a1f80();
  /* 112a1d0a imul ebp, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a1d0d cmp dword ptr [esp + 0x14], ebp */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1d11 jg 0x112a1da0 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a1da0;
  /* 112a1d17 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 112a1d1a mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1d1d push ecx */
  push32((uint32_t)(ECX));
  /* 112a1d1e push edx */
  push32((uint32_t)(EDX));
  /* 112a1d1f mov ecx, esi */
  ECX = (ESI);
  /* 112a1d21 call 0x112a20d0 */
  push32(0x112a1d26u); f_112a20d0();
  /* 112a1d26 push eax */
  push32((uint32_t)(EAX));
  /* 112a1d27 mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 112a1d2d dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 112a1d2f push eax */
  push32((uint32_t)(EAX));
  /* 112a1d30 call dword ptr [0x112aa184] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa184))), 0x112a1d36u);
  /* 112a1d36 mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1d39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1d3c mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 112a1d43 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1d44 mov ecx, ebx */
  ECX = (EBX);
  /* 112a1d46 call 0x112a1f80 */
  push32(0x112a1d4bu); f_112a1f80();
  /* 112a1d4b mov ecx, eax */
  ECX = (EAX);
  /* 112a1d4d mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a1d51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112a1d52 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a1d54 mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1d57 mov ecx, esi */
  ECX = (ESI);
  /* 112a1d59 push edx */
  push32((uint32_t)(EDX));
  /* 112a1d5a mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 112a1d5d call 0x112a20d0 */
  push32(0x112a1d62u); f_112a20d0();
  /* 112a1d62 push eax */
  push32((uint32_t)(EAX));
  /* 112a1d63 mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 112a1d69 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 112a1d6b push eax */
  push32((uint32_t)(EAX));
  /* 112a1d6c call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a1d72u);
  /* 112a1d72 mov ecx, dword ptr [edi + 0x15] */
  ECX = (r32((uint32_t)(EDI + 0x15)));
  /* 112a1d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1d78 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a1d7a mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1d7d push eax */
  push32((uint32_t)(EAX));
  /* 112a1d7e push ecx */
  push32((uint32_t)(ECX));
  /* 112a1d7f mov ecx, esi */
  ECX = (ESI);
  /* 112a1d81 call 0x112a20d0 */
  push32(0x112a1d86u); f_112a20d0();
  /* 112a1d86 mov dl, byte ptr [esi + 0x2e8] */
  DL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 112a1d8c push eax */
  push32((uint32_t)(EAX));
  /* 112a1d8d dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 112a1d8f push edx */
  push32((uint32_t)(EDX));
  /* 112a1d90 call dword ptr [0x112aa15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa15c))), 0x112a1d96u);
  /* 112a1d96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1d99 pop edi */
  EDI = (pop32());
  /* 112a1d9a pop esi */
  ESI = (pop32());
  /* 112a1d9b pop ebp */
  EBP = (pop32());
  /* 112a1d9c pop ebx */
  EBX = (pop32());
  /* 112a1d9d ret 8 */
  ESPCHK(0x112a1cb0u, _esp0);
  ESP += 12; return;
L_112a1da0:;
  /* 112a1da0 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1da3 mov ecx, esi */
  ECX = (ESI);
  /* 112a1da5 push eax */
  push32((uint32_t)(EAX));
  /* 112a1da6 call 0x112a20d0 */
  push32(0x112a1dabu); f_112a20d0();
  /* 112a1dab mov cl, byte ptr [esi + 0x2e8] */
  CL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 112a1db1 push eax */
  push32((uint32_t)(EAX));
  /* 112a1db2 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 112a1db4 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1db5 call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a1dbbu);
  /* 112a1dbb mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1dbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1dc1 mov ecx, esi */
  ECX = (ESI);
  /* 112a1dc3 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 112a1dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a1dc8 push edx */
  push32((uint32_t)(EDX));
  /* 112a1dc9 call 0x112a20d0 */
  push32(0x112a1dceu); f_112a20d0();
  /* 112a1dce push eax */
  push32((uint32_t)(EAX));
  /* 112a1dcf mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 112a1dd5 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 112a1dd7 push eax */
  push32((uint32_t)(EAX));
  /* 112a1dd8 call dword ptr [0x112aa15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa15c))), 0x112a1ddeu);
  /* 112a1dde mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1de1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1de4 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1de5 mov ecx, ebx */
  ECX = (EBX);
  /* 112a1de7 call 0x112a1f80 */
  push32(0x112a1decu); f_112a1f80();
  /* 112a1dec mov ecx, eax */
  ECX = (EAX);
  /* 112a1dee mov eax, ebp */
  EAX = (EBP);
  /* 112a1df0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112a1df1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a1df3 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 112a1df6 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1df9 push edx */
  push32((uint32_t)(EDX));
  /* 112a1dfa sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a1dfc mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 112a1dff mov ecx, ebx */
  ECX = (EBX);
  /* 112a1e01 call 0x112a1f80 */
  push32(0x112a1e06u); f_112a1f80();
  /* 112a1e06 mov ecx, eax */
  ECX = (EAX);
  /* 112a1e08 mov eax, ebp */
  EAX = (EBP);
  /* 112a1e0a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112a1e0b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a1e0d mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1e10 mov ecx, esi */
  ECX = (ESI);
  /* 112a1e12 push eax */
  push32((uint32_t)(EAX));
  /* 112a1e13 push edx */
  push32((uint32_t)(EDX));
  /* 112a1e14 call 0x112a20d0 */
  push32(0x112a1e19u); f_112a20d0();
  /* 112a1e19 push eax */
  push32((uint32_t)(EAX));
  /* 112a1e1a mov al, byte ptr [esi + 0x2e8] */
  AL = (r8((uint32_t)(ESI + 0x2e8)));
  /* 112a1e20 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 112a1e22 push eax */
  push32((uint32_t)(EAX));
  /* 112a1e23 call dword ptr [0x112aa184] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa184))), 0x112a1e29u);
  /* 112a1e29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a1e2c pop edi */
  EDI = (pop32());
  /* 112a1e2d pop esi */
  ESI = (pop32());
  /* 112a1e2e pop ebp */
  EBP = (pop32());
  /* 112a1e2f pop ebx */
  EBX = (pop32());
  /* 112a1e30 ret 8 */
  ESPCHK(0x112a1cb0u, _esp0);
  ESP += 12; return;
L_112a1e33:;
  /* 112a1e33 mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1e36 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1e37 mov ecx, esi */
  ECX = (ESI);
  /* 112a1e39 call 0x112a1f80 */
  push32(0x112a1e3eu); f_112a1f80();
  /* 112a1e3e mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1e41 mov ebp, eax */
  EBP = (EAX);
  /* 112a1e43 imul ebp, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a1e47 push edx */
  push32((uint32_t)(EDX));
  /* 112a1e48 mov ecx, esi */
  ECX = (ESI);
  /* 112a1e4a call 0x112a1f80 */
  push32(0x112a1e4fu); f_112a1f80();
  /* 112a1e4f mov ebx, eax */
  EBX = (EAX);
  /* 112a1e51 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1e54 push eax */
  push32((uint32_t)(EAX));
  /* 112a1e55 mov ecx, esi */
  ECX = (ESI);
  /* 112a1e57 call 0x112a1f10 */
  push32(0x112a1e5cu); f_112a1f10();
  /* 112a1e5c imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a1e5f cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1e61 jg 0x112a1ea3 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a1ea3;
  /* 112a1e63 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 112a1e66 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1e69 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1e6a push edx */
  push32((uint32_t)(EDX));
  /* 112a1e6b mov ecx, esi */
  ECX = (ESI);
  /* 112a1e6d call 0x112a1ff0 */
  push32(0x112a1e72u); f_112a1ff0();
  /* 112a1e72 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1e75 mov ecx, esi */
  ECX = (ESI);
  /* 112a1e77 push eax */
  push32((uint32_t)(EAX));
  /* 112a1e78 mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 112a1e7f call 0x112a1f80 */
  push32(0x112a1e84u); f_112a1f80();
  /* 112a1e84 mov ecx, eax */
  ECX = (EAX);
  /* 112a1e86 mov eax, ebp */
  EAX = (EBP);
  /* 112a1e88 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112a1e89 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a1e8b mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1e8e mov ecx, esi */
  ECX = (ESI);
  /* 112a1e90 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 112a1e93 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a1e95 push eax */
  push32((uint32_t)(EAX));
  /* 112a1e96 push edx */
  push32((uint32_t)(EDX));
  /* 112a1e97 call 0x112a1ff0 */
  push32(0x112a1e9cu); f_112a1ff0();
  /* 112a1e9c pop edi */
  EDI = (pop32());
  /* 112a1e9d pop esi */
  ESI = (pop32());
  /* 112a1e9e pop ebp */
  EBP = (pop32());
  /* 112a1e9f pop ebx */
  EBX = (pop32());
  /* 112a1ea0 ret 8 */
  ESPCHK(0x112a1cb0u, _esp0);
  ESP += 12; return;
L_112a1ea3:;
  /* 112a1ea3 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1ea6 mov ecx, esi */
  ECX = (ESI);
  /* 112a1ea8 push eax */
  push32((uint32_t)(EAX));
  /* 112a1ea9 call 0x112a1f10 */
  push32(0x112a1eaeu); f_112a1f10();
  /* 112a1eae mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1eb1 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 112a1eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 112a1eb5 mov ecx, esi */
  ECX = (ESI);
  /* 112a1eb7 call 0x112a1f10 */
  push32(0x112a1ebcu); f_112a1f10();
  /* 112a1ebc mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 112a1ebf mov ecx, esi */
  ECX = (ESI);
  /* 112a1ec1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a1ec3 push eax */
  push32((uint32_t)(EAX));
  /* 112a1ec4 push edx */
  push32((uint32_t)(EDX));
  /* 112a1ec5 call 0x112a1ff0 */
  push32(0x112a1ecau); f_112a1ff0();
  /* 112a1eca mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1ecd mov ecx, esi */
  ECX = (ESI);
  /* 112a1ecf push eax */
  push32((uint32_t)(EAX));
  /* 112a1ed0 call 0x112a1f80 */
  push32(0x112a1ed5u); f_112a1f80();
  /* 112a1ed5 mov ecx, eax */
  ECX = (EAX);
  /* 112a1ed7 mov eax, ebx */
  EAX = (EBX);
  /* 112a1ed9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112a1eda idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a1edc mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 112a1edf mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1ee2 push edx */
  push32((uint32_t)(EDX));
  /* 112a1ee3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a1ee5 mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 112a1ee8 mov ecx, esi */
  ECX = (ESI);
  /* 112a1eea call 0x112a1f80 */
  push32(0x112a1eefu); f_112a1f80();
  /* 112a1eef mov ecx, eax */
  ECX = (EAX);
  /* 112a1ef1 mov eax, ebx */
  EAX = (EBX);
  /* 112a1ef3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 112a1ef4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a1ef6 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 112a1ef9 mov ecx, esi */
  ECX = (ESI);
  /* 112a1efb push eax */
  push32((uint32_t)(EAX));
  /* 112a1efc push edx */
  push32((uint32_t)(EDX));
  /* 112a1efd call 0x112a1ff0 */
  push32(0x112a1f02u); f_112a1ff0();
  /* 112a1f02 pop edi */
  EDI = (pop32());
  /* 112a1f03 pop esi */
  ESI = (pop32());
  /* 112a1f04 pop ebp */
  EBP = (pop32());
  /* 112a1f05 pop ebx */
  EBX = (pop32());
  /* 112a1f06 ret 8 */
  ESPCHK(0x112a1cb0u, _esp0);
  ESP += 12; return;
}

/* FUN_10001f10 @ 0x112a1f10 (75 bytes, 18 insns) [1 switch table(s)] */
void f_112a1f10(void) {
  FTRACE(0x112a1f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1f10 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a1f14 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1f17 ja 0x112a1f56 */
  if ((!C.cf&&!C.zf)) goto L_112a1f56;
  /* 112a1f19 jmp dword ptr [eax*4 + 0x112a1f5c] */
  switch (EAX) {
    case 0: goto L_112a1f20;
    case 1: goto L_112a1f29;
    case 2: goto L_112a1f32;
    case 3: goto L_112a1f3b;
    case 4: goto L_112a1f44;
    case 5: goto L_112a1f4d;
    default: x86_unimpl("switch@0x112a1f19 out of table"); return;
  }
L_112a1f20:;
  /* 112a1f20 mov eax, dword ptr [ecx + 0x2b8] */
  EAX = (r32((uint32_t)(ECX + 0x2b8)));
  /* 112a1f26 ret 4 */
  ESPCHK(0x112a1f10u, _esp0);
  ESP += 8; return;
L_112a1f29:;
  /* 112a1f29 mov eax, dword ptr [ecx + 0x2bc] */
  EAX = (r32((uint32_t)(ECX + 0x2bc)));
  /* 112a1f2f ret 4 */
  ESPCHK(0x112a1f10u, _esp0);
  ESP += 8; return;
L_112a1f32:;
  /* 112a1f32 mov eax, dword ptr [ecx + 0x2c0] */
  EAX = (r32((uint32_t)(ECX + 0x2c0)));
  /* 112a1f38 ret 4 */
  ESPCHK(0x112a1f10u, _esp0);
  ESP += 8; return;
L_112a1f3b:;
  /* 112a1f3b mov eax, dword ptr [ecx + 0x2c4] */
  EAX = (r32((uint32_t)(ECX + 0x2c4)));
  /* 112a1f41 ret 4 */
  ESPCHK(0x112a1f10u, _esp0);
  ESP += 8; return;
L_112a1f44:;
  /* 112a1f44 mov eax, dword ptr [ecx + 0x2c8] */
  EAX = (r32((uint32_t)(ECX + 0x2c8)));
  /* 112a1f4a ret 4 */
  ESPCHK(0x112a1f10u, _esp0);
  ESP += 8; return;
L_112a1f4d:;
  /* 112a1f4d mov eax, dword ptr [ecx + 0x2cc] */
  EAX = (r32((uint32_t)(ECX + 0x2cc)));
  /* 112a1f53 ret 4 */
  ESPCHK(0x112a1f10u, _esp0);
  ESP += 8; return;
L_112a1f56:;
  /* 112a1f56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a1f58 ret 4 */
  ESPCHK(0x112a1f10u, _esp0);
  ESP += 8; return;
}

/* FUN_10001f80 @ 0x112a1f80 (75 bytes, 18 insns) [1 switch table(s)] */
void f_112a1f80(void) {
  FTRACE(0x112a1f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1f80 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a1f84 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1f87 ja 0x112a1fc6 */
  if ((!C.cf&&!C.zf)) goto L_112a1fc6;
  /* 112a1f89 jmp dword ptr [eax*4 + 0x112a1fcc] */
  switch (EAX) {
    case 0: goto L_112a1f90;
    case 1: goto L_112a1f99;
    case 2: goto L_112a1fa2;
    case 3: goto L_112a1fab;
    case 4: goto L_112a1fb4;
    case 5: goto L_112a1fbd;
    default: x86_unimpl("switch@0x112a1f89 out of table"); return;
  }
L_112a1f90:;
  /* 112a1f90 mov eax, dword ptr [ecx + 0x2d0] */
  EAX = (r32((uint32_t)(ECX + 0x2d0)));
  /* 112a1f96 ret 4 */
  ESPCHK(0x112a1f80u, _esp0);
  ESP += 8; return;
L_112a1f99:;
  /* 112a1f99 mov eax, dword ptr [ecx + 0x2d4] */
  EAX = (r32((uint32_t)(ECX + 0x2d4)));
  /* 112a1f9f ret 4 */
  ESPCHK(0x112a1f80u, _esp0);
  ESP += 8; return;
L_112a1fa2:;
  /* 112a1fa2 mov eax, dword ptr [ecx + 0x2d8] */
  EAX = (r32((uint32_t)(ECX + 0x2d8)));
  /* 112a1fa8 ret 4 */
  ESPCHK(0x112a1f80u, _esp0);
  ESP += 8; return;
L_112a1fab:;
  /* 112a1fab mov eax, dword ptr [ecx + 0x2dc] */
  EAX = (r32((uint32_t)(ECX + 0x2dc)));
  /* 112a1fb1 ret 4 */
  ESPCHK(0x112a1f80u, _esp0);
  ESP += 8; return;
L_112a1fb4:;
  /* 112a1fb4 mov eax, dword ptr [ecx + 0x2e0] */
  EAX = (r32((uint32_t)(ECX + 0x2e0)));
  /* 112a1fba ret 4 */
  ESPCHK(0x112a1f80u, _esp0);
  ESP += 8; return;
L_112a1fbd:;
  /* 112a1fbd mov eax, dword ptr [ecx + 0x2e4] */
  EAX = (r32((uint32_t)(ECX + 0x2e4)));
  /* 112a1fc3 ret 4 */
  ESPCHK(0x112a1f80u, _esp0);
  ESP += 8; return;
L_112a1fc6:;
  /* 112a1fc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a1fc8 ret 4 */
  ESPCHK(0x112a1f80u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ff0 @ 0x112a1ff0 (146 bytes, 34 insns) [1 switch table(s)] */
void f_112a1ff0(void) {
  FTRACE(0x112a1ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a1ff0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a1ff4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a1ff7 ja 0x112a207f */
  if ((!C.cf&&!C.zf)) goto L_112a207f;
  /* 112a1ffd jmp dword ptr [eax*4 + 0x112a2084] */
  switch (EAX) {
    case 0: goto L_112a2004;
    case 1: goto L_112a2019;
    case 2: goto L_112a202e;
    case 3: goto L_112a2043;
    case 4: goto L_112a2058;
    case 5: goto L_112a206d;
    default: x86_unimpl("switch@0x112a1ffd out of table"); return;
  }
L_112a2004:;
  /* 112a2004 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a2008 mov edx, dword ptr [ecx + 0x2b8] */
  EDX = (r32((uint32_t)(ECX + 0x2b8)));
  /* 112a200e add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2010 mov dword ptr [ecx + 0x2b8], edx */
  w32((uint32_t)(ECX + 0x2b8), (EDX));
  /* 112a2016 ret 8 */
  ESPCHK(0x112a1ff0u, _esp0);
  ESP += 12; return;
L_112a2019:;
  /* 112a2019 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a201d mov eax, dword ptr [ecx + 0x2bc] */
  EAX = (r32((uint32_t)(ECX + 0x2bc)));
  /* 112a2023 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2025 mov dword ptr [ecx + 0x2bc], eax */
  w32((uint32_t)(ECX + 0x2bc), (EAX));
  /* 112a202b ret 8 */
  ESPCHK(0x112a1ff0u, _esp0);
  ESP += 12; return;
L_112a202e:;
  /* 112a202e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a2032 mov edx, dword ptr [ecx + 0x2c0] */
  EDX = (r32((uint32_t)(ECX + 0x2c0)));
  /* 112a2038 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a203a mov dword ptr [ecx + 0x2c0], edx */
  w32((uint32_t)(ECX + 0x2c0), (EDX));
  /* 112a2040 ret 8 */
  ESPCHK(0x112a1ff0u, _esp0);
  ESP += 12; return;
L_112a2043:;
  /* 112a2043 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a2047 mov eax, dword ptr [ecx + 0x2c4] */
  EAX = (r32((uint32_t)(ECX + 0x2c4)));
  /* 112a204d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a204f mov dword ptr [ecx + 0x2c4], eax */
  w32((uint32_t)(ECX + 0x2c4), (EAX));
  /* 112a2055 ret 8 */
  ESPCHK(0x112a1ff0u, _esp0);
  ESP += 12; return;
L_112a2058:;
  /* 112a2058 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a205c mov edx, dword ptr [ecx + 0x2c8] */
  EDX = (r32((uint32_t)(ECX + 0x2c8)));
  /* 112a2062 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2064 mov dword ptr [ecx + 0x2c8], edx */
  w32((uint32_t)(ECX + 0x2c8), (EDX));
  /* 112a206a ret 8 */
  ESPCHK(0x112a1ff0u, _esp0);
  ESP += 12; return;
L_112a206d:;
  /* 112a206d mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a2071 mov eax, dword ptr [ecx + 0x2cc] */
  EAX = (r32((uint32_t)(ECX + 0x2cc)));
  /* 112a2077 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2079 mov dword ptr [ecx + 0x2cc], eax */
  w32((uint32_t)(ECX + 0x2cc), (EAX));
L_112a207f:;
  /* 112a207f ret 8 */
  ESPCHK(0x112a1ff0u, _esp0);
  ESP += 12; return;
}

/* FUN_100020a0 @ 0x112a20a0 (39 bytes, 9 insns) */
void f_112a20a0(void) {
  FTRACE(0x112a20a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a20a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a20a4 mov dl, byte ptr [esp + 8] */
  DL = (r8((uint32_t)(ESP + 0x8)));
  /* 112a20a8 mov byte ptr [ecx + 0x2f5], dl */
  w8((uint32_t)(ECX + 0x2f5), (DL));
  /* 112a20ae lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a20b1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a20b4 mov dword ptr [ecx + 0x2f1], eax */
  w32((uint32_t)(ECX + 0x2f1), (EAX));
  /* 112a20ba mov al, byte ptr [esp + 0xc] */
  AL = (r8((uint32_t)(ESP + 0xc)));
  /* 112a20be mov byte ptr [ecx + 0x2f6], al */
  w8((uint32_t)(ECX + 0x2f6), (AL));
  /* 112a20c4 ret 0xc */
  ESPCHK(0x112a20a0u, _esp0);
  ESP += 16; return;
}

/* FUN_100020d0 @ 0x112a20d0 (30 bytes, 9 insns) */
void f_112a20d0(void) {
  FTRACE(0x112a20d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a20d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a20d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a20d7 jne 0x112a20e1 */
  if (!C.zf) goto L_112a20e1;
  /* 112a20d9 mov eax, 1 */
  EAX = (0x1u);
  /* 112a20de ret 4 */
  ESPCHK(0x112a20d0u, _esp0);
  ESP += 8; return;
L_112a20e1:;
  /* 112a20e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a20e4 jne 0x112a20eb */
  if (!C.zf) goto L_112a20eb;
  /* 112a20e6 mov eax, 3 */
  EAX = (0x3u);
L_112a20eb:;
  /* 112a20eb ret 4 */
  ESPCHK(0x112a20d0u, _esp0);
  ESP += 8; return;
}

/* FUN_100020f0 @ 0x112a20f0 (103 bytes, 42 insns) */
void f_112a20f0(void) {
  FTRACE(0x112a20f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a20f0 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112a20f4 push ebx */
  push32((uint32_t)(EBX));
  /* 112a20f5 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 112a20f9 push ebp */
  push32((uint32_t)(EBP));
  /* 112a20fa push esi */
  push32((uint32_t)(ESI));
  /* 112a20fb push edi */
  push32((uint32_t)(EDI));
  /* 112a20fc push 0 */
  push32((uint32_t)(0x0u));
  /* 112a20fe push eax */
  push32((uint32_t)(EAX));
  /* 112a20ff push ebx */
  push32((uint32_t)(EBX));
  /* 112a2100 mov ebp, ecx */
  EBP = (ECX);
  /* 112a2102 push 0x112aeab8 */
  push32((uint32_t)(0x112aeab8u));
  /* 112a2107 push 0x112ae390 */
  push32((uint32_t)(0x112ae390u));
  /* 112a210c push ebp */
  push32((uint32_t)(EBP));
  /* 112a210d call dword ptr [0x112aa18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa18c))), 0x112a2113u);
  /* 112a2113 mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 112a2117 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a211a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a211c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a211f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2121 not ecx */
  ECX = (~(ECX));
  /* 112a2123 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2125 lea edx, [ebp + 0x1a] */
  EDX = ((uint32_t)(EBP + 0x1a));
  /* 112a2128 mov eax, ecx */
  EAX = (ECX);
  /* 112a212a mov esi, edi */
  ESI = (EDI);
  /* 112a212c mov edi, edx */
  EDI = (EDX);
  /* 112a212e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2131 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2133 mov ecx, eax */
  ECX = (EAX);
  /* 112a2135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a2137 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a213a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a213c mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 112a2140 pop edi */
  EDI = (pop32());
  /* 112a2141 mov dword ptr [ebp + 0x38], ecx */
  w32((uint32_t)(EBP + 0x38), (ECX));
  /* 112a2144 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 112a2147 mov byte ptr [ebp + 0x19], 0 */
  w8((uint32_t)(EBP + 0x19), (0x0u));
  /* 112a214b mov dword ptr [ebp + 0x15], eax */
  w32((uint32_t)(EBP + 0x15), (EAX));
  /* 112a214e mov dword ptr [ebp + 0xd], eax */
  w32((uint32_t)(EBP + 0xd), (EAX));
  /* 112a2151 pop esi */
  ESI = (pop32());
  /* 112a2152 pop ebp */
  EBP = (pop32());
  /* 112a2153 pop ebx */
  EBX = (pop32());
  /* 112a2154 ret 0x10 */
  ESPCHK(0x112a20f0u, _esp0);
  ESP += 20; return;
}

/* FUN_10002160 @ 0x112a2160 (79 bytes, 33 insns) */
void f_112a2160(void) {
  FTRACE(0x112a2160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a2160 push ebx */
  push32((uint32_t)(EBX));
  /* 112a2161 push esi */
  push32((uint32_t)(ESI));
  /* 112a2162 mov edx, ecx */
  EDX = (ECX);
  /* 112a2164 push edi */
  push32((uint32_t)(EDI));
  /* 112a2165 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 112a2169 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a216c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a216e lea ebx, [edx + 0x29] */
  EBX = ((uint32_t)(EDX + 0x29));
  /* 112a2171 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2173 not ecx */
  ECX = (~(ECX));
  /* 112a2175 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2177 mov eax, ecx */
  EAX = (ECX);
  /* 112a2179 mov esi, edi */
  ESI = (EDI);
  /* 112a217b mov edi, ebx */
  EDI = (EBX);
  /* 112a217d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2180 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2182 mov ecx, eax */
  ECX = (EAX);
  /* 112a2184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a2186 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2189 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a218b mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a218f mov byte ptr [edx + 0x19], al */
  w8((uint32_t)(EDX + 0x19), (AL));
  /* 112a2192 mov dword ptr [edx + 0x3c], ecx */
  w32((uint32_t)(EDX + 0x3c), (ECX));
  /* 112a2195 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 112a2199 mov dword ptr [edx + 0x15], eax */
  w32((uint32_t)(EDX + 0x15), (EAX));
  /* 112a219c mov dword ptr [edx + 0xd], eax */
  w32((uint32_t)(EDX + 0xd), (EAX));
  /* 112a219f mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 112a21a3 pop edi */
  EDI = (pop32());
  /* 112a21a4 pop esi */
  ESI = (pop32());
  /* 112a21a5 mov dword ptr [edx + 9], eax */
  w32((uint32_t)(EDX + 0x9), (EAX));
  /* 112a21a8 mov dword ptr [edx + 0x11], ecx */
  w32((uint32_t)(EDX + 0x11), (ECX));
  /* 112a21ab pop ebx */
  EBX = (pop32());
  /* 112a21ac ret 0x10 */
  ESPCHK(0x112a2160u, _esp0);
  ESP += 20; return;
}

/* FUN_100021b0 @ 0x112a21b0 (202 bytes, 70 insns) */
void f_112a21b0(void) {
  FTRACE(0x112a21b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a21b0 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a21b4 push ebx */
  push32((uint32_t)(EBX));
  /* 112a21b5 push ebp */
  push32((uint32_t)(EBP));
  /* 112a21b6 push esi */
  push32((uint32_t)(ESI));
  /* 112a21b7 mov esi, ecx */
  ESI = (ECX);
  /* 112a21b9 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 112a21bd mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 112a21c1 mov ebp, dword ptr [0x112aa18c] */
  EBP = (r32((uint32_t)(0x112aa18c)));
  /* 112a21c7 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 112a21ca mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112a21ce push edi */
  push32((uint32_t)(EDI));
  /* 112a21cf mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 112a21d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a21d5 push eax */
  push32((uint32_t)(EAX));
  /* 112a21d6 push edi */
  push32((uint32_t)(EDI));
  /* 112a21d7 push 0x112aee68 */
  push32((uint32_t)(0x112aee68u));
  /* 112a21dc push 0x112ae390 */
  push32((uint32_t)(0x112ae390u));
  /* 112a21e1 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a21e6 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 112a21e8 mov dword ptr [esi + 4], 0 */
  w32((uint32_t)(ESI + 0x4), (0x0u));
  /* 112a21ef mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 112a21f2 mov dword ptr [esi + 0x10], edx */
  w32((uint32_t)(ESI + 0x10), (EDX));
  /* 112a21f5 mov byte ptr [esi + 0x14], 0 */
  w8((uint32_t)(ESI + 0x14), (0x0u));
  /* 112a21f9 call ebp */
  call_ind((uint32_t)(EBP), 0x112a21fbu);
  /* 112a21fb mov ebx, dword ptr [0x112aa190] */
  EBX = (r32((uint32_t)(0x112aa190)));
  /* 112a2201 lea ecx, [esi + 0x15] */
  ECX = ((uint32_t)(ESI + 0x15));
  /* 112a2204 push ecx */
  push32((uint32_t)(ECX));
  /* 112a2205 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a220a call ebx */
  call_ind((uint32_t)(EBX), 0x112a220cu);
  /* 112a220c mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 112a2210 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2212 push edx */
  push32((uint32_t)(EDX));
  /* 112a2213 push edi */
  push32((uint32_t)(EDI));
  /* 112a2214 push 0x112aee68 */
  push32((uint32_t)(0x112aee68u));
  /* 112a2219 push 0x112ae390 */
  push32((uint32_t)(0x112ae390u));
  /* 112a221e push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a2223 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2225u);
  /* 112a2225 lea eax, [esi + 0x1d] */
  EAX = ((uint32_t)(ESI + 0x1d));
  /* 112a2228 push eax */
  push32((uint32_t)(EAX));
  /* 112a2229 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a222e call ebx */
  call_ind((uint32_t)(EBX), 0x112a2230u);
  /* 112a2230 mov ecx, dword ptr [esp + 0x5c] */
  ECX = (r32((uint32_t)(ESP + 0x5c)));
  /* 112a2234 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2237 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2239 push ecx */
  push32((uint32_t)(ECX));
  /* 112a223a push edi */
  push32((uint32_t)(EDI));
  /* 112a223b push 0x112aee68 */
  push32((uint32_t)(0x112aee68u));
  /* 112a2240 push 0x112ae390 */
  push32((uint32_t)(0x112ae390u));
  /* 112a2245 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a224a call ebp */
  call_ind((uint32_t)(EBP), 0x112a224cu);
  /* 112a224c lea edx, [esi + 0x25] */
  EDX = ((uint32_t)(ESI + 0x25));
  /* 112a224f push edx */
  push32((uint32_t)(EDX));
  /* 112a2250 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a2255 call ebx */
  call_ind((uint32_t)(EBX), 0x112a2257u);
  /* 112a2257 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 112a225a mov edi, dword ptr [0x112aa154] */
  EDI = (r32((uint32_t)(0x112aa154)));
  /* 112a2260 push 0xa */
  push32((uint32_t)(0xau));
  /* 112a2262 push eax */
  push32((uint32_t)(EAX));
  /* 112a2263 call edi */
  call_ind((uint32_t)(EDI), 0x112a2265u);
  /* 112a2265 mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 112a2269 mov dl, byte ptr [esi + 0x10] */
  DL = (r8((uint32_t)(ESI + 0x10)));
  /* 112a226c push ecx */
  push32((uint32_t)(ECX));
  /* 112a226d push edx */
  push32((uint32_t)(EDX));
  /* 112a226e call edi */
  call_ind((uint32_t)(EDI), 0x112a2270u);
  /* 112a2270 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2273 pop edi */
  EDI = (pop32());
  /* 112a2274 pop esi */
  ESI = (pop32());
  /* 112a2275 pop ebp */
  EBP = (pop32());
  /* 112a2276 pop ebx */
  EBX = (pop32());
  /* 112a2277 ret 0x1c */
  ESPCHK(0x112a21b0u, _esp0);
  ESP += 32; return;
}

/* FUN_10002280 @ 0x112a2280 (335 bytes, 116 insns) */
void f_112a2280(void) {
  FTRACE(0x112a2280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a2280 push ebx */
  push32((uint32_t)(EBX));
  /* 112a2281 push ebp */
  push32((uint32_t)(EBP));
  /* 112a2282 push esi */
  push32((uint32_t)(ESI));
  /* 112a2283 mov esi, ecx */
  ESI = (ECX);
  /* 112a2285 push edi */
  push32((uint32_t)(EDI));
  /* 112a2286 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 112a2289 push eax */
  push32((uint32_t)(EAX));
  /* 112a228a call dword ptr [0x112aa14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa14c))), 0x112a2290u);
  /* 112a2290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2293 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a2295 je 0x112a23c8 */
  if (C.zf) goto L_112a23c8;
  /* 112a229b mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 112a229e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a22a0 je 0x112a23c8 */
  if (C.zf) goto L_112a23c8;
  /* 112a22a6 mov cl, byte ptr [esi + 0xc] */
  CL = (r8((uint32_t)(ESI + 0xc)));
  /* 112a22a9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 112a22ab push ecx */
  push32((uint32_t)(ECX));
  /* 112a22ac call dword ptr [0x112aa154] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa154))), 0x112a22b2u);
  /* 112a22b2 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 112a22b5 lea edx, [esi + 0x15] */
  EDX = ((uint32_t)(ESI + 0x15));
  /* 112a22b8 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112a22b9 push edx */
  push32((uint32_t)(EDX));
  /* 112a22ba mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 112a22bd call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a22c3u);
  /* 112a22c3 mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 112a22c7 mov ebx, dword ptr [0x112aa18c] */
  EBX = (r32((uint32_t)(0x112aa18c)));
  /* 112a22cd mov ebp, dword ptr [0x112aa168] */
  EBP = (r32((uint32_t)(0x112aa168)));
  /* 112a22d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a22d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a22d8 je 0x112a231e */
  if (C.zf) goto L_112a231e;
  /* 112a22da mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a22de mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 112a22e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a22e2 push eax */
  push32((uint32_t)(EAX));
  /* 112a22e3 push ecx */
  push32((uint32_t)(ECX));
  /* 112a22e4 push 0x112ae488 */
  push32((uint32_t)(0x112ae488u));
  /* 112a22e9 push 0x112ae390 */
  push32((uint32_t)(0x112ae390u));
  /* 112a22ee push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a22f3 call ebx */
  call_ind((uint32_t)(EBX), 0x112a22f5u);
  /* 112a22f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a22f7 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a22fc call ebp */
  call_ind((uint32_t)(EBP), 0x112a22feu);
  /* 112a22fe mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 112a2300 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2302 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2304 push edi */
  push32((uint32_t)(EDI));
  /* 112a2305 push edx */
  push32((uint32_t)(EDX));
  /* 112a2306 call dword ptr [0x112aa150] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa150))), 0x112a230cu);
  /* 112a230c lea eax, [esi + 0x2d] */
  EAX = ((uint32_t)(ESI + 0x2d));
  /* 112a230f push eax */
  push32((uint32_t)(EAX));
  /* 112a2310 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a2315 call dword ptr [0x112aa190] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa190))), 0x112a231bu);
  /* 112a231b add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a231e:;
  /* 112a231e lea ecx, [esi + 0x1d] */
  ECX = ((uint32_t)(ESI + 0x1d));
  /* 112a2321 push ecx */
  push32((uint32_t)(ECX));
  /* 112a2322 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a2328u);
  /* 112a2328 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a232b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a232d je 0x112a2373 */
  if (C.zf) goto L_112a2373;
  /* 112a232f mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 112a2333 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a2335 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2337 push edx */
  push32((uint32_t)(EDX));
  /* 112a2338 push eax */
  push32((uint32_t)(EAX));
  /* 112a2339 push 0x112ae488 */
  push32((uint32_t)(0x112ae488u));
  /* 112a233e push 0x112ae390 */
  push32((uint32_t)(0x112ae390u));
  /* 112a2343 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a2348 call ebx */
  call_ind((uint32_t)(EBX), 0x112a234au);
  /* 112a234a push 0 */
  push32((uint32_t)(0x0u));
  /* 112a234c push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a2351 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2353u);
  /* 112a2353 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 112a2355 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2357 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2359 push edi */
  push32((uint32_t)(EDI));
  /* 112a235a push ecx */
  push32((uint32_t)(ECX));
  /* 112a235b call dword ptr [0x112aa150] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa150))), 0x112a2361u);
  /* 112a2361 lea edx, [esi + 0x2d] */
  EDX = ((uint32_t)(ESI + 0x2d));
  /* 112a2364 push edx */
  push32((uint32_t)(EDX));
  /* 112a2365 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a236a call dword ptr [0x112aa190] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa190))), 0x112a2370u);
  /* 112a2370 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a2373:;
  /* 112a2373 lea eax, [esi + 0x25] */
  EAX = ((uint32_t)(ESI + 0x25));
  /* 112a2376 push eax */
  push32((uint32_t)(EAX));
  /* 112a2377 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a237du);
  /* 112a237d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a2382 je 0x112a23c8 */
  if (C.zf) goto L_112a23c8;
  /* 112a2384 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 112a2388 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 112a238a push 0 */
  push32((uint32_t)(0x0u));
  /* 112a238c push ecx */
  push32((uint32_t)(ECX));
  /* 112a238d push edx */
  push32((uint32_t)(EDX));
  /* 112a238e push 0x112ae430 */
  push32((uint32_t)(0x112ae430u));
  /* 112a2393 push 0x112ae390 */
  push32((uint32_t)(0x112ae390u));
  /* 112a2398 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a239d call ebx */
  call_ind((uint32_t)(EBX), 0x112a239fu);
  /* 112a239f push 0 */
  push32((uint32_t)(0x0u));
  /* 112a23a1 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a23a6 call ebp */
  call_ind((uint32_t)(EBP), 0x112a23a8u);
  /* 112a23a8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a23aa push 0 */
  push32((uint32_t)(0x0u));
  /* 112a23ac push 0 */
  push32((uint32_t)(0x0u));
  /* 112a23ae push edi */
  push32((uint32_t)(EDI));
  /* 112a23af push eax */
  push32((uint32_t)(EAX));
  /* 112a23b0 call dword ptr [0x112aa150] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa150))), 0x112a23b6u);
  /* 112a23b6 add esi, 0x35 */
  { uint32_t _a=(ESI),_b=(0x35u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a23b9 push esi */
  push32((uint32_t)(ESI));
  /* 112a23ba push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a23bf call dword ptr [0x112aa190] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa190))), 0x112a23c5u);
  /* 112a23c5 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a23c8:;
  /* 112a23c8 pop edi */
  EDI = (pop32());
  /* 112a23c9 pop esi */
  ESI = (pop32());
  /* 112a23ca pop ebp */
  EBP = (pop32());
  /* 112a23cb pop ebx */
  EBX = (pop32());
  /* 112a23cc ret 0x10 */
  ESPCHK(0x112a2280u, _esp0);
  ESP += 20; return;
}

/* FUN_100023d0 @ 0x112a23d0 (126 bytes, 52 insns) */
void f_112a23d0(void) {
  FTRACE(0x112a23d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a23d0 push ebx */
  push32((uint32_t)(EBX));
  /* 112a23d1 push ebp */
  push32((uint32_t)(EBP));
  /* 112a23d2 push esi */
  push32((uint32_t)(ESI));
  /* 112a23d3 mov esi, ecx */
  ESI = (ECX);
  /* 112a23d5 push edi */
  push32((uint32_t)(EDI));
  /* 112a23d6 mov al, byte ptr [esi + 0x10] */
  AL = (r8((uint32_t)(ESI + 0x10)));
  /* 112a23d9 push eax */
  push32((uint32_t)(EAX));
  /* 112a23da call dword ptr [0x112aa14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa14c))), 0x112a23e0u);
  /* 112a23e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a23e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a23e5 je 0x112a2447 */
  if (C.zf) goto L_112a2447;
  /* 112a23e7 mov ebp, dword ptr [0x112aa180] */
  EBP = (r32((uint32_t)(0x112aa180)));
  /* 112a23ed lea edi, [esi + 0x2d] */
  EDI = ((uint32_t)(ESI + 0x2d));
  /* 112a23f0 push edi */
  push32((uint32_t)(EDI));
  /* 112a23f1 call ebp */
  call_ind((uint32_t)(EBP), 0x112a23f3u);
  /* 112a23f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a23f6 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a23f9 jg 0x112a2447 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a2447;
  /* 112a23fb lea ebx, [esi + 0x35] */
  EBX = ((uint32_t)(ESI + 0x35));
  /* 112a23fe push ebx */
  push32((uint32_t)(EBX));
  /* 112a23ff call ebp */
  call_ind((uint32_t)(EBP), 0x112a2401u);
  /* 112a2401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2404 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2407 jg 0x112a2447 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a2447;
  /* 112a2409 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a240d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a240f push edi */
  push32((uint32_t)(EDI));
  /* 112a2410 mov edi, dword ptr [0x112aa168] */
  EDI = (r32((uint32_t)(0x112aa168)));
  /* 112a2416 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 112a2419 mov byte ptr [esi + 0x14], 1 */
  w8((uint32_t)(ESI + 0x14), (0x1u));
  /* 112a241d call edi */
  call_ind((uint32_t)(EDI), 0x112a241fu);
  /* 112a241f push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2421 push ebx */
  push32((uint32_t)(EBX));
  /* 112a2422 call edi */
  call_ind((uint32_t)(EDI), 0x112a2424u);
  /* 112a2424 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 112a2428 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a242a push 0 */
  push32((uint32_t)(0x0u));
  /* 112a242c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a242e push edx */
  push32((uint32_t)(EDX));
  /* 112a242f push eax */
  push32((uint32_t)(EAX));
  /* 112a2430 call dword ptr [0x112aa150] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa150))), 0x112a2436u);
  /* 112a2436 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 112a2439 mov dl, byte ptr [esi + 0x10] */
  DL = (r8((uint32_t)(ESI + 0x10)));
  /* 112a243c push ecx */
  push32((uint32_t)(ECX));
  /* 112a243d push edx */
  push32((uint32_t)(EDX));
  /* 112a243e call dword ptr [0x112aa154] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa154))), 0x112a2444u);
  /* 112a2444 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a2447:;
  /* 112a2447 pop edi */
  EDI = (pop32());
  /* 112a2448 pop esi */
  ESI = (pop32());
  /* 112a2449 pop ebp */
  EBP = (pop32());
  /* 112a244a pop ebx */
  EBX = (pop32());
  /* 112a244b ret 8 */
  ESPCHK(0x112a23d0u, _esp0);
  ESP += 12; return;
}

/* OnInit @ 0x112a25d0 (1211 bytes, 312 insns) */
void f_112a25d0(void) {
  FTRACE(0x112a25d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a25d0 push ebx */
  push32((uint32_t)(EBX));
  /* 112a25d1 push ebp */
  push32((uint32_t)(EBP));
  /* 112a25d2 push esi */
  push32((uint32_t)(ESI));
  /* 112a25d3 mov esi, dword ptr [0x112aa130] */
  ESI = (r32((uint32_t)(0x112aa130)));
  /* 112a25d9 push edi */
  push32((uint32_t)(EDI));
  /* 112a25da push 0x112ab4cc */
  push32((uint32_t)(0x112ab4ccu));
  /* 112a25df push 0x112ae390 */
  push32((uint32_t)(0x112ae390u));
  /* 112a25e4 call esi */
  call_ind((uint32_t)(ESI), 0x112a25e6u);
  /* 112a25e6 push 0x112ab4c0 */
  push32((uint32_t)(0x112ab4c0u));
  /* 112a25eb push 0x112aee78 */
  push32((uint32_t)(0x112aee78u));
  /* 112a25f0 call esi */
  call_ind((uint32_t)(ESI), 0x112a25f2u);
  /* 112a25f2 mov ebp, dword ptr [0x112aa134] */
  EBP = (r32((uint32_t)(0x112aa134)));
  /* 112a25f8 push 0x112ab4b4 */
  push32((uint32_t)(0x112ab4b4u));
  /* 112a25fd push 0x112aeab8 */
  push32((uint32_t)(0x112aeab8u));
  /* 112a2602 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2604u);
  /* 112a2604 push 0x112ab4a0 */
  push32((uint32_t)(0x112ab4a0u));
  /* 112a2609 push 0x112ae440 */
  push32((uint32_t)(0x112ae440u));
  /* 112a260e call ebp */
  call_ind((uint32_t)(EBP), 0x112a2610u);
  /* 112a2610 push 0x112ab490 */
  push32((uint32_t)(0x112ab490u));
  /* 112a2615 push 0x112aee50 */
  push32((uint32_t)(0x112aee50u));
  /* 112a261a call ebp */
  call_ind((uint32_t)(EBP), 0x112a261cu);
  /* 112a261c push 0x112ab484 */
  push32((uint32_t)(0x112ab484u));
  /* 112a2621 push 0x112aee68 */
  push32((uint32_t)(0x112aee68u));
  /* 112a2626 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2628u);
  /* 112a2628 push 0x112ab470 */
  push32((uint32_t)(0x112ab470u));
  /* 112a262d push 0x112ae488 */
  push32((uint32_t)(0x112ae488u));
  /* 112a2632 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2634u);
  /* 112a2634 push 0x112ab45c */
  push32((uint32_t)(0x112ab45cu));
  /* 112a2639 push 0x112ae430 */
  push32((uint32_t)(0x112ae430u));
  /* 112a263e call ebp */
  call_ind((uint32_t)(EBP), 0x112a2640u);
  /* 112a2640 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2643 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a2648 call dword ptr [0x112aa188] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa188))), 0x112a264eu);
  /* 112a264e mov edi, dword ptr [0x112aa138] */
  EDI = (r32((uint32_t)(0x112aa138)));
  /* 112a2654 push 8 */
  push32((uint32_t)(0x8u));
  /* 112a2656 push 0x112ae7a8 */
  push32((uint32_t)(0x112ae7a8u));
  /* 112a265b call edi */
  call_ind((uint32_t)(EDI), 0x112a265du);
  /* 112a265d push 1 */
  push32((uint32_t)(0x1u));
  /* 112a265f push 0x112ab050 */
  push32((uint32_t)(0x112ab050u));
  /* 112a2664 call edi */
  call_ind((uint32_t)(EDI), 0x112a2666u);
  /* 112a2666 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2668 push 0x112af264 */
  push32((uint32_t)(0x112af264u));
  /* 112a266d call edi */
  call_ind((uint32_t)(EDI), 0x112a266fu);
  /* 112a266f push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2671 push 0x112af265 */
  push32((uint32_t)(0x112af265u));
  /* 112a2676 call edi */
  call_ind((uint32_t)(EDI), 0x112a2678u);
  /* 112a2678 push 0x300 */
  push32((uint32_t)(0x300u));
  /* 112a267d push 0x112ae4a0 */
  push32((uint32_t)(0x112ae4a0u));
  /* 112a2682 call edi */
  call_ind((uint32_t)(EDI), 0x112a2684u);
  /* 112a2684 mov esi, dword ptr [0x112aa13c] */
  ESI = (r32((uint32_t)(0x112aa13c)));
  /* 112a268a push 0x112ab450 */
  push32((uint32_t)(0x112ab450u));
  /* 112a268f push 0x112ae398 */
  push32((uint32_t)(0x112ae398u));
  /* 112a2694 call esi */
  call_ind((uint32_t)(ESI), 0x112a2696u);
  /* 112a2696 mov ebx, dword ptr [0x112aa140] */
  EBX = (r32((uint32_t)(0x112aa140)));
  /* 112a269c push 0x112ab440 */
  push32((uint32_t)(0x112ab440u));
  /* 112a26a1 push 0x112ae358 */
  push32((uint32_t)(0x112ae358u));
  /* 112a26a6 call ebx */
  call_ind((uint32_t)(EBX), 0x112a26a8u);
  /* 112a26a8 push 0x112ab42c */
  push32((uint32_t)(0x112ab42cu));
  /* 112a26ad push 0x112aeac0 */
  push32((uint32_t)(0x112aeac0u));
  /* 112a26b2 call ebx */
  call_ind((uint32_t)(EBX), 0x112a26b4u);
  /* 112a26b4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a26b7 push 0x112ab41c */
  push32((uint32_t)(0x112ab41cu));
  /* 112a26bc push 0x112af248 */
  push32((uint32_t)(0x112af248u));
  /* 112a26c1 call ebx */
  call_ind((uint32_t)(EBX), 0x112a26c3u);
  /* 112a26c3 push 0x112ab40c */
  push32((uint32_t)(0x112ab40cu));
  /* 112a26c8 push 0x112aeab0 */
  push32((uint32_t)(0x112aeab0u));
  /* 112a26cd call esi */
  call_ind((uint32_t)(ESI), 0x112a26cfu);
  /* 112a26cf push 0x112ab404 */
  push32((uint32_t)(0x112ab404u));
  /* 112a26d4 push 0x112af1b0 */
  push32((uint32_t)(0x112af1b0u));
  /* 112a26d9 call esi */
  call_ind((uint32_t)(ESI), 0x112a26dbu);
  /* 112a26db push 0x112ab3fc */
  push32((uint32_t)(0x112ab3fcu));
  /* 112a26e0 push 0x112af1b8 */
  push32((uint32_t)(0x112af1b8u));
  /* 112a26e5 call esi */
  call_ind((uint32_t)(ESI), 0x112a26e7u);
  /* 112a26e7 push 0x112ab3f4 */
  push32((uint32_t)(0x112ab3f4u));
  /* 112a26ec push 0x112af1c0 */
  push32((uint32_t)(0x112af1c0u));
  /* 112a26f1 call esi */
  call_ind((uint32_t)(ESI), 0x112a26f3u);
  /* 112a26f3 push 0x112ab3ec */
  push32((uint32_t)(0x112ab3ecu));
  /* 112a26f8 push 0x112af1c8 */
  push32((uint32_t)(0x112af1c8u));
  /* 112a26fd call esi */
  call_ind((uint32_t)(ESI), 0x112a26ffu);
  /* 112a26ff push 0x112ab3e4 */
  push32((uint32_t)(0x112ab3e4u));
  /* 112a2704 push 0x112af1d0 */
  push32((uint32_t)(0x112af1d0u));
  /* 112a2709 call esi */
  call_ind((uint32_t)(ESI), 0x112a270bu);
  /* 112a270b push 0x112ab3dc */
  push32((uint32_t)(0x112ab3dcu));
  /* 112a2710 push 0x112af1d8 */
  push32((uint32_t)(0x112af1d8u));
  /* 112a2715 call esi */
  call_ind((uint32_t)(ESI), 0x112a2717u);
  /* 112a2717 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a271a mov dword ptr [0x112ae74b], 0x112ae398 */
  w32((uint32_t)(0x112ae74b), (0x112ae398u));
  /* 112a2724 push 0x300 */
  push32((uint32_t)(0x300u));
  /* 112a2729 push 0x112aee80 */
  push32((uint32_t)(0x112aee80u));
  /* 112a272e call edi */
  call_ind((uint32_t)(EDI), 0x112a2730u);
  /* 112a2730 push 0x112ab3d0 */
  push32((uint32_t)(0x112ab3d0u));
  /* 112a2735 push 0x112ae438 */
  push32((uint32_t)(0x112ae438u));
  /* 112a273a call esi */
  call_ind((uint32_t)(ESI), 0x112a273cu);
  /* 112a273c push 0x112ab3c0 */
  push32((uint32_t)(0x112ab3c0u));
  /* 112a2741 push 0x112ae410 */
  push32((uint32_t)(0x112ae410u));
  /* 112a2746 call ebx */
  call_ind((uint32_t)(EBX), 0x112a2748u);
  /* 112a2748 push 0x112ab3b0 */
  push32((uint32_t)(0x112ab3b0u));
  /* 112a274d push 0x112ae3c8 */
  push32((uint32_t)(0x112ae3c8u));
  /* 112a2752 call ebx */
  call_ind((uint32_t)(EBX), 0x112a2754u);
  /* 112a2754 push 0x112ab3a0 */
  push32((uint32_t)(0x112ab3a0u));
  /* 112a2759 push 0x112ae418 */
  push32((uint32_t)(0x112ae418u));
  /* 112a275e call ebx */
  call_ind((uint32_t)(EBX), 0x112a2760u);
  /* 112a2760 push 0x112ab390 */
  push32((uint32_t)(0x112ab390u));
  /* 112a2765 push 0x112ae420 */
  push32((uint32_t)(0x112ae420u));
  /* 112a276a call esi */
  call_ind((uint32_t)(ESI), 0x112a276cu);
  /* 112a276c push 0x112ab388 */
  push32((uint32_t)(0x112ab388u));
  /* 112a2771 push 0x112aeb18 */
  push32((uint32_t)(0x112aeb18u));
  /* 112a2776 call esi */
  call_ind((uint32_t)(ESI), 0x112a2778u);
  /* 112a2778 push 0x112ab380 */
  push32((uint32_t)(0x112ab380u));
  /* 112a277d push 0x112aeb10 */
  push32((uint32_t)(0x112aeb10u));
  /* 112a2782 call esi */
  call_ind((uint32_t)(ESI), 0x112a2784u);
  /* 112a2784 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2787 push 0x112ab378 */
  push32((uint32_t)(0x112ab378u));
  /* 112a278c push 0x112aeb08 */
  push32((uint32_t)(0x112aeb08u));
  /* 112a2791 call esi */
  call_ind((uint32_t)(ESI), 0x112a2793u);
  /* 112a2793 push 0x112ab370 */
  push32((uint32_t)(0x112ab370u));
  /* 112a2798 push 0x112aeb00 */
  push32((uint32_t)(0x112aeb00u));
  /* 112a279d call esi */
  call_ind((uint32_t)(ESI), 0x112a279fu);
  /* 112a279f push 0x300 */
  push32((uint32_t)(0x300u));
  /* 112a27a4 push 0x112ae7b0 */
  push32((uint32_t)(0x112ae7b0u));
  /* 112a27a9 mov dword ptr [0x112ae74b], 0x112ae398 */
  w32((uint32_t)(0x112ae74b), (0x112ae398u));
  /* 112a27b3 call edi */
  call_ind((uint32_t)(EDI), 0x112a27b5u);
  /* 112a27b5 push 0x112ab368 */
  push32((uint32_t)(0x112ab368u));
  /* 112a27ba push 0x112ae448 */
  push32((uint32_t)(0x112ae448u));
  /* 112a27bf call esi */
  call_ind((uint32_t)(ESI), 0x112a27c1u);
  /* 112a27c1 push 0x112ab35c */
  push32((uint32_t)(0x112ab35cu));
  /* 112a27c6 push 0x112af258 */
  push32((uint32_t)(0x112af258u));
  /* 112a27cb call ebx */
  call_ind((uint32_t)(EBX), 0x112a27cdu);
  /* 112a27cd push 0x112ab34c */
  push32((uint32_t)(0x112ab34cu));
  /* 112a27d2 push 0x112ae370 */
  push32((uint32_t)(0x112ae370u));
  /* 112a27d7 call ebx */
  call_ind((uint32_t)(EBX), 0x112a27d9u);
  /* 112a27d9 push 0x112ab340 */
  push32((uint32_t)(0x112ab340u));
  /* 112a27de push 0x112ae7a0 */
  push32((uint32_t)(0x112ae7a0u));
  /* 112a27e3 call ebx */
  call_ind((uint32_t)(EBX), 0x112a27e5u);
  /* 112a27e5 push 0x112ab334 */
  push32((uint32_t)(0x112ab334u));
  /* 112a27ea push 0x112af240 */
  push32((uint32_t)(0x112af240u));
  /* 112a27ef call esi */
  call_ind((uint32_t)(ESI), 0x112a27f1u);
  /* 112a27f1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a27f4 push 0x112ab32c */
  push32((uint32_t)(0x112ab32cu));
  /* 112a27f9 push 0x112ae388 */
  push32((uint32_t)(0x112ae388u));
  /* 112a27fe call esi */
  call_ind((uint32_t)(ESI), 0x112a2800u);
  /* 112a2800 push 0x112ab324 */
  push32((uint32_t)(0x112ab324u));
  /* 112a2805 push 0x112ae380 */
  push32((uint32_t)(0x112ae380u));
  /* 112a280a call esi */
  call_ind((uint32_t)(ESI), 0x112a280cu);
  /* 112a280c push 0x112ab31c */
  push32((uint32_t)(0x112ab31cu));
  /* 112a2811 push 0x112ae378 */
  push32((uint32_t)(0x112ae378u));
  /* 112a2816 call esi */
  call_ind((uint32_t)(ESI), 0x112a2818u);
  /* 112a2818 push 0x112ab314 */
  push32((uint32_t)(0x112ab314u));
  /* 112a281d push 0x112ae3c0 */
  push32((uint32_t)(0x112ae3c0u));
  /* 112a2822 call esi */
  call_ind((uint32_t)(ESI), 0x112a2824u);
  /* 112a2824 push 0x112ab30c */
  push32((uint32_t)(0x112ab30cu));
  /* 112a2829 push 0x112ae3b8 */
  push32((uint32_t)(0x112ae3b8u));
  /* 112a282e call esi */
  call_ind((uint32_t)(ESI), 0x112a2830u);
  /* 112a2830 push 0x112ab304 */
  push32((uint32_t)(0x112ab304u));
  /* 112a2835 push 0x112ae3b0 */
  push32((uint32_t)(0x112ae3b0u));
  /* 112a283a call esi */
  call_ind((uint32_t)(ESI), 0x112a283cu);
  /* 112a283c push 0x112ab2fc */
  push32((uint32_t)(0x112ab2fcu));
  /* 112a2841 push 0x112ae3a8 */
  push32((uint32_t)(0x112ae3a8u));
  /* 112a2846 call esi */
  call_ind((uint32_t)(ESI), 0x112a2848u);
  /* 112a2848 push 0x112ab2f4 */
  push32((uint32_t)(0x112ab2f4u));
  /* 112a284d push 0x112ae3a0 */
  push32((uint32_t)(0x112ae3a0u));
  /* 112a2852 call esi */
  call_ind((uint32_t)(ESI), 0x112a2854u);
  /* 112a2854 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2857 push 0x112ab2e8 */
  push32((uint32_t)(0x112ab2e8u));
  /* 112a285c push 0x112af180 */
  push32((uint32_t)(0x112af180u));
  /* 112a2861 call esi */
  call_ind((uint32_t)(ESI), 0x112a2863u);
  /* 112a2863 push 0x112ab2dc */
  push32((uint32_t)(0x112ab2dcu));
  /* 112a2868 push 0x112af188 */
  push32((uint32_t)(0x112af188u));
  /* 112a286d call esi */
  call_ind((uint32_t)(ESI), 0x112a286fu);
  /* 112a286f push 0x112ab2d0 */
  push32((uint32_t)(0x112ab2d0u));
  /* 112a2874 push 0x112af190 */
  push32((uint32_t)(0x112af190u));
  /* 112a2879 call esi */
  call_ind((uint32_t)(ESI), 0x112a287bu);
  /* 112a287b push 0x112ab2c4 */
  push32((uint32_t)(0x112ab2c4u));
  /* 112a2880 push 0x112af198 */
  push32((uint32_t)(0x112af198u));
  /* 112a2885 call esi */
  call_ind((uint32_t)(ESI), 0x112a2887u);
  /* 112a2887 push 0x112ab2b8 */
  push32((uint32_t)(0x112ab2b8u));
  /* 112a288c push 0x112af1a0 */
  push32((uint32_t)(0x112af1a0u));
  /* 112a2891 call esi */
  call_ind((uint32_t)(ESI), 0x112a2893u);
  /* 112a2893 push 0x112ab2ac */
  push32((uint32_t)(0x112ab2acu));
  /* 112a2898 push 0x112af1a8 */
  push32((uint32_t)(0x112af1a8u));
  /* 112a289d call esi */
  call_ind((uint32_t)(ESI), 0x112a289fu);
  /* 112a289f push 0x112ab2a0 */
  push32((uint32_t)(0x112ab2a0u));
  /* 112a28a4 push 0x112aead8 */
  push32((uint32_t)(0x112aead8u));
  /* 112a28a9 call esi */
  call_ind((uint32_t)(ESI), 0x112a28abu);
  /* 112a28ab push 0x112ab294 */
  push32((uint32_t)(0x112ab294u));
  /* 112a28b0 push 0x112aeae0 */
  push32((uint32_t)(0x112aeae0u));
  /* 112a28b5 call esi */
  call_ind((uint32_t)(ESI), 0x112a28b7u);
  /* 112a28b7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a28ba push 0x112ab288 */
  push32((uint32_t)(0x112ab288u));
  /* 112a28bf push 0x112aeae8 */
  push32((uint32_t)(0x112aeae8u));
  /* 112a28c4 call esi */
  call_ind((uint32_t)(ESI), 0x112a28c6u);
  /* 112a28c6 push 0x112ab27c */
  push32((uint32_t)(0x112ab27cu));
  /* 112a28cb push 0x112aeaf0 */
  push32((uint32_t)(0x112aeaf0u));
  /* 112a28d0 call esi */
  call_ind((uint32_t)(ESI), 0x112a28d2u);
  /* 112a28d2 push 0x112ab270 */
  push32((uint32_t)(0x112ab270u));
  /* 112a28d7 push 0x112aeaf8 */
  push32((uint32_t)(0x112aeaf8u));
  /* 112a28dc call esi */
  call_ind((uint32_t)(ESI), 0x112a28deu);
  /* 112a28de push 0x300 */
  push32((uint32_t)(0x300u));
  /* 112a28e3 push 0x112aeb40 */
  push32((uint32_t)(0x112aeb40u));
  /* 112a28e8 mov dword ptr [0x112ae74b], 0x112ae398 */
  w32((uint32_t)(0x112ae74b), (0x112ae398u));
  /* 112a28f2 call edi */
  call_ind((uint32_t)(EDI), 0x112a28f4u);
  /* 112a28f4 push 0x112ab268 */
  push32((uint32_t)(0x112ab268u));
  /* 112a28f9 push 0x112aeac8 */
  push32((uint32_t)(0x112aeac8u));
  /* 112a28fe call esi */
  call_ind((uint32_t)(ESI), 0x112a2900u);
  /* 112a2900 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a2902 push 0x112ab054 */
  push32((uint32_t)(0x112ab054u));
  /* 112a2907 mov dword ptr [0x112aedeb], 0x112aeac8 */
  w32((uint32_t)(0x112aedeb), (0x112aeac8u));
  /* 112a2911 call edi */
  call_ind((uint32_t)(EDI), 0x112a2913u);
  /* 112a2913 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 112a2915 push 0x112ae318 */
  push32((uint32_t)(0x112ae318u));
  /* 112a291a call edi */
  call_ind((uint32_t)(EDI), 0x112a291cu);
  /* 112a291c push 0x112ab260 */
  push32((uint32_t)(0x112ab260u));
  /* 112a2921 push 0x112aeb30 */
  push32((uint32_t)(0x112aeb30u));
  /* 112a2926 call esi */
  call_ind((uint32_t)(ESI), 0x112a2928u);
  /* 112a2928 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a292b push 0x112ab258 */
  push32((uint32_t)(0x112ab258u));
  /* 112a2930 push 0x112aeb28 */
  push32((uint32_t)(0x112aeb28u));
  /* 112a2935 call esi */
  call_ind((uint32_t)(ESI), 0x112a2937u);
  /* 112a2937 push 0x112ab250 */
  push32((uint32_t)(0x112ab250u));
  /* 112a293c push 0x112aeb20 */
  push32((uint32_t)(0x112aeb20u));
  /* 112a2941 call esi */
  call_ind((uint32_t)(ESI), 0x112a2943u);
  /* 112a2943 push 0x112ab248 */
  push32((uint32_t)(0x112ab248u));
  /* 112a2948 push 0x112aee48 */
  push32((uint32_t)(0x112aee48u));
  /* 112a294d call esi */
  call_ind((uint32_t)(ESI), 0x112a294fu);
  /* 112a294f push 0x112ab240 */
  push32((uint32_t)(0x112ab240u));
  /* 112a2954 push 0x112aee40 */
  push32((uint32_t)(0x112aee40u));
  /* 112a2959 call esi */
  call_ind((uint32_t)(ESI), 0x112a295bu);
  /* 112a295b push 0x112ab238 */
  push32((uint32_t)(0x112ab238u));
  /* 112a2960 push 0x112aeb38 */
  push32((uint32_t)(0x112aeb38u));
  /* 112a2965 call esi */
  call_ind((uint32_t)(ESI), 0x112a2967u);
  /* 112a2967 push 0x112ab230 */
  push32((uint32_t)(0x112ab230u));
  /* 112a296c push 0x112ae498 */
  push32((uint32_t)(0x112ae498u));
  /* 112a2971 call esi */
  call_ind((uint32_t)(ESI), 0x112a2973u);
  /* 112a2973 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 112a2975 push 0x112ae2d8 */
  push32((uint32_t)(0x112ae2d8u));
  /* 112a297a call edi */
  call_ind((uint32_t)(EDI), 0x112a297cu);
  /* 112a297c push 0x112ab228 */
  push32((uint32_t)(0x112ab228u));
  /* 112a2981 push 0x112ae480 */
  push32((uint32_t)(0x112ae480u));
  /* 112a2986 call esi */
  call_ind((uint32_t)(ESI), 0x112a2988u);
  /* 112a2988 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a298b push 0x112ab220 */
  push32((uint32_t)(0x112ab220u));
  /* 112a2990 push 0x112ae478 */
  push32((uint32_t)(0x112ae478u));
  /* 112a2995 call esi */
  call_ind((uint32_t)(ESI), 0x112a2997u);
  /* 112a2997 push 0x112ab218 */
  push32((uint32_t)(0x112ab218u));
  /* 112a299c push 0x112ae470 */
  push32((uint32_t)(0x112ae470u));
  /* 112a29a1 call esi */
  call_ind((uint32_t)(ESI), 0x112a29a3u);
  /* 112a29a3 push 0x112ab210 */
  push32((uint32_t)(0x112ab210u));
  /* 112a29a8 push 0x112ae468 */
  push32((uint32_t)(0x112ae468u));
  /* 112a29ad call esi */
  call_ind((uint32_t)(ESI), 0x112a29afu);
  /* 112a29af push 0x112ab208 */
  push32((uint32_t)(0x112ab208u));
  /* 112a29b4 push 0x112ae460 */
  push32((uint32_t)(0x112ae460u));
  /* 112a29b9 call esi */
  call_ind((uint32_t)(ESI), 0x112a29bbu);
  /* 112a29bb push 0x112ab200 */
  push32((uint32_t)(0x112ab200u));
  /* 112a29c0 push 0x112ae458 */
  push32((uint32_t)(0x112ae458u));
  /* 112a29c5 call esi */
  call_ind((uint32_t)(ESI), 0x112a29c7u);
  /* 112a29c7 push 0x112ab1f8 */
  push32((uint32_t)(0x112ab1f8u));
  /* 112a29cc push 0x112ae490 */
  push32((uint32_t)(0x112ae490u));
  /* 112a29d1 call esi */
  call_ind((uint32_t)(ESI), 0x112a29d3u);
  /* 112a29d3 push 0x112ab1ec */
  push32((uint32_t)(0x112ab1ecu));
  /* 112a29d8 push 0x112ae360 */
  push32((uint32_t)(0x112ae360u));
  /* 112a29dd call esi */
  call_ind((uint32_t)(ESI), 0x112a29dfu);
  /* 112a29df push 0x112ab1e4 */
  push32((uint32_t)(0x112ab1e4u));
  /* 112a29e4 push 0x112aee70 */
  push32((uint32_t)(0x112aee70u));
  /* 112a29e9 call ebx */
  call_ind((uint32_t)(EBX), 0x112a29ebu);
  /* 112a29eb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a29ee push 0x112aead0 */
  push32((uint32_t)(0x112aead0u));
  /* 112a29f3 call dword ptr [0x112aa188] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa188))), 0x112a29f9u);
  /* 112a29f9 push 8 */
  push32((uint32_t)(0x8u));
  /* 112a29fb push 0x112aead0 */
  push32((uint32_t)(0x112aead0u));
  /* 112a2a00 call edi */
  call_ind((uint32_t)(EDI), 0x112a2a02u);
  /* 112a2a02 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a2a04 push 0x112ae428 */
  push32((uint32_t)(0x112ae428u));
  /* 112a2a09 call edi */
  call_ind((uint32_t)(EDI), 0x112a2a0bu);
  /* 112a2a0b push 0x112ab1d4 */
  push32((uint32_t)(0x112ab1d4u));
  /* 112a2a10 push 0x112aee58 */
  push32((uint32_t)(0x112aee58u));
  /* 112a2a15 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2a17u);
  /* 112a2a17 push 0x112ab1c8 */
  push32((uint32_t)(0x112ab1c8u));
  /* 112a2a1c push 0x112af250 */
  push32((uint32_t)(0x112af250u));
  /* 112a2a21 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2a23u);
  /* 112a2a23 mov esi, dword ptr [0x112aa144] */
  ESI = (r32((uint32_t)(0x112aa144)));
  /* 112a2a29 push 0x112ab1c0 */
  push32((uint32_t)(0x112ab1c0u));
  /* 112a2a2e push 0x112ae368 */
  push32((uint32_t)(0x112ae368u));
  /* 112a2a33 call esi */
  call_ind((uint32_t)(ESI), 0x112a2a35u);
  /* 112a2a35 push 0x112ab1b8 */
  push32((uint32_t)(0x112ab1b8u));
  /* 112a2a3a push 0x112ae450 */
  push32((uint32_t)(0x112ae450u));
  /* 112a2a3f call esi */
  call_ind((uint32_t)(ESI), 0x112a2a41u);
  /* 112a2a41 push 0x112ab1b0 */
  push32((uint32_t)(0x112ab1b0u));
  /* 112a2a46 push 0x112aee60 */
  push32((uint32_t)(0x112aee60u));
  /* 112a2a4b call esi */
  call_ind((uint32_t)(ESI), 0x112a2a4du);
  /* 112a2a4d mov esi, dword ptr [0x112aa148] */
  ESI = (r32((uint32_t)(0x112aa148)));
  /* 112a2a53 push 0x112ab1a8 */
  push32((uint32_t)(0x112ab1a8u));
  /* 112a2a58 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2a5a call esi */
  call_ind((uint32_t)(ESI), 0x112a2a5cu);
  /* 112a2a5c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2a5f push 0x112ab1a0 */
  push32((uint32_t)(0x112ab1a0u));
  /* 112a2a64 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2a66 call esi */
  call_ind((uint32_t)(ESI), 0x112a2a68u);
  /* 112a2a68 push 0x112ab198 */
  push32((uint32_t)(0x112ab198u));
  /* 112a2a6d push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2a6f call esi */
  call_ind((uint32_t)(ESI), 0x112a2a71u);
  /* 112a2a71 push 0x112ab1a8 */
  push32((uint32_t)(0x112ab1a8u));
  /* 112a2a76 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a2a78 call esi */
  call_ind((uint32_t)(ESI), 0x112a2a7au);
  /* 112a2a7a push 0x112ab190 */
  push32((uint32_t)(0x112ab190u));
  /* 112a2a7f push 5 */
  push32((uint32_t)(0x5u));
  /* 112a2a81 call esi */
  call_ind((uint32_t)(ESI), 0x112a2a83u);
  /* 112a2a83 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2a86 pop edi */
  EDI = (pop32());
  /* 112a2a87 pop esi */
  ESI = (pop32());
  /* 112a2a88 pop ebp */
  EBP = (pop32());
  /* 112a2a89 pop ebx */
  EBX = (pop32());
  /* 112a2a8a ret  */
  ESPCHK(0x112a25d0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x112a2a90 (3966 bytes, 1228 insns) */
void f_112a2a90(void) {
  FTRACE(0x112a2a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a2a90 mov al, byte ptr [0x112af266] */
  AL = (r8((uint32_t)(0x112af266)));
  /* 112a2a95 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2a98 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a2a9a push ebx */
  push32((uint32_t)(EBX));
  /* 112a2a9b push ebp */
  push32((uint32_t)(EBP));
  /* 112a2a9c push esi */
  push32((uint32_t)(ESI));
  /* 112a2a9d push edi */
  push32((uint32_t)(EDI));
  /* 112a2a9e jne 0x112a2d99 */
  if (!C.zf) goto L_112a2d99;
  /* 112a2aa4 push 0x112ab638 */
  push32((uint32_t)(0x112ab638u));
  /* 112a2aa9 push 0x112ab620 */
  push32((uint32_t)(0x112ab620u));
  /* 112a2aae mov byte ptr [0x112af266], 1 */
  w8((uint32_t)(0x112af266), (0x1u));
  /* 112a2ab5 call 0x112a49cf */
  push32(0x112a2abau); f_112a49cf();
  /* 112a2aba mov esi, eax */
  ESI = (EAX);
  /* 112a2abc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2abf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a2ac1 jne 0x112a2c34 */
  if (!C.zf) goto L_112a2c34;
  /* 112a2ac7 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2aca mov edi, 0x112ab618 */
  EDI = (0x112ab618u);
  /* 112a2acf repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2ad1 not ecx */
  ECX = (~(ECX));
  /* 112a2ad3 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2ad5 mov eax, ecx */
  EAX = (ECX);
  /* 112a2ad7 mov esi, edi */
  ESI = (EDI);
  /* 112a2ad9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2adc mov edi, 0x112af1e0 */
  EDI = (0x112af1e0u);
  /* 112a2ae1 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2ae3 mov ecx, eax */
  ECX = (EAX);
  /* 112a2ae5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a2ae7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2aea rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2aec or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2aef mov edi, 0x112ab610 */
  EDI = (0x112ab610u);
  /* 112a2af4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2af6 not ecx */
  ECX = (~(ECX));
  /* 112a2af8 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2afa mov edx, ecx */
  EDX = (ECX);
  /* 112a2afc mov esi, edi */
  ESI = (EDI);
  /* 112a2afe shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2b01 mov edi, 0x112af1ef */
  EDI = (0x112af1efu);
  /* 112a2b06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2b08 mov ecx, edx */
  ECX = (EDX);
  /* 112a2b0a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2b0d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2b0f or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2b12 mov edi, 0x112ab608 */
  EDI = (0x112ab608u);
  /* 112a2b17 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2b19 not ecx */
  ECX = (~(ECX));
  /* 112a2b1b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2b1d mov eax, ecx */
  EAX = (ECX);
  /* 112a2b1f mov esi, edi */
  ESI = (EDI);
  /* 112a2b21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2b24 mov edi, 0x112af1fe */
  EDI = (0x112af1feu);
  /* 112a2b29 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2b2b mov ecx, eax */
  ECX = (EAX);
  /* 112a2b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a2b2f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2b32 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2b34 mov edi, 0x112ab600 */
  EDI = (0x112ab600u);
  /* 112a2b39 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2b3c repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2b3e not ecx */
  ECX = (~(ECX));
  /* 112a2b40 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2b42 mov edx, ecx */
  EDX = (ECX);
  /* 112a2b44 mov esi, edi */
  ESI = (EDI);
  /* 112a2b46 mov edi, 0x112af20d */
  EDI = (0x112af20du);
  /* 112a2b4b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2b4e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2b50 mov ecx, edx */
  ECX = (EDX);
  /* 112a2b52 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2b55 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2b57 mov edi, 0x112ab5f8 */
  EDI = (0x112ab5f8u);
  /* 112a2b5c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2b5f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2b61 not ecx */
  ECX = (~(ECX));
  /* 112a2b63 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2b65 mov eax, ecx */
  EAX = (ECX);
  /* 112a2b67 mov esi, edi */
  ESI = (EDI);
  /* 112a2b69 mov edi, 0x112af21c */
  EDI = (0x112af21cu);
  /* 112a2b6e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2b71 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2b73 mov ecx, eax */
  ECX = (EAX);
  /* 112a2b75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a2b77 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2b7a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2b7c mov edi, 0x112ab5f0 */
  EDI = (0x112ab5f0u);
  /* 112a2b81 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2b84 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2b86 not ecx */
  ECX = (~(ECX));
  /* 112a2b88 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2b8a mov edx, ecx */
  EDX = (ECX);
  /* 112a2b8c mov esi, edi */
  ESI = (EDI);
  /* 112a2b8e mov edi, 0x112af22b */
  EDI = (0x112af22bu);
  /* 112a2b93 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2b96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2b98 mov ecx, edx */
  ECX = (EDX);
  /* 112a2b9a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2b9d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2b9f or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2ba2 mov edi, 0x112ab5e4 */
  EDI = (0x112ab5e4u);
  /* 112a2ba7 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2ba9 not ecx */
  ECX = (~(ECX));
  /* 112a2bab sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2bad mov eax, ecx */
  EAX = (ECX);
  /* 112a2baf mov esi, edi */
  ESI = (EDI);
  /* 112a2bb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2bb4 mov edi, 0x112ae3d0 */
  EDI = (0x112ae3d0u);
  /* 112a2bb9 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2bbb mov ecx, eax */
  ECX = (EAX);
  /* 112a2bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a2bbf and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2bc2 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2bc4 mov edi, 0x112ab5dc */
  EDI = (0x112ab5dcu);
  /* 112a2bc9 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2bcc repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2bce not ecx */
  ECX = (~(ECX));
  /* 112a2bd0 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2bd2 mov edx, ecx */
  EDX = (ECX);
  /* 112a2bd4 mov esi, edi */
  ESI = (EDI);
  /* 112a2bd6 mov edi, 0x112ae3df */
  EDI = (0x112ae3dfu);
  /* 112a2bdb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2bde rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2be0 mov ecx, edx */
  ECX = (EDX);
  /* 112a2be2 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2be5 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2be7 mov edi, 0x112ab5d4 */
  EDI = (0x112ab5d4u);
  /* 112a2bec or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2bef repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2bf1 not ecx */
  ECX = (~(ECX));
  /* 112a2bf3 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2bf5 mov eax, ecx */
  EAX = (ECX);
  /* 112a2bf7 mov esi, edi */
  ESI = (EDI);
  /* 112a2bf9 mov edi, 0x112ae3ee */
  EDI = (0x112ae3eeu);
  /* 112a2bfe shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2c01 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2c03 mov ecx, eax */
  ECX = (EAX);
  /* 112a2c05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a2c07 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2c0a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2c0c mov edi, 0x112ab5cc */
  EDI = (0x112ab5ccu);
  /* 112a2c11 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a2c14 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 112a2c16 not ecx */
  ECX = (~(ECX));
  /* 112a2c18 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2c1a mov edx, ecx */
  EDX = (ECX);
  /* 112a2c1c mov esi, edi */
  ESI = (EDI);
  /* 112a2c1e mov edi, 0x112ae3fd */
  EDI = (0x112ae3fdu);
  /* 112a2c23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a2c26 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a2c28 mov ecx, edx */
  ECX = (EDX);
  /* 112a2c2a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a2c2d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 112a2c2f jmp 0x112a2d99 */
  goto L_112a2d99;
L_112a2c34:;
  /* 112a2c34 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2c38 push esi */
  push32((uint32_t)(ESI));
  /* 112a2c39 call 0x112a48e5 */
  push32(0x112a2c3eu); f_112a48e5();
  /* 112a2c3e push esi */
  push32((uint32_t)(ESI));
  /* 112a2c3f call 0x112a4762 */
  push32(0x112a2c44u); f_112a4762();
  /* 112a2c44 mov ebx, eax */
  EBX = (EAX);
  /* 112a2c46 lea eax, [ebx + 1] */
  EAX = ((uint32_t)(EBX + 0x1));
  /* 112a2c49 push eax */
  push32((uint32_t)(EAX));
  /* 112a2c4a call 0x112a4754 */
  push32(0x112a2c4fu); f_112a4754();
  /* 112a2c4f push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2c53 push esi */
  push32((uint32_t)(ESI));
  /* 112a2c54 mov edi, eax */
  EDI = (EAX);
  /* 112a2c56 call 0x112a48e5 */
  push32(0x112a2c5bu); f_112a48e5();
  /* 112a2c5b push esi */
  push32((uint32_t)(ESI));
  /* 112a2c5c push ebx */
  push32((uint32_t)(EBX));
  /* 112a2c5d push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2c5f push edi */
  push32((uint32_t)(EDI));
  /* 112a2c60 call 0x112a463d */
  push32(0x112a2c65u); f_112a463d();
  /* 112a2c65 push esi */
  push32((uint32_t)(ESI));
  /* 112a2c66 call 0x112a45c0 */
  push32(0x112a2c6bu); f_112a45c0();
  /* 112a2c6b add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2c6e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a2c70 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_112a2c72:;
  /* 112a2c72 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a2c74 jne 0x112a2c7d */
  if (!C.zf) goto L_112a2c7d;
  /* 112a2c76 push 0x112ab5c4 */
  push32((uint32_t)(0x112ab5c4u));
  /* 112a2c7b jmp 0x112a2cb7 */
  goto L_112a2cb7;
L_112a2c7d:;
  /* 112a2c7d cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2c80 jne 0x112a2c89 */
  if (!C.zf) goto L_112a2c89;
  /* 112a2c82 push 0x112ab5bc */
  push32((uint32_t)(0x112ab5bcu));
  /* 112a2c87 jmp 0x112a2cb7 */
  goto L_112a2cb7;
L_112a2c89:;
  /* 112a2c89 cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2c8c jne 0x112a2c95 */
  if (!C.zf) goto L_112a2c95;
  /* 112a2c8e push 0x112ab5b4 */
  push32((uint32_t)(0x112ab5b4u));
  /* 112a2c93 jmp 0x112a2cb7 */
  goto L_112a2cb7;
L_112a2c95:;
  /* 112a2c95 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2c98 jne 0x112a2ca1 */
  if (!C.zf) goto L_112a2ca1;
  /* 112a2c9a push 0x112ab5ac */
  push32((uint32_t)(0x112ab5acu));
  /* 112a2c9f jmp 0x112a2cb7 */
  goto L_112a2cb7;
L_112a2ca1:;
  /* 112a2ca1 cmp ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2ca4 jne 0x112a2cad */
  if (!C.zf) goto L_112a2cad;
  /* 112a2ca6 push 0x112ab5a4 */
  push32((uint32_t)(0x112ab5a4u));
  /* 112a2cab jmp 0x112a2cb7 */
  goto L_112a2cb7;
L_112a2cad:;
  /* 112a2cad cmp ebx, 5 */
  { uint32_t _a=(EBX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2cb0 jne 0x112a2cc4 */
  if (!C.zf) goto L_112a2cc4;
  /* 112a2cb2 push 0x112ab59c */
  push32((uint32_t)(0x112ab59cu));
L_112a2cb7:;
  /* 112a2cb7 push edi */
  push32((uint32_t)(EDI));
  /* 112a2cb8 call 0x112a4540 */
  push32(0x112a2cbdu); f_112a4540();
  /* 112a2cbd mov esi, eax */
  ESI = (EAX);
  /* 112a2cbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2cc2 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_112a2cc4:;
  /* 112a2cc4 add esi, 5 */
  { uint32_t _a=(ESI),_b=(0x5u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2cc7 push 0x112ab598 */
  push32((uint32_t)(0x112ab598u));
  /* 112a2ccc lea ebp, [esi + edi] */
  EBP = ((uint32_t)(ESI + EDI*1));
  /* 112a2ccf push ebp */
  push32((uint32_t)(EBP));
  /* 112a2cd0 call 0x112a4500 */
  push32(0x112a2cd5u); f_112a4500();
  /* 112a2cd5 lea ecx, [ebx + ebx*2] */
  ECX = ((uint32_t)(EBX + EBX*2));
  /* 112a2cd8 push eax */
  push32((uint32_t)(EAX));
  /* 112a2cd9 push ebp */
  push32((uint32_t)(EBP));
  /* 112a2cda mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 112a2cde lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 112a2ce1 mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 112a2ce5 lea ecx, [ecx + 0x112af1e0] */
  ECX = ((uint32_t)(ECX + 0x112af1e0));
  /* 112a2ceb push ecx */
  push32((uint32_t)(ECX));
  /* 112a2cec call 0x112a4400 */
  push32(0x112a2cf1u); f_112a4400();
  /* 112a2cf1 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 112a2cf5 mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 112a2cf9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2cfc inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a2cfd cmp ebx, 6 */
  { uint32_t _a=(EBX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2d00 mov byte ptr [edx + eax + 0x112af1e0], 0 */
  w8((uint32_t)(EDX + EAX*1 + 0x112af1e0), (0x0u));
  /* 112a2d08 jl 0x112a2c72 */
  if ((C.sf!=C.of)) goto L_112a2c72;
  /* 112a2d0e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_112a2d10:;
  /* 112a2d10 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a2d12 jne 0x112a2d1b */
  if (!C.zf) goto L_112a2d1b;
  /* 112a2d14 push 0x112ab5e4 */
  push32((uint32_t)(0x112ab5e4u));
  /* 112a2d19 jmp 0x112a2d3d */
  goto L_112a2d3d;
L_112a2d1b:;
  /* 112a2d1b cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2d1e jne 0x112a2d27 */
  if (!C.zf) goto L_112a2d27;
  /* 112a2d20 push 0x112ab5dc */
  push32((uint32_t)(0x112ab5dcu));
  /* 112a2d25 jmp 0x112a2d3d */
  goto L_112a2d3d;
L_112a2d27:;
  /* 112a2d27 cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2d2a jne 0x112a2d33 */
  if (!C.zf) goto L_112a2d33;
  /* 112a2d2c push 0x112ab5d4 */
  push32((uint32_t)(0x112ab5d4u));
  /* 112a2d31 jmp 0x112a2d3d */
  goto L_112a2d3d;
L_112a2d33:;
  /* 112a2d33 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2d36 jne 0x112a2d4a */
  if (!C.zf) goto L_112a2d4a;
  /* 112a2d38 push 0x112ab5cc */
  push32((uint32_t)(0x112ab5ccu));
L_112a2d3d:;
  /* 112a2d3d push edi */
  push32((uint32_t)(EDI));
  /* 112a2d3e call 0x112a4540 */
  push32(0x112a2d43u); f_112a4540();
  /* 112a2d43 mov esi, eax */
  ESI = (EAX);
  /* 112a2d45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2d48 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_112a2d4a:;
  /* 112a2d4a add esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2d4d push 0x112ab598 */
  push32((uint32_t)(0x112ab598u));
  /* 112a2d52 lea ebp, [esi + edi] */
  EBP = ((uint32_t)(ESI + EDI*1));
  /* 112a2d55 push ebp */
  push32((uint32_t)(EBP));
  /* 112a2d56 call 0x112a4500 */
  push32(0x112a2d5bu); f_112a4500();
  /* 112a2d5b lea ecx, [ebx + ebx*2] */
  ECX = ((uint32_t)(EBX + EBX*2));
  /* 112a2d5e push eax */
  push32((uint32_t)(EAX));
  /* 112a2d5f push ebp */
  push32((uint32_t)(EBP));
  /* 112a2d60 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 112a2d64 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 112a2d67 mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 112a2d6b lea ecx, [ecx + 0x112ae3d0] */
  ECX = ((uint32_t)(ECX + 0x112ae3d0));
  /* 112a2d71 push ecx */
  push32((uint32_t)(ECX));
  /* 112a2d72 call 0x112a4400 */
  push32(0x112a2d77u); f_112a4400();
  /* 112a2d77 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 112a2d7b mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 112a2d7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2d82 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a2d83 cmp ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a2d86 mov byte ptr [edx + eax + 0x112ae3d0], 0 */
  w8((uint32_t)(EDX + EAX*1 + 0x112ae3d0), (0x0u));
  /* 112a2d8e jl 0x112a2d10 */
  if ((C.sf!=C.of)) goto L_112a2d10;
  /* 112a2d90 push edi */
  push32((uint32_t)(EDI));
  /* 112a2d91 call 0x112a43f0 */
  push32(0x112a2d96u); f_112a43f0();
  /* 112a2d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a2d99:;
  /* 112a2d99 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2d9b call dword ptr [0x112aa0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e8))), 0x112a2da1u);
  /* 112a2da1 mov edi, dword ptr [0x112aa0ec] */
  EDI = (r32((uint32_t)(0x112aa0ec)));
  /* 112a2da7 mov ebx, dword ptr [0x112aa154] */
  EBX = (r32((uint32_t)(0x112aa154)));
  /* 112a2dad mov esi, dword ptr [0x112aa15c] */
  ESI = (r32((uint32_t)(0x112aa15c)));
  /* 112a2db3 mov ebp, dword ptr [0x112aa0f0] */
  EBP = (r32((uint32_t)(0x112aa0f0)));
  /* 112a2db9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2dbc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a2dbe je 0x112a30f1 */
  if (C.zf) goto L_112a30f1;
  /* 112a2dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2dc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2dc8 call dword ptr [0x112aa0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f4))), 0x112a2dceu);
  /* 112a2dce push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2dd2 call edi */
  call_ind((uint32_t)(EDI), 0x112a2dd4u);
  /* 112a2dd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2dd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2dd8 call edi */
  call_ind((uint32_t)(EDI), 0x112a2ddau);
  /* 112a2dda push 4 */
  push32((uint32_t)(0x4u));
  /* 112a2ddc push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2dde call edi */
  call_ind((uint32_t)(EDI), 0x112a2de0u);
  /* 112a2de0 push 8 */
  push32((uint32_t)(0x8u));
  /* 112a2de2 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2de4 call edi */
  call_ind((uint32_t)(EDI), 0x112a2de6u);
  /* 112a2de6 push 0xff */
  push32((uint32_t)(0xffu));
  /* 112a2deb push 4 */
  push32((uint32_t)(0x4u));
  /* 112a2ded call edi */
  call_ind((uint32_t)(EDI), 0x112a2defu);
  /* 112a2def push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 112a2df1 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a2df3 call edi */
  call_ind((uint32_t)(EDI), 0x112a2df5u);
  /* 112a2df5 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 112a2dfa push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2dfc call ebx */
  call_ind((uint32_t)(EBX), 0x112a2dfeu);
  /* 112a2dfe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2e01 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 112a2e03 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2e05 call ebx */
  call_ind((uint32_t)(EBX), 0x112a2e07u);
  /* 112a2e07 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 112a2e09 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2e0b call ebx */
  call_ind((uint32_t)(EBX), 0x112a2e0du);
  /* 112a2e0d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 112a2e0f push 4 */
  push32((uint32_t)(0x4u));
  /* 112a2e11 call ebx */
  call_ind((uint32_t)(EBX), 0x112a2e13u);
  /* 112a2e13 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 112a2e15 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a2e17 call ebx */
  call_ind((uint32_t)(EBX), 0x112a2e19u);
  /* 112a2e19 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 112a2e1b push 6 */
  push32((uint32_t)(0x6u));
  /* 112a2e1d call ebx */
  call_ind((uint32_t)(EBX), 0x112a2e1fu);
  /* 112a2e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e21 push 0x112aee58 */
  push32((uint32_t)(0x112aee58u));
  /* 112a2e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e28 call dword ptr [0x112aa0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f8))), 0x112a2e2eu);
  /* 112a2e2e push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e30 push 0x112af250 */
  push32((uint32_t)(0x112af250u));
  /* 112a2e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e37 call dword ptr [0x112aa0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f8))), 0x112a2e3du);
  /* 112a2e3d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2e40 push 0x112ae368 */
  push32((uint32_t)(0x112ae368u));
  /* 112a2e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e47 call dword ptr [0x112aa0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0fc))), 0x112a2e4du);
  /* 112a2e4d push 0x112ae450 */
  push32((uint32_t)(0x112ae450u));
  /* 112a2e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e54 call dword ptr [0x112aa0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0fc))), 0x112a2e5au);
  /* 112a2e5a push 0x112aee60 */
  push32((uint32_t)(0x112aee60u));
  /* 112a2e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e61 call dword ptr [0x112aa0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0fc))), 0x112a2e67u);
  /* 112a2e67 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e70 call esi */
  call_ind((uint32_t)(ESI), 0x112a2e72u);
  /* 112a2e72 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2e77 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e7b call esi */
  call_ind((uint32_t)(ESI), 0x112a2e7du);
  /* 112a2e7d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2e82 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e86 call esi */
  call_ind((uint32_t)(ESI), 0x112a2e88u);
  /* 112a2e88 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2e8d push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e91 call esi */
  call_ind((uint32_t)(ESI), 0x112a2e93u);
  /* 112a2e93 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2e96 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2e98 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2e9au);
  /* 112a2e9a mov ecx, 5 */
  ECX = (0x5u);
  /* 112a2e9f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2ea1 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 112a2ea4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a2ea7 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 112a2eaa shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 112a2ead push ecx */
  push32((uint32_t)(ECX));
  /* 112a2eae push 4 */
  push32((uint32_t)(0x4u));
  /* 112a2eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2eb2 call esi */
  call_ind((uint32_t)(ESI), 0x112a2eb4u);
  /* 112a2eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2eb6 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2eb8u);
  /* 112a2eb8 mov ecx, 5 */
  ECX = (0x5u);
  /* 112a2ebd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a2ebf lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 112a2ec2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a2ec5 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 112a2ec8 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 112a2ecb push edx */
  push32((uint32_t)(EDX));
  /* 112a2ecc push 5 */
  push32((uint32_t)(0x5u));
  /* 112a2ece push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2ed0 call esi */
  call_ind((uint32_t)(ESI), 0x112a2ed2u);
  /* 112a2ed2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2ed9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2edb call esi */
  call_ind((uint32_t)(ESI), 0x112a2eddu);
  /* 112a2edd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2ee2 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2ee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2ee6 call esi */
  call_ind((uint32_t)(ESI), 0x112a2ee8u);
  /* 112a2ee8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2eed push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2eef push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2ef1 call esi */
  call_ind((uint32_t)(ESI), 0x112a2ef3u);
  /* 112a2ef3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2ef6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2efb push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2efd push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2eff call esi */
  call_ind((uint32_t)(ESI), 0x112a2f01u);
  /* 112a2f01 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2f06 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a2f08 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2f0a call esi */
  call_ind((uint32_t)(ESI), 0x112a2f0cu);
  /* 112a2f0c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2f11 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a2f13 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2f15 call esi */
  call_ind((uint32_t)(ESI), 0x112a2f17u);
  /* 112a2f17 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2f1e push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2f20 call esi */
  call_ind((uint32_t)(ESI), 0x112a2f22u);
  /* 112a2f22 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2f27 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2f29 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2f2b call esi */
  call_ind((uint32_t)(ESI), 0x112a2f2du);
  /* 112a2f2d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2f32 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2f34 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2f36 call esi */
  call_ind((uint32_t)(ESI), 0x112a2f38u);
  /* 112a2f38 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2f3b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2f42 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2f44 call esi */
  call_ind((uint32_t)(ESI), 0x112a2f46u);
  /* 112a2f46 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2f4b push 4 */
  push32((uint32_t)(0x4u));
  /* 112a2f4d push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2f4f call esi */
  call_ind((uint32_t)(ESI), 0x112a2f51u);
  /* 112a2f51 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 112a2f56 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a2f58 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2f5a call esi */
  call_ind((uint32_t)(ESI), 0x112a2f5cu);
  /* 112a2f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2f5e call ebp */
  call_ind((uint32_t)(EBP), 0x112a2f60u);
  /* 112a2f60 push eax */
  push32((uint32_t)(EAX));
  /* 112a2f61 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2f63 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2f65 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2f67 push 0x112ab58c */
  push32((uint32_t)(0x112ab58cu));
  /* 112a2f6c push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2f6e call dword ptr [0x112aa100] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa100))), 0x112a2f74u);
  /* 112a2f74 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2f79 call ebp */
  call_ind((uint32_t)(EBP), 0x112a2f7bu);
  /* 112a2f7b push eax */
  push32((uint32_t)(EAX));
  /* 112a2f7c push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2f7e push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2f80 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2f82 push 0x112ab580 */
  push32((uint32_t)(0x112ab580u));
  /* 112a2f87 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2f89 call dword ptr [0x112aa100] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa100))), 0x112a2f8fu);
  /* 112a2f8f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a2f92 mov ecx, 0x112ae4a0 */
  ECX = (0x112ae4a0u);
  /* 112a2f97 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2f9f push 0x112ae7b0 */
  push32((uint32_t)(0x112ae7b0u));
  /* 112a2fa4 push 0x112aeb40 */
  push32((uint32_t)(0x112aeb40u));
  /* 112a2fa9 push 0x112ab578 */
  push32((uint32_t)(0x112ab578u));
  /* 112a2fae push 5 */
  push32((uint32_t)(0x5u));
  /* 112a2fb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2fb2 push 0x112ae398 */
  push32((uint32_t)(0x112ae398u));
  /* 112a2fb7 push 0x112ae3d0 */
  push32((uint32_t)(0x112ae3d0u));
  /* 112a2fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2fc0 call 0x112a1020 */
  push32(0x112a2fc5u); f_112a1020();
  /* 112a2fc5 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a2fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2fcd push 0x112ae7b0 */
  push32((uint32_t)(0x112ae7b0u));
  /* 112a2fd2 push 0x112aeb40 */
  push32((uint32_t)(0x112aeb40u));
  /* 112a2fd7 push 0x112ab578 */
  push32((uint32_t)(0x112ab578u));
  /* 112a2fdc push 4 */
  push32((uint32_t)(0x4u));
  /* 112a2fde push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2fe0 push 0x112ae438 */
  push32((uint32_t)(0x112ae438u));
  /* 112a2fe5 push 0x112ae3df */
  push32((uint32_t)(0x112ae3dfu));
  /* 112a2fea push 1 */
  push32((uint32_t)(0x1u));
  /* 112a2fec push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2fee mov ecx, 0x112aee80 */
  ECX = (0x112aee80u);
  /* 112a2ff3 call 0x112a1020 */
  push32(0x112a2ff8u); f_112a1020();
  /* 112a2ff8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a2ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 112a2ffe push 0x112aeb40 */
  push32((uint32_t)(0x112aeb40u));
  /* 112a3003 push 0x112aee80 */
  push32((uint32_t)(0x112aee80u));
  /* 112a3008 push 0x112ae4a0 */
  push32((uint32_t)(0x112ae4a0u));
  /* 112a300d push 0x112ab564 */
  push32((uint32_t)(0x112ab564u));
  /* 112a3012 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a3014 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a3016 push 0x112ae448 */
  push32((uint32_t)(0x112ae448u));
  /* 112a301b push 0x112ae3ee */
  push32((uint32_t)(0x112ae3eeu));
  /* 112a3020 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3022 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3024 mov ecx, 0x112ae7b0 */
  ECX = (0x112ae7b0u);
  /* 112a3029 call 0x112a1020 */
  push32(0x112a302eu); f_112a1020();
  /* 112a302e push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3030 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3032 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3034 push 0x112ae7b0 */
  push32((uint32_t)(0x112ae7b0u));
  /* 112a3039 push 0x112aee80 */
  push32((uint32_t)(0x112aee80u));
  /* 112a303e push 0x112ae4a0 */
  push32((uint32_t)(0x112ae4a0u));
  /* 112a3043 push 0x112ab550 */
  push32((uint32_t)(0x112ab550u));
  /* 112a3048 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a304a push 1 */
  push32((uint32_t)(0x1u));
  /* 112a304c push 0x112aeac8 */
  push32((uint32_t)(0x112aeac8u));
  /* 112a3051 push 0x112ae3fd */
  push32((uint32_t)(0x112ae3fdu));
  /* 112a3056 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a3058 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a305a mov ecx, 0x112aeb40 */
  ECX = (0x112aeb40u);
  /* 112a305f call 0x112a1020 */
  push32(0x112a3064u); f_112a1020();
  /* 112a3064 push 0x112ab548 */
  push32((uint32_t)(0x112ab548u));
  /* 112a3069 call dword ptr [0x112aa170] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa170))), 0x112a306fu);
  /* 112a306f push 1 */
  push32((uint32_t)(0x1u));
  /* 112a3071 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3073 push 0x112ae398 */
  push32((uint32_t)(0x112ae398u));
  /* 112a3078 call dword ptr [0x112aa104] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa104))), 0x112a307eu);
  /* 112a307e push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3080 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3082 push 0x112ae438 */
  push32((uint32_t)(0x112ae438u));
  /* 112a3087 call dword ptr [0x112aa104] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa104))), 0x112a308du);
  /* 112a308d push 0x41 */
  push32((uint32_t)(0x41u));
  /* 112a308f call dword ptr [0x112aa108] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa108))), 0x112a3095u);
  /* 112a3095 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 112a3097 call dword ptr [0x112aa10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa10c))), 0x112a309du);
  /* 112a309d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 112a309f call dword ptr [0x112aa10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa10c))), 0x112a30a5u);
  /* 112a30a5 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 112a30a7 call dword ptr [0x112aa10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa10c))), 0x112a30adu);
  /* 112a30ad push 0x47 */
  push32((uint32_t)(0x47u));
  /* 112a30af call dword ptr [0x112aa10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa10c))), 0x112a30b5u);
  /* 112a30b5 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 112a30b7 call dword ptr [0x112aa108] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa108))), 0x112a30bdu);
  /* 112a30bd push 0x46 */
  push32((uint32_t)(0x46u));
  /* 112a30bf call dword ptr [0x112aa108] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa108))), 0x112a30c5u);
  /* 112a30c5 lea eax, [esp + 0x50] */
  EAX = ((uint32_t)(ESP + 0x50));
  /* 112a30c9 push eax */
  push32((uint32_t)(EAX));
  /* 112a30ca push 0 */
  push32((uint32_t)(0x0u));
  /* 112a30cc push 0x112aee70 */
  push32((uint32_t)(0x112aee70u));
  /* 112a30d1 call dword ptr [0x112aa110] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa110))), 0x112a30d7u);
  /* 112a30d7 mov ecx, dword ptr [esp + 0x5c] */
  ECX = (r32((uint32_t)(ESP + 0x5c)));
  /* 112a30db add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a30de and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a30e4 mov byte ptr [0x112ab050], 0 */
  w8((uint32_t)(0x112ab050), (0x0u));
  /* 112a30eb mov dword ptr [0x112ae428], ecx */
  w32((uint32_t)(0x112ae428), (ECX));
L_112a30f1:;
  /* 112a30f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a30f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a30f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a30f7 push 0x112ae7b0 */
  push32((uint32_t)(0x112ae7b0u));
  /* 112a30fc push 0x112aeb40 */
  push32((uint32_t)(0x112aeb40u));
  /* 112a3101 push 0x112ab578 */
  push32((uint32_t)(0x112ab578u));
  /* 112a3106 push 0x112ae398 */
  push32((uint32_t)(0x112ae398u));
  /* 112a310b mov ecx, 0x112ae4a0 */
  ECX = (0x112ae4a0u);
  /* 112a3110 mov dword ptr [0x112ab054], 0x112ae4a0 */
  w32((uint32_t)(0x112ab054), (0x112ae4a0u));
  /* 112a311a mov dword ptr [0x112ab058], 0x112aee80 */
  w32((uint32_t)(0x112ab058), (0x112aee80u));
  /* 112a3124 mov dword ptr [0x112ab05c], 0x112ae7b0 */
  w32((uint32_t)(0x112ab05c), (0x112ae7b0u));
  /* 112a312e mov dword ptr [0x112ab060], 0x112aeb40 */
  w32((uint32_t)(0x112ab060), (0x112aeb40u));
  /* 112a3138 call 0x112a11d0 */
  push32(0x112a313du); f_112a11d0();
  /* 112a313d push 0x112af248 */
  push32((uint32_t)(0x112af248u));
  /* 112a3142 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a3148u);
  /* 112a3148 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a314b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a314e sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 112a3151 push edx */
  push32((uint32_t)(EDX));
  /* 112a3152 push 0x112aeac0 */
  push32((uint32_t)(0x112aeac0u));
  /* 112a3157 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a315du);
  /* 112a315d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3160 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3163 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 112a3166 push eax */
  push32((uint32_t)(EAX));
  /* 112a3167 push 0x112ae358 */
  push32((uint32_t)(0x112ae358u));
  /* 112a316c call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a3172u);
  /* 112a3172 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3175 mov ecx, 0x112ae4a0 */
  ECX = (0x112ae4a0u);
  /* 112a317a push eax */
  push32((uint32_t)(EAX));
  /* 112a317b call 0x112a20a0 */
  push32(0x112a3180u); f_112a20a0();
  /* 112a3180 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3182 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3184 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3186 push 0x112ae7b0 */
  push32((uint32_t)(0x112ae7b0u));
  /* 112a318b push 0x112aeb40 */
  push32((uint32_t)(0x112aeb40u));
  /* 112a3190 push 0x112ab578 */
  push32((uint32_t)(0x112ab578u));
  /* 112a3195 push 0x112ae438 */
  push32((uint32_t)(0x112ae438u));
  /* 112a319a mov ecx, 0x112aee80 */
  ECX = (0x112aee80u);
  /* 112a319f call 0x112a11d0 */
  push32(0x112a31a4u); f_112a11d0();
  /* 112a31a4 push 0x112ae418 */
  push32((uint32_t)(0x112ae418u));
  /* 112a31a9 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a31afu);
  /* 112a31af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a31b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a31b5 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 112a31b8 push ecx */
  push32((uint32_t)(ECX));
  /* 112a31b9 push 0x112ae3c8 */
  push32((uint32_t)(0x112ae3c8u));
  /* 112a31be call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a31c4u);
  /* 112a31c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a31c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a31ca sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 112a31cd push edx */
  push32((uint32_t)(EDX));
  /* 112a31ce push 0x112ae410 */
  push32((uint32_t)(0x112ae410u));
  /* 112a31d3 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a31d9u);
  /* 112a31d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a31dc mov ecx, 0x112aee80 */
  ECX = (0x112aee80u);
  /* 112a31e1 push eax */
  push32((uint32_t)(EAX));
  /* 112a31e2 call 0x112a20a0 */
  push32(0x112a31e7u); f_112a20a0();
  /* 112a31e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a31e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a31eb push 0x112aeb40 */
  push32((uint32_t)(0x112aeb40u));
  /* 112a31f0 push 0x112aee80 */
  push32((uint32_t)(0x112aee80u));
  /* 112a31f5 push 0x112ae4a0 */
  push32((uint32_t)(0x112ae4a0u));
  /* 112a31fa push 0x112ab564 */
  push32((uint32_t)(0x112ab564u));
  /* 112a31ff push 0x112ae448 */
  push32((uint32_t)(0x112ae448u));
  /* 112a3204 mov ecx, 0x112ae7b0 */
  ECX = (0x112ae7b0u);
  /* 112a3209 call 0x112a11d0 */
  push32(0x112a320eu); f_112a11d0();
  /* 112a320e push 0x112ae7a0 */
  push32((uint32_t)(0x112ae7a0u));
  /* 112a3213 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a3219u);
  /* 112a3219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a321c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a321f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 112a3222 push eax */
  push32((uint32_t)(EAX));
  /* 112a3223 push 0x112ae370 */
  push32((uint32_t)(0x112ae370u));
  /* 112a3228 call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a322eu);
  /* 112a322e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3231 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3234 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 112a3237 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3238 push 0x112af258 */
  push32((uint32_t)(0x112af258u));
  /* 112a323d call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a3243u);
  /* 112a3243 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3246 mov ecx, 0x112ae7b0 */
  ECX = (0x112ae7b0u);
  /* 112a324b push eax */
  push32((uint32_t)(EAX));
  /* 112a324c call 0x112a20a0 */
  push32(0x112a3251u); f_112a20a0();
  /* 112a3251 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3253 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3255 push 0x112ae7b0 */
  push32((uint32_t)(0x112ae7b0u));
  /* 112a325a push 0x112aee80 */
  push32((uint32_t)(0x112aee80u));
  /* 112a325f push 0x112ae4a0 */
  push32((uint32_t)(0x112ae4a0u));
  /* 112a3264 push 0x112ab550 */
  push32((uint32_t)(0x112ab550u));
  /* 112a3269 push 0x112aeac8 */
  push32((uint32_t)(0x112aeac8u));
  /* 112a326e mov ecx, 0x112aeb40 */
  ECX = (0x112aeb40u);
  /* 112a3273 call 0x112a11d0 */
  push32(0x112a3278u); f_112a11d0();
  /* 112a3278 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a327a mov ecx, 0x112ae4a0 */
  ECX = (0x112ae4a0u);
  /* 112a327f call 0x112a1510 */
  push32(0x112a3284u); f_112a1510();
  /* 112a3284 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3286 mov ecx, 0x112aee80 */
  ECX = (0x112aee80u);
  /* 112a328b call 0x112a1510 */
  push32(0x112a3290u); f_112a1510();
  /* 112a3290 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3292 mov ecx, 0x112ae7b0 */
  ECX = (0x112ae7b0u);
  /* 112a3297 call 0x112a1510 */
  push32(0x112a329cu); f_112a1510();
  /* 112a329c push 2 */
  push32((uint32_t)(0x2u));
  /* 112a329e call dword ptr [0x112aa14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa14c))), 0x112a32a4u);
  /* 112a32a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a32a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a32a9 je 0x112a32c2 */
  if (C.zf) goto L_112a32c2;
  /* 112a32ab mov ecx, 0x112ae4a0 */
  ECX = (0x112ae4a0u);
  /* 112a32b0 call 0x112a1ac0 */
  push32(0x112a32b5u); f_112a1ac0();
  /* 112a32b5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a32b7 je 0x112a32c2 */
  if (C.zf) goto L_112a32c2;
  /* 112a32b9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 112a32bb push 2 */
  push32((uint32_t)(0x2u));
  /* 112a32bd call ebx */
  call_ind((uint32_t)(EBX), 0x112a32bfu);
  /* 112a32bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a32c2:;
  /* 112a32c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a32c4 call dword ptr [0x112aa14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa14c))), 0x112a32cau);
  /* 112a32ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a32cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a32cf je 0x112a32e8 */
  if (C.zf) goto L_112a32e8;
  /* 112a32d1 mov ecx, 0x112aee80 */
  ECX = (0x112aee80u);
  /* 112a32d6 call 0x112a1ac0 */
  push32(0x112a32dbu); f_112a1ac0();
  /* 112a32db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a32dd je 0x112a32e8 */
  if (C.zf) goto L_112a32e8;
  /* 112a32df push 0x64 */
  push32((uint32_t)(0x64u));
  /* 112a32e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a32e3 call ebx */
  call_ind((uint32_t)(EBX), 0x112a32e5u);
  /* 112a32e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a32e8:;
  /* 112a32e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a32ea call dword ptr [0x112aa0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e8))), 0x112a32f0u);
  /* 112a32f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a32f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a32f5 jne 0x112a331d */
  if (!C.zf) goto L_112a331d;
  /* 112a32f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a32f9 call dword ptr [0x112aa14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa14c))), 0x112a32ffu);
  /* 112a32ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3302 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a3304 je 0x112a331d */
  if (C.zf) goto L_112a331d;
  /* 112a3306 mov ecx, 0x112ae7b0 */
  ECX = (0x112ae7b0u);
  /* 112a330b call 0x112a1ac0 */
  push32(0x112a3310u); f_112a1ac0();
  /* 112a3310 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a3312 je 0x112a331d */
  if (C.zf) goto L_112a331d;
  /* 112a3314 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 112a3316 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a3318 call ebx */
  call_ind((uint32_t)(EBX), 0x112a331au);
  /* 112a331a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a331d:;
  /* 112a331d push 5 */
  push32((uint32_t)(0x5u));
  /* 112a331f call dword ptr [0x112aa14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa14c))), 0x112a3325u);
  /* 112a3325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3328 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a332a je 0x112a3343 */
  if (C.zf) goto L_112a3343;
  /* 112a332c mov ecx, 0x112aeb40 */
  ECX = (0x112aeb40u);
  /* 112a3331 call 0x112a1ac0 */
  push32(0x112a3336u); f_112a1ac0();
  /* 112a3336 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a3338 je 0x112a3343 */
  if (C.zf) goto L_112a3343;
  /* 112a333a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 112a333c push 5 */
  push32((uint32_t)(0x5u));
  /* 112a333e call ebx */
  call_ind((uint32_t)(EBX), 0x112a3340u);
  /* 112a3340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3343:;
  /* 112a3343 push 0x112ae398 */
  push32((uint32_t)(0x112ae398u));
  /* 112a3348 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a334a call ebp */
  call_ind((uint32_t)(EBP), 0x112a334cu);
  /* 112a334c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a334f lea edx, [eax + eax*2 + 5] */
  EDX = ((uint32_t)(EAX + EAX*2 + 0x5));
  /* 112a3353 mov ecx, 0x112ae318 */
  ECX = (0x112ae318u);
  /* 112a3358 push edx */
  push32((uint32_t)(EDX));
  /* 112a3359 call 0x112a23d0 */
  push32(0x112a335eu); f_112a23d0();
  /* 112a335e push 0x112ae438 */
  push32((uint32_t)(0x112ae438u));
  /* 112a3363 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3365 call ebp */
  call_ind((uint32_t)(EBP), 0x112a3367u);
  /* 112a3367 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a336a lea eax, [eax + eax*2 + 5] */
  EAX = ((uint32_t)(EAX + EAX*2 + 0x5));
  /* 112a336e mov ecx, 0x112ae2d8 */
  ECX = (0x112ae2d8u);
  /* 112a3373 push eax */
  push32((uint32_t)(EAX));
  /* 112a3374 call 0x112a23d0 */
  push32(0x112a3379u); f_112a23d0();
  /* 112a3379 push 0x112ae498 */
  push32((uint32_t)(0x112ae498u));
  /* 112a337e push 0x112aeb38 */
  push32((uint32_t)(0x112aeb38u));
  /* 112a3383 push 0x112aee40 */
  push32((uint32_t)(0x112aee40u));
  /* 112a3388 push 0x112aee48 */
  push32((uint32_t)(0x112aee48u));
  /* 112a338d mov ecx, 0x112ae318 */
  ECX = (0x112ae318u);
  /* 112a3392 call 0x112a2280 */
  push32(0x112a3397u); f_112a2280();
  /* 112a3397 push 0x112ae490 */
  push32((uint32_t)(0x112ae490u));
  /* 112a339c push 0x112ae458 */
  push32((uint32_t)(0x112ae458u));
  /* 112a33a1 push 0x112ae460 */
  push32((uint32_t)(0x112ae460u));
  /* 112a33a6 push 0x112ae468 */
  push32((uint32_t)(0x112ae468u));
  /* 112a33ab mov ecx, 0x112ae2d8 */
  ECX = (0x112ae2d8u);
  /* 112a33b0 call 0x112a2280 */
  push32(0x112a33b5u); f_112a2280();
  /* 112a33b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a33b7 call dword ptr [0x112aa14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa14c))), 0x112a33bdu);
  /* 112a33bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a33c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a33c2 je 0x112a33f9 */
  if (C.zf) goto L_112a33f9;
  /* 112a33c4 mov ecx, 0x112ae4a0 */
  ECX = (0x112ae4a0u);
  /* 112a33c9 call 0x112a1220 */
  push32(0x112a33ceu); f_112a1220();
  /* 112a33ce mov ecx, 0x112aee80 */
  ECX = (0x112aee80u);
  /* 112a33d3 call 0x112a1220 */
  push32(0x112a33d8u); f_112a1220();
  /* 112a33d8 mov ecx, 0x112ae7b0 */
  ECX = (0x112ae7b0u);
  /* 112a33dd call 0x112a1220 */
  push32(0x112a33e2u); f_112a1220();
  /* 112a33e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a33e4 call ebp */
  call_ind((uint32_t)(EBP), 0x112a33e6u);
  /* 112a33e6 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a33e9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a33ec lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 112a33ef shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 112a33f1 push ecx */
  push32((uint32_t)(ECX));
  /* 112a33f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a33f4 call ebx */
  call_ind((uint32_t)(EBX), 0x112a33f6u);
  /* 112a33f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a33f9:;
  /* 112a33f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a33fb call dword ptr [0x112aa0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e8))), 0x112a3401u);
  /* 112a3401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3404 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a3406 je 0x112a347f */
  if (C.zf) goto L_112a347f;
  /* 112a3408 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a340a push 0x112aee50 */
  push32((uint32_t)(0x112aee50u));
  /* 112a340f push 0x112aeab0 */
  push32((uint32_t)(0x112aeab0u));
  /* 112a3414 call dword ptr [0x112aa178] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa178))), 0x112a341au);
  /* 112a341a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a341d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a341f je 0x112a347f */
  if (C.zf) goto L_112a347f;
  /* 112a3421 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3423 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3425 call dword ptr [0x112aa0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f4))), 0x112a342bu);
  /* 112a342b mov ebx, dword ptr [0x112aa170] */
  EBX = (r32((uint32_t)(0x112aa170)));
  /* 112a3431 push 0x112ab540 */
  push32((uint32_t)(0x112ab540u));
  /* 112a3436 call ebx */
  call_ind((uint32_t)(EBX), 0x112a3438u);
  /* 112a3438 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 112a343a call dword ptr [0x112aa108] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa108))), 0x112a3440u);
  /* 112a3440 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3443 push 0xb */
  push32((uint32_t)(0xbu));
  /* 112a3445 push 0xa */
  push32((uint32_t)(0xau));
  /* 112a3447 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3449 call ebp */
  call_ind((uint32_t)(EBP), 0x112a344bu);
  /* 112a344b mov ecx, 5 */
  ECX = (0x5u);
  /* 112a3450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3453 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a3455 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 112a3458 mov ecx, 0x112ae318 */
  ECX = (0x112ae318u);
  /* 112a345d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a3460 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 112a3463 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 112a3466 push edx */
  push32((uint32_t)(EDX));
  /* 112a3467 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a3469 push 0x112aeb20 */
  push32((uint32_t)(0x112aeb20u));
  /* 112a346e push 0x112aeb28 */
  push32((uint32_t)(0x112aeb28u));
  /* 112a3473 push 0x112aeb30 */
  push32((uint32_t)(0x112aeb30u));
  /* 112a3478 call 0x112a21b0 */
  push32(0x112a347du); f_112a21b0();
  /* 112a347d jmp 0x112a3485 */
  goto L_112a3485;
L_112a347f:;
  /* 112a347f mov ebx, dword ptr [0x112aa170] */
  EBX = (r32((uint32_t)(0x112aa170)));
L_112a3485:;
  /* 112a3485 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a3487 call dword ptr [0x112aa0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e8))), 0x112a348du);
  /* 112a348d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3490 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a3492 je 0x112a3503 */
  if (C.zf) goto L_112a3503;
  /* 112a3494 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3496 push 0x112aee50 */
  push32((uint32_t)(0x112aee50u));
  /* 112a349b push 0x112ae420 */
  push32((uint32_t)(0x112ae420u));
  /* 112a34a0 call dword ptr [0x112aa178] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa178))), 0x112a34a6u);
  /* 112a34a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a34a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a34ab je 0x112a3503 */
  if (C.zf) goto L_112a3503;
  /* 112a34ad push 0 */
  push32((uint32_t)(0x0u));
  /* 112a34af push 3 */
  push32((uint32_t)(0x3u));
  /* 112a34b1 call dword ptr [0x112aa0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f4))), 0x112a34b7u);
  /* 112a34b7 push 0x112ab538 */
  push32((uint32_t)(0x112ab538u));
  /* 112a34bc call ebx */
  call_ind((uint32_t)(EBX), 0x112a34beu);
  /* 112a34be push 0x43 */
  push32((uint32_t)(0x43u));
  /* 112a34c0 call dword ptr [0x112aa108] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa108))), 0x112a34c6u);
  /* 112a34c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a34c9 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 112a34cb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 112a34cd push 0 */
  push32((uint32_t)(0x0u));
  /* 112a34cf call ebp */
  call_ind((uint32_t)(EBP), 0x112a34d1u);
  /* 112a34d1 mov ecx, 5 */
  ECX = (0x5u);
  /* 112a34d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a34d9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a34db lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 112a34de mov ecx, 0x112ae2d8 */
  ECX = (0x112ae2d8u);
  /* 112a34e3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a34e6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a34e9 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 112a34ec push eax */
  push32((uint32_t)(EAX));
  /* 112a34ed push 5 */
  push32((uint32_t)(0x5u));
  /* 112a34ef push 0x112ae470 */
  push32((uint32_t)(0x112ae470u));
  /* 112a34f4 push 0x112ae478 */
  push32((uint32_t)(0x112ae478u));
  /* 112a34f9 push 0x112ae480 */
  push32((uint32_t)(0x112ae480u));
  /* 112a34fe call 0x112a21b0 */
  push32(0x112a3503u); f_112a21b0();
L_112a3503:;
  /* 112a3503 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a3505 call dword ptr [0x112aa0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e8))), 0x112a350bu);
  /* 112a350b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a350e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a3510 je 0x112a3547 */
  if (C.zf) goto L_112a3547;
  /* 112a3512 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3514 push 0x112aee50 */
  push32((uint32_t)(0x112aee50u));
  /* 112a3519 push 0x112af240 */
  push32((uint32_t)(0x112af240u));
  /* 112a351e call dword ptr [0x112aa178] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa178))), 0x112a3524u);
  /* 112a3524 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3527 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a3529 je 0x112a3547 */
  if (C.zf) goto L_112a3547;
  /* 112a352b push 0 */
  push32((uint32_t)(0x0u));
  /* 112a352d push 5 */
  push32((uint32_t)(0x5u));
  /* 112a352f call dword ptr [0x112aa0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f4))), 0x112a3535u);
  /* 112a3535 push 0x112ab530 */
  push32((uint32_t)(0x112ab530u));
  /* 112a353a call ebx */
  call_ind((uint32_t)(EBX), 0x112a353cu);
  /* 112a353c push 0x47 */
  push32((uint32_t)(0x47u));
  /* 112a353e call dword ptr [0x112aa108] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa108))), 0x112a3544u);
  /* 112a3544 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3547:;
  /* 112a3547 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a3549 call dword ptr [0x112aa0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e8))), 0x112a354fu);
  /* 112a354f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3552 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a3554 je 0x112a3591 */
  if (C.zf) goto L_112a3591;
  /* 112a3556 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3558 call dword ptr [0x112aa0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e8))), 0x112a355eu);
  /* 112a355e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3561 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a3563 jne 0x112a3591 */
  if (!C.zf) goto L_112a3591;
  /* 112a3565 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a3567 call dword ptr [0x112aa0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e8))), 0x112a356du);
  /* 112a356d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3570 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a3572 jne 0x112a3591 */
  if (!C.zf) goto L_112a3591;
  /* 112a3574 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3576 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a3578 call dword ptr [0x112aa0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f4))), 0x112a357eu);
  /* 112a357e push 0x41 */
  push32((uint32_t)(0x41u));
  /* 112a3580 call dword ptr [0x112aa10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa10c))), 0x112a3586u);
  /* 112a3586 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 112a3588 call dword ptr [0x112aa108] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa108))), 0x112a358eu);
  /* 112a358e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3591:;
  /* 112a3591 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3593 call dword ptr [0x112aa114] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa114))), 0x112a3599u);
  /* 112a3599 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a359c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a359e je 0x112a35b0 */
  if (C.zf) goto L_112a35b0;
  /* 112a35a0 push 0x112ab528 */
  push32((uint32_t)(0x112ab528u));
  /* 112a35a5 call ebx */
  call_ind((uint32_t)(EBX), 0x112a35a7u);
  /* 112a35a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a35aa call dword ptr [0x112aa118] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa118))), 0x112a35b0u);
L_112a35b0:;
  /* 112a35b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a35b2 call dword ptr [0x112aa114] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa114))), 0x112a35b8u);
  /* 112a35b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a35bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a35bd je 0x112a35de */
  if (C.zf) goto L_112a35de;
  /* 112a35bf push 3 */
  push32((uint32_t)(0x3u));
  /* 112a35c1 call dword ptr [0x112aa114] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa114))), 0x112a35c7u);
  /* 112a35c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a35ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a35cc je 0x112a35de */
  if (C.zf) goto L_112a35de;
  /* 112a35ce push 0x112ab520 */
  push32((uint32_t)(0x112ab520u));
  /* 112a35d3 call ebx */
  call_ind((uint32_t)(EBX), 0x112a35d5u);
  /* 112a35d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a35d8 call dword ptr [0x112aa11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa11c))), 0x112a35deu);
L_112a35de:;
  /* 112a35de push 0 */
  push32((uint32_t)(0x0u));
  /* 112a35e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a35e2 call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a35e8u);
  /* 112a35e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a35eb cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a35f0 jle 0x112a3600 */
  if ((C.zf||C.sf!=C.of)) goto L_112a3600;
  /* 112a35f2 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 112a35f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a35f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a35fb call esi */
  call_ind((uint32_t)(ESI), 0x112a35fdu);
  /* 112a35fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3600:;
  /* 112a3600 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a3602 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3604 call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a360au);
  /* 112a360a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a360d cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3612 jle 0x112a3622 */
  if ((C.zf||C.sf!=C.of)) goto L_112a3622;
  /* 112a3614 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 112a3619 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a361b push 0 */
  push32((uint32_t)(0x0u));
  /* 112a361d call esi */
  call_ind((uint32_t)(ESI), 0x112a361fu);
  /* 112a361f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3622:;
  /* 112a3622 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3624 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3626 call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a362cu);
  /* 112a362c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a362f cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3634 jle 0x112a3644 */
  if ((C.zf||C.sf!=C.of)) goto L_112a3644;
  /* 112a3636 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 112a363b push 2 */
  push32((uint32_t)(0x2u));
  /* 112a363d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a363f call esi */
  call_ind((uint32_t)(ESI), 0x112a3641u);
  /* 112a3641 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3644:;
  /* 112a3644 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a3646 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3648 call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a364eu);
  /* 112a364e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3651 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3656 jle 0x112a3666 */
  if ((C.zf||C.sf!=C.of)) goto L_112a3666;
  /* 112a3658 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 112a365d push 1 */
  push32((uint32_t)(0x1u));
  /* 112a365f push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3661 call esi */
  call_ind((uint32_t)(ESI), 0x112a3663u);
  /* 112a3663 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3666:;
  /* 112a3666 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a3668 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a366a call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a3670u);
  /* 112a3670 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3673 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3678 jle 0x112a3688 */
  if ((C.zf||C.sf!=C.of)) goto L_112a3688;
  /* 112a367a push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 112a367f push 4 */
  push32((uint32_t)(0x4u));
  /* 112a3681 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3683 call esi */
  call_ind((uint32_t)(ESI), 0x112a3685u);
  /* 112a3685 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3688:;
  /* 112a3688 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a368a push 0 */
  push32((uint32_t)(0x0u));
  /* 112a368c call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a3692u);
  /* 112a3692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3695 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a369a jle 0x112a36aa */
  if ((C.zf||C.sf!=C.of)) goto L_112a36aa;
  /* 112a369c push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 112a36a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a36a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a36a5 call esi */
  call_ind((uint32_t)(ESI), 0x112a36a7u);
  /* 112a36a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a36aa:;
  /* 112a36aa push 0 */
  push32((uint32_t)(0x0u));
  /* 112a36ac push 0x112aead0 */
  push32((uint32_t)(0x112aead0u));
  /* 112a36b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a36b3 call dword ptr [0x112aa120] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa120))), 0x112a36b9u);
  /* 112a36b9 push 0x112aead0 */
  push32((uint32_t)(0x112aead0u));
  /* 112a36be call dword ptr [0x112aa180] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa180))), 0x112a36c4u);
  /* 112a36c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a36c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a36ca jne 0x112a3706 */
  if (!C.zf) goto L_112a3706;
  /* 112a36cc lea ecx, [esp + 0x18] */
  ECX = ((uint32_t)(ESP + 0x18));
  /* 112a36d0 push ecx */
  push32((uint32_t)(ECX));
  /* 112a36d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a36d3 push 0x112aead0 */
  push32((uint32_t)(0x112aead0u));
  /* 112a36d8 call dword ptr [0x112aa110] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa110))), 0x112a36deu);
  /* 112a36de mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 112a36e2 mov eax, dword ptr [0x112ae428] */
  EAX = (r32((uint32_t)(0x112ae428)));
  /* 112a36e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112a36ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a36f0 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a36f2 jne 0x112a3706 */
  if (!C.zf) goto L_112a3706;
  /* 112a36f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a36f6 mov byte ptr [0x112ab050], 1 */
  w8((uint32_t)(0x112ab050), (0x1u));
  /* 112a36fd call dword ptr [0x112aa124] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa124))), 0x112a3703u);
  /* 112a3703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3706:;
  /* 112a3706 mov al, byte ptr [0x112ab050] */
  AL = (r8((uint32_t)(0x112ab050)));
  /* 112a370b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a370d je 0x112a39a9 */
  if (C.zf) goto L_112a39a9;
  /* 112a3713 mov al, byte ptr [0x112af265] */
  AL = (r8((uint32_t)(0x112af265)));
  /* 112a3718 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a371a je 0x112a3723 */
  if (C.zf) goto L_112a3723;
  /* 112a371c push 0x112ab518 */
  push32((uint32_t)(0x112ab518u));
  /* 112a3721 jmp 0x112a3731 */
  goto L_112a3731;
L_112a3723:;
  /* 112a3723 mov al, byte ptr [0x112af264] */
  AL = (r8((uint32_t)(0x112af264)));
  /* 112a3728 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a372a je 0x112a3790 */
  if (C.zf) goto L_112a3790;
  /* 112a372c push 0x112ab510 */
  push32((uint32_t)(0x112ab510u));
L_112a3731:;
  /* 112a3731 call dword ptr [0x112aa128] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa128))), 0x112a3737u);
  /* 112a3737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a373a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a373c je 0x112a39a2 */
  if (C.zf) goto L_112a39a2;
  /* 112a3742 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a3744 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3746 call edi */
  call_ind((uint32_t)(EDI), 0x112a3748u);
  /* 112a3748 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a374a push 1 */
  push32((uint32_t)(0x1u));
  /* 112a374c call edi */
  call_ind((uint32_t)(EDI), 0x112a374eu);
  /* 112a374e push 4 */
  push32((uint32_t)(0x4u));
  /* 112a3750 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3752 call edi */
  call_ind((uint32_t)(EDI), 0x112a3754u);
  /* 112a3754 push 8 */
  push32((uint32_t)(0x8u));
  /* 112a3756 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a3758 call edi */
  call_ind((uint32_t)(EDI), 0x112a375au);
  /* 112a375a push 0xff */
  push32((uint32_t)(0xffu));
  /* 112a375f push 4 */
  push32((uint32_t)(0x4u));
  /* 112a3761 call edi */
  call_ind((uint32_t)(EDI), 0x112a3763u);
  /* 112a3763 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 112a3765 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a3767 call edi */
  call_ind((uint32_t)(EDI), 0x112a3769u);
  /* 112a3769 push 0x112ab508 */
  push32((uint32_t)(0x112ab508u));
  /* 112a376e call ebx */
  call_ind((uint32_t)(EBX), 0x112a3770u);
  /* 112a3770 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a3772 push 6 */
  push32((uint32_t)(0x6u));
  /* 112a3774 call dword ptr [0x112aa0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f4))), 0x112a377au);
  /* 112a377a add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a377d mov byte ptr [0x112af264], 0 */
  w8((uint32_t)(0x112af264), (0x0u));
  /* 112a3784 mov byte ptr [0x112af265], 0 */
  w8((uint32_t)(0x112af265), (0x0u));
  /* 112a378b jmp 0x112a39a2 */
  goto L_112a39a2;
L_112a3790:;
  /* 112a3790 push 0x112ab4fc */
  push32((uint32_t)(0x112ab4fcu));
  /* 112a3795 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3797 push 0x112ab4f4 */
  push32((uint32_t)(0x112ab4f4u));
  /* 112a379c push 9 */
  push32((uint32_t)(0x9u));
  /* 112a379e call dword ptr [0x112aa17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa17c))), 0x112a37a4u);
  /* 112a37a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a37a7 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a37aa je 0x112a38a6 */
  if (C.zf) goto L_112a38a6;
  /* 112a37b0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a37b1 jne 0x112a39a2 */
  if (!C.zf) goto L_112a39a2;
  /* 112a37b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a37b9 call ebp */
  call_ind((uint32_t)(EBP), 0x112a37bbu);
  /* 112a37bb lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a37be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a37c1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a37c4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a37c7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a37ca lea ecx, [eax*8 + 0x2710] */
  ECX = ((uint32_t)(EAX*8 + 0x2710));
  /* 112a37d1 push ecx */
  push32((uint32_t)(ECX));
  /* 112a37d2 push 0x112ab4ec */
  push32((uint32_t)(0x112ab4ecu));
  /* 112a37d7 call dword ptr [0x112aa174] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa174))), 0x112a37ddu);
  /* 112a37dd push 0x112ab4e4 */
  push32((uint32_t)(0x112ab4e4u));
  /* 112a37e2 call dword ptr [0x112aa128] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa128))), 0x112a37e8u);
  /* 112a37e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a37eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a37ed je 0x112a39a2 */
  if (C.zf) goto L_112a39a2;
  /* 112a37f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a37f5 call ebp */
  call_ind((uint32_t)(EBP), 0x112a37f7u);
  /* 112a37f7 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a37fa push 1 */
  push32((uint32_t)(0x1u));
  /* 112a37fc push 0 */
  push32((uint32_t)(0x0u));
  /* 112a37fe lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a3801 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a3804 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 112a3807 lea ebx, [edx*8 + 0x2710] */
  EBX = ((uint32_t)(EDX*8 + 0x2710));
  /* 112a380e call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a3814u);
  /* 112a3814 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3817 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3819 jl 0x112a3992 */
  if ((C.sf!=C.of)) goto L_112a3992;
  /* 112a381f mov ebx, dword ptr [0x112aa170] */
  EBX = (r32((uint32_t)(0x112aa170)));
  /* 112a3825 push 0x112ab4dc */
  push32((uint32_t)(0x112ab4dcu));
  /* 112a382a call ebx */
  call_ind((uint32_t)(EBX), 0x112a382cu);
  /* 112a382c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a382e call ebp */
  call_ind((uint32_t)(EBP), 0x112a3830u);
  /* 112a3830 mov ecx, 0x14 */
  ECX = (0x14u);
  /* 112a3835 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a3837 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 112a383a lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a383d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a3840 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112a3843 push eax */
  push32((uint32_t)(EAX));
  /* 112a3844 push 6 */
  push32((uint32_t)(0x6u));
  /* 112a3846 call dword ptr [0x112aa154] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa154))), 0x112a384cu);
  /* 112a384c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a384e push 6 */
  push32((uint32_t)(0x6u));
  /* 112a3850 call dword ptr [0x112aa0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f4))), 0x112a3856u);
  /* 112a3856 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3858 call ebp */
  call_ind((uint32_t)(EBP), 0x112a385au);
  /* 112a385a lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a385d mov ebp, 0xffffd508 */
  EBP = (0xffffd508u);
  /* 112a3862 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a3864 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3866 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a3869 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a386c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 112a386f shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 112a3872 sub ebp, ecx */
  { uint32_t _a=(EBP),_b=(ECX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a3874 call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a387au);
  /* 112a387a add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a387c push ebp */
  push32((uint32_t)(EBP));
  /* 112a387d push 1 */
  push32((uint32_t)(0x1u));
  /* 112a387f push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3881 call esi */
  call_ind((uint32_t)(ESI), 0x112a3883u);
  /* 112a3883 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a3885 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a3887 call edi */
  call_ind((uint32_t)(EDI), 0x112a3889u);
  /* 112a3889 push 0x112ab4dc */
  push32((uint32_t)(0x112ab4dcu));
  /* 112a388e mov byte ptr [0x112af264], 0 */
  w8((uint32_t)(0x112af264), (0x0u));
  /* 112a3895 mov byte ptr [0x112af265], 1 */
  w8((uint32_t)(0x112af265), (0x1u));
  /* 112a389c call ebx */
  call_ind((uint32_t)(EBX), 0x112a389eu);
  /* 112a389e add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a38a1 jmp 0x112a39a2 */
  goto L_112a39a2;
L_112a38a6:;
  /* 112a38a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a38a8 call ebp */
  call_ind((uint32_t)(EBP), 0x112a38aau);
  /* 112a38aa lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a38ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a38b0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a38b3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a38b6 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 112a38b9 lea eax, [edx*8 + 0x2710] */
  EAX = ((uint32_t)(EDX*8 + 0x2710));
  /* 112a38c0 push eax */
  push32((uint32_t)(EAX));
  /* 112a38c1 push 0x112ab4ec */
  push32((uint32_t)(0x112ab4ecu));
  /* 112a38c6 call dword ptr [0x112aa174] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa174))), 0x112a38ccu);
  /* 112a38cc push 0x112ab4e4 */
  push32((uint32_t)(0x112ab4e4u));
  /* 112a38d1 call dword ptr [0x112aa128] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa128))), 0x112a38d7u);
  /* 112a38d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a38da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a38dc je 0x112a39a2 */
  if (C.zf) goto L_112a39a2;
  /* 112a38e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a38e4 call ebp */
  call_ind((uint32_t)(EBP), 0x112a38e6u);
  /* 112a38e6 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a38e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a38eb push 0 */
  push32((uint32_t)(0x0u));
  /* 112a38ed lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a38f0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a38f3 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 112a38f6 lea ebx, [ecx*8 + 0x2710] */
  EBX = ((uint32_t)(ECX*8 + 0x2710));
  /* 112a38fd call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a3903u);
  /* 112a3903 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3906 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3908 jl 0x112a3992 */
  if ((C.sf!=C.of)) goto L_112a3992;
  /* 112a390e mov ebx, dword ptr [0x112aa170] */
  EBX = (r32((uint32_t)(0x112aa170)));
  /* 112a3914 push 0x112ab4dc */
  push32((uint32_t)(0x112ab4dcu));
  /* 112a3919 call ebx */
  call_ind((uint32_t)(EBX), 0x112a391bu);
  /* 112a391b push 0 */
  push32((uint32_t)(0x0u));
  /* 112a391d call ebp */
  call_ind((uint32_t)(EBP), 0x112a391fu);
  /* 112a391f mov ecx, 0x14 */
  ECX = (0x14u);
  /* 112a3924 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a3926 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 112a3929 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a392c lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 112a392f shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 112a3932 push edx */
  push32((uint32_t)(EDX));
  /* 112a3933 push 6 */
  push32((uint32_t)(0x6u));
  /* 112a3935 call dword ptr [0x112aa154] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa154))), 0x112a393bu);
  /* 112a393b push 0 */
  push32((uint32_t)(0x0u));
  /* 112a393d push 6 */
  push32((uint32_t)(0x6u));
  /* 112a393f call dword ptr [0x112aa0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0f4))), 0x112a3945u);
  /* 112a3945 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3947 call ebp */
  call_ind((uint32_t)(EBP), 0x112a3949u);
  /* 112a3949 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 112a394c mov ebp, 0xffffd508 */
  EBP = (0xffffd508u);
  /* 112a3951 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a3953 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3955 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a3958 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a395b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a395e shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 112a3961 sub ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; EBP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a3963 call dword ptr [0x112aa158] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa158))), 0x112a3969u);
  /* 112a3969 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a396b push ebp */
  push32((uint32_t)(EBP));
  /* 112a396c push 1 */
  push32((uint32_t)(0x1u));
  /* 112a396e push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3970 call esi */
  call_ind((uint32_t)(ESI), 0x112a3972u);
  /* 112a3972 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a3974 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3976 call edi */
  call_ind((uint32_t)(EDI), 0x112a3978u);
  /* 112a3978 push 0x112ab4dc */
  push32((uint32_t)(0x112ab4dcu));
  /* 112a397d mov byte ptr [0x112af264], 1 */
  w8((uint32_t)(0x112af264), (0x1u));
  /* 112a3984 mov byte ptr [0x112af265], 0 */
  w8((uint32_t)(0x112af265), (0x0u));
  /* 112a398b call ebx */
  call_ind((uint32_t)(EBX), 0x112a398du);
  /* 112a398d add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3990 jmp 0x112a39a2 */
  goto L_112a39a2;
L_112a3992:;
  /* 112a3992 mov ebx, dword ptr [0x112aa170] */
  EBX = (r32((uint32_t)(0x112aa170)));
  /* 112a3998 push 0x112ab4d4 */
  push32((uint32_t)(0x112ab4d4u));
  /* 112a399d call ebx */
  call_ind((uint32_t)(EBX), 0x112a399fu);
  /* 112a399f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a39a2:;
  /* 112a39a2 mov byte ptr [0x112ab050], 0 */
  w8((uint32_t)(0x112ab050), (0x0u));
L_112a39a9:;
  /* 112a39a9 push 6 */
  push32((uint32_t)(0x6u));
  /* 112a39ab call dword ptr [0x112aa12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa12c))), 0x112a39b1u);
  /* 112a39b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a39b4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a39b6 je 0x112a3a06 */
  if (C.zf) goto L_112a3a06;
  /* 112a39b8 push 6 */
  push32((uint32_t)(0x6u));
  /* 112a39ba call dword ptr [0x112aa0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e8))), 0x112a39c0u);
  /* 112a39c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a39c3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a39c5 jne 0x112a3a06 */
  if (!C.zf) goto L_112a3a06;
  /* 112a39c7 push 0x112ab508 */
  push32((uint32_t)(0x112ab508u));
  /* 112a39cc call ebx */
  call_ind((uint32_t)(EBX), 0x112a39ceu);
  /* 112a39ce push 3 */
  push32((uint32_t)(0x3u));
  /* 112a39d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a39d2 mov byte ptr [0x112af264], 0 */
  w8((uint32_t)(0x112af264), (0x0u));
  /* 112a39d9 mov byte ptr [0x112af265], 0 */
  w8((uint32_t)(0x112af265), (0x0u));
  /* 112a39e0 call edi */
  call_ind((uint32_t)(EDI), 0x112a39e2u);
  /* 112a39e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a39e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a39e6 call edi */
  call_ind((uint32_t)(EDI), 0x112a39e8u);
  /* 112a39e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a39ea push 2 */
  push32((uint32_t)(0x2u));
  /* 112a39ec call edi */
  call_ind((uint32_t)(EDI), 0x112a39eeu);
  /* 112a39ee push 8 */
  push32((uint32_t)(0x8u));
  /* 112a39f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a39f2 call edi */
  call_ind((uint32_t)(EDI), 0x112a39f4u);
  /* 112a39f4 push 0xff */
  push32((uint32_t)(0xffu));
  /* 112a39f9 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a39fb call edi */
  call_ind((uint32_t)(EDI), 0x112a39fdu);
  /* 112a39fd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 112a39ff push 5 */
  push32((uint32_t)(0x5u));
  /* 112a3a01 call edi */
  call_ind((uint32_t)(EDI), 0x112a3a03u);
  /* 112a3a03 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a3a06:;
  /* 112a3a06 pop edi */
  EDI = (pop32());
  /* 112a3a07 pop esi */
  ESI = (pop32());
  /* 112a3a08 pop ebp */
  EBP = (pop32());
  /* 112a3a09 pop ebx */
  EBX = (pop32());
  /* 112a3a0a add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3a0d ret  */
  ESPCHK(0x112a2a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a10 @ 0x112a3a10 (2497 bytes, 883 insns) [1 switch table(s)] */
void f_112a3a10(void) {
  FTRACE(0x112a3a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a3a10 push esi */
  push32((uint32_t)(ESI));
  /* 112a3a11 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a3a15 push edi */
  push32((uint32_t)(EDI));
  /* 112a3a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3a18 push esi */
  push32((uint32_t)(ESI));
  /* 112a3a19 call dword ptr [0x112aa168] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa168))), 0x112a3a1fu);
  /* 112a3a1f mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 112a3a23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3a26 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3a29 ja 0x112a43ce */
  if ((!C.cf&&!C.zf)) goto L_112a43ce;
  /* 112a3a2f mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a3a33 jmp dword ptr [ecx*4 + 0x112a43d4] */
  switch (ECX) {
    case 0: goto L_112a3a3a;
    case 1: goto L_112a3bff;
    case 2: goto L_112a3fcc;
    case 3: goto L_112a3d5c;
    default: x86_unimpl("switch@0x112a3a33 out of table"); return;
  }
L_112a3a3a:;
  /* 112a3a3a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3a3d jne 0x112a3b6c */
  if (!C.zf) goto L_112a3b6c;
  /* 112a3a43 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3a46 mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a3a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3a4e push 0x70 */
  push32((uint32_t)(0x70u));
  /* 112a3a50 push 0x112af1b0 */
  push32((uint32_t)(0x112af1b0u));
  /* 112a3a55 push eax */
  push32((uint32_t)(EAX));
  /* 112a3a56 call edi */
  call_ind((uint32_t)(EDI), 0x112a3a58u);
  /* 112a3a58 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3a5b push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3a5d push 0x70 */
  push32((uint32_t)(0x70u));
  /* 112a3a5f push 0x112af1b8 */
  push32((uint32_t)(0x112af1b8u));
  /* 112a3a64 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3a65 call edi */
  call_ind((uint32_t)(EDI), 0x112a3a67u);
  /* 112a3a67 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3a6a push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3a6c push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3a6e push 0x112af1c0 */
  push32((uint32_t)(0x112af1c0u));
  /* 112a3a73 push edx */
  push32((uint32_t)(EDX));
  /* 112a3a74 call edi */
  call_ind((uint32_t)(EDI), 0x112a3a76u);
  /* 112a3a76 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3a79 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3a7b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a3a80 push 0x112af1a8 */
  push32((uint32_t)(0x112af1a8u));
  /* 112a3a85 push eax */
  push32((uint32_t)(EAX));
  /* 112a3a86 call edi */
  call_ind((uint32_t)(EDI), 0x112a3a88u);
  /* 112a3a88 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3a8b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3a8e push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3a90 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a3a95 push 0x112af1a0 */
  push32((uint32_t)(0x112af1a0u));
  /* 112a3a9a push ecx */
  push32((uint32_t)(ECX));
  /* 112a3a9b call edi */
  call_ind((uint32_t)(EDI), 0x112a3a9du);
  /* 112a3a9d mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3aa2 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a3aa7 push 0x112af198 */
  push32((uint32_t)(0x112af198u));
  /* 112a3aac push edx */
  push32((uint32_t)(EDX));
  /* 112a3aad call edi */
  call_ind((uint32_t)(EDI), 0x112a3aafu);
  /* 112a3aaf mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3ab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3ab4 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3ab6 push 0x112af190 */
  push32((uint32_t)(0x112af190u));
  /* 112a3abb push eax */
  push32((uint32_t)(EAX));
  /* 112a3abc call edi */
  call_ind((uint32_t)(EDI), 0x112a3abeu);
  /* 112a3abe mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3ac1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3ac3 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 112a3ac5 push 0x112af188 */
  push32((uint32_t)(0x112af188u));
  /* 112a3aca push ecx */
  push32((uint32_t)(ECX));
  /* 112a3acb call edi */
  call_ind((uint32_t)(EDI), 0x112a3acdu);
  /* 112a3acd mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3ad0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3ad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3ad5 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3ad7 push 0x112af180 */
  push32((uint32_t)(0x112af180u));
  /* 112a3adc push edx */
  push32((uint32_t)(EDX));
  /* 112a3add call edi */
  call_ind((uint32_t)(EDI), 0x112a3adfu);
  /* 112a3adf mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3ae4 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3ae6 push 0x112ae3a0 */
  push32((uint32_t)(0x112ae3a0u));
  /* 112a3aeb push eax */
  push32((uint32_t)(EAX));
  /* 112a3aec call edi */
  call_ind((uint32_t)(EDI), 0x112a3aeeu);
  /* 112a3aee mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3af1 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3af3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3af5 push 0x112ae3a8 */
  push32((uint32_t)(0x112ae3a8u));
  /* 112a3afa push ecx */
  push32((uint32_t)(ECX));
  /* 112a3afb call edi */
  call_ind((uint32_t)(EDI), 0x112a3afdu);
  /* 112a3afd mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3b00 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3b02 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3b04 push 0x112ae3b0 */
  push32((uint32_t)(0x112ae3b0u));
  /* 112a3b09 push edx */
  push32((uint32_t)(EDX));
  /* 112a3b0a call edi */
  call_ind((uint32_t)(EDI), 0x112a3b0cu);
  /* 112a3b0c mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3b0f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3b12 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3b14 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3b16 push 0x112ae3b8 */
  push32((uint32_t)(0x112ae3b8u));
  /* 112a3b1b push eax */
  push32((uint32_t)(EAX));
  /* 112a3b1c call edi */
  call_ind((uint32_t)(EDI), 0x112a3b1eu);
  /* 112a3b1e mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3b21 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3b25 push 0x112ae3c0 */
  push32((uint32_t)(0x112ae3c0u));
  /* 112a3b2a push ecx */
  push32((uint32_t)(ECX));
  /* 112a3b2b call edi */
  call_ind((uint32_t)(EDI), 0x112a3b2du);
  /* 112a3b2d mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3b30 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3b32 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a3b34 push 0x112ae378 */
  push32((uint32_t)(0x112ae378u));
  /* 112a3b39 push edx */
  push32((uint32_t)(EDX));
  /* 112a3b3a call edi */
  call_ind((uint32_t)(EDI), 0x112a3b3cu);
  /* 112a3b3c mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3b3f push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3b43 push 0x112ae380 */
  push32((uint32_t)(0x112ae380u));
  /* 112a3b48 push eax */
  push32((uint32_t)(EAX));
  /* 112a3b49 call edi */
  call_ind((uint32_t)(EDI), 0x112a3b4bu);
  /* 112a3b4b mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3b4e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3b51 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3b53 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a3b55 push 0x112ae388 */
  push32((uint32_t)(0x112ae388u));
  /* 112a3b5a push ecx */
  push32((uint32_t)(ECX));
  /* 112a3b5b call edi */
  call_ind((uint32_t)(EDI), 0x112a3b5du);
  /* 112a3b5d mov edx, dword ptr [0x112ab05c] */
  EDX = (r32((uint32_t)(0x112ab05c)));
  /* 112a3b63 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3b65 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 112a3b67 jmp 0x112a4237 */
  goto L_112a4237;
L_112a3b6c:;
  /* 112a3b6c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3b6f jne 0x112a3bff */
  if (!C.zf) goto L_112a3bff;
  /* 112a3b75 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3b78 mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a3b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3b80 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 112a3b82 push 0x112af1b0 */
  push32((uint32_t)(0x112af1b0u));
  /* 112a3b87 push edx */
  push32((uint32_t)(EDX));
  /* 112a3b88 call edi */
  call_ind((uint32_t)(EDI), 0x112a3b8au);
  /* 112a3b8a mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3b8d push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3b8f push 0x70 */
  push32((uint32_t)(0x70u));
  /* 112a3b91 push 0x112af1b8 */
  push32((uint32_t)(0x112af1b8u));
  /* 112a3b96 push eax */
  push32((uint32_t)(EAX));
  /* 112a3b97 call edi */
  call_ind((uint32_t)(EDI), 0x112a3b99u);
  /* 112a3b99 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3b9c push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3b9e push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a3ba3 push 0x112af1c0 */
  push32((uint32_t)(0x112af1c0u));
  /* 112a3ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3ba9 call edi */
  call_ind((uint32_t)(EDI), 0x112a3babu);
  /* 112a3bab mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3bae push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3bb0 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a3bb5 push 0x112af1c8 */
  push32((uint32_t)(0x112af1c8u));
  /* 112a3bba push edx */
  push32((uint32_t)(EDX));
  /* 112a3bbb call edi */
  call_ind((uint32_t)(EDI), 0x112a3bbdu);
  /* 112a3bbd mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3bc0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3bc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3bc5 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a3bca push 0x112af1d0 */
  push32((uint32_t)(0x112af1d0u));
  /* 112a3bcf push eax */
  push32((uint32_t)(EAX));
  /* 112a3bd0 call edi */
  call_ind((uint32_t)(EDI), 0x112a3bd2u);
  /* 112a3bd2 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3bd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3bd7 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a3bdc push 0x112af1d8 */
  push32((uint32_t)(0x112af1d8u));
  /* 112a3be1 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3be2 call edi */
  call_ind((uint32_t)(EDI), 0x112a3be4u);
  /* 112a3be4 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3be7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3be9 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a3bee push 0x112aeb00 */
  push32((uint32_t)(0x112aeb00u));
  /* 112a3bf3 push edx */
  push32((uint32_t)(EDX));
  /* 112a3bf4 call edi */
  call_ind((uint32_t)(EDI), 0x112a3bf6u);
  /* 112a3bf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3bf8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 112a3bfa jmp 0x112a43b9 */
  goto L_112a43b9;
L_112a3bff:;
  /* 112a3bff cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3c02 jne 0x112a3ce9 */
  if (!C.zf) goto L_112a3ce9;
  /* 112a3c08 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c0b mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a3c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3c13 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 112a3c15 push 0x112aeaf8 */
  push32((uint32_t)(0x112aeaf8u));
  /* 112a3c1a push eax */
  push32((uint32_t)(EAX));
  /* 112a3c1b call edi */
  call_ind((uint32_t)(EDI), 0x112a3c1du);
  /* 112a3c1d mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c20 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3c22 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 112a3c24 push 0x112aeaf0 */
  push32((uint32_t)(0x112aeaf0u));
  /* 112a3c29 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3c2a call edi */
  call_ind((uint32_t)(EDI), 0x112a3c2cu);
  /* 112a3c2c mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c2f push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3c31 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3c33 push 0x112aeae8 */
  push32((uint32_t)(0x112aeae8u));
  /* 112a3c38 push edx */
  push32((uint32_t)(EDX));
  /* 112a3c39 call edi */
  call_ind((uint32_t)(EDI), 0x112a3c3bu);
  /* 112a3c3b mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c3e push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3c40 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3c42 push 0x112aeae0 */
  push32((uint32_t)(0x112aeae0u));
  /* 112a3c47 push eax */
  push32((uint32_t)(EAX));
  /* 112a3c48 call edi */
  call_ind((uint32_t)(EDI), 0x112a3c4au);
  /* 112a3c4a mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c4d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3c50 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3c52 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3c54 push 0x112aead8 */
  push32((uint32_t)(0x112aead8u));
  /* 112a3c59 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3c5a call edi */
  call_ind((uint32_t)(EDI), 0x112a3c5cu);
  /* 112a3c5c mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c5f push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3c61 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3c63 push 0x112ae3a0 */
  push32((uint32_t)(0x112ae3a0u));
  /* 112a3c68 push edx */
  push32((uint32_t)(EDX));
  /* 112a3c69 call edi */
  call_ind((uint32_t)(EDI), 0x112a3c6bu);
  /* 112a3c6b mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c6e push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3c70 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3c72 push 0x112ae3a8 */
  push32((uint32_t)(0x112ae3a8u));
  /* 112a3c77 push eax */
  push32((uint32_t)(EAX));
  /* 112a3c78 call edi */
  call_ind((uint32_t)(EDI), 0x112a3c7au);
  /* 112a3c7a mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c7d push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3c7f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3c81 push 0x112ae3b0 */
  push32((uint32_t)(0x112ae3b0u));
  /* 112a3c86 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3c87 call edi */
  call_ind((uint32_t)(EDI), 0x112a3c89u);
  /* 112a3c89 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c8c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3c8f push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3c91 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3c93 push 0x112ae3b8 */
  push32((uint32_t)(0x112ae3b8u));
  /* 112a3c98 push edx */
  push32((uint32_t)(EDX));
  /* 112a3c99 call edi */
  call_ind((uint32_t)(EDI), 0x112a3c9bu);
  /* 112a3c9b mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3c9e push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3ca2 push 0x112ae3c0 */
  push32((uint32_t)(0x112ae3c0u));
  /* 112a3ca7 push eax */
  push32((uint32_t)(EAX));
  /* 112a3ca8 call edi */
  call_ind((uint32_t)(EDI), 0x112a3caau);
  /* 112a3caa mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3cad push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3caf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a3cb1 push 0x112ae378 */
  push32((uint32_t)(0x112ae378u));
  /* 112a3cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3cb7 call edi */
  call_ind((uint32_t)(EDI), 0x112a3cb9u);
  /* 112a3cb9 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3cbc push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3cbe push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3cc0 push 0x112ae380 */
  push32((uint32_t)(0x112ae380u));
  /* 112a3cc5 push edx */
  push32((uint32_t)(EDX));
  /* 112a3cc6 call edi */
  call_ind((uint32_t)(EDI), 0x112a3cc8u);
  /* 112a3cc8 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3ccb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3cce push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3cd0 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a3cd2 push 0x112ae388 */
  push32((uint32_t)(0x112ae388u));
  /* 112a3cd7 push eax */
  push32((uint32_t)(EAX));
  /* 112a3cd8 call edi */
  call_ind((uint32_t)(EDI), 0x112a3cdau);
  /* 112a3cda mov ecx, dword ptr [0x112ab05c] */
  ECX = (r32((uint32_t)(0x112ab05c)));
  /* 112a3ce0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3ce2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 112a3ce4 jmp 0x112a4118 */
  goto L_112a4118;
L_112a3ce9:;
  /* 112a3ce9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3cec jne 0x112a3d5c */
  if (!C.zf) goto L_112a3d5c;
  /* 112a3cee mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3cf1 mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a3cf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3cf9 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a3cfe push 0x112aeb18 */
  push32((uint32_t)(0x112aeb18u));
  /* 112a3d03 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3d04 call edi */
  call_ind((uint32_t)(EDI), 0x112a3d06u);
  /* 112a3d06 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3d09 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3d0b push 0xfa */
  push32((uint32_t)(0xfau));
  /* 112a3d10 push 0x112aeb10 */
  push32((uint32_t)(0x112aeb10u));
  /* 112a3d15 push edx */
  push32((uint32_t)(EDX));
  /* 112a3d16 call edi */
  call_ind((uint32_t)(EDI), 0x112a3d18u);
  /* 112a3d18 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3d1b push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3d1d push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a3d22 push 0x112aeb08 */
  push32((uint32_t)(0x112aeb08u));
  /* 112a3d27 push eax */
  push32((uint32_t)(EAX));
  /* 112a3d28 call edi */
  call_ind((uint32_t)(EDI), 0x112a3d2au);
  /* 112a3d2a mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3d2d push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3d2f push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a3d34 push 0x112aeb00 */
  push32((uint32_t)(0x112aeb00u));
  /* 112a3d39 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3d3a call edi */
  call_ind((uint32_t)(EDI), 0x112a3d3cu);
  /* 112a3d3c mov edx, dword ptr [0x112ab060] */
  EDX = (r32((uint32_t)(0x112ab060)));
  /* 112a3d42 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3d45 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3d48 mov eax, dword ptr [edx + 0x2ab] */
  EAX = (r32((uint32_t)(EDX + 0x2ab)));
  /* 112a3d4e push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3d50 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 112a3d52 push eax */
  push32((uint32_t)(EAX));
  /* 112a3d53 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3d54 call edi */
  call_ind((uint32_t)(EDI), 0x112a3d56u);
  /* 112a3d56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3d59 pop edi */
  EDI = (pop32());
  /* 112a3d5a pop esi */
  ESI = (pop32());
  /* 112a3d5b ret  */
  ESPCHK(0x112a3a10u, _esp0);
  ESP += 4; return;
L_112a3d5c:;
  /* 112a3d5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a3d5e jne 0x112a3dfb */
  if (!C.zf) goto L_112a3dfb;
  /* 112a3d64 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3d67 mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a3d6d push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3d6f push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3d71 push 0x112aeb00 */
  push32((uint32_t)(0x112aeb00u));
  /* 112a3d76 push edx */
  push32((uint32_t)(EDX));
  /* 112a3d77 call edi */
  call_ind((uint32_t)(EDI), 0x112a3d79u);
  /* 112a3d79 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3d7c push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3d7e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3d80 push 0x112af1d8 */
  push32((uint32_t)(0x112af1d8u));
  /* 112a3d85 push eax */
  push32((uint32_t)(EAX));
  /* 112a3d86 call edi */
  call_ind((uint32_t)(EDI), 0x112a3d88u);
  /* 112a3d88 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3d8b push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3d8d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3d8f push 0x112af1d0 */
  push32((uint32_t)(0x112af1d0u));
  /* 112a3d94 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3d95 call edi */
  call_ind((uint32_t)(EDI), 0x112a3d97u);
  /* 112a3d97 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3d9a push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3d9c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3d9e push 0x112af1c8 */
  push32((uint32_t)(0x112af1c8u));
  /* 112a3da3 push edx */
  push32((uint32_t)(EDX));
  /* 112a3da4 call edi */
  call_ind((uint32_t)(EDI), 0x112a3da6u);
  /* 112a3da6 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3da9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3dac push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3dae push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3db0 push 0x112af1c0 */
  push32((uint32_t)(0x112af1c0u));
  /* 112a3db5 push eax */
  push32((uint32_t)(EAX));
  /* 112a3db6 call edi */
  call_ind((uint32_t)(EDI), 0x112a3db8u);
  /* 112a3db8 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3dbb push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3dbd push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a3dc2 push 0x112af1b8 */
  push32((uint32_t)(0x112af1b8u));
  /* 112a3dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3dc8 call edi */
  call_ind((uint32_t)(EDI), 0x112a3dcau);
  /* 112a3dca mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3dcd push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3dcf push 0xfa */
  push32((uint32_t)(0xfau));
  /* 112a3dd4 push 0x112af1b0 */
  push32((uint32_t)(0x112af1b0u));
  /* 112a3dd9 push edx */
  push32((uint32_t)(EDX));
  /* 112a3dda call edi */
  call_ind((uint32_t)(EDI), 0x112a3ddcu);
  /* 112a3ddc mov eax, dword ptr [0x112ab054] */
  EAX = (r32((uint32_t)(0x112ab054)));
  /* 112a3de1 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3de4 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3de6 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 112a3deb mov ecx, dword ptr [eax + 0x2ab] */
  ECX = (r32((uint32_t)(EAX + 0x2ab)));
  /* 112a3df1 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3df2 push edx */
  push32((uint32_t)(EDX));
  /* 112a3df3 call edi */
  call_ind((uint32_t)(EDI), 0x112a3df5u);
  /* 112a3df5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3df8 pop edi */
  EDI = (pop32());
  /* 112a3df9 pop esi */
  ESI = (pop32());
  /* 112a3dfa ret  */
  ESPCHK(0x112a3a10u, _esp0);
  ESP += 4; return;
L_112a3dfb:;
  /* 112a3dfb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3dfe jne 0x112a3e68 */
  if (!C.zf) goto L_112a3e68;
  /* 112a3e00 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3e03 mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a3e09 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3e0b push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a3e10 push 0x112aeb00 */
  push32((uint32_t)(0x112aeb00u));
  /* 112a3e15 push eax */
  push32((uint32_t)(EAX));
  /* 112a3e16 call edi */
  call_ind((uint32_t)(EDI), 0x112a3e18u);
  /* 112a3e18 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3e1b push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3e1d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a3e22 push 0x112aeb08 */
  push32((uint32_t)(0x112aeb08u));
  /* 112a3e27 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3e28 call edi */
  call_ind((uint32_t)(EDI), 0x112a3e2au);
  /* 112a3e2a mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3e2f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 112a3e31 push 0x112aeb10 */
  push32((uint32_t)(0x112aeb10u));
  /* 112a3e36 push edx */
  push32((uint32_t)(EDX));
  /* 112a3e37 call edi */
  call_ind((uint32_t)(EDI), 0x112a3e39u);
  /* 112a3e39 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3e3c push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3e3e push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3e40 push 0x112aeb18 */
  push32((uint32_t)(0x112aeb18u));
  /* 112a3e45 push eax */
  push32((uint32_t)(EAX));
  /* 112a3e46 call edi */
  call_ind((uint32_t)(EDI), 0x112a3e48u);
  /* 112a3e48 mov ecx, dword ptr [0x112ab058] */
  ECX = (r32((uint32_t)(0x112ab058)));
  /* 112a3e4e mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3e51 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3e54 mov edx, dword ptr [ecx + 0x2ab] */
  EDX = (r32((uint32_t)(ECX + 0x2ab)));
  /* 112a3e5a push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3e5c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3e5e push edx */
  push32((uint32_t)(EDX));
  /* 112a3e5f push eax */
  push32((uint32_t)(EAX));
  /* 112a3e60 call edi */
  call_ind((uint32_t)(EDI), 0x112a3e62u);
  /* 112a3e62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3e65 pop edi */
  EDI = (pop32());
  /* 112a3e66 pop esi */
  ESI = (pop32());
  /* 112a3e67 ret  */
  ESPCHK(0x112a3a10u, _esp0);
  ESP += 4; return;
L_112a3e68:;
  /* 112a3e68 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a3e6b jne 0x112a3fcc */
  if (!C.zf) goto L_112a3fcc;
  /* 112a3e71 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3e74 mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a3e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3e7c push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3e7e push 0x112aeb00 */
  push32((uint32_t)(0x112aeb00u));
  /* 112a3e83 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3e84 call edi */
  call_ind((uint32_t)(EDI), 0x112a3e86u);
  /* 112a3e86 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3e89 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3e8b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3e8d push 0x112af1d8 */
  push32((uint32_t)(0x112af1d8u));
  /* 112a3e92 push edx */
  push32((uint32_t)(EDX));
  /* 112a3e93 call edi */
  call_ind((uint32_t)(EDI), 0x112a3e95u);
  /* 112a3e95 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3e98 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3e9a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3e9c push 0x112af1d0 */
  push32((uint32_t)(0x112af1d0u));
  /* 112a3ea1 push eax */
  push32((uint32_t)(EAX));
  /* 112a3ea2 call edi */
  call_ind((uint32_t)(EDI), 0x112a3ea4u);
  /* 112a3ea4 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3ea9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3eab push 0x112af1c8 */
  push32((uint32_t)(0x112af1c8u));
  /* 112a3eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3eb1 call edi */
  call_ind((uint32_t)(EDI), 0x112a3eb3u);
  /* 112a3eb3 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3eb6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3eb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3ebb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3ebd push 0x112af1c0 */
  push32((uint32_t)(0x112af1c0u));
  /* 112a3ec2 push edx */
  push32((uint32_t)(EDX));
  /* 112a3ec3 call edi */
  call_ind((uint32_t)(EDI), 0x112a3ec5u);
  /* 112a3ec5 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3eca push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a3ecf push 0x112af1a8 */
  push32((uint32_t)(0x112af1a8u));
  /* 112a3ed4 push eax */
  push32((uint32_t)(EAX));
  /* 112a3ed5 call edi */
  call_ind((uint32_t)(EDI), 0x112a3ed7u);
  /* 112a3ed7 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3eda push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3edc push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a3ee1 push 0x112af1a0 */
  push32((uint32_t)(0x112af1a0u));
  /* 112a3ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3ee7 call edi */
  call_ind((uint32_t)(EDI), 0x112a3ee9u);
  /* 112a3ee9 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3eec push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3eee push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a3ef3 push 0x112af198 */
  push32((uint32_t)(0x112af198u));
  /* 112a3ef8 push edx */
  push32((uint32_t)(EDX));
  /* 112a3ef9 call edi */
  call_ind((uint32_t)(EDI), 0x112a3efbu);
  /* 112a3efb mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3efe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3f01 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f03 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3f05 push 0x112af190 */
  push32((uint32_t)(0x112af190u));
  /* 112a3f0a push eax */
  push32((uint32_t)(EAX));
  /* 112a3f0b call edi */
  call_ind((uint32_t)(EDI), 0x112a3f0du);
  /* 112a3f0d mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3f10 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f12 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a3f17 push 0x112af188 */
  push32((uint32_t)(0x112af188u));
  /* 112a3f1c push ecx */
  push32((uint32_t)(ECX));
  /* 112a3f1d call edi */
  call_ind((uint32_t)(EDI), 0x112a3f1fu);
  /* 112a3f1f mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3f22 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f24 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 112a3f26 push 0x112af180 */
  push32((uint32_t)(0x112af180u));
  /* 112a3f2b push edx */
  push32((uint32_t)(EDX));
  /* 112a3f2c call edi */
  call_ind((uint32_t)(EDI), 0x112a3f2eu);
  /* 112a3f2e mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3f31 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f33 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 112a3f35 push 0x112ae3a0 */
  push32((uint32_t)(0x112ae3a0u));
  /* 112a3f3a push eax */
  push32((uint32_t)(EAX));
  /* 112a3f3b call edi */
  call_ind((uint32_t)(EDI), 0x112a3f3du);
  /* 112a3f3d mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3f40 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3f43 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f45 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3f47 push 0x112ae3a8 */
  push32((uint32_t)(0x112ae3a8u));
  /* 112a3f4c push ecx */
  push32((uint32_t)(ECX));
  /* 112a3f4d call edi */
  call_ind((uint32_t)(EDI), 0x112a3f4fu);
  /* 112a3f4f mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3f52 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f54 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3f56 push 0x112ae3b0 */
  push32((uint32_t)(0x112ae3b0u));
  /* 112a3f5b push edx */
  push32((uint32_t)(EDX));
  /* 112a3f5c call edi */
  call_ind((uint32_t)(EDI), 0x112a3f5eu);
  /* 112a3f5e mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3f61 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f63 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a3f65 push 0x112ae3b8 */
  push32((uint32_t)(0x112ae3b8u));
  /* 112a3f6a push eax */
  push32((uint32_t)(EAX));
  /* 112a3f6b call edi */
  call_ind((uint32_t)(EDI), 0x112a3f6du);
  /* 112a3f6d mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3f70 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3f74 push 0x112ae3c0 */
  push32((uint32_t)(0x112ae3c0u));
  /* 112a3f79 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3f7a call edi */
  call_ind((uint32_t)(EDI), 0x112a3f7cu);
  /* 112a3f7c mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3f7f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3f82 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f84 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a3f86 push 0x112ae378 */
  push32((uint32_t)(0x112ae378u));
  /* 112a3f8b push edx */
  push32((uint32_t)(EDX));
  /* 112a3f8c call edi */
  call_ind((uint32_t)(EDI), 0x112a3f8eu);
  /* 112a3f8e mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3f91 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a3f95 push 0x112ae380 */
  push32((uint32_t)(0x112ae380u));
  /* 112a3f9a push eax */
  push32((uint32_t)(EAX));
  /* 112a3f9b call edi */
  call_ind((uint32_t)(EDI), 0x112a3f9du);
  /* 112a3f9d mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3fa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3fa2 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a3fa4 push 0x112ae388 */
  push32((uint32_t)(0x112ae388u));
  /* 112a3fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3faa call edi */
  call_ind((uint32_t)(EDI), 0x112a3facu);
  /* 112a3fac mov edx, dword ptr [0x112ab05c] */
  EDX = (r32((uint32_t)(0x112ab05c)));
  /* 112a3fb2 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3fb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3fb7 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 112a3fbc mov eax, dword ptr [edx + 0x2ab] */
  EAX = (r32((uint32_t)(EDX + 0x2ab)));
  /* 112a3fc2 push eax */
  push32((uint32_t)(EAX));
  /* 112a3fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 112a3fc4 call edi */
  call_ind((uint32_t)(EDI), 0x112a3fc6u);
  /* 112a3fc6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a3fc9 pop edi */
  EDI = (pop32());
  /* 112a3fca pop esi */
  ESI = (pop32());
  /* 112a3fcb ret  */
  ESPCHK(0x112a3a10u, _esp0);
  ESP += 4; return;
L_112a3fcc:;
  /* 112a3fcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a3fce jne 0x112a412b */
  if (!C.zf) goto L_112a412b;
  /* 112a3fd4 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3fd7 mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a3fdd push eax */
  push32((uint32_t)(EAX));
  /* 112a3fde push 0x90 */
  push32((uint32_t)(0x90u));
  /* 112a3fe3 push 0x112ae388 */
  push32((uint32_t)(0x112ae388u));
  /* 112a3fe8 push edx */
  push32((uint32_t)(EDX));
  /* 112a3fe9 call edi */
  call_ind((uint32_t)(EDI), 0x112a3febu);
  /* 112a3feb mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a3fee push 2 */
  push32((uint32_t)(0x2u));
  /* 112a3ff0 push 0x90 */
  push32((uint32_t)(0x90u));
  /* 112a3ff5 push 0x112ae380 */
  push32((uint32_t)(0x112ae380u));
  /* 112a3ffa push eax */
  push32((uint32_t)(EAX));
  /* 112a3ffb call edi */
  call_ind((uint32_t)(EDI), 0x112a3ffdu);
  /* 112a3ffd mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4000 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4002 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a4007 push 0x112ae378 */
  push32((uint32_t)(0x112ae378u));
  /* 112a400c push ecx */
  push32((uint32_t)(ECX));
  /* 112a400d call edi */
  call_ind((uint32_t)(EDI), 0x112a400fu);
  /* 112a400f mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4012 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4014 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 112a4019 push 0x112ae3c0 */
  push32((uint32_t)(0x112ae3c0u));
  /* 112a401e push edx */
  push32((uint32_t)(EDX));
  /* 112a401f call edi */
  call_ind((uint32_t)(EDI), 0x112a4021u);
  /* 112a4021 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4024 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4027 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4029 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a402e push 0x112ae3b8 */
  push32((uint32_t)(0x112ae3b8u));
  /* 112a4033 push eax */
  push32((uint32_t)(EAX));
  /* 112a4034 call edi */
  call_ind((uint32_t)(EDI), 0x112a4036u);
  /* 112a4036 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4039 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a403b push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a4040 push 0x112ae3b0 */
  push32((uint32_t)(0x112ae3b0u));
  /* 112a4045 push ecx */
  push32((uint32_t)(ECX));
  /* 112a4046 call edi */
  call_ind((uint32_t)(EDI), 0x112a4048u);
  /* 112a4048 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a404b push 2 */
  push32((uint32_t)(0x2u));
  /* 112a404d push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 112a4052 push 0x112ae3a8 */
  push32((uint32_t)(0x112ae3a8u));
  /* 112a4057 push edx */
  push32((uint32_t)(EDX));
  /* 112a4058 call edi */
  call_ind((uint32_t)(EDI), 0x112a405au);
  /* 112a405a mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a405d push 2 */
  push32((uint32_t)(0x2u));
  /* 112a405f push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a4064 push 0x112ae3a0 */
  push32((uint32_t)(0x112ae3a0u));
  /* 112a4069 push eax */
  push32((uint32_t)(EAX));
  /* 112a406a call edi */
  call_ind((uint32_t)(EDI), 0x112a406cu);
  /* 112a406c mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a406f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4072 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4074 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a4079 push 0x112af180 */
  push32((uint32_t)(0x112af180u));
  /* 112a407e push ecx */
  push32((uint32_t)(ECX));
  /* 112a407f call edi */
  call_ind((uint32_t)(EDI), 0x112a4081u);
  /* 112a4081 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4084 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4086 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a408b push 0x112af188 */
  push32((uint32_t)(0x112af188u));
  /* 112a4090 push edx */
  push32((uint32_t)(EDX));
  /* 112a4091 call edi */
  call_ind((uint32_t)(EDI), 0x112a4093u);
  /* 112a4093 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4096 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4098 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a409a push 0x112af190 */
  push32((uint32_t)(0x112af190u));
  /* 112a409f push eax */
  push32((uint32_t)(EAX));
  /* 112a40a0 call edi */
  call_ind((uint32_t)(EDI), 0x112a40a2u);
  /* 112a40a2 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a40a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a40a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a40a9 push 0x112af198 */
  push32((uint32_t)(0x112af198u));
  /* 112a40ae push ecx */
  push32((uint32_t)(ECX));
  /* 112a40af call edi */
  call_ind((uint32_t)(EDI), 0x112a40b1u);
  /* 112a40b1 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a40b4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a40b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a40b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a40bb push 0x112af1a0 */
  push32((uint32_t)(0x112af1a0u));
  /* 112a40c0 push edx */
  push32((uint32_t)(EDX));
  /* 112a40c1 call edi */
  call_ind((uint32_t)(EDI), 0x112a40c3u);
  /* 112a40c3 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a40c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a40c8 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a40cd push 0x112af1a8 */
  push32((uint32_t)(0x112af1a8u));
  /* 112a40d2 push eax */
  push32((uint32_t)(EAX));
  /* 112a40d3 call edi */
  call_ind((uint32_t)(EDI), 0x112a40d5u);
  /* 112a40d5 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a40d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a40da push 0 */
  push32((uint32_t)(0x0u));
  /* 112a40dc push 0x112af1c0 */
  push32((uint32_t)(0x112af1c0u));
  /* 112a40e1 push ecx */
  push32((uint32_t)(ECX));
  /* 112a40e2 call edi */
  call_ind((uint32_t)(EDI), 0x112a40e4u);
  /* 112a40e4 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a40e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a40e9 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a40ee push 0x112af1b8 */
  push32((uint32_t)(0x112af1b8u));
  /* 112a40f3 push edx */
  push32((uint32_t)(EDX));
  /* 112a40f4 call edi */
  call_ind((uint32_t)(EDI), 0x112a40f6u);
  /* 112a40f6 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a40f9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a40fc push 2 */
  push32((uint32_t)(0x2u));
  /* 112a40fe push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a4103 push 0x112af1b0 */
  push32((uint32_t)(0x112af1b0u));
  /* 112a4108 push eax */
  push32((uint32_t)(EAX));
  /* 112a4109 call edi */
  call_ind((uint32_t)(EDI), 0x112a410bu);
  /* 112a410b mov ecx, dword ptr [0x112ab054] */
  ECX = (r32((uint32_t)(0x112ab054)));
  /* 112a4111 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4113 push 0xa0 */
  push32((uint32_t)(0xa0u));
L_112a4118:;
  /* 112a4118 mov edx, dword ptr [ecx + 0x2ab] */
  EDX = (r32((uint32_t)(ECX + 0x2ab)));
  /* 112a411e mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4121 push edx */
  push32((uint32_t)(EDX));
  /* 112a4122 push eax */
  push32((uint32_t)(EAX));
  /* 112a4123 call edi */
  call_ind((uint32_t)(EDI), 0x112a4125u);
  /* 112a4125 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4128 pop edi */
  EDI = (pop32());
  /* 112a4129 pop esi */
  ESI = (pop32());
  /* 112a412a ret  */
  ESPCHK(0x112a3a10u, _esp0);
  ESP += 4; return;
L_112a412b:;
  /* 112a412b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a412e jne 0x112a424a */
  if (!C.zf) goto L_112a424a;
  /* 112a4134 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4137 mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a413d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a413f push 0x90 */
  push32((uint32_t)(0x90u));
  /* 112a4144 push 0x112ae388 */
  push32((uint32_t)(0x112ae388u));
  /* 112a4149 push ecx */
  push32((uint32_t)(ECX));
  /* 112a414a call edi */
  call_ind((uint32_t)(EDI), 0x112a414cu);
  /* 112a414c mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a414f push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4151 push 0x90 */
  push32((uint32_t)(0x90u));
  /* 112a4156 push 0x112ae380 */
  push32((uint32_t)(0x112ae380u));
  /* 112a415b push edx */
  push32((uint32_t)(EDX));
  /* 112a415c call edi */
  call_ind((uint32_t)(EDI), 0x112a415eu);
  /* 112a415e mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4161 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4163 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a4168 push 0x112ae378 */
  push32((uint32_t)(0x112ae378u));
  /* 112a416d push eax */
  push32((uint32_t)(EAX));
  /* 112a416e call edi */
  call_ind((uint32_t)(EDI), 0x112a4170u);
  /* 112a4170 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4173 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4175 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 112a417a push 0x112ae3c0 */
  push32((uint32_t)(0x112ae3c0u));
  /* 112a417f push ecx */
  push32((uint32_t)(ECX));
  /* 112a4180 call edi */
  call_ind((uint32_t)(EDI), 0x112a4182u);
  /* 112a4182 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4185 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4188 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a418a push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a418f push 0x112ae3b8 */
  push32((uint32_t)(0x112ae3b8u));
  /* 112a4194 push edx */
  push32((uint32_t)(EDX));
  /* 112a4195 call edi */
  call_ind((uint32_t)(EDI), 0x112a4197u);
  /* 112a4197 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a419a push 2 */
  push32((uint32_t)(0x2u));
  /* 112a419c push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a41a1 push 0x112ae3b0 */
  push32((uint32_t)(0x112ae3b0u));
  /* 112a41a6 push eax */
  push32((uint32_t)(EAX));
  /* 112a41a7 call edi */
  call_ind((uint32_t)(EDI), 0x112a41a9u);
  /* 112a41a9 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a41ac push 2 */
  push32((uint32_t)(0x2u));
  /* 112a41ae push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 112a41b3 push 0x112ae3a8 */
  push32((uint32_t)(0x112ae3a8u));
  /* 112a41b8 push ecx */
  push32((uint32_t)(ECX));
  /* 112a41b9 call edi */
  call_ind((uint32_t)(EDI), 0x112a41bbu);
  /* 112a41bb mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a41be push 2 */
  push32((uint32_t)(0x2u));
  /* 112a41c0 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a41c5 push 0x112ae3a0 */
  push32((uint32_t)(0x112ae3a0u));
  /* 112a41ca push edx */
  push32((uint32_t)(EDX));
  /* 112a41cb call edi */
  call_ind((uint32_t)(EDI), 0x112a41cdu);
  /* 112a41cd mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a41d0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a41d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a41d5 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a41da push 0x112aead8 */
  push32((uint32_t)(0x112aead8u));
  /* 112a41df push eax */
  push32((uint32_t)(EAX));
  /* 112a41e0 call edi */
  call_ind((uint32_t)(EDI), 0x112a41e2u);
  /* 112a41e2 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a41e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a41e7 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a41ec push 0x112aeae0 */
  push32((uint32_t)(0x112aeae0u));
  /* 112a41f1 push ecx */
  push32((uint32_t)(ECX));
  /* 112a41f2 call edi */
  call_ind((uint32_t)(EDI), 0x112a41f4u);
  /* 112a41f4 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a41f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a41f9 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a41fe push 0x112aeae8 */
  push32((uint32_t)(0x112aeae8u));
  /* 112a4203 push edx */
  push32((uint32_t)(EDX));
  /* 112a4204 call edi */
  call_ind((uint32_t)(EDI), 0x112a4206u);
  /* 112a4206 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4209 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a420b push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a4210 push 0x112aeaf0 */
  push32((uint32_t)(0x112aeaf0u));
  /* 112a4215 push eax */
  push32((uint32_t)(EAX));
  /* 112a4216 call edi */
  call_ind((uint32_t)(EDI), 0x112a4218u);
  /* 112a4218 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a421b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a421e push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4220 push 0xb0 */
  push32((uint32_t)(0xb0u));
  /* 112a4225 push 0x112aeaf8 */
  push32((uint32_t)(0x112aeaf8u));
  /* 112a422a push ecx */
  push32((uint32_t)(ECX));
  /* 112a422b call edi */
  call_ind((uint32_t)(EDI), 0x112a422du);
  /* 112a422d mov edx, dword ptr [0x112ab058] */
  EDX = (r32((uint32_t)(0x112ab058)));
  /* 112a4233 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4235 push 0 */
  push32((uint32_t)(0x0u));
L_112a4237:;
  /* 112a4237 mov eax, dword ptr [edx + 0x2ab] */
  EAX = (r32((uint32_t)(EDX + 0x2ab)));
  /* 112a423d mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4240 push eax */
  push32((uint32_t)(EAX));
  /* 112a4241 push ecx */
  push32((uint32_t)(ECX));
  /* 112a4242 call edi */
  call_ind((uint32_t)(EDI), 0x112a4244u);
  /* 112a4244 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4247 pop edi */
  EDI = (pop32());
  /* 112a4248 pop esi */
  ESI = (pop32());
  /* 112a4249 ret  */
  ESPCHK(0x112a3a10u, _esp0);
  ESP += 4; return;
L_112a424a:;
  /* 112a424a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a424d jne 0x112a43ce */
  if (!C.zf) goto L_112a43ce;
  /* 112a4253 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4256 mov edi, dword ptr [0x112aa164] */
  EDI = (r32((uint32_t)(0x112aa164)));
  /* 112a425c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a425e push 0x90 */
  push32((uint32_t)(0x90u));
  /* 112a4263 push 0x112ae388 */
  push32((uint32_t)(0x112ae388u));
  /* 112a4268 push edx */
  push32((uint32_t)(EDX));
  /* 112a4269 call edi */
  call_ind((uint32_t)(EDI), 0x112a426bu);
  /* 112a426b mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a426e push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4270 push 0x90 */
  push32((uint32_t)(0x90u));
  /* 112a4275 push 0x112ae380 */
  push32((uint32_t)(0x112ae380u));
  /* 112a427a push eax */
  push32((uint32_t)(EAX));
  /* 112a427b call edi */
  call_ind((uint32_t)(EDI), 0x112a427du);
  /* 112a427d mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4280 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4282 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 112a4287 push 0x112ae378 */
  push32((uint32_t)(0x112ae378u));
  /* 112a428c push ecx */
  push32((uint32_t)(ECX));
  /* 112a428d call edi */
  call_ind((uint32_t)(EDI), 0x112a428fu);
  /* 112a428f mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4292 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4294 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 112a4299 push 0x112ae3c0 */
  push32((uint32_t)(0x112ae3c0u));
  /* 112a429e push edx */
  push32((uint32_t)(EDX));
  /* 112a429f call edi */
  call_ind((uint32_t)(EDI), 0x112a42a1u);
  /* 112a42a1 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a42a4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a42a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a42a9 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a42ae push 0x112ae3b8 */
  push32((uint32_t)(0x112ae3b8u));
  /* 112a42b3 push eax */
  push32((uint32_t)(EAX));
  /* 112a42b4 call edi */
  call_ind((uint32_t)(EDI), 0x112a42b6u);
  /* 112a42b6 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a42b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a42bb push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a42c0 push 0x112ae3b0 */
  push32((uint32_t)(0x112ae3b0u));
  /* 112a42c5 push ecx */
  push32((uint32_t)(ECX));
  /* 112a42c6 call edi */
  call_ind((uint32_t)(EDI), 0x112a42c8u);
  /* 112a42c8 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a42cb push 2 */
  push32((uint32_t)(0x2u));
  /* 112a42cd push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 112a42d2 push 0x112ae3a8 */
  push32((uint32_t)(0x112ae3a8u));
  /* 112a42d7 push edx */
  push32((uint32_t)(EDX));
  /* 112a42d8 call edi */
  call_ind((uint32_t)(EDI), 0x112a42dau);
  /* 112a42da mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a42dd push 2 */
  push32((uint32_t)(0x2u));
  /* 112a42df push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a42e4 push 0x112ae3a0 */
  push32((uint32_t)(0x112ae3a0u));
  /* 112a42e9 push eax */
  push32((uint32_t)(EAX));
  /* 112a42ea call edi */
  call_ind((uint32_t)(EDI), 0x112a42ecu);
  /* 112a42ec mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a42ef add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a42f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a42f4 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a42f9 push 0x112af180 */
  push32((uint32_t)(0x112af180u));
  /* 112a42fe push ecx */
  push32((uint32_t)(ECX));
  /* 112a42ff call edi */
  call_ind((uint32_t)(EDI), 0x112a4301u);
  /* 112a4301 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4304 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4306 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 112a430b push 0x112af188 */
  push32((uint32_t)(0x112af188u));
  /* 112a4310 push edx */
  push32((uint32_t)(EDX));
  /* 112a4311 call edi */
  call_ind((uint32_t)(EDI), 0x112a4313u);
  /* 112a4313 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4316 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4318 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a431a push 0x112af190 */
  push32((uint32_t)(0x112af190u));
  /* 112a431f push eax */
  push32((uint32_t)(EAX));
  /* 112a4320 call edi */
  call_ind((uint32_t)(EDI), 0x112a4322u);
  /* 112a4322 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4325 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4327 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a4329 push 0x112af198 */
  push32((uint32_t)(0x112af198u));
  /* 112a432e push ecx */
  push32((uint32_t)(ECX));
  /* 112a432f call edi */
  call_ind((uint32_t)(EDI), 0x112a4331u);
  /* 112a4331 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4334 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4337 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4339 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a433b push 0x112af1a0 */
  push32((uint32_t)(0x112af1a0u));
  /* 112a4340 push edx */
  push32((uint32_t)(EDX));
  /* 112a4341 call edi */
  call_ind((uint32_t)(EDI), 0x112a4343u);
  /* 112a4343 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4346 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4348 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a434d push 0x112af1a8 */
  push32((uint32_t)(0x112af1a8u));
  /* 112a4352 push eax */
  push32((uint32_t)(EAX));
  /* 112a4353 call edi */
  call_ind((uint32_t)(EDI), 0x112a4355u);
  /* 112a4355 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4358 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a435a push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a435f push 0x112af1c0 */
  push32((uint32_t)(0x112af1c0u));
  /* 112a4364 push ecx */
  push32((uint32_t)(ECX));
  /* 112a4365 call edi */
  call_ind((uint32_t)(EDI), 0x112a4367u);
  /* 112a4367 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a436a push 2 */
  push32((uint32_t)(0x2u));
  /* 112a436c push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a4371 push 0x112af1c8 */
  push32((uint32_t)(0x112af1c8u));
  /* 112a4376 push edx */
  push32((uint32_t)(EDX));
  /* 112a4377 call edi */
  call_ind((uint32_t)(EDI), 0x112a4379u);
  /* 112a4379 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a437c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a437f push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4381 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a4386 push 0x112af1d0 */
  push32((uint32_t)(0x112af1d0u));
  /* 112a438b push eax */
  push32((uint32_t)(EAX));
  /* 112a438c call edi */
  call_ind((uint32_t)(EDI), 0x112a438eu);
  /* 112a438e mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a4391 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4393 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 112a4398 push 0x112af1d8 */
  push32((uint32_t)(0x112af1d8u));
  /* 112a439d push ecx */
  push32((uint32_t)(ECX));
  /* 112a439e call edi */
  call_ind((uint32_t)(EDI), 0x112a43a0u);
  /* 112a43a0 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a43a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a43a5 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 112a43aa push 0x112aeb00 */
  push32((uint32_t)(0x112aeb00u));
  /* 112a43af push edx */
  push32((uint32_t)(EDX));
  /* 112a43b0 call edi */
  call_ind((uint32_t)(EDI), 0x112a43b2u);
  /* 112a43b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a43b4 push 0xa0 */
  push32((uint32_t)(0xa0u));
L_112a43b9:;
  /* 112a43b9 mov eax, dword ptr [0x112ab060] */
  EAX = (r32((uint32_t)(0x112ab060)));
  /* 112a43be mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 112a43c1 mov ecx, dword ptr [eax + 0x2ab] */
  ECX = (r32((uint32_t)(EAX + 0x2ab)));
  /* 112a43c7 push ecx */
  push32((uint32_t)(ECX));
  /* 112a43c8 push edx */
  push32((uint32_t)(EDX));
  /* 112a43c9 call edi */
  call_ind((uint32_t)(EDI), 0x112a43cbu);
  /* 112a43cb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a43ce:;
  /* 112a43ce pop edi */
  EDI = (pop32());
  /* 112a43cf pop esi */
  ESI = (pop32());
  /* 112a43d0 ret  */
  ESPCHK(0x112a3a10u, _esp0);
  ESP += 4; return;
}

/* FUN_100043f0 @ 0x112a43f0 (11 bytes, 4 insns) */
void f_112a43f0(void) {
  FTRACE(0x112a43f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a43f0 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 112a43f4 call 0x112a4b8b */
  push32(0x112a43f9u); f_112a4b8b();
  /* 112a43f9 pop ecx */
  ECX = (pop32());
  /* 112a43fa ret  */
  ESPCHK(0x112a43f0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x112a4400 (254 bytes, 109 insns) */
void f_112a4400(void) {
  FTRACE(0x112a4400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4400 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 112a4404 push edi */
  push32((uint32_t)(EDI));
  /* 112a4405 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112a4407 je 0x112a4483 */
  if (C.zf) goto L_112a4483;
  /* 112a4409 push esi */
  push32((uint32_t)(ESI));
  /* 112a440a push ebx */
  push32((uint32_t)(EBX));
  /* 112a440b mov ebx, ecx */
  EBX = (ECX);
  /* 112a440d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 112a4411 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 112a4417 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 112a441b jne 0x112a4424 */
  if (!C.zf) goto L_112a4424;
  /* 112a441d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a4420 jne 0x112a4491 */
  if (!C.zf) goto L_112a4491;
  /* 112a4422 jmp 0x112a4445 */
  goto L_112a4445;
L_112a4424:;
  /* 112a4424 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a4426 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a4427 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a4429 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a442a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a442b je 0x112a4452 */
  if (C.zf) goto L_112a4452;
  /* 112a442d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a442f je 0x112a445a */
  if (C.zf) goto L_112a445a;
  /* 112a4431 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 112a4437 jne 0x112a4424 */
  if (!C.zf) goto L_112a4424;
  /* 112a4439 mov ebx, ecx */
  EBX = (ECX);
  /* 112a443b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a443e jne 0x112a4491 */
  if (!C.zf) goto L_112a4491;
L_112a4440:;
  /* 112a4440 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 112a4443 je 0x112a4452 */
  if (C.zf) goto L_112a4452;
L_112a4445:;
  /* 112a4445 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a4447 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a4448 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a444a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a444b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a444d je 0x112a447e */
  if (C.zf) goto L_112a447e;
  /* 112a444f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112a4450 jne 0x112a4445 */
  if (!C.zf) goto L_112a4445;
L_112a4452:;
  /* 112a4452 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112a4456 pop ebx */
  EBX = (pop32());
  /* 112a4457 pop esi */
  ESI = (pop32());
  /* 112a4458 pop edi */
  EDI = (pop32());
  /* 112a4459 ret  */
  ESPCHK(0x112a4400u, _esp0);
  ESP += 4; return;
L_112a445a:;
  /* 112a445a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112a4460 je 0x112a4474 */
  if (C.zf) goto L_112a4474;
L_112a4462:;
  /* 112a4462 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a4464 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a4465 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a4466 je 0x112a44f6 */
  if (C.zf) goto L_112a44f6;
  /* 112a446c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112a4472 jne 0x112a4462 */
  if (!C.zf) goto L_112a4462;
L_112a4474:;
  /* 112a4474 mov ebx, ecx */
  EBX = (ECX);
  /* 112a4476 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a4479 jne 0x112a44e7 */
  if (!C.zf) goto L_112a44e7;
L_112a447b:;
  /* 112a447b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a447d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_112a447e:;
  /* 112a447e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112a447f jne 0x112a447b */
  if (!C.zf) goto L_112a447b;
  /* 112a4481 pop ebx */
  EBX = (pop32());
  /* 112a4482 pop esi */
  ESI = (pop32());
L_112a4483:;
  /* 112a4483 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4487 pop edi */
  EDI = (pop32());
  /* 112a4488 ret  */
  ESPCHK(0x112a4400u, _esp0);
  ESP += 4; return;
L_112a4489:;
  /* 112a4489 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112a448b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a448e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a448f je 0x112a4440 */
  if (C.zf) goto L_112a4440;
L_112a4491:;
  /* 112a4491 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 112a4496 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112a4498 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a449a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a449d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 112a449f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 112a44a1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a44a4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 112a44a9 je 0x112a4489 */
  if (C.zf) goto L_112a4489;
  /* 112a44ab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a44ad je 0x112a44db */
  if (C.zf) goto L_112a44db;
  /* 112a44af test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 112a44b1 je 0x112a44d1 */
  if (C.zf) goto L_112a44d1;
  /* 112a44b3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 112a44b9 je 0x112a44c7 */
  if (C.zf) goto L_112a44c7;
  /* 112a44bb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 112a44c1 jne 0x112a4489 */
  if (!C.zf) goto L_112a4489;
  /* 112a44c3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112a44c5 jmp 0x112a44df */
  goto L_112a44df;
L_112a44c7:;
  /* 112a44c7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 112a44cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112a44cf jmp 0x112a44df */
  goto L_112a44df;
L_112a44d1:;
  /* 112a44d1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 112a44d7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 112a44d9 jmp 0x112a44df */
  goto L_112a44df;
L_112a44db:;
  /* 112a44db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112a44dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_112a44df:;
  /* 112a44df add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a44e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a44e4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a44e5 je 0x112a44f1 */
  if (C.zf) goto L_112a44f1;
L_112a44e7:;
  /* 112a44e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a44e9:;
  /* 112a44e9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 112a44eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a44ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a44ef jne 0x112a44e9 */
  if (!C.zf) goto L_112a44e9;
L_112a44f1:;
  /* 112a44f1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 112a44f4 jne 0x112a447b */
  if (!C.zf) goto L_112a447b;
L_112a44f6:;
  /* 112a44f6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 112a44fa pop ebx */
  EBX = (pop32());
  /* 112a44fb pop esi */
  ESI = (pop32());
  /* 112a44fc pop edi */
  EDI = (pop32());
  /* 112a44fd ret  */
  ESPCHK(0x112a4400u, _esp0);
  ESP += 4; return;
}

/* FUN_10004500 @ 0x112a4500 (62 bytes, 35 insns) */
void f_112a4500(void) {
  FTRACE(0x112a4500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4500 push ebp */
  push32((uint32_t)(EBP));
  /* 112a4501 mov ebp, esp */
  EBP = (ESP);
  /* 112a4503 push esi */
  push32((uint32_t)(ESI));
  /* 112a4504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a4506 push eax */
  push32((uint32_t)(EAX));
  /* 112a4507 push eax */
  push32((uint32_t)(EAX));
  /* 112a4508 push eax */
  push32((uint32_t)(EAX));
  /* 112a4509 push eax */
  push32((uint32_t)(EAX));
  /* 112a450a push eax */
  push32((uint32_t)(EAX));
  /* 112a450b push eax */
  push32((uint32_t)(EAX));
  /* 112a450c push eax */
  push32((uint32_t)(EAX));
  /* 112a450d push eax */
  push32((uint32_t)(EAX));
  /* 112a450e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a4511 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a4514:;
  /* 112a4514 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 112a4516 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112a4518 je 0x112a4521 */
  if (C.zf) goto L_112a4521;
  /* 112a451a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112a451b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x112a451b");
  /* 112a451f jmp 0x112a4514 */
  goto L_112a4514;
L_112a4521:;
  /* 112a4521 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a4524 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a4527 nop  */
  /* nop */
L_112a4528:;
  /* 112a4528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a4529 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a452b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 112a452d je 0x112a4536 */
  if (C.zf) goto L_112a4536;
  /* 112a452f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a4530 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x112a4530");
  /* 112a4534 jae 0x112a4528 */
  if (!C.cf) goto L_112a4528;
L_112a4536:;
  /* 112a4536 mov eax, ecx */
  EAX = (ECX);
  /* 112a4538 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a453b pop esi */
  ESI = (pop32());
  /* 112a453c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a453d ret  */
  ESPCHK(0x112a4500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004540 @ 0x112a4540 (133 bytes, 68 insns) */
void f_112a4540(void) {
  FTRACE(0x112a4540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4540 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4544 push edi */
  push32((uint32_t)(EDI));
  /* 112a4545 push ebx */
  push32((uint32_t)(EBX));
  /* 112a4546 push esi */
  push32((uint32_t)(ESI));
  /* 112a4547 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 112a4549 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 112a454d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a454f je 0x112a45ba */
  if (C.zf) goto L_112a45ba;
  /* 112a4551 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 112a4554 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 112a4556 je 0x112a45a7 */
  if (C.zf) goto L_112a45a7;
L_112a4558:;
  /* 112a4558 mov esi, edi */
  ESI = (EDI);
  /* 112a455a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a455e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 112a4560 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a4561 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a4563 je 0x112a457a */
  if (C.zf) goto L_112a457a;
  /* 112a4565 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a4567 je 0x112a4574 */
  if (C.zf) goto L_112a4574;
L_112a4569:;
  /* 112a4569 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a456b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_112a456c:;
  /* 112a456c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a456e je 0x112a457a */
  if (C.zf) goto L_112a457a;
  /* 112a4570 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a4572 jne 0x112a4569 */
  if (!C.zf) goto L_112a4569;
L_112a4574:;
  /* 112a4574 pop esi */
  ESI = (pop32());
  /* 112a4575 pop ebx */
  EBX = (pop32());
  /* 112a4576 pop edi */
  EDI = (pop32());
  /* 112a4577 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a4579 ret  */
  ESPCHK(0x112a4540u, _esp0);
  ESP += 4; return;
L_112a457a:;
  /* 112a457a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a457c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a457d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a457f jne 0x112a456c */
  if (!C.zf) goto L_112a456c;
  /* 112a4581 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_112a4584:;
  /* 112a4584 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 112a4587 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112a4589 je 0x112a45b3 */
  if (C.zf) goto L_112a45b3;
  /* 112a458b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a458d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4590 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a4592 jne 0x112a4558 */
  if (!C.zf) goto L_112a4558;
  /* 112a4594 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 112a4597 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a4599 je 0x112a45b3 */
  if (C.zf) goto L_112a45b3;
  /* 112a459b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 112a459e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a45a1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a45a3 je 0x112a4584 */
  if (C.zf) goto L_112a4584;
  /* 112a45a5 jmp 0x112a4558 */
  goto L_112a4558;
L_112a45a7:;
  /* 112a45a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a45a9 pop esi */
  ESI = (pop32());
  /* 112a45aa pop ebx */
  EBX = (pop32());
  /* 112a45ab pop edi */
  EDI = (pop32());
  /* 112a45ac mov al, dl */
  AL = (DL);
  /* 112a45ae jmp 0x112a4c96 */
  jmp_ind(0x112a4c96u); return;
L_112a45b3:;
  /* 112a45b3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 112a45b6 pop esi */
  ESI = (pop32());
  /* 112a45b7 pop ebx */
  EBX = (pop32());
  /* 112a45b8 pop edi */
  EDI = (pop32());
  /* 112a45b9 ret  */
  ESPCHK(0x112a4540u, _esp0);
  ESP += 4; return;
L_112a45ba:;
  /* 112a45ba mov eax, edi */
  EAX = (EDI);
  /* 112a45bc pop esi */
  ESI = (pop32());
  /* 112a45bd pop ebx */
  EBX = (pop32());
  /* 112a45be pop edi */
  EDI = (pop32());
  /* 112a45bf ret  */
  ESPCHK(0x112a4540u, _esp0);
  ESP += 4; return;
  /* 112a45c0 push esi */
  push32((uint32_t)(ESI));
  /* 112a45c1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
}

/* FUN_100045c0 @ 0x112a45c0 (49 bytes, 20 insns) */
void f_112a45c0(void) {
  FTRACE(0x112a45c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a45c0 push esi */
  push32((uint32_t)(ESI));
  /* 112a45c1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a45c5 push edi */
  push32((uint32_t)(EDI));
  /* 112a45c6 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 112a45c9 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 112a45cd je 0x112a45d5 */
  if (C.zf) goto L_112a45d5;
  /* 112a45cf and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 112a45d3 jmp 0x112a45ec */
  goto L_112a45ec;
L_112a45d5:;
  /* 112a45d5 push esi */
  push32((uint32_t)(ESI));
  /* 112a45d6 call 0x112a4e08 */
  push32(0x112a45dbu); f_112a4e08();
  /* 112a45db push esi */
  push32((uint32_t)(ESI));
  /* 112a45dc call 0x112a45f1 */
  push32(0x112a45e1u); f_112a45f1();
  /* 112a45e1 push esi */
  push32((uint32_t)(ESI));
  /* 112a45e2 mov edi, eax */
  EDI = (EAX);
  /* 112a45e4 call 0x112a4e5a */
  push32(0x112a45e9u); f_112a4e5a();
  /* 112a45e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a45ec:;
  /* 112a45ec mov eax, edi */
  EAX = (EDI);
  /* 112a45ee pop edi */
  EDI = (pop32());
  /* 112a45ef pop esi */
  ESI = (pop32());
  /* 112a45f0 ret  */
  ESPCHK(0x112a45c0u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x112a45f1 (76 bytes, 30 insns) */
void f_112a45f1(void) {
  FTRACE(0x112a45f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a45f1 push esi */
  push32((uint32_t)(ESI));
  /* 112a45f2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a45f6 push edi */
  push32((uint32_t)(EDI));
  /* 112a45f7 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 112a45fa test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 112a45fe je 0x112a4634 */
  if (C.zf) goto L_112a4634;
  /* 112a4600 push esi */
  push32((uint32_t)(ESI));
  /* 112a4601 call 0x112a4fe5 */
  push32(0x112a4606u); f_112a4fe5();
  /* 112a4606 push esi */
  push32((uint32_t)(ESI));
  /* 112a4607 mov edi, eax */
  EDI = (EAX);
  /* 112a4609 call 0x112a4f8c */
  push32(0x112a460eu); f_112a4f8c();
  /* 112a460e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 112a4611 call 0x112a4eac */
  push32(0x112a4616u); f_112a4eac();
  /* 112a4616 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a461b jge 0x112a4622 */
  if ((C.sf==C.of)) goto L_112a4622;
  /* 112a461d or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 112a4620 jmp 0x112a4634 */
  goto L_112a4634;
L_112a4622:;
  /* 112a4622 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 112a4625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4627 je 0x112a4634 */
  if (C.zf) goto L_112a4634;
  /* 112a4629 push eax */
  push32((uint32_t)(EAX));
  /* 112a462a call 0x112a4b8b */
  push32(0x112a462fu); f_112a4b8b();
  /* 112a462f and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 112a4633 pop ecx */
  ECX = (pop32());
L_112a4634:;
  /* 112a4634 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 112a4638 mov eax, edi */
  EAX = (EDI);
  /* 112a463a pop edi */
  EDI = (pop32());
  /* 112a463b pop esi */
  ESI = (pop32());
  /* 112a463c ret  */
  ESPCHK(0x112a45f1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000463d @ 0x112a463d (47 bytes, 18 insns) */
void f_112a463d(void) {
  FTRACE(0x112a463du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a463d push ebp */
  push32((uint32_t)(EBP));
  /* 112a463e mov ebp, esp */
  EBP = (ESP);
  /* 112a4640 push esi */
  push32((uint32_t)(ESI));
  /* 112a4641 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112a4644 call 0x112a4e08 */
  push32(0x112a4649u); f_112a4e08();
  /* 112a4649 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112a464c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a464f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a4652 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a4655 call 0x112a466c */
  push32(0x112a465au); f_112a466c();
  /* 112a465a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 112a465d mov esi, eax */
  ESI = (EAX);
  /* 112a465f call 0x112a4e5a */
  push32(0x112a4664u); f_112a4e5a();
  /* 112a4664 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4667 mov eax, esi */
  EAX = (ESI);
  /* 112a4669 pop esi */
  ESI = (pop32());
  /* 112a466a pop ebp */
  EBP = (pop32());
  /* 112a466b ret  */
  ESPCHK(0x112a463du, _esp0);
  ESP += 4; return;
}

/* FUN_1000466c @ 0x112a466c (232 bytes, 92 insns) */
void f_112a466c(void) {
  FTRACE(0x112a466cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a466c push ebp */
  push32((uint32_t)(EBP));
  /* 112a466d mov ebp, esp */
  EBP = (ESP);
  /* 112a466f push ecx */
  push32((uint32_t)(ECX));
  /* 112a4670 push ebx */
  push32((uint32_t)(EBX));
  /* 112a4671 push esi */
  push32((uint32_t)(ESI));
  /* 112a4672 push edi */
  push32((uint32_t)(EDI));
  /* 112a4673 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a4676 imul edi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a467a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a467d mov ecx, edi */
  ECX = (EDI);
  /* 112a467f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a4681 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 112a4684 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 112a4687 jne 0x112a4690 */
  if (!C.zf) goto L_112a4690;
  /* 112a4689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a468b jmp 0x112a4739 */
  goto L_112a4739;
L_112a4690:;
  /* 112a4690 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 112a4693 test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 112a4699 je 0x112a46a3 */
  if (C.zf) goto L_112a46a3;
  /* 112a469b mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 112a469e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 112a46a1 jmp 0x112a46af */
  goto L_112a46af;
L_112a46a3:;
  /* 112a46a3 mov dword ptr [ebp + 0x14], 0x1000 */
  w32((uint32_t)(EBP + 0x14), (0x1000u));
  /* 112a46aa jmp 0x112a46af */
  goto L_112a46af;
L_112a46ac:;
  /* 112a46ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
L_112a46af:;
  /* 112a46af test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 112a46b5 je 0x112a46e1 */
  if (C.zf) goto L_112a46e1;
  /* 112a46b7 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 112a46ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a46bc je 0x112a46e1 */
  if (C.zf) goto L_112a46e1;
  /* 112a46be cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a46c0 mov edi, ecx */
  EDI = (ECX);
  /* 112a46c2 jb 0x112a46c6 */
  if (C.cf) goto L_112a46c6;
  /* 112a46c4 mov edi, eax */
  EDI = (EAX);
L_112a46c6:;
  /* 112a46c6 push edi */
  push32((uint32_t)(EDI));
  /* 112a46c7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112a46c9 push ebx */
  push32((uint32_t)(EBX));
  /* 112a46ca call 0x112a5410 */
  push32(0x112a46cfu); f_112a5410();
  /* 112a46cf sub dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a46d2 sub dword ptr [esi + 4], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EDI),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a46d5 add dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a46d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a46da add ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a46dc mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 112a46df jmp 0x112a472c */
  goto L_112a472c;
L_112a46e1:;
  /* 112a46e1 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a46e4 jb 0x112a4714 */
  if (C.cf) goto L_112a4714;
  /* 112a46e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a46ea mov eax, ecx */
  EAX = (ECX);
  /* 112a46ec je 0x112a46f7 */
  if (C.zf) goto L_112a46f7;
  /* 112a46ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112a46f0 div dword ptr [ebp + 0x14] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x14))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a46f3 mov eax, ecx */
  EAX = (ECX);
  /* 112a46f5 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_112a46f7:;
  /* 112a46f7 push eax */
  push32((uint32_t)(EAX));
  /* 112a46f8 push ebx */
  push32((uint32_t)(EBX));
  /* 112a46f9 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 112a46fc call 0x112a51ca */
  push32(0x112a4701u); f_112a51ca();
  /* 112a4701 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4704 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4706 je 0x112a473e */
  if (C.zf) goto L_112a473e;
  /* 112a4708 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a470b je 0x112a4744 */
  if (C.zf) goto L_112a4744;
  /* 112a470d sub dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a4710 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4712 jmp 0x112a472c */
  goto L_112a472c;
L_112a4714:;
  /* 112a4714 push esi */
  push32((uint32_t)(ESI));
  /* 112a4715 call 0x112a50ee */
  push32(0x112a471au); f_112a50ee();
  /* 112a471a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a471d pop ecx */
  ECX = (pop32());
  /* 112a471e je 0x112a4748 */
  if (C.zf) goto L_112a4748;
  /* 112a4720 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 112a4722 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 112a4725 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a4726 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 112a4729 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_112a472c:;
  /* 112a472c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4730 jne 0x112a46ac */
  if (!C.zf) goto L_112a46ac;
  /* 112a4736 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
L_112a4739:;
  /* 112a4739 pop edi */
  EDI = (pop32());
  /* 112a473a pop esi */
  ESI = (pop32());
  /* 112a473b pop ebx */
  EBX = (pop32());
  /* 112a473c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a473d ret  */
  ESPCHK(0x112a466cu, _esp0);
  ESP += 4; return;
L_112a473e:;
  /* 112a473e or dword ptr [esi + 0xc], 0x10 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x10u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 112a4742 jmp 0x112a4748 */
  goto L_112a4748;
L_112a4744:;
  /* 112a4744 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
L_112a4748:;
  /* 112a4748 mov eax, edi */
  EAX = (EDI);
  /* 112a474a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112a474c sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a474f div dword ptr [ebp + 0xc] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 112a4752 jmp 0x112a4739 */
  goto L_112a4739;
}

/* operator_new @ 0x112a4754 (14 bytes, 6 insns) */
void f_112a4754(void) {
  FTRACE(0x112a4754u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4754 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a4756 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 112a475a call 0x112a5757 */
  push32(0x112a475fu); f_112a5757();
  /* 112a475f pop ecx */
  ECX = (pop32());
  /* 112a4760 pop ecx */
  ECX = (pop32());
  /* 112a4761 ret  */
  ESPCHK(0x112a4754u, _esp0);
  ESP += 4; return;
}

/* FUN_10004762 @ 0x112a4762 (34 bytes, 15 insns) */
void f_112a4762(void) {
  FTRACE(0x112a4762u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4762 push esi */
  push32((uint32_t)(ESI));
  /* 112a4763 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4767 push edi */
  push32((uint32_t)(EDI));
  /* 112a4768 push esi */
  push32((uint32_t)(ESI));
  /* 112a4769 call 0x112a4e08 */
  push32(0x112a476eu); f_112a4e08();
  /* 112a476e push esi */
  push32((uint32_t)(ESI));
  /* 112a476f call 0x112a4784 */
  push32(0x112a4774u); f_112a4784();
  /* 112a4774 push esi */
  push32((uint32_t)(ESI));
  /* 112a4775 mov edi, eax */
  EDI = (EAX);
  /* 112a4777 call 0x112a4e5a */
  push32(0x112a477cu); f_112a4e5a();
  /* 112a477c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a477f mov eax, edi */
  EAX = (EDI);
  /* 112a4781 pop edi */
  EDI = (pop32());
  /* 112a4782 pop esi */
  ESI = (pop32());
  /* 112a4783 ret  */
  ESPCHK(0x112a4762u, _esp0);
  ESP += 4; return;
}

/* FUN_10004784 @ 0x112a4784 (353 bytes, 127 insns) */
void f_112a4784(void) {
  FTRACE(0x112a4784u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4784 push ebp */
  push32((uint32_t)(EBP));
  /* 112a4785 mov ebp, esp */
  EBP = (ESP);
  /* 112a4787 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a478a push ebx */
  push32((uint32_t)(EBX));
  /* 112a478b push esi */
  push32((uint32_t)(ESI));
  /* 112a478c push edi */
  push32((uint32_t)(EDI));
  /* 112a478d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a4790 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a4792 mov esi, dword ptr [edi + 0x10] */
  ESI = (r32((uint32_t)(EDI + 0x10)));
  /* 112a4795 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4798 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 112a479b jge 0x112a47a0 */
  if ((C.sf==C.of)) goto L_112a47a0;
  /* 112a479d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_112a47a0:;
  /* 112a47a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a47a2 push ebx */
  push32((uint32_t)(EBX));
  /* 112a47a3 push esi */
  push32((uint32_t)(ESI));
  /* 112a47a4 call 0x112a5b14 */
  push32(0x112a47a9u); f_112a5b14();
  /* 112a47a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a47ac cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a47ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112a47b1 jl 0x112a4812 */
  if ((C.sf!=C.of)) goto L_112a4812;
  /* 112a47b3 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 112a47b6 test cx, 0x108 */
  { uint32_t _r=(CX)&(0x108u); fl_logic(_r,16); }
  /* 112a47bb jne 0x112a47c5 */
  if (!C.zf) goto L_112a47c5;
  /* 112a47bd sub eax, dword ptr [edi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a47c0 jmp 0x112a48e0 */
  goto L_112a48e0;
L_112a47c5:;
  /* 112a47c5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a47c7 mov edx, dword ptr [edi + 8] */
  EDX = (r32((uint32_t)(EDI + 0x8)));
  /* 112a47ca mov ebx, eax */
  EBX = (EAX);
  /* 112a47cc sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a47ce test cl, 3 */
  { uint32_t _r=(CL)&(0x3u); fl_logic(_r,8); }
  /* 112a47d1 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 112a47d4 je 0x112a4802 */
  if (C.zf) goto L_112a4802;
  /* 112a47d6 mov ebx, esi */
  EBX = (ESI);
  /* 112a47d8 mov ecx, esi */
  ECX = (ESI);
  /* 112a47da sar ebx, 5 */
  EBX = (sh_sar((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 112a47dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112a47e0 mov ebx, dword ptr [ebx*4 + 0x112af840] */
  EBX = (r32((uint32_t)(EBX*4 + 0x112af840)));
  /* 112a47e7 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 112a47ea test byte ptr [ebx + ecx*4 + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBX + ECX*4 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 112a47ef je 0x112a481a */
  if (C.zf) goto L_112a481a;
  /* 112a47f1 mov ecx, edx */
  ECX = (EDX);
L_112a47f3:;
  /* 112a47f3 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a47f5 jae 0x112a481a */
  if (!C.cf) goto L_112a481a;
  /* 112a47f7 cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a47fa jne 0x112a47ff */
  if (!C.zf) goto L_112a47ff;
  /* 112a47fc inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_112a47ff:;
  /* 112a47ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a4800 jmp 0x112a47f3 */
  goto L_112a47f3;
L_112a4802:;
  /* 112a4802 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 112a4805 jne 0x112a481a */
  if (!C.zf) goto L_112a481a;
  /* 112a4807 call 0x112a58f2 */
  push32(0x112a480cu); f_112a58f2();
  /* 112a480c mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_112a4812:;
  /* 112a4812 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a4815 jmp 0x112a48e0 */
  goto L_112a48e0;
L_112a481a:;
  /* 112a481a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a481e jne 0x112a4828 */
  if (!C.zf) goto L_112a4828;
  /* 112a4820 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a4823 jmp 0x112a48e0 */
  goto L_112a48e0;
L_112a4828:;
  /* 112a4828 test byte ptr [edi + 0xc], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xc)))&(0x1u); fl_logic(_r,8); }
  /* 112a482c je 0x112a48d8 */
  if (C.zf) goto L_112a48d8;
  /* 112a4832 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 112a4835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112a4837 jne 0x112a4841 */
  if (!C.zf) goto L_112a4841;
  /* 112a4839 and dword ptr [ebp - 8], ecx */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(ECX); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 112a483c jmp 0x112a48d8 */
  goto L_112a48d8;
L_112a4841:;
  /* 112a4841 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a4843 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4845 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112a4848 mov eax, esi */
  EAX = (ESI);
  /* 112a484a sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112a484d lea ebx, [eax*4 + 0x112af840] */
  EBX = ((uint32_t)(EAX*4 + 0x112af840));
  /* 112a4854 mov eax, esi */
  EAX = (ESI);
  /* 112a4856 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a4859 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 112a485c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 112a485e shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 112a4861 test byte ptr [esi + eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 112a4866 je 0x112a48d2 */
  if (C.zf) goto L_112a48d2;
  /* 112a4868 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a486a push 0 */
  push32((uint32_t)(0x0u));
  /* 112a486c push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 112a486f call 0x112a5b14 */
  push32(0x112a4874u); f_112a5b14();
  /* 112a4874 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4877 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a487a jne 0x112a4899 */
  if (!C.zf) goto L_112a4899;
  /* 112a487c mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 112a487f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a4882 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_112a4884:;
  /* 112a4884 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4886 jae 0x112a4893 */
  if (!C.cf) goto L_112a4893;
  /* 112a4888 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a488b jne 0x112a4890 */
  if (!C.zf) goto L_112a4890;
  /* 112a488d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_112a4890:;
  /* 112a4890 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a4891 jmp 0x112a4884 */
  goto L_112a4884;
L_112a4893:;
  /* 112a4893 test byte ptr [edi + 0xd], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xd)))&(0x20u); fl_logic(_r,8); }
  /* 112a4897 jmp 0x112a48cd */
  goto L_112a48cd;
L_112a4899:;
  /* 112a4899 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a489b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 112a489e push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 112a48a1 call 0x112a5b14 */
  push32(0x112a48a6u); f_112a5b14();
  /* 112a48a6 mov eax, 0x200 */
  EAX = (0x200u);
  /* 112a48ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a48ae cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a48b1 ja 0x112a48c0 */
  if ((!C.cf&&!C.zf)) goto L_112a48c0;
  /* 112a48b3 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 112a48b6 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 112a48b9 je 0x112a48c0 */
  if (C.zf) goto L_112a48c0;
  /* 112a48bb test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 112a48be je 0x112a48c3 */
  if (C.zf) goto L_112a48c3;
L_112a48c0:;
  /* 112a48c0 mov eax, dword ptr [edi + 0x18] */
  EAX = (r32((uint32_t)(EDI + 0x18)));
L_112a48c3:;
  /* 112a48c3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 112a48c6 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 112a48c8 test byte ptr [esi + eax + 4], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x4u); fl_logic(_r,8); }
L_112a48cd:;
  /* 112a48cd je 0x112a48d2 */
  if (C.zf) goto L_112a48d2;
  /* 112a48cf inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_112a48d2:;
  /* 112a48d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a48d5 sub dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_sub(_a,_b,_r,32); }
L_112a48d8:;
  /* 112a48d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a48db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a48de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_112a48e0:;
  /* 112a48e0 pop edi */
  EDI = (pop32());
  /* 112a48e1 pop esi */
  ESI = (pop32());
  /* 112a48e2 pop ebx */
  EBX = (pop32());
  /* 112a48e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a48e4 ret  */
  ESPCHK(0x112a4784u, _esp0);
  ESP += 4; return;
}

/* FUN_100048e5 @ 0x112a48e5 (44 bytes, 17 insns) */
void f_112a48e5(void) {
  FTRACE(0x112a48e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a48e5 push ebp */
  push32((uint32_t)(EBP));
  /* 112a48e6 mov ebp, esp */
  EBP = (ESP);
  /* 112a48e8 push esi */
  push32((uint32_t)(ESI));
  /* 112a48e9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a48ec call 0x112a4e08 */
  push32(0x112a48f1u); f_112a4e08();
  /* 112a48f1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a48f4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 112a48f7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a48fa call 0x112a4911 */
  push32(0x112a48ffu); f_112a4911();
  /* 112a48ff push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a4902 mov esi, eax */
  ESI = (EAX);
  /* 112a4904 call 0x112a4e5a */
  push32(0x112a4909u); f_112a4e5a();
  /* 112a4909 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a490c mov eax, esi */
  EAX = (ESI);
  /* 112a490e pop esi */
  ESI = (pop32());
  /* 112a490f pop ebp */
  EBP = (pop32());
  /* 112a4910 ret  */
  ESPCHK(0x112a48e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004911 @ 0x112a4911 (141 bytes, 55 insns) */
void f_112a4911(void) {
  FTRACE(0x112a4911u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4911 push esi */
  push32((uint32_t)(ESI));
  /* 112a4912 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4916 push edi */
  push32((uint32_t)(EDI));
  /* 112a4917 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 112a491a test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 112a491c je 0x112a498d */
  if (C.zf) goto L_112a498d;
  /* 112a491e mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 112a4922 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a4924 je 0x112a4930 */
  if (C.zf) goto L_112a4930;
  /* 112a4926 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4929 je 0x112a4930 */
  if (C.zf) goto L_112a4930;
  /* 112a492b cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a492e jne 0x112a498d */
  if (!C.zf) goto L_112a498d;
L_112a4930:;
  /* 112a4930 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 112a4932 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4935 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 112a4938 jne 0x112a4947 */
  if (!C.zf) goto L_112a4947;
  /* 112a493a push esi */
  push32((uint32_t)(ESI));
  /* 112a493b call 0x112a4784 */
  push32(0x112a4940u); f_112a4784();
  /* 112a4940 add dword ptr [esp + 0x14], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EAX),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a4944 pop ecx */
  ECX = (pop32());
  /* 112a4945 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_112a4947:;
  /* 112a4947 push esi */
  push32((uint32_t)(ESI));
  /* 112a4948 call 0x112a4fe5 */
  push32(0x112a494du); f_112a4fe5();
  /* 112a494d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 112a4950 pop ecx */
  ECX = (pop32());
  /* 112a4951 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 112a4953 je 0x112a495c */
  if (C.zf) goto L_112a495c;
  /* 112a4955 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 112a4957 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 112a495a jmp 0x112a4970 */
  goto L_112a4970;
L_112a495c:;
  /* 112a495c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 112a495e je 0x112a4970 */
  if (C.zf) goto L_112a4970;
  /* 112a4960 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 112a4962 je 0x112a4970 */
  if (C.zf) goto L_112a4970;
  /* 112a4964 test ah, 4 */
  { uint32_t _r=(AH)&(0x4u); fl_logic(_r,8); }
  /* 112a4967 jne 0x112a4970 */
  if (!C.zf) goto L_112a4970;
  /* 112a4969 mov dword ptr [esi + 0x18], 0x200 */
  w32((uint32_t)(ESI + 0x18), (0x200u));
L_112a4970:;
  /* 112a4970 push edi */
  push32((uint32_t)(EDI));
  /* 112a4971 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 112a4975 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 112a4978 call 0x112a5b14 */
  push32(0x112a497du); f_112a5b14();
  /* 112a497d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4980 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a4982 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4985 setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 112a4988 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a4989 mov eax, ecx */
  EAX = (ECX);
  /* 112a498b jmp 0x112a499b */
  goto L_112a499b;
L_112a498d:;
  /* 112a498d call 0x112a58f2 */
  push32(0x112a4992u); f_112a58f2();
  /* 112a4992 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 112a4998 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_112a499b:;
  /* 112a499b pop edi */
  EDI = (pop32());
  /* 112a499c pop esi */
  ESI = (pop32());
  /* 112a499d ret  */
  ESPCHK(0x112a4911u, _esp0);
  ESP += 4; return;
}

/* FUN_1000499e @ 0x112a499e (49 bytes, 21 insns) */
void f_112a499e(void) {
  FTRACE(0x112a499eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a499e push esi */
  push32((uint32_t)(ESI));
  /* 112a499f call 0x112a5d5c */
  push32(0x112a49a4u); f_112a5d5c();
  /* 112a49a4 mov esi, eax */
  ESI = (EAX);
  /* 112a49a6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a49a8 jne 0x112a49ac */
  if (!C.zf) goto L_112a49ac;
  /* 112a49aa pop esi */
  ESI = (pop32());
  /* 112a49ab ret  */
  ESPCHK(0x112a499eu, _esp0);
  ESP += 4; return;
L_112a49ac:;
  /* 112a49ac push edi */
  push32((uint32_t)(EDI));
  /* 112a49ad push esi */
  push32((uint32_t)(ESI));
  /* 112a49ae push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a49b2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a49b6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a49ba call 0x112a5bec */
  push32(0x112a49bfu); f_112a5bec();
  /* 112a49bf push esi */
  push32((uint32_t)(ESI));
  /* 112a49c0 mov edi, eax */
  EDI = (EAX);
  /* 112a49c2 call 0x112a4e5a */
  push32(0x112a49c7u); f_112a4e5a();
  /* 112a49c7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a49ca mov eax, edi */
  EAX = (EDI);
  /* 112a49cc pop edi */
  EDI = (pop32());
  /* 112a49cd pop esi */
  ESI = (pop32());
  /* 112a49ce ret  */
  ESPCHK(0x112a499eu, _esp0);
  ESP += 4; return;
}

/* FUN_100049cf @ 0x112a49cf (19 bytes, 6 insns) */
void f_112a49cf(void) {
  FTRACE(0x112a49cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a49cf push 0x40 */
  push32((uint32_t)(0x40u));
  /* 112a49d1 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 112a49d5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 112a49d9 call 0x112a499e */
  push32(0x112a49deu); f_112a499e();
  /* 112a49de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a49e1 ret  */
  ESPCHK(0x112a49cfu, _esp0);
  ESP += 4; return;
}

/* FUN_100049e2 @ 0x112a49e2 (217 bytes, 57 insns) */
void f_112a49e2(void) {
  FTRACE(0x112a49e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a49e2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a49e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a49e9 jne 0x112a4a77 */
  if (!C.zf) goto L_112a4a77;
  /* 112a49ef call dword ptr [0x112aa084] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa084))), 0x112a49f5u);
  /* 112a49f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a49f7 mov dword ptr [0x112af284], eax */
  w32((uint32_t)(0x112af284), (EAX));
  /* 112a49fc call 0x112a667b */
  push32(0x112a4a01u); f_112a667b();
  /* 112a4a01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4a03 pop ecx */
  ECX = (pop32());
  /* 112a4a04 je 0x112a4a42 */
  if (C.zf) goto L_112a4a42;
  /* 112a4a06 mov eax, dword ptr [0x112af284] */
  EAX = (r32((uint32_t)(0x112af284)));
  /* 112a4a0b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a4a0d mov cl, byte ptr [0x112af285] */
  CL = (r8((uint32_t)(0x112af285)));
  /* 112a4a13 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a4a18 shr dword ptr [0x112af284], 0x10 */
  w32((uint32_t)(0x112af284), (sh_shr((uint32_t)(r32((uint32_t)(0x112af284))), (0x10u)&0x1f, 32)));
  /* 112a4a1f mov dword ptr [0x112af28c], eax */
  w32((uint32_t)(0x112af28c), (EAX));
  /* 112a4a24 mov dword ptr [0x112af290], ecx */
  w32((uint32_t)(0x112af290), (ECX));
  /* 112a4a2a shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112a4a2d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4a2f mov dword ptr [0x112af288], eax */
  w32((uint32_t)(0x112af288), (EAX));
  /* 112a4a34 call 0x112a5f42 */
  push32(0x112a4a39u); f_112a5f42();
  /* 112a4a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4a3b jne 0x112a4a46 */
  if (!C.zf) goto L_112a4a46;
  /* 112a4a3d call 0x112a66d8 */
  push32(0x112a4a42u); f_112a66d8();
L_112a4a42:;
  /* 112a4a42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a4a44 jmp 0x112a4ab8 */
  goto L_112a4ab8;
L_112a4a46:;
  /* 112a4a46 call dword ptr [0x112aa080] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa080))), 0x112a4a4cu);
  /* 112a4a4c mov dword ptr [0x112b0964], eax */
  w32((uint32_t)(0x112b0964), (EAX));
  /* 112a4a51 call 0x112a63d4 */
  push32(0x112a4a56u); f_112a63d4();
  /* 112a4a56 mov dword ptr [0x112af26c], eax */
  w32((uint32_t)(0x112af26c), (EAX));
  /* 112a4a5b call 0x112a5904 */
  push32(0x112a4a60u); f_112a5904();
  /* 112a4a60 call 0x112a6187 */
  push32(0x112a4a65u); f_112a6187();
  /* 112a4a65 call 0x112a60ce */
  push32(0x112a4a6au); f_112a60ce();
  /* 112a4a6a call 0x112a5e24 */
  push32(0x112a4a6fu); f_112a5e24();
  /* 112a4a6f inc dword ptr [0x112af268] */
  { uint32_t _r=(r32((uint32_t)(0x112af268)))+1; w32((uint32_t)(0x112af268), (_r)); fl_inc(_r,32); }
  /* 112a4a75 jmp 0x112a4ab5 */
  goto L_112a4ab5;
L_112a4a77:;
  /* 112a4a77 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a4a79 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4a7b jne 0x112a4aa9 */
  if (!C.zf) goto L_112a4aa9;
  /* 112a4a7d cmp dword ptr [0x112af268], ecx */
  { uint32_t _a=(r32((uint32_t)(0x112af268))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4a83 jle 0x112a4a42 */
  if ((C.zf||C.sf!=C.of)) goto L_112a4a42;
  /* 112a4a85 dec dword ptr [0x112af268] */
  { uint32_t _r=(r32((uint32_t)(0x112af268)))-1; w32((uint32_t)(0x112af268), (_r)); fl_dec(_r,32); }
  /* 112a4a8b cmp dword ptr [0x112af2bc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x112af2bc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4a91 jne 0x112a4a98 */
  if (!C.zf) goto L_112a4a98;
  /* 112a4a93 call 0x112a5e62 */
  push32(0x112a4a98u); f_112a5e62();
L_112a4a98:;
  /* 112a4a98 call 0x112a5ac0 */
  push32(0x112a4a9du); f_112a5ac0();
  /* 112a4a9d call 0x112a5f96 */
  push32(0x112a4aa2u); f_112a5f96();
  /* 112a4aa2 call 0x112a66d8 */
  push32(0x112a4aa7u); f_112a66d8();
  /* 112a4aa7 jmp 0x112a4ab5 */
  goto L_112a4ab5;
L_112a4aa9:;
  /* 112a4aa9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4aac jne 0x112a4ab5 */
  if (!C.zf) goto L_112a4ab5;
  /* 112a4aae push ecx */
  push32((uint32_t)(ECX));
  /* 112a4aaf call 0x112a602e */
  push32(0x112a4ab4u); f_112a602e();
  /* 112a4ab4 pop ecx */
  ECX = (pop32());
L_112a4ab5:;
  /* 112a4ab5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a4ab7 pop eax */
  EAX = (pop32());
L_112a4ab8:;
  /* 112a4ab8 ret 0xc */
  ESPCHK(0x112a49e2u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x112a4abb (157 bytes, 73 insns) */
void f_112a4abb(void) {
  FTRACE(0x112a4abbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4abb push ebp */
  push32((uint32_t)(EBP));
  /* 112a4abc mov ebp, esp */
  EBP = (ESP);
  /* 112a4abe push ebx */
  push32((uint32_t)(EBX));
  /* 112a4abf mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a4ac2 push esi */
  push32((uint32_t)(ESI));
  /* 112a4ac3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a4ac6 push edi */
  push32((uint32_t)(EDI));
  /* 112a4ac7 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 112a4aca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a4acc jne 0x112a4ad7 */
  if (!C.zf) goto L_112a4ad7;
  /* 112a4ace cmp dword ptr [0x112af268], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112af268))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4ad5 jmp 0x112a4afd */
  goto L_112a4afd;
L_112a4ad7:;
  /* 112a4ad7 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4ada je 0x112a4ae1 */
  if (C.zf) goto L_112a4ae1;
  /* 112a4adc cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4adf jne 0x112a4b03 */
  if (!C.zf) goto L_112a4b03;
L_112a4ae1:;
  /* 112a4ae1 mov eax, dword ptr [0x112b0968] */
  EAX = (r32((uint32_t)(0x112b0968)));
  /* 112a4ae6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4ae8 je 0x112a4af3 */
  if (C.zf) goto L_112a4af3;
  /* 112a4aea push edi */
  push32((uint32_t)(EDI));
  /* 112a4aeb push esi */
  push32((uint32_t)(ESI));
  /* 112a4aec push ebx */
  push32((uint32_t)(EBX));
  /* 112a4aed call eax */
  call_ind((uint32_t)(EAX), 0x112a4aefu);
  /* 112a4aef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4af1 je 0x112a4aff */
  if (C.zf) goto L_112a4aff;
L_112a4af3:;
  /* 112a4af3 push edi */
  push32((uint32_t)(EDI));
  /* 112a4af4 push esi */
  push32((uint32_t)(ESI));
  /* 112a4af5 push ebx */
  push32((uint32_t)(EBX));
  /* 112a4af6 call 0x112a49e2 */
  push32(0x112a4afbu); f_112a49e2();
  /* 112a4afb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_112a4afd:;
  /* 112a4afd jne 0x112a4b03 */
  if (!C.zf) goto L_112a4b03;
L_112a4aff:;
  /* 112a4aff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a4b01 jmp 0x112a4b51 */
  goto L_112a4b51;
L_112a4b03:;
  /* 112a4b03 push edi */
  push32((uint32_t)(EDI));
  /* 112a4b04 push esi */
  push32((uint32_t)(ESI));
  /* 112a4b05 push ebx */
  push32((uint32_t)(EBX));
  /* 112a4b06 call 0x112a1000 */
  push32(0x112a4b0bu); f_112a1000();
  /* 112a4b0b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4b0e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 112a4b11 jne 0x112a4b1f */
  if (!C.zf) goto L_112a4b1f;
  /* 112a4b13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4b15 jne 0x112a4b4e */
  if (!C.zf) goto L_112a4b4e;
  /* 112a4b17 push edi */
  push32((uint32_t)(EDI));
  /* 112a4b18 push eax */
  push32((uint32_t)(EAX));
  /* 112a4b19 push ebx */
  push32((uint32_t)(EBX));
  /* 112a4b1a call 0x112a49e2 */
  push32(0x112a4b1fu); f_112a49e2();
L_112a4b1f:;
  /* 112a4b1f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a4b21 je 0x112a4b28 */
  if (C.zf) goto L_112a4b28;
  /* 112a4b23 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4b26 jne 0x112a4b4e */
  if (!C.zf) goto L_112a4b4e;
L_112a4b28:;
  /* 112a4b28 push edi */
  push32((uint32_t)(EDI));
  /* 112a4b29 push esi */
  push32((uint32_t)(ESI));
  /* 112a4b2a push ebx */
  push32((uint32_t)(EBX));
  /* 112a4b2b call 0x112a49e2 */
  push32(0x112a4b30u); f_112a49e2();
  /* 112a4b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4b32 jne 0x112a4b37 */
  if (!C.zf) goto L_112a4b37;
  /* 112a4b34 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_112a4b37:;
  /* 112a4b37 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4b3b je 0x112a4b4e */
  if (C.zf) goto L_112a4b4e;
  /* 112a4b3d mov eax, dword ptr [0x112b0968] */
  EAX = (r32((uint32_t)(0x112b0968)));
  /* 112a4b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4b44 je 0x112a4b4e */
  if (C.zf) goto L_112a4b4e;
  /* 112a4b46 push edi */
  push32((uint32_t)(EDI));
  /* 112a4b47 push esi */
  push32((uint32_t)(ESI));
  /* 112a4b48 push ebx */
  push32((uint32_t)(EBX));
  /* 112a4b49 call eax */
  call_ind((uint32_t)(EAX), 0x112a4b4bu);
  /* 112a4b4b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_112a4b4e:;
  /* 112a4b4e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_112a4b51:;
  /* 112a4b51 pop edi */
  EDI = (pop32());
  /* 112a4b52 pop esi */
  ESI = (pop32());
  /* 112a4b53 pop ebx */
  EBX = (pop32());
  /* 112a4b54 pop ebp */
  EBP = (pop32());
  /* 112a4b55 ret 0xc */
  ESPCHK(0x112a4abbu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x112a4b58 (48 bytes, 15 insns) */
void f_112a4b58(void) {
  FTRACE(0x112a4b58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4b58 mov eax, dword ptr [0x112af274] */
  EAX = (r32((uint32_t)(0x112af274)));
  /* 112a4b5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4b60 je 0x112a4b6f */
  if (C.zf) goto L_112a4b6f;
  /* 112a4b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4b64 jne 0x112a4b74 */
  if (!C.zf) goto L_112a4b74;
  /* 112a4b66 cmp dword ptr [0x112af278], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112af278))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4b6d jne 0x112a4b74 */
  if (!C.zf) goto L_112a4b74;
L_112a4b6f:;
  /* 112a4b6f call 0x112a6780 */
  push32(0x112a4b74u); f_112a6780();
L_112a4b74:;
  /* 112a4b74 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 112a4b78 call 0x112a67b9 */
  push32(0x112a4b7du); f_112a67b9();
  /* 112a4b7d push 0xff */
  push32((uint32_t)(0xffu));
  /* 112a4b82 call dword ptr [0x112ab640] */
  call_ind((uint32_t)(r32((uint32_t)(0x112ab640))), 0x112a4b88u);
  /* 112a4b88 pop ecx */
  ECX = (pop32());
  /* 112a4b89 pop ecx */
  ECX = (pop32());
  /* 112a4b8a ret  */
  ESPCHK(0x112a4b58u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b8b @ 0x112a4b8b (215 bytes, 75 insns) */
void f_112a4b8b(void) {
  FTRACE(0x112a4b8bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4b8b push ebp */
  push32((uint32_t)(EBP));
  /* 112a4b8c mov ebp, esp */
  EBP = (ESP);
  /* 112a4b8e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112a4b90 push 0x112aa1a8 */
  push32((uint32_t)(0x112aa1a8u));
  /* 112a4b95 push 0x112a7984 */
  push32((uint32_t)(0x112a7984u));
  /* 112a4b9a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112a4ba0 push eax */
  push32((uint32_t)(EAX));
  /* 112a4ba1 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112a4ba8 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a4bab push ebx */
  push32((uint32_t)(EBX));
  /* 112a4bac push esi */
  push32((uint32_t)(ESI));
  /* 112a4bad push edi */
  push32((uint32_t)(EDI));
  /* 112a4bae mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a4bb1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a4bb3 je 0x112a4c65 */
  if (C.zf) { jmp_ind(0x112a4c65u); return; }
  /* 112a4bb9 mov eax, dword ptr [0x112af828] */
  EAX = (r32((uint32_t)(0x112af828)));
  /* 112a4bbe cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4bc1 jne 0x112a4bfe */
  if (!C.zf) goto L_112a4bfe;
  /* 112a4bc3 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a4bc5 call 0x112a7816 */
  push32(0x112a4bcau); f_112a7816();
  /* 112a4bca pop ecx */
  ECX = (pop32());
  /* 112a4bcb and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a4bcf push esi */
  push32((uint32_t)(ESI));
  /* 112a4bd0 call 0x112a6954 */
  push32(0x112a4bd5u); f_112a6954();
  /* 112a4bd5 pop ecx */
  ECX = (pop32());
  /* 112a4bd6 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112a4bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4bdb je 0x112a4be6 */
  if (C.zf) goto L_112a4be6;
  /* 112a4bdd push esi */
  push32((uint32_t)(ESI));
  /* 112a4bde push eax */
  push32((uint32_t)(EAX));
  /* 112a4bdf call 0x112a697f */
  push32(0x112a4be4u); f_112a697f();
  /* 112a4be4 pop ecx */
  ECX = (pop32());
  /* 112a4be5 pop ecx */
  ECX = (pop32());
L_112a4be6:;
  /* 112a4be6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a4bea call 0x112a4bf5 */
  push32(0x112a4befu); f_112a4bf5();
  /* 112a4bef cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4bf3 jmp 0x112a4c46 */
  goto L_112a4c46;
  /* 112a4bf5 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a4bf7 call 0x112a7877 */
  push32(0x112a4bfcu); f_112a7877();
  /* 112a4bfc pop ecx */
  ECX = (pop32());
  /* 112a4bfd ret  */
  ESPCHK(0x112a4b8bu, _esp0);
  ESP += 4; return;
L_112a4bfe:;
  /* 112a4bfe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4c01 jne 0x112a4c56 */
  if (!C.zf) goto L_112a4c56;
  /* 112a4c03 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a4c05 call 0x112a7816 */
  push32(0x112a4c0au); f_112a7816();
  /* 112a4c0a pop ecx */
  ECX = (pop32());
  /* 112a4c0b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112a4c12 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 112a4c15 push eax */
  push32((uint32_t)(EAX));
  /* 112a4c16 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 112a4c19 push eax */
  push32((uint32_t)(EAX));
  /* 112a4c1a push esi */
  push32((uint32_t)(ESI));
  /* 112a4c1b call 0x112a73b9 */
  push32(0x112a4c20u); f_112a73b9();
  /* 112a4c20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4c23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 112a4c26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4c28 je 0x112a4c39 */
  if (C.zf) goto L_112a4c39;
  /* 112a4c2a push eax */
  push32((uint32_t)(EAX));
  /* 112a4c2b push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 112a4c2e push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 112a4c31 call 0x112a7410 */
  push32(0x112a4c36u); f_112a7410();
  /* 112a4c36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a4c39:;
  /* 112a4c39 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a4c3d call 0x112a4c4d */
  push32(0x112a4c42u); f_112a4c4d();
  /* 112a4c42 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_112a4c46:;
  /* 112a4c46 jne 0x112a4c65 */
  if (!C.zf) { jmp_ind(0x112a4c65u); return; }
  /* 112a4c48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a4c4b jmp 0x112a4c57 */
  goto L_112a4c57;
  /* 112a4c4d push 9 */
  push32((uint32_t)(0x9u));
  /* 112a4c4f call 0x112a7877 */
  push32(0x112a4c54u); f_112a7877();
  /* 112a4c54 pop ecx */
  ECX = (pop32());
  /* 112a4c55 ret  */
  ESPCHK(0x112a4b8bu, _esp0);
  ESP += 4; return;
L_112a4c56:;
  /* 112a4c56 push esi */
  push32((uint32_t)(ESI));
L_112a4c57:;
  /* 112a4c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a4c59 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
}

/* FUN_10004bf5 @ 0x112a4bf5 (9 bytes, 4 insns) */
void f_112a4bf5(void) {
  FTRACE(0x112a4bf5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4bf5 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a4bf7 call 0x112a7877 */
  push32(0x112a4bfcu); f_112a7877();
  /* 112a4bfc pop ecx */
  ECX = (pop32());
  /* 112a4bfd ret  */
  ESPCHK(0x112a4bf5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c4d @ 0x112a4c4d (9 bytes, 4 insns) */
void f_112a4c4d(void) {
  FTRACE(0x112a4c4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4c4d push 9 */
  push32((uint32_t)(0x9u));
  /* 112a4c4f call 0x112a7877 */
  push32(0x112a4c54u); f_112a7877();
  /* 112a4c54 pop ecx */
  ECX = (pop32());
  /* 112a4c55 ret  */
  ESPCHK(0x112a4c4du, _esp0);
  ESP += 4; return;
}

/* FUN_10004c90 @ 0x112a4c90 (188 bytes, 86 insns) */
void f_112a4c90(void) {
  FTRACE(0x112a4c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4c90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a4c92 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 112a4c96 push ebx */
  push32((uint32_t)(EBX));
  /* 112a4c97 mov ebx, eax */
  EBX = (EAX);
  /* 112a4c99 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 112a4c9c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4ca0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 112a4ca6 je 0x112a4cbb */
  if (C.zf) goto L_112a4cbb;
L_112a4ca8:;
  /* 112a4ca8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 112a4caa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112a4cab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a4cad je 0x112a4c80 */
  if (C.zf) { jmp_ind(0x112a4c80u); return; }
  /* 112a4caf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 112a4cb1 je 0x112a4d04 */
  if (C.zf) goto L_112a4d04;
  /* 112a4cb3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 112a4cb9 jne 0x112a4ca8 */
  if (!C.zf) goto L_112a4ca8;
L_112a4cbb:;
  /* 112a4cbb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 112a4cbd push edi */
  push32((uint32_t)(EDI));
  /* 112a4cbe mov eax, ebx */
  EAX = (EBX);
  /* 112a4cc0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 112a4cc3 push esi */
  push32((uint32_t)(ESI));
  /* 112a4cc4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_112a4cc6:;
  /* 112a4cc6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 112a4cc8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 112a4ccd mov eax, ecx */
  EAX = (ECX);
  /* 112a4ccf mov esi, edi */
  ESI = (EDI);
  /* 112a4cd1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 112a4cd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4cd5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4cd7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 112a4cda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a4cdd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 112a4cdf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 112a4ce1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4ce4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 112a4cea jne 0x112a4d08 */
  if (!C.zf) goto L_112a4d08;
  /* 112a4cec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 112a4cf1 je 0x112a4cc6 */
  if (C.zf) goto L_112a4cc6;
  /* 112a4cf3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 112a4cf8 jne 0x112a4d02 */
  if (!C.zf) goto L_112a4d02;
  /* 112a4cfa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 112a4d00 jne 0x112a4cc6 */
  if (!C.zf) goto L_112a4cc6;
L_112a4d02:;
  /* 112a4d02 pop esi */
  ESI = (pop32());
  /* 112a4d03 pop edi */
  EDI = (pop32());
L_112a4d04:;
  /* 112a4d04 pop ebx */
  EBX = (pop32());
  /* 112a4d05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a4d07 ret  */
  ESPCHK(0x112a4c90u, _esp0);
  ESP += 4; return;
L_112a4d08:;
  /* 112a4d08 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 112a4d0b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a4d0d je 0x112a4d45 */
  if (C.zf) goto L_112a4d45;
  /* 112a4d0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a4d11 je 0x112a4d02 */
  if (C.zf) goto L_112a4d02;
  /* 112a4d13 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a4d15 je 0x112a4d3e */
  if (C.zf) goto L_112a4d3e;
  /* 112a4d17 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112a4d19 je 0x112a4d02 */
  if (C.zf) goto L_112a4d02;
  /* 112a4d1b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 112a4d1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a4d20 je 0x112a4d37 */
  if (C.zf) goto L_112a4d37;
  /* 112a4d22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a4d24 je 0x112a4d02 */
  if (C.zf) goto L_112a4d02;
  /* 112a4d26 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a4d28 je 0x112a4d30 */
  if (C.zf) goto L_112a4d30;
  /* 112a4d2a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 112a4d2c je 0x112a4d02 */
  if (C.zf) goto L_112a4d02;
  /* 112a4d2e jmp 0x112a4cc6 */
  goto L_112a4cc6;
L_112a4d30:;
  /* 112a4d30 pop esi */
  ESI = (pop32());
  /* 112a4d31 pop edi */
  EDI = (pop32());
  /* 112a4d32 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 112a4d35 pop ebx */
  EBX = (pop32());
  /* 112a4d36 ret  */
  ESPCHK(0x112a4c90u, _esp0);
  ESP += 4; return;
L_112a4d37:;
  /* 112a4d37 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 112a4d3a pop esi */
  ESI = (pop32());
  /* 112a4d3b pop edi */
  EDI = (pop32());
  /* 112a4d3c pop ebx */
  EBX = (pop32());
  /* 112a4d3d ret  */
  ESPCHK(0x112a4c90u, _esp0);
  ESP += 4; return;
L_112a4d3e:;
  /* 112a4d3e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 112a4d41 pop esi */
  ESI = (pop32());
  /* 112a4d42 pop edi */
  EDI = (pop32());
  /* 112a4d43 pop ebx */
  EBX = (pop32());
  /* 112a4d44 ret  */
  ESPCHK(0x112a4c90u, _esp0);
  ESP += 4; return;
L_112a4d45:;
  /* 112a4d45 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 112a4d48 pop esi */
  ESI = (pop32());
  /* 112a4d49 pop edi */
  EDI = (pop32());
  /* 112a4d4a pop ebx */
  EBX = (pop32());
  /* 112a4d4b ret  */
  ESPCHK(0x112a4c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e08 @ 0x112a4e08 (47 bytes, 17 insns) */
void f_112a4e08(void) {
  FTRACE(0x112a4e08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4e08 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a4e0c mov ecx, 0x112ab650 */
  ECX = (0x112ab650u);
  /* 112a4e11 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4e13 jb 0x112a4e2c */
  if (C.cf) goto L_112a4e2c;
  /* 112a4e15 cmp eax, 0x112ab8b0 */
  { uint32_t _a=(EAX),_b=(0x112ab8b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4e1a ja 0x112a4e2c */
  if ((!C.cf&&!C.zf)) goto L_112a4e2c;
  /* 112a4e1c sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a4e1e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112a4e21 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4e24 push eax */
  push32((uint32_t)(EAX));
  /* 112a4e25 call 0x112a7816 */
  push32(0x112a4e2au); f_112a7816();
  /* 112a4e2a pop ecx */
  ECX = (pop32());
  /* 112a4e2b ret  */
  ESPCHK(0x112a4e08u, _esp0);
  ESP += 4; return;
L_112a4e2c:;
  /* 112a4e2c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4e2f push eax */
  push32((uint32_t)(EAX));
  /* 112a4e30 call dword ptr [0x112aa08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa08c))), 0x112a4e36u);
  /* 112a4e36 ret  */
  ESPCHK(0x112a4e08u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e37 @ 0x112a4e37 (35 bytes, 13 insns) */
void f_112a4e37(void) {
  FTRACE(0x112a4e37u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4e37 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a4e3b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4e3e jge 0x112a4e4b */
  if ((C.sf==C.of)) goto L_112a4e4b;
  /* 112a4e40 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4e43 push eax */
  push32((uint32_t)(EAX));
  /* 112a4e44 call 0x112a7816 */
  push32(0x112a4e49u); f_112a7816();
  /* 112a4e49 pop ecx */
  ECX = (pop32());
  /* 112a4e4a ret  */
  ESPCHK(0x112a4e37u, _esp0);
  ESP += 4; return;
L_112a4e4b:;
  /* 112a4e4b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4e4f add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4e52 push eax */
  push32((uint32_t)(EAX));
  /* 112a4e53 call dword ptr [0x112aa08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa08c))), 0x112a4e59u);
  /* 112a4e59 ret  */
  ESPCHK(0x112a4e37u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e5a @ 0x112a4e5a (47 bytes, 17 insns) */
void f_112a4e5a(void) {
  FTRACE(0x112a4e5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4e5a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a4e5e mov ecx, 0x112ab650 */
  ECX = (0x112ab650u);
  /* 112a4e63 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4e65 jb 0x112a4e7e */
  if (C.cf) goto L_112a4e7e;
  /* 112a4e67 cmp eax, 0x112ab8b0 */
  { uint32_t _a=(EAX),_b=(0x112ab8b0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4e6c ja 0x112a4e7e */
  if ((!C.cf&&!C.zf)) goto L_112a4e7e;
  /* 112a4e6e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a4e70 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112a4e73 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4e76 push eax */
  push32((uint32_t)(EAX));
  /* 112a4e77 call 0x112a7877 */
  push32(0x112a4e7cu); f_112a7877();
  /* 112a4e7c pop ecx */
  ECX = (pop32());
  /* 112a4e7d ret  */
  ESPCHK(0x112a4e5au, _esp0);
  ESP += 4; return;
L_112a4e7e:;
  /* 112a4e7e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4e81 push eax */
  push32((uint32_t)(EAX));
  /* 112a4e82 call dword ptr [0x112aa090] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa090))), 0x112a4e88u);
  /* 112a4e88 ret  */
  ESPCHK(0x112a4e5au, _esp0);
  ESP += 4; return;
}

/* FUN_10004e89 @ 0x112a4e89 (35 bytes, 13 insns) */
void f_112a4e89(void) {
  FTRACE(0x112a4e89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4e89 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a4e8d cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4e90 jge 0x112a4e9d */
  if ((C.sf==C.of)) goto L_112a4e9d;
  /* 112a4e92 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4e95 push eax */
  push32((uint32_t)(EAX));
  /* 112a4e96 call 0x112a7877 */
  push32(0x112a4e9bu); f_112a7877();
  /* 112a4e9b pop ecx */
  ECX = (pop32());
  /* 112a4e9c ret  */
  ESPCHK(0x112a4e89u, _esp0);
  ESP += 4; return;
L_112a4e9d:;
  /* 112a4e9d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4ea1 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4ea4 push eax */
  push32((uint32_t)(EAX));
  /* 112a4ea5 call dword ptr [0x112aa090] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa090))), 0x112a4eabu);
  /* 112a4eab ret  */
  ESPCHK(0x112a4e89u, _esp0);
  ESP += 4; return;
}

/* FUN_10004eac @ 0x112a4eac (93 bytes, 32 insns) */
void f_112a4eac(void) {
  FTRACE(0x112a4eacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4eac push esi */
  push32((uint32_t)(ESI));
  /* 112a4ead mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4eb1 cmp esi, dword ptr [0x112af940] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112af940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4eb7 jae 0x112a4ef1 */
  if (!C.cf) goto L_112a4ef1;
  /* 112a4eb9 mov ecx, esi */
  ECX = (ESI);
  /* 112a4ebb mov eax, esi */
  EAX = (ESI);
  /* 112a4ebd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a4ec0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a4ec3 mov ecx, dword ptr [ecx*4 + 0x112af840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a4eca lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 112a4ecd test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a4ed2 je 0x112a4ef1 */
  if (C.zf) goto L_112a4ef1;
  /* 112a4ed4 push edi */
  push32((uint32_t)(EDI));
  /* 112a4ed5 push esi */
  push32((uint32_t)(ESI));
  /* 112a4ed6 call 0x112a7e7a */
  push32(0x112a4edbu); f_112a7e7a();
  /* 112a4edb push esi */
  push32((uint32_t)(ESI));
  /* 112a4edc call 0x112a4f09 */
  push32(0x112a4ee1u); f_112a4f09();
  /* 112a4ee1 push esi */
  push32((uint32_t)(ESI));
  /* 112a4ee2 mov edi, eax */
  EDI = (EAX);
  /* 112a4ee4 call 0x112a7ed9 */
  push32(0x112a4ee9u); f_112a7ed9();
  /* 112a4ee9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a4eec mov eax, edi */
  EAX = (EDI);
  /* 112a4eee pop edi */
  EDI = (pop32());
  /* 112a4eef pop esi */
  ESI = (pop32());
  /* 112a4ef0 ret  */
  ESPCHK(0x112a4eacu, _esp0);
  ESP += 4; return;
L_112a4ef1:;
  /* 112a4ef1 call 0x112a58f2 */
  push32(0x112a4ef6u); f_112a58f2();
  /* 112a4ef6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a4efc call 0x112a58fb */
  push32(0x112a4f01u); f_112a58fb();
  /* 112a4f01 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a4f04 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a4f07 pop esi */
  ESI = (pop32());
  /* 112a4f08 ret  */
  ESPCHK(0x112a4eacu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f09 @ 0x112a4f09 (131 bytes, 52 insns) */
void f_112a4f09(void) {
  FTRACE(0x112a4f09u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4f09 push esi */
  push32((uint32_t)(ESI));
  /* 112a4f0a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4f0e push edi */
  push32((uint32_t)(EDI));
  /* 112a4f0f push esi */
  push32((uint32_t)(ESI));
  /* 112a4f10 call 0x112a7e38 */
  push32(0x112a4f15u); f_112a7e38();
  /* 112a4f15 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4f18 pop ecx */
  ECX = (pop32());
  /* 112a4f19 je 0x112a4f57 */
  if (C.zf) goto L_112a4f57;
  /* 112a4f1b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4f1e je 0x112a4f25 */
  if (C.zf) goto L_112a4f25;
  /* 112a4f20 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4f23 jne 0x112a4f3b */
  if (!C.zf) goto L_112a4f3b;
L_112a4f25:;
  /* 112a4f25 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a4f27 call 0x112a7e38 */
  push32(0x112a4f2cu); f_112a7e38();
  /* 112a4f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 112a4f2e mov edi, eax */
  EDI = (EAX);
  /* 112a4f30 call 0x112a7e38 */
  push32(0x112a4f35u); f_112a7e38();
  /* 112a4f35 pop ecx */
  ECX = (pop32());
  /* 112a4f36 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a4f38 pop ecx */
  ECX = (pop32());
  /* 112a4f39 je 0x112a4f57 */
  if (C.zf) goto L_112a4f57;
L_112a4f3b:;
  /* 112a4f3b push esi */
  push32((uint32_t)(ESI));
  /* 112a4f3c call 0x112a7e38 */
  push32(0x112a4f41u); f_112a7e38();
  /* 112a4f41 pop ecx */
  ECX = (pop32());
  /* 112a4f42 push eax */
  push32((uint32_t)(EAX));
  /* 112a4f43 call dword ptr [0x112aa098] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa098))), 0x112a4f49u);
  /* 112a4f49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4f4b jne 0x112a4f57 */
  if (!C.zf) goto L_112a4f57;
  /* 112a4f4d call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a4f53u);
  /* 112a4f53 mov edi, eax */
  EDI = (EAX);
  /* 112a4f55 jmp 0x112a4f59 */
  goto L_112a4f59;
L_112a4f57:;
  /* 112a4f57 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_112a4f59:;
  /* 112a4f59 push esi */
  push32((uint32_t)(ESI));
  /* 112a4f5a call 0x112a7db9 */
  push32(0x112a4f5fu); f_112a7db9();
  /* 112a4f5f mov eax, esi */
  EAX = (ESI);
  /* 112a4f61 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 112a4f64 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 112a4f67 pop ecx */
  ECX = (pop32());
  /* 112a4f68 mov eax, dword ptr [eax*4 + 0x112af840] */
  EAX = (r32((uint32_t)(EAX*4 + 0x112af840)));
  /* 112a4f6f lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 112a4f72 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 112a4f77 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a4f79 je 0x112a4f87 */
  if (C.zf) goto L_112a4f87;
  /* 112a4f7b push edi */
  push32((uint32_t)(EDI));
  /* 112a4f7c call 0x112a587f */
  push32(0x112a4f81u); f_112a587f();
  /* 112a4f81 pop ecx */
  ECX = (pop32());
  /* 112a4f82 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a4f85 jmp 0x112a4f89 */
  goto L_112a4f89;
L_112a4f87:;
  /* 112a4f87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a4f89:;
  /* 112a4f89 pop edi */
  EDI = (pop32());
  /* 112a4f8a pop esi */
  ESI = (pop32());
  /* 112a4f8b ret  */
  ESPCHK(0x112a4f09u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x112a4f8c (43 bytes, 17 insns) */
void f_112a4f8c(void) {
  FTRACE(0x112a4f8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4f8c push esi */
  push32((uint32_t)(ESI));
  /* 112a4f8d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4f91 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 112a4f94 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 112a4f96 je 0x112a4fb5 */
  if (C.zf) goto L_112a4fb5;
  /* 112a4f98 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 112a4f9a je 0x112a4fb5 */
  if (C.zf) goto L_112a4fb5;
  /* 112a4f9c push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 112a4f9f call 0x112a4b8b */
  push32(0x112a4fa4u); f_112a4b8b();
  /* 112a4fa4 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 112a4faa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a4fac pop ecx */
  ECX = (pop32());
  /* 112a4fad mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 112a4faf mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 112a4fb2 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_112a4fb5:;
  /* 112a4fb5 pop esi */
  ESI = (pop32());
  /* 112a4fb6 ret  */
  ESPCHK(0x112a4f8cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004fb7 @ 0x112a4fb7 (46 bytes, 22 insns) */
void f_112a4fb7(void) {
  FTRACE(0x112a4fb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4fb7 push esi */
  push32((uint32_t)(ESI));
  /* 112a4fb8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a4fbc push esi */
  push32((uint32_t)(ESI));
  /* 112a4fbd call 0x112a4fe5 */
  push32(0x112a4fc2u); f_112a4fe5();
  /* 112a4fc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a4fc4 pop ecx */
  ECX = (pop32());
  /* 112a4fc5 je 0x112a4fcc */
  if (C.zf) goto L_112a4fcc;
  /* 112a4fc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a4fca pop esi */
  ESI = (pop32());
  /* 112a4fcb ret  */
  ESPCHK(0x112a4fb7u, _esp0);
  ESP += 4; return;
L_112a4fcc:;
  /* 112a4fcc test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 112a4fd0 je 0x112a4fe1 */
  if (C.zf) goto L_112a4fe1;
  /* 112a4fd2 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 112a4fd5 call 0x112a7efb */
  push32(0x112a4fdau); f_112a7efb();
  /* 112a4fda neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a4fdc pop ecx */
  ECX = (pop32());
  /* 112a4fdd pop esi */
  ESI = (pop32());
  /* 112a4fde sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a4fe0 ret  */
  ESPCHK(0x112a4fb7u, _esp0);
  ESP += 4; return;
L_112a4fe1:;
  /* 112a4fe1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a4fe3 pop esi */
  ESI = (pop32());
  /* 112a4fe4 ret  */
  ESPCHK(0x112a4fb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fe5 @ 0x112a4fe5 (92 bytes, 40 insns) */
void f_112a4fe5(void) {
  FTRACE(0x112a4fe5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a4fe5 push ebx */
  push32((uint32_t)(EBX));
  /* 112a4fe6 push esi */
  push32((uint32_t)(ESI));
  /* 112a4fe7 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 112a4feb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a4fed push edi */
  push32((uint32_t)(EDI));
  /* 112a4fee mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 112a4ff1 mov ecx, eax */
  ECX = (EAX);
  /* 112a4ff3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 112a4ff6 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a4ff9 jne 0x112a5032 */
  if (!C.zf) goto L_112a5032;
  /* 112a4ffb test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 112a4fff je 0x112a5032 */
  if (C.zf) goto L_112a5032;
  /* 112a5001 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 112a5004 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 112a5006 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5008 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a500a jle 0x112a5032 */
  if ((C.zf||C.sf!=C.of)) goto L_112a5032;
  /* 112a500c push edi */
  push32((uint32_t)(EDI));
  /* 112a500d push eax */
  push32((uint32_t)(EAX));
  /* 112a500e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 112a5011 call 0x112a7f8e */
  push32(0x112a5016u); f_112a7f8e();
  /* 112a5016 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5019 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a501b jne 0x112a502b */
  if (!C.zf) goto L_112a502b;
  /* 112a501d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 112a5020 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 112a5022 je 0x112a5032 */
  if (C.zf) goto L_112a5032;
  /* 112a5024 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 112a5026 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 112a5029 jmp 0x112a5032 */
  goto L_112a5032;
L_112a502b:;
  /* 112a502b or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 112a502f or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_112a5032:;
  /* 112a5032 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 112a5035 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 112a5039 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 112a503b pop edi */
  EDI = (pop32());
  /* 112a503c mov eax, ebx */
  EAX = (EBX);
  /* 112a503e pop esi */
  ESI = (pop32());
  /* 112a503f pop ebx */
  EBX = (pop32());
  /* 112a5040 ret  */
  ESPCHK(0x112a4fe5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000504a @ 0x112a504a (164 bytes, 66 insns) */
void f_112a504a(void) {
  FTRACE(0x112a504au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a504a push ebx */
  push32((uint32_t)(EBX));
  /* 112a504b push esi */
  push32((uint32_t)(ESI));
  /* 112a504c push edi */
  push32((uint32_t)(EDI));
  /* 112a504d push 2 */
  push32((uint32_t)(0x2u));
  /* 112a504f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a5051 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a5053 call 0x112a7816 */
  push32(0x112a5058u); f_112a7816();
  /* 112a5058 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a505a pop ecx */
  ECX = (pop32());
  /* 112a505b cmp dword ptr [0x112b0960], esi */
  { uint32_t _a=(r32((uint32_t)(0x112b0960))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5061 jle 0x112a50d7 */
  if ((C.zf||C.sf!=C.of)) goto L_112a50d7;
L_112a5063:;
  /* 112a5063 mov eax, dword ptr [0x112af944] */
  EAX = (r32((uint32_t)(0x112af944)));
  /* 112a5068 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 112a506b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a506d je 0x112a50ce */
  if (C.zf) goto L_112a50ce;
  /* 112a506f test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 112a5073 je 0x112a50ce */
  if (C.zf) goto L_112a50ce;
  /* 112a5075 push eax */
  push32((uint32_t)(EAX));
  /* 112a5076 push esi */
  push32((uint32_t)(ESI));
  /* 112a5077 call 0x112a4e37 */
  push32(0x112a507cu); f_112a4e37();
  /* 112a507c mov eax, dword ptr [0x112af944] */
  EAX = (r32((uint32_t)(0x112af944)));
  /* 112a5081 pop ecx */
  ECX = (pop32());
  /* 112a5082 pop ecx */
  ECX = (pop32());
  /* 112a5083 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 112a5086 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 112a5089 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 112a508c je 0x112a50be */
  if (C.zf) goto L_112a50be;
  /* 112a508e cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5093 jne 0x112a50a4 */
  if (!C.zf) goto L_112a50a4;
  /* 112a5095 push eax */
  push32((uint32_t)(EAX));
  /* 112a5096 call 0x112a4fb7 */
  push32(0x112a509bu); f_112a4fb7();
  /* 112a509b cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a509e pop ecx */
  ECX = (pop32());
  /* 112a509f je 0x112a50be */
  if (C.zf) goto L_112a50be;
  /* 112a50a1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a50a2 jmp 0x112a50be */
  goto L_112a50be;
L_112a50a4:;
  /* 112a50a4 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a50a9 jne 0x112a50be */
  if (!C.zf) goto L_112a50be;
  /* 112a50ab test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 112a50ae je 0x112a50be */
  if (C.zf) goto L_112a50be;
  /* 112a50b0 push eax */
  push32((uint32_t)(EAX));
  /* 112a50b1 call 0x112a4fb7 */
  push32(0x112a50b6u); f_112a4fb7();
  /* 112a50b6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a50b9 pop ecx */
  ECX = (pop32());
  /* 112a50ba jne 0x112a50be */
  if (!C.zf) goto L_112a50be;
  /* 112a50bc or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_112a50be:;
  /* 112a50be mov eax, dword ptr [0x112af944] */
  EAX = (r32((uint32_t)(0x112af944)));
  /* 112a50c3 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 112a50c6 push esi */
  push32((uint32_t)(ESI));
  /* 112a50c7 call 0x112a4e89 */
  push32(0x112a50ccu); f_112a4e89();
  /* 112a50cc pop ecx */
  ECX = (pop32());
  /* 112a50cd pop ecx */
  ECX = (pop32());
L_112a50ce:;
  /* 112a50ce inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a50cf cmp esi, dword ptr [0x112b0960] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112b0960))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a50d5 jl 0x112a5063 */
  if ((C.sf!=C.of)) goto L_112a5063;
L_112a50d7:;
  /* 112a50d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a50d9 call 0x112a7877 */
  push32(0x112a50deu); f_112a7877();
  /* 112a50de cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a50e3 pop ecx */
  ECX = (pop32());
  /* 112a50e4 mov eax, ebx */
  EAX = (EBX);
  /* 112a50e6 je 0x112a50ea */
  if (C.zf) goto L_112a50ea;
  /* 112a50e8 mov eax, edi */
  EAX = (EDI);
L_112a50ea:;
  /* 112a50ea pop edi */
  EDI = (pop32());
  /* 112a50eb pop esi */
  ESI = (pop32());
  /* 112a50ec pop ebx */
  EBX = (pop32());
  /* 112a50ed ret  */
  ESPCHK(0x112a504au, _esp0);
  ESP += 4; return;
}

/* FUN_100050ee @ 0x112a50ee (220 bytes, 79 insns) */
void f_112a50ee(void) {
  FTRACE(0x112a50eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a50ee push esi */
  push32((uint32_t)(ESI));
  /* 112a50ef mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a50f3 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 112a50f6 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 112a50f8 je 0x112a51c5 */
  if (C.zf) goto L_112a51c5;
  /* 112a50fe test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 112a5100 jne 0x112a51c5 */
  if (!C.zf) goto L_112a51c5;
  /* 112a5106 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 112a5108 je 0x112a5114 */
  if (C.zf) goto L_112a5114;
  /* 112a510a or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 112a510c mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 112a510f jmp 0x112a51c5 */
  goto L_112a51c5;
L_112a5114:;
  /* 112a5114 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 112a5116 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 112a511a mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 112a511d jne 0x112a5128 */
  if (!C.zf) goto L_112a5128;
  /* 112a511f push esi */
  push32((uint32_t)(ESI));
  /* 112a5120 call 0x112a817e */
  push32(0x112a5125u); f_112a817e();
  /* 112a5125 pop ecx */
  ECX = (pop32());
  /* 112a5126 jmp 0x112a512d */
  goto L_112a512d;
L_112a5128:;
  /* 112a5128 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 112a512b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
L_112a512d:;
  /* 112a512d push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 112a5130 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 112a5133 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 112a5136 call 0x112a51ca */
  push32(0x112a513bu); f_112a51ca();
  /* 112a513b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a513e mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 112a5141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5143 je 0x112a51b4 */
  if (C.zf) goto L_112a51b4;
  /* 112a5145 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5148 je 0x112a51b4 */
  if (C.zf) goto L_112a51b4;
  /* 112a514a mov edx, dword ptr [esi + 0xc] */
  EDX = (r32((uint32_t)(ESI + 0xc)));
  /* 112a514d test dl, 0x82 */
  { uint32_t _r=(DL)&(0x82u); fl_logic(_r,8); }
  /* 112a5150 jne 0x112a5189 */
  if (!C.zf) goto L_112a5189;
  /* 112a5152 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 112a5155 push edi */
  push32((uint32_t)(EDI));
  /* 112a5156 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5159 je 0x112a5172 */
  if (C.zf) goto L_112a5172;
  /* 112a515b mov edi, ecx */
  EDI = (ECX);
  /* 112a515d sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 112a5160 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 112a5163 mov edi, dword ptr [edi*4 + 0x112af840] */
  EDI = (r32((uint32_t)(EDI*4 + 0x112af840)));
  /* 112a516a lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 112a516d lea edi, [edi + ecx*4] */
  EDI = ((uint32_t)(EDI + ECX*4));
  /* 112a5170 jmp 0x112a5177 */
  goto L_112a5177;
L_112a5172:;
  /* 112a5172 mov edi, 0x112aba38 */
  EDI = (0x112aba38u);
L_112a5177:;
  /* 112a5177 mov cl, byte ptr [edi + 4] */
  CL = (r8((uint32_t)(EDI + 0x4)));
  /* 112a517a pop edi */
  EDI = (pop32());
  /* 112a517b and cl, 0x82 */
  { uint32_t _r=(CL)&(0x82u); CL = (_r); fl_logic(_r,8); }
  /* 112a517e cmp cl, 0x82 */
  { uint32_t _a=(CL),_b=(0x82u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a5181 jne 0x112a5189 */
  if (!C.zf) goto L_112a5189;
  /* 112a5183 or dh, 0x20 */
  { uint32_t _r=(C.d.b.h)|(0x20u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 112a5186 mov dword ptr [esi + 0xc], edx */
  w32((uint32_t)(ESI + 0xc), (EDX));
L_112a5189:;
  /* 112a5189 cmp dword ptr [esi + 0x18], 0x200 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5190 jne 0x112a51a6 */
  if (!C.zf) goto L_112a51a6;
  /* 112a5192 mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 112a5195 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 112a5198 je 0x112a51a6 */
  if (C.zf) goto L_112a51a6;
  /* 112a519a test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 112a519d jne 0x112a51a6 */
  if (!C.zf) goto L_112a51a6;
  /* 112a519f mov dword ptr [esi + 0x18], 0x1000 */
  w32((uint32_t)(ESI + 0x18), (0x1000u));
L_112a51a6:;
  /* 112a51a6 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 112a51a8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a51a9 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 112a51ac movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 112a51af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a51b0 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 112a51b2 pop esi */
  ESI = (pop32());
  /* 112a51b3 ret  */
  ESPCHK(0x112a50eeu, _esp0);
  ESP += 4; return;
L_112a51b4:;
  /* 112a51b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a51b6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a51b8 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 112a51bb add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a51be or dword ptr [esi + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(EAX); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 112a51c1 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
L_112a51c5:;
  /* 112a51c5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a51c8 pop esi */
  ESI = (pop32());
  /* 112a51c9 ret  */
  ESPCHK(0x112a50eeu, _esp0);
  ESP += 4; return;
}

/* FUN_100051ca @ 0x112a51ca (101 bytes, 34 insns) */
void f_112a51ca(void) {
  FTRACE(0x112a51cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a51ca push esi */
  push32((uint32_t)(ESI));
  /* 112a51cb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a51cf cmp esi, dword ptr [0x112af940] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112af940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a51d5 jae 0x112a5217 */
  if (!C.cf) goto L_112a5217;
  /* 112a51d7 mov ecx, esi */
  ECX = (ESI);
  /* 112a51d9 mov eax, esi */
  EAX = (ESI);
  /* 112a51db sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a51de and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a51e1 mov ecx, dword ptr [ecx*4 + 0x112af840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a51e8 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 112a51eb test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a51f0 je 0x112a5217 */
  if (C.zf) goto L_112a5217;
  /* 112a51f2 push edi */
  push32((uint32_t)(EDI));
  /* 112a51f3 push esi */
  push32((uint32_t)(ESI));
  /* 112a51f4 call 0x112a7e7a */
  push32(0x112a51f9u); f_112a7e7a();
  /* 112a51f9 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a51fd push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a5201 push esi */
  push32((uint32_t)(ESI));
  /* 112a5202 call 0x112a522f */
  push32(0x112a5207u); f_112a522f();
  /* 112a5207 push esi */
  push32((uint32_t)(ESI));
  /* 112a5208 mov edi, eax */
  EDI = (EAX);
  /* 112a520a call 0x112a7ed9 */
  push32(0x112a520fu); f_112a7ed9();
  /* 112a520f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5212 mov eax, edi */
  EAX = (EDI);
  /* 112a5214 pop edi */
  EDI = (pop32());
  /* 112a5215 pop esi */
  ESI = (pop32());
  /* 112a5216 ret  */
  ESPCHK(0x112a51cau, _esp0);
  ESP += 4; return;
L_112a5217:;
  /* 112a5217 call 0x112a58f2 */
  push32(0x112a521cu); f_112a58f2();
  /* 112a521c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a5222 call 0x112a58fb */
  push32(0x112a5227u); f_112a58fb();
  /* 112a5227 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a522a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a522d pop esi */
  ESI = (pop32());
  /* 112a522e ret  */
  ESPCHK(0x112a51cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000522f @ 0x112a522f (473 bytes, 170 insns) */
void f_112a522f(void) {
  FTRACE(0x112a522fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a522f push ebp */
  push32((uint32_t)(EBP));
  /* 112a5230 mov ebp, esp */
  EBP = (ESP);
  /* 112a5232 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5235 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 112a5239 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a523d push ebx */
  push32((uint32_t)(EBX));
  /* 112a523e mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a5241 push esi */
  push32((uint32_t)(ESI));
  /* 112a5242 push edi */
  push32((uint32_t)(EDI));
  /* 112a5243 mov edx, ebx */
  EDX = (EBX);
  /* 112a5245 je 0x112a5401 */
  if (C.zf) goto L_112a5401;
  /* 112a524b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a524e mov ecx, eax */
  ECX = (EAX);
  /* 112a5250 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a5253 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a5256 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 112a5259 mov eax, dword ptr [ecx*4 + 0x112af840] */
  EAX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a5260 lea edi, [ecx*4 + 0x112af840] */
  EDI = ((uint32_t)(ECX*4 + 0x112af840));
  /* 112a5267 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 112a526a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a526c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 112a526f test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 112a5272 jne 0x112a5401 */
  if (!C.zf) goto L_112a5401;
  /* 112a5278 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 112a527b je 0x112a529a */
  if (C.zf) goto L_112a529a;
  /* 112a527d mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 112a5280 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a5282 je 0x112a529a */
  if (C.zf) goto L_112a529a;
  /* 112a5284 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 112a5287 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 112a5289 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a528b lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 112a528e mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 112a5295 mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_112a529a:;
  /* 112a529a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 112a529d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a529f push eax */
  push32((uint32_t)(EAX));
  /* 112a52a0 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a52a2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a52a5 push edx */
  push32((uint32_t)(EDX));
  /* 112a52a6 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 112a52a9 call dword ptr [0x112aa09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa09c))), 0x112a52afu);
  /* 112a52af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a52b1 jne 0x112a52ec */
  if (!C.zf) goto L_112a52ec;
  /* 112a52b3 call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a52b9u);
  /* 112a52b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 112a52bb pop esi */
  ESI = (pop32());
  /* 112a52bc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a52be jne 0x112a52d4 */
  if (!C.zf) goto L_112a52d4;
  /* 112a52c0 call 0x112a58f2 */
  push32(0x112a52c5u); f_112a58f2();
  /* 112a52c5 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a52cb call 0x112a58fb */
  push32(0x112a52d0u); f_112a58fb();
  /* 112a52d0 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 112a52d2 jmp 0x112a52e4 */
  goto L_112a52e4;
L_112a52d4:;
  /* 112a52d4 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a52d7 je 0x112a5401 */
  if (C.zf) goto L_112a5401;
  /* 112a52dd push eax */
  push32((uint32_t)(EAX));
  /* 112a52de call 0x112a587f */
  push32(0x112a52e3u); f_112a587f();
  /* 112a52e3 pop ecx */
  ECX = (pop32());
L_112a52e4:;
  /* 112a52e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a52e7 jmp 0x112a5403 */
  goto L_112a5403;
L_112a52ec:;
  /* 112a52ec mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a52ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112a52f1 add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a52f4 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 112a52f8 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 112a52fc test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 112a52fe je 0x112a53fc */
  if (C.zf) goto L_112a53fc;
  /* 112a5304 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112a5306 je 0x112a5311 */
  if (C.zf) goto L_112a5311;
  /* 112a5308 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a530b jne 0x112a5311 */
  if (!C.zf) goto L_112a5311;
  /* 112a530d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 112a530f jmp 0x112a5313 */
  goto L_112a5313;
L_112a5311:;
  /* 112a5311 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_112a5313:;
  /* 112a5313 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 112a5315 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a5318 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a531b mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 112a531e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5320 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5322 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112a5325 jae 0x112a53f6 */
  if (!C.cf) goto L_112a53f6;
L_112a532b:;
  /* 112a532b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112a532e mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 112a5330 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a5332 je 0x112a53e6 */
  if (C.zf) goto L_112a53e6;
  /* 112a5338 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a533a je 0x112a5347 */
  if (C.zf) goto L_112a5347;
  /* 112a533c mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 112a533e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a533f inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 112a5342 jmp 0x112a53d8 */
  goto L_112a53d8;
L_112a5347:;
  /* 112a5347 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a5348 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a534b jae 0x112a5365 */
  if (!C.cf) goto L_112a5365;
  /* 112a534d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 112a5350 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a5351 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a5354 jne 0x112a535c */
  if (!C.zf) goto L_112a535c;
  /* 112a5356 add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a535a jmp 0x112a53ba */
  goto L_112a53ba;
L_112a535c:;
  /* 112a535c mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 112a535f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a5360 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 112a5363 jmp 0x112a53d8 */
  goto L_112a53d8;
L_112a5365:;
  /* 112a5365 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 112a5368 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a536a push eax */
  push32((uint32_t)(EAX));
  /* 112a536b inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 112a536e lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 112a5371 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a5373 push eax */
  push32((uint32_t)(EAX));
  /* 112a5374 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a5376 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 112a5379 call dword ptr [0x112aa09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa09c))), 0x112a537fu);
  /* 112a537f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5381 jne 0x112a538d */
  if (!C.zf) goto L_112a538d;
  /* 112a5383 call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a5389u);
  /* 112a5389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a538b jne 0x112a53d4 */
  if (!C.zf) goto L_112a53d4;
L_112a538d:;
  /* 112a538d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5391 je 0x112a53d4 */
  if (C.zf) goto L_112a53d4;
  /* 112a5393 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a5395 test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 112a539a je 0x112a53af */
  if (C.zf) goto L_112a53af;
  /* 112a539c mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 112a539f cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a53a1 je 0x112a53ba */
  if (C.zf) goto L_112a53ba;
  /* 112a53a3 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 112a53a6 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 112a53a8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a53a9 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 112a53ad jmp 0x112a53d8 */
  goto L_112a53d8;
L_112a53af:;
  /* 112a53af cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a53b2 jne 0x112a53bf */
  if (!C.zf) goto L_112a53bf;
  /* 112a53b4 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a53b8 jne 0x112a53bf */
  if (!C.zf) goto L_112a53bf;
L_112a53ba:;
  /* 112a53ba mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 112a53bd jmp 0x112a53d7 */
  goto L_112a53d7;
L_112a53bf:;
  /* 112a53bf push 1 */
  push32((uint32_t)(0x1u));
  /* 112a53c1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112a53c3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a53c6 call 0x112a5b79 */
  push32(0x112a53cbu); f_112a5b79();
  /* 112a53cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a53ce cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a53d2 je 0x112a53d8 */
  if (C.zf) goto L_112a53d8;
L_112a53d4:;
  /* 112a53d4 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_112a53d7:;
  /* 112a53d7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_112a53d8:;
  /* 112a53d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a53db cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a53de jb 0x112a532b */
  if (C.cf) goto L_112a532b;
  /* 112a53e4 jmp 0x112a53f6 */
  goto L_112a53f6;
L_112a53e6:;
  /* 112a53e6 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a53e8 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 112a53ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a53ee test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 112a53f0 jne 0x112a53f6 */
  if (!C.zf) goto L_112a53f6;
  /* 112a53f2 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 112a53f4 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_112a53f6:;
  /* 112a53f6 sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a53f9 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_112a53fc:;
  /* 112a53fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a53ff jmp 0x112a5403 */
  goto L_112a5403;
L_112a5401:;
  /* 112a5401 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a5403:;
  /* 112a5403 pop edi */
  EDI = (pop32());
  /* 112a5404 pop esi */
  ESI = (pop32());
  /* 112a5405 pop ebx */
  EBX = (pop32());
  /* 112a5406 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a5407 ret  */
  ESPCHK(0x112a522fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x112a5410 (664 bytes, 267 insns) [15 switch table(s)] */
void f_112a5410(void) {
  FTRACE(0x112a5410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5410 push ebp */
  push32((uint32_t)(EBP));
  /* 112a5411 mov ebp, esp */
  EBP = (ESP);
  /* 112a5413 push edi */
  push32((uint32_t)(EDI));
  /* 112a5414 push esi */
  push32((uint32_t)(ESI));
  /* 112a5415 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a5418 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 112a541b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a541e mov eax, ecx */
  EAX = (ECX);
  /* 112a5420 mov edx, ecx */
  EDX = (ECX);
  /* 112a5422 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5424 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5426 jbe 0x112a5430 */
  if ((C.cf||C.zf)) goto L_112a5430;
  /* 112a5428 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a542a jb 0x112a55a8 */
  if (C.cf) goto L_112a55a8;
L_112a5430:;
  /* 112a5430 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112a5436 jne 0x112a544c */
  if (!C.zf) goto L_112a544c;
  /* 112a5438 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a543b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112a543e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5441 jb 0x112a546c */
  if (C.cf) goto L_112a546c;
  /* 112a5443 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a5445 jmp dword ptr [edx*4 + 0x112a5558] */
  switch (EDX) {
    case 0: goto L_112a5568;
    case 1: goto L_112a5570;
    case 2: goto L_112a557c;
    case 3: goto L_112a5590;
    default: x86_unimpl("switch@0x112a5445 out of table"); return;
  }
L_112a544c:;
  /* 112a544c mov eax, edi */
  EAX = (EDI);
  /* 112a544e mov edx, 3 */
  EDX = (0x3u);
  /* 112a5453 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5456 jb 0x112a5464 */
  if (C.cf) goto L_112a5464;
  /* 112a5458 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112a545b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a545d jmp dword ptr [eax*4 + 0x112a5470] */
  switch (EAX) {
    case 1: goto L_112a5480;
    case 2: goto L_112a54ac;
    case 3: goto L_112a54d0;
    default: x86_unimpl("switch@0x112a545d out of table"); return;
  }
L_112a5464:;
  /* 112a5464 jmp dword ptr [ecx*4 + 0x112a5568] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x112a5568)))); return;
  /* 112a546b nop  */
  /* nop */
L_112a546c:;
  /* 112a546c jmp dword ptr [ecx*4 + 0x112a54ec] */
  switch (ECX) {
    case 0: goto L_112a554f;
    case 1: goto L_112a553c;
    case 2: goto L_112a5534;
    case 3: goto L_112a552c;
    case 4: goto L_112a5524;
    case 5: goto L_112a551c;
    case 6: goto L_112a5514;
    case 7: goto L_112a550c;
    default: x86_unimpl("switch@0x112a546c out of table"); return;
  }
  /* 112a5473 nop  */
  /* nop */
L_112a5480:;
  /* 112a5480 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a5482 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a5484 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a5486 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a5489 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a548c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a548f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a5492 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a5495 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5498 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a549b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a549e jb 0x112a546c */
  if (C.cf) goto L_112a546c;
  /* 112a54a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a54a2 jmp dword ptr [edx*4 + 0x112a5558] */
  switch (EDX) {
    case 0: goto L_112a5568;
    case 1: goto L_112a5570;
    case 2: goto L_112a557c;
    case 3: goto L_112a5590;
    default: x86_unimpl("switch@0x112a54a2 out of table"); return;
  }
  /* 112a54a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a54ac:;
  /* 112a54ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a54ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a54b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a54b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a54b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a54b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a54bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a54be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a54c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a54c4 jb 0x112a546c */
  if (C.cf) goto L_112a546c;
  /* 112a54c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a54c8 jmp dword ptr [edx*4 + 0x112a5558] */
  switch (EDX) {
    case 0: goto L_112a5568;
    case 1: goto L_112a5570;
    case 2: goto L_112a557c;
    case 3: goto L_112a5590;
    default: x86_unimpl("switch@0x112a54c8 out of table"); return;
  }
  /* 112a54cf nop  */
  /* nop */
L_112a54d0:;
  /* 112a54d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a54d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a54d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a54d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a54d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a54da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a54db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a54de jb 0x112a546c */
  if (C.cf) goto L_112a546c;
  /* 112a54e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a54e2 jmp dword ptr [edx*4 + 0x112a5558] */
  switch (EDX) {
    case 0: goto L_112a5568;
    case 1: goto L_112a5570;
    case 2: goto L_112a557c;
    case 3: goto L_112a5590;
    default: x86_unimpl("switch@0x112a54e2 out of table"); return;
  }
  /* 112a54e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a550c:;
  /* 112a550c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 112a5510 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_112a5514:;
  /* 112a5514 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 112a5518 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_112a551c:;
  /* 112a551c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 112a5520 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_112a5524:;
  /* 112a5524 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 112a5528 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_112a552c:;
  /* 112a552c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 112a5530 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_112a5534:;
  /* 112a5534 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 112a5538 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_112a553c:;
  /* 112a553c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 112a5540 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 112a5544 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112a554b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a554d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112a554f:;
  /* 112a554f jmp dword ptr [edx*4 + 0x112a5558] */
  switch (EDX) {
    case 0: goto L_112a5568;
    case 1: goto L_112a5570;
    case 2: goto L_112a557c;
    case 3: goto L_112a5590;
    default: x86_unimpl("switch@0x112a554f out of table"); return;
  }
  /* 112a5556 mov edi, edi */
  EDI = (EDI);
L_112a5568:;
  /* 112a5568 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a556b pop esi */
  ESI = (pop32());
  /* 112a556c pop edi */
  EDI = (pop32());
  /* 112a556d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a556e ret  */
  ESPCHK(0x112a5410u, _esp0);
  ESP += 4; return;
  /* 112a556f nop  */
  /* nop */
L_112a5570:;
  /* 112a5570 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a5572 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a5574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a5577 pop esi */
  ESI = (pop32());
  /* 112a5578 pop edi */
  EDI = (pop32());
  /* 112a5579 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a557a ret  */
  ESPCHK(0x112a5410u, _esp0);
  ESP += 4; return;
  /* 112a557b nop  */
  /* nop */
L_112a557c:;
  /* 112a557c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a557e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a5580 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a5583 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a5586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a5589 pop esi */
  ESI = (pop32());
  /* 112a558a pop edi */
  EDI = (pop32());
  /* 112a558b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a558c ret  */
  ESPCHK(0x112a5410u, _esp0);
  ESP += 4; return;
  /* 112a558d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a5590:;
  /* 112a5590 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a5592 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 112a5594 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a5597 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a559a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a559d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a55a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a55a3 pop esi */
  ESI = (pop32());
  /* 112a55a4 pop edi */
  EDI = (pop32());
  /* 112a55a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a55a6 ret  */
  ESPCHK(0x112a5410u, _esp0);
  ESP += 4; return;
  /* 112a55a7 nop  */
  /* nop */
L_112a55a8:;
  /* 112a55a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 112a55ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 112a55b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 112a55b6 jne 0x112a55dc */
  if (!C.zf) goto L_112a55dc;
  /* 112a55b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a55bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 112a55be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a55c1 jb 0x112a55d0 */
  if (C.cf) goto L_112a55d0;
  /* 112a55c3 std  */
  C.df=1;
  /* 112a55c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a55c6 cld  */
  C.df=0;
  /* 112a55c7 jmp dword ptr [edx*4 + 0x112a56f0] */
  switch (EDX) {
    case 0: goto L_112a5700;
    case 1: goto L_112a5708;
    case 2: goto L_112a5718;
    case 3: goto L_112a572c;
    default: x86_unimpl("switch@0x112a55c7 out of table"); return;
  }
  /* 112a55ce mov edi, edi */
  EDI = (EDI);
L_112a55d0:;
  /* 112a55d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a55d2 jmp dword ptr [ecx*4 + 0x112a56a0] */
  switch (ECX) {
    case 0: goto L_112a56e7;
    default: x86_unimpl("switch@0x112a55d2 out of table"); return;
  }
  /* 112a55d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a55dc:;
  /* 112a55dc mov eax, edi */
  EAX = (EDI);
  /* 112a55de mov edx, 3 */
  EDX = (0x3u);
  /* 112a55e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a55e6 jb 0x112a55f4 */
  if (C.cf) goto L_112a55f4;
  /* 112a55e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 112a55eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a55ed jmp dword ptr [eax*4 + 0x112a55f8] */
  switch (EAX) {
    case 1: goto L_112a5608;
    case 2: goto L_112a5628;
    case 3: goto L_112a5650;
    default: x86_unimpl("switch@0x112a55ed out of table"); return;
  }
L_112a55f4:;
  /* 112a55f4 jmp dword ptr [ecx*4 + 0x112a56f0] */
  switch (ECX) {
    case 0: goto L_112a5700;
    case 1: goto L_112a5708;
    case 2: goto L_112a5718;
    case 3: goto L_112a572c;
    default: x86_unimpl("switch@0x112a55f4 out of table"); return;
  }
  /* 112a55fb nop  */
  /* nop */
L_112a5608:;
  /* 112a5608 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a560b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a560d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a5610 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 112a5611 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a5614 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 112a5615 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5618 jb 0x112a55d0 */
  if (C.cf) goto L_112a55d0;
  /* 112a561a std  */
  C.df=1;
  /* 112a561b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a561d cld  */
  C.df=0;
  /* 112a561e jmp dword ptr [edx*4 + 0x112a56f0] */
  switch (EDX) {
    case 0: goto L_112a5700;
    case 1: goto L_112a5708;
    case 2: goto L_112a5718;
    case 3: goto L_112a572c;
    default: x86_unimpl("switch@0x112a561e out of table"); return;
  }
  /* 112a5625 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a5628:;
  /* 112a5628 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a562b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a562d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a5630 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a5633 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a5636 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a5639 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a563c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a563f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5642 jb 0x112a55d0 */
  if (C.cf) goto L_112a55d0;
  /* 112a5644 std  */
  C.df=1;
  /* 112a5645 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a5647 cld  */
  C.df=0;
  /* 112a5648 jmp dword ptr [edx*4 + 0x112a56f0] */
  switch (EDX) {
    case 0: goto L_112a5700;
    case 1: goto L_112a5708;
    case 2: goto L_112a5718;
    case 3: goto L_112a572c;
    default: x86_unimpl("switch@0x112a5648 out of table"); return;
  }
  /* 112a564f nop  */
  /* nop */
L_112a5650:;
  /* 112a5650 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a5653 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a5655 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a5658 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a565b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a565e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a5661 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 112a5664 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a5667 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a566a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a566d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5670 jb 0x112a55d0 */
  if (C.cf) goto L_112a55d0;
  /* 112a5676 std  */
  C.df=1;
  /* 112a5677 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 112a5679 cld  */
  C.df=0;
  /* 112a567a jmp dword ptr [edx*4 + 0x112a56f0] */
  switch (EDX) {
    case 0: goto L_112a5700;
    case 1: goto L_112a5708;
    case 2: goto L_112a5718;
    case 3: goto L_112a572c;
    default: x86_unimpl("switch@0x112a567a out of table"); return;
  }
  /* 112a5681 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 112a5684 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 112a5685 push esi */
  push32((uint32_t)(ESI));
  /* 112a5686 sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a5688 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 112a5689 push esi */
  push32((uint32_t)(ESI));
  /* 112a568a sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a568c mov ah, 0x56 */
  AH = (0x56u);
  /* 112a568e sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a5690 mov esp, 0xc4112a56 */
  ESP = (0xc4112a56u);
  /* 112a5695 push esi */
  push32((uint32_t)(ESI));
  /* 112a5696 sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a5698 int3  */
  x86_unimpl("int3 @ 0x112a5698");
  /* 112a5699 push esi */
  push32((uint32_t)(ESI));
  /* 112a569a sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a569c aam 0x56 */
  x86_unimpl("aam @ 0x112a569c");
  /* 112a569e sub dl, byte ptr [ecx] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a56a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 112a56a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 112a56ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 112a56b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 112a56b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 112a56b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 112a56bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 112a56c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 112a56c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 112a56c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 112a56cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 112a56d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 112a56d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 112a56d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 112a56dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 112a56e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a56e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_112a56e7:;
  /* 112a56e7 jmp dword ptr [edx*4 + 0x112a56f0] */
  switch (EDX) {
    case 0: goto L_112a5700;
    case 1: goto L_112a5708;
    case 2: goto L_112a5718;
    case 3: goto L_112a572c;
    default: x86_unimpl("switch@0x112a56e7 out of table"); return;
  }
  /* 112a56ee mov edi, edi */
  EDI = (EDI);
L_112a5700:;
  /* 112a5700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a5703 pop esi */
  ESI = (pop32());
  /* 112a5704 pop edi */
  EDI = (pop32());
  /* 112a5705 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a5706 ret  */
  ESPCHK(0x112a5410u, _esp0);
  ESP += 4; return;
  /* 112a5707 nop  */
  /* nop */
L_112a5708:;
  /* 112a5708 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a570b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a570e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a5711 pop esi */
  ESI = (pop32());
  /* 112a5712 pop edi */
  EDI = (pop32());
  /* 112a5713 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a5714 ret  */
  ESPCHK(0x112a5410u, _esp0);
  ESP += 4; return;
  /* 112a5715 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_112a5718:;
  /* 112a5718 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a571b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a571e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a5721 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a5724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a5727 pop esi */
  ESI = (pop32());
  /* 112a5728 pop edi */
  EDI = (pop32());
  /* 112a5729 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a572a ret  */
  ESPCHK(0x112a5410u, _esp0);
  ESP += 4; return;
  /* 112a572b nop  */
  /* nop */
L_112a572c:;
  /* 112a572c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 112a572f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 112a5732 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 112a5735 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 112a5738 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 112a573b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 112a573e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a5741 pop esi */
  ESI = (pop32());
  /* 112a5742 pop edi */
  EDI = (pop32());
  /* 112a5743 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a5744 ret  */
  ESPCHK(0x112a5410u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x112a5745 (18 bytes, 6 insns) */
void f_112a5745(void) {
  FTRACE(0x112a5745u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5745 push dword ptr [0x112af438] */
  push32((uint32_t)(r32((uint32_t)(0x112af438))));
  /* 112a574b push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 112a574f call 0x112a5757 */
  push32(0x112a5754u); f_112a5757();
  /* 112a5754 pop ecx */
  ECX = (pop32());
  /* 112a5755 pop ecx */
  ECX = (pop32());
  /* 112a5756 ret  */
  ESPCHK(0x112a5745u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x112a5757 (44 bytes, 16 insns) */
void f_112a5757(void) {
  FTRACE(0x112a5757u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5757 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a575c ja 0x112a5780 */
  if ((!C.cf&&!C.zf)) goto L_112a5780;
L_112a575e:;
  /* 112a575e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 112a5762 call 0x112a5783 */
  push32(0x112a5767u); f_112a5783();
  /* 112a5767 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5769 pop ecx */
  ECX = (pop32());
  /* 112a576a jne 0x112a5782 */
  if (!C.zf) goto L_112a5782;
  /* 112a576c cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5770 je 0x112a5782 */
  if (C.zf) goto L_112a5782;
  /* 112a5772 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 112a5776 call 0x112a81c2 */
  push32(0x112a577bu); f_112a81c2();
  /* 112a577b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a577d pop ecx */
  ECX = (pop32());
  /* 112a577e jne 0x112a575e */
  if (!C.zf) goto L_112a575e;
L_112a5780:;
  /* 112a5780 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a5782:;
  /* 112a5782 ret  */
  ESPCHK(0x112a5757u, _esp0);
  ESP += 4; return;
}

/* FUN_10005783 @ 0x112a5783 (231 bytes, 81 insns) */
void f_112a5783(void) {
  FTRACE(0x112a5783u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5783 push ebp */
  push32((uint32_t)(EBP));
  /* 112a5784 mov ebp, esp */
  EBP = (ESP);
  /* 112a5786 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 112a5788 push 0x112aa1c0 */
  push32((uint32_t)(0x112aa1c0u));
  /* 112a578d push 0x112a7984 */
  push32((uint32_t)(0x112a7984u));
  /* 112a5792 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 112a5798 push eax */
  push32((uint32_t)(EAX));
  /* 112a5799 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 112a57a0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a57a3 push ebx */
  push32((uint32_t)(EBX));
  /* 112a57a4 push esi */
  push32((uint32_t)(ESI));
  /* 112a57a5 push edi */
  push32((uint32_t)(EDI));
  /* 112a57a6 mov eax, dword ptr [0x112af828] */
  EAX = (r32((uint32_t)(0x112af828)));
  /* 112a57ab cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a57ae jne 0x112a57f3 */
  if (!C.zf) goto L_112a57f3;
  /* 112a57b0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a57b3 cmp esi, dword ptr [0x112af820] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112af820))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a57b9 ja 0x112a5852 */
  if ((!C.cf&&!C.zf)) goto L_112a5852;
  /* 112a57bf push 9 */
  push32((uint32_t)(0x9u));
  /* 112a57c1 call 0x112a7816 */
  push32(0x112a57c6u); f_112a7816();
  /* 112a57c6 pop ecx */
  ECX = (pop32());
  /* 112a57c7 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a57cb push esi */
  push32((uint32_t)(ESI));
  /* 112a57cc call 0x112a6ca8 */
  push32(0x112a57d1u); f_112a6ca8();
  /* 112a57d1 pop ecx */
  ECX = (pop32());
  /* 112a57d2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112a57d5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a57d9 call 0x112a57ea */
  push32(0x112a57deu); f_112a57ea();
  /* 112a57de mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112a57e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a57e3 je 0x112a5852 */
  if (C.zf) goto L_112a5852;
  /* 112a57e5 jmp 0x112a5870 */
  jmp_ind(0x112a5870u); return;
  /* 112a57ea push 9 */
  push32((uint32_t)(0x9u));
  /* 112a57ec call 0x112a7877 */
  push32(0x112a57f1u); f_112a7877();
  /* 112a57f1 pop ecx */
  ECX = (pop32());
  /* 112a57f2 ret  */
  ESPCHK(0x112a5783u, _esp0);
  ESP += 4; return;
L_112a57f3:;
  /* 112a57f3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a57f6 jne 0x112a5852 */
  if (!C.zf) goto L_112a5852;
  /* 112a57f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a57fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a57fd je 0x112a5807 */
  if (C.zf) goto L_112a5807;
  /* 112a57ff lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 112a5802 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 112a5805 jmp 0x112a580a */
  goto L_112a580a;
L_112a5807:;
  /* 112a5807 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a5809 pop esi */
  ESI = (pop32());
L_112a580a:;
  /* 112a580a mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 112a580d cmp esi, dword ptr [0x112adb1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112adb1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5813 ja 0x112a5843 */
  if ((!C.cf&&!C.zf)) goto L_112a5843;
  /* 112a5815 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a5817 call 0x112a7816 */
  push32(0x112a581cu); f_112a7816();
  /* 112a581c pop ecx */
  ECX = (pop32());
  /* 112a581d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112a5824 mov eax, esi */
  EAX = (ESI);
  /* 112a5826 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112a5829 push eax */
  push32((uint32_t)(EAX));
  /* 112a582a call 0x112a7455 */
  push32(0x112a582fu); f_112a7455();
  /* 112a582f pop ecx */
  ECX = (pop32());
  /* 112a5830 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 112a5833 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a5837 call 0x112a5849 */
  push32(0x112a583cu); f_112a5849();
  /* 112a583c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 112a583f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5841 jne 0x112a5870 */
  if (!C.zf) { jmp_ind(0x112a5870u); return; }
L_112a5843:;
  /* 112a5843 push esi */
  push32((uint32_t)(ESI));
  /* 112a5844 jmp 0x112a5862 */
  goto L_112a5862;
  /* 112a5846 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 112a5849 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a584b call 0x112a7877 */
  push32(0x112a5850u); f_112a7877();
  /* 112a5850 pop ecx */
  ECX = (pop32());
  /* 112a5851 ret  */
  ESPCHK(0x112a5783u, _esp0);
  ESP += 4; return;
L_112a5852:;
  /* 112a5852 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a5855 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5857 jne 0x112a585c */
  if (!C.zf) goto L_112a585c;
  /* 112a5859 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a585b pop eax */
  EAX = (pop32());
L_112a585c:;
  /* 112a585c add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a585f and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 112a5861 push eax */
  push32((uint32_t)(EAX));
L_112a5862:;
  /* 112a5862 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a5864 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
}

/* FUN_100057ea @ 0x112a57ea (9 bytes, 4 insns) */
void f_112a57ea(void) {
  FTRACE(0x112a57eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a57ea push 9 */
  push32((uint32_t)(0x9u));
  /* 112a57ec call 0x112a7877 */
  push32(0x112a57f1u); f_112a7877();
  /* 112a57f1 pop ecx */
  ECX = (pop32());
  /* 112a57f2 ret  */
  ESPCHK(0x112a57eau, _esp0);
  ESP += 4; return;
}

/* FUN_10005849 @ 0x112a5849 (9 bytes, 4 insns) */
void f_112a5849(void) {
  FTRACE(0x112a5849u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5849 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a584b call 0x112a7877 */
  push32(0x112a5850u); f_112a7877();
  /* 112a5850 pop ecx */
  ECX = (pop32());
  /* 112a5851 ret  */
  ESPCHK(0x112a5849u, _esp0);
  ESP += 4; return;
}

/* FUN_1000587f @ 0x112a587f (115 bytes, 37 insns) */
void f_112a587f(void) {
  FTRACE(0x112a587fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a587f push esi */
  push32((uint32_t)(ESI));
  /* 112a5880 call 0x112a58fb */
  push32(0x112a5885u); f_112a58fb();
  /* 112a5885 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a5889 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a588b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112a588d mov eax, 0x112ab8d0 */
  EAX = (0x112ab8d0u);
L_112a5892:;
  /* 112a5892 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5894 je 0x112a58b8 */
  if (C.zf) goto L_112a58b8;
  /* 112a5896 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5899 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a589a cmp eax, 0x112aba38 */
  { uint32_t _a=(EAX),_b=(0x112aba38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a589f jl 0x112a5892 */
  if ((C.sf!=C.of)) goto L_112a5892;
  /* 112a58a1 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a58a4 jb 0x112a58c8 */
  if (C.cf) goto L_112a58c8;
  /* 112a58a6 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a58a9 ja 0x112a58c8 */
  if ((!C.cf&&!C.zf)) goto L_112a58c8;
  /* 112a58ab call 0x112a58f2 */
  push32(0x112a58b0u); f_112a58f2();
  /* 112a58b0 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 112a58b6 pop esi */
  ESI = (pop32());
  /* 112a58b7 ret  */
  ESPCHK(0x112a587fu, _esp0);
  ESP += 4; return;
L_112a58b8:;
  /* 112a58b8 call 0x112a58f2 */
  push32(0x112a58bdu); f_112a58f2();
  /* 112a58bd mov ecx, dword ptr [esi*8 + 0x112ab8d4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x112ab8d4)));
  /* 112a58c4 pop esi */
  ESI = (pop32());
  /* 112a58c5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112a58c7 ret  */
  ESPCHK(0x112a587fu, _esp0);
  ESP += 4; return;
L_112a58c8:;
  /* 112a58c8 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a58ce jb 0x112a58e5 */
  if (C.cf) goto L_112a58e5;
  /* 112a58d0 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a58d6 ja 0x112a58e5 */
  if ((!C.cf&&!C.zf)) goto L_112a58e5;
  /* 112a58d8 call 0x112a58f2 */
  push32(0x112a58ddu); f_112a58f2();
  /* 112a58dd mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 112a58e3 pop esi */
  ESI = (pop32());
  /* 112a58e4 ret  */
  ESPCHK(0x112a587fu, _esp0);
  ESP += 4; return;
L_112a58e5:;
  /* 112a58e5 call 0x112a58f2 */
  push32(0x112a58eau); f_112a58f2();
  /* 112a58ea mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 112a58f0 pop esi */
  ESI = (pop32());
  /* 112a58f1 ret  */
  ESPCHK(0x112a587fu, _esp0);
  ESP += 4; return;
}

/* FUN_100058f2 @ 0x112a58f2 (9 bytes, 3 insns) */
void f_112a58f2(void) {
  FTRACE(0x112a58f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a58f2 call 0x112a5fc7 */
  push32(0x112a58f7u); f_112a5fc7();
  /* 112a58f7 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a58fa ret  */
  ESPCHK(0x112a58f2u, _esp0);
  ESP += 4; return;
}

/* FUN_100058fb @ 0x112a58fb (9 bytes, 3 insns) */
void f_112a58fb(void) {
  FTRACE(0x112a58fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a58fb call 0x112a5fc7 */
  push32(0x112a5900u); f_112a5fc7();
  /* 112a5900 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5903 ret  */
  ESPCHK(0x112a58fbu, _esp0);
  ESP += 4; return;
}

/* FUN_10005904 @ 0x112a5904 (444 bytes, 150 insns) */
void f_112a5904(void) {
  FTRACE(0x112a5904u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5904 push ebp */
  push32((uint32_t)(EBP));
  /* 112a5905 mov ebp, esp */
  EBP = (ESP);
  /* 112a5907 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a590a push ebx */
  push32((uint32_t)(EBX));
  /* 112a590b push esi */
  push32((uint32_t)(ESI));
  /* 112a590c push edi */
  push32((uint32_t)(EDI));
  /* 112a590d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 112a5912 call 0x112a5745 */
  push32(0x112a5917u); f_112a5745();
  /* 112a5917 mov esi, eax */
  ESI = (EAX);
  /* 112a5919 pop ecx */
  ECX = (pop32());
  /* 112a591a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a591c jne 0x112a5926 */
  if (!C.zf) goto L_112a5926;
  /* 112a591e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 112a5920 call 0x112a4b58 */
  push32(0x112a5925u); f_112a4b58();
  /* 112a5925 pop ecx */
  ECX = (pop32());
L_112a5926:;
  /* 112a5926 mov dword ptr [0x112af840], esi */
  w32((uint32_t)(0x112af840), (ESI));
  /* 112a592c mov dword ptr [0x112af940], 0x20 */
  w32((uint32_t)(0x112af940), (0x20u));
  /* 112a5936 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_112a593c:;
  /* 112a593c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a593e jae 0x112a595e */
  if (!C.cf) goto L_112a595e;
  /* 112a5940 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 112a5944 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 112a5947 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 112a594b mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 112a594f mov eax, dword ptr [0x112af840] */
  EAX = (r32((uint32_t)(0x112af840)));
  /* 112a5954 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5957 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a595c jmp 0x112a593c */
  goto L_112a593c;
L_112a595e:;
  /* 112a595e lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 112a5961 push eax */
  push32((uint32_t)(EAX));
  /* 112a5962 call dword ptr [0x112aa004] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa004))), 0x112a5968u);
  /* 112a5968 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 112a596d je 0x112a5a44 */
  if (C.zf) goto L_112a5a44;
  /* 112a5973 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 112a5976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5978 je 0x112a5a44 */
  if (C.zf) goto L_112a5a44;
  /* 112a597e mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 112a5980 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 112a5983 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 112a5986 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112a5989 mov eax, 0x800 */
  EAX = (0x800u);
  /* 112a598e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5990 jl 0x112a5994 */
  if ((C.sf!=C.of)) goto L_112a5994;
  /* 112a5992 mov edi, eax */
  EDI = (EAX);
L_112a5994:;
  /* 112a5994 cmp dword ptr [0x112af940], edi */
  { uint32_t _a=(r32((uint32_t)(0x112af940))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a599a jge 0x112a59f2 */
  if ((C.sf==C.of)) goto L_112a59f2;
  /* 112a599c mov esi, 0x112af844 */
  ESI = (0x112af844u);
L_112a59a1:;
  /* 112a59a1 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 112a59a6 call 0x112a5745 */
  push32(0x112a59abu); f_112a5745();
  /* 112a59ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a59ad pop ecx */
  ECX = (pop32());
  /* 112a59ae je 0x112a59ec */
  if (C.zf) goto L_112a59ec;
  /* 112a59b0 add dword ptr [0x112af940], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x112af940))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x112af940), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a59b7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 112a59b9 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_112a59bf:;
  /* 112a59bf cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a59c1 jae 0x112a59df */
  if (!C.cf) goto L_112a59df;
  /* 112a59c3 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 112a59c7 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a59ca and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 112a59ce mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 112a59d2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 112a59d4 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a59d7 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a59dd jmp 0x112a59bf */
  goto L_112a59bf;
L_112a59df:;
  /* 112a59df add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a59e2 cmp dword ptr [0x112af940], edi */
  { uint32_t _a=(r32((uint32_t)(0x112af940))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a59e8 jl 0x112a59a1 */
  if ((C.sf!=C.of)) goto L_112a59a1;
  /* 112a59ea jmp 0x112a59f2 */
  goto L_112a59f2;
L_112a59ec:;
  /* 112a59ec mov edi, dword ptr [0x112af940] */
  EDI = (r32((uint32_t)(0x112af940)));
L_112a59f2:;
  /* 112a59f2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a59f4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a59f6 jle 0x112a5a44 */
  if ((C.zf||C.sf!=C.of)) goto L_112a5a44;
L_112a59f8:;
  /* 112a59f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a59fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 112a59fd cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5a00 je 0x112a5a3a */
  if (C.zf) goto L_112a5a3a;
  /* 112a5a02 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 112a5a04 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 112a5a06 je 0x112a5a3a */
  if (C.zf) goto L_112a5a3a;
  /* 112a5a08 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 112a5a0a jne 0x112a5a17 */
  if (!C.zf) goto L_112a5a17;
  /* 112a5a0c push ecx */
  push32((uint32_t)(ECX));
  /* 112a5a0d call dword ptr [0x112aa0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0ac))), 0x112a5a13u);
  /* 112a5a13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5a15 je 0x112a5a3a */
  if (C.zf) goto L_112a5a3a;
L_112a5a17:;
  /* 112a5a17 mov ecx, esi */
  ECX = (ESI);
  /* 112a5a19 mov eax, esi */
  EAX = (ESI);
  /* 112a5a1b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a5a1e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a5a21 mov ecx, dword ptr [ecx*4 + 0x112af840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a5a28 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 112a5a2b lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 112a5a2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a5a31 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 112a5a33 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112a5a35 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 112a5a37 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_112a5a3a:;
  /* 112a5a3a add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a5a3e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a5a3f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a5a40 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5a42 jl 0x112a59f8 */
  if ((C.sf!=C.of)) goto L_112a59f8;
L_112a5a44:;
  /* 112a5a44 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_112a5a46:;
  /* 112a5a46 mov ecx, dword ptr [0x112af840] */
  ECX = (r32((uint32_t)(0x112af840)));
  /* 112a5a4c lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 112a5a4f cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5a53 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 112a5a56 jne 0x112a5aa5 */
  if (!C.zf) goto L_112a5aa5;
  /* 112a5a58 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a5a5a mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 112a5a5e jne 0x112a5a65 */
  if (!C.zf) goto L_112a5a65;
  /* 112a5a60 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 112a5a62 pop eax */
  EAX = (pop32());
  /* 112a5a63 jmp 0x112a5a6f */
  goto L_112a5a6f;
L_112a5a65:;
  /* 112a5a65 mov eax, ebx */
  EAX = (EBX);
  /* 112a5a67 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a5a68 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 112a5a6a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5a6c add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_112a5a6f:;
  /* 112a5a6f push eax */
  push32((uint32_t)(EAX));
  /* 112a5a70 call dword ptr [0x112aa0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0a8))), 0x112a5a76u);
  /* 112a5a76 mov edi, eax */
  EDI = (EAX);
  /* 112a5a78 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5a7b je 0x112a5a94 */
  if (C.zf) goto L_112a5a94;
  /* 112a5a7d push edi */
  push32((uint32_t)(EDI));
  /* 112a5a7e call dword ptr [0x112aa0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0ac))), 0x112a5a84u);
  /* 112a5a84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5a86 je 0x112a5a94 */
  if (C.zf) goto L_112a5a94;
  /* 112a5a88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a5a8d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 112a5a8f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5a92 jne 0x112a5a9a */
  if (!C.zf) goto L_112a5a9a;
L_112a5a94:;
  /* 112a5a94 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 112a5a98 jmp 0x112a5aa9 */
  goto L_112a5aa9;
L_112a5a9a:;
  /* 112a5a9a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5a9d jne 0x112a5aa9 */
  if (!C.zf) goto L_112a5aa9;
  /* 112a5a9f or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 112a5aa3 jmp 0x112a5aa9 */
  goto L_112a5aa9;
L_112a5aa5:;
  /* 112a5aa5 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_112a5aa9:;
  /* 112a5aa9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a5aaa cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5aad jl 0x112a5a46 */
  if ((C.sf!=C.of)) goto L_112a5a46;
  /* 112a5aaf push dword ptr [0x112af940] */
  push32((uint32_t)(r32((uint32_t)(0x112af940))));
  /* 112a5ab5 call dword ptr [0x112aa0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0a4))), 0x112a5abbu);
  /* 112a5abb pop edi */
  EDI = (pop32());
  /* 112a5abc pop esi */
  ESI = (pop32());
  /* 112a5abd pop ebx */
  EBX = (pop32());
  /* 112a5abe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a5abf ret  */
  ESPCHK(0x112a5904u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ac0 @ 0x112a5ac0 (84 bytes, 33 insns) */
void f_112a5ac0(void) {
  FTRACE(0x112a5ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5ac0 push ebx */
  push32((uint32_t)(EBX));
  /* 112a5ac1 push esi */
  push32((uint32_t)(ESI));
  /* 112a5ac2 push edi */
  push32((uint32_t)(EDI));
  /* 112a5ac3 mov esi, 0x112af840 */
  ESI = (0x112af840u);
L_112a5ac8:;
  /* 112a5ac8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112a5aca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5acc je 0x112a5b05 */
  if (C.zf) goto L_112a5b05;
  /* 112a5ace mov edi, eax */
  EDI = (EAX);
  /* 112a5ad0 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5ad5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5ad7 jae 0x112a5afa */
  if (!C.cf) goto L_112a5afa;
  /* 112a5ad9 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_112a5adc:;
  /* 112a5adc cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5ae0 je 0x112a5ae9 */
  if (C.zf) goto L_112a5ae9;
  /* 112a5ae2 push ebx */
  push32((uint32_t)(EBX));
  /* 112a5ae3 call dword ptr [0x112aa000] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa000))), 0x112a5ae9u);
L_112a5ae9:;
  /* 112a5ae9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112a5aeb add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5aee add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5af3 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5af6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5af8 jb 0x112a5adc */
  if (C.cf) goto L_112a5adc;
L_112a5afa:;
  /* 112a5afa push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112a5afc call 0x112a4b8b */
  push32(0x112a5b01u); f_112a4b8b();
  /* 112a5b01 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 112a5b04 pop ecx */
  ECX = (pop32());
L_112a5b05:;
  /* 112a5b05 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5b08 cmp esi, 0x112af940 */
  { uint32_t _a=(ESI),_b=(0x112af940u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5b0e jl 0x112a5ac8 */
  if ((C.sf!=C.of)) goto L_112a5ac8;
  /* 112a5b10 pop edi */
  EDI = (pop32());
  /* 112a5b11 pop esi */
  ESI = (pop32());
  /* 112a5b12 pop ebx */
  EBX = (pop32());
  /* 112a5b13 ret  */
  ESPCHK(0x112a5ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b14 @ 0x112a5b14 (101 bytes, 34 insns) */
void f_112a5b14(void) {
  FTRACE(0x112a5b14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5b14 push esi */
  push32((uint32_t)(ESI));
  /* 112a5b15 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a5b19 cmp esi, dword ptr [0x112af940] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112af940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5b1f jae 0x112a5b61 */
  if (!C.cf) goto L_112a5b61;
  /* 112a5b21 mov ecx, esi */
  ECX = (ESI);
  /* 112a5b23 mov eax, esi */
  EAX = (ESI);
  /* 112a5b25 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a5b28 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 112a5b2b mov ecx, dword ptr [ecx*4 + 0x112af840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a5b32 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 112a5b35 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 112a5b3a je 0x112a5b61 */
  if (C.zf) goto L_112a5b61;
  /* 112a5b3c push edi */
  push32((uint32_t)(EDI));
  /* 112a5b3d push esi */
  push32((uint32_t)(ESI));
  /* 112a5b3e call 0x112a7e7a */
  push32(0x112a5b43u); f_112a7e7a();
  /* 112a5b43 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a5b47 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a5b4b push esi */
  push32((uint32_t)(ESI));
  /* 112a5b4c call 0x112a5b79 */
  push32(0x112a5b51u); f_112a5b79();
  /* 112a5b51 push esi */
  push32((uint32_t)(ESI));
  /* 112a5b52 mov edi, eax */
  EDI = (EAX);
  /* 112a5b54 call 0x112a7ed9 */
  push32(0x112a5b59u); f_112a7ed9();
  /* 112a5b59 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5b5c mov eax, edi */
  EAX = (EDI);
  /* 112a5b5e pop edi */
  EDI = (pop32());
  /* 112a5b5f pop esi */
  ESI = (pop32());
  /* 112a5b60 ret  */
  ESPCHK(0x112a5b14u, _esp0);
  ESP += 4; return;
L_112a5b61:;
  /* 112a5b61 call 0x112a58f2 */
  push32(0x112a5b66u); f_112a58f2();
  /* 112a5b66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a5b6c call 0x112a58fb */
  push32(0x112a5b71u); f_112a58fb();
  /* 112a5b71 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a5b74 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a5b77 pop esi */
  ESI = (pop32());
  /* 112a5b78 ret  */
  ESPCHK(0x112a5b14u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b79 @ 0x112a5b79 (115 bytes, 41 insns) */
void f_112a5b79(void) {
  FTRACE(0x112a5b79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5b79 push esi */
  push32((uint32_t)(ESI));
  /* 112a5b7a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a5b7e push edi */
  push32((uint32_t)(EDI));
  /* 112a5b7f push esi */
  push32((uint32_t)(ESI));
  /* 112a5b80 call 0x112a7e38 */
  push32(0x112a5b85u); f_112a7e38();
  /* 112a5b85 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5b88 pop ecx */
  ECX = (pop32());
  /* 112a5b89 jne 0x112a5b98 */
  if (!C.zf) goto L_112a5b98;
  /* 112a5b8b call 0x112a58f2 */
  push32(0x112a5b90u); f_112a58f2();
  /* 112a5b90 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 112a5b96 jmp 0x112a5bc5 */
  goto L_112a5bc5;
L_112a5b98:;
  /* 112a5b98 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 112a5b9c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a5b9e push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 112a5ba2 push eax */
  push32((uint32_t)(EAX));
  /* 112a5ba3 call dword ptr [0x112aa0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0b8))), 0x112a5ba9u);
  /* 112a5ba9 mov edi, eax */
  EDI = (EAX);
  /* 112a5bab cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5bae jne 0x112a5bb8 */
  if (!C.zf) goto L_112a5bb8;
  /* 112a5bb0 call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a5bb6u);
  /* 112a5bb6 jmp 0x112a5bba */
  goto L_112a5bba;
L_112a5bb8:;
  /* 112a5bb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a5bba:;
  /* 112a5bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5bbc je 0x112a5bca */
  if (C.zf) goto L_112a5bca;
  /* 112a5bbe push eax */
  push32((uint32_t)(EAX));
  /* 112a5bbf call 0x112a587f */
  push32(0x112a5bc4u); f_112a587f();
  /* 112a5bc4 pop ecx */
  ECX = (pop32());
L_112a5bc5:;
  /* 112a5bc5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a5bc8 jmp 0x112a5be9 */
  goto L_112a5be9;
L_112a5bca:;
  /* 112a5bca mov ecx, esi */
  ECX = (ESI);
  /* 112a5bcc and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 112a5bcf sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 112a5bd2 mov eax, esi */
  EAX = (ESI);
  /* 112a5bd4 mov ecx, dword ptr [ecx*4 + 0x112af840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x112af840)));
  /* 112a5bdb lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 112a5bde and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 112a5be3 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 112a5be7 mov eax, edi */
  EAX = (EDI);
L_112a5be9:;
  /* 112a5be9 pop edi */
  EDI = (pop32());
  /* 112a5bea pop esi */
  ESI = (pop32());
  /* 112a5beb ret  */
  ESPCHK(0x112a5b79u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bec @ 0x112a5bec (368 bytes, 124 insns) */
void f_112a5bec(void) {
  FTRACE(0x112a5becu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5bec push ebp */
  push32((uint32_t)(EBP));
  /* 112a5bed mov ebp, esp */
  EBP = (ESP);
  /* 112a5bef push ecx */
  push32((uint32_t)(ECX));
  /* 112a5bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 112a5bf1 push ebx */
  push32((uint32_t)(EBX));
  /* 112a5bf2 push esi */
  push32((uint32_t)(ESI));
  /* 112a5bf3 mov esi, dword ptr [0x112af440] */
  ESI = (r32((uint32_t)(0x112af440)));
  /* 112a5bf9 push edi */
  push32((uint32_t)(EDI));
  /* 112a5bfa mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a5bfd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a5bff mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 112a5c02 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 112a5c05 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 112a5c07 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a5c09 je 0x112a5c25 */
  if (C.zf) goto L_112a5c25;
  /* 112a5c0b cmp al, 0x72 */
  { uint32_t _a=(AL),_b=(0x72u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a5c0d je 0x112a5c1e */
  if (C.zf) goto L_112a5c1e;
  /* 112a5c0f cmp al, 0x77 */
  { uint32_t _a=(AL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a5c11 jne 0x112a5d39 */
  if (!C.zf) goto L_112a5d39;
  /* 112a5c17 mov ecx, 0x301 */
  ECX = (0x301u);
  /* 112a5c1c jmp 0x112a5c2a */
  goto L_112a5c2a;
L_112a5c1e:;
  /* 112a5c1e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a5c20 or esi, 1 */
  { uint32_t _r=(ESI)|(0x1u); ESI = (_r); fl_logic(_r,32); }
  /* 112a5c23 jmp 0x112a5c2d */
  goto L_112a5c2d;
L_112a5c25:;
  /* 112a5c25 mov ecx, 0x109 */
  ECX = (0x109u);
L_112a5c2a:;
  /* 112a5c2a or esi, 2 */
  { uint32_t _r=(ESI)|(0x2u); ESI = (_r); fl_logic(_r,32); }
L_112a5c2d:;
  /* 112a5c2d push 1 */
  push32((uint32_t)(0x1u));
  /* 112a5c2f pop edx */
  EDX = (pop32());
L_112a5c30:;
  /* 112a5c30 mov al, byte ptr [edi + 1] */
  AL = (r8((uint32_t)(EDI + 0x1)));
  /* 112a5c33 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a5c34 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a5c36 je 0x112a5d1f */
  if (C.zf) goto L_112a5d1f;
  /* 112a5c3c cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5c3e je 0x112a5d1f */
  if (C.zf) goto L_112a5d1f;
  /* 112a5c44 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 112a5c47 cmp eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5c4a jg 0x112a5cbe */
  if ((!C.zf&&C.sf==C.of)) goto L_112a5cbe;
  /* 112a5c4c je 0x112a5cae */
  if (C.zf) goto L_112a5cae;
  /* 112a5c4e sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5c51 je 0x112a5c98 */
  if (C.zf) goto L_112a5c98;
  /* 112a5c53 sub eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5c56 je 0x112a5c8e */
  if (C.zf) goto L_112a5c8e;
  /* 112a5c58 sub eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5c5b je 0x112a5c79 */
  if (C.zf) goto L_112a5c79;
  /* 112a5c5d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a5c5e jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5c64 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5c67 jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5c6d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112a5c74 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 112a5c77 jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5c79:;
  /* 112a5c79 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5c7c jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5c82 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 112a5c89 or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 112a5c8c jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5c8e:;
  /* 112a5c8e test cl, 0x40 */
  { uint32_t _r=(CL)&(0x40u); fl_logic(_r,8); }
  /* 112a5c91 jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5c93 or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 112a5c96 jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5c98:;
  /* 112a5c98 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 112a5c9b jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5c9d and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 112a5ca0 and esi, 0xfffffffc */
  { uint32_t _r=(ESI)&(0xfffffffcu); ESI = (_r); fl_logic(_r,32); }
  /* 112a5ca3 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 112a5ca6 or esi, 0x80 */
  { uint32_t _r=(ESI)|(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 112a5cac jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5cae:;
  /* 112a5cae mov eax, 0x1000 */
  EAX = (0x1000u);
  /* 112a5cb3 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 112a5cb5 jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5cb7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 112a5cb9 jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5cbe:;
  /* 112a5cbe sub eax, 0x62 */
  { uint32_t _a=(EAX),_b=(0x62u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5cc1 je 0x112a5d0b */
  if (C.zf) goto L_112a5d0b;
  /* 112a5cc3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a5cc4 je 0x112a5cf4 */
  if (C.zf) goto L_112a5cf4;
  /* 112a5cc6 sub eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5cc9 je 0x112a5cdd */
  if (C.zf) goto L_112a5cdd;
  /* 112a5ccb sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5cce jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5cd0 test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 112a5cd3 jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5cd5 or ch, 0x40 */
  { uint32_t _r=(C.c.b.h)|(0x40u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 112a5cd8 jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5cdd:;
  /* 112a5cdd cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5ce0 jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5ce2 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 112a5ce9 and esi, 0xffffbfff */
  { uint32_t _r=(ESI)&(0xffffbfffu); ESI = (_r); fl_logic(_r,32); }
  /* 112a5cef jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5cf4:;
  /* 112a5cf4 cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5cf7 jne 0x112a5d10 */
  if (!C.zf) goto L_112a5d10;
  /* 112a5cf9 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 112a5d00 or esi, 0x4000 */
  { uint32_t _r=(ESI)|(0x4000u); ESI = (_r); fl_logic(_r,32); }
  /* 112a5d06 jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5d0b:;
  /* 112a5d0b test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 112a5d0e je 0x112a5d17 */
  if (C.zf) goto L_112a5d17;
L_112a5d10:;
  /* 112a5d10 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112a5d12 jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5d17:;
  /* 112a5d17 or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 112a5d1a jmp 0x112a5c30 */
  goto L_112a5c30;
L_112a5d1f:;
  /* 112a5d1f push 0x1a4 */
  push32((uint32_t)(0x1a4u));
  /* 112a5d24 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 112a5d27 push ecx */
  push32((uint32_t)(ECX));
  /* 112a5d28 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 112a5d2b call 0x112a81dd */
  push32(0x112a5d30u); f_112a81dd();
  /* 112a5d30 mov ecx, eax */
  ECX = (EAX);
  /* 112a5d32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5d35 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5d37 jge 0x112a5d3d */
  if ((C.sf==C.of)) goto L_112a5d3d;
L_112a5d39:;
  /* 112a5d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a5d3b jmp 0x112a5d57 */
  goto L_112a5d57;
L_112a5d3d:;
  /* 112a5d3d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112a5d40 inc dword ptr [0x112af27c] */
  { uint32_t _r=(r32((uint32_t)(0x112af27c)))+1; w32((uint32_t)(0x112af27c), (_r)); fl_inc(_r,32); }
  /* 112a5d46 mov dword ptr [eax + 0xc], esi */
  w32((uint32_t)(EAX + 0xc), (ESI));
  /* 112a5d49 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 112a5d4c mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 112a5d4e mov dword ptr [eax + 8], ebx */
  w32((uint32_t)(EAX + 0x8), (EBX));
  /* 112a5d51 mov dword ptr [eax + 0x1c], ebx */
  w32((uint32_t)(EAX + 0x1c), (EBX));
  /* 112a5d54 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
L_112a5d57:;
  /* 112a5d57 pop edi */
  EDI = (pop32());
  /* 112a5d58 pop esi */
  ESI = (pop32());
  /* 112a5d59 pop ebx */
  EBX = (pop32());
  /* 112a5d5a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a5d5b ret  */
  ESPCHK(0x112a5becu, _esp0);
  ESP += 4; return;
}

/* FUN_10005d5c @ 0x112a5d5c (200 bytes, 73 insns) */
void f_112a5d5c(void) {
  FTRACE(0x112a5d5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5d5c push ebx */
  push32((uint32_t)(EBX));
  /* 112a5d5d push esi */
  push32((uint32_t)(ESI));
  /* 112a5d5e push edi */
  push32((uint32_t)(EDI));
  /* 112a5d5f push 2 */
  push32((uint32_t)(0x2u));
  /* 112a5d61 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a5d63 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a5d65 call 0x112a7816 */
  push32(0x112a5d6au); f_112a7816();
  /* 112a5d6a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a5d6c cmp dword ptr [0x112b0960], ebx */
  { uint32_t _a=(r32((uint32_t)(0x112b0960))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5d72 pop ecx */
  ECX = (pop32());
  /* 112a5d73 jle 0x112a5e16 */
  if ((C.zf||C.sf!=C.of)) goto L_112a5e16;
L_112a5d79:;
  /* 112a5d79 mov eax, dword ptr [0x112af944] */
  EAX = (r32((uint32_t)(0x112af944)));
  /* 112a5d7e mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 112a5d81 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5d83 je 0x112a5dbc */
  if (C.zf) goto L_112a5dbc;
  /* 112a5d85 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 112a5d89 jne 0x112a5dac */
  if (!C.zf) goto L_112a5dac;
  /* 112a5d8b push eax */
  push32((uint32_t)(EAX));
  /* 112a5d8c push esi */
  push32((uint32_t)(ESI));
  /* 112a5d8d call 0x112a4e37 */
  push32(0x112a5d92u); f_112a4e37();
  /* 112a5d92 pop ecx */
  ECX = (pop32());
  /* 112a5d93 pop ecx */
  ECX = (pop32());
  /* 112a5d94 mov ecx, dword ptr [0x112af944] */
  ECX = (r32((uint32_t)(0x112af944)));
  /* 112a5d9a mov eax, dword ptr [ecx + esi*4] */
  EAX = (r32((uint32_t)(ECX + ESI*4)));
  /* 112a5d9d test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 112a5da1 je 0x112a5db7 */
  if (C.zf) goto L_112a5db7;
  /* 112a5da3 push eax */
  push32((uint32_t)(EAX));
  /* 112a5da4 push esi */
  push32((uint32_t)(ESI));
  /* 112a5da5 call 0x112a4e89 */
  push32(0x112a5daau); f_112a4e89();
  /* 112a5daa pop ecx */
  ECX = (pop32());
  /* 112a5dab pop ecx */
  ECX = (pop32());
L_112a5dac:;
  /* 112a5dac inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a5dad cmp esi, dword ptr [0x112b0960] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112b0960))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5db3 jl 0x112a5d79 */
  if ((C.sf!=C.of)) goto L_112a5d79;
  /* 112a5db5 jmp 0x112a5e16 */
  goto L_112a5e16;
L_112a5db7:;
  /* 112a5db7 mov edi, dword ptr [ecx + esi*4] */
  EDI = (r32((uint32_t)(ECX + ESI*4)));
  /* 112a5dba jmp 0x112a5e00 */
  goto L_112a5e00;
L_112a5dbc:;
  /* 112a5dbc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 112a5dbe shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 112a5dc1 call 0x112a5745 */
  push32(0x112a5dc6u); f_112a5745();
  /* 112a5dc6 pop ecx */
  ECX = (pop32());
  /* 112a5dc7 mov ecx, dword ptr [0x112af944] */
  ECX = (r32((uint32_t)(0x112af944)));
  /* 112a5dcd mov dword ptr [esi + ecx], eax */
  w32((uint32_t)(ESI + ECX*1), (EAX));
  /* 112a5dd0 mov eax, dword ptr [0x112af944] */
  EAX = (r32((uint32_t)(0x112af944)));
  /* 112a5dd5 mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 112a5dd8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5dda je 0x112a5e16 */
  if (C.zf) goto L_112a5e16;
  /* 112a5ddc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5ddf push eax */
  push32((uint32_t)(EAX));
  /* 112a5de0 call dword ptr [0x112aa0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0bc))), 0x112a5de6u);
  /* 112a5de6 mov eax, dword ptr [0x112af944] */
  EAX = (r32((uint32_t)(0x112af944)));
  /* 112a5deb mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 112a5dee add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5df1 push eax */
  push32((uint32_t)(EAX));
  /* 112a5df2 call dword ptr [0x112aa08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa08c))), 0x112a5df8u);
  /* 112a5df8 mov eax, dword ptr [0x112af944] */
  EAX = (r32((uint32_t)(0x112af944)));
  /* 112a5dfd mov edi, dword ptr [esi + eax] */
  EDI = (r32((uint32_t)(ESI + EAX*1)));
L_112a5e00:;
  /* 112a5e00 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5e02 je 0x112a5e16 */
  if (C.zf) goto L_112a5e16;
  /* 112a5e04 or dword ptr [edi + 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI + 0x10)))|(0xffffffffu); w32((uint32_t)(EDI + 0x10), (_r)); fl_logic(_r,32); }
  /* 112a5e08 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
  /* 112a5e0b mov dword ptr [edi + 0xc], ebx */
  w32((uint32_t)(EDI + 0xc), (EBX));
  /* 112a5e0e mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 112a5e11 mov dword ptr [edi], ebx */
  w32((uint32_t)(EDI), (EBX));
  /* 112a5e13 mov dword ptr [edi + 0x1c], ebx */
  w32((uint32_t)(EDI + 0x1c), (EBX));
L_112a5e16:;
  /* 112a5e16 push 2 */
  push32((uint32_t)(0x2u));
  /* 112a5e18 call 0x112a7877 */
  push32(0x112a5e1du); f_112a7877();
  /* 112a5e1d pop ecx */
  ECX = (pop32());
  /* 112a5e1e mov eax, edi */
  EAX = (EDI);
  /* 112a5e20 pop edi */
  EDI = (pop32());
  /* 112a5e21 pop esi */
  ESI = (pop32());
  /* 112a5e22 pop ebx */
  EBX = (pop32());
  /* 112a5e23 ret  */
  ESPCHK(0x112a5d5cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005e24 @ 0x112a5e24 (45 bytes, 12 insns) */
void f_112a5e24(void) {
  FTRACE(0x112a5e24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5e24 mov eax, dword ptr [0x112af83c] */
  EAX = (r32((uint32_t)(0x112af83c)));
  /* 112a5e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5e2b je 0x112a5e2f */
  if (C.zf) goto L_112a5e2f;
  /* 112a5e2d call eax */
  call_ind((uint32_t)(EAX), 0x112a5e2fu);
L_112a5e2f:;
  /* 112a5e2f push 0x112ab02c */
  push32((uint32_t)(0x112ab02cu));
  /* 112a5e34 push 0x112ab020 */
  push32((uint32_t)(0x112ab020u));
  /* 112a5e39 call 0x112a5f28 */
  push32(0x112a5e3eu); f_112a5f28();
  /* 112a5e3e push 0x112ab01c */
  push32((uint32_t)(0x112ab01cu));
  /* 112a5e43 push 0x112ab000 */
  push32((uint32_t)(0x112ab000u));
  /* 112a5e48 call 0x112a5f28 */
  push32(0x112a5e4du); f_112a5f28();
  /* 112a5e4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5e50 ret  */
  ESPCHK(0x112a5e24u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x112a5e51 (17 bytes, 6 insns) */
void f_112a5e51(void) {
  FTRACE(0x112a5e51u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5e51 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a5e53 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a5e55 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 112a5e59 call 0x112a5e71 */
  push32(0x112a5e5eu); f_112a5e71();
  /* 112a5e5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5e61 ret  */
  ESPCHK(0x112a5e51u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e62 @ 0x112a5e62 (15 bytes, 6 insns) */
void f_112a5e62(void) {
  FTRACE(0x112a5e62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5e62 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a5e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a5e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a5e68 call 0x112a5e71 */
  push32(0x112a5e6du); f_112a5e71();
  /* 112a5e6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5e70 ret  */
  ESPCHK(0x112a5e62u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e71 @ 0x112a5e71 (163 bytes, 53 insns) */
void f_112a5e71(void) {
  FTRACE(0x112a5e71u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5e71 push edi */
  push32((uint32_t)(EDI));
  /* 112a5e72 call 0x112a5f16 */
  push32(0x112a5e77u); f_112a5f16();
  /* 112a5e77 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a5e79 pop edi */
  EDI = (pop32());
  /* 112a5e7a cmp dword ptr [0x112af2c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x112af2c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5e80 jne 0x112a5e93 */
  if (!C.zf) goto L_112a5e93;
  /* 112a5e82 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 112a5e86 call dword ptr [0x112aa0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0c8))), 0x112a5e8cu);
  /* 112a5e8c push eax */
  push32((uint32_t)(EAX));
  /* 112a5e8d call dword ptr [0x112aa0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0c4))), 0x112a5e93u);
L_112a5e93:;
  /* 112a5e93 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5e98 push ebx */
  push32((uint32_t)(EBX));
  /* 112a5e99 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 112a5e9d mov dword ptr [0x112af2bc], edi */
  w32((uint32_t)(0x112af2bc), (EDI));
  /* 112a5ea3 mov byte ptr [0x112af2b8], bl */
  w8((uint32_t)(0x112af2b8), (BL));
  /* 112a5ea9 jne 0x112a5ee7 */
  if (!C.zf) goto L_112a5ee7;
  /* 112a5eab mov eax, dword ptr [0x112af838] */
  EAX = (r32((uint32_t)(0x112af838)));
  /* 112a5eb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5eb2 je 0x112a5ed6 */
  if (C.zf) goto L_112a5ed6;
  /* 112a5eb4 mov ecx, dword ptr [0x112af834] */
  ECX = (r32((uint32_t)(0x112af834)));
  /* 112a5eba push esi */
  push32((uint32_t)(ESI));
  /* 112a5ebb lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 112a5ebe cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5ec0 jb 0x112a5ed5 */
  if (C.cf) goto L_112a5ed5;
L_112a5ec2:;
  /* 112a5ec2 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112a5ec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5ec6 je 0x112a5eca */
  if (C.zf) goto L_112a5eca;
  /* 112a5ec8 call eax */
  call_ind((uint32_t)(EAX), 0x112a5ecau);
L_112a5eca:;
  /* 112a5eca sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a5ecd cmp esi, dword ptr [0x112af838] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112af838))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5ed3 jae 0x112a5ec2 */
  if (!C.cf) goto L_112a5ec2;
L_112a5ed5:;
  /* 112a5ed5 pop esi */
  ESI = (pop32());
L_112a5ed6:;
  /* 112a5ed6 push 0x112ab038 */
  push32((uint32_t)(0x112ab038u));
  /* 112a5edb push 0x112ab030 */
  push32((uint32_t)(0x112ab030u));
  /* 112a5ee0 call 0x112a5f28 */
  push32(0x112a5ee5u); f_112a5f28();
  /* 112a5ee5 pop ecx */
  ECX = (pop32());
  /* 112a5ee6 pop ecx */
  ECX = (pop32());
L_112a5ee7:;
  /* 112a5ee7 push 0x112ab040 */
  push32((uint32_t)(0x112ab040u));
  /* 112a5eec push 0x112ab03c */
  push32((uint32_t)(0x112ab03cu));
  /* 112a5ef1 call 0x112a5f28 */
  push32(0x112a5ef6u); f_112a5f28();
  /* 112a5ef6 pop ecx */
  ECX = (pop32());
  /* 112a5ef7 pop ecx */
  ECX = (pop32());
  /* 112a5ef8 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a5efa pop ebx */
  EBX = (pop32());
  /* 112a5efb je 0x112a5f04 */
  if (C.zf) goto L_112a5f04;
  /* 112a5efd call 0x112a5f1f */
  push32(0x112a5f02u); f_112a5f1f();
  /* 112a5f02 pop edi */
  EDI = (pop32());
  /* 112a5f03 ret  */
  ESPCHK(0x112a5e71u, _esp0);
  ESP += 4; return;
L_112a5f04:;
  /* 112a5f04 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 112a5f08 mov dword ptr [0x112af2c0], edi */
  w32((uint32_t)(0x112af2c0), (EDI));
  /* 112a5f0e call dword ptr [0x112aa0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0c0))), 0x112a5f14u);
  /* 112a5f14 pop edi */
  EDI = (pop32());
  /* 112a5f15 ret  */
  ESPCHK(0x112a5e71u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f16 @ 0x112a5f16 (9 bytes, 4 insns) */
void f_112a5f16(void) {
  FTRACE(0x112a5f16u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5f16 push 0xd */
  push32((uint32_t)(0xdu));
  /* 112a5f18 call 0x112a7816 */
  push32(0x112a5f1du); f_112a7816();
  /* 112a5f1d pop ecx */
  ECX = (pop32());
  /* 112a5f1e ret  */
  ESPCHK(0x112a5f16u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f1f @ 0x112a5f1f (9 bytes, 4 insns) */
void f_112a5f1f(void) {
  FTRACE(0x112a5f1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5f1f push 0xd */
  push32((uint32_t)(0xdu));
  /* 112a5f21 call 0x112a7877 */
  push32(0x112a5f26u); f_112a7877();
  /* 112a5f26 pop ecx */
  ECX = (pop32());
  /* 112a5f27 ret  */
  ESPCHK(0x112a5f1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f28 @ 0x112a5f28 (26 bytes, 12 insns) */
void f_112a5f28(void) {
  FTRACE(0x112a5f28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5f28 push esi */
  push32((uint32_t)(ESI));
  /* 112a5f29 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_112a5f2d:;
  /* 112a5f2d cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5f31 jae 0x112a5f40 */
  if (!C.cf) goto L_112a5f40;
  /* 112a5f33 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112a5f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5f37 je 0x112a5f3b */
  if (C.zf) goto L_112a5f3b;
  /* 112a5f39 call eax */
  call_ind((uint32_t)(EAX), 0x112a5f3bu);
L_112a5f3b:;
  /* 112a5f3b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a5f3e jmp 0x112a5f2d */
  goto L_112a5f2d;
L_112a5f40:;
  /* 112a5f40 pop esi */
  ESI = (pop32());
  /* 112a5f41 ret  */
  ESPCHK(0x112a5f28u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f42 @ 0x112a5f42 (84 bytes, 32 insns) */
void f_112a5f42(void) {
  FTRACE(0x112a5f42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5f42 push esi */
  push32((uint32_t)(ESI));
  /* 112a5f43 call 0x112a7781 */
  push32(0x112a5f48u); f_112a7781();
  /* 112a5f48 call dword ptr [0x112aa0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0d0))), 0x112a5f4eu);
  /* 112a5f4e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5f51 mov dword ptr [0x112aba5c], eax */
  w32((uint32_t)(0x112aba5c), (EAX));
  /* 112a5f56 je 0x112a5f92 */
  if (C.zf) goto L_112a5f92;
  /* 112a5f58 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 112a5f5a push 1 */
  push32((uint32_t)(0x1u));
  /* 112a5f5c call 0x112a7a5c */
  push32(0x112a5f61u); f_112a7a5c();
  /* 112a5f61 mov esi, eax */
  ESI = (EAX);
  /* 112a5f63 pop ecx */
  ECX = (pop32());
  /* 112a5f64 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a5f66 pop ecx */
  ECX = (pop32());
  /* 112a5f67 je 0x112a5f92 */
  if (C.zf) goto L_112a5f92;
  /* 112a5f69 push esi */
  push32((uint32_t)(ESI));
  /* 112a5f6a push dword ptr [0x112aba5c] */
  push32((uint32_t)(r32((uint32_t)(0x112aba5c))));
  /* 112a5f70 call dword ptr [0x112aa0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0b4))), 0x112a5f76u);
  /* 112a5f76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a5f78 je 0x112a5f92 */
  if (C.zf) goto L_112a5f92;
  /* 112a5f7a push esi */
  push32((uint32_t)(ESI));
  /* 112a5f7b call 0x112a5fb4 */
  push32(0x112a5f80u); f_112a5fb4();
  /* 112a5f80 pop ecx */
  ECX = (pop32());
  /* 112a5f81 call dword ptr [0x112aa0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0cc))), 0x112a5f87u);
  /* 112a5f87 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 112a5f8b push 1 */
  push32((uint32_t)(0x1u));
  /* 112a5f8d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 112a5f8f pop eax */
  EAX = (pop32());
  /* 112a5f90 pop esi */
  ESI = (pop32());
  /* 112a5f91 ret  */
  ESPCHK(0x112a5f42u, _esp0);
  ESP += 4; return;
L_112a5f92:;
  /* 112a5f92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a5f94 pop esi */
  ESI = (pop32());
  /* 112a5f95 ret  */
  ESPCHK(0x112a5f42u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f96 @ 0x112a5f96 (30 bytes, 8 insns) */
void f_112a5f96(void) {
  FTRACE(0x112a5f96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5f96 call 0x112a77aa */
  push32(0x112a5f9bu); f_112a77aa();
  /* 112a5f9b mov eax, dword ptr [0x112aba5c] */
  EAX = (r32((uint32_t)(0x112aba5c)));
  /* 112a5fa0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a5fa3 je 0x112a5fb3 */
  if (C.zf) goto L_112a5fb3;
  /* 112a5fa5 push eax */
  push32((uint32_t)(EAX));
  /* 112a5fa6 call dword ptr [0x112aa0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0d4))), 0x112a5facu);
  /* 112a5fac or dword ptr [0x112aba5c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x112aba5c)))|(0xffffffffu); w32((uint32_t)(0x112aba5c), (_r)); fl_logic(_r,32); }
L_112a5fb3:;
  /* 112a5fb3 ret  */
  ESPCHK(0x112a5f96u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fb4 @ 0x112a5fb4 (19 bytes, 4 insns) */
void f_112a5fb4(void) {
  FTRACE(0x112a5fb4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5fb4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a5fb8 mov dword ptr [eax + 0x50], 0x112adbf0 */
  w32((uint32_t)(EAX + 0x50), (0x112adbf0u));
  /* 112a5fbf mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 112a5fc6 ret  */
  ESPCHK(0x112a5fb4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc7 @ 0x112a5fc7 (103 bytes, 38 insns) */
void f_112a5fc7(void) {
  FTRACE(0x112a5fc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a5fc7 push esi */
  push32((uint32_t)(ESI));
  /* 112a5fc8 push edi */
  push32((uint32_t)(EDI));
  /* 112a5fc9 call dword ptr [0x112aa094] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa094))), 0x112a5fcfu);
  /* 112a5fcf push dword ptr [0x112aba5c] */
  push32((uint32_t)(r32((uint32_t)(0x112aba5c))));
  /* 112a5fd5 mov edi, eax */
  EDI = (EAX);
  /* 112a5fd7 call dword ptr [0x112aa0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0dc))), 0x112a5fddu);
  /* 112a5fdd mov esi, eax */
  ESI = (EAX);
  /* 112a5fdf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a5fe1 jne 0x112a6022 */
  if (!C.zf) goto L_112a6022;
  /* 112a5fe3 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 112a5fe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a5fe7 call 0x112a7a5c */
  push32(0x112a5fecu); f_112a7a5c();
  /* 112a5fec mov esi, eax */
  ESI = (EAX);
  /* 112a5fee pop ecx */
  ECX = (pop32());
  /* 112a5fef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a5ff1 pop ecx */
  ECX = (pop32());
  /* 112a5ff2 je 0x112a601a */
  if (C.zf) goto L_112a601a;
  /* 112a5ff4 push esi */
  push32((uint32_t)(ESI));
  /* 112a5ff5 push dword ptr [0x112aba5c] */
  push32((uint32_t)(r32((uint32_t)(0x112aba5c))));
  /* 112a5ffb call dword ptr [0x112aa0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0b4))), 0x112a6001u);
  /* 112a6001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a6003 je 0x112a601a */
  if (C.zf) goto L_112a601a;
  /* 112a6005 push esi */
  push32((uint32_t)(ESI));
  /* 112a6006 call 0x112a5fb4 */
  push32(0x112a600bu); f_112a5fb4();
  /* 112a600b pop ecx */
  ECX = (pop32());
  /* 112a600c call dword ptr [0x112aa0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0cc))), 0x112a6012u);
  /* 112a6012 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 112a6016 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 112a6018 jmp 0x112a6022 */
  goto L_112a6022;
L_112a601a:;
  /* 112a601a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a601c call 0x112a4b58 */
  push32(0x112a6021u); f_112a4b58();
  /* 112a6021 pop ecx */
  ECX = (pop32());
L_112a6022:;
  /* 112a6022 push edi */
  push32((uint32_t)(EDI));
  /* 112a6023 call dword ptr [0x112aa0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0d8))), 0x112a6029u);
  /* 112a6029 mov eax, esi */
  EAX = (ESI);
  /* 112a602b pop edi */
  EDI = (pop32());
  /* 112a602c pop esi */
  ESI = (pop32());
  /* 112a602d ret  */
  ESPCHK(0x112a5fc7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000602e @ 0x112a602e (160 bytes, 62 insns) */
void f_112a602e(void) {
  FTRACE(0x112a602eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a602e mov eax, dword ptr [0x112aba5c] */
  EAX = (r32((uint32_t)(0x112aba5c)));
  /* 112a6033 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6036 je 0x112a60cd */
  if (C.zf) goto L_112a60cd;
  /* 112a603c push esi */
  push32((uint32_t)(ESI));
  /* 112a603d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a6041 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a6043 jne 0x112a6052 */
  if (!C.zf) goto L_112a6052;
  /* 112a6045 push eax */
  push32((uint32_t)(EAX));
  /* 112a6046 call dword ptr [0x112aa0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0dc))), 0x112a604cu);
  /* 112a604c mov esi, eax */
  ESI = (EAX);
  /* 112a604e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a6050 je 0x112a60be */
  if (C.zf) goto L_112a60be;
L_112a6052:;
  /* 112a6052 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 112a6055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a6057 je 0x112a6060 */
  if (C.zf) goto L_112a6060;
  /* 112a6059 push eax */
  push32((uint32_t)(EAX));
  /* 112a605a call 0x112a4b8b */
  push32(0x112a605fu); f_112a4b8b();
  /* 112a605f pop ecx */
  ECX = (pop32());
L_112a6060:;
  /* 112a6060 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 112a6063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a6065 je 0x112a606e */
  if (C.zf) goto L_112a606e;
  /* 112a6067 push eax */
  push32((uint32_t)(EAX));
  /* 112a6068 call 0x112a4b8b */
  push32(0x112a606du); f_112a4b8b();
  /* 112a606d pop ecx */
  ECX = (pop32());
L_112a606e:;
  /* 112a606e mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 112a6071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a6073 je 0x112a607c */
  if (C.zf) goto L_112a607c;
  /* 112a6075 push eax */
  push32((uint32_t)(EAX));
  /* 112a6076 call 0x112a4b8b */
  push32(0x112a607bu); f_112a4b8b();
  /* 112a607b pop ecx */
  ECX = (pop32());
L_112a607c:;
  /* 112a607c mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 112a607f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a6081 je 0x112a608a */
  if (C.zf) goto L_112a608a;
  /* 112a6083 push eax */
  push32((uint32_t)(EAX));
  /* 112a6084 call 0x112a4b8b */
  push32(0x112a6089u); f_112a4b8b();
  /* 112a6089 pop ecx */
  ECX = (pop32());
L_112a608a:;
  /* 112a608a mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 112a608d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a608f je 0x112a6098 */
  if (C.zf) goto L_112a6098;
  /* 112a6091 push eax */
  push32((uint32_t)(EAX));
  /* 112a6092 call 0x112a4b8b */
  push32(0x112a6097u); f_112a4b8b();
  /* 112a6097 pop ecx */
  ECX = (pop32());
L_112a6098:;
  /* 112a6098 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 112a609b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a609d je 0x112a60a6 */
  if (C.zf) goto L_112a60a6;
  /* 112a609f push eax */
  push32((uint32_t)(EAX));
  /* 112a60a0 call 0x112a4b8b */
  push32(0x112a60a5u); f_112a4b8b();
  /* 112a60a5 pop ecx */
  ECX = (pop32());
L_112a60a6:;
  /* 112a60a6 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 112a60a9 cmp eax, 0x112adbf0 */
  { uint32_t _a=(EAX),_b=(0x112adbf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a60ae je 0x112a60b7 */
  if (C.zf) goto L_112a60b7;
  /* 112a60b0 push eax */
  push32((uint32_t)(EAX));
  /* 112a60b1 call 0x112a4b8b */
  push32(0x112a60b6u); f_112a4b8b();
  /* 112a60b6 pop ecx */
  ECX = (pop32());
L_112a60b7:;
  /* 112a60b7 push esi */
  push32((uint32_t)(ESI));
  /* 112a60b8 call 0x112a4b8b */
  push32(0x112a60bdu); f_112a4b8b();
  /* 112a60bd pop ecx */
  ECX = (pop32());
L_112a60be:;
  /* 112a60be push 0 */
  push32((uint32_t)(0x0u));
  /* 112a60c0 push dword ptr [0x112aba5c] */
  push32((uint32_t)(r32((uint32_t)(0x112aba5c))));
  /* 112a60c6 call dword ptr [0x112aa0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0b4))), 0x112a60ccu);
  /* 112a60cc pop esi */
  ESI = (pop32());
L_112a60cd:;
  /* 112a60cd ret  */
  ESPCHK(0x112a602eu, _esp0);
  ESP += 4; return;
}

/* FUN_100060ce @ 0x112a60ce (185 bytes, 71 insns) */
void f_112a60ce(void) {
  FTRACE(0x112a60ceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a60ce push ebx */
  push32((uint32_t)(EBX));
  /* 112a60cf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a60d1 cmp dword ptr [0x112af830], ebx */
  { uint32_t _a=(r32((uint32_t)(0x112af830))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a60d7 push esi */
  push32((uint32_t)(ESI));
  /* 112a60d8 push edi */
  push32((uint32_t)(EDI));
  /* 112a60d9 jne 0x112a60e0 */
  if (!C.zf) goto L_112a60e0;
  /* 112a60db call 0x112a89f3 */
  push32(0x112a60e0u); f_112a89f3();
L_112a60e0:;
  /* 112a60e0 mov esi, dword ptr [0x112af26c] */
  ESI = (r32((uint32_t)(0x112af26c)));
  /* 112a60e6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_112a60e8:;
  /* 112a60e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a60ea cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a60ec je 0x112a6100 */
  if (C.zf) goto L_112a6100;
  /* 112a60ee cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a60f0 je 0x112a60f3 */
  if (C.zf) goto L_112a60f3;
  /* 112a60f2 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_112a60f3:;
  /* 112a60f3 push esi */
  push32((uint32_t)(ESI));
  /* 112a60f4 call 0x112a85a0 */
  push32(0x112a60f9u); f_112a85a0();
  /* 112a60f9 pop ecx */
  ECX = (pop32());
  /* 112a60fa lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 112a60fe jmp 0x112a60e8 */
  goto L_112a60e8;
L_112a6100:;
  /* 112a6100 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 112a6107 push eax */
  push32((uint32_t)(EAX));
  /* 112a6108 call 0x112a5745 */
  push32(0x112a610du); f_112a5745();
  /* 112a610d mov esi, eax */
  ESI = (EAX);
  /* 112a610f pop ecx */
  ECX = (pop32());
  /* 112a6110 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6112 mov dword ptr [0x112af2a0], esi */
  w32((uint32_t)(0x112af2a0), (ESI));
  /* 112a6118 jne 0x112a6122 */
  if (!C.zf) goto L_112a6122;
  /* 112a611a push 9 */
  push32((uint32_t)(0x9u));
  /* 112a611c call 0x112a4b58 */
  push32(0x112a6121u); f_112a4b58();
  /* 112a6121 pop ecx */
  ECX = (pop32());
L_112a6122:;
  /* 112a6122 mov edi, dword ptr [0x112af26c] */
  EDI = (r32((uint32_t)(0x112af26c)));
  /* 112a6128 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a612a je 0x112a6165 */
  if (C.zf) goto L_112a6165;
  /* 112a612c push ebp */
  push32((uint32_t)(EBP));
L_112a612d:;
  /* 112a612d push edi */
  push32((uint32_t)(EDI));
  /* 112a612e call 0x112a85a0 */
  push32(0x112a6133u); f_112a85a0();
  /* 112a6133 mov ebp, eax */
  EBP = (EAX);
  /* 112a6135 pop ecx */
  ECX = (pop32());
  /* 112a6136 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 112a6137 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a613a je 0x112a615e */
  if (C.zf) goto L_112a615e;
  /* 112a613c push ebp */
  push32((uint32_t)(EBP));
  /* 112a613d call 0x112a5745 */
  push32(0x112a6142u); f_112a5745();
  /* 112a6142 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6144 pop ecx */
  ECX = (pop32());
  /* 112a6145 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 112a6147 jne 0x112a6151 */
  if (!C.zf) goto L_112a6151;
  /* 112a6149 push 9 */
  push32((uint32_t)(0x9u));
  /* 112a614b call 0x112a4b58 */
  push32(0x112a6150u); f_112a4b58();
  /* 112a6150 pop ecx */
  ECX = (pop32());
L_112a6151:;
  /* 112a6151 push edi */
  push32((uint32_t)(EDI));
  /* 112a6152 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112a6154 call 0x112a84b0 */
  push32(0x112a6159u); f_112a84b0();
  /* 112a6159 pop ecx */
  ECX = (pop32());
  /* 112a615a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a615d pop ecx */
  ECX = (pop32());
L_112a615e:;
  /* 112a615e add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6160 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6162 jne 0x112a612d */
  if (!C.zf) goto L_112a612d;
  /* 112a6164 pop ebp */
  EBP = (pop32());
L_112a6165:;
  /* 112a6165 push dword ptr [0x112af26c] */
  push32((uint32_t)(r32((uint32_t)(0x112af26c))));
  /* 112a616b call 0x112a4b8b */
  push32(0x112a6170u); f_112a4b8b();
  /* 112a6170 pop ecx */
  ECX = (pop32());
  /* 112a6171 mov dword ptr [0x112af26c], ebx */
  w32((uint32_t)(0x112af26c), (EBX));
  /* 112a6177 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 112a6179 pop edi */
  EDI = (pop32());
  /* 112a617a pop esi */
  ESI = (pop32());
  /* 112a617b mov dword ptr [0x112af82c], 1 */
  w32((uint32_t)(0x112af82c), (0x1u));
  /* 112a6185 pop ebx */
  EBX = (pop32());
  /* 112a6186 ret  */
  ESPCHK(0x112a60ceu, _esp0);
  ESP += 4; return;
}

/* FUN_10006187 @ 0x112a6187 (153 bytes, 62 insns) */
void f_112a6187(void) {
  FTRACE(0x112a6187u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a6187 push ebp */
  push32((uint32_t)(EBP));
  /* 112a6188 mov ebp, esp */
  EBP = (ESP);
  /* 112a618a push ecx */
  push32((uint32_t)(ECX));
  /* 112a618b push ecx */
  push32((uint32_t)(ECX));
  /* 112a618c push ebx */
  push32((uint32_t)(EBX));
  /* 112a618d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a618f cmp dword ptr [0x112af830], ebx */
  { uint32_t _a=(r32((uint32_t)(0x112af830))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6195 push esi */
  push32((uint32_t)(ESI));
  /* 112a6196 push edi */
  push32((uint32_t)(EDI));
  /* 112a6197 jne 0x112a619e */
  if (!C.zf) goto L_112a619e;
  /* 112a6199 call 0x112a89f3 */
  push32(0x112a619eu); f_112a89f3();
L_112a619e:;
  /* 112a619e mov esi, 0x112af2c4 */
  ESI = (0x112af2c4u);
  /* 112a61a3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 112a61a8 push esi */
  push32((uint32_t)(ESI));
  /* 112a61a9 push ebx */
  push32((uint32_t)(EBX));
  /* 112a61aa call dword ptr [0x112aa0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e0))), 0x112a61b0u);
  /* 112a61b0 mov eax, dword ptr [0x112b0964] */
  EAX = (r32((uint32_t)(0x112b0964)));
  /* 112a61b5 mov dword ptr [0x112af2b0], esi */
  w32((uint32_t)(0x112af2b0), (ESI));
  /* 112a61bb mov edi, esi */
  EDI = (ESI);
  /* 112a61bd cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a61bf je 0x112a61c3 */
  if (C.zf) goto L_112a61c3;
  /* 112a61c1 mov edi, eax */
  EDI = (EAX);
L_112a61c3:;
  /* 112a61c3 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 112a61c6 push eax */
  push32((uint32_t)(EAX));
  /* 112a61c7 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 112a61ca push eax */
  push32((uint32_t)(EAX));
  /* 112a61cb push ebx */
  push32((uint32_t)(EBX));
  /* 112a61cc push ebx */
  push32((uint32_t)(EBX));
  /* 112a61cd push edi */
  push32((uint32_t)(EDI));
  /* 112a61ce call 0x112a6220 */
  push32(0x112a61d3u); f_112a6220();
  /* 112a61d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a61d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a61d9 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 112a61dc push eax */
  push32((uint32_t)(EAX));
  /* 112a61dd call 0x112a5745 */
  push32(0x112a61e2u); f_112a5745();
  /* 112a61e2 mov esi, eax */
  ESI = (EAX);
  /* 112a61e4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a61e7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a61e9 jne 0x112a61f3 */
  if (!C.zf) goto L_112a61f3;
  /* 112a61eb push 8 */
  push32((uint32_t)(0x8u));
  /* 112a61ed call 0x112a4b58 */
  push32(0x112a61f2u); f_112a4b58();
  /* 112a61f2 pop ecx */
  ECX = (pop32());
L_112a61f3:;
  /* 112a61f3 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 112a61f6 push eax */
  push32((uint32_t)(EAX));
  /* 112a61f7 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 112a61fa push eax */
  push32((uint32_t)(EAX));
  /* 112a61fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a61fe lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 112a6201 push eax */
  push32((uint32_t)(EAX));
  /* 112a6202 push esi */
  push32((uint32_t)(ESI));
  /* 112a6203 push edi */
  push32((uint32_t)(EDI));
  /* 112a6204 call 0x112a6220 */
  push32(0x112a6209u); f_112a6220();
  /* 112a6209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a620c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a620f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a6210 mov dword ptr [0x112af298], esi */
  w32((uint32_t)(0x112af298), (ESI));
  /* 112a6216 pop edi */
  EDI = (pop32());
  /* 112a6217 pop esi */
  ESI = (pop32());
  /* 112a6218 mov dword ptr [0x112af294], eax */
  w32((uint32_t)(0x112af294), (EAX));
  /* 112a621d pop ebx */
  EBX = (pop32());
  /* 112a621e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a621f ret  */
  ESPCHK(0x112a6187u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x112a6220 (436 bytes, 187 insns) */
void f_112a6220(void) {
  FTRACE(0x112a6220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a6220 push ebp */
  push32((uint32_t)(EBP));
  /* 112a6221 mov ebp, esp */
  EBP = (ESP);
  /* 112a6223 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 112a6226 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112a6229 push ebx */
  push32((uint32_t)(EBX));
  /* 112a622a push esi */
  push32((uint32_t)(ESI));
  /* 112a622b and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 112a622e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 112a6231 push edi */
  push32((uint32_t)(EDI));
  /* 112a6232 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a6235 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 112a623b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a623e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a6240 je 0x112a624a */
  if (C.zf) goto L_112a624a;
  /* 112a6242 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 112a6244 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6247 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_112a624a:;
  /* 112a624a cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a624d jne 0x112a6293 */
  if (!C.zf) goto L_112a6293;
L_112a624f:;
  /* 112a624f mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 112a6252 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a6253 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6256 je 0x112a6281 */
  if (C.zf) goto L_112a6281;
  /* 112a6258 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a625a je 0x112a6281 */
  if (C.zf) goto L_112a6281;
  /* 112a625c movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 112a625f test byte ptr [edx + 0x112af701], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x112af701)))&(0x4u); fl_logic(_r,8); }
  /* 112a6266 je 0x112a6274 */
  if (C.zf) goto L_112a6274;
  /* 112a6268 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112a626a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a626c je 0x112a6274 */
  if (C.zf) goto L_112a6274;
  /* 112a626e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112a6270 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 112a6272 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a6273 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_112a6274:;
  /* 112a6274 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112a6276 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a6278 je 0x112a624f */
  if (C.zf) goto L_112a624f;
  /* 112a627a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112a627c mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 112a627e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a627f jmp 0x112a624f */
  goto L_112a624f;
L_112a6281:;
  /* 112a6281 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112a6283 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a6285 je 0x112a628b */
  if (C.zf) goto L_112a628b;
  /* 112a6287 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 112a628a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_112a628b:;
  /* 112a628b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a628e jne 0x112a62d6 */
  if (!C.zf) goto L_112a62d6;
  /* 112a6290 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a6291 jmp 0x112a62d6 */
  goto L_112a62d6;
L_112a6293:;
  /* 112a6293 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112a6295 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a6297 je 0x112a629e */
  if (C.zf) goto L_112a629e;
  /* 112a6299 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112a629b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 112a629d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_112a629e:;
  /* 112a629e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112a62a0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a62a1 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 112a62a4 test byte ptr [ebx + 0x112af701], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x112af701)))&(0x4u); fl_logic(_r,8); }
  /* 112a62ab je 0x112a62b9 */
  if (C.zf) goto L_112a62b9;
  /* 112a62ad inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112a62af test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a62b1 je 0x112a62b8 */
  if (C.zf) goto L_112a62b8;
  /* 112a62b3 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 112a62b5 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 112a62b7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_112a62b8:;
  /* 112a62b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_112a62b9:;
  /* 112a62b9 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a62bc je 0x112a62c7 */
  if (C.zf) goto L_112a62c7;
  /* 112a62be test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a62c0 je 0x112a62cb */
  if (C.zf) goto L_112a62cb;
  /* 112a62c2 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a62c5 jne 0x112a6293 */
  if (!C.zf) goto L_112a6293;
L_112a62c7:;
  /* 112a62c7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a62c9 jne 0x112a62ce */
  if (!C.zf) goto L_112a62ce;
L_112a62cb:;
  /* 112a62cb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 112a62cc jmp 0x112a62d6 */
  goto L_112a62d6;
L_112a62ce:;
  /* 112a62ce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a62d0 je 0x112a62d6 */
  if (C.zf) goto L_112a62d6;
  /* 112a62d2 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_112a62d6:;
  /* 112a62d6 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_112a62da:;
  /* 112a62da cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a62dd je 0x112a63c3 */
  if (C.zf) goto L_112a63c3;
L_112a62e3:;
  /* 112a62e3 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112a62e5 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a62e8 je 0x112a62ef */
  if (C.zf) goto L_112a62ef;
  /* 112a62ea cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a62ed jne 0x112a62f2 */
  if (!C.zf) goto L_112a62f2;
L_112a62ef:;
  /* 112a62ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a62f0 jmp 0x112a62e3 */
  goto L_112a62e3;
L_112a62f2:;
  /* 112a62f2 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a62f5 je 0x112a63c3 */
  if (C.zf) goto L_112a63c3;
  /* 112a62fb test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a62fd je 0x112a6307 */
  if (C.zf) goto L_112a6307;
  /* 112a62ff mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 112a6301 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6304 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_112a6307:;
  /* 112a6307 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 112a630a inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_112a630c:;
  /* 112a630c mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 112a6313 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_112a6315:;
  /* 112a6315 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6318 jne 0x112a631e */
  if (!C.zf) goto L_112a631e;
  /* 112a631a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a631b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a631c jmp 0x112a6315 */
  goto L_112a6315;
L_112a631e:;
  /* 112a631e cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6321 jne 0x112a634f */
  if (!C.zf) goto L_112a634f;
  /* 112a6323 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 112a6326 jne 0x112a634d */
  if (!C.zf) goto L_112a634d;
  /* 112a6328 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a632a cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a632d je 0x112a633c */
  if (C.zf) goto L_112a633c;
  /* 112a632f cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6333 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 112a6336 jne 0x112a633c */
  if (!C.zf) goto L_112a633c;
  /* 112a6338 mov eax, edx */
  EAX = (EDX);
  /* 112a633a jmp 0x112a633f */
  goto L_112a633f;
L_112a633c:;
  /* 112a633c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_112a633f:;
  /* 112a633f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a6342 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112a6344 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6347 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 112a634a mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_112a634d:;
  /* 112a634d shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_112a634f:;
  /* 112a634f mov edx, ebx */
  EDX = (EBX);
  /* 112a6351 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112a6352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112a6354 je 0x112a6364 */
  if (C.zf) goto L_112a6364;
  /* 112a6356 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_112a6357:;
  /* 112a6357 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a6359 je 0x112a635f */
  if (C.zf) goto L_112a635f;
  /* 112a635b mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 112a635e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_112a635f:;
  /* 112a635f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112a6361 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112a6362 jne 0x112a6357 */
  if (!C.zf) goto L_112a6357;
L_112a6364:;
  /* 112a6364 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112a6366 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 112a6368 je 0x112a63b4 */
  if (C.zf) goto L_112a63b4;
  /* 112a636a cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a636e jne 0x112a637a */
  if (!C.zf) goto L_112a637a;
  /* 112a6370 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6373 je 0x112a63b4 */
  if (C.zf) goto L_112a63b4;
  /* 112a6375 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6378 je 0x112a63b4 */
  if (C.zf) goto L_112a63b4;
L_112a637a:;
  /* 112a637a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a637e je 0x112a63ae */
  if (C.zf) goto L_112a63ae;
  /* 112a6380 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a6382 je 0x112a639d */
  if (C.zf) goto L_112a639d;
  /* 112a6384 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 112a6387 test byte ptr [ebx + 0x112af701], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x112af701)))&(0x4u); fl_logic(_r,8); }
  /* 112a638e je 0x112a6396 */
  if (C.zf) goto L_112a6396;
  /* 112a6390 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 112a6392 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a6393 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a6394 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_112a6396:;
  /* 112a6396 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 112a6398 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 112a639a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a639b jmp 0x112a63ac */
  goto L_112a63ac;
L_112a639d:;
  /* 112a639d movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 112a63a0 test byte ptr [edx + 0x112af701], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x112af701)))&(0x4u); fl_logic(_r,8); }
  /* 112a63a7 je 0x112a63ac */
  if (C.zf) goto L_112a63ac;
  /* 112a63a9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a63aa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_112a63ac:;
  /* 112a63ac inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_112a63ae:;
  /* 112a63ae inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a63af jmp 0x112a630c */
  goto L_112a630c;
L_112a63b4:;
  /* 112a63b4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a63b6 je 0x112a63bc */
  if (C.zf) goto L_112a63bc;
  /* 112a63b8 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 112a63bb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_112a63bc:;
  /* 112a63bc inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 112a63be jmp 0x112a62da */
  goto L_112a62da;
L_112a63c3:;
  /* 112a63c3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a63c5 je 0x112a63ca */
  if (C.zf) goto L_112a63ca;
  /* 112a63c7 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_112a63ca:;
  /* 112a63ca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 112a63cd pop edi */
  EDI = (pop32());
  /* 112a63ce pop esi */
  ESI = (pop32());
  /* 112a63cf pop ebx */
  EBX = (pop32());
  /* 112a63d0 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 112a63d2 pop ebp */
  EBP = (pop32());
  /* 112a63d3 ret  */
  ESPCHK(0x112a6220u, _esp0);
  ESP += 4; return;
}

/* FUN_100063d4 @ 0x112a63d4 (306 bytes, 132 insns) */
void f_112a63d4(void) {
  FTRACE(0x112a63d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a63d4 push ecx */
  push32((uint32_t)(ECX));
  /* 112a63d5 push ecx */
  push32((uint32_t)(ECX));
  /* 112a63d6 mov eax, dword ptr [0x112af3c8] */
  EAX = (r32((uint32_t)(0x112af3c8)));
  /* 112a63db push ebx */
  push32((uint32_t)(EBX));
  /* 112a63dc push ebp */
  push32((uint32_t)(EBP));
  /* 112a63dd mov ebp, dword ptr [0x112aa070] */
  EBP = (r32((uint32_t)(0x112aa070)));
  /* 112a63e3 push esi */
  push32((uint32_t)(ESI));
  /* 112a63e4 push edi */
  push32((uint32_t)(EDI));
  /* 112a63e5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a63e7 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a63e9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a63eb cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a63ed jne 0x112a6422 */
  if (!C.zf) goto L_112a6422;
  /* 112a63ef call ebp */
  call_ind((uint32_t)(EBP), 0x112a63f1u);
  /* 112a63f1 mov esi, eax */
  ESI = (EAX);
  /* 112a63f3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a63f5 je 0x112a6403 */
  if (C.zf) goto L_112a6403;
  /* 112a63f7 mov dword ptr [0x112af3c8], 1 */
  w32((uint32_t)(0x112af3c8), (0x1u));
  /* 112a6401 jmp 0x112a642b */
  goto L_112a642b;
L_112a6403:;
  /* 112a6403 call dword ptr [0x112aa074] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa074))), 0x112a6409u);
  /* 112a6409 mov edi, eax */
  EDI = (EAX);
  /* 112a640b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a640d je 0x112a64fd */
  if (C.zf) goto L_112a64fd;
  /* 112a6413 mov dword ptr [0x112af3c8], 2 */
  w32((uint32_t)(0x112af3c8), (0x2u));
  /* 112a641d jmp 0x112a64b1 */
  goto L_112a64b1;
L_112a6422:;
  /* 112a6422 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6425 jne 0x112a64ac */
  if (!C.zf) goto L_112a64ac;
L_112a642b:;
  /* 112a642b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a642d jne 0x112a643b */
  if (!C.zf) goto L_112a643b;
  /* 112a642f call ebp */
  call_ind((uint32_t)(EBP), 0x112a6431u);
  /* 112a6431 mov esi, eax */
  ESI = (EAX);
  /* 112a6433 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6435 je 0x112a64fd */
  if (C.zf) goto L_112a64fd;
L_112a643b:;
  /* 112a643b cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 112a643e mov eax, esi */
  EAX = (ESI);
  /* 112a6440 je 0x112a6450 */
  if (C.zf) goto L_112a6450;
L_112a6442:;
  /* 112a6442 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a6443 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a6444 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 112a6447 jne 0x112a6442 */
  if (!C.zf) goto L_112a6442;
  /* 112a6449 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a644a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a644b cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 112a644e jne 0x112a6442 */
  if (!C.zf) goto L_112a6442;
L_112a6450:;
  /* 112a6450 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a6452 mov edi, dword ptr [0x112aa078] */
  EDI = (r32((uint32_t)(0x112aa078)));
  /* 112a6458 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112a645a push ebx */
  push32((uint32_t)(EBX));
  /* 112a645b push ebx */
  push32((uint32_t)(EBX));
  /* 112a645c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a645d push ebx */
  push32((uint32_t)(EBX));
  /* 112a645e push ebx */
  push32((uint32_t)(EBX));
  /* 112a645f push eax */
  push32((uint32_t)(EAX));
  /* 112a6460 push esi */
  push32((uint32_t)(ESI));
  /* 112a6461 push ebx */
  push32((uint32_t)(EBX));
  /* 112a6462 push ebx */
  push32((uint32_t)(EBX));
  /* 112a6463 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 112a6467 call edi */
  call_ind((uint32_t)(EDI), 0x112a6469u);
  /* 112a6469 mov ebp, eax */
  EBP = (EAX);
  /* 112a646b cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a646d je 0x112a64a1 */
  if (C.zf) goto L_112a64a1;
  /* 112a646f push ebp */
  push32((uint32_t)(EBP));
  /* 112a6470 call 0x112a5745 */
  push32(0x112a6475u); f_112a5745();
  /* 112a6475 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6477 pop ecx */
  ECX = (pop32());
  /* 112a6478 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 112a647c je 0x112a64a1 */
  if (C.zf) goto L_112a64a1;
  /* 112a647e push ebx */
  push32((uint32_t)(EBX));
  /* 112a647f push ebx */
  push32((uint32_t)(EBX));
  /* 112a6480 push ebp */
  push32((uint32_t)(EBP));
  /* 112a6481 push eax */
  push32((uint32_t)(EAX));
  /* 112a6482 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 112a6486 push esi */
  push32((uint32_t)(ESI));
  /* 112a6487 push ebx */
  push32((uint32_t)(EBX));
  /* 112a6488 push ebx */
  push32((uint32_t)(EBX));
  /* 112a6489 call edi */
  call_ind((uint32_t)(EDI), 0x112a648bu);
  /* 112a648b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a648d jne 0x112a649d */
  if (!C.zf) goto L_112a649d;
  /* 112a648f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 112a6493 call 0x112a4b8b */
  push32(0x112a6498u); f_112a4b8b();
  /* 112a6498 pop ecx */
  ECX = (pop32());
  /* 112a6499 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_112a649d:;
  /* 112a649d mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_112a64a1:;
  /* 112a64a1 push esi */
  push32((uint32_t)(ESI));
  /* 112a64a2 call dword ptr [0x112aa07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa07c))), 0x112a64a8u);
  /* 112a64a8 mov eax, ebx */
  EAX = (EBX);
  /* 112a64aa jmp 0x112a64ff */
  goto L_112a64ff;
L_112a64ac:;
  /* 112a64ac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a64af jne 0x112a64fd */
  if (!C.zf) goto L_112a64fd;
L_112a64b1:;
  /* 112a64b1 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a64b3 jne 0x112a64c1 */
  if (!C.zf) goto L_112a64c1;
  /* 112a64b5 call dword ptr [0x112aa074] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa074))), 0x112a64bbu);
  /* 112a64bb mov edi, eax */
  EDI = (EAX);
  /* 112a64bd cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a64bf je 0x112a64fd */
  if (C.zf) goto L_112a64fd;
L_112a64c1:;
  /* 112a64c1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a64c3 mov eax, edi */
  EAX = (EDI);
  /* 112a64c5 je 0x112a64d1 */
  if (C.zf) goto L_112a64d1;
L_112a64c7:;
  /* 112a64c7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a64c8 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a64ca jne 0x112a64c7 */
  if (!C.zf) goto L_112a64c7;
  /* 112a64cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a64cd cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a64cf jne 0x112a64c7 */
  if (!C.zf) goto L_112a64c7;
L_112a64d1:;
  /* 112a64d1 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a64d3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a64d4 mov ebp, eax */
  EBP = (EAX);
  /* 112a64d6 push ebp */
  push32((uint32_t)(EBP));
  /* 112a64d7 call 0x112a5745 */
  push32(0x112a64dcu); f_112a5745();
  /* 112a64dc mov esi, eax */
  ESI = (EAX);
  /* 112a64de pop ecx */
  ECX = (pop32());
  /* 112a64df cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a64e1 jne 0x112a64e7 */
  if (!C.zf) goto L_112a64e7;
  /* 112a64e3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a64e5 jmp 0x112a64f2 */
  goto L_112a64f2;
L_112a64e7:;
  /* 112a64e7 push ebp */
  push32((uint32_t)(EBP));
  /* 112a64e8 push edi */
  push32((uint32_t)(EDI));
  /* 112a64e9 push esi */
  push32((uint32_t)(ESI));
  /* 112a64ea call 0x112a5410 */
  push32(0x112a64efu); f_112a5410();
  /* 112a64ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a64f2:;
  /* 112a64f2 push edi */
  push32((uint32_t)(EDI));
  /* 112a64f3 call dword ptr [0x112aa0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0b0))), 0x112a64f9u);
  /* 112a64f9 mov eax, esi */
  EAX = (ESI);
  /* 112a64fb jmp 0x112a64ff */
  goto L_112a64ff;
L_112a64fd:;
  /* 112a64fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a64ff:;
  /* 112a64ff pop edi */
  EDI = (pop32());
  /* 112a6500 pop esi */
  ESI = (pop32());
  /* 112a6501 pop ebp */
  EBP = (pop32());
  /* 112a6502 pop ebx */
  EBX = (pop32());
  /* 112a6503 pop ecx */
  ECX = (pop32());
  /* 112a6504 pop ecx */
  ECX = (pop32());
  /* 112a6505 ret  */
  ESPCHK(0x112a63d4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006506 @ 0x112a6506 (45 bytes, 17 insns) */
void f_112a6506(void) {
  FTRACE(0x112a6506u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a6506 push esi */
  push32((uint32_t)(ESI));
  /* 112a6507 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a650b push 0 */
  push32((uint32_t)(0x0u));
  /* 112a650d and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 112a6510 call dword ptr [0x112aa06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa06c))), 0x112a6516u);
  /* 112a6516 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 112a651b jne 0x112a6531 */
  if (!C.zf) goto L_112a6531;
  /* 112a651d mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 112a6520 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112a6522 je 0x112a6531 */
  if (C.zf) goto L_112a6531;
  /* 112a6524 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6526 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 112a6529 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 112a652b mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 112a652e mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_112a6531:;
  /* 112a6531 pop esi */
  ESI = (pop32());
  /* 112a6532 ret  */
  ESPCHK(0x112a6506u, _esp0);
  ESP += 4; return;
}

/* FUN_10006533 @ 0x112a6533 (328 bytes, 115 insns) */
void f_112a6533(void) {
  FTRACE(0x112a6533u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a6533 push ebp */
  push32((uint32_t)(EBP));
  /* 112a6534 mov ebp, esp */
  EBP = (ESP);
  /* 112a6536 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 112a653b call 0x112a8c70 */
  push32(0x112a6540u); f_112a8c70();
  /* 112a6540 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 112a6546 push ebx */
  push32((uint32_t)(EBX));
  /* 112a6547 push eax */
  push32((uint32_t)(EAX));
  /* 112a6548 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 112a6552 call dword ptr [0x112aa064] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa064))), 0x112a6558u);
  /* 112a6558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a655a je 0x112a6576 */
  if (C.zf) goto L_112a6576;
  /* 112a655c cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6563 jne 0x112a6576 */
  if (!C.zf) goto L_112a6576;
  /* 112a6565 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a656c jb 0x112a6576 */
  if (C.cf) goto L_112a6576;
  /* 112a656e push 1 */
  push32((uint32_t)(0x1u));
  /* 112a6570 pop eax */
  EAX = (pop32());
  /* 112a6571 jmp 0x112a6678 */
  goto L_112a6678;
L_112a6576:;
  /* 112a6576 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 112a657c push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 112a6581 push eax */
  push32((uint32_t)(EAX));
  /* 112a6582 push 0x112aa1f0 */
  push32((uint32_t)(0x112aa1f0u));
  /* 112a6587 call dword ptr [0x112aa068] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa068))), 0x112a658du);
  /* 112a658d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a658f je 0x112a6665 */
  if (C.zf) goto L_112a6665;
  /* 112a6595 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a6597 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 112a659d cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a65a3 je 0x112a65b8 */
  if (C.zf) goto L_112a65b8;
L_112a65a5:;
  /* 112a65a5 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 112a65a7 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a65a9 jl 0x112a65b3 */
  if ((C.sf!=C.of)) goto L_112a65b3;
  /* 112a65ab cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a65ad jg 0x112a65b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a65b3;
  /* 112a65af sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a65b1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_112a65b3:;
  /* 112a65b3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a65b4 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a65b6 jne 0x112a65a5 */
  if (!C.zf) goto L_112a65a5;
L_112a65b8:;
  /* 112a65b8 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 112a65be push 0x16 */
  push32((uint32_t)(0x16u));
  /* 112a65c0 push eax */
  push32((uint32_t)(EAX));
  /* 112a65c1 push 0x112aa1d8 */
  push32((uint32_t)(0x112aa1d8u));
  /* 112a65c6 call 0x112a8c30 */
  push32(0x112a65cbu); f_112a8c30();
  /* 112a65cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a65ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a65d0 jne 0x112a65da */
  if (!C.zf) goto L_112a65da;
  /* 112a65d2 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 112a65d8 jmp 0x112a6623 */
  goto L_112a6623;
L_112a65da:;
  /* 112a65da lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 112a65e0 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 112a65e5 push eax */
  push32((uint32_t)(EAX));
  /* 112a65e6 push ebx */
  push32((uint32_t)(EBX));
  /* 112a65e7 call dword ptr [0x112aa0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e0))), 0x112a65edu);
  /* 112a65ed cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a65f3 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 112a65f9 je 0x112a660e */
  if (C.zf) goto L_112a660e;
L_112a65fb:;
  /* 112a65fb mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 112a65fd cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a65ff jl 0x112a6609 */
  if ((C.sf!=C.of)) goto L_112a6609;
  /* 112a6601 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6603 jg 0x112a6609 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a6609;
  /* 112a6605 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 112a6607 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_112a6609:;
  /* 112a6609 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a660a cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a660c jne 0x112a65fb */
  if (!C.zf) goto L_112a65fb;
L_112a660e:;
  /* 112a660e lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 112a6614 push eax */
  push32((uint32_t)(EAX));
  /* 112a6615 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 112a661b push eax */
  push32((uint32_t)(EAX));
  /* 112a661c call 0x112a4540 */
  push32(0x112a6621u); f_112a4540();
  /* 112a6621 pop ecx */
  ECX = (pop32());
  /* 112a6622 pop ecx */
  ECX = (pop32());
L_112a6623:;
  /* 112a6623 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6625 je 0x112a6665 */
  if (C.zf) goto L_112a6665;
  /* 112a6627 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 112a6629 push eax */
  push32((uint32_t)(EAX));
  /* 112a662a call 0x112a4c90 */
  push32(0x112a662fu); f_112a4c90();
  /* 112a662f pop ecx */
  ECX = (pop32());
  /* 112a6630 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6632 pop ecx */
  ECX = (pop32());
  /* 112a6633 je 0x112a6665 */
  if (C.zf) goto L_112a6665;
  /* 112a6635 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a6636 mov ecx, eax */
  ECX = (EAX);
  /* 112a6638 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a663a je 0x112a664a */
  if (C.zf) goto L_112a664a;
L_112a663c:;
  /* 112a663c cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a663f jne 0x112a6645 */
  if (!C.zf) goto L_112a6645;
  /* 112a6641 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 112a6643 jmp 0x112a6646 */
  goto L_112a6646;
L_112a6645:;
  /* 112a6645 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_112a6646:;
  /* 112a6646 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6648 jne 0x112a663c */
  if (!C.zf) goto L_112a663c;
L_112a664a:;
  /* 112a664a push 0xa */
  push32((uint32_t)(0xau));
  /* 112a664c push ebx */
  push32((uint32_t)(EBX));
  /* 112a664d push eax */
  push32((uint32_t)(EAX));
  /* 112a664e call 0x112a8a0f */
  push32(0x112a6653u); f_112a8a0f();
  /* 112a6653 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6656 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6659 je 0x112a6678 */
  if (C.zf) goto L_112a6678;
  /* 112a665b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a665e je 0x112a6678 */
  if (C.zf) goto L_112a6678;
  /* 112a6660 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6663 je 0x112a6678 */
  if (C.zf) goto L_112a6678;
L_112a6665:;
  /* 112a6665 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 112a6668 push eax */
  push32((uint32_t)(EAX));
  /* 112a6669 call 0x112a6506 */
  push32(0x112a666eu); f_112a6506();
  /* 112a666e cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6672 pop ecx */
  ECX = (pop32());
  /* 112a6673 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a6675 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_112a6678:;
  /* 112a6678 pop ebx */
  EBX = (pop32());
  /* 112a6679 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a667a ret  */
  ESPCHK(0x112a6533u, _esp0);
  ESP += 4; return;
}

/* FUN_1000667b @ 0x112a667b (93 bytes, 30 insns) */
void f_112a667b(void) {
  FTRACE(0x112a667bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a667b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a667d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a667f cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6683 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112a6688 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 112a668b push eax */
  push32((uint32_t)(EAX));
  /* 112a668c call dword ptr [0x112aa05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa05c))), 0x112a6692u);
  /* 112a6692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a6694 mov dword ptr [0x112af824], eax */
  w32((uint32_t)(0x112af824), (EAX));
  /* 112a6699 je 0x112a66d1 */
  if (C.zf) goto L_112a66d1;
  /* 112a669b call 0x112a6533 */
  push32(0x112a66a0u); f_112a6533();
  /* 112a66a0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a66a3 mov dword ptr [0x112af828], eax */
  w32((uint32_t)(0x112af828), (EAX));
  /* 112a66a8 jne 0x112a66b7 */
  if (!C.zf) goto L_112a66b7;
  /* 112a66aa push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 112a66af call 0x112a690c */
  push32(0x112a66b4u); f_112a690c();
  /* 112a66b4 pop ecx */
  ECX = (pop32());
  /* 112a66b5 jmp 0x112a66c1 */
  goto L_112a66c1;
L_112a66b7:;
  /* 112a66b7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a66ba jne 0x112a66d4 */
  if (!C.zf) goto L_112a66d4;
  /* 112a66bc call 0x112a715d */
  push32(0x112a66c1u); f_112a715d();
L_112a66c1:;
  /* 112a66c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a66c3 jne 0x112a66d4 */
  if (!C.zf) goto L_112a66d4;
  /* 112a66c5 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a66cb call dword ptr [0x112aa060] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa060))), 0x112a66d1u);
L_112a66d1:;
  /* 112a66d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a66d3 ret  */
  ESPCHK(0x112a667bu, _esp0);
  ESP += 4; return;
L_112a66d4:;
  /* 112a66d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a66d6 pop eax */
  EAX = (pop32());
  /* 112a66d7 ret  */
  ESPCHK(0x112a667bu, _esp0);
  ESP += 4; return;
}

/* FUN_100066d8 @ 0x112a66d8 (168 bytes, 56 insns) */
void f_112a66d8(void) {
  FTRACE(0x112a66d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a66d8 mov eax, dword ptr [0x112af828] */
  EAX = (r32((uint32_t)(0x112af828)));
  /* 112a66dd push esi */
  push32((uint32_t)(ESI));
  /* 112a66de cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a66e1 push edi */
  push32((uint32_t)(EDI));
  /* 112a66e2 jne 0x112a674a */
  if (!C.zf) goto L_112a674a;
  /* 112a66e4 push ebx */
  push32((uint32_t)(EBX));
  /* 112a66e5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 112a66e7 cmp dword ptr [0x112af818], ebx */
  { uint32_t _a=(r32((uint32_t)(0x112af818))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a66ed push ebp */
  push32((uint32_t)(EBP));
  /* 112a66ee mov ebp, dword ptr [0x112aa088] */
  EBP = (r32((uint32_t)(0x112aa088)));
  /* 112a66f4 jle 0x112a6736 */
  if ((C.zf||C.sf!=C.of)) goto L_112a6736;
  /* 112a66f6 mov eax, dword ptr [0x112af81c] */
  EAX = (r32((uint32_t)(0x112af81c)));
  /* 112a66fb mov edi, dword ptr [0x112aa058] */
  EDI = (r32((uint32_t)(0x112aa058)));
  /* 112a6701 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_112a6704:;
  /* 112a6704 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 112a6709 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 112a670e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112a6710 call edi */
  call_ind((uint32_t)(EDI), 0x112a6712u);
  /* 112a6712 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112a6717 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a6719 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112a671b call edi */
  call_ind((uint32_t)(EDI), 0x112a671du);
  /* 112a671d push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 112a6720 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a6722 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a6728 call ebp */
  call_ind((uint32_t)(EBP), 0x112a672au);
  /* 112a672a add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a672d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a672e cmp ebx, dword ptr [0x112af818] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x112af818))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6734 jl 0x112a6704 */
  if ((C.sf!=C.of)) goto L_112a6704;
L_112a6736:;
  /* 112a6736 push dword ptr [0x112af81c] */
  push32((uint32_t)(r32((uint32_t)(0x112af81c))));
  /* 112a673c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a673e push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a6744 call ebp */
  call_ind((uint32_t)(EBP), 0x112a6746u);
  /* 112a6746 pop ebp */
  EBP = (pop32());
  /* 112a6747 pop ebx */
  EBX = (pop32());
  /* 112a6748 jmp 0x112a6771 */
  goto L_112a6771;
L_112a674a:;
  /* 112a674a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a674d jne 0x112a6771 */
  if (!C.zf) goto L_112a6771;
  /* 112a674f mov edi, 0x112abaf8 */
  EDI = (0x112abaf8u);
  /* 112a6754 mov esi, edi */
  ESI = (EDI);
L_112a6756:;
  /* 112a6756 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 112a6759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a675b je 0x112a676b */
  if (C.zf) goto L_112a676b;
  /* 112a675d push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112a6762 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a6764 push eax */
  push32((uint32_t)(EAX));
  /* 112a6765 call dword ptr [0x112aa058] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa058))), 0x112a676bu);
L_112a676b:;
  /* 112a676b mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 112a676d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a676f jne 0x112a6756 */
  if (!C.zf) goto L_112a6756;
L_112a6771:;
  /* 112a6771 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a6777 call dword ptr [0x112aa060] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa060))), 0x112a677du);
  /* 112a677d pop edi */
  EDI = (pop32());
  /* 112a677e pop esi */
  ESI = (pop32());
  /* 112a677f ret  */
  ESPCHK(0x112a66d8u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x112a6780 (57 bytes, 18 insns) */
void f_112a6780(void) {
  FTRACE(0x112a6780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a6780 mov eax, dword ptr [0x112af274] */
  EAX = (r32((uint32_t)(0x112af274)));
  /* 112a6785 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6788 je 0x112a6797 */
  if (C.zf) goto L_112a6797;
  /* 112a678a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a678c jne 0x112a67b8 */
  if (!C.zf) goto L_112a67b8;
  /* 112a678e cmp dword ptr [0x112af278], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112af278))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6795 jne 0x112a67b8 */
  if (!C.zf) goto L_112a67b8;
L_112a6797:;
  /* 112a6797 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 112a679c call 0x112a67b9 */
  push32(0x112a67a1u); f_112a67b9();
  /* 112a67a1 mov eax, dword ptr [0x112af3cc] */
  EAX = (r32((uint32_t)(0x112af3cc)));
  /* 112a67a6 pop ecx */
  ECX = (pop32());
  /* 112a67a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a67a9 je 0x112a67ad */
  if (C.zf) goto L_112a67ad;
  /* 112a67ab call eax */
  call_ind((uint32_t)(EAX), 0x112a67adu);
L_112a67ad:;
  /* 112a67ad push 0xff */
  push32((uint32_t)(0xffu));
  /* 112a67b2 call 0x112a67b9 */
  push32(0x112a67b7u); f_112a67b9();
  /* 112a67b7 pop ecx */
  ECX = (pop32());
L_112a67b8:;
  /* 112a67b8 ret  */
  ESPCHK(0x112a6780u, _esp0);
  ESP += 4; return;
}

/* FUN_100067b9 @ 0x112a67b9 (339 bytes, 100 insns) */
void f_112a67b9(void) {
  FTRACE(0x112a67b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a67b9 push ebp */
  push32((uint32_t)(EBP));
  /* 112a67ba mov ebp, esp */
  EBP = (ESP);
  /* 112a67bc sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a67c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a67c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 112a67c7 mov eax, 0x112aba68 */
  EAX = (0x112aba68u);
L_112a67cc:;
  /* 112a67cc cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a67ce je 0x112a67db */
  if (C.zf) goto L_112a67db;
  /* 112a67d0 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a67d3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 112a67d4 cmp eax, 0x112abaf8 */
  { uint32_t _a=(EAX),_b=(0x112abaf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a67d9 jl 0x112a67cc */
  if ((C.sf!=C.of)) goto L_112a67cc;
L_112a67db:;
  /* 112a67db push esi */
  push32((uint32_t)(ESI));
  /* 112a67dc mov esi, ecx */
  ESI = (ECX);
  /* 112a67de shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 112a67e1 cmp edx, dword ptr [esi + 0x112aba68] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x112aba68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a67e7 jne 0x112a6909 */
  if (!C.zf) goto L_112a6909;
  /* 112a67ed mov eax, dword ptr [0x112af274] */
  EAX = (r32((uint32_t)(0x112af274)));
  /* 112a67f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a67f5 je 0x112a68e3 */
  if (C.zf) goto L_112a68e3;
  /* 112a67fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a67fd jne 0x112a680c */
  if (!C.zf) goto L_112a680c;
  /* 112a67ff cmp dword ptr [0x112af278], 1 */
  { uint32_t _a=(r32((uint32_t)(0x112af278))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6806 je 0x112a68e3 */
  if (C.zf) goto L_112a68e3;
L_112a680c:;
  /* 112a680c cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6812 je 0x112a6909 */
  if (C.zf) goto L_112a6909;
  /* 112a6818 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 112a681e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 112a6823 push eax */
  push32((uint32_t)(EAX));
  /* 112a6824 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a6826 call dword ptr [0x112aa0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0e0))), 0x112a682cu);
  /* 112a682c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a682e jne 0x112a6843 */
  if (!C.zf) goto L_112a6843;
  /* 112a6830 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 112a6836 push 0x112aa4e0 */
  push32((uint32_t)(0x112aa4e0u));
  /* 112a683b push eax */
  push32((uint32_t)(EAX));
  /* 112a683c call 0x112a84b0 */
  push32(0x112a6841u); f_112a84b0();
  /* 112a6841 pop ecx */
  ECX = (pop32());
  /* 112a6842 pop ecx */
  ECX = (pop32());
L_112a6843:;
  /* 112a6843 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 112a6849 push edi */
  push32((uint32_t)(EDI));
  /* 112a684a push eax */
  push32((uint32_t)(EAX));
  /* 112a684b lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 112a6851 call 0x112a85a0 */
  push32(0x112a6856u); f_112a85a0();
  /* 112a6856 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a6857 pop ecx */
  ECX = (pop32());
  /* 112a6858 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a685b jbe 0x112a6886 */
  if ((C.cf||C.zf)) goto L_112a6886;
  /* 112a685d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 112a6863 push eax */
  push32((uint32_t)(EAX));
  /* 112a6864 call 0x112a85a0 */
  push32(0x112a6869u); f_112a85a0();
  /* 112a6869 mov edi, eax */
  EDI = (EAX);
  /* 112a686b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 112a6871 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a6874 push 3 */
  push32((uint32_t)(0x3u));
  /* 112a6876 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6878 push 0x112aa4dc */
  push32((uint32_t)(0x112aa4dcu));
  /* 112a687d push edi */
  push32((uint32_t)(EDI));
  /* 112a687e call 0x112a4400 */
  push32(0x112a6883u); f_112a4400();
  /* 112a6883 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a6886:;
  /* 112a6886 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 112a688c push 0x112aa4c0 */
  push32((uint32_t)(0x112aa4c0u));
  /* 112a6891 push eax */
  push32((uint32_t)(EAX));
  /* 112a6892 call 0x112a84b0 */
  push32(0x112a6897u); f_112a84b0();
  /* 112a6897 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 112a689d push edi */
  push32((uint32_t)(EDI));
  /* 112a689e push eax */
  push32((uint32_t)(EAX));
  /* 112a689f call 0x112a84c0 */
  push32(0x112a68a4u); f_112a84c0();
  /* 112a68a4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 112a68aa push 0x112aa4bc */
  push32((uint32_t)(0x112aa4bcu));
  /* 112a68af push eax */
  push32((uint32_t)(EAX));
  /* 112a68b0 call 0x112a84c0 */
  push32(0x112a68b5u); f_112a84c0();
  /* 112a68b5 push dword ptr [esi + 0x112aba6c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x112aba6c))));
  /* 112a68bb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 112a68c1 push eax */
  push32((uint32_t)(EAX));
  /* 112a68c2 call 0x112a84c0 */
  push32(0x112a68c7u); f_112a84c0();
  /* 112a68c7 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 112a68cc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 112a68d2 push 0x112aa494 */
  push32((uint32_t)(0x112aa494u));
  /* 112a68d7 push eax */
  push32((uint32_t)(EAX));
  /* 112a68d8 call 0x112a8c9f */
  push32(0x112a68ddu); f_112a8c9f();
  /* 112a68dd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a68e0 pop edi */
  EDI = (pop32());
  /* 112a68e1 jmp 0x112a6909 */
  goto L_112a6909;
L_112a68e3:;
  /* 112a68e3 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 112a68e6 lea esi, [esi + 0x112aba6c] */
  ESI = ((uint32_t)(ESI + 0x112aba6c));
  /* 112a68ec push 0 */
  push32((uint32_t)(0x0u));
  /* 112a68ee push eax */
  push32((uint32_t)(EAX));
  /* 112a68ef push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112a68f1 call 0x112a85a0 */
  push32(0x112a68f6u); f_112a85a0();
  /* 112a68f6 pop ecx */
  ECX = (pop32());
  /* 112a68f7 push eax */
  push32((uint32_t)(EAX));
  /* 112a68f8 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112a68fa push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 112a68fc call dword ptr [0x112aa0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0a8))), 0x112a6902u);
  /* 112a6902 push eax */
  push32((uint32_t)(EAX));
  /* 112a6903 call dword ptr [0x112aa054] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa054))), 0x112a6909u);
L_112a6909:;
  /* 112a6909 pop esi */
  ESI = (pop32());
  /* 112a690a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a690b ret  */
  ESPCHK(0x112a67b9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000690c @ 0x112a690c (72 bytes, 17 insns) */
void f_112a690c(void) {
  FTRACE(0x112a690cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a690c push 0x140 */
  push32((uint32_t)(0x140u));
  /* 112a6911 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a6913 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a6919 call dword ptr [0x112aa0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0a0))), 0x112a691fu);
  /* 112a691f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a6921 mov dword ptr [0x112af81c], eax */
  w32((uint32_t)(0x112af81c), (EAX));
  /* 112a6926 jne 0x112a6929 */
  if (!C.zf) goto L_112a6929;
  /* 112a6928 ret  */
  ESPCHK(0x112a690cu, _esp0);
  ESP += 4; return;
L_112a6929:;
  /* 112a6929 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a692d and dword ptr [0x112af814], 0 */
  { uint32_t _r=(r32((uint32_t)(0x112af814)))&(0x0u); w32((uint32_t)(0x112af814), (_r)); fl_logic(_r,32); }
  /* 112a6934 and dword ptr [0x112af818], 0 */
  { uint32_t _r=(r32((uint32_t)(0x112af818)))&(0x0u); w32((uint32_t)(0x112af818), (_r)); fl_logic(_r,32); }
  /* 112a693b push 1 */
  push32((uint32_t)(0x1u));
  /* 112a693d mov dword ptr [0x112af810], eax */
  w32((uint32_t)(0x112af810), (EAX));
  /* 112a6942 mov dword ptr [0x112af820], ecx */
  w32((uint32_t)(0x112af820), (ECX));
  /* 112a6948 mov dword ptr [0x112af808], 0x10 */
  w32((uint32_t)(0x112af808), (0x10u));
  /* 112a6952 pop eax */
  EAX = (pop32());
  /* 112a6953 ret  */
  ESPCHK(0x112a690cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006954 @ 0x112a6954 (43 bytes, 14 insns) */
void f_112a6954(void) {
  FTRACE(0x112a6954u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a6954 mov eax, dword ptr [0x112af818] */
  EAX = (r32((uint32_t)(0x112af818)));
  /* 112a6959 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 112a695c mov eax, dword ptr [0x112af81c] */
  EAX = (r32((uint32_t)(0x112af81c)));
  /* 112a6961 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_112a6964:;
  /* 112a6964 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6966 jae 0x112a697c */
  if (!C.cf) goto L_112a697c;
  /* 112a6968 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a696c sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a696f cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6975 jb 0x112a697e */
  if (C.cf) goto L_112a697e;
  /* 112a6977 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a697a jmp 0x112a6964 */
  goto L_112a6964;
L_112a697c:;
  /* 112a697c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a697e:;
  /* 112a697e ret  */
  ESPCHK(0x112a6954u, _esp0);
  ESP += 4; return;
}

/* FUN_1000697f @ 0x112a697f (809 bytes, 265 insns) */
void f_112a697f(void) {
  FTRACE(0x112a697fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a697f push ebp */
  push32((uint32_t)(EBP));
  /* 112a6980 mov ebp, esp */
  EBP = (ESP);
  /* 112a6982 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a6985 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6988 push ebx */
  push32((uint32_t)(EBX));
  /* 112a6989 push esi */
  push32((uint32_t)(ESI));
  /* 112a698a mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a698d mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 112a6990 push edi */
  push32((uint32_t)(EDI));
  /* 112a6991 mov edi, esi */
  EDI = (ESI);
  /* 112a6993 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6996 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a6999 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 112a699c mov ecx, edi */
  ECX = (EDI);
  /* 112a699e imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a69a4 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 112a69ab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112a69ae mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 112a69b0 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a69b1 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 112a69b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112a69b7 jne 0x112a6ca3 */
  if (!C.zf) goto L_112a6ca3;
  /* 112a69bd mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 112a69c0 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 112a69c3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 112a69c6 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 112a69c9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 112a69cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 112a69cf test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 112a69d2 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 112a69d5 jne 0x112a6a55 */
  if (!C.zf) goto L_112a6a55;
  /* 112a69d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112a69da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112a69db cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a69de jbe 0x112a69e3 */
  if ((C.cf||C.zf)) goto L_112a69e3;
  /* 112a69e0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112a69e2 pop edx */
  EDX = (pop32());
L_112a69e3:;
  /* 112a69e3 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 112a69e6 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a69e9 jne 0x112a6a37 */
  if (!C.zf) goto L_112a6a37;
  /* 112a69eb cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a69ee jae 0x112a6a0e */
  if (!C.cf) goto L_112a6a0e;
  /* 112a69f0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 112a69f5 mov ecx, edx */
  ECX = (EDX);
  /* 112a69f7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 112a69f9 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 112a69fd not ebx */
  EBX = (~(EBX));
  /* 112a69ff and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 112a6a03 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 112a6a05 jne 0x112a6a2f */
  if (!C.zf) goto L_112a6a2f;
  /* 112a6a07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6a0a and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 112a6a0c jmp 0x112a6a2f */
  goto L_112a6a2f;
L_112a6a0e:;
  /* 112a6a0e lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 112a6a11 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 112a6a16 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 112a6a18 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 112a6a1c not ebx */
  EBX = (~(EBX));
  /* 112a6a1e and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 112a6a25 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 112a6a27 jne 0x112a6a2f */
  if (!C.zf) goto L_112a6a2f;
  /* 112a6a29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6a2c and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_112a6a2f:;
  /* 112a6a2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a6a32 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a6a35 jmp 0x112a6a3a */
  goto L_112a6a3a;
L_112a6a37:;
  /* 112a6a37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_112a6a3a:;
  /* 112a6a3a mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 112a6a3d mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 112a6a40 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6a43 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 112a6a46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a6a49 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112a6a4c mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 112a6a4f mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 112a6a52 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_112a6a55:;
  /* 112a6a55 mov edx, ecx */
  EDX = (ECX);
  /* 112a6a57 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112a6a5a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112a6a5b cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6a5e jbe 0x112a6a63 */
  if ((C.cf||C.zf)) goto L_112a6a63;
  /* 112a6a60 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112a6a62 pop edx */
  EDX = (pop32());
L_112a6a63:;
  /* 112a6a63 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a6a66 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 112a6a69 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 112a6a6c jne 0x112a6b06 */
  if (!C.zf) goto L_112a6b06;
  /* 112a6a72 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a6a75 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 112a6a78 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 112a6a7b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112a6a7d mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 112a6a80 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 112a6a81 pop esi */
  ESI = (pop32());
  /* 112a6a82 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6a84 jbe 0x112a6a88 */
  if ((C.cf||C.zf)) goto L_112a6a88;
  /* 112a6a86 mov ebx, esi */
  EBX = (ESI);
L_112a6a88:;
  /* 112a6a88 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6a8b mov edx, ecx */
  EDX = (ECX);
  /* 112a6a8d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112a6a90 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 112a6a93 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112a6a94 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6a96 jbe 0x112a6a9a */
  if ((C.cf||C.zf)) goto L_112a6a9a;
  /* 112a6a98 mov edx, esi */
  EDX = (ESI);
L_112a6a9a:;
  /* 112a6a9a cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6a9c je 0x112a6b01 */
  if (C.zf) goto L_112a6b01;
  /* 112a6a9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a6aa1 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 112a6aa4 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6aa7 jne 0x112a6ae9 */
  if (!C.zf) goto L_112a6ae9;
  /* 112a6aa9 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6aac jae 0x112a6aca */
  if (!C.cf) goto L_112a6aca;
  /* 112a6aae mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 112a6ab3 mov ecx, ebx */
  ECX = (EBX);
  /* 112a6ab5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 112a6ab7 not esi */
  ESI = (~(ESI));
  /* 112a6ab9 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 112a6abd dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 112a6ac1 jne 0x112a6ae9 */
  if (!C.zf) goto L_112a6ae9;
  /* 112a6ac3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6ac6 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 112a6ac8 jmp 0x112a6ae9 */
  goto L_112a6ae9;
L_112a6aca:;
  /* 112a6aca lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 112a6acd mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 112a6ad2 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 112a6ad4 not esi */
  ESI = (~(ESI));
  /* 112a6ad6 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 112a6add dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 112a6ae1 jne 0x112a6ae9 */
  if (!C.zf) goto L_112a6ae9;
  /* 112a6ae3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6ae6 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_112a6ae9:;
  /* 112a6ae9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a6aec mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 112a6aef mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 112a6af2 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 112a6af5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 112a6af8 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 112a6afb mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 112a6afe mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_112a6b01:;
  /* 112a6b01 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 112a6b04 jmp 0x112a6b09 */
  goto L_112a6b09;
L_112a6b06:;
  /* 112a6b06 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_112a6b09:;
  /* 112a6b09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6b0d jne 0x112a6b17 */
  if (!C.zf) goto L_112a6b17;
  /* 112a6b0f cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6b11 je 0x112a6b98 */
  if (C.zf) goto L_112a6b98;
L_112a6b17:;
  /* 112a6b17 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 112a6b1a mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 112a6b1e lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 112a6b21 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 112a6b24 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 112a6b27 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 112a6b2a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 112a6b2d mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 112a6b30 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 112a6b33 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6b36 jne 0x112a6b98 */
  if (!C.zf) goto L_112a6b98;
  /* 112a6b38 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 112a6b3c cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6b3f mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 112a6b42 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 112a6b44 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 112a6b48 jae 0x112a6b6f */
  if (!C.cf) goto L_112a6b6f;
  /* 112a6b4a cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6b4e jne 0x112a6b5e */
  if (!C.zf) goto L_112a6b5e;
  /* 112a6b50 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 112a6b55 mov ecx, edx */
  ECX = (EDX);
  /* 112a6b57 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 112a6b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6b5c or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_112a6b5e:;
  /* 112a6b5e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 112a6b63 mov ecx, edx */
  ECX = (EDX);
  /* 112a6b65 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 112a6b67 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 112a6b6b or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a6b6d jmp 0x112a6b98 */
  goto L_112a6b98;
L_112a6b6f:;
  /* 112a6b6f cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6b73 jne 0x112a6b85 */
  if (!C.zf) goto L_112a6b85;
  /* 112a6b75 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 112a6b78 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 112a6b7d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 112a6b7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6b82 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_112a6b85:;
  /* 112a6b85 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 112a6b88 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112a6b8d shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112a6b8f lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 112a6b96 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_112a6b98:;
  /* 112a6b98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a6b9b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 112a6b9d mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 112a6ba1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 112a6ba4 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 112a6ba6 jne 0x112a6ca3 */
  if (!C.zf) goto L_112a6ca3;
  /* 112a6bac mov eax, dword ptr [0x112af814] */
  EAX = (r32((uint32_t)(0x112af814)));
  /* 112a6bb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a6bb3 je 0x112a6c95 */
  if (C.zf) goto L_112a6c95;
  /* 112a6bb9 mov ecx, dword ptr [0x112af80c] */
  ECX = (r32((uint32_t)(0x112af80c)));
  /* 112a6bbf mov esi, dword ptr [0x112aa058] */
  ESI = (r32((uint32_t)(0x112aa058)));
  /* 112a6bc5 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 112a6bc8 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6bcb mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 112a6bd0 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 112a6bd5 push ebx */
  push32((uint32_t)(EBX));
  /* 112a6bd6 push ecx */
  push32((uint32_t)(ECX));
  /* 112a6bd7 call esi */
  call_ind((uint32_t)(ESI), 0x112a6bd9u);
  /* 112a6bd9 mov ecx, dword ptr [0x112af80c] */
  ECX = (r32((uint32_t)(0x112af80c)));
  /* 112a6bdf mov eax, dword ptr [0x112af814] */
  EAX = (r32((uint32_t)(0x112af814)));
  /* 112a6be4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112a6be9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112a6beb or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 112a6bee mov eax, dword ptr [0x112af814] */
  EAX = (r32((uint32_t)(0x112af814)));
  /* 112a6bf3 mov ecx, dword ptr [0x112af80c] */
  ECX = (r32((uint32_t)(0x112af80c)));
  /* 112a6bf9 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 112a6bfc and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 112a6c04 mov eax, dword ptr [0x112af814] */
  EAX = (r32((uint32_t)(0x112af814)));
  /* 112a6c09 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 112a6c0c dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 112a6c0f mov eax, dword ptr [0x112af814] */
  EAX = (r32((uint32_t)(0x112af814)));
  /* 112a6c14 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112a6c17 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6c1b jne 0x112a6c26 */
  if (!C.zf) goto L_112a6c26;
  /* 112a6c1d and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 112a6c21 mov eax, dword ptr [0x112af814] */
  EAX = (r32((uint32_t)(0x112af814)));
L_112a6c26:;
  /* 112a6c26 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6c2a jne 0x112a6c95 */
  if (!C.zf) goto L_112a6c95;
  /* 112a6c2c push ebx */
  push32((uint32_t)(EBX));
  /* 112a6c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 112a6c2f push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 112a6c32 call esi */
  call_ind((uint32_t)(ESI), 0x112a6c34u);
  /* 112a6c34 mov eax, dword ptr [0x112af814] */
  EAX = (r32((uint32_t)(0x112af814)));
  /* 112a6c39 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 112a6c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a6c3e push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a6c44 call dword ptr [0x112aa088] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa088))), 0x112a6c4au);
  /* 112a6c4a mov eax, dword ptr [0x112af818] */
  EAX = (r32((uint32_t)(0x112af818)));
  /* 112a6c4f mov edx, dword ptr [0x112af81c] */
  EDX = (r32((uint32_t)(0x112af81c)));
  /* 112a6c55 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a6c58 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112a6c5b mov ecx, eax */
  ECX = (EAX);
  /* 112a6c5d mov eax, dword ptr [0x112af814] */
  EAX = (r32((uint32_t)(0x112af814)));
  /* 112a6c62 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a6c64 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 112a6c68 push ecx */
  push32((uint32_t)(ECX));
  /* 112a6c69 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 112a6c6c push ecx */
  push32((uint32_t)(ECX));
  /* 112a6c6d push eax */
  push32((uint32_t)(EAX));
  /* 112a6c6e call 0x112a8d30 */
  push32(0x112a6c73u); f_112a8d30();
  /* 112a6c73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6c76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6c79 dec dword ptr [0x112af818] */
  { uint32_t _r=(r32((uint32_t)(0x112af818)))-1; w32((uint32_t)(0x112af818), (_r)); fl_dec(_r,32); }
  /* 112a6c7f cmp eax, dword ptr [0x112af814] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x112af814))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6c85 jbe 0x112a6c8b */
  if ((C.cf||C.zf)) goto L_112a6c8b;
  /* 112a6c87 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_112a6c8b:;
  /* 112a6c8b mov eax, dword ptr [0x112af81c] */
  EAX = (r32((uint32_t)(0x112af81c)));
  /* 112a6c90 mov dword ptr [0x112af810], eax */
  w32((uint32_t)(0x112af810), (EAX));
L_112a6c95:;
  /* 112a6c95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6c98 mov dword ptr [0x112af80c], edi */
  w32((uint32_t)(0x112af80c), (EDI));
  /* 112a6c9e mov dword ptr [0x112af814], eax */
  w32((uint32_t)(0x112af814), (EAX));
L_112a6ca3:;
  /* 112a6ca3 pop edi */
  EDI = (pop32());
  /* 112a6ca4 pop esi */
  ESI = (pop32());
  /* 112a6ca5 pop ebx */
  EBX = (pop32());
  /* 112a6ca6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a6ca7 ret  */
  ESPCHK(0x112a697fu, _esp0);
  ESP += 4; return;
}

/* FUN_10006ca8 @ 0x112a6ca8 (777 bytes, 275 insns) */
void f_112a6ca8(void) {
  FTRACE(0x112a6ca8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a6ca8 push ebp */
  push32((uint32_t)(EBP));
  /* 112a6ca9 mov ebp, esp */
  EBP = (ESP);
  /* 112a6cab sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a6cae mov eax, dword ptr [0x112af818] */
  EAX = (r32((uint32_t)(0x112af818)));
  /* 112a6cb3 mov edx, dword ptr [0x112af81c] */
  EDX = (r32((uint32_t)(0x112af81c)));
  /* 112a6cb9 push ebx */
  push32((uint32_t)(EBX));
  /* 112a6cba push esi */
  push32((uint32_t)(ESI));
  /* 112a6cbb lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a6cbe push edi */
  push32((uint32_t)(EDI));
  /* 112a6cbf lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 112a6cc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6cc5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 112a6cc8 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 112a6ccb and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 112a6cce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 112a6cd1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 112a6cd4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 112a6cd5 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6cd8 jge 0x112a6ce8 */
  if ((C.sf==C.of)) goto L_112a6ce8;
  /* 112a6cda or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 112a6cdd shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 112a6cdf or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 112a6ce3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 112a6ce6 jmp 0x112a6cf8 */
  goto L_112a6cf8;
L_112a6ce8:;
  /* 112a6ce8 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6ceb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a6cee xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 112a6cf0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 112a6cf2 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 112a6cf5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_112a6cf8:;
  /* 112a6cf8 mov eax, dword ptr [0x112af810] */
  EAX = (r32((uint32_t)(0x112af810)));
  /* 112a6cfd mov ebx, eax */
  EBX = (EAX);
  /* 112a6cff cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6d01 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 112a6d04 jae 0x112a6d1f */
  if (!C.cf) goto L_112a6d1f;
L_112a6d06:;
  /* 112a6d06 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 112a6d09 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 112a6d0b and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 112a6d0e and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 112a6d10 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 112a6d12 jne 0x112a6d1f */
  if (!C.zf) goto L_112a6d1f;
  /* 112a6d14 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6d17 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6d1a mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 112a6d1d jb 0x112a6d06 */
  if (C.cf) goto L_112a6d06;
L_112a6d1f:;
  /* 112a6d1f cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6d22 jne 0x112a6d9d */
  if (!C.zf) goto L_112a6d9d;
  /* 112a6d24 mov ebx, edx */
  EBX = (EDX);
L_112a6d26:;
  /* 112a6d26 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6d28 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 112a6d2b jae 0x112a6d42 */
  if (!C.cf) goto L_112a6d42;
  /* 112a6d2d mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 112a6d30 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 112a6d32 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 112a6d35 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 112a6d37 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 112a6d39 jne 0x112a6d40 */
  if (!C.zf) goto L_112a6d40;
  /* 112a6d3b add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6d3e jmp 0x112a6d26 */
  goto L_112a6d26;
L_112a6d40:;
  /* 112a6d40 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_112a6d42:;
  /* 112a6d42 jne 0x112a6d9d */
  if (!C.zf) goto L_112a6d9d;
L_112a6d44:;
  /* 112a6d44 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6d47 jae 0x112a6d5a */
  if (!C.cf) goto L_112a6d5a;
  /* 112a6d49 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6d4d jne 0x112a6d57 */
  if (!C.zf) goto L_112a6d57;
  /* 112a6d4f add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6d52 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 112a6d55 jmp 0x112a6d44 */
  goto L_112a6d44;
L_112a6d57:;
  /* 112a6d57 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_112a6d5a:;
  /* 112a6d5a jne 0x112a6d82 */
  if (!C.zf) goto L_112a6d82;
  /* 112a6d5c mov ebx, edx */
  EBX = (EDX);
L_112a6d5e:;
  /* 112a6d5e cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6d60 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 112a6d63 jae 0x112a6d72 */
  if (!C.cf) goto L_112a6d72;
  /* 112a6d65 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6d69 jne 0x112a6d70 */
  if (!C.zf) goto L_112a6d70;
  /* 112a6d6b add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6d6e jmp 0x112a6d5e */
  goto L_112a6d5e;
L_112a6d70:;
  /* 112a6d70 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_112a6d72:;
  /* 112a6d72 jne 0x112a6d82 */
  if (!C.zf) goto L_112a6d82;
  /* 112a6d74 call 0x112a6fb1 */
  push32(0x112a6d79u); f_112a6fb1();
  /* 112a6d79 mov ebx, eax */
  EBX = (EAX);
  /* 112a6d7b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a6d7d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 112a6d80 je 0x112a6d96 */
  if (C.zf) goto L_112a6d96;
L_112a6d82:;
  /* 112a6d82 push ebx */
  push32((uint32_t)(EBX));
  /* 112a6d83 call 0x112a7062 */
  push32(0x112a6d88u); f_112a7062();
  /* 112a6d88 pop ecx */
  ECX = (pop32());
  /* 112a6d89 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 112a6d8c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 112a6d8e mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 112a6d91 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6d94 jne 0x112a6d9d */
  if (!C.zf) goto L_112a6d9d;
L_112a6d96:;
  /* 112a6d96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a6d98 jmp 0x112a6fac */
  goto L_112a6fac;
L_112a6d9d:;
  /* 112a6d9d mov dword ptr [0x112af810], ebx */
  w32((uint32_t)(0x112af810), (EBX));
  /* 112a6da3 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 112a6da6 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 112a6da8 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6dab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 112a6dae je 0x112a6dc4 */
  if (C.zf) goto L_112a6dc4;
  /* 112a6db0 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 112a6db7 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 112a6dbb and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 112a6dbe and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 112a6dc0 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 112a6dc2 jne 0x112a6dfb */
  if (!C.zf) goto L_112a6dfb;
L_112a6dc4:;
  /* 112a6dc4 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 112a6dca mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 112a6dcd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 112a6dd0 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 112a6dd3 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a6dd7 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 112a6dda or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 112a6ddc mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 112a6ddf jne 0x112a6df8 */
  if (!C.zf) goto L_112a6df8;
L_112a6de1:;
  /* 112a6de1 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 112a6de7 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 112a6dea and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 112a6ded add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6df0 mov edi, esi */
  EDI = (ESI);
  /* 112a6df2 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 112a6df4 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 112a6df6 je 0x112a6de1 */
  if (C.zf) goto L_112a6de1;
L_112a6df8:;
  /* 112a6df8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_112a6dfb:;
  /* 112a6dfb mov ecx, edx */
  ECX = (EDX);
  /* 112a6dfd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a6dff imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a6e05 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 112a6e0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 112a6e0f mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 112a6e13 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 112a6e15 jne 0x112a6e24 */
  if (!C.zf) goto L_112a6e24;
  /* 112a6e17 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 112a6e1e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 112a6e20 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 112a6e23 pop edi */
  EDI = (pop32());
L_112a6e24:;
  /* 112a6e24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112a6e26 jl 0x112a6e2d */
  if ((C.sf!=C.of)) goto L_112a6e2d;
  /* 112a6e28 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 112a6e2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 112a6e2b jmp 0x112a6e24 */
  goto L_112a6e24;
L_112a6e2d:;
  /* 112a6e2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112a6e30 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 112a6e34 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 112a6e36 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a6e39 mov esi, ecx */
  ESI = (ECX);
  /* 112a6e3b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 112a6e3e sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 112a6e41 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 112a6e42 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6e45 jle 0x112a6e4a */
  if ((C.zf||C.sf!=C.of)) goto L_112a6e4a;
  /* 112a6e47 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112a6e49 pop esi */
  ESI = (pop32());
L_112a6e4a:;
  /* 112a6e4a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6e4c je 0x112a6f5f */
  if (C.zf) goto L_112a6f5f;
  /* 112a6e52 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 112a6e55 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6e58 jne 0x112a6ebb */
  if (!C.zf) goto L_112a6ebb;
  /* 112a6e5a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6e5d jge 0x112a6e8a */
  if ((C.sf==C.of)) goto L_112a6e8a;
  /* 112a6e5f mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 112a6e64 mov ecx, edi */
  ECX = (EDI);
  /* 112a6e66 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 112a6e68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a6e6b lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 112a6e6f not ebx */
  EBX = (~(EBX));
  /* 112a6e71 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 112a6e74 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 112a6e78 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 112a6e7c dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 112a6e7e jne 0x112a6eb8 */
  if (!C.zf) goto L_112a6eb8;
  /* 112a6e80 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6e83 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112a6e86 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 112a6e88 jmp 0x112a6ebb */
  goto L_112a6ebb;
L_112a6e8a:;
  /* 112a6e8a lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 112a6e8d mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 112a6e92 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 112a6e94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a6e97 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 112a6e9b lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 112a6ea2 not ebx */
  EBX = (~(EBX));
  /* 112a6ea4 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 112a6ea6 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 112a6ea8 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 112a6eab jne 0x112a6eb8 */
  if (!C.zf) goto L_112a6eb8;
  /* 112a6ead mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a6eb0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 112a6eb3 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 112a6eb6 jmp 0x112a6ebb */
  goto L_112a6ebb;
L_112a6eb8:;
  /* 112a6eb8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_112a6ebb:;
  /* 112a6ebb mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 112a6ebe mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 112a6ec1 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6ec5 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 112a6ec8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 112a6ecb mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 112a6ece mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 112a6ed1 je 0x112a6f6b */
  if (C.zf) goto L_112a6f6b;
  /* 112a6ed7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 112a6eda mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 112a6ede lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 112a6ee1 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 112a6ee4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 112a6ee7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 112a6eea mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 112a6eed mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 112a6ef0 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 112a6ef3 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6ef6 jne 0x112a6f5c */
  if (!C.zf) goto L_112a6f5c;
  /* 112a6ef8 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 112a6efc cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6eff mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 112a6f02 jge 0x112a6f2d */
  if ((C.sf==C.of)) goto L_112a6f2d;
  /* 112a6f04 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 112a6f06 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6f0a mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 112a6f0e jne 0x112a6f1b */
  if (!C.zf) goto L_112a6f1b;
  /* 112a6f10 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 112a6f15 mov ecx, esi */
  ECX = (ESI);
  /* 112a6f17 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 112a6f19 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_112a6f1b:;
  /* 112a6f1b mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 112a6f20 mov ecx, esi */
  ECX = (ESI);
  /* 112a6f22 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 112a6f24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a6f27 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 112a6f2b jmp 0x112a6f5c */
  goto L_112a6f5c;
L_112a6f2d:;
  /* 112a6f2d inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 112a6f2f cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a6f33 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 112a6f37 jne 0x112a6f46 */
  if (!C.zf) goto L_112a6f46;
  /* 112a6f39 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 112a6f3c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 112a6f41 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 112a6f43 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_112a6f46:;
  /* 112a6f46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a6f49 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 112a6f50 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 112a6f53 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 112a6f58 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 112a6f5a or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_112a6f5c:;
  /* 112a6f5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_112a6f5f:;
  /* 112a6f5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112a6f61 je 0x112a6f6e */
  if (C.zf) goto L_112a6f6e;
  /* 112a6f63 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112a6f65 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 112a6f69 jmp 0x112a6f6e */
  goto L_112a6f6e;
L_112a6f6b:;
  /* 112a6f6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_112a6f6e:;
  /* 112a6f6e mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 112a6f71 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a6f73 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 112a6f76 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 112a6f78 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 112a6f7c mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 112a6f7f mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 112a6f81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 112a6f83 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 112a6f86 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 112a6f88 jne 0x112a6fa4 */
  if (!C.zf) goto L_112a6fa4;
  /* 112a6f8a cmp ebx, dword ptr [0x112af814] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x112af814))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6f90 jne 0x112a6fa4 */
  if (!C.zf) goto L_112a6fa4;
  /* 112a6f92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a6f95 cmp ecx, dword ptr [0x112af80c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x112af80c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6f9b jne 0x112a6fa4 */
  if (!C.zf) goto L_112a6fa4;
  /* 112a6f9d and dword ptr [0x112af814], 0 */
  { uint32_t _r=(r32((uint32_t)(0x112af814)))&(0x0u); w32((uint32_t)(0x112af814), (_r)); fl_logic(_r,32); }
L_112a6fa4:;
  /* 112a6fa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a6fa7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112a6fa9 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_112a6fac:;
  /* 112a6fac pop edi */
  EDI = (pop32());
  /* 112a6fad pop esi */
  ESI = (pop32());
  /* 112a6fae pop ebx */
  EBX = (pop32());
  /* 112a6faf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a6fb0 ret  */
  ESPCHK(0x112a6ca8u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fb1 @ 0x112a6fb1 (177 bytes, 53 insns) */
void f_112a6fb1(void) {
  FTRACE(0x112a6fb1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a6fb1 mov eax, dword ptr [0x112af818] */
  EAX = (r32((uint32_t)(0x112af818)));
  /* 112a6fb6 mov ecx, dword ptr [0x112af808] */
  ECX = (r32((uint32_t)(0x112af808)));
  /* 112a6fbc push esi */
  push32((uint32_t)(ESI));
  /* 112a6fbd push edi */
  push32((uint32_t)(EDI));
  /* 112a6fbe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 112a6fc0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6fc2 jne 0x112a6ff4 */
  if (!C.zf) goto L_112a6ff4;
  /* 112a6fc4 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 112a6fc8 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 112a6fcb push eax */
  push32((uint32_t)(EAX));
  /* 112a6fcc push dword ptr [0x112af81c] */
  push32((uint32_t)(r32((uint32_t)(0x112af81c))));
  /* 112a6fd2 push edi */
  push32((uint32_t)(EDI));
  /* 112a6fd3 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a6fd9 call dword ptr [0x112aa04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa04c))), 0x112a6fdfu);
  /* 112a6fdf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a6fe1 je 0x112a7044 */
  if (C.zf) goto L_112a7044;
  /* 112a6fe3 add dword ptr [0x112af808], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x112af808))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x112af808), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a6fea mov dword ptr [0x112af81c], eax */
  w32((uint32_t)(0x112af81c), (EAX));
  /* 112a6fef mov eax, dword ptr [0x112af818] */
  EAX = (r32((uint32_t)(0x112af818)));
L_112a6ff4:;
  /* 112a6ff4 mov ecx, dword ptr [0x112af81c] */
  ECX = (r32((uint32_t)(0x112af81c)));
  /* 112a6ffa push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 112a6fff push 8 */
  push32((uint32_t)(0x8u));
  /* 112a7001 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 112a7004 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a700a lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 112a700d call dword ptr [0x112aa0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0a0))), 0x112a7013u);
  /* 112a7013 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7015 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 112a7018 je 0x112a7044 */
  if (C.zf) goto L_112a7044;
  /* 112a701a push 4 */
  push32((uint32_t)(0x4u));
  /* 112a701c push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 112a7021 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 112a7026 push edi */
  push32((uint32_t)(EDI));
  /* 112a7027 call dword ptr [0x112aa050] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa050))), 0x112a702du);
  /* 112a702d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a702f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 112a7032 jne 0x112a7048 */
  if (!C.zf) goto L_112a7048;
  /* 112a7034 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 112a7037 push edi */
  push32((uint32_t)(EDI));
  /* 112a7038 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a703e call dword ptr [0x112aa088] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa088))), 0x112a7044u);
L_112a7044:;
  /* 112a7044 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a7046 jmp 0x112a705f */
  goto L_112a705f;
L_112a7048:;
  /* 112a7048 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 112a704c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 112a704e mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 112a7051 inc dword ptr [0x112af818] */
  { uint32_t _r=(r32((uint32_t)(0x112af818)))+1; w32((uint32_t)(0x112af818), (_r)); fl_inc(_r,32); }
  /* 112a7057 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 112a705a or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 112a705d mov eax, esi */
  EAX = (ESI);
L_112a705f:;
  /* 112a705f pop edi */
  EDI = (pop32());
  /* 112a7060 pop esi */
  ESI = (pop32());
  /* 112a7061 ret  */
  ESPCHK(0x112a6fb1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007062 @ 0x112a7062 (251 bytes, 85 insns) */
void f_112a7062(void) {
  FTRACE(0x112a7062u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7062 push ebp */
  push32((uint32_t)(EBP));
  /* 112a7063 mov ebp, esp */
  EBP = (ESP);
  /* 112a7065 push ecx */
  push32((uint32_t)(ECX));
  /* 112a7066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a7069 push ebx */
  push32((uint32_t)(EBX));
  /* 112a706a push esi */
  push32((uint32_t)(ESI));
  /* 112a706b push edi */
  push32((uint32_t)(EDI));
  /* 112a706c mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 112a706f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 112a7072 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_112a7074:;
  /* 112a7074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a7076 jl 0x112a707d */
  if ((C.sf!=C.of)) goto L_112a707d;
  /* 112a7078 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 112a707a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a707b jmp 0x112a7074 */
  goto L_112a7074;
L_112a707d:;
  /* 112a707d mov eax, ebx */
  EAX = (EBX);
  /* 112a707f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 112a7081 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a7087 pop edx */
  EDX = (pop32());
  /* 112a7088 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 112a708f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_112a7092:;
  /* 112a7092 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 112a7095 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 112a7098 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a709b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112a709c jne 0x112a7092 */
  if (!C.zf) goto L_112a7092;
  /* 112a709e mov edi, ebx */
  EDI = (EBX);
  /* 112a70a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a70a2 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 112a70a5 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a70a8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112a70ad push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112a70b2 push edi */
  push32((uint32_t)(EDI));
  /* 112a70b3 call dword ptr [0x112aa050] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa050))), 0x112a70b9u);
  /* 112a70b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a70bb jne 0x112a70c5 */
  if (!C.zf) goto L_112a70c5;
  /* 112a70bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 112a70c0 jmp 0x112a7158 */
  goto L_112a7158;
L_112a70c5:;
  /* 112a70c5 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 112a70cb cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a70cd ja 0x112a710b */
  if ((!C.cf&&!C.zf)) goto L_112a710b;
  /* 112a70cf lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_112a70d2:;
  /* 112a70d2 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 112a70d6 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 112a70dd lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 112a70e3 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 112a70ea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112a70ec lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 112a70f2 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112a70f5 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 112a70ff add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7104 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 112a7107 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7109 jbe 0x112a70d2 */
  if ((C.cf||C.zf)) goto L_112a70d2;
L_112a710b:;
  /* 112a710b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a710e lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 112a7111 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7116 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a7118 pop edi */
  EDI = (pop32());
  /* 112a7119 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112a711c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 112a711f lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 112a7122 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 112a7125 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112a7128 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 112a712d mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 112a7134 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 112a7137 mov cl, al */
  CL = (AL);
  /* 112a7139 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 112a713b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a713d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a7140 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 112a7143 jne 0x112a7148 */
  if (!C.zf) goto L_112a7148;
  /* 112a7145 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_112a7148:;
  /* 112a7148 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 112a714d mov ecx, ebx */
  ECX = (EBX);
  /* 112a714f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 112a7151 not edx */
  EDX = (~(EDX));
  /* 112a7153 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 112a7156 mov eax, ebx */
  EAX = (EBX);
L_112a7158:;
  /* 112a7158 pop edi */
  EDI = (pop32());
  /* 112a7159 pop esi */
  ESI = (pop32());
  /* 112a715a pop ebx */
  EBX = (pop32());
  /* 112a715b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a715c ret  */
  ESPCHK(0x112a7062u, _esp0);
  ESP += 4; return;
}

/* FUN_1000715d @ 0x112a715d (324 bytes, 102 insns) */
void f_112a715d(void) {
  FTRACE(0x112a715du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a715d cmp dword ptr [0x112abb08], -1 */
  { uint32_t _a=(r32((uint32_t)(0x112abb08))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7164 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7165 push ebp */
  push32((uint32_t)(EBP));
  /* 112a7166 push esi */
  push32((uint32_t)(ESI));
  /* 112a7167 push edi */
  push32((uint32_t)(EDI));
  /* 112a7168 jne 0x112a7171 */
  if (!C.zf) goto L_112a7171;
  /* 112a716a mov esi, 0x112abaf8 */
  ESI = (0x112abaf8u);
  /* 112a716f jmp 0x112a718e */
  goto L_112a718e;
L_112a7171:;
  /* 112a7171 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 112a7176 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a7178 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a717e call dword ptr [0x112aa0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0a0))), 0x112a7184u);
  /* 112a7184 mov esi, eax */
  ESI = (EAX);
  /* 112a7186 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 112a7188 je 0x112a729a */
  if (C.zf) goto L_112a729a;
L_112a718e:;
  /* 112a718e mov ebp, dword ptr [0x112aa050] */
  EBP = (r32((uint32_t)(0x112aa050)));
  /* 112a7194 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a7196 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 112a719b push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 112a71a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a71a2 call ebp */
  call_ind((uint32_t)(EBP), 0x112a71a4u);
  /* 112a71a4 mov edi, eax */
  EDI = (EAX);
  /* 112a71a6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a71a8 je 0x112a7283 */
  if (C.zf) goto L_112a7283;
  /* 112a71ae push 4 */
  push32((uint32_t)(0x4u));
  /* 112a71b0 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 112a71b5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112a71ba push ebx */
  push32((uint32_t)(EBX));
  /* 112a71bb push edi */
  push32((uint32_t)(EDI));
  /* 112a71bc call ebp */
  call_ind((uint32_t)(EBP), 0x112a71beu);
  /* 112a71be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a71c0 je 0x112a7275 */
  if (C.zf) goto L_112a7275;
  /* 112a71c6 mov eax, 0x112abaf8 */
  EAX = (0x112abaf8u);
  /* 112a71cb cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a71cd jne 0x112a71ed */
  if (!C.zf) goto L_112a71ed;
  /* 112a71cf cmp dword ptr [0x112abaf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112abaf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a71d6 jne 0x112a71dd */
  if (!C.zf) goto L_112a71dd;
  /* 112a71d8 mov dword ptr [0x112abaf8], eax */
  w32((uint32_t)(0x112abaf8), (EAX));
L_112a71dd:;
  /* 112a71dd cmp dword ptr [0x112abafc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x112abafc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a71e4 jne 0x112a7202 */
  if (!C.zf) goto L_112a7202;
  /* 112a71e6 mov dword ptr [0x112abafc], eax */
  w32((uint32_t)(0x112abafc), (EAX));
  /* 112a71eb jmp 0x112a7202 */
  goto L_112a7202;
L_112a71ed:;
  /* 112a71ed mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 112a71ef mov eax, dword ptr [0x112abafc] */
  EAX = (r32((uint32_t)(0x112abafc)));
  /* 112a71f4 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 112a71f7 mov dword ptr [0x112abafc], esi */
  w32((uint32_t)(0x112abafc), (ESI));
  /* 112a71fd mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 112a7200 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_112a7202:;
  /* 112a7202 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 112a7208 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 112a720e mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 112a7211 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 112a7214 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 112a7217 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 112a721a mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 112a721d xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 112a721f mov ecx, 0xf1 */
  ECX = (0xf1u);
L_112a7224:;
  /* 112a7224 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 112a7226 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7229 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 112a722c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112a722d and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 112a722f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 112a7230 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 112a7231 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112a7233 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112a7236 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7239 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a723f jl 0x112a7224 */
  if ((C.sf!=C.of)) goto L_112a7224;
  /* 112a7241 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7242 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a7244 push edi */
  push32((uint32_t)(EDI));
  /* 112a7245 call 0x112a9070 */
  push32(0x112a724au); f_112a9070();
  /* 112a724a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_112a724d:;
  /* 112a724d mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 112a7250 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7252 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7254 jae 0x112a7271 */
  if (!C.cf) goto L_112a7271;
  /* 112a7256 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 112a725d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 112a7260 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 112a7262 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 112a7269 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a726f jmp 0x112a724d */
  goto L_112a724d;
L_112a7271:;
  /* 112a7271 mov eax, esi */
  EAX = (ESI);
  /* 112a7273 jmp 0x112a729c */
  goto L_112a729c;
L_112a7275:;
  /* 112a7275 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112a727a push 0 */
  push32((uint32_t)(0x0u));
  /* 112a727c push edi */
  push32((uint32_t)(EDI));
  /* 112a727d call dword ptr [0x112aa058] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa058))), 0x112a7283u);
L_112a7283:;
  /* 112a7283 cmp esi, 0x112abaf8 */
  { uint32_t _a=(ESI),_b=(0x112abaf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7289 je 0x112a729a */
  if (C.zf) goto L_112a729a;
  /* 112a728b push esi */
  push32((uint32_t)(ESI));
  /* 112a728c push 0 */
  push32((uint32_t)(0x0u));
  /* 112a728e push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a7294 call dword ptr [0x112aa088] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa088))), 0x112a729au);
L_112a729a:;
  /* 112a729a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a729c:;
  /* 112a729c pop edi */
  EDI = (pop32());
  /* 112a729d pop esi */
  ESI = (pop32());
  /* 112a729e pop ebp */
  EBP = (pop32());
  /* 112a729f pop ebx */
  EBX = (pop32());
  /* 112a72a0 ret  */
  ESPCHK(0x112a715du, _esp0);
  ESP += 4; return;
}

/* FUN_100072a1 @ 0x112a72a1 (86 bytes, 27 insns) */
void f_112a72a1(void) {
  FTRACE(0x112a72a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a72a1 push esi */
  push32((uint32_t)(ESI));
  /* 112a72a2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 112a72a6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 112a72ab push 0 */
  push32((uint32_t)(0x0u));
  /* 112a72ad push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 112a72b0 call dword ptr [0x112aa058] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa058))), 0x112a72b6u);
  /* 112a72b6 cmp dword ptr [0x112adb18], esi */
  { uint32_t _a=(r32((uint32_t)(0x112adb18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a72bc jne 0x112a72c6 */
  if (!C.zf) goto L_112a72c6;
  /* 112a72be mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 112a72c1 mov dword ptr [0x112adb18], eax */
  w32((uint32_t)(0x112adb18), (EAX));
L_112a72c6:;
  /* 112a72c6 cmp esi, 0x112abaf8 */
  { uint32_t _a=(ESI),_b=(0x112abaf8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a72cc je 0x112a72ee */
  if (C.zf) goto L_112a72ee;
  /* 112a72ce mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 112a72d1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 112a72d3 push esi */
  push32((uint32_t)(ESI));
  /* 112a72d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 112a72d6 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 112a72d8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112a72da mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 112a72dd mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 112a72e0 push dword ptr [0x112af824] */
  push32((uint32_t)(r32((uint32_t)(0x112af824))));
  /* 112a72e6 call dword ptr [0x112aa088] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa088))), 0x112a72ecu);
  /* 112a72ec pop esi */
  ESI = (pop32());
  /* 112a72ed ret  */
  ESPCHK(0x112a72a1u, _esp0);
  ESP += 4; return;
L_112a72ee:;
  /* 112a72ee or dword ptr [0x112abb08], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x112abb08)))|(0xffffffffu); w32((uint32_t)(0x112abb08), (_r)); fl_logic(_r,32); }
  /* 112a72f5 pop esi */
  ESI = (pop32());
  /* 112a72f6 ret  */
  ESPCHK(0x112a72a1u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f7 @ 0x112a72f7 (194 bytes, 66 insns) */
void f_112a72f7(void) {
  FTRACE(0x112a72f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a72f7 push ebp */
  push32((uint32_t)(EBP));
  /* 112a72f8 mov ebp, esp */
  EBP = (ESP);
  /* 112a72fa push ecx */
  push32((uint32_t)(ECX));
  /* 112a72fb push ebx */
  push32((uint32_t)(EBX));
  /* 112a72fc push esi */
  push32((uint32_t)(ESI));
  /* 112a72fd mov esi, dword ptr [0x112abafc] */
  ESI = (r32((uint32_t)(0x112abafc)));
  /* 112a7303 push edi */
  push32((uint32_t)(EDI));
L_112a7304:;
  /* 112a7304 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7308 je 0x112a73a2 */
  if (C.zf) goto L_112a73a2;
  /* 112a730e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a7312 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 112a7318 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_112a731d:;
  /* 112a731d cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7323 jne 0x112a735e */
  if (!C.zf) goto L_112a735e;
  /* 112a7325 mov eax, ebx */
  EAX = (EBX);
  /* 112a7327 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 112a732c add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a732f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112a7334 push eax */
  push32((uint32_t)(EAX));
  /* 112a7335 call dword ptr [0x112aa058] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa058))), 0x112a733bu);
  /* 112a733b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a733d je 0x112a735e */
  if (C.zf) goto L_112a735e;
  /* 112a733f or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 112a7342 dec dword ptr [0x112af3d0] */
  { uint32_t _r=(r32((uint32_t)(0x112af3d0)))-1; w32((uint32_t)(0x112af3d0), (_r)); fl_dec(_r,32); }
  /* 112a7348 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 112a734b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a734d je 0x112a7353 */
  if (C.zf) goto L_112a7353;
  /* 112a734f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7351 jbe 0x112a7356 */
  if ((C.cf||C.zf)) goto L_112a7356;
L_112a7353:;
  /* 112a7353 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_112a7356:;
  /* 112a7356 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 112a7359 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 112a735c je 0x112a736b */
  if (C.zf) goto L_112a736b;
L_112a735e:;
  /* 112a735e sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7364 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7367 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 112a7369 jge 0x112a731d */
  if ((C.sf==C.of)) goto L_112a731d;
L_112a736b:;
  /* 112a736b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a736f mov ecx, esi */
  ECX = (ESI);
  /* 112a7371 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 112a7374 je 0x112a73a2 */
  if (C.zf) goto L_112a73a2;
  /* 112a7376 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a737a jne 0x112a73a2 */
  if (!C.zf) goto L_112a73a2;
  /* 112a737c push 1 */
  push32((uint32_t)(0x1u));
  /* 112a737e lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 112a7381 pop edx */
  EDX = (pop32());
L_112a7382:;
  /* 112a7382 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7385 jne 0x112a7393 */
  if (!C.zf) goto L_112a7393;
  /* 112a7387 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 112a7388 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a738b cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7391 jl 0x112a7382 */
  if ((C.sf!=C.of)) goto L_112a7382;
L_112a7393:;
  /* 112a7393 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7399 jne 0x112a73a2 */
  if (!C.zf) goto L_112a73a2;
  /* 112a739b push ecx */
  push32((uint32_t)(ECX));
  /* 112a739c call 0x112a72a1 */
  push32(0x112a73a1u); f_112a72a1();
  /* 112a73a1 pop ecx */
  ECX = (pop32());
L_112a73a2:;
  /* 112a73a2 cmp esi, dword ptr [0x112abafc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112abafc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a73a8 je 0x112a73b4 */
  if (C.zf) goto L_112a73b4;
  /* 112a73aa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a73ae jg 0x112a7304 */
  if ((!C.zf&&C.sf==C.of)) goto L_112a7304;
L_112a73b4:;
  /* 112a73b4 pop edi */
  EDI = (pop32());
  /* 112a73b5 pop esi */
  ESI = (pop32());
  /* 112a73b6 pop ebx */
  EBX = (pop32());
  /* 112a73b7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a73b8 ret  */
  ESPCHK(0x112a72f7u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b9 @ 0x112a73b9 (87 bytes, 34 insns) */
void f_112a73b9(void) {
  FTRACE(0x112a73b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a73b9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a73bd mov edx, 0x112abaf8 */
  EDX = (0x112abaf8u);
  /* 112a73c2 push esi */
  push32((uint32_t)(ESI));
  /* 112a73c3 mov ecx, edx */
  ECX = (EDX);
L_112a73c5:;
  /* 112a73c5 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a73c8 jbe 0x112a73cf */
  if ((C.cf||C.zf)) goto L_112a73cf;
  /* 112a73ca cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a73cd jb 0x112a73d7 */
  if (C.cf) goto L_112a73d7;
L_112a73cf:;
  /* 112a73cf mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 112a73d1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a73d3 je 0x112a740c */
  if (C.zf) goto L_112a740c;
  /* 112a73d5 jmp 0x112a73c5 */
  goto L_112a73c5;
L_112a73d7:;
  /* 112a73d7 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 112a73d9 jne 0x112a740c */
  if (!C.zf) goto L_112a740c;
  /* 112a73db mov esi, eax */
  ESI = (EAX);
  /* 112a73dd mov edx, 0x100 */
  EDX = (0x100u);
  /* 112a73e2 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 112a73e8 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a73ea jb 0x112a740c */
  if (C.cf) goto L_112a740c;
  /* 112a73ec mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 112a73f0 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 112a73f2 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 112a73f6 mov ecx, eax */
  ECX = (EAX);
  /* 112a73f8 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 112a73fd sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a73ff mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 112a7401 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7403 pop esi */
  ESI = (pop32());
  /* 112a7404 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112a7407 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 112a740b ret  */
  ESPCHK(0x112a73b9u, _esp0);
  ESP += 4; return;
L_112a740c:;
  /* 112a740c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 112a740e pop esi */
  ESI = (pop32());
  /* 112a740f ret  */
  ESPCHK(0x112a73b9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007410 @ 0x112a7410 (69 bytes, 19 insns) */
void f_112a7410(void) {
  FTRACE(0x112a7410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7410 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 112a7414 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 112a7418 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a741b sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 112a741e lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 112a7422 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 112a7426 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 112a7429 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a742b and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 112a742e cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7434 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 112a743b jne 0x112a7454 */
  if (!C.zf) goto L_112a7454;
  /* 112a743d inc dword ptr [0x112af3d0] */
  { uint32_t _r=(r32((uint32_t)(0x112af3d0)))+1; w32((uint32_t)(0x112af3d0), (_r)); fl_inc(_r,32); }
  /* 112a7443 cmp dword ptr [0x112af3d0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x112af3d0))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a744a jne 0x112a7454 */
  if (!C.zf) goto L_112a7454;
  /* 112a744c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 112a744e call 0x112a72f7 */
  push32(0x112a7453u); f_112a72f7();
  /* 112a7453 pop ecx */
  ECX = (pop32());
L_112a7454:;
  /* 112a7454 ret  */
  ESPCHK(0x112a7410u, _esp0);
  ESP += 4; return;
}

/* FUN_10007455 @ 0x112a7455 (520 bytes, 180 insns) */
void f_112a7455(void) {
  FTRACE(0x112a7455u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7455 push ebp */
  push32((uint32_t)(EBP));
  /* 112a7456 mov ebp, esp */
  EBP = (ESP);
  /* 112a7458 push ecx */
  push32((uint32_t)(ECX));
  /* 112a7459 push ecx */
  push32((uint32_t)(ECX));
  /* 112a745a push ebx */
  push32((uint32_t)(EBX));
  /* 112a745b push esi */
  push32((uint32_t)(ESI));
  /* 112a745c mov esi, dword ptr [0x112adb18] */
  ESI = (r32((uint32_t)(0x112adb18)));
  /* 112a7462 push edi */
  push32((uint32_t)(EDI));
L_112a7463:;
  /* 112a7463 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 112a7466 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7469 je 0x112a750e */
  if (C.zf) goto L_112a750e;
  /* 112a746f mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 112a7472 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 112a7478 mov eax, edi */
  EAX = (EDI);
  /* 112a747a sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a747c sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a747f sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 112a7482 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 112a7485 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7487 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112a748c jae 0x112a74c8 */
  if (!C.cf) goto L_112a74c8;
L_112a748e:;
  /* 112a748e mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 112a7490 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a7493 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7495 jl 0x112a74b1 */
  if ((C.sf!=C.of)) goto L_112a74b1;
  /* 112a7497 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a749a jbe 0x112a74b1 */
  if ((C.cf||C.zf)) goto L_112a74b1;
  /* 112a749c push ebx */
  push32((uint32_t)(EBX));
  /* 112a749d push ecx */
  push32((uint32_t)(ECX));
  /* 112a749e push eax */
  push32((uint32_t)(EAX));
  /* 112a749f call 0x112a765d */
  push32(0x112a74a4u); f_112a765d();
  /* 112a74a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a74a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a74a9 jne 0x112a7520 */
  if (!C.zf) goto L_112a7520;
  /* 112a74ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a74ae mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_112a74b1:;
  /* 112a74b1 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a74b4 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 112a74ba add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a74bf cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a74c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 112a74c4 jb 0x112a748e */
  if (C.cf) goto L_112a748e;
  /* 112a74c6 jmp 0x112a74cb */
  goto L_112a74cb;
L_112a74c8:;
  /* 112a74c8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_112a74cb:;
  /* 112a74cb mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 112a74ce mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 112a74d1 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 112a74d4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112a74d7 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a74d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 112a74dc jae 0x112a7511 */
  if (!C.cf) goto L_112a7511;
L_112a74de:;
  /* 112a74de mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 112a74e0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a74e2 jl 0x112a74fd */
  if ((C.sf!=C.of)) goto L_112a74fd;
  /* 112a74e4 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a74e7 jbe 0x112a74fd */
  if ((C.cf||C.zf)) goto L_112a74fd;
  /* 112a74e9 push ebx */
  push32((uint32_t)(EBX));
  /* 112a74ea push eax */
  push32((uint32_t)(EAX));
  /* 112a74eb push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 112a74ee call 0x112a765d */
  push32(0x112a74f3u); f_112a765d();
  /* 112a74f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a74f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a74f8 jne 0x112a7520 */
  if (!C.zf) goto L_112a7520;
  /* 112a74fa mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_112a74fd:;
  /* 112a74fd add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a7504 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7507 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a750a jb 0x112a74de */
  if (C.cf) goto L_112a74de;
  /* 112a750c jmp 0x112a7511 */
  goto L_112a7511;
L_112a750e:;
  /* 112a750e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_112a7511:;
  /* 112a7511 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 112a7513 cmp esi, dword ptr [0x112adb18] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x112adb18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7519 je 0x112a7530 */
  if (C.zf) goto L_112a7530;
  /* 112a751b jmp 0x112a7463 */
  goto L_112a7463;
L_112a7520:;
  /* 112a7520 mov dword ptr [0x112adb18], esi */
  w32((uint32_t)(0x112adb18), (ESI));
  /* 112a7526 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a7528 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 112a752b jmp 0x112a7658 */
  goto L_112a7658;
L_112a7530:;
  /* 112a7530 mov eax, 0x112abaf8 */
  EAX = (0x112abaf8u);
  /* 112a7535 mov edi, eax */
  EDI = (EAX);
L_112a7537:;
  /* 112a7537 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a753b je 0x112a7543 */
  if (C.zf) goto L_112a7543;
  /* 112a753d cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7541 jne 0x112a754f */
  if (!C.zf) goto L_112a754f;
L_112a7543:;
  /* 112a7543 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 112a7545 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7547 je 0x112a7624 */
  if (C.zf) goto L_112a7624;
  /* 112a754d jmp 0x112a7537 */
  goto L_112a7537;
L_112a754f:;
  /* 112a754f mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 112a7552 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 112a7556 mov esi, ebx */
  ESI = (EBX);
  /* 112a7558 mov eax, ebx */
  EAX = (EBX);
  /* 112a755a sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a755c sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a755f sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 112a7562 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 112a7565 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7568 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a756b jne 0x112a757e */
  if (!C.zf) goto L_112a757e;
L_112a756d:;
  /* 112a756d cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7571 jge 0x112a757e */
  if ((C.sf==C.of)) goto L_112a757e;
  /* 112a7573 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7576 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 112a7579 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a757c je 0x112a756d */
  if (C.zf) goto L_112a756d;
L_112a757e:;
  /* 112a757e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a7581 push 4 */
  push32((uint32_t)(0x4u));
  /* 112a7583 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 112a7586 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 112a758b push eax */
  push32((uint32_t)(EAX));
  /* 112a758c push esi */
  push32((uint32_t)(ESI));
  /* 112a758d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 112a7590 call dword ptr [0x112aa050] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa050))), 0x112a7596u);
  /* 112a7596 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7598 jne 0x112a7656 */
  if (!C.zf) goto L_112a7656;
  /* 112a759e push 0 */
  push32((uint32_t)(0x0u));
  /* 112a75a0 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 112a75a3 push esi */
  push32((uint32_t)(ESI));
  /* 112a75a4 call 0x112a9070 */
  push32(0x112a75a9u); f_112a9070();
  /* 112a75a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 112a75ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 112a75af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 112a75b1 mov ecx, ebx */
  ECX = (EBX);
  /* 112a75b3 jle 0x112a75e5 */
  if ((C.zf||C.sf!=C.of)) goto L_112a75e5;
  /* 112a75b5 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 112a75b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_112a75bb:;
  /* 112a75bb or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 112a75c2 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 112a75c5 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 112a75c8 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 112a75cd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 112a75cf mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112a75d1 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 112a75d8 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a75dd add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a75e0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 112a75e3 jne 0x112a75bb */
  if (!C.zf) goto L_112a75bb;
L_112a75e5:;
  /* 112a75e5 mov dword ptr [0x112adb18], edi */
  w32((uint32_t)(0x112adb18), (EDI));
  /* 112a75eb lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_112a75f1:;
  /* 112a75f1 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a75f3 jae 0x112a7601 */
  if (!C.cf) goto L_112a7601;
  /* 112a75f5 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a75f8 je 0x112a75ff */
  if (C.zf) goto L_112a75ff;
  /* 112a75fa add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a75fd jmp 0x112a75f1 */
  goto L_112a75f1;
L_112a75ff:;
  /* 112a75ff cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_112a7601:;
  /* 112a7601 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7603 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 112a7605 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 112a7608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a760b mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 112a760e mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 112a7611 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a7613 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a7616 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 112a761a lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 112a7620 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 112a7622 jmp 0x112a7658 */
  goto L_112a7658;
L_112a7624:;
  /* 112a7624 call 0x112a715d */
  push32(0x112a7629u); f_112a715d();
  /* 112a7629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a762b je 0x112a7656 */
  if (C.zf) goto L_112a7656;
  /* 112a762d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 112a7630 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 112a7633 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 112a7637 mov dword ptr [0x112adb18], eax */
  w32((uint32_t)(0x112adb18), (EAX));
  /* 112a763c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 112a763e mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 112a7643 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7645 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 112a7648 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 112a764b sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a764e lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 112a7654 jmp 0x112a7658 */
  goto L_112a7658;
L_112a7656:;
  /* 112a7656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a7658:;
  /* 112a7658 pop edi */
  EDI = (pop32());
  /* 112a7659 pop esi */
  ESI = (pop32());
  /* 112a765a pop ebx */
  EBX = (pop32());
  /* 112a765b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a765c ret  */
  ESPCHK(0x112a7455u, _esp0);
  ESP += 4; return;
}

/* FUN_1000765d @ 0x112a765d (292 bytes, 125 insns) */
void f_112a765d(void) {
  FTRACE(0x112a765du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a765d push ebp */
  push32((uint32_t)(EBP));
  /* 112a765e mov ebp, esp */
  EBP = (ESP);
  /* 112a7660 push ecx */
  push32((uint32_t)(ECX));
  /* 112a7661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a7664 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 112a7667 push ebx */
  push32((uint32_t)(EBX));
  /* 112a7668 push esi */
  push32((uint32_t)(ESI));
  /* 112a7669 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 112a766c push edi */
  push32((uint32_t)(EDI));
  /* 112a766d mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 112a766f lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 112a7675 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7677 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 112a767a mov eax, edi */
  EAX = (EDI);
  /* 112a767c mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 112a767f jb 0x112a76a2 */
  if (C.cf) goto L_112a76a2;
  /* 112a7681 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 112a7684 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 112a7686 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7688 jae 0x112a7691 */
  if (!C.cf) goto L_112a7691;
  /* 112a768a add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 112a768c sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a768f jmp 0x112a769a */
  goto L_112a769a;
L_112a7691:;
  /* 112a7691 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 112a7695 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 112a7698 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_112a769a:;
  /* 112a769a lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 112a769d jmp 0x112a7770 */
  goto L_112a7770;
L_112a76a2:;
  /* 112a76a2 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a76a4 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a76a7 je 0x112a76ab */
  if (C.zf) goto L_112a76ab;
  /* 112a76a9 mov eax, esi */
  EAX = (ESI);
L_112a76ab:;
  /* 112a76ab lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 112a76ae cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a76b0 jae 0x112a76f5 */
  if (!C.cf) goto L_112a76f5;
L_112a76b2:;
  /* 112a76b2 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 112a76b4 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 112a76b6 jne 0x112a76e8 */
  if (!C.zf) goto L_112a76e8;
  /* 112a76b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 112a76ba lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 112a76bd pop esi */
  ESI = (pop32());
L_112a76be:;
  /* 112a76be cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a76c1 jne 0x112a76c7 */
  if (!C.zf) goto L_112a76c7;
  /* 112a76c3 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a76c4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 112a76c5 jmp 0x112a76be */
  goto L_112a76be;
L_112a76c7:;
  /* 112a76c7 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a76c9 jae 0x112a7719 */
  if (!C.cf) goto L_112a7719;
  /* 112a76cb cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a76ce jne 0x112a76d5 */
  if (!C.zf) goto L_112a76d5;
  /* 112a76d0 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 112a76d3 jmp 0x112a76e1 */
  goto L_112a76e1;
L_112a76d5:;
  /* 112a76d5 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a76d8 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a76db jb 0x112a777a */
  if (C.cf) goto L_112a777a;
L_112a76e1:;
  /* 112a76e1 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 112a76e4 mov eax, ebx */
  EAX = (EBX);
  /* 112a76e6 jmp 0x112a76ed */
  goto L_112a76ed;
L_112a76e8:;
  /* 112a76e8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 112a76eb add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_112a76ed:;
  /* 112a76ed lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 112a76f0 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a76f3 jb 0x112a76b2 */
  if (C.cf) goto L_112a76b2;
L_112a76f5:;
  /* 112a76f5 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_112a76f8:;
  /* 112a76f8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a76fa jae 0x112a777a */
  if (!C.cf) goto L_112a777a;
  /* 112a76fc lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 112a76ff cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7702 jae 0x112a777a */
  if (!C.cf) goto L_112a777a;
  /* 112a7704 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 112a7706 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 112a7708 jne 0x112a774a */
  if (!C.zf) goto L_112a774a;
  /* 112a770a push 1 */
  push32((uint32_t)(0x1u));
  /* 112a770c lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 112a770f pop eax */
  EAX = (pop32());
L_112a7710:;
  /* 112a7710 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 112a7713 jne 0x112a773a */
  if (!C.zf) goto L_112a773a;
  /* 112a7715 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 112a7716 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 112a7717 jmp 0x112a7710 */
  goto L_112a7710;
L_112a7719:;
  /* 112a7719 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 112a771c cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a771f jae 0x112a772a */
  if (!C.cf) goto L_112a772a;
  /* 112a7721 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7723 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 112a7725 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 112a7728 jmp 0x112a7733 */
  goto L_112a7733;
L_112a772a:;
  /* 112a772a and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 112a772e lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 112a7731 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_112a7733:;
  /* 112a7733 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 112a7735 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 112a7738 jmp 0x112a7770 */
  goto L_112a7770;
L_112a773a:;
  /* 112a773a cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a773c jae 0x112a7751 */
  if (!C.cf) goto L_112a7751;
  /* 112a773e sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 112a7741 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7744 jb 0x112a777a */
  if (C.cf) goto L_112a777a;
  /* 112a7746 mov esi, ebx */
  ESI = (EBX);
  /* 112a7748 jmp 0x112a76f8 */
  goto L_112a76f8;
L_112a774a:;
  /* 112a774a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 112a774d add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a774f jmp 0x112a76f8 */
  goto L_112a76f8;
L_112a7751:;
  /* 112a7751 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 112a7754 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7757 jae 0x112a7762 */
  if (!C.cf) goto L_112a7762;
  /* 112a7759 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a775b mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 112a775d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 112a7760 jmp 0x112a776b */
  goto L_112a776b;
L_112a7762:;
  /* 112a7762 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 112a7766 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 112a7769 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_112a776b:;
  /* 112a776b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 112a776d lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_112a7770:;
  /* 112a7770 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 112a7773 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 112a7776 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 112a7778 jmp 0x112a777c */
  goto L_112a777c;
L_112a777a:;
  /* 112a777a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_112a777c:;
  /* 112a777c pop edi */
  EDI = (pop32());
  /* 112a777d pop esi */
  ESI = (pop32());
  /* 112a777e pop ebx */
  EBX = (pop32());
  /* 112a777f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 112a7780 ret  */
  ESPCHK(0x112a765du, _esp0);
  ESP += 4; return;
}

/* FUN_10007781 @ 0x112a7781 (41 bytes, 12 insns) */
void f_112a7781(void) {
  FTRACE(0x112a7781u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7781 push esi */
  push32((uint32_t)(ESI));
  /* 112a7782 mov esi, dword ptr [0x112aa0bc] */
  ESI = (r32((uint32_t)(0x112aa0bc)));
  /* 112a7788 push dword ptr [0x112adb64] */
  push32((uint32_t)(r32((uint32_t)(0x112adb64))));
  /* 112a778e call esi */
  call_ind((uint32_t)(ESI), 0x112a7790u);
  /* 112a7790 push dword ptr [0x112adb54] */
  push32((uint32_t)(r32((uint32_t)(0x112adb54))));
  /* 112a7796 call esi */
  call_ind((uint32_t)(ESI), 0x112a7798u);
  /* 112a7798 push dword ptr [0x112adb44] */
  push32((uint32_t)(r32((uint32_t)(0x112adb44))));
  /* 112a779e call esi */
  call_ind((uint32_t)(ESI), 0x112a77a0u);
  /* 112a77a0 push dword ptr [0x112adb24] */
  push32((uint32_t)(r32((uint32_t)(0x112adb24))));
  /* 112a77a6 call esi */
  call_ind((uint32_t)(ESI), 0x112a77a8u);
  /* 112a77a8 pop esi */
  ESI = (pop32());
  /* 112a77a9 ret  */
  ESPCHK(0x112a7781u, _esp0);
  ESP += 4; return;
}

/* FUN_100077aa @ 0x112a77aa (108 bytes, 34 insns) */
void f_112a77aa(void) {
  FTRACE(0x112a77aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a77aa push esi */
  push32((uint32_t)(ESI));
  /* 112a77ab push edi */
  push32((uint32_t)(EDI));
  /* 112a77ac mov edi, dword ptr [0x112aa000] */
  EDI = (r32((uint32_t)(0x112aa000)));
  /* 112a77b2 mov esi, 0x112adb20 */
  ESI = (0x112adb20u);
L_112a77b7:;
  /* 112a77b7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 112a77b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 112a77bb je 0x112a77e8 */
  if (C.zf) goto L_112a77e8;
  /* 112a77bd cmp esi, 0x112adb64 */
  { uint32_t _a=(ESI),_b=(0x112adb64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a77c3 je 0x112a77e8 */
  if (C.zf) goto L_112a77e8;
  /* 112a77c5 cmp esi, 0x112adb54 */
  { uint32_t _a=(ESI),_b=(0x112adb54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a77cb je 0x112a77e8 */
  if (C.zf) goto L_112a77e8;
  /* 112a77cd cmp esi, 0x112adb44 */
  { uint32_t _a=(ESI),_b=(0x112adb44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a77d3 je 0x112a77e8 */
  if (C.zf) goto L_112a77e8;
  /* 112a77d5 cmp esi, 0x112adb24 */
  { uint32_t _a=(ESI),_b=(0x112adb24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a77db je 0x112a77e8 */
  if (C.zf) goto L_112a77e8;
  /* 112a77dd push eax */
  push32((uint32_t)(EAX));
  /* 112a77de call edi */
  call_ind((uint32_t)(EDI), 0x112a77e0u);
  /* 112a77e0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112a77e2 call 0x112a4b8b */
  push32(0x112a77e7u); f_112a4b8b();
  /* 112a77e7 pop ecx */
  ECX = (pop32());
L_112a77e8:;
  /* 112a77e8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 112a77eb cmp esi, 0x112adbe0 */
  { uint32_t _a=(ESI),_b=(0x112adbe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a77f1 jl 0x112a77b7 */
  if ((C.sf!=C.of)) goto L_112a77b7;
  /* 112a77f3 push dword ptr [0x112adb44] */
  push32((uint32_t)(r32((uint32_t)(0x112adb44))));
  /* 112a77f9 call edi */
  call_ind((uint32_t)(EDI), 0x112a77fbu);
  /* 112a77fb push dword ptr [0x112adb54] */
  push32((uint32_t)(r32((uint32_t)(0x112adb54))));
  /* 112a7801 call edi */
  call_ind((uint32_t)(EDI), 0x112a7803u);
  /* 112a7803 push dword ptr [0x112adb64] */
  push32((uint32_t)(r32((uint32_t)(0x112adb64))));
  /* 112a7809 call edi */
  call_ind((uint32_t)(EDI), 0x112a780bu);
  /* 112a780b push dword ptr [0x112adb24] */
  push32((uint32_t)(r32((uint32_t)(0x112adb24))));
  /* 112a7811 call edi */
  call_ind((uint32_t)(EDI), 0x112a7813u);
  /* 112a7813 pop edi */
  EDI = (pop32());
  /* 112a7814 pop esi */
  ESI = (pop32());
  /* 112a7815 ret  */
  ESPCHK(0x112a77aau, _esp0);
  ESP += 4; return;
}

/* FUN_10007816 @ 0x112a7816 (97 bytes, 37 insns) */
void f_112a7816(void) {
  FTRACE(0x112a7816u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 112a7816 push ebp */
  push32((uint32_t)(EBP));
  /* 112a7817 mov ebp, esp */
  EBP = (ESP);
  /* 112a7819 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 112a781c push esi */
  push32((uint32_t)(ESI));
  /* 112a781d cmp dword ptr [eax*4 + 0x112adb20], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x112adb20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a7825 lea esi, [eax*4 + 0x112adb20] */
  ESI = ((uint32_t)(EAX*4 + 0x112adb20));
  /* 112a782c jne 0x112a786c */
  if (!C.zf) goto L_112a786c;
  /* 112a782e push edi */
  push32((uint32_t)(EDI));
  /* 112a782f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 112a7831 call 0x112a5745 */
  push32(0x112a7836u); f_112a5745();
  /* 112a7836 mov edi, eax */
  EDI = (EAX);
  /* 112a7838 pop ecx */
  ECX = (pop32());
  /* 112a7839 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 112a783b jne 0x112a7845 */
  if (!C.zf) goto L_112a7845;
  /* 112a783d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112a783f call 0x112a4b58 */
  push32(0x112a7844u); f_112a4b58();
  /* 112a7844 pop ecx */
  ECX = (pop32());
L_112a7845:;
  /* 112a7845 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112a7847 call 0x112a7816 */
  push32(0x112a784cu); f_112a7816();
  /* 112a784c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 112a784f pop ecx */
  ECX = (pop32());
  /* 112a7850 push edi */
  push32((uint32_t)(EDI));
  /* 112a7851 jne 0x112a785d */
  if (!C.zf) goto L_112a785d;
  /* 112a7853 call dword ptr [0x112aa0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa0bc))), 0x112a7859u);
  /* 112a7859 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 112a785b jmp 0x112a7863 */
  goto L_112a7863;
L_112a785d:;
  /* 112a785d call 0x112a4b8b */
  push32(0x112a7862u); f_112a4b8b();
  /* 112a7862 pop ecx */
  ECX = (pop32());
L_112a7863:;
  /* 112a7863 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 112a7865 call 0x112a7877 */
  push32(0x112a786au); f_112a7877();
  /* 112a786a pop ecx */
  ECX = (pop32());
  /* 112a786b pop edi */
  EDI = (pop32());
L_112a786c:;
  /* 112a786c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 112a786e call dword ptr [0x112aa08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x112aa08c))), 0x112a7874u);
  /* 112a7874 pop esi */
  ESI = (pop32());
  /* 112a7875 pop ebp */
  EBP = (pop32());
  /* 112a7876 ret  */
  ESPCHK(0x112a7816u, _esp0);
  ESP += 4; return;
}

