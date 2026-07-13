#include "recomp.h"

/* FUN_10001000 @ 0x11411000 (20 bytes, 6 insns) */
void f_11411000(void) {
  FTRACE(0x11411000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11411004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11411005 jne 0x1141100c */
  if (!C.zf) goto L_1141100c;
  /* 11411007 call 0x11412ac0 */
  push32(0x1141100cu); f_11412ac0();
L_1141100c:;
  /* 1141100c mov eax, 1 */
  EAX = (0x1u);
  /* 11411011 ret 0xc */
  ESPCHK(0x11411000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001020 @ 0x11411020 (421 bytes, 113 insns) */
void f_11411020(void) {
  FTRACE(0x11411020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411020 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11411024 push ebx */
  push32((uint32_t)(EBX));
  /* 11411025 push ebp */
  push32((uint32_t)(EBP));
  /* 11411026 mov ebp, ecx */
  EBP = (ECX);
  /* 11411028 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 1141102c mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11411030 mov dword ptr [ebp + 0x2cf], eax */
  w32((uint32_t)(EBP + 0x2cf), (EAX));
  /* 11411036 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 1141103a mov dword ptr [ebp + 0x2b4], eax */
  w32((uint32_t)(EBP + 0x2b4), (EAX));
  /* 11411040 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11411044 mov dword ptr [ebp + 0x2d3], eax */
  w32((uint32_t)(EBP + 0x2d3), (EAX));
  /* 1141104a mov eax, dword ptr [esp + 0x3c] */
  EAX = (r32((uint32_t)(ESP + 0x3c)));
  /* 1141104e mov dword ptr [ebp + 0x2ac], ecx */
  w32((uint32_t)(EBP + 0x2ac), (ECX));
  /* 11411054 mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 11411058 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1141105b mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 1141105f mov dword ptr [ebp + 0x2b8], ecx */
  w32((uint32_t)(EBP + 0x2b8), (ECX));
  /* 11411065 mov dword ptr [ebp + 0x2b0], edx */
  w32((uint32_t)(EBP + 0x2b0), (EDX));
  /* 1141106b mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 1141106f lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11411072 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11411076 mov dword ptr [ebp + 0x31c], ecx */
  w32((uint32_t)(EBP + 0x31c), (ECX));
  /* 1141107c mov cl, byte ptr [esp + 0x1c] */
  CL = (r8((uint32_t)(ESP + 0x1c)));
  /* 11411080 push esi */
  push32((uint32_t)(ESI));
  /* 11411081 mov dword ptr [ebp + 0x2bc], edx */
  w32((uint32_t)(EBP + 0x2bc), (EDX));
  /* 11411087 push edi */
  push32((uint32_t)(EDI));
  /* 11411088 mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 1141108c mov edx, 1 */
  EDX = (0x1u);
  /* 11411091 mov dword ptr [ebp + 0x2a8], eax */
  w32((uint32_t)(EBP + 0x2a8), (EAX));
  /* 11411097 mov byte ptr [ebp + 0x313], cl */
  w8((uint32_t)(EBP + 0x313), (CL));
  /* 1141109d or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114110a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114110a2 mov byte ptr [ebp + 0x320], dl */
  w8((uint32_t)(EBP + 0x320), (DL));
  /* 114110a8 mov byte ptr [ebp + 0x321], dl */
  w8((uint32_t)(EBP + 0x321), (DL));
  /* 114110ae mov dword ptr [ebp + 0x314], ebx */
  w32((uint32_t)(EBP + 0x314), (EBX));
  /* 114110b4 mov dword ptr [ebp + 0x326], edx */
  w32((uint32_t)(EBP + 0x326), (EDX));
  /* 114110ba mov byte ptr [ebp + 0x32a], dl */
  w8((uint32_t)(EBP + 0x32a), (DL));
  /* 114110c0 lea esi, [ebp + 0x2c0] */
  ESI = ((uint32_t)(EBP + 0x2c0));
  /* 114110c6 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114110c8 not ecx */
  ECX = (~(ECX));
  /* 114110ca sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114110cc mov dword ptr [esp + 0x18], esi */
  w32((uint32_t)(ESP + 0x18), (ESI));
  /* 114110d0 mov eax, ecx */
  EAX = (ECX);
  /* 114110d2 mov esi, edi */
  ESI = (EDI);
  /* 114110d4 mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 114110d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114110db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114110dd mov ecx, eax */
  ECX = (EAX);
  /* 114110df mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 114110e3 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114110e6 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 114110e8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 114110ea mov dword ptr [ebp + 0x2d7], eax */
  w32((uint32_t)(EBP + 0x2d7), (EAX));
  /* 114110f0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114110f2 mov dword ptr [ebp + 0x2e7], 0x3e8 */
  w32((uint32_t)(EBP + 0x2e7), (0x3e8u));
  /* 114110fc mov dword ptr [ebp + 0x2f7], esi */
  w32((uint32_t)(EBP + 0x2f7), (ESI));
  /* 11411102 mov dword ptr [ebp + 0x2f3], esi */
  w32((uint32_t)(EBP + 0x2f3), (ESI));
  /* 11411108 mov dword ptr [ebp + 0x2ef], esi */
  w32((uint32_t)(EBP + 0x2ef), (ESI));
  /* 1141110e mov dword ptr [ebp + 0x2eb], esi */
  w32((uint32_t)(EBP + 0x2eb), (ESI));
  /* 11411114 mov dword ptr [ebp + 0x2e3], esi */
  w32((uint32_t)(EBP + 0x2e3), (ESI));
  /* 1141111a je 0x114111be */
  if (C.zf) goto L_114111be;
  /* 11411120 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411122 je 0x1141112d */
  if (C.zf) goto L_1141112d;
  /* 11411124 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411126 je 0x1141112d */
  if (C.zf) goto L_1141112d;
  /* 11411128 cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141112b jne 0x11411169 */
  if (!C.zf) goto L_11411169;
L_1141112d:;
  /* 1141112d lea edi, [ebp + 0x2db] */
  EDI = ((uint32_t)(EBP + 0x2db));
  /* 11411133 push edi */
  push32((uint32_t)(EDI));
  /* 11411134 call dword ptr [0x1141b180] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b180))), 0x1141113au);
  /* 1141113a mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 1141113e mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 11411142 push esi */
  push32((uint32_t)(ESI));
  /* 11411143 push ecx */
  push32((uint32_t)(ECX));
  /* 11411144 push edx */
  push32((uint32_t)(EDX));
  /* 11411145 push 0x1141fd18 */
  push32((uint32_t)(0x1141fd18u));
  /* 1141114a push 0x114214b8 */
  push32((uint32_t)(0x114214b8u));
  /* 1141114f push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11411154 call dword ptr [0x1141b184] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b184))), 0x1141115au);
  /* 1141115a push edi */
  push32((uint32_t)(EDI));
  /* 1141115b push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11411160 call dword ptr [0x1141b17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b17c))), 0x11411166u);
  /* 11411166 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11411169:;
  /* 11411169 sub ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141116b je 0x11411184 */
  if (C.zf) goto L_11411184;
  /* 1141116d dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1141116e je 0x11411194 */
  if (C.zf) goto L_11411194;
  /* 11411170 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11411171 je 0x114111a4 */
  if (C.zf) goto L_114111a4;
  /* 11411173 pop edi */
  EDI = (pop32());
  /* 11411174 mov dword ptr [ebp + 0x318], 0xf */
  w32((uint32_t)(EBP + 0x318), (0xfu));
  /* 1141117e pop esi */
  ESI = (pop32());
  /* 1141117f pop ebp */
  EBP = (pop32());
  /* 11411180 pop ebx */
  EBX = (pop32());
  /* 11411181 ret 0x34 */
  ESPCHK(0x11411020u, _esp0);
  ESP += 56; return;
L_11411184:;
  /* 11411184 lea eax, [ebp + 0x2db] */
  EAX = ((uint32_t)(EBP + 0x2db));
  /* 1141118a push eax */
  push32((uint32_t)(EAX));
  /* 1141118b call dword ptr [0x1141b18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b18c))), 0x11411191u);
  /* 11411191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11411194:;
  /* 11411194 lea ecx, [ebp + 0x2db] */
  ECX = ((uint32_t)(EBP + 0x2db));
  /* 1141119a push ecx */
  push32((uint32_t)(ECX));
  /* 1141119b call dword ptr [0x1141b190] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b190))), 0x114111a1u);
  /* 114111a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114111a4:;
  /* 114111a4 lea edx, [ebp + 0x2db] */
  EDX = ((uint32_t)(EBP + 0x2db));
  /* 114111aa push edx */
  push32((uint32_t)(EDX));
  /* 114111ab call dword ptr [0x1141b188] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b188))), 0x114111b1u);
  /* 114111b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114111b4 mov dword ptr [ebp + 0x318], 0xf */
  w32((uint32_t)(EBP + 0x318), (0xfu));
L_114111be:;
  /* 114111be pop edi */
  EDI = (pop32());
  /* 114111bf pop esi */
  ESI = (pop32());
  /* 114111c0 pop ebp */
  EBP = (pop32());
  /* 114111c1 pop ebx */
  EBX = (pop32());
  /* 114111c2 ret 0x34 */
  ESPCHK(0x11411020u, _esp0);
  ESP += 56; return;
}

/* FUN_100011d0 @ 0x114111d0 (73 bytes, 15 insns) */
void f_114111d0(void) {
  FTRACE(0x114111d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114111d0 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 114111d4 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 114111d8 mov dword ptr [ecx + 0x2ac], eax */
  w32((uint32_t)(ECX + 0x2ac), (EAX));
  /* 114111de mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 114111e2 mov dword ptr [ecx + 0x2b0], edx */
  w32((uint32_t)(ECX + 0x2b0), (EDX));
  /* 114111e8 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 114111ec mov dword ptr [ecx + 0x2b4], eax */
  w32((uint32_t)(ECX + 0x2b4), (EAX));
  /* 114111f2 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 114111f6 mov dword ptr [ecx + 0x2b8], edx */
  w32((uint32_t)(ECX + 0x2b8), (EDX));
  /* 114111fc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11411200 mov dword ptr [ecx + 0x2bc], eax */
  w32((uint32_t)(ECX + 0x2bc), (EAX));
  /* 11411206 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141120a mov dword ptr [ecx + 0x2a8], edx */
  w32((uint32_t)(ECX + 0x2a8), (EDX));
  /* 11411210 mov dword ptr [ecx + 0x2d3], eax */
  w32((uint32_t)(ECX + 0x2d3), (EAX));
  /* 11411216 ret 0x1c */
  ESPCHK(0x114111d0u, _esp0);
  ESP += 32; return;
}

/* FUN_10001220 @ 0x11411220 (161 bytes, 44 insns) */
void f_11411220(void) {
  FTRACE(0x11411220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411220 push esi */
  push32((uint32_t)(ESI));
  /* 11411221 mov esi, ecx */
  ESI = (ECX);
  /* 11411223 mov eax, dword ptr [esi + 0x2d7] */
  EAX = (r32((uint32_t)(ESI + 0x2d7)));
  /* 11411229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141122b je 0x1141123e */
  if (C.zf) goto L_1141123e;
  /* 1141122d cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411230 je 0x1141123e */
  if (C.zf) goto L_1141123e;
  /* 11411232 call 0x11411380 */
  push32(0x11411237u); f_11411380();
  /* 11411237 mov ecx, esi */
  ECX = (ESI);
  /* 11411239 call 0x114114a0 */
  push32(0x1141123eu); f_114114a0();
L_1141123e:;
  /* 1141123e cmp dword ptr [esi + 0x2d7], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2d7))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411245 jne 0x114112bf */
  if (!C.zf) goto L_114112bf;
  /* 11411247 mov eax, dword ptr [esi + 0x2e3] */
  EAX = (r32((uint32_t)(ESI + 0x2e3)));
  /* 1141124d cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411250 jl 0x1141125b */
  if ((C.sf!=C.of)) goto L_1141125b;
  /* 11411252 add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411255 mov dword ptr [esi + 0x2e3], eax */
  w32((uint32_t)(ESI + 0x2e3), (EAX));
L_1141125b:;
  /* 1141125b mov eax, dword ptr [esi + 0x2e7] */
  EAX = (r32((uint32_t)(ESI + 0x2e7)));
  /* 11411261 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411264 jl 0x1141126f */
  if ((C.sf!=C.of)) goto L_1141126f;
  /* 11411266 add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411269 mov dword ptr [esi + 0x2e7], eax */
  w32((uint32_t)(ESI + 0x2e7), (EAX));
L_1141126f:;
  /* 1141126f mov eax, dword ptr [esi + 0x2eb] */
  EAX = (r32((uint32_t)(ESI + 0x2eb)));
  /* 11411275 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411278 jl 0x11411283 */
  if ((C.sf!=C.of)) goto L_11411283;
  /* 1141127a add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141127d mov dword ptr [esi + 0x2eb], eax */
  w32((uint32_t)(ESI + 0x2eb), (EAX));
L_11411283:;
  /* 11411283 mov eax, dword ptr [esi + 0x2f7] */
  EAX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 11411289 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141128c jl 0x11411297 */
  if ((C.sf!=C.of)) goto L_11411297;
  /* 1141128e add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411291 mov dword ptr [esi + 0x2f7], eax */
  w32((uint32_t)(ESI + 0x2f7), (EAX));
L_11411297:;
  /* 11411297 mov eax, dword ptr [esi + 0x2f3] */
  EAX = (r32((uint32_t)(ESI + 0x2f3)));
  /* 1141129d cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114112a0 jl 0x114112ab */
  if ((C.sf!=C.of)) goto L_114112ab;
  /* 114112a2 add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114112a5 mov dword ptr [esi + 0x2f3], eax */
  w32((uint32_t)(ESI + 0x2f3), (EAX));
L_114112ab:;
  /* 114112ab mov eax, dword ptr [esi + 0x2ef] */
  EAX = (r32((uint32_t)(ESI + 0x2ef)));
  /* 114112b1 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114112b4 jl 0x114112bf */
  if ((C.sf!=C.of)) goto L_114112bf;
  /* 114112b6 add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114112b9 mov dword ptr [esi + 0x2ef], eax */
  w32((uint32_t)(ESI + 0x2ef), (EAX));
L_114112bf:;
  /* 114112bf pop esi */
  ESI = (pop32());
  /* 114112c0 ret  */
  ESPCHK(0x11411220u, _esp0);
  ESP += 4; return;
}

/* FUN_100012d0 @ 0x114112d0 (167 bytes, 40 insns) */
void f_114112d0(void) {
  FTRACE(0x114112d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114112d0 push ebx */
  push32((uint32_t)(EBX));
  /* 114112d1 mov ebx, dword ptr [ecx + 0x2e7] */
  EBX = (r32((uint32_t)(ECX + 0x2e7)));
  /* 114112d7 mov edx, 0x12c */
  EDX = (0x12cu);
  /* 114112dc push esi */
  push32((uint32_t)(ESI));
  /* 114112dd mov esi, dword ptr [ecx + 0x2e3] */
  ESI = (r32((uint32_t)(ECX + 0x2e3)));
  /* 114112e3 mov eax, 0x64 */
  EAX = (0x64u);
  /* 114112e8 push edi */
  push32((uint32_t)(EDI));
  /* 114112e9 mov edi, dword ptr [ecx + 0x2eb] */
  EDI = (r32((uint32_t)(ECX + 0x2eb)));
  /* 114112ef mov dword ptr [ecx + 0x30f], edx */
  w32((uint32_t)(ECX + 0x30f), (EDX));
  /* 114112f5 mov dword ptr [ecx + 0x30b], edx */
  w32((uint32_t)(ECX + 0x30b), (EDX));
  /* 114112fb mov dword ptr [ecx + 0x2fb], eax */
  w32((uint32_t)(ECX + 0x2fb), (EAX));
  /* 11411301 mov dword ptr [ecx + 0x303], eax */
  w32((uint32_t)(ECX + 0x303), (EAX));
  /* 11411307 mov dword ptr [ecx + 0x2ff], 0xc8 */
  w32((uint32_t)(ECX + 0x2ff), (0xc8u));
  /* 11411311 mov dword ptr [ecx + 0x307], 0x1f4 */
  w32((uint32_t)(ECX + 0x307), (0x1f4u));
  /* 1141131b mov edx, 0xc */
  EDX = (0xcu);
L_11411320:;
  /* 11411320 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411322 jle 0x1141132b */
  if ((C.zf||C.sf!=C.of)) goto L_1141132b;
  /* 11411324 add dword ptr [ecx + 0x2fb], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2fb))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x2fb), (_r)); fl_add(_a,_b,_r,32); }
L_1141132b:;
  /* 1141132b cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141132d jle 0x11411336 */
  if ((C.zf||C.sf!=C.of)) goto L_11411336;
  /* 1141132f add dword ptr [ecx + 0x303], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x303))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x303), (_r)); fl_add(_a,_b,_r,32); }
L_11411336:;
  /* 11411336 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411338 jle 0x11411341 */
  if ((C.zf||C.sf!=C.of)) goto L_11411341;
  /* 1141133a add dword ptr [ecx + 0x2ff], -0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2ff))),_b=(0xfffffff0u),_r=_a+_b; w32((uint32_t)(ECX + 0x2ff), (_r)); fl_add(_a,_b,_r,32); }
L_11411341:;
  /* 11411341 cmp dword ptr [ecx + 0x2f3], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2f3))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411347 jle 0x11411350 */
  if ((C.zf||C.sf!=C.of)) goto L_11411350;
  /* 11411349 add dword ptr [ecx + 0x30b], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30b))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x30b), (_r)); fl_add(_a,_b,_r,32); }
L_11411350:;
  /* 11411350 cmp dword ptr [ecx + 0x2f7], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2f7))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411356 jle 0x1141135f */
  if ((C.zf||C.sf!=C.of)) goto L_1141135f;
  /* 11411358 add dword ptr [ecx + 0x30f], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30f))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x30f), (_r)); fl_add(_a,_b,_r,32); }
L_1141135f:;
  /* 1141135f cmp dword ptr [ecx + 0x2ef], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x2ef))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411365 jle 0x1141136e */
  if ((C.zf||C.sf!=C.of)) goto L_1141136e;
  /* 11411367 add dword ptr [ecx + 0x307], -0x28 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x307))),_b=(0xffffffd8u),_r=_a+_b; w32((uint32_t)(ECX + 0x307), (_r)); fl_add(_a,_b,_r,32); }
L_1141136e:;
  /* 1141136e add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411370 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11411371 jne 0x11411320 */
  if (!C.zf) goto L_11411320;
  /* 11411373 pop edi */
  EDI = (pop32());
  /* 11411374 pop esi */
  ESI = (pop32());
  /* 11411375 pop ebx */
  EBX = (pop32());
  /* 11411376 ret  */
  ESPCHK(0x114112d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001380 @ 0x11411380 (259 bytes, 74 insns) [1 switch table(s)] */
void f_11411380(void) {
  FTRACE(0x11411380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411380 push ebp */
  push32((uint32_t)(EBP));
  /* 11411381 push esi */
  push32((uint32_t)(ESI));
  /* 11411382 push edi */
  push32((uint32_t)(EDI));
  /* 11411383 mov esi, ecx */
  ESI = (ECX);
  /* 11411385 call 0x11411580 */
  push32(0x1141138au); f_11411580();
  /* 1141138a xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1141138c mov dword ptr [esi + 0x318], eax */
  w32((uint32_t)(ESI + 0x318), (EAX));
  /* 11411392 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11411394 jle 0x11411420 */
  if ((C.zf||C.sf!=C.of)) goto L_11411420;
L_1141139a:;
  /* 1141139a mov cl, byte ptr [esi + 0x320] */
  CL = (r8((uint32_t)(ESI + 0x320)));
  /* 114113a0 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 114113a2 je 0x11411420 */
  if (C.zf) goto L_11411420;
  /* 114113a4 mov edi, dword ptr [esi + 0x322] */
  EDI = (r32((uint32_t)(ESI + 0x322)));
  /* 114113aa test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 114113ac jle 0x11411417 */
  if ((C.zf||C.sf!=C.of)) goto L_11411417;
  /* 114113ae mov edx, dword ptr [esi + 0x2e7] */
  EDX = (r32((uint32_t)(ESI + 0x2e7)));
  /* 114113b4 cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114113b7 jl 0x11411417 */
  if ((C.sf!=C.of)) goto L_11411417;
  /* 114113b9 mov ecx, dword ptr [esi + 0x314] */
  ECX = (r32((uint32_t)(ESI + 0x314)));
  /* 114113bf cmp ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114113c2 ja 0x11411401 */
  if ((!C.cf&&!C.zf)) goto L_11411401;
  /* 114113c4 jmp dword ptr [ecx*4 + 0x11411484] */
  switch (ECX) {
    case 0: goto L_114113cb;
    case 1: goto L_114113dd;
    case 2: goto L_114113d4;
    case 3: goto L_114113fa;
    case 4: goto L_114113e8;
    case 5: goto L_114113f1;
    default: x86_unimpl("switch@0x114113c4 out of table"); return;
  }
L_114113cb:;
  /* 114113cb add dword ptr [esi + 0x2e3], 0x19 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2e3))),_b=(0x19u),_r=_a+_b; w32((uint32_t)(ESI + 0x2e3), (_r)); fl_add(_a,_b,_r,32); }
  /* 114113d2 jmp 0x11411401 */
  goto L_11411401;
L_114113d4:;
  /* 114113d4 add dword ptr [esi + 0x2eb], 0x19 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2eb))),_b=(0x19u),_r=_a+_b; w32((uint32_t)(ESI + 0x2eb), (_r)); fl_add(_a,_b,_r,32); }
  /* 114113db jmp 0x11411401 */
  goto L_11411401;
L_114113dd:;
  /* 114113dd add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114113e0 mov dword ptr [esi + 0x2e7], edx */
  w32((uint32_t)(ESI + 0x2e7), (EDX));
  /* 114113e6 jmp 0x11411401 */
  goto L_11411401;
L_114113e8:;
  /* 114113e8 add dword ptr [esi + 0x2f3], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2f3))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x2f3), (_r)); fl_add(_a,_b,_r,32); }
  /* 114113ef jmp 0x11411401 */
  goto L_11411401;
L_114113f1:;
  /* 114113f1 add dword ptr [esi + 0x2f7], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2f7))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x2f7), (_r)); fl_add(_a,_b,_r,32); }
  /* 114113f8 jmp 0x11411401 */
  goto L_11411401;
L_114113fa:;
  /* 114113fa add dword ptr [esi + 0x2ef], 5 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2ef))),_b=(0x5u),_r=_a+_b; w32((uint32_t)(ESI + 0x2ef), (_r)); fl_add(_a,_b,_r,32); }
L_11411401:;
  /* 11411401 mov ecx, dword ptr [esi + 0x2e7] */
  ECX = (r32((uint32_t)(ESI + 0x2e7)));
  /* 11411407 add ecx, -5 */
  { uint32_t _a=(ECX),_b=(0xfffffffbu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141140a dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1141140b mov dword ptr [esi + 0x2e7], ecx */
  w32((uint32_t)(ESI + 0x2e7), (ECX));
  /* 11411411 mov dword ptr [esi + 0x322], edi */
  w32((uint32_t)(ESI + 0x322), (EDI));
L_11411417:;
  /* 11411417 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11411418 cmp ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141141a jl 0x1141139a */
  if ((C.sf!=C.of)) goto L_1141139a;
L_11411420:;
  /* 11411420 cmp dword ptr [esi + 0x2d7], 2 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2d7))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411427 jne 0x11411442 */
  if (!C.zf) goto L_11411442;
  /* 11411429 mov ecx, dword ptr [esi + 0x322] */
  ECX = (r32((uint32_t)(ESI + 0x322)));
  /* 1141142f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411431 mov dword ptr [esi + 0x322], ecx */
  w32((uint32_t)(ESI + 0x322), (ECX));
  /* 11411437 mov ecx, esi */
  ECX = (ESI);
  /* 11411439 call 0x114112d0 */
  push32(0x1141143eu); f_114112d0();
  /* 1141143e pop edi */
  EDI = (pop32());
  /* 1141143f pop esi */
  ESI = (pop32());
  /* 11411440 pop ebp */
  EBP = (pop32());
  /* 11411441 ret  */
  ESPCHK(0x11411380u, _esp0);
  ESP += 4; return;
L_11411442:;
  /* 11411442 mov ecx, dword ptr [esi + 0x326] */
  ECX = (r32((uint32_t)(ESI + 0x326)));
  /* 11411448 mov edx, 3 */
  EDX = (0x3u);
  /* 1141144d sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141144f mov edi, dword ptr [esi + 0x322] */
  EDI = (r32((uint32_t)(ESI + 0x322)));
  /* 11411455 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11411458 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1141145b mov al, byte ptr [esi + 0x313] */
  AL = (r8((uint32_t)(ESI + 0x313)));
  /* 11411461 add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11411463 push ecx */
  push32((uint32_t)(ECX));
  /* 11411464 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11411466 push 1 */
  push32((uint32_t)(0x1u));
  /* 11411468 push eax */
  push32((uint32_t)(EAX));
  /* 11411469 mov dword ptr [esi + 0x322], edi */
  w32((uint32_t)(ESI + 0x322), (EDI));
  /* 1141146f call dword ptr [0x1141b170] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b170))), 0x11411475u);
  /* 11411475 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411478 mov ecx, esi */
  ECX = (ESI);
  /* 1141147a call 0x114112d0 */
  push32(0x1141147fu); f_114112d0();
  /* 1141147f pop edi */
  EDI = (pop32());
  /* 11411480 pop esi */
  ESI = (pop32());
  /* 11411481 pop ebp */
  EBP = (pop32());
  /* 11411482 ret  */
  ESPCHK(0x11411380u, _esp0);
  ESP += 4; return;
}

/* FUN_100014a0 @ 0x114114a0 (224 bytes, 57 insns) */
void f_114114a0(void) {
  FTRACE(0x114114a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114114a0 push esi */
  push32((uint32_t)(ESI));
  /* 114114a1 mov esi, ecx */
  ESI = (ECX);
  /* 114114a3 cmp dword ptr [esi + 0x322], 0x3e8 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x322))),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114114ad jle 0x1141157e */
  if ((C.zf||C.sf!=C.of)) goto L_1141157e;
  /* 114114b3 call 0x11411580 */
  push32(0x114114b8u); f_11411580();
  /* 114114b8 cmp eax, dword ptr [esi + 0x31c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x31c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114114be jge 0x1141157e */
  if ((C.sf==C.of)) goto L_1141157e;
  /* 114114c4 mov ecx, esi */
  ECX = (ESI);
  /* 114114c6 call 0x11411580 */
  push32(0x114114cbu); f_11411580();
  /* 114114cb mov dword ptr [esi + 0x318], eax */
  w32((uint32_t)(ESI + 0x318), (EAX));
  /* 114114d1 mov eax, dword ptr [esi + 0x314] */
  EAX = (r32((uint32_t)(ESI + 0x314)));
  /* 114114d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114114d9 je 0x114114e5 */
  if (C.zf) goto L_114114e5;
  /* 114114db cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114114de je 0x114114e5 */
  if (C.zf) goto L_114114e5;
  /* 114114e0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114114e3 jne 0x1141155f */
  if (!C.zf) goto L_1141155f;
L_114114e5:;
  /* 114114e5 mov eax, dword ptr [esi + 0x2d3] */
  EAX = (r32((uint32_t)(ESI + 0x2d3)));
  /* 114114eb mov cl, byte ptr [esi + 0x313] */
  CL = (r8((uint32_t)(ESI + 0x313)));
  /* 114114f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114114f3 push eax */
  push32((uint32_t)(EAX));
  /* 114114f4 push ecx */
  push32((uint32_t)(ECX));
  /* 114114f5 push 0x1141fd18 */
  push32((uint32_t)(0x1141fd18u));
  /* 114114fa push 0x1141f890 */
  push32((uint32_t)(0x1141f890u));
  /* 114114ff push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11411504 call dword ptr [0x1141b184] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b184))), 0x1141150au);
  /* 1141150a mov eax, dword ptr [esi + 0x314] */
  EAX = (r32((uint32_t)(ESI + 0x314)));
  /* 11411510 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411513 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11411516 je 0x11411520 */
  if (C.zf) goto L_11411520;
  /* 11411518 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11411519 je 0x1141152e */
  if (C.zf) goto L_1141152e;
  /* 1141151b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1141151c je 0x1141153c */
  if (C.zf) goto L_1141153c;
  /* 1141151e jmp 0x1141154a */
  goto L_1141154a;
L_11411520:;
  /* 11411520 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11411525 call dword ptr [0x1141b18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b18c))), 0x1141152bu);
  /* 1141152b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1141152e:;
  /* 1141152e push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11411533 call dword ptr [0x1141b190] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b190))), 0x11411539u);
  /* 11411539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1141153c:;
  /* 1141153c push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11411541 call dword ptr [0x1141b188] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b188))), 0x11411547u);
  /* 11411547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1141154a:;
  /* 1141154a lea edx, [esi + 0x2db] */
  EDX = ((uint32_t)(ESI + 0x2db));
  /* 11411550 push edx */
  push32((uint32_t)(EDX));
  /* 11411551 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11411556 call dword ptr [0x1141b17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b17c))), 0x1141155cu);
  /* 1141155c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1141155f:;
  /* 1141155f mov ecx, dword ptr [esi + 0x322] */
  ECX = (r32((uint32_t)(ESI + 0x322)));
  /* 11411565 mov eax, dword ptr [esi + 0x318] */
  EAX = (r32((uint32_t)(ESI + 0x318)));
  /* 1141156b add ecx, 0xfffffc18 */
  { uint32_t _a=(ECX),_b=(0xfffffc18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411571 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11411572 mov dword ptr [esi + 0x322], ecx */
  w32((uint32_t)(ESI + 0x322), (ECX));
  /* 11411578 mov dword ptr [esi + 0x318], eax */
  w32((uint32_t)(ESI + 0x318), (EAX));
L_1141157e:;
  /* 1141157e pop esi */
  ESI = (pop32());
  /* 1141157f ret  */
  ESPCHK(0x114114a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001580 @ 0x11411580 (56 bytes, 18 insns) */
void f_11411580(void) {
  FTRACE(0x11411580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411580 mov eax, dword ptr [ecx + 0x314] */
  EAX = (r32((uint32_t)(ECX + 0x314)));
  /* 11411586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11411588 je 0x114115a7 */
  if (C.zf) goto L_114115a7;
  /* 1141158a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141158d je 0x114115a7 */
  if (C.zf) goto L_114115a7;
  /* 1141158f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411592 je 0x114115a7 */
  if (C.zf) goto L_114115a7;
  /* 11411594 mov eax, dword ptr [ecx + 0x318] */
  EAX = (r32((uint32_t)(ECX + 0x318)));
  /* 1141159a mov ecx, dword ptr [ecx + 0x31c] */
  ECX = (r32((uint32_t)(ECX + 0x31c)));
  /* 114115a0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114115a2 jl 0x114115b7 */
  if ((C.sf!=C.of)) goto L_114115b7;
  /* 114115a4 mov eax, ecx */
  EAX = (ECX);
  /* 114115a6 ret  */
  ESPCHK(0x11411580u, _esp0);
  ESP += 4; return;
L_114115a7:;
  /* 114115a7 add ecx, 0x2db */
  { uint32_t _a=(ECX),_b=(0x2dbu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114115ad push ecx */
  push32((uint32_t)(ECX));
  /* 114115ae call dword ptr [0x1141b178] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b178))), 0x114115b4u);
  /* 114115b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114115b7:;
  /* 114115b7 ret  */
  ESPCHK(0x11411580u, _esp0);
  ESP += 4; return;
}

/* FUN_100015c0 @ 0x114115c0 (271 bytes, 80 insns) [1 switch table(s)] */
void f_114115c0(void) {
  FTRACE(0x114115c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114115c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114115c1 push esi */
  push32((uint32_t)(ESI));
  /* 114115c2 mov esi, ecx */
  ESI = (ECX);
  /* 114115c4 push edi */
  push32((uint32_t)(EDI));
  /* 114115c5 mov eax, dword ptr [esi + 0x2d7] */
  EAX = (r32((uint32_t)(ESI + 0x2d7)));
  /* 114115cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114115cd je 0x114116c9 */
  if (C.zf) goto L_114116c9;
  /* 114115d3 mov al, byte ptr [esi + 0x321] */
  AL = (r8((uint32_t)(ESI + 0x321)));
  /* 114115d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114115db je 0x114116c9 */
  if (C.zf) goto L_114116c9;
  /* 114115e1 mov al, byte ptr [esi + 0x32a] */
  AL = (r8((uint32_t)(ESI + 0x32a)));
  /* 114115e7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 114115eb mov ebp, dword ptr [0x1141b164] */
  EBP = (r32((uint32_t)(0x1141b164)));
  /* 114115f1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114115f3 je 0x114116a2 */
  if (C.zf) goto L_114116a2;
  /* 114115f9 mov eax, dword ptr [esi + 0x2d3] */
  EAX = (r32((uint32_t)(ESI + 0x2d3)));
  /* 114115ff push edi */
  push32((uint32_t)(EDI));
  /* 11411600 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 11411605 push eax */
  push32((uint32_t)(EAX));
  /* 11411606 call ebp */
  call_ind((uint32_t)(EBP), 0x11411608u);
  /* 11411608 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141160b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141160d je 0x114116a2 */
  if (C.zf) goto L_114116a2;
  /* 11411613 mov eax, dword ptr [esi + 0x2d7] */
  EAX = (r32((uint32_t)(ESI + 0x2d7)));
  /* 11411619 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141161c jne 0x1141165f */
  if (!C.zf) goto L_1141165f;
  /* 1141161e push 0x1141c0a4 */
  push32((uint32_t)(0x1141c0a4u));
  /* 11411623 push 0 */
  push32((uint32_t)(0x0u));
  /* 11411625 push 0x1141c09c */
  push32((uint32_t)(0x1141c09cu));
  /* 1141162a push 9 */
  push32((uint32_t)(0x9u));
  /* 1141162c call dword ptr [0x1141b174] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b174))), 0x11411632u);
  /* 11411632 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411635 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411638 ja 0x114116a2 */
  if ((!C.cf&&!C.zf)) goto L_114116a2;
  /* 1141163a jmp dword ptr [eax*4 + 0x114116d0] */
  switch (EAX) {
    case 0: goto L_11411694;
    case 1: goto L_11411641;
    case 2: goto L_11411650;
    case 3: goto L_1141168b;
    default: x86_unimpl("switch@0x1141163a out of table"); return;
  }
L_11411641:;
  /* 11411641 mov ecx, esi */
  ECX = (ESI);
  /* 11411643 call 0x11411870 */
  push32(0x11411648u); f_11411870();
  /* 11411648 mov byte ptr [esi + 0x32a], al */
  w8((uint32_t)(ESI + 0x32a), (AL));
  /* 1141164e jmp 0x114116a2 */
  goto L_114116a2;
L_11411650:;
  /* 11411650 mov ecx, esi */
  ECX = (ESI);
  /* 11411652 call 0x114118a0 */
  push32(0x11411657u); f_114118a0();
  /* 11411657 mov byte ptr [esi + 0x32a], al */
  w8((uint32_t)(ESI + 0x32a), (AL));
  /* 1141165d jmp 0x114116a2 */
  goto L_114116a2;
L_1141165f:;
  /* 1141165f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411662 je 0x11411669 */
  if (C.zf) goto L_11411669;
  /* 11411664 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411667 jne 0x114116a2 */
  if (!C.zf) goto L_114116a2;
L_11411669:;
  /* 11411669 push 0x1141c088 */
  push32((uint32_t)(0x1141c088u));
  /* 1141166e push 0 */
  push32((uint32_t)(0x0u));
  /* 11411670 push 0x1141c09c */
  push32((uint32_t)(0x1141c09cu));
  /* 11411675 push 9 */
  push32((uint32_t)(0x9u));
  /* 11411677 call dword ptr [0x1141b174] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b174))), 0x1141167du);
  /* 1141167d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411680 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11411683 je 0x11411694 */
  if (C.zf) goto L_11411694;
  /* 11411685 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11411686 je 0x11411650 */
  if (C.zf) goto L_11411650;
  /* 11411688 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11411689 jne 0x114116a2 */
  if (!C.zf) goto L_114116a2;
L_1141168b:;
  /* 1141168b mov byte ptr [esi + 0x32a], 0 */
  w8((uint32_t)(ESI + 0x32a), (0x0u));
  /* 11411692 jmp 0x114116a2 */
  goto L_114116a2;
L_11411694:;
  /* 11411694 mov ecx, esi */
  ECX = (ESI);
  /* 11411696 call 0x114116e0 */
  push32(0x1141169bu); f_114116e0();
  /* 1141169b mov byte ptr [esi + 0x32a], 1 */
  w8((uint32_t)(ESI + 0x32a), (0x1u));
L_114116a2:;
  /* 114116a2 mov al, byte ptr [esi + 0x32a] */
  AL = (r8((uint32_t)(ESI + 0x32a)));
  /* 114116a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114116aa jne 0x114116c9 */
  if (!C.zf) goto L_114116c9;
  /* 114116ac mov ecx, dword ptr [esi + 0x2d3] */
  ECX = (r32((uint32_t)(ESI + 0x2d3)));
  /* 114116b2 push edi */
  push32((uint32_t)(EDI));
  /* 114116b3 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 114116b8 push ecx */
  push32((uint32_t)(ECX));
  /* 114116b9 call ebp */
  call_ind((uint32_t)(EBP), 0x114116bbu);
  /* 114116bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114116be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114116c0 jne 0x114116c9 */
  if (!C.zf) goto L_114116c9;
  /* 114116c2 mov byte ptr [esi + 0x32a], 1 */
  w8((uint32_t)(ESI + 0x32a), (0x1u));
L_114116c9:;
  /* 114116c9 pop edi */
  EDI = (pop32());
  /* 114116ca pop esi */
  ESI = (pop32());
  /* 114116cb pop ebp */
  EBP = (pop32());
  /* 114116cc ret 4 */
  ESPCHK(0x114115c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100016e0 @ 0x114116e0 (392 bytes, 108 insns) */
void f_114116e0(void) {
  FTRACE(0x114116e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114116e0 push esi */
  push32((uint32_t)(ESI));
  /* 114116e1 mov esi, ecx */
  ESI = (ECX);
  /* 114116e3 call 0x11411580 */
  push32(0x114116e8u); f_11411580();
  /* 114116e8 mov ecx, dword ptr [esi + 0x2d7] */
  ECX = (r32((uint32_t)(ESI + 0x2d7)));
  /* 114116ee cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114116f1 jne 0x11411787 */
  if (!C.zf) goto L_11411787;
  /* 114116f7 mov edx, dword ptr [esi + 0x322] */
  EDX = (r32((uint32_t)(ESI + 0x322)));
  /* 114116fd mov ecx, dword ptr [esi + 0x326] */
  ECX = (r32((uint32_t)(ESI + 0x326)));
  /* 11411703 push eax */
  push32((uint32_t)(EAX));
  /* 11411704 push edx */
  push32((uint32_t)(EDX));
  /* 11411705 mov edx, ecx */
  EDX = (ECX);
  /* 11411707 push eax */
  push32((uint32_t)(EAX));
  /* 11411708 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1141170b push edx */
  push32((uint32_t)(EDX));
  /* 1141170c mov edx, 3 */
  EDX = (0x3u);
  /* 11411711 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11411713 mov ecx, dword ptr [esi + 0x2f3] */
  ECX = (r32((uint32_t)(ESI + 0x2f3)));
  /* 11411719 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1141171c mov eax, dword ptr [esi + 0x2f7] */
  EAX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 11411722 push edx */
  push32((uint32_t)(EDX));
  /* 11411723 mov edx, dword ptr [esi + 0x2ef] */
  EDX = (r32((uint32_t)(ESI + 0x2ef)));
  /* 11411729 push eax */
  push32((uint32_t)(EAX));
  /* 1141172a mov eax, dword ptr [esi + 0x2eb] */
  EAX = (r32((uint32_t)(ESI + 0x2eb)));
  /* 11411730 push 0x1142158b */
  push32((uint32_t)(0x1142158bu));
  /* 11411735 push ecx */
  push32((uint32_t)(ECX));
  /* 11411736 mov ecx, dword ptr [esi + 0x2e7] */
  ECX = (r32((uint32_t)(ESI + 0x2e7)));
  /* 1141173c push 0x1142157c */
  push32((uint32_t)(0x1142157cu));
  /* 11411741 push edx */
  push32((uint32_t)(EDX));
  /* 11411742 mov edx, dword ptr [esi + 0x2e3] */
  EDX = (r32((uint32_t)(ESI + 0x2e3)));
  /* 11411748 push 0x1142156d */
  push32((uint32_t)(0x1142156du));
  /* 1141174d push eax */
  push32((uint32_t)(EAX));
  /* 1141174e mov eax, dword ptr [esi + 0x314] */
  EAX = (r32((uint32_t)(ESI + 0x314)));
  /* 11411754 push 0x1142155e */
  push32((uint32_t)(0x1142155eu));
  /* 11411759 push ecx */
  push32((uint32_t)(ECX));
  /* 1141175a lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1141175d push 0x1142154f */
  push32((uint32_t)(0x1142154fu));
  /* 11411762 push edx */
  push32((uint32_t)(EDX));
  /* 11411763 push 0x11421540 */
  push32((uint32_t)(0x11421540u));
  /* 11411768 lea eax, [eax + eax*4 + 0x11421540] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x11421540));
  /* 1141176f add esi, 0x2c0 */
  { uint32_t _a=(ESI),_b=(0x2c0u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11411775 push eax */
  push32((uint32_t)(EAX));
  /* 11411776 push esi */
  push32((uint32_t)(ESI));
  /* 11411777 push 0x1141c0cc */
  push32((uint32_t)(0x1141c0ccu));
  /* 1141177c call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x11411782u);
  /* 11411782 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411785 pop esi */
  ESI = (pop32());
  /* 11411786 ret  */
  ESPCHK(0x114116e0u, _esp0);
  ESP += 4; return;
L_11411787:;
  /* 11411787 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141178a jne 0x11411804 */
  if (!C.zf) goto L_11411804;
  /* 1141178c mov ecx, dword ptr [esi + 0x322] */
  ECX = (r32((uint32_t)(ESI + 0x322)));
  /* 11411792 mov edx, dword ptr [esi + 0x2f7] */
  EDX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 11411798 push eax */
  push32((uint32_t)(EAX));
  /* 11411799 mov eax, dword ptr [esi + 0x2f3] */
  EAX = (r32((uint32_t)(ESI + 0x2f3)));
  /* 1141179f push ecx */
  push32((uint32_t)(ECX));
  /* 114117a0 mov ecx, dword ptr [esi + 0x2ef] */
  ECX = (r32((uint32_t)(ESI + 0x2ef)));
  /* 114117a6 push edx */
  push32((uint32_t)(EDX));
  /* 114117a7 mov edx, dword ptr [esi + 0x2eb] */
  EDX = (r32((uint32_t)(ESI + 0x2eb)));
  /* 114117ad push 0x1142158b */
  push32((uint32_t)(0x1142158bu));
  /* 114117b2 push eax */
  push32((uint32_t)(EAX));
  /* 114117b3 mov eax, dword ptr [esi + 0x2e7] */
  EAX = (r32((uint32_t)(ESI + 0x2e7)));
  /* 114117b9 push 0x1142157c */
  push32((uint32_t)(0x1142157cu));
  /* 114117be push ecx */
  push32((uint32_t)(ECX));
  /* 114117bf push 0x1142156d */
  push32((uint32_t)(0x1142156du));
  /* 114117c4 mov ecx, dword ptr [esi + 0x2e3] */
  ECX = (r32((uint32_t)(ESI + 0x2e3)));
  /* 114117ca push edx */
  push32((uint32_t)(EDX));
  /* 114117cb push 0x1142155e */
  push32((uint32_t)(0x1142155eu));
  /* 114117d0 push eax */
  push32((uint32_t)(EAX));
  /* 114117d1 mov eax, dword ptr [esi + 0x314] */
  EAX = (r32((uint32_t)(ESI + 0x314)));
  /* 114117d7 push 0x1142154f */
  push32((uint32_t)(0x1142154fu));
  /* 114117dc push ecx */
  push32((uint32_t)(ECX));
  /* 114117dd push 0x11421540 */
  push32((uint32_t)(0x11421540u));
  /* 114117e2 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 114117e5 add esi, 0x2c0 */
  { uint32_t _a=(ESI),_b=(0x2c0u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114117eb lea edx, [eax + eax*4 + 0x11421540] */
  EDX = ((uint32_t)(EAX + EAX*4 + 0x11421540));
  /* 114117f2 push edx */
  push32((uint32_t)(EDX));
  /* 114117f3 push esi */
  push32((uint32_t)(ESI));
  /* 114117f4 push 0x1141c0c4 */
  push32((uint32_t)(0x1141c0c4u));
  /* 114117f9 call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x114117ffu);
  /* 114117ff add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411802 pop esi */
  ESI = (pop32());
  /* 11411803 ret  */
  ESPCHK(0x114116e0u, _esp0);
  ESP += 4; return;
L_11411804:;
  /* 11411804 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411807 jne 0x11411866 */
  if (!C.zf) goto L_11411866;
  /* 11411809 mov eax, dword ptr [esi + 0x2f7] */
  EAX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 1141180f mov ecx, dword ptr [esi + 0x2f3] */
  ECX = (r32((uint32_t)(ESI + 0x2f3)));
  /* 11411815 mov edx, dword ptr [esi + 0x2ef] */
  EDX = (r32((uint32_t)(ESI + 0x2ef)));
  /* 1141181b push eax */
  push32((uint32_t)(EAX));
  /* 1141181c mov eax, dword ptr [esi + 0x2eb] */
  EAX = (r32((uint32_t)(ESI + 0x2eb)));
  /* 11411822 push 0x1142158b */
  push32((uint32_t)(0x1142158bu));
  /* 11411827 push ecx */
  push32((uint32_t)(ECX));
  /* 11411828 mov ecx, dword ptr [esi + 0x2e7] */
  ECX = (r32((uint32_t)(ESI + 0x2e7)));
  /* 1141182e push 0x1142157c */
  push32((uint32_t)(0x1142157cu));
  /* 11411833 push edx */
  push32((uint32_t)(EDX));
  /* 11411834 mov edx, dword ptr [esi + 0x2e3] */
  EDX = (r32((uint32_t)(ESI + 0x2e3)));
  /* 1141183a push 0x1142156d */
  push32((uint32_t)(0x1142156du));
  /* 1141183f push eax */
  push32((uint32_t)(EAX));
  /* 11411840 push 0x1142155e */
  push32((uint32_t)(0x1142155eu));
  /* 11411845 push ecx */
  push32((uint32_t)(ECX));
  /* 11411846 push 0x1142154f */
  push32((uint32_t)(0x1142154fu));
  /* 1141184b push edx */
  push32((uint32_t)(EDX));
  /* 1141184c add esi, 0x2c0 */
  { uint32_t _a=(ESI),_b=(0x2c0u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11411852 push 0x11421540 */
  push32((uint32_t)(0x11421540u));
  /* 11411857 push esi */
  push32((uint32_t)(ESI));
  /* 11411858 push 0x1141c0bc */
  push32((uint32_t)(0x1141c0bcu));
  /* 1141185d call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x11411863u);
  /* 11411863 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11411866:;
  /* 11411866 pop esi */
  ESI = (pop32());
  /* 11411867 ret  */
  ESPCHK(0x114116e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001870 @ 0x11411870 (36 bytes, 12 insns) */
void f_11411870(void) {
  FTRACE(0x11411870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411870 push esi */
  push32((uint32_t)(ESI));
  /* 11411871 push 0x1141c0dc */
  push32((uint32_t)(0x1141c0dcu));
  /* 11411876 push 0 */
  push32((uint32_t)(0x0u));
  /* 11411878 push 0x1141c0d4 */
  push32((uint32_t)(0x1141c0d4u));
  /* 1141187d mov esi, ecx */
  ESI = (ECX);
  /* 1141187f push 9 */
  push32((uint32_t)(0x9u));
  /* 11411881 call dword ptr [0x1141b174] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b174))), 0x11411887u);
  /* 11411887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141188a mov dword ptr [esi + 0x326], eax */
  w32((uint32_t)(ESI + 0x326), (EAX));
  /* 11411890 mov al, 1 */
  AL = (0x1u);
  /* 11411892 pop esi */
  ESI = (pop32());
  /* 11411893 ret  */
  ESPCHK(0x11411870u, _esp0);
  ESP += 4; return;
}

/* FUN_100018a0 @ 0x114118a0 (147 bytes, 56 insns) */
void f_114118a0(void) {
  FTRACE(0x114118a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114118a0 push esi */
  push32((uint32_t)(ESI));
  /* 114118a1 mov esi, dword ptr [0x1141b174] */
  ESI = (r32((uint32_t)(0x1141b174)));
  /* 114118a7 push edi */
  push32((uint32_t)(EDI));
  /* 114118a8 mov edi, ecx */
  EDI = (ECX);
L_114118aa:;
  /* 114118aa mov eax, dword ptr [edi + 0x2d7] */
  EAX = (r32((uint32_t)(EDI + 0x2d7)));
  /* 114118b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114118b3 jne 0x114118d5 */
  if (!C.zf) goto L_114118d5;
  /* 114118b5 push 0x1141c118 */
  push32((uint32_t)(0x1141c118u));
  /* 114118ba push 0 */
  push32((uint32_t)(0x0u));
  /* 114118bc push 0x1141c110 */
  push32((uint32_t)(0x1141c110u));
  /* 114118c1 push 9 */
  push32((uint32_t)(0x9u));
  /* 114118c3 call esi */
  call_ind((uint32_t)(ESI), 0x114118c5u);
  /* 114118c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114118c8 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114118cb je 0x114118f7 */
  if (C.zf) goto L_114118f7;
  /* 114118cd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114118ce je 0x11411922 */
  if (C.zf) goto L_11411922;
  /* 114118d0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114118d1 je 0x1141192e */
  if (C.zf) goto L_1141192e;
  /* 114118d3 jmp 0x114118aa */
  goto L_114118aa;
L_114118d5:;
  /* 114118d5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114118d8 jne 0x11411900 */
  if (!C.zf) goto L_11411900;
  /* 114118da push 0x1141c104 */
  push32((uint32_t)(0x1141c104u));
  /* 114118df push 0 */
  push32((uint32_t)(0x0u));
  /* 114118e1 push 0x1141c110 */
  push32((uint32_t)(0x1141c110u));
  /* 114118e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 114118e8 call esi */
  call_ind((uint32_t)(ESI), 0x114118eau);
  /* 114118ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114118ed sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114118f0 je 0x114118f7 */
  if (C.zf) goto L_114118f7;
  /* 114118f2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114118f3 je 0x1141192e */
  if (C.zf) goto L_1141192e;
  /* 114118f5 jmp 0x114118aa */
  goto L_114118aa;
L_114118f7:;
  /* 114118f7 mov ecx, edi */
  ECX = (EDI);
  /* 114118f9 call 0x11411940 */
  push32(0x114118feu); f_11411940();
  /* 114118fe jmp 0x114118aa */
  goto L_114118aa;
L_11411900:;
  /* 11411900 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411903 jne 0x114118aa */
  if (!C.zf) goto L_114118aa;
  /* 11411905 push 0x1141c0f8 */
  push32((uint32_t)(0x1141c0f8u));
  /* 1141190a push 0 */
  push32((uint32_t)(0x0u));
  /* 1141190c push 0x1141c110 */
  push32((uint32_t)(0x1141c110u));
  /* 11411911 push 9 */
  push32((uint32_t)(0x9u));
  /* 11411913 call esi */
  call_ind((uint32_t)(ESI), 0x11411915u);
  /* 11411915 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411918 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141191b je 0x11411922 */
  if (C.zf) goto L_11411922;
  /* 1141191d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1141191e je 0x1141192e */
  if (C.zf) goto L_1141192e;
  /* 11411920 jmp 0x114118aa */
  goto L_114118aa;
L_11411922:;
  /* 11411922 mov ecx, edi */
  ECX = (EDI);
  /* 11411924 call 0x11411a70 */
  push32(0x11411929u); f_11411a70();
  /* 11411929 jmp 0x114118aa */
  goto L_114118aa;
L_1141192e:;
  /* 1141192e pop edi */
  EDI = (pop32());
  /* 1141192f mov al, 1 */
  AL = (0x1u);
  /* 11411931 pop esi */
  ESI = (pop32());
  /* 11411932 ret  */
  ESPCHK(0x114118a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001940 @ 0x11411940 (245 bytes, 83 insns) [2 switch table(s)] */
void f_11411940(void) {
  FTRACE(0x11411940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411940 push ecx */
  push32((uint32_t)(ECX));
  /* 11411941 push ebx */
  push32((uint32_t)(EBX));
  /* 11411942 push ebp */
  push32((uint32_t)(EBP));
  /* 11411943 push esi */
  push32((uint32_t)(ESI));
  /* 11411944 mov esi, dword ptr [0x1141b174] */
  ESI = (r32((uint32_t)(0x1141b174)));
  /* 1141194a push edi */
  push32((uint32_t)(EDI));
  /* 1141194b push 0x1141c148 */
  push32((uint32_t)(0x1141c148u));
  /* 11411950 push 0 */
  push32((uint32_t)(0x0u));
  /* 11411952 push 0x1141c140 */
  push32((uint32_t)(0x1141c140u));
  /* 11411957 mov ebx, ecx */
  EBX = (ECX);
  /* 11411959 push 9 */
  push32((uint32_t)(0x9u));
  /* 1141195b call esi */
  call_ind((uint32_t)(ESI), 0x1141195du);
  /* 1141195d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411960 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411963 ja 0x11411993 */
  if ((!C.cf&&!C.zf)) goto L_11411993;
  /* 11411965 jmp dword ptr [eax*4 + 0x11411a38] */
  switch (EAX) {
    case 0: goto L_1141196c;
    case 1: goto L_11411970;
    case 2: goto L_11411977;
    case 3: goto L_1141197e;
    case 4: goto L_11411985;
    case 5: goto L_1141198c;
    case 6: goto L_114119b6;
    case 7: goto L_114119ba;
    case 8: goto L_114119c1;
    case 9: goto L_114119c8;
    case 10: goto L_114119cf;
    case 11: goto L_114119d6;
    default: x86_unimpl("switch@0x11411965 out of table"); return;
  }
L_1141196c:;
  /* 1141196c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1141196e jmp 0x11411997 */
  goto L_11411997;
L_11411970:;
  /* 11411970 mov edi, 1 */
  EDI = (0x1u);
  /* 11411975 jmp 0x11411997 */
  goto L_11411997;
L_11411977:;
  /* 11411977 mov edi, 2 */
  EDI = (0x2u);
  /* 1141197c jmp 0x11411997 */
  goto L_11411997;
L_1141197e:;
  /* 1141197e mov edi, 3 */
  EDI = (0x3u);
  /* 11411983 jmp 0x11411997 */
  goto L_11411997;
L_11411985:;
  /* 11411985 mov edi, 4 */
  EDI = (0x4u);
  /* 1141198a jmp 0x11411997 */
  goto L_11411997;
L_1141198c:;
  /* 1141198c mov edi, 5 */
  EDI = (0x5u);
  /* 11411991 jmp 0x11411997 */
  goto L_11411997;
L_11411993:;
  /* 11411993 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11411997:;
  /* 11411997 push 0x1141c148 */
  push32((uint32_t)(0x1141c148u));
  /* 1141199c push 0 */
  push32((uint32_t)(0x0u));
  /* 1141199e push 0x1141c138 */
  push32((uint32_t)(0x1141c138u));
  /* 114119a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 114119a5 call esi */
  call_ind((uint32_t)(ESI), 0x114119a7u);
  /* 114119a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114119aa cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114119ad ja 0x114119dd */
  if ((!C.cf&&!C.zf)) goto L_114119dd;
  /* 114119af jmp dword ptr [eax*4 + 0x11411a50] */
  switch (EAX) {
    case 0: goto L_114119b6;
    case 1: goto L_114119ba;
    case 2: goto L_114119c1;
    case 3: goto L_114119c8;
    case 4: goto L_114119cf;
    case 5: goto L_114119d6;
    default: x86_unimpl("switch@0x114119af out of table"); return;
  }
L_114119b6:;
  /* 114119b6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 114119b8 jmp 0x114119e1 */
  goto L_114119e1;
L_114119ba:;
  /* 114119ba mov esi, 1 */
  ESI = (0x1u);
  /* 114119bf jmp 0x114119e1 */
  goto L_114119e1;
L_114119c1:;
  /* 114119c1 mov esi, 2 */
  ESI = (0x2u);
  /* 114119c6 jmp 0x114119e1 */
  goto L_114119e1;
L_114119c8:;
  /* 114119c8 mov esi, 3 */
  ESI = (0x3u);
  /* 114119cd jmp 0x114119e1 */
  goto L_114119e1;
L_114119cf:;
  /* 114119cf mov esi, 4 */
  ESI = (0x4u);
  /* 114119d4 jmp 0x114119e1 */
  goto L_114119e1;
L_114119d6:;
  /* 114119d6 mov esi, 5 */
  ESI = (0x5u);
  /* 114119db jmp 0x114119e1 */
  goto L_114119e1;
L_114119dd:;
  /* 114119dd mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_114119e1:;
  /* 114119e1 mov ecx, ebx */
  ECX = (EBX);
  /* 114119e3 call 0x114112d0 */
  push32(0x114119e8u); f_114112d0();
  /* 114119e8 push edi */
  push32((uint32_t)(EDI));
  /* 114119e9 mov ecx, ebx */
  ECX = (EBX);
  /* 114119eb call 0x11412330 */
  push32(0x114119f0u); f_11412330();
  /* 114119f0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 114119f3 push esi */
  push32((uint32_t)(ESI));
  /* 114119f4 mov ecx, ebx */
  ECX = (EBX);
  /* 114119f6 lea ebp, [eax + eax*4] */
  EBP = ((uint32_t)(EAX + EAX*4));
  /* 114119f9 shl ebp, 2 */
  EBP = (sh_shl((uint32_t)(EBP), (0x2u)&0x1f, 32));
  /* 114119fc call 0x11412330 */
  push32(0x11411a01u); f_11412330();
  /* 11411a01 mov ecx, eax */
  ECX = (EAX);
  /* 11411a03 mov eax, ebp */
  EAX = (EBP);
  /* 11411a05 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11411a06 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11411a08 push eax */
  push32((uint32_t)(EAX));
  /* 11411a09 lea eax, [esi + esi*2] */
  EAX = ((uint32_t)(ESI + ESI*2));
  /* 11411a0c lea edx, [eax + eax*4 + 0x11421540] */
  EDX = ((uint32_t)(EAX + EAX*4 + 0x11421540));
  /* 11411a13 lea eax, [edi + edi*2] */
  EAX = ((uint32_t)(EDI + EDI*2));
  /* 11411a16 push edx */
  push32((uint32_t)(EDX));
  /* 11411a17 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11411a19 lea eax, [eax + eax*4 + 0x11421540] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x11421540));
  /* 11411a20 push eax */
  push32((uint32_t)(EAX));
  /* 11411a21 push 0x1141c12c */
  push32((uint32_t)(0x1141c12cu));
  /* 11411a26 call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x11411a2cu);
  /* 11411a2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411a2f pop edi */
  EDI = (pop32());
  /* 11411a30 pop esi */
  ESI = (pop32());
  /* 11411a31 pop ebp */
  EBP = (pop32());
  /* 11411a32 pop ebx */
  EBX = (pop32());
  /* 11411a33 pop ecx */
  ECX = (pop32());
  /* 11411a34 ret  */
  ESPCHK(0x11411940u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a70 @ 0x11411a70 (326 bytes, 119 insns) */
void f_11411a70(void) {
  FTRACE(0x11411a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411a70 push ebx */
  push32((uint32_t)(EBX));
  /* 11411a71 mov ebx, dword ptr [0x1141b174] */
  EBX = (r32((uint32_t)(0x1141b174)));
  /* 11411a77 push esi */
  push32((uint32_t)(ESI));
  /* 11411a78 push edi */
  push32((uint32_t)(EDI));
  /* 11411a79 push 0x1141c1a8 */
  push32((uint32_t)(0x1141c1a8u));
  /* 11411a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11411a80 push 0x1141c19c */
  push32((uint32_t)(0x1141c19cu));
  /* 11411a85 mov esi, ecx */
  ESI = (ECX);
  /* 11411a87 push 9 */
  push32((uint32_t)(0x9u));
  /* 11411a89 call ebx */
  call_ind((uint32_t)(EBX), 0x11411a8bu);
  /* 11411a8b push 0x1141c188 */
  push32((uint32_t)(0x1141c188u));
  /* 11411a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11411a92 push 0x1141c17c */
  push32((uint32_t)(0x1141c17cu));
  /* 11411a97 push 9 */
  push32((uint32_t)(0x9u));
  /* 11411a99 mov edi, eax */
  EDI = (EAX);
  /* 11411a9b call ebx */
  call_ind((uint32_t)(EBX), 0x11411a9du);
  /* 11411a9d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411aa0 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11411aa3 je 0x11411b50 */
  if (C.zf) goto L_11411b50;
  /* 11411aa9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11411aaa je 0x11411b02 */
  if (C.zf) goto L_11411b02;
  /* 11411aac dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11411aad jne 0x11411bb2 */
  if (!C.zf) goto L_11411bb2;
  /* 11411ab3 mov eax, edi */
  EAX = (EDI);
  /* 11411ab5 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11411ab8 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411aba lea esi, [esi + eax*4] */
  ESI = ((uint32_t)(ESI + EAX*4));
  /* 11411abd push esi */
  push32((uint32_t)(ESI));
  /* 11411abe call dword ptr [0x1141b178] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b178))), 0x11411ac4u);
  /* 11411ac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411ac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11411ac9 je 0x11411af0 */
  if (C.zf) goto L_11411af0;
  /* 11411acb push 0 */
  push32((uint32_t)(0x0u));
  /* 11411acd push esi */
  push32((uint32_t)(ESI));
  /* 11411ace call dword ptr [0x1141b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b160))), 0x11411ad4u);
  /* 11411ad4 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11411ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 11411ad8 call dword ptr [0x1141b158] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b158))), 0x11411adeu);
  /* 11411ade push 0x1141c174 */
  push32((uint32_t)(0x1141c174u));
  /* 11411ae3 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11411ae9u);
  /* 11411ae9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411aec pop edi */
  EDI = (pop32());
  /* 11411aed pop esi */
  ESI = (pop32());
  /* 11411aee pop ebx */
  EBX = (pop32());
  /* 11411aef ret  */
  ESPCHK(0x11411a70u, _esp0);
  ESP += 4; return;
L_11411af0:;
  /* 11411af0 push 0x1141c16c */
  push32((uint32_t)(0x1141c16cu));
  /* 11411af5 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11411afbu);
  /* 11411afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411afe pop edi */
  EDI = (pop32());
  /* 11411aff pop esi */
  ESI = (pop32());
  /* 11411b00 pop ebx */
  EBX = (pop32());
  /* 11411b01 ret  */
  ESPCHK(0x11411a70u, _esp0);
  ESP += 4; return;
L_11411b02:;
  /* 11411b02 mov edx, edi */
  EDX = (EDI);
  /* 11411b04 shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11411b07 add edx, edi */
  { uint32_t _a=(EDX),_b=(EDI),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411b09 lea ebx, [esi + edx*4] */
  EBX = ((uint32_t)(ESI + EDX*4));
  /* 11411b0c push ebx */
  push32((uint32_t)(EBX));
  /* 11411b0d call dword ptr [0x1141b178] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b178))), 0x11411b13u);
  /* 11411b13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11411b18 jne 0x11411b44 */
  if (!C.zf) goto L_11411b44;
  /* 11411b1a mov eax, dword ptr [esi + 0x2d3] */
  EAX = (r32((uint32_t)(ESI + 0x2d3)));
  /* 11411b20 mov cl, byte ptr [esi + 0x313] */
  CL = (r8((uint32_t)(ESI + 0x313)));
  /* 11411b26 mov edx, dword ptr [esi + 0x2cf] */
  EDX = (r32((uint32_t)(ESI + 0x2cf)));
  /* 11411b2c push eax */
  push32((uint32_t)(EAX));
  /* 11411b2d push ecx */
  push32((uint32_t)(ECX));
  /* 11411b2e mov ecx, dword ptr [esi + 0x2d7] */
  ECX = (r32((uint32_t)(ESI + 0x2d7)));
  /* 11411b34 lea eax, [esi + 0x2c0] */
  EAX = ((uint32_t)(ESI + 0x2c0));
  /* 11411b3a push edx */
  push32((uint32_t)(EDX));
  /* 11411b3b push eax */
  push32((uint32_t)(EAX));
  /* 11411b3c push ecx */
  push32((uint32_t)(ECX));
  /* 11411b3d mov ecx, ebx */
  ECX = (EBX);
  /* 11411b3f call 0x114124a0 */
  push32(0x11411b44u); f_114124a0();
L_11411b44:;
  /* 11411b44 push edi */
  push32((uint32_t)(EDI));
  /* 11411b45 mov ecx, esi */
  ECX = (ESI);
  /* 11411b47 call 0x11411bc0 */
  push32(0x11411b4cu); f_11411bc0();
  /* 11411b4c pop edi */
  EDI = (pop32());
  /* 11411b4d pop esi */
  ESI = (pop32());
  /* 11411b4e pop ebx */
  EBX = (pop32());
  /* 11411b4f ret  */
  ESPCHK(0x11411a70u, _esp0);
  ESP += 4; return;
L_11411b50:;
  /* 11411b50 mov edx, edi */
  EDX = (EDI);
  /* 11411b52 shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11411b55 add edx, edi */
  { uint32_t _a=(EDX),_b=(EDI),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411b57 lea esi, [esi + edx*4] */
  ESI = ((uint32_t)(ESI + EDX*4));
  /* 11411b5a push esi */
  push32((uint32_t)(ESI));
  /* 11411b5b call dword ptr [0x1141b178] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b178))), 0x11411b61u);
  /* 11411b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11411b66 je 0x11411ba4 */
  if (C.zf) goto L_11411ba4;
  /* 11411b68 mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11411b6b mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11411b6e mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 11411b71 add esi, 0x29 */
  { uint32_t _a=(ESI),_b=(0x29u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11411b74 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11411b77 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 11411b7a push edx */
  push32((uint32_t)(EDX));
  /* 11411b7b mov edx, dword ptr [esi - 0x1c] */
  EDX = (r32((uint32_t)(ESI + -0x1c)));
  /* 11411b7e lea eax, [eax + eax*4 + 0x11421540] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x11421540));
  /* 11411b85 lea ecx, [ecx + ecx*4 + 0x11421540] */
  ECX = ((uint32_t)(ECX + ECX*4 + 0x11421540));
  /* 11411b8c push eax */
  push32((uint32_t)(EAX));
  /* 11411b8d push edx */
  push32((uint32_t)(EDX));
  /* 11411b8e push ecx */
  push32((uint32_t)(ECX));
  /* 11411b8f push eax */
  push32((uint32_t)(EAX));
  /* 11411b90 push ecx */
  push32((uint32_t)(ECX));
  /* 11411b91 push esi */
  push32((uint32_t)(ESI));
  /* 11411b92 push 0x1141c164 */
  push32((uint32_t)(0x1141c164u));
  /* 11411b97 call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x11411b9du);
  /* 11411b9d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411ba0 pop edi */
  EDI = (pop32());
  /* 11411ba1 pop esi */
  ESI = (pop32());
  /* 11411ba2 pop ebx */
  EBX = (pop32());
  /* 11411ba3 ret  */
  ESPCHK(0x11411a70u, _esp0);
  ESP += 4; return;
L_11411ba4:;
  /* 11411ba4 push 0x1141c15c */
  push32((uint32_t)(0x1141c15cu));
  /* 11411ba9 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11411bafu);
  /* 11411baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11411bb2:;
  /* 11411bb2 pop edi */
  EDI = (pop32());
  /* 11411bb3 pop esi */
  ESI = (pop32());
  /* 11411bb4 pop ebx */
  EBX = (pop32());
  /* 11411bb5 ret  */
  ESPCHK(0x11411a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bc0 @ 0x11411bc0 (267 bytes, 88 insns) [2 switch table(s)] */
void f_11411bc0(void) {
  FTRACE(0x11411bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411bc0 push ebx */
  push32((uint32_t)(EBX));
  /* 11411bc1 push ebp */
  push32((uint32_t)(EBP));
  /* 11411bc2 push esi */
  push32((uint32_t)(ESI));
  /* 11411bc3 push edi */
  push32((uint32_t)(EDI));
  /* 11411bc4 mov edi, ecx */
  EDI = (ECX);
  /* 11411bc6 mov esi, dword ptr [0x1141b174] */
  ESI = (r32((uint32_t)(0x1141b174)));
  /* 11411bcc mov eax, dword ptr [edi + 0x2a8] */
  EAX = (r32((uint32_t)(EDI + 0x2a8)));
  /* 11411bd2 push eax */
  push32((uint32_t)(EAX));
  /* 11411bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11411bd5 push 0x1141c1e8 */
  push32((uint32_t)(0x1141c1e8u));
  /* 11411bda push 9 */
  push32((uint32_t)(0x9u));
  /* 11411bdc call esi */
  call_ind((uint32_t)(ESI), 0x11411bdeu);
  /* 11411bde push 0x1141c148 */
  push32((uint32_t)(0x1141c148u));
  /* 11411be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11411be5 push 0x1141c140 */
  push32((uint32_t)(0x1141c140u));
  /* 11411bea push 9 */
  push32((uint32_t)(0x9u));
  /* 11411bec mov ebp, eax */
  EBP = (EAX);
  /* 11411bee call esi */
  call_ind((uint32_t)(ESI), 0x11411bf0u);
  /* 11411bf0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411bf3 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411bf6 ja 0x11411c26 */
  if ((!C.cf&&!C.zf)) goto L_11411c26;
  /* 11411bf8 jmp dword ptr [eax*4 + 0x11411ccc] */
  switch (EAX) {
    case 0: goto L_11411bff;
    case 1: goto L_11411c03;
    case 2: goto L_11411c0a;
    case 3: goto L_11411c11;
    case 4: goto L_11411c18;
    case 5: goto L_11411c1f;
    case 6: goto L_11411c49;
    case 7: goto L_11411c4d;
    case 8: goto L_11411c54;
    case 9: goto L_11411c5b;
    case 10: goto L_11411c62;
    case 11: goto L_11411c69;
    default: x86_unimpl("switch@0x11411bf8 out of table"); return;
  }
L_11411bff:;
  /* 11411bff xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11411c01 jmp 0x11411c2a */
  goto L_11411c2a;
L_11411c03:;
  /* 11411c03 mov ebx, 1 */
  EBX = (0x1u);
  /* 11411c08 jmp 0x11411c2a */
  goto L_11411c2a;
L_11411c0a:;
  /* 11411c0a mov ebx, 2 */
  EBX = (0x2u);
  /* 11411c0f jmp 0x11411c2a */
  goto L_11411c2a;
L_11411c11:;
  /* 11411c11 mov ebx, 3 */
  EBX = (0x3u);
  /* 11411c16 jmp 0x11411c2a */
  goto L_11411c2a;
L_11411c18:;
  /* 11411c18 mov ebx, 4 */
  EBX = (0x4u);
  /* 11411c1d jmp 0x11411c2a */
  goto L_11411c2a;
L_11411c1f:;
  /* 11411c1f mov ebx, 5 */
  EBX = (0x5u);
  /* 11411c24 jmp 0x11411c2a */
  goto L_11411c2a;
L_11411c26:;
  /* 11411c26 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
L_11411c2a:;
  /* 11411c2a push 0x1141c148 */
  push32((uint32_t)(0x1141c148u));
  /* 11411c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11411c31 push 0x1141c138 */
  push32((uint32_t)(0x1141c138u));
  /* 11411c36 push 9 */
  push32((uint32_t)(0x9u));
  /* 11411c38 call esi */
  call_ind((uint32_t)(ESI), 0x11411c3au);
  /* 11411c3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411c3d cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411c40 ja 0x11411c70 */
  if ((!C.cf&&!C.zf)) goto L_11411c70;
  /* 11411c42 jmp dword ptr [eax*4 + 0x11411ce4] */
  switch (EAX) {
    case 0: goto L_11411c49;
    case 1: goto L_11411c4d;
    case 2: goto L_11411c54;
    case 3: goto L_11411c5b;
    case 4: goto L_11411c62;
    case 5: goto L_11411c69;
    default: x86_unimpl("switch@0x11411c42 out of table"); return;
  }
L_11411c49:;
  /* 11411c49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11411c4b jmp 0x11411c74 */
  goto L_11411c74;
L_11411c4d:;
  /* 11411c4d mov edx, 1 */
  EDX = (0x1u);
  /* 11411c52 jmp 0x11411c74 */
  goto L_11411c74;
L_11411c54:;
  /* 11411c54 mov edx, 2 */
  EDX = (0x2u);
  /* 11411c59 jmp 0x11411c74 */
  goto L_11411c74;
L_11411c5b:;
  /* 11411c5b mov edx, 3 */
  EDX = (0x3u);
  /* 11411c60 jmp 0x11411c74 */
  goto L_11411c74;
L_11411c62:;
  /* 11411c62 mov edx, 4 */
  EDX = (0x4u);
  /* 11411c67 jmp 0x11411c74 */
  goto L_11411c74;
L_11411c69:;
  /* 11411c69 mov edx, 5 */
  EDX = (0x5u);
  /* 11411c6e jmp 0x11411c74 */
  goto L_11411c74;
L_11411c70:;
  /* 11411c70 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
L_11411c74:;
  /* 11411c74 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11411c78 mov eax, dword ptr [edi + ebp*4 + 0x2ac] */
  EAX = (r32((uint32_t)(EDI + EBP*4 + 0x2ac)));
  /* 11411c7f mov esi, ecx */
  ESI = (ECX);
  /* 11411c81 push edx */
  push32((uint32_t)(EDX));
  /* 11411c82 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11411c85 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11411c87 mov ecx, dword ptr [eax + 0x2cf] */
  ECX = (r32((uint32_t)(EAX + 0x2cf)));
  /* 11411c8d push ebx */
  push32((uint32_t)(EBX));
  /* 11411c8e add eax, 0x2c0 */
  { uint32_t _a=(EAX),_b=(0x2c0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411c93 lea esi, [edi + esi*4] */
  ESI = ((uint32_t)(EDI + ESI*4));
  /* 11411c96 push ecx */
  push32((uint32_t)(ECX));
  /* 11411c97 push eax */
  push32((uint32_t)(EAX));
  /* 11411c98 mov ecx, esi */
  ECX = (ESI);
  /* 11411c9a call 0x11412510 */
  push32(0x11411c9fu); f_11412510();
  /* 11411c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11411ca1 push esi */
  push32((uint32_t)(ESI));
  /* 11411ca2 call dword ptr [0x1141b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b160))), 0x11411ca8u);
  /* 11411ca8 mov edx, dword ptr [edi + 0x2d3] */
  EDX = (r32((uint32_t)(EDI + 0x2d3)));
  /* 11411cae mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11411cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11411cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11411cb5 push edx */
  push32((uint32_t)(EDX));
  /* 11411cb6 push eax */
  push32((uint32_t)(EAX));
  /* 11411cb7 call dword ptr [0x1141b15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b15c))), 0x11411cbdu);
  /* 11411cbd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411cc0 mov byte ptr [esi + 0x19], 0 */
  w8((uint32_t)(ESI + 0x19), (0x0u));
  /* 11411cc4 pop edi */
  EDI = (pop32());
  /* 11411cc5 pop esi */
  ESI = (pop32());
  /* 11411cc6 pop ebp */
  EBP = (pop32());
  /* 11411cc7 pop ebx */
  EBX = (pop32());
  /* 11411cc8 ret 4 */
  ESPCHK(0x11411bc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001d00 @ 0x11411d00 (395 bytes, 147 insns) */
void f_11411d00(void) {
  FTRACE(0x11411d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411d00 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11411d03 push ebx */
  push32((uint32_t)(EBX));
  /* 11411d04 push ebp */
  push32((uint32_t)(EBP));
  /* 11411d05 push esi */
  push32((uint32_t)(ESI));
  /* 11411d06 push edi */
  push32((uint32_t)(EDI));
  /* 11411d07 mov edi, ecx */
  EDI = (ECX);
  /* 11411d09 mov al, byte ptr [edi + 0x321] */
  AL = (r8((uint32_t)(EDI + 0x321)));
  /* 11411d0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11411d11 je 0x11411e81 */
  if (C.zf) goto L_11411e81;
  /* 11411d17 mov al, byte ptr [edi + 0x313] */
  AL = (r8((uint32_t)(EDI + 0x313)));
  /* 11411d1d mov ecx, dword ptr [edi + 0x2d3] */
  ECX = (r32((uint32_t)(EDI + 0x2d3)));
  /* 11411d23 push eax */
  push32((uint32_t)(EAX));
  /* 11411d24 push 0x114200d8 */
  push32((uint32_t)(0x114200d8u));
  /* 11411d29 push ecx */
  push32((uint32_t)(ECX));
  /* 11411d2a call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x11411d30u);
  /* 11411d30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411d33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11411d35 je 0x11411e81 */
  if (C.zf) goto L_11411e81;
  /* 11411d3b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11411d3d mov esi, edi */
  ESI = (EDI);
L_11411d3f:;
  /* 11411d3f mov al, byte ptr [esi + 0x19] */
  AL = (r8((uint32_t)(ESI + 0x19)));
  /* 11411d42 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11411d44 jne 0x11411d5b */
  if (!C.zf) goto L_11411d5b;
  /* 11411d46 mov edx, dword ptr [edi + 0x2d3] */
  EDX = (r32((uint32_t)(EDI + 0x2d3)));
  /* 11411d4c push esi */
  push32((uint32_t)(ESI));
  /* 11411d4d push edx */
  push32((uint32_t)(EDX));
  /* 11411d4e call dword ptr [0x1141b14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b14c))), 0x11411d54u);
  /* 11411d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11411d59 jne 0x11411dc8 */
  if (!C.zf) goto L_11411dc8;
L_11411d5b:;
  /* 11411d5b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11411d5c add esi, 0x44 */
  { uint32_t _a=(ESI),_b=(0x44u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11411d5f cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411d62 jl 0x11411d3f */
  if ((C.sf!=C.of)) goto L_11411d3f;
  /* 11411d64 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 11411d68 mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 11411d70 lea ebp, [edi + 0x2ac] */
  EBP = ((uint32_t)(EDI + 0x2ac));
L_11411d76:;
  /* 11411d76 cmp dword ptr [ebp], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411d7a je 0x11411dad */
  if (C.zf) goto L_11411dad;
  /* 11411d7c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11411d7e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11411d80:;
  /* 11411d80 mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 11411d83 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411d85 mov cl, byte ptr [eax + 0x19] */
  CL = (r8((uint32_t)(EAX + 0x19)));
  /* 11411d88 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11411d8a je 0x11411da1 */
  if (C.zf) goto L_11411da1;
  /* 11411d8c mov ecx, dword ptr [edi + 0x2d3] */
  ECX = (r32((uint32_t)(EDI + 0x2d3)));
  /* 11411d92 push eax */
  push32((uint32_t)(EAX));
  /* 11411d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11411d94 call dword ptr [0x1141b14c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b14c))), 0x11411d9au);
  /* 11411d9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11411d9f jne 0x11411e05 */
  if (!C.zf) goto L_11411e05;
L_11411da1:;
  /* 11411da1 add esi, 0x44 */
  { uint32_t _a=(ESI),_b=(0x44u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11411da4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11411da5 cmp esi, 0x2a8 */
  { uint32_t _a=(ESI),_b=(0x2a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411dab jl 0x11411d80 */
  if ((C.sf!=C.of)) goto L_11411d80;
L_11411dad:;
  /* 11411dad mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11411db1 add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411db4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11411db5 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411db8 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11411dbc jl 0x11411d76 */
  if ((C.sf!=C.of)) goto L_11411d76;
  /* 11411dbe pop edi */
  EDI = (pop32());
  /* 11411dbf pop esi */
  ESI = (pop32());
  /* 11411dc0 pop ebp */
  EBP = (pop32());
  /* 11411dc1 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11411dc3 pop ebx */
  EBX = (pop32());
  /* 11411dc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411dc7 ret  */
  ESPCHK(0x11411d00u, _esp0);
  ESP += 4; return;
L_11411dc8:;
  /* 11411dc8 mov eax, ebx */
  EAX = (EBX);
  /* 11411dca mov ecx, edi */
  ECX = (EDI);
  /* 11411dcc shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11411dcf add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411dd1 mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 11411dd5 lea esi, [edi + eax*4] */
  ESI = ((uint32_t)(EDI + EAX*4));
  /* 11411dd8 push esi */
  push32((uint32_t)(ESI));
  /* 11411dd9 mov byte ptr [esi + 0x19], 1 */
  w8((uint32_t)(ESI + 0x19), (0x1u));
  /* 11411ddd call 0x11411e90 */
  push32(0x11411de2u); f_11411e90();
  /* 11411de2 push esi */
  push32((uint32_t)(ESI));
  /* 11411de3 mov ecx, edi */
  ECX = (EDI);
  /* 11411de5 call 0x11411ed0 */
  push32(0x11411deau); f_11411ed0();
  /* 11411dea mov ecx, dword ptr [esi + 0x3c] */
  ECX = (r32((uint32_t)(ESI + 0x3c)));
  /* 11411ded mov edx, dword ptr [esi + 0x38] */
  EDX = (r32((uint32_t)(ESI + 0x38)));
  /* 11411df0 push ecx */
  push32((uint32_t)(ECX));
  /* 11411df1 push edx */
  push32((uint32_t)(EDX));
  /* 11411df2 push esi */
  push32((uint32_t)(ESI));
  /* 11411df3 call 0x11414540 */
  push32(0x11411df8u); f_11414540();
  /* 11411df8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411dfb mov al, 1 */
  AL = (0x1u);
  /* 11411dfd pop edi */
  EDI = (pop32());
  /* 11411dfe pop esi */
  ESI = (pop32());
  /* 11411dff pop ebp */
  EBP = (pop32());
  /* 11411e00 pop ebx */
  EBX = (pop32());
  /* 11411e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411e04 ret  */
  ESPCHK(0x11411d00u, _esp0);
  ESP += 4; return;
L_11411e05:;
  /* 11411e05 mov esi, ebx */
  ESI = (EBX);
  /* 11411e07 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11411e0a add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11411e0c mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11411e10 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11411e13 mov edx, dword ptr [edi + ebx*4 + 0x2ac] */
  EDX = (r32((uint32_t)(EDI + EBX*4 + 0x2ac)));
  /* 11411e1a mov byte ptr [edx + esi + 0x19], 0 */
  w8((uint32_t)(EDX + ESI*1 + 0x19), (0x0u));
  /* 11411e1f mov eax, dword ptr [edi + 0x2d7] */
  EAX = (r32((uint32_t)(EDI + 0x2d7)));
  /* 11411e25 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411e28 jne 0x11411e4a */
  if (!C.zf) goto L_11411e4a;
  /* 11411e2a mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11411e2e mov ecx, eax */
  ECX = (EAX);
  /* 11411e30 shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11411e33 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411e35 lea ebp, [edi + ecx*4] */
  EBP = ((uint32_t)(EDI + ECX*4));
  /* 11411e38 mov ecx, edi */
  ECX = (EDI);
  /* 11411e3a push ebp */
  push32((uint32_t)(EBP));
  /* 11411e3b call 0x11411e90 */
  push32(0x11411e40u); f_11411e90();
  /* 11411e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11411e41 mov ecx, edi */
  ECX = (EDI);
  /* 11411e43 call 0x11411ed0 */
  push32(0x11411e48u); f_11411ed0();
  /* 11411e48 jmp 0x11411e5d */
  goto L_11411e5d;
L_11411e4a:;
  /* 11411e4a mov eax, dword ptr [edi + ebx*4 + 0x2ac] */
  EAX = (r32((uint32_t)(EDI + EBX*4 + 0x2ac)));
  /* 11411e51 mov ecx, edi */
  ECX = (EDI);
  /* 11411e53 push eax */
  push32((uint32_t)(EAX));
  /* 11411e54 lea edx, [esi + eax] */
  EDX = ((uint32_t)(ESI + EAX*1));
  /* 11411e57 push edx */
  push32((uint32_t)(EDX));
  /* 11411e58 call 0x11411f30 */
  push32(0x11411e5du); f_11411f30();
L_11411e5d:;
  /* 11411e5d mov eax, dword ptr [edi + ebx*4 + 0x2ac] */
  EAX = (r32((uint32_t)(EDI + EBX*4 + 0x2ac)));
  /* 11411e64 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11411e66 mov ecx, dword ptr [eax + 0x38] */
  ECX = (r32((uint32_t)(EAX + 0x38)));
  /* 11411e69 mov edx, dword ptr [eax + 0x3c] */
  EDX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11411e6c push ecx */
  push32((uint32_t)(ECX));
  /* 11411e6d push edx */
  push32((uint32_t)(EDX));
  /* 11411e6e push eax */
  push32((uint32_t)(EAX));
  /* 11411e6f call 0x11414540 */
  push32(0x11411e74u); f_11414540();
  /* 11411e74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411e77 mov al, 1 */
  AL = (0x1u);
  /* 11411e79 pop edi */
  EDI = (pop32());
  /* 11411e7a pop esi */
  ESI = (pop32());
  /* 11411e7b pop ebp */
  EBP = (pop32());
  /* 11411e7c pop ebx */
  EBX = (pop32());
  /* 11411e7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411e80 ret  */
  ESPCHK(0x11411d00u, _esp0);
  ESP += 4; return;
L_11411e81:;
  /* 11411e81 pop edi */
  EDI = (pop32());
  /* 11411e82 pop esi */
  ESI = (pop32());
  /* 11411e83 pop ebp */
  EBP = (pop32());
  /* 11411e84 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11411e86 pop ebx */
  EBX = (pop32());
  /* 11411e87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411e8a ret  */
  ESPCHK(0x11411d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e90 @ 0x11411e90 (51 bytes, 22 insns) */
void f_11411e90(void) {
  FTRACE(0x11411e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411e90 push esi */
  push32((uint32_t)(ESI));
  /* 11411e91 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11411e95 push edi */
  push32((uint32_t)(EDI));
  /* 11411e96 mov edi, ecx */
  EDI = (ECX);
  /* 11411e98 mov eax, dword ptr [esi + 0xd] */
  EAX = (r32((uint32_t)(ESI + 0xd)));
  /* 11411e9b mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11411e9e push eax */
  push32((uint32_t)(EAX));
  /* 11411e9f push ecx */
  push32((uint32_t)(ECX));
  /* 11411ea0 mov ecx, edi */
  ECX = (EDI);
  /* 11411ea2 call 0x114123a0 */
  push32(0x11411ea7u); f_114123a0();
  /* 11411ea7 mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 11411eaa mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11411ead push edx */
  push32((uint32_t)(EDX));
  /* 11411eae push eax */
  push32((uint32_t)(EAX));
  /* 11411eaf mov ecx, edi */
  ECX = (EDI);
  /* 11411eb1 call 0x114123a0 */
  push32(0x11411eb6u); f_114123a0();
  /* 11411eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11411eb8 pop edi */
  EDI = (pop32());
  /* 11411eb9 mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 11411ebc mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 11411ebf pop esi */
  ESI = (pop32());
  /* 11411ec0 ret 4 */
  ESPCHK(0x11411e90u, _esp0);
  ESP += 8; return;
}

/* FUN_10001ed0 @ 0x11411ed0 (96 bytes, 36 insns) */
void f_11411ed0(void) {
  FTRACE(0x11411ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411ed0 push esi */
  push32((uint32_t)(ESI));
  /* 11411ed1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11411ed5 push edi */
  push32((uint32_t)(EDI));
  /* 11411ed6 mov edi, ecx */
  EDI = (ECX);
  /* 11411ed8 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 11411edb push eax */
  push32((uint32_t)(EAX));
  /* 11411edc call 0x114122c0 */
  push32(0x11411ee1u); f_114122c0();
  /* 11411ee1 cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411ee6 jl 0x11411f04 */
  if ((C.sf!=C.of)) goto L_11411f04;
  /* 11411ee8 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11411eeb push 0xfffffed4 */
  push32((uint32_t)(0xfffffed4u));
  /* 11411ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 11411ef1 mov ecx, edi */
  ECX = (EDI);
  /* 11411ef3 mov dword ptr [esi + 0xd], 0x12c */
  w32((uint32_t)(ESI + 0xd), (0x12cu));
  /* 11411efa call 0x114123a0 */
  push32(0x11411effu); f_114123a0();
  /* 11411eff pop edi */
  EDI = (pop32());
  /* 11411f00 pop esi */
  ESI = (pop32());
  /* 11411f01 ret 4 */
  ESPCHK(0x11411ed0u, _esp0);
  ESP += 8; return;
L_11411f04:;
  /* 11411f04 mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11411f07 mov ecx, edi */
  ECX = (EDI);
  /* 11411f09 push edx */
  push32((uint32_t)(EDX));
  /* 11411f0a call 0x114122c0 */
  push32(0x11411f0fu); f_114122c0();
  /* 11411f0f mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 11411f12 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 11411f15 push eax */
  push32((uint32_t)(EAX));
  /* 11411f16 mov ecx, edi */
  ECX = (EDI);
  /* 11411f18 call 0x114122c0 */
  push32(0x11411f1du); f_114122c0();
  /* 11411f1d mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11411f20 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11411f22 push eax */
  push32((uint32_t)(EAX));
  /* 11411f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11411f24 mov ecx, edi */
  ECX = (EDI);
  /* 11411f26 call 0x114123a0 */
  push32(0x11411f2bu); f_114123a0();
  /* 11411f2b pop edi */
  EDI = (pop32());
  /* 11411f2c pop esi */
  ESI = (pop32());
  /* 11411f2d ret 4 */
  ESPCHK(0x11411ed0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001f30 @ 0x11411f30 (901 bytes, 338 insns) */
void f_11411f30(void) {
  FTRACE(0x11411f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11411f30 push ebx */
  push32((uint32_t)(EBX));
  /* 11411f31 push ebp */
  push32((uint32_t)(EBP));
  /* 11411f32 push esi */
  push32((uint32_t)(ESI));
  /* 11411f33 mov esi, ecx */
  ESI = (ECX);
  /* 11411f35 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11411f37 push edi */
  push32((uint32_t)(EDI));
  /* 11411f38 mov eax, dword ptr [esi + 0x2d7] */
  EAX = (r32((uint32_t)(ESI + 0x2d7)));
  /* 11411f3e cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411f40 jne 0x114121cd */
  if (!C.zf) goto L_114121cd;
  /* 11411f46 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11411f4a mov eax, dword ptr [edi + 0x40] */
  EAX = (r32((uint32_t)(EDI + 0x40)));
  /* 11411f4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411f50 jne 0x114120c1 */
  if (!C.zf) goto L_114120c1;
  /* 11411f56 mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 11411f59 mov ebp, dword ptr [esp + 0x18] */
  EBP = (r32((uint32_t)(ESP + 0x18)));
  /* 11411f5d push eax */
  push32((uint32_t)(EAX));
  /* 11411f5e mov ecx, ebp */
  ECX = (EBP);
  /* 11411f60 call 0x11412330 */
  push32(0x11411f65u); f_11412330();
  /* 11411f65 imul eax, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11411f69 mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 11411f6c mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 11411f70 push ecx */
  push32((uint32_t)(ECX));
  /* 11411f71 mov ecx, esi */
  ECX = (ESI);
  /* 11411f73 call 0x11412480 */
  push32(0x11411f78u); f_11412480();
  /* 11411f78 mov dl, byte ptr [esi + 0x313] */
  DL = (r8((uint32_t)(ESI + 0x313)));
  /* 11411f7e push eax */
  push32((uint32_t)(EAX));
  /* 11411f7f dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11411f81 push edx */
  push32((uint32_t)(EDX));
  /* 11411f82 call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11411f88u);
  /* 11411f88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411f8b mov ebx, eax */
  EBX = (EAX);
  /* 11411f8d mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11411f90 mov ecx, ebp */
  ECX = (EBP);
  /* 11411f92 push eax */
  push32((uint32_t)(EAX));
  /* 11411f93 call 0x11412330 */
  push32(0x11411f98u); f_11412330();
  /* 11411f98 imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11411f9b cmp dword ptr [esp + 0x14], ebx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11411f9f jg 0x1141202e */
  if ((!C.zf&&C.sf==C.of)) goto L_1141202e;
  /* 11411fa5 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 11411fa8 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 11411fab push ecx */
  push32((uint32_t)(ECX));
  /* 11411fac push edx */
  push32((uint32_t)(EDX));
  /* 11411fad mov ecx, esi */
  ECX = (ESI);
  /* 11411faf call 0x11412480 */
  push32(0x11411fb4u); f_11412480();
  /* 11411fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11411fb5 mov al, byte ptr [esi + 0x313] */
  AL = (r8((uint32_t)(ESI + 0x313)));
  /* 11411fbb dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11411fbd push eax */
  push32((uint32_t)(EAX));
  /* 11411fbe call dword ptr [0x1141b170] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b170))), 0x11411fc4u);
  /* 11411fc4 mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 11411fc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11411fca mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 11411fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 11411fd2 mov ecx, ebp */
  ECX = (EBP);
  /* 11411fd4 call 0x11412330 */
  push32(0x11411fd9u); f_11412330();
  /* 11411fd9 mov ecx, eax */
  ECX = (EAX);
  /* 11411fdb mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11411fdf cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11411fe0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11411fe2 mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 11411fe5 mov ecx, esi */
  ECX = (ESI);
  /* 11411fe7 push edx */
  push32((uint32_t)(EDX));
  /* 11411fe8 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 11411feb call 0x11412480 */
  push32(0x11411ff0u); f_11412480();
  /* 11411ff0 push eax */
  push32((uint32_t)(EAX));
  /* 11411ff1 mov al, byte ptr [esi + 0x313] */
  AL = (r8((uint32_t)(ESI + 0x313)));
  /* 11411ff7 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11411ff9 push eax */
  push32((uint32_t)(EAX));
  /* 11411ffa call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11412000u);
  /* 11412000 mov ecx, dword ptr [edi + 0x15] */
  ECX = (r32((uint32_t)(EDI + 0x15)));
  /* 11412003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412006 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11412008 mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 1141200b push eax */
  push32((uint32_t)(EAX));
  /* 1141200c push ecx */
  push32((uint32_t)(ECX));
  /* 1141200d mov ecx, esi */
  ECX = (ESI);
  /* 1141200f call 0x11412480 */
  push32(0x11412014u); f_11412480();
  /* 11412014 mov dl, byte ptr [esi + 0x313] */
  DL = (r8((uint32_t)(ESI + 0x313)));
  /* 1141201a push eax */
  push32((uint32_t)(EAX));
  /* 1141201b dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 1141201d push edx */
  push32((uint32_t)(EDX));
  /* 1141201e call dword ptr [0x1141b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b154))), 0x11412024u);
  /* 11412024 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412027 pop edi */
  EDI = (pop32());
  /* 11412028 pop esi */
  ESI = (pop32());
  /* 11412029 pop ebp */
  EBP = (pop32());
  /* 1141202a pop ebx */
  EBX = (pop32());
  /* 1141202b ret 8 */
  ESPCHK(0x11411f30u, _esp0);
  ESP += 12; return;
L_1141202e:;
  /* 1141202e mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11412031 mov ecx, esi */
  ECX = (ESI);
  /* 11412033 push eax */
  push32((uint32_t)(EAX));
  /* 11412034 call 0x11412480 */
  push32(0x11412039u); f_11412480();
  /* 11412039 mov cl, byte ptr [esi + 0x313] */
  CL = (r8((uint32_t)(ESI + 0x313)));
  /* 1141203f push eax */
  push32((uint32_t)(EAX));
  /* 11412040 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11412042 push ecx */
  push32((uint32_t)(ECX));
  /* 11412043 call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11412049u);
  /* 11412049 mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 1141204c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141204f mov ecx, esi */
  ECX = (ESI);
  /* 11412051 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 11412054 push 0 */
  push32((uint32_t)(0x0u));
  /* 11412056 push edx */
  push32((uint32_t)(EDX));
  /* 11412057 call 0x11412480 */
  push32(0x1141205cu); f_11412480();
  /* 1141205c push eax */
  push32((uint32_t)(EAX));
  /* 1141205d mov al, byte ptr [esi + 0x313] */
  AL = (r8((uint32_t)(ESI + 0x313)));
  /* 11412063 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11412065 push eax */
  push32((uint32_t)(EAX));
  /* 11412066 call dword ptr [0x1141b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b154))), 0x1141206cu);
  /* 1141206c mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 1141206f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412072 push ecx */
  push32((uint32_t)(ECX));
  /* 11412073 mov ecx, ebp */
  ECX = (EBP);
  /* 11412075 call 0x11412330 */
  push32(0x1141207au); f_11412330();
  /* 1141207a mov ecx, eax */
  ECX = (EAX);
  /* 1141207c mov eax, ebx */
  EAX = (EBX);
  /* 1141207e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1141207f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11412081 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 11412084 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 11412087 push edx */
  push32((uint32_t)(EDX));
  /* 11412088 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141208a mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 1141208d mov ecx, ebp */
  ECX = (EBP);
  /* 1141208f call 0x11412330 */
  push32(0x11412094u); f_11412330();
  /* 11412094 mov ecx, eax */
  ECX = (EAX);
  /* 11412096 mov eax, ebx */
  EAX = (EBX);
  /* 11412098 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11412099 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1141209b mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 1141209e mov ecx, esi */
  ECX = (ESI);
  /* 114120a0 push eax */
  push32((uint32_t)(EAX));
  /* 114120a1 push edx */
  push32((uint32_t)(EDX));
  /* 114120a2 call 0x11412480 */
  push32(0x114120a7u); f_11412480();
  /* 114120a7 push eax */
  push32((uint32_t)(EAX));
  /* 114120a8 mov al, byte ptr [esi + 0x313] */
  AL = (r8((uint32_t)(ESI + 0x313)));
  /* 114120ae dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 114120b0 push eax */
  push32((uint32_t)(EAX));
  /* 114120b1 call dword ptr [0x1141b170] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b170))), 0x114120b7u);
  /* 114120b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114120ba pop edi */
  EDI = (pop32());
  /* 114120bb pop esi */
  ESI = (pop32());
  /* 114120bc pop ebp */
  EBP = (pop32());
  /* 114120bd pop ebx */
  EBX = (pop32());
  /* 114120be ret 8 */
  ESPCHK(0x11411f30u, _esp0);
  ESP += 12; return;
L_114120c1:;
  /* 114120c1 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114120c4 je 0x114120cf */
  if (C.zf) goto L_114120cf;
  /* 114120c6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114120c9 jne 0x114122ae */
  if (!C.zf) goto L_114122ae;
L_114120cf:;
  /* 114120cf mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 114120d2 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 114120d5 push ecx */
  push32((uint32_t)(ECX));
  /* 114120d6 push edx */
  push32((uint32_t)(EDX));
  /* 114120d7 mov ecx, esi */
  ECX = (ESI);
  /* 114120d9 call 0x11412480 */
  push32(0x114120deu); f_11412480();
  /* 114120de mov ebx, dword ptr [0x1141b170] */
  EBX = (r32((uint32_t)(0x1141b170)));
  /* 114120e4 push eax */
  push32((uint32_t)(EAX));
  /* 114120e5 mov al, byte ptr [esi + 0x313] */
  AL = (r8((uint32_t)(ESI + 0x313)));
  /* 114120eb dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 114120ed push eax */
  push32((uint32_t)(EAX));
  /* 114120ee call ebx */
  call_ind((uint32_t)(EBX), 0x114120f0u);
  /* 114120f0 mov ecx, dword ptr [edi + 0x15] */
  ECX = (r32((uint32_t)(EDI + 0x15)));
  /* 114120f3 mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 114120f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114120f9 push ecx */
  push32((uint32_t)(ECX));
  /* 114120fa push edx */
  push32((uint32_t)(EDX));
  /* 114120fb mov ecx, esi */
  ECX = (ESI);
  /* 114120fd call 0x11412480 */
  push32(0x11412102u); f_11412480();
  /* 11412102 push eax */
  push32((uint32_t)(EAX));
  /* 11412103 mov al, byte ptr [esi + 0x313] */
  AL = (r8((uint32_t)(ESI + 0x313)));
  /* 11412109 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 1141210b push eax */
  push32((uint32_t)(EAX));
  /* 1141210c call ebx */
  call_ind((uint32_t)(EBX), 0x1141210eu);
  /* 1141210e mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 11412111 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412114 mov dword ptr [edi + 0x15], ebp */
  w32((uint32_t)(EDI + 0x15), (EBP));
  /* 11412117 mov dword ptr [edi + 0xd], ebp */
  w32((uint32_t)(EDI + 0xd), (EBP));
  /* 1141211a push ecx */
  push32((uint32_t)(ECX));
  /* 1141211b mov ecx, esi */
  ECX = (ESI);
  /* 1141211d call 0x11412480 */
  push32(0x11412122u); f_11412480();
  /* 11412122 mov dl, byte ptr [esi + 0x313] */
  DL = (r8((uint32_t)(ESI + 0x313)));
  /* 11412128 mov ebx, dword ptr [0x1141b150] */
  EBX = (r32((uint32_t)(0x1141b150)));
  /* 1141212e dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11412130 push eax */
  push32((uint32_t)(EAX));
  /* 11412131 push edx */
  push32((uint32_t)(EDX));
  /* 11412132 call ebx */
  call_ind((uint32_t)(EBX), 0x11412134u);
  /* 11412134 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412137 cmp eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141213c jl 0x1141218a */
  if ((C.sf!=C.of)) goto L_1141218a;
  /* 1141213e mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11412141 mov ecx, esi */
  ECX = (ESI);
  /* 11412143 push eax */
  push32((uint32_t)(EAX));
  /* 11412144 mov dword ptr [edi + 0x15], 0x12c */
  w32((uint32_t)(EDI + 0x15), (0x12cu));
  /* 1141214b call 0x11412480 */
  push32(0x11412150u); f_11412480();
  /* 11412150 mov cl, byte ptr [esi + 0x313] */
  CL = (r8((uint32_t)(ESI + 0x313)));
  /* 11412156 push eax */
  push32((uint32_t)(EAX));
  /* 11412157 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11412159 push ecx */
  push32((uint32_t)(ECX));
  /* 1141215a call ebx */
  call_ind((uint32_t)(EBX), 0x1141215cu);
  /* 1141215c mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 1141215f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412162 sub eax, 0x12c */
  { uint32_t _a=(EAX),_b=(0x12cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11412167 mov ecx, esi */
  ECX = (ESI);
  /* 11412169 push eax */
  push32((uint32_t)(EAX));
  /* 1141216a push edx */
  push32((uint32_t)(EDX));
  /* 1141216b call 0x11412480 */
  push32(0x11412170u); f_11412480();
  /* 11412170 push eax */
  push32((uint32_t)(EAX));
  /* 11412171 mov al, byte ptr [esi + 0x313] */
  AL = (r8((uint32_t)(ESI + 0x313)));
  /* 11412177 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11412179 push eax */
  push32((uint32_t)(EAX));
  /* 1141217a call dword ptr [0x1141b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b154))), 0x11412180u);
  /* 11412180 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412183 pop edi */
  EDI = (pop32());
  /* 11412184 pop esi */
  ESI = (pop32());
  /* 11412185 pop ebp */
  EBP = (pop32());
  /* 11412186 pop ebx */
  EBX = (pop32());
  /* 11412187 ret 8 */
  ESPCHK(0x11411f30u, _esp0);
  ESP += 12; return;
L_1141218a:;
  /* 1141218a mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 1141218d push ecx */
  push32((uint32_t)(ECX));
  /* 1141218e mov ecx, esi */
  ECX = (ESI);
  /* 11412190 call 0x11412480 */
  push32(0x11412195u); f_11412480();
  /* 11412195 mov dl, byte ptr [esi + 0x313] */
  DL = (r8((uint32_t)(ESI + 0x313)));
  /* 1141219b push eax */
  push32((uint32_t)(EAX));
  /* 1141219c dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 1141219e push edx */
  push32((uint32_t)(EDX));
  /* 1141219f call ebx */
  call_ind((uint32_t)(EBX), 0x114121a1u);
  /* 114121a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114121a4 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 114121a7 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 114121aa mov ecx, esi */
  ECX = (ESI);
  /* 114121ac push ebp */
  push32((uint32_t)(EBP));
  /* 114121ad push eax */
  push32((uint32_t)(EAX));
  /* 114121ae call 0x11412480 */
  push32(0x114121b3u); f_11412480();
  /* 114121b3 mov cl, byte ptr [esi + 0x313] */
  CL = (r8((uint32_t)(ESI + 0x313)));
  /* 114121b9 push eax */
  push32((uint32_t)(EAX));
  /* 114121ba dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 114121bc push ecx */
  push32((uint32_t)(ECX));
  /* 114121bd call dword ptr [0x1141b154] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b154))), 0x114121c3u);
  /* 114121c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114121c6 pop edi */
  EDI = (pop32());
  /* 114121c7 pop esi */
  ESI = (pop32());
  /* 114121c8 pop ebp */
  EBP = (pop32());
  /* 114121c9 pop ebx */
  EBX = (pop32());
  /* 114121ca ret 8 */
  ESPCHK(0x11411f30u, _esp0);
  ESP += 12; return;
L_114121cd:;
  /* 114121cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114121d0 je 0x114121db */
  if (C.zf) goto L_114121db;
  /* 114121d2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114121d5 jne 0x114122ae */
  if (!C.zf) goto L_114122ae;
L_114121db:;
  /* 114121db mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 114121df mov ecx, esi */
  ECX = (ESI);
  /* 114121e1 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 114121e4 push edx */
  push32((uint32_t)(EDX));
  /* 114121e5 call 0x11412330 */
  push32(0x114121eau); f_11412330();
  /* 114121ea mov ebp, eax */
  EBP = (EAX);
  /* 114121ec mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 114121ef imul ebp, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114121f3 push eax */
  push32((uint32_t)(EAX));
  /* 114121f4 mov ecx, esi */
  ECX = (ESI);
  /* 114121f6 call 0x11412330 */
  push32(0x114121fbu); f_11412330();
  /* 114121fb mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 114121fe mov ebx, eax */
  EBX = (EAX);
  /* 11412200 push ecx */
  push32((uint32_t)(ECX));
  /* 11412201 mov ecx, esi */
  ECX = (ESI);
  /* 11412203 call 0x114122c0 */
  push32(0x11412208u); f_114122c0();
  /* 11412208 imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1141220b cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141220d jg 0x1141224f */
  if ((!C.zf&&C.sf==C.of)) goto L_1141224f;
  /* 1141220f mov edx, dword ptr [edi + 0xd] */
  EDX = (r32((uint32_t)(EDI + 0xd)));
  /* 11412212 mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 11412215 push edx */
  push32((uint32_t)(EDX));
  /* 11412216 push eax */
  push32((uint32_t)(EAX));
  /* 11412217 mov ecx, esi */
  ECX = (ESI);
  /* 11412219 call 0x114123a0 */
  push32(0x1141221eu); f_114123a0();
  /* 1141221e mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 11412221 mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 11412228 push ecx */
  push32((uint32_t)(ECX));
  /* 11412229 mov ecx, esi */
  ECX = (ESI);
  /* 1141222b call 0x11412330 */
  push32(0x11412230u); f_11412330();
  /* 11412230 mov ecx, eax */
  ECX = (EAX);
  /* 11412232 mov eax, ebp */
  EAX = (EBP);
  /* 11412234 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11412235 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11412237 mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 1141223a mov ecx, esi */
  ECX = (ESI);
  /* 1141223c mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 1141223f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11412241 push eax */
  push32((uint32_t)(EAX));
  /* 11412242 push edx */
  push32((uint32_t)(EDX));
  /* 11412243 call 0x114123a0 */
  push32(0x11412248u); f_114123a0();
  /* 11412248 pop edi */
  EDI = (pop32());
  /* 11412249 pop esi */
  ESI = (pop32());
  /* 1141224a pop ebp */
  EBP = (pop32());
  /* 1141224b pop ebx */
  EBX = (pop32());
  /* 1141224c ret 8 */
  ESPCHK(0x11411f30u, _esp0);
  ESP += 12; return;
L_1141224f:;
  /* 1141224f mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11412252 mov ecx, esi */
  ECX = (ESI);
  /* 11412254 push eax */
  push32((uint32_t)(EAX));
  /* 11412255 call 0x114122c0 */
  push32(0x1141225au); f_114122c0();
  /* 1141225a mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 1141225d mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 11412260 push ecx */
  push32((uint32_t)(ECX));
  /* 11412261 mov ecx, esi */
  ECX = (ESI);
  /* 11412263 call 0x114122c0 */
  push32(0x11412268u); f_114122c0();
  /* 11412268 mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 1141226b mov ecx, esi */
  ECX = (ESI);
  /* 1141226d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1141226f push eax */
  push32((uint32_t)(EAX));
  /* 11412270 push edx */
  push32((uint32_t)(EDX));
  /* 11412271 call 0x114123a0 */
  push32(0x11412276u); f_114123a0();
  /* 11412276 mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 11412279 mov ecx, esi */
  ECX = (ESI);
  /* 1141227b push eax */
  push32((uint32_t)(EAX));
  /* 1141227c call 0x11412330 */
  push32(0x11412281u); f_11412330();
  /* 11412281 mov ecx, eax */
  ECX = (EAX);
  /* 11412283 mov eax, ebx */
  EAX = (EBX);
  /* 11412285 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11412286 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11412288 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 1141228b mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 1141228e push edx */
  push32((uint32_t)(EDX));
  /* 1141228f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11412291 mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 11412294 mov ecx, esi */
  ECX = (ESI);
  /* 11412296 call 0x11412330 */
  push32(0x1141229bu); f_11412330();
  /* 1141229b mov ecx, eax */
  ECX = (EAX);
  /* 1141229d mov eax, ebx */
  EAX = (EBX);
  /* 1141229f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 114122a0 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 114122a2 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 114122a5 mov ecx, esi */
  ECX = (ESI);
  /* 114122a7 push eax */
  push32((uint32_t)(EAX));
  /* 114122a8 push edx */
  push32((uint32_t)(EDX));
  /* 114122a9 call 0x114123a0 */
  push32(0x114122aeu); f_114123a0();
L_114122ae:;
  /* 114122ae pop edi */
  EDI = (pop32());
  /* 114122af pop esi */
  ESI = (pop32());
  /* 114122b0 pop ebp */
  EBP = (pop32());
  /* 114122b1 pop ebx */
  EBX = (pop32());
  /* 114122b2 ret 8 */
  ESPCHK(0x11411f30u, _esp0);
  ESP += 12; return;
}

/* FUN_100022c0 @ 0x114122c0 (75 bytes, 18 insns) [1 switch table(s)] */
void f_114122c0(void) {
  FTRACE(0x114122c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114122c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114122c4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114122c7 ja 0x11412306 */
  if ((!C.cf&&!C.zf)) goto L_11412306;
  /* 114122c9 jmp dword ptr [eax*4 + 0x1141230c] */
  switch (EAX) {
    case 0: goto L_114122d0;
    case 1: goto L_114122d9;
    case 2: goto L_114122e2;
    case 3: goto L_114122eb;
    case 4: goto L_114122f4;
    case 5: goto L_114122fd;
    default: x86_unimpl("switch@0x114122c9 out of table"); return;
  }
L_114122d0:;
  /* 114122d0 mov eax, dword ptr [ecx + 0x2e3] */
  EAX = (r32((uint32_t)(ECX + 0x2e3)));
  /* 114122d6 ret 4 */
  ESPCHK(0x114122c0u, _esp0);
  ESP += 8; return;
L_114122d9:;
  /* 114122d9 mov eax, dword ptr [ecx + 0x2e7] */
  EAX = (r32((uint32_t)(ECX + 0x2e7)));
  /* 114122df ret 4 */
  ESPCHK(0x114122c0u, _esp0);
  ESP += 8; return;
L_114122e2:;
  /* 114122e2 mov eax, dword ptr [ecx + 0x2eb] */
  EAX = (r32((uint32_t)(ECX + 0x2eb)));
  /* 114122e8 ret 4 */
  ESPCHK(0x114122c0u, _esp0);
  ESP += 8; return;
L_114122eb:;
  /* 114122eb mov eax, dword ptr [ecx + 0x2ef] */
  EAX = (r32((uint32_t)(ECX + 0x2ef)));
  /* 114122f1 ret 4 */
  ESPCHK(0x114122c0u, _esp0);
  ESP += 8; return;
L_114122f4:;
  /* 114122f4 mov eax, dword ptr [ecx + 0x2f3] */
  EAX = (r32((uint32_t)(ECX + 0x2f3)));
  /* 114122fa ret 4 */
  ESPCHK(0x114122c0u, _esp0);
  ESP += 8; return;
L_114122fd:;
  /* 114122fd mov eax, dword ptr [ecx + 0x2f7] */
  EAX = (r32((uint32_t)(ECX + 0x2f7)));
  /* 11412303 ret 4 */
  ESPCHK(0x114122c0u, _esp0);
  ESP += 8; return;
L_11412306:;
  /* 11412306 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11412308 ret 4 */
  ESPCHK(0x114122c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002330 @ 0x11412330 (75 bytes, 18 insns) [1 switch table(s)] */
void f_11412330(void) {
  FTRACE(0x11412330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11412330 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11412334 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11412337 ja 0x11412376 */
  if ((!C.cf&&!C.zf)) goto L_11412376;
  /* 11412339 jmp dword ptr [eax*4 + 0x1141237c] */
  switch (EAX) {
    case 0: goto L_11412340;
    case 1: goto L_11412349;
    case 2: goto L_11412352;
    case 3: goto L_1141235b;
    case 4: goto L_11412364;
    case 5: goto L_1141236d;
    default: x86_unimpl("switch@0x11412339 out of table"); return;
  }
L_11412340:;
  /* 11412340 mov eax, dword ptr [ecx + 0x2fb] */
  EAX = (r32((uint32_t)(ECX + 0x2fb)));
  /* 11412346 ret 4 */
  ESPCHK(0x11412330u, _esp0);
  ESP += 8; return;
L_11412349:;
  /* 11412349 mov eax, dword ptr [ecx + 0x2ff] */
  EAX = (r32((uint32_t)(ECX + 0x2ff)));
  /* 1141234f ret 4 */
  ESPCHK(0x11412330u, _esp0);
  ESP += 8; return;
L_11412352:;
  /* 11412352 mov eax, dword ptr [ecx + 0x303] */
  EAX = (r32((uint32_t)(ECX + 0x303)));
  /* 11412358 ret 4 */
  ESPCHK(0x11412330u, _esp0);
  ESP += 8; return;
L_1141235b:;
  /* 1141235b mov eax, dword ptr [ecx + 0x307] */
  EAX = (r32((uint32_t)(ECX + 0x307)));
  /* 11412361 ret 4 */
  ESPCHK(0x11412330u, _esp0);
  ESP += 8; return;
L_11412364:;
  /* 11412364 mov eax, dword ptr [ecx + 0x30b] */
  EAX = (r32((uint32_t)(ECX + 0x30b)));
  /* 1141236a ret 4 */
  ESPCHK(0x11412330u, _esp0);
  ESP += 8; return;
L_1141236d:;
  /* 1141236d mov eax, dword ptr [ecx + 0x30f] */
  EAX = (r32((uint32_t)(ECX + 0x30f)));
  /* 11412373 ret 4 */
  ESPCHK(0x11412330u, _esp0);
  ESP += 8; return;
L_11412376:;
  /* 11412376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11412378 ret 4 */
  ESPCHK(0x11412330u, _esp0);
  ESP += 8; return;
}

/* FUN_100023a0 @ 0x114123a0 (146 bytes, 34 insns) [1 switch table(s)] */
void f_114123a0(void) {
  FTRACE(0x114123a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114123a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114123a4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114123a7 ja 0x1141242f */
  if ((!C.cf&&!C.zf)) goto L_1141242f;
  /* 114123ad jmp dword ptr [eax*4 + 0x11412434] */
  switch (EAX) {
    case 0: goto L_114123b4;
    case 1: goto L_114123c9;
    case 2: goto L_114123de;
    case 3: goto L_114123f3;
    case 4: goto L_11412408;
    case 5: goto L_1141241d;
    default: x86_unimpl("switch@0x114123ad out of table"); return;
  }
L_114123b4:;
  /* 114123b4 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114123b8 mov edx, dword ptr [ecx + 0x2e3] */
  EDX = (r32((uint32_t)(ECX + 0x2e3)));
  /* 114123be add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114123c0 mov dword ptr [ecx + 0x2e3], edx */
  w32((uint32_t)(ECX + 0x2e3), (EDX));
  /* 114123c6 ret 8 */
  ESPCHK(0x114123a0u, _esp0);
  ESP += 12; return;
L_114123c9:;
  /* 114123c9 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 114123cd mov eax, dword ptr [ecx + 0x2e7] */
  EAX = (r32((uint32_t)(ECX + 0x2e7)));
  /* 114123d3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114123d5 mov dword ptr [ecx + 0x2e7], eax */
  w32((uint32_t)(ECX + 0x2e7), (EAX));
  /* 114123db ret 8 */
  ESPCHK(0x114123a0u, _esp0);
  ESP += 12; return;
L_114123de:;
  /* 114123de mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114123e2 mov edx, dword ptr [ecx + 0x2eb] */
  EDX = (r32((uint32_t)(ECX + 0x2eb)));
  /* 114123e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114123ea mov dword ptr [ecx + 0x2eb], edx */
  w32((uint32_t)(ECX + 0x2eb), (EDX));
  /* 114123f0 ret 8 */
  ESPCHK(0x114123a0u, _esp0);
  ESP += 12; return;
L_114123f3:;
  /* 114123f3 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 114123f7 mov eax, dword ptr [ecx + 0x2ef] */
  EAX = (r32((uint32_t)(ECX + 0x2ef)));
  /* 114123fd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114123ff mov dword ptr [ecx + 0x2ef], eax */
  w32((uint32_t)(ECX + 0x2ef), (EAX));
  /* 11412405 ret 8 */
  ESPCHK(0x114123a0u, _esp0);
  ESP += 12; return;
L_11412408:;
  /* 11412408 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1141240c mov edx, dword ptr [ecx + 0x2f3] */
  EDX = (r32((uint32_t)(ECX + 0x2f3)));
  /* 11412412 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11412414 mov dword ptr [ecx + 0x2f3], edx */
  w32((uint32_t)(ECX + 0x2f3), (EDX));
  /* 1141241a ret 8 */
  ESPCHK(0x114123a0u, _esp0);
  ESP += 12; return;
L_1141241d:;
  /* 1141241d mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11412421 mov eax, dword ptr [ecx + 0x2f7] */
  EAX = (r32((uint32_t)(ECX + 0x2f7)));
  /* 11412427 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11412429 mov dword ptr [ecx + 0x2f7], eax */
  w32((uint32_t)(ECX + 0x2f7), (EAX));
L_1141242f:;
  /* 1141242f ret 8 */
  ESPCHK(0x114123a0u, _esp0);
  ESP += 12; return;
}

/* FUN_10002450 @ 0x11412450 (39 bytes, 9 insns) */
void f_11412450(void) {
  FTRACE(0x11412450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11412450 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11412454 mov dl, byte ptr [esp + 8] */
  DL = (r8((uint32_t)(ESP + 0x8)));
  /* 11412458 mov byte ptr [ecx + 0x320], dl */
  w8((uint32_t)(ECX + 0x320), (DL));
  /* 1141245e lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11412461 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11412464 mov dword ptr [ecx + 0x31c], eax */
  w32((uint32_t)(ECX + 0x31c), (EAX));
  /* 1141246a mov al, byte ptr [esp + 0xc] */
  AL = (r8((uint32_t)(ESP + 0xc)));
  /* 1141246e mov byte ptr [ecx + 0x321], al */
  w8((uint32_t)(ECX + 0x321), (AL));
  /* 11412474 ret 0xc */
  ESPCHK(0x11412450u, _esp0);
  ESP += 16; return;
}

/* FUN_10002480 @ 0x11412480 (30 bytes, 9 insns) */
void f_11412480(void) {
  FTRACE(0x11412480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11412480 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11412484 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11412487 jne 0x11412491 */
  if (!C.zf) goto L_11412491;
  /* 11412489 mov eax, 1 */
  EAX = (0x1u);
  /* 1141248e ret 4 */
  ESPCHK(0x11412480u, _esp0);
  ESP += 8; return;
L_11412491:;
  /* 11412491 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11412494 jne 0x1141249b */
  if (!C.zf) goto L_1141249b;
  /* 11412496 mov eax, 3 */
  EAX = (0x3u);
L_1141249b:;
  /* 1141249b ret 4 */
  ESPCHK(0x11412480u, _esp0);
  ESP += 8; return;
}

/* FUN_100024a0 @ 0x114124a0 (110 bytes, 44 insns) */
void f_114124a0(void) {
  FTRACE(0x114124a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114124a0 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 114124a4 push ebx */
  push32((uint32_t)(EBX));
  /* 114124a5 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 114124a9 push ebp */
  push32((uint32_t)(EBP));
  /* 114124aa push esi */
  push32((uint32_t)(ESI));
  /* 114124ab push edi */
  push32((uint32_t)(EDI));
  /* 114124ac push 0 */
  push32((uint32_t)(0x0u));
  /* 114124ae push eax */
  push32((uint32_t)(EAX));
  /* 114124af push ebx */
  push32((uint32_t)(EBX));
  /* 114124b0 mov ebp, ecx */
  EBP = (ECX);
  /* 114124b2 push 0x114200d8 */
  push32((uint32_t)(0x114200d8u));
  /* 114124b7 push 0x1141f890 */
  push32((uint32_t)(0x1141f890u));
  /* 114124bc push ebp */
  push32((uint32_t)(EBP));
  /* 114124bd call dword ptr [0x1141b184] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b184))), 0x114124c3u);
  /* 114124c3 mov edi, dword ptr [esp + 0x30] */
  EDI = (r32((uint32_t)(ESP + 0x30)));
  /* 114124c7 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114124ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114124cc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114124cf repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114124d1 not ecx */
  ECX = (~(ECX));
  /* 114124d3 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114124d5 lea edx, [ebp + 0x1a] */
  EDX = ((uint32_t)(EBP + 0x1a));
  /* 114124d8 mov eax, ecx */
  EAX = (ECX);
  /* 114124da mov esi, edi */
  ESI = (EDI);
  /* 114124dc mov edi, edx */
  EDI = (EDX);
  /* 114124de mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 114124e2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114124e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114124e7 mov ecx, eax */
  ECX = (EAX);
  /* 114124e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114124eb and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114124ee rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 114124f0 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 114124f4 pop edi */
  EDI = (pop32());
  /* 114124f5 mov dword ptr [ebp + 0x40], ecx */
  w32((uint32_t)(EBP + 0x40), (ECX));
  /* 114124f8 mov dword ptr [ebp + 0x38], edx */
  w32((uint32_t)(EBP + 0x38), (EDX));
  /* 114124fb mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 114124fe mov byte ptr [ebp + 0x19], 0 */
  w8((uint32_t)(EBP + 0x19), (0x0u));
  /* 11412502 mov dword ptr [ebp + 0x15], eax */
  w32((uint32_t)(EBP + 0x15), (EAX));
  /* 11412505 mov dword ptr [ebp + 0xd], eax */
  w32((uint32_t)(EBP + 0xd), (EAX));
  /* 11412508 pop esi */
  ESI = (pop32());
  /* 11412509 pop ebp */
  EBP = (pop32());
  /* 1141250a pop ebx */
  EBX = (pop32());
  /* 1141250b ret 0x14 */
  ESPCHK(0x114124a0u, _esp0);
  ESP += 24; return;
}

/* FUN_10002510 @ 0x11412510 (79 bytes, 33 insns) */
void f_11412510(void) {
  FTRACE(0x11412510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11412510 push ebx */
  push32((uint32_t)(EBX));
  /* 11412511 push esi */
  push32((uint32_t)(ESI));
  /* 11412512 mov edx, ecx */
  EDX = (ECX);
  /* 11412514 push edi */
  push32((uint32_t)(EDI));
  /* 11412515 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11412519 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1141251c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141251e lea ebx, [edx + 0x29] */
  EBX = ((uint32_t)(EDX + 0x29));
  /* 11412521 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11412523 not ecx */
  ECX = (~(ECX));
  /* 11412525 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11412527 mov eax, ecx */
  EAX = (ECX);
  /* 11412529 mov esi, edi */
  ESI = (EDI);
  /* 1141252b mov edi, ebx */
  EDI = (EBX);
  /* 1141252d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11412530 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11412532 mov ecx, eax */
  ECX = (EAX);
  /* 11412534 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11412536 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11412539 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1141253b mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1141253f mov byte ptr [edx + 0x19], al */
  w8((uint32_t)(EDX + 0x19), (AL));
  /* 11412542 mov dword ptr [edx + 0x3c], ecx */
  w32((uint32_t)(EDX + 0x3c), (ECX));
  /* 11412545 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11412549 mov dword ptr [edx + 0x15], eax */
  w32((uint32_t)(EDX + 0x15), (EAX));
  /* 1141254c mov dword ptr [edx + 0xd], eax */
  w32((uint32_t)(EDX + 0xd), (EAX));
  /* 1141254f mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11412553 pop edi */
  EDI = (pop32());
  /* 11412554 pop esi */
  ESI = (pop32());
  /* 11412555 mov dword ptr [edx + 9], eax */
  w32((uint32_t)(EDX + 0x9), (EAX));
  /* 11412558 mov dword ptr [edx + 0x11], ecx */
  w32((uint32_t)(EDX + 0x11), (ECX));
  /* 1141255b pop ebx */
  EBX = (pop32());
  /* 1141255c ret 0x10 */
  ESPCHK(0x11412510u, _esp0);
  ESP += 20; return;
}

/* FUN_10002560 @ 0x11412560 (202 bytes, 70 insns) */
void f_11412560(void) {
  FTRACE(0x11412560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11412560 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11412564 push ebx */
  push32((uint32_t)(EBX));
  /* 11412565 push ebp */
  push32((uint32_t)(EBP));
  /* 11412566 push esi */
  push32((uint32_t)(ESI));
  /* 11412567 mov esi, ecx */
  ESI = (ECX);
  /* 11412569 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 1141256d mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11412571 mov ebp, dword ptr [0x1141b184] */
  EBP = (r32((uint32_t)(0x1141b184)));
  /* 11412577 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1141257a mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1141257e push edi */
  push32((uint32_t)(EDI));
  /* 1141257f mov edi, dword ptr [esp + 0x20] */
  EDI = (r32((uint32_t)(ESP + 0x20)));
  /* 11412583 push 0 */
  push32((uint32_t)(0x0u));
  /* 11412585 push eax */
  push32((uint32_t)(EAX));
  /* 11412586 push edi */
  push32((uint32_t)(EDI));
  /* 11412587 push 0x11420ad8 */
  push32((uint32_t)(0x11420ad8u));
  /* 1141258c push 0x1141f890 */
  push32((uint32_t)(0x1141f890u));
  /* 11412591 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11412596 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11412598 mov dword ptr [esi + 4], 0 */
  w32((uint32_t)(ESI + 0x4), (0x0u));
  /* 1141259f mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 114125a2 mov dword ptr [esi + 0x10], edx */
  w32((uint32_t)(ESI + 0x10), (EDX));
  /* 114125a5 mov byte ptr [esi + 0x14], 0 */
  w8((uint32_t)(ESI + 0x14), (0x0u));
  /* 114125a9 call ebp */
  call_ind((uint32_t)(EBP), 0x114125abu);
  /* 114125ab mov ebx, dword ptr [0x1141b17c] */
  EBX = (r32((uint32_t)(0x1141b17c)));
  /* 114125b1 lea ecx, [esi + 0x15] */
  ECX = ((uint32_t)(ESI + 0x15));
  /* 114125b4 push ecx */
  push32((uint32_t)(ECX));
  /* 114125b5 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 114125ba call ebx */
  call_ind((uint32_t)(EBX), 0x114125bcu);
  /* 114125bc mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 114125c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114125c2 push edx */
  push32((uint32_t)(EDX));
  /* 114125c3 push edi */
  push32((uint32_t)(EDI));
  /* 114125c4 push 0x11420ad8 */
  push32((uint32_t)(0x11420ad8u));
  /* 114125c9 push 0x1141f890 */
  push32((uint32_t)(0x1141f890u));
  /* 114125ce push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 114125d3 call ebp */
  call_ind((uint32_t)(EBP), 0x114125d5u);
  /* 114125d5 lea eax, [esi + 0x1d] */
  EAX = ((uint32_t)(ESI + 0x1d));
  /* 114125d8 push eax */
  push32((uint32_t)(EAX));
  /* 114125d9 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 114125de call ebx */
  call_ind((uint32_t)(EBX), 0x114125e0u);
  /* 114125e0 mov ecx, dword ptr [esp + 0x5c] */
  ECX = (r32((uint32_t)(ESP + 0x5c)));
  /* 114125e4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114125e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114125e9 push ecx */
  push32((uint32_t)(ECX));
  /* 114125ea push edi */
  push32((uint32_t)(EDI));
  /* 114125eb push 0x11420ad8 */
  push32((uint32_t)(0x11420ad8u));
  /* 114125f0 push 0x1141f890 */
  push32((uint32_t)(0x1141f890u));
  /* 114125f5 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 114125fa call ebp */
  call_ind((uint32_t)(EBP), 0x114125fcu);
  /* 114125fc lea edx, [esi + 0x25] */
  EDX = ((uint32_t)(ESI + 0x25));
  /* 114125ff push edx */
  push32((uint32_t)(EDX));
  /* 11412600 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11412605 call ebx */
  call_ind((uint32_t)(EBX), 0x11412607u);
  /* 11412607 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 1141260a mov edi, dword ptr [0x1141b140] */
  EDI = (r32((uint32_t)(0x1141b140)));
  /* 11412610 push 0xa */
  push32((uint32_t)(0xau));
  /* 11412612 push eax */
  push32((uint32_t)(EAX));
  /* 11412613 call edi */
  call_ind((uint32_t)(EDI), 0x11412615u);
  /* 11412615 mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 11412619 mov dl, byte ptr [esi + 0x10] */
  DL = (r8((uint32_t)(ESI + 0x10)));
  /* 1141261c push ecx */
  push32((uint32_t)(ECX));
  /* 1141261d push edx */
  push32((uint32_t)(EDX));
  /* 1141261e call edi */
  call_ind((uint32_t)(EDI), 0x11412620u);
  /* 11412620 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412623 pop edi */
  EDI = (pop32());
  /* 11412624 pop esi */
  ESI = (pop32());
  /* 11412625 pop ebp */
  EBP = (pop32());
  /* 11412626 pop ebx */
  EBX = (pop32());
  /* 11412627 ret 0x1c */
  ESPCHK(0x11412560u, _esp0);
  ESP += 32; return;
}

/* FUN_10002630 @ 0x11412630 (335 bytes, 116 insns) */
void f_11412630(void) {
  FTRACE(0x11412630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11412630 push ebx */
  push32((uint32_t)(EBX));
  /* 11412631 push ebp */
  push32((uint32_t)(EBP));
  /* 11412632 push esi */
  push32((uint32_t)(ESI));
  /* 11412633 mov esi, ecx */
  ESI = (ECX);
  /* 11412635 push edi */
  push32((uint32_t)(EDI));
  /* 11412636 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 11412639 push eax */
  push32((uint32_t)(EAX));
  /* 1141263a call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11412640u);
  /* 11412640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412643 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11412645 je 0x11412778 */
  if (C.zf) goto L_11412778;
  /* 1141264b mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1141264e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11412650 je 0x11412778 */
  if (C.zf) goto L_11412778;
  /* 11412656 mov cl, byte ptr [esi + 0xc] */
  CL = (r8((uint32_t)(ESI + 0xc)));
  /* 11412659 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1141265b push ecx */
  push32((uint32_t)(ECX));
  /* 1141265c call dword ptr [0x1141b140] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b140))), 0x11412662u);
  /* 11412662 mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 11412665 lea edx, [esi + 0x15] */
  EDX = ((uint32_t)(ESI + 0x15));
  /* 11412668 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11412669 push edx */
  push32((uint32_t)(EDX));
  /* 1141266a mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1141266d call dword ptr [0x1141b178] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b178))), 0x11412673u);
  /* 11412673 mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 11412677 mov ebx, dword ptr [0x1141b184] */
  EBX = (r32((uint32_t)(0x1141b184)));
  /* 1141267d mov ebp, dword ptr [0x1141b160] */
  EBP = (r32((uint32_t)(0x1141b160)));
  /* 11412683 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412686 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11412688 je 0x114126ce */
  if (C.zf) goto L_114126ce;
  /* 1141268a mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1141268e mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11412690 push 0 */
  push32((uint32_t)(0x0u));
  /* 11412692 push eax */
  push32((uint32_t)(EAX));
  /* 11412693 push ecx */
  push32((uint32_t)(ECX));
  /* 11412694 push 0x114200a0 */
  push32((uint32_t)(0x114200a0u));
  /* 11412699 push 0x1141f890 */
  push32((uint32_t)(0x1141f890u));
  /* 1141269e push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 114126a3 call ebx */
  call_ind((uint32_t)(EBX), 0x114126a5u);
  /* 114126a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114126a7 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 114126ac call ebp */
  call_ind((uint32_t)(EBP), 0x114126aeu);
  /* 114126ae mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 114126b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114126b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114126b4 push edi */
  push32((uint32_t)(EDI));
  /* 114126b5 push edx */
  push32((uint32_t)(EDX));
  /* 114126b6 call dword ptr [0x1141b148] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b148))), 0x114126bcu);
  /* 114126bc lea eax, [esi + 0x2d] */
  EAX = ((uint32_t)(ESI + 0x2d));
  /* 114126bf push eax */
  push32((uint32_t)(EAX));
  /* 114126c0 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 114126c5 call dword ptr [0x1141b17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b17c))), 0x114126cbu);
  /* 114126cb add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114126ce:;
  /* 114126ce lea ecx, [esi + 0x1d] */
  ECX = ((uint32_t)(ESI + 0x1d));
  /* 114126d1 push ecx */
  push32((uint32_t)(ECX));
  /* 114126d2 call dword ptr [0x1141b178] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b178))), 0x114126d8u);
  /* 114126d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114126db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114126dd je 0x11412723 */
  if (C.zf) goto L_11412723;
  /* 114126df mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 114126e3 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114126e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114126e7 push edx */
  push32((uint32_t)(EDX));
  /* 114126e8 push eax */
  push32((uint32_t)(EAX));
  /* 114126e9 push 0x114200a0 */
  push32((uint32_t)(0x114200a0u));
  /* 114126ee push 0x1141f890 */
  push32((uint32_t)(0x1141f890u));
  /* 114126f3 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 114126f8 call ebx */
  call_ind((uint32_t)(EBX), 0x114126fau);
  /* 114126fa push 0 */
  push32((uint32_t)(0x0u));
  /* 114126fc push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11412701 call ebp */
  call_ind((uint32_t)(EBP), 0x11412703u);
  /* 11412703 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11412705 push 0 */
  push32((uint32_t)(0x0u));
  /* 11412707 push 0 */
  push32((uint32_t)(0x0u));
  /* 11412709 push edi */
  push32((uint32_t)(EDI));
  /* 1141270a push ecx */
  push32((uint32_t)(ECX));
  /* 1141270b call dword ptr [0x1141b148] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b148))), 0x11412711u);
  /* 11412711 lea edx, [esi + 0x2d] */
  EDX = ((uint32_t)(ESI + 0x2d));
  /* 11412714 push edx */
  push32((uint32_t)(EDX));
  /* 11412715 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 1141271a call dword ptr [0x1141b17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b17c))), 0x11412720u);
  /* 11412720 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11412723:;
  /* 11412723 lea eax, [esi + 0x25] */
  EAX = ((uint32_t)(ESI + 0x25));
  /* 11412726 push eax */
  push32((uint32_t)(EAX));
  /* 11412727 call dword ptr [0x1141b178] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b178))), 0x1141272du);
  /* 1141272d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11412732 je 0x11412778 */
  if (C.zf) goto L_11412778;
  /* 11412734 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11412738 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 1141273a push 0 */
  push32((uint32_t)(0x0u));
  /* 1141273c push ecx */
  push32((uint32_t)(ECX));
  /* 1141273d push edx */
  push32((uint32_t)(EDX));
  /* 1141273e push 0x1141fcc8 */
  push32((uint32_t)(0x1141fcc8u));
  /* 11412743 push 0x1141f890 */
  push32((uint32_t)(0x1141f890u));
  /* 11412748 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 1141274d call ebx */
  call_ind((uint32_t)(EBX), 0x1141274fu);
  /* 1141274f push 0 */
  push32((uint32_t)(0x0u));
  /* 11412751 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11412756 call ebp */
  call_ind((uint32_t)(EBP), 0x11412758u);
  /* 11412758 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1141275a push 0 */
  push32((uint32_t)(0x0u));
  /* 1141275c push 0 */
  push32((uint32_t)(0x0u));
  /* 1141275e push edi */
  push32((uint32_t)(EDI));
  /* 1141275f push eax */
  push32((uint32_t)(EAX));
  /* 11412760 call dword ptr [0x1141b148] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b148))), 0x11412766u);
  /* 11412766 add esi, 0x35 */
  { uint32_t _a=(ESI),_b=(0x35u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11412769 push esi */
  push32((uint32_t)(ESI));
  /* 1141276a push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 1141276f call dword ptr [0x1141b17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b17c))), 0x11412775u);
  /* 11412775 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11412778:;
  /* 11412778 pop edi */
  EDI = (pop32());
  /* 11412779 pop esi */
  ESI = (pop32());
  /* 1141277a pop ebp */
  EBP = (pop32());
  /* 1141277b pop ebx */
  EBX = (pop32());
  /* 1141277c ret 0x10 */
  ESPCHK(0x11412630u, _esp0);
  ESP += 20; return;
}

/* FUN_10002780 @ 0x11412780 (126 bytes, 52 insns) */
void f_11412780(void) {
  FTRACE(0x11412780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11412780 push ebx */
  push32((uint32_t)(EBX));
  /* 11412781 push ebp */
  push32((uint32_t)(EBP));
  /* 11412782 push esi */
  push32((uint32_t)(ESI));
  /* 11412783 mov esi, ecx */
  ESI = (ECX);
  /* 11412785 push edi */
  push32((uint32_t)(EDI));
  /* 11412786 mov al, byte ptr [esi + 0x10] */
  AL = (r8((uint32_t)(ESI + 0x10)));
  /* 11412789 push eax */
  push32((uint32_t)(EAX));
  /* 1141278a call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11412790u);
  /* 11412790 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412793 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11412795 je 0x114127f7 */
  if (C.zf) goto L_114127f7;
  /* 11412797 mov ebp, dword ptr [0x1141b178] */
  EBP = (r32((uint32_t)(0x1141b178)));
  /* 1141279d lea edi, [esi + 0x2d] */
  EDI = ((uint32_t)(ESI + 0x2d));
  /* 114127a0 push edi */
  push32((uint32_t)(EDI));
  /* 114127a1 call ebp */
  call_ind((uint32_t)(EBP), 0x114127a3u);
  /* 114127a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114127a6 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114127a9 jg 0x114127f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_114127f7;
  /* 114127ab lea ebx, [esi + 0x35] */
  EBX = ((uint32_t)(ESI + 0x35));
  /* 114127ae push ebx */
  push32((uint32_t)(EBX));
  /* 114127af call ebp */
  call_ind((uint32_t)(EBP), 0x114127b1u);
  /* 114127b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114127b4 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114127b7 jg 0x114127f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_114127f7;
  /* 114127b9 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 114127bd push 0 */
  push32((uint32_t)(0x0u));
  /* 114127bf push edi */
  push32((uint32_t)(EDI));
  /* 114127c0 mov edi, dword ptr [0x1141b160] */
  EDI = (r32((uint32_t)(0x1141b160)));
  /* 114127c6 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 114127c9 mov byte ptr [esi + 0x14], 1 */
  w8((uint32_t)(ESI + 0x14), (0x1u));
  /* 114127cd call edi */
  call_ind((uint32_t)(EDI), 0x114127cfu);
  /* 114127cf push 1 */
  push32((uint32_t)(0x1u));
  /* 114127d1 push ebx */
  push32((uint32_t)(EBX));
  /* 114127d2 call edi */
  call_ind((uint32_t)(EDI), 0x114127d4u);
  /* 114127d4 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 114127d8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114127da push 0 */
  push32((uint32_t)(0x0u));
  /* 114127dc push 0 */
  push32((uint32_t)(0x0u));
  /* 114127de push edx */
  push32((uint32_t)(EDX));
  /* 114127df push eax */
  push32((uint32_t)(EAX));
  /* 114127e0 call dword ptr [0x1141b148] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b148))), 0x114127e6u);
  /* 114127e6 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 114127e9 mov dl, byte ptr [esi + 0x10] */
  DL = (r8((uint32_t)(ESI + 0x10)));
  /* 114127ec push ecx */
  push32((uint32_t)(ECX));
  /* 114127ed push edx */
  push32((uint32_t)(EDX));
  /* 114127ee call dword ptr [0x1141b140] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b140))), 0x114127f4u);
  /* 114127f4 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114127f7:;
  /* 114127f7 pop edi */
  EDI = (pop32());
  /* 114127f8 pop esi */
  ESI = (pop32());
  /* 114127f9 pop ebp */
  EBP = (pop32());
  /* 114127fa pop ebx */
  EBX = (pop32());
  /* 114127fb ret 8 */
  ESPCHK(0x11412780u, _esp0);
  ESP += 12; return;
}

/* OnInit @ 0x11412ac0 (1478 bytes, 371 insns) */
void f_11412ac0(void) {
  FTRACE(0x11412ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11412ac0 push ebx */
  push32((uint32_t)(EBX));
  /* 11412ac1 push ebp */
  push32((uint32_t)(EBP));
  /* 11412ac2 push esi */
  push32((uint32_t)(ESI));
  /* 11412ac3 mov esi, dword ptr [0x1141b11c] */
  ESI = (r32((uint32_t)(0x1141b11c)));
  /* 11412ac9 push edi */
  push32((uint32_t)(EDI));
  /* 11412aca push 0x1141c63c */
  push32((uint32_t)(0x1141c63cu));
  /* 11412acf push 0x1141f890 */
  push32((uint32_t)(0x1141f890u));
  /* 11412ad4 call esi */
  call_ind((uint32_t)(ESI), 0x11412ad6u);
  /* 11412ad6 push 0x1141c630 */
  push32((uint32_t)(0x1141c630u));
  /* 11412adb push 0x114214b8 */
  push32((uint32_t)(0x114214b8u));
  /* 11412ae0 call esi */
  call_ind((uint32_t)(ESI), 0x11412ae2u);
  /* 11412ae2 mov ebx, dword ptr [0x1141b12c] */
  EBX = (r32((uint32_t)(0x1141b12c)));
  /* 11412ae8 push 0x1141c624 */
  push32((uint32_t)(0x1141c624u));
  /* 11412aed push 0x114200d8 */
  push32((uint32_t)(0x114200d8u));
  /* 11412af2 call ebx */
  call_ind((uint32_t)(EBX), 0x11412af4u);
  /* 11412af4 push 0x1141c610 */
  push32((uint32_t)(0x1141c610u));
  /* 11412af9 push 0x1141fd18 */
  push32((uint32_t)(0x1141fd18u));
  /* 11412afe call ebx */
  call_ind((uint32_t)(EBX), 0x11412b00u);
  /* 11412b00 push 0x1141c600 */
  push32((uint32_t)(0x1141c600u));
  /* 11412b05 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 11412b0a call ebx */
  call_ind((uint32_t)(EBX), 0x11412b0cu);
  /* 11412b0c push 0x1141c5f4 */
  push32((uint32_t)(0x1141c5f4u));
  /* 11412b11 push 0x11420ad8 */
  push32((uint32_t)(0x11420ad8u));
  /* 11412b16 call ebx */
  call_ind((uint32_t)(EBX), 0x11412b18u);
  /* 11412b18 push 0x1141c5e0 */
  push32((uint32_t)(0x1141c5e0u));
  /* 11412b1d push 0x114200a0 */
  push32((uint32_t)(0x114200a0u));
  /* 11412b22 call ebx */
  call_ind((uint32_t)(EBX), 0x11412b24u);
  /* 11412b24 push 0x1141c5cc */
  push32((uint32_t)(0x1141c5ccu));
  /* 11412b29 push 0x1141fcc8 */
  push32((uint32_t)(0x1141fcc8u));
  /* 11412b2e call ebx */
  call_ind((uint32_t)(EBX), 0x11412b30u);
  /* 11412b30 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412b33 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11412b38 call dword ptr [0x1141b180] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b180))), 0x11412b3eu);
  /* 11412b3e mov edi, dword ptr [0x1141b130] */
  EDI = (r32((uint32_t)(0x1141b130)));
  /* 11412b44 push 8 */
  push32((uint32_t)(0x8u));
  /* 11412b46 push 0x114200a8 */
  push32((uint32_t)(0x114200a8u));
  /* 11412b4b call edi */
  call_ind((uint32_t)(EDI), 0x11412b4du);
  /* 11412b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 11412b4f push 0x1141c060 */
  push32((uint32_t)(0x1141c060u));
  /* 11412b54 call edi */
  call_ind((uint32_t)(EDI), 0x11412b56u);
  /* 11412b56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11412b58 push 0x114215a0 */
  push32((uint32_t)(0x114215a0u));
  /* 11412b5d call edi */
  call_ind((uint32_t)(EDI), 0x11412b5fu);
  /* 11412b5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11412b61 push 0x114215a1 */
  push32((uint32_t)(0x114215a1u));
  /* 11412b66 call edi */
  call_ind((uint32_t)(EDI), 0x11412b68u);
  /* 11412b68 push 0x32b */
  push32((uint32_t)(0x32bu));
  /* 11412b6d push 0x1141fd28 */
  push32((uint32_t)(0x1141fd28u));
  /* 11412b72 call edi */
  call_ind((uint32_t)(EDI), 0x11412b74u);
  /* 11412b74 mov esi, dword ptr [0x1141b128] */
  ESI = (r32((uint32_t)(0x1141b128)));
  /* 11412b7a push 0x1141c5c0 */
  push32((uint32_t)(0x1141c5c0u));
  /* 11412b7f push 0x1141fcf8 */
  push32((uint32_t)(0x1141fcf8u));
  /* 11412b84 call esi */
  call_ind((uint32_t)(ESI), 0x11412b86u);
  /* 11412b86 mov ebp, dword ptr [0x1141b138] */
  EBP = (r32((uint32_t)(0x1141b138)));
  /* 11412b8c push 0x1141c5b0 */
  push32((uint32_t)(0x1141c5b0u));
  /* 11412b91 push 0x1141fd08 */
  push32((uint32_t)(0x1141fd08u));
  /* 11412b96 call ebp */
  call_ind((uint32_t)(EBP), 0x11412b98u);
  /* 11412b98 push 0x1141c59c */
  push32((uint32_t)(0x1141c59cu));
  /* 11412b9d push 0x114207a0 */
  push32((uint32_t)(0x114207a0u));
  /* 11412ba2 call ebp */
  call_ind((uint32_t)(EBP), 0x11412ba4u);
  /* 11412ba4 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412ba7 push 0x1141c58c */
  push32((uint32_t)(0x1141c58cu));
  /* 11412bac push 0x114214e0 */
  push32((uint32_t)(0x114214e0u));
  /* 11412bb1 call ebp */
  call_ind((uint32_t)(EBP), 0x11412bb3u);
  /* 11412bb3 push 0x1141c57c */
  push32((uint32_t)(0x1141c57cu));
  /* 11412bb8 push 0x1141f968 */
  push32((uint32_t)(0x1141f968u));
  /* 11412bbd call esi */
  call_ind((uint32_t)(ESI), 0x11412bbfu);
  /* 11412bbf push 0x1141c574 */
  push32((uint32_t)(0x1141c574u));
  /* 11412bc4 push 0x11421518 */
  push32((uint32_t)(0x11421518u));
  /* 11412bc9 call esi */
  call_ind((uint32_t)(ESI), 0x11412bcbu);
  /* 11412bcb push 0x1141c56c */
  push32((uint32_t)(0x1141c56cu));
  /* 11412bd0 push 0x11421510 */
  push32((uint32_t)(0x11421510u));
  /* 11412bd5 call esi */
  call_ind((uint32_t)(ESI), 0x11412bd7u);
  /* 11412bd7 push 0x1141c564 */
  push32((uint32_t)(0x1141c564u));
  /* 11412bdc push 0x11421528 */
  push32((uint32_t)(0x11421528u));
  /* 11412be1 call esi */
  call_ind((uint32_t)(ESI), 0x11412be3u);
  /* 11412be3 push 0x1141c55c */
  push32((uint32_t)(0x1141c55cu));
  /* 11412be8 push 0x11421520 */
  push32((uint32_t)(0x11421520u));
  /* 11412bed call esi */
  call_ind((uint32_t)(ESI), 0x11412befu);
  /* 11412bef push 0x1141c554 */
  push32((uint32_t)(0x1141c554u));
  /* 11412bf4 push 0x11421538 */
  push32((uint32_t)(0x11421538u));
  /* 11412bf9 call esi */
  call_ind((uint32_t)(ESI), 0x11412bfbu);
  /* 11412bfb push 0x1141c54c */
  push32((uint32_t)(0x1141c54cu));
  /* 11412c00 push 0x11421530 */
  push32((uint32_t)(0x11421530u));
  /* 11412c05 call esi */
  call_ind((uint32_t)(ESI), 0x11412c07u);
  /* 11412c07 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412c0a mov dword ptr [0x1141fffb], 0x1141fcf8 */
  w32((uint32_t)(0x1141fffb), (0x1141fcf8u));
  /* 11412c14 push 0x32b */
  push32((uint32_t)(0x32bu));
  /* 11412c19 push 0x1141f978 */
  push32((uint32_t)(0x1141f978u));
  /* 11412c1e call edi */
  call_ind((uint32_t)(EDI), 0x11412c20u);
  /* 11412c20 push 0x1141c540 */
  push32((uint32_t)(0x1141c540u));
  /* 11412c25 push 0x114200b0 */
  push32((uint32_t)(0x114200b0u));
  /* 11412c2a call esi */
  call_ind((uint32_t)(ESI), 0x11412c2cu);
  /* 11412c2c push 0x1141c530 */
  push32((uint32_t)(0x1141c530u));
  /* 11412c31 push 0x114214f8 */
  push32((uint32_t)(0x114214f8u));
  /* 11412c36 call ebp */
  call_ind((uint32_t)(EBP), 0x11412c38u);
  /* 11412c38 push 0x1141c51c */
  push32((uint32_t)(0x1141c51cu));
  /* 11412c3d push 0x1141f800 */
  push32((uint32_t)(0x1141f800u));
  /* 11412c42 call ebp */
  call_ind((uint32_t)(EBP), 0x11412c44u);
  /* 11412c44 push 0x1141c50c */
  push32((uint32_t)(0x1141c50cu));
  /* 11412c49 push 0x114200b8 */
  push32((uint32_t)(0x114200b8u));
  /* 11412c4e call ebp */
  call_ind((uint32_t)(EBP), 0x11412c50u);
  /* 11412c50 push 0x1141c4fc */
  push32((uint32_t)(0x1141c4fcu));
  /* 11412c55 push 0x114200d0 */
  push32((uint32_t)(0x114200d0u));
  /* 11412c5a call esi */
  call_ind((uint32_t)(ESI), 0x11412c5cu);
  /* 11412c5c push 0x1141c4f4 */
  push32((uint32_t)(0x1141c4f4u));
  /* 11412c61 push 0x1141f820 */
  push32((uint32_t)(0x1141f820u));
  /* 11412c66 call esi */
  call_ind((uint32_t)(ESI), 0x11412c68u);
  /* 11412c68 push 0x1141c4ec */
  push32((uint32_t)(0x1141c4ecu));
  /* 11412c6d push 0x1141f838 */
  push32((uint32_t)(0x1141f838u));
  /* 11412c72 call esi */
  call_ind((uint32_t)(ESI), 0x11412c74u);
  /* 11412c74 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412c77 push 0x1141c4e4 */
  push32((uint32_t)(0x1141c4e4u));
  /* 11412c7c push 0x1141f828 */
  push32((uint32_t)(0x1141f828u));
  /* 11412c81 call esi */
  call_ind((uint32_t)(ESI), 0x11412c83u);
  /* 11412c83 push 0x1141c4dc */
  push32((uint32_t)(0x1141c4dcu));
  /* 11412c88 push 0x1141f858 */
  push32((uint32_t)(0x1141f858u));
  /* 11412c8d call esi */
  call_ind((uint32_t)(ESI), 0x11412c8fu);
  /* 11412c8f push 0x1141c4d4 */
  push32((uint32_t)(0x1141c4d4u));
  /* 11412c94 push 0x1141f848 */
  push32((uint32_t)(0x1141f848u));
  /* 11412c99 call esi */
  call_ind((uint32_t)(ESI), 0x11412c9bu);
  /* 11412c9b push 0x1141c4cc */
  push32((uint32_t)(0x1141c4ccu));
  /* 11412ca0 push 0x1141f860 */
  push32((uint32_t)(0x1141f860u));
  /* 11412ca5 call esi */
  call_ind((uint32_t)(ESI), 0x11412ca7u);
  /* 11412ca7 push 0x32b */
  push32((uint32_t)(0x32bu));
  /* 11412cac push 0x11420b28 */
  push32((uint32_t)(0x11420b28u));
  /* 11412cb1 mov dword ptr [0x1141fc4b], 0x114200b0 */
  w32((uint32_t)(0x1141fc4b), (0x114200b0u));
  /* 11412cbb call edi */
  call_ind((uint32_t)(EDI), 0x11412cbdu);
  /* 11412cbd push 0x1141c4c0 */
  push32((uint32_t)(0x1141c4c0u));
  /* 11412cc2 push 0x1141fd20 */
  push32((uint32_t)(0x1141fd20u));
  /* 11412cc7 call esi */
  call_ind((uint32_t)(ESI), 0x11412cc9u);
  /* 11412cc9 push 0x1141c4b0 */
  push32((uint32_t)(0x1141c4b0u));
  /* 11412cce push 0x1141fd10 */
  push32((uint32_t)(0x1141fd10u));
  /* 11412cd3 call esi */
  call_ind((uint32_t)(ESI), 0x11412cd5u);
  /* 11412cd5 push 0x1141c4a8 */
  push32((uint32_t)(0x1141c4a8u));
  /* 11412cda push 0x1141f8c0 */
  push32((uint32_t)(0x1141f8c0u));
  /* 11412cdf call esi */
  call_ind((uint32_t)(ESI), 0x11412ce1u);
  /* 11412ce1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412ce4 push 0x1141c4a0 */
  push32((uint32_t)(0x1141c4a0u));
  /* 11412ce9 push 0x1141f8b8 */
  push32((uint32_t)(0x1141f8b8u));
  /* 11412cee call esi */
  call_ind((uint32_t)(ESI), 0x11412cf0u);
  /* 11412cf0 push 0x1141c498 */
  push32((uint32_t)(0x1141c498u));
  /* 11412cf5 push 0x1141f8b0 */
  push32((uint32_t)(0x1141f8b0u));
  /* 11412cfa call esi */
  call_ind((uint32_t)(ESI), 0x11412cfcu);
  /* 11412cfc push 0x1141c490 */
  push32((uint32_t)(0x1141c490u));
  /* 11412d01 push 0x1141f8a8 */
  push32((uint32_t)(0x1141f8a8u));
  /* 11412d06 call esi */
  call_ind((uint32_t)(ESI), 0x11412d08u);
  /* 11412d08 push 0x1141c488 */
  push32((uint32_t)(0x1141c488u));
  /* 11412d0d push 0x1141f8a0 */
  push32((uint32_t)(0x1141f8a0u));
  /* 11412d12 call esi */
  call_ind((uint32_t)(ESI), 0x11412d14u);
  /* 11412d14 push 0x1141c480 */
  push32((uint32_t)(0x1141c480u));
  /* 11412d19 push 0x1141f898 */
  push32((uint32_t)(0x1141f898u));
  /* 11412d1e call esi */
  call_ind((uint32_t)(ESI), 0x11412d20u);
  /* 11412d20 push 0x32b */
  push32((uint32_t)(0x32bu));
  /* 11412d25 push 0x1141f4b8 */
  push32((uint32_t)(0x1141f4b8u));
  /* 11412d2a mov dword ptr [0x11420dfb], 0x1141fd20 */
  w32((uint32_t)(0x11420dfb), (0x1141fd20u));
  /* 11412d34 call edi */
  call_ind((uint32_t)(EDI), 0x11412d36u);
  /* 11412d36 push 0x1141c474 */
  push32((uint32_t)(0x1141c474u));
  /* 11412d3b push 0x1141f7e8 */
  push32((uint32_t)(0x1141f7e8u));
  /* 11412d40 call esi */
  call_ind((uint32_t)(ESI), 0x11412d42u);
  /* 11412d42 push 0x1141c464 */
  push32((uint32_t)(0x1141c464u));
  /* 11412d47 push 0x11420798 */
  push32((uint32_t)(0x11420798u));
  /* 11412d4c call esi */
  call_ind((uint32_t)(ESI), 0x11412d4eu);
  /* 11412d4e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412d51 push 0x1141c45c */
  push32((uint32_t)(0x1141c45cu));
  /* 11412d56 push 0x1141f880 */
  push32((uint32_t)(0x1141f880u));
  /* 11412d5b call esi */
  call_ind((uint32_t)(ESI), 0x11412d5du);
  /* 11412d5d push 0x1141c454 */
  push32((uint32_t)(0x1141c454u));
  /* 11412d62 push 0x1141f878 */
  push32((uint32_t)(0x1141f878u));
  /* 11412d67 call esi */
  call_ind((uint32_t)(ESI), 0x11412d69u);
  /* 11412d69 push 0x1141c44c */
  push32((uint32_t)(0x1141c44cu));
  /* 11412d6e push 0x1141f870 */
  push32((uint32_t)(0x1141f870u));
  /* 11412d73 call esi */
  call_ind((uint32_t)(ESI), 0x11412d75u);
  /* 11412d75 push 0x1141c444 */
  push32((uint32_t)(0x1141c444u));
  /* 11412d7a push 0x1141f868 */
  push32((uint32_t)(0x1141f868u));
  /* 11412d7f call esi */
  call_ind((uint32_t)(ESI), 0x11412d81u);
  /* 11412d81 push 0x32b */
  push32((uint32_t)(0x32bu));
  /* 11412d86 push 0x11420468 */
  push32((uint32_t)(0x11420468u));
  /* 11412d8b mov dword ptr [0x1141f78b], 0x1141f7e8 */
  w32((uint32_t)(0x1141f78b), (0x1141f7e8u));
  /* 11412d95 call edi */
  call_ind((uint32_t)(EDI), 0x11412d97u);
  /* 11412d97 push 0x1141c434 */
  push32((uint32_t)(0x1141c434u));
  /* 11412d9c push 0x114200c0 */
  push32((uint32_t)(0x114200c0u));
  /* 11412da1 call esi */
  call_ind((uint32_t)(ESI), 0x11412da3u);
  /* 11412da3 push 0x1141c428 */
  push32((uint32_t)(0x1141c428u));
  /* 11412da8 push 0x1141fcf0 */
  push32((uint32_t)(0x1141fcf0u));
  /* 11412dad call esi */
  call_ind((uint32_t)(ESI), 0x11412dafu);
  /* 11412daf push 0x1141c41c */
  push32((uint32_t)(0x1141c41cu));
  /* 11412db4 push 0x11420058 */
  push32((uint32_t)(0x11420058u));
  /* 11412db9 call esi */
  call_ind((uint32_t)(ESI), 0x11412dbbu);
  /* 11412dbb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412dbe push 0x1141c410 */
  push32((uint32_t)(0x1141c410u));
  /* 11412dc3 push 0x11420060 */
  push32((uint32_t)(0x11420060u));
  /* 11412dc8 call esi */
  call_ind((uint32_t)(ESI), 0x11412dcau);
  /* 11412dca push 0x1141c404 */
  push32((uint32_t)(0x1141c404u));
  /* 11412dcf push 0x11420090 */
  push32((uint32_t)(0x11420090u));
  /* 11412dd4 call esi */
  call_ind((uint32_t)(ESI), 0x11412dd6u);
  /* 11412dd6 push 0x1141c3f8 */
  push32((uint32_t)(0x1141c3f8u));
  /* 11412ddb push 0x11420098 */
  push32((uint32_t)(0x11420098u));
  /* 11412de0 call esi */
  call_ind((uint32_t)(ESI), 0x11412de2u);
  /* 11412de2 push 0x1141c3ec */
  push32((uint32_t)(0x1141c3ecu));
  /* 11412de7 push 0x11420080 */
  push32((uint32_t)(0x11420080u));
  /* 11412dec call esi */
  call_ind((uint32_t)(ESI), 0x11412deeu);
  /* 11412dee push 0x1141c3e0 */
  push32((uint32_t)(0x1141c3e0u));
  /* 11412df3 push 0x11420088 */
  push32((uint32_t)(0x11420088u));
  /* 11412df8 call esi */
  call_ind((uint32_t)(ESI), 0x11412dfau);
  /* 11412dfa push 0x1141c3d4 */
  push32((uint32_t)(0x1141c3d4u));
  /* 11412dff push 0x11420070 */
  push32((uint32_t)(0x11420070u));
  /* 11412e04 call esi */
  call_ind((uint32_t)(ESI), 0x11412e06u);
  /* 11412e06 push 0x1141c3c8 */
  push32((uint32_t)(0x1141c3c8u));
  /* 11412e0b push 0x11420078 */
  push32((uint32_t)(0x11420078u));
  /* 11412e10 call esi */
  call_ind((uint32_t)(ESI), 0x11412e12u);
  /* 11412e12 push 0x1141c3bc */
  push32((uint32_t)(0x1141c3bcu));
  /* 11412e17 push 0x11420068 */
  push32((uint32_t)(0x11420068u));
  /* 11412e1c call esi */
  call_ind((uint32_t)(ESI), 0x11412e1eu);
  /* 11412e1e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412e21 push 0x1141c3b0 */
  push32((uint32_t)(0x1141c3b0u));
  /* 11412e26 push 0x1141f950 */
  push32((uint32_t)(0x1141f950u));
  /* 11412e2b call esi */
  call_ind((uint32_t)(ESI), 0x11412e2du);
  /* 11412e2d push 0x32b */
  push32((uint32_t)(0x32bu));
  /* 11412e32 push 0x11420138 */
  push32((uint32_t)(0x11420138u));
  /* 11412e37 mov dword ptr [0x1142073b], 0x114200c0 */
  w32((uint32_t)(0x1142073b), (0x114200c0u));
  /* 11412e41 call edi */
  call_ind((uint32_t)(EDI), 0x11412e43u);
  /* 11412e43 push 0x1141c3a0 */
  push32((uint32_t)(0x1141c3a0u));
  /* 11412e48 push 0x114200c8 */
  push32((uint32_t)(0x114200c8u));
  /* 11412e4d call esi */
  call_ind((uint32_t)(ESI), 0x11412e4fu);
  /* 11412e4f push 0x1141c394 */
  push32((uint32_t)(0x1141c394u));
  /* 11412e54 push 0x114214d0 */
  push32((uint32_t)(0x114214d0u));
  /* 11412e59 call esi */
  call_ind((uint32_t)(ESI), 0x11412e5bu);
  /* 11412e5b push 0x32b */
  push32((uint32_t)(0x32bu));
  /* 11412e60 push 0x11420e58 */
  push32((uint32_t)(0x11420e58u));
  /* 11412e65 mov dword ptr [0x1142040b], 0x114200c8 */
  w32((uint32_t)(0x1142040b), (0x114200c8u));
  /* 11412e6f call edi */
  call_ind((uint32_t)(EDI), 0x11412e71u);
  /* 11412e71 push 0x1141c380 */
  push32((uint32_t)(0x1141c380u));
  /* 11412e76 push 0x11420130 */
  push32((uint32_t)(0x11420130u));
  /* 11412e7b call esi */
  call_ind((uint32_t)(ESI), 0x11412e7du);
  /* 11412e7d push 0x1141c374 */
  push32((uint32_t)(0x1141c374u));
  /* 11412e82 push 0x1141f7f0 */
  push32((uint32_t)(0x1141f7f0u));
  /* 11412e87 call esi */
  call_ind((uint32_t)(ESI), 0x11412e89u);
  /* 11412e89 push 0x1141c368 */
  push32((uint32_t)(0x1141c368u));
  /* 11412e8e push 0x1141fcb0 */
  push32((uint32_t)(0x1141fcb0u));
  /* 11412e93 call esi */
  call_ind((uint32_t)(ESI), 0x11412e95u);
  /* 11412e95 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412e98 push 0x1141c35c */
  push32((uint32_t)(0x1141c35cu));
  /* 11412e9d push 0x1141fca8 */
  push32((uint32_t)(0x1141fca8u));
  /* 11412ea2 call esi */
  call_ind((uint32_t)(ESI), 0x11412ea4u);
  /* 11412ea4 push 0x1141c350 */
  push32((uint32_t)(0x1141c350u));
  /* 11412ea9 push 0x1141fcc0 */
  push32((uint32_t)(0x1141fcc0u));
  /* 11412eae call esi */
  call_ind((uint32_t)(ESI), 0x11412eb0u);
  /* 11412eb0 push 0x1141c344 */
  push32((uint32_t)(0x1141c344u));
  /* 11412eb5 push 0x1141fcb8 */
  push32((uint32_t)(0x1141fcb8u));
  /* 11412eba call esi */
  call_ind((uint32_t)(ESI), 0x11412ebcu);
  /* 11412ebc push 0x1141c338 */
  push32((uint32_t)(0x1141c338u));
  /* 11412ec1 push 0x1141f970 */
  push32((uint32_t)(0x1141f970u));
  /* 11412ec6 call esi */
  call_ind((uint32_t)(ESI), 0x11412ec8u);
  /* 11412ec8 push 0x32b */
  push32((uint32_t)(0x32bu));
  /* 11412ecd push 0x11421188 */
  push32((uint32_t)(0x11421188u));
  /* 11412ed2 mov dword ptr [0x1142112b], 0x11420130 */
  w32((uint32_t)(0x1142112b), (0x11420130u));
  /* 11412edc call edi */
  call_ind((uint32_t)(EDI), 0x11412edeu);
  /* 11412ede push 0x1141c324 */
  push32((uint32_t)(0x1141c324u));
  /* 11412ee3 push 0x11420128 */
  push32((uint32_t)(0x11420128u));
  /* 11412ee8 call esi */
  call_ind((uint32_t)(ESI), 0x11412eeau);
  /* 11412eea push 0x1141c318 */
  push32((uint32_t)(0x1141c318u));
  /* 11412eef push 0x1141f960 */
  push32((uint32_t)(0x1141f960u));
  /* 11412ef4 call esi */
  call_ind((uint32_t)(ESI), 0x11412ef6u);
  /* 11412ef6 push 0x32b */
  push32((uint32_t)(0x32bu));
  /* 11412efb push 0x114207a8 */
  push32((uint32_t)(0x114207a8u));
  /* 11412f00 mov dword ptr [0x1142145b], 0x11420128 */
  w32((uint32_t)(0x1142145b), (0x11420128u));
  /* 11412f0a call edi */
  call_ind((uint32_t)(EDI), 0x11412f0cu);
  /* 11412f0c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412f0f push 0x1141c310 */
  push32((uint32_t)(0x1141c310u));
  /* 11412f14 push 0x11420120 */
  push32((uint32_t)(0x11420120u));
  /* 11412f19 call esi */
  call_ind((uint32_t)(ESI), 0x11412f1bu);
  /* 11412f1b push 0x24 */
  push32((uint32_t)(0x24u));
  /* 11412f1d push 0x1141c064 */
  push32((uint32_t)(0x1141c064u));
  /* 11412f22 mov dword ptr [0x11420a7b], 0x11420120 */
  w32((uint32_t)(0x11420a7b), (0x11420120u));
  /* 11412f2c call edi */
  call_ind((uint32_t)(EDI), 0x11412f2eu);
  /* 11412f2e push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11412f30 push 0x114200e0 */
  push32((uint32_t)(0x114200e0u));
  /* 11412f35 call edi */
  call_ind((uint32_t)(EDI), 0x11412f37u);
  /* 11412f37 push 0x1141c304 */
  push32((uint32_t)(0x1141c304u));
  /* 11412f3c push 0x1141f818 */
  push32((uint32_t)(0x1141f818u));
  /* 11412f41 call esi */
  call_ind((uint32_t)(ESI), 0x11412f43u);
  /* 11412f43 push 0x1141c2f8 */
  push32((uint32_t)(0x1141c2f8u));
  /* 11412f48 push 0x1141f810 */
  push32((uint32_t)(0x1141f810u));
  /* 11412f4d call esi */
  call_ind((uint32_t)(ESI), 0x11412f4fu);
  /* 11412f4f push 0x1141c2ec */
  push32((uint32_t)(0x1141c2ecu));
  /* 11412f54 push 0x1141f808 */
  push32((uint32_t)(0x1141f808u));
  /* 11412f59 call esi */
  call_ind((uint32_t)(ESI), 0x11412f5bu);
  /* 11412f5b push 0x1141c2e0 */
  push32((uint32_t)(0x1141c2e0u));
  /* 11412f60 push 0x114214f0 */
  push32((uint32_t)(0x114214f0u));
  /* 11412f65 call esi */
  call_ind((uint32_t)(ESI), 0x11412f67u);
  /* 11412f67 push 0x1141c2d4 */
  push32((uint32_t)(0x1141c2d4u));
  /* 11412f6c push 0x114214e8 */
  push32((uint32_t)(0x114214e8u));
  /* 11412f71 call esi */
  call_ind((uint32_t)(ESI), 0x11412f73u);
  /* 11412f73 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412f76 push 0x1141c2c8 */
  push32((uint32_t)(0x1141c2c8u));
  /* 11412f7b push 0x114214d8 */
  push32((uint32_t)(0x114214d8u));
  /* 11412f80 call esi */
  call_ind((uint32_t)(ESI), 0x11412f82u);
  /* 11412f82 push 0x1141c2c0 */
  push32((uint32_t)(0x1141c2c0u));
  /* 11412f87 push 0x114214c8 */
  push32((uint32_t)(0x114214c8u));
  /* 11412f8c call esi */
  call_ind((uint32_t)(ESI), 0x11412f8eu);
  /* 11412f8e push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11412f90 push 0x11420ae8 */
  push32((uint32_t)(0x11420ae8u));
  /* 11412f95 call edi */
  call_ind((uint32_t)(EDI), 0x11412f97u);
  /* 11412f97 push 0x1141c2b4 */
  push32((uint32_t)(0x1141c2b4u));
  /* 11412f9c push 0x1141fcd0 */
  push32((uint32_t)(0x1141fcd0u));
  /* 11412fa1 call esi */
  call_ind((uint32_t)(ESI), 0x11412fa3u);
  /* 11412fa3 push 0x1141c2a8 */
  push32((uint32_t)(0x1141c2a8u));
  /* 11412fa8 push 0x1141fcd8 */
  push32((uint32_t)(0x1141fcd8u));
  /* 11412fad call esi */
  call_ind((uint32_t)(ESI), 0x11412fafu);
  /* 11412faf push 0x1141c29c */
  push32((uint32_t)(0x1141c29cu));
  /* 11412fb4 push 0x1141fce0 */
  push32((uint32_t)(0x1141fce0u));
  /* 11412fb9 call esi */
  call_ind((uint32_t)(ESI), 0x11412fbbu);
  /* 11412fbb push 0x1141c290 */
  push32((uint32_t)(0x1141c290u));
  /* 11412fc0 push 0x1141f830 */
  push32((uint32_t)(0x1141f830u));
  /* 11412fc5 call esi */
  call_ind((uint32_t)(ESI), 0x11412fc7u);
  /* 11412fc7 push 0x1141c284 */
  push32((uint32_t)(0x1141c284u));
  /* 11412fcc push 0x1141f840 */
  push32((uint32_t)(0x1141f840u));
  /* 11412fd1 call esi */
  call_ind((uint32_t)(ESI), 0x11412fd3u);
  /* 11412fd3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11412fd6 push 0x1141c278 */
  push32((uint32_t)(0x1141c278u));
  /* 11412fdb push 0x1141f850 */
  push32((uint32_t)(0x1141f850u));
  /* 11412fe0 call esi */
  call_ind((uint32_t)(ESI), 0x11412fe2u);
  /* 11412fe2 push 0x1141c270 */
  push32((uint32_t)(0x1141c270u));
  /* 11412fe7 push 0x11421508 */
  push32((uint32_t)(0x11421508u));
  /* 11412fec call esi */
  call_ind((uint32_t)(ESI), 0x11412feeu);
  /* 11412fee push 0x1141c264 */
  push32((uint32_t)(0x1141c264u));
  /* 11412ff3 push 0x1141f7f8 */
  push32((uint32_t)(0x1141f7f8u));
  /* 11412ff8 call esi */
  call_ind((uint32_t)(ESI), 0x11412ffau);
  /* 11412ffa push 0x1141c254 */
  push32((uint32_t)(0x1141c254u));
  /* 11412fff push 0x1141fd00 */
  push32((uint32_t)(0x1141fd00u));
  /* 11413004 call ebp */
  call_ind((uint32_t)(EBP), 0x11413006u);
  /* 11413006 push 0x1141c244 */
  push32((uint32_t)(0x1141c244u));
  /* 1141300b push 0x1141f958 */
  push32((uint32_t)(0x1141f958u));
  /* 11413010 call ebx */
  call_ind((uint32_t)(EBX), 0x11413012u);
  /* 11413012 push 0x1141c238 */
  push32((uint32_t)(0x1141c238u));
  /* 11413017 push 0x11421500 */
  push32((uint32_t)(0x11421500u));
  /* 1141301c call ebx */
  call_ind((uint32_t)(EBX), 0x1141301eu);
  /* 1141301e mov esi, dword ptr [0x1141b13c] */
  ESI = (r32((uint32_t)(0x1141b13c)));
  /* 11413024 push 0x1141c230 */
  push32((uint32_t)(0x1141c230u));
  /* 11413029 push 0x1141f888 */
  push32((uint32_t)(0x1141f888u));
  /* 1141302e call esi */
  call_ind((uint32_t)(ESI), 0x11413030u);
  /* 11413030 push 0x1141c228 */
  push32((uint32_t)(0x1141c228u));
  /* 11413035 push 0x1141fce8 */
  push32((uint32_t)(0x1141fce8u));
  /* 1141303a call esi */
  call_ind((uint32_t)(ESI), 0x1141303cu);
  /* 1141303c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141303f push 0x1141c220 */
  push32((uint32_t)(0x1141c220u));
  /* 11413044 push 0x114214c0 */
  push32((uint32_t)(0x114214c0u));
  /* 11413049 call esi */
  call_ind((uint32_t)(ESI), 0x1141304bu);
  /* 1141304b mov esi, dword ptr [0x1141b134] */
  ESI = (r32((uint32_t)(0x1141b134)));
  /* 11413051 push 0x1141c218 */
  push32((uint32_t)(0x1141c218u));
  /* 11413056 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413058 call esi */
  call_ind((uint32_t)(ESI), 0x1141305au);
  /* 1141305a push 0x1141c210 */
  push32((uint32_t)(0x1141c210u));
  /* 1141305f push 2 */
  push32((uint32_t)(0x2u));
  /* 11413061 call esi */
  call_ind((uint32_t)(ESI), 0x11413063u);
  /* 11413063 push 0x1141c208 */
  push32((uint32_t)(0x1141c208u));
  /* 11413068 push 3 */
  push32((uint32_t)(0x3u));
  /* 1141306a call esi */
  call_ind((uint32_t)(ESI), 0x1141306cu);
  /* 1141306c push 0x1141c1f8 */
  push32((uint32_t)(0x1141c1f8u));
  /* 11413071 push 4 */
  push32((uint32_t)(0x4u));
  /* 11413073 call esi */
  call_ind((uint32_t)(ESI), 0x11413075u);
  /* 11413075 push 0x1141c1f0 */
  push32((uint32_t)(0x1141c1f0u));
  /* 1141307a push 5 */
  push32((uint32_t)(0x5u));
  /* 1141307c call esi */
  call_ind((uint32_t)(ESI), 0x1141307eu);
  /* 1141307e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413081 pop edi */
  EDI = (pop32());
  /* 11413082 pop esi */
  ESI = (pop32());
  /* 11413083 pop ebp */
  EBP = (pop32());
  /* 11413084 pop ebx */
  EBX = (pop32());
  /* 11413085 ret  */
  ESPCHK(0x11412ac0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11413090 (5288 bytes, 1627 insns) */
void f_11413090(void) {
  FTRACE(0x11413090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11413090 mov al, byte ptr [0x114215a2] */
  AL = (r8((uint32_t)(0x114215a2)));
  /* 11413095 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11413098 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1141309a push ebx */
  push32((uint32_t)(EBX));
  /* 1141309b push ebp */
  push32((uint32_t)(EBP));
  /* 1141309c push esi */
  push32((uint32_t)(ESI));
  /* 1141309d push edi */
  push32((uint32_t)(EDI));
  /* 1141309e jne 0x1141348c */
  if (!C.zf) goto L_1141348c;
  /* 114130a4 push 0x1141c81c */
  push32((uint32_t)(0x1141c81cu));
  /* 114130a9 push 0x1141c804 */
  push32((uint32_t)(0x1141c804u));
  /* 114130ae mov byte ptr [0x114215a2], 1 */
  w8((uint32_t)(0x114215a2), (0x1u));
  /* 114130b5 call 0x1141540f */
  push32(0x114130bau); f_1141540f();
  /* 114130ba mov esi, eax */
  ESI = (EAX);
  /* 114130bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114130bf test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114130c1 jne 0x114132e7 */
  if (!C.zf) goto L_114132e7;
  /* 114130c7 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114130ca mov edi, 0x1141c7fc */
  EDI = (0x1141c7fcu);
  /* 114130cf repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114130d1 not ecx */
  ECX = (~(ECX));
  /* 114130d3 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114130d5 mov eax, ecx */
  EAX = (ECX);
  /* 114130d7 mov esi, edi */
  ESI = (EDI);
  /* 114130d9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114130dc mov edi, 0x11421540 */
  EDI = (0x11421540u);
  /* 114130e1 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114130e3 mov ecx, eax */
  ECX = (EAX);
  /* 114130e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114130e7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114130ea rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 114130ec or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114130ef mov edi, 0x1141c7f4 */
  EDI = (0x1141c7f4u);
  /* 114130f4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114130f6 not ecx */
  ECX = (~(ECX));
  /* 114130f8 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114130fa mov edx, ecx */
  EDX = (ECX);
  /* 114130fc mov esi, edi */
  ESI = (EDI);
  /* 114130fe shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11413101 mov edi, 0x1142154f */
  EDI = (0x1142154fu);
  /* 11413106 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11413108 mov ecx, edx */
  ECX = (EDX);
  /* 1141310a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1141310d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1141310f or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11413112 mov edi, 0x1141c7ec */
  EDI = (0x1141c7ecu);
  /* 11413117 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11413119 not ecx */
  ECX = (~(ECX));
  /* 1141311b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141311d mov eax, ecx */
  EAX = (ECX);
  /* 1141311f mov esi, edi */
  ESI = (EDI);
  /* 11413121 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11413124 mov edi, 0x1142155e */
  EDI = (0x1142155eu);
  /* 11413129 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1141312b mov ecx, eax */
  ECX = (EAX);
  /* 1141312d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141312f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11413132 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11413134 mov edi, 0x1141c7e4 */
  EDI = (0x1141c7e4u);
  /* 11413139 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1141313c repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1141313e not ecx */
  ECX = (~(ECX));
  /* 11413140 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11413142 mov edx, ecx */
  EDX = (ECX);
  /* 11413144 mov esi, edi */
  ESI = (EDI);
  /* 11413146 mov edi, 0x1142156d */
  EDI = (0x1142156du);
  /* 1141314b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1141314e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11413150 mov ecx, edx */
  ECX = (EDX);
  /* 11413152 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11413155 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11413157 mov edi, 0x1141c7dc */
  EDI = (0x1141c7dcu);
  /* 1141315c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1141315f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11413161 not ecx */
  ECX = (~(ECX));
  /* 11413163 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11413165 mov eax, ecx */
  EAX = (ECX);
  /* 11413167 mov esi, edi */
  ESI = (EDI);
  /* 11413169 mov edi, 0x1142157c */
  EDI = (0x1142157cu);
  /* 1141316e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11413171 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11413173 mov ecx, eax */
  ECX = (EAX);
  /* 11413175 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11413177 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1141317a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1141317c mov edi, 0x1141c7d4 */
  EDI = (0x1141c7d4u);
  /* 11413181 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11413184 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11413186 not ecx */
  ECX = (~(ECX));
  /* 11413188 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141318a mov edx, ecx */
  EDX = (ECX);
  /* 1141318c mov esi, edi */
  ESI = (EDI);
  /* 1141318e mov edi, 0x1142158b */
  EDI = (0x1142158bu);
  /* 11413193 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11413196 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11413198 mov ecx, edx */
  ECX = (EDX);
  /* 1141319a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1141319d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1141319f or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114131a2 mov edi, 0x1141c7cc */
  EDI = (0x1141c7ccu);
  /* 114131a7 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114131a9 not ecx */
  ECX = (~(ECX));
  /* 114131ab sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114131ad mov eax, ecx */
  EAX = (ECX);
  /* 114131af mov esi, edi */
  ESI = (EDI);
  /* 114131b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114131b4 mov edi, 0x1141f8c8 */
  EDI = (0x1141f8c8u);
  /* 114131b9 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114131bb mov ecx, eax */
  ECX = (EAX);
  /* 114131bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114131bf and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114131c2 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 114131c4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114131c7 mov edi, 0x1141c7c0 */
  EDI = (0x1141c7c0u);
  /* 114131cc repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114131ce not ecx */
  ECX = (~(ECX));
  /* 114131d0 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114131d2 mov edx, ecx */
  EDX = (ECX);
  /* 114131d4 mov esi, edi */
  ESI = (EDI);
  /* 114131d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114131d9 mov edi, 0x1141f8d7 */
  EDI = (0x1141f8d7u);
  /* 114131de rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114131e0 mov ecx, edx */
  ECX = (EDX);
  /* 114131e2 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114131e5 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 114131e7 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114131ea mov edi, 0x1141c7b4 */
  EDI = (0x1141c7b4u);
  /* 114131ef repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114131f1 not ecx */
  ECX = (~(ECX));
  /* 114131f3 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114131f5 mov eax, ecx */
  EAX = (ECX);
  /* 114131f7 mov esi, edi */
  ESI = (EDI);
  /* 114131f9 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114131fc mov edi, 0x1141f8e6 */
  EDI = (0x1141f8e6u);
  /* 11413201 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11413203 mov ecx, eax */
  ECX = (EAX);
  /* 11413205 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11413207 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1141320a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1141320c mov edi, 0x1141c7ac */
  EDI = (0x1141c7acu);
  /* 11413211 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11413214 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11413216 not ecx */
  ECX = (~(ECX));
  /* 11413218 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141321a mov edx, ecx */
  EDX = (ECX);
  /* 1141321c mov esi, edi */
  ESI = (EDI);
  /* 1141321e mov edi, 0x1141f8f5 */
  EDI = (0x1141f8f5u);
  /* 11413223 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11413226 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11413228 mov ecx, edx */
  ECX = (EDX);
  /* 1141322a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1141322d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1141322f mov edi, 0x1141c7a0 */
  EDI = (0x1141c7a0u);
  /* 11413234 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11413237 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11413239 not ecx */
  ECX = (~(ECX));
  /* 1141323b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141323d mov eax, ecx */
  EAX = (ECX);
  /* 1141323f mov esi, edi */
  ESI = (EDI);
  /* 11413241 mov edi, 0x1141f904 */
  EDI = (0x1141f904u);
  /* 11413246 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11413249 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1141324b mov ecx, eax */
  ECX = (EAX);
  /* 1141324d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141324f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11413252 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11413254 mov edi, 0x1141c794 */
  EDI = (0x1141c794u);
  /* 11413259 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1141325c repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1141325e not ecx */
  ECX = (~(ECX));
  /* 11413260 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11413262 mov edx, ecx */
  EDX = (ECX);
  /* 11413264 mov esi, edi */
  ESI = (EDI);
  /* 11413266 mov edi, 0x1141f913 */
  EDI = (0x1141f913u);
  /* 1141326b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1141326e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11413270 mov ecx, edx */
  ECX = (EDX);
  /* 11413272 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11413275 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11413277 mov edi, 0x1141c788 */
  EDI = (0x1141c788u);
  /* 1141327c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1141327f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11413281 not ecx */
  ECX = (~(ECX));
  /* 11413283 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11413285 mov eax, ecx */
  EAX = (ECX);
  /* 11413287 mov esi, edi */
  ESI = (EDI);
  /* 11413289 mov edi, 0x1141f922 */
  EDI = (0x1141f922u);
  /* 1141328e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11413291 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11413293 mov ecx, eax */
  ECX = (EAX);
  /* 11413295 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11413297 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1141329a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 1141329c mov edi, 0x1141c780 */
  EDI = (0x1141c780u);
  /* 114132a1 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114132a4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114132a6 not ecx */
  ECX = (~(ECX));
  /* 114132a8 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114132aa mov edx, ecx */
  EDX = (ECX);
  /* 114132ac mov esi, edi */
  ESI = (EDI);
  /* 114132ae mov edi, 0x1141f931 */
  EDI = (0x1141f931u);
  /* 114132b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114132b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114132b8 mov ecx, edx */
  ECX = (EDX);
  /* 114132ba and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114132bd rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 114132bf mov edi, 0x1141c778 */
  EDI = (0x1141c778u);
  /* 114132c4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 114132c7 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 114132c9 not ecx */
  ECX = (~(ECX));
  /* 114132cb sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114132cd mov eax, ecx */
  EAX = (ECX);
  /* 114132cf mov esi, edi */
  ESI = (EDI);
  /* 114132d1 mov edi, 0x1141f940 */
  EDI = (0x1141f940u);
  /* 114132d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114132d9 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114132db mov ecx, eax */
  ECX = (EAX);
  /* 114132dd and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114132e0 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 114132e2 jmp 0x1141348c */
  goto L_1141348c;
L_114132e7:;
  /* 114132e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114132e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114132eb push esi */
  push32((uint32_t)(ESI));
  /* 114132ec call 0x11415325 */
  push32(0x114132f1u); f_11415325();
  /* 114132f1 push esi */
  push32((uint32_t)(ESI));
  /* 114132f2 call 0x114151a2 */
  push32(0x114132f7u); f_114151a2();
  /* 114132f7 mov ebx, eax */
  EBX = (EAX);
  /* 114132f9 lea ecx, [ebx + 1] */
  ECX = ((uint32_t)(EBX + 0x1));
  /* 114132fc push ecx */
  push32((uint32_t)(ECX));
  /* 114132fd call 0x11415194 */
  push32(0x11413302u); f_11415194();
  /* 11413302 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413304 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413306 push esi */
  push32((uint32_t)(ESI));
  /* 11413307 mov edi, eax */
  EDI = (EAX);
  /* 11413309 call 0x11415325 */
  push32(0x1141330eu); f_11415325();
  /* 1141330e push esi */
  push32((uint32_t)(ESI));
  /* 1141330f push ebx */
  push32((uint32_t)(EBX));
  /* 11413310 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413312 push edi */
  push32((uint32_t)(EDI));
  /* 11413313 call 0x1141507d */
  push32(0x11413318u); f_1141507d();
  /* 11413318 push esi */
  push32((uint32_t)(ESI));
  /* 11413319 call 0x11415000 */
  push32(0x1141331eu); f_11415000();
  /* 1141331e add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413321 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11413323 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11413325:;
  /* 11413325 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11413327 jne 0x11413330 */
  if (!C.zf) goto L_11413330;
  /* 11413329 push 0x1141c770 */
  push32((uint32_t)(0x1141c770u));
  /* 1141332e jmp 0x1141336a */
  goto L_1141336a;
L_11413330:;
  /* 11413330 cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413333 jne 0x1141333c */
  if (!C.zf) goto L_1141333c;
  /* 11413335 push 0x1141c768 */
  push32((uint32_t)(0x1141c768u));
  /* 1141333a jmp 0x1141336a */
  goto L_1141336a;
L_1141333c:;
  /* 1141333c cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141333f jne 0x11413348 */
  if (!C.zf) goto L_11413348;
  /* 11413341 push 0x1141c760 */
  push32((uint32_t)(0x1141c760u));
  /* 11413346 jmp 0x1141336a */
  goto L_1141336a;
L_11413348:;
  /* 11413348 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141334b jne 0x11413354 */
  if (!C.zf) goto L_11413354;
  /* 1141334d push 0x1141c758 */
  push32((uint32_t)(0x1141c758u));
  /* 11413352 jmp 0x1141336a */
  goto L_1141336a;
L_11413354:;
  /* 11413354 cmp ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413357 jne 0x11413360 */
  if (!C.zf) goto L_11413360;
  /* 11413359 push 0x1141c750 */
  push32((uint32_t)(0x1141c750u));
  /* 1141335e jmp 0x1141336a */
  goto L_1141336a;
L_11413360:;
  /* 11413360 cmp ebx, 5 */
  { uint32_t _a=(EBX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413363 jne 0x11413377 */
  if (!C.zf) goto L_11413377;
  /* 11413365 push 0x1141c748 */
  push32((uint32_t)(0x1141c748u));
L_1141336a:;
  /* 1141336a push edi */
  push32((uint32_t)(EDI));
  /* 1141336b call 0x11414f80 */
  push32(0x11413370u); f_11414f80();
  /* 11413370 mov esi, eax */
  ESI = (EAX);
  /* 11413372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413375 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_11413377:;
  /* 11413377 add esi, 5 */
  { uint32_t _a=(ESI),_b=(0x5u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1141337a push 0x1141c744 */
  push32((uint32_t)(0x1141c744u));
  /* 1141337f lea ebp, [esi + edi] */
  EBP = ((uint32_t)(ESI + EDI*1));
  /* 11413382 push ebp */
  push32((uint32_t)(EBP));
  /* 11413383 call 0x11414f40 */
  push32(0x11413388u); f_11414f40();
  /* 11413388 lea ecx, [ebx + ebx*2] */
  ECX = ((uint32_t)(EBX + EBX*2));
  /* 1141338b push eax */
  push32((uint32_t)(EAX));
  /* 1141338c push ebp */
  push32((uint32_t)(EBP));
  /* 1141338d mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 11413391 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11413394 mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 11413398 lea edx, [ecx + 0x11421540] */
  EDX = ((uint32_t)(ECX + 0x11421540));
  /* 1141339e push edx */
  push32((uint32_t)(EDX));
  /* 1141339f call 0x11414e40 */
  push32(0x114133a4u); f_11414e40();
  /* 114133a4 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 114133a8 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 114133ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114133af inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 114133b0 cmp ebx, 6 */
  { uint32_t _a=(EBX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114133b3 mov byte ptr [eax + ecx + 0x11421540], 0 */
  w8((uint32_t)(EAX + ECX*1 + 0x11421540), (0x0u));
  /* 114133bb jl 0x11413325 */
  if ((C.sf!=C.of)) goto L_11413325;
  /* 114133c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_114133c3:;
  /* 114133c3 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 114133c5 jne 0x114133ce */
  if (!C.zf) goto L_114133ce;
  /* 114133c7 push 0x1141c7cc */
  push32((uint32_t)(0x1141c7ccu));
  /* 114133cc jmp 0x1141342c */
  goto L_1141342c;
L_114133ce:;
  /* 114133ce cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114133d1 jne 0x114133da */
  if (!C.zf) goto L_114133da;
  /* 114133d3 push 0x1141c7c0 */
  push32((uint32_t)(0x1141c7c0u));
  /* 114133d8 jmp 0x1141342c */
  goto L_1141342c;
L_114133da:;
  /* 114133da cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114133dd jne 0x114133e6 */
  if (!C.zf) goto L_114133e6;
  /* 114133df push 0x1141c7b4 */
  push32((uint32_t)(0x1141c7b4u));
  /* 114133e4 jmp 0x1141342c */
  goto L_1141342c;
L_114133e6:;
  /* 114133e6 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114133e9 jne 0x114133f2 */
  if (!C.zf) goto L_114133f2;
  /* 114133eb push 0x1141c7ac */
  push32((uint32_t)(0x1141c7acu));
  /* 114133f0 jmp 0x1141342c */
  goto L_1141342c;
L_114133f2:;
  /* 114133f2 cmp ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114133f5 jne 0x114133fe */
  if (!C.zf) goto L_114133fe;
  /* 114133f7 push 0x1141c7a0 */
  push32((uint32_t)(0x1141c7a0u));
  /* 114133fc jmp 0x1141342c */
  goto L_1141342c;
L_114133fe:;
  /* 114133fe cmp ebx, 5 */
  { uint32_t _a=(EBX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413401 jne 0x1141340a */
  if (!C.zf) goto L_1141340a;
  /* 11413403 push 0x1141c794 */
  push32((uint32_t)(0x1141c794u));
  /* 11413408 jmp 0x1141342c */
  goto L_1141342c;
L_1141340a:;
  /* 1141340a cmp ebx, 6 */
  { uint32_t _a=(EBX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141340d jne 0x11413416 */
  if (!C.zf) goto L_11413416;
  /* 1141340f push 0x1141c788 */
  push32((uint32_t)(0x1141c788u));
  /* 11413414 jmp 0x1141342c */
  goto L_1141342c;
L_11413416:;
  /* 11413416 cmp ebx, 7 */
  { uint32_t _a=(EBX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413419 jne 0x11413422 */
  if (!C.zf) goto L_11413422;
  /* 1141341b push 0x1141c780 */
  push32((uint32_t)(0x1141c780u));
  /* 11413420 jmp 0x1141342c */
  goto L_1141342c;
L_11413422:;
  /* 11413422 cmp ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413425 jne 0x11413439 */
  if (!C.zf) goto L_11413439;
  /* 11413427 push 0x1141c778 */
  push32((uint32_t)(0x1141c778u));
L_1141342c:;
  /* 1141342c push edi */
  push32((uint32_t)(EDI));
  /* 1141342d call 0x11414f80 */
  push32(0x11413432u); f_11414f80();
  /* 11413432 mov esi, eax */
  ESI = (EAX);
  /* 11413434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413437 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_11413439:;
  /* 11413439 add esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1141343c push 0x1141c744 */
  push32((uint32_t)(0x1141c744u));
  /* 11413441 lea ebp, [esi + edi] */
  EBP = ((uint32_t)(ESI + EDI*1));
  /* 11413444 push ebp */
  push32((uint32_t)(EBP));
  /* 11413445 call 0x11414f40 */
  push32(0x1141344au); f_11414f40();
  /* 1141344a lea ecx, [ebx + ebx*2] */
  ECX = ((uint32_t)(EBX + EBX*2));
  /* 1141344d push eax */
  push32((uint32_t)(EAX));
  /* 1141344e push ebp */
  push32((uint32_t)(EBP));
  /* 1141344f mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 11413453 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11413456 mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 1141345a lea edx, [ecx + 0x1141f8c8] */
  EDX = ((uint32_t)(ECX + 0x1141f8c8));
  /* 11413460 push edx */
  push32((uint32_t)(EDX));
  /* 11413461 call 0x11414e40 */
  push32(0x11413466u); f_11414e40();
  /* 11413466 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 1141346a mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 1141346e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413471 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11413472 cmp ebx, 9 */
  { uint32_t _a=(EBX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413475 mov byte ptr [eax + ecx + 0x1141f8c8], 0 */
  w8((uint32_t)(EAX + ECX*1 + 0x1141f8c8), (0x0u));
  /* 1141347d jl 0x114133c3 */
  if ((C.sf!=C.of)) goto L_114133c3;
  /* 11413483 push edi */
  push32((uint32_t)(EDI));
  /* 11413484 call 0x11414e30 */
  push32(0x11413489u); f_11414e30();
  /* 11413489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1141348c:;
  /* 1141348c push 1 */
  push32((uint32_t)(0x1u));
  /* 1141348e call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x11413494u);
  /* 11413494 mov ebp, dword ptr [0x1141b0f0] */
  EBP = (r32((uint32_t)(0x1141b0f0)));
  /* 1141349a mov edi, dword ptr [0x1141b140] */
  EDI = (r32((uint32_t)(0x1141b140)));
  /* 114134a0 mov esi, dword ptr [0x1141b154] */
  ESI = (r32((uint32_t)(0x1141b154)));
  /* 114134a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114134a9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114134ab je 0x114138bd */
  if (C.zf) goto L_114138bd;
  /* 114134b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114134b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114134b5 call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x114134bbu);
  /* 114134bb push 1 */
  push32((uint32_t)(0x1u));
  /* 114134bd push 0 */
  push32((uint32_t)(0x0u));
  /* 114134bf call ebp */
  call_ind((uint32_t)(EBP), 0x114134c1u);
  /* 114134c1 push 3 */
  push32((uint32_t)(0x3u));
  /* 114134c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 114134c5 call ebp */
  call_ind((uint32_t)(EBP), 0x114134c7u);
  /* 114134c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 114134c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 114134cb call ebp */
  call_ind((uint32_t)(EBP), 0x114134cdu);
  /* 114134cd push 8 */
  push32((uint32_t)(0x8u));
  /* 114134cf push 3 */
  push32((uint32_t)(0x3u));
  /* 114134d1 call ebp */
  call_ind((uint32_t)(EBP), 0x114134d3u);
  /* 114134d3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 114134d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 114134d7 call ebp */
  call_ind((uint32_t)(EBP), 0x114134d9u);
  /* 114134d9 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 114134db push 5 */
  push32((uint32_t)(0x5u));
  /* 114134dd call ebp */
  call_ind((uint32_t)(EBP), 0x114134dfu);
  /* 114134df push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114134e1 push 6 */
  push32((uint32_t)(0x6u));
  /* 114134e3 call ebp */
  call_ind((uint32_t)(EBP), 0x114134e5u);
  /* 114134e5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114134e8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 114134ed push 7 */
  push32((uint32_t)(0x7u));
  /* 114134ef call ebp */
  call_ind((uint32_t)(EBP), 0x114134f1u);
  /* 114134f1 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 114134f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 114134f8 call edi */
  call_ind((uint32_t)(EDI), 0x114134fau);
  /* 114134fa push 0x14 */
  push32((uint32_t)(0x14u));
  /* 114134fc push 6 */
  push32((uint32_t)(0x6u));
  /* 114134fe call edi */
  call_ind((uint32_t)(EDI), 0x11413500u);
  /* 11413500 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11413502 push 0xa */
  push32((uint32_t)(0xau));
  /* 11413504 call edi */
  call_ind((uint32_t)(EDI), 0x11413506u);
  /* 11413506 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11413508 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1141350a call edi */
  call_ind((uint32_t)(EDI), 0x1141350cu);
  /* 1141350c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1141350e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11413510 call edi */
  call_ind((uint32_t)(EDI), 0x11413512u);
  /* 11413512 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11413514 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11413516 call edi */
  call_ind((uint32_t)(EDI), 0x11413518u);
  /* 11413518 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1141351a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1141351c call edi */
  call_ind((uint32_t)(EDI), 0x1141351eu);
  /* 1141351e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413521 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11413523 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11413525 call edi */
  call_ind((uint32_t)(EDI), 0x11413527u);
  /* 11413527 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11413529 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1141352b call edi */
  call_ind((uint32_t)(EDI), 0x1141352du);
  /* 1141352d push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1141352f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11413531 call edi */
  call_ind((uint32_t)(EDI), 0x11413533u);
  /* 11413533 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11413535 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11413537 call edi */
  call_ind((uint32_t)(EDI), 0x11413539u);
  /* 11413539 mov ebx, dword ptr [0x1141b0ec] */
  EBX = (r32((uint32_t)(0x1141b0ec)));
  /* 1141353f push 0 */
  push32((uint32_t)(0x0u));
  /* 11413541 push 0x1141f958 */
  push32((uint32_t)(0x1141f958u));
  /* 11413546 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413548 call ebx */
  call_ind((uint32_t)(EBX), 0x1141354au);
  /* 1141354a push 0 */
  push32((uint32_t)(0x0u));
  /* 1141354c push 0x11421500 */
  push32((uint32_t)(0x11421500u));
  /* 11413551 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413553 call ebx */
  call_ind((uint32_t)(EBX), 0x11413555u);
  /* 11413555 mov ebx, dword ptr [0x1141b0fc] */
  EBX = (r32((uint32_t)(0x1141b0fc)));
  /* 1141355b push 0x1141f888 */
  push32((uint32_t)(0x1141f888u));
  /* 11413560 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413562 call ebx */
  call_ind((uint32_t)(EBX), 0x11413564u);
  /* 11413564 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413567 push 0x1141fce8 */
  push32((uint32_t)(0x1141fce8u));
  /* 1141356c push 0 */
  push32((uint32_t)(0x0u));
  /* 1141356e call ebx */
  call_ind((uint32_t)(EBX), 0x11413570u);
  /* 11413570 push 0x114214c0 */
  push32((uint32_t)(0x114214c0u));
  /* 11413575 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413577 call ebx */
  call_ind((uint32_t)(EBX), 0x11413579u);
  /* 11413579 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1141357e push 0 */
  push32((uint32_t)(0x0u));
  /* 11413580 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413582 call esi */
  call_ind((uint32_t)(ESI), 0x11413584u);
  /* 11413584 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11413589 push 3 */
  push32((uint32_t)(0x3u));
  /* 1141358b push 0 */
  push32((uint32_t)(0x0u));
  /* 1141358d call esi */
  call_ind((uint32_t)(ESI), 0x1141358fu);
  /* 1141358f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11413594 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413596 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413598 call esi */
  call_ind((uint32_t)(ESI), 0x1141359au);
  /* 1141359a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1141359f push 1 */
  push32((uint32_t)(0x1u));
  /* 114135a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114135a3 call esi */
  call_ind((uint32_t)(ESI), 0x114135a5u);
  /* 114135a5 mov ebx, dword ptr [0x1141b100] */
  EBX = (r32((uint32_t)(0x1141b100)));
  /* 114135ab add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114135ae push 0 */
  push32((uint32_t)(0x0u));
  /* 114135b0 call ebx */
  call_ind((uint32_t)(EBX), 0x114135b2u);
  /* 114135b2 mov ecx, 5 */
  ECX = (0x5u);
  /* 114135b7 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114135b9 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 114135bc lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 114135bf lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 114135c2 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 114135c5 push edx */
  push32((uint32_t)(EDX));
  /* 114135c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 114135c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114135ca call esi */
  call_ind((uint32_t)(ESI), 0x114135ccu);
  /* 114135cc push 0 */
  push32((uint32_t)(0x0u));
  /* 114135ce call ebx */
  call_ind((uint32_t)(EBX), 0x114135d0u);
  /* 114135d0 mov ecx, 5 */
  ECX = (0x5u);
  /* 114135d5 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114135d7 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 114135da lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 114135dd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 114135e0 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 114135e3 push eax */
  push32((uint32_t)(EAX));
  /* 114135e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 114135e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114135e8 call esi */
  call_ind((uint32_t)(ESI), 0x114135eau);
  /* 114135ea push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 114135ef push 0 */
  push32((uint32_t)(0x0u));
  /* 114135f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 114135f3 call esi */
  call_ind((uint32_t)(ESI), 0x114135f5u);
  /* 114135f5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 114135fa push 3 */
  push32((uint32_t)(0x3u));
  /* 114135fc push 2 */
  push32((uint32_t)(0x2u));
  /* 114135fe call esi */
  call_ind((uint32_t)(ESI), 0x11413600u);
  /* 11413600 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11413605 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413607 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413609 call esi */
  call_ind((uint32_t)(ESI), 0x1141360bu);
  /* 1141360b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141360e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11413613 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413615 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413617 call esi */
  call_ind((uint32_t)(ESI), 0x11413619u);
  /* 11413619 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1141361e push 4 */
  push32((uint32_t)(0x4u));
  /* 11413620 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413622 call esi */
  call_ind((uint32_t)(ESI), 0x11413624u);
  /* 11413624 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11413629 push 5 */
  push32((uint32_t)(0x5u));
  /* 1141362b push 2 */
  push32((uint32_t)(0x2u));
  /* 1141362d call esi */
  call_ind((uint32_t)(ESI), 0x1141362fu);
  /* 1141362f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11413634 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413636 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413638 call esi */
  call_ind((uint32_t)(ESI), 0x1141363au);
  /* 1141363a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1141363f push 3 */
  push32((uint32_t)(0x3u));
  /* 11413641 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413643 call esi */
  call_ind((uint32_t)(ESI), 0x11413645u);
  /* 11413645 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1141364a push 2 */
  push32((uint32_t)(0x2u));
  /* 1141364c push 3 */
  push32((uint32_t)(0x3u));
  /* 1141364e call esi */
  call_ind((uint32_t)(ESI), 0x11413650u);
  /* 11413650 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413653 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11413658 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141365a push 3 */
  push32((uint32_t)(0x3u));
  /* 1141365c call esi */
  call_ind((uint32_t)(ESI), 0x1141365eu);
  /* 1141365e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11413663 push 4 */
  push32((uint32_t)(0x4u));
  /* 11413665 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413667 call esi */
  call_ind((uint32_t)(ESI), 0x11413669u);
  /* 11413669 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1141366e push 5 */
  push32((uint32_t)(0x5u));
  /* 11413670 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413672 call esi */
  call_ind((uint32_t)(ESI), 0x11413674u);
  /* 11413674 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413676 call ebx */
  call_ind((uint32_t)(EBX), 0x11413678u);
  /* 11413678 push eax */
  push32((uint32_t)(EAX));
  /* 11413679 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141367b push 1 */
  push32((uint32_t)(0x1u));
  /* 1141367d push 1 */
  push32((uint32_t)(0x1u));
  /* 1141367f push 0x1141c73c */
  push32((uint32_t)(0x1141c73cu));
  /* 11413684 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413686 call dword ptr [0x1141b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f8))), 0x1141368cu);
  /* 1141368c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141368f push 0 */
  push32((uint32_t)(0x0u));
  /* 11413691 call ebx */
  call_ind((uint32_t)(EBX), 0x11413693u);
  /* 11413693 push eax */
  push32((uint32_t)(EAX));
  /* 11413694 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413696 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413698 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141369a push 0x1141c730 */
  push32((uint32_t)(0x1141c730u));
  /* 1141369f push 3 */
  push32((uint32_t)(0x3u));
  /* 114136a1 call dword ptr [0x1141b0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f8))), 0x114136a7u);
  /* 114136a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114136aa mov ecx, 0x114207a8 */
  ECX = (0x114207a8u);
  /* 114136af push 0 */
  push32((uint32_t)(0x0u));
  /* 114136b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114136b3 push 0x11421188 */
  push32((uint32_t)(0x11421188u));
  /* 114136b8 push 0x11420138 */
  push32((uint32_t)(0x11420138u));
  /* 114136bd push 0x1141f978 */
  push32((uint32_t)(0x1141f978u));
  /* 114136c2 push 0x1141fd28 */
  push32((uint32_t)(0x1141fd28u));
  /* 114136c7 push 0x1141c718 */
  push32((uint32_t)(0x1141c718u));
  /* 114136cc push 3 */
  push32((uint32_t)(0x3u));
  /* 114136ce push 1 */
  push32((uint32_t)(0x1u));
  /* 114136d0 push 0x11420120 */
  push32((uint32_t)(0x11420120u));
  /* 114136d5 push 0x1141f8c8 */
  push32((uint32_t)(0x1141f8c8u));
  /* 114136da push 0 */
  push32((uint32_t)(0x0u));
  /* 114136dc push 0 */
  push32((uint32_t)(0x0u));
  /* 114136de call 0x11411020 */
  push32(0x114136e3u); f_11411020();
  /* 114136e3 push 3 */
  push32((uint32_t)(0x3u));
  /* 114136e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114136e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114136e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114136eb push 0 */
  push32((uint32_t)(0x0u));
  /* 114136ed push 0x114207a8 */
  push32((uint32_t)(0x114207a8u));
  /* 114136f2 push 0x1141c710 */
  push32((uint32_t)(0x1141c710u));
  /* 114136f7 push 4 */
  push32((uint32_t)(0x4u));
  /* 114136f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 114136fb push 0x1141fcf8 */
  push32((uint32_t)(0x1141fcf8u));
  /* 11413700 push 0x1141f8d7 */
  push32((uint32_t)(0x1141f8d7u));
  /* 11413705 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413707 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413709 mov ecx, 0x1141fd28 */
  ECX = (0x1141fd28u);
  /* 1141370e call 0x11411020 */
  push32(0x11413713u); f_11411020();
  /* 11413713 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413715 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413717 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413719 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141371b push 0 */
  push32((uint32_t)(0x0u));
  /* 1141371d push 0x114207a8 */
  push32((uint32_t)(0x114207a8u));
  /* 11413722 push 0x1141c710 */
  push32((uint32_t)(0x1141c710u));
  /* 11413727 push 5 */
  push32((uint32_t)(0x5u));
  /* 11413729 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141372b push 0x114200b0 */
  push32((uint32_t)(0x114200b0u));
  /* 11413730 push 0x1141f8e6 */
  push32((uint32_t)(0x1141f8e6u));
  /* 11413735 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413737 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413739 mov ecx, 0x1141f978 */
  ECX = (0x1141f978u);
  /* 1141373e call 0x11411020 */
  push32(0x11413743u); f_11411020();
  /* 11413743 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413747 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413749 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141374b push 0 */
  push32((uint32_t)(0x0u));
  /* 1141374d push 0x11420468 */
  push32((uint32_t)(0x11420468u));
  /* 11413752 push 0x1141c708 */
  push32((uint32_t)(0x1141c708u));
  /* 11413757 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413759 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141375b push 0x1141fd20 */
  push32((uint32_t)(0x1141fd20u));
  /* 11413760 push 0x1141f8f5 */
  push32((uint32_t)(0x1141f8f5u));
  /* 11413765 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413767 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413769 mov ecx, 0x11420b28 */
  ECX = (0x11420b28u);
  /* 1141376e call 0x11411020 */
  push32(0x11413773u); f_11411020();
  /* 11413773 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413775 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413777 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141377b push 0 */
  push32((uint32_t)(0x0u));
  /* 1141377d push 0x11420e58 */
  push32((uint32_t)(0x11420e58u));
  /* 11413782 push 0x1141c700 */
  push32((uint32_t)(0x1141c700u));
  /* 11413787 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413789 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141378b push 0x1141f7e8 */
  push32((uint32_t)(0x1141f7e8u));
  /* 11413790 push 0x1141f904 */
  push32((uint32_t)(0x1141f904u));
  /* 11413795 push 4 */
  push32((uint32_t)(0x4u));
  /* 11413797 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413799 mov ecx, 0x1141f4b8 */
  ECX = (0x1141f4b8u);
  /* 1141379e call 0x11411020 */
  push32(0x114137a3u); f_11411020();
  /* 114137a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114137a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114137a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114137a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114137ab push 0x11420138 */
  push32((uint32_t)(0x11420138u));
  /* 114137b0 push 0x11420b28 */
  push32((uint32_t)(0x11420b28u));
  /* 114137b5 push 0x1141c6f4 */
  push32((uint32_t)(0x1141c6f4u));
  /* 114137ba push 3 */
  push32((uint32_t)(0x3u));
  /* 114137bc push 1 */
  push32((uint32_t)(0x1u));
  /* 114137be push 0x114200c0 */
  push32((uint32_t)(0x114200c0u));
  /* 114137c3 push 0x1141f913 */
  push32((uint32_t)(0x1141f913u));
  /* 114137c8 push 5 */
  push32((uint32_t)(0x5u));
  /* 114137ca push 3 */
  push32((uint32_t)(0x3u));
  /* 114137cc mov ecx, 0x11420468 */
  ECX = (0x11420468u);
  /* 114137d1 call 0x11411020 */
  push32(0x114137d6u); f_11411020();
  /* 114137d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114137d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114137da push 0 */
  push32((uint32_t)(0x0u));
  /* 114137dc push 0 */
  push32((uint32_t)(0x0u));
  /* 114137de push 0x114207a8 */
  push32((uint32_t)(0x114207a8u));
  /* 114137e3 push 0x11420468 */
  push32((uint32_t)(0x11420468u));
  /* 114137e8 push 0x1141c6e8 */
  push32((uint32_t)(0x1141c6e8u));
  /* 114137ed push 3 */
  push32((uint32_t)(0x3u));
  /* 114137ef push 1 */
  push32((uint32_t)(0x1u));
  /* 114137f1 push 0x114200c8 */
  push32((uint32_t)(0x114200c8u));
  /* 114137f6 push 0x1141f922 */
  push32((uint32_t)(0x1141f922u));
  /* 114137fb push 6 */
  push32((uint32_t)(0x6u));
  /* 114137fd push 3 */
  push32((uint32_t)(0x3u));
  /* 114137ff mov ecx, 0x11420138 */
  ECX = (0x11420138u);
  /* 11413804 call 0x11411020 */
  push32(0x11413809u); f_11411020();
  /* 11413809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141380b push 0 */
  push32((uint32_t)(0x0u));
  /* 1141380d push 0 */
  push32((uint32_t)(0x0u));
  /* 1141380f push 0 */
  push32((uint32_t)(0x0u));
  /* 11413811 push 0x11421188 */
  push32((uint32_t)(0x11421188u));
  /* 11413816 push 0x1141f4b8 */
  push32((uint32_t)(0x1141f4b8u));
  /* 1141381b push 0x1141c6dc */
  push32((uint32_t)(0x1141c6dcu));
  /* 11413820 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413822 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413824 push 0x11420130 */
  push32((uint32_t)(0x11420130u));
  /* 11413829 push 0x1141f931 */
  push32((uint32_t)(0x1141f931u));
  /* 1141382e push 7 */
  push32((uint32_t)(0x7u));
  /* 11413830 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413832 mov ecx, 0x11420e58 */
  ECX = (0x11420e58u);
  /* 11413837 call 0x11411020 */
  push32(0x1141383cu); f_11411020();
  /* 1141383c push 0 */
  push32((uint32_t)(0x0u));
  /* 1141383e push 0 */
  push32((uint32_t)(0x0u));
  /* 11413840 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413842 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413844 push 0x114207a8 */
  push32((uint32_t)(0x114207a8u));
  /* 11413849 push 0x11420e58 */
  push32((uint32_t)(0x11420e58u));
  /* 1141384e push 0x1141c6d0 */
  push32((uint32_t)(0x1141c6d0u));
  /* 11413853 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413855 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413857 push 0x11420128 */
  push32((uint32_t)(0x11420128u));
  /* 1141385c push 0x1141f940 */
  push32((uint32_t)(0x1141f940u));
  /* 11413861 push 8 */
  push32((uint32_t)(0x8u));
  /* 11413863 push 3 */
  push32((uint32_t)(0x3u));
  /* 11413865 mov ecx, 0x11421188 */
  ECX = (0x11421188u);
  /* 1141386a call 0x11411020 */
  push32(0x1141386fu); f_11411020();
  /* 1141386f push 0x1141c6c8 */
  push32((uint32_t)(0x1141c6c8u));
  /* 11413874 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x1141387au);
  /* 1141387a mov ebx, dword ptr [0x1141b108] */
  EBX = (r32((uint32_t)(0x1141b108)));
  /* 11413880 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413882 push 2 */
  push32((uint32_t)(0x2u));
  /* 11413884 push 0x1141fcf8 */
  push32((uint32_t)(0x1141fcf8u));
  /* 11413889 call ebx */
  call_ind((uint32_t)(EBX), 0x1141388bu);
  /* 1141388b push 2 */
  push32((uint32_t)(0x2u));
  /* 1141388d push 2 */
  push32((uint32_t)(0x2u));
  /* 1141388f push 0x114200b0 */
  push32((uint32_t)(0x114200b0u));
  /* 11413894 call ebx */
  call_ind((uint32_t)(EBX), 0x11413896u);
  /* 11413896 mov ebx, dword ptr [0x1141b10c] */
  EBX = (r32((uint32_t)(0x1141b10c)));
  /* 1141389c push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1141389e call ebx */
  call_ind((uint32_t)(EBX), 0x114138a0u);
  /* 114138a0 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 114138a2 call ebx */
  call_ind((uint32_t)(EBX), 0x114138a4u);
  /* 114138a4 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 114138a6 call ebx */
  call_ind((uint32_t)(EBX), 0x114138a8u);
  /* 114138a8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 114138aa call ebx */
  call_ind((uint32_t)(EBX), 0x114138acu);
  /* 114138ac mov ebx, dword ptr [0x1141b104] */
  EBX = (r32((uint32_t)(0x1141b104)));
  /* 114138b2 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 114138b4 call ebx */
  call_ind((uint32_t)(EBX), 0x114138b6u);
  /* 114138b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 114138b8 call ebx */
  call_ind((uint32_t)(EBX), 0x114138bau);
  /* 114138ba add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114138bd:;
  /* 114138bd push 0 */
  push32((uint32_t)(0x0u));
  /* 114138bf push 0x11421188 */
  push32((uint32_t)(0x11421188u));
  /* 114138c4 push 0x11420138 */
  push32((uint32_t)(0x11420138u));
  /* 114138c9 push 0x1141f978 */
  push32((uint32_t)(0x1141f978u));
  /* 114138ce push 0x1141fd28 */
  push32((uint32_t)(0x1141fd28u));
  /* 114138d3 push 0x1141c718 */
  push32((uint32_t)(0x1141c718u));
  /* 114138d8 push 0x11420120 */
  push32((uint32_t)(0x11420120u));
  /* 114138dd mov ecx, 0x114207a8 */
  ECX = (0x114207a8u);
  /* 114138e2 mov dword ptr [0x1141c064], 0x114207a8 */
  w32((uint32_t)(0x1141c064), (0x114207a8u));
  /* 114138ec mov dword ptr [0x1141c068], 0x1141fd28 */
  w32((uint32_t)(0x1141c068), (0x1141fd28u));
  /* 114138f6 mov dword ptr [0x1141c06c], 0x1141f978 */
  w32((uint32_t)(0x1141c06c), (0x1141f978u));
  /* 11413900 mov dword ptr [0x1141c070], 0x11420b28 */
  w32((uint32_t)(0x1141c070), (0x11420b28u));
  /* 1141390a mov dword ptr [0x1141c074], 0x1141f4b8 */
  w32((uint32_t)(0x1141c074), (0x1141f4b8u));
  /* 11413914 mov dword ptr [0x1141c078], 0x11420468 */
  w32((uint32_t)(0x1141c078), (0x11420468u));
  /* 1141391e mov dword ptr [0x1141c07c], 0x11420138 */
  w32((uint32_t)(0x1141c07c), (0x11420138u));
  /* 11413928 mov dword ptr [0x1141c080], 0x11420e58 */
  w32((uint32_t)(0x1141c080), (0x11420e58u));
  /* 11413932 mov dword ptr [0x1141c084], 0x11421188 */
  w32((uint32_t)(0x1141c084), (0x11421188u));
  /* 1141393c call 0x114111d0 */
  push32(0x11413941u); f_114111d0();
  /* 11413941 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413943 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413945 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413947 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413949 push 0x114207a8 */
  push32((uint32_t)(0x114207a8u));
  /* 1141394e push 0x1141c710 */
  push32((uint32_t)(0x1141c710u));
  /* 11413953 push 0x1141fcf8 */
  push32((uint32_t)(0x1141fcf8u));
  /* 11413958 mov ecx, 0x1141fd28 */
  ECX = (0x1141fd28u);
  /* 1141395d call 0x114111d0 */
  push32(0x11413962u); f_114111d0();
  /* 11413962 mov ebx, dword ptr [0x1141b178] */
  EBX = (r32((uint32_t)(0x1141b178)));
  /* 11413968 push 0x114214e0 */
  push32((uint32_t)(0x114214e0u));
  /* 1141396d call ebx */
  call_ind((uint32_t)(EBX), 0x1141396fu);
  /* 1141396f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413972 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413975 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11413978 push ecx */
  push32((uint32_t)(ECX));
  /* 11413979 push 0x114207a0 */
  push32((uint32_t)(0x114207a0u));
  /* 1141397e call ebx */
  call_ind((uint32_t)(EBX), 0x11413980u);
  /* 11413980 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413983 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413986 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11413989 push edx */
  push32((uint32_t)(EDX));
  /* 1141398a push 0x1141fd08 */
  push32((uint32_t)(0x1141fd08u));
  /* 1141398f call ebx */
  call_ind((uint32_t)(EBX), 0x11413991u);
  /* 11413991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413994 mov ecx, 0x1141fd28 */
  ECX = (0x1141fd28u);
  /* 11413999 push eax */
  push32((uint32_t)(EAX));
  /* 1141399a call 0x11412450 */
  push32(0x1141399fu); f_11412450();
  /* 1141399f push 0 */
  push32((uint32_t)(0x0u));
  /* 114139a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 114139a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114139a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114139a7 push 0x114207a8 */
  push32((uint32_t)(0x114207a8u));
  /* 114139ac push 0x1141c710 */
  push32((uint32_t)(0x1141c710u));
  /* 114139b1 push 0x114200b0 */
  push32((uint32_t)(0x114200b0u));
  /* 114139b6 mov ecx, 0x1141f978 */
  ECX = (0x1141f978u);
  /* 114139bb call 0x114111d0 */
  push32(0x114139c0u); f_114111d0();
  /* 114139c0 push 0x114200b8 */
  push32((uint32_t)(0x114200b8u));
  /* 114139c5 call ebx */
  call_ind((uint32_t)(EBX), 0x114139c7u);
  /* 114139c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114139ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114139cd sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 114139d0 push eax */
  push32((uint32_t)(EAX));
  /* 114139d1 push 0x1141f800 */
  push32((uint32_t)(0x1141f800u));
  /* 114139d6 call ebx */
  call_ind((uint32_t)(EBX), 0x114139d8u);
  /* 114139d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114139db cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114139de sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 114139e1 push ecx */
  push32((uint32_t)(ECX));
  /* 114139e2 push 0x114214f8 */
  push32((uint32_t)(0x114214f8u));
  /* 114139e7 call ebx */
  call_ind((uint32_t)(EBX), 0x114139e9u);
  /* 114139e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114139ec mov ecx, 0x1141f978 */
  ECX = (0x1141f978u);
  /* 114139f1 push eax */
  push32((uint32_t)(EAX));
  /* 114139f2 call 0x11412450 */
  push32(0x114139f7u); f_11412450();
  /* 114139f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114139f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114139fb push 0 */
  push32((uint32_t)(0x0u));
  /* 114139fd push 0 */
  push32((uint32_t)(0x0u));
  /* 114139ff push 0x11420468 */
  push32((uint32_t)(0x11420468u));
  /* 11413a04 push 0x1141c708 */
  push32((uint32_t)(0x1141c708u));
  /* 11413a09 push 0x1141fd20 */
  push32((uint32_t)(0x1141fd20u));
  /* 11413a0e mov ecx, 0x11420b28 */
  ECX = (0x11420b28u);
  /* 11413a13 call 0x114111d0 */
  push32(0x11413a18u); f_114111d0();
  /* 11413a18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413a1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11413a1c push 3 */
  push32((uint32_t)(0x3u));
  /* 11413a1e mov ecx, 0x11420b28 */
  ECX = (0x11420b28u);
  /* 11413a23 call 0x11412450 */
  push32(0x11413a28u); f_11412450();
  /* 11413a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a30 push 0x11420e58 */
  push32((uint32_t)(0x11420e58u));
  /* 11413a35 push 0x1141c700 */
  push32((uint32_t)(0x1141c700u));
  /* 11413a3a push 0x1141f7e8 */
  push32((uint32_t)(0x1141f7e8u));
  /* 11413a3f mov ecx, 0x1141f4b8 */
  ECX = (0x1141f4b8u);
  /* 11413a44 call 0x114111d0 */
  push32(0x11413a49u); f_114111d0();
  /* 11413a49 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413a4b push 1 */
  push32((uint32_t)(0x1u));
  /* 11413a4d push 3 */
  push32((uint32_t)(0x3u));
  /* 11413a4f mov ecx, 0x1141f4b8 */
  ECX = (0x1141f4b8u);
  /* 11413a54 call 0x11412450 */
  push32(0x11413a59u); f_11412450();
  /* 11413a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a5f push 0x11420138 */
  push32((uint32_t)(0x11420138u));
  /* 11413a64 push 0x11420b28 */
  push32((uint32_t)(0x11420b28u));
  /* 11413a69 push 0x1141c6f4 */
  push32((uint32_t)(0x1141c6f4u));
  /* 11413a6e push 0x114200c0 */
  push32((uint32_t)(0x114200c0u));
  /* 11413a73 mov ecx, 0x11420468 */
  ECX = (0x11420468u);
  /* 11413a78 call 0x114111d0 */
  push32(0x11413a7du); f_114111d0();
  /* 11413a7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11413a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11413a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a83 mov ecx, 0x11420468 */
  ECX = (0x11420468u);
  /* 11413a88 call 0x11412450 */
  push32(0x11413a8du); f_11412450();
  /* 11413a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413a93 push 0x114207a8 */
  push32((uint32_t)(0x114207a8u));
  /* 11413a98 push 0x11420468 */
  push32((uint32_t)(0x11420468u));
  /* 11413a9d push 0x1141c6e8 */
  push32((uint32_t)(0x1141c6e8u));
  /* 11413aa2 push 0x114200c8 */
  push32((uint32_t)(0x114200c8u));
  /* 11413aa7 mov ecx, 0x11420138 */
  ECX = (0x11420138u);
  /* 11413aac call 0x114111d0 */
  push32(0x11413ab1u); f_114111d0();
  /* 11413ab1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413ab7 mov ecx, 0x11420138 */
  ECX = (0x11420138u);
  /* 11413abc call 0x11412450 */
  push32(0x11413ac1u); f_11412450();
  /* 11413ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413ac7 push 0x11421188 */
  push32((uint32_t)(0x11421188u));
  /* 11413acc push 0x1141f4b8 */
  push32((uint32_t)(0x1141f4b8u));
  /* 11413ad1 push 0x1141c6dc */
  push32((uint32_t)(0x1141c6dcu));
  /* 11413ad6 push 0x11420130 */
  push32((uint32_t)(0x11420130u));
  /* 11413adb mov ecx, 0x11420e58 */
  ECX = (0x11420e58u);
  /* 11413ae0 call 0x114111d0 */
  push32(0x11413ae5u); f_114111d0();
  /* 11413ae5 push 0x114214e0 */
  push32((uint32_t)(0x114214e0u));
  /* 11413aea call ebx */
  call_ind((uint32_t)(EBX), 0x11413aecu);
  /* 11413aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413aef cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413af2 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11413af5 push edx */
  push32((uint32_t)(EDX));
  /* 11413af6 push 0x114207a0 */
  push32((uint32_t)(0x114207a0u));
  /* 11413afb call ebx */
  call_ind((uint32_t)(EBX), 0x11413afdu);
  /* 11413afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413b00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11413b03 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11413b06 push eax */
  push32((uint32_t)(EAX));
  /* 11413b07 push 0x1141fd08 */
  push32((uint32_t)(0x1141fd08u));
  /* 11413b0c call ebx */
  call_ind((uint32_t)(EBX), 0x11413b0eu);
  /* 11413b0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413b11 mov ecx, 0x11420e58 */
  ECX = (0x11420e58u);
  /* 11413b16 push eax */
  push32((uint32_t)(EAX));
  /* 11413b17 call 0x11412450 */
  push32(0x11413b1cu); f_11412450();
  /* 11413b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b22 push 0x114207a8 */
  push32((uint32_t)(0x114207a8u));
  /* 11413b27 push 0x11420e58 */
  push32((uint32_t)(0x11420e58u));
  /* 11413b2c push 0x1141c6d0 */
  push32((uint32_t)(0x1141c6d0u));
  /* 11413b31 push 0x11420128 */
  push32((uint32_t)(0x11420128u));
  /* 11413b36 mov ecx, 0x11421188 */
  ECX = (0x11421188u);
  /* 11413b3b call 0x114111d0 */
  push32(0x11413b40u); f_114111d0();
  /* 11413b40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413b42 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b46 mov ecx, 0x11421188 */
  ECX = (0x11421188u);
  /* 11413b4b call 0x11412450 */
  push32(0x11413b50u); f_11412450();
  /* 11413b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b52 mov ecx, 0x1141fd28 */
  ECX = (0x1141fd28u);
  /* 11413b57 call 0x114115c0 */
  push32(0x11413b5cu); f_114115c0();
  /* 11413b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b5e mov ecx, 0x1141f978 */
  ECX = (0x1141f978u);
  /* 11413b63 call 0x114115c0 */
  push32(0x11413b68u); f_114115c0();
  /* 11413b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b6a mov ecx, 0x11420b28 */
  ECX = (0x11420b28u);
  /* 11413b6f call 0x114115c0 */
  push32(0x11413b74u); f_114115c0();
  /* 11413b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b76 mov ecx, 0x1141f4b8 */
  ECX = (0x1141f4b8u);
  /* 11413b7b call 0x114115c0 */
  push32(0x11413b80u); f_114115c0();
  /* 11413b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b82 mov ecx, 0x11420468 */
  ECX = (0x11420468u);
  /* 11413b87 call 0x114115c0 */
  push32(0x11413b8cu); f_114115c0();
  /* 11413b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b8e mov ecx, 0x11420138 */
  ECX = (0x11420138u);
  /* 11413b93 call 0x114115c0 */
  push32(0x11413b98u); f_114115c0();
  /* 11413b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413b9a mov ecx, 0x11420e58 */
  ECX = (0x11420e58u);
  /* 11413b9f call 0x114115c0 */
  push32(0x11413ba4u); f_114115c0();
  /* 11413ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413ba6 mov ecx, 0x11421188 */
  ECX = (0x11421188u);
  /* 11413bab call 0x114115c0 */
  push32(0x11413bb0u); f_114115c0();
  /* 11413bb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11413bb2 call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413bb8u);
  /* 11413bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413bbb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413bbd je 0x11413bd6 */
  if (C.zf) goto L_11413bd6;
  /* 11413bbf mov ecx, 0x114207a8 */
  ECX = (0x114207a8u);
  /* 11413bc4 call 0x11411d00 */
  push32(0x11413bc9u); f_11411d00();
  /* 11413bc9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413bcb je 0x11413bd6 */
  if (C.zf) goto L_11413bd6;
  /* 11413bcd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11413bcf push 0xa */
  push32((uint32_t)(0xau));
  /* 11413bd1 call edi */
  call_ind((uint32_t)(EDI), 0x11413bd3u);
  /* 11413bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413bd6:;
  /* 11413bd6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11413bd8 call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413bdeu);
  /* 11413bde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413be1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413be3 je 0x11413bfc */
  if (C.zf) goto L_11413bfc;
  /* 11413be5 mov ecx, 0x1141fd28 */
  ECX = (0x1141fd28u);
  /* 11413bea call 0x11411d00 */
  push32(0x11413befu); f_11411d00();
  /* 11413bef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413bf1 je 0x11413bfc */
  if (C.zf) goto L_11413bfc;
  /* 11413bf3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11413bf5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11413bf7 call edi */
  call_ind((uint32_t)(EDI), 0x11413bf9u);
  /* 11413bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413bfc:;
  /* 11413bfc push 0xc */
  push32((uint32_t)(0xcu));
  /* 11413bfe call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413c04u);
  /* 11413c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413c07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413c09 je 0x11413c22 */
  if (C.zf) goto L_11413c22;
  /* 11413c0b mov ecx, 0x1141f978 */
  ECX = (0x1141f978u);
  /* 11413c10 call 0x11411d00 */
  push32(0x11413c15u); f_11411d00();
  /* 11413c15 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413c17 je 0x11413c22 */
  if (C.zf) goto L_11413c22;
  /* 11413c19 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11413c1b push 0xc */
  push32((uint32_t)(0xcu));
  /* 11413c1d call edi */
  call_ind((uint32_t)(EDI), 0x11413c1fu);
  /* 11413c1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413c22:;
  /* 11413c22 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11413c24 call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413c2au);
  /* 11413c2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413c2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413c2f je 0x11413c48 */
  if (C.zf) goto L_11413c48;
  /* 11413c31 mov ecx, 0x11420b28 */
  ECX = (0x11420b28u);
  /* 11413c36 call 0x11411d00 */
  push32(0x11413c3bu); f_11411d00();
  /* 11413c3b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413c3d je 0x11413c48 */
  if (C.zf) goto L_11413c48;
  /* 11413c3f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11413c41 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11413c43 call edi */
  call_ind((uint32_t)(EDI), 0x11413c45u);
  /* 11413c45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413c48:;
  /* 11413c48 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11413c4a call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413c50u);
  /* 11413c50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413c53 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413c55 je 0x11413c6e */
  if (C.zf) goto L_11413c6e;
  /* 11413c57 mov ecx, 0x1141f4b8 */
  ECX = (0x1141f4b8u);
  /* 11413c5c call 0x11411d00 */
  push32(0x11413c61u); f_11411d00();
  /* 11413c61 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413c63 je 0x11413c6e */
  if (C.zf) goto L_11413c6e;
  /* 11413c65 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11413c67 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11413c69 call edi */
  call_ind((uint32_t)(EDI), 0x11413c6bu);
  /* 11413c6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413c6e:;
  /* 11413c6e push 0xf */
  push32((uint32_t)(0xfu));
  /* 11413c70 call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413c76u);
  /* 11413c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413c79 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413c7b je 0x11413c94 */
  if (C.zf) goto L_11413c94;
  /* 11413c7d mov ecx, 0x11420468 */
  ECX = (0x11420468u);
  /* 11413c82 call 0x11411d00 */
  push32(0x11413c87u); f_11411d00();
  /* 11413c87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413c89 je 0x11413c94 */
  if (C.zf) goto L_11413c94;
  /* 11413c8b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11413c8d push 0xf */
  push32((uint32_t)(0xfu));
  /* 11413c8f call edi */
  call_ind((uint32_t)(EDI), 0x11413c91u);
  /* 11413c91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413c94:;
  /* 11413c94 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11413c96 call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413c9cu);
  /* 11413c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413c9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413ca1 je 0x11413cba */
  if (C.zf) goto L_11413cba;
  /* 11413ca3 mov ecx, 0x11420138 */
  ECX = (0x11420138u);
  /* 11413ca8 call 0x11411d00 */
  push32(0x11413cadu); f_11411d00();
  /* 11413cad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413caf je 0x11413cba */
  if (C.zf) goto L_11413cba;
  /* 11413cb1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11413cb3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11413cb5 call edi */
  call_ind((uint32_t)(EDI), 0x11413cb7u);
  /* 11413cb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413cba:;
  /* 11413cba push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11413cbc call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413cc2u);
  /* 11413cc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413cc5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413cc7 je 0x11413ce0 */
  if (C.zf) goto L_11413ce0;
  /* 11413cc9 mov ecx, 0x11420e58 */
  ECX = (0x11420e58u);
  /* 11413cce call 0x11411d00 */
  push32(0x11413cd3u); f_11411d00();
  /* 11413cd3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413cd5 je 0x11413ce0 */
  if (C.zf) goto L_11413ce0;
  /* 11413cd7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11413cd9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11413cdb call edi */
  call_ind((uint32_t)(EDI), 0x11413cddu);
  /* 11413cdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413ce0:;
  /* 11413ce0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11413ce2 call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413ce8u);
  /* 11413ce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413ceb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413ced je 0x11413d06 */
  if (C.zf) goto L_11413d06;
  /* 11413cef mov ecx, 0x11421188 */
  ECX = (0x11421188u);
  /* 11413cf4 call 0x11411d00 */
  push32(0x11413cf9u); f_11411d00();
  /* 11413cf9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413cfb je 0x11413d06 */
  if (C.zf) goto L_11413d06;
  /* 11413cfd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11413cff push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11413d01 call edi */
  call_ind((uint32_t)(EDI), 0x11413d03u);
  /* 11413d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413d06:;
  /* 11413d06 push 0x1141fcf8 */
  push32((uint32_t)(0x1141fcf8u));
  /* 11413d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11413d0d call dword ptr [0x1141b100] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b100))), 0x11413d13u);
  /* 11413d13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413d16 lea ecx, [eax + eax*2 + 5] */
  ECX = ((uint32_t)(EAX + EAX*2 + 0x5));
  /* 11413d1a push ecx */
  push32((uint32_t)(ECX));
  /* 11413d1b mov ecx, 0x114200e0 */
  ECX = (0x114200e0u);
  /* 11413d20 call 0x11412780 */
  push32(0x11413d25u); f_11412780();
  /* 11413d25 push 0x114200b0 */
  push32((uint32_t)(0x114200b0u));
  /* 11413d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11413d2c call dword ptr [0x1141b100] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b100))), 0x11413d32u);
  /* 11413d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413d35 lea edx, [eax + eax*2 + 5] */
  EDX = ((uint32_t)(EAX + EAX*2 + 0x5));
  /* 11413d39 mov ecx, 0x11420ae8 */
  ECX = (0x11420ae8u);
  /* 11413d3e push edx */
  push32((uint32_t)(EDX));
  /* 11413d3f call 0x11412780 */
  push32(0x11413d44u); f_11412780();
  /* 11413d44 push 0x114214c8 */
  push32((uint32_t)(0x114214c8u));
  /* 11413d49 push 0x114214d8 */
  push32((uint32_t)(0x114214d8u));
  /* 11413d4e push 0x114214e8 */
  push32((uint32_t)(0x114214e8u));
  /* 11413d53 push 0x114214f0 */
  push32((uint32_t)(0x114214f0u));
  /* 11413d58 mov ecx, 0x114200e0 */
  ECX = (0x114200e0u);
  /* 11413d5d call 0x11412630 */
  push32(0x11413d62u); f_11412630();
  /* 11413d62 push 0x11421508 */
  push32((uint32_t)(0x11421508u));
  /* 11413d67 push 0x1141f850 */
  push32((uint32_t)(0x1141f850u));
  /* 11413d6c push 0x1141f840 */
  push32((uint32_t)(0x1141f840u));
  /* 11413d71 push 0x1141f830 */
  push32((uint32_t)(0x1141f830u));
  /* 11413d76 mov ecx, 0x11420ae8 */
  ECX = (0x11420ae8u);
  /* 11413d7b call 0x11412630 */
  push32(0x11413d80u); f_11412630();
  /* 11413d80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413d82 call dword ptr [0x1141b144] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b144))), 0x11413d88u);
  /* 11413d88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413d8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413d8d je 0x11413dfa */
  if (C.zf) goto L_11413dfa;
  /* 11413d8f mov ecx, 0x1141fd28 */
  ECX = (0x1141fd28u);
  /* 11413d94 call 0x11411220 */
  push32(0x11413d99u); f_11411220();
  /* 11413d99 mov ecx, 0x1141f978 */
  ECX = (0x1141f978u);
  /* 11413d9e call 0x11411220 */
  push32(0x11413da3u); f_11411220();
  /* 11413da3 mov ecx, 0x11420b28 */
  ECX = (0x11420b28u);
  /* 11413da8 call 0x11411220 */
  push32(0x11413dadu); f_11411220();
  /* 11413dad mov ecx, 0x1141f4b8 */
  ECX = (0x1141f4b8u);
  /* 11413db2 call 0x11411220 */
  push32(0x11413db7u); f_11411220();
  /* 11413db7 mov ecx, 0x11420468 */
  ECX = (0x11420468u);
  /* 11413dbc call 0x11411220 */
  push32(0x11413dc1u); f_11411220();
  /* 11413dc1 mov ecx, 0x11420138 */
  ECX = (0x11420138u);
  /* 11413dc6 call 0x11411220 */
  push32(0x11413dcbu); f_11411220();
  /* 11413dcb mov ecx, 0x11420e58 */
  ECX = (0x11420e58u);
  /* 11413dd0 call 0x11411220 */
  push32(0x11413dd5u); f_11411220();
  /* 11413dd5 mov ecx, 0x11421188 */
  ECX = (0x11421188u);
  /* 11413dda call 0x11411220 */
  push32(0x11413ddfu); f_11411220();
  /* 11413ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 11413de1 call dword ptr [0x1141b100] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b100))), 0x11413de7u);
  /* 11413de7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11413dea lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11413ded lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11413df0 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11413df2 push eax */
  push32((uint32_t)(EAX));
  /* 11413df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11413df5 call edi */
  call_ind((uint32_t)(EDI), 0x11413df7u);
  /* 11413df7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413dfa:;
  /* 11413dfa push 0xb */
  push32((uint32_t)(0xbu));
  /* 11413dfc call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x11413e02u);
  /* 11413e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413e05 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413e07 je 0x11413e80 */
  if (C.zf) goto L_11413e80;
  /* 11413e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413e0b push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 11413e10 push 0x1141f968 */
  push32((uint32_t)(0x1141f968u));
  /* 11413e15 call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x11413e1bu);
  /* 11413e1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413e1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11413e20 je 0x11413e80 */
  if (C.zf) goto L_11413e80;
  /* 11413e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413e24 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11413e26 call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11413e2cu);
  /* 11413e2c push 0x1141c6c0 */
  push32((uint32_t)(0x1141c6c0u));
  /* 11413e31 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11413e37u);
  /* 11413e37 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11413e39 call dword ptr [0x1141b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b104))), 0x11413e3fu);
  /* 11413e3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413e42 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11413e44 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11413e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413e48 call dword ptr [0x1141b100] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b100))), 0x11413e4eu);
  /* 11413e4e mov ecx, 5 */
  ECX = (0x5u);
  /* 11413e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413e56 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11413e58 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11413e5b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11413e5e lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11413e61 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11413e64 push ecx */
  push32((uint32_t)(ECX));
  /* 11413e65 push 5 */
  push32((uint32_t)(0x5u));
  /* 11413e67 push 0x1141f808 */
  push32((uint32_t)(0x1141f808u));
  /* 11413e6c push 0x1141f810 */
  push32((uint32_t)(0x1141f810u));
  /* 11413e71 push 0x1141f818 */
  push32((uint32_t)(0x1141f818u));
  /* 11413e76 mov ecx, 0x114200e0 */
  ECX = (0x114200e0u);
  /* 11413e7b call 0x11412560 */
  push32(0x11413e80u); f_11412560();
L_11413e80:;
  /* 11413e80 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11413e82 call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x11413e88u);
  /* 11413e88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413e8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413e8d je 0x11413f06 */
  if (C.zf) goto L_11413f06;
  /* 11413e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11413e91 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 11413e96 push 0x114200d0 */
  push32((uint32_t)(0x114200d0u));
  /* 11413e9b call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x11413ea1u);
  /* 11413ea1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413ea4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11413ea6 je 0x11413f06 */
  if (C.zf) goto L_11413f06;
  /* 11413ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413eaa push 0xc */
  push32((uint32_t)(0xcu));
  /* 11413eac call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11413eb2u);
  /* 11413eb2 push 0x1141c6b8 */
  push32((uint32_t)(0x1141c6b8u));
  /* 11413eb7 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11413ebdu);
  /* 11413ebd push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11413ebf call dword ptr [0x1141b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b104))), 0x11413ec5u);
  /* 11413ec5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413ec8 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11413eca push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11413ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 11413ece call dword ptr [0x1141b100] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b100))), 0x11413ed4u);
  /* 11413ed4 mov ecx, 5 */
  ECX = (0x5u);
  /* 11413ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413edc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11413ede lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11413ee1 mov ecx, 0x11420ae8 */
  ECX = (0x11420ae8u);
  /* 11413ee6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11413ee9 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11413eec shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11413eef push edx */
  push32((uint32_t)(EDX));
  /* 11413ef0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11413ef2 push 0x1141fce0 */
  push32((uint32_t)(0x1141fce0u));
  /* 11413ef7 push 0x1141fcd8 */
  push32((uint32_t)(0x1141fcd8u));
  /* 11413efc push 0x1141fcd0 */
  push32((uint32_t)(0x1141fcd0u));
  /* 11413f01 call 0x11412560 */
  push32(0x11413f06u); f_11412560();
L_11413f06:;
  /* 11413f06 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11413f08 call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x11413f0eu);
  /* 11413f0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413f11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413f13 je 0x11413f4e */
  if (C.zf) goto L_11413f4e;
  /* 11413f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413f17 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 11413f1c push 0x1141fd10 */
  push32((uint32_t)(0x1141fd10u));
  /* 11413f21 call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x11413f27u);
  /* 11413f27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413f2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11413f2c je 0x11413f4e */
  if (C.zf) goto L_11413f4e;
  /* 11413f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11413f30 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11413f32 call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11413f38u);
  /* 11413f38 push 0x1141c6b0 */
  push32((uint32_t)(0x1141c6b0u));
  /* 11413f3d call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11413f43u);
  /* 11413f43 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11413f45 call dword ptr [0x1141b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b104))), 0x11413f4bu);
  /* 11413f4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413f4e:;
  /* 11413f4e push 0xe */
  push32((uint32_t)(0xeu));
  /* 11413f50 call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x11413f56u);
  /* 11413f56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413f59 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413f5b je 0x11413f96 */
  if (C.zf) goto L_11413f96;
  /* 11413f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11413f5f push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 11413f64 push 0x11420798 */
  push32((uint32_t)(0x11420798u));
  /* 11413f69 call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x11413f6fu);
  /* 11413f6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11413f74 je 0x11413f96 */
  if (C.zf) goto L_11413f96;
  /* 11413f76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413f78 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11413f7a call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11413f80u);
  /* 11413f80 push 0x1141c6a8 */
  push32((uint32_t)(0x1141c6a8u));
  /* 11413f85 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11413f8bu);
  /* 11413f8b push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11413f8d call dword ptr [0x1141b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b104))), 0x11413f93u);
  /* 11413f93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413f96:;
  /* 11413f96 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11413f98 call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x11413f9eu);
  /* 11413f9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413fa1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413fa3 je 0x11413fe6 */
  if (C.zf) goto L_11413fe6;
  /* 11413fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413fa7 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 11413fac push 0x1141fcf0 */
  push32((uint32_t)(0x1141fcf0u));
  /* 11413fb1 call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x11413fb7u);
  /* 11413fb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413fba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11413fbc je 0x11413fe6 */
  if (C.zf) goto L_11413fe6;
  /* 11413fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11413fc0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11413fc2 call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11413fc8u);
  /* 11413fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413fcb push 0x1141f913 */
  push32((uint32_t)(0x1141f913u));
  /* 11413fd0 push 0x1141c6a0 */
  push32((uint32_t)(0x1141c6a0u));
  /* 11413fd5 call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x11413fdbu);
  /* 11413fdb push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11413fdd call dword ptr [0x1141b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b104))), 0x11413fe3u);
  /* 11413fe3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11413fe6:;
  /* 11413fe6 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11413fe8 call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x11413feeu);
  /* 11413fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11413ff1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11413ff3 je 0x11414036 */
  if (C.zf) goto L_11414036;
  /* 11413ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11413ff7 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 11413ffc push 0x114214d0 */
  push32((uint32_t)(0x114214d0u));
  /* 11414001 call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x11414007u);
  /* 11414007 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141400a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141400c je 0x11414036 */
  if (C.zf) goto L_11414036;
  /* 1141400e push 0 */
  push32((uint32_t)(0x0u));
  /* 11414010 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11414012 call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11414018u);
  /* 11414018 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141401b push 0x1141f922 */
  push32((uint32_t)(0x1141f922u));
  /* 11414020 push 0x1141c6a0 */
  push32((uint32_t)(0x1141c6a0u));
  /* 11414025 call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x1141402bu);
  /* 1141402b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1141402d call dword ptr [0x1141b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b104))), 0x11414033u);
  /* 11414033 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11414036:;
  /* 11414036 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11414038 call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x1141403eu);
  /* 1141403e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414041 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414043 je 0x11414086 */
  if (C.zf) goto L_11414086;
  /* 11414045 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414047 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 1141404c push 0x1141f7f0 */
  push32((uint32_t)(0x1141f7f0u));
  /* 11414051 call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x11414057u);
  /* 11414057 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141405a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141405c je 0x11414086 */
  if (C.zf) goto L_11414086;
  /* 1141405e push 0 */
  push32((uint32_t)(0x0u));
  /* 11414060 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11414062 call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11414068u);
  /* 11414068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141406b push 0x1141f931 */
  push32((uint32_t)(0x1141f931u));
  /* 11414070 push 0x1141c6a0 */
  push32((uint32_t)(0x1141c6a0u));
  /* 11414075 call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x1141407bu);
  /* 1141407b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1141407d call dword ptr [0x1141b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b104))), 0x11414083u);
  /* 11414083 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11414086:;
  /* 11414086 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11414088 call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x1141408eu);
  /* 1141408e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414091 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414093 je 0x114140d6 */
  if (C.zf) goto L_114140d6;
  /* 11414095 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414097 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 1141409c push 0x1141f960 */
  push32((uint32_t)(0x1141f960u));
  /* 114140a1 call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x114140a7u);
  /* 114140a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114140aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114140ac je 0x114140d6 */
  if (C.zf) goto L_114140d6;
  /* 114140ae push 0 */
  push32((uint32_t)(0x0u));
  /* 114140b0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 114140b2 call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x114140b8u);
  /* 114140b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114140bb push 0x1141f940 */
  push32((uint32_t)(0x1141f940u));
  /* 114140c0 push 0x1141c6a0 */
  push32((uint32_t)(0x1141c6a0u));
  /* 114140c5 call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x114140cbu);
  /* 114140cb push 0x42 */
  push32((uint32_t)(0x42u));
  /* 114140cd call dword ptr [0x1141b104] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b104))), 0x114140d3u);
  /* 114140d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114140d6:;
  /* 114140d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114140d8 call dword ptr [0x1141b114] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b114))), 0x114140deu);
  /* 114140de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114140e1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114140e3 je 0x114140f9 */
  if (C.zf) goto L_114140f9;
  /* 114140e5 push 0x1141c698 */
  push32((uint32_t)(0x1141c698u));
  /* 114140ea call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x114140f0u);
  /* 114140f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114140f3 call dword ptr [0x1141b118] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b118))), 0x114140f9u);
L_114140f9:;
  /* 114140f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 114140fb call dword ptr [0x1141b114] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b114))), 0x11414101u);
  /* 11414101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414104 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414106 je 0x1141412b */
  if (C.zf) goto L_1141412b;
  /* 11414108 push 3 */
  push32((uint32_t)(0x3u));
  /* 1141410a call dword ptr [0x1141b114] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b114))), 0x11414110u);
  /* 11414110 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414113 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414115 je 0x1141412b */
  if (C.zf) goto L_1141412b;
  /* 11414117 push 0x1141c690 */
  push32((uint32_t)(0x1141c690u));
  /* 1141411c call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11414122u);
  /* 11414122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414125 call dword ptr [0x1141b110] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b110))), 0x1141412bu);
L_1141412b:;
  /* 1141412b push 0 */
  push32((uint32_t)(0x0u));
  /* 1141412d push 0 */
  push32((uint32_t)(0x0u));
  /* 1141412f call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11414135u);
  /* 11414135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414138 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141413d jle 0x1141414d */
  if ((C.zf||C.sf!=C.of)) goto L_1141414d;
  /* 1141413f push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 11414144 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414146 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414148 call esi */
  call_ind((uint32_t)(ESI), 0x1141414au);
  /* 1141414a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1141414d:;
  /* 1141414d push 3 */
  push32((uint32_t)(0x3u));
  /* 1141414f push 0 */
  push32((uint32_t)(0x0u));
  /* 11414151 call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11414157u);
  /* 11414157 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141415a cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141415f jle 0x1141416f */
  if ((C.zf||C.sf!=C.of)) goto L_1141416f;
  /* 11414161 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 11414166 push 3 */
  push32((uint32_t)(0x3u));
  /* 11414168 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141416a call esi */
  call_ind((uint32_t)(ESI), 0x1141416cu);
  /* 1141416c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1141416f:;
  /* 1141416f push 2 */
  push32((uint32_t)(0x2u));
  /* 11414171 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414173 call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11414179u);
  /* 11414179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141417c cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414181 jle 0x11414191 */
  if ((C.zf||C.sf!=C.of)) goto L_11414191;
  /* 11414183 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 11414188 push 2 */
  push32((uint32_t)(0x2u));
  /* 1141418a push 0 */
  push32((uint32_t)(0x0u));
  /* 1141418c call esi */
  call_ind((uint32_t)(ESI), 0x1141418eu);
  /* 1141418e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11414191:;
  /* 11414191 push 1 */
  push32((uint32_t)(0x1u));
  /* 11414193 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414195 call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x1141419bu);
  /* 1141419b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141419e cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114141a3 jle 0x114141b3 */
  if ((C.zf||C.sf!=C.of)) goto L_114141b3;
  /* 114141a5 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 114141aa push 1 */
  push32((uint32_t)(0x1u));
  /* 114141ac push 0 */
  push32((uint32_t)(0x0u));
  /* 114141ae call esi */
  call_ind((uint32_t)(ESI), 0x114141b0u);
  /* 114141b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114141b3:;
  /* 114141b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 114141b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114141b7 call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x114141bdu);
  /* 114141bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114141c0 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114141c5 jle 0x114141d5 */
  if ((C.zf||C.sf!=C.of)) goto L_114141d5;
  /* 114141c7 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 114141cc push 4 */
  push32((uint32_t)(0x4u));
  /* 114141ce push 0 */
  push32((uint32_t)(0x0u));
  /* 114141d0 call esi */
  call_ind((uint32_t)(ESI), 0x114141d2u);
  /* 114141d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114141d5:;
  /* 114141d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 114141d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 114141d9 call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x114141dfu);
  /* 114141df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114141e2 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114141e7 jle 0x114141f7 */
  if ((C.zf||C.sf!=C.of)) goto L_114141f7;
  /* 114141e9 push 0x11170 */
  push32((uint32_t)(0x11170u));
  /* 114141ee push 5 */
  push32((uint32_t)(0x5u));
  /* 114141f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114141f2 call esi */
  call_ind((uint32_t)(ESI), 0x114141f4u);
  /* 114141f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114141f7:;
  /* 114141f7 push 0x1141fd00 */
  push32((uint32_t)(0x1141fd00u));
  /* 114141fc call ebx */
  call_ind((uint32_t)(EBX), 0x114141feu);
  /* 114141fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11414203 je 0x114144c1 */
  if (C.zf) goto L_114144c1;
  /* 11414209 mov al, byte ptr [0x1141c060] */
  AL = (r8((uint32_t)(0x1141c060)));
  /* 1141420e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414210 je 0x114144ca */
  if (C.zf) goto L_114144ca;
  /* 11414216 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414218 push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 1141421d push 0x1141f7f8 */
  push32((uint32_t)(0x1141f7f8u));
  /* 11414222 call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x11414228u);
  /* 11414228 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141422b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141422d je 0x114144c1 */
  if (C.zf) goto L_114144c1;
  /* 11414233 mov al, byte ptr [0x114215a0] */
  AL = (r8((uint32_t)(0x114215a0)));
  /* 11414238 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1141423a je 0x11414243 */
  if (C.zf) goto L_11414243;
  /* 1141423c push 0x1141c688 */
  push32((uint32_t)(0x1141c688u));
  /* 11414241 jmp 0x11414251 */
  goto L_11414251;
L_11414243:;
  /* 11414243 mov al, byte ptr [0x114215a1] */
  AL = (r8((uint32_t)(0x114215a1)));
  /* 11414248 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1141424a je 0x114142a0 */
  if (C.zf) goto L_114142a0;
  /* 1141424c push 0x1141c680 */
  push32((uint32_t)(0x1141c680u));
L_11414251:;
  /* 11414251 call dword ptr [0x1141b120] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b120))), 0x11414257u);
  /* 11414257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141425a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1141425c je 0x114144b8 */
  if (C.zf) goto L_114144b8;
  /* 11414262 push 4 */
  push32((uint32_t)(0x4u));
  /* 11414264 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414266 call ebp */
  call_ind((uint32_t)(EBP), 0x11414268u);
  /* 11414268 push 8 */
  push32((uint32_t)(0x8u));
  /* 1141426a push 3 */
  push32((uint32_t)(0x3u));
  /* 1141426c call ebp */
  call_ind((uint32_t)(EBP), 0x1141426eu);
  /* 1141426e push 0x1141c678 */
  push32((uint32_t)(0x1141c678u));
  /* 11414273 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11414279u);
  /* 11414279 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141427b push 6 */
  push32((uint32_t)(0x6u));
  /* 1141427d call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11414283u);
  /* 11414283 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414286 mov byte ptr [0x114215a1], 0 */
  w8((uint32_t)(0x114215a1), (0x0u));
  /* 1141428d mov byte ptr [0x114215a0], 0 */
  w8((uint32_t)(0x114215a0), (0x0u));
  /* 11414294 mov byte ptr [0x1141c060], 0 */
  w8((uint32_t)(0x1141c060), (0x0u));
  /* 1141429b jmp 0x114144ca */
  goto L_114144ca;
L_114142a0:;
  /* 114142a0 push 0x1141c66c */
  push32((uint32_t)(0x1141c66cu));
  /* 114142a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114142a7 push 0x1141c664 */
  push32((uint32_t)(0x1141c664u));
  /* 114142ac push 9 */
  push32((uint32_t)(0x9u));
  /* 114142ae call dword ptr [0x1141b174] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b174))), 0x114142b4u);
  /* 114142b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114142b7 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114142ba je 0x114143ba */
  if (C.zf) goto L_114143ba;
  /* 114142c0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114142c1 jne 0x114144b8 */
  if (!C.zf) goto L_114144b8;
  /* 114142c7 mov ebx, dword ptr [0x1141b100] */
  EBX = (r32((uint32_t)(0x1141b100)));
  /* 114142cd push 0 */
  push32((uint32_t)(0x0u));
  /* 114142cf call ebx */
  call_ind((uint32_t)(EBX), 0x114142d1u);
  /* 114142d1 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114142d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114142d7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 114142da lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 114142dd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 114142e0 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 114142e3 push eax */
  push32((uint32_t)(EAX));
  /* 114142e4 push 0x1141c65c */
  push32((uint32_t)(0x1141c65cu));
  /* 114142e9 call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x114142efu);
  /* 114142ef push 0x1141c654 */
  push32((uint32_t)(0x1141c654u));
  /* 114142f4 call dword ptr [0x1141b120] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b120))), 0x114142fau);
  /* 114142fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114142fd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114142ff je 0x114144b8 */
  if (C.zf) goto L_114144b8;
  /* 11414305 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414307 call ebx */
  call_ind((uint32_t)(EBX), 0x11414309u);
  /* 11414309 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141430c push 1 */
  push32((uint32_t)(0x1u));
  /* 1141430e push 0 */
  push32((uint32_t)(0x0u));
  /* 11414310 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11414313 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11414316 lea ebx, [eax + eax*4] */
  EBX = ((uint32_t)(EAX + EAX*4));
  /* 11414319 shl ebx, 3 */
  EBX = (sh_shl((uint32_t)(EBX), (0x3u)&0x1f, 32));
  /* 1141431c call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11414322u);
  /* 11414322 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414325 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414327 jl 0x114144aa */
  if ((C.sf!=C.of)) goto L_114144aa;
  /* 1141432d push 0x1141c64c */
  push32((uint32_t)(0x1141c64cu));
  /* 11414332 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11414338u);
  /* 11414338 mov ebx, dword ptr [0x1141b100] */
  EBX = (r32((uint32_t)(0x1141b100)));
  /* 1141433e push 0 */
  push32((uint32_t)(0x0u));
  /* 11414340 call ebx */
  call_ind((uint32_t)(EBX), 0x11414342u);
  /* 11414342 mov ecx, 0x14 */
  ECX = (0x14u);
  /* 11414347 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11414349 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1141434c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1141434f lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11414352 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11414355 push ecx */
  push32((uint32_t)(ECX));
  /* 11414356 push 6 */
  push32((uint32_t)(0x6u));
  /* 11414358 call edi */
  call_ind((uint32_t)(EDI), 0x1141435au);
  /* 1141435a push 0 */
  push32((uint32_t)(0x0u));
  /* 1141435c push 6 */
  push32((uint32_t)(0x6u));
  /* 1141435e call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11414364u);
  /* 11414364 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414366 call ebx */
  call_ind((uint32_t)(EBX), 0x11414368u);
  /* 11414368 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141436b push 1 */
  push32((uint32_t)(0x1u));
  /* 1141436d push 0 */
  push32((uint32_t)(0x0u));
  /* 1141436f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11414372 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11414375 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11414378 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 1141437b mov edi, edx */
  EDI = (EDX);
  /* 1141437d call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11414383u);
  /* 11414383 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11414385 push eax */
  push32((uint32_t)(EAX));
  /* 11414386 push 1 */
  push32((uint32_t)(0x1u));
  /* 11414388 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141438a call esi */
  call_ind((uint32_t)(ESI), 0x1141438cu);
  /* 1141438c push 9 */
  push32((uint32_t)(0x9u));
  /* 1141438e push 3 */
  push32((uint32_t)(0x3u));
  /* 11414390 call ebp */
  call_ind((uint32_t)(EBP), 0x11414392u);
  /* 11414392 push 0x1141c64c */
  push32((uint32_t)(0x1141c64cu));
  /* 11414397 mov byte ptr [0x114215a0], 0 */
  w8((uint32_t)(0x114215a0), (0x0u));
  /* 1141439e mov byte ptr [0x114215a1], 1 */
  w8((uint32_t)(0x114215a1), (0x1u));
  /* 114143a5 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x114143abu);
  /* 114143ab add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114143ae mov byte ptr [0x1141c060], 0 */
  w8((uint32_t)(0x1141c060), (0x0u));
  /* 114143b5 jmp 0x114144ca */
  goto L_114144ca;
L_114143ba:;
  /* 114143ba mov ebx, dword ptr [0x1141b100] */
  EBX = (r32((uint32_t)(0x1141b100)));
  /* 114143c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 114143c2 call ebx */
  call_ind((uint32_t)(EBX), 0x114143c4u);
  /* 114143c4 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114143c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114143ca lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 114143cd lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 114143d0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 114143d3 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 114143d6 push eax */
  push32((uint32_t)(EAX));
  /* 114143d7 push 0x1141c65c */
  push32((uint32_t)(0x1141c65cu));
  /* 114143dc call dword ptr [0x1141b16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b16c))), 0x114143e2u);
  /* 114143e2 push 0x1141c654 */
  push32((uint32_t)(0x1141c654u));
  /* 114143e7 call dword ptr [0x1141b120] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b120))), 0x114143edu);
  /* 114143ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114143f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114143f2 je 0x114144b8 */
  if (C.zf) goto L_114144b8;
  /* 114143f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114143fa call ebx */
  call_ind((uint32_t)(EBX), 0x114143fcu);
  /* 114143fc add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114143ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11414401 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414403 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11414406 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11414409 lea ebx, [eax + eax*4] */
  EBX = ((uint32_t)(EAX + EAX*4));
  /* 1141440c shl ebx, 3 */
  EBX = (sh_shl((uint32_t)(EBX), (0x3u)&0x1f, 32));
  /* 1141440f call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11414415u);
  /* 11414415 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414418 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141441a jl 0x114144aa */
  if ((C.sf!=C.of)) goto L_114144aa;
  /* 11414420 push 0x1141c64c */
  push32((uint32_t)(0x1141c64cu));
  /* 11414425 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x1141442bu);
  /* 1141442b mov ebx, dword ptr [0x1141b100] */
  EBX = (r32((uint32_t)(0x1141b100)));
  /* 11414431 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414433 call ebx */
  call_ind((uint32_t)(EBX), 0x11414435u);
  /* 11414435 mov ecx, 0x14 */
  ECX = (0x14u);
  /* 1141443a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141443c lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1141443f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11414442 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11414445 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11414448 push ecx */
  push32((uint32_t)(ECX));
  /* 11414449 push 6 */
  push32((uint32_t)(0x6u));
  /* 1141444b call edi */
  call_ind((uint32_t)(EDI), 0x1141444du);
  /* 1141444d push 0 */
  push32((uint32_t)(0x0u));
  /* 1141444f push 6 */
  push32((uint32_t)(0x6u));
  /* 11414451 call dword ptr [0x1141b0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0f4))), 0x11414457u);
  /* 11414457 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414459 call ebx */
  call_ind((uint32_t)(EBX), 0x1141445bu);
  /* 1141445b add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141445e push 1 */
  push32((uint32_t)(0x1u));
  /* 11414460 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414462 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11414465 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11414468 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 1141446b shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 1141446e mov edi, edx */
  EDI = (EDX);
  /* 11414470 call dword ptr [0x1141b150] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b150))), 0x11414476u);
  /* 11414476 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11414478 push eax */
  push32((uint32_t)(EAX));
  /* 11414479 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141447b push 0 */
  push32((uint32_t)(0x0u));
  /* 1141447d call esi */
  call_ind((uint32_t)(ESI), 0x1141447fu);
  /* 1141447f push 5 */
  push32((uint32_t)(0x5u));
  /* 11414481 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414483 call ebp */
  call_ind((uint32_t)(EBP), 0x11414485u);
  /* 11414485 push 0x1141c64c */
  push32((uint32_t)(0x1141c64cu));
  /* 1141448a mov byte ptr [0x114215a0], 1 */
  w8((uint32_t)(0x114215a0), (0x1u));
  /* 11414491 mov byte ptr [0x114215a1], 0 */
  w8((uint32_t)(0x114215a1), (0x0u));
  /* 11414498 call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x1141449eu);
  /* 1141449e add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114144a1 mov byte ptr [0x1141c060], 0 */
  w8((uint32_t)(0x1141c060), (0x0u));
  /* 114144a8 jmp 0x114144ca */
  goto L_114144ca;
L_114144aa:;
  /* 114144aa push 0x1141c644 */
  push32((uint32_t)(0x1141c644u));
  /* 114144af call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x114144b5u);
  /* 114144b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114144b8:;
  /* 114144b8 mov byte ptr [0x1141c060], 0 */
  w8((uint32_t)(0x1141c060), (0x0u));
  /* 114144bf jmp 0x114144ca */
  goto L_114144ca;
L_114144c1:;
  /* 114144c1 mov al, byte ptr [0x1141c060] */
  AL = (r8((uint32_t)(0x1141c060)));
  /* 114144c6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114144c8 jne 0x114144ea */
  if (!C.zf) goto L_114144ea;
L_114144ca:;
  /* 114144ca push 0 */
  push32((uint32_t)(0x0u));
  /* 114144cc push 0x11420ae0 */
  push32((uint32_t)(0x11420ae0u));
  /* 114144d1 push 0x1141f7f8 */
  push32((uint32_t)(0x1141f7f8u));
  /* 114144d6 call dword ptr [0x1141b164] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b164))), 0x114144dcu);
  /* 114144dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114144df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114144e1 jne 0x114144ea */
  if (!C.zf) goto L_114144ea;
  /* 114144e3 mov byte ptr [0x1141c060], 1 */
  w8((uint32_t)(0x1141c060), (0x1u));
L_114144ea:;
  /* 114144ea push 6 */
  push32((uint32_t)(0x6u));
  /* 114144ec call dword ptr [0x1141b124] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b124))), 0x114144f2u);
  /* 114144f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114144f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114144f7 je 0x11414530 */
  if (C.zf) goto L_11414530;
  /* 114144f9 push 6 */
  push32((uint32_t)(0x6u));
  /* 114144fb call dword ptr [0x1141b0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e8))), 0x11414501u);
  /* 11414501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414504 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414506 jne 0x11414530 */
  if (!C.zf) goto L_11414530;
  /* 11414508 push 0x1141c678 */
  push32((uint32_t)(0x1141c678u));
  /* 1141450d call dword ptr [0x1141b168] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b168))), 0x11414513u);
  /* 11414513 push 4 */
  push32((uint32_t)(0x4u));
  /* 11414515 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414517 mov byte ptr [0x114215a0], 0 */
  w8((uint32_t)(0x114215a0), (0x0u));
  /* 1141451e mov byte ptr [0x114215a1], 0 */
  w8((uint32_t)(0x114215a1), (0x0u));
  /* 11414525 call ebp */
  call_ind((uint32_t)(EBP), 0x11414527u);
  /* 11414527 push 8 */
  push32((uint32_t)(0x8u));
  /* 11414529 push 3 */
  push32((uint32_t)(0x3u));
  /* 1141452b call ebp */
  call_ind((uint32_t)(EBP), 0x1141452du);
  /* 1141452d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11414530:;
  /* 11414530 pop edi */
  EDI = (pop32());
  /* 11414531 pop esi */
  ESI = (pop32());
  /* 11414532 pop ebp */
  EBP = (pop32());
  /* 11414533 pop ebx */
  EBX = (pop32());
  /* 11414534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414537 ret  */
  ESPCHK(0x11413090u, _esp0);
  ESP += 4; return;
}

/* FUN_10004540 @ 0x11414540 (2246 bytes, 789 insns) [1 switch table(s)] */
void f_11414540(void) {
  FTRACE(0x11414540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11414540 push esi */
  push32((uint32_t)(ESI));
  /* 11414541 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11414545 push edi */
  push32((uint32_t)(EDI));
  /* 11414546 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414548 push esi */
  push32((uint32_t)(ESI));
  /* 11414549 call dword ptr [0x1141b160] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b160))), 0x1141454fu);
  /* 1141454f mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11414553 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414556 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414559 ja 0x11414e03 */
  if ((!C.cf&&!C.zf)) goto L_11414e03;
  /* 1141455f mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11414563 jmp dword ptr [ecx*4 + 0x11414e08] */
  switch (ECX) {
    case 0: goto L_1141456a;
    case 1: goto L_11414769;
    case 2: goto L_114147ef;
    case 3: goto L_11414877;
    case 4: goto L_11414911;
    case 5: goto L_11414987;
    case 6: goto L_11414ae8;
    case 7: goto L_11414c33;
    case 8: goto L_11414d1a;
    default: x86_unimpl("switch@0x11414563 out of table"); return;
  }
L_1141456a:;
  /* 1141456a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141456d jne 0x11414604 */
  if (!C.zf) goto L_11414604;
  /* 11414573 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414576 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 1141457c push 0 */
  push32((uint32_t)(0x0u));
  /* 1141457e push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414583 push 0x11421530 */
  push32((uint32_t)(0x11421530u));
  /* 11414588 push eax */
  push32((uint32_t)(EAX));
  /* 11414589 call edi */
  call_ind((uint32_t)(EDI), 0x1141458bu);
  /* 1141458b mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141458e push 2 */
  push32((uint32_t)(0x2u));
  /* 11414590 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414595 push 0x11421538 */
  push32((uint32_t)(0x11421538u));
  /* 1141459a push ecx */
  push32((uint32_t)(ECX));
  /* 1141459b call edi */
  call_ind((uint32_t)(EDI), 0x1141459du);
  /* 1141459d mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114145a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114145a2 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 114145a7 push 0x11421520 */
  push32((uint32_t)(0x11421520u));
  /* 114145ac push edx */
  push32((uint32_t)(EDX));
  /* 114145ad call edi */
  call_ind((uint32_t)(EDI), 0x114145afu);
  /* 114145af mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 114145b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114145b4 push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 114145b9 push 0x11421528 */
  push32((uint32_t)(0x11421528u));
  /* 114145be push eax */
  push32((uint32_t)(EAX));
  /* 114145bf call edi */
  call_ind((uint32_t)(EDI), 0x114145c1u);
  /* 114145c1 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 114145c4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114145c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114145c9 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 114145ce push 0x11421510 */
  push32((uint32_t)(0x11421510u));
  /* 114145d3 push ecx */
  push32((uint32_t)(ECX));
  /* 114145d4 call edi */
  call_ind((uint32_t)(EDI), 0x114145d6u);
  /* 114145d6 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114145d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 114145db push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 114145e0 push 0x11421518 */
  push32((uint32_t)(0x11421518u));
  /* 114145e5 push edx */
  push32((uint32_t)(EDX));
  /* 114145e6 call edi */
  call_ind((uint32_t)(EDI), 0x114145e8u);
  /* 114145e8 mov eax, dword ptr [0x1141c068] */
  EAX = (r32((uint32_t)(0x1141c068)));
  /* 114145ed mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114145f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114145f2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 114145f4 mov ecx, dword ptr [eax + 0x2d3] */
  ECX = (r32((uint32_t)(EAX + 0x2d3)));
  /* 114145fa push ecx */
  push32((uint32_t)(ECX));
  /* 114145fb push edx */
  push32((uint32_t)(EDX));
  /* 114145fc call edi */
  call_ind((uint32_t)(EDI), 0x114145feu);
  /* 114145fe add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414601 pop edi */
  EDI = (pop32());
  /* 11414602 pop esi */
  ESI = (pop32());
  /* 11414603 ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414604:;
  /* 11414604 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414607 jne 0x11414688 */
  if (!C.zf) goto L_11414688;
  /* 11414609 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141460c mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414612 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414614 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414616 push 0x1141f860 */
  push32((uint32_t)(0x1141f860u));
  /* 1141461b push eax */
  push32((uint32_t)(EAX));
  /* 1141461c call edi */
  call_ind((uint32_t)(EDI), 0x1141461eu);
  /* 1141461e mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414621 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414623 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414625 push 0x1141f848 */
  push32((uint32_t)(0x1141f848u));
  /* 1141462a push ecx */
  push32((uint32_t)(ECX));
  /* 1141462b call edi */
  call_ind((uint32_t)(EDI), 0x1141462du);
  /* 1141462d mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414630 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414632 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414634 push 0x1141f858 */
  push32((uint32_t)(0x1141f858u));
  /* 11414639 push edx */
  push32((uint32_t)(EDX));
  /* 1141463a call edi */
  call_ind((uint32_t)(EDI), 0x1141463cu);
  /* 1141463c mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141463f push 2 */
  push32((uint32_t)(0x2u));
  /* 11414641 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11414643 push 0x1141f828 */
  push32((uint32_t)(0x1141f828u));
  /* 11414648 push eax */
  push32((uint32_t)(EAX));
  /* 11414649 call edi */
  call_ind((uint32_t)(EDI), 0x1141464bu);
  /* 1141464b mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141464e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414651 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414653 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414655 push 0x1141f838 */
  push32((uint32_t)(0x1141f838u));
  /* 1141465a push ecx */
  push32((uint32_t)(ECX));
  /* 1141465b call edi */
  call_ind((uint32_t)(EDI), 0x1141465du);
  /* 1141465d mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414660 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414662 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414664 push 0x1141f820 */
  push32((uint32_t)(0x1141f820u));
  /* 11414669 push edx */
  push32((uint32_t)(EDX));
  /* 1141466a call edi */
  call_ind((uint32_t)(EDI), 0x1141466cu);
  /* 1141466c mov eax, dword ptr [0x1141c06c] */
  EAX = (r32((uint32_t)(0x1141c06c)));
  /* 11414671 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414674 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414676 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11414678 mov ecx, dword ptr [eax + 0x2d3] */
  ECX = (r32((uint32_t)(EAX + 0x2d3)));
  /* 1141467e push ecx */
  push32((uint32_t)(ECX));
  /* 1141467f push edx */
  push32((uint32_t)(EDX));
  /* 11414680 call edi */
  call_ind((uint32_t)(EDI), 0x11414682u);
  /* 11414682 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414685 pop edi */
  EDI = (pop32());
  /* 11414686 pop esi */
  ESI = (pop32());
  /* 11414687 ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414688:;
  /* 11414688 cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141468b jne 0x11414711 */
  if (!C.zf) goto L_11414711;
  /* 11414691 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414694 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 1141469a push 0 */
  push32((uint32_t)(0x0u));
  /* 1141469c push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 114146a1 push 0x11421530 */
  push32((uint32_t)(0x11421530u));
  /* 114146a6 push eax */
  push32((uint32_t)(EAX));
  /* 114146a7 call edi */
  call_ind((uint32_t)(EDI), 0x114146a9u);
  /* 114146a9 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 114146ac push 2 */
  push32((uint32_t)(0x2u));
  /* 114146ae push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 114146b3 push 0x11421538 */
  push32((uint32_t)(0x11421538u));
  /* 114146b8 push ecx */
  push32((uint32_t)(ECX));
  /* 114146b9 call edi */
  call_ind((uint32_t)(EDI), 0x114146bbu);
  /* 114146bb mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114146be push 2 */
  push32((uint32_t)(0x2u));
  /* 114146c0 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 114146c5 push 0x11421520 */
  push32((uint32_t)(0x11421520u));
  /* 114146ca push edx */
  push32((uint32_t)(EDX));
  /* 114146cb call edi */
  call_ind((uint32_t)(EDI), 0x114146cdu);
  /* 114146cd mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 114146d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114146d2 push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 114146d7 push 0x11421528 */
  push32((uint32_t)(0x11421528u));
  /* 114146dc push eax */
  push32((uint32_t)(EAX));
  /* 114146dd call edi */
  call_ind((uint32_t)(EDI), 0x114146dfu);
  /* 114146df mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 114146e2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114146e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114146e7 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 114146ec push 0x11421510 */
  push32((uint32_t)(0x11421510u));
  /* 114146f1 push ecx */
  push32((uint32_t)(ECX));
  /* 114146f2 call edi */
  call_ind((uint32_t)(EDI), 0x114146f4u);
  /* 114146f4 mov edx, dword ptr [0x1141c07c] */
  EDX = (r32((uint32_t)(0x1141c07c)));
  /* 114146fa mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 114146fd push 2 */
  push32((uint32_t)(0x2u));
  /* 114146ff push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11414701 mov eax, dword ptr [edx + 0x2d3] */
  EAX = (r32((uint32_t)(EDX + 0x2d3)));
  /* 11414707 push eax */
  push32((uint32_t)(EAX));
  /* 11414708 push ecx */
  push32((uint32_t)(ECX));
  /* 11414709 call edi */
  call_ind((uint32_t)(EDI), 0x1141470bu);
  /* 1141470b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141470e pop edi */
  EDI = (pop32());
  /* 1141470f pop esi */
  ESI = (pop32());
  /* 11414710 ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414711:;
  /* 11414711 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414714 jne 0x11414769 */
  if (!C.zf) goto L_11414769;
  /* 11414716 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414719 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 1141471f push 0 */
  push32((uint32_t)(0x0u));
  /* 11414721 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414723 push 0x1141f860 */
  push32((uint32_t)(0x1141f860u));
  /* 11414728 push edx */
  push32((uint32_t)(EDX));
  /* 11414729 call edi */
  call_ind((uint32_t)(EDI), 0x1141472bu);
  /* 1141472b mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141472e push 2 */
  push32((uint32_t)(0x2u));
  /* 11414730 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414732 push 0x1141f848 */
  push32((uint32_t)(0x1141f848u));
  /* 11414737 push eax */
  push32((uint32_t)(EAX));
  /* 11414738 call edi */
  call_ind((uint32_t)(EDI), 0x1141473au);
  /* 1141473a mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141473d push 2 */
  push32((uint32_t)(0x2u));
  /* 1141473f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414741 push 0x1141f858 */
  push32((uint32_t)(0x1141f858u));
  /* 11414746 push ecx */
  push32((uint32_t)(ECX));
  /* 11414747 call edi */
  call_ind((uint32_t)(EDI), 0x11414749u);
  /* 11414749 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141474c push 2 */
  push32((uint32_t)(0x2u));
  /* 1141474e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11414750 push 0x1141f828 */
  push32((uint32_t)(0x1141f828u));
  /* 11414755 push edx */
  push32((uint32_t)(EDX));
  /* 11414756 call edi */
  call_ind((uint32_t)(EDI), 0x11414758u);
  /* 11414758 mov eax, dword ptr [0x1141c084] */
  EAX = (r32((uint32_t)(0x1141c084)));
  /* 1141475d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414760 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414762 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11414764 jmp 0x11414d7a */
  goto L_11414d7a;
L_11414769:;
  /* 11414769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141476b jne 0x11414877 */
  if (!C.zf) goto L_11414877;
  /* 11414771 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414777 push eax */
  push32((uint32_t)(EAX));
  /* 11414778 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141477b push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1141477d push 0x11421518 */
  push32((uint32_t)(0x11421518u));
  /* 11414782 push eax */
  push32((uint32_t)(EAX));
  /* 11414783 call edi */
  call_ind((uint32_t)(EDI), 0x11414785u);
  /* 11414785 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414788 push 2 */
  push32((uint32_t)(0x2u));
  /* 1141478a push 0x70 */
  push32((uint32_t)(0x70u));
  /* 1141478c push 0x11421510 */
  push32((uint32_t)(0x11421510u));
  /* 11414791 push ecx */
  push32((uint32_t)(ECX));
  /* 11414792 call edi */
  call_ind((uint32_t)(EDI), 0x11414794u);
  /* 11414794 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414797 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414799 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1141479b push 0x11421528 */
  push32((uint32_t)(0x11421528u));
  /* 114147a0 push edx */
  push32((uint32_t)(EDX));
  /* 114147a1 call edi */
  call_ind((uint32_t)(EDI), 0x114147a3u);
  /* 114147a3 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 114147a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114147a8 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114147aa push 0x11421520 */
  push32((uint32_t)(0x11421520u));
  /* 114147af push eax */
  push32((uint32_t)(EAX));
  /* 114147b0 call edi */
  call_ind((uint32_t)(EDI), 0x114147b2u);
  /* 114147b2 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 114147b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114147b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 114147ba push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114147bc push 0x11421538 */
  push32((uint32_t)(0x11421538u));
  /* 114147c1 push ecx */
  push32((uint32_t)(ECX));
  /* 114147c2 call edi */
  call_ind((uint32_t)(EDI), 0x114147c4u);
  /* 114147c4 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114147c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114147c9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114147cb push 0x11421530 */
  push32((uint32_t)(0x11421530u));
  /* 114147d0 push edx */
  push32((uint32_t)(EDX));
  /* 114147d1 call edi */
  call_ind((uint32_t)(EDI), 0x114147d3u);
  /* 114147d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114147d5 push 0x3c */
  push32((uint32_t)(0x3cu));
L_114147d7:;
  /* 114147d7 mov eax, dword ptr [0x1141c064] */
  EAX = (r32((uint32_t)(0x1141c064)));
  /* 114147dc mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114147df mov ecx, dword ptr [eax + 0x2d3] */
  ECX = (r32((uint32_t)(EAX + 0x2d3)));
  /* 114147e5 push ecx */
  push32((uint32_t)(ECX));
  /* 114147e6 push edx */
  push32((uint32_t)(EDX));
  /* 114147e7 call edi */
  call_ind((uint32_t)(EDI), 0x114147e9u);
  /* 114147e9 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114147ec pop edi */
  EDI = (pop32());
  /* 114147ed pop esi */
  ESI = (pop32());
  /* 114147ee ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_114147ef:;
  /* 114147ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114147f1 jne 0x11414877 */
  if (!C.zf) goto L_11414877;
  /* 114147f7 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 114147fd push eax */
  push32((uint32_t)(EAX));
  /* 114147fe mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414801 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414806 push 0x1141f820 */
  push32((uint32_t)(0x1141f820u));
  /* 1141480b push eax */
  push32((uint32_t)(EAX));
  /* 1141480c call edi */
  call_ind((uint32_t)(EDI), 0x1141480eu);
  /* 1141480e mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414811 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414813 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11414818 push 0x1141f838 */
  push32((uint32_t)(0x1141f838u));
  /* 1141481d push ecx */
  push32((uint32_t)(ECX));
  /* 1141481e call edi */
  call_ind((uint32_t)(EDI), 0x11414820u);
  /* 11414820 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414823 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414825 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1141482a push 0x1141f828 */
  push32((uint32_t)(0x1141f828u));
  /* 1141482f push edx */
  push32((uint32_t)(EDX));
  /* 11414830 call edi */
  call_ind((uint32_t)(EDI), 0x11414832u);
  /* 11414832 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414835 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414837 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 1141483c push 0x1141f858 */
  push32((uint32_t)(0x1141f858u));
  /* 11414841 push eax */
  push32((uint32_t)(EAX));
  /* 11414842 call edi */
  call_ind((uint32_t)(EDI), 0x11414844u);
  /* 11414844 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414847 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141484a push 2 */
  push32((uint32_t)(0x2u));
  /* 1141484c push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11414851 push 0x1141f848 */
  push32((uint32_t)(0x1141f848u));
  /* 11414856 push ecx */
  push32((uint32_t)(ECX));
  /* 11414857 call edi */
  call_ind((uint32_t)(EDI), 0x11414859u);
  /* 11414859 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141485c push 2 */
  push32((uint32_t)(0x2u));
  /* 1141485e push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414863 push 0x1141f860 */
  push32((uint32_t)(0x1141f860u));
  /* 11414868 push edx */
  push32((uint32_t)(EDX));
  /* 11414869 call edi */
  call_ind((uint32_t)(EDI), 0x1141486bu);
  /* 1141486b push 2 */
  push32((uint32_t)(0x2u));
  /* 1141486d push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11414872 jmp 0x114147d7 */
  goto L_114147d7;
L_11414877:;
  /* 11414877 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141487a jne 0x11414911 */
  if (!C.zf) goto L_11414911;
  /* 11414880 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414883 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414889 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141488b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1141488d push 0x1141f8c0 */
  push32((uint32_t)(0x1141f8c0u));
  /* 11414892 push eax */
  push32((uint32_t)(EAX));
  /* 11414893 call edi */
  call_ind((uint32_t)(EDI), 0x11414895u);
  /* 11414895 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414898 push 2 */
  push32((uint32_t)(0x2u));
  /* 1141489a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1141489f push 0x1141f8b8 */
  push32((uint32_t)(0x1141f8b8u));
  /* 114148a4 push ecx */
  push32((uint32_t)(ECX));
  /* 114148a5 call edi */
  call_ind((uint32_t)(EDI), 0x114148a7u);
  /* 114148a7 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114148aa push 2 */
  push32((uint32_t)(0x2u));
  /* 114148ac push 0x80 */
  push32((uint32_t)(0x80u));
  /* 114148b1 push 0x1141f8b0 */
  push32((uint32_t)(0x1141f8b0u));
  /* 114148b6 push edx */
  push32((uint32_t)(EDX));
  /* 114148b7 call edi */
  call_ind((uint32_t)(EDI), 0x114148b9u);
  /* 114148b9 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 114148bc push 2 */
  push32((uint32_t)(0x2u));
  /* 114148be push 0x80 */
  push32((uint32_t)(0x80u));
  /* 114148c3 push 0x1141f8a8 */
  push32((uint32_t)(0x1141f8a8u));
  /* 114148c8 push eax */
  push32((uint32_t)(EAX));
  /* 114148c9 call edi */
  call_ind((uint32_t)(EDI), 0x114148cbu);
  /* 114148cb mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 114148ce add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114148d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 114148d3 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 114148d8 push 0x1141f8a0 */
  push32((uint32_t)(0x1141f8a0u));
  /* 114148dd push ecx */
  push32((uint32_t)(ECX));
  /* 114148de call edi */
  call_ind((uint32_t)(EDI), 0x114148e0u);
  /* 114148e0 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114148e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114148e5 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 114148ea push 0x1141f898 */
  push32((uint32_t)(0x1141f898u));
  /* 114148ef push edx */
  push32((uint32_t)(EDX));
  /* 114148f0 call edi */
  call_ind((uint32_t)(EDI), 0x114148f2u);
  /* 114148f2 mov eax, dword ptr [0x1141c078] */
  EAX = (r32((uint32_t)(0x1141c078)));
  /* 114148f7 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114148fa push 2 */
  push32((uint32_t)(0x2u));
  /* 114148fc push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11414901 mov ecx, dword ptr [eax + 0x2d3] */
  ECX = (r32((uint32_t)(EAX + 0x2d3)));
  /* 11414907 push ecx */
  push32((uint32_t)(ECX));
  /* 11414908 push edx */
  push32((uint32_t)(EDX));
  /* 11414909 call edi */
  call_ind((uint32_t)(EDI), 0x1141490bu);
  /* 1141490b add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141490e pop edi */
  EDI = (pop32());
  /* 1141490f pop esi */
  ESI = (pop32());
  /* 11414910 ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414911:;
  /* 11414911 cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414914 jne 0x11414987 */
  if (!C.zf) goto L_11414987;
  /* 11414916 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414919 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 1141491f push 0 */
  push32((uint32_t)(0x0u));
  /* 11414921 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414926 push 0x1141f880 */
  push32((uint32_t)(0x1141f880u));
  /* 1141492b push eax */
  push32((uint32_t)(EAX));
  /* 1141492c call edi */
  call_ind((uint32_t)(EDI), 0x1141492eu);
  /* 1141492e mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414931 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414933 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414938 push 0x1141f878 */
  push32((uint32_t)(0x1141f878u));
  /* 1141493d push ecx */
  push32((uint32_t)(ECX));
  /* 1141493e call edi */
  call_ind((uint32_t)(EDI), 0x11414940u);
  /* 11414940 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414943 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414945 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1141494a push 0x1141f870 */
  push32((uint32_t)(0x1141f870u));
  /* 1141494f push edx */
  push32((uint32_t)(EDX));
  /* 11414950 call edi */
  call_ind((uint32_t)(EDI), 0x11414952u);
  /* 11414952 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414955 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414957 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1141495c push 0x1141f868 */
  push32((uint32_t)(0x1141f868u));
  /* 11414961 push eax */
  push32((uint32_t)(EAX));
  /* 11414962 call edi */
  call_ind((uint32_t)(EDI), 0x11414964u);
  /* 11414964 mov ecx, dword ptr [0x1141c080] */
  ECX = (r32((uint32_t)(0x1141c080)));
  /* 1141496a mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 1141496d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414970 mov edx, dword ptr [ecx + 0x2d3] */
  EDX = (r32((uint32_t)(ECX + 0x2d3)));
  /* 11414976 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414978 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1141497d push edx */
  push32((uint32_t)(EDX));
  /* 1141497e push eax */
  push32((uint32_t)(EAX));
  /* 1141497f call edi */
  call_ind((uint32_t)(EDI), 0x11414981u);
  /* 11414981 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414984 pop edi */
  EDI = (pop32());
  /* 11414985 pop esi */
  ESI = (pop32());
  /* 11414986 ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414987:;
  /* 11414987 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141498a jne 0x11414a16 */
  if (!C.zf) goto L_11414a16;
  /* 11414990 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414993 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1141499b push 0 */
  push32((uint32_t)(0x0u));
  /* 1141499d push 0x1141f898 */
  push32((uint32_t)(0x1141f898u));
  /* 114149a2 push ecx */
  push32((uint32_t)(ECX));
  /* 114149a3 call edi */
  call_ind((uint32_t)(EDI), 0x114149a5u);
  /* 114149a5 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114149a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 114149aa push 0 */
  push32((uint32_t)(0x0u));
  /* 114149ac push 0x1141f8a0 */
  push32((uint32_t)(0x1141f8a0u));
  /* 114149b1 push edx */
  push32((uint32_t)(EDX));
  /* 114149b2 call edi */
  call_ind((uint32_t)(EDI), 0x114149b4u);
  /* 114149b4 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 114149b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114149b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114149bb push 0x1141f8a8 */
  push32((uint32_t)(0x1141f8a8u));
  /* 114149c0 push eax */
  push32((uint32_t)(EAX));
  /* 114149c1 call edi */
  call_ind((uint32_t)(EDI), 0x114149c3u);
  /* 114149c3 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 114149c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114149c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 114149ca push 0x1141f8b0 */
  push32((uint32_t)(0x1141f8b0u));
  /* 114149cf push ecx */
  push32((uint32_t)(ECX));
  /* 114149d0 call edi */
  call_ind((uint32_t)(EDI), 0x114149d2u);
  /* 114149d2 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 114149d5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114149d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 114149da push 0 */
  push32((uint32_t)(0x0u));
  /* 114149dc push 0x1141f8b8 */
  push32((uint32_t)(0x1141f8b8u));
  /* 114149e1 push edx */
  push32((uint32_t)(EDX));
  /* 114149e2 call edi */
  call_ind((uint32_t)(EDI), 0x114149e4u);
  /* 114149e4 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 114149e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 114149e9 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 114149ee push 0x1141f8c0 */
  push32((uint32_t)(0x1141f8c0u));
  /* 114149f3 push eax */
  push32((uint32_t)(EAX));
  /* 114149f4 call edi */
  call_ind((uint32_t)(EDI), 0x114149f6u);
  /* 114149f6 mov ecx, dword ptr [0x1141c070] */
  ECX = (r32((uint32_t)(0x1141c070)));
  /* 114149fc mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 114149ff push 2 */
  push32((uint32_t)(0x2u));
  /* 11414a01 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11414a06 mov edx, dword ptr [ecx + 0x2d3] */
  EDX = (r32((uint32_t)(ECX + 0x2d3)));
  /* 11414a0c push edx */
  push32((uint32_t)(EDX));
  /* 11414a0d push eax */
  push32((uint32_t)(EAX));
  /* 11414a0e call edi */
  call_ind((uint32_t)(EDI), 0x11414a10u);
  /* 11414a10 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414a13 pop edi */
  EDI = (pop32());
  /* 11414a14 pop esi */
  ESI = (pop32());
  /* 11414a15 ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414a16:;
  /* 11414a16 cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414a19 jne 0x11414ae8 */
  if (!C.zf) goto L_11414ae8;
  /* 11414a1f mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414a22 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414a2a push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414a2f push 0x11420058 */
  push32((uint32_t)(0x11420058u));
  /* 11414a34 push ecx */
  push32((uint32_t)(ECX));
  /* 11414a35 call edi */
  call_ind((uint32_t)(EDI), 0x11414a37u);
  /* 11414a37 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11414a3c push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11414a3e push 0x11420060 */
  push32((uint32_t)(0x11420060u));
  /* 11414a43 push edx */
  push32((uint32_t)(EDX));
  /* 11414a44 call edi */
  call_ind((uint32_t)(EDI), 0x11414a46u);
  /* 11414a46 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414a49 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414a4b push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11414a4d push 0x11420090 */
  push32((uint32_t)(0x11420090u));
  /* 11414a52 push eax */
  push32((uint32_t)(EAX));
  /* 11414a53 call edi */
  call_ind((uint32_t)(EDI), 0x11414a55u);
  /* 11414a55 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414a58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414a5a push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11414a5c push 0x11420098 */
  push32((uint32_t)(0x11420098u));
  /* 11414a61 push ecx */
  push32((uint32_t)(ECX));
  /* 11414a62 call edi */
  call_ind((uint32_t)(EDI), 0x11414a64u);
  /* 11414a64 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414a67 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414a6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11414a6c push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414a71 push 0x11420080 */
  push32((uint32_t)(0x11420080u));
  /* 11414a76 push edx */
  push32((uint32_t)(EDX));
  /* 11414a77 call edi */
  call_ind((uint32_t)(EDI), 0x11414a79u);
  /* 11414a79 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414a7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11414a7e push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414a83 push 0x11420088 */
  push32((uint32_t)(0x11420088u));
  /* 11414a88 push eax */
  push32((uint32_t)(EAX));
  /* 11414a89 call edi */
  call_ind((uint32_t)(EDI), 0x11414a8bu);
  /* 11414a8b mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414a8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11414a90 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414a95 push 0x11420070 */
  push32((uint32_t)(0x11420070u));
  /* 11414a9a push ecx */
  push32((uint32_t)(ECX));
  /* 11414a9b call edi */
  call_ind((uint32_t)(EDI), 0x11414a9du);
  /* 11414a9d mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414aa2 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414aa7 push 0x11420078 */
  push32((uint32_t)(0x11420078u));
  /* 11414aac push edx */
  push32((uint32_t)(EDX));
  /* 11414aad call edi */
  call_ind((uint32_t)(EDI), 0x11414aafu);
  /* 11414aaf mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414ab2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414ab5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414ab7 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414abc push 0x11420068 */
  push32((uint32_t)(0x11420068u));
  /* 11414ac1 push eax */
  push32((uint32_t)(EAX));
  /* 11414ac2 call edi */
  call_ind((uint32_t)(EDI), 0x11414ac4u);
  /* 11414ac4 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414ac7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414ac9 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414ace push 0x1141f950 */
  push32((uint32_t)(0x1141f950u));
  /* 11414ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 11414ad4 call edi */
  call_ind((uint32_t)(EDI), 0x11414ad6u);
  /* 11414ad6 mov edx, dword ptr [0x1141c07c] */
  EDX = (r32((uint32_t)(0x1141c07c)));
  /* 11414adc push 2 */
  push32((uint32_t)(0x2u));
  /* 11414ade push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11414ae3 jmp 0x11414c20 */
  goto L_11414c20;
L_11414ae8:;
  /* 11414ae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11414aea jne 0x11414b5f */
  if (!C.zf) goto L_11414b5f;
  /* 11414aec mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414aef mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414af5 push eax */
  push32((uint32_t)(EAX));
  /* 11414af6 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11414af8 push 0x11421510 */
  push32((uint32_t)(0x11421510u));
  /* 11414afd push edx */
  push32((uint32_t)(EDX));
  /* 11414afe call edi */
  call_ind((uint32_t)(EDI), 0x11414b00u);
  /* 11414b00 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414b03 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414b05 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414b07 push 0x11421528 */
  push32((uint32_t)(0x11421528u));
  /* 11414b0c push eax */
  push32((uint32_t)(EAX));
  /* 11414b0d call edi */
  call_ind((uint32_t)(EDI), 0x11414b0fu);
  /* 11414b0f mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414b12 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414b14 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414b16 push 0x11421520 */
  push32((uint32_t)(0x11421520u));
  /* 11414b1b push ecx */
  push32((uint32_t)(ECX));
  /* 11414b1c call edi */
  call_ind((uint32_t)(EDI), 0x11414b1eu);
  /* 11414b1e mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414b21 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414b23 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414b25 push 0x11421538 */
  push32((uint32_t)(0x11421538u));
  /* 11414b2a push edx */
  push32((uint32_t)(EDX));
  /* 11414b2b call edi */
  call_ind((uint32_t)(EDI), 0x11414b2du);
  /* 11414b2d mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414b30 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414b33 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414b35 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414b37 push 0x11421530 */
  push32((uint32_t)(0x11421530u));
  /* 11414b3c push eax */
  push32((uint32_t)(EAX));
  /* 11414b3d call edi */
  call_ind((uint32_t)(EDI), 0x11414b3fu);
  /* 11414b3f mov ecx, dword ptr [0x1141c064] */
  ECX = (r32((uint32_t)(0x1141c064)));
  /* 11414b45 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414b48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414b4a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11414b4f mov edx, dword ptr [ecx + 0x2d3] */
  EDX = (r32((uint32_t)(ECX + 0x2d3)));
  /* 11414b55 push edx */
  push32((uint32_t)(EDX));
  /* 11414b56 push eax */
  push32((uint32_t)(EAX));
  /* 11414b57 call edi */
  call_ind((uint32_t)(EDI), 0x11414b59u);
  /* 11414b59 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414b5c pop edi */
  EDI = (pop32());
  /* 11414b5d pop esi */
  ESI = (pop32());
  /* 11414b5e ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414b5f:;
  /* 11414b5f cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414b62 jne 0x11414c33 */
  if (!C.zf) goto L_11414c33;
  /* 11414b68 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414b6b mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414b75 push 0x1141f950 */
  push32((uint32_t)(0x1141f950u));
  /* 11414b7a push ecx */
  push32((uint32_t)(ECX));
  /* 11414b7b call edi */
  call_ind((uint32_t)(EDI), 0x11414b7du);
  /* 11414b7d mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414b80 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414b84 push 0x11420068 */
  push32((uint32_t)(0x11420068u));
  /* 11414b89 push edx */
  push32((uint32_t)(EDX));
  /* 11414b8a call edi */
  call_ind((uint32_t)(EDI), 0x11414b8cu);
  /* 11414b8c mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414b8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11414b91 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414b93 push 0x11420078 */
  push32((uint32_t)(0x11420078u));
  /* 11414b98 push eax */
  push32((uint32_t)(EAX));
  /* 11414b99 call edi */
  call_ind((uint32_t)(EDI), 0x11414b9bu);
  /* 11414b9b mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414b9e push 2 */
  push32((uint32_t)(0x2u));
  /* 11414ba0 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414ba2 push 0x11420070 */
  push32((uint32_t)(0x11420070u));
  /* 11414ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 11414ba8 call edi */
  call_ind((uint32_t)(EDI), 0x11414baau);
  /* 11414baa mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414bad add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414bb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414bb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414bb4 push 0x11420088 */
  push32((uint32_t)(0x11420088u));
  /* 11414bb9 push edx */
  push32((uint32_t)(EDX));
  /* 11414bba call edi */
  call_ind((uint32_t)(EDI), 0x11414bbcu);
  /* 11414bbc mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414bbf push 2 */
  push32((uint32_t)(0x2u));
  /* 11414bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414bc3 push 0x11420080 */
  push32((uint32_t)(0x11420080u));
  /* 11414bc8 push eax */
  push32((uint32_t)(EAX));
  /* 11414bc9 call edi */
  call_ind((uint32_t)(EDI), 0x11414bcbu);
  /* 11414bcb mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414bce push 2 */
  push32((uint32_t)(0x2u));
  /* 11414bd0 push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 11414bd5 push 0x11420098 */
  push32((uint32_t)(0x11420098u));
  /* 11414bda push ecx */
  push32((uint32_t)(ECX));
  /* 11414bdb call edi */
  call_ind((uint32_t)(EDI), 0x11414bddu);
  /* 11414bdd mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414be0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414be2 push 0xd0 */
  push32((uint32_t)(0xd0u));
  /* 11414be7 push 0x11420090 */
  push32((uint32_t)(0x11420090u));
  /* 11414bec push edx */
  push32((uint32_t)(EDX));
  /* 11414bed call edi */
  call_ind((uint32_t)(EDI), 0x11414befu);
  /* 11414bef mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414bf2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414bf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414bf7 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11414bfc push 0x11420060 */
  push32((uint32_t)(0x11420060u));
  /* 11414c01 push eax */
  push32((uint32_t)(EAX));
  /* 11414c02 call edi */
  call_ind((uint32_t)(EDI), 0x11414c04u);
  /* 11414c04 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414c0b push 0x11420058 */
  push32((uint32_t)(0x11420058u));
  /* 11414c10 push ecx */
  push32((uint32_t)(ECX));
  /* 11414c11 call edi */
  call_ind((uint32_t)(EDI), 0x11414c13u);
  /* 11414c13 mov edx, dword ptr [0x1141c078] */
  EDX = (r32((uint32_t)(0x1141c078)));
  /* 11414c19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414c1b push 0xa0 */
  push32((uint32_t)(0xa0u));
L_11414c20:;
  /* 11414c20 mov eax, dword ptr [edx + 0x2d3] */
  EAX = (r32((uint32_t)(EDX + 0x2d3)));
  /* 11414c26 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414c29 push eax */
  push32((uint32_t)(EAX));
  /* 11414c2a push ecx */
  push32((uint32_t)(ECX));
  /* 11414c2b call edi */
  call_ind((uint32_t)(EDI), 0x11414c2du);
  /* 11414c2d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414c30 pop edi */
  EDI = (pop32());
  /* 11414c31 pop esi */
  ESI = (pop32());
  /* 11414c32 ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414c33:;
  /* 11414c33 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414c36 jne 0x11414c8e */
  if (!C.zf) goto L_11414c8e;
  /* 11414c38 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414c3b mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414c41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414c45 push 0x1141f868 */
  push32((uint32_t)(0x1141f868u));
  /* 11414c4a push edx */
  push32((uint32_t)(EDX));
  /* 11414c4b call edi */
  call_ind((uint32_t)(EDI), 0x11414c4du);
  /* 11414c4d mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414c50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414c52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414c54 push 0x1141f870 */
  push32((uint32_t)(0x1141f870u));
  /* 11414c59 push eax */
  push32((uint32_t)(EAX));
  /* 11414c5a call edi */
  call_ind((uint32_t)(EDI), 0x11414c5cu);
  /* 11414c5c mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414c5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11414c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414c63 push 0x1141f878 */
  push32((uint32_t)(0x1141f878u));
  /* 11414c68 push ecx */
  push32((uint32_t)(ECX));
  /* 11414c69 call edi */
  call_ind((uint32_t)(EDI), 0x11414c6bu);
  /* 11414c6b mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414c6e push 2 */
  push32((uint32_t)(0x2u));
  /* 11414c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414c72 push 0x1141f880 */
  push32((uint32_t)(0x1141f880u));
  /* 11414c77 push edx */
  push32((uint32_t)(EDX));
  /* 11414c78 call edi */
  call_ind((uint32_t)(EDI), 0x11414c7au);
  /* 11414c7a mov eax, dword ptr [0x1141c074] */
  EAX = (r32((uint32_t)(0x1141c074)));
  /* 11414c7f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414c82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414c84 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11414c89 jmp 0x11414d7a */
  goto L_11414d7a;
L_11414c8e:;
  /* 11414c8e cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414c91 jne 0x11414d1a */
  if (!C.zf) goto L_11414d1a;
  /* 11414c97 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414c9a mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11414ca2 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414ca7 push 0x1141fcb0 */
  push32((uint32_t)(0x1141fcb0u));
  /* 11414cac push eax */
  push32((uint32_t)(EAX));
  /* 11414cad call edi */
  call_ind((uint32_t)(EDI), 0x11414cafu);
  /* 11414caf mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414cb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414cb4 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414cb9 push 0x1141fca8 */
  push32((uint32_t)(0x1141fca8u));
  /* 11414cbe push ecx */
  push32((uint32_t)(ECX));
  /* 11414cbf call edi */
  call_ind((uint32_t)(EDI), 0x11414cc1u);
  /* 11414cc1 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414cc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414cc6 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414ccb push 0x1141fcc0 */
  push32((uint32_t)(0x1141fcc0u));
  /* 11414cd0 push edx */
  push32((uint32_t)(EDX));
  /* 11414cd1 call edi */
  call_ind((uint32_t)(EDI), 0x11414cd3u);
  /* 11414cd3 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414cd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414cd8 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414cdd push 0x1141fcb8 */
  push32((uint32_t)(0x1141fcb8u));
  /* 11414ce2 push eax */
  push32((uint32_t)(EAX));
  /* 11414ce3 call edi */
  call_ind((uint32_t)(EDI), 0x11414ce5u);
  /* 11414ce5 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414ce8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414ceb push 2 */
  push32((uint32_t)(0x2u));
  /* 11414ced push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11414cf2 push 0x1141f970 */
  push32((uint32_t)(0x1141f970u));
  /* 11414cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 11414cf8 call edi */
  call_ind((uint32_t)(EDI), 0x11414cfau);
  /* 11414cfa mov edx, dword ptr [0x1141c084] */
  EDX = (r32((uint32_t)(0x1141c084)));
  /* 11414d00 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414d03 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414d05 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11414d0a mov eax, dword ptr [edx + 0x2d3] */
  EAX = (r32((uint32_t)(EDX + 0x2d3)));
  /* 11414d10 push eax */
  push32((uint32_t)(EAX));
  /* 11414d11 push ecx */
  push32((uint32_t)(ECX));
  /* 11414d12 call edi */
  call_ind((uint32_t)(EDI), 0x11414d14u);
  /* 11414d14 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414d17 pop edi */
  EDI = (pop32());
  /* 11414d18 pop esi */
  ESI = (pop32());
  /* 11414d19 ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414d1a:;
  /* 11414d1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11414d1c jne 0x11414d8d */
  if (!C.zf) goto L_11414d8d;
  /* 11414d1e mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414d21 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414d27 push eax */
  push32((uint32_t)(EAX));
  /* 11414d28 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11414d2d push 0x1141f828 */
  push32((uint32_t)(0x1141f828u));
  /* 11414d32 push edx */
  push32((uint32_t)(EDX));
  /* 11414d33 call edi */
  call_ind((uint32_t)(EDI), 0x11414d35u);
  /* 11414d35 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414d38 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414d3a push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414d3f push 0x1141f858 */
  push32((uint32_t)(0x1141f858u));
  /* 11414d44 push eax */
  push32((uint32_t)(EAX));
  /* 11414d45 call edi */
  call_ind((uint32_t)(EDI), 0x11414d47u);
  /* 11414d47 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414d4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11414d4c push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11414d51 push 0x1141f848 */
  push32((uint32_t)(0x1141f848u));
  /* 11414d56 push ecx */
  push32((uint32_t)(ECX));
  /* 11414d57 call edi */
  call_ind((uint32_t)(EDI), 0x11414d59u);
  /* 11414d59 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414d5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11414d5e push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11414d63 push 0x1141f860 */
  push32((uint32_t)(0x1141f860u));
  /* 11414d68 push edx */
  push32((uint32_t)(EDX));
  /* 11414d69 call edi */
  call_ind((uint32_t)(EDI), 0x11414d6bu);
  /* 11414d6b mov eax, dword ptr [0x1141c064] */
  EAX = (r32((uint32_t)(0x1141c064)));
  /* 11414d70 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414d73 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414d75 push 0xa0 */
  push32((uint32_t)(0xa0u));
L_11414d7a:;
  /* 11414d7a mov ecx, dword ptr [eax + 0x2d3] */
  ECX = (r32((uint32_t)(EAX + 0x2d3)));
  /* 11414d80 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414d83 push ecx */
  push32((uint32_t)(ECX));
  /* 11414d84 push edx */
  push32((uint32_t)(EDX));
  /* 11414d85 call edi */
  call_ind((uint32_t)(EDI), 0x11414d87u);
  /* 11414d87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414d8a pop edi */
  EDI = (pop32());
  /* 11414d8b pop esi */
  ESI = (pop32());
  /* 11414d8c ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
L_11414d8d:;
  /* 11414d8d cmp eax, 7 */
  { uint32_t _a=(EAX),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11414d90 jne 0x11414e03 */
  if (!C.zf) goto L_11414e03;
  /* 11414d92 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414d95 mov edi, dword ptr [0x1141b15c] */
  EDI = (r32((uint32_t)(0x1141b15c)));
  /* 11414d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11414d9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11414d9f push 0x1141f970 */
  push32((uint32_t)(0x1141f970u));
  /* 11414da4 push eax */
  push32((uint32_t)(EAX));
  /* 11414da5 call edi */
  call_ind((uint32_t)(EDI), 0x11414da7u);
  /* 11414da7 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414daa push 2 */
  push32((uint32_t)(0x2u));
  /* 11414dac push 0 */
  push32((uint32_t)(0x0u));
  /* 11414dae push 0x1141fcb8 */
  push32((uint32_t)(0x1141fcb8u));
  /* 11414db3 push ecx */
  push32((uint32_t)(ECX));
  /* 11414db4 call edi */
  call_ind((uint32_t)(EDI), 0x11414db6u);
  /* 11414db6 mov dl, byte ptr [esi + 8] */
  DL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414db9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414dbb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414dbd push 0x1141fcc0 */
  push32((uint32_t)(0x1141fcc0u));
  /* 11414dc2 push edx */
  push32((uint32_t)(EDX));
  /* 11414dc3 call edi */
  call_ind((uint32_t)(EDI), 0x11414dc5u);
  /* 11414dc5 mov al, byte ptr [esi + 8] */
  AL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414dc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11414dca push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11414dcc push 0x1141fca8 */
  push32((uint32_t)(0x1141fca8u));
  /* 11414dd1 push eax */
  push32((uint32_t)(EAX));
  /* 11414dd2 call edi */
  call_ind((uint32_t)(EDI), 0x11414dd4u);
  /* 11414dd4 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414dd7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414dda push 2 */
  push32((uint32_t)(0x2u));
  /* 11414ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 11414dde push 0x1141fcb0 */
  push32((uint32_t)(0x1141fcb0u));
  /* 11414de3 push ecx */
  push32((uint32_t)(ECX));
  /* 11414de4 call edi */
  call_ind((uint32_t)(EDI), 0x11414de6u);
  /* 11414de6 mov edx, dword ptr [0x1141c080] */
  EDX = (r32((uint32_t)(0x1141c080)));
  /* 11414dec mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11414def push 2 */
  push32((uint32_t)(0x2u));
  /* 11414df1 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11414df6 mov eax, dword ptr [edx + 0x2d3] */
  EAX = (r32((uint32_t)(EDX + 0x2d3)));
  /* 11414dfc push eax */
  push32((uint32_t)(EAX));
  /* 11414dfd push ecx */
  push32((uint32_t)(ECX));
  /* 11414dfe call edi */
  call_ind((uint32_t)(EDI), 0x11414e00u);
  /* 11414e00 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11414e03:;
  /* 11414e03 pop edi */
  EDI = (pop32());
  /* 11414e04 pop esi */
  ESI = (pop32());
  /* 11414e05 ret  */
  ESPCHK(0x11414540u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e30 @ 0x11414e30 (11 bytes, 4 insns) */
void f_11414e30(void) {
  FTRACE(0x11414e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11414e30 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11414e34 call 0x114155cb */
  push32(0x11414e39u); f_114155cb();
  /* 11414e39 pop ecx */
  ECX = (pop32());
  /* 11414e3a ret  */
  ESPCHK(0x11414e30u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11414e40 (254 bytes, 109 insns) */
void f_11414e40(void) {
  FTRACE(0x11414e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11414e40 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11414e44 push edi */
  push32((uint32_t)(EDI));
  /* 11414e45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11414e47 je 0x11414ec3 */
  if (C.zf) goto L_11414ec3;
  /* 11414e49 push esi */
  push32((uint32_t)(ESI));
  /* 11414e4a push ebx */
  push32((uint32_t)(EBX));
  /* 11414e4b mov ebx, ecx */
  EBX = (ECX);
  /* 11414e4d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11414e51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11414e57 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11414e5b jne 0x11414e64 */
  if (!C.zf) goto L_11414e64;
  /* 11414e5d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11414e60 jne 0x11414ed1 */
  if (!C.zf) goto L_11414ed1;
  /* 11414e62 jmp 0x11414e85 */
  goto L_11414e85;
L_11414e64:;
  /* 11414e64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11414e66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11414e67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11414e69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11414e6a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11414e6b je 0x11414e92 */
  if (C.zf) goto L_11414e92;
  /* 11414e6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414e6f je 0x11414e9a */
  if (C.zf) goto L_11414e9a;
  /* 11414e71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11414e77 jne 0x11414e64 */
  if (!C.zf) goto L_11414e64;
  /* 11414e79 mov ebx, ecx */
  EBX = (ECX);
  /* 11414e7b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11414e7e jne 0x11414ed1 */
  if (!C.zf) goto L_11414ed1;
L_11414e80:;
  /* 11414e80 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11414e83 je 0x11414e92 */
  if (C.zf) goto L_11414e92;
L_11414e85:;
  /* 11414e85 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11414e87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11414e88 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11414e8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11414e8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414e8d je 0x11414ebe */
  if (C.zf) goto L_11414ebe;
  /* 11414e8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11414e90 jne 0x11414e85 */
  if (!C.zf) goto L_11414e85;
L_11414e92:;
  /* 11414e92 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11414e96 pop ebx */
  EBX = (pop32());
  /* 11414e97 pop esi */
  ESI = (pop32());
  /* 11414e98 pop edi */
  EDI = (pop32());
  /* 11414e99 ret  */
  ESPCHK(0x11414e40u, _esp0);
  ESP += 4; return;
L_11414e9a:;
  /* 11414e9a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11414ea0 je 0x11414eb4 */
  if (C.zf) goto L_11414eb4;
L_11414ea2:;
  /* 11414ea2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11414ea4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11414ea5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11414ea6 je 0x11414f36 */
  if (C.zf) goto L_11414f36;
  /* 11414eac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11414eb2 jne 0x11414ea2 */
  if (!C.zf) goto L_11414ea2;
L_11414eb4:;
  /* 11414eb4 mov ebx, ecx */
  EBX = (ECX);
  /* 11414eb6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11414eb9 jne 0x11414f27 */
  if (!C.zf) goto L_11414f27;
L_11414ebb:;
  /* 11414ebb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11414ebd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11414ebe:;
  /* 11414ebe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11414ebf jne 0x11414ebb */
  if (!C.zf) goto L_11414ebb;
  /* 11414ec1 pop ebx */
  EBX = (pop32());
  /* 11414ec2 pop esi */
  ESI = (pop32());
L_11414ec3:;
  /* 11414ec3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11414ec7 pop edi */
  EDI = (pop32());
  /* 11414ec8 ret  */
  ESPCHK(0x11414e40u, _esp0);
  ESP += 4; return;
L_11414ec9:;
  /* 11414ec9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11414ecb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11414ece dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11414ecf je 0x11414e80 */
  if (C.zf) goto L_11414e80;
L_11414ed1:;
  /* 11414ed1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11414ed6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11414ed8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11414eda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11414edd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11414edf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11414ee1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11414ee4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11414ee9 je 0x11414ec9 */
  if (C.zf) goto L_11414ec9;
  /* 11414eeb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11414eed je 0x11414f1b */
  if (C.zf) goto L_11414f1b;
  /* 11414eef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11414ef1 je 0x11414f11 */
  if (C.zf) goto L_11414f11;
  /* 11414ef3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11414ef9 je 0x11414f07 */
  if (C.zf) goto L_11414f07;
  /* 11414efb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11414f01 jne 0x11414ec9 */
  if (!C.zf) goto L_11414ec9;
  /* 11414f03 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11414f05 jmp 0x11414f1f */
  goto L_11414f1f;
L_11414f07:;
  /* 11414f07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11414f0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11414f0f jmp 0x11414f1f */
  goto L_11414f1f;
L_11414f11:;
  /* 11414f11 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11414f17 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11414f19 jmp 0x11414f1f */
  goto L_11414f1f;
L_11414f1b:;
  /* 11414f1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11414f1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11414f1f:;
  /* 11414f1f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11414f22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11414f24 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11414f25 je 0x11414f31 */
  if (C.zf) goto L_11414f31;
L_11414f27:;
  /* 11414f27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11414f29:;
  /* 11414f29 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11414f2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11414f2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11414f2f jne 0x11414f29 */
  if (!C.zf) goto L_11414f29;
L_11414f31:;
  /* 11414f31 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11414f34 jne 0x11414ebb */
  if (!C.zf) goto L_11414ebb;
L_11414f36:;
  /* 11414f36 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11414f3a pop ebx */
  EBX = (pop32());
  /* 11414f3b pop esi */
  ESI = (pop32());
  /* 11414f3c pop edi */
  EDI = (pop32());
  /* 11414f3d ret  */
  ESPCHK(0x11414e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f40 @ 0x11414f40 (62 bytes, 35 insns) */
void f_11414f40(void) {
  FTRACE(0x11414f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11414f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11414f41 mov ebp, esp */
  EBP = (ESP);
  /* 11414f43 push esi */
  push32((uint32_t)(ESI));
  /* 11414f44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11414f46 push eax */
  push32((uint32_t)(EAX));
  /* 11414f47 push eax */
  push32((uint32_t)(EAX));
  /* 11414f48 push eax */
  push32((uint32_t)(EAX));
  /* 11414f49 push eax */
  push32((uint32_t)(EAX));
  /* 11414f4a push eax */
  push32((uint32_t)(EAX));
  /* 11414f4b push eax */
  push32((uint32_t)(EAX));
  /* 11414f4c push eax */
  push32((uint32_t)(EAX));
  /* 11414f4d push eax */
  push32((uint32_t)(EAX));
  /* 11414f4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11414f51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11414f54:;
  /* 11414f54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11414f56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11414f58 je 0x11414f61 */
  if (C.zf) goto L_11414f61;
  /* 11414f5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11414f5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11414f5b");
  /* 11414f5f jmp 0x11414f54 */
  goto L_11414f54;
L_11414f61:;
  /* 11414f61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11414f64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11414f67 nop  */
  /* nop */
L_11414f68:;
  /* 11414f68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11414f69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11414f6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11414f6d je 0x11414f76 */
  if (C.zf) goto L_11414f76;
  /* 11414f6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11414f70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11414f70");
  /* 11414f74 jae 0x11414f68 */
  if (!C.cf) goto L_11414f68;
L_11414f76:;
  /* 11414f76 mov eax, ecx */
  EAX = (ECX);
  /* 11414f78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11414f7b pop esi */
  ESI = (pop32());
  /* 11414f7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11414f7d ret  */
  ESPCHK(0x11414f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f80 @ 0x11414f80 (133 bytes, 68 insns) */
void f_11414f80(void) {
  FTRACE(0x11414f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11414f80 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11414f84 push edi */
  push32((uint32_t)(EDI));
  /* 11414f85 push ebx */
  push32((uint32_t)(EBX));
  /* 11414f86 push esi */
  push32((uint32_t)(ESI));
  /* 11414f87 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11414f89 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11414f8d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11414f8f je 0x11414ffa */
  if (C.zf) goto L_11414ffa;
  /* 11414f91 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11414f94 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11414f96 je 0x11414fe7 */
  if (C.zf) goto L_11414fe7;
L_11414f98:;
  /* 11414f98 mov esi, edi */
  ESI = (EDI);
  /* 11414f9a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11414f9e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11414fa0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11414fa1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11414fa3 je 0x11414fba */
  if (C.zf) goto L_11414fba;
  /* 11414fa5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414fa7 je 0x11414fb4 */
  if (C.zf) goto L_11414fb4;
L_11414fa9:;
  /* 11414fa9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11414fab inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11414fac:;
  /* 11414fac cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11414fae je 0x11414fba */
  if (C.zf) goto L_11414fba;
  /* 11414fb0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414fb2 jne 0x11414fa9 */
  if (!C.zf) goto L_11414fa9;
L_11414fb4:;
  /* 11414fb4 pop esi */
  ESI = (pop32());
  /* 11414fb5 pop ebx */
  EBX = (pop32());
  /* 11414fb6 pop edi */
  EDI = (pop32());
  /* 11414fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11414fb9 ret  */
  ESPCHK(0x11414f80u, _esp0);
  ESP += 4; return;
L_11414fba:;
  /* 11414fba mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11414fbc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11414fbd cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11414fbf jne 0x11414fac */
  if (!C.zf) goto L_11414fac;
  /* 11414fc1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11414fc4:;
  /* 11414fc4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11414fc7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11414fc9 je 0x11414ff3 */
  if (C.zf) goto L_11414ff3;
  /* 11414fcb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11414fcd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11414fd0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11414fd2 jne 0x11414f98 */
  if (!C.zf) goto L_11414f98;
  /* 11414fd4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11414fd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11414fd9 je 0x11414ff3 */
  if (C.zf) goto L_11414ff3;
  /* 11414fdb mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11414fde add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11414fe1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11414fe3 je 0x11414fc4 */
  if (C.zf) goto L_11414fc4;
  /* 11414fe5 jmp 0x11414f98 */
  goto L_11414f98;
L_11414fe7:;
  /* 11414fe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11414fe9 pop esi */
  ESI = (pop32());
  /* 11414fea pop ebx */
  EBX = (pop32());
  /* 11414feb pop edi */
  EDI = (pop32());
  /* 11414fec mov al, dl */
  AL = (DL);
  /* 11414fee jmp 0x114156d6 */
  jmp_ind(0x114156d6u); return;
L_11414ff3:;
  /* 11414ff3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11414ff6 pop esi */
  ESI = (pop32());
  /* 11414ff7 pop ebx */
  EBX = (pop32());
  /* 11414ff8 pop edi */
  EDI = (pop32());
  /* 11414ff9 ret  */
  ESPCHK(0x11414f80u, _esp0);
  ESP += 4; return;
L_11414ffa:;
  /* 11414ffa mov eax, edi */
  EAX = (EDI);
  /* 11414ffc pop esi */
  ESI = (pop32());
  /* 11414ffd pop ebx */
  EBX = (pop32());
  /* 11414ffe pop edi */
  EDI = (pop32());
  /* 11414fff ret  */
  ESPCHK(0x11414f80u, _esp0);
  ESP += 4; return;
  /* 11415000 push esi */
  push32((uint32_t)(ESI));
  /* 11415001 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
}

/* FUN_10005000 @ 0x11415000 (49 bytes, 20 insns) */
void f_11415000(void) {
  FTRACE(0x11415000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415000 push esi */
  push32((uint32_t)(ESI));
  /* 11415001 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11415005 push edi */
  push32((uint32_t)(EDI));
  /* 11415006 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11415009 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1141500d je 0x11415015 */
  if (C.zf) goto L_11415015;
  /* 1141500f and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11415013 jmp 0x1141502c */
  goto L_1141502c;
L_11415015:;
  /* 11415015 push esi */
  push32((uint32_t)(ESI));
  /* 11415016 call 0x11415848 */
  push32(0x1141501bu); f_11415848();
  /* 1141501b push esi */
  push32((uint32_t)(ESI));
  /* 1141501c call 0x11415031 */
  push32(0x11415021u); f_11415031();
  /* 11415021 push esi */
  push32((uint32_t)(ESI));
  /* 11415022 mov edi, eax */
  EDI = (EAX);
  /* 11415024 call 0x1141589a */
  push32(0x11415029u); f_1141589a();
  /* 11415029 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1141502c:;
  /* 1141502c mov eax, edi */
  EAX = (EDI);
  /* 1141502e pop edi */
  EDI = (pop32());
  /* 1141502f pop esi */
  ESI = (pop32());
  /* 11415030 ret  */
  ESPCHK(0x11415000u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x11415031 (76 bytes, 30 insns) */
void f_11415031(void) {
  FTRACE(0x11415031u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415031 push esi */
  push32((uint32_t)(ESI));
  /* 11415032 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11415036 push edi */
  push32((uint32_t)(EDI));
  /* 11415037 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1141503a test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1141503e je 0x11415074 */
  if (C.zf) goto L_11415074;
  /* 11415040 push esi */
  push32((uint32_t)(ESI));
  /* 11415041 call 0x11415a25 */
  push32(0x11415046u); f_11415a25();
  /* 11415046 push esi */
  push32((uint32_t)(ESI));
  /* 11415047 mov edi, eax */
  EDI = (EAX);
  /* 11415049 call 0x114159cc */
  push32(0x1141504eu); f_114159cc();
  /* 1141504e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11415051 call 0x114158ec */
  push32(0x11415056u); f_114158ec();
  /* 11415056 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11415059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141505b jge 0x11415062 */
  if ((C.sf==C.of)) goto L_11415062;
  /* 1141505d or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11415060 jmp 0x11415074 */
  goto L_11415074;
L_11415062:;
  /* 11415062 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11415065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415067 je 0x11415074 */
  if (C.zf) goto L_11415074;
  /* 11415069 push eax */
  push32((uint32_t)(EAX));
  /* 1141506a call 0x114155cb */
  push32(0x1141506fu); f_114155cb();
  /* 1141506f and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 11415073 pop ecx */
  ECX = (pop32());
L_11415074:;
  /* 11415074 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11415078 mov eax, edi */
  EAX = (EDI);
  /* 1141507a pop edi */
  EDI = (pop32());
  /* 1141507b pop esi */
  ESI = (pop32());
  /* 1141507c ret  */
  ESPCHK(0x11415031u, _esp0);
  ESP += 4; return;
}

/* FUN_1000507d @ 0x1141507d (47 bytes, 18 insns) */
void f_1141507d(void) {
  FTRACE(0x1141507du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141507d push ebp */
  push32((uint32_t)(EBP));
  /* 1141507e mov ebp, esp */
  EBP = (ESP);
  /* 11415080 push esi */
  push32((uint32_t)(ESI));
  /* 11415081 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11415084 call 0x11415848 */
  push32(0x11415089u); f_11415848();
  /* 11415089 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1141508c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1141508f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11415092 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11415095 call 0x114150ac */
  push32(0x1141509au); f_114150ac();
  /* 1141509a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1141509d mov esi, eax */
  ESI = (EAX);
  /* 1141509f call 0x1141589a */
  push32(0x114150a4u); f_1141589a();
  /* 114150a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114150a7 mov eax, esi */
  EAX = (ESI);
  /* 114150a9 pop esi */
  ESI = (pop32());
  /* 114150aa pop ebp */
  EBP = (pop32());
  /* 114150ab ret  */
  ESPCHK(0x1141507du, _esp0);
  ESP += 4; return;
}

/* FUN_100050ac @ 0x114150ac (232 bytes, 92 insns) */
void f_114150ac(void) {
  FTRACE(0x114150acu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114150ac push ebp */
  push32((uint32_t)(EBP));
  /* 114150ad mov ebp, esp */
  EBP = (ESP);
  /* 114150af push ecx */
  push32((uint32_t)(ECX));
  /* 114150b0 push ebx */
  push32((uint32_t)(EBX));
  /* 114150b1 push esi */
  push32((uint32_t)(ESI));
  /* 114150b2 push edi */
  push32((uint32_t)(EDI));
  /* 114150b3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 114150b6 imul edi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114150ba mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 114150bd mov ecx, edi */
  ECX = (EDI);
  /* 114150bf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 114150c1 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 114150c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 114150c7 jne 0x114150d0 */
  if (!C.zf) goto L_114150d0;
  /* 114150c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114150cb jmp 0x11415179 */
  goto L_11415179;
L_114150d0:;
  /* 114150d0 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 114150d3 test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 114150d9 je 0x114150e3 */
  if (C.zf) goto L_114150e3;
  /* 114150db mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 114150de mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 114150e1 jmp 0x114150ef */
  goto L_114150ef;
L_114150e3:;
  /* 114150e3 mov dword ptr [ebp + 0x14], 0x1000 */
  w32((uint32_t)(EBP + 0x14), (0x1000u));
  /* 114150ea jmp 0x114150ef */
  goto L_114150ef;
L_114150ec:;
  /* 114150ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
L_114150ef:;
  /* 114150ef test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 114150f5 je 0x11415121 */
  if (C.zf) goto L_11415121;
  /* 114150f7 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 114150fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114150fc je 0x11415121 */
  if (C.zf) goto L_11415121;
  /* 114150fe cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415100 mov edi, ecx */
  EDI = (ECX);
  /* 11415102 jb 0x11415106 */
  if (C.cf) goto L_11415106;
  /* 11415104 mov edi, eax */
  EDI = (EAX);
L_11415106:;
  /* 11415106 push edi */
  push32((uint32_t)(EDI));
  /* 11415107 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11415109 push ebx */
  push32((uint32_t)(EBX));
  /* 1141510a call 0x11415e50 */
  push32(0x1141510fu); f_11415e50();
  /* 1141510f sub dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11415112 sub dword ptr [esi + 4], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EDI),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11415115 add dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11415117 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141511a add ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141511c mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1141511f jmp 0x1141516c */
  goto L_1141516c;
L_11415121:;
  /* 11415121 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415124 jb 0x11415154 */
  if (C.cf) goto L_11415154;
  /* 11415126 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141512a mov eax, ecx */
  EAX = (ECX);
  /* 1141512c je 0x11415137 */
  if (C.zf) goto L_11415137;
  /* 1141512e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11415130 div dword ptr [ebp + 0x14] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x14))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11415133 mov eax, ecx */
  EAX = (ECX);
  /* 11415135 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11415137:;
  /* 11415137 push eax */
  push32((uint32_t)(EAX));
  /* 11415138 push ebx */
  push32((uint32_t)(EBX));
  /* 11415139 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1141513c call 0x11415c0a */
  push32(0x11415141u); f_11415c0a();
  /* 11415141 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11415144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415146 je 0x1141517e */
  if (C.zf) goto L_1141517e;
  /* 11415148 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141514b je 0x11415184 */
  if (C.zf) goto L_11415184;
  /* 1141514d sub dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11415150 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415152 jmp 0x1141516c */
  goto L_1141516c;
L_11415154:;
  /* 11415154 push esi */
  push32((uint32_t)(ESI));
  /* 11415155 call 0x11415b2e */
  push32(0x1141515au); f_11415b2e();
  /* 1141515a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141515d pop ecx */
  ECX = (pop32());
  /* 1141515e je 0x11415188 */
  if (C.zf) goto L_11415188;
  /* 11415160 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11415162 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11415165 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11415166 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11415169 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1141516c:;
  /* 1141516c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415170 jne 0x114150ec */
  if (!C.zf) goto L_114150ec;
  /* 11415176 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
L_11415179:;
  /* 11415179 pop edi */
  EDI = (pop32());
  /* 1141517a pop esi */
  ESI = (pop32());
  /* 1141517b pop ebx */
  EBX = (pop32());
  /* 1141517c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141517d ret  */
  ESPCHK(0x114150acu, _esp0);
  ESP += 4; return;
L_1141517e:;
  /* 1141517e or dword ptr [esi + 0xc], 0x10 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x10u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11415182 jmp 0x11415188 */
  goto L_11415188;
L_11415184:;
  /* 11415184 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
L_11415188:;
  /* 11415188 mov eax, edi */
  EAX = (EDI);
  /* 1141518a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1141518c sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141518f div dword ptr [ebp + 0xc] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11415192 jmp 0x11415179 */
  goto L_11415179;
}

/* operator_new @ 0x11415194 (14 bytes, 6 insns) */
void f_11415194(void) {
  FTRACE(0x11415194u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415194 push 1 */
  push32((uint32_t)(0x1u));
  /* 11415196 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1141519a call 0x11416197 */
  push32(0x1141519fu); f_11416197();
  /* 1141519f pop ecx */
  ECX = (pop32());
  /* 114151a0 pop ecx */
  ECX = (pop32());
  /* 114151a1 ret  */
  ESPCHK(0x11415194u, _esp0);
  ESP += 4; return;
}

/* FUN_100051a2 @ 0x114151a2 (34 bytes, 15 insns) */
void f_114151a2(void) {
  FTRACE(0x114151a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114151a2 push esi */
  push32((uint32_t)(ESI));
  /* 114151a3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 114151a7 push edi */
  push32((uint32_t)(EDI));
  /* 114151a8 push esi */
  push32((uint32_t)(ESI));
  /* 114151a9 call 0x11415848 */
  push32(0x114151aeu); f_11415848();
  /* 114151ae push esi */
  push32((uint32_t)(ESI));
  /* 114151af call 0x114151c4 */
  push32(0x114151b4u); f_114151c4();
  /* 114151b4 push esi */
  push32((uint32_t)(ESI));
  /* 114151b5 mov edi, eax */
  EDI = (EAX);
  /* 114151b7 call 0x1141589a */
  push32(0x114151bcu); f_1141589a();
  /* 114151bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114151bf mov eax, edi */
  EAX = (EDI);
  /* 114151c1 pop edi */
  EDI = (pop32());
  /* 114151c2 pop esi */
  ESI = (pop32());
  /* 114151c3 ret  */
  ESPCHK(0x114151a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100051c4 @ 0x114151c4 (353 bytes, 127 insns) */
void f_114151c4(void) {
  FTRACE(0x114151c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114151c4 push ebp */
  push32((uint32_t)(EBP));
  /* 114151c5 mov ebp, esp */
  EBP = (ESP);
  /* 114151c7 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114151ca push ebx */
  push32((uint32_t)(EBX));
  /* 114151cb push esi */
  push32((uint32_t)(ESI));
  /* 114151cc push edi */
  push32((uint32_t)(EDI));
  /* 114151cd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 114151d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114151d2 mov esi, dword ptr [edi + 0x10] */
  ESI = (r32((uint32_t)(EDI + 0x10)));
  /* 114151d5 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114151d8 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 114151db jge 0x114151e0 */
  if ((C.sf==C.of)) goto L_114151e0;
  /* 114151dd mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_114151e0:;
  /* 114151e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 114151e2 push ebx */
  push32((uint32_t)(EBX));
  /* 114151e3 push esi */
  push32((uint32_t)(ESI));
  /* 114151e4 call 0x11416554 */
  push32(0x114151e9u); f_11416554();
  /* 114151e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114151ec cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114151ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114151f1 jl 0x11415252 */
  if ((C.sf!=C.of)) goto L_11415252;
  /* 114151f3 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 114151f6 test cx, 0x108 */
  { uint32_t _r=(CX)&(0x108u); fl_logic(_r,16); }
  /* 114151fb jne 0x11415205 */
  if (!C.zf) goto L_11415205;
  /* 114151fd sub eax, dword ptr [edi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11415200 jmp 0x11415320 */
  goto L_11415320;
L_11415205:;
  /* 11415205 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11415207 mov edx, dword ptr [edi + 8] */
  EDX = (r32((uint32_t)(EDI + 0x8)));
  /* 1141520a mov ebx, eax */
  EBX = (EAX);
  /* 1141520c sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141520e test cl, 3 */
  { uint32_t _r=(CL)&(0x3u); fl_logic(_r,8); }
  /* 11415211 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11415214 je 0x11415242 */
  if (C.zf) goto L_11415242;
  /* 11415216 mov ebx, esi */
  EBX = (ESI);
  /* 11415218 mov ecx, esi */
  ECX = (ESI);
  /* 1141521a sar ebx, 5 */
  EBX = (sh_sar((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 1141521d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11415220 mov ebx, dword ptr [ebx*4 + 0x11421b60] */
  EBX = (r32((uint32_t)(EBX*4 + 0x11421b60)));
  /* 11415227 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 1141522a test byte ptr [ebx + ecx*4 + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBX + ECX*4 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 1141522f je 0x1141525a */
  if (C.zf) goto L_1141525a;
  /* 11415231 mov ecx, edx */
  ECX = (EDX);
L_11415233:;
  /* 11415233 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415235 jae 0x1141525a */
  if (!C.cf) goto L_1141525a;
  /* 11415237 cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141523a jne 0x1141523f */
  if (!C.zf) goto L_1141523f;
  /* 1141523c inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1141523f:;
  /* 1141523f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11415240 jmp 0x11415233 */
  goto L_11415233;
L_11415242:;
  /* 11415242 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11415245 jne 0x1141525a */
  if (!C.zf) goto L_1141525a;
  /* 11415247 call 0x11416332 */
  push32(0x1141524cu); f_11416332();
  /* 1141524c mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11415252:;
  /* 11415252 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11415255 jmp 0x11415320 */
  goto L_11415320;
L_1141525a:;
  /* 1141525a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141525e jne 0x11415268 */
  if (!C.zf) goto L_11415268;
  /* 11415260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11415263 jmp 0x11415320 */
  goto L_11415320;
L_11415268:;
  /* 11415268 test byte ptr [edi + 0xc], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xc)))&(0x1u); fl_logic(_r,8); }
  /* 1141526c je 0x11415318 */
  if (C.zf) goto L_11415318;
  /* 11415272 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11415275 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11415277 jne 0x11415281 */
  if (!C.zf) goto L_11415281;
  /* 11415279 and dword ptr [ebp - 8], ecx */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(ECX); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1141527c jmp 0x11415318 */
  goto L_11415318;
L_11415281:;
  /* 11415281 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11415283 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415285 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11415288 mov eax, esi */
  EAX = (ESI);
  /* 1141528a sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1141528d lea ebx, [eax*4 + 0x11421b60] */
  EBX = ((uint32_t)(EAX*4 + 0x11421b60));
  /* 11415294 mov eax, esi */
  EAX = (ESI);
  /* 11415296 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11415299 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1141529c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1141529e shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 114152a1 test byte ptr [esi + eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 114152a6 je 0x11415312 */
  if (C.zf) goto L_11415312;
  /* 114152a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 114152aa push 0 */
  push32((uint32_t)(0x0u));
  /* 114152ac push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 114152af call 0x11416554 */
  push32(0x114152b4u); f_11416554();
  /* 114152b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114152b7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114152ba jne 0x114152d9 */
  if (!C.zf) goto L_114152d9;
  /* 114152bc mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 114152bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114152c2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_114152c4:;
  /* 114152c4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114152c6 jae 0x114152d3 */
  if (!C.cf) goto L_114152d3;
  /* 114152c8 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114152cb jne 0x114152d0 */
  if (!C.zf) goto L_114152d0;
  /* 114152cd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_114152d0:;
  /* 114152d0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114152d1 jmp 0x114152c4 */
  goto L_114152c4;
L_114152d3:;
  /* 114152d3 test byte ptr [edi + 0xd], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xd)))&(0x20u); fl_logic(_r,8); }
  /* 114152d7 jmp 0x1141530d */
  goto L_1141530d;
L_114152d9:;
  /* 114152d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114152db push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 114152de push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 114152e1 call 0x11416554 */
  push32(0x114152e6u); f_11416554();
  /* 114152e6 mov eax, 0x200 */
  EAX = (0x200u);
  /* 114152eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114152ee cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114152f1 ja 0x11415300 */
  if ((!C.cf&&!C.zf)) goto L_11415300;
  /* 114152f3 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 114152f6 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 114152f9 je 0x11415300 */
  if (C.zf) goto L_11415300;
  /* 114152fb test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 114152fe je 0x11415303 */
  if (C.zf) goto L_11415303;
L_11415300:;
  /* 11415300 mov eax, dword ptr [edi + 0x18] */
  EAX = (r32((uint32_t)(EDI + 0x18)));
L_11415303:;
  /* 11415303 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11415306 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11415308 test byte ptr [esi + eax + 4], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x4u); fl_logic(_r,8); }
L_1141530d:;
  /* 1141530d je 0x11415312 */
  if (C.zf) goto L_11415312;
  /* 1141530f inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_11415312:;
  /* 11415312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11415315 sub dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_sub(_a,_b,_r,32); }
L_11415318:;
  /* 11415318 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1141531b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1141531e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11415320:;
  /* 11415320 pop edi */
  EDI = (pop32());
  /* 11415321 pop esi */
  ESI = (pop32());
  /* 11415322 pop ebx */
  EBX = (pop32());
  /* 11415323 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11415324 ret  */
  ESPCHK(0x114151c4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005325 @ 0x11415325 (44 bytes, 17 insns) */
void f_11415325(void) {
  FTRACE(0x11415325u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415325 push ebp */
  push32((uint32_t)(EBP));
  /* 11415326 mov ebp, esp */
  EBP = (ESP);
  /* 11415328 push esi */
  push32((uint32_t)(ESI));
  /* 11415329 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1141532c call 0x11415848 */
  push32(0x11415331u); f_11415848();
  /* 11415331 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11415334 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11415337 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1141533a call 0x11415351 */
  push32(0x1141533fu); f_11415351();
  /* 1141533f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11415342 mov esi, eax */
  ESI = (EAX);
  /* 11415344 call 0x1141589a */
  push32(0x11415349u); f_1141589a();
  /* 11415349 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141534c mov eax, esi */
  EAX = (ESI);
  /* 1141534e pop esi */
  ESI = (pop32());
  /* 1141534f pop ebp */
  EBP = (pop32());
  /* 11415350 ret  */
  ESPCHK(0x11415325u, _esp0);
  ESP += 4; return;
}

/* FUN_10005351 @ 0x11415351 (141 bytes, 55 insns) */
void f_11415351(void) {
  FTRACE(0x11415351u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415351 push esi */
  push32((uint32_t)(ESI));
  /* 11415352 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11415356 push edi */
  push32((uint32_t)(EDI));
  /* 11415357 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1141535a test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1141535c je 0x114153cd */
  if (C.zf) goto L_114153cd;
  /* 1141535e mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11415362 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11415364 je 0x11415370 */
  if (C.zf) goto L_11415370;
  /* 11415366 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415369 je 0x11415370 */
  if (C.zf) goto L_11415370;
  /* 1141536b cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141536e jne 0x114153cd */
  if (!C.zf) goto L_114153cd;
L_11415370:;
  /* 11415370 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 11415372 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415375 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11415378 jne 0x11415387 */
  if (!C.zf) goto L_11415387;
  /* 1141537a push esi */
  push32((uint32_t)(ESI));
  /* 1141537b call 0x114151c4 */
  push32(0x11415380u); f_114151c4();
  /* 11415380 add dword ptr [esp + 0x14], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EAX),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 11415384 pop ecx */
  ECX = (pop32());
  /* 11415385 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11415387:;
  /* 11415387 push esi */
  push32((uint32_t)(ESI));
  /* 11415388 call 0x11415a25 */
  push32(0x1141538du); f_11415a25();
  /* 1141538d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11415390 pop ecx */
  ECX = (pop32());
  /* 11415391 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11415393 je 0x1141539c */
  if (C.zf) goto L_1141539c;
  /* 11415395 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11415397 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1141539a jmp 0x114153b0 */
  goto L_114153b0;
L_1141539c:;
  /* 1141539c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1141539e je 0x114153b0 */
  if (C.zf) goto L_114153b0;
  /* 114153a0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 114153a2 je 0x114153b0 */
  if (C.zf) goto L_114153b0;
  /* 114153a4 test ah, 4 */
  { uint32_t _r=(AH)&(0x4u); fl_logic(_r,8); }
  /* 114153a7 jne 0x114153b0 */
  if (!C.zf) goto L_114153b0;
  /* 114153a9 mov dword ptr [esi + 0x18], 0x200 */
  w32((uint32_t)(ESI + 0x18), (0x200u));
L_114153b0:;
  /* 114153b0 push edi */
  push32((uint32_t)(EDI));
  /* 114153b1 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 114153b5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 114153b8 call 0x11416554 */
  push32(0x114153bdu); f_11416554();
  /* 114153bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114153c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114153c2 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114153c5 setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 114153c8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114153c9 mov eax, ecx */
  EAX = (ECX);
  /* 114153cb jmp 0x114153db */
  goto L_114153db;
L_114153cd:;
  /* 114153cd call 0x11416332 */
  push32(0x114153d2u); f_11416332();
  /* 114153d2 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 114153d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_114153db:;
  /* 114153db pop edi */
  EDI = (pop32());
  /* 114153dc pop esi */
  ESI = (pop32());
  /* 114153dd ret  */
  ESPCHK(0x11415351u, _esp0);
  ESP += 4; return;
}

/* FUN_100053de @ 0x114153de (49 bytes, 21 insns) */
void f_114153de(void) {
  FTRACE(0x114153deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114153de push esi */
  push32((uint32_t)(ESI));
  /* 114153df call 0x1141679c */
  push32(0x114153e4u); f_1141679c();
  /* 114153e4 mov esi, eax */
  ESI = (EAX);
  /* 114153e6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114153e8 jne 0x114153ec */
  if (!C.zf) goto L_114153ec;
  /* 114153ea pop esi */
  ESI = (pop32());
  /* 114153eb ret  */
  ESPCHK(0x114153deu, _esp0);
  ESP += 4; return;
L_114153ec:;
  /* 114153ec push edi */
  push32((uint32_t)(EDI));
  /* 114153ed push esi */
  push32((uint32_t)(ESI));
  /* 114153ee push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 114153f2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 114153f6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 114153fa call 0x1141662c */
  push32(0x114153ffu); f_1141662c();
  /* 114153ff push esi */
  push32((uint32_t)(ESI));
  /* 11415400 mov edi, eax */
  EDI = (EAX);
  /* 11415402 call 0x1141589a */
  push32(0x11415407u); f_1141589a();
  /* 11415407 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141540a mov eax, edi */
  EAX = (EDI);
  /* 1141540c pop edi */
  EDI = (pop32());
  /* 1141540d pop esi */
  ESI = (pop32());
  /* 1141540e ret  */
  ESPCHK(0x114153deu, _esp0);
  ESP += 4; return;
}

/* FUN_1000540f @ 0x1141540f (19 bytes, 6 insns) */
void f_1141540f(void) {
  FTRACE(0x1141540fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141540f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11415411 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11415415 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11415419 call 0x114153de */
  push32(0x1141541eu); f_114153de();
  /* 1141541e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11415421 ret  */
  ESPCHK(0x1141540fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005422 @ 0x11415422 (217 bytes, 57 insns) */
void f_11415422(void) {
  FTRACE(0x11415422u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415422 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11415426 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415429 jne 0x114154b7 */
  if (!C.zf) goto L_114154b7;
  /* 1141542f call dword ptr [0x1141b078] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b078))), 0x11415435u);
  /* 11415435 push 1 */
  push32((uint32_t)(0x1u));
  /* 11415437 mov dword ptr [0x114215c0], eax */
  w32((uint32_t)(0x114215c0), (EAX));
  /* 1141543c call 0x114170bb */
  push32(0x11415441u); f_114170bb();
  /* 11415441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415443 pop ecx */
  ECX = (pop32());
  /* 11415444 je 0x11415482 */
  if (C.zf) goto L_11415482;
  /* 11415446 mov eax, dword ptr [0x114215c0] */
  EAX = (r32((uint32_t)(0x114215c0)));
  /* 1141544b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1141544d mov cl, byte ptr [0x114215c1] */
  CL = (r8((uint32_t)(0x114215c1)));
  /* 11415453 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11415458 shr dword ptr [0x114215c0], 0x10 */
  w32((uint32_t)(0x114215c0), (sh_shr((uint32_t)(r32((uint32_t)(0x114215c0))), (0x10u)&0x1f, 32)));
  /* 1141545f mov dword ptr [0x114215c8], eax */
  w32((uint32_t)(0x114215c8), (EAX));
  /* 11415464 mov dword ptr [0x114215cc], ecx */
  w32((uint32_t)(0x114215cc), (ECX));
  /* 1141546a shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1141546d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141546f mov dword ptr [0x114215c4], eax */
  w32((uint32_t)(0x114215c4), (EAX));
  /* 11415474 call 0x11416982 */
  push32(0x11415479u); f_11416982();
  /* 11415479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141547b jne 0x11415486 */
  if (!C.zf) goto L_11415486;
  /* 1141547d call 0x11417118 */
  push32(0x11415482u); f_11417118();
L_11415482:;
  /* 11415482 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11415484 jmp 0x114154f8 */
  goto L_114154f8;
L_11415486:;
  /* 11415486 call dword ptr [0x1141b074] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b074))), 0x1141548cu);
  /* 1141548c mov dword ptr [0x11422c84], eax */
  w32((uint32_t)(0x11422c84), (EAX));
  /* 11415491 call 0x11416e14 */
  push32(0x11415496u); f_11416e14();
  /* 11415496 mov dword ptr [0x114215a8], eax */
  w32((uint32_t)(0x114215a8), (EAX));
  /* 1141549b call 0x11416344 */
  push32(0x114154a0u); f_11416344();
  /* 114154a0 call 0x11416bc7 */
  push32(0x114154a5u); f_11416bc7();
  /* 114154a5 call 0x11416b0e */
  push32(0x114154aau); f_11416b0e();
  /* 114154aa call 0x11416864 */
  push32(0x114154afu); f_11416864();
  /* 114154af inc dword ptr [0x114215a4] */
  { uint32_t _r=(r32((uint32_t)(0x114215a4)))+1; w32((uint32_t)(0x114215a4), (_r)); fl_inc(_r,32); }
  /* 114154b5 jmp 0x114154f5 */
  goto L_114154f5;
L_114154b7:;
  /* 114154b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114154b9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114154bb jne 0x114154e9 */
  if (!C.zf) goto L_114154e9;
  /* 114154bd cmp dword ptr [0x114215a4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x114215a4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114154c3 jle 0x11415482 */
  if ((C.zf||C.sf!=C.of)) goto L_11415482;
  /* 114154c5 dec dword ptr [0x114215a4] */
  { uint32_t _r=(r32((uint32_t)(0x114215a4)))-1; w32((uint32_t)(0x114215a4), (_r)); fl_dec(_r,32); }
  /* 114154cb cmp dword ptr [0x114215f8], ecx */
  { uint32_t _a=(r32((uint32_t)(0x114215f8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114154d1 jne 0x114154d8 */
  if (!C.zf) goto L_114154d8;
  /* 114154d3 call 0x114168a2 */
  push32(0x114154d8u); f_114168a2();
L_114154d8:;
  /* 114154d8 call 0x11416500 */
  push32(0x114154ddu); f_11416500();
  /* 114154dd call 0x114169d6 */
  push32(0x114154e2u); f_114169d6();
  /* 114154e2 call 0x11417118 */
  push32(0x114154e7u); f_11417118();
  /* 114154e7 jmp 0x114154f5 */
  goto L_114154f5;
L_114154e9:;
  /* 114154e9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114154ec jne 0x114154f5 */
  if (!C.zf) goto L_114154f5;
  /* 114154ee push ecx */
  push32((uint32_t)(ECX));
  /* 114154ef call 0x11416a6e */
  push32(0x114154f4u); f_11416a6e();
  /* 114154f4 pop ecx */
  ECX = (pop32());
L_114154f5:;
  /* 114154f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 114154f7 pop eax */
  EAX = (pop32());
L_114154f8:;
  /* 114154f8 ret 0xc */
  ESPCHK(0x11415422u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x114154fb (157 bytes, 73 insns) */
void f_114154fb(void) {
  FTRACE(0x114154fbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114154fb push ebp */
  push32((uint32_t)(EBP));
  /* 114154fc mov ebp, esp */
  EBP = (ESP);
  /* 114154fe push ebx */
  push32((uint32_t)(EBX));
  /* 114154ff mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11415502 push esi */
  push32((uint32_t)(ESI));
  /* 11415503 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11415506 push edi */
  push32((uint32_t)(EDI));
  /* 11415507 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1141550a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1141550c jne 0x11415517 */
  if (!C.zf) goto L_11415517;
  /* 1141550e cmp dword ptr [0x114215a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114215a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415515 jmp 0x1141553d */
  goto L_1141553d;
L_11415517:;
  /* 11415517 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141551a je 0x11415521 */
  if (C.zf) goto L_11415521;
  /* 1141551c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141551f jne 0x11415543 */
  if (!C.zf) goto L_11415543;
L_11415521:;
  /* 11415521 mov eax, dword ptr [0x11422c88] */
  EAX = (r32((uint32_t)(0x11422c88)));
  /* 11415526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415528 je 0x11415533 */
  if (C.zf) goto L_11415533;
  /* 1141552a push edi */
  push32((uint32_t)(EDI));
  /* 1141552b push esi */
  push32((uint32_t)(ESI));
  /* 1141552c push ebx */
  push32((uint32_t)(EBX));
  /* 1141552d call eax */
  call_ind((uint32_t)(EAX), 0x1141552fu);
  /* 1141552f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415531 je 0x1141553f */
  if (C.zf) goto L_1141553f;
L_11415533:;
  /* 11415533 push edi */
  push32((uint32_t)(EDI));
  /* 11415534 push esi */
  push32((uint32_t)(ESI));
  /* 11415535 push ebx */
  push32((uint32_t)(EBX));
  /* 11415536 call 0x11415422 */
  push32(0x1141553bu); f_11415422();
  /* 1141553b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_1141553d:;
  /* 1141553d jne 0x11415543 */
  if (!C.zf) goto L_11415543;
L_1141553f:;
  /* 1141553f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11415541 jmp 0x11415591 */
  goto L_11415591;
L_11415543:;
  /* 11415543 push edi */
  push32((uint32_t)(EDI));
  /* 11415544 push esi */
  push32((uint32_t)(ESI));
  /* 11415545 push ebx */
  push32((uint32_t)(EBX));
  /* 11415546 call 0x11411000 */
  push32(0x1141554bu); f_11411000();
  /* 1141554b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141554e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11415551 jne 0x1141555f */
  if (!C.zf) goto L_1141555f;
  /* 11415553 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415555 jne 0x1141558e */
  if (!C.zf) goto L_1141558e;
  /* 11415557 push edi */
  push32((uint32_t)(EDI));
  /* 11415558 push eax */
  push32((uint32_t)(EAX));
  /* 11415559 push ebx */
  push32((uint32_t)(EBX));
  /* 1141555a call 0x11415422 */
  push32(0x1141555fu); f_11415422();
L_1141555f:;
  /* 1141555f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11415561 je 0x11415568 */
  if (C.zf) goto L_11415568;
  /* 11415563 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415566 jne 0x1141558e */
  if (!C.zf) goto L_1141558e;
L_11415568:;
  /* 11415568 push edi */
  push32((uint32_t)(EDI));
  /* 11415569 push esi */
  push32((uint32_t)(ESI));
  /* 1141556a push ebx */
  push32((uint32_t)(EBX));
  /* 1141556b call 0x11415422 */
  push32(0x11415570u); f_11415422();
  /* 11415570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415572 jne 0x11415577 */
  if (!C.zf) goto L_11415577;
  /* 11415574 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11415577:;
  /* 11415577 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141557b je 0x1141558e */
  if (C.zf) goto L_1141558e;
  /* 1141557d mov eax, dword ptr [0x11422c88] */
  EAX = (r32((uint32_t)(0x11422c88)));
  /* 11415582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415584 je 0x1141558e */
  if (C.zf) goto L_1141558e;
  /* 11415586 push edi */
  push32((uint32_t)(EDI));
  /* 11415587 push esi */
  push32((uint32_t)(ESI));
  /* 11415588 push ebx */
  push32((uint32_t)(EBX));
  /* 11415589 call eax */
  call_ind((uint32_t)(EAX), 0x1141558bu);
  /* 1141558b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_1141558e:;
  /* 1141558e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11415591:;
  /* 11415591 pop edi */
  EDI = (pop32());
  /* 11415592 pop esi */
  ESI = (pop32());
  /* 11415593 pop ebx */
  EBX = (pop32());
  /* 11415594 pop ebp */
  EBP = (pop32());
  /* 11415595 ret 0xc */
  ESPCHK(0x114154fbu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11415598 (48 bytes, 15 insns) */
void f_11415598(void) {
  FTRACE(0x11415598u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415598 mov eax, dword ptr [0x114215b0] */
  EAX = (r32((uint32_t)(0x114215b0)));
  /* 1141559d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114155a0 je 0x114155af */
  if (C.zf) goto L_114155af;
  /* 114155a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114155a4 jne 0x114155b4 */
  if (!C.zf) goto L_114155b4;
  /* 114155a6 cmp dword ptr [0x114215b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114215b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114155ad jne 0x114155b4 */
  if (!C.zf) goto L_114155b4;
L_114155af:;
  /* 114155af call 0x114171c0 */
  push32(0x114155b4u); f_114171c0();
L_114155b4:;
  /* 114155b4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 114155b8 call 0x114171f9 */
  push32(0x114155bdu); f_114171f9();
  /* 114155bd push 0xff */
  push32((uint32_t)(0xffu));
  /* 114155c2 call dword ptr [0x1141c820] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141c820))), 0x114155c8u);
  /* 114155c8 pop ecx */
  ECX = (pop32());
  /* 114155c9 pop ecx */
  ECX = (pop32());
  /* 114155ca ret  */
  ESPCHK(0x11415598u, _esp0);
  ESP += 4; return;
}

/* FUN_100055cb @ 0x114155cb (215 bytes, 75 insns) */
void f_114155cb(void) {
  FTRACE(0x114155cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114155cb push ebp */
  push32((uint32_t)(EBP));
  /* 114155cc mov ebp, esp */
  EBP = (ESP);
  /* 114155ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114155d0 push 0x1141b198 */
  push32((uint32_t)(0x1141b198u));
  /* 114155d5 push 0x114183c4 */
  push32((uint32_t)(0x114183c4u));
  /* 114155da mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114155e0 push eax */
  push32((uint32_t)(EAX));
  /* 114155e1 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114155e8 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114155eb push ebx */
  push32((uint32_t)(EBX));
  /* 114155ec push esi */
  push32((uint32_t)(ESI));
  /* 114155ed push edi */
  push32((uint32_t)(EDI));
  /* 114155ee mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 114155f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114155f3 je 0x114156a5 */
  if (C.zf) { jmp_ind(0x114156a5u); return; }
  /* 114155f9 mov eax, dword ptr [0x11421b48] */
  EAX = (r32((uint32_t)(0x11421b48)));
  /* 114155fe cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415601 jne 0x1141563e */
  if (!C.zf) goto L_1141563e;
  /* 11415603 push 9 */
  push32((uint32_t)(0x9u));
  /* 11415605 call 0x11418256 */
  push32(0x1141560au); f_11418256();
  /* 1141560a pop ecx */
  ECX = (pop32());
  /* 1141560b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1141560f push esi */
  push32((uint32_t)(ESI));
  /* 11415610 call 0x11417394 */
  push32(0x11415615u); f_11417394();
  /* 11415615 pop ecx */
  ECX = (pop32());
  /* 11415616 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11415619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141561b je 0x11415626 */
  if (C.zf) goto L_11415626;
  /* 1141561d push esi */
  push32((uint32_t)(ESI));
  /* 1141561e push eax */
  push32((uint32_t)(EAX));
  /* 1141561f call 0x114173bf */
  push32(0x11415624u); f_114173bf();
  /* 11415624 pop ecx */
  ECX = (pop32());
  /* 11415625 pop ecx */
  ECX = (pop32());
L_11415626:;
  /* 11415626 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1141562a call 0x11415635 */
  push32(0x1141562fu); f_11415635();
  /* 1141562f cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415633 jmp 0x11415686 */
  goto L_11415686;
  /* 11415635 push 9 */
  push32((uint32_t)(0x9u));
  /* 11415637 call 0x114182b7 */
  push32(0x1141563cu); f_114182b7();
  /* 1141563c pop ecx */
  ECX = (pop32());
  /* 1141563d ret  */
  ESPCHK(0x114155cbu, _esp0);
  ESP += 4; return;
L_1141563e:;
  /* 1141563e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415641 jne 0x11415696 */
  if (!C.zf) goto L_11415696;
  /* 11415643 push 9 */
  push32((uint32_t)(0x9u));
  /* 11415645 call 0x11418256 */
  push32(0x1141564au); f_11418256();
  /* 1141564a pop ecx */
  ECX = (pop32());
  /* 1141564b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11415652 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11415655 push eax */
  push32((uint32_t)(EAX));
  /* 11415656 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11415659 push eax */
  push32((uint32_t)(EAX));
  /* 1141565a push esi */
  push32((uint32_t)(ESI));
  /* 1141565b call 0x11417df9 */
  push32(0x11415660u); f_11417df9();
  /* 11415660 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11415663 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11415666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415668 je 0x11415679 */
  if (C.zf) goto L_11415679;
  /* 1141566a push eax */
  push32((uint32_t)(EAX));
  /* 1141566b push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1141566e push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11415671 call 0x11417e50 */
  push32(0x11415676u); f_11417e50();
  /* 11415676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11415679:;
  /* 11415679 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1141567d call 0x1141568d */
  push32(0x11415682u); f_1141568d();
  /* 11415682 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11415686:;
  /* 11415686 jne 0x114156a5 */
  if (!C.zf) { jmp_ind(0x114156a5u); return; }
  /* 11415688 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1141568b jmp 0x11415697 */
  goto L_11415697;
  /* 1141568d push 9 */
  push32((uint32_t)(0x9u));
  /* 1141568f call 0x114182b7 */
  push32(0x11415694u); f_114182b7();
  /* 11415694 pop ecx */
  ECX = (pop32());
  /* 11415695 ret  */
  ESPCHK(0x114155cbu, _esp0);
  ESP += 4; return;
L_11415696:;
  /* 11415696 push esi */
  push32((uint32_t)(ESI));
L_11415697:;
  /* 11415697 push 0 */
  push32((uint32_t)(0x0u));
  /* 11415699 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
}

/* FUN_10005635 @ 0x11415635 (9 bytes, 4 insns) */
void f_11415635(void) {
  FTRACE(0x11415635u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415635 push 9 */
  push32((uint32_t)(0x9u));
  /* 11415637 call 0x114182b7 */
  push32(0x1141563cu); f_114182b7();
  /* 1141563c pop ecx */
  ECX = (pop32());
  /* 1141563d ret  */
  ESPCHK(0x11415635u, _esp0);
  ESP += 4; return;
}

/* FUN_1000568d @ 0x1141568d (9 bytes, 4 insns) */
void f_1141568d(void) {
  FTRACE(0x1141568du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141568d push 9 */
  push32((uint32_t)(0x9u));
  /* 1141568f call 0x114182b7 */
  push32(0x11415694u); f_114182b7();
  /* 11415694 pop ecx */
  ECX = (pop32());
  /* 11415695 ret  */
  ESPCHK(0x1141568du, _esp0);
  ESP += 4; return;
}

/* FUN_100056d0 @ 0x114156d0 (188 bytes, 86 insns) */
void f_114156d0(void) {
  FTRACE(0x114156d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114156d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114156d2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 114156d6 push ebx */
  push32((uint32_t)(EBX));
  /* 114156d7 mov ebx, eax */
  EBX = (EAX);
  /* 114156d9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 114156dc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 114156e0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 114156e6 je 0x114156fb */
  if (C.zf) goto L_114156fb;
L_114156e8:;
  /* 114156e8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 114156ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114156eb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114156ed je 0x114156c0 */
  if (C.zf) { jmp_ind(0x114156c0u); return; }
  /* 114156ef test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 114156f1 je 0x11415744 */
  if (C.zf) goto L_11415744;
  /* 114156f3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 114156f9 jne 0x114156e8 */
  if (!C.zf) goto L_114156e8;
L_114156fb:;
  /* 114156fb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 114156fd push edi */
  push32((uint32_t)(EDI));
  /* 114156fe mov eax, ebx */
  EAX = (EBX);
  /* 11415700 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11415703 push esi */
  push32((uint32_t)(ESI));
  /* 11415704 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11415706:;
  /* 11415706 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11415708 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1141570d mov eax, ecx */
  EAX = (ECX);
  /* 1141570f mov esi, edi */
  ESI = (EDI);
  /* 11415711 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11415713 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11415715 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11415717 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1141571a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1141571d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1141571f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11415721 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415724 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1141572a jne 0x11415748 */
  if (!C.zf) goto L_11415748;
  /* 1141572c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11415731 je 0x11415706 */
  if (C.zf) goto L_11415706;
  /* 11415733 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11415738 jne 0x11415742 */
  if (!C.zf) goto L_11415742;
  /* 1141573a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11415740 jne 0x11415706 */
  if (!C.zf) goto L_11415706;
L_11415742:;
  /* 11415742 pop esi */
  ESI = (pop32());
  /* 11415743 pop edi */
  EDI = (pop32());
L_11415744:;
  /* 11415744 pop ebx */
  EBX = (pop32());
  /* 11415745 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11415747 ret  */
  ESPCHK(0x114156d0u, _esp0);
  ESP += 4; return;
L_11415748:;
  /* 11415748 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1141574b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141574d je 0x11415785 */
  if (C.zf) goto L_11415785;
  /* 1141574f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11415751 je 0x11415742 */
  if (C.zf) goto L_11415742;
  /* 11415753 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415755 je 0x1141577e */
  if (C.zf) goto L_1141577e;
  /* 11415757 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11415759 je 0x11415742 */
  if (C.zf) goto L_11415742;
  /* 1141575b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1141575e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415760 je 0x11415777 */
  if (C.zf) goto L_11415777;
  /* 11415762 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11415764 je 0x11415742 */
  if (C.zf) goto L_11415742;
  /* 11415766 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415768 je 0x11415770 */
  if (C.zf) goto L_11415770;
  /* 1141576a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1141576c je 0x11415742 */
  if (C.zf) goto L_11415742;
  /* 1141576e jmp 0x11415706 */
  goto L_11415706;
L_11415770:;
  /* 11415770 pop esi */
  ESI = (pop32());
  /* 11415771 pop edi */
  EDI = (pop32());
  /* 11415772 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11415775 pop ebx */
  EBX = (pop32());
  /* 11415776 ret  */
  ESPCHK(0x114156d0u, _esp0);
  ESP += 4; return;
L_11415777:;
  /* 11415777 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1141577a pop esi */
  ESI = (pop32());
  /* 1141577b pop edi */
  EDI = (pop32());
  /* 1141577c pop ebx */
  EBX = (pop32());
  /* 1141577d ret  */
  ESPCHK(0x114156d0u, _esp0);
  ESP += 4; return;
L_1141577e:;
  /* 1141577e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11415781 pop esi */
  ESI = (pop32());
  /* 11415782 pop edi */
  EDI = (pop32());
  /* 11415783 pop ebx */
  EBX = (pop32());
  /* 11415784 ret  */
  ESPCHK(0x114156d0u, _esp0);
  ESP += 4; return;
L_11415785:;
  /* 11415785 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11415788 pop esi */
  ESI = (pop32());
  /* 11415789 pop edi */
  EDI = (pop32());
  /* 1141578a pop ebx */
  EBX = (pop32());
  /* 1141578b ret  */
  ESPCHK(0x114156d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005848 @ 0x11415848 (47 bytes, 17 insns) */
void f_11415848(void) {
  FTRACE(0x11415848u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415848 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141584c mov ecx, 0x1141c830 */
  ECX = (0x1141c830u);
  /* 11415851 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415853 jb 0x1141586c */
  if (C.cf) goto L_1141586c;
  /* 11415855 cmp eax, 0x1141ca90 */
  { uint32_t _a=(EAX),_b=(0x1141ca90u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141585a ja 0x1141586c */
  if ((!C.cf&&!C.zf)) goto L_1141586c;
  /* 1141585c sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141585e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11415861 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415864 push eax */
  push32((uint32_t)(EAX));
  /* 11415865 call 0x11418256 */
  push32(0x1141586au); f_11418256();
  /* 1141586a pop ecx */
  ECX = (pop32());
  /* 1141586b ret  */
  ESPCHK(0x11415848u, _esp0);
  ESP += 4; return;
L_1141586c:;
  /* 1141586c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141586f push eax */
  push32((uint32_t)(EAX));
  /* 11415870 call dword ptr [0x1141b080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b080))), 0x11415876u);
  /* 11415876 ret  */
  ESPCHK(0x11415848u, _esp0);
  ESP += 4; return;
}

/* FUN_10005877 @ 0x11415877 (35 bytes, 13 insns) */
void f_11415877(void) {
  FTRACE(0x11415877u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415877 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141587b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141587e jge 0x1141588b */
  if ((C.sf==C.of)) goto L_1141588b;
  /* 11415880 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415883 push eax */
  push32((uint32_t)(EAX));
  /* 11415884 call 0x11418256 */
  push32(0x11415889u); f_11418256();
  /* 11415889 pop ecx */
  ECX = (pop32());
  /* 1141588a ret  */
  ESPCHK(0x11415877u, _esp0);
  ESP += 4; return;
L_1141588b:;
  /* 1141588b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1141588f add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415892 push eax */
  push32((uint32_t)(EAX));
  /* 11415893 call dword ptr [0x1141b080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b080))), 0x11415899u);
  /* 11415899 ret  */
  ESPCHK(0x11415877u, _esp0);
  ESP += 4; return;
}

/* FUN_1000589a @ 0x1141589a (47 bytes, 17 insns) */
void f_1141589a(void) {
  FTRACE(0x1141589au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141589a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141589e mov ecx, 0x1141c830 */
  ECX = (0x1141c830u);
  /* 114158a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114158a5 jb 0x114158be */
  if (C.cf) goto L_114158be;
  /* 114158a7 cmp eax, 0x1141ca90 */
  { uint32_t _a=(EAX),_b=(0x1141ca90u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114158ac ja 0x114158be */
  if ((!C.cf&&!C.zf)) goto L_114158be;
  /* 114158ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114158b0 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114158b3 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114158b6 push eax */
  push32((uint32_t)(EAX));
  /* 114158b7 call 0x114182b7 */
  push32(0x114158bcu); f_114182b7();
  /* 114158bc pop ecx */
  ECX = (pop32());
  /* 114158bd ret  */
  ESPCHK(0x1141589au, _esp0);
  ESP += 4; return;
L_114158be:;
  /* 114158be add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114158c1 push eax */
  push32((uint32_t)(EAX));
  /* 114158c2 call dword ptr [0x1141b084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b084))), 0x114158c8u);
  /* 114158c8 ret  */
  ESPCHK(0x1141589au, _esp0);
  ESP += 4; return;
}

/* FUN_100058c9 @ 0x114158c9 (35 bytes, 13 insns) */
void f_114158c9(void) {
  FTRACE(0x114158c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114158c9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114158cd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114158d0 jge 0x114158dd */
  if ((C.sf==C.of)) goto L_114158dd;
  /* 114158d2 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114158d5 push eax */
  push32((uint32_t)(EAX));
  /* 114158d6 call 0x114182b7 */
  push32(0x114158dbu); f_114182b7();
  /* 114158db pop ecx */
  ECX = (pop32());
  /* 114158dc ret  */
  ESPCHK(0x114158c9u, _esp0);
  ESP += 4; return;
L_114158dd:;
  /* 114158dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114158e1 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114158e4 push eax */
  push32((uint32_t)(EAX));
  /* 114158e5 call dword ptr [0x1141b084] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b084))), 0x114158ebu);
  /* 114158eb ret  */
  ESPCHK(0x114158c9u, _esp0);
  ESP += 4; return;
}

/* FUN_100058ec @ 0x114158ec (93 bytes, 32 insns) */
void f_114158ec(void) {
  FTRACE(0x114158ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114158ec push esi */
  push32((uint32_t)(ESI));
  /* 114158ed mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 114158f1 cmp esi, dword ptr [0x11421c60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11421c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114158f7 jae 0x11415931 */
  if (!C.cf) goto L_11415931;
  /* 114158f9 mov ecx, esi */
  ECX = (ESI);
  /* 114158fb mov eax, esi */
  EAX = (ESI);
  /* 114158fd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11415900 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11415903 mov ecx, dword ptr [ecx*4 + 0x11421b60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 1141590a lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1141590d test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11415912 je 0x11415931 */
  if (C.zf) goto L_11415931;
  /* 11415914 push edi */
  push32((uint32_t)(EDI));
  /* 11415915 push esi */
  push32((uint32_t)(ESI));
  /* 11415916 call 0x114188ba */
  push32(0x1141591bu); f_114188ba();
  /* 1141591b push esi */
  push32((uint32_t)(ESI));
  /* 1141591c call 0x11415949 */
  push32(0x11415921u); f_11415949();
  /* 11415921 push esi */
  push32((uint32_t)(ESI));
  /* 11415922 mov edi, eax */
  EDI = (EAX);
  /* 11415924 call 0x11418919 */
  push32(0x11415929u); f_11418919();
  /* 11415929 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141592c mov eax, edi */
  EAX = (EDI);
  /* 1141592e pop edi */
  EDI = (pop32());
  /* 1141592f pop esi */
  ESI = (pop32());
  /* 11415930 ret  */
  ESPCHK(0x114158ecu, _esp0);
  ESP += 4; return;
L_11415931:;
  /* 11415931 call 0x11416332 */
  push32(0x11415936u); f_11416332();
  /* 11415936 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1141593c call 0x1141633b */
  push32(0x11415941u); f_1141633b();
  /* 11415941 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11415944 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11415947 pop esi */
  ESI = (pop32());
  /* 11415948 ret  */
  ESPCHK(0x114158ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10005949 @ 0x11415949 (131 bytes, 52 insns) */
void f_11415949(void) {
  FTRACE(0x11415949u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415949 push esi */
  push32((uint32_t)(ESI));
  /* 1141594a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1141594e push edi */
  push32((uint32_t)(EDI));
  /* 1141594f push esi */
  push32((uint32_t)(ESI));
  /* 11415950 call 0x11418878 */
  push32(0x11415955u); f_11418878();
  /* 11415955 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415958 pop ecx */
  ECX = (pop32());
  /* 11415959 je 0x11415997 */
  if (C.zf) goto L_11415997;
  /* 1141595b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141595e je 0x11415965 */
  if (C.zf) goto L_11415965;
  /* 11415960 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415963 jne 0x1141597b */
  if (!C.zf) goto L_1141597b;
L_11415965:;
  /* 11415965 push 2 */
  push32((uint32_t)(0x2u));
  /* 11415967 call 0x11418878 */
  push32(0x1141596cu); f_11418878();
  /* 1141596c push 1 */
  push32((uint32_t)(0x1u));
  /* 1141596e mov edi, eax */
  EDI = (EAX);
  /* 11415970 call 0x11418878 */
  push32(0x11415975u); f_11418878();
  /* 11415975 pop ecx */
  ECX = (pop32());
  /* 11415976 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415978 pop ecx */
  ECX = (pop32());
  /* 11415979 je 0x11415997 */
  if (C.zf) goto L_11415997;
L_1141597b:;
  /* 1141597b push esi */
  push32((uint32_t)(ESI));
  /* 1141597c call 0x11418878 */
  push32(0x11415981u); f_11418878();
  /* 11415981 pop ecx */
  ECX = (pop32());
  /* 11415982 push eax */
  push32((uint32_t)(EAX));
  /* 11415983 call dword ptr [0x1141b08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b08c))), 0x11415989u);
  /* 11415989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141598b jne 0x11415997 */
  if (!C.zf) goto L_11415997;
  /* 1141598d call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x11415993u);
  /* 11415993 mov edi, eax */
  EDI = (EAX);
  /* 11415995 jmp 0x11415999 */
  goto L_11415999;
L_11415997:;
  /* 11415997 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11415999:;
  /* 11415999 push esi */
  push32((uint32_t)(ESI));
  /* 1141599a call 0x114187f9 */
  push32(0x1141599fu); f_114187f9();
  /* 1141599f mov eax, esi */
  EAX = (ESI);
  /* 114159a1 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 114159a4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 114159a7 pop ecx */
  ECX = (pop32());
  /* 114159a8 mov eax, dword ptr [eax*4 + 0x11421b60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11421b60)));
  /* 114159af lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 114159b2 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 114159b7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 114159b9 je 0x114159c7 */
  if (C.zf) goto L_114159c7;
  /* 114159bb push edi */
  push32((uint32_t)(EDI));
  /* 114159bc call 0x114162bf */
  push32(0x114159c1u); f_114162bf();
  /* 114159c1 pop ecx */
  ECX = (pop32());
  /* 114159c2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114159c5 jmp 0x114159c9 */
  goto L_114159c9;
L_114159c7:;
  /* 114159c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114159c9:;
  /* 114159c9 pop edi */
  EDI = (pop32());
  /* 114159ca pop esi */
  ESI = (pop32());
  /* 114159cb ret  */
  ESPCHK(0x11415949u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x114159cc (43 bytes, 17 insns) */
void f_114159cc(void) {
  FTRACE(0x114159ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114159cc push esi */
  push32((uint32_t)(ESI));
  /* 114159cd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 114159d1 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 114159d4 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 114159d6 je 0x114159f5 */
  if (C.zf) goto L_114159f5;
  /* 114159d8 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 114159da je 0x114159f5 */
  if (C.zf) goto L_114159f5;
  /* 114159dc push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 114159df call 0x114155cb */
  push32(0x114159e4u); f_114155cb();
  /* 114159e4 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 114159ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114159ec pop ecx */
  ECX = (pop32());
  /* 114159ed mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 114159ef mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 114159f2 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_114159f5:;
  /* 114159f5 pop esi */
  ESI = (pop32());
  /* 114159f6 ret  */
  ESPCHK(0x114159ccu, _esp0);
  ESP += 4; return;
}

/* FUN_100059f7 @ 0x114159f7 (46 bytes, 22 insns) */
void f_114159f7(void) {
  FTRACE(0x114159f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114159f7 push esi */
  push32((uint32_t)(ESI));
  /* 114159f8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 114159fc push esi */
  push32((uint32_t)(ESI));
  /* 114159fd call 0x11415a25 */
  push32(0x11415a02u); f_11415a25();
  /* 11415a02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415a04 pop ecx */
  ECX = (pop32());
  /* 11415a05 je 0x11415a0c */
  if (C.zf) goto L_11415a0c;
  /* 11415a07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11415a0a pop esi */
  ESI = (pop32());
  /* 11415a0b ret  */
  ESPCHK(0x114159f7u, _esp0);
  ESP += 4; return;
L_11415a0c:;
  /* 11415a0c test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 11415a10 je 0x11415a21 */
  if (C.zf) goto L_11415a21;
  /* 11415a12 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11415a15 call 0x1141893b */
  push32(0x11415a1au); f_1141893b();
  /* 11415a1a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11415a1c pop ecx */
  ECX = (pop32());
  /* 11415a1d pop esi */
  ESI = (pop32());
  /* 11415a1e sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11415a20 ret  */
  ESPCHK(0x114159f7u, _esp0);
  ESP += 4; return;
L_11415a21:;
  /* 11415a21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11415a23 pop esi */
  ESI = (pop32());
  /* 11415a24 ret  */
  ESPCHK(0x114159f7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a25 @ 0x11415a25 (92 bytes, 40 insns) */
void f_11415a25(void) {
  FTRACE(0x11415a25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415a25 push ebx */
  push32((uint32_t)(EBX));
  /* 11415a26 push esi */
  push32((uint32_t)(ESI));
  /* 11415a27 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11415a2b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11415a2d push edi */
  push32((uint32_t)(EDI));
  /* 11415a2e mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11415a31 mov ecx, eax */
  ECX = (EAX);
  /* 11415a33 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11415a36 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415a39 jne 0x11415a72 */
  if (!C.zf) goto L_11415a72;
  /* 11415a3b test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 11415a3f je 0x11415a72 */
  if (C.zf) goto L_11415a72;
  /* 11415a41 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11415a44 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11415a46 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11415a48 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11415a4a jle 0x11415a72 */
  if ((C.zf||C.sf!=C.of)) goto L_11415a72;
  /* 11415a4c push edi */
  push32((uint32_t)(EDI));
  /* 11415a4d push eax */
  push32((uint32_t)(EAX));
  /* 11415a4e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11415a51 call 0x114189ce */
  push32(0x11415a56u); f_114189ce();
  /* 11415a56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11415a59 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415a5b jne 0x11415a6b */
  if (!C.zf) goto L_11415a6b;
  /* 11415a5d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11415a60 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11415a62 je 0x11415a72 */
  if (C.zf) goto L_11415a72;
  /* 11415a64 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11415a66 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11415a69 jmp 0x11415a72 */
  goto L_11415a72;
L_11415a6b:;
  /* 11415a6b or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11415a6f or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_11415a72:;
  /* 11415a72 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11415a75 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11415a79 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11415a7b pop edi */
  EDI = (pop32());
  /* 11415a7c mov eax, ebx */
  EAX = (EBX);
  /* 11415a7e pop esi */
  ESI = (pop32());
  /* 11415a7f pop ebx */
  EBX = (pop32());
  /* 11415a80 ret  */
  ESPCHK(0x11415a25u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a8a @ 0x11415a8a (164 bytes, 66 insns) */
void f_11415a8a(void) {
  FTRACE(0x11415a8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415a8a push ebx */
  push32((uint32_t)(EBX));
  /* 11415a8b push esi */
  push32((uint32_t)(ESI));
  /* 11415a8c push edi */
  push32((uint32_t)(EDI));
  /* 11415a8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11415a8f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11415a91 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11415a93 call 0x11418256 */
  push32(0x11415a98u); f_11418256();
  /* 11415a98 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11415a9a pop ecx */
  ECX = (pop32());
  /* 11415a9b cmp dword ptr [0x11422c80], esi */
  { uint32_t _a=(r32((uint32_t)(0x11422c80))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415aa1 jle 0x11415b17 */
  if ((C.zf||C.sf!=C.of)) goto L_11415b17;
L_11415aa3:;
  /* 11415aa3 mov eax, dword ptr [0x11421c64] */
  EAX = (r32((uint32_t)(0x11421c64)));
  /* 11415aa8 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11415aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415aad je 0x11415b0e */
  if (C.zf) goto L_11415b0e;
  /* 11415aaf test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11415ab3 je 0x11415b0e */
  if (C.zf) goto L_11415b0e;
  /* 11415ab5 push eax */
  push32((uint32_t)(EAX));
  /* 11415ab6 push esi */
  push32((uint32_t)(ESI));
  /* 11415ab7 call 0x11415877 */
  push32(0x11415abcu); f_11415877();
  /* 11415abc mov eax, dword ptr [0x11421c64] */
  EAX = (r32((uint32_t)(0x11421c64)));
  /* 11415ac1 pop ecx */
  ECX = (pop32());
  /* 11415ac2 pop ecx */
  ECX = (pop32());
  /* 11415ac3 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11415ac6 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11415ac9 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 11415acc je 0x11415afe */
  if (C.zf) goto L_11415afe;
  /* 11415ace cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415ad3 jne 0x11415ae4 */
  if (!C.zf) goto L_11415ae4;
  /* 11415ad5 push eax */
  push32((uint32_t)(EAX));
  /* 11415ad6 call 0x114159f7 */
  push32(0x11415adbu); f_114159f7();
  /* 11415adb cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415ade pop ecx */
  ECX = (pop32());
  /* 11415adf je 0x11415afe */
  if (C.zf) goto L_11415afe;
  /* 11415ae1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11415ae2 jmp 0x11415afe */
  goto L_11415afe;
L_11415ae4:;
  /* 11415ae4 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415ae9 jne 0x11415afe */
  if (!C.zf) goto L_11415afe;
  /* 11415aeb test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11415aee je 0x11415afe */
  if (C.zf) goto L_11415afe;
  /* 11415af0 push eax */
  push32((uint32_t)(EAX));
  /* 11415af1 call 0x114159f7 */
  push32(0x11415af6u); f_114159f7();
  /* 11415af6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415af9 pop ecx */
  ECX = (pop32());
  /* 11415afa jne 0x11415afe */
  if (!C.zf) goto L_11415afe;
  /* 11415afc or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_11415afe:;
  /* 11415afe mov eax, dword ptr [0x11421c64] */
  EAX = (r32((uint32_t)(0x11421c64)));
  /* 11415b03 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 11415b06 push esi */
  push32((uint32_t)(ESI));
  /* 11415b07 call 0x114158c9 */
  push32(0x11415b0cu); f_114158c9();
  /* 11415b0c pop ecx */
  ECX = (pop32());
  /* 11415b0d pop ecx */
  ECX = (pop32());
L_11415b0e:;
  /* 11415b0e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11415b0f cmp esi, dword ptr [0x11422c80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11422c80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415b15 jl 0x11415aa3 */
  if ((C.sf!=C.of)) goto L_11415aa3;
L_11415b17:;
  /* 11415b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 11415b19 call 0x114182b7 */
  push32(0x11415b1eu); f_114182b7();
  /* 11415b1e cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415b23 pop ecx */
  ECX = (pop32());
  /* 11415b24 mov eax, ebx */
  EAX = (EBX);
  /* 11415b26 je 0x11415b2a */
  if (C.zf) goto L_11415b2a;
  /* 11415b28 mov eax, edi */
  EAX = (EDI);
L_11415b2a:;
  /* 11415b2a pop edi */
  EDI = (pop32());
  /* 11415b2b pop esi */
  ESI = (pop32());
  /* 11415b2c pop ebx */
  EBX = (pop32());
  /* 11415b2d ret  */
  ESPCHK(0x11415a8au, _esp0);
  ESP += 4; return;
}

/* FUN_10005b2e @ 0x11415b2e (220 bytes, 79 insns) */
void f_11415b2e(void) {
  FTRACE(0x11415b2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415b2e push esi */
  push32((uint32_t)(ESI));
  /* 11415b2f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11415b33 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11415b36 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11415b38 je 0x11415c05 */
  if (C.zf) goto L_11415c05;
  /* 11415b3e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11415b40 jne 0x11415c05 */
  if (!C.zf) goto L_11415c05;
  /* 11415b46 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 11415b48 je 0x11415b54 */
  if (C.zf) goto L_11415b54;
  /* 11415b4a or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11415b4c mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11415b4f jmp 0x11415c05 */
  goto L_11415c05;
L_11415b54:;
  /* 11415b54 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11415b56 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 11415b5a mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11415b5d jne 0x11415b68 */
  if (!C.zf) goto L_11415b68;
  /* 11415b5f push esi */
  push32((uint32_t)(ESI));
  /* 11415b60 call 0x11418bbe */
  push32(0x11415b65u); f_11418bbe();
  /* 11415b65 pop ecx */
  ECX = (pop32());
  /* 11415b66 jmp 0x11415b6d */
  goto L_11415b6d;
L_11415b68:;
  /* 11415b68 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11415b6b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
L_11415b6d:;
  /* 11415b6d push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11415b70 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11415b73 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11415b76 call 0x11415c0a */
  push32(0x11415b7bu); f_11415c0a();
  /* 11415b7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11415b7e mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11415b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415b83 je 0x11415bf4 */
  if (C.zf) goto L_11415bf4;
  /* 11415b85 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415b88 je 0x11415bf4 */
  if (C.zf) goto L_11415bf4;
  /* 11415b8a mov edx, dword ptr [esi + 0xc] */
  EDX = (r32((uint32_t)(ESI + 0xc)));
  /* 11415b8d test dl, 0x82 */
  { uint32_t _r=(DL)&(0x82u); fl_logic(_r,8); }
  /* 11415b90 jne 0x11415bc9 */
  if (!C.zf) goto L_11415bc9;
  /* 11415b92 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11415b95 push edi */
  push32((uint32_t)(EDI));
  /* 11415b96 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415b99 je 0x11415bb2 */
  if (C.zf) goto L_11415bb2;
  /* 11415b9b mov edi, ecx */
  EDI = (ECX);
  /* 11415b9d sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 11415ba0 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11415ba3 mov edi, dword ptr [edi*4 + 0x11421b60] */
  EDI = (r32((uint32_t)(EDI*4 + 0x11421b60)));
  /* 11415baa lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 11415bad lea edi, [edi + ecx*4] */
  EDI = ((uint32_t)(EDI + ECX*4));
  /* 11415bb0 jmp 0x11415bb7 */
  goto L_11415bb7;
L_11415bb2:;
  /* 11415bb2 mov edi, 0x1141cc18 */
  EDI = (0x1141cc18u);
L_11415bb7:;
  /* 11415bb7 mov cl, byte ptr [edi + 4] */
  CL = (r8((uint32_t)(EDI + 0x4)));
  /* 11415bba pop edi */
  EDI = (pop32());
  /* 11415bbb and cl, 0x82 */
  { uint32_t _r=(CL)&(0x82u); CL = (_r); fl_logic(_r,8); }
  /* 11415bbe cmp cl, 0x82 */
  { uint32_t _a=(CL),_b=(0x82u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415bc1 jne 0x11415bc9 */
  if (!C.zf) goto L_11415bc9;
  /* 11415bc3 or dh, 0x20 */
  { uint32_t _r=(C.d.b.h)|(0x20u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11415bc6 mov dword ptr [esi + 0xc], edx */
  w32((uint32_t)(ESI + 0xc), (EDX));
L_11415bc9:;
  /* 11415bc9 cmp dword ptr [esi + 0x18], 0x200 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415bd0 jne 0x11415be6 */
  if (!C.zf) goto L_11415be6;
  /* 11415bd2 mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 11415bd5 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 11415bd8 je 0x11415be6 */
  if (C.zf) goto L_11415be6;
  /* 11415bda test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 11415bdd jne 0x11415be6 */
  if (!C.zf) goto L_11415be6;
  /* 11415bdf mov dword ptr [esi + 0x18], 0x1000 */
  w32((uint32_t)(ESI + 0x18), (0x1000u));
L_11415be6:;
  /* 11415be6 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11415be8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11415be9 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11415bec movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11415bef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11415bf0 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11415bf2 pop esi */
  ESI = (pop32());
  /* 11415bf3 ret  */
  ESPCHK(0x11415b2eu, _esp0);
  ESP += 4; return;
L_11415bf4:;
  /* 11415bf4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11415bf6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11415bf8 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11415bfb add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415bfe or dword ptr [esi + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(EAX); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11415c01 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
L_11415c05:;
  /* 11415c05 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11415c08 pop esi */
  ESI = (pop32());
  /* 11415c09 ret  */
  ESPCHK(0x11415b2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c0a @ 0x11415c0a (101 bytes, 34 insns) */
void f_11415c0a(void) {
  FTRACE(0x11415c0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415c0a push esi */
  push32((uint32_t)(ESI));
  /* 11415c0b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11415c0f cmp esi, dword ptr [0x11421c60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11421c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415c15 jae 0x11415c57 */
  if (!C.cf) goto L_11415c57;
  /* 11415c17 mov ecx, esi */
  ECX = (ESI);
  /* 11415c19 mov eax, esi */
  EAX = (ESI);
  /* 11415c1b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11415c1e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11415c21 mov ecx, dword ptr [ecx*4 + 0x11421b60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 11415c28 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11415c2b test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11415c30 je 0x11415c57 */
  if (C.zf) goto L_11415c57;
  /* 11415c32 push edi */
  push32((uint32_t)(EDI));
  /* 11415c33 push esi */
  push32((uint32_t)(ESI));
  /* 11415c34 call 0x114188ba */
  push32(0x11415c39u); f_114188ba();
  /* 11415c39 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11415c3d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11415c41 push esi */
  push32((uint32_t)(ESI));
  /* 11415c42 call 0x11415c6f */
  push32(0x11415c47u); f_11415c6f();
  /* 11415c47 push esi */
  push32((uint32_t)(ESI));
  /* 11415c48 mov edi, eax */
  EDI = (EAX);
  /* 11415c4a call 0x11418919 */
  push32(0x11415c4fu); f_11418919();
  /* 11415c4f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11415c52 mov eax, edi */
  EAX = (EDI);
  /* 11415c54 pop edi */
  EDI = (pop32());
  /* 11415c55 pop esi */
  ESI = (pop32());
  /* 11415c56 ret  */
  ESPCHK(0x11415c0au, _esp0);
  ESP += 4; return;
L_11415c57:;
  /* 11415c57 call 0x11416332 */
  push32(0x11415c5cu); f_11416332();
  /* 11415c5c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11415c62 call 0x1141633b */
  push32(0x11415c67u); f_1141633b();
  /* 11415c67 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11415c6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11415c6d pop esi */
  ESI = (pop32());
  /* 11415c6e ret  */
  ESPCHK(0x11415c0au, _esp0);
  ESP += 4; return;
}

/* FUN_10005c6f @ 0x11415c6f (473 bytes, 170 insns) */
void f_11415c6f(void) {
  FTRACE(0x11415c6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415c6f push ebp */
  push32((uint32_t)(EBP));
  /* 11415c70 mov ebp, esp */
  EBP = (ESP);
  /* 11415c72 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11415c75 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11415c79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415c7d push ebx */
  push32((uint32_t)(EBX));
  /* 11415c7e mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11415c81 push esi */
  push32((uint32_t)(ESI));
  /* 11415c82 push edi */
  push32((uint32_t)(EDI));
  /* 11415c83 mov edx, ebx */
  EDX = (EBX);
  /* 11415c85 je 0x11415e41 */
  if (C.zf) goto L_11415e41;
  /* 11415c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11415c8e mov ecx, eax */
  ECX = (EAX);
  /* 11415c90 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11415c93 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11415c96 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11415c99 mov eax, dword ptr [ecx*4 + 0x11421b60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 11415ca0 lea edi, [ecx*4 + 0x11421b60] */
  EDI = ((uint32_t)(ECX*4 + 0x11421b60));
  /* 11415ca7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11415caa add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415cac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11415caf test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11415cb2 jne 0x11415e41 */
  if (!C.zf) goto L_11415e41;
  /* 11415cb8 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 11415cbb je 0x11415cda */
  if (C.zf) goto L_11415cda;
  /* 11415cbd mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 11415cc0 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415cc2 je 0x11415cda */
  if (C.zf) goto L_11415cda;
  /* 11415cc4 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11415cc7 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11415cc9 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11415ccb lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 11415cce mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11415cd5 mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_11415cda:;
  /* 11415cda lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11415cdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11415cdf push eax */
  push32((uint32_t)(EAX));
  /* 11415ce0 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11415ce2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11415ce5 push edx */
  push32((uint32_t)(EDX));
  /* 11415ce6 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11415ce9 call dword ptr [0x1141b090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b090))), 0x11415cefu);
  /* 11415cef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415cf1 jne 0x11415d2c */
  if (!C.zf) goto L_11415d2c;
  /* 11415cf3 call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x11415cf9u);
  /* 11415cf9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11415cfb pop esi */
  ESI = (pop32());
  /* 11415cfc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415cfe jne 0x11415d14 */
  if (!C.zf) goto L_11415d14;
  /* 11415d00 call 0x11416332 */
  push32(0x11415d05u); f_11416332();
  /* 11415d05 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11415d0b call 0x1141633b */
  push32(0x11415d10u); f_1141633b();
  /* 11415d10 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11415d12 jmp 0x11415d24 */
  goto L_11415d24;
L_11415d14:;
  /* 11415d14 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415d17 je 0x11415e41 */
  if (C.zf) goto L_11415e41;
  /* 11415d1d push eax */
  push32((uint32_t)(EAX));
  /* 11415d1e call 0x114162bf */
  push32(0x11415d23u); f_114162bf();
  /* 11415d23 pop ecx */
  ECX = (pop32());
L_11415d24:;
  /* 11415d24 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11415d27 jmp 0x11415e43 */
  goto L_11415e43;
L_11415d2c:;
  /* 11415d2c mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11415d2e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11415d31 add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11415d34 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11415d38 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 11415d3c test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11415d3e je 0x11415e3c */
  if (C.zf) goto L_11415e3c;
  /* 11415d44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11415d46 je 0x11415d51 */
  if (C.zf) goto L_11415d51;
  /* 11415d48 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415d4b jne 0x11415d51 */
  if (!C.zf) goto L_11415d51;
  /* 11415d4d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11415d4f jmp 0x11415d53 */
  goto L_11415d53;
L_11415d51:;
  /* 11415d51 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_11415d53:;
  /* 11415d53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11415d55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11415d58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11415d5b mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11415d5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415d60 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415d62 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11415d65 jae 0x11415e36 */
  if (!C.cf) goto L_11415e36;
L_11415d6b:;
  /* 11415d6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11415d6e mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 11415d70 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415d72 je 0x11415e26 */
  if (C.zf) goto L_11415e26;
  /* 11415d78 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415d7a je 0x11415d87 */
  if (C.zf) goto L_11415d87;
  /* 11415d7c mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11415d7e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11415d7f inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11415d82 jmp 0x11415e18 */
  goto L_11415e18;
L_11415d87:;
  /* 11415d87 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11415d88 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415d8b jae 0x11415da5 */
  if (!C.cf) goto L_11415da5;
  /* 11415d8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11415d90 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11415d91 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415d94 jne 0x11415d9c */
  if (!C.zf) goto L_11415d9c;
  /* 11415d96 add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 11415d9a jmp 0x11415dfa */
  goto L_11415dfa;
L_11415d9c:;
  /* 11415d9c mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11415d9f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11415da0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11415da3 jmp 0x11415e18 */
  goto L_11415e18;
L_11415da5:;
  /* 11415da5 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11415da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11415daa push eax */
  push32((uint32_t)(EAX));
  /* 11415dab inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11415dae lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 11415db1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11415db3 push eax */
  push32((uint32_t)(EAX));
  /* 11415db4 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11415db6 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11415db9 call dword ptr [0x1141b090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b090))), 0x11415dbfu);
  /* 11415dbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415dc1 jne 0x11415dcd */
  if (!C.zf) goto L_11415dcd;
  /* 11415dc3 call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x11415dc9u);
  /* 11415dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11415dcb jne 0x11415e14 */
  if (!C.zf) goto L_11415e14;
L_11415dcd:;
  /* 11415dcd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415dd1 je 0x11415e14 */
  if (C.zf) goto L_11415e14;
  /* 11415dd3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11415dd5 test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 11415dda je 0x11415def */
  if (C.zf) goto L_11415def;
  /* 11415ddc mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 11415ddf cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415de1 je 0x11415dfa */
  if (C.zf) goto L_11415dfa;
  /* 11415de3 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11415de6 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11415de8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11415de9 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 11415ded jmp 0x11415e18 */
  goto L_11415e18;
L_11415def:;
  /* 11415def cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415df2 jne 0x11415dff */
  if (!C.zf) goto L_11415dff;
  /* 11415df4 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415df8 jne 0x11415dff */
  if (!C.zf) goto L_11415dff;
L_11415dfa:;
  /* 11415dfa mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 11415dfd jmp 0x11415e17 */
  goto L_11415e17;
L_11415dff:;
  /* 11415dff push 1 */
  push32((uint32_t)(0x1u));
  /* 11415e01 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11415e03 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11415e06 call 0x114165b9 */
  push32(0x11415e0bu); f_114165b9();
  /* 11415e0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11415e0e cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11415e12 je 0x11415e18 */
  if (C.zf) goto L_11415e18;
L_11415e14:;
  /* 11415e14 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_11415e17:;
  /* 11415e17 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11415e18:;
  /* 11415e18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11415e1b cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415e1e jb 0x11415d6b */
  if (C.cf) goto L_11415d6b;
  /* 11415e24 jmp 0x11415e36 */
  goto L_11415e36;
L_11415e26:;
  /* 11415e26 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11415e28 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11415e2c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11415e2e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11415e30 jne 0x11415e36 */
  if (!C.zf) goto L_11415e36;
  /* 11415e32 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11415e34 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_11415e36:;
  /* 11415e36 sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11415e39 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_11415e3c:;
  /* 11415e3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11415e3f jmp 0x11415e43 */
  goto L_11415e43;
L_11415e41:;
  /* 11415e41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11415e43:;
  /* 11415e43 pop edi */
  EDI = (pop32());
  /* 11415e44 pop esi */
  ESI = (pop32());
  /* 11415e45 pop ebx */
  EBX = (pop32());
  /* 11415e46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11415e47 ret  */
  ESPCHK(0x11415c6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005e50 @ 0x11415e50 (664 bytes, 268 insns) [15 switch table(s)] */
void f_11415e50(void) {
  FTRACE(0x11415e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11415e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11415e51 mov ebp, esp */
  EBP = (ESP);
  /* 11415e53 push edi */
  push32((uint32_t)(EDI));
  /* 11415e54 push esi */
  push32((uint32_t)(ESI));
  /* 11415e55 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11415e58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11415e5b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11415e5e mov eax, ecx */
  EAX = (ECX);
  /* 11415e60 mov edx, ecx */
  EDX = (ECX);
  /* 11415e62 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415e64 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415e66 jbe 0x11415e70 */
  if ((C.cf||C.zf)) goto L_11415e70;
  /* 11415e68 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415e6a jb 0x11415fe8 */
  if (C.cf) goto L_11415fe8;
L_11415e70:;
  /* 11415e70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11415e76 jne 0x11415e8c */
  if (!C.zf) goto L_11415e8c;
  /* 11415e78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11415e7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11415e7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415e81 jb 0x11415eac */
  if (C.cf) goto L_11415eac;
  /* 11415e83 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11415e85 jmp dword ptr [edx*4 + 0x11415f98] */
  switch (EDX) {
    case 0: goto L_11415fa8;
    case 1: goto L_11415fb0;
    case 2: goto L_11415fbc;
    case 3: goto L_11415fd0;
    default: x86_unimpl("switch@0x11415e85 out of table"); return;
  }
L_11415e8c:;
  /* 11415e8c mov eax, edi */
  EAX = (EDI);
  /* 11415e8e mov edx, 3 */
  EDX = (0x3u);
  /* 11415e93 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11415e96 jb 0x11415ea4 */
  if (C.cf) goto L_11415ea4;
  /* 11415e98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11415e9b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11415e9d jmp dword ptr [eax*4 + 0x11415eb0] */
  switch (EAX) {
    case 1: goto L_11415ec0;
    case 2: goto L_11415eec;
    case 3: goto L_11415f10;
    default: x86_unimpl("switch@0x11415e9d out of table"); return;
  }
L_11415ea4:;
  /* 11415ea4 jmp dword ptr [ecx*4 + 0x11415fa8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11415fa8)))); return;
  /* 11415eab nop  */
  /* nop */
L_11415eac:;
  /* 11415eac jmp dword ptr [ecx*4 + 0x11415f2c] */
  switch (ECX) {
    case 0: goto L_11415f8f;
    case 1: goto L_11415f7c;
    case 2: goto L_11415f74;
    case 3: goto L_11415f6c;
    case 4: goto L_11415f64;
    case 5: goto L_11415f5c;
    case 6: goto L_11415f54;
    case 7: goto L_11415f4c;
    default: x86_unimpl("switch@0x11415eac out of table"); return;
  }
  /* 11415eb3 nop  */
  /* nop */
L_11415ec0:;
  /* 11415ec0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11415ec2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11415ec4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11415ec6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11415ec9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11415ecc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11415ecf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11415ed2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11415ed5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11415ed8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11415edb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415ede jb 0x11415eac */
  if (C.cf) goto L_11415eac;
  /* 11415ee0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11415ee2 jmp dword ptr [edx*4 + 0x11415f98] */
  switch (EDX) {
    case 0: goto L_11415fa8;
    case 1: goto L_11415fb0;
    case 2: goto L_11415fbc;
    case 3: goto L_11415fd0;
    default: x86_unimpl("switch@0x11415ee2 out of table"); return;
  }
  /* 11415ee9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11415eec:;
  /* 11415eec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11415eee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11415ef0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11415ef2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11415ef5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11415ef8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11415efb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11415efe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11415f01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415f04 jb 0x11415eac */
  if (C.cf) goto L_11415eac;
  /* 11415f06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11415f08 jmp dword ptr [edx*4 + 0x11415f98] */
  switch (EDX) {
    case 0: goto L_11415fa8;
    case 1: goto L_11415fb0;
    case 2: goto L_11415fbc;
    case 3: goto L_11415fd0;
    default: x86_unimpl("switch@0x11415f08 out of table"); return;
  }
  /* 11415f0f nop  */
  /* nop */
L_11415f10:;
  /* 11415f10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11415f12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11415f14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11415f16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11415f17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11415f1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11415f1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11415f1e jb 0x11415eac */
  if (C.cf) goto L_11415eac;
  /* 11415f20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11415f22 jmp dword ptr [edx*4 + 0x11415f98] */
  switch (EDX) {
    case 0: goto L_11415fa8;
    case 1: goto L_11415fb0;
    case 2: goto L_11415fbc;
    case 3: goto L_11415fd0;
    default: x86_unimpl("switch@0x11415f22 out of table"); return;
  }
  /* 11415f29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11415f4c:;
  /* 11415f4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11415f50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11415f54:;
  /* 11415f54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11415f58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11415f5c:;
  /* 11415f5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11415f60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11415f64:;
  /* 11415f64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11415f68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11415f6c:;
  /* 11415f6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11415f70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11415f74:;
  /* 11415f74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11415f78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11415f7c:;
  /* 11415f7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11415f80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11415f84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11415f8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11415f8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11415f8f:;
  /* 11415f8f jmp dword ptr [edx*4 + 0x11415f98] */
  switch (EDX) {
    case 0: goto L_11415fa8;
    case 1: goto L_11415fb0;
    case 2: goto L_11415fbc;
    case 3: goto L_11415fd0;
    default: x86_unimpl("switch@0x11415f8f out of table"); return;
  }
  /* 11415f96 mov edi, edi */
  EDI = (EDI);
L_11415fa8:;
  /* 11415fa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11415fab pop esi */
  ESI = (pop32());
  /* 11415fac pop edi */
  EDI = (pop32());
  /* 11415fad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11415fae ret  */
  ESPCHK(0x11415e50u, _esp0);
  ESP += 4; return;
  /* 11415faf nop  */
  /* nop */
L_11415fb0:;
  /* 11415fb0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11415fb2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11415fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11415fb7 pop esi */
  ESI = (pop32());
  /* 11415fb8 pop edi */
  EDI = (pop32());
  /* 11415fb9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11415fba ret  */
  ESPCHK(0x11415e50u, _esp0);
  ESP += 4; return;
  /* 11415fbb nop  */
  /* nop */
L_11415fbc:;
  /* 11415fbc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11415fbe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11415fc0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11415fc3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11415fc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11415fc9 pop esi */
  ESI = (pop32());
  /* 11415fca pop edi */
  EDI = (pop32());
  /* 11415fcb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11415fcc ret  */
  ESPCHK(0x11415e50u, _esp0);
  ESP += 4; return;
  /* 11415fcd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11415fd0:;
  /* 11415fd0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11415fd2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11415fd4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11415fd7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11415fda mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11415fdd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11415fe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11415fe3 pop esi */
  ESI = (pop32());
  /* 11415fe4 pop edi */
  EDI = (pop32());
  /* 11415fe5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11415fe6 ret  */
  ESPCHK(0x11415e50u, _esp0);
  ESP += 4; return;
  /* 11415fe7 nop  */
  /* nop */
L_11415fe8:;
  /* 11415fe8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11415fec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11415ff0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11415ff6 jne 0x1141601c */
  if (!C.zf) goto L_1141601c;
  /* 11415ff8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11415ffb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11415ffe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416001 jb 0x11416010 */
  if (C.cf) goto L_11416010;
  /* 11416003 std  */
  C.df=1;
  /* 11416004 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11416006 cld  */
  C.df=0;
  /* 11416007 jmp dword ptr [edx*4 + 0x11416130] */
  switch (EDX) {
    case 0: goto L_11416140;
    case 1: goto L_11416148;
    case 2: goto L_11416158;
    case 3: goto L_1141616c;
    default: x86_unimpl("switch@0x11416007 out of table"); return;
  }
  /* 1141600e mov edi, edi */
  EDI = (EDI);
L_11416010:;
  /* 11416010 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11416012 jmp dword ptr [ecx*4 + 0x114160e0] */
  switch (ECX) {
    case 0: goto L_11416127;
    default: x86_unimpl("switch@0x11416012 out of table"); return;
  }
  /* 11416019 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1141601c:;
  /* 1141601c mov eax, edi */
  EAX = (EDI);
  /* 1141601e mov edx, 3 */
  EDX = (0x3u);
  /* 11416023 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416026 jb 0x11416034 */
  if (C.cf) goto L_11416034;
  /* 11416028 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1141602b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141602d jmp dword ptr [eax*4 + 0x11416038] */
  switch (EAX) {
    case 1: goto L_11416048;
    case 2: goto L_11416068;
    case 3: goto L_11416090;
    default: x86_unimpl("switch@0x1141602d out of table"); return;
  }
L_11416034:;
  /* 11416034 jmp dword ptr [ecx*4 + 0x11416130] */
  switch (ECX) {
    case 0: goto L_11416140;
    case 1: goto L_11416148;
    case 2: goto L_11416158;
    case 3: goto L_1141616c;
    default: x86_unimpl("switch@0x11416034 out of table"); return;
  }
  /* 1141603b nop  */
  /* nop */
L_11416048:;
  /* 11416048 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1141604b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1141604d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11416050 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11416051 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11416054 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11416055 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416058 jb 0x11416010 */
  if (C.cf) goto L_11416010;
  /* 1141605a std  */
  C.df=1;
  /* 1141605b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1141605d cld  */
  C.df=0;
  /* 1141605e jmp dword ptr [edx*4 + 0x11416130] */
  switch (EDX) {
    case 0: goto L_11416140;
    case 1: goto L_11416148;
    case 2: goto L_11416158;
    case 3: goto L_1141616c;
    default: x86_unimpl("switch@0x1141605e out of table"); return;
  }
  /* 11416065 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11416068:;
  /* 11416068 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1141606b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1141606d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11416070 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11416073 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11416076 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11416079 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141607c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141607f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416082 jb 0x11416010 */
  if (C.cf) goto L_11416010;
  /* 11416084 std  */
  C.df=1;
  /* 11416085 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11416087 cld  */
  C.df=0;
  /* 11416088 jmp dword ptr [edx*4 + 0x11416130] */
  switch (EDX) {
    case 0: goto L_11416140;
    case 1: goto L_11416148;
    case 2: goto L_11416158;
    case 3: goto L_1141616c;
    default: x86_unimpl("switch@0x11416088 out of table"); return;
  }
  /* 1141608f nop  */
  /* nop */
L_11416090:;
  /* 11416090 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11416093 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11416095 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11416098 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1141609b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1141609e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114160a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114160a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114160a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114160aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114160ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114160b0 jb 0x11416010 */
  if (C.cf) goto L_11416010;
  /* 114160b6 std  */
  C.df=1;
  /* 114160b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114160b9 cld  */
  C.df=0;
  /* 114160ba jmp dword ptr [edx*4 + 0x11416130] */
  switch (EDX) {
    case 0: goto L_11416140;
    case 1: goto L_11416148;
    case 2: goto L_11416158;
    case 3: goto L_1141616c;
    default: x86_unimpl("switch@0x114160ba out of table"); return;
  }
  /* 114160c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 114160c4 in al, 0x60 */
  x86_unimpl("in @ 0x114160c4");
  /* 114160c6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114160c7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114160c9 pushal  */
  x86_unimpl("pushal @ 0x114160c9");
  /* 114160ca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114160cb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114160cd pushal  */
  x86_unimpl("pushal @ 0x114160cd");
  /* 114160ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114160cf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114160d1 pushal  */
  x86_unimpl("pushal @ 0x114160d1");
  /* 114160d2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114160d3 adc dword ptr [ecx], eax */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 114160d6 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114160d7 adc dword ptr [ecx], ecx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 114160da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114160db adc dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 114160de inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114160e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 114160e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 114160ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 114160f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 114160f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 114160f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 114160fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11416100 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11416104 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11416108 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1141610c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11416110 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11416114 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11416118 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1141611c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11416123 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11416125 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11416127:;
  /* 11416127 jmp dword ptr [edx*4 + 0x11416130] */
  switch (EDX) {
    case 0: goto L_11416140;
    case 1: goto L_11416148;
    case 2: goto L_11416158;
    case 3: goto L_1141616c;
    default: x86_unimpl("switch@0x11416127 out of table"); return;
  }
  /* 1141612e mov edi, edi */
  EDI = (EDI);
L_11416140:;
  /* 11416140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11416143 pop esi */
  ESI = (pop32());
  /* 11416144 pop edi */
  EDI = (pop32());
  /* 11416145 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11416146 ret  */
  ESPCHK(0x11415e50u, _esp0);
  ESP += 4; return;
  /* 11416147 nop  */
  /* nop */
L_11416148:;
  /* 11416148 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1141614b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1141614e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11416151 pop esi */
  ESI = (pop32());
  /* 11416152 pop edi */
  EDI = (pop32());
  /* 11416153 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11416154 ret  */
  ESPCHK(0x11415e50u, _esp0);
  ESP += 4; return;
  /* 11416155 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11416158:;
  /* 11416158 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1141615b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1141615e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11416161 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11416164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11416167 pop esi */
  ESI = (pop32());
  /* 11416168 pop edi */
  EDI = (pop32());
  /* 11416169 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141616a ret  */
  ESPCHK(0x11415e50u, _esp0);
  ESP += 4; return;
  /* 1141616b nop  */
  /* nop */
L_1141616c:;
  /* 1141616c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1141616f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11416172 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11416175 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11416178 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1141617b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1141617e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11416181 pop esi */
  ESI = (pop32());
  /* 11416182 pop edi */
  EDI = (pop32());
  /* 11416183 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11416184 ret  */
  ESPCHK(0x11415e50u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11416185 (18 bytes, 6 insns) */
void f_11416185(void) {
  FTRACE(0x11416185u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416185 push dword ptr [0x11421770] */
  push32((uint32_t)(r32((uint32_t)(0x11421770))));
  /* 1141618b push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1141618f call 0x11416197 */
  push32(0x11416194u); f_11416197();
  /* 11416194 pop ecx */
  ECX = (pop32());
  /* 11416195 pop ecx */
  ECX = (pop32());
  /* 11416196 ret  */
  ESPCHK(0x11416185u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11416197 (44 bytes, 16 insns) */
void f_11416197(void) {
  FTRACE(0x11416197u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416197 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141619c ja 0x114161c0 */
  if ((!C.cf&&!C.zf)) goto L_114161c0;
L_1141619e:;
  /* 1141619e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 114161a2 call 0x114161c3 */
  push32(0x114161a7u); f_114161c3();
  /* 114161a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114161a9 pop ecx */
  ECX = (pop32());
  /* 114161aa jne 0x114161c2 */
  if (!C.zf) goto L_114161c2;
  /* 114161ac cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114161b0 je 0x114161c2 */
  if (C.zf) goto L_114161c2;
  /* 114161b2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 114161b6 call 0x11418c02 */
  push32(0x114161bbu); f_11418c02();
  /* 114161bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114161bd pop ecx */
  ECX = (pop32());
  /* 114161be jne 0x1141619e */
  if (!C.zf) goto L_1141619e;
L_114161c0:;
  /* 114161c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114161c2:;
  /* 114161c2 ret  */
  ESPCHK(0x11416197u, _esp0);
  ESP += 4; return;
}

/* FUN_100061c3 @ 0x114161c3 (231 bytes, 81 insns) */
void f_114161c3(void) {
  FTRACE(0x114161c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114161c3 push ebp */
  push32((uint32_t)(EBP));
  /* 114161c4 mov ebp, esp */
  EBP = (ESP);
  /* 114161c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114161c8 push 0x1141b1b0 */
  push32((uint32_t)(0x1141b1b0u));
  /* 114161cd push 0x114183c4 */
  push32((uint32_t)(0x114183c4u));
  /* 114161d2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114161d8 push eax */
  push32((uint32_t)(EAX));
  /* 114161d9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114161e0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114161e3 push ebx */
  push32((uint32_t)(EBX));
  /* 114161e4 push esi */
  push32((uint32_t)(ESI));
  /* 114161e5 push edi */
  push32((uint32_t)(EDI));
  /* 114161e6 mov eax, dword ptr [0x11421b48] */
  EAX = (r32((uint32_t)(0x11421b48)));
  /* 114161eb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114161ee jne 0x11416233 */
  if (!C.zf) goto L_11416233;
  /* 114161f0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 114161f3 cmp esi, dword ptr [0x11421b40] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11421b40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114161f9 ja 0x11416292 */
  if ((!C.cf&&!C.zf)) goto L_11416292;
  /* 114161ff push 9 */
  push32((uint32_t)(0x9u));
  /* 11416201 call 0x11418256 */
  push32(0x11416206u); f_11418256();
  /* 11416206 pop ecx */
  ECX = (pop32());
  /* 11416207 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1141620b push esi */
  push32((uint32_t)(ESI));
  /* 1141620c call 0x114176e8 */
  push32(0x11416211u); f_114176e8();
  /* 11416211 pop ecx */
  ECX = (pop32());
  /* 11416212 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11416215 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11416219 call 0x1141622a */
  push32(0x1141621eu); f_1141622a();
  /* 1141621e mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11416221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416223 je 0x11416292 */
  if (C.zf) goto L_11416292;
  /* 11416225 jmp 0x114162b0 */
  jmp_ind(0x114162b0u); return;
  /* 1141622a push 9 */
  push32((uint32_t)(0x9u));
  /* 1141622c call 0x114182b7 */
  push32(0x11416231u); f_114182b7();
  /* 11416231 pop ecx */
  ECX = (pop32());
  /* 11416232 ret  */
  ESPCHK(0x114161c3u, _esp0);
  ESP += 4; return;
L_11416233:;
  /* 11416233 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416236 jne 0x11416292 */
  if (!C.zf) goto L_11416292;
  /* 11416238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141623b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141623d je 0x11416247 */
  if (C.zf) goto L_11416247;
  /* 1141623f lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11416242 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11416245 jmp 0x1141624a */
  goto L_1141624a;
L_11416247:;
  /* 11416247 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11416249 pop esi */
  ESI = (pop32());
L_1141624a:;
  /* 1141624a mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1141624d cmp esi, dword ptr [0x1141ecfc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1141ecfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416253 ja 0x11416283 */
  if ((!C.cf&&!C.zf)) goto L_11416283;
  /* 11416255 push 9 */
  push32((uint32_t)(0x9u));
  /* 11416257 call 0x11418256 */
  push32(0x1141625cu); f_11418256();
  /* 1141625c pop ecx */
  ECX = (pop32());
  /* 1141625d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11416264 mov eax, esi */
  EAX = (ESI);
  /* 11416266 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11416269 push eax */
  push32((uint32_t)(EAX));
  /* 1141626a call 0x11417e95 */
  push32(0x1141626fu); f_11417e95();
  /* 1141626f pop ecx */
  ECX = (pop32());
  /* 11416270 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11416273 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11416277 call 0x11416289 */
  push32(0x1141627cu); f_11416289();
  /* 1141627c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1141627f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416281 jne 0x114162b0 */
  if (!C.zf) { jmp_ind(0x114162b0u); return; }
L_11416283:;
  /* 11416283 push esi */
  push32((uint32_t)(ESI));
  /* 11416284 jmp 0x114162a2 */
  goto L_114162a2;
  /* 11416286 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11416289 push 9 */
  push32((uint32_t)(0x9u));
  /* 1141628b call 0x114182b7 */
  push32(0x11416290u); f_114182b7();
  /* 11416290 pop ecx */
  ECX = (pop32());
  /* 11416291 ret  */
  ESPCHK(0x114161c3u, _esp0);
  ESP += 4; return;
L_11416292:;
  /* 11416292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11416295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416297 jne 0x1141629c */
  if (!C.zf) goto L_1141629c;
  /* 11416299 push 1 */
  push32((uint32_t)(0x1u));
  /* 1141629b pop eax */
  EAX = (pop32());
L_1141629c:;
  /* 1141629c add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141629f and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 114162a1 push eax */
  push32((uint32_t)(EAX));
L_114162a2:;
  /* 114162a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114162a4 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
}

/* FUN_1000622a @ 0x1141622a (9 bytes, 4 insns) */
void f_1141622a(void) {
  FTRACE(0x1141622au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141622a push 9 */
  push32((uint32_t)(0x9u));
  /* 1141622c call 0x114182b7 */
  push32(0x11416231u); f_114182b7();
  /* 11416231 pop ecx */
  ECX = (pop32());
  /* 11416232 ret  */
  ESPCHK(0x1141622au, _esp0);
  ESP += 4; return;
}

/* FUN_10006289 @ 0x11416289 (9 bytes, 4 insns) */
void f_11416289(void) {
  FTRACE(0x11416289u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416289 push 9 */
  push32((uint32_t)(0x9u));
  /* 1141628b call 0x114182b7 */
  push32(0x11416290u); f_114182b7();
  /* 11416290 pop ecx */
  ECX = (pop32());
  /* 11416291 ret  */
  ESPCHK(0x11416289u, _esp0);
  ESP += 4; return;
}

/* FUN_100062bf @ 0x114162bf (115 bytes, 37 insns) */
void f_114162bf(void) {
  FTRACE(0x114162bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114162bf push esi */
  push32((uint32_t)(ESI));
  /* 114162c0 call 0x1141633b */
  push32(0x114162c5u); f_1141633b();
  /* 114162c5 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 114162c9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 114162cb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114162cd mov eax, 0x1141cab0 */
  EAX = (0x1141cab0u);
L_114162d2:;
  /* 114162d2 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114162d4 je 0x114162f8 */
  if (C.zf) goto L_114162f8;
  /* 114162d6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114162d9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114162da cmp eax, 0x1141cc18 */
  { uint32_t _a=(EAX),_b=(0x1141cc18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114162df jl 0x114162d2 */
  if ((C.sf!=C.of)) goto L_114162d2;
  /* 114162e1 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114162e4 jb 0x11416308 */
  if (C.cf) goto L_11416308;
  /* 114162e6 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114162e9 ja 0x11416308 */
  if ((!C.cf&&!C.zf)) goto L_11416308;
  /* 114162eb call 0x11416332 */
  push32(0x114162f0u); f_11416332();
  /* 114162f0 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 114162f6 pop esi */
  ESI = (pop32());
  /* 114162f7 ret  */
  ESPCHK(0x114162bfu, _esp0);
  ESP += 4; return;
L_114162f8:;
  /* 114162f8 call 0x11416332 */
  push32(0x114162fdu); f_11416332();
  /* 114162fd mov ecx, dword ptr [esi*8 + 0x1141cab4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x1141cab4)));
  /* 11416304 pop esi */
  ESI = (pop32());
  /* 11416305 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11416307 ret  */
  ESPCHK(0x114162bfu, _esp0);
  ESP += 4; return;
L_11416308:;
  /* 11416308 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141630e jb 0x11416325 */
  if (C.cf) goto L_11416325;
  /* 11416310 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416316 ja 0x11416325 */
  if ((!C.cf&&!C.zf)) goto L_11416325;
  /* 11416318 call 0x11416332 */
  push32(0x1141631du); f_11416332();
  /* 1141631d mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11416323 pop esi */
  ESI = (pop32());
  /* 11416324 ret  */
  ESPCHK(0x114162bfu, _esp0);
  ESP += 4; return;
L_11416325:;
  /* 11416325 call 0x11416332 */
  push32(0x1141632au); f_11416332();
  /* 1141632a mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11416330 pop esi */
  ESI = (pop32());
  /* 11416331 ret  */
  ESPCHK(0x114162bfu, _esp0);
  ESP += 4; return;
}

/* FUN_10006332 @ 0x11416332 (9 bytes, 3 insns) */
void f_11416332(void) {
  FTRACE(0x11416332u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416332 call 0x11416a07 */
  push32(0x11416337u); f_11416a07();
  /* 11416337 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141633a ret  */
  ESPCHK(0x11416332u, _esp0);
  ESP += 4; return;
}

/* FUN_1000633b @ 0x1141633b (9 bytes, 3 insns) */
void f_1141633b(void) {
  FTRACE(0x1141633bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141633b call 0x11416a07 */
  push32(0x11416340u); f_11416a07();
  /* 11416340 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11416343 ret  */
  ESPCHK(0x1141633bu, _esp0);
  ESP += 4; return;
}

/* FUN_10006344 @ 0x11416344 (444 bytes, 150 insns) */
void f_11416344(void) {
  FTRACE(0x11416344u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416344 push ebp */
  push32((uint32_t)(EBP));
  /* 11416345 mov ebp, esp */
  EBP = (ESP);
  /* 11416347 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141634a push ebx */
  push32((uint32_t)(EBX));
  /* 1141634b push esi */
  push32((uint32_t)(ESI));
  /* 1141634c push edi */
  push32((uint32_t)(EDI));
  /* 1141634d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11416352 call 0x11416185 */
  push32(0x11416357u); f_11416185();
  /* 11416357 mov esi, eax */
  ESI = (EAX);
  /* 11416359 pop ecx */
  ECX = (pop32());
  /* 1141635a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1141635c jne 0x11416366 */
  if (!C.zf) goto L_11416366;
  /* 1141635e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11416360 call 0x11415598 */
  push32(0x11416365u); f_11415598();
  /* 11416365 pop ecx */
  ECX = (pop32());
L_11416366:;
  /* 11416366 mov dword ptr [0x11421b60], esi */
  w32((uint32_t)(0x11421b60), (ESI));
  /* 1141636c mov dword ptr [0x11421c60], 0x20 */
  w32((uint32_t)(0x11421c60), (0x20u));
  /* 11416376 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_1141637c:;
  /* 1141637c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141637e jae 0x1141639e */
  if (!C.cf) goto L_1141639e;
  /* 11416380 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11416384 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11416387 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1141638b mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 1141638f mov eax, dword ptr [0x11421b60] */
  EAX = (r32((uint32_t)(0x11421b60)));
  /* 11416394 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11416397 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141639c jmp 0x1141637c */
  goto L_1141637c;
L_1141639e:;
  /* 1141639e lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 114163a1 push eax */
  push32((uint32_t)(EAX));
  /* 114163a2 call dword ptr [0x1141b0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0a4))), 0x114163a8u);
  /* 114163a8 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 114163ad je 0x11416484 */
  if (C.zf) goto L_11416484;
  /* 114163b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 114163b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114163b8 je 0x11416484 */
  if (C.zf) goto L_11416484;
  /* 114163be mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 114163c0 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 114163c3 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 114163c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 114163c9 mov eax, 0x800 */
  EAX = (0x800u);
  /* 114163ce cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114163d0 jl 0x114163d4 */
  if ((C.sf!=C.of)) goto L_114163d4;
  /* 114163d2 mov edi, eax */
  EDI = (EAX);
L_114163d4:;
  /* 114163d4 cmp dword ptr [0x11421c60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11421c60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114163da jge 0x11416432 */
  if ((C.sf==C.of)) goto L_11416432;
  /* 114163dc mov esi, 0x11421b64 */
  ESI = (0x11421b64u);
L_114163e1:;
  /* 114163e1 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 114163e6 call 0x11416185 */
  push32(0x114163ebu); f_11416185();
  /* 114163eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114163ed pop ecx */
  ECX = (pop32());
  /* 114163ee je 0x1141642c */
  if (C.zf) goto L_1141642c;
  /* 114163f0 add dword ptr [0x11421c60], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11421c60))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11421c60), (_r)); fl_add(_a,_b,_r,32); }
  /* 114163f7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 114163f9 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_114163ff:;
  /* 114163ff cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416401 jae 0x1141641f */
  if (!C.cf) goto L_1141641f;
  /* 11416403 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11416407 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1141640a and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1141640e mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11416412 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11416414 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11416417 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141641d jmp 0x114163ff */
  goto L_114163ff;
L_1141641f:;
  /* 1141641f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11416422 cmp dword ptr [0x11421c60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11421c60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416428 jl 0x114163e1 */
  if ((C.sf!=C.of)) goto L_114163e1;
  /* 1141642a jmp 0x11416432 */
  goto L_11416432;
L_1141642c:;
  /* 1141642c mov edi, dword ptr [0x11421c60] */
  EDI = (r32((uint32_t)(0x11421c60)));
L_11416432:;
  /* 11416432 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11416434 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11416436 jle 0x11416484 */
  if ((C.zf||C.sf!=C.of)) goto L_11416484;
L_11416438:;
  /* 11416438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1141643b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1141643d cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416440 je 0x1141647a */
  if (C.zf) goto L_1141647a;
  /* 11416442 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11416444 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11416446 je 0x1141647a */
  if (C.zf) goto L_1141647a;
  /* 11416448 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1141644a jne 0x11416457 */
  if (!C.zf) goto L_11416457;
  /* 1141644c push ecx */
  push32((uint32_t)(ECX));
  /* 1141644d call dword ptr [0x1141b0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0a0))), 0x11416453u);
  /* 11416453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416455 je 0x1141647a */
  if (C.zf) goto L_1141647a;
L_11416457:;
  /* 11416457 mov ecx, esi */
  ECX = (ESI);
  /* 11416459 mov eax, esi */
  EAX = (ESI);
  /* 1141645b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1141645e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11416461 mov ecx, dword ptr [ecx*4 + 0x11421b60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 11416468 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1141646b lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1141646e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11416471 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11416473 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11416475 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11416477 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_1141647a:;
  /* 1141647a add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1141647e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1141647f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11416480 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416482 jl 0x11416438 */
  if ((C.sf!=C.of)) goto L_11416438;
L_11416484:;
  /* 11416484 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11416486:;
  /* 11416486 mov ecx, dword ptr [0x11421b60] */
  ECX = (r32((uint32_t)(0x11421b60)));
  /* 1141648c lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 1141648f cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416493 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11416496 jne 0x114164e5 */
  if (!C.zf) goto L_114164e5;
  /* 11416498 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1141649a mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 1141649e jne 0x114164a5 */
  if (!C.zf) goto L_114164a5;
  /* 114164a0 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 114164a2 pop eax */
  EAX = (pop32());
  /* 114164a3 jmp 0x114164af */
  goto L_114164af;
L_114164a5:;
  /* 114164a5 mov eax, ebx */
  EAX = (EBX);
  /* 114164a7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 114164a8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 114164aa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114164ac add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_114164af:;
  /* 114164af push eax */
  push32((uint32_t)(EAX));
  /* 114164b0 call dword ptr [0x1141b09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b09c))), 0x114164b6u);
  /* 114164b6 mov edi, eax */
  EDI = (EAX);
  /* 114164b8 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114164bb je 0x114164d4 */
  if (C.zf) goto L_114164d4;
  /* 114164bd push edi */
  push32((uint32_t)(EDI));
  /* 114164be call dword ptr [0x1141b0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0a0))), 0x114164c4u);
  /* 114164c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114164c6 je 0x114164d4 */
  if (C.zf) goto L_114164d4;
  /* 114164c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114164cd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 114164cf cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114164d2 jne 0x114164da */
  if (!C.zf) goto L_114164da;
L_114164d4:;
  /* 114164d4 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 114164d8 jmp 0x114164e9 */
  goto L_114164e9;
L_114164da:;
  /* 114164da cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114164dd jne 0x114164e9 */
  if (!C.zf) goto L_114164e9;
  /* 114164df or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 114164e3 jmp 0x114164e9 */
  goto L_114164e9;
L_114164e5:;
  /* 114164e5 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_114164e9:;
  /* 114164e9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 114164ea cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114164ed jl 0x11416486 */
  if ((C.sf!=C.of)) goto L_11416486;
  /* 114164ef push dword ptr [0x11421c60] */
  push32((uint32_t)(r32((uint32_t)(0x11421c60))));
  /* 114164f5 call dword ptr [0x1141b098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b098))), 0x114164fbu);
  /* 114164fb pop edi */
  EDI = (pop32());
  /* 114164fc pop esi */
  ESI = (pop32());
  /* 114164fd pop ebx */
  EBX = (pop32());
  /* 114164fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114164ff ret  */
  ESPCHK(0x11416344u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x11416500 (84 bytes, 33 insns) */
void f_11416500(void) {
  FTRACE(0x11416500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416500 push ebx */
  push32((uint32_t)(EBX));
  /* 11416501 push esi */
  push32((uint32_t)(ESI));
  /* 11416502 push edi */
  push32((uint32_t)(EDI));
  /* 11416503 mov esi, 0x11421b60 */
  ESI = (0x11421b60u);
L_11416508:;
  /* 11416508 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1141650a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141650c je 0x11416545 */
  if (C.zf) goto L_11416545;
  /* 1141650e mov edi, eax */
  EDI = (EAX);
  /* 11416510 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11416515 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416517 jae 0x1141653a */
  if (!C.cf) goto L_1141653a;
  /* 11416519 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_1141651c:;
  /* 1141651c cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416520 je 0x11416529 */
  if (C.zf) goto L_11416529;
  /* 11416522 push ebx */
  push32((uint32_t)(EBX));
  /* 11416523 call dword ptr [0x1141b0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0a8))), 0x11416529u);
L_11416529:;
  /* 11416529 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1141652b add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1141652e add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11416533 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11416536 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416538 jb 0x1141651c */
  if (C.cf) goto L_1141651c;
L_1141653a:;
  /* 1141653a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1141653c call 0x114155cb */
  push32(0x11416541u); f_114155cb();
  /* 11416541 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11416544 pop ecx */
  ECX = (pop32());
L_11416545:;
  /* 11416545 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11416548 cmp esi, 0x11421c60 */
  { uint32_t _a=(ESI),_b=(0x11421c60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141654e jl 0x11416508 */
  if ((C.sf!=C.of)) goto L_11416508;
  /* 11416550 pop edi */
  EDI = (pop32());
  /* 11416551 pop esi */
  ESI = (pop32());
  /* 11416552 pop ebx */
  EBX = (pop32());
  /* 11416553 ret  */
  ESPCHK(0x11416500u, _esp0);
  ESP += 4; return;
}

/* FUN_10006554 @ 0x11416554 (101 bytes, 34 insns) */
void f_11416554(void) {
  FTRACE(0x11416554u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416554 push esi */
  push32((uint32_t)(ESI));
  /* 11416555 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11416559 cmp esi, dword ptr [0x11421c60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11421c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141655f jae 0x114165a1 */
  if (!C.cf) goto L_114165a1;
  /* 11416561 mov ecx, esi */
  ECX = (ESI);
  /* 11416563 mov eax, esi */
  EAX = (ESI);
  /* 11416565 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11416568 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1141656b mov ecx, dword ptr [ecx*4 + 0x11421b60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 11416572 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11416575 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1141657a je 0x114165a1 */
  if (C.zf) goto L_114165a1;
  /* 1141657c push edi */
  push32((uint32_t)(EDI));
  /* 1141657d push esi */
  push32((uint32_t)(ESI));
  /* 1141657e call 0x114188ba */
  push32(0x11416583u); f_114188ba();
  /* 11416583 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11416587 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1141658b push esi */
  push32((uint32_t)(ESI));
  /* 1141658c call 0x114165b9 */
  push32(0x11416591u); f_114165b9();
  /* 11416591 push esi */
  push32((uint32_t)(ESI));
  /* 11416592 mov edi, eax */
  EDI = (EAX);
  /* 11416594 call 0x11418919 */
  push32(0x11416599u); f_11418919();
  /* 11416599 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141659c mov eax, edi */
  EAX = (EDI);
  /* 1141659e pop edi */
  EDI = (pop32());
  /* 1141659f pop esi */
  ESI = (pop32());
  /* 114165a0 ret  */
  ESPCHK(0x11416554u, _esp0);
  ESP += 4; return;
L_114165a1:;
  /* 114165a1 call 0x11416332 */
  push32(0x114165a6u); f_11416332();
  /* 114165a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114165ac call 0x1141633b */
  push32(0x114165b1u); f_1141633b();
  /* 114165b1 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 114165b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114165b7 pop esi */
  ESI = (pop32());
  /* 114165b8 ret  */
  ESPCHK(0x11416554u, _esp0);
  ESP += 4; return;
}

/* FUN_100065b9 @ 0x114165b9 (115 bytes, 41 insns) */
void f_114165b9(void) {
  FTRACE(0x114165b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114165b9 push esi */
  push32((uint32_t)(ESI));
  /* 114165ba mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 114165be push edi */
  push32((uint32_t)(EDI));
  /* 114165bf push esi */
  push32((uint32_t)(ESI));
  /* 114165c0 call 0x11418878 */
  push32(0x114165c5u); f_11418878();
  /* 114165c5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114165c8 pop ecx */
  ECX = (pop32());
  /* 114165c9 jne 0x114165d8 */
  if (!C.zf) goto L_114165d8;
  /* 114165cb call 0x11416332 */
  push32(0x114165d0u); f_11416332();
  /* 114165d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 114165d6 jmp 0x11416605 */
  goto L_11416605;
L_114165d8:;
  /* 114165d8 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 114165dc push 0 */
  push32((uint32_t)(0x0u));
  /* 114165de push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 114165e2 push eax */
  push32((uint32_t)(EAX));
  /* 114165e3 call dword ptr [0x1141b000] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b000))), 0x114165e9u);
  /* 114165e9 mov edi, eax */
  EDI = (EAX);
  /* 114165eb cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114165ee jne 0x114165f8 */
  if (!C.zf) goto L_114165f8;
  /* 114165f0 call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x114165f6u);
  /* 114165f6 jmp 0x114165fa */
  goto L_114165fa;
L_114165f8:;
  /* 114165f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114165fa:;
  /* 114165fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114165fc je 0x1141660a */
  if (C.zf) goto L_1141660a;
  /* 114165fe push eax */
  push32((uint32_t)(EAX));
  /* 114165ff call 0x114162bf */
  push32(0x11416604u); f_114162bf();
  /* 11416604 pop ecx */
  ECX = (pop32());
L_11416605:;
  /* 11416605 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11416608 jmp 0x11416629 */
  goto L_11416629;
L_1141660a:;
  /* 1141660a mov ecx, esi */
  ECX = (ESI);
  /* 1141660c and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1141660f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11416612 mov eax, esi */
  EAX = (ESI);
  /* 11416614 mov ecx, dword ptr [ecx*4 + 0x11421b60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11421b60)));
  /* 1141661b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1141661e and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11416623 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11416627 mov eax, edi */
  EAX = (EDI);
L_11416629:;
  /* 11416629 pop edi */
  EDI = (pop32());
  /* 1141662a pop esi */
  ESI = (pop32());
  /* 1141662b ret  */
  ESPCHK(0x114165b9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000662c @ 0x1141662c (368 bytes, 124 insns) */
void f_1141662c(void) {
  FTRACE(0x1141662cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141662c push ebp */
  push32((uint32_t)(EBP));
  /* 1141662d mov ebp, esp */
  EBP = (ESP);
  /* 1141662f push ecx */
  push32((uint32_t)(ECX));
  /* 11416630 push ecx */
  push32((uint32_t)(ECX));
  /* 11416631 push ebx */
  push32((uint32_t)(EBX));
  /* 11416632 push esi */
  push32((uint32_t)(ESI));
  /* 11416633 mov esi, dword ptr [0x11421778] */
  ESI = (r32((uint32_t)(0x11421778)));
  /* 11416639 push edi */
  push32((uint32_t)(EDI));
  /* 1141663a mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1141663d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1141663f mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11416642 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11416645 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11416647 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416649 je 0x11416665 */
  if (C.zf) goto L_11416665;
  /* 1141664b cmp al, 0x72 */
  { uint32_t _a=(AL),_b=(0x72u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141664d je 0x1141665e */
  if (C.zf) goto L_1141665e;
  /* 1141664f cmp al, 0x77 */
  { uint32_t _a=(AL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416651 jne 0x11416779 */
  if (!C.zf) goto L_11416779;
  /* 11416657 mov ecx, 0x301 */
  ECX = (0x301u);
  /* 1141665c jmp 0x1141666a */
  goto L_1141666a;
L_1141665e:;
  /* 1141665e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11416660 or esi, 1 */
  { uint32_t _r=(ESI)|(0x1u); ESI = (_r); fl_logic(_r,32); }
  /* 11416663 jmp 0x1141666d */
  goto L_1141666d;
L_11416665:;
  /* 11416665 mov ecx, 0x109 */
  ECX = (0x109u);
L_1141666a:;
  /* 1141666a or esi, 2 */
  { uint32_t _r=(ESI)|(0x2u); ESI = (_r); fl_logic(_r,32); }
L_1141666d:;
  /* 1141666d push 1 */
  push32((uint32_t)(0x1u));
  /* 1141666f pop edx */
  EDX = (pop32());
L_11416670:;
  /* 11416670 mov al, byte ptr [edi + 1] */
  AL = (r8((uint32_t)(EDI + 0x1)));
  /* 11416673 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11416674 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416676 je 0x1141675f */
  if (C.zf) goto L_1141675f;
  /* 1141667c cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141667e je 0x1141675f */
  if (C.zf) goto L_1141675f;
  /* 11416684 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11416687 cmp eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141668a jg 0x114166fe */
  if ((!C.zf&&C.sf==C.of)) goto L_114166fe;
  /* 1141668c je 0x114166ee */
  if (C.zf) goto L_114166ee;
  /* 1141668e sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11416691 je 0x114166d8 */
  if (C.zf) goto L_114166d8;
  /* 11416693 sub eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11416696 je 0x114166ce */
  if (C.zf) goto L_114166ce;
  /* 11416698 sub eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141669b je 0x114166b9 */
  if (C.zf) goto L_114166b9;
  /* 1141669d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1141669e jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 114166a4 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114166a7 jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 114166ad mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114166b4 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 114166b7 jmp 0x11416670 */
  goto L_11416670;
L_114166b9:;
  /* 114166b9 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114166bc jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 114166c2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 114166c9 or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 114166cc jmp 0x11416670 */
  goto L_11416670;
L_114166ce:;
  /* 114166ce test cl, 0x40 */
  { uint32_t _r=(CL)&(0x40u); fl_logic(_r,8); }
  /* 114166d1 jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 114166d3 or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 114166d6 jmp 0x11416670 */
  goto L_11416670;
L_114166d8:;
  /* 114166d8 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 114166db jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 114166dd and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 114166e0 and esi, 0xfffffffc */
  { uint32_t _r=(ESI)&(0xfffffffcu); ESI = (_r); fl_logic(_r,32); }
  /* 114166e3 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 114166e6 or esi, 0x80 */
  { uint32_t _r=(ESI)|(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 114166ec jmp 0x11416670 */
  goto L_11416670;
L_114166ee:;
  /* 114166ee mov eax, 0x1000 */
  EAX = (0x1000u);
  /* 114166f3 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 114166f5 jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 114166f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 114166f9 jmp 0x11416670 */
  goto L_11416670;
L_114166fe:;
  /* 114166fe sub eax, 0x62 */
  { uint32_t _a=(EAX),_b=(0x62u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11416701 je 0x1141674b */
  if (C.zf) goto L_1141674b;
  /* 11416703 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11416704 je 0x11416734 */
  if (C.zf) goto L_11416734;
  /* 11416706 sub eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11416709 je 0x1141671d */
  if (C.zf) goto L_1141671d;
  /* 1141670b sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141670e jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 11416710 test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 11416713 jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 11416715 or ch, 0x40 */
  { uint32_t _r=(C.c.b.h)|(0x40u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11416718 jmp 0x11416670 */
  goto L_11416670;
L_1141671d:;
  /* 1141671d cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416720 jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 11416722 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11416729 and esi, 0xffffbfff */
  { uint32_t _r=(ESI)&(0xffffbfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1141672f jmp 0x11416670 */
  goto L_11416670;
L_11416734:;
  /* 11416734 cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416737 jne 0x11416750 */
  if (!C.zf) goto L_11416750;
  /* 11416739 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11416740 or esi, 0x4000 */
  { uint32_t _r=(ESI)|(0x4000u); ESI = (_r); fl_logic(_r,32); }
  /* 11416746 jmp 0x11416670 */
  goto L_11416670;
L_1141674b:;
  /* 1141674b test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 1141674e je 0x11416757 */
  if (C.zf) goto L_11416757;
L_11416750:;
  /* 11416750 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11416752 jmp 0x11416670 */
  goto L_11416670;
L_11416757:;
  /* 11416757 or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1141675a jmp 0x11416670 */
  goto L_11416670;
L_1141675f:;
  /* 1141675f push 0x1a4 */
  push32((uint32_t)(0x1a4u));
  /* 11416764 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11416767 push ecx */
  push32((uint32_t)(ECX));
  /* 11416768 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1141676b call 0x11418c1d */
  push32(0x11416770u); f_11418c1d();
  /* 11416770 mov ecx, eax */
  ECX = (EAX);
  /* 11416772 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11416775 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416777 jge 0x1141677d */
  if ((C.sf==C.of)) goto L_1141677d;
L_11416779:;
  /* 11416779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1141677b jmp 0x11416797 */
  goto L_11416797;
L_1141677d:;
  /* 1141677d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11416780 inc dword ptr [0x114215b8] */
  { uint32_t _r=(r32((uint32_t)(0x114215b8)))+1; w32((uint32_t)(0x114215b8), (_r)); fl_inc(_r,32); }
  /* 11416786 mov dword ptr [eax + 0xc], esi */
  w32((uint32_t)(EAX + 0xc), (ESI));
  /* 11416789 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 1141678c mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 1141678e mov dword ptr [eax + 8], ebx */
  w32((uint32_t)(EAX + 0x8), (EBX));
  /* 11416791 mov dword ptr [eax + 0x1c], ebx */
  w32((uint32_t)(EAX + 0x1c), (EBX));
  /* 11416794 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
L_11416797:;
  /* 11416797 pop edi */
  EDI = (pop32());
  /* 11416798 pop esi */
  ESI = (pop32());
  /* 11416799 pop ebx */
  EBX = (pop32());
  /* 1141679a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141679b ret  */
  ESPCHK(0x1141662cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000679c @ 0x1141679c (200 bytes, 73 insns) */
void f_1141679c(void) {
  FTRACE(0x1141679cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141679c push ebx */
  push32((uint32_t)(EBX));
  /* 1141679d push esi */
  push32((uint32_t)(ESI));
  /* 1141679e push edi */
  push32((uint32_t)(EDI));
  /* 1141679f push 2 */
  push32((uint32_t)(0x2u));
  /* 114167a1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114167a3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 114167a5 call 0x11418256 */
  push32(0x114167aau); f_11418256();
  /* 114167aa xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 114167ac cmp dword ptr [0x11422c80], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11422c80))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114167b2 pop ecx */
  ECX = (pop32());
  /* 114167b3 jle 0x11416856 */
  if ((C.zf||C.sf!=C.of)) goto L_11416856;
L_114167b9:;
  /* 114167b9 mov eax, dword ptr [0x11421c64] */
  EAX = (r32((uint32_t)(0x11421c64)));
  /* 114167be mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 114167c1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114167c3 je 0x114167fc */
  if (C.zf) goto L_114167fc;
  /* 114167c5 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 114167c9 jne 0x114167ec */
  if (!C.zf) goto L_114167ec;
  /* 114167cb push eax */
  push32((uint32_t)(EAX));
  /* 114167cc push esi */
  push32((uint32_t)(ESI));
  /* 114167cd call 0x11415877 */
  push32(0x114167d2u); f_11415877();
  /* 114167d2 pop ecx */
  ECX = (pop32());
  /* 114167d3 pop ecx */
  ECX = (pop32());
  /* 114167d4 mov ecx, dword ptr [0x11421c64] */
  ECX = (r32((uint32_t)(0x11421c64)));
  /* 114167da mov eax, dword ptr [ecx + esi*4] */
  EAX = (r32((uint32_t)(ECX + ESI*4)));
  /* 114167dd test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 114167e1 je 0x114167f7 */
  if (C.zf) goto L_114167f7;
  /* 114167e3 push eax */
  push32((uint32_t)(EAX));
  /* 114167e4 push esi */
  push32((uint32_t)(ESI));
  /* 114167e5 call 0x114158c9 */
  push32(0x114167eau); f_114158c9();
  /* 114167ea pop ecx */
  ECX = (pop32());
  /* 114167eb pop ecx */
  ECX = (pop32());
L_114167ec:;
  /* 114167ec inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114167ed cmp esi, dword ptr [0x11422c80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11422c80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114167f3 jl 0x114167b9 */
  if ((C.sf!=C.of)) goto L_114167b9;
  /* 114167f5 jmp 0x11416856 */
  goto L_11416856;
L_114167f7:;
  /* 114167f7 mov edi, dword ptr [ecx + esi*4] */
  EDI = (r32((uint32_t)(ECX + ESI*4)));
  /* 114167fa jmp 0x11416840 */
  goto L_11416840;
L_114167fc:;
  /* 114167fc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 114167fe shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11416801 call 0x11416185 */
  push32(0x11416806u); f_11416185();
  /* 11416806 pop ecx */
  ECX = (pop32());
  /* 11416807 mov ecx, dword ptr [0x11421c64] */
  ECX = (r32((uint32_t)(0x11421c64)));
  /* 1141680d mov dword ptr [esi + ecx], eax */
  w32((uint32_t)(ESI + ECX*1), (EAX));
  /* 11416810 mov eax, dword ptr [0x11421c64] */
  EAX = (r32((uint32_t)(0x11421c64)));
  /* 11416815 mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 11416818 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141681a je 0x11416856 */
  if (C.zf) goto L_11416856;
  /* 1141681c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141681f push eax */
  push32((uint32_t)(EAX));
  /* 11416820 call dword ptr [0x1141b004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b004))), 0x11416826u);
  /* 11416826 mov eax, dword ptr [0x11421c64] */
  EAX = (r32((uint32_t)(0x11421c64)));
  /* 1141682b mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 1141682e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11416831 push eax */
  push32((uint32_t)(EAX));
  /* 11416832 call dword ptr [0x1141b080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b080))), 0x11416838u);
  /* 11416838 mov eax, dword ptr [0x11421c64] */
  EAX = (r32((uint32_t)(0x11421c64)));
  /* 1141683d mov edi, dword ptr [esi + eax] */
  EDI = (r32((uint32_t)(ESI + EAX*1)));
L_11416840:;
  /* 11416840 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416842 je 0x11416856 */
  if (C.zf) goto L_11416856;
  /* 11416844 or dword ptr [edi + 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI + 0x10)))|(0xffffffffu); w32((uint32_t)(EDI + 0x10), (_r)); fl_logic(_r,32); }
  /* 11416848 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
  /* 1141684b mov dword ptr [edi + 0xc], ebx */
  w32((uint32_t)(EDI + 0xc), (EBX));
  /* 1141684e mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11416851 mov dword ptr [edi], ebx */
  w32((uint32_t)(EDI), (EBX));
  /* 11416853 mov dword ptr [edi + 0x1c], ebx */
  w32((uint32_t)(EDI + 0x1c), (EBX));
L_11416856:;
  /* 11416856 push 2 */
  push32((uint32_t)(0x2u));
  /* 11416858 call 0x114182b7 */
  push32(0x1141685du); f_114182b7();
  /* 1141685d pop ecx */
  ECX = (pop32());
  /* 1141685e mov eax, edi */
  EAX = (EDI);
  /* 11416860 pop edi */
  EDI = (pop32());
  /* 11416861 pop esi */
  ESI = (pop32());
  /* 11416862 pop ebx */
  EBX = (pop32());
  /* 11416863 ret  */
  ESPCHK(0x1141679cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006864 @ 0x11416864 (45 bytes, 12 insns) */
void f_11416864(void) {
  FTRACE(0x11416864u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416864 mov eax, dword ptr [0x11421b5c] */
  EAX = (r32((uint32_t)(0x11421b5c)));
  /* 11416869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141686b je 0x1141686f */
  if (C.zf) goto L_1141686f;
  /* 1141686d call eax */
  call_ind((uint32_t)(EAX), 0x1141686fu);
L_1141686f:;
  /* 1141686f push 0x1141c040 */
  push32((uint32_t)(0x1141c040u));
  /* 11416874 push 0x1141c034 */
  push32((uint32_t)(0x1141c034u));
  /* 11416879 call 0x11416968 */
  push32(0x1141687eu); f_11416968();
  /* 1141687e push 0x1141c030 */
  push32((uint32_t)(0x1141c030u));
  /* 11416883 push 0x1141c000 */
  push32((uint32_t)(0x1141c000u));
  /* 11416888 call 0x11416968 */
  push32(0x1141688du); f_11416968();
  /* 1141688d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11416890 ret  */
  ESPCHK(0x11416864u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11416891 (17 bytes, 6 insns) */
void f_11416891(void) {
  FTRACE(0x11416891u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416891 push 0 */
  push32((uint32_t)(0x0u));
  /* 11416893 push 1 */
  push32((uint32_t)(0x1u));
  /* 11416895 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11416899 call 0x114168b1 */
  push32(0x1141689eu); f_114168b1();
  /* 1141689e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114168a1 ret  */
  ESPCHK(0x11416891u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a2 @ 0x114168a2 (15 bytes, 6 insns) */
void f_114168a2(void) {
  FTRACE(0x114168a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114168a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 114168a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 114168a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 114168a8 call 0x114168b1 */
  push32(0x114168adu); f_114168b1();
  /* 114168ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114168b0 ret  */
  ESPCHK(0x114168a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b1 @ 0x114168b1 (163 bytes, 53 insns) */
void f_114168b1(void) {
  FTRACE(0x114168b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114168b1 push edi */
  push32((uint32_t)(EDI));
  /* 114168b2 call 0x11416956 */
  push32(0x114168b7u); f_11416956();
  /* 114168b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 114168b9 pop edi */
  EDI = (pop32());
  /* 114168ba cmp dword ptr [0x114215fc], edi */
  { uint32_t _a=(r32((uint32_t)(0x114215fc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114168c0 jne 0x114168d3 */
  if (!C.zf) goto L_114168d3;
  /* 114168c2 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 114168c6 call dword ptr [0x1141b0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0bc))), 0x114168ccu);
  /* 114168cc push eax */
  push32((uint32_t)(EAX));
  /* 114168cd call dword ptr [0x1141b0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0b8))), 0x114168d3u);
L_114168d3:;
  /* 114168d3 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114168d8 push ebx */
  push32((uint32_t)(EBX));
  /* 114168d9 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 114168dd mov dword ptr [0x114215f8], edi */
  w32((uint32_t)(0x114215f8), (EDI));
  /* 114168e3 mov byte ptr [0x114215f4], bl */
  w8((uint32_t)(0x114215f4), (BL));
  /* 114168e9 jne 0x11416927 */
  if (!C.zf) goto L_11416927;
  /* 114168eb mov eax, dword ptr [0x11421b58] */
  EAX = (r32((uint32_t)(0x11421b58)));
  /* 114168f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114168f2 je 0x11416916 */
  if (C.zf) goto L_11416916;
  /* 114168f4 mov ecx, dword ptr [0x11421b54] */
  ECX = (r32((uint32_t)(0x11421b54)));
  /* 114168fa push esi */
  push32((uint32_t)(ESI));
  /* 114168fb lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 114168fe cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416900 jb 0x11416915 */
  if (C.cf) goto L_11416915;
L_11416902:;
  /* 11416902 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11416904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416906 je 0x1141690a */
  if (C.zf) goto L_1141690a;
  /* 11416908 call eax */
  call_ind((uint32_t)(EAX), 0x1141690au);
L_1141690a:;
  /* 1141690a sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141690d cmp esi, dword ptr [0x11421b58] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11421b58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416913 jae 0x11416902 */
  if (!C.cf) goto L_11416902;
L_11416915:;
  /* 11416915 pop esi */
  ESI = (pop32());
L_11416916:;
  /* 11416916 push 0x1141c04c */
  push32((uint32_t)(0x1141c04cu));
  /* 1141691b push 0x1141c044 */
  push32((uint32_t)(0x1141c044u));
  /* 11416920 call 0x11416968 */
  push32(0x11416925u); f_11416968();
  /* 11416925 pop ecx */
  ECX = (pop32());
  /* 11416926 pop ecx */
  ECX = (pop32());
L_11416927:;
  /* 11416927 push 0x1141c054 */
  push32((uint32_t)(0x1141c054u));
  /* 1141692c push 0x1141c050 */
  push32((uint32_t)(0x1141c050u));
  /* 11416931 call 0x11416968 */
  push32(0x11416936u); f_11416968();
  /* 11416936 pop ecx */
  ECX = (pop32());
  /* 11416937 pop ecx */
  ECX = (pop32());
  /* 11416938 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1141693a pop ebx */
  EBX = (pop32());
  /* 1141693b je 0x11416944 */
  if (C.zf) goto L_11416944;
  /* 1141693d call 0x1141695f */
  push32(0x11416942u); f_1141695f();
  /* 11416942 pop edi */
  EDI = (pop32());
  /* 11416943 ret  */
  ESPCHK(0x114168b1u, _esp0);
  ESP += 4; return;
L_11416944:;
  /* 11416944 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11416948 mov dword ptr [0x114215fc], edi */
  w32((uint32_t)(0x114215fc), (EDI));
  /* 1141694e call dword ptr [0x1141b0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0b4))), 0x11416954u);
  /* 11416954 pop edi */
  EDI = (pop32());
  /* 11416955 ret  */
  ESPCHK(0x114168b1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006956 @ 0x11416956 (9 bytes, 4 insns) */
void f_11416956(void) {
  FTRACE(0x11416956u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416956 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11416958 call 0x11418256 */
  push32(0x1141695du); f_11418256();
  /* 1141695d pop ecx */
  ECX = (pop32());
  /* 1141695e ret  */
  ESPCHK(0x11416956u, _esp0);
  ESP += 4; return;
}

/* FUN_1000695f @ 0x1141695f (9 bytes, 4 insns) */
void f_1141695f(void) {
  FTRACE(0x1141695fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141695f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11416961 call 0x114182b7 */
  push32(0x11416966u); f_114182b7();
  /* 11416966 pop ecx */
  ECX = (pop32());
  /* 11416967 ret  */
  ESPCHK(0x1141695fu, _esp0);
  ESP += 4; return;
}

/* FUN_10006968 @ 0x11416968 (26 bytes, 12 insns) */
void f_11416968(void) {
  FTRACE(0x11416968u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416968 push esi */
  push32((uint32_t)(ESI));
  /* 11416969 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_1141696d:;
  /* 1141696d cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416971 jae 0x11416980 */
  if (!C.cf) goto L_11416980;
  /* 11416973 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11416975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416977 je 0x1141697b */
  if (C.zf) goto L_1141697b;
  /* 11416979 call eax */
  call_ind((uint32_t)(EAX), 0x1141697bu);
L_1141697b:;
  /* 1141697b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1141697e jmp 0x1141696d */
  goto L_1141696d;
L_11416980:;
  /* 11416980 pop esi */
  ESI = (pop32());
  /* 11416981 ret  */
  ESPCHK(0x11416968u, _esp0);
  ESP += 4; return;
}

/* FUN_10006982 @ 0x11416982 (84 bytes, 32 insns) */
void f_11416982(void) {
  FTRACE(0x11416982u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416982 push esi */
  push32((uint32_t)(ESI));
  /* 11416983 call 0x114181c1 */
  push32(0x11416988u); f_114181c1();
  /* 11416988 call dword ptr [0x1141b0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0c8))), 0x1141698eu);
  /* 1141698e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416991 mov dword ptr [0x1141cc3c], eax */
  w32((uint32_t)(0x1141cc3c), (EAX));
  /* 11416996 je 0x114169d2 */
  if (C.zf) goto L_114169d2;
  /* 11416998 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1141699a push 1 */
  push32((uint32_t)(0x1u));
  /* 1141699c call 0x1141849c */
  push32(0x114169a1u); f_1141849c();
  /* 114169a1 mov esi, eax */
  ESI = (EAX);
  /* 114169a3 pop ecx */
  ECX = (pop32());
  /* 114169a4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114169a6 pop ecx */
  ECX = (pop32());
  /* 114169a7 je 0x114169d2 */
  if (C.zf) goto L_114169d2;
  /* 114169a9 push esi */
  push32((uint32_t)(ESI));
  /* 114169aa push dword ptr [0x1141cc3c] */
  push32((uint32_t)(r32((uint32_t)(0x1141cc3c))));
  /* 114169b0 call dword ptr [0x1141b0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0c4))), 0x114169b6u);
  /* 114169b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114169b8 je 0x114169d2 */
  if (C.zf) goto L_114169d2;
  /* 114169ba push esi */
  push32((uint32_t)(ESI));
  /* 114169bb call 0x114169f4 */
  push32(0x114169c0u); f_114169f4();
  /* 114169c0 pop ecx */
  ECX = (pop32());
  /* 114169c1 call dword ptr [0x1141b0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0c0))), 0x114169c7u);
  /* 114169c7 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 114169cb push 1 */
  push32((uint32_t)(0x1u));
  /* 114169cd mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 114169cf pop eax */
  EAX = (pop32());
  /* 114169d0 pop esi */
  ESI = (pop32());
  /* 114169d1 ret  */
  ESPCHK(0x11416982u, _esp0);
  ESP += 4; return;
L_114169d2:;
  /* 114169d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114169d4 pop esi */
  ESI = (pop32());
  /* 114169d5 ret  */
  ESPCHK(0x11416982u, _esp0);
  ESP += 4; return;
}

/* FUN_100069d6 @ 0x114169d6 (30 bytes, 8 insns) */
void f_114169d6(void) {
  FTRACE(0x114169d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114169d6 call 0x114181ea */
  push32(0x114169dbu); f_114181ea();
  /* 114169db mov eax, dword ptr [0x1141cc3c] */
  EAX = (r32((uint32_t)(0x1141cc3c)));
  /* 114169e0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114169e3 je 0x114169f3 */
  if (C.zf) goto L_114169f3;
  /* 114169e5 push eax */
  push32((uint32_t)(EAX));
  /* 114169e6 call dword ptr [0x1141b0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0ac))), 0x114169ecu);
  /* 114169ec or dword ptr [0x1141cc3c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1141cc3c)))|(0xffffffffu); w32((uint32_t)(0x1141cc3c), (_r)); fl_logic(_r,32); }
L_114169f3:;
  /* 114169f3 ret  */
  ESPCHK(0x114169d6u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f4 @ 0x114169f4 (19 bytes, 4 insns) */
void f_114169f4(void) {
  FTRACE(0x114169f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114169f4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114169f8 mov dword ptr [eax + 0x50], 0x1141edd0 */
  w32((uint32_t)(EAX + 0x50), (0x1141edd0u));
  /* 114169ff mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11416a06 ret  */
  ESPCHK(0x114169f4u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a07 @ 0x11416a07 (103 bytes, 38 insns) */
void f_11416a07(void) {
  FTRACE(0x11416a07u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416a07 push esi */
  push32((uint32_t)(ESI));
  /* 11416a08 push edi */
  push32((uint32_t)(EDI));
  /* 11416a09 call dword ptr [0x1141b088] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b088))), 0x11416a0fu);
  /* 11416a0f push dword ptr [0x1141cc3c] */
  push32((uint32_t)(r32((uint32_t)(0x1141cc3c))));
  /* 11416a15 mov edi, eax */
  EDI = (EAX);
  /* 11416a17 call dword ptr [0x1141b0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0d0))), 0x11416a1du);
  /* 11416a1d mov esi, eax */
  ESI = (EAX);
  /* 11416a1f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416a21 jne 0x11416a62 */
  if (!C.zf) goto L_11416a62;
  /* 11416a23 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11416a25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11416a27 call 0x1141849c */
  push32(0x11416a2cu); f_1141849c();
  /* 11416a2c mov esi, eax */
  ESI = (EAX);
  /* 11416a2e pop ecx */
  ECX = (pop32());
  /* 11416a2f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416a31 pop ecx */
  ECX = (pop32());
  /* 11416a32 je 0x11416a5a */
  if (C.zf) goto L_11416a5a;
  /* 11416a34 push esi */
  push32((uint32_t)(ESI));
  /* 11416a35 push dword ptr [0x1141cc3c] */
  push32((uint32_t)(r32((uint32_t)(0x1141cc3c))));
  /* 11416a3b call dword ptr [0x1141b0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0c4))), 0x11416a41u);
  /* 11416a41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416a43 je 0x11416a5a */
  if (C.zf) goto L_11416a5a;
  /* 11416a45 push esi */
  push32((uint32_t)(ESI));
  /* 11416a46 call 0x114169f4 */
  push32(0x11416a4bu); f_114169f4();
  /* 11416a4b pop ecx */
  ECX = (pop32());
  /* 11416a4c call dword ptr [0x1141b0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0c0))), 0x11416a52u);
  /* 11416a52 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11416a56 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11416a58 jmp 0x11416a62 */
  goto L_11416a62;
L_11416a5a:;
  /* 11416a5a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11416a5c call 0x11415598 */
  push32(0x11416a61u); f_11415598();
  /* 11416a61 pop ecx */
  ECX = (pop32());
L_11416a62:;
  /* 11416a62 push edi */
  push32((uint32_t)(EDI));
  /* 11416a63 call dword ptr [0x1141b0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0b0))), 0x11416a69u);
  /* 11416a69 mov eax, esi */
  EAX = (ESI);
  /* 11416a6b pop edi */
  EDI = (pop32());
  /* 11416a6c pop esi */
  ESI = (pop32());
  /* 11416a6d ret  */
  ESPCHK(0x11416a07u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a6e @ 0x11416a6e (160 bytes, 62 insns) */
void f_11416a6e(void) {
  FTRACE(0x11416a6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416a6e mov eax, dword ptr [0x1141cc3c] */
  EAX = (r32((uint32_t)(0x1141cc3c)));
  /* 11416a73 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416a76 je 0x11416b0d */
  if (C.zf) goto L_11416b0d;
  /* 11416a7c push esi */
  push32((uint32_t)(ESI));
  /* 11416a7d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11416a81 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416a83 jne 0x11416a92 */
  if (!C.zf) goto L_11416a92;
  /* 11416a85 push eax */
  push32((uint32_t)(EAX));
  /* 11416a86 call dword ptr [0x1141b0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0d0))), 0x11416a8cu);
  /* 11416a8c mov esi, eax */
  ESI = (EAX);
  /* 11416a8e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416a90 je 0x11416afe */
  if (C.zf) goto L_11416afe;
L_11416a92:;
  /* 11416a92 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11416a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416a97 je 0x11416aa0 */
  if (C.zf) goto L_11416aa0;
  /* 11416a99 push eax */
  push32((uint32_t)(EAX));
  /* 11416a9a call 0x114155cb */
  push32(0x11416a9fu); f_114155cb();
  /* 11416a9f pop ecx */
  ECX = (pop32());
L_11416aa0:;
  /* 11416aa0 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11416aa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416aa5 je 0x11416aae */
  if (C.zf) goto L_11416aae;
  /* 11416aa7 push eax */
  push32((uint32_t)(EAX));
  /* 11416aa8 call 0x114155cb */
  push32(0x11416aadu); f_114155cb();
  /* 11416aad pop ecx */
  ECX = (pop32());
L_11416aae:;
  /* 11416aae mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11416ab1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416ab3 je 0x11416abc */
  if (C.zf) goto L_11416abc;
  /* 11416ab5 push eax */
  push32((uint32_t)(EAX));
  /* 11416ab6 call 0x114155cb */
  push32(0x11416abbu); f_114155cb();
  /* 11416abb pop ecx */
  ECX = (pop32());
L_11416abc:;
  /* 11416abc mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11416abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416ac1 je 0x11416aca */
  if (C.zf) goto L_11416aca;
  /* 11416ac3 push eax */
  push32((uint32_t)(EAX));
  /* 11416ac4 call 0x114155cb */
  push32(0x11416ac9u); f_114155cb();
  /* 11416ac9 pop ecx */
  ECX = (pop32());
L_11416aca:;
  /* 11416aca mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11416acd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416acf je 0x11416ad8 */
  if (C.zf) goto L_11416ad8;
  /* 11416ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11416ad2 call 0x114155cb */
  push32(0x11416ad7u); f_114155cb();
  /* 11416ad7 pop ecx */
  ECX = (pop32());
L_11416ad8:;
  /* 11416ad8 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11416adb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416add je 0x11416ae6 */
  if (C.zf) goto L_11416ae6;
  /* 11416adf push eax */
  push32((uint32_t)(EAX));
  /* 11416ae0 call 0x114155cb */
  push32(0x11416ae5u); f_114155cb();
  /* 11416ae5 pop ecx */
  ECX = (pop32());
L_11416ae6:;
  /* 11416ae6 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11416ae9 cmp eax, 0x1141edd0 */
  { uint32_t _a=(EAX),_b=(0x1141edd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416aee je 0x11416af7 */
  if (C.zf) goto L_11416af7;
  /* 11416af0 push eax */
  push32((uint32_t)(EAX));
  /* 11416af1 call 0x114155cb */
  push32(0x11416af6u); f_114155cb();
  /* 11416af6 pop ecx */
  ECX = (pop32());
L_11416af7:;
  /* 11416af7 push esi */
  push32((uint32_t)(ESI));
  /* 11416af8 call 0x114155cb */
  push32(0x11416afdu); f_114155cb();
  /* 11416afd pop ecx */
  ECX = (pop32());
L_11416afe:;
  /* 11416afe push 0 */
  push32((uint32_t)(0x0u));
  /* 11416b00 push dword ptr [0x1141cc3c] */
  push32((uint32_t)(r32((uint32_t)(0x1141cc3c))));
  /* 11416b06 call dword ptr [0x1141b0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0c4))), 0x11416b0cu);
  /* 11416b0c pop esi */
  ESI = (pop32());
L_11416b0d:;
  /* 11416b0d ret  */
  ESPCHK(0x11416a6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006b0e @ 0x11416b0e (185 bytes, 71 insns) */
void f_11416b0e(void) {
  FTRACE(0x11416b0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416b0e push ebx */
  push32((uint32_t)(EBX));
  /* 11416b0f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11416b11 cmp dword ptr [0x11421b50], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11421b50))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416b17 push esi */
  push32((uint32_t)(ESI));
  /* 11416b18 push edi */
  push32((uint32_t)(EDI));
  /* 11416b19 jne 0x11416b20 */
  if (!C.zf) goto L_11416b20;
  /* 11416b1b call 0x11419433 */
  push32(0x11416b20u); f_11419433();
L_11416b20:;
  /* 11416b20 mov esi, dword ptr [0x114215a8] */
  ESI = (r32((uint32_t)(0x114215a8)));
  /* 11416b26 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11416b28:;
  /* 11416b28 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11416b2a cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416b2c je 0x11416b40 */
  if (C.zf) goto L_11416b40;
  /* 11416b2e cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416b30 je 0x11416b33 */
  if (C.zf) goto L_11416b33;
  /* 11416b32 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11416b33:;
  /* 11416b33 push esi */
  push32((uint32_t)(ESI));
  /* 11416b34 call 0x11418fe0 */
  push32(0x11416b39u); f_11418fe0();
  /* 11416b39 pop ecx */
  ECX = (pop32());
  /* 11416b3a lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11416b3e jmp 0x11416b28 */
  goto L_11416b28;
L_11416b40:;
  /* 11416b40 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11416b47 push eax */
  push32((uint32_t)(EAX));
  /* 11416b48 call 0x11416185 */
  push32(0x11416b4du); f_11416185();
  /* 11416b4d mov esi, eax */
  ESI = (EAX);
  /* 11416b4f pop ecx */
  ECX = (pop32());
  /* 11416b50 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416b52 mov dword ptr [0x114215dc], esi */
  w32((uint32_t)(0x114215dc), (ESI));
  /* 11416b58 jne 0x11416b62 */
  if (!C.zf) goto L_11416b62;
  /* 11416b5a push 9 */
  push32((uint32_t)(0x9u));
  /* 11416b5c call 0x11415598 */
  push32(0x11416b61u); f_11415598();
  /* 11416b61 pop ecx */
  ECX = (pop32());
L_11416b62:;
  /* 11416b62 mov edi, dword ptr [0x114215a8] */
  EDI = (r32((uint32_t)(0x114215a8)));
  /* 11416b68 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416b6a je 0x11416ba5 */
  if (C.zf) goto L_11416ba5;
  /* 11416b6c push ebp */
  push32((uint32_t)(EBP));
L_11416b6d:;
  /* 11416b6d push edi */
  push32((uint32_t)(EDI));
  /* 11416b6e call 0x11418fe0 */
  push32(0x11416b73u); f_11418fe0();
  /* 11416b73 mov ebp, eax */
  EBP = (EAX);
  /* 11416b75 pop ecx */
  ECX = (pop32());
  /* 11416b76 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11416b77 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416b7a je 0x11416b9e */
  if (C.zf) goto L_11416b9e;
  /* 11416b7c push ebp */
  push32((uint32_t)(EBP));
  /* 11416b7d call 0x11416185 */
  push32(0x11416b82u); f_11416185();
  /* 11416b82 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416b84 pop ecx */
  ECX = (pop32());
  /* 11416b85 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11416b87 jne 0x11416b91 */
  if (!C.zf) goto L_11416b91;
  /* 11416b89 push 9 */
  push32((uint32_t)(0x9u));
  /* 11416b8b call 0x11415598 */
  push32(0x11416b90u); f_11415598();
  /* 11416b90 pop ecx */
  ECX = (pop32());
L_11416b91:;
  /* 11416b91 push edi */
  push32((uint32_t)(EDI));
  /* 11416b92 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11416b94 call 0x11418ef0 */
  push32(0x11416b99u); f_11418ef0();
  /* 11416b99 pop ecx */
  ECX = (pop32());
  /* 11416b9a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11416b9d pop ecx */
  ECX = (pop32());
L_11416b9e:;
  /* 11416b9e add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11416ba0 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416ba2 jne 0x11416b6d */
  if (!C.zf) goto L_11416b6d;
  /* 11416ba4 pop ebp */
  EBP = (pop32());
L_11416ba5:;
  /* 11416ba5 push dword ptr [0x114215a8] */
  push32((uint32_t)(r32((uint32_t)(0x114215a8))));
  /* 11416bab call 0x114155cb */
  push32(0x11416bb0u); f_114155cb();
  /* 11416bb0 pop ecx */
  ECX = (pop32());
  /* 11416bb1 mov dword ptr [0x114215a8], ebx */
  w32((uint32_t)(0x114215a8), (EBX));
  /* 11416bb7 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11416bb9 pop edi */
  EDI = (pop32());
  /* 11416bba pop esi */
  ESI = (pop32());
  /* 11416bbb mov dword ptr [0x11421b4c], 1 */
  w32((uint32_t)(0x11421b4c), (0x1u));
  /* 11416bc5 pop ebx */
  EBX = (pop32());
  /* 11416bc6 ret  */
  ESPCHK(0x11416b0eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc7 @ 0x11416bc7 (153 bytes, 62 insns) */
void f_11416bc7(void) {
  FTRACE(0x11416bc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416bc7 push ebp */
  push32((uint32_t)(EBP));
  /* 11416bc8 mov ebp, esp */
  EBP = (ESP);
  /* 11416bca push ecx */
  push32((uint32_t)(ECX));
  /* 11416bcb push ecx */
  push32((uint32_t)(ECX));
  /* 11416bcc push ebx */
  push32((uint32_t)(EBX));
  /* 11416bcd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11416bcf cmp dword ptr [0x11421b50], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11421b50))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416bd5 push esi */
  push32((uint32_t)(ESI));
  /* 11416bd6 push edi */
  push32((uint32_t)(EDI));
  /* 11416bd7 jne 0x11416bde */
  if (!C.zf) goto L_11416bde;
  /* 11416bd9 call 0x11419433 */
  push32(0x11416bdeu); f_11419433();
L_11416bde:;
  /* 11416bde mov esi, 0x11421600 */
  ESI = (0x11421600u);
  /* 11416be3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11416be8 push esi */
  push32((uint32_t)(ESI));
  /* 11416be9 push ebx */
  push32((uint32_t)(EBX));
  /* 11416bea call dword ptr [0x1141b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0cc))), 0x11416bf0u);
  /* 11416bf0 mov eax, dword ptr [0x11422c84] */
  EAX = (r32((uint32_t)(0x11422c84)));
  /* 11416bf5 mov dword ptr [0x114215ec], esi */
  w32((uint32_t)(0x114215ec), (ESI));
  /* 11416bfb mov edi, esi */
  EDI = (ESI);
  /* 11416bfd cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416bff je 0x11416c03 */
  if (C.zf) goto L_11416c03;
  /* 11416c01 mov edi, eax */
  EDI = (EAX);
L_11416c03:;
  /* 11416c03 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11416c06 push eax */
  push32((uint32_t)(EAX));
  /* 11416c07 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11416c0a push eax */
  push32((uint32_t)(EAX));
  /* 11416c0b push ebx */
  push32((uint32_t)(EBX));
  /* 11416c0c push ebx */
  push32((uint32_t)(EBX));
  /* 11416c0d push edi */
  push32((uint32_t)(EDI));
  /* 11416c0e call 0x11416c60 */
  push32(0x11416c13u); f_11416c60();
  /* 11416c13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11416c16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11416c19 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11416c1c push eax */
  push32((uint32_t)(EAX));
  /* 11416c1d call 0x11416185 */
  push32(0x11416c22u); f_11416185();
  /* 11416c22 mov esi, eax */
  ESI = (EAX);
  /* 11416c24 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11416c27 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416c29 jne 0x11416c33 */
  if (!C.zf) goto L_11416c33;
  /* 11416c2b push 8 */
  push32((uint32_t)(0x8u));
  /* 11416c2d call 0x11415598 */
  push32(0x11416c32u); f_11415598();
  /* 11416c32 pop ecx */
  ECX = (pop32());
L_11416c33:;
  /* 11416c33 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11416c36 push eax */
  push32((uint32_t)(EAX));
  /* 11416c37 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11416c3a push eax */
  push32((uint32_t)(EAX));
  /* 11416c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11416c3e lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11416c41 push eax */
  push32((uint32_t)(EAX));
  /* 11416c42 push esi */
  push32((uint32_t)(ESI));
  /* 11416c43 push edi */
  push32((uint32_t)(EDI));
  /* 11416c44 call 0x11416c60 */
  push32(0x11416c49u); f_11416c60();
  /* 11416c49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11416c4c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11416c4f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11416c50 mov dword ptr [0x114215d4], esi */
  w32((uint32_t)(0x114215d4), (ESI));
  /* 11416c56 pop edi */
  EDI = (pop32());
  /* 11416c57 pop esi */
  ESI = (pop32());
  /* 11416c58 mov dword ptr [0x114215d0], eax */
  w32((uint32_t)(0x114215d0), (EAX));
  /* 11416c5d pop ebx */
  EBX = (pop32());
  /* 11416c5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11416c5f ret  */
  ESPCHK(0x11416bc7u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c60 @ 0x11416c60 (436 bytes, 187 insns) */
void f_11416c60(void) {
  FTRACE(0x11416c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11416c61 mov ebp, esp */
  EBP = (ESP);
  /* 11416c63 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11416c66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11416c69 push ebx */
  push32((uint32_t)(EBX));
  /* 11416c6a push esi */
  push32((uint32_t)(ESI));
  /* 11416c6b and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11416c6e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11416c71 push edi */
  push32((uint32_t)(EDI));
  /* 11416c72 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11416c75 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11416c7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11416c7e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11416c80 je 0x11416c8a */
  if (C.zf) goto L_11416c8a;
  /* 11416c82 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11416c84 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11416c87 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11416c8a:;
  /* 11416c8a cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416c8d jne 0x11416cd3 */
  if (!C.zf) goto L_11416cd3;
L_11416c8f:;
  /* 11416c8f mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11416c92 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416c93 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416c96 je 0x11416cc1 */
  if (C.zf) goto L_11416cc1;
  /* 11416c98 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11416c9a je 0x11416cc1 */
  if (C.zf) goto L_11416cc1;
  /* 11416c9c movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11416c9f test byte ptr [edx + 0x11421a21], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11421a21)))&(0x4u); fl_logic(_r,8); }
  /* 11416ca6 je 0x11416cb4 */
  if (C.zf) goto L_11416cb4;
  /* 11416ca8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11416caa test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416cac je 0x11416cb4 */
  if (C.zf) goto L_11416cb4;
  /* 11416cae mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11416cb0 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11416cb2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11416cb3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11416cb4:;
  /* 11416cb4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11416cb6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416cb8 je 0x11416c8f */
  if (C.zf) goto L_11416c8f;
  /* 11416cba mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11416cbc mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11416cbe inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11416cbf jmp 0x11416c8f */
  goto L_11416c8f;
L_11416cc1:;
  /* 11416cc1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11416cc3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416cc5 je 0x11416ccb */
  if (C.zf) goto L_11416ccb;
  /* 11416cc7 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11416cca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11416ccb:;
  /* 11416ccb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416cce jne 0x11416d16 */
  if (!C.zf) goto L_11416d16;
  /* 11416cd0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416cd1 jmp 0x11416d16 */
  goto L_11416d16;
L_11416cd3:;
  /* 11416cd3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11416cd5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416cd7 je 0x11416cde */
  if (C.zf) goto L_11416cde;
  /* 11416cd9 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11416cdb mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11416cdd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11416cde:;
  /* 11416cde mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11416ce0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416ce1 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11416ce4 test byte ptr [ebx + 0x11421a21], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11421a21)))&(0x4u); fl_logic(_r,8); }
  /* 11416ceb je 0x11416cf9 */
  if (C.zf) goto L_11416cf9;
  /* 11416ced inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11416cef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416cf1 je 0x11416cf8 */
  if (C.zf) goto L_11416cf8;
  /* 11416cf3 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11416cf5 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11416cf7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11416cf8:;
  /* 11416cf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11416cf9:;
  /* 11416cf9 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416cfc je 0x11416d07 */
  if (C.zf) goto L_11416d07;
  /* 11416cfe test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11416d00 je 0x11416d0b */
  if (C.zf) goto L_11416d0b;
  /* 11416d02 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416d05 jne 0x11416cd3 */
  if (!C.zf) goto L_11416cd3;
L_11416d07:;
  /* 11416d07 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11416d09 jne 0x11416d0e */
  if (!C.zf) goto L_11416d0e;
L_11416d0b:;
  /* 11416d0b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11416d0c jmp 0x11416d16 */
  goto L_11416d16;
L_11416d0e:;
  /* 11416d0e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416d10 je 0x11416d16 */
  if (C.zf) goto L_11416d16;
  /* 11416d12 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11416d16:;
  /* 11416d16 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11416d1a:;
  /* 11416d1a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416d1d je 0x11416e03 */
  if (C.zf) goto L_11416e03;
L_11416d23:;
  /* 11416d23 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11416d25 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416d28 je 0x11416d2f */
  if (C.zf) goto L_11416d2f;
  /* 11416d2a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416d2d jne 0x11416d32 */
  if (!C.zf) goto L_11416d32;
L_11416d2f:;
  /* 11416d2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416d30 jmp 0x11416d23 */
  goto L_11416d23;
L_11416d32:;
  /* 11416d32 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416d35 je 0x11416e03 */
  if (C.zf) goto L_11416e03;
  /* 11416d3b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11416d3d je 0x11416d47 */
  if (C.zf) goto L_11416d47;
  /* 11416d3f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11416d41 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11416d44 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11416d47:;
  /* 11416d47 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11416d4a inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11416d4c:;
  /* 11416d4c mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11416d53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11416d55:;
  /* 11416d55 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416d58 jne 0x11416d5e */
  if (!C.zf) goto L_11416d5e;
  /* 11416d5a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416d5b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11416d5c jmp 0x11416d55 */
  goto L_11416d55;
L_11416d5e:;
  /* 11416d5e cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416d61 jne 0x11416d8f */
  if (!C.zf) goto L_11416d8f;
  /* 11416d63 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11416d66 jne 0x11416d8d */
  if (!C.zf) goto L_11416d8d;
  /* 11416d68 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11416d6a cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416d6d je 0x11416d7c */
  if (C.zf) goto L_11416d7c;
  /* 11416d6f cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416d73 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11416d76 jne 0x11416d7c */
  if (!C.zf) goto L_11416d7c;
  /* 11416d78 mov eax, edx */
  EAX = (EDX);
  /* 11416d7a jmp 0x11416d7f */
  goto L_11416d7f;
L_11416d7c:;
  /* 11416d7c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11416d7f:;
  /* 11416d7f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11416d82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11416d84 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416d87 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11416d8a mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11416d8d:;
  /* 11416d8d shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11416d8f:;
  /* 11416d8f mov edx, ebx */
  EDX = (EBX);
  /* 11416d91 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11416d92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11416d94 je 0x11416da4 */
  if (C.zf) goto L_11416da4;
  /* 11416d96 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11416d97:;
  /* 11416d97 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416d99 je 0x11416d9f */
  if (C.zf) goto L_11416d9f;
  /* 11416d9b mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11416d9e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11416d9f:;
  /* 11416d9f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11416da1 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11416da2 jne 0x11416d97 */
  if (!C.zf) goto L_11416d97;
L_11416da4:;
  /* 11416da4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11416da6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11416da8 je 0x11416df4 */
  if (C.zf) goto L_11416df4;
  /* 11416daa cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416dae jne 0x11416dba */
  if (!C.zf) goto L_11416dba;
  /* 11416db0 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416db3 je 0x11416df4 */
  if (C.zf) goto L_11416df4;
  /* 11416db5 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416db8 je 0x11416df4 */
  if (C.zf) goto L_11416df4;
L_11416dba:;
  /* 11416dba cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416dbe je 0x11416dee */
  if (C.zf) goto L_11416dee;
  /* 11416dc0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416dc2 je 0x11416ddd */
  if (C.zf) goto L_11416ddd;
  /* 11416dc4 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11416dc7 test byte ptr [ebx + 0x11421a21], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11421a21)))&(0x4u); fl_logic(_r,8); }
  /* 11416dce je 0x11416dd6 */
  if (C.zf) goto L_11416dd6;
  /* 11416dd0 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11416dd2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11416dd3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416dd4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11416dd6:;
  /* 11416dd6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11416dd8 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11416dda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11416ddb jmp 0x11416dec */
  goto L_11416dec;
L_11416ddd:;
  /* 11416ddd movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11416de0 test byte ptr [edx + 0x11421a21], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11421a21)))&(0x4u); fl_logic(_r,8); }
  /* 11416de7 je 0x11416dec */
  if (C.zf) goto L_11416dec;
  /* 11416de9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416dea inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11416dec:;
  /* 11416dec inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11416dee:;
  /* 11416dee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416def jmp 0x11416d4c */
  goto L_11416d4c;
L_11416df4:;
  /* 11416df4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11416df6 je 0x11416dfc */
  if (C.zf) goto L_11416dfc;
  /* 11416df8 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11416dfb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11416dfc:;
  /* 11416dfc inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11416dfe jmp 0x11416d1a */
  goto L_11416d1a;
L_11416e03:;
  /* 11416e03 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11416e05 je 0x11416e0a */
  if (C.zf) goto L_11416e0a;
  /* 11416e07 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11416e0a:;
  /* 11416e0a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11416e0d pop edi */
  EDI = (pop32());
  /* 11416e0e pop esi */
  ESI = (pop32());
  /* 11416e0f pop ebx */
  EBX = (pop32());
  /* 11416e10 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11416e12 pop ebp */
  EBP = (pop32());
  /* 11416e13 ret  */
  ESPCHK(0x11416c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e14 @ 0x11416e14 (306 bytes, 132 insns) */
void f_11416e14(void) {
  FTRACE(0x11416e14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416e14 push ecx */
  push32((uint32_t)(ECX));
  /* 11416e15 push ecx */
  push32((uint32_t)(ECX));
  /* 11416e16 mov eax, dword ptr [0x11421704] */
  EAX = (r32((uint32_t)(0x11421704)));
  /* 11416e1b push ebx */
  push32((uint32_t)(EBX));
  /* 11416e1c push ebp */
  push32((uint32_t)(EBP));
  /* 11416e1d mov ebp, dword ptr [0x1141b06c] */
  EBP = (r32((uint32_t)(0x1141b06c)));
  /* 11416e23 push esi */
  push32((uint32_t)(ESI));
  /* 11416e24 push edi */
  push32((uint32_t)(EDI));
  /* 11416e25 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11416e27 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11416e29 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11416e2b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416e2d jne 0x11416e62 */
  if (!C.zf) goto L_11416e62;
  /* 11416e2f call ebp */
  call_ind((uint32_t)(EBP), 0x11416e31u);
  /* 11416e31 mov esi, eax */
  ESI = (EAX);
  /* 11416e33 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416e35 je 0x11416e43 */
  if (C.zf) goto L_11416e43;
  /* 11416e37 mov dword ptr [0x11421704], 1 */
  w32((uint32_t)(0x11421704), (0x1u));
  /* 11416e41 jmp 0x11416e6b */
  goto L_11416e6b;
L_11416e43:;
  /* 11416e43 call dword ptr [0x1141b0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e0))), 0x11416e49u);
  /* 11416e49 mov edi, eax */
  EDI = (EAX);
  /* 11416e4b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416e4d je 0x11416f3d */
  if (C.zf) goto L_11416f3d;
  /* 11416e53 mov dword ptr [0x11421704], 2 */
  w32((uint32_t)(0x11421704), (0x2u));
  /* 11416e5d jmp 0x11416ef1 */
  goto L_11416ef1;
L_11416e62:;
  /* 11416e62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416e65 jne 0x11416eec */
  if (!C.zf) goto L_11416eec;
L_11416e6b:;
  /* 11416e6b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416e6d jne 0x11416e7b */
  if (!C.zf) goto L_11416e7b;
  /* 11416e6f call ebp */
  call_ind((uint32_t)(EBP), 0x11416e71u);
  /* 11416e71 mov esi, eax */
  ESI = (EAX);
  /* 11416e73 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416e75 je 0x11416f3d */
  if (C.zf) goto L_11416f3d;
L_11416e7b:;
  /* 11416e7b cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11416e7e mov eax, esi */
  EAX = (ESI);
  /* 11416e80 je 0x11416e90 */
  if (C.zf) goto L_11416e90;
L_11416e82:;
  /* 11416e82 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416e83 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416e84 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11416e87 jne 0x11416e82 */
  if (!C.zf) goto L_11416e82;
  /* 11416e89 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416e8a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416e8b cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11416e8e jne 0x11416e82 */
  if (!C.zf) goto L_11416e82;
L_11416e90:;
  /* 11416e90 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11416e92 mov edi, dword ptr [0x1141b0d4] */
  EDI = (r32((uint32_t)(0x1141b0d4)));
  /* 11416e98 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11416e9a push ebx */
  push32((uint32_t)(EBX));
  /* 11416e9b push ebx */
  push32((uint32_t)(EBX));
  /* 11416e9c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416e9d push ebx */
  push32((uint32_t)(EBX));
  /* 11416e9e push ebx */
  push32((uint32_t)(EBX));
  /* 11416e9f push eax */
  push32((uint32_t)(EAX));
  /* 11416ea0 push esi */
  push32((uint32_t)(ESI));
  /* 11416ea1 push ebx */
  push32((uint32_t)(EBX));
  /* 11416ea2 push ebx */
  push32((uint32_t)(EBX));
  /* 11416ea3 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11416ea7 call edi */
  call_ind((uint32_t)(EDI), 0x11416ea9u);
  /* 11416ea9 mov ebp, eax */
  EBP = (EAX);
  /* 11416eab cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416ead je 0x11416ee1 */
  if (C.zf) goto L_11416ee1;
  /* 11416eaf push ebp */
  push32((uint32_t)(EBP));
  /* 11416eb0 call 0x11416185 */
  push32(0x11416eb5u); f_11416185();
  /* 11416eb5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416eb7 pop ecx */
  ECX = (pop32());
  /* 11416eb8 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11416ebc je 0x11416ee1 */
  if (C.zf) goto L_11416ee1;
  /* 11416ebe push ebx */
  push32((uint32_t)(EBX));
  /* 11416ebf push ebx */
  push32((uint32_t)(EBX));
  /* 11416ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11416ec1 push eax */
  push32((uint32_t)(EAX));
  /* 11416ec2 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11416ec6 push esi */
  push32((uint32_t)(ESI));
  /* 11416ec7 push ebx */
  push32((uint32_t)(EBX));
  /* 11416ec8 push ebx */
  push32((uint32_t)(EBX));
  /* 11416ec9 call edi */
  call_ind((uint32_t)(EDI), 0x11416ecbu);
  /* 11416ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416ecd jne 0x11416edd */
  if (!C.zf) goto L_11416edd;
  /* 11416ecf push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11416ed3 call 0x114155cb */
  push32(0x11416ed8u); f_114155cb();
  /* 11416ed8 pop ecx */
  ECX = (pop32());
  /* 11416ed9 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11416edd:;
  /* 11416edd mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11416ee1:;
  /* 11416ee1 push esi */
  push32((uint32_t)(ESI));
  /* 11416ee2 call dword ptr [0x1141b0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0dc))), 0x11416ee8u);
  /* 11416ee8 mov eax, ebx */
  EAX = (EBX);
  /* 11416eea jmp 0x11416f3f */
  goto L_11416f3f;
L_11416eec:;
  /* 11416eec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416eef jne 0x11416f3d */
  if (!C.zf) goto L_11416f3d;
L_11416ef1:;
  /* 11416ef1 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416ef3 jne 0x11416f01 */
  if (!C.zf) goto L_11416f01;
  /* 11416ef5 call dword ptr [0x1141b0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0e0))), 0x11416efbu);
  /* 11416efb mov edi, eax */
  EDI = (EAX);
  /* 11416efd cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416eff je 0x11416f3d */
  if (C.zf) goto L_11416f3d;
L_11416f01:;
  /* 11416f01 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416f03 mov eax, edi */
  EAX = (EDI);
  /* 11416f05 je 0x11416f11 */
  if (C.zf) goto L_11416f11;
L_11416f07:;
  /* 11416f07 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416f08 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416f0a jne 0x11416f07 */
  if (!C.zf) goto L_11416f07;
  /* 11416f0c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416f0d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416f0f jne 0x11416f07 */
  if (!C.zf) goto L_11416f07;
L_11416f11:;
  /* 11416f11 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11416f13 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11416f14 mov ebp, eax */
  EBP = (EAX);
  /* 11416f16 push ebp */
  push32((uint32_t)(EBP));
  /* 11416f17 call 0x11416185 */
  push32(0x11416f1cu); f_11416185();
  /* 11416f1c mov esi, eax */
  ESI = (EAX);
  /* 11416f1e pop ecx */
  ECX = (pop32());
  /* 11416f1f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416f21 jne 0x11416f27 */
  if (!C.zf) goto L_11416f27;
  /* 11416f23 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11416f25 jmp 0x11416f32 */
  goto L_11416f32;
L_11416f27:;
  /* 11416f27 push ebp */
  push32((uint32_t)(EBP));
  /* 11416f28 push edi */
  push32((uint32_t)(EDI));
  /* 11416f29 push esi */
  push32((uint32_t)(ESI));
  /* 11416f2a call 0x11415e50 */
  push32(0x11416f2fu); f_11415e50();
  /* 11416f2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11416f32:;
  /* 11416f32 push edi */
  push32((uint32_t)(EDI));
  /* 11416f33 call dword ptr [0x1141b0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0d8))), 0x11416f39u);
  /* 11416f39 mov eax, esi */
  EAX = (ESI);
  /* 11416f3b jmp 0x11416f3f */
  goto L_11416f3f;
L_11416f3d:;
  /* 11416f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11416f3f:;
  /* 11416f3f pop edi */
  EDI = (pop32());
  /* 11416f40 pop esi */
  ESI = (pop32());
  /* 11416f41 pop ebp */
  EBP = (pop32());
  /* 11416f42 pop ebx */
  EBX = (pop32());
  /* 11416f43 pop ecx */
  ECX = (pop32());
  /* 11416f44 pop ecx */
  ECX = (pop32());
  /* 11416f45 ret  */
  ESPCHK(0x11416e14u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f46 @ 0x11416f46 (45 bytes, 17 insns) */
void f_11416f46(void) {
  FTRACE(0x11416f46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416f46 push esi */
  push32((uint32_t)(ESI));
  /* 11416f47 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11416f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11416f4d and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11416f50 call dword ptr [0x1141b068] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b068))), 0x11416f56u);
  /* 11416f56 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11416f5b jne 0x11416f71 */
  if (!C.zf) goto L_11416f71;
  /* 11416f5d mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11416f60 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11416f62 je 0x11416f71 */
  if (C.zf) goto L_11416f71;
  /* 11416f64 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11416f66 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11416f69 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11416f6b mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11416f6e mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11416f71:;
  /* 11416f71 pop esi */
  ESI = (pop32());
  /* 11416f72 ret  */
  ESPCHK(0x11416f46u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f73 @ 0x11416f73 (328 bytes, 115 insns) */
void f_11416f73(void) {
  FTRACE(0x11416f73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11416f73 push ebp */
  push32((uint32_t)(EBP));
  /* 11416f74 mov ebp, esp */
  EBP = (ESP);
  /* 11416f76 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11416f7b call 0x114196b0 */
  push32(0x11416f80u); f_114196b0();
  /* 11416f80 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11416f86 push ebx */
  push32((uint32_t)(EBX));
  /* 11416f87 push eax */
  push32((uint32_t)(EAX));
  /* 11416f88 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11416f92 call dword ptr [0x1141b060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b060))), 0x11416f98u);
  /* 11416f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416f9a je 0x11416fb6 */
  if (C.zf) goto L_11416fb6;
  /* 11416f9c cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416fa3 jne 0x11416fb6 */
  if (!C.zf) goto L_11416fb6;
  /* 11416fa5 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11416fac jb 0x11416fb6 */
  if (C.cf) goto L_11416fb6;
  /* 11416fae push 1 */
  push32((uint32_t)(0x1u));
  /* 11416fb0 pop eax */
  EAX = (pop32());
  /* 11416fb1 jmp 0x114170b8 */
  goto L_114170b8;
L_11416fb6:;
  /* 11416fb6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11416fbc push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11416fc1 push eax */
  push32((uint32_t)(EAX));
  /* 11416fc2 push 0x1141b1e0 */
  push32((uint32_t)(0x1141b1e0u));
  /* 11416fc7 call dword ptr [0x1141b070] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b070))), 0x11416fcdu);
  /* 11416fcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11416fcf je 0x114170a5 */
  if (C.zf) goto L_114170a5;
  /* 11416fd5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11416fd7 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11416fdd cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416fe3 je 0x11416ff8 */
  if (C.zf) goto L_11416ff8;
L_11416fe5:;
  /* 11416fe5 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11416fe7 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416fe9 jl 0x11416ff3 */
  if ((C.sf!=C.of)) goto L_11416ff3;
  /* 11416feb cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416fed jg 0x11416ff3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11416ff3;
  /* 11416fef sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11416ff1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11416ff3:;
  /* 11416ff3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11416ff4 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11416ff6 jne 0x11416fe5 */
  if (!C.zf) goto L_11416fe5;
L_11416ff8:;
  /* 11416ff8 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11416ffe push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11417000 push eax */
  push32((uint32_t)(EAX));
  /* 11417001 push 0x1141b1c8 */
  push32((uint32_t)(0x1141b1c8u));
  /* 11417006 call 0x11419670 */
  push32(0x1141700bu); f_11419670();
  /* 1141700b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1141700e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417010 jne 0x1141701a */
  if (!C.zf) goto L_1141701a;
  /* 11417012 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11417018 jmp 0x11417063 */
  goto L_11417063;
L_1141701a:;
  /* 1141701a lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11417020 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11417025 push eax */
  push32((uint32_t)(EAX));
  /* 11417026 push ebx */
  push32((uint32_t)(EBX));
  /* 11417027 call dword ptr [0x1141b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0cc))), 0x1141702du);
  /* 1141702d cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11417033 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11417039 je 0x1141704e */
  if (C.zf) goto L_1141704e;
L_1141703b:;
  /* 1141703b mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1141703d cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141703f jl 0x11417049 */
  if ((C.sf!=C.of)) goto L_11417049;
  /* 11417041 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11417043 jg 0x11417049 */
  if ((!C.zf&&C.sf==C.of)) goto L_11417049;
  /* 11417045 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11417047 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11417049:;
  /* 11417049 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1141704a cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141704c jne 0x1141703b */
  if (!C.zf) goto L_1141703b;
L_1141704e:;
  /* 1141704e lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11417054 push eax */
  push32((uint32_t)(EAX));
  /* 11417055 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 1141705b push eax */
  push32((uint32_t)(EAX));
  /* 1141705c call 0x11414f80 */
  push32(0x11417061u); f_11414f80();
  /* 11417061 pop ecx */
  ECX = (pop32());
  /* 11417062 pop ecx */
  ECX = (pop32());
L_11417063:;
  /* 11417063 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417065 je 0x114170a5 */
  if (C.zf) goto L_114170a5;
  /* 11417067 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11417069 push eax */
  push32((uint32_t)(EAX));
  /* 1141706a call 0x114156d0 */
  push32(0x1141706fu); f_114156d0();
  /* 1141706f pop ecx */
  ECX = (pop32());
  /* 11417070 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417072 pop ecx */
  ECX = (pop32());
  /* 11417073 je 0x114170a5 */
  if (C.zf) goto L_114170a5;
  /* 11417075 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11417076 mov ecx, eax */
  ECX = (EAX);
  /* 11417078 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141707a je 0x1141708a */
  if (C.zf) goto L_1141708a;
L_1141707c:;
  /* 1141707c cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141707f jne 0x11417085 */
  if (!C.zf) goto L_11417085;
  /* 11417081 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11417083 jmp 0x11417086 */
  goto L_11417086;
L_11417085:;
  /* 11417085 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11417086:;
  /* 11417086 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11417088 jne 0x1141707c */
  if (!C.zf) goto L_1141707c;
L_1141708a:;
  /* 1141708a push 0xa */
  push32((uint32_t)(0xau));
  /* 1141708c push ebx */
  push32((uint32_t)(EBX));
  /* 1141708d push eax */
  push32((uint32_t)(EAX));
  /* 1141708e call 0x1141944f */
  push32(0x11417093u); f_1141944f();
  /* 11417093 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11417096 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417099 je 0x114170b8 */
  if (C.zf) goto L_114170b8;
  /* 1141709b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141709e je 0x114170b8 */
  if (C.zf) goto L_114170b8;
  /* 114170a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114170a3 je 0x114170b8 */
  if (C.zf) goto L_114170b8;
L_114170a5:;
  /* 114170a5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 114170a8 push eax */
  push32((uint32_t)(EAX));
  /* 114170a9 call 0x11416f46 */
  push32(0x114170aeu); f_11416f46();
  /* 114170ae cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114170b2 pop ecx */
  ECX = (pop32());
  /* 114170b3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114170b5 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_114170b8:;
  /* 114170b8 pop ebx */
  EBX = (pop32());
  /* 114170b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114170ba ret  */
  ESPCHK(0x11416f73u, _esp0);
  ESP += 4; return;
}

/* FUN_100070bb @ 0x114170bb (93 bytes, 30 insns) */
void f_114170bb(void) {
  FTRACE(0x114170bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114170bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114170bd push 0 */
  push32((uint32_t)(0x0u));
  /* 114170bf cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114170c3 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 114170c8 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 114170cb push eax */
  push32((uint32_t)(EAX));
  /* 114170cc call dword ptr [0x1141b064] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b064))), 0x114170d2u);
  /* 114170d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114170d4 mov dword ptr [0x11421b44], eax */
  w32((uint32_t)(0x11421b44), (EAX));
  /* 114170d9 je 0x11417111 */
  if (C.zf) goto L_11417111;
  /* 114170db call 0x11416f73 */
  push32(0x114170e0u); f_11416f73();
  /* 114170e0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114170e3 mov dword ptr [0x11421b48], eax */
  w32((uint32_t)(0x11421b48), (EAX));
  /* 114170e8 jne 0x114170f7 */
  if (!C.zf) goto L_114170f7;
  /* 114170ea push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 114170ef call 0x1141734c */
  push32(0x114170f4u); f_1141734c();
  /* 114170f4 pop ecx */
  ECX = (pop32());
  /* 114170f5 jmp 0x11417101 */
  goto L_11417101;
L_114170f7:;
  /* 114170f7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114170fa jne 0x11417114 */
  if (!C.zf) goto L_11417114;
  /* 114170fc call 0x11417b9d */
  push32(0x11417101u); f_11417b9d();
L_11417101:;
  /* 11417101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417103 jne 0x11417114 */
  if (!C.zf) goto L_11417114;
  /* 11417105 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 1141710b call dword ptr [0x1141b05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b05c))), 0x11417111u);
L_11417111:;
  /* 11417111 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11417113 ret  */
  ESPCHK(0x114170bbu, _esp0);
  ESP += 4; return;
L_11417114:;
  /* 11417114 push 1 */
  push32((uint32_t)(0x1u));
  /* 11417116 pop eax */
  EAX = (pop32());
  /* 11417117 ret  */
  ESPCHK(0x114170bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10007118 @ 0x11417118 (168 bytes, 56 insns) */
void f_11417118(void) {
  FTRACE(0x11417118u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11417118 mov eax, dword ptr [0x11421b48] */
  EAX = (r32((uint32_t)(0x11421b48)));
  /* 1141711d push esi */
  push32((uint32_t)(ESI));
  /* 1141711e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417121 push edi */
  push32((uint32_t)(EDI));
  /* 11417122 jne 0x1141718a */
  if (!C.zf) goto L_1141718a;
  /* 11417124 push ebx */
  push32((uint32_t)(EBX));
  /* 11417125 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11417127 cmp dword ptr [0x11421b38], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11421b38))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141712d push ebp */
  push32((uint32_t)(EBP));
  /* 1141712e mov ebp, dword ptr [0x1141b07c] */
  EBP = (r32((uint32_t)(0x1141b07c)));
  /* 11417134 jle 0x11417176 */
  if ((C.zf||C.sf!=C.of)) goto L_11417176;
  /* 11417136 mov eax, dword ptr [0x11421b3c] */
  EAX = (r32((uint32_t)(0x11421b3c)));
  /* 1141713b mov edi, dword ptr [0x1141b054] */
  EDI = (r32((uint32_t)(0x1141b054)));
  /* 11417141 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11417144:;
  /* 11417144 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11417149 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1141714e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11417150 call edi */
  call_ind((uint32_t)(EDI), 0x11417152u);
  /* 11417152 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11417157 push 0 */
  push32((uint32_t)(0x0u));
  /* 11417159 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1141715b call edi */
  call_ind((uint32_t)(EDI), 0x1141715du);
  /* 1141715d push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11417160 push 0 */
  push32((uint32_t)(0x0u));
  /* 11417162 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417168 call ebp */
  call_ind((uint32_t)(EBP), 0x1141716au);
  /* 1141716a add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1141716d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1141716e cmp ebx, dword ptr [0x11421b38] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11421b38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417174 jl 0x11417144 */
  if ((C.sf!=C.of)) goto L_11417144;
L_11417176:;
  /* 11417176 push dword ptr [0x11421b3c] */
  push32((uint32_t)(r32((uint32_t)(0x11421b3c))));
  /* 1141717c push 0 */
  push32((uint32_t)(0x0u));
  /* 1141717e push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417184 call ebp */
  call_ind((uint32_t)(EBP), 0x11417186u);
  /* 11417186 pop ebp */
  EBP = (pop32());
  /* 11417187 pop ebx */
  EBX = (pop32());
  /* 11417188 jmp 0x114171b1 */
  goto L_114171b1;
L_1141718a:;
  /* 1141718a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141718d jne 0x114171b1 */
  if (!C.zf) goto L_114171b1;
  /* 1141718f mov edi, 0x1141ccd8 */
  EDI = (0x1141ccd8u);
  /* 11417194 mov esi, edi */
  ESI = (EDI);
L_11417196:;
  /* 11417196 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11417199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141719b je 0x114171ab */
  if (C.zf) goto L_114171ab;
  /* 1141719d push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 114171a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 114171a4 push eax */
  push32((uint32_t)(EAX));
  /* 114171a5 call dword ptr [0x1141b054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b054))), 0x114171abu);
L_114171ab:;
  /* 114171ab mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 114171ad cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114171af jne 0x11417196 */
  if (!C.zf) goto L_11417196;
L_114171b1:;
  /* 114171b1 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 114171b7 call dword ptr [0x1141b05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b05c))), 0x114171bdu);
  /* 114171bd pop edi */
  EDI = (pop32());
  /* 114171be pop esi */
  ESI = (pop32());
  /* 114171bf ret  */
  ESPCHK(0x11417118u, _esp0);
  ESP += 4; return;
}

/* FUN_100071c0 @ 0x114171c0 (57 bytes, 18 insns) */
void f_114171c0(void) {
  FTRACE(0x114171c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114171c0 mov eax, dword ptr [0x114215b0] */
  EAX = (r32((uint32_t)(0x114215b0)));
  /* 114171c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114171c8 je 0x114171d7 */
  if (C.zf) goto L_114171d7;
  /* 114171ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114171cc jne 0x114171f8 */
  if (!C.zf) goto L_114171f8;
  /* 114171ce cmp dword ptr [0x114215b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114215b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114171d5 jne 0x114171f8 */
  if (!C.zf) goto L_114171f8;
L_114171d7:;
  /* 114171d7 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 114171dc call 0x114171f9 */
  push32(0x114171e1u); f_114171f9();
  /* 114171e1 mov eax, dword ptr [0x11421708] */
  EAX = (r32((uint32_t)(0x11421708)));
  /* 114171e6 pop ecx */
  ECX = (pop32());
  /* 114171e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114171e9 je 0x114171ed */
  if (C.zf) goto L_114171ed;
  /* 114171eb call eax */
  call_ind((uint32_t)(EAX), 0x114171edu);
L_114171ed:;
  /* 114171ed push 0xff */
  push32((uint32_t)(0xffu));
  /* 114171f2 call 0x114171f9 */
  push32(0x114171f7u); f_114171f9();
  /* 114171f7 pop ecx */
  ECX = (pop32());
L_114171f8:;
  /* 114171f8 ret  */
  ESPCHK(0x114171c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f9 @ 0x114171f9 (339 bytes, 100 insns) */
void f_114171f9(void) {
  FTRACE(0x114171f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114171f9 push ebp */
  push32((uint32_t)(EBP));
  /* 114171fa mov ebp, esp */
  EBP = (ESP);
  /* 114171fc sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417202 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11417205 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11417207 mov eax, 0x1141cc48 */
  EAX = (0x1141cc48u);
L_1141720c:;
  /* 1141720c cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141720e je 0x1141721b */
  if (C.zf) goto L_1141721b;
  /* 11417210 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417213 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11417214 cmp eax, 0x1141ccd8 */
  { uint32_t _a=(EAX),_b=(0x1141ccd8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417219 jl 0x1141720c */
  if ((C.sf!=C.of)) goto L_1141720c;
L_1141721b:;
  /* 1141721b push esi */
  push32((uint32_t)(ESI));
  /* 1141721c mov esi, ecx */
  ESI = (ECX);
  /* 1141721e shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11417221 cmp edx, dword ptr [esi + 0x1141cc48] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x1141cc48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417227 jne 0x11417349 */
  if (!C.zf) goto L_11417349;
  /* 1141722d mov eax, dword ptr [0x114215b0] */
  EAX = (r32((uint32_t)(0x114215b0)));
  /* 11417232 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417235 je 0x11417323 */
  if (C.zf) goto L_11417323;
  /* 1141723b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141723d jne 0x1141724c */
  if (!C.zf) goto L_1141724c;
  /* 1141723f cmp dword ptr [0x114215b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x114215b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417246 je 0x11417323 */
  if (C.zf) goto L_11417323;
L_1141724c:;
  /* 1141724c cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417252 je 0x11417349 */
  if (C.zf) goto L_11417349;
  /* 11417258 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1141725e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11417263 push eax */
  push32((uint32_t)(EAX));
  /* 11417264 push 0 */
  push32((uint32_t)(0x0u));
  /* 11417266 call dword ptr [0x1141b0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b0cc))), 0x1141726cu);
  /* 1141726c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141726e jne 0x11417283 */
  if (!C.zf) goto L_11417283;
  /* 11417270 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11417276 push 0x1141b4d0 */
  push32((uint32_t)(0x1141b4d0u));
  /* 1141727b push eax */
  push32((uint32_t)(EAX));
  /* 1141727c call 0x11418ef0 */
  push32(0x11417281u); f_11418ef0();
  /* 11417281 pop ecx */
  ECX = (pop32());
  /* 11417282 pop ecx */
  ECX = (pop32());
L_11417283:;
  /* 11417283 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11417289 push edi */
  push32((uint32_t)(EDI));
  /* 1141728a push eax */
  push32((uint32_t)(EAX));
  /* 1141728b lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11417291 call 0x11418fe0 */
  push32(0x11417296u); f_11418fe0();
  /* 11417296 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11417297 pop ecx */
  ECX = (pop32());
  /* 11417298 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141729b jbe 0x114172c6 */
  if ((C.cf||C.zf)) goto L_114172c6;
  /* 1141729d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 114172a3 push eax */
  push32((uint32_t)(EAX));
  /* 114172a4 call 0x11418fe0 */
  push32(0x114172a9u); f_11418fe0();
  /* 114172a9 mov edi, eax */
  EDI = (EAX);
  /* 114172ab lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 114172b1 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114172b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 114172b6 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114172b8 push 0x1141b4cc */
  push32((uint32_t)(0x1141b4ccu));
  /* 114172bd push edi */
  push32((uint32_t)(EDI));
  /* 114172be call 0x11414e40 */
  push32(0x114172c3u); f_11414e40();
  /* 114172c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114172c6:;
  /* 114172c6 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 114172cc push 0x1141b4b0 */
  push32((uint32_t)(0x1141b4b0u));
  /* 114172d1 push eax */
  push32((uint32_t)(EAX));
  /* 114172d2 call 0x11418ef0 */
  push32(0x114172d7u); f_11418ef0();
  /* 114172d7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 114172dd push edi */
  push32((uint32_t)(EDI));
  /* 114172de push eax */
  push32((uint32_t)(EAX));
  /* 114172df call 0x11418f00 */
  push32(0x114172e4u); f_11418f00();
  /* 114172e4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 114172ea push 0x1141b4ac */
  push32((uint32_t)(0x1141b4acu));
  /* 114172ef push eax */
  push32((uint32_t)(EAX));
  /* 114172f0 call 0x11418f00 */
  push32(0x114172f5u); f_11418f00();
  /* 114172f5 push dword ptr [esi + 0x1141cc4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1141cc4c))));
  /* 114172fb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11417301 push eax */
  push32((uint32_t)(EAX));
  /* 11417302 call 0x11418f00 */
  push32(0x11417307u); f_11418f00();
  /* 11417307 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1141730c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11417312 push 0x1141b484 */
  push32((uint32_t)(0x1141b484u));
  /* 11417317 push eax */
  push32((uint32_t)(EAX));
  /* 11417318 call 0x114196df */
  push32(0x1141731du); f_114196df();
  /* 1141731d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11417320 pop edi */
  EDI = (pop32());
  /* 11417321 jmp 0x11417349 */
  goto L_11417349;
L_11417323:;
  /* 11417323 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11417326 lea esi, [esi + 0x1141cc4c] */
  ESI = ((uint32_t)(ESI + 0x1141cc4c));
  /* 1141732c push 0 */
  push32((uint32_t)(0x0u));
  /* 1141732e push eax */
  push32((uint32_t)(EAX));
  /* 1141732f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11417331 call 0x11418fe0 */
  push32(0x11417336u); f_11418fe0();
  /* 11417336 pop ecx */
  ECX = (pop32());
  /* 11417337 push eax */
  push32((uint32_t)(EAX));
  /* 11417338 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1141733a push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1141733c call dword ptr [0x1141b09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b09c))), 0x11417342u);
  /* 11417342 push eax */
  push32((uint32_t)(EAX));
  /* 11417343 call dword ptr [0x1141b050] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b050))), 0x11417349u);
L_11417349:;
  /* 11417349 pop esi */
  ESI = (pop32());
  /* 1141734a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141734b ret  */
  ESPCHK(0x114171f9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000734c @ 0x1141734c (72 bytes, 17 insns) */
void f_1141734c(void) {
  FTRACE(0x1141734cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141734c push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11417351 push 0 */
  push32((uint32_t)(0x0u));
  /* 11417353 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417359 call dword ptr [0x1141b094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b094))), 0x1141735fu);
  /* 1141735f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417361 mov dword ptr [0x11421b3c], eax */
  w32((uint32_t)(0x11421b3c), (EAX));
  /* 11417366 jne 0x11417369 */
  if (!C.zf) goto L_11417369;
  /* 11417368 ret  */
  ESPCHK(0x1141734cu, _esp0);
  ESP += 4; return;
L_11417369:;
  /* 11417369 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1141736d and dword ptr [0x11421b34], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11421b34)))&(0x0u); w32((uint32_t)(0x11421b34), (_r)); fl_logic(_r,32); }
  /* 11417374 and dword ptr [0x11421b38], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11421b38)))&(0x0u); w32((uint32_t)(0x11421b38), (_r)); fl_logic(_r,32); }
  /* 1141737b push 1 */
  push32((uint32_t)(0x1u));
  /* 1141737d mov dword ptr [0x11421b30], eax */
  w32((uint32_t)(0x11421b30), (EAX));
  /* 11417382 mov dword ptr [0x11421b40], ecx */
  w32((uint32_t)(0x11421b40), (ECX));
  /* 11417388 mov dword ptr [0x11421b28], 0x10 */
  w32((uint32_t)(0x11421b28), (0x10u));
  /* 11417392 pop eax */
  EAX = (pop32());
  /* 11417393 ret  */
  ESPCHK(0x1141734cu, _esp0);
  ESP += 4; return;
}

/* FUN_10007394 @ 0x11417394 (43 bytes, 14 insns) */
void f_11417394(void) {
  FTRACE(0x11417394u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11417394 mov eax, dword ptr [0x11421b38] */
  EAX = (r32((uint32_t)(0x11421b38)));
  /* 11417399 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1141739c mov eax, dword ptr [0x11421b3c] */
  EAX = (r32((uint32_t)(0x11421b3c)));
  /* 114173a1 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_114173a4:;
  /* 114173a4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114173a6 jae 0x114173bc */
  if (!C.cf) goto L_114173bc;
  /* 114173a8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 114173ac sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114173af cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114173b5 jb 0x114173be */
  if (C.cf) goto L_114173be;
  /* 114173b7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114173ba jmp 0x114173a4 */
  goto L_114173a4;
L_114173bc:;
  /* 114173bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114173be:;
  /* 114173be ret  */
  ESPCHK(0x11417394u, _esp0);
  ESP += 4; return;
}

/* FUN_100073bf @ 0x114173bf (809 bytes, 265 insns) */
void f_114173bf(void) {
  FTRACE(0x114173bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114173bf push ebp */
  push32((uint32_t)(EBP));
  /* 114173c0 mov ebp, esp */
  EBP = (ESP);
  /* 114173c2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114173c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114173c8 push ebx */
  push32((uint32_t)(EBX));
  /* 114173c9 push esi */
  push32((uint32_t)(ESI));
  /* 114173ca mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 114173cd mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 114173d0 push edi */
  push32((uint32_t)(EDI));
  /* 114173d1 mov edi, esi */
  EDI = (ESI);
  /* 114173d3 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114173d6 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114173d9 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 114173dc mov ecx, edi */
  ECX = (EDI);
  /* 114173de imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114173e4 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 114173eb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 114173ee mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 114173f0 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114173f1 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 114173f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114173f7 jne 0x114176e3 */
  if (!C.zf) goto L_114176e3;
  /* 114173fd mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11417400 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11417403 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11417406 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11417409 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1141740c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1141740f test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11417412 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11417415 jne 0x11417495 */
  if (!C.zf) goto L_11417495;
  /* 11417417 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1141741a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1141741b cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141741e jbe 0x11417423 */
  if ((C.cf||C.zf)) goto L_11417423;
  /* 11417420 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11417422 pop edx */
  EDX = (pop32());
L_11417423:;
  /* 11417423 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11417426 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417429 jne 0x11417477 */
  if (!C.zf) goto L_11417477;
  /* 1141742b cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141742e jae 0x1141744e */
  if (!C.cf) goto L_1141744e;
  /* 11417430 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11417435 mov ecx, edx */
  ECX = (EDX);
  /* 11417437 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11417439 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1141743d not ebx */
  EBX = (~(EBX));
  /* 1141743f and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11417443 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11417445 jne 0x1141746f */
  if (!C.zf) goto L_1141746f;
  /* 11417447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141744a and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1141744c jmp 0x1141746f */
  goto L_1141746f;
L_1141744e:;
  /* 1141744e lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11417451 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11417456 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11417458 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1141745c not ebx */
  EBX = (~(EBX));
  /* 1141745e and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11417465 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11417467 jne 0x1141746f */
  if (!C.zf) goto L_1141746f;
  /* 11417469 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141746c and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1141746f:;
  /* 1141746f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11417472 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11417475 jmp 0x1141747a */
  goto L_1141747a;
L_11417477:;
  /* 11417477 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1141747a:;
  /* 1141747a mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1141747d mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11417480 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417483 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11417486 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11417489 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1141748c mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1141748f mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11417492 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11417495:;
  /* 11417495 mov edx, ecx */
  EDX = (ECX);
  /* 11417497 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1141749a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1141749b cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141749e jbe 0x114174a3 */
  if ((C.cf||C.zf)) goto L_114174a3;
  /* 114174a0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 114174a2 pop edx */
  EDX = (pop32());
L_114174a3:;
  /* 114174a3 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 114174a6 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 114174a9 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 114174ac jne 0x11417546 */
  if (!C.zf) goto L_11417546;
  /* 114174b2 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 114174b5 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 114174b8 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 114174bb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 114174bd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 114174c0 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 114174c1 pop esi */
  ESI = (pop32());
  /* 114174c2 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114174c4 jbe 0x114174c8 */
  if ((C.cf||C.zf)) goto L_114174c8;
  /* 114174c6 mov ebx, esi */
  EBX = (ESI);
L_114174c8:;
  /* 114174c8 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114174cb mov edx, ecx */
  EDX = (ECX);
  /* 114174cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 114174d0 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 114174d3 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 114174d4 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114174d6 jbe 0x114174da */
  if ((C.cf||C.zf)) goto L_114174da;
  /* 114174d8 mov edx, esi */
  EDX = (ESI);
L_114174da:;
  /* 114174da cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114174dc je 0x11417541 */
  if (C.zf) goto L_11417541;
  /* 114174de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 114174e1 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 114174e4 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114174e7 jne 0x11417529 */
  if (!C.zf) goto L_11417529;
  /* 114174e9 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114174ec jae 0x1141750a */
  if (!C.cf) goto L_1141750a;
  /* 114174ee mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 114174f3 mov ecx, ebx */
  ECX = (EBX);
  /* 114174f5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 114174f7 not esi */
  ESI = (~(ESI));
  /* 114174f9 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 114174fd dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11417501 jne 0x11417529 */
  if (!C.zf) goto L_11417529;
  /* 11417503 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11417506 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11417508 jmp 0x11417529 */
  goto L_11417529;
L_1141750a:;
  /* 1141750a lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1141750d mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11417512 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11417514 not esi */
  ESI = (~(ESI));
  /* 11417516 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1141751d dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11417521 jne 0x11417529 */
  if (!C.zf) goto L_11417529;
  /* 11417523 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11417526 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11417529:;
  /* 11417529 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1141752c mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1141752f mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11417532 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11417535 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11417538 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1141753b mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1141753e mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11417541:;
  /* 11417541 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11417544 jmp 0x11417549 */
  goto L_11417549;
L_11417546:;
  /* 11417546 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11417549:;
  /* 11417549 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141754d jne 0x11417557 */
  if (!C.zf) goto L_11417557;
  /* 1141754f cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417551 je 0x114175d8 */
  if (C.zf) goto L_114175d8;
L_11417557:;
  /* 11417557 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1141755a mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1141755e lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11417561 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11417564 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11417567 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1141756a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1141756d mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11417570 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11417573 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417576 jne 0x114175d8 */
  if (!C.zf) goto L_114175d8;
  /* 11417578 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1141757c cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141757f mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11417582 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11417584 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11417588 jae 0x114175af */
  if (!C.cf) goto L_114175af;
  /* 1141758a cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141758e jne 0x1141759e */
  if (!C.zf) goto L_1141759e;
  /* 11417590 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11417595 mov ecx, edx */
  ECX = (EDX);
  /* 11417597 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11417599 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141759c or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1141759e:;
  /* 1141759e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 114175a3 mov ecx, edx */
  ECX = (EDX);
  /* 114175a5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 114175a7 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 114175ab or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 114175ad jmp 0x114175d8 */
  goto L_114175d8;
L_114175af:;
  /* 114175af cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114175b3 jne 0x114175c5 */
  if (!C.zf) goto L_114175c5;
  /* 114175b5 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 114175b8 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 114175bd shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 114175bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114175c2 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_114175c5:;
  /* 114175c5 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 114175c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 114175cd shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 114175cf lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 114175d6 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_114175d8:;
  /* 114175d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 114175db mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 114175dd mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 114175e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 114175e4 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 114175e6 jne 0x114176e3 */
  if (!C.zf) goto L_114176e3;
  /* 114175ec mov eax, dword ptr [0x11421b34] */
  EAX = (r32((uint32_t)(0x11421b34)));
  /* 114175f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114175f3 je 0x114176d5 */
  if (C.zf) goto L_114176d5;
  /* 114175f9 mov ecx, dword ptr [0x11421b2c] */
  ECX = (r32((uint32_t)(0x11421b2c)));
  /* 114175ff mov esi, dword ptr [0x1141b054] */
  ESI = (r32((uint32_t)(0x1141b054)));
  /* 11417605 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11417608 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141760b mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11417610 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11417615 push ebx */
  push32((uint32_t)(EBX));
  /* 11417616 push ecx */
  push32((uint32_t)(ECX));
  /* 11417617 call esi */
  call_ind((uint32_t)(ESI), 0x11417619u);
  /* 11417619 mov ecx, dword ptr [0x11421b2c] */
  ECX = (r32((uint32_t)(0x11421b2c)));
  /* 1141761f mov eax, dword ptr [0x11421b34] */
  EAX = (r32((uint32_t)(0x11421b34)));
  /* 11417624 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11417629 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1141762b or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1141762e mov eax, dword ptr [0x11421b34] */
  EAX = (r32((uint32_t)(0x11421b34)));
  /* 11417633 mov ecx, dword ptr [0x11421b2c] */
  ECX = (r32((uint32_t)(0x11421b2c)));
  /* 11417639 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1141763c and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11417644 mov eax, dword ptr [0x11421b34] */
  EAX = (r32((uint32_t)(0x11421b34)));
  /* 11417649 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1141764c dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1141764f mov eax, dword ptr [0x11421b34] */
  EAX = (r32((uint32_t)(0x11421b34)));
  /* 11417654 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11417657 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141765b jne 0x11417666 */
  if (!C.zf) goto L_11417666;
  /* 1141765d and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11417661 mov eax, dword ptr [0x11421b34] */
  EAX = (r32((uint32_t)(0x11421b34)));
L_11417666:;
  /* 11417666 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141766a jne 0x114176d5 */
  if (!C.zf) goto L_114176d5;
  /* 1141766c push ebx */
  push32((uint32_t)(EBX));
  /* 1141766d push 0 */
  push32((uint32_t)(0x0u));
  /* 1141766f push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11417672 call esi */
  call_ind((uint32_t)(ESI), 0x11417674u);
  /* 11417674 mov eax, dword ptr [0x11421b34] */
  EAX = (r32((uint32_t)(0x11421b34)));
  /* 11417679 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1141767c push 0 */
  push32((uint32_t)(0x0u));
  /* 1141767e push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417684 call dword ptr [0x1141b07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b07c))), 0x1141768au);
  /* 1141768a mov eax, dword ptr [0x11421b38] */
  EAX = (r32((uint32_t)(0x11421b38)));
  /* 1141768f mov edx, dword ptr [0x11421b3c] */
  EDX = (r32((uint32_t)(0x11421b3c)));
  /* 11417695 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11417698 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1141769b mov ecx, eax */
  ECX = (EAX);
  /* 1141769d mov eax, dword ptr [0x11421b34] */
  EAX = (r32((uint32_t)(0x11421b34)));
  /* 114176a2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114176a4 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 114176a8 push ecx */
  push32((uint32_t)(ECX));
  /* 114176a9 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 114176ac push ecx */
  push32((uint32_t)(ECX));
  /* 114176ad push eax */
  push32((uint32_t)(EAX));
  /* 114176ae call 0x11419770 */
  push32(0x114176b3u); f_11419770();
  /* 114176b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114176b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114176b9 dec dword ptr [0x11421b38] */
  { uint32_t _r=(r32((uint32_t)(0x11421b38)))-1; w32((uint32_t)(0x11421b38), (_r)); fl_dec(_r,32); }
  /* 114176bf cmp eax, dword ptr [0x11421b34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11421b34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114176c5 jbe 0x114176cb */
  if ((C.cf||C.zf)) goto L_114176cb;
  /* 114176c7 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_114176cb:;
  /* 114176cb mov eax, dword ptr [0x11421b3c] */
  EAX = (r32((uint32_t)(0x11421b3c)));
  /* 114176d0 mov dword ptr [0x11421b30], eax */
  w32((uint32_t)(0x11421b30), (EAX));
L_114176d5:;
  /* 114176d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114176d8 mov dword ptr [0x11421b2c], edi */
  w32((uint32_t)(0x11421b2c), (EDI));
  /* 114176de mov dword ptr [0x11421b34], eax */
  w32((uint32_t)(0x11421b34), (EAX));
L_114176e3:;
  /* 114176e3 pop edi */
  EDI = (pop32());
  /* 114176e4 pop esi */
  ESI = (pop32());
  /* 114176e5 pop ebx */
  EBX = (pop32());
  /* 114176e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114176e7 ret  */
  ESPCHK(0x114173bfu, _esp0);
  ESP += 4; return;
}

/* FUN_100076e8 @ 0x114176e8 (777 bytes, 275 insns) */
void f_114176e8(void) {
  FTRACE(0x114176e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114176e8 push ebp */
  push32((uint32_t)(EBP));
  /* 114176e9 mov ebp, esp */
  EBP = (ESP);
  /* 114176eb sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114176ee mov eax, dword ptr [0x11421b38] */
  EAX = (r32((uint32_t)(0x11421b38)));
  /* 114176f3 mov edx, dword ptr [0x11421b3c] */
  EDX = (r32((uint32_t)(0x11421b3c)));
  /* 114176f9 push ebx */
  push32((uint32_t)(EBX));
  /* 114176fa push esi */
  push32((uint32_t)(ESI));
  /* 114176fb lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 114176fe push edi */
  push32((uint32_t)(EDI));
  /* 114176ff lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11417702 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11417705 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11417708 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1141770b and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1141770e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11417711 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11417714 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11417715 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417718 jge 0x11417728 */
  if ((C.sf==C.of)) goto L_11417728;
  /* 1141771a or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1141771d shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1141771f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11417723 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11417726 jmp 0x11417738 */
  goto L_11417738;
L_11417728:;
  /* 11417728 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141772b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1141772e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11417730 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11417732 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11417735 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11417738:;
  /* 11417738 mov eax, dword ptr [0x11421b30] */
  EAX = (r32((uint32_t)(0x11421b30)));
  /* 1141773d mov ebx, eax */
  EBX = (EAX);
  /* 1141773f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417741 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11417744 jae 0x1141775f */
  if (!C.cf) goto L_1141775f;
L_11417746:;
  /* 11417746 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11417749 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1141774b and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1141774e and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11417750 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11417752 jne 0x1141775f */
  if (!C.zf) goto L_1141775f;
  /* 11417754 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417757 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141775a mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1141775d jb 0x11417746 */
  if (C.cf) goto L_11417746;
L_1141775f:;
  /* 1141775f cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417762 jne 0x114177dd */
  if (!C.zf) goto L_114177dd;
  /* 11417764 mov ebx, edx */
  EBX = (EDX);
L_11417766:;
  /* 11417766 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417768 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1141776b jae 0x11417782 */
  if (!C.cf) goto L_11417782;
  /* 1141776d mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11417770 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11417772 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11417775 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11417777 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11417779 jne 0x11417780 */
  if (!C.zf) goto L_11417780;
  /* 1141777b add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141777e jmp 0x11417766 */
  goto L_11417766;
L_11417780:;
  /* 11417780 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11417782:;
  /* 11417782 jne 0x114177dd */
  if (!C.zf) goto L_114177dd;
L_11417784:;
  /* 11417784 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417787 jae 0x1141779a */
  if (!C.cf) goto L_1141779a;
  /* 11417789 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141778d jne 0x11417797 */
  if (!C.zf) goto L_11417797;
  /* 1141778f add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417792 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11417795 jmp 0x11417784 */
  goto L_11417784;
L_11417797:;
  /* 11417797 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1141779a:;
  /* 1141779a jne 0x114177c2 */
  if (!C.zf) goto L_114177c2;
  /* 1141779c mov ebx, edx */
  EBX = (EDX);
L_1141779e:;
  /* 1141779e cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114177a0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 114177a3 jae 0x114177b2 */
  if (!C.cf) goto L_114177b2;
  /* 114177a5 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114177a9 jne 0x114177b0 */
  if (!C.zf) goto L_114177b0;
  /* 114177ab add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 114177ae jmp 0x1141779e */
  goto L_1141779e;
L_114177b0:;
  /* 114177b0 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_114177b2:;
  /* 114177b2 jne 0x114177c2 */
  if (!C.zf) goto L_114177c2;
  /* 114177b4 call 0x114179f1 */
  push32(0x114177b9u); f_114179f1();
  /* 114177b9 mov ebx, eax */
  EBX = (EAX);
  /* 114177bb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 114177bd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 114177c0 je 0x114177d6 */
  if (C.zf) goto L_114177d6;
L_114177c2:;
  /* 114177c2 push ebx */
  push32((uint32_t)(EBX));
  /* 114177c3 call 0x11417aa2 */
  push32(0x114177c8u); f_11417aa2();
  /* 114177c8 pop ecx */
  ECX = (pop32());
  /* 114177c9 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 114177cc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 114177ce mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 114177d1 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114177d4 jne 0x114177dd */
  if (!C.zf) goto L_114177dd;
L_114177d6:;
  /* 114177d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114177d8 jmp 0x114179ec */
  goto L_114179ec;
L_114177dd:;
  /* 114177dd mov dword ptr [0x11421b30], ebx */
  w32((uint32_t)(0x11421b30), (EBX));
  /* 114177e3 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 114177e6 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 114177e8 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114177eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 114177ee je 0x11417804 */
  if (C.zf) goto L_11417804;
  /* 114177f0 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 114177f7 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 114177fb and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 114177fe and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11417800 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11417802 jne 0x1141783b */
  if (!C.zf) goto L_1141783b;
L_11417804:;
  /* 11417804 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1141780a mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1141780d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11417810 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11417813 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11417817 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1141781a or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1141781c mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1141781f jne 0x11417838 */
  if (!C.zf) goto L_11417838;
L_11417821:;
  /* 11417821 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11417827 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1141782a and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1141782d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417830 mov edi, esi */
  EDI = (ESI);
  /* 11417832 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11417834 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11417836 je 0x11417821 */
  if (C.zf) goto L_11417821;
L_11417838:;
  /* 11417838 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1141783b:;
  /* 1141783b mov ecx, edx */
  ECX = (EDX);
  /* 1141783d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1141783f imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11417845 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1141784c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1141784f mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11417853 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11417855 jne 0x11417864 */
  if (!C.zf) goto L_11417864;
  /* 11417857 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1141785e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11417860 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11417863 pop edi */
  EDI = (pop32());
L_11417864:;
  /* 11417864 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11417866 jl 0x1141786d */
  if ((C.sf!=C.of)) goto L_1141786d;
  /* 11417868 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1141786a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1141786b jmp 0x11417864 */
  goto L_11417864;
L_1141786d:;
  /* 1141786d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11417870 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11417874 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11417876 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417879 mov esi, ecx */
  ESI = (ECX);
  /* 1141787b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1141787e sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11417881 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11417882 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417885 jle 0x1141788a */
  if ((C.zf||C.sf!=C.of)) goto L_1141788a;
  /* 11417887 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11417889 pop esi */
  ESI = (pop32());
L_1141788a:;
  /* 1141788a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141788c je 0x1141799f */
  if (C.zf) goto L_1141799f;
  /* 11417892 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11417895 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417898 jne 0x114178fb */
  if (!C.zf) goto L_114178fb;
  /* 1141789a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141789d jge 0x114178ca */
  if ((C.sf==C.of)) goto L_114178ca;
  /* 1141789f mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 114178a4 mov ecx, edi */
  ECX = (EDI);
  /* 114178a6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 114178a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114178ab lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 114178af not ebx */
  EBX = (~(EBX));
  /* 114178b1 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 114178b4 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 114178b8 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 114178bc dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 114178be jne 0x114178f8 */
  if (!C.zf) goto L_114178f8;
  /* 114178c0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 114178c3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114178c6 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 114178c8 jmp 0x114178fb */
  goto L_114178fb;
L_114178ca:;
  /* 114178ca lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 114178cd mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 114178d2 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 114178d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114178d7 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 114178db lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 114178e2 not ebx */
  EBX = (~(EBX));
  /* 114178e4 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 114178e6 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 114178e8 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 114178eb jne 0x114178f8 */
  if (!C.zf) goto L_114178f8;
  /* 114178ed mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 114178f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114178f3 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 114178f6 jmp 0x114178fb */
  goto L_114178fb;
L_114178f8:;
  /* 114178f8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_114178fb:;
  /* 114178fb mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 114178fe mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11417901 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417905 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11417908 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1141790b mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1141790e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11417911 je 0x114179ab */
  if (C.zf) goto L_114179ab;
  /* 11417917 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1141791a mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1141791e lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11417921 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11417924 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11417927 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1141792a mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1141792d mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11417930 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11417933 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417936 jne 0x1141799c */
  if (!C.zf) goto L_1141799c;
  /* 11417938 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1141793c cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141793f mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11417942 jge 0x1141796d */
  if ((C.sf==C.of)) goto L_1141796d;
  /* 11417944 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11417946 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1141794a mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1141794e jne 0x1141795b */
  if (!C.zf) goto L_1141795b;
  /* 11417950 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11417955 mov ecx, esi */
  ECX = (ESI);
  /* 11417957 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11417959 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1141795b:;
  /* 1141795b mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11417960 mov ecx, esi */
  ECX = (ESI);
  /* 11417962 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11417964 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11417967 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1141796b jmp 0x1141799c */
  goto L_1141799c;
L_1141796d:;
  /* 1141796d inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1141796f cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11417973 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11417977 jne 0x11417986 */
  if (!C.zf) goto L_11417986;
  /* 11417979 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1141797c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11417981 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11417983 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11417986:;
  /* 11417986 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11417989 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11417990 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11417993 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11417998 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1141799a or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1141799c:;
  /* 1141799c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1141799f:;
  /* 1141799f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114179a1 je 0x114179ae */
  if (C.zf) goto L_114179ae;
  /* 114179a3 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114179a5 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 114179a9 jmp 0x114179ae */
  goto L_114179ae;
L_114179ab:;
  /* 114179ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_114179ae:;
  /* 114179ae mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 114179b1 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114179b3 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 114179b6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 114179b8 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 114179bc mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 114179bf mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 114179c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114179c3 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 114179c6 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 114179c8 jne 0x114179e4 */
  if (!C.zf) goto L_114179e4;
  /* 114179ca cmp ebx, dword ptr [0x11421b34] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11421b34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114179d0 jne 0x114179e4 */
  if (!C.zf) goto L_114179e4;
  /* 114179d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114179d5 cmp ecx, dword ptr [0x11421b2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11421b2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114179db jne 0x114179e4 */
  if (!C.zf) goto L_114179e4;
  /* 114179dd and dword ptr [0x11421b34], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11421b34)))&(0x0u); w32((uint32_t)(0x11421b34), (_r)); fl_logic(_r,32); }
L_114179e4:;
  /* 114179e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114179e7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114179e9 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_114179ec:;
  /* 114179ec pop edi */
  EDI = (pop32());
  /* 114179ed pop esi */
  ESI = (pop32());
  /* 114179ee pop ebx */
  EBX = (pop32());
  /* 114179ef leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114179f0 ret  */
  ESPCHK(0x114176e8u, _esp0);
  ESP += 4; return;
}

/* FUN_100079f1 @ 0x114179f1 (177 bytes, 53 insns) */
void f_114179f1(void) {
  FTRACE(0x114179f1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114179f1 mov eax, dword ptr [0x11421b38] */
  EAX = (r32((uint32_t)(0x11421b38)));
  /* 114179f6 mov ecx, dword ptr [0x11421b28] */
  ECX = (r32((uint32_t)(0x11421b28)));
  /* 114179fc push esi */
  push32((uint32_t)(ESI));
  /* 114179fd push edi */
  push32((uint32_t)(EDI));
  /* 114179fe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11417a00 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417a02 jne 0x11417a34 */
  if (!C.zf) goto L_11417a34;
  /* 11417a04 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11417a08 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11417a0b push eax */
  push32((uint32_t)(EAX));
  /* 11417a0c push dword ptr [0x11421b3c] */
  push32((uint32_t)(r32((uint32_t)(0x11421b3c))));
  /* 11417a12 push edi */
  push32((uint32_t)(EDI));
  /* 11417a13 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417a19 call dword ptr [0x1141b04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b04c))), 0x11417a1fu);
  /* 11417a1f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417a21 je 0x11417a84 */
  if (C.zf) goto L_11417a84;
  /* 11417a23 add dword ptr [0x11421b28], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11421b28))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11421b28), (_r)); fl_add(_a,_b,_r,32); }
  /* 11417a2a mov dword ptr [0x11421b3c], eax */
  w32((uint32_t)(0x11421b3c), (EAX));
  /* 11417a2f mov eax, dword ptr [0x11421b38] */
  EAX = (r32((uint32_t)(0x11421b38)));
L_11417a34:;
  /* 11417a34 mov ecx, dword ptr [0x11421b3c] */
  ECX = (r32((uint32_t)(0x11421b3c)));
  /* 11417a3a push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11417a3f push 8 */
  push32((uint32_t)(0x8u));
  /* 11417a41 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11417a44 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417a4a lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11417a4d call dword ptr [0x1141b094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b094))), 0x11417a53u);
  /* 11417a53 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417a55 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11417a58 je 0x11417a84 */
  if (C.zf) goto L_11417a84;
  /* 11417a5a push 4 */
  push32((uint32_t)(0x4u));
  /* 11417a5c push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11417a61 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11417a66 push edi */
  push32((uint32_t)(EDI));
  /* 11417a67 call dword ptr [0x1141b058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b058))), 0x11417a6du);
  /* 11417a6d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417a6f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11417a72 jne 0x11417a88 */
  if (!C.zf) goto L_11417a88;
  /* 11417a74 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11417a77 push edi */
  push32((uint32_t)(EDI));
  /* 11417a78 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417a7e call dword ptr [0x1141b07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b07c))), 0x11417a84u);
L_11417a84:;
  /* 11417a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11417a86 jmp 0x11417a9f */
  goto L_11417a9f;
L_11417a88:;
  /* 11417a88 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11417a8c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11417a8e mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11417a91 inc dword ptr [0x11421b38] */
  { uint32_t _r=(r32((uint32_t)(0x11421b38)))+1; w32((uint32_t)(0x11421b38), (_r)); fl_inc(_r,32); }
  /* 11417a97 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11417a9a or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11417a9d mov eax, esi */
  EAX = (ESI);
L_11417a9f:;
  /* 11417a9f pop edi */
  EDI = (pop32());
  /* 11417aa0 pop esi */
  ESI = (pop32());
  /* 11417aa1 ret  */
  ESPCHK(0x114179f1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007aa2 @ 0x11417aa2 (251 bytes, 85 insns) */
void f_11417aa2(void) {
  FTRACE(0x11417aa2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11417aa2 push ebp */
  push32((uint32_t)(EBP));
  /* 11417aa3 mov ebp, esp */
  EBP = (ESP);
  /* 11417aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 11417aa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11417aa9 push ebx */
  push32((uint32_t)(EBX));
  /* 11417aaa push esi */
  push32((uint32_t)(ESI));
  /* 11417aab push edi */
  push32((uint32_t)(EDI));
  /* 11417aac mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11417aaf mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11417ab2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11417ab4:;
  /* 11417ab4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417ab6 jl 0x11417abd */
  if ((C.sf!=C.of)) goto L_11417abd;
  /* 11417ab8 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11417aba inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11417abb jmp 0x11417ab4 */
  goto L_11417ab4;
L_11417abd:;
  /* 11417abd mov eax, ebx */
  EAX = (EBX);
  /* 11417abf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11417ac1 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11417ac7 pop edx */
  EDX = (pop32());
  /* 11417ac8 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11417acf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11417ad2:;
  /* 11417ad2 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11417ad5 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11417ad8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417adb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11417adc jne 0x11417ad2 */
  if (!C.zf) goto L_11417ad2;
  /* 11417ade mov edi, ebx */
  EDI = (EBX);
  /* 11417ae0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11417ae2 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11417ae5 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11417ae8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11417aed push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11417af2 push edi */
  push32((uint32_t)(EDI));
  /* 11417af3 call dword ptr [0x1141b058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b058))), 0x11417af9u);
  /* 11417af9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417afb jne 0x11417b05 */
  if (!C.zf) goto L_11417b05;
  /* 11417afd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11417b00 jmp 0x11417b98 */
  goto L_11417b98;
L_11417b05:;
  /* 11417b05 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11417b0b cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417b0d ja 0x11417b4b */
  if ((!C.cf&&!C.zf)) goto L_11417b4b;
  /* 11417b0f lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11417b12:;
  /* 11417b12 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11417b16 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11417b1d lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11417b23 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11417b2a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11417b2c lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11417b32 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11417b35 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11417b3f add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417b44 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11417b47 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417b49 jbe 0x11417b12 */
  if ((C.cf||C.zf)) goto L_11417b12;
L_11417b4b:;
  /* 11417b4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11417b4e lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11417b51 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417b56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11417b58 pop edi */
  EDI = (pop32());
  /* 11417b59 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11417b5c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11417b5f lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11417b62 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11417b65 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11417b68 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11417b6d mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11417b74 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11417b77 mov cl, al */
  CL = (AL);
  /* 11417b79 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11417b7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11417b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11417b80 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11417b83 jne 0x11417b88 */
  if (!C.zf) goto L_11417b88;
  /* 11417b85 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11417b88:;
  /* 11417b88 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11417b8d mov ecx, ebx */
  ECX = (EBX);
  /* 11417b8f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11417b91 not edx */
  EDX = (~(EDX));
  /* 11417b93 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11417b96 mov eax, ebx */
  EAX = (EBX);
L_11417b98:;
  /* 11417b98 pop edi */
  EDI = (pop32());
  /* 11417b99 pop esi */
  ESI = (pop32());
  /* 11417b9a pop ebx */
  EBX = (pop32());
  /* 11417b9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11417b9c ret  */
  ESPCHK(0x11417aa2u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b9d @ 0x11417b9d (324 bytes, 102 insns) */
void f_11417b9d(void) {
  FTRACE(0x11417b9du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11417b9d cmp dword ptr [0x1141cce8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1141cce8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 11417ba5 push ebp */
  push32((uint32_t)(EBP));
  /* 11417ba6 push esi */
  push32((uint32_t)(ESI));
  /* 11417ba7 push edi */
  push32((uint32_t)(EDI));
  /* 11417ba8 jne 0x11417bb1 */
  if (!C.zf) goto L_11417bb1;
  /* 11417baa mov esi, 0x1141ccd8 */
  ESI = (0x1141ccd8u);
  /* 11417baf jmp 0x11417bce */
  goto L_11417bce;
L_11417bb1:;
  /* 11417bb1 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11417bb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11417bb8 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417bbe call dword ptr [0x1141b094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b094))), 0x11417bc4u);
  /* 11417bc4 mov esi, eax */
  ESI = (EAX);
  /* 11417bc6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11417bc8 je 0x11417cda */
  if (C.zf) goto L_11417cda;
L_11417bce:;
  /* 11417bce mov ebp, dword ptr [0x1141b058] */
  EBP = (r32((uint32_t)(0x1141b058)));
  /* 11417bd4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11417bd6 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11417bdb push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11417be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11417be2 call ebp */
  call_ind((uint32_t)(EBP), 0x11417be4u);
  /* 11417be4 mov edi, eax */
  EDI = (EAX);
  /* 11417be6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11417be8 je 0x11417cc3 */
  if (C.zf) goto L_11417cc3;
  /* 11417bee push 4 */
  push32((uint32_t)(0x4u));
  /* 11417bf0 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11417bf5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11417bfa push ebx */
  push32((uint32_t)(EBX));
  /* 11417bfb push edi */
  push32((uint32_t)(EDI));
  /* 11417bfc call ebp */
  call_ind((uint32_t)(EBP), 0x11417bfeu);
  /* 11417bfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417c00 je 0x11417cb5 */
  if (C.zf) goto L_11417cb5;
  /* 11417c06 mov eax, 0x1141ccd8 */
  EAX = (0x1141ccd8u);
  /* 11417c0b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417c0d jne 0x11417c2d */
  if (!C.zf) goto L_11417c2d;
  /* 11417c0f cmp dword ptr [0x1141ccd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1141ccd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417c16 jne 0x11417c1d */
  if (!C.zf) goto L_11417c1d;
  /* 11417c18 mov dword ptr [0x1141ccd8], eax */
  w32((uint32_t)(0x1141ccd8), (EAX));
L_11417c1d:;
  /* 11417c1d cmp dword ptr [0x1141ccdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1141ccdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417c24 jne 0x11417c42 */
  if (!C.zf) goto L_11417c42;
  /* 11417c26 mov dword ptr [0x1141ccdc], eax */
  w32((uint32_t)(0x1141ccdc), (EAX));
  /* 11417c2b jmp 0x11417c42 */
  goto L_11417c42;
L_11417c2d:;
  /* 11417c2d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11417c2f mov eax, dword ptr [0x1141ccdc] */
  EAX = (r32((uint32_t)(0x1141ccdc)));
  /* 11417c34 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11417c37 mov dword ptr [0x1141ccdc], esi */
  w32((uint32_t)(0x1141ccdc), (ESI));
  /* 11417c3d mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11417c40 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11417c42:;
  /* 11417c42 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11417c48 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11417c4e mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11417c51 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11417c54 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11417c57 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11417c5a mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11417c5d xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11417c5f mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11417c64:;
  /* 11417c64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11417c66 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417c69 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11417c6c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11417c6d and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11417c6f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11417c70 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11417c71 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11417c73 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11417c76 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417c79 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417c7f jl 0x11417c64 */
  if ((C.sf!=C.of)) goto L_11417c64;
  /* 11417c81 push ebx */
  push32((uint32_t)(EBX));
  /* 11417c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11417c84 push edi */
  push32((uint32_t)(EDI));
  /* 11417c85 call 0x11419ab0 */
  push32(0x11417c8au); f_11419ab0();
  /* 11417c8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11417c8d:;
  /* 11417c8d mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11417c90 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417c92 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417c94 jae 0x11417cb1 */
  if (!C.cf) goto L_11417cb1;
  /* 11417c96 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11417c9d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11417ca0 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11417ca2 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11417ca9 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11417caf jmp 0x11417c8d */
  goto L_11417c8d;
L_11417cb1:;
  /* 11417cb1 mov eax, esi */
  EAX = (ESI);
  /* 11417cb3 jmp 0x11417cdc */
  goto L_11417cdc;
L_11417cb5:;
  /* 11417cb5 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11417cba push 0 */
  push32((uint32_t)(0x0u));
  /* 11417cbc push edi */
  push32((uint32_t)(EDI));
  /* 11417cbd call dword ptr [0x1141b054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b054))), 0x11417cc3u);
L_11417cc3:;
  /* 11417cc3 cmp esi, 0x1141ccd8 */
  { uint32_t _a=(ESI),_b=(0x1141ccd8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417cc9 je 0x11417cda */
  if (C.zf) goto L_11417cda;
  /* 11417ccb push esi */
  push32((uint32_t)(ESI));
  /* 11417ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 11417cce push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417cd4 call dword ptr [0x1141b07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b07c))), 0x11417cdau);
L_11417cda:;
  /* 11417cda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11417cdc:;
  /* 11417cdc pop edi */
  EDI = (pop32());
  /* 11417cdd pop esi */
  ESI = (pop32());
  /* 11417cde pop ebp */
  EBP = (pop32());
  /* 11417cdf pop ebx */
  EBX = (pop32());
  /* 11417ce0 ret  */
  ESPCHK(0x11417b9du, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce1 @ 0x11417ce1 (86 bytes, 27 insns) */
void f_11417ce1(void) {
  FTRACE(0x11417ce1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11417ce1 push esi */
  push32((uint32_t)(ESI));
  /* 11417ce2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11417ce6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11417ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 11417ced push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11417cf0 call dword ptr [0x1141b054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b054))), 0x11417cf6u);
  /* 11417cf6 cmp dword ptr [0x1141ecf8], esi */
  { uint32_t _a=(r32((uint32_t)(0x1141ecf8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417cfc jne 0x11417d06 */
  if (!C.zf) goto L_11417d06;
  /* 11417cfe mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11417d01 mov dword ptr [0x1141ecf8], eax */
  w32((uint32_t)(0x1141ecf8), (EAX));
L_11417d06:;
  /* 11417d06 cmp esi, 0x1141ccd8 */
  { uint32_t _a=(ESI),_b=(0x1141ccd8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417d0c je 0x11417d2e */
  if (C.zf) goto L_11417d2e;
  /* 11417d0e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11417d11 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11417d13 push esi */
  push32((uint32_t)(ESI));
  /* 11417d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11417d16 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11417d18 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11417d1a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11417d1d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11417d20 push dword ptr [0x11421b44] */
  push32((uint32_t)(r32((uint32_t)(0x11421b44))));
  /* 11417d26 call dword ptr [0x1141b07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b07c))), 0x11417d2cu);
  /* 11417d2c pop esi */
  ESI = (pop32());
  /* 11417d2d ret  */
  ESPCHK(0x11417ce1u, _esp0);
  ESP += 4; return;
L_11417d2e:;
  /* 11417d2e or dword ptr [0x1141cce8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1141cce8)))|(0xffffffffu); w32((uint32_t)(0x1141cce8), (_r)); fl_logic(_r,32); }
  /* 11417d35 pop esi */
  ESI = (pop32());
  /* 11417d36 ret  */
  ESPCHK(0x11417ce1u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d37 @ 0x11417d37 (194 bytes, 66 insns) */
void f_11417d37(void) {
  FTRACE(0x11417d37u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11417d37 push ebp */
  push32((uint32_t)(EBP));
  /* 11417d38 mov ebp, esp */
  EBP = (ESP);
  /* 11417d3a push ecx */
  push32((uint32_t)(ECX));
  /* 11417d3b push ebx */
  push32((uint32_t)(EBX));
  /* 11417d3c push esi */
  push32((uint32_t)(ESI));
  /* 11417d3d mov esi, dword ptr [0x1141ccdc] */
  ESI = (r32((uint32_t)(0x1141ccdc)));
  /* 11417d43 push edi */
  push32((uint32_t)(EDI));
L_11417d44:;
  /* 11417d44 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417d48 je 0x11417de2 */
  if (C.zf) goto L_11417de2;
  /* 11417d4e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11417d52 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11417d58 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11417d5d:;
  /* 11417d5d cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417d63 jne 0x11417d9e */
  if (!C.zf) goto L_11417d9e;
  /* 11417d65 mov eax, ebx */
  EAX = (EBX);
  /* 11417d67 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11417d6c add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417d6f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11417d74 push eax */
  push32((uint32_t)(EAX));
  /* 11417d75 call dword ptr [0x1141b054] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b054))), 0x11417d7bu);
  /* 11417d7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417d7d je 0x11417d9e */
  if (C.zf) goto L_11417d9e;
  /* 11417d7f or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11417d82 dec dword ptr [0x1142170c] */
  { uint32_t _r=(r32((uint32_t)(0x1142170c)))-1; w32((uint32_t)(0x1142170c), (_r)); fl_dec(_r,32); }
  /* 11417d88 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11417d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417d8d je 0x11417d93 */
  if (C.zf) goto L_11417d93;
  /* 11417d8f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417d91 jbe 0x11417d96 */
  if ((C.cf||C.zf)) goto L_11417d96;
L_11417d93:;
  /* 11417d93 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11417d96:;
  /* 11417d96 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11417d99 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11417d9c je 0x11417dab */
  if (C.zf) goto L_11417dab;
L_11417d9e:;
  /* 11417d9e sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417da4 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417da7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11417da9 jge 0x11417d5d */
  if ((C.sf==C.of)) goto L_11417d5d;
L_11417dab:;
  /* 11417dab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417daf mov ecx, esi */
  ECX = (ESI);
  /* 11417db1 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11417db4 je 0x11417de2 */
  if (C.zf) goto L_11417de2;
  /* 11417db6 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417dba jne 0x11417de2 */
  if (!C.zf) goto L_11417de2;
  /* 11417dbc push 1 */
  push32((uint32_t)(0x1u));
  /* 11417dbe lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11417dc1 pop edx */
  EDX = (pop32());
L_11417dc2:;
  /* 11417dc2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417dc5 jne 0x11417dd3 */
  if (!C.zf) goto L_11417dd3;
  /* 11417dc7 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11417dc8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417dcb cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417dd1 jl 0x11417dc2 */
  if ((C.sf!=C.of)) goto L_11417dc2;
L_11417dd3:;
  /* 11417dd3 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417dd9 jne 0x11417de2 */
  if (!C.zf) goto L_11417de2;
  /* 11417ddb push ecx */
  push32((uint32_t)(ECX));
  /* 11417ddc call 0x11417ce1 */
  push32(0x11417de1u); f_11417ce1();
  /* 11417de1 pop ecx */
  ECX = (pop32());
L_11417de2:;
  /* 11417de2 cmp esi, dword ptr [0x1141ccdc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1141ccdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417de8 je 0x11417df4 */
  if (C.zf) goto L_11417df4;
  /* 11417dea cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417dee jg 0x11417d44 */
  if ((!C.zf&&C.sf==C.of)) goto L_11417d44;
L_11417df4:;
  /* 11417df4 pop edi */
  EDI = (pop32());
  /* 11417df5 pop esi */
  ESI = (pop32());
  /* 11417df6 pop ebx */
  EBX = (pop32());
  /* 11417df7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11417df8 ret  */
  ESPCHK(0x11417d37u, _esp0);
  ESP += 4; return;
}

/* FUN_10007df9 @ 0x11417df9 (87 bytes, 34 insns) */
void f_11417df9(void) {
  FTRACE(0x11417df9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11417df9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11417dfd mov edx, 0x1141ccd8 */
  EDX = (0x1141ccd8u);
  /* 11417e02 push esi */
  push32((uint32_t)(ESI));
  /* 11417e03 mov ecx, edx */
  ECX = (EDX);
L_11417e05:;
  /* 11417e05 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417e08 jbe 0x11417e0f */
  if ((C.cf||C.zf)) goto L_11417e0f;
  /* 11417e0a cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417e0d jb 0x11417e17 */
  if (C.cf) goto L_11417e17;
L_11417e0f:;
  /* 11417e0f mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11417e11 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417e13 je 0x11417e4c */
  if (C.zf) goto L_11417e4c;
  /* 11417e15 jmp 0x11417e05 */
  goto L_11417e05;
L_11417e17:;
  /* 11417e17 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11417e19 jne 0x11417e4c */
  if (!C.zf) goto L_11417e4c;
  /* 11417e1b mov esi, eax */
  ESI = (EAX);
  /* 11417e1d mov edx, 0x100 */
  EDX = (0x100u);
  /* 11417e22 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11417e28 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417e2a jb 0x11417e4c */
  if (C.cf) goto L_11417e4c;
  /* 11417e2c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11417e30 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11417e32 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11417e36 mov ecx, eax */
  ECX = (EAX);
  /* 11417e38 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11417e3d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417e3f mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11417e41 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417e43 pop esi */
  ESI = (pop32());
  /* 11417e44 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11417e47 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11417e4b ret  */
  ESPCHK(0x11417df9u, _esp0);
  ESP += 4; return;
L_11417e4c:;
  /* 11417e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11417e4e pop esi */
  ESI = (pop32());
  /* 11417e4f ret  */
  ESPCHK(0x11417df9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e50 @ 0x11417e50 (69 bytes, 19 insns) */
void f_11417e50(void) {
  FTRACE(0x11417e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11417e50 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11417e54 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11417e58 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417e5b sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11417e5e lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11417e62 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11417e66 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11417e69 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11417e6b and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11417e6e cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417e74 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11417e7b jne 0x11417e94 */
  if (!C.zf) goto L_11417e94;
  /* 11417e7d inc dword ptr [0x1142170c] */
  { uint32_t _r=(r32((uint32_t)(0x1142170c)))+1; w32((uint32_t)(0x1142170c), (_r)); fl_inc(_r,32); }
  /* 11417e83 cmp dword ptr [0x1142170c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1142170c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417e8a jne 0x11417e94 */
  if (!C.zf) goto L_11417e94;
  /* 11417e8c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11417e8e call 0x11417d37 */
  push32(0x11417e93u); f_11417d37();
  /* 11417e93 pop ecx */
  ECX = (pop32());
L_11417e94:;
  /* 11417e94 ret  */
  ESPCHK(0x11417e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e95 @ 0x11417e95 (520 bytes, 180 insns) */
void f_11417e95(void) {
  FTRACE(0x11417e95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11417e95 push ebp */
  push32((uint32_t)(EBP));
  /* 11417e96 mov ebp, esp */
  EBP = (ESP);
  /* 11417e98 push ecx */
  push32((uint32_t)(ECX));
  /* 11417e99 push ecx */
  push32((uint32_t)(ECX));
  /* 11417e9a push ebx */
  push32((uint32_t)(EBX));
  /* 11417e9b push esi */
  push32((uint32_t)(ESI));
  /* 11417e9c mov esi, dword ptr [0x1141ecf8] */
  ESI = (r32((uint32_t)(0x1141ecf8)));
  /* 11417ea2 push edi */
  push32((uint32_t)(EDI));
L_11417ea3:;
  /* 11417ea3 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11417ea6 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417ea9 je 0x11417f4e */
  if (C.zf) goto L_11417f4e;
  /* 11417eaf mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11417eb2 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11417eb8 mov eax, edi */
  EAX = (EDI);
  /* 11417eba sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417ebc sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417ebf sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11417ec2 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11417ec5 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417ec7 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11417ecc jae 0x11417f08 */
  if (!C.cf) goto L_11417f08;
L_11417ece:;
  /* 11417ece mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11417ed0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11417ed3 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417ed5 jl 0x11417ef1 */
  if ((C.sf!=C.of)) goto L_11417ef1;
  /* 11417ed7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417eda jbe 0x11417ef1 */
  if ((C.cf||C.zf)) goto L_11417ef1;
  /* 11417edc push ebx */
  push32((uint32_t)(EBX));
  /* 11417edd push ecx */
  push32((uint32_t)(ECX));
  /* 11417ede push eax */
  push32((uint32_t)(EAX));
  /* 11417edf call 0x1141809d */
  push32(0x11417ee4u); f_1141809d();
  /* 11417ee4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11417ee7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417ee9 jne 0x11417f60 */
  if (!C.zf) goto L_11417f60;
  /* 11417eeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11417eee mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11417ef1:;
  /* 11417ef1 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11417ef4 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11417efa add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417eff cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417f01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11417f04 jb 0x11417ece */
  if (C.cf) goto L_11417ece;
  /* 11417f06 jmp 0x11417f0b */
  goto L_11417f0b;
L_11417f08:;
  /* 11417f08 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11417f0b:;
  /* 11417f0b mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11417f0e mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11417f11 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11417f14 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11417f17 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417f19 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11417f1c jae 0x11417f51 */
  if (!C.cf) goto L_11417f51;
L_11417f1e:;
  /* 11417f1e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11417f20 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417f22 jl 0x11417f3d */
  if ((C.sf!=C.of)) goto L_11417f3d;
  /* 11417f24 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417f27 jbe 0x11417f3d */
  if ((C.cf||C.zf)) goto L_11417f3d;
  /* 11417f29 push ebx */
  push32((uint32_t)(EBX));
  /* 11417f2a push eax */
  push32((uint32_t)(EAX));
  /* 11417f2b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11417f2e call 0x1141809d */
  push32(0x11417f33u); f_1141809d();
  /* 11417f33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11417f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11417f38 jne 0x11417f60 */
  if (!C.zf) goto L_11417f60;
  /* 11417f3a mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11417f3d:;
  /* 11417f3d add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11417f44 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11417f47 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417f4a jb 0x11417f1e */
  if (C.cf) goto L_11417f1e;
  /* 11417f4c jmp 0x11417f51 */
  goto L_11417f51;
L_11417f4e:;
  /* 11417f4e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11417f51:;
  /* 11417f51 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11417f53 cmp esi, dword ptr [0x1141ecf8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1141ecf8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417f59 je 0x11417f70 */
  if (C.zf) goto L_11417f70;
  /* 11417f5b jmp 0x11417ea3 */
  goto L_11417ea3;
L_11417f60:;
  /* 11417f60 mov dword ptr [0x1141ecf8], esi */
  w32((uint32_t)(0x1141ecf8), (ESI));
  /* 11417f66 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11417f68 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11417f6b jmp 0x11418098 */
  goto L_11418098;
L_11417f70:;
  /* 11417f70 mov eax, 0x1141ccd8 */
  EAX = (0x1141ccd8u);
  /* 11417f75 mov edi, eax */
  EDI = (EAX);
L_11417f77:;
  /* 11417f77 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417f7b je 0x11417f83 */
  if (C.zf) goto L_11417f83;
  /* 11417f7d cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417f81 jne 0x11417f8f */
  if (!C.zf) goto L_11417f8f;
L_11417f83:;
  /* 11417f83 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11417f85 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417f87 je 0x11418064 */
  if (C.zf) goto L_11418064;
  /* 11417f8d jmp 0x11417f77 */
  goto L_11417f77;
L_11417f8f:;
  /* 11417f8f mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11417f92 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11417f96 mov esi, ebx */
  ESI = (EBX);
  /* 11417f98 mov eax, ebx */
  EAX = (EBX);
  /* 11417f9a sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417f9c sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11417f9f sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11417fa2 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11417fa5 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11417fa8 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417fab jne 0x11417fbe */
  if (!C.zf) goto L_11417fbe;
L_11417fad:;
  /* 11417fad cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417fb1 jge 0x11417fbe */
  if ((C.sf==C.of)) goto L_11417fbe;
  /* 11417fb3 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11417fb6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11417fb9 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417fbc je 0x11417fad */
  if (C.zf) goto L_11417fad;
L_11417fbe:;
  /* 11417fbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11417fc1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11417fc3 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11417fc6 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11417fcb push eax */
  push32((uint32_t)(EAX));
  /* 11417fcc push esi */
  push32((uint32_t)(ESI));
  /* 11417fcd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11417fd0 call dword ptr [0x1141b058] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b058))), 0x11417fd6u);
  /* 11417fd6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11417fd8 jne 0x11418096 */
  if (!C.zf) goto L_11418096;
  /* 11417fde push 0 */
  push32((uint32_t)(0x0u));
  /* 11417fe0 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11417fe3 push esi */
  push32((uint32_t)(ESI));
  /* 11417fe4 call 0x11419ab0 */
  push32(0x11417fe9u); f_11419ab0();
  /* 11417fe9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11417fec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11417fef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11417ff1 mov ecx, ebx */
  ECX = (EBX);
  /* 11417ff3 jle 0x11418025 */
  if ((C.zf||C.sf!=C.of)) goto L_11418025;
  /* 11417ff5 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11417ff8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11417ffb:;
  /* 11417ffb or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11418002 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11418005 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11418008 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1141800d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1141800f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11418011 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11418018 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141801d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11418020 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11418023 jne 0x11417ffb */
  if (!C.zf) goto L_11417ffb;
L_11418025:;
  /* 11418025 mov dword ptr [0x1141ecf8], edi */
  w32((uint32_t)(0x1141ecf8), (EDI));
  /* 1141802b lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11418031:;
  /* 11418031 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418033 jae 0x11418041 */
  if (!C.cf) goto L_11418041;
  /* 11418035 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418038 je 0x1141803f */
  if (C.zf) goto L_1141803f;
  /* 1141803a add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1141803d jmp 0x11418031 */
  goto L_11418031;
L_1141803f:;
  /* 1141803f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11418041:;
  /* 11418041 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418043 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11418045 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11418048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141804b mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1141804e mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11418051 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11418053 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11418056 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1141805a lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11418060 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11418062 jmp 0x11418098 */
  goto L_11418098;
L_11418064:;
  /* 11418064 call 0x11417b9d */
  push32(0x11418069u); f_11417b9d();
  /* 11418069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1141806b je 0x11418096 */
  if (C.zf) goto L_11418096;
  /* 1141806d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11418070 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11418073 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11418077 mov dword ptr [0x1141ecf8], eax */
  w32((uint32_t)(0x1141ecf8), (EAX));
  /* 1141807c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1141807e mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11418083 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418085 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11418088 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1141808b sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1141808e lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11418094 jmp 0x11418098 */
  goto L_11418098;
L_11418096:;
  /* 11418096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11418098:;
  /* 11418098 pop edi */
  EDI = (pop32());
  /* 11418099 pop esi */
  ESI = (pop32());
  /* 1141809a pop ebx */
  EBX = (pop32());
  /* 1141809b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1141809c ret  */
  ESPCHK(0x11417e95u, _esp0);
  ESP += 4; return;
}

/* FUN_1000809d @ 0x1141809d (292 bytes, 125 insns) */
void f_1141809d(void) {
  FTRACE(0x1141809du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1141809d push ebp */
  push32((uint32_t)(EBP));
  /* 1141809e mov ebp, esp */
  EBP = (ESP);
  /* 114180a0 push ecx */
  push32((uint32_t)(ECX));
  /* 114180a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 114180a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 114180a7 push ebx */
  push32((uint32_t)(EBX));
  /* 114180a8 push esi */
  push32((uint32_t)(ESI));
  /* 114180a9 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 114180ac push edi */
  push32((uint32_t)(EDI));
  /* 114180ad mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 114180af lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 114180b5 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114180b7 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 114180ba mov eax, edi */
  EAX = (EDI);
  /* 114180bc mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 114180bf jb 0x114180e2 */
  if (C.cf) goto L_114180e2;
  /* 114180c1 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 114180c4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 114180c6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114180c8 jae 0x114180d1 */
  if (!C.cf) goto L_114180d1;
  /* 114180ca add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 114180cc sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 114180cf jmp 0x114180da */
  goto L_114180da;
L_114180d1:;
  /* 114180d1 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 114180d5 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 114180d8 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114180da:;
  /* 114180da lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 114180dd jmp 0x114181b0 */
  goto L_114181b0;
L_114180e2:;
  /* 114180e2 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114180e4 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114180e7 je 0x114180eb */
  if (C.zf) goto L_114180eb;
  /* 114180e9 mov eax, esi */
  EAX = (ESI);
L_114180eb:;
  /* 114180eb lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 114180ee cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114180f0 jae 0x11418135 */
  if (!C.cf) goto L_11418135;
L_114180f2:;
  /* 114180f2 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 114180f4 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 114180f6 jne 0x11418128 */
  if (!C.zf) goto L_11418128;
  /* 114180f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 114180fa lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 114180fd pop esi */
  ESI = (pop32());
L_114180fe:;
  /* 114180fe cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11418101 jne 0x11418107 */
  if (!C.zf) goto L_11418107;
  /* 11418103 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11418104 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11418105 jmp 0x114180fe */
  goto L_114180fe;
L_11418107:;
  /* 11418107 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418109 jae 0x11418159 */
  if (!C.cf) goto L_11418159;
  /* 1141810b cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141810e jne 0x11418115 */
  if (!C.zf) goto L_11418115;
  /* 11418110 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11418113 jmp 0x11418121 */
  goto L_11418121;
L_11418115:;
  /* 11418115 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11418118 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141811b jb 0x114181ba */
  if (C.cf) goto L_114181ba;
L_11418121:;
  /* 11418121 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11418124 mov eax, ebx */
  EAX = (EBX);
  /* 11418126 jmp 0x1141812d */
  goto L_1141812d;
L_11418128:;
  /* 11418128 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1141812b add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1141812d:;
  /* 1141812d lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11418130 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418133 jb 0x114180f2 */
  if (C.cf) goto L_114180f2;
L_11418135:;
  /* 11418135 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11418138:;
  /* 11418138 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141813a jae 0x114181ba */
  if (!C.cf) goto L_114181ba;
  /* 1141813c lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1141813f cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418142 jae 0x114181ba */
  if (!C.cf) goto L_114181ba;
  /* 11418144 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11418146 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11418148 jne 0x1141818a */
  if (!C.zf) goto L_1141818a;
  /* 1141814a push 1 */
  push32((uint32_t)(0x1u));
  /* 1141814c lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1141814f pop eax */
  EAX = (pop32());
L_11418150:;
  /* 11418150 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11418153 jne 0x1141817a */
  if (!C.zf) goto L_1141817a;
  /* 11418155 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11418156 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11418157 jmp 0x11418150 */
  goto L_11418150;
L_11418159:;
  /* 11418159 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1141815c cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141815f jae 0x1141816a */
  if (!C.cf) goto L_1141816a;
  /* 11418161 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11418163 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11418165 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11418168 jmp 0x11418173 */
  goto L_11418173;
L_1141816a:;
  /* 1141816a and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1141816e lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11418171 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11418173:;
  /* 11418173 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11418175 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11418178 jmp 0x114181b0 */
  goto L_114181b0;
L_1141817a:;
  /* 1141817a cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141817c jae 0x11418191 */
  if (!C.cf) goto L_11418191;
  /* 1141817e sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11418181 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418184 jb 0x114181ba */
  if (C.cf) goto L_114181ba;
  /* 11418186 mov esi, ebx */
  ESI = (EBX);
  /* 11418188 jmp 0x11418138 */
  goto L_11418138;
L_1141818a:;
  /* 1141818a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1141818d add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1141818f jmp 0x11418138 */
  goto L_11418138;
L_11418191:;
  /* 11418191 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11418194 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418197 jae 0x114181a2 */
  if (!C.cf) goto L_114181a2;
  /* 11418199 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1141819b mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1141819d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 114181a0 jmp 0x114181ab */
  goto L_114181ab;
L_114181a2:;
  /* 114181a2 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 114181a6 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 114181a9 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_114181ab:;
  /* 114181ab mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 114181ad lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_114181b0:;
  /* 114181b0 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114181b3 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 114181b6 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114181b8 jmp 0x114181bc */
  goto L_114181bc;
L_114181ba:;
  /* 114181ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114181bc:;
  /* 114181bc pop edi */
  EDI = (pop32());
  /* 114181bd pop esi */
  ESI = (pop32());
  /* 114181be pop ebx */
  EBX = (pop32());
  /* 114181bf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114181c0 ret  */
  ESPCHK(0x1141809du, _esp0);
  ESP += 4; return;
}

/* FUN_100081c1 @ 0x114181c1 (41 bytes, 12 insns) */
void f_114181c1(void) {
  FTRACE(0x114181c1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114181c1 push esi */
  push32((uint32_t)(ESI));
  /* 114181c2 mov esi, dword ptr [0x1141b004] */
  ESI = (r32((uint32_t)(0x1141b004)));
  /* 114181c8 push dword ptr [0x1141ed44] */
  push32((uint32_t)(r32((uint32_t)(0x1141ed44))));
  /* 114181ce call esi */
  call_ind((uint32_t)(ESI), 0x114181d0u);
  /* 114181d0 push dword ptr [0x1141ed34] */
  push32((uint32_t)(r32((uint32_t)(0x1141ed34))));
  /* 114181d6 call esi */
  call_ind((uint32_t)(ESI), 0x114181d8u);
  /* 114181d8 push dword ptr [0x1141ed24] */
  push32((uint32_t)(r32((uint32_t)(0x1141ed24))));
  /* 114181de call esi */
  call_ind((uint32_t)(ESI), 0x114181e0u);
  /* 114181e0 push dword ptr [0x1141ed04] */
  push32((uint32_t)(r32((uint32_t)(0x1141ed04))));
  /* 114181e6 call esi */
  call_ind((uint32_t)(ESI), 0x114181e8u);
  /* 114181e8 pop esi */
  ESI = (pop32());
  /* 114181e9 ret  */
  ESPCHK(0x114181c1u, _esp0);
  ESP += 4; return;
}

/* FUN_100081ea @ 0x114181ea (108 bytes, 34 insns) */
void f_114181ea(void) {
  FTRACE(0x114181eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114181ea push esi */
  push32((uint32_t)(ESI));
  /* 114181eb push edi */
  push32((uint32_t)(EDI));
  /* 114181ec mov edi, dword ptr [0x1141b0a8] */
  EDI = (r32((uint32_t)(0x1141b0a8)));
  /* 114181f2 mov esi, 0x1141ed00 */
  ESI = (0x1141ed00u);
L_114181f7:;
  /* 114181f7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 114181f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114181fb je 0x11418228 */
  if (C.zf) goto L_11418228;
  /* 114181fd cmp esi, 0x1141ed44 */
  { uint32_t _a=(ESI),_b=(0x1141ed44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418203 je 0x11418228 */
  if (C.zf) goto L_11418228;
  /* 11418205 cmp esi, 0x1141ed34 */
  { uint32_t _a=(ESI),_b=(0x1141ed34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141820b je 0x11418228 */
  if (C.zf) goto L_11418228;
  /* 1141820d cmp esi, 0x1141ed24 */
  { uint32_t _a=(ESI),_b=(0x1141ed24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418213 je 0x11418228 */
  if (C.zf) goto L_11418228;
  /* 11418215 cmp esi, 0x1141ed04 */
  { uint32_t _a=(ESI),_b=(0x1141ed04u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141821b je 0x11418228 */
  if (C.zf) goto L_11418228;
  /* 1141821d push eax */
  push32((uint32_t)(EAX));
  /* 1141821e call edi */
  call_ind((uint32_t)(EDI), 0x11418220u);
  /* 11418220 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11418222 call 0x114155cb */
  push32(0x11418227u); f_114155cb();
  /* 11418227 pop ecx */
  ECX = (pop32());
L_11418228:;
  /* 11418228 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1141822b cmp esi, 0x1141edc0 */
  { uint32_t _a=(ESI),_b=(0x1141edc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418231 jl 0x114181f7 */
  if ((C.sf!=C.of)) goto L_114181f7;
  /* 11418233 push dword ptr [0x1141ed24] */
  push32((uint32_t)(r32((uint32_t)(0x1141ed24))));
  /* 11418239 call edi */
  call_ind((uint32_t)(EDI), 0x1141823bu);
  /* 1141823b push dword ptr [0x1141ed34] */
  push32((uint32_t)(r32((uint32_t)(0x1141ed34))));
  /* 11418241 call edi */
  call_ind((uint32_t)(EDI), 0x11418243u);
  /* 11418243 push dword ptr [0x1141ed44] */
  push32((uint32_t)(r32((uint32_t)(0x1141ed44))));
  /* 11418249 call edi */
  call_ind((uint32_t)(EDI), 0x1141824bu);
  /* 1141824b push dword ptr [0x1141ed04] */
  push32((uint32_t)(r32((uint32_t)(0x1141ed04))));
  /* 11418251 call edi */
  call_ind((uint32_t)(EDI), 0x11418253u);
  /* 11418253 pop edi */
  EDI = (pop32());
  /* 11418254 pop esi */
  ESI = (pop32());
  /* 11418255 ret  */
  ESPCHK(0x114181eau, _esp0);
  ESP += 4; return;
}

/* FUN_10008256 @ 0x11418256 (97 bytes, 37 insns) */
void f_11418256(void) {
  FTRACE(0x11418256u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11418256 push ebp */
  push32((uint32_t)(EBP));
  /* 11418257 mov ebp, esp */
  EBP = (ESP);
  /* 11418259 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1141825c push esi */
  push32((uint32_t)(ESI));
  /* 1141825d cmp dword ptr [eax*4 + 0x1141ed00], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1141ed00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11418265 lea esi, [eax*4 + 0x1141ed00] */
  ESI = ((uint32_t)(EAX*4 + 0x1141ed00));
  /* 1141826c jne 0x114182ac */
  if (!C.zf) goto L_114182ac;
  /* 1141826e push edi */
  push32((uint32_t)(EDI));
  /* 1141826f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11418271 call 0x11416185 */
  push32(0x11418276u); f_11416185();
  /* 11418276 mov edi, eax */
  EDI = (EAX);
  /* 11418278 pop ecx */
  ECX = (pop32());
  /* 11418279 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1141827b jne 0x11418285 */
  if (!C.zf) goto L_11418285;
  /* 1141827d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1141827f call 0x11415598 */
  push32(0x11418284u); f_11415598();
  /* 11418284 pop ecx */
  ECX = (pop32());
L_11418285:;
  /* 11418285 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11418287 call 0x11418256 */
  push32(0x1141828cu); f_11418256();
  /* 1141828c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1141828f pop ecx */
  ECX = (pop32());
  /* 11418290 push edi */
  push32((uint32_t)(EDI));
  /* 11418291 jne 0x1141829d */
  if (!C.zf) goto L_1141829d;
  /* 11418293 call dword ptr [0x1141b004] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b004))), 0x11418299u);
  /* 11418299 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1141829b jmp 0x114182a3 */
  goto L_114182a3;
L_1141829d:;
  /* 1141829d call 0x114155cb */
  push32(0x114182a2u); f_114155cb();
  /* 114182a2 pop ecx */
  ECX = (pop32());
L_114182a3:;
  /* 114182a3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114182a5 call 0x114182b7 */
  push32(0x114182aau); f_114182b7();
  /* 114182aa pop ecx */
  ECX = (pop32());
  /* 114182ab pop edi */
  EDI = (pop32());
L_114182ac:;
  /* 114182ac push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 114182ae call dword ptr [0x1141b080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1141b080))), 0x114182b4u);
  /* 114182b4 pop esi */
  ESI = (pop32());
  /* 114182b5 pop ebp */
  EBP = (pop32());
  /* 114182b6 ret  */
  ESPCHK(0x11418256u, _esp0);
  ESP += 4; return;
}

