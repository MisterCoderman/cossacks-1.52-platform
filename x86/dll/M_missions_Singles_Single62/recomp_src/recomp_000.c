#include "recomp.h"

/* FUN_10001000 @ 0x11a41000 (20 bytes, 6 insns) */
void f_11a41000(void) {
  FTRACE(0x11a41000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a41004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a41005 jne 0x11a4100c */
  if (!C.zf) goto L_11a4100c;
  /* 11a41007 call 0x11a423d0 */
  push32(0x11a4100cu); f_11a423d0();
L_11a4100c:;
  /* 11a4100c mov eax, 1 */
  EAX = (0x1u);
  /* 11a41011 ret 0xc */
  ESPCHK(0x11a41000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001020 @ 0x11a41020 (475 bytes, 121 insns) */
void f_11a41020(void) {
  FTRACE(0x11a41020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41020 push ebx */
  push32((uint32_t)(EBX));
  /* 11a41021 push ebp */
  push32((uint32_t)(EBP));
  /* 11a41022 mov ebp, ecx */
  EBP = (ECX);
  /* 11a41024 mov eax, 0x64 */
  EAX = (0x64u);
  /* 11a41029 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a4102d mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11a41031 mov dword ptr [ebp + 0x323], eax */
  w32((uint32_t)(EBP + 0x323), (EAX));
  /* 11a41037 mov dword ptr [ebp + 0x32b], eax */
  w32((uint32_t)(EBP + 0x32b), (EAX));
  /* 11a4103d mov eax, 0x12c */
  EAX = (0x12cu);
  /* 11a41042 mov dword ptr [ebp + 0x2d4], ecx */
  w32((uint32_t)(EBP + 0x2d4), (ECX));
  /* 11a41048 mov dword ptr [ebp + 0x337], eax */
  w32((uint32_t)(EBP + 0x337), (EAX));
  /* 11a4104e mov dword ptr [ebp + 0x333], eax */
  w32((uint32_t)(EBP + 0x333), (EAX));
  /* 11a41054 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a41058 mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 11a4105c mov dword ptr [ebp + 0x2f7], eax */
  w32((uint32_t)(EBP + 0x2f7), (EAX));
  /* 11a41062 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 11a41066 mov dword ptr [ebp + 0x2dc], eax */
  w32((uint32_t)(EBP + 0x2dc), (EAX));
  /* 11a4106c mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a41070 mov dword ptr [ebp + 0x2fb], eax */
  w32((uint32_t)(EBP + 0x2fb), (EAX));
  /* 11a41076 mov eax, dword ptr [esp + 0x3c] */
  EAX = (r32((uint32_t)(ESP + 0x3c)));
  /* 11a4107a mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a4107e mov dword ptr [ebp + 0x2e0], ecx */
  w32((uint32_t)(EBP + 0x2e0), (ECX));
  /* 11a41084 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a41087 mov dword ptr [ebp + 0x2d8], edx */
  w32((uint32_t)(EBP + 0x2d8), (EDX));
  /* 11a4108d mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 11a41091 push esi */
  push32((uint32_t)(ESI));
  /* 11a41092 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a41095 mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a41099 mov dword ptr [ebp + 0x344], ecx */
  w32((uint32_t)(EBP + 0x344), (ECX));
  /* 11a4109f mov cl, byte ptr [esp + 0x20] */
  CL = (r8((uint32_t)(ESP + 0x20)));
  /* 11a410a3 mov dword ptr [ebp + 0x2e4], edx */
  w32((uint32_t)(EBP + 0x2e4), (EDX));
  /* 11a410a9 push edi */
  push32((uint32_t)(EDI));
  /* 11a410aa mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a410ae mov edx, 1 */
  EDX = (0x1u);
  /* 11a410b3 mov dword ptr [ebp + 0x2d0], eax */
  w32((uint32_t)(EBP + 0x2d0), (EAX));
  /* 11a410b9 mov byte ptr [ebp + 0x33b], cl */
  w8((uint32_t)(EBP + 0x33b), (CL));
  /* 11a410bf or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a410c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a410c4 mov dword ptr [ebp + 0x327], 0xc8 */
  w32((uint32_t)(EBP + 0x327), (0xc8u));
  /* 11a410ce mov dword ptr [ebp + 0x32f], 0x1f4 */
  w32((uint32_t)(EBP + 0x32f), (0x1f4u));
  /* 11a410d8 mov byte ptr [ebp + 0x348], dl */
  w8((uint32_t)(EBP + 0x348), (DL));
  /* 11a410de mov byte ptr [ebp + 0x349], dl */
  w8((uint32_t)(EBP + 0x349), (DL));
  /* 11a410e4 mov dword ptr [ebp + 0x33c], ebx */
  w32((uint32_t)(EBP + 0x33c), (EBX));
  /* 11a410ea mov dword ptr [ebp + 0x34e], edx */
  w32((uint32_t)(EBP + 0x34e), (EDX));
  /* 11a410f0 mov byte ptr [ebp + 0x352], dl */
  w8((uint32_t)(EBP + 0x352), (DL));
  /* 11a410f6 lea esi, [ebp + 0x2e8] */
  ESI = ((uint32_t)(EBP + 0x2e8));
  /* 11a410fc repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a410fe not ecx */
  ECX = (~(ECX));
  /* 11a41100 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a41102 mov dword ptr [esp + 0x18], esi */
  w32((uint32_t)(ESP + 0x18), (ESI));
  /* 11a41106 mov eax, ecx */
  EAX = (ECX);
  /* 11a41108 mov esi, edi */
  ESI = (EDI);
  /* 11a4110a mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11a4110e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a41111 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a41113 mov ecx, eax */
  ECX = (EAX);
  /* 11a41115 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a41119 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a4111c rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a4111e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a41120 mov dword ptr [ebp + 0x2ff], eax */
  w32((uint32_t)(EBP + 0x2ff), (EAX));
  /* 11a41126 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41128 mov dword ptr [ebp + 0x30f], 0x7d0 */
  w32((uint32_t)(EBP + 0x30f), (0x7d0u));
  /* 11a41132 mov dword ptr [ebp + 0x31f], esi */
  w32((uint32_t)(EBP + 0x31f), (ESI));
  /* 11a41138 mov dword ptr [ebp + 0x31b], esi */
  w32((uint32_t)(EBP + 0x31b), (ESI));
  /* 11a4113e mov dword ptr [ebp + 0x317], esi */
  w32((uint32_t)(EBP + 0x317), (ESI));
  /* 11a41144 mov dword ptr [ebp + 0x313], esi */
  w32((uint32_t)(EBP + 0x313), (ESI));
  /* 11a4114a mov dword ptr [ebp + 0x30b], esi */
  w32((uint32_t)(EBP + 0x30b), (ESI));
  /* 11a41150 je 0x11a411f4 */
  if (C.zf) goto L_11a411f4;
  /* 11a41156 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41158 je 0x11a41163 */
  if (C.zf) goto L_11a41163;
  /* 11a4115a cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4115c je 0x11a41163 */
  if (C.zf) goto L_11a41163;
  /* 11a4115e cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41161 jne 0x11a4119f */
  if (!C.zf) goto L_11a4119f;
L_11a41163:;
  /* 11a41163 lea edi, [ebp + 0x303] */
  EDI = ((uint32_t)(EBP + 0x303));
  /* 11a41169 push edi */
  push32((uint32_t)(EDI));
  /* 11a4116a call dword ptr [0x11a4a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a188))), 0x11a41170u);
  /* 11a41170 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11a41174 mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a41178 push esi */
  push32((uint32_t)(ESI));
  /* 11a41179 push ecx */
  push32((uint32_t)(ECX));
  /* 11a4117a push edx */
  push32((uint32_t)(EDX));
  /* 11a4117b push 0x11a4ef38 */
  push32((uint32_t)(0x11a4ef38u));
  /* 11a41180 push 0x11a4f700 */
  push32((uint32_t)(0x11a4f700u));
  /* 11a41185 push 0x11a4f2b8 */
  push32((uint32_t)(0x11a4f2b8u));
  /* 11a4118a call dword ptr [0x11a4a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a18c))), 0x11a41190u);
  /* 11a41190 push edi */
  push32((uint32_t)(EDI));
  /* 11a41191 push 0x11a4f2b8 */
  push32((uint32_t)(0x11a4f2b8u));
  /* 11a41196 call dword ptr [0x11a4a184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a184))), 0x11a4119cu);
  /* 11a4119c add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a4119f:;
  /* 11a4119f sub ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a411a1 je 0x11a411ba */
  if (C.zf) goto L_11a411ba;
  /* 11a411a3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a411a4 je 0x11a411ca */
  if (C.zf) goto L_11a411ca;
  /* 11a411a6 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a411a7 je 0x11a411da */
  if (C.zf) goto L_11a411da;
  /* 11a411a9 pop edi */
  EDI = (pop32());
  /* 11a411aa mov dword ptr [ebp + 0x340], 0xf */
  w32((uint32_t)(EBP + 0x340), (0xfu));
  /* 11a411b4 pop esi */
  ESI = (pop32());
  /* 11a411b5 pop ebp */
  EBP = (pop32());
  /* 11a411b6 pop ebx */
  EBX = (pop32());
  /* 11a411b7 ret 0x34 */
  ESPCHK(0x11a41020u, _esp0);
  ESP += 56; return;
L_11a411ba:;
  /* 11a411ba lea eax, [ebp + 0x303] */
  EAX = ((uint32_t)(EBP + 0x303));
  /* 11a411c0 push eax */
  push32((uint32_t)(EAX));
  /* 11a411c1 call dword ptr [0x11a4a194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a194))), 0x11a411c7u);
  /* 11a411c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a411ca:;
  /* 11a411ca lea ecx, [ebp + 0x303] */
  ECX = ((uint32_t)(EBP + 0x303));
  /* 11a411d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a411d1 call dword ptr [0x11a4a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a198))), 0x11a411d7u);
  /* 11a411d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a411da:;
  /* 11a411da lea edx, [ebp + 0x303] */
  EDX = ((uint32_t)(EBP + 0x303));
  /* 11a411e0 push edx */
  push32((uint32_t)(EDX));
  /* 11a411e1 call dword ptr [0x11a4a190] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a190))), 0x11a411e7u);
  /* 11a411e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a411ea mov dword ptr [ebp + 0x340], 0xf */
  w32((uint32_t)(EBP + 0x340), (0xfu));
L_11a411f4:;
  /* 11a411f4 pop edi */
  EDI = (pop32());
  /* 11a411f5 pop esi */
  ESI = (pop32());
  /* 11a411f6 pop ebp */
  EBP = (pop32());
  /* 11a411f7 pop ebx */
  EBX = (pop32());
  /* 11a411f8 ret 0x34 */
  ESPCHK(0x11a41020u, _esp0);
  ESP += 56; return;
}

/* FUN_10001200 @ 0x11a41200 (73 bytes, 15 insns) */
void f_11a41200(void) {
  FTRACE(0x11a41200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41200 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a41204 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a41208 mov dword ptr [ecx + 0x2d4], eax */
  w32((uint32_t)(ECX + 0x2d4), (EAX));
  /* 11a4120e mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a41212 mov dword ptr [ecx + 0x2d8], edx */
  w32((uint32_t)(ECX + 0x2d8), (EDX));
  /* 11a41218 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a4121c mov dword ptr [ecx + 0x2dc], eax */
  w32((uint32_t)(ECX + 0x2dc), (EAX));
  /* 11a41222 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a41226 mov dword ptr [ecx + 0x2e0], edx */
  w32((uint32_t)(ECX + 0x2e0), (EDX));
  /* 11a4122c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a41230 mov dword ptr [ecx + 0x2e4], eax */
  w32((uint32_t)(ECX + 0x2e4), (EAX));
  /* 11a41236 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a4123a mov dword ptr [ecx + 0x2d0], edx */
  w32((uint32_t)(ECX + 0x2d0), (EDX));
  /* 11a41240 mov dword ptr [ecx + 0x2fb], eax */
  w32((uint32_t)(ECX + 0x2fb), (EAX));
  /* 11a41246 ret 0x1c */
  ESPCHK(0x11a41200u, _esp0);
  ESP += 32; return;
}

/* FUN_10001250 @ 0x11a41250 (26 bytes, 9 insns) */
void f_11a41250(void) {
  FTRACE(0x11a41250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41250 push esi */
  push32((uint32_t)(ESI));
  /* 11a41251 mov esi, ecx */
  ESI = (ECX);
  /* 11a41253 cmp dword ptr [esi + 0x2ff], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2ff))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4125a jne 0x11a41268 */
  if (!C.zf) goto L_11a41268;
  /* 11a4125c call 0x11a41330 */
  push32(0x11a41261u); f_11a41330();
  /* 11a41261 mov ecx, esi */
  ECX = (ESI);
  /* 11a41263 call 0x11a414c0 */
  push32(0x11a41268u); f_11a414c0();
L_11a41268:;
  /* 11a41268 pop esi */
  ESI = (pop32());
  /* 11a41269 ret  */
  ESPCHK(0x11a41250u, _esp0);
  ESP += 4; return;
}

/* FUN_10001270 @ 0x11a41270 (178 bytes, 43 insns) */
void f_11a41270(void) {
  FTRACE(0x11a41270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41270 mov edx, 0x12c */
  EDX = (0x12cu);
  /* 11a41275 mov eax, 0x64 */
  EAX = (0x64u);
  /* 11a4127a mov dword ptr [ecx + 0x337], edx */
  w32((uint32_t)(ECX + 0x337), (EDX));
  /* 11a41280 mov dword ptr [ecx + 0x333], edx */
  w32((uint32_t)(ECX + 0x333), (EDX));
  /* 11a41286 mov edx, dword ptr [ecx + 0x2ff] */
  EDX = (r32((uint32_t)(ECX + 0x2ff)));
  /* 11a4128c mov dword ptr [ecx + 0x323], eax */
  w32((uint32_t)(ECX + 0x323), (EAX));
  /* 11a41292 cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41295 mov dword ptr [ecx + 0x32b], eax */
  w32((uint32_t)(ECX + 0x32b), (EAX));
  /* 11a4129b mov dword ptr [ecx + 0x327], 0xc8 */
  w32((uint32_t)(ECX + 0x327), (0xc8u));
  /* 11a412a5 mov dword ptr [ecx + 0x32f], 0x1f4 */
  w32((uint32_t)(ECX + 0x32f), (0x1f4u));
  /* 11a412af jne 0x11a41321 */
  if (!C.zf) goto L_11a41321;
  /* 11a412b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a412b2 mov ebx, dword ptr [ecx + 0x30f] */
  EBX = (r32((uint32_t)(ECX + 0x30f)));
  /* 11a412b8 push esi */
  push32((uint32_t)(ESI));
  /* 11a412b9 mov esi, dword ptr [ecx + 0x30b] */
  ESI = (r32((uint32_t)(ECX + 0x30b)));
  /* 11a412bf push edi */
  push32((uint32_t)(EDI));
  /* 11a412c0 mov edi, dword ptr [ecx + 0x313] */
  EDI = (r32((uint32_t)(ECX + 0x313)));
  /* 11a412c6 mov edx, 0xc */
  EDX = (0xcu);
L_11a412cb:;
  /* 11a412cb cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a412cd jle 0x11a412d6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a412d6;
  /* 11a412cf add dword ptr [ecx + 0x323], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x323))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x323), (_r)); fl_add(_a,_b,_r,32); }
L_11a412d6:;
  /* 11a412d6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a412d8 jle 0x11a412e1 */
  if ((C.zf||C.sf!=C.of)) goto L_11a412e1;
  /* 11a412da add dword ptr [ecx + 0x32b], -8 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x32b))),_b=(0xfffffff8u),_r=_a+_b; w32((uint32_t)(ECX + 0x32b), (_r)); fl_add(_a,_b,_r,32); }
L_11a412e1:;
  /* 11a412e1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a412e3 jle 0x11a412ec */
  if ((C.zf||C.sf!=C.of)) goto L_11a412ec;
  /* 11a412e5 add dword ptr [ecx + 0x327], -0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x327))),_b=(0xfffffff0u),_r=_a+_b; w32((uint32_t)(ECX + 0x327), (_r)); fl_add(_a,_b,_r,32); }
L_11a412ec:;
  /* 11a412ec cmp dword ptr [ecx + 0x31b], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x31b))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a412f2 jle 0x11a412fb */
  if ((C.zf||C.sf!=C.of)) goto L_11a412fb;
  /* 11a412f4 add dword ptr [ecx + 0x333], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x333))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x333), (_r)); fl_add(_a,_b,_r,32); }
L_11a412fb:;
  /* 11a412fb cmp dword ptr [ecx + 0x31f], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x31f))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41301 jle 0x11a4130a */
  if ((C.zf||C.sf!=C.of)) goto L_11a4130a;
  /* 11a41303 add dword ptr [ecx + 0x337], -0x18 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x337))),_b=(0xffffffe8u),_r=_a+_b; w32((uint32_t)(ECX + 0x337), (_r)); fl_add(_a,_b,_r,32); }
L_11a4130a:;
  /* 11a4130a cmp dword ptr [ecx + 0x317], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x317))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41310 jle 0x11a41319 */
  if ((C.zf||C.sf!=C.of)) goto L_11a41319;
  /* 11a41312 add dword ptr [ecx + 0x32f], -0x28 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x32f))),_b=(0xffffffd8u),_r=_a+_b; w32((uint32_t)(ECX + 0x32f), (_r)); fl_add(_a,_b,_r,32); }
L_11a41319:;
  /* 11a41319 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4131b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a4131c jne 0x11a412cb */
  if (!C.zf) goto L_11a412cb;
  /* 11a4131e pop edi */
  EDI = (pop32());
  /* 11a4131f pop esi */
  ESI = (pop32());
  /* 11a41320 pop ebx */
  EBX = (pop32());
L_11a41321:;
  /* 11a41321 ret  */
  ESPCHK(0x11a41270u, _esp0);
  ESP += 4; return;
}

/* FUN_10001330 @ 0x11a41330 (363 bytes, 101 insns) [1 switch table(s)] */
void f_11a41330(void) {
  FTRACE(0x11a41330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41330 push ebx */
  push32((uint32_t)(EBX));
  /* 11a41331 push ebp */
  push32((uint32_t)(EBP));
  /* 11a41332 push esi */
  push32((uint32_t)(ESI));
  /* 11a41333 push edi */
  push32((uint32_t)(EDI));
  /* 11a41334 mov esi, ecx */
  ESI = (ECX);
  /* 11a41336 call 0x11a415a0 */
  push32(0x11a4133bu); f_11a415a0();
  /* 11a4133b mov ebp, eax */
  EBP = (EAX);
  /* 11a4133d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a4133f test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11a41341 mov dword ptr [esi + 0x340], ebp */
  w32((uint32_t)(ESI + 0x340), (EBP));
  /* 11a41347 jle 0x11a41459 */
  if ((C.zf||C.sf!=C.of)) goto L_11a41459;
  /* 11a4134d mov edi, 5 */
  EDI = (0x5u);
L_11a41352:;
  /* 11a41352 mov cl, byte ptr [esi + 0x348] */
  CL = (r8((uint32_t)(ESI + 0x348)));
  /* 11a41358 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11a4135a je 0x11a41459 */
  if (C.zf) goto L_11a41459;
  /* 11a41360 mov ebx, dword ptr [esi + 0x34a] */
  EBX = (r32((uint32_t)(ESI + 0x34a)));
  /* 11a41366 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a41368 jle 0x11a41450 */
  if ((C.zf||C.sf!=C.of)) goto L_11a41450;
  /* 11a4136e mov edx, dword ptr [esi + 0x30b] */
  EDX = (r32((uint32_t)(ESI + 0x30b)));
  /* 11a41374 cmp edx, edi */
  { uint32_t _a=(EDX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41376 jge 0x11a4139c */
  if ((C.sf==C.of)) goto L_11a4139c;
  /* 11a41378 cmp dword ptr [esi + 0x313], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x313))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4137e jge 0x11a4139c */
  if ((C.sf==C.of)) goto L_11a4139c;
  /* 11a41380 cmp dword ptr [esi + 0x317], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x317))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41386 jge 0x11a4139c */
  if ((C.sf==C.of)) goto L_11a4139c;
  /* 11a41388 cmp dword ptr [esi + 0x31f], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x31f))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4138e jge 0x11a4139c */
  if ((C.sf==C.of)) goto L_11a4139c;
  /* 11a41390 cmp dword ptr [esi + 0x31b], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x31b))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41396 jl 0x11a41450 */
  if ((C.sf!=C.of)) goto L_11a41450;
L_11a4139c:;
  /* 11a4139c mov ecx, dword ptr [esi + 0x33c] */
  ECX = (r32((uint32_t)(ESI + 0x33c)));
  /* 11a413a2 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a413a4 ja 0x11a413e2 */
  if ((!C.cf&&!C.zf)) goto L_11a413e2;
  /* 11a413a6 jmp dword ptr [ecx*4 + 0x11a4149c] */
  switch (ECX) {
    case 0: goto L_11a413ad;
    case 1: goto L_11a413c1;
    case 2: goto L_11a413b8;
    case 3: goto L_11a413dc;
    case 4: goto L_11a413ca;
    case 5: goto L_11a413d3;
    default: x86_unimpl("switch@0x11a413a6 out of table"); return;
  }
L_11a413ad:;
  /* 11a413ad add edx, 0x19 */
  { uint32_t _a=(EDX),_b=(0x19u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a413b0 mov dword ptr [esi + 0x30b], edx */
  w32((uint32_t)(ESI + 0x30b), (EDX));
  /* 11a413b6 jmp 0x11a413e2 */
  goto L_11a413e2;
L_11a413b8:;
  /* 11a413b8 add dword ptr [esi + 0x313], 0x19 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x313))),_b=(0x19u),_r=_a+_b; w32((uint32_t)(ESI + 0x313), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a413bf jmp 0x11a413e2 */
  goto L_11a413e2;
L_11a413c1:;
  /* 11a413c1 add dword ptr [esi + 0x30f], 0x14 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30f))),_b=(0x14u),_r=_a+_b; w32((uint32_t)(ESI + 0x30f), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a413c8 jmp 0x11a413e2 */
  goto L_11a413e2;
L_11a413ca:;
  /* 11a413ca add dword ptr [esi + 0x31b], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x31b))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x31b), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a413d1 jmp 0x11a413e2 */
  goto L_11a413e2;
L_11a413d3:;
  /* 11a413d3 add dword ptr [esi + 0x31f], 0xf */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x31f))),_b=(0xfu),_r=_a+_b; w32((uint32_t)(ESI + 0x31f), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a413da jmp 0x11a413e2 */
  goto L_11a413e2;
L_11a413dc:;
  /* 11a413dc add dword ptr [esi + 0x317], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x317))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI + 0x317), (_r)); fl_add(_a,_b,_r,32); }
L_11a413e2:;
  /* 11a413e2 mov ecx, dword ptr [esi + 0x30b] */
  ECX = (r32((uint32_t)(ESI + 0x30b)));
  /* 11a413e8 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a413ea jl 0x11a413f7 */
  if ((C.sf!=C.of)) goto L_11a413f7;
  /* 11a413ec add ecx, -5 */
  { uint32_t _a=(ECX),_b=(0xfffffffbu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a413ef mov dword ptr [esi + 0x30b], ecx */
  w32((uint32_t)(ESI + 0x30b), (ECX));
  /* 11a413f5 jmp 0x11a41449 */
  goto L_11a41449;
L_11a413f7:;
  /* 11a413f7 mov ecx, dword ptr [esi + 0x313] */
  ECX = (r32((uint32_t)(ESI + 0x313)));
  /* 11a413fd cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a413ff jl 0x11a4140c */
  if ((C.sf!=C.of)) goto L_11a4140c;
  /* 11a41401 add ecx, -5 */
  { uint32_t _a=(ECX),_b=(0xfffffffbu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41404 mov dword ptr [esi + 0x313], ecx */
  w32((uint32_t)(ESI + 0x313), (ECX));
  /* 11a4140a jmp 0x11a41449 */
  goto L_11a41449;
L_11a4140c:;
  /* 11a4140c mov ecx, dword ptr [esi + 0x317] */
  ECX = (r32((uint32_t)(ESI + 0x317)));
  /* 11a41412 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41414 jl 0x11a41421 */
  if ((C.sf!=C.of)) goto L_11a41421;
  /* 11a41416 add ecx, -2 */
  { uint32_t _a=(ECX),_b=(0xfffffffeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41419 mov dword ptr [esi + 0x317], ecx */
  w32((uint32_t)(ESI + 0x317), (ECX));
  /* 11a4141f jmp 0x11a41449 */
  goto L_11a41449;
L_11a41421:;
  /* 11a41421 mov ecx, dword ptr [esi + 0x31b] */
  ECX = (r32((uint32_t)(ESI + 0x31b)));
  /* 11a41427 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41429 jl 0x11a41436 */
  if ((C.sf!=C.of)) goto L_11a41436;
  /* 11a4142b add ecx, -3 */
  { uint32_t _a=(ECX),_b=(0xfffffffdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4142e mov dword ptr [esi + 0x31b], ecx */
  w32((uint32_t)(ESI + 0x31b), (ECX));
  /* 11a41434 jmp 0x11a41449 */
  goto L_11a41449;
L_11a41436:;
  /* 11a41436 mov ecx, dword ptr [esi + 0x31f] */
  ECX = (r32((uint32_t)(ESI + 0x31f)));
  /* 11a4143c cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4143e jl 0x11a41449 */
  if ((C.sf!=C.of)) goto L_11a41449;
  /* 11a41440 add ecx, -3 */
  { uint32_t _a=(ECX),_b=(0xfffffffdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41443 mov dword ptr [esi + 0x31f], ecx */
  w32((uint32_t)(ESI + 0x31f), (ECX));
L_11a41449:;
  /* 11a41449 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a4144a mov dword ptr [esi + 0x34a], ebx */
  w32((uint32_t)(ESI + 0x34a), (EBX));
L_11a41450:;
  /* 11a41450 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a41451 cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41453 jl 0x11a41352 */
  if ((C.sf!=C.of)) goto L_11a41352;
L_11a41459:;
  /* 11a41459 mov ecx, dword ptr [esi + 0x34e] */
  ECX = (r32((uint32_t)(ESI + 0x34e)));
  /* 11a4145f mov eax, 3 */
  EAX = (0x3u);
  /* 11a41464 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a41466 imul ecx, ebp */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a41469 imul eax, ebp */
  { int64_t _p=(int64_t)(int32_t)(EBP)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a4146c mov edx, dword ptr [esi + 0x34a] */
  EDX = (r32((uint32_t)(ESI + 0x34a)));
  /* 11a41472 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41473 mov cl, byte ptr [esi + 0x33b] */
  CL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a41479 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4147b dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11a4147d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4147f push ecx */
  push32((uint32_t)(ECX));
  /* 11a41480 mov dword ptr [esi + 0x34a], edx */
  w32((uint32_t)(ESI + 0x34a), (EDX));
  /* 11a41486 call dword ptr [0x11a4a178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a178))), 0x11a4148cu);
  /* 11a4148c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4148f mov ecx, esi */
  ECX = (ESI);
  /* 11a41491 call 0x11a41270 */
  push32(0x11a41496u); f_11a41270();
  /* 11a41496 pop edi */
  EDI = (pop32());
  /* 11a41497 pop esi */
  ESI = (pop32());
  /* 11a41498 pop ebp */
  EBP = (pop32());
  /* 11a41499 pop ebx */
  EBX = (pop32());
  /* 11a4149a ret  */
  ESPCHK(0x11a41330u, _esp0);
  ESP += 4; return;
}

/* FUN_100014c0 @ 0x11a414c0 (224 bytes, 57 insns) */
void f_11a414c0(void) {
  FTRACE(0x11a414c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a414c0 push esi */
  push32((uint32_t)(ESI));
  /* 11a414c1 mov esi, ecx */
  ESI = (ECX);
  /* 11a414c3 cmp dword ptr [esi + 0x34a], 0x3e8 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x34a))),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a414cd jle 0x11a4159e */
  if ((C.zf||C.sf!=C.of)) goto L_11a4159e;
  /* 11a414d3 call 0x11a415a0 */
  push32(0x11a414d8u); f_11a415a0();
  /* 11a414d8 cmp eax, dword ptr [esi + 0x344] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x344))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a414de jge 0x11a4159e */
  if ((C.sf==C.of)) goto L_11a4159e;
  /* 11a414e4 mov ecx, esi */
  ECX = (ESI);
  /* 11a414e6 call 0x11a415a0 */
  push32(0x11a414ebu); f_11a415a0();
  /* 11a414eb mov dword ptr [esi + 0x340], eax */
  w32((uint32_t)(ESI + 0x340), (EAX));
  /* 11a414f1 mov eax, dword ptr [esi + 0x33c] */
  EAX = (r32((uint32_t)(ESI + 0x33c)));
  /* 11a414f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a414f9 je 0x11a41505 */
  if (C.zf) goto L_11a41505;
  /* 11a414fb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a414fe je 0x11a41505 */
  if (C.zf) goto L_11a41505;
  /* 11a41500 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41503 jne 0x11a4157f */
  if (!C.zf) goto L_11a4157f;
L_11a41505:;
  /* 11a41505 mov eax, dword ptr [esi + 0x2fb] */
  EAX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a4150b mov cl, byte ptr [esi + 0x33b] */
  CL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a41511 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41513 push eax */
  push32((uint32_t)(EAX));
  /* 11a41514 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41515 push 0x11a4ef38 */
  push32((uint32_t)(0x11a4ef38u));
  /* 11a4151a push 0x11a4eab0 */
  push32((uint32_t)(0x11a4eab0u));
  /* 11a4151f push 0x11a4f2b8 */
  push32((uint32_t)(0x11a4f2b8u));
  /* 11a41524 call dword ptr [0x11a4a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a18c))), 0x11a4152au);
  /* 11a4152a mov eax, dword ptr [esi + 0x33c] */
  EAX = (r32((uint32_t)(ESI + 0x33c)));
  /* 11a41530 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41533 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a41536 je 0x11a41540 */
  if (C.zf) goto L_11a41540;
  /* 11a41538 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a41539 je 0x11a4154e */
  if (C.zf) goto L_11a4154e;
  /* 11a4153b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a4153c je 0x11a4155c */
  if (C.zf) goto L_11a4155c;
  /* 11a4153e jmp 0x11a4156a */
  goto L_11a4156a;
L_11a41540:;
  /* 11a41540 push 0x11a4f2b8 */
  push32((uint32_t)(0x11a4f2b8u));
  /* 11a41545 call dword ptr [0x11a4a194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a194))), 0x11a4154bu);
  /* 11a4154b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a4154e:;
  /* 11a4154e push 0x11a4f2b8 */
  push32((uint32_t)(0x11a4f2b8u));
  /* 11a41553 call dword ptr [0x11a4a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a198))), 0x11a41559u);
  /* 11a41559 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a4155c:;
  /* 11a4155c push 0x11a4f2b8 */
  push32((uint32_t)(0x11a4f2b8u));
  /* 11a41561 call dword ptr [0x11a4a190] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a190))), 0x11a41567u);
  /* 11a41567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a4156a:;
  /* 11a4156a lea edx, [esi + 0x303] */
  EDX = ((uint32_t)(ESI + 0x303));
  /* 11a41570 push edx */
  push32((uint32_t)(EDX));
  /* 11a41571 push 0x11a4f2b8 */
  push32((uint32_t)(0x11a4f2b8u));
  /* 11a41576 call dword ptr [0x11a4a184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a184))), 0x11a4157cu);
  /* 11a4157c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a4157f:;
  /* 11a4157f mov ecx, dword ptr [esi + 0x34a] */
  ECX = (r32((uint32_t)(ESI + 0x34a)));
  /* 11a41585 mov eax, dword ptr [esi + 0x340] */
  EAX = (r32((uint32_t)(ESI + 0x340)));
  /* 11a4158b add ecx, 0xfffffc18 */
  { uint32_t _a=(ECX),_b=(0xfffffc18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41591 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a41592 mov dword ptr [esi + 0x34a], ecx */
  w32((uint32_t)(ESI + 0x34a), (ECX));
  /* 11a41598 mov dword ptr [esi + 0x340], eax */
  w32((uint32_t)(ESI + 0x340), (EAX));
L_11a4159e:;
  /* 11a4159e pop esi */
  ESI = (pop32());
  /* 11a4159f ret  */
  ESPCHK(0x11a414c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100015a0 @ 0x11a415a0 (17 bytes, 5 insns) */
void f_11a415a0(void) {
  FTRACE(0x11a415a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a415a0 add ecx, 0x303 */
  { uint32_t _a=(ECX),_b=(0x303u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a415a6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a415a7 call dword ptr [0x11a4a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a180))), 0x11a415adu);
  /* 11a415ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a415b0 ret  */
  ESPCHK(0x11a415a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100015c0 @ 0x11a415c0 (265 bytes, 79 insns) [1 switch table(s)] */
void f_11a415c0(void) {
  FTRACE(0x11a415c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a415c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a415c1 push esi */
  push32((uint32_t)(ESI));
  /* 11a415c2 mov esi, ecx */
  ESI = (ECX);
  /* 11a415c4 push edi */
  push32((uint32_t)(EDI));
  /* 11a415c5 mov eax, dword ptr [esi + 0x2ff] */
  EAX = (r32((uint32_t)(ESI + 0x2ff)));
  /* 11a415cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a415cd je 0x11a416c3 */
  if (C.zf) goto L_11a416c3;
  /* 11a415d3 mov al, byte ptr [esi + 0x349] */
  AL = (r8((uint32_t)(ESI + 0x349)));
  /* 11a415d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a415db je 0x11a416c3 */
  if (C.zf) goto L_11a416c3;
  /* 11a415e1 mov al, byte ptr [esi + 0x352] */
  AL = (r8((uint32_t)(ESI + 0x352)));
  /* 11a415e7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a415eb mov ebp, dword ptr [0x11a4a16c] */
  EBP = (r32((uint32_t)(0x11a4a16c)));
  /* 11a415f1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a415f3 je 0x11a41686 */
  if (C.zf) goto L_11a41686;
  /* 11a415f9 mov eax, dword ptr [esi + 0x2fb] */
  EAX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a415ff push edi */
  push32((uint32_t)(EDI));
  /* 11a41600 push 0x11a4f6d8 */
  push32((uint32_t)(0x11a4f6d8u));
  /* 11a41605 push eax */
  push32((uint32_t)(EAX));
  /* 11a41606 call ebp */
  call_ind((uint32_t)(EBP), 0x11a41608u);
  /* 11a41608 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4160b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4160d jne 0x11a41625 */
  if (!C.zf) goto L_11a41625;
  /* 11a4160f mov ecx, dword ptr [esi + 0x2fb] */
  ECX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a41615 push edi */
  push32((uint32_t)(EDI));
  /* 11a41616 push 0x11a4f6d0 */
  push32((uint32_t)(0x11a4f6d0u));
  /* 11a4161b push ecx */
  push32((uint32_t)(ECX));
  /* 11a4161c call ebp */
  call_ind((uint32_t)(EBP), 0x11a4161eu);
  /* 11a4161e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41621 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a41623 je 0x11a41686 */
  if (C.zf) goto L_11a41686;
L_11a41625:;
  /* 11a41625 cmp dword ptr [esi + 0x2ff], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2ff))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4162c jne 0x11a41686 */
  if (!C.zf) goto L_11a41686;
  /* 11a4162e push 0x11a4b060 */
  push32((uint32_t)(0x11a4b060u));
  /* 11a41633 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41635 push 0x11a4b058 */
  push32((uint32_t)(0x11a4b058u));
  /* 11a4163a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a4163c call dword ptr [0x11a4a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a17c))), 0x11a41642u);
  /* 11a41642 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41645 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41648 ja 0x11a41686 */
  if ((!C.cf&&!C.zf)) goto L_11a41686;
  /* 11a4164a jmp dword ptr [eax*4 + 0x11a416cc] */
  switch (EAX) {
    case 0: goto L_11a41651;
    case 1: goto L_11a41661;
    case 2: goto L_11a41670;
    case 3: goto L_11a4167f;
    default: x86_unimpl("switch@0x11a4164a out of table"); return;
  }
L_11a41651:;
  /* 11a41651 mov ecx, esi */
  ECX = (ESI);
  /* 11a41653 call 0x11a416e0 */
  push32(0x11a41658u); f_11a416e0();
  /* 11a41658 mov byte ptr [esi + 0x352], 1 */
  w8((uint32_t)(ESI + 0x352), (0x1u));
  /* 11a4165f jmp 0x11a41686 */
  goto L_11a41686;
L_11a41661:;
  /* 11a41661 mov ecx, esi */
  ECX = (ESI);
  /* 11a41663 call 0x11a41790 */
  push32(0x11a41668u); f_11a41790();
  /* 11a41668 mov byte ptr [esi + 0x352], al */
  w8((uint32_t)(ESI + 0x352), (AL));
  /* 11a4166e jmp 0x11a41686 */
  goto L_11a41686;
L_11a41670:;
  /* 11a41670 mov ecx, esi */
  ECX = (ESI);
  /* 11a41672 call 0x11a417c0 */
  push32(0x11a41677u); f_11a417c0();
  /* 11a41677 mov byte ptr [esi + 0x352], al */
  w8((uint32_t)(ESI + 0x352), (AL));
  /* 11a4167d jmp 0x11a41686 */
  goto L_11a41686;
L_11a4167f:;
  /* 11a4167f mov byte ptr [esi + 0x352], 0 */
  w8((uint32_t)(ESI + 0x352), (0x0u));
L_11a41686:;
  /* 11a41686 mov al, byte ptr [esi + 0x352] */
  AL = (r8((uint32_t)(ESI + 0x352)));
  /* 11a4168c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4168e jne 0x11a416c3 */
  if (!C.zf) goto L_11a416c3;
  /* 11a41690 mov edx, dword ptr [esi + 0x2fb] */
  EDX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a41696 push edi */
  push32((uint32_t)(EDI));
  /* 11a41697 push 0x11a4f6d8 */
  push32((uint32_t)(0x11a4f6d8u));
  /* 11a4169c push edx */
  push32((uint32_t)(EDX));
  /* 11a4169d call ebp */
  call_ind((uint32_t)(EBP), 0x11a4169fu);
  /* 11a4169f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a416a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a416a4 jne 0x11a416c3 */
  if (!C.zf) goto L_11a416c3;
  /* 11a416a6 mov eax, dword ptr [esi + 0x2fb] */
  EAX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a416ac push edi */
  push32((uint32_t)(EDI));
  /* 11a416ad push 0x11a4f6d0 */
  push32((uint32_t)(0x11a4f6d0u));
  /* 11a416b2 push eax */
  push32((uint32_t)(EAX));
  /* 11a416b3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a416b5u);
  /* 11a416b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a416b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a416ba jne 0x11a416c3 */
  if (!C.zf) goto L_11a416c3;
  /* 11a416bc mov byte ptr [esi + 0x352], 1 */
  w8((uint32_t)(ESI + 0x352), (0x1u));
L_11a416c3:;
  /* 11a416c3 pop edi */
  EDI = (pop32());
  /* 11a416c4 pop esi */
  ESI = (pop32());
  /* 11a416c5 pop ebp */
  EBP = (pop32());
  /* 11a416c6 ret 4 */
  ESPCHK(0x11a415c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100016e0 @ 0x11a416e0 (165 bytes, 46 insns) */
void f_11a416e0(void) {
  FTRACE(0x11a416e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a416e0 push esi */
  push32((uint32_t)(ESI));
  /* 11a416e1 mov esi, ecx */
  ESI = (ECX);
  /* 11a416e3 cmp dword ptr [esi + 0x2ff], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x2ff))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a416ea jne 0x11a41783 */
  if (!C.zf) goto L_11a41783;
  /* 11a416f0 call 0x11a415a0 */
  push32(0x11a416f5u); f_11a415a0();
  /* 11a416f5 mov edx, dword ptr [esi + 0x34a] */
  EDX = (r32((uint32_t)(ESI + 0x34a)));
  /* 11a416fb mov ecx, dword ptr [esi + 0x34e] */
  ECX = (r32((uint32_t)(ESI + 0x34e)));
  /* 11a41701 push eax */
  push32((uint32_t)(EAX));
  /* 11a41702 push edx */
  push32((uint32_t)(EDX));
  /* 11a41703 mov edx, ecx */
  EDX = (ECX);
  /* 11a41705 push eax */
  push32((uint32_t)(EAX));
  /* 11a41706 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a41709 push edx */
  push32((uint32_t)(EDX));
  /* 11a4170a mov edx, 3 */
  EDX = (0x3u);
  /* 11a4170f sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a41711 mov ecx, dword ptr [esi + 0x31b] */
  ECX = (r32((uint32_t)(ESI + 0x31b)));
  /* 11a41717 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a4171a mov eax, dword ptr [esi + 0x31f] */
  EAX = (r32((uint32_t)(ESI + 0x31f)));
  /* 11a41720 push edx */
  push32((uint32_t)(EDX));
  /* 11a41721 mov edx, dword ptr [esi + 0x317] */
  EDX = (r32((uint32_t)(ESI + 0x317)));
  /* 11a41727 push eax */
  push32((uint32_t)(EAX));
  /* 11a41728 mov eax, dword ptr [esi + 0x313] */
  EAX = (r32((uint32_t)(ESI + 0x313)));
  /* 11a4172e push 0x11a4f78c */
  push32((uint32_t)(0x11a4f78cu));
  /* 11a41733 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41734 mov ecx, dword ptr [esi + 0x30f] */
  ECX = (r32((uint32_t)(ESI + 0x30f)));
  /* 11a4173a push 0x11a4f778 */
  push32((uint32_t)(0x11a4f778u));
  /* 11a4173f push edx */
  push32((uint32_t)(EDX));
  /* 11a41740 mov edx, dword ptr [esi + 0x30b] */
  EDX = (r32((uint32_t)(ESI + 0x30b)));
  /* 11a41746 push 0x11a4f764 */
  push32((uint32_t)(0x11a4f764u));
  /* 11a4174b push eax */
  push32((uint32_t)(EAX));
  /* 11a4174c mov eax, dword ptr [esi + 0x33c] */
  EAX = (r32((uint32_t)(ESI + 0x33c)));
  /* 11a41752 push 0x11a4f750 */
  push32((uint32_t)(0x11a4f750u));
  /* 11a41757 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41758 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a4175b push 0x11a4f73c */
  push32((uint32_t)(0x11a4f73cu));
  /* 11a41760 push edx */
  push32((uint32_t)(EDX));
  /* 11a41761 push 0x11a4f728 */
  push32((uint32_t)(0x11a4f728u));
  /* 11a41766 lea ecx, [eax*4 + 0x11a4f728] */
  ECX = ((uint32_t)(EAX*4 + 0x11a4f728));
  /* 11a4176d add esi, 0x2e8 */
  { uint32_t _a=(ESI),_b=(0x2e8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41773 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41774 push esi */
  push32((uint32_t)(ESI));
  /* 11a41775 push 0x11a4b078 */
  push32((uint32_t)(0x11a4b078u));
  /* 11a4177a call dword ptr [0x11a4a174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a174))), 0x11a41780u);
  /* 11a41780 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a41783:;
  /* 11a41783 pop esi */
  ESI = (pop32());
  /* 11a41784 ret  */
  ESPCHK(0x11a416e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001790 @ 0x11a41790 (36 bytes, 12 insns) */
void f_11a41790(void) {
  FTRACE(0x11a41790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41790 push esi */
  push32((uint32_t)(ESI));
  /* 11a41791 push 0x11a4b088 */
  push32((uint32_t)(0x11a4b088u));
  /* 11a41796 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41798 push 0x11a4b080 */
  push32((uint32_t)(0x11a4b080u));
  /* 11a4179d mov esi, ecx */
  ESI = (ECX);
  /* 11a4179f push 9 */
  push32((uint32_t)(0x9u));
  /* 11a417a1 call dword ptr [0x11a4a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a17c))), 0x11a417a7u);
  /* 11a417a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a417aa mov dword ptr [esi + 0x34e], eax */
  w32((uint32_t)(ESI + 0x34e), (EAX));
  /* 11a417b0 mov al, 1 */
  AL = (0x1u);
  /* 11a417b2 pop esi */
  ESI = (pop32());
  /* 11a417b3 ret  */
  ESPCHK(0x11a41790u, _esp0);
  ESP += 4; return;
}

/* FUN_100017c0 @ 0x11a417c0 (74 bytes, 29 insns) */
void f_11a417c0(void) {
  FTRACE(0x11a417c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a417c0 push esi */
  push32((uint32_t)(ESI));
  /* 11a417c1 mov esi, dword ptr [0x11a4a17c] */
  ESI = (r32((uint32_t)(0x11a4a17c)));
  /* 11a417c7 push edi */
  push32((uint32_t)(EDI));
  /* 11a417c8 mov edi, ecx */
  EDI = (ECX);
L_11a417ca:;
  /* 11a417ca cmp dword ptr [edi + 0x2ff], 1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x2ff))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a417d1 jne 0x11a417ca */
  if (!C.zf) goto L_11a417ca;
  /* 11a417d3 push 0x11a4b0ac */
  push32((uint32_t)(0x11a4b0acu));
  /* 11a417d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a417da push 0x11a4b0a4 */
  push32((uint32_t)(0x11a4b0a4u));
  /* 11a417df push 9 */
  push32((uint32_t)(0x9u));
  /* 11a417e1 call esi */
  call_ind((uint32_t)(ESI), 0x11a417e3u);
  /* 11a417e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a417e6 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a417e9 je 0x11a417fc */
  if (C.zf) goto L_11a417fc;
  /* 11a417eb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a417ec je 0x11a417f3 */
  if (C.zf) goto L_11a417f3;
  /* 11a417ee dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a417ef je 0x11a41805 */
  if (C.zf) goto L_11a41805;
  /* 11a417f1 jmp 0x11a417ca */
  goto L_11a417ca;
L_11a417f3:;
  /* 11a417f3 mov ecx, edi */
  ECX = (EDI);
  /* 11a417f5 call 0x11a41940 */
  push32(0x11a417fau); f_11a41940();
  /* 11a417fa jmp 0x11a417ca */
  goto L_11a417ca;
L_11a417fc:;
  /* 11a417fc mov ecx, edi */
  ECX = (EDI);
  /* 11a417fe call 0x11a41810 */
  push32(0x11a41803u); f_11a41810();
  /* 11a41803 jmp 0x11a417ca */
  goto L_11a417ca;
L_11a41805:;
  /* 11a41805 pop edi */
  EDI = (pop32());
  /* 11a41806 mov al, 1 */
  AL = (0x1u);
  /* 11a41808 pop esi */
  ESI = (pop32());
  /* 11a41809 ret  */
  ESPCHK(0x11a417c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001810 @ 0x11a41810 (245 bytes, 83 insns) [2 switch table(s)] */
void f_11a41810(void) {
  FTRACE(0x11a41810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41810 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41811 push ebx */
  push32((uint32_t)(EBX));
  /* 11a41812 push ebp */
  push32((uint32_t)(EBP));
  /* 11a41813 push esi */
  push32((uint32_t)(ESI));
  /* 11a41814 mov esi, dword ptr [0x11a4a17c] */
  ESI = (r32((uint32_t)(0x11a4a17c)));
  /* 11a4181a push edi */
  push32((uint32_t)(EDI));
  /* 11a4181b push 0x11a4b0dc */
  push32((uint32_t)(0x11a4b0dcu));
  /* 11a41820 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41822 push 0x11a4b0d4 */
  push32((uint32_t)(0x11a4b0d4u));
  /* 11a41827 mov ebx, ecx */
  EBX = (ECX);
  /* 11a41829 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a4182b call esi */
  call_ind((uint32_t)(ESI), 0x11a4182du);
  /* 11a4182d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41830 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41833 ja 0x11a41863 */
  if ((!C.cf&&!C.zf)) goto L_11a41863;
  /* 11a41835 jmp dword ptr [eax*4 + 0x11a41908] */
  switch (EAX) {
    case 0: goto L_11a4183c;
    case 1: goto L_11a41840;
    case 2: goto L_11a41847;
    case 3: goto L_11a4184e;
    case 4: goto L_11a41855;
    case 5: goto L_11a4185c;
    case 6: goto L_11a41886;
    case 7: goto L_11a4188a;
    case 8: goto L_11a41891;
    case 9: goto L_11a41898;
    case 10: goto L_11a4189f;
    case 11: goto L_11a418a6;
    default: x86_unimpl("switch@0x11a41835 out of table"); return;
  }
L_11a4183c:;
  /* 11a4183c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a4183e jmp 0x11a41867 */
  goto L_11a41867;
L_11a41840:;
  /* 11a41840 mov edi, 1 */
  EDI = (0x1u);
  /* 11a41845 jmp 0x11a41867 */
  goto L_11a41867;
L_11a41847:;
  /* 11a41847 mov edi, 2 */
  EDI = (0x2u);
  /* 11a4184c jmp 0x11a41867 */
  goto L_11a41867;
L_11a4184e:;
  /* 11a4184e mov edi, 3 */
  EDI = (0x3u);
  /* 11a41853 jmp 0x11a41867 */
  goto L_11a41867;
L_11a41855:;
  /* 11a41855 mov edi, 4 */
  EDI = (0x4u);
  /* 11a4185a jmp 0x11a41867 */
  goto L_11a41867;
L_11a4185c:;
  /* 11a4185c mov edi, 5 */
  EDI = (0x5u);
  /* 11a41861 jmp 0x11a41867 */
  goto L_11a41867;
L_11a41863:;
  /* 11a41863 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11a41867:;
  /* 11a41867 push 0x11a4b0dc */
  push32((uint32_t)(0x11a4b0dcu));
  /* 11a4186c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4186e push 0x11a4b0cc */
  push32((uint32_t)(0x11a4b0ccu));
  /* 11a41873 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a41875 call esi */
  call_ind((uint32_t)(ESI), 0x11a41877u);
  /* 11a41877 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4187a cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4187d ja 0x11a418ad */
  if ((!C.cf&&!C.zf)) goto L_11a418ad;
  /* 11a4187f jmp dword ptr [eax*4 + 0x11a41920] */
  switch (EAX) {
    case 0: goto L_11a41886;
    case 1: goto L_11a4188a;
    case 2: goto L_11a41891;
    case 3: goto L_11a41898;
    case 4: goto L_11a4189f;
    case 5: goto L_11a418a6;
    default: x86_unimpl("switch@0x11a4187f out of table"); return;
  }
L_11a41886:;
  /* 11a41886 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a41888 jmp 0x11a418b1 */
  goto L_11a418b1;
L_11a4188a:;
  /* 11a4188a mov esi, 1 */
  ESI = (0x1u);
  /* 11a4188f jmp 0x11a418b1 */
  goto L_11a418b1;
L_11a41891:;
  /* 11a41891 mov esi, 2 */
  ESI = (0x2u);
  /* 11a41896 jmp 0x11a418b1 */
  goto L_11a418b1;
L_11a41898:;
  /* 11a41898 mov esi, 3 */
  ESI = (0x3u);
  /* 11a4189d jmp 0x11a418b1 */
  goto L_11a418b1;
L_11a4189f:;
  /* 11a4189f mov esi, 4 */
  ESI = (0x4u);
  /* 11a418a4 jmp 0x11a418b1 */
  goto L_11a418b1;
L_11a418a6:;
  /* 11a418a6 mov esi, 5 */
  ESI = (0x5u);
  /* 11a418ab jmp 0x11a418b1 */
  goto L_11a418b1;
L_11a418ad:;
  /* 11a418ad mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_11a418b1:;
  /* 11a418b1 mov ecx, ebx */
  ECX = (EBX);
  /* 11a418b3 call 0x11a41270 */
  push32(0x11a418b8u); f_11a41270();
  /* 11a418b8 push edi */
  push32((uint32_t)(EDI));
  /* 11a418b9 mov ecx, ebx */
  ECX = (EBX);
  /* 11a418bb call 0x11a42060 */
  push32(0x11a418c0u); f_11a42060();
  /* 11a418c0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a418c3 push esi */
  push32((uint32_t)(ESI));
  /* 11a418c4 mov ecx, ebx */
  ECX = (EBX);
  /* 11a418c6 lea ebp, [eax + eax*4] */
  EBP = ((uint32_t)(EAX + EAX*4));
  /* 11a418c9 shl ebp, 2 */
  EBP = (sh_shl((uint32_t)(EBP), (0x2u)&0x1f, 32));
  /* 11a418cc call 0x11a42060 */
  push32(0x11a418d1u); f_11a42060();
  /* 11a418d1 mov ecx, eax */
  ECX = (EAX);
  /* 11a418d3 mov eax, ebp */
  EAX = (EBP);
  /* 11a418d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a418d6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a418d8 lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 11a418db lea ecx, [edi + edi*4] */
  ECX = ((uint32_t)(EDI + EDI*4));
  /* 11a418de push eax */
  push32((uint32_t)(EAX));
  /* 11a418df lea eax, [edx*4 + 0x11a4f728] */
  EAX = ((uint32_t)(EDX*4 + 0x11a4f728));
  /* 11a418e6 push eax */
  push32((uint32_t)(EAX));
  /* 11a418e7 lea edx, [ecx*4 + 0x11a4f728] */
  EDX = ((uint32_t)(ECX*4 + 0x11a4f728));
  /* 11a418ee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a418f0 push edx */
  push32((uint32_t)(EDX));
  /* 11a418f1 push 0x11a4b0c0 */
  push32((uint32_t)(0x11a4b0c0u));
  /* 11a418f6 call dword ptr [0x11a4a174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a174))), 0x11a418fcu);
  /* 11a418fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a418ff pop edi */
  EDI = (pop32());
  /* 11a41900 pop esi */
  ESI = (pop32());
  /* 11a41901 pop ebp */
  EBP = (pop32());
  /* 11a41902 pop ebx */
  EBX = (pop32());
  /* 11a41903 pop ecx */
  ECX = (pop32());
  /* 11a41904 ret  */
  ESPCHK(0x11a41810u, _esp0);
  ESP += 4; return;
}

/* FUN_10001940 @ 0x11a41940 (314 bytes, 113 insns) */
void f_11a41940(void) {
  FTRACE(0x11a41940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41940 push ebx */
  push32((uint32_t)(EBX));
  /* 11a41941 mov ebx, dword ptr [0x11a4a17c] */
  EBX = (r32((uint32_t)(0x11a4a17c)));
  /* 11a41947 push esi */
  push32((uint32_t)(ESI));
  /* 11a41948 push edi */
  push32((uint32_t)(EDI));
  /* 11a41949 push 0x11a4b13c */
  push32((uint32_t)(0x11a4b13cu));
  /* 11a4194e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41950 push 0x11a4b130 */
  push32((uint32_t)(0x11a4b130u));
  /* 11a41955 mov esi, ecx */
  ESI = (ECX);
  /* 11a41957 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a41959 call ebx */
  call_ind((uint32_t)(EBX), 0x11a4195bu);
  /* 11a4195b push 0x11a4b11c */
  push32((uint32_t)(0x11a4b11cu));
  /* 11a41960 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41962 push 0x11a4b110 */
  push32((uint32_t)(0x11a4b110u));
  /* 11a41967 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a41969 mov edi, eax */
  EDI = (EAX);
  /* 11a4196b call ebx */
  call_ind((uint32_t)(EBX), 0x11a4196du);
  /* 11a4196d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41970 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a41973 je 0x11a41a18 */
  if (C.zf) goto L_11a41a18;
  /* 11a41979 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a4197a je 0x11a419ce */
  if (C.zf) goto L_11a419ce;
  /* 11a4197c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a4197d jne 0x11a41a76 */
  if (!C.zf) goto L_11a41a76;
  /* 11a41983 lea eax, [edi + edi*8] */
  EAX = ((uint32_t)(EDI + EDI*8));
  /* 11a41986 lea esi, [esi + eax*8] */
  ESI = ((uint32_t)(ESI + EAX*8));
  /* 11a41989 push esi */
  push32((uint32_t)(ESI));
  /* 11a4198a call dword ptr [0x11a4a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a180))), 0x11a41990u);
  /* 11a41990 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a41995 je 0x11a419bc */
  if (C.zf) goto L_11a419bc;
  /* 11a41997 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41999 push esi */
  push32((uint32_t)(ESI));
  /* 11a4199a call dword ptr [0x11a4a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a168))), 0x11a419a0u);
  /* 11a419a0 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11a419a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a419a4 call dword ptr [0x11a4a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a160))), 0x11a419aau);
  /* 11a419aa push 0x11a4b108 */
  push32((uint32_t)(0x11a4b108u));
  /* 11a419af call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a419b5u);
  /* 11a419b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a419b8 pop edi */
  EDI = (pop32());
  /* 11a419b9 pop esi */
  ESI = (pop32());
  /* 11a419ba pop ebx */
  EBX = (pop32());
  /* 11a419bb ret  */
  ESPCHK(0x11a41940u, _esp0);
  ESP += 4; return;
L_11a419bc:;
  /* 11a419bc push 0x11a4b100 */
  push32((uint32_t)(0x11a4b100u));
  /* 11a419c1 call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a419c7u);
  /* 11a419c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a419ca pop edi */
  EDI = (pop32());
  /* 11a419cb pop esi */
  ESI = (pop32());
  /* 11a419cc pop ebx */
  EBX = (pop32());
  /* 11a419cd ret  */
  ESPCHK(0x11a41940u, _esp0);
  ESP += 4; return;
L_11a419ce:;
  /* 11a419ce lea edx, [edi + edi*8] */
  EDX = ((uint32_t)(EDI + EDI*8));
  /* 11a419d1 lea ebx, [esi + edx*8] */
  EBX = ((uint32_t)(ESI + EDX*8));
  /* 11a419d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a419d5 call dword ptr [0x11a4a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a180))), 0x11a419dbu);
  /* 11a419db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a419de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a419e0 jne 0x11a41a0c */
  if (!C.zf) goto L_11a41a0c;
  /* 11a419e2 mov eax, dword ptr [esi + 0x2fb] */
  EAX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a419e8 mov cl, byte ptr [esi + 0x33b] */
  CL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a419ee mov edx, dword ptr [esi + 0x2f7] */
  EDX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 11a419f4 push eax */
  push32((uint32_t)(EAX));
  /* 11a419f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a419f6 mov ecx, dword ptr [esi + 0x2ff] */
  ECX = (r32((uint32_t)(ESI + 0x2ff)));
  /* 11a419fc lea eax, [esi + 0x2e8] */
  EAX = ((uint32_t)(ESI + 0x2e8));
  /* 11a41a02 push edx */
  push32((uint32_t)(EDX));
  /* 11a41a03 push eax */
  push32((uint32_t)(EAX));
  /* 11a41a04 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41a05 mov ecx, ebx */
  ECX = (EBX);
  /* 11a41a07 call 0x11a421d0 */
  push32(0x11a41a0cu); f_11a421d0();
L_11a41a0c:;
  /* 11a41a0c push edi */
  push32((uint32_t)(EDI));
  /* 11a41a0d mov ecx, esi */
  ECX = (ESI);
  /* 11a41a0f call 0x11a41a80 */
  push32(0x11a41a14u); f_11a41a80();
  /* 11a41a14 pop edi */
  EDI = (pop32());
  /* 11a41a15 pop esi */
  ESI = (pop32());
  /* 11a41a16 pop ebx */
  EBX = (pop32());
  /* 11a41a17 ret  */
  ESPCHK(0x11a41940u, _esp0);
  ESP += 4; return;
L_11a41a18:;
  /* 11a41a18 lea edx, [edi + edi*8] */
  EDX = ((uint32_t)(EDI + EDI*8));
  /* 11a41a1b lea esi, [esi + edx*8] */
  ESI = ((uint32_t)(ESI + EDX*8));
  /* 11a41a1e push esi */
  push32((uint32_t)(ESI));
  /* 11a41a1f call dword ptr [0x11a4a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a180))), 0x11a41a25u);
  /* 11a41a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a41a2a je 0x11a41a68 */
  if (C.zf) goto L_11a41a68;
  /* 11a41a2c mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a41a2f mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a41a32 mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 11a41a35 add esi, 0x29 */
  { uint32_t _a=(ESI),_b=(0x29u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41a38 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a41a3b lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a41a3e push edx */
  push32((uint32_t)(EDX));
  /* 11a41a3f mov edx, dword ptr [esi - 0x1c] */
  EDX = (r32((uint32_t)(ESI + -0x1c)));
  /* 11a41a42 lea eax, [eax*4 + 0x11a4f728] */
  EAX = ((uint32_t)(EAX*4 + 0x11a4f728));
  /* 11a41a49 lea ecx, [ecx*4 + 0x11a4f728] */
  ECX = ((uint32_t)(ECX*4 + 0x11a4f728));
  /* 11a41a50 push eax */
  push32((uint32_t)(EAX));
  /* 11a41a51 push edx */
  push32((uint32_t)(EDX));
  /* 11a41a52 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41a53 push eax */
  push32((uint32_t)(EAX));
  /* 11a41a54 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41a55 push esi */
  push32((uint32_t)(ESI));
  /* 11a41a56 push 0x11a4b0f8 */
  push32((uint32_t)(0x11a4b0f8u));
  /* 11a41a5b call dword ptr [0x11a4a174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a174))), 0x11a41a61u);
  /* 11a41a61 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41a64 pop edi */
  EDI = (pop32());
  /* 11a41a65 pop esi */
  ESI = (pop32());
  /* 11a41a66 pop ebx */
  EBX = (pop32());
  /* 11a41a67 ret  */
  ESPCHK(0x11a41940u, _esp0);
  ESP += 4; return;
L_11a41a68:;
  /* 11a41a68 push 0x11a4b0f0 */
  push32((uint32_t)(0x11a4b0f0u));
  /* 11a41a6d call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a41a73u);
  /* 11a41a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a41a76:;
  /* 11a41a76 pop edi */
  EDI = (pop32());
  /* 11a41a77 pop esi */
  ESI = (pop32());
  /* 11a41a78 pop ebx */
  EBX = (pop32());
  /* 11a41a79 ret  */
  ESPCHK(0x11a41940u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a80 @ 0x11a41a80 (224 bytes, 73 insns) [2 switch table(s)] */
void f_11a41a80(void) {
  FTRACE(0x11a41a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41a80 push ebx */
  push32((uint32_t)(EBX));
  /* 11a41a81 push ebp */
  push32((uint32_t)(EBP));
  /* 11a41a82 push esi */
  push32((uint32_t)(ESI));
  /* 11a41a83 push edi */
  push32((uint32_t)(EDI));
  /* 11a41a84 mov edi, ecx */
  EDI = (ECX);
  /* 11a41a86 mov esi, dword ptr [0x11a4a17c] */
  ESI = (r32((uint32_t)(0x11a4a17c)));
  /* 11a41a8c mov eax, dword ptr [edi + 0x2d0] */
  EAX = (r32((uint32_t)(EDI + 0x2d0)));
  /* 11a41a92 push eax */
  push32((uint32_t)(EAX));
  /* 11a41a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41a95 push 0x11a4b17c */
  push32((uint32_t)(0x11a4b17cu));
  /* 11a41a9a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a41a9c call esi */
  call_ind((uint32_t)(ESI), 0x11a41a9eu);
  /* 11a41a9e push 0x11a4b0dc */
  push32((uint32_t)(0x11a4b0dcu));
  /* 11a41aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41aa5 push 0x11a4b0d4 */
  push32((uint32_t)(0x11a4b0d4u));
  /* 11a41aaa push 9 */
  push32((uint32_t)(0x9u));
  /* 11a41aac mov ebp, eax */
  EBP = (EAX);
  /* 11a41aae call esi */
  call_ind((uint32_t)(ESI), 0x11a41ab0u);
  /* 11a41ab0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41ab3 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41ab6 ja 0x11a41ae6 */
  if ((!C.cf&&!C.zf)) goto L_11a41ae6;
  /* 11a41ab8 jmp dword ptr [eax*4 + 0x11a41b60] */
  switch (EAX) {
    case 0: goto L_11a41abf;
    case 1: goto L_11a41ac3;
    case 2: goto L_11a41aca;
    case 3: goto L_11a41ad1;
    case 4: goto L_11a41ad8;
    case 5: goto L_11a41adf;
    case 6: goto L_11a41b09;
    case 7: goto L_11a41b0d;
    case 8: goto L_11a41b14;
    case 9: goto L_11a41b1b;
    case 10: goto L_11a41b22;
    case 11: goto L_11a41b29;
    default: x86_unimpl("switch@0x11a41ab8 out of table"); return;
  }
L_11a41abf:;
  /* 11a41abf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a41ac1 jmp 0x11a41aea */
  goto L_11a41aea;
L_11a41ac3:;
  /* 11a41ac3 mov ebx, 1 */
  EBX = (0x1u);
  /* 11a41ac8 jmp 0x11a41aea */
  goto L_11a41aea;
L_11a41aca:;
  /* 11a41aca mov ebx, 2 */
  EBX = (0x2u);
  /* 11a41acf jmp 0x11a41aea */
  goto L_11a41aea;
L_11a41ad1:;
  /* 11a41ad1 mov ebx, 3 */
  EBX = (0x3u);
  /* 11a41ad6 jmp 0x11a41aea */
  goto L_11a41aea;
L_11a41ad8:;
  /* 11a41ad8 mov ebx, 4 */
  EBX = (0x4u);
  /* 11a41add jmp 0x11a41aea */
  goto L_11a41aea;
L_11a41adf:;
  /* 11a41adf mov ebx, 5 */
  EBX = (0x5u);
  /* 11a41ae4 jmp 0x11a41aea */
  goto L_11a41aea;
L_11a41ae6:;
  /* 11a41ae6 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
L_11a41aea:;
  /* 11a41aea push 0x11a4b0dc */
  push32((uint32_t)(0x11a4b0dcu));
  /* 11a41aef push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41af1 push 0x11a4b0cc */
  push32((uint32_t)(0x11a4b0ccu));
  /* 11a41af6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a41af8 call esi */
  call_ind((uint32_t)(ESI), 0x11a41afau);
  /* 11a41afa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41afd cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41b00 ja 0x11a41b30 */
  if ((!C.cf&&!C.zf)) goto L_11a41b30;
  /* 11a41b02 jmp dword ptr [eax*4 + 0x11a41b78] */
  switch (EAX) {
    case 0: goto L_11a41b09;
    case 1: goto L_11a41b0d;
    case 2: goto L_11a41b14;
    case 3: goto L_11a41b1b;
    case 4: goto L_11a41b22;
    case 5: goto L_11a41b29;
    default: x86_unimpl("switch@0x11a41b02 out of table"); return;
  }
L_11a41b09:;
  /* 11a41b09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a41b0b jmp 0x11a41b34 */
  goto L_11a41b34;
L_11a41b0d:;
  /* 11a41b0d mov ecx, 1 */
  ECX = (0x1u);
  /* 11a41b12 jmp 0x11a41b34 */
  goto L_11a41b34;
L_11a41b14:;
  /* 11a41b14 mov ecx, 2 */
  ECX = (0x2u);
  /* 11a41b19 jmp 0x11a41b34 */
  goto L_11a41b34;
L_11a41b1b:;
  /* 11a41b1b mov ecx, 3 */
  ECX = (0x3u);
  /* 11a41b20 jmp 0x11a41b34 */
  goto L_11a41b34;
L_11a41b22:;
  /* 11a41b22 mov ecx, 4 */
  ECX = (0x4u);
  /* 11a41b27 jmp 0x11a41b34 */
  goto L_11a41b34;
L_11a41b29:;
  /* 11a41b29 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a41b2e jmp 0x11a41b34 */
  goto L_11a41b34;
L_11a41b30:;
  /* 11a41b30 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
L_11a41b34:;
  /* 11a41b34 mov eax, dword ptr [edi + ebp*4 + 0x2d4] */
  EAX = (r32((uint32_t)(EDI + EBP*4 + 0x2d4)));
  /* 11a41b3b push ecx */
  push32((uint32_t)(ECX));
  /* 11a41b3c push ebx */
  push32((uint32_t)(EBX));
  /* 11a41b3d mov ecx, dword ptr [eax + 0x2f7] */
  ECX = (r32((uint32_t)(EAX + 0x2f7)));
  /* 11a41b43 add eax, 0x2e8 */
  { uint32_t _a=(EAX),_b=(0x2e8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41b48 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41b49 push eax */
  push32((uint32_t)(EAX));
  /* 11a41b4a mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11a41b4e lea edx, [eax + eax*8] */
  EDX = ((uint32_t)(EAX + EAX*8));
  /* 11a41b51 lea ecx, [edi + edx*8] */
  ECX = ((uint32_t)(EDI + EDX*8));
  /* 11a41b54 call 0x11a42240 */
  push32(0x11a41b59u); f_11a42240();
  /* 11a41b59 pop edi */
  EDI = (pop32());
  /* 11a41b5a pop esi */
  ESI = (pop32());
  /* 11a41b5b pop ebp */
  EBP = (pop32());
  /* 11a41b5c pop ebx */
  EBX = (pop32());
  /* 11a41b5d ret 4 */
  ESPCHK(0x11a41a80u, _esp0);
  ESP += 8; return;
}

/* FUN_10001b90 @ 0x11a41b90 (327 bytes, 126 insns) */
void f_11a41b90(void) {
  FTRACE(0x11a41b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41b90 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41b91 push ebx */
  push32((uint32_t)(EBX));
  /* 11a41b92 push ebp */
  push32((uint32_t)(EBP));
  /* 11a41b93 push esi */
  push32((uint32_t)(ESI));
  /* 11a41b94 push edi */
  push32((uint32_t)(EDI));
  /* 11a41b95 mov edi, ecx */
  EDI = (ECX);
  /* 11a41b97 mov al, byte ptr [edi + 0x349] */
  AL = (r8((uint32_t)(EDI + 0x349)));
  /* 11a41b9d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a41b9f je 0x11a41ccf */
  if (C.zf) goto L_11a41ccf;
  /* 11a41ba5 mov al, byte ptr [edi + 0x33b] */
  AL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a41bab mov ecx, dword ptr [edi + 0x2fb] */
  ECX = (r32((uint32_t)(EDI + 0x2fb)));
  /* 11a41bb1 push eax */
  push32((uint32_t)(EAX));
  /* 11a41bb2 push 0x11a4f300 */
  push32((uint32_t)(0x11a4f300u));
  /* 11a41bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41bb8 call dword ptr [0x11a4a16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a16c))), 0x11a41bbeu);
  /* 11a41bbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a41bc3 je 0x11a41ccf */
  if (C.zf) goto L_11a41ccf;
  /* 11a41bc9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a41bcb mov ebx, edi */
  EBX = (EDI);
L_11a41bcd:;
  /* 11a41bcd mov al, byte ptr [ebx + 0x19] */
  AL = (r8((uint32_t)(EBX + 0x19)));
  /* 11a41bd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a41bd2 jne 0x11a41be9 */
  if (!C.zf) goto L_11a41be9;
  /* 11a41bd4 mov edx, dword ptr [edi + 0x2fb] */
  EDX = (r32((uint32_t)(EDI + 0x2fb)));
  /* 11a41bda push ebx */
  push32((uint32_t)(EBX));
  /* 11a41bdb push edx */
  push32((uint32_t)(EDX));
  /* 11a41bdc call dword ptr [0x11a4a164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a164))), 0x11a41be2u);
  /* 11a41be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41be5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a41be7 jne 0x11a41c50 */
  if (!C.zf) goto L_11a41c50;
L_11a41be9:;
  /* 11a41be9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a41bea add ebx, 0x48 */
  { uint32_t _a=(EBX),_b=(0x48u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41bed cmp esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41bf0 jl 0x11a41bcd */
  if ((C.sf!=C.of)) goto L_11a41bcd;
  /* 11a41bf2 mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 11a41bfa lea ebp, [edi + 0x2d4] */
  EBP = ((uint32_t)(EDI + 0x2d4));
L_11a41c00:;
  /* 11a41c00 cmp dword ptr [ebp], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41c04 je 0x11a41c37 */
  if (C.zf) goto L_11a41c37;
  /* 11a41c06 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a41c08 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a41c0a:;
  /* 11a41c0a mov eax, dword ptr [ebp] */
  EAX = (r32((uint32_t)(EBP)));
  /* 11a41c0d add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41c0f mov cl, byte ptr [eax + 0x19] */
  CL = (r8((uint32_t)(EAX + 0x19)));
  /* 11a41c12 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11a41c14 je 0x11a41c2b */
  if (C.zf) goto L_11a41c2b;
  /* 11a41c16 mov ecx, dword ptr [edi + 0x2fb] */
  ECX = (r32((uint32_t)(EDI + 0x2fb)));
  /* 11a41c1c push eax */
  push32((uint32_t)(EAX));
  /* 11a41c1d push ecx */
  push32((uint32_t)(ECX));
  /* 11a41c1e call dword ptr [0x11a4a164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a164))), 0x11a41c24u);
  /* 11a41c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a41c29 jne 0x11a41c83 */
  if (!C.zf) goto L_11a41c83;
L_11a41c2b:;
  /* 11a41c2b add esi, 0x48 */
  { uint32_t _a=(ESI),_b=(0x48u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41c2e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a41c2f cmp esi, 0x2d0 */
  { uint32_t _a=(ESI),_b=(0x2d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41c35 jl 0x11a41c0a */
  if ((C.sf!=C.of)) goto L_11a41c0a;
L_11a41c37:;
  /* 11a41c37 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a41c3b add ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41c3e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a41c3f cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41c42 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a41c46 jl 0x11a41c00 */
  if ((C.sf!=C.of)) goto L_11a41c00;
  /* 11a41c48 pop edi */
  EDI = (pop32());
  /* 11a41c49 pop esi */
  ESI = (pop32());
  /* 11a41c4a pop ebp */
  EBP = (pop32());
  /* 11a41c4b xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a41c4d pop ebx */
  EBX = (pop32());
  /* 11a41c4e pop ecx */
  ECX = (pop32());
  /* 11a41c4f ret  */
  ESPCHK(0x11a41b90u, _esp0);
  ESP += 4; return;
L_11a41c50:;
  /* 11a41c50 lea eax, [esi + esi*8] */
  EAX = ((uint32_t)(ESI + ESI*8));
  /* 11a41c53 mov ecx, edi */
  ECX = (EDI);
  /* 11a41c55 lea esi, [edi + eax*8] */
  ESI = ((uint32_t)(EDI + EAX*8));
  /* 11a41c58 push esi */
  push32((uint32_t)(ESI));
  /* 11a41c59 mov byte ptr [esi + 0x19], 1 */
  w8((uint32_t)(ESI + 0x19), (0x1u));
  /* 11a41c5d call 0x11a41ce0 */
  push32(0x11a41c62u); f_11a41ce0();
  /* 11a41c62 push esi */
  push32((uint32_t)(ESI));
  /* 11a41c63 mov ecx, edi */
  ECX = (EDI);
  /* 11a41c65 call 0x11a41d20 */
  push32(0x11a41c6au); f_11a41d20();
  /* 11a41c6a mov ecx, dword ptr [esi + 0x3c] */
  ECX = (r32((uint32_t)(ESI + 0x3c)));
  /* 11a41c6d mov edx, dword ptr [esi + 0x38] */
  EDX = (r32((uint32_t)(ESI + 0x38)));
  /* 11a41c70 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41c71 push edx */
  push32((uint32_t)(EDX));
  /* 11a41c72 push esi */
  push32((uint32_t)(ESI));
  /* 11a41c73 call 0x11a437f0 */
  push32(0x11a41c78u); f_11a437f0();
  /* 11a41c78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41c7b mov al, 1 */
  AL = (0x1u);
  /* 11a41c7d pop edi */
  EDI = (pop32());
  /* 11a41c7e pop esi */
  ESI = (pop32());
  /* 11a41c7f pop ebp */
  EBP = (pop32());
  /* 11a41c80 pop ebx */
  EBX = (pop32());
  /* 11a41c81 pop ecx */
  ECX = (pop32());
  /* 11a41c82 ret  */
  ESPCHK(0x11a41b90u, _esp0);
  ESP += 4; return;
L_11a41c83:;
  /* 11a41c83 lea esi, [ebx + ebx*8] */
  ESI = ((uint32_t)(EBX + EBX*8));
  /* 11a41c86 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a41c8a shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a41c8d mov edx, dword ptr [edi + ebx*4 + 0x2d4] */
  EDX = (r32((uint32_t)(EDI + EBX*4 + 0x2d4)));
  /* 11a41c94 mov ecx, edi */
  ECX = (EDI);
  /* 11a41c96 mov byte ptr [edx + esi + 0x19], 0 */
  w8((uint32_t)(EDX + ESI*1 + 0x19), (0x0u));
  /* 11a41c9b mov eax, dword ptr [edi + ebx*4 + 0x2d4] */
  EAX = (r32((uint32_t)(EDI + EBX*4 + 0x2d4)));
  /* 11a41ca2 push eax */
  push32((uint32_t)(EAX));
  /* 11a41ca3 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41ca5 push eax */
  push32((uint32_t)(EAX));
  /* 11a41ca6 call 0x11a41d90 */
  push32(0x11a41cabu); f_11a41d90();
  /* 11a41cab mov ecx, dword ptr [edi + ebx*4 + 0x2d4] */
  ECX = (r32((uint32_t)(EDI + EBX*4 + 0x2d4)));
  /* 11a41cb2 mov edx, dword ptr [ecx + esi + 0x38] */
  EDX = (r32((uint32_t)(ECX + ESI*1 + 0x38)));
  /* 11a41cb6 lea eax, [ecx + esi] */
  EAX = ((uint32_t)(ECX + ESI*1));
  /* 11a41cb9 push edx */
  push32((uint32_t)(EDX));
  /* 11a41cba mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11a41cbd push ecx */
  push32((uint32_t)(ECX));
  /* 11a41cbe push eax */
  push32((uint32_t)(EAX));
  /* 11a41cbf call 0x11a437f0 */
  push32(0x11a41cc4u); f_11a437f0();
  /* 11a41cc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41cc7 mov al, 1 */
  AL = (0x1u);
  /* 11a41cc9 pop edi */
  EDI = (pop32());
  /* 11a41cca pop esi */
  ESI = (pop32());
  /* 11a41ccb pop ebp */
  EBP = (pop32());
  /* 11a41ccc pop ebx */
  EBX = (pop32());
  /* 11a41ccd pop ecx */
  ECX = (pop32());
  /* 11a41cce ret  */
  ESPCHK(0x11a41b90u, _esp0);
  ESP += 4; return;
L_11a41ccf:;
  /* 11a41ccf pop edi */
  EDI = (pop32());
  /* 11a41cd0 pop esi */
  ESI = (pop32());
  /* 11a41cd1 pop ebp */
  EBP = (pop32());
  /* 11a41cd2 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a41cd4 pop ebx */
  EBX = (pop32());
  /* 11a41cd5 pop ecx */
  ECX = (pop32());
  /* 11a41cd6 ret  */
  ESPCHK(0x11a41b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ce0 @ 0x11a41ce0 (51 bytes, 22 insns) */
void f_11a41ce0(void) {
  FTRACE(0x11a41ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41ce0 push esi */
  push32((uint32_t)(ESI));
  /* 11a41ce1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a41ce5 push edi */
  push32((uint32_t)(EDI));
  /* 11a41ce6 mov edi, ecx */
  EDI = (ECX);
  /* 11a41ce8 mov eax, dword ptr [esi + 0xd] */
  EAX = (r32((uint32_t)(ESI + 0xd)));
  /* 11a41ceb mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a41cee push eax */
  push32((uint32_t)(EAX));
  /* 11a41cef push ecx */
  push32((uint32_t)(ECX));
  /* 11a41cf0 mov ecx, edi */
  ECX = (EDI);
  /* 11a41cf2 call 0x11a420d0 */
  push32(0x11a41cf7u); f_11a420d0();
  /* 11a41cf7 mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 11a41cfa mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a41cfd push edx */
  push32((uint32_t)(EDX));
  /* 11a41cfe push eax */
  push32((uint32_t)(EAX));
  /* 11a41cff mov ecx, edi */
  ECX = (EDI);
  /* 11a41d01 call 0x11a420d0 */
  push32(0x11a41d06u); f_11a420d0();
  /* 11a41d06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a41d08 pop edi */
  EDI = (pop32());
  /* 11a41d09 mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 11a41d0c mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 11a41d0f pop esi */
  ESI = (pop32());
  /* 11a41d10 ret 4 */
  ESPCHK(0x11a41ce0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001d20 @ 0x11a41d20 (99 bytes, 39 insns) */
void f_11a41d20(void) {
  FTRACE(0x11a41d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41d20 push esi */
  push32((uint32_t)(ESI));
  /* 11a41d21 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a41d25 push edi */
  push32((uint32_t)(EDI));
  /* 11a41d26 mov edi, ecx */
  EDI = (ECX);
  /* 11a41d28 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a41d2b push eax */
  push32((uint32_t)(EAX));
  /* 11a41d2c call 0x11a41ff0 */
  push32(0x11a41d31u); f_11a41ff0();
  /* 11a41d31 mov ecx, dword ptr [0x11a4b040] */
  ECX = (r32((uint32_t)(0x11a4b040)));
  /* 11a41d37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41d39 jl 0x11a41d57 */
  if ((C.sf!=C.of)) goto L_11a41d57;
  /* 11a41d3b mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a41d3e mov dword ptr [esi + 0xd], ecx */
  w32((uint32_t)(ESI + 0xd), (ECX));
  /* 11a41d41 mov ecx, dword ptr [0x11a4b040] */
  ECX = (r32((uint32_t)(0x11a4b040)));
  /* 11a41d47 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a41d49 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41d4a push edx */
  push32((uint32_t)(EDX));
  /* 11a41d4b mov ecx, edi */
  ECX = (EDI);
  /* 11a41d4d call 0x11a420d0 */
  push32(0x11a41d52u); f_11a420d0();
  /* 11a41d52 pop edi */
  EDI = (pop32());
  /* 11a41d53 pop esi */
  ESI = (pop32());
  /* 11a41d54 ret 4 */
  ESPCHK(0x11a41d20u, _esp0);
  ESP += 8; return;
L_11a41d57:;
  /* 11a41d57 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a41d5a mov ecx, edi */
  ECX = (EDI);
  /* 11a41d5c push eax */
  push32((uint32_t)(EAX));
  /* 11a41d5d call 0x11a41ff0 */
  push32(0x11a41d62u); f_11a41ff0();
  /* 11a41d62 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a41d65 mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 11a41d68 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41d69 mov ecx, edi */
  ECX = (EDI);
  /* 11a41d6b call 0x11a41ff0 */
  push32(0x11a41d70u); f_11a41ff0();
  /* 11a41d70 mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a41d73 mov ecx, edi */
  ECX = (EDI);
  /* 11a41d75 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a41d77 push eax */
  push32((uint32_t)(EAX));
  /* 11a41d78 push edx */
  push32((uint32_t)(EDX));
  /* 11a41d79 call 0x11a420d0 */
  push32(0x11a41d7eu); f_11a420d0();
  /* 11a41d7e pop edi */
  EDI = (pop32());
  /* 11a41d7f pop esi */
  ESI = (pop32());
  /* 11a41d80 ret 4 */
  ESPCHK(0x11a41d20u, _esp0);
  ESP += 8; return;
}

/* FUN_10001d90 @ 0x11a41d90 (601 bytes, 230 insns) */
void f_11a41d90(void) {
  FTRACE(0x11a41d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41d90 push ebx */
  push32((uint32_t)(EBX));
  /* 11a41d91 push ebp */
  push32((uint32_t)(EBP));
  /* 11a41d92 push esi */
  push32((uint32_t)(ESI));
  /* 11a41d93 mov esi, ecx */
  ESI = (ECX);
  /* 11a41d95 push edi */
  push32((uint32_t)(EDI));
  /* 11a41d96 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a41d9a mov eax, dword ptr [esi + 0x2ff] */
  EAX = (r32((uint32_t)(ESI + 0x2ff)));
  /* 11a41da0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a41da2 jne 0x11a41f13 */
  if (!C.zf) goto L_11a41f13;
  /* 11a41da8 mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41dab mov ebp, dword ptr [esp + 0x18] */
  EBP = (r32((uint32_t)(ESP + 0x18)));
  /* 11a41daf push eax */
  push32((uint32_t)(EAX));
  /* 11a41db0 mov ecx, ebp */
  ECX = (EBP);
  /* 11a41db2 call 0x11a42060 */
  push32(0x11a41db7u); f_11a42060();
  /* 11a41db7 imul eax, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a41dbb mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41dbe mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 11a41dc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41dc3 mov ecx, esi */
  ECX = (ESI);
  /* 11a41dc5 call 0x11a421b0 */
  push32(0x11a41dcau); f_11a421b0();
  /* 11a41dca mov dl, byte ptr [esi + 0x33b] */
  DL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a41dd0 push eax */
  push32((uint32_t)(EAX));
  /* 11a41dd1 dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11a41dd3 push edx */
  push32((uint32_t)(EDX));
  /* 11a41dd4 call dword ptr [0x11a4a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a15c))), 0x11a41ddau);
  /* 11a41dda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41ddd mov ebx, eax */
  EBX = (EAX);
  /* 11a41ddf mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41de2 mov ecx, ebp */
  ECX = (EBP);
  /* 11a41de4 push eax */
  push32((uint32_t)(EAX));
  /* 11a41de5 call 0x11a42060 */
  push32(0x11a41deau); f_11a42060();
  /* 11a41dea imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a41ded cmp dword ptr [esp + 0x14], ebx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41df1 jg 0x11a41e80 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a41e80;
  /* 11a41df7 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 11a41dfa mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41dfd push ecx */
  push32((uint32_t)(ECX));
  /* 11a41dfe push edx */
  push32((uint32_t)(EDX));
  /* 11a41dff mov ecx, esi */
  ECX = (ESI);
  /* 11a41e01 call 0x11a421b0 */
  push32(0x11a41e06u); f_11a421b0();
  /* 11a41e06 push eax */
  push32((uint32_t)(EAX));
  /* 11a41e07 mov al, byte ptr [esi + 0x33b] */
  AL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a41e0d dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a41e0f push eax */
  push32((uint32_t)(EAX));
  /* 11a41e10 call dword ptr [0x11a4a178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a178))), 0x11a41e16u);
  /* 11a41e16 mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41e19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41e1c mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 11a41e23 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41e24 mov ecx, ebp */
  ECX = (EBP);
  /* 11a41e26 call 0x11a42060 */
  push32(0x11a41e2bu); f_11a42060();
  /* 11a41e2b mov ecx, eax */
  ECX = (EAX);
  /* 11a41e2d mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a41e31 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a41e32 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a41e34 mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41e37 mov ecx, esi */
  ECX = (ESI);
  /* 11a41e39 push edx */
  push32((uint32_t)(EDX));
  /* 11a41e3a mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 11a41e3d call 0x11a421b0 */
  push32(0x11a41e42u); f_11a421b0();
  /* 11a41e42 push eax */
  push32((uint32_t)(EAX));
  /* 11a41e43 mov al, byte ptr [esi + 0x33b] */
  AL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a41e49 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a41e4b push eax */
  push32((uint32_t)(EAX));
  /* 11a41e4c call dword ptr [0x11a4a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a15c))), 0x11a41e52u);
  /* 11a41e52 mov ecx, dword ptr [edi + 0x15] */
  ECX = (r32((uint32_t)(EDI + 0x15)));
  /* 11a41e55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41e58 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a41e5a mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41e5d push eax */
  push32((uint32_t)(EAX));
  /* 11a41e5e push ecx */
  push32((uint32_t)(ECX));
  /* 11a41e5f mov ecx, esi */
  ECX = (ESI);
  /* 11a41e61 call 0x11a421b0 */
  push32(0x11a41e66u); f_11a421b0();
  /* 11a41e66 mov dl, byte ptr [esi + 0x33b] */
  DL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a41e6c push eax */
  push32((uint32_t)(EAX));
  /* 11a41e6d dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11a41e6f push edx */
  push32((uint32_t)(EDX));
  /* 11a41e70 call dword ptr [0x11a4a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a154))), 0x11a41e76u);
  /* 11a41e76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41e79 pop edi */
  EDI = (pop32());
  /* 11a41e7a pop esi */
  ESI = (pop32());
  /* 11a41e7b pop ebp */
  EBP = (pop32());
  /* 11a41e7c pop ebx */
  EBX = (pop32());
  /* 11a41e7d ret 8 */
  ESPCHK(0x11a41d90u, _esp0);
  ESP += 12; return;
L_11a41e80:;
  /* 11a41e80 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41e83 mov ecx, esi */
  ECX = (ESI);
  /* 11a41e85 push eax */
  push32((uint32_t)(EAX));
  /* 11a41e86 call 0x11a421b0 */
  push32(0x11a41e8bu); f_11a421b0();
  /* 11a41e8b mov cl, byte ptr [esi + 0x33b] */
  CL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a41e91 push eax */
  push32((uint32_t)(EAX));
  /* 11a41e92 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11a41e94 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41e95 call dword ptr [0x11a4a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a15c))), 0x11a41e9bu);
  /* 11a41e9b mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41e9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41ea1 mov ecx, esi */
  ECX = (ESI);
  /* 11a41ea3 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 11a41ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a41ea8 push edx */
  push32((uint32_t)(EDX));
  /* 11a41ea9 call 0x11a421b0 */
  push32(0x11a41eaeu); f_11a421b0();
  /* 11a41eae push eax */
  push32((uint32_t)(EAX));
  /* 11a41eaf mov al, byte ptr [esi + 0x33b] */
  AL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a41eb5 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a41eb7 push eax */
  push32((uint32_t)(EAX));
  /* 11a41eb8 call dword ptr [0x11a4a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a154))), 0x11a41ebeu);
  /* 11a41ebe mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41ec1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41ec5 mov ecx, ebp */
  ECX = (EBP);
  /* 11a41ec7 call 0x11a42060 */
  push32(0x11a41eccu); f_11a42060();
  /* 11a41ecc mov ecx, eax */
  ECX = (EAX);
  /* 11a41ece mov eax, ebx */
  EAX = (EBX);
  /* 11a41ed0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a41ed1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a41ed3 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 11a41ed6 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41ed9 push edx */
  push32((uint32_t)(EDX));
  /* 11a41eda sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a41edc mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 11a41edf mov ecx, ebp */
  ECX = (EBP);
  /* 11a41ee1 call 0x11a42060 */
  push32(0x11a41ee6u); f_11a42060();
  /* 11a41ee6 mov ecx, eax */
  ECX = (EAX);
  /* 11a41ee8 mov eax, ebx */
  EAX = (EBX);
  /* 11a41eea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a41eeb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a41eed mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41ef0 mov ecx, esi */
  ECX = (ESI);
  /* 11a41ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11a41ef3 push edx */
  push32((uint32_t)(EDX));
  /* 11a41ef4 call 0x11a421b0 */
  push32(0x11a41ef9u); f_11a421b0();
  /* 11a41ef9 push eax */
  push32((uint32_t)(EAX));
  /* 11a41efa mov al, byte ptr [esi + 0x33b] */
  AL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a41f00 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a41f02 push eax */
  push32((uint32_t)(EAX));
  /* 11a41f03 call dword ptr [0x11a4a178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a178))), 0x11a41f09u);
  /* 11a41f09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a41f0c pop edi */
  EDI = (pop32());
  /* 11a41f0d pop esi */
  ESI = (pop32());
  /* 11a41f0e pop ebp */
  EBP = (pop32());
  /* 11a41f0f pop ebx */
  EBX = (pop32());
  /* 11a41f10 ret 8 */
  ESPCHK(0x11a41d90u, _esp0);
  ESP += 12; return;
L_11a41f13:;
  /* 11a41f13 mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41f16 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41f17 mov ecx, esi */
  ECX = (ESI);
  /* 11a41f19 call 0x11a42060 */
  push32(0x11a41f1eu); f_11a42060();
  /* 11a41f1e mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41f21 mov ebp, eax */
  EBP = (EAX);
  /* 11a41f23 imul ebp, dword ptr [edi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0xd)))*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a41f27 push edx */
  push32((uint32_t)(EDX));
  /* 11a41f28 mov ecx, esi */
  ECX = (ESI);
  /* 11a41f2a call 0x11a41ff0 */
  push32(0x11a41f2fu); f_11a41ff0();
  /* 11a41f2f mov ebx, eax */
  EBX = (EAX);
  /* 11a41f31 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41f34 push eax */
  push32((uint32_t)(EAX));
  /* 11a41f35 mov ecx, esi */
  ECX = (ESI);
  /* 11a41f37 call 0x11a42060 */
  push32(0x11a41f3cu); f_11a42060();
  /* 11a41f3c imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a41f3f cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41f41 jg 0x11a41f83 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a41f83;
  /* 11a41f43 mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 11a41f46 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41f49 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41f4a push edx */
  push32((uint32_t)(EDX));
  /* 11a41f4b mov ecx, esi */
  ECX = (ESI);
  /* 11a41f4d call 0x11a420d0 */
  push32(0x11a41f52u); f_11a420d0();
  /* 11a41f52 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41f55 mov ecx, esi */
  ECX = (ESI);
  /* 11a41f57 push eax */
  push32((uint32_t)(EAX));
  /* 11a41f58 mov dword ptr [edi + 0xd], 0 */
  w32((uint32_t)(EDI + 0xd), (0x0u));
  /* 11a41f5f call 0x11a42060 */
  push32(0x11a41f64u); f_11a42060();
  /* 11a41f64 mov ecx, eax */
  ECX = (EAX);
  /* 11a41f66 mov eax, ebp */
  EAX = (EBP);
  /* 11a41f68 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a41f69 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a41f6b mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41f6e mov ecx, esi */
  ECX = (ESI);
  /* 11a41f70 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 11a41f73 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a41f75 push eax */
  push32((uint32_t)(EAX));
  /* 11a41f76 push edx */
  push32((uint32_t)(EDX));
  /* 11a41f77 call 0x11a420d0 */
  push32(0x11a41f7cu); f_11a420d0();
  /* 11a41f7c pop edi */
  EDI = (pop32());
  /* 11a41f7d pop esi */
  ESI = (pop32());
  /* 11a41f7e pop ebp */
  EBP = (pop32());
  /* 11a41f7f pop ebx */
  EBX = (pop32());
  /* 11a41f80 ret 8 */
  ESPCHK(0x11a41d90u, _esp0);
  ESP += 12; return;
L_11a41f83:;
  /* 11a41f83 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41f86 mov ecx, esi */
  ECX = (ESI);
  /* 11a41f88 push eax */
  push32((uint32_t)(EAX));
  /* 11a41f89 call 0x11a41ff0 */
  push32(0x11a41f8eu); f_11a41ff0();
  /* 11a41f8e mov ecx, dword ptr [edi + 0x11] */
  ECX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41f91 mov dword ptr [edi + 0x15], eax */
  w32((uint32_t)(EDI + 0x15), (EAX));
  /* 11a41f94 push ecx */
  push32((uint32_t)(ECX));
  /* 11a41f95 mov ecx, esi */
  ECX = (ESI);
  /* 11a41f97 call 0x11a41ff0 */
  push32(0x11a41f9cu); f_11a41ff0();
  /* 11a41f9c mov edx, dword ptr [edi + 0x11] */
  EDX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a41f9f mov ecx, esi */
  ECX = (ESI);
  /* 11a41fa1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a41fa3 push eax */
  push32((uint32_t)(EAX));
  /* 11a41fa4 push edx */
  push32((uint32_t)(EDX));
  /* 11a41fa5 call 0x11a420d0 */
  push32(0x11a41faau); f_11a420d0();
  /* 11a41faa mov eax, dword ptr [edi + 9] */
  EAX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41fad mov ecx, esi */
  ECX = (ESI);
  /* 11a41faf push eax */
  push32((uint32_t)(EAX));
  /* 11a41fb0 call 0x11a42060 */
  push32(0x11a41fb5u); f_11a42060();
  /* 11a41fb5 mov ecx, eax */
  ECX = (EAX);
  /* 11a41fb7 mov eax, ebx */
  EAX = (EBX);
  /* 11a41fb9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a41fba idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a41fbc mov ecx, dword ptr [edi + 0xd] */
  ECX = (r32((uint32_t)(EDI + 0xd)));
  /* 11a41fbf mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41fc2 push edx */
  push32((uint32_t)(EDX));
  /* 11a41fc3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a41fc5 mov dword ptr [edi + 0xd], ecx */
  w32((uint32_t)(EDI + 0xd), (ECX));
  /* 11a41fc8 mov ecx, esi */
  ECX = (ESI);
  /* 11a41fca call 0x11a42060 */
  push32(0x11a41fcfu); f_11a42060();
  /* 11a41fcf mov ecx, eax */
  ECX = (EAX);
  /* 11a41fd1 mov eax, ebx */
  EAX = (EBX);
  /* 11a41fd3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a41fd4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a41fd6 mov edx, dword ptr [edi + 9] */
  EDX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a41fd9 mov ecx, esi */
  ECX = (ESI);
  /* 11a41fdb push eax */
  push32((uint32_t)(EAX));
  /* 11a41fdc push edx */
  push32((uint32_t)(EDX));
  /* 11a41fdd call 0x11a420d0 */
  push32(0x11a41fe2u); f_11a420d0();
  /* 11a41fe2 pop edi */
  EDI = (pop32());
  /* 11a41fe3 pop esi */
  ESI = (pop32());
  /* 11a41fe4 pop ebp */
  EBP = (pop32());
  /* 11a41fe5 pop ebx */
  EBX = (pop32());
  /* 11a41fe6 ret 8 */
  ESPCHK(0x11a41d90u, _esp0);
  ESP += 12; return;
}

/* FUN_10001ff0 @ 0x11a41ff0 (75 bytes, 18 insns) [1 switch table(s)] */
void f_11a41ff0(void) {
  FTRACE(0x11a41ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a41ff0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a41ff4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a41ff7 ja 0x11a42036 */
  if ((!C.cf&&!C.zf)) goto L_11a42036;
  /* 11a41ff9 jmp dword ptr [eax*4 + 0x11a4203c] */
  switch (EAX) {
    case 0: goto L_11a42000;
    case 1: goto L_11a42009;
    case 2: goto L_11a42012;
    case 3: goto L_11a4201b;
    case 4: goto L_11a42024;
    case 5: goto L_11a4202d;
    default: x86_unimpl("switch@0x11a41ff9 out of table"); return;
  }
L_11a42000:;
  /* 11a42000 mov eax, dword ptr [ecx + 0x30b] */
  EAX = (r32((uint32_t)(ECX + 0x30b)));
  /* 11a42006 ret 4 */
  ESPCHK(0x11a41ff0u, _esp0);
  ESP += 8; return;
L_11a42009:;
  /* 11a42009 mov eax, dword ptr [ecx + 0x30f] */
  EAX = (r32((uint32_t)(ECX + 0x30f)));
  /* 11a4200f ret 4 */
  ESPCHK(0x11a41ff0u, _esp0);
  ESP += 8; return;
L_11a42012:;
  /* 11a42012 mov eax, dword ptr [ecx + 0x313] */
  EAX = (r32((uint32_t)(ECX + 0x313)));
  /* 11a42018 ret 4 */
  ESPCHK(0x11a41ff0u, _esp0);
  ESP += 8; return;
L_11a4201b:;
  /* 11a4201b mov eax, dword ptr [ecx + 0x317] */
  EAX = (r32((uint32_t)(ECX + 0x317)));
  /* 11a42021 ret 4 */
  ESPCHK(0x11a41ff0u, _esp0);
  ESP += 8; return;
L_11a42024:;
  /* 11a42024 mov eax, dword ptr [ecx + 0x31b] */
  EAX = (r32((uint32_t)(ECX + 0x31b)));
  /* 11a4202a ret 4 */
  ESPCHK(0x11a41ff0u, _esp0);
  ESP += 8; return;
L_11a4202d:;
  /* 11a4202d mov eax, dword ptr [ecx + 0x31f] */
  EAX = (r32((uint32_t)(ECX + 0x31f)));
  /* 11a42033 ret 4 */
  ESPCHK(0x11a41ff0u, _esp0);
  ESP += 8; return;
L_11a42036:;
  /* 11a42036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a42038 ret 4 */
  ESPCHK(0x11a41ff0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002060 @ 0x11a42060 (75 bytes, 18 insns) [1 switch table(s)] */
void f_11a42060(void) {
  FTRACE(0x11a42060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a42060 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a42064 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42067 ja 0x11a420a6 */
  if ((!C.cf&&!C.zf)) goto L_11a420a6;
  /* 11a42069 jmp dword ptr [eax*4 + 0x11a420ac] */
  switch (EAX) {
    case 0: goto L_11a42070;
    case 1: goto L_11a42079;
    case 2: goto L_11a42082;
    case 3: goto L_11a4208b;
    case 4: goto L_11a42094;
    case 5: goto L_11a4209d;
    default: x86_unimpl("switch@0x11a42069 out of table"); return;
  }
L_11a42070:;
  /* 11a42070 mov eax, dword ptr [ecx + 0x323] */
  EAX = (r32((uint32_t)(ECX + 0x323)));
  /* 11a42076 ret 4 */
  ESPCHK(0x11a42060u, _esp0);
  ESP += 8; return;
L_11a42079:;
  /* 11a42079 mov eax, dword ptr [ecx + 0x327] */
  EAX = (r32((uint32_t)(ECX + 0x327)));
  /* 11a4207f ret 4 */
  ESPCHK(0x11a42060u, _esp0);
  ESP += 8; return;
L_11a42082:;
  /* 11a42082 mov eax, dword ptr [ecx + 0x32b] */
  EAX = (r32((uint32_t)(ECX + 0x32b)));
  /* 11a42088 ret 4 */
  ESPCHK(0x11a42060u, _esp0);
  ESP += 8; return;
L_11a4208b:;
  /* 11a4208b mov eax, dword ptr [ecx + 0x32f] */
  EAX = (r32((uint32_t)(ECX + 0x32f)));
  /* 11a42091 ret 4 */
  ESPCHK(0x11a42060u, _esp0);
  ESP += 8; return;
L_11a42094:;
  /* 11a42094 mov eax, dword ptr [ecx + 0x333] */
  EAX = (r32((uint32_t)(ECX + 0x333)));
  /* 11a4209a ret 4 */
  ESPCHK(0x11a42060u, _esp0);
  ESP += 8; return;
L_11a4209d:;
  /* 11a4209d mov eax, dword ptr [ecx + 0x337] */
  EAX = (r32((uint32_t)(ECX + 0x337)));
  /* 11a420a3 ret 4 */
  ESPCHK(0x11a42060u, _esp0);
  ESP += 8; return;
L_11a420a6:;
  /* 11a420a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a420a8 ret 4 */
  ESPCHK(0x11a42060u, _esp0);
  ESP += 8; return;
}

/* FUN_100020d0 @ 0x11a420d0 (146 bytes, 34 insns) [1 switch table(s)] */
void f_11a420d0(void) {
  FTRACE(0x11a420d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a420d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a420d4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a420d7 ja 0x11a4215f */
  if ((!C.cf&&!C.zf)) goto L_11a4215f;
  /* 11a420dd jmp dword ptr [eax*4 + 0x11a42164] */
  switch (EAX) {
    case 0: goto L_11a420e4;
    case 1: goto L_11a420f9;
    case 2: goto L_11a4210e;
    case 3: goto L_11a42123;
    case 4: goto L_11a42138;
    case 5: goto L_11a4214d;
    default: x86_unimpl("switch@0x11a420dd out of table"); return;
  }
L_11a420e4:;
  /* 11a420e4 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a420e8 mov edx, dword ptr [ecx + 0x30b] */
  EDX = (r32((uint32_t)(ECX + 0x30b)));
  /* 11a420ee add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a420f0 mov dword ptr [ecx + 0x30b], edx */
  w32((uint32_t)(ECX + 0x30b), (EDX));
  /* 11a420f6 ret 8 */
  ESPCHK(0x11a420d0u, _esp0);
  ESP += 12; return;
L_11a420f9:;
  /* 11a420f9 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a420fd mov eax, dword ptr [ecx + 0x30f] */
  EAX = (r32((uint32_t)(ECX + 0x30f)));
  /* 11a42103 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42105 mov dword ptr [ecx + 0x30f], eax */
  w32((uint32_t)(ECX + 0x30f), (EAX));
  /* 11a4210b ret 8 */
  ESPCHK(0x11a420d0u, _esp0);
  ESP += 12; return;
L_11a4210e:;
  /* 11a4210e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a42112 mov edx, dword ptr [ecx + 0x313] */
  EDX = (r32((uint32_t)(ECX + 0x313)));
  /* 11a42118 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4211a mov dword ptr [ecx + 0x313], edx */
  w32((uint32_t)(ECX + 0x313), (EDX));
  /* 11a42120 ret 8 */
  ESPCHK(0x11a420d0u, _esp0);
  ESP += 12; return;
L_11a42123:;
  /* 11a42123 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a42127 mov eax, dword ptr [ecx + 0x317] */
  EAX = (r32((uint32_t)(ECX + 0x317)));
  /* 11a4212d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4212f mov dword ptr [ecx + 0x317], eax */
  w32((uint32_t)(ECX + 0x317), (EAX));
  /* 11a42135 ret 8 */
  ESPCHK(0x11a420d0u, _esp0);
  ESP += 12; return;
L_11a42138:;
  /* 11a42138 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a4213c mov edx, dword ptr [ecx + 0x31b] */
  EDX = (r32((uint32_t)(ECX + 0x31b)));
  /* 11a42142 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42144 mov dword ptr [ecx + 0x31b], edx */
  w32((uint32_t)(ECX + 0x31b), (EDX));
  /* 11a4214a ret 8 */
  ESPCHK(0x11a420d0u, _esp0);
  ESP += 12; return;
L_11a4214d:;
  /* 11a4214d mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a42151 mov eax, dword ptr [ecx + 0x31f] */
  EAX = (r32((uint32_t)(ECX + 0x31f)));
  /* 11a42157 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42159 mov dword ptr [ecx + 0x31f], eax */
  w32((uint32_t)(ECX + 0x31f), (EAX));
L_11a4215f:;
  /* 11a4215f ret 8 */
  ESPCHK(0x11a420d0u, _esp0);
  ESP += 12; return;
}

/* FUN_10002180 @ 0x11a42180 (39 bytes, 9 insns) */
void f_11a42180(void) {
  FTRACE(0x11a42180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a42180 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a42184 mov dl, byte ptr [esp + 8] */
  DL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a42188 mov byte ptr [ecx + 0x348], dl */
  w8((uint32_t)(ECX + 0x348), (DL));
  /* 11a4218e lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a42191 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a42194 mov dword ptr [ecx + 0x344], eax */
  w32((uint32_t)(ECX + 0x344), (EAX));
  /* 11a4219a mov al, byte ptr [esp + 0xc] */
  AL = (r8((uint32_t)(ESP + 0xc)));
  /* 11a4219e mov byte ptr [ecx + 0x349], al */
  w8((uint32_t)(ECX + 0x349), (AL));
  /* 11a421a4 ret 0xc */
  ESPCHK(0x11a42180u, _esp0);
  ESP += 16; return;
}

/* FUN_100021b0 @ 0x11a421b0 (30 bytes, 9 insns) */
void f_11a421b0(void) {
  FTRACE(0x11a421b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a421b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a421b4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a421b7 jne 0x11a421c1 */
  if (!C.zf) goto L_11a421c1;
  /* 11a421b9 mov eax, 1 */
  EAX = (0x1u);
  /* 11a421be ret 4 */
  ESPCHK(0x11a421b0u, _esp0);
  ESP += 8; return;
L_11a421c1:;
  /* 11a421c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a421c4 jne 0x11a421cb */
  if (!C.zf) goto L_11a421cb;
  /* 11a421c6 mov eax, 3 */
  EAX = (0x3u);
L_11a421cb:;
  /* 11a421cb ret 4 */
  ESPCHK(0x11a421b0u, _esp0);
  ESP += 8; return;
}

/* FUN_100021d0 @ 0x11a421d0 (110 bytes, 44 insns) */
void f_11a421d0(void) {
  FTRACE(0x11a421d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a421d0 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a421d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a421d5 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a421d9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a421da push esi */
  push32((uint32_t)(ESI));
  /* 11a421db push edi */
  push32((uint32_t)(EDI));
  /* 11a421dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a421de push eax */
  push32((uint32_t)(EAX));
  /* 11a421df push ebx */
  push32((uint32_t)(EBX));
  /* 11a421e0 mov ebp, ecx */
  EBP = (ECX);
  /* 11a421e2 push 0x11a4f300 */
  push32((uint32_t)(0x11a4f300u));
  /* 11a421e7 push 0x11a4eab0 */
  push32((uint32_t)(0x11a4eab0u));
  /* 11a421ec push ebp */
  push32((uint32_t)(EBP));
  /* 11a421ed call dword ptr [0x11a4a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a18c))), 0x11a421f3u);
  /* 11a421f3 mov edi, dword ptr [esp + 0x30] */
  EDI = (r32((uint32_t)(ESP + 0x30)));
  /* 11a421f7 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a421fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a421fc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a421ff repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a42201 not ecx */
  ECX = (~(ECX));
  /* 11a42203 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42205 lea edx, [ebp + 0x1a] */
  EDX = ((uint32_t)(EBP + 0x1a));
  /* 11a42208 mov eax, ecx */
  EAX = (ECX);
  /* 11a4220a mov esi, edi */
  ESI = (EDI);
  /* 11a4220c mov edi, edx */
  EDI = (EDX);
  /* 11a4220e mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a42212 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a42215 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a42217 mov ecx, eax */
  ECX = (EAX);
  /* 11a42219 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a4221b and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a4221e rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a42220 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a42224 pop edi */
  EDI = (pop32());
  /* 11a42225 mov dword ptr [ebp + 0x44], ecx */
  w32((uint32_t)(EBP + 0x44), (ECX));
  /* 11a42228 mov dword ptr [ebp + 0x38], edx */
  w32((uint32_t)(EBP + 0x38), (EDX));
  /* 11a4222b mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11a4222e mov byte ptr [ebp + 0x19], 0 */
  w8((uint32_t)(EBP + 0x19), (0x0u));
  /* 11a42232 mov dword ptr [ebp + 0x15], eax */
  w32((uint32_t)(EBP + 0x15), (EAX));
  /* 11a42235 mov dword ptr [ebp + 0xd], eax */
  w32((uint32_t)(EBP + 0xd), (EAX));
  /* 11a42238 pop esi */
  ESI = (pop32());
  /* 11a42239 pop ebp */
  EBP = (pop32());
  /* 11a4223a pop ebx */
  EBX = (pop32());
  /* 11a4223b ret 0x14 */
  ESPCHK(0x11a421d0u, _esp0);
  ESP += 24; return;
}

/* FUN_10002240 @ 0x11a42240 (76 bytes, 32 insns) */
void f_11a42240(void) {
  FTRACE(0x11a42240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a42240 push ebx */
  push32((uint32_t)(EBX));
  /* 11a42241 push esi */
  push32((uint32_t)(ESI));
  /* 11a42242 mov edx, ecx */
  EDX = (ECX);
  /* 11a42244 push edi */
  push32((uint32_t)(EDI));
  /* 11a42245 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a42249 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a4224c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a4224e lea ebx, [edx + 0x29] */
  EBX = ((uint32_t)(EDX + 0x29));
  /* 11a42251 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a42253 not ecx */
  ECX = (~(ECX));
  /* 11a42255 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42257 mov eax, ecx */
  EAX = (ECX);
  /* 11a42259 mov esi, edi */
  ESI = (EDI);
  /* 11a4225b mov edi, ebx */
  EDI = (EBX);
  /* 11a4225d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a42260 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a42262 mov ecx, eax */
  ECX = (EAX);
  /* 11a42264 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a42266 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a42269 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a4226b mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a4226f mov dword ptr [edx + 0x15], eax */
  w32((uint32_t)(EDX + 0x15), (EAX));
  /* 11a42272 mov dword ptr [edx + 0x3c], ecx */
  w32((uint32_t)(EDX + 0x3c), (ECX));
  /* 11a42275 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a42279 mov dword ptr [edx + 0xd], eax */
  w32((uint32_t)(EDX + 0xd), (EAX));
  /* 11a4227c mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a42280 pop edi */
  EDI = (pop32());
  /* 11a42281 pop esi */
  ESI = (pop32());
  /* 11a42282 mov dword ptr [edx + 9], eax */
  w32((uint32_t)(EDX + 0x9), (EAX));
  /* 11a42285 mov dword ptr [edx + 0x11], ecx */
  w32((uint32_t)(EDX + 0x11), (ECX));
  /* 11a42288 pop ebx */
  EBX = (pop32());
  /* 11a42289 ret 0x10 */
  ESPCHK(0x11a42240u, _esp0);
  ESP += 20; return;
}

/* OnInit @ 0x11a423d0 (1255 bytes, 315 insns) */
void f_11a423d0(void) {
  FTRACE(0x11a423d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a423d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a423d1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a423d2 push esi */
  push32((uint32_t)(ESI));
  /* 11a423d3 mov esi, dword ptr [0x11a4a140] */
  ESI = (r32((uint32_t)(0x11a4a140)));
  /* 11a423d9 push edi */
  push32((uint32_t)(EDI));
  /* 11a423da push 0x11a4b510 */
  push32((uint32_t)(0x11a4b510u));
  /* 11a423df push 0x11a4eab0 */
  push32((uint32_t)(0x11a4eab0u));
  /* 11a423e4 call esi */
  call_ind((uint32_t)(ESI), 0x11a423e6u);
  /* 11a423e6 push 0x11a4b504 */
  push32((uint32_t)(0x11a4b504u));
  /* 11a423eb push 0x11a4f700 */
  push32((uint32_t)(0x11a4f700u));
  /* 11a423f0 call esi */
  call_ind((uint32_t)(ESI), 0x11a423f2u);
  /* 11a423f2 mov edi, dword ptr [0x11a4a144] */
  EDI = (r32((uint32_t)(0x11a4a144)));
  /* 11a423f8 push 0x11a4b4f8 */
  push32((uint32_t)(0x11a4b4f8u));
  /* 11a423fd push 0x11a4f300 */
  push32((uint32_t)(0x11a4f300u));
  /* 11a42402 call edi */
  call_ind((uint32_t)(EDI), 0x11a42404u);
  /* 11a42404 push 0x11a4b4e0 */
  push32((uint32_t)(0x11a4b4e0u));
  /* 11a42409 push 0x11a4ef38 */
  push32((uint32_t)(0x11a4ef38u));
  /* 11a4240e call edi */
  call_ind((uint32_t)(EDI), 0x11a42410u);
  /* 11a42410 push 0x11a4b4d0 */
  push32((uint32_t)(0x11a4b4d0u));
  /* 11a42415 push 0x11a4f6d8 */
  push32((uint32_t)(0x11a4f6d8u));
  /* 11a4241a call edi */
  call_ind((uint32_t)(EDI), 0x11a4241cu);
  /* 11a4241c push 0x11a4b4c0 */
  push32((uint32_t)(0x11a4b4c0u));
  /* 11a42421 push 0x11a4f6d0 */
  push32((uint32_t)(0x11a4f6d0u));
  /* 11a42426 call edi */
  call_ind((uint32_t)(EDI), 0x11a42428u);
  /* 11a42428 push 0x11a4f2b8 */
  push32((uint32_t)(0x11a4f2b8u));
  /* 11a4242d call dword ptr [0x11a4a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a188))), 0x11a42433u);
  /* 11a42433 mov ebp, dword ptr [0x11a4a13c] */
  EBP = (r32((uint32_t)(0x11a4a13c)));
  /* 11a42439 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a4243b push 0x11a4f2b8 */
  push32((uint32_t)(0x11a4f2b8u));
  /* 11a42440 call ebp */
  call_ind((uint32_t)(EBP), 0x11a42442u);
  /* 11a42442 push 0x353 */
  push32((uint32_t)(0x353u));
  /* 11a42447 push 0x11a4ef60 */
  push32((uint32_t)(0x11a4ef60u));
  /* 11a4244c call ebp */
  call_ind((uint32_t)(EBP), 0x11a4244eu);
  /* 11a4244e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42451 push 0x353 */
  push32((uint32_t)(0x353u));
  /* 11a42456 push 0x11a4eba8 */
  push32((uint32_t)(0x11a4eba8u));
  /* 11a4245b call ebp */
  call_ind((uint32_t)(EBP), 0x11a4245du);
  /* 11a4245d push 0x353 */
  push32((uint32_t)(0x353u));
  /* 11a42462 push 0x11a4e740 */
  push32((uint32_t)(0x11a4e740u));
  /* 11a42467 call ebp */
  call_ind((uint32_t)(EBP), 0x11a42469u);
  /* 11a42469 push 0x353 */
  push32((uint32_t)(0x353u));
  /* 11a4246e push 0x11a4e3c8 */
  push32((uint32_t)(0x11a4e3c8u));
  /* 11a42473 call ebp */
  call_ind((uint32_t)(EBP), 0x11a42475u);
  /* 11a42475 push 0x353 */
  push32((uint32_t)(0x353u));
  /* 11a4247a push 0x11a4f340 */
  push32((uint32_t)(0x11a4f340u));
  /* 11a4247f call ebp */
  call_ind((uint32_t)(EBP), 0x11a42481u);
  /* 11a42481 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a42483 push 0x11a4b040 */
  push32((uint32_t)(0x11a4b040u));
  /* 11a42488 call ebp */
  call_ind((uint32_t)(EBP), 0x11a4248au);
  /* 11a4248a mov esi, dword ptr [0x11a4a14c] */
  ESI = (r32((uint32_t)(0x11a4a14c)));
  /* 11a42490 push 0x11a4b4b8 */
  push32((uint32_t)(0x11a4b4b8u));
  /* 11a42495 push 0x11a4f2d8 */
  push32((uint32_t)(0x11a4f2d8u));
  /* 11a4249a call esi */
  call_ind((uint32_t)(ESI), 0x11a4249cu);
  /* 11a4249c push 0x11a4b4ac */
  push32((uint32_t)(0x11a4b4acu));
  /* 11a424a1 push 0x11a4eb68 */
  push32((uint32_t)(0x11a4eb68u));
  /* 11a424a6 call esi */
  call_ind((uint32_t)(ESI), 0x11a424a8u);
  /* 11a424a8 push 0x11a4b4a0 */
  push32((uint32_t)(0x11a4b4a0u));
  /* 11a424ad push 0x11a4f6f8 */
  push32((uint32_t)(0x11a4f6f8u));
  /* 11a424b2 call esi */
  call_ind((uint32_t)(ESI), 0x11a424b4u);
  /* 11a424b4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a424b7 push 0x11a4b494 */
  push32((uint32_t)(0x11a4b494u));
  /* 11a424bc push 0x11a4f7a0 */
  push32((uint32_t)(0x11a4f7a0u));
  /* 11a424c1 call esi */
  call_ind((uint32_t)(ESI), 0x11a424c3u);
  /* 11a424c3 push 0x11a4b484 */
  push32((uint32_t)(0x11a4b484u));
  /* 11a424c8 push 0x11a4f708 */
  push32((uint32_t)(0x11a4f708u));
  /* 11a424cd call esi */
  call_ind((uint32_t)(ESI), 0x11a424cfu);
  /* 11a424cf mov ebx, dword ptr [0x11a4a150] */
  EBX = (r32((uint32_t)(0x11a4a150)));
  /* 11a424d5 push 0x11a4b474 */
  push32((uint32_t)(0x11a4b474u));
  /* 11a424da push 0x11a4eb48 */
  push32((uint32_t)(0x11a4eb48u));
  /* 11a424df call ebx */
  call_ind((uint32_t)(EBX), 0x11a424e1u);
  /* 11a424e1 push 0x11a4b468 */
  push32((uint32_t)(0x11a4b468u));
  /* 11a424e6 push 0x11a4f6f0 */
  push32((uint32_t)(0x11a4f6f0u));
  /* 11a424eb call ebx */
  call_ind((uint32_t)(EBX), 0x11a424edu);
  /* 11a424ed push 0x11a4b458 */
  push32((uint32_t)(0x11a4b458u));
  /* 11a424f2 push 0x11a4f2e8 */
  push32((uint32_t)(0x11a4f2e8u));
  /* 11a424f7 call ebx */
  call_ind((uint32_t)(EBX), 0x11a424f9u);
  /* 11a424f9 push 0x11a4b448 */
  push32((uint32_t)(0x11a4b448u));
  /* 11a424fe push 0x11a4f328 */
  push32((uint32_t)(0x11a4f328u));
  /* 11a42503 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42505u);
  /* 11a42505 push 0x11a4b438 */
  push32((uint32_t)(0x11a4b438u));
  /* 11a4250a push 0x11a4ef50 */
  push32((uint32_t)(0x11a4ef50u));
  /* 11a4250f call ebx */
  call_ind((uint32_t)(EBX), 0x11a42511u);
  /* 11a42511 push 0x11a4b428 */
  push32((uint32_t)(0x11a4b428u));
  /* 11a42516 push 0x11a4f6e8 */
  push32((uint32_t)(0x11a4f6e8u));
  /* 11a4251b call ebx */
  call_ind((uint32_t)(EBX), 0x11a4251du);
  /* 11a4251d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42520 push 0x11a4b418 */
  push32((uint32_t)(0x11a4b418u));
  /* 11a42525 push 0x11a4f318 */
  push32((uint32_t)(0x11a4f318u));
  /* 11a4252a call ebx */
  call_ind((uint32_t)(EBX), 0x11a4252cu);
  /* 11a4252c push 0x11a4b408 */
  push32((uint32_t)(0x11a4b408u));
  /* 11a42531 push 0x11a4eac0 */
  push32((uint32_t)(0x11a4eac0u));
  /* 11a42536 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42538u);
  /* 11a42538 push 0x11a4b3f4 */
  push32((uint32_t)(0x11a4b3f4u));
  /* 11a4253d push 0x11a4f6a0 */
  push32((uint32_t)(0x11a4f6a0u));
  /* 11a42542 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42544u);
  /* 11a42544 push 0x11a4b3e8 */
  push32((uint32_t)(0x11a4b3e8u));
  /* 11a42549 push 0x11a4f720 */
  push32((uint32_t)(0x11a4f720u));
  /* 11a4254e call ebx */
  call_ind((uint32_t)(EBX), 0x11a42550u);
  /* 11a42550 push 0x11a4b3d8 */
  push32((uint32_t)(0x11a4b3d8u));
  /* 11a42555 push 0x11a4eb40 */
  push32((uint32_t)(0x11a4eb40u));
  /* 11a4255a call ebx */
  call_ind((uint32_t)(EBX), 0x11a4255cu);
  /* 11a4255c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11a4255e push 0x11a4b044 */
  push32((uint32_t)(0x11a4b044u));
  /* 11a42563 mov dword ptr [0x11a4f25b], 0x11a4f7a0 */
  w32((uint32_t)(0x11a4f25b), (0x11a4f7a0u));
  /* 11a4256d mov dword ptr [0x11a4eea3], 0x11a4f708 */
  w32((uint32_t)(0x11a4eea3), (0x11a4f708u));
  /* 11a42577 mov dword ptr [0x11a4ea3b], 0x11a4f2d8 */
  w32((uint32_t)(0x11a4ea3b), (0x11a4f2d8u));
  /* 11a42581 mov dword ptr [0x11a4e6c3], 0x11a4eb68 */
  w32((uint32_t)(0x11a4e6c3), (0x11a4eb68u));
  /* 11a4258b mov dword ptr [0x11a4f63b], 0x11a4f6f8 */
  w32((uint32_t)(0x11a4f63b), (0x11a4f6f8u));
  /* 11a42595 call ebp */
  call_ind((uint32_t)(EBP), 0x11a42597u);
  /* 11a42597 push 0x11a4b3d0 */
  push32((uint32_t)(0x11a4b3d0u));
  /* 11a4259c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a4259e call dword ptr [0x11a4a148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a148))), 0x11a425a4u);
  /* 11a425a4 push 0x11a4b3c8 */
  push32((uint32_t)(0x11a4b3c8u));
  /* 11a425a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a425ab call dword ptr [0x11a4a148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a148))), 0x11a425b1u);
  /* 11a425b1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a425b4 push 0x11a4b3c0 */
  push32((uint32_t)(0x11a4b3c0u));
  /* 11a425b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a425bb call dword ptr [0x11a4a148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a148))), 0x11a425c1u);
  /* 11a425c1 push 0x11a4b3b8 */
  push32((uint32_t)(0x11a4b3b8u));
  /* 11a425c6 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a425c8 call dword ptr [0x11a4a148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a148))), 0x11a425ceu);
  /* 11a425ce push 0x11a4b3ac */
  push32((uint32_t)(0x11a4b3acu));
  /* 11a425d3 push 0x11a4f2d0 */
  push32((uint32_t)(0x11a4f2d0u));
  /* 11a425d8 call edi */
  call_ind((uint32_t)(EDI), 0x11a425dau);
  /* 11a425da push 0x11a4b3a0 */
  push32((uint32_t)(0x11a4b3a0u));
  /* 11a425df push 0x11a4ef40 */
  push32((uint32_t)(0x11a4ef40u));
  /* 11a425e4 call edi */
  call_ind((uint32_t)(EDI), 0x11a425e6u);
  /* 11a425e6 push 0x11a4b390 */
  push32((uint32_t)(0x11a4b390u));
  /* 11a425eb push 0x11a4f2e0 */
  push32((uint32_t)(0x11a4f2e0u));
  /* 11a425f0 call edi */
  call_ind((uint32_t)(EDI), 0x11a425f2u);
  /* 11a425f2 push 0x11a4b384 */
  push32((uint32_t)(0x11a4b384u));
  /* 11a425f7 push 0x11a4eb98 */
  push32((uint32_t)(0x11a4eb98u));
  /* 11a425fc call edi */
  call_ind((uint32_t)(EDI), 0x11a425feu);
  /* 11a425fe push 0x11a4b378 */
  push32((uint32_t)(0x11a4b378u));
  /* 11a42603 push 0x11a4eb80 */
  push32((uint32_t)(0x11a4eb80u));
  /* 11a42608 call edi */
  call_ind((uint32_t)(EDI), 0x11a4260au);
  /* 11a4260a push 0x11a4b4e0 */
  push32((uint32_t)(0x11a4b4e0u));
  /* 11a4260f push 0x11a4f6e0 */
  push32((uint32_t)(0x11a4f6e0u));
  /* 11a42614 call edi */
  call_ind((uint32_t)(EDI), 0x11a42616u);
  /* 11a42616 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42619 push 0x11a4b360 */
  push32((uint32_t)(0x11a4b360u));
  /* 11a4261e push 0x11a4f698 */
  push32((uint32_t)(0x11a4f698u));
  /* 11a42623 call edi */
  call_ind((uint32_t)(EDI), 0x11a42625u);
  /* 11a42625 push 0x11a4b354 */
  push32((uint32_t)(0x11a4b354u));
  /* 11a4262a push 0x11a4f6c8 */
  push32((uint32_t)(0x11a4f6c8u));
  /* 11a4262f call edi */
  call_ind((uint32_t)(EDI), 0x11a42631u);
  /* 11a42631 push 0x11a4b348 */
  push32((uint32_t)(0x11a4b348u));
  /* 11a42636 push 0x11a4f6a8 */
  push32((uint32_t)(0x11a4f6a8u));
  /* 11a4263b call edi */
  call_ind((uint32_t)(EDI), 0x11a4263du);
  /* 11a4263d push 0x11a4b33c */
  push32((uint32_t)(0x11a4b33cu));
  /* 11a42642 push 0x11a4eab8 */
  push32((uint32_t)(0x11a4eab8u));
  /* 11a42647 call edi */
  call_ind((uint32_t)(EDI), 0x11a42649u);
  /* 11a42649 mov edi, dword ptr [0x11a4a158] */
  EDI = (r32((uint32_t)(0x11a4a158)));
  /* 11a4264f push 0x11a4b328 */
  push32((uint32_t)(0x11a4b328u));
  /* 11a42654 push 0x11a4f310 */
  push32((uint32_t)(0x11a4f310u));
  /* 11a42659 call edi */
  call_ind((uint32_t)(EDI), 0x11a4265bu);
  /* 11a4265b push 0x11a4b314 */
  push32((uint32_t)(0x11a4b314u));
  /* 11a42660 push 0x11a4f2c0 */
  push32((uint32_t)(0x11a4f2c0u));
  /* 11a42665 call edi */
  call_ind((uint32_t)(EDI), 0x11a42667u);
  /* 11a42667 push 0x11a4b30c */
  push32((uint32_t)(0x11a4b30cu));
  /* 11a4266c push 0x11a4ef48 */
  push32((uint32_t)(0x11a4ef48u));
  /* 11a42671 call edi */
  call_ind((uint32_t)(EDI), 0x11a42673u);
  /* 11a42673 push 0x11a4b304 */
  push32((uint32_t)(0x11a4b304u));
  /* 11a42678 push 0x11a4ef18 */
  push32((uint32_t)(0x11a4ef18u));
  /* 11a4267d call edi */
  call_ind((uint32_t)(EDI), 0x11a4267fu);
  /* 11a4267f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42682 push 0x11a4b2fc */
  push32((uint32_t)(0x11a4b2fcu));
  /* 11a42687 push 0x11a4eb70 */
  push32((uint32_t)(0x11a4eb70u));
  /* 11a4268c call edi */
  call_ind((uint32_t)(EDI), 0x11a4268eu);
  /* 11a4268e push 0x11a4b2f4 */
  push32((uint32_t)(0x11a4b2f4u));
  /* 11a42693 push 0x11a4eb50 */
  push32((uint32_t)(0x11a4eb50u));
  /* 11a42698 call edi */
  call_ind((uint32_t)(EDI), 0x11a4269au);
  /* 11a4269a push 0x11a4b2ec */
  push32((uint32_t)(0x11a4b2ecu));
  /* 11a4269f push 0x11a4eac8 */
  push32((uint32_t)(0x11a4eac8u));
  /* 11a426a4 call edi */
  call_ind((uint32_t)(EDI), 0x11a426a6u);
  /* 11a426a6 push 0x11a4b2d8 */
  push32((uint32_t)(0x11a4b2d8u));
  /* 11a426ab push 0x11a4f320 */
  push32((uint32_t)(0x11a4f320u));
  /* 11a426b0 call edi */
  call_ind((uint32_t)(EDI), 0x11a426b2u);
  /* 11a426b2 push 0x11a4b2c4 */
  push32((uint32_t)(0x11a4b2c4u));
  /* 11a426b7 push 0x11a4f2c8 */
  push32((uint32_t)(0x11a4f2c8u));
  /* 11a426bc call edi */
  call_ind((uint32_t)(EDI), 0x11a426beu);
  /* 11a426be push 0x11a4b2bc */
  push32((uint32_t)(0x11a4b2bcu));
  /* 11a426c3 push 0x11a4ef58 */
  push32((uint32_t)(0x11a4ef58u));
  /* 11a426c8 call edi */
  call_ind((uint32_t)(EDI), 0x11a426cau);
  /* 11a426ca push 0x11a4b2b4 */
  push32((uint32_t)(0x11a4b2b4u));
  /* 11a426cf push 0x11a4ef28 */
  push32((uint32_t)(0x11a4ef28u));
  /* 11a426d4 call edi */
  call_ind((uint32_t)(EDI), 0x11a426d6u);
  /* 11a426d6 push 0x11a4b2ac */
  push32((uint32_t)(0x11a4b2acu));
  /* 11a426db push 0x11a4eba0 */
  push32((uint32_t)(0x11a4eba0u));
  /* 11a426e0 call edi */
  call_ind((uint32_t)(EDI), 0x11a426e2u);
  /* 11a426e2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a426e5 push 0x11a4b2a4 */
  push32((uint32_t)(0x11a4b2a4u));
  /* 11a426ea push 0x11a4eb58 */
  push32((uint32_t)(0x11a4eb58u));
  /* 11a426ef call edi */
  call_ind((uint32_t)(EDI), 0x11a426f1u);
  /* 11a426f1 push 0x11a4b29c */
  push32((uint32_t)(0x11a4b29cu));
  /* 11a426f6 push 0x11a4eb38 */
  push32((uint32_t)(0x11a4eb38u));
  /* 11a426fb call edi */
  call_ind((uint32_t)(EDI), 0x11a426fdu);
  /* 11a426fd push 0x11a4b294 */
  push32((uint32_t)(0x11a4b294u));
  /* 11a42702 push 0x11a4eaa0 */
  push32((uint32_t)(0x11a4eaa0u));
  /* 11a42707 call edi */
  call_ind((uint32_t)(EDI), 0x11a42709u);
  /* 11a42709 push 0x11a4b28c */
  push32((uint32_t)(0x11a4b28cu));
  /* 11a4270e push 0x11a4f308 */
  push32((uint32_t)(0x11a4f308u));
  /* 11a42713 call edi */
  call_ind((uint32_t)(EDI), 0x11a42715u);
  /* 11a42715 push 0x11a4b284 */
  push32((uint32_t)(0x11a4b284u));
  /* 11a4271a push 0x11a4f338 */
  push32((uint32_t)(0x11a4f338u));
  /* 11a4271f call edi */
  call_ind((uint32_t)(EDI), 0x11a42721u);
  /* 11a42721 push 0x11a4b27c */
  push32((uint32_t)(0x11a4b27cu));
  /* 11a42726 push 0x11a4ea98 */
  push32((uint32_t)(0x11a4ea98u));
  /* 11a4272b call edi */
  call_ind((uint32_t)(EDI), 0x11a4272du);
  /* 11a4272d push 0x11a4b274 */
  push32((uint32_t)(0x11a4b274u));
  /* 11a42732 push 0x11a4f2f8 */
  push32((uint32_t)(0x11a4f2f8u));
  /* 11a42737 call edi */
  call_ind((uint32_t)(EDI), 0x11a42739u);
  /* 11a42739 push 0x11a4b26c */
  push32((uint32_t)(0x11a4b26cu));
  /* 11a4273e push 0x11a4f330 */
  push32((uint32_t)(0x11a4f330u));
  /* 11a42743 call edi */
  call_ind((uint32_t)(EDI), 0x11a42745u);
  /* 11a42745 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42748 push 0x11a4b3e8 */
  push32((uint32_t)(0x11a4b3e8u));
  /* 11a4274d push 0x11a4f720 */
  push32((uint32_t)(0x11a4f720u));
  /* 11a42752 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42754u);
  /* 11a42754 push 0x11a4b3d8 */
  push32((uint32_t)(0x11a4b3d8u));
  /* 11a42759 push 0x11a4eb40 */
  push32((uint32_t)(0x11a4eb40u));
  /* 11a4275e call ebx */
  call_ind((uint32_t)(EBX), 0x11a42760u);
  /* 11a42760 push 0x11a4b494 */
  push32((uint32_t)(0x11a4b494u));
  /* 11a42765 push 0x11a4f7a0 */
  push32((uint32_t)(0x11a4f7a0u));
  /* 11a4276a call esi */
  call_ind((uint32_t)(ESI), 0x11a4276cu);
  /* 11a4276c push 0x11a4b484 */
  push32((uint32_t)(0x11a4b484u));
  /* 11a42771 push 0x11a4f708 */
  push32((uint32_t)(0x11a4f708u));
  /* 11a42776 call esi */
  call_ind((uint32_t)(ESI), 0x11a42778u);
  /* 11a42778 push 0x11a4b264 */
  push32((uint32_t)(0x11a4b264u));
  /* 11a4277d push 0x11a4f2f0 */
  push32((uint32_t)(0x11a4f2f0u));
  /* 11a42782 call esi */
  call_ind((uint32_t)(ESI), 0x11a42784u);
  /* 11a42784 push 0x11a4b25c */
  push32((uint32_t)(0x11a4b25cu));
  /* 11a42789 push 0x11a4e730 */
  push32((uint32_t)(0x11a4e730u));
  /* 11a4278e call esi */
  call_ind((uint32_t)(ESI), 0x11a42790u);
  /* 11a42790 push 0x11a4b254 */
  push32((uint32_t)(0x11a4b254u));
  /* 11a42795 push 0x11a4e728 */
  push32((uint32_t)(0x11a4e728u));
  /* 11a4279a call esi */
  call_ind((uint32_t)(ESI), 0x11a4279cu);
  /* 11a4279c push 0x11a4b24c */
  push32((uint32_t)(0x11a4b24cu));
  /* 11a427a1 push 0x11a4e720 */
  push32((uint32_t)(0x11a4e720u));
  /* 11a427a6 call esi */
  call_ind((uint32_t)(ESI), 0x11a427a8u);
  /* 11a427a8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a427ab push 0x11a4b244 */
  push32((uint32_t)(0x11a4b244u));
  /* 11a427b0 push 0x11a4e738 */
  push32((uint32_t)(0x11a4e738u));
  /* 11a427b5 call esi */
  call_ind((uint32_t)(ESI), 0x11a427b7u);
  /* 11a427b7 push 0x11a4b238 */
  push32((uint32_t)(0x11a4b238u));
  /* 11a427bc push 0x11a4f718 */
  push32((uint32_t)(0x11a4f718u));
  /* 11a427c1 call esi */
  call_ind((uint32_t)(ESI), 0x11a427c3u);
  /* 11a427c3 push 0x11a4b22c */
  push32((uint32_t)(0x11a4b22cu));
  /* 11a427c8 push 0x11a4eb90 */
  push32((uint32_t)(0x11a4eb90u));
  /* 11a427cd call esi */
  call_ind((uint32_t)(ESI), 0x11a427cfu);
  /* 11a427cf push 0x11a4b220 */
  push32((uint32_t)(0x11a4b220u));
  /* 11a427d4 push 0x11a4eb88 */
  push32((uint32_t)(0x11a4eb88u));
  /* 11a427d9 call esi */
  call_ind((uint32_t)(ESI), 0x11a427dbu);
  /* 11a427db push 0x11a4b214 */
  push32((uint32_t)(0x11a4b214u));
  /* 11a427e0 push 0x11a4eb78 */
  push32((uint32_t)(0x11a4eb78u));
  /* 11a427e5 call esi */
  call_ind((uint32_t)(ESI), 0x11a427e7u);
  /* 11a427e7 push 0x11a4b208 */
  push32((uint32_t)(0x11a4b208u));
  /* 11a427ec push 0x11a4eb60 */
  push32((uint32_t)(0x11a4eb60u));
  /* 11a427f1 call esi */
  call_ind((uint32_t)(ESI), 0x11a427f3u);
  /* 11a427f3 push 0x11a4b1fc */
  push32((uint32_t)(0x11a4b1fcu));
  /* 11a427f8 push 0x11a4f6c0 */
  push32((uint32_t)(0x11a4f6c0u));
  /* 11a427fd call esi */
  call_ind((uint32_t)(ESI), 0x11a427ffu);
  /* 11a427ff push 0x11a4b1f0 */
  push32((uint32_t)(0x11a4b1f0u));
  /* 11a42804 push 0x11a4f6b8 */
  push32((uint32_t)(0x11a4f6b8u));
  /* 11a42809 call esi */
  call_ind((uint32_t)(ESI), 0x11a4280bu);
  /* 11a4280b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4280e push 0x11a4b1e4 */
  push32((uint32_t)(0x11a4b1e4u));
  /* 11a42813 push 0x11a4f6b0 */
  push32((uint32_t)(0x11a4f6b0u));
  /* 11a42818 call esi */
  call_ind((uint32_t)(ESI), 0x11a4281au);
  /* 11a4281a push 0x11a4b1d8 */
  push32((uint32_t)(0x11a4b1d8u));
  /* 11a4281f push 0x11a4ef00 */
  push32((uint32_t)(0x11a4ef00u));
  /* 11a42824 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42826u);
  /* 11a42826 push 0x11a4b1d0 */
  push32((uint32_t)(0x11a4b1d0u));
  /* 11a4282b push 0x11a4ef30 */
  push32((uint32_t)(0x11a4ef30u));
  /* 11a42830 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42832u);
  /* 11a42832 mov edi, dword ptr [0x11a4a188] */
  EDI = (r32((uint32_t)(0x11a4a188)));
  /* 11a42838 push 0x11a4eaa8 */
  push32((uint32_t)(0x11a4eaa8u));
  /* 11a4283d call edi */
  call_ind((uint32_t)(EDI), 0x11a4283fu);
  /* 11a4283f push 8 */
  push32((uint32_t)(0x8u));
  /* 11a42841 push 0x11a4eaa8 */
  push32((uint32_t)(0x11a4eaa8u));
  /* 11a42846 call ebp */
  call_ind((uint32_t)(EBP), 0x11a42848u);
  /* 11a42848 push 0x11a4b1c4 */
  push32((uint32_t)(0x11a4b1c4u));
  /* 11a4284d push 0x11a4e3c0 */
  push32((uint32_t)(0x11a4e3c0u));
  /* 11a42852 call esi */
  call_ind((uint32_t)(ESI), 0x11a42854u);
  /* 11a42854 push 0x11a4b1b8 */
  push32((uint32_t)(0x11a4b1b8u));
  /* 11a42859 push 0x11a4e3b8 */
  push32((uint32_t)(0x11a4e3b8u));
  /* 11a4285e call esi */
  call_ind((uint32_t)(ESI), 0x11a42860u);
  /* 11a42860 push 0x11a4b1ac */
  push32((uint32_t)(0x11a4b1acu));
  /* 11a42865 push 0x11a4ef20 */
  push32((uint32_t)(0x11a4ef20u));
  /* 11a4286a call esi */
  call_ind((uint32_t)(ESI), 0x11a4286cu);
  /* 11a4286c push 0x11a4b1a0 */
  push32((uint32_t)(0x11a4b1a0u));
  /* 11a42871 push 0x11a4ef08 */
  push32((uint32_t)(0x11a4ef08u));
  /* 11a42876 call esi */
  call_ind((uint32_t)(ESI), 0x11a42878u);
  /* 11a42878 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4287b push 0x11a4b194 */
  push32((uint32_t)(0x11a4b194u));
  /* 11a42880 push 0x11a4ef10 */
  push32((uint32_t)(0x11a4ef10u));
  /* 11a42885 call esi */
  call_ind((uint32_t)(ESI), 0x11a42887u);
  /* 11a42887 push 0x11a4b18c */
  push32((uint32_t)(0x11a4b18cu));
  /* 11a4288c push 0x11a4f7b0 */
  push32((uint32_t)(0x11a4f7b0u));
  /* 11a42891 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42893u);
  /* 11a42893 push 0x11a4b184 */
  push32((uint32_t)(0x11a4b184u));
  /* 11a42898 push 0x11a4f7a8 */
  push32((uint32_t)(0x11a4f7a8u));
  /* 11a4289d call ebx */
  call_ind((uint32_t)(EBX), 0x11a4289fu);
  /* 11a4289f push 0x11a4f710 */
  push32((uint32_t)(0x11a4f710u));
  /* 11a428a4 call edi */
  call_ind((uint32_t)(EDI), 0x11a428a6u);
  /* 11a428a6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a428a8 push 0x11a4f710 */
  push32((uint32_t)(0x11a4f710u));
  /* 11a428ad call ebp */
  call_ind((uint32_t)(EBP), 0x11a428afu);
  /* 11a428af add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a428b2 pop edi */
  EDI = (pop32());
  /* 11a428b3 pop esi */
  ESI = (pop32());
  /* 11a428b4 pop ebp */
  EBP = (pop32());
  /* 11a428b5 pop ebx */
  EBX = (pop32());
  /* 11a428b6 ret  */
  ESPCHK(0x11a423d0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11a428c0 (3802 bytes, 1197 insns) */
void f_11a428c0(void) {
  FTRACE(0x11a428c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a428c0 mov al, byte ptr [0x11a4f7bc] */
  AL = (r8((uint32_t)(0x11a4f7bc)));
  /* 11a428c5 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a428c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a428ca push ebx */
  push32((uint32_t)(EBX));
  /* 11a428cb push ebp */
  push32((uint32_t)(EBP));
  /* 11a428cc push esi */
  push32((uint32_t)(ESI));
  /* 11a428cd push edi */
  push32((uint32_t)(EDI));
  /* 11a428ce jne 0x11a42bfe */
  if (!C.zf) goto L_11a42bfe;
  /* 11a428d4 push 0x11a4b710 */
  push32((uint32_t)(0x11a4b710u));
  /* 11a428d9 push 0x11a4b6f8 */
  push32((uint32_t)(0x11a4b6f8u));
  /* 11a428de mov byte ptr [0x11a4f7bc], 1 */
  w8((uint32_t)(0x11a4f7bc), (0x1u));
  /* 11a428e5 call 0x11a43fff */
  push32(0x11a428eau); f_11a43fff();
  /* 11a428ea mov esi, eax */
  ESI = (EAX);
  /* 11a428ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a428ef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a428f1 jne 0x11a42a87 */
  if (!C.zf) goto L_11a42a87;
  /* 11a428f7 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a428fa mov edi, 0x11a4b6f0 */
  EDI = (0x11a4b6f0u);
  /* 11a428ff repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a42901 not ecx */
  ECX = (~(ECX));
  /* 11a42903 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42905 mov eax, ecx */
  EAX = (ECX);
  /* 11a42907 mov esi, edi */
  ESI = (EDI);
  /* 11a42909 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a4290c mov edi, 0x11a4f728 */
  EDI = (0x11a4f728u);
  /* 11a42911 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a42913 mov ecx, eax */
  ECX = (EAX);
  /* 11a42915 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a42917 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a4291a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a4291c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a4291f mov edi, 0x11a4b6e8 */
  EDI = (0x11a4b6e8u);
  /* 11a42924 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a42926 not ecx */
  ECX = (~(ECX));
  /* 11a42928 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4292a mov edx, ecx */
  EDX = (ECX);
  /* 11a4292c mov esi, edi */
  ESI = (EDI);
  /* 11a4292e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a42931 mov edi, 0x11a4f73c */
  EDI = (0x11a4f73cu);
  /* 11a42936 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a42938 mov ecx, edx */
  ECX = (EDX);
  /* 11a4293a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a4293d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a4293f or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a42942 mov edi, 0x11a4b6e0 */
  EDI = (0x11a4b6e0u);
  /* 11a42947 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a42949 not ecx */
  ECX = (~(ECX));
  /* 11a4294b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4294d mov eax, ecx */
  EAX = (ECX);
  /* 11a4294f mov esi, edi */
  ESI = (EDI);
  /* 11a42951 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a42954 mov edi, 0x11a4f750 */
  EDI = (0x11a4f750u);
  /* 11a42959 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a4295b mov ecx, eax */
  ECX = (EAX);
  /* 11a4295d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a4295f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a42962 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a42964 mov edi, 0x11a4b6d8 */
  EDI = (0x11a4b6d8u);
  /* 11a42969 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a4296c repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a4296e not ecx */
  ECX = (~(ECX));
  /* 11a42970 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42972 mov edx, ecx */
  EDX = (ECX);
  /* 11a42974 mov esi, edi */
  ESI = (EDI);
  /* 11a42976 mov edi, 0x11a4f764 */
  EDI = (0x11a4f764u);
  /* 11a4297b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a4297e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a42980 mov ecx, edx */
  ECX = (EDX);
  /* 11a42982 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a42985 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a42987 mov edi, 0x11a4b6d0 */
  EDI = (0x11a4b6d0u);
  /* 11a4298c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a4298f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a42991 not ecx */
  ECX = (~(ECX));
  /* 11a42993 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42995 mov eax, ecx */
  EAX = (ECX);
  /* 11a42997 mov esi, edi */
  ESI = (EDI);
  /* 11a42999 mov edi, 0x11a4f778 */
  EDI = (0x11a4f778u);
  /* 11a4299e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a429a1 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a429a3 mov ecx, eax */
  ECX = (EAX);
  /* 11a429a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a429a7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a429aa rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a429ac mov edi, 0x11a4b6c8 */
  EDI = (0x11a4b6c8u);
  /* 11a429b1 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a429b4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a429b6 not ecx */
  ECX = (~(ECX));
  /* 11a429b8 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a429ba mov edx, ecx */
  EDX = (ECX);
  /* 11a429bc mov esi, edi */
  ESI = (EDI);
  /* 11a429be mov edi, 0x11a4f78c */
  EDI = (0x11a4f78cu);
  /* 11a429c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a429c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a429c8 mov ecx, edx */
  ECX = (EDX);
  /* 11a429ca and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a429cd rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a429cf or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a429d2 mov edi, 0x11a4b6c0 */
  EDI = (0x11a4b6c0u);
  /* 11a429d7 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a429d9 not ecx */
  ECX = (~(ECX));
  /* 11a429db sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a429dd mov eax, ecx */
  EAX = (ECX);
  /* 11a429df mov esi, edi */
  ESI = (EDI);
  /* 11a429e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a429e4 mov edi, 0x11a4ead0 */
  EDI = (0x11a4ead0u);
  /* 11a429e9 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a429eb mov ecx, eax */
  ECX = (EAX);
  /* 11a429ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a429ef and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a429f2 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a429f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a429f7 mov edi, 0x11a4b6b8 */
  EDI = (0x11a4b6b8u);
  /* 11a429fc repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a429fe not ecx */
  ECX = (~(ECX));
  /* 11a42a00 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42a02 mov edx, ecx */
  EDX = (ECX);
  /* 11a42a04 mov esi, edi */
  ESI = (EDI);
  /* 11a42a06 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a42a09 mov edi, 0x11a4eae4 */
  EDI = (0x11a4eae4u);
  /* 11a42a0e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a42a10 mov ecx, edx */
  ECX = (EDX);
  /* 11a42a12 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a42a15 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a42a17 mov edi, 0x11a4b6ac */
  EDI = (0x11a4b6acu);
  /* 11a42a1c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a42a1f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a42a21 not ecx */
  ECX = (~(ECX));
  /* 11a42a23 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42a25 mov eax, ecx */
  EAX = (ECX);
  /* 11a42a27 mov esi, edi */
  ESI = (EDI);
  /* 11a42a29 mov edi, 0x11a4eaf8 */
  EDI = (0x11a4eaf8u);
  /* 11a42a2e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a42a31 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a42a33 mov ecx, eax */
  ECX = (EAX);
  /* 11a42a35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a42a37 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a42a3a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a42a3c mov edi, 0x11a4b3d0 */
  EDI = (0x11a4b3d0u);
  /* 11a42a41 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a42a44 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a42a46 not ecx */
  ECX = (~(ECX));
  /* 11a42a48 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42a4a mov edx, ecx */
  EDX = (ECX);
  /* 11a42a4c mov esi, edi */
  ESI = (EDI);
  /* 11a42a4e mov edi, 0x11a4eb0c */
  EDI = (0x11a4eb0cu);
  /* 11a42a53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a42a56 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a42a58 mov ecx, edx */
  ECX = (EDX);
  /* 11a42a5a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a42a5d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a42a5f mov edi, 0x11a4b6a0 */
  EDI = (0x11a4b6a0u);
  /* 11a42a64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a42a67 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a42a69 not ecx */
  ECX = (~(ECX));
  /* 11a42a6b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42a6d mov eax, ecx */
  EAX = (ECX);
  /* 11a42a6f mov esi, edi */
  ESI = (EDI);
  /* 11a42a71 mov edi, 0x11a4eb20 */
  EDI = (0x11a4eb20u);
  /* 11a42a76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a42a79 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a42a7b mov ecx, eax */
  ECX = (EAX);
  /* 11a42a7d and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a42a80 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a42a82 jmp 0x11a42bfe */
  goto L_11a42bfe;
L_11a42a87:;
  /* 11a42a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42a8b push esi */
  push32((uint32_t)(ESI));
  /* 11a42a8c call 0x11a43f15 */
  push32(0x11a42a91u); f_11a43f15();
  /* 11a42a91 push esi */
  push32((uint32_t)(ESI));
  /* 11a42a92 call 0x11a43d92 */
  push32(0x11a42a97u); f_11a43d92();
  /* 11a42a97 mov ebx, eax */
  EBX = (EAX);
  /* 11a42a99 lea ecx, [ebx + 1] */
  ECX = ((uint32_t)(EBX + 0x1));
  /* 11a42a9c push ecx */
  push32((uint32_t)(ECX));
  /* 11a42a9d call 0x11a43d84 */
  push32(0x11a42aa2u); f_11a43d84();
  /* 11a42aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42aa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42aa6 push esi */
  push32((uint32_t)(ESI));
  /* 11a42aa7 mov edi, eax */
  EDI = (EAX);
  /* 11a42aa9 call 0x11a43f15 */
  push32(0x11a42aaeu); f_11a43f15();
  /* 11a42aae push esi */
  push32((uint32_t)(ESI));
  /* 11a42aaf push ebx */
  push32((uint32_t)(EBX));
  /* 11a42ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42ab2 push edi */
  push32((uint32_t)(EDI));
  /* 11a42ab3 call 0x11a43c6d */
  push32(0x11a42ab8u); f_11a43c6d();
  /* 11a42ab8 push esi */
  push32((uint32_t)(ESI));
  /* 11a42ab9 call 0x11a43bf0 */
  push32(0x11a42abeu); f_11a43bf0();
  /* 11a42abe add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42ac1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a42ac3 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
L_11a42ac5:;
  /* 11a42ac5 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11a42ac7 jne 0x11a42ad0 */
  if (!C.zf) goto L_11a42ad0;
  /* 11a42ac9 push 0x11a4b698 */
  push32((uint32_t)(0x11a4b698u));
  /* 11a42ace jmp 0x11a42b0a */
  goto L_11a42b0a;
L_11a42ad0:;
  /* 11a42ad0 cmp ebp, 1 */
  { uint32_t _a=(EBP),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42ad3 jne 0x11a42adc */
  if (!C.zf) goto L_11a42adc;
  /* 11a42ad5 push 0x11a4b690 */
  push32((uint32_t)(0x11a4b690u));
  /* 11a42ada jmp 0x11a42b0a */
  goto L_11a42b0a;
L_11a42adc:;
  /* 11a42adc cmp ebp, 2 */
  { uint32_t _a=(EBP),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42adf jne 0x11a42ae8 */
  if (!C.zf) goto L_11a42ae8;
  /* 11a42ae1 push 0x11a4b688 */
  push32((uint32_t)(0x11a4b688u));
  /* 11a42ae6 jmp 0x11a42b0a */
  goto L_11a42b0a;
L_11a42ae8:;
  /* 11a42ae8 cmp ebp, 3 */
  { uint32_t _a=(EBP),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42aeb jne 0x11a42af4 */
  if (!C.zf) goto L_11a42af4;
  /* 11a42aed push 0x11a4b680 */
  push32((uint32_t)(0x11a4b680u));
  /* 11a42af2 jmp 0x11a42b0a */
  goto L_11a42b0a;
L_11a42af4:;
  /* 11a42af4 cmp ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42af7 jne 0x11a42b00 */
  if (!C.zf) goto L_11a42b00;
  /* 11a42af9 push 0x11a4b678 */
  push32((uint32_t)(0x11a4b678u));
  /* 11a42afe jmp 0x11a42b0a */
  goto L_11a42b0a;
L_11a42b00:;
  /* 11a42b00 cmp ebp, 5 */
  { uint32_t _a=(EBP),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42b03 jne 0x11a42b17 */
  if (!C.zf) goto L_11a42b17;
  /* 11a42b05 push 0x11a4b670 */
  push32((uint32_t)(0x11a4b670u));
L_11a42b0a:;
  /* 11a42b0a push edi */
  push32((uint32_t)(EDI));
  /* 11a42b0b call 0x11a43b70 */
  push32(0x11a42b10u); f_11a43b70();
  /* 11a42b10 mov esi, eax */
  ESI = (EAX);
  /* 11a42b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42b15 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_11a42b17:;
  /* 11a42b17 add esi, 5 */
  { uint32_t _a=(ESI),_b=(0x5u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42b1a push 0x11a4b66c */
  push32((uint32_t)(0x11a4b66cu));
  /* 11a42b1f lea eax, [esi + edi] */
  EAX = ((uint32_t)(ESI + EDI*1));
  /* 11a42b22 push eax */
  push32((uint32_t)(EAX));
  /* 11a42b23 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 11a42b27 call 0x11a43b30 */
  push32(0x11a42b2cu); f_11a43b30();
  /* 11a42b2c mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a42b30 lea ebx, [ebp + ebp*4] */
  EBX = ((uint32_t)(EBP + EBP*4));
  /* 11a42b34 shl ebx, 2 */
  EBX = (sh_shl((uint32_t)(EBX), (0x2u)&0x1f, 32));
  /* 11a42b37 mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 11a42b3b push eax */
  push32((uint32_t)(EAX));
  /* 11a42b3c lea eax, [ebx + 0x11a4f728] */
  EAX = ((uint32_t)(EBX + 0x11a4f728));
  /* 11a42b42 push edx */
  push32((uint32_t)(EDX));
  /* 11a42b43 push eax */
  push32((uint32_t)(EAX));
  /* 11a42b44 call 0x11a43a30 */
  push32(0x11a42b49u); f_11a43a30();
  /* 11a42b49 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a42b4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42b50 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a42b51 cmp ebp, 6 */
  { uint32_t _a=(EBP),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42b54 mov byte ptr [ebx + ecx + 0x11a4f728], 0 */
  w8((uint32_t)(EBX + ECX*1 + 0x11a4f728), (0x0u));
  /* 11a42b5c jl 0x11a42ac5 */
  if ((C.sf!=C.of)) goto L_11a42ac5;
  /* 11a42b62 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
L_11a42b64:;
  /* 11a42b64 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11a42b66 jne 0x11a42b6f */
  if (!C.zf) goto L_11a42b6f;
  /* 11a42b68 push 0x11a4b6c0 */
  push32((uint32_t)(0x11a4b6c0u));
  /* 11a42b6d jmp 0x11a42b9d */
  goto L_11a42b9d;
L_11a42b6f:;
  /* 11a42b6f cmp ebp, 1 */
  { uint32_t _a=(EBP),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42b72 jne 0x11a42b7b */
  if (!C.zf) goto L_11a42b7b;
  /* 11a42b74 push 0x11a4b6b8 */
  push32((uint32_t)(0x11a4b6b8u));
  /* 11a42b79 jmp 0x11a42b9d */
  goto L_11a42b9d;
L_11a42b7b:;
  /* 11a42b7b cmp ebp, 2 */
  { uint32_t _a=(EBP),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42b7e jne 0x11a42b87 */
  if (!C.zf) goto L_11a42b87;
  /* 11a42b80 push 0x11a4b6ac */
  push32((uint32_t)(0x11a4b6acu));
  /* 11a42b85 jmp 0x11a42b9d */
  goto L_11a42b9d;
L_11a42b87:;
  /* 11a42b87 cmp ebp, 3 */
  { uint32_t _a=(EBP),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42b8a jne 0x11a42b93 */
  if (!C.zf) goto L_11a42b93;
  /* 11a42b8c push 0x11a4b3d0 */
  push32((uint32_t)(0x11a4b3d0u));
  /* 11a42b91 jmp 0x11a42b9d */
  goto L_11a42b9d;
L_11a42b93:;
  /* 11a42b93 cmp ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42b96 jne 0x11a42baa */
  if (!C.zf) goto L_11a42baa;
  /* 11a42b98 push 0x11a4b6a0 */
  push32((uint32_t)(0x11a4b6a0u));
L_11a42b9d:;
  /* 11a42b9d push edi */
  push32((uint32_t)(EDI));
  /* 11a42b9e call 0x11a43b70 */
  push32(0x11a42ba3u); f_11a43b70();
  /* 11a42ba3 mov esi, eax */
  ESI = (EAX);
  /* 11a42ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42ba8 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_11a42baa:;
  /* 11a42baa add esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42bad push 0x11a4b66c */
  push32((uint32_t)(0x11a4b66cu));
  /* 11a42bb2 lea eax, [esi + edi] */
  EAX = ((uint32_t)(ESI + EDI*1));
  /* 11a42bb5 push eax */
  push32((uint32_t)(EAX));
  /* 11a42bb6 mov dword ptr [esp + 0x18], eax */
  w32((uint32_t)(ESP + 0x18), (EAX));
  /* 11a42bba call 0x11a43b30 */
  push32(0x11a42bbfu); f_11a43b30();
  /* 11a42bbf mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a42bc3 lea ebx, [ebp + ebp*4] */
  EBX = ((uint32_t)(EBP + EBP*4));
  /* 11a42bc7 shl ebx, 2 */
  EBX = (sh_shl((uint32_t)(EBX), (0x2u)&0x1f, 32));
  /* 11a42bca mov dword ptr [esp + 0x1c], eax */
  w32((uint32_t)(ESP + 0x1c), (EAX));
  /* 11a42bce push eax */
  push32((uint32_t)(EAX));
  /* 11a42bcf lea eax, [ebx + 0x11a4ead0] */
  EAX = ((uint32_t)(EBX + 0x11a4ead0));
  /* 11a42bd5 push edx */
  push32((uint32_t)(EDX));
  /* 11a42bd6 push eax */
  push32((uint32_t)(EAX));
  /* 11a42bd7 call 0x11a43a30 */
  push32(0x11a42bdcu); f_11a43a30();
  /* 11a42bdc mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a42be0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42be3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a42be4 cmp ebp, 5 */
  { uint32_t _a=(EBP),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42be7 mov byte ptr [ebx + ecx + 0x11a4ead0], 0 */
  w8((uint32_t)(EBX + ECX*1 + 0x11a4ead0), (0x0u));
  /* 11a42bef jl 0x11a42b64 */
  if ((C.sf!=C.of)) goto L_11a42b64;
  /* 11a42bf5 push edi */
  push32((uint32_t)(EDI));
  /* 11a42bf6 call 0x11a43a20 */
  push32(0x11a42bfbu); f_11a43a20();
  /* 11a42bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a42bfe:;
  /* 11a42bfe push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42c00 call dword ptr [0x11a4a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0e8))), 0x11a42c06u);
  /* 11a42c06 mov edi, dword ptr [0x11a4a154] */
  EDI = (r32((uint32_t)(0x11a4a154)));
  /* 11a42c0c mov ebx, dword ptr [0x11a4a0f8] */
  EBX = (r32((uint32_t)(0x11a4a0f8)));
  /* 11a42c12 mov ebp, dword ptr [0x11a4a0fc] */
  EBP = (r32((uint32_t)(0x11a4a0fc)));
  /* 11a42c18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42c1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a42c1d je 0x11a430e5 */
  if (C.zf) goto L_11a430e5;
  /* 11a42c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42c27 call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a42c2du);
  /* 11a42c2d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c36 call edi */
  call_ind((uint32_t)(EDI), 0x11a42c38u);
  /* 11a42c38 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42c3d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42c3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c41 call edi */
  call_ind((uint32_t)(EDI), 0x11a42c43u);
  /* 11a42c43 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42c48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c4c call edi */
  call_ind((uint32_t)(EDI), 0x11a42c4eu);
  /* 11a42c4e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c57 call edi */
  call_ind((uint32_t)(EDI), 0x11a42c59u);
  /* 11a42c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c5b call ebx */
  call_ind((uint32_t)(EBX), 0x11a42c5du);
  /* 11a42c5d mov ecx, 5 */
  ECX = (0x5u);
  /* 11a42c62 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42c64 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a42c67 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a42c6a lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11a42c6d shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11a42c70 push edx */
  push32((uint32_t)(EDX));
  /* 11a42c71 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a42c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c75 call edi */
  call_ind((uint32_t)(EDI), 0x11a42c77u);
  /* 11a42c77 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c7c call ebx */
  call_ind((uint32_t)(EBX), 0x11a42c7eu);
  /* 11a42c7e mov ecx, 5 */
  ECX = (0x5u);
  /* 11a42c83 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a42c85 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a42c88 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a42c8b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a42c8e shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a42c91 push eax */
  push32((uint32_t)(EAX));
  /* 11a42c92 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a42c94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c96 call edi */
  call_ind((uint32_t)(EDI), 0x11a42c98u);
  /* 11a42c98 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42c9f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42ca1 call edi */
  call_ind((uint32_t)(EDI), 0x11a42ca3u);
  /* 11a42ca3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42ca8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42caa push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42cac call edi */
  call_ind((uint32_t)(EDI), 0x11a42caeu);
  /* 11a42cae push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42cb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42cb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42cb7 call edi */
  call_ind((uint32_t)(EDI), 0x11a42cb9u);
  /* 11a42cb9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42cbe push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42cc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42cc2 call edi */
  call_ind((uint32_t)(EDI), 0x11a42cc4u);
  /* 11a42cc4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42cc7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42ccc push 4 */
  push32((uint32_t)(0x4u));
  /* 11a42cce push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42cd0 call edi */
  call_ind((uint32_t)(EDI), 0x11a42cd2u);
  /* 11a42cd2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42cd7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a42cd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42cdb call edi */
  call_ind((uint32_t)(EDI), 0x11a42cddu);
  /* 11a42cdd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42ce2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42ce4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42ce6 call edi */
  call_ind((uint32_t)(EDI), 0x11a42ce8u);
  /* 11a42ce8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42ced push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42cef push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42cf1 call edi */
  call_ind((uint32_t)(EDI), 0x11a42cf3u);
  /* 11a42cf3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42cf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42cfa push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42cfc call edi */
  call_ind((uint32_t)(EDI), 0x11a42cfeu);
  /* 11a42cfe push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42d03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42d05 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42d07 call edi */
  call_ind((uint32_t)(EDI), 0x11a42d09u);
  /* 11a42d09 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42d0c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42d11 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a42d13 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42d15 call edi */
  call_ind((uint32_t)(EDI), 0x11a42d17u);
  /* 11a42d17 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a42d1c push 5 */
  push32((uint32_t)(0x5u));
  /* 11a42d1e push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42d20 call edi */
  call_ind((uint32_t)(EDI), 0x11a42d22u);
  /* 11a42d22 mov esi, dword ptr [0x11a4a104] */
  ESI = (r32((uint32_t)(0x11a4a104)));
  /* 11a42d28 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d2c call esi */
  call_ind((uint32_t)(ESI), 0x11a42d2eu);
  /* 11a42d2e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a42d30 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42d32 call esi */
  call_ind((uint32_t)(ESI), 0x11a42d34u);
  /* 11a42d34 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11a42d36 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a42d38 call esi */
  call_ind((uint32_t)(ESI), 0x11a42d3au);
  /* 11a42d3a mov esi, dword ptr [0x11a4a108] */
  ESI = (r32((uint32_t)(0x11a4a108)));
  /* 11a42d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d42 push 0x11a4f2d0 */
  push32((uint32_t)(0x11a4f2d0u));
  /* 11a42d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d49 call esi */
  call_ind((uint32_t)(ESI), 0x11a42d4bu);
  /* 11a42d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d4d push 0x11a4ef40 */
  push32((uint32_t)(0x11a4ef40u));
  /* 11a42d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d54 call esi */
  call_ind((uint32_t)(ESI), 0x11a42d56u);
  /* 11a42d56 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d5b push 0x11a4f2e0 */
  push32((uint32_t)(0x11a4f2e0u));
  /* 11a42d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d62 call esi */
  call_ind((uint32_t)(ESI), 0x11a42d64u);
  /* 11a42d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d66 push 0x11a4eb98 */
  push32((uint32_t)(0x11a4eb98u));
  /* 11a42d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d6d call esi */
  call_ind((uint32_t)(ESI), 0x11a42d6fu);
  /* 11a42d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d71 push 0x11a4eb80 */
  push32((uint32_t)(0x11a4eb80u));
  /* 11a42d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d78 call esi */
  call_ind((uint32_t)(ESI), 0x11a42d7au);
  /* 11a42d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d7c push 0x11a4f6c8 */
  push32((uint32_t)(0x11a4f6c8u));
  /* 11a42d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d83 call esi */
  call_ind((uint32_t)(ESI), 0x11a42d85u);
  /* 11a42d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d87 push 0x11a4f6a8 */
  push32((uint32_t)(0x11a4f6a8u));
  /* 11a42d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d8e call esi */
  call_ind((uint32_t)(ESI), 0x11a42d90u);
  /* 11a42d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d92 push 0x11a4eab8 */
  push32((uint32_t)(0x11a4eab8u));
  /* 11a42d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42d99 call esi */
  call_ind((uint32_t)(ESI), 0x11a42d9bu);
  /* 11a42d9b mov esi, dword ptr [0x11a4a100] */
  ESI = (r32((uint32_t)(0x11a4a100)));
  /* 11a42da1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42da4 push 0x11a4f310 */
  push32((uint32_t)(0x11a4f310u));
  /* 11a42da9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42dab call esi */
  call_ind((uint32_t)(ESI), 0x11a42dadu);
  /* 11a42dad push 0x11a4f2c0 */
  push32((uint32_t)(0x11a4f2c0u));
  /* 11a42db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42db4 call esi */
  call_ind((uint32_t)(ESI), 0x11a42db6u);
  /* 11a42db6 push 0x11a4ef48 */
  push32((uint32_t)(0x11a4ef48u));
  /* 11a42dbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42dbd call esi */
  call_ind((uint32_t)(ESI), 0x11a42dbfu);
  /* 11a42dbf push 0x11a4ef18 */
  push32((uint32_t)(0x11a4ef18u));
  /* 11a42dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42dc6 call esi */
  call_ind((uint32_t)(ESI), 0x11a42dc8u);
  /* 11a42dc8 push 0x11a4eb70 */
  push32((uint32_t)(0x11a4eb70u));
  /* 11a42dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42dcf call esi */
  call_ind((uint32_t)(ESI), 0x11a42dd1u);
  /* 11a42dd1 push 0x11a4eb50 */
  push32((uint32_t)(0x11a4eb50u));
  /* 11a42dd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42dd8 call esi */
  call_ind((uint32_t)(ESI), 0x11a42ddau);
  /* 11a42dda push 0x11a4eac8 */
  push32((uint32_t)(0x11a4eac8u));
  /* 11a42ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42de1 call esi */
  call_ind((uint32_t)(ESI), 0x11a42de3u);
  /* 11a42de3 push 0x11a4f320 */
  push32((uint32_t)(0x11a4f320u));
  /* 11a42de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42dea call esi */
  call_ind((uint32_t)(ESI), 0x11a42decu);
  /* 11a42dec add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42def push 0x11a4f2c8 */
  push32((uint32_t)(0x11a4f2c8u));
  /* 11a42df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42df6 call esi */
  call_ind((uint32_t)(ESI), 0x11a42df8u);
  /* 11a42df8 push 0x11a4ef58 */
  push32((uint32_t)(0x11a4ef58u));
  /* 11a42dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42dff call esi */
  call_ind((uint32_t)(ESI), 0x11a42e01u);
  /* 11a42e01 push 0x11a4ef28 */
  push32((uint32_t)(0x11a4ef28u));
  /* 11a42e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e08 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e0au);
  /* 11a42e0a push 0x11a4eba0 */
  push32((uint32_t)(0x11a4eba0u));
  /* 11a42e0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e11 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e13u);
  /* 11a42e13 push 0x11a4eb58 */
  push32((uint32_t)(0x11a4eb58u));
  /* 11a42e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e1a call esi */
  call_ind((uint32_t)(ESI), 0x11a42e1cu);
  /* 11a42e1c push 0x11a4eb38 */
  push32((uint32_t)(0x11a4eb38u));
  /* 11a42e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e23 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e25u);
  /* 11a42e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e27 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42e29u);
  /* 11a42e29 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42e2c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42e2f jl 0x11a42e76 */
  if ((C.sf!=C.of)) goto L_11a42e76;
  /* 11a42e31 push 0x11a4f338 */
  push32((uint32_t)(0x11a4f338u));
  /* 11a42e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e38 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e3au);
  /* 11a42e3a push 0x11a4f330 */
  push32((uint32_t)(0x11a4f330u));
  /* 11a42e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e41 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e43u);
  /* 11a42e43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e45 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42e47u);
  /* 11a42e47 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42e4a cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a42e4d jne 0x11a42e76 */
  if (!C.zf) goto L_11a42e76;
  /* 11a42e4f push 0x11a4eaa0 */
  push32((uint32_t)(0x11a4eaa0u));
  /* 11a42e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e56 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e58u);
  /* 11a42e58 push 0x11a4f308 */
  push32((uint32_t)(0x11a4f308u));
  /* 11a42e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e5f call esi */
  call_ind((uint32_t)(ESI), 0x11a42e61u);
  /* 11a42e61 push 0x11a4ea98 */
  push32((uint32_t)(0x11a4ea98u));
  /* 11a42e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e68 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e6au);
  /* 11a42e6a push 0x11a4f2f8 */
  push32((uint32_t)(0x11a4f2f8u));
  /* 11a42e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e71 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e73u);
  /* 11a42e73 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a42e76:;
  /* 11a42e76 mov esi, dword ptr [0x11a4a110] */
  ESI = (r32((uint32_t)(0x11a4a110)));
  /* 11a42e7c push 0x11a4b2ec */
  push32((uint32_t)(0x11a4b2ecu));
  /* 11a42e81 push 0x11a4b474 */
  push32((uint32_t)(0x11a4b474u));
  /* 11a42e86 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e88u);
  /* 11a42e88 push 0x11a4b2f4 */
  push32((uint32_t)(0x11a4b2f4u));
  /* 11a42e8d push 0x11a4b474 */
  push32((uint32_t)(0x11a4b474u));
  /* 11a42e92 call esi */
  call_ind((uint32_t)(ESI), 0x11a42e94u);
  /* 11a42e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42e96 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42e98u);
  /* 11a42e98 mov esi, dword ptr [0x11a4a114] */
  ESI = (r32((uint32_t)(0x11a4a114)));
  /* 11a42e9e push eax */
  push32((uint32_t)(EAX));
  /* 11a42e9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42ea1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42ea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42ea5 push 0x11a4b660 */
  push32((uint32_t)(0x11a4b660u));
  /* 11a42eaa push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42eac call esi */
  call_ind((uint32_t)(ESI), 0x11a42eaeu);
  /* 11a42eae push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42eb0 call ebx */
  call_ind((uint32_t)(EBX), 0x11a42eb2u);
  /* 11a42eb2 push eax */
  push32((uint32_t)(EAX));
  /* 11a42eb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42eb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42eb9 push 0x11a4b654 */
  push32((uint32_t)(0x11a4b654u));
  /* 11a42ebe push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42ec0 call esi */
  call_ind((uint32_t)(ESI), 0x11a42ec2u);
  /* 11a42ec2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42ec5 mov ecx, 0x11a4e740 */
  ECX = (0x11a4e740u);
  /* 11a42eca push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42ece push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42ed4 push 0x11a4ef60 */
  push32((uint32_t)(0x11a4ef60u));
  /* 11a42ed9 push 0x11a4b64c */
  push32((uint32_t)(0x11a4b64cu));
  /* 11a42ede push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42ee0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42ee2 push 0x11a4f2d8 */
  push32((uint32_t)(0x11a4f2d8u));
  /* 11a42ee7 push 0x11a4ead0 */
  push32((uint32_t)(0x11a4ead0u));
  /* 11a42eec push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42eee push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42ef0 call 0x11a41020 */
  push32(0x11a42ef5u); f_11a41020();
  /* 11a42ef5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a42ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42efb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42efd push 0x11a4eba8 */
  push32((uint32_t)(0x11a4eba8u));
  /* 11a42f02 push 0x11a4ef60 */
  push32((uint32_t)(0x11a4ef60u));
  /* 11a42f07 push 0x11a4b640 */
  push32((uint32_t)(0x11a4b640u));
  /* 11a42f0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42f0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42f10 push 0x11a4eb68 */
  push32((uint32_t)(0x11a4eb68u));
  /* 11a42f15 push 0x11a4eae4 */
  push32((uint32_t)(0x11a4eae4u));
  /* 11a42f1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42f1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42f1e mov ecx, 0x11a4e3c8 */
  ECX = (0x11a4e3c8u);
  /* 11a42f23 call 0x11a41020 */
  push32(0x11a42f28u); f_11a41020();
  /* 11a42f28 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f32 push 0x11a4eba8 */
  push32((uint32_t)(0x11a4eba8u));
  /* 11a42f37 push 0x11a4b638 */
  push32((uint32_t)(0x11a4b638u));
  /* 11a42f3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42f3e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42f40 push 0x11a4f6f8 */
  push32((uint32_t)(0x11a4f6f8u));
  /* 11a42f45 push 0x11a4eaf8 */
  push32((uint32_t)(0x11a4eaf8u));
  /* 11a42f4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a42f4c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42f4e mov ecx, 0x11a4f340 */
  ECX = (0x11a4f340u);
  /* 11a42f53 call 0x11a41020 */
  push32(0x11a42f58u); f_11a41020();
  /* 11a42f58 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f60 push 0x11a4e3c8 */
  push32((uint32_t)(0x11a4e3c8u));
  /* 11a42f65 push 0x11a4e740 */
  push32((uint32_t)(0x11a4e740u));
  /* 11a42f6a push 0x11a4b62c */
  push32((uint32_t)(0x11a4b62cu));
  /* 11a42f6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42f71 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42f73 push 0x11a4f7a0 */
  push32((uint32_t)(0x11a4f7a0u));
  /* 11a42f78 push 0x11a4eb0c */
  push32((uint32_t)(0x11a4eb0cu));
  /* 11a42f7d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42f7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f81 mov ecx, 0x11a4ef60 */
  ECX = (0x11a4ef60u);
  /* 11a42f86 call 0x11a41020 */
  push32(0x11a42f8bu); f_11a41020();
  /* 11a42f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42f93 push 0x11a4f340 */
  push32((uint32_t)(0x11a4f340u));
  /* 11a42f98 push 0x11a4e3c8 */
  push32((uint32_t)(0x11a4e3c8u));
  /* 11a42f9d push 0x11a4b620 */
  push32((uint32_t)(0x11a4b620u));
  /* 11a42fa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42fa6 push 0x11a4f708 */
  push32((uint32_t)(0x11a4f708u));
  /* 11a42fab push 0x11a4eb20 */
  push32((uint32_t)(0x11a4eb20u));
  /* 11a42fb0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a42fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42fb4 mov ecx, 0x11a4eba8 */
  ECX = (0x11a4eba8u);
  /* 11a42fb9 call 0x11a41020 */
  push32(0x11a42fbeu); f_11a41020();
  /* 11a42fbe push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a42fc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a42fc2 call ebp */
  call_ind((uint32_t)(EBP), 0x11a42fc4u);
  /* 11a42fc4 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a42fc6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a42fc8 call ebp */
  call_ind((uint32_t)(EBP), 0x11a42fcau);
  /* 11a42fca push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a42fcc push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a42fce call ebp */
  call_ind((uint32_t)(EBP), 0x11a42fd0u);
  /* 11a42fd0 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a42fd2 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a42fd4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a42fd6u);
  /* 11a42fd6 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11a42fd8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a42fda call ebp */
  call_ind((uint32_t)(EBP), 0x11a42fdcu);
  /* 11a42fdc push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a42fde push 1 */
  push32((uint32_t)(0x1u));
  /* 11a42fe0 call ebp */
  call_ind((uint32_t)(EBP), 0x11a42fe2u);
  /* 11a42fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42fe4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a42fe6 call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a42fecu);
  /* 11a42fec push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42fee push 0x11a4ef30 */
  push32((uint32_t)(0x11a4ef30u));
  /* 11a42ff3 call dword ptr [0x11a4a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a168))), 0x11a42ff9u);
  /* 11a42ff9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a42ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a42ffe call dword ptr [0x11a4a10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a10c))), 0x11a43004u);
  /* 11a43004 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43006 call dword ptr [0x11a4a11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a11c))), 0x11a4300cu);
  /* 11a4300c push 0x11a4ef00 */
  push32((uint32_t)(0x11a4ef00u));
  /* 11a43011 call dword ptr [0x11a4a190] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a190))), 0x11a43017u);
  /* 11a43017 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43019 call ebx */
  call_ind((uint32_t)(EBX), 0x11a4301bu);
  /* 11a4301b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4301e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43021 jl 0x11a43053 */
  if ((C.sf!=C.of)) goto L_11a43053;
  /* 11a43023 mov esi, dword ptr [0x11a4a110] */
  ESI = (r32((uint32_t)(0x11a4a110)));
  /* 11a43029 push 0x11a4b60c */
  push32((uint32_t)(0x11a4b60cu));
  /* 11a4302e push 0x11a4b604 */
  push32((uint32_t)(0x11a4b604u));
  /* 11a43033 call esi */
  call_ind((uint32_t)(ESI), 0x11a43035u);
  /* 11a43035 push 0x11a4b5f0 */
  push32((uint32_t)(0x11a4b5f0u));
  /* 11a4303a push 0x11a4b604 */
  push32((uint32_t)(0x11a4b604u));
  /* 11a4303f call esi */
  call_ind((uint32_t)(ESI), 0x11a43041u);
  /* 11a43041 mov eax, dword ptr [0x11a4b040] */
  EAX = (r32((uint32_t)(0x11a4b040)));
  /* 11a43046 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43049 sub eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4304c mov dword ptr [0x11a4b040], eax */
  w32((uint32_t)(0x11a4b040), (EAX));
  /* 11a43051 jmp 0x11a43059 */
  goto L_11a43059;
L_11a43053:;
  /* 11a43053 mov esi, dword ptr [0x11a4a110] */
  ESI = (r32((uint32_t)(0x11a4a110)));
L_11a43059:;
  /* 11a43059 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4305b call ebx */
  call_ind((uint32_t)(EBX), 0x11a4305du);
  /* 11a4305d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43060 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43063 jl 0x11a4308f */
  if ((C.sf!=C.of)) goto L_11a4308f;
  /* 11a43065 push 0x11a4b5dc */
  push32((uint32_t)(0x11a4b5dcu));
  /* 11a4306a push 0x11a4b604 */
  push32((uint32_t)(0x11a4b604u));
  /* 11a4306f call esi */
  call_ind((uint32_t)(ESI), 0x11a43071u);
  /* 11a43071 push 0x11a4b5c8 */
  push32((uint32_t)(0x11a4b5c8u));
  /* 11a43076 push 0x11a4b604 */
  push32((uint32_t)(0x11a4b604u));
  /* 11a4307b call esi */
  call_ind((uint32_t)(ESI), 0x11a4307du);
  /* 11a4307d mov eax, dword ptr [0x11a4b040] */
  EAX = (r32((uint32_t)(0x11a4b040)));
  /* 11a43082 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43085 sub eax, 0xc8 */
  { uint32_t _a=(EAX),_b=(0xc8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4308a mov dword ptr [0x11a4b040], eax */
  w32((uint32_t)(0x11a4b040), (EAX));
L_11a4308f:;
  /* 11a4308f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43091 call ebx */
  call_ind((uint32_t)(EBX), 0x11a43093u);
  /* 11a43093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43096 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43099 jne 0x11a430c5 */
  if (!C.zf) goto L_11a430c5;
  /* 11a4309b push 0x11a4b5b4 */
  push32((uint32_t)(0x11a4b5b4u));
  /* 11a430a0 push 0x11a4b604 */
  push32((uint32_t)(0x11a4b604u));
  /* 11a430a5 call esi */
  call_ind((uint32_t)(ESI), 0x11a430a7u);
  /* 11a430a7 push 0x11a4b5a0 */
  push32((uint32_t)(0x11a4b5a0u));
  /* 11a430ac push 0x11a4b604 */
  push32((uint32_t)(0x11a4b604u));
  /* 11a430b1 call esi */
  call_ind((uint32_t)(ESI), 0x11a430b3u);
  /* 11a430b3 mov eax, dword ptr [0x11a4b040] */
  EAX = (r32((uint32_t)(0x11a4b040)));
  /* 11a430b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a430bb sub eax, 0xc8 */
  { uint32_t _a=(EAX),_b=(0xc8u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a430c0 mov dword ptr [0x11a4b040], eax */
  w32((uint32_t)(0x11a4b040), (EAX));
L_11a430c5:;
  /* 11a430c5 push 0x11a4b598 */
  push32((uint32_t)(0x11a4b598u));
  /* 11a430ca call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a430d0u);
  /* 11a430d0 mov esi, dword ptr [0x11a4a120] */
  ESI = (r32((uint32_t)(0x11a4a120)));
  /* 11a430d6 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11a430d8 call esi */
  call_ind((uint32_t)(ESI), 0x11a430dau);
  /* 11a430da push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11a430dc call esi */
  call_ind((uint32_t)(ESI), 0x11a430deu);
  /* 11a430de push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11a430e0 call esi */
  call_ind((uint32_t)(ESI), 0x11a430e2u);
  /* 11a430e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a430e5:;
  /* 11a430e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a430e7 push 0x11a4f710 */
  push32((uint32_t)(0x11a4f710u));
  /* 11a430ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11a430ee call dword ptr [0x11a4a118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a118))), 0x11a430f4u);
  /* 11a430f4 push 0x11a4f6e0 */
  push32((uint32_t)(0x11a4f6e0u));
  /* 11a430f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a430fb push 0x11a4f2f0 */
  push32((uint32_t)(0x11a4f2f0u));
  /* 11a43100 push 0x11a4e730 */
  push32((uint32_t)(0x11a4e730u));
  /* 11a43105 call 0x11a437a0 */
  push32(0x11a4310au); f_11a437a0();
  /* 11a4310a push 0x11a4f6e0 */
  push32((uint32_t)(0x11a4f6e0u));
  /* 11a4310f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43111 push 0x11a4f2f0 */
  push32((uint32_t)(0x11a4f2f0u));
  /* 11a43116 push 0x11a4e728 */
  push32((uint32_t)(0x11a4e728u));
  /* 11a4311b call 0x11a437a0 */
  push32(0x11a43120u); f_11a437a0();
  /* 11a43120 push 0x11a4f6e0 */
  push32((uint32_t)(0x11a4f6e0u));
  /* 11a43125 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43127 push 0x11a4f2f0 */
  push32((uint32_t)(0x11a4f2f0u));
  /* 11a4312c push 0x11a4e720 */
  push32((uint32_t)(0x11a4e720u));
  /* 11a43131 call 0x11a437a0 */
  push32(0x11a43136u); f_11a437a0();
  /* 11a43136 push 0x11a4f6e0 */
  push32((uint32_t)(0x11a4f6e0u));
  /* 11a4313b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4313d push 0x11a4f2f0 */
  push32((uint32_t)(0x11a4f2f0u));
  /* 11a43142 push 0x11a4e738 */
  push32((uint32_t)(0x11a4e738u));
  /* 11a43147 call 0x11a437a0 */
  push32(0x11a4314cu); f_11a437a0();
  /* 11a4314c add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4314f push 0x11a4f698 */
  push32((uint32_t)(0x11a4f698u));
  /* 11a43154 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43156 push 0x11a4f2f0 */
  push32((uint32_t)(0x11a4f2f0u));
  /* 11a4315b push 0x11a4e730 */
  push32((uint32_t)(0x11a4e730u));
  /* 11a43160 call 0x11a437a0 */
  push32(0x11a43165u); f_11a437a0();
  /* 11a43165 push 0x11a4f698 */
  push32((uint32_t)(0x11a4f698u));
  /* 11a4316a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4316c push 0x11a4f2f0 */
  push32((uint32_t)(0x11a4f2f0u));
  /* 11a43171 push 0x11a4e728 */
  push32((uint32_t)(0x11a4e728u));
  /* 11a43176 call 0x11a437a0 */
  push32(0x11a4317bu); f_11a437a0();
  /* 11a4317b push 0x11a4f698 */
  push32((uint32_t)(0x11a4f698u));
  /* 11a43180 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43182 push 0x11a4f2f0 */
  push32((uint32_t)(0x11a4f2f0u));
  /* 11a43187 push 0x11a4e720 */
  push32((uint32_t)(0x11a4e720u));
  /* 11a4318c call 0x11a437a0 */
  push32(0x11a43191u); f_11a437a0();
  /* 11a43191 push 0x11a4f698 */
  push32((uint32_t)(0x11a4f698u));
  /* 11a43196 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43198 push 0x11a4f2f0 */
  push32((uint32_t)(0x11a4f2f0u));
  /* 11a4319d push 0x11a4e738 */
  push32((uint32_t)(0x11a4e738u));
  /* 11a431a2 call 0x11a437a0 */
  push32(0x11a431a7u); f_11a437a0();
  /* 11a431a7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a431aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a431ac push 0x11a4f710 */
  push32((uint32_t)(0x11a4f710u));
  /* 11a431b1 call dword ptr [0x11a4a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a168))), 0x11a431b7u);
  /* 11a431b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a431ba mov ecx, 0x11a4e740 */
  ECX = (0x11a4e740u);
  /* 11a431bf mov dword ptr [0x11a4b044], 0x11a4e740 */
  w32((uint32_t)(0x11a4b044), (0x11a4e740u));
  /* 11a431c9 mov dword ptr [0x11a4b048], 0x11a4e3c8 */
  w32((uint32_t)(0x11a4b048), (0x11a4e3c8u));
  /* 11a431d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a431d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a431d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a431d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a431db push 0x11a4ef60 */
  push32((uint32_t)(0x11a4ef60u));
  /* 11a431e0 push 0x11a4b64c */
  push32((uint32_t)(0x11a4b64cu));
  /* 11a431e5 push 0x11a4f2d8 */
  push32((uint32_t)(0x11a4f2d8u));
  /* 11a431ea mov dword ptr [0x11a4b04c], 0x11a4f340 */
  w32((uint32_t)(0x11a4b04c), (0x11a4f340u));
  /* 11a431f4 mov dword ptr [0x11a4b050], 0x11a4ef60 */
  w32((uint32_t)(0x11a4b050), (0x11a4ef60u));
  /* 11a431fe mov dword ptr [0x11a4b054], 0x11a4eba8 */
  w32((uint32_t)(0x11a4b054), (0x11a4eba8u));
  /* 11a43208 call 0x11a41200 */
  push32(0x11a4320du); f_11a41200();
  /* 11a4320d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4320f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43211 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43213 push 0x11a4eba8 */
  push32((uint32_t)(0x11a4eba8u));
  /* 11a43218 push 0x11a4ef60 */
  push32((uint32_t)(0x11a4ef60u));
  /* 11a4321d push 0x11a4b640 */
  push32((uint32_t)(0x11a4b640u));
  /* 11a43222 push 0x11a4eb68 */
  push32((uint32_t)(0x11a4eb68u));
  /* 11a43227 mov ecx, 0x11a4e3c8 */
  ECX = (0x11a4e3c8u);
  /* 11a4322c call 0x11a41200 */
  push32(0x11a43231u); f_11a41200();
  /* 11a43231 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43233 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43235 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43237 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43239 push 0x11a4eba8 */
  push32((uint32_t)(0x11a4eba8u));
  /* 11a4323e push 0x11a4b638 */
  push32((uint32_t)(0x11a4b638u));
  /* 11a43243 push 0x11a4f6f8 */
  push32((uint32_t)(0x11a4f6f8u));
  /* 11a43248 mov ecx, 0x11a4f340 */
  ECX = (0x11a4f340u);
  /* 11a4324d call 0x11a41200 */
  push32(0x11a43252u); f_11a41200();
  /* 11a43252 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43254 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43256 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43258 push 0x11a4e3c8 */
  push32((uint32_t)(0x11a4e3c8u));
  /* 11a4325d push 0x11a4e740 */
  push32((uint32_t)(0x11a4e740u));
  /* 11a43262 push 0x11a4b62c */
  push32((uint32_t)(0x11a4b62cu));
  /* 11a43267 push 0x11a4f7a0 */
  push32((uint32_t)(0x11a4f7a0u));
  /* 11a4326c mov ecx, 0x11a4ef60 */
  ECX = (0x11a4ef60u);
  /* 11a43271 call 0x11a41200 */
  push32(0x11a43276u); f_11a41200();
  /* 11a43276 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43278 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4327a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4327c push 0x11a4f340 */
  push32((uint32_t)(0x11a4f340u));
  /* 11a43281 push 0x11a4e3c8 */
  push32((uint32_t)(0x11a4e3c8u));
  /* 11a43286 push 0x11a4b620 */
  push32((uint32_t)(0x11a4b620u));
  /* 11a4328b push 0x11a4f708 */
  push32((uint32_t)(0x11a4f708u));
  /* 11a43290 mov ecx, 0x11a4eba8 */
  ECX = (0x11a4eba8u);
  /* 11a43295 call 0x11a41200 */
  push32(0x11a4329au); f_11a41200();
  /* 11a4329a mov ecx, 0x11a4e740 */
  ECX = (0x11a4e740u);
  /* 11a4329f call 0x11a41250 */
  push32(0x11a432a4u); f_11a41250();
  /* 11a432a4 mov ecx, 0x11a4e3c8 */
  ECX = (0x11a4e3c8u);
  /* 11a432a9 call 0x11a41250 */
  push32(0x11a432aeu); f_11a41250();
  /* 11a432ae mov ecx, 0x11a4f340 */
  ECX = (0x11a4f340u);
  /* 11a432b3 call 0x11a41250 */
  push32(0x11a432b8u); f_11a41250();
  /* 11a432b8 mov esi, dword ptr [0x11a4a180] */
  ESI = (r32((uint32_t)(0x11a4a180)));
  /* 11a432be push 0x11a4eb48 */
  push32((uint32_t)(0x11a4eb48u));
  /* 11a432c3 call esi */
  call_ind((uint32_t)(ESI), 0x11a432c5u);
  /* 11a432c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a432c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a432cb sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11a432ce push ecx */
  push32((uint32_t)(ECX));
  /* 11a432cf push 0x11a4f2e8 */
  push32((uint32_t)(0x11a4f2e8u));
  /* 11a432d4 call esi */
  call_ind((uint32_t)(ESI), 0x11a432d6u);
  /* 11a432d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a432d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a432dc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a432df push edx */
  push32((uint32_t)(EDX));
  /* 11a432e0 push 0x11a4f6f0 */
  push32((uint32_t)(0x11a4f6f0u));
  /* 11a432e5 call esi */
  call_ind((uint32_t)(ESI), 0x11a432e7u);
  /* 11a432e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a432ea mov ecx, 0x11a4e740 */
  ECX = (0x11a4e740u);
  /* 11a432ef push eax */
  push32((uint32_t)(EAX));
  /* 11a432f0 call 0x11a42180 */
  push32(0x11a432f5u); f_11a42180();
  /* 11a432f5 push 0x11a4f328 */
  push32((uint32_t)(0x11a4f328u));
  /* 11a432fa call esi */
  call_ind((uint32_t)(ESI), 0x11a432fcu);
  /* 11a432fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a432ff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43302 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a43305 push eax */
  push32((uint32_t)(EAX));
  /* 11a43306 push 0x11a4f6e8 */
  push32((uint32_t)(0x11a4f6e8u));
  /* 11a4330b call esi */
  call_ind((uint32_t)(ESI), 0x11a4330du);
  /* 11a4330d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43310 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43313 setle cl */
  CL = (((C.zf||C.sf!=C.of)) ? 1u : 0u);
  /* 11a43316 push ecx */
  push32((uint32_t)(ECX));
  /* 11a43317 push 0x11a4ef50 */
  push32((uint32_t)(0x11a4ef50u));
  /* 11a4331c call esi */
  call_ind((uint32_t)(ESI), 0x11a4331eu);
  /* 11a4331e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43321 mov ecx, 0x11a4e3c8 */
  ECX = (0x11a4e3c8u);
  /* 11a43326 push eax */
  push32((uint32_t)(EAX));
  /* 11a43327 call 0x11a42180 */
  push32(0x11a4332cu); f_11a42180();
  /* 11a4332c push 0x11a4f318 */
  push32((uint32_t)(0x11a4f318u));
  /* 11a43331 call esi */
  call_ind((uint32_t)(ESI), 0x11a43333u);
  /* 11a43333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43336 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43339 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a4333c push edx */
  push32((uint32_t)(EDX));
  /* 11a4333d push 0x11a4f6a0 */
  push32((uint32_t)(0x11a4f6a0u));
  /* 11a43342 call esi */
  call_ind((uint32_t)(ESI), 0x11a43344u);
  /* 11a43344 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43347 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4334a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a4334d push eax */
  push32((uint32_t)(EAX));
  /* 11a4334e push 0x11a4eac0 */
  push32((uint32_t)(0x11a4eac0u));
  /* 11a43353 call esi */
  call_ind((uint32_t)(ESI), 0x11a43355u);
  /* 11a43355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43358 mov ecx, 0x11a4f340 */
  ECX = (0x11a4f340u);
  /* 11a4335d push eax */
  push32((uint32_t)(EAX));
  /* 11a4335e call 0x11a42180 */
  push32(0x11a43363u); f_11a42180();
  /* 11a43363 push 0x11a4f720 */
  push32((uint32_t)(0x11a4f720u));
  /* 11a43368 call esi */
  call_ind((uint32_t)(ESI), 0x11a4336au);
  /* 11a4336a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4336d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43370 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11a43373 push ecx */
  push32((uint32_t)(ECX));
  /* 11a43374 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43376 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43378 mov ecx, 0x11a4ef60 */
  ECX = (0x11a4ef60u);
  /* 11a4337d call 0x11a42180 */
  push32(0x11a43382u); f_11a42180();
  /* 11a43382 push 0x11a4eb40 */
  push32((uint32_t)(0x11a4eb40u));
  /* 11a43387 call esi */
  call_ind((uint32_t)(ESI), 0x11a43389u);
  /* 11a43389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4338c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4338f sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a43392 push edx */
  push32((uint32_t)(EDX));
  /* 11a43393 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43395 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43397 mov ecx, 0x11a4eba8 */
  ECX = (0x11a4eba8u);
  /* 11a4339c call 0x11a42180 */
  push32(0x11a433a1u); f_11a42180();
  /* 11a433a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a433a3 mov ecx, 0x11a4e740 */
  ECX = (0x11a4e740u);
  /* 11a433a8 call 0x11a415c0 */
  push32(0x11a433adu); f_11a415c0();
  /* 11a433ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11a433af mov ecx, 0x11a4e3c8 */
  ECX = (0x11a4e3c8u);
  /* 11a433b4 call 0x11a415c0 */
  push32(0x11a433b9u); f_11a415c0();
  /* 11a433b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a433bb mov ecx, 0x11a4f340 */
  ECX = (0x11a4f340u);
  /* 11a433c0 call 0x11a415c0 */
  push32(0x11a433c5u); f_11a415c0();
  /* 11a433c5 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a433c7 call dword ptr [0x11a4a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a128))), 0x11a433cdu);
  /* 11a433cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a433d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a433d2 je 0x11a433eb */
  if (C.zf) goto L_11a433eb;
  /* 11a433d4 mov ecx, 0x11a4e740 */
  ECX = (0x11a4e740u);
  /* 11a433d9 call 0x11a41b90 */
  push32(0x11a433deu); f_11a41b90();
  /* 11a433de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a433e0 je 0x11a433eb */
  if (C.zf) goto L_11a433eb;
  /* 11a433e2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a433e4 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a433e6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a433e8u);
  /* 11a433e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a433eb:;
  /* 11a433eb push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a433ed call dword ptr [0x11a4a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a128))), 0x11a433f3u);
  /* 11a433f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a433f6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a433f8 je 0x11a43411 */
  if (C.zf) goto L_11a43411;
  /* 11a433fa mov ecx, 0x11a4e3c8 */
  ECX = (0x11a4e3c8u);
  /* 11a433ff call 0x11a41b90 */
  push32(0x11a43404u); f_11a41b90();
  /* 11a43404 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43406 je 0x11a43411 */
  if (C.zf) goto L_11a43411;
  /* 11a43408 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a4340a push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a4340c call ebp */
  call_ind((uint32_t)(EBP), 0x11a4340eu);
  /* 11a4340e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43411:;
  /* 11a43411 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a43413 call dword ptr [0x11a4a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a128))), 0x11a43419u);
  /* 11a43419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4341c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4341e je 0x11a43437 */
  if (C.zf) goto L_11a43437;
  /* 11a43420 mov ecx, 0x11a4f340 */
  ECX = (0x11a4f340u);
  /* 11a43425 call 0x11a41b90 */
  push32(0x11a4342au); f_11a41b90();
  /* 11a4342a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4342c je 0x11a43437 */
  if (C.zf) goto L_11a43437;
  /* 11a4342e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a43430 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a43432 call ebp */
  call_ind((uint32_t)(EBP), 0x11a43434u);
  /* 11a43434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43437:;
  /* 11a43437 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a43439 call dword ptr [0x11a4a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a128))), 0x11a4343fu);
  /* 11a4343f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43442 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43444 je 0x11a4345d */
  if (C.zf) goto L_11a4345d;
  /* 11a43446 mov ecx, 0x11a4ef60 */
  ECX = (0x11a4ef60u);
  /* 11a4344b call 0x11a41b90 */
  push32(0x11a43450u); f_11a41b90();
  /* 11a43450 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43452 je 0x11a4345d */
  if (C.zf) goto L_11a4345d;
  /* 11a43454 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a43456 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a43458 call ebp */
  call_ind((uint32_t)(EBP), 0x11a4345au);
  /* 11a4345a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a4345d:;
  /* 11a4345d push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a4345f call dword ptr [0x11a4a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a128))), 0x11a43465u);
  /* 11a43465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43468 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4346a je 0x11a43483 */
  if (C.zf) goto L_11a43483;
  /* 11a4346c mov ecx, 0x11a4eba8 */
  ECX = (0x11a4eba8u);
  /* 11a43471 call 0x11a41b90 */
  push32(0x11a43476u); f_11a41b90();
  /* 11a43476 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43478 je 0x11a43483 */
  if (C.zf) goto L_11a43483;
  /* 11a4347a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a4347c push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a4347e call ebp */
  call_ind((uint32_t)(EBP), 0x11a43480u);
  /* 11a43480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43483:;
  /* 11a43483 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43485 call dword ptr [0x11a4a12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a12c))), 0x11a4348bu);
  /* 11a4348b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4348e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43490 je 0x11a434a6 */
  if (C.zf) goto L_11a434a6;
  /* 11a43492 push 0x11a4b590 */
  push32((uint32_t)(0x11a4b590u));
  /* 11a43497 call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a4349du);
  /* 11a4349d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a434a0 call dword ptr [0x11a4a124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a124))), 0x11a434a6u);
L_11a434a6:;
  /* 11a434a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a434a8 call dword ptr [0x11a4a12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a12c))), 0x11a434aeu);
  /* 11a434ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a434b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a434b3 je 0x11a434ec */
  if (C.zf) goto L_11a434ec;
  /* 11a434b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a434b7 call dword ptr [0x11a4a12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a12c))), 0x11a434bdu);
  /* 11a434bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a434c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a434c2 je 0x11a434ec */
  if (C.zf) goto L_11a434ec;
  /* 11a434c4 push 0x11a4b588 */
  push32((uint32_t)(0x11a4b588u));
  /* 11a434c9 call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a434cfu);
  /* 11a434cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a434d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a434d3 call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a434d9u);
  /* 11a434d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a434db push 5 */
  push32((uint32_t)(0x5u));
  /* 11a434dd call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a434e3u);
  /* 11a434e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a434e6 call dword ptr [0x11a4a134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a134))), 0x11a434ecu);
L_11a434ec:;
  /* 11a434ec push 4 */
  push32((uint32_t)(0x4u));
  /* 11a434ee call dword ptr [0x11a4a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0e8))), 0x11a434f4u);
  /* 11a434f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a434f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a434f9 je 0x11a43522 */
  if (C.zf) goto L_11a43522;
  /* 11a434fb push 2 */
  push32((uint32_t)(0x2u));
  /* 11a434fd call dword ptr [0x11a4a12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a12c))), 0x11a43503u);
  /* 11a43503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43506 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43508 je 0x11a43522 */
  if (C.zf) goto L_11a43522;
  /* 11a4350a push 0x11a4b580 */
  push32((uint32_t)(0x11a4b580u));
  /* 11a4350f call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a43515u);
  /* 11a43515 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43517 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a43519 call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a4351fu);
  /* 11a4351f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43522:;
  /* 11a43522 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a43524 call dword ptr [0x11a4a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0e8))), 0x11a4352au);
  /* 11a4352a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4352d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4352f je 0x11a43558 */
  if (C.zf) goto L_11a43558;
  /* 11a43531 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a43533 call dword ptr [0x11a4a12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a12c))), 0x11a43539u);
  /* 11a43539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4353c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4353e je 0x11a43558 */
  if (C.zf) goto L_11a43558;
  /* 11a43540 push 0x11a4b578 */
  push32((uint32_t)(0x11a4b578u));
  /* 11a43545 call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a4354bu);
  /* 11a4354b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4354d push 5 */
  push32((uint32_t)(0x5u));
  /* 11a4354f call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a43555u);
  /* 11a43555 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43558:;
  /* 11a43558 push 0x11a4f7b0 */
  push32((uint32_t)(0x11a4f7b0u));
  /* 11a4355d call esi */
  call_ind((uint32_t)(ESI), 0x11a4355fu);
  /* 11a4355f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43562 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a43564 je 0x11a43710 */
  if (C.zf) goto L_11a43710;
  /* 11a4356a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4356c call dword ptr [0x11a4a128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a128))), 0x11a43572u);
  /* 11a43572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43575 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43577 je 0x11a436a5 */
  if (C.zf) goto L_11a436a5;
  /* 11a4357d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a4357f call dword ptr [0x11a4a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0e8))), 0x11a43585u);
  /* 11a43585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43588 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4358a jne 0x11a43662 */
  if (!C.zf) goto L_11a43662;
  /* 11a43590 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43592 call dword ptr [0x11a4a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0e8))), 0x11a43598u);
  /* 11a43598 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4359b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4359d je 0x11a43662 */
  if (C.zf) goto L_11a43662;
  /* 11a435a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a435a5 push 0x11a4e3c0 */
  push32((uint32_t)(0x11a4e3c0u));
  /* 11a435aa call dword ptr [0x11a4a138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a138))), 0x11a435b0u);
  /* 11a435b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a435b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a435b5 jne 0x11a435ce */
  if (!C.zf) goto L_11a435ce;
  /* 11a435b7 push eax */
  push32((uint32_t)(EAX));
  /* 11a435b8 push 0x11a4e3b8 */
  push32((uint32_t)(0x11a4e3b8u));
  /* 11a435bd call dword ptr [0x11a4a138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a138))), 0x11a435c3u);
  /* 11a435c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a435c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a435c8 je 0x11a43662 */
  if (C.zf) goto L_11a43662;
L_11a435ce:;
  /* 11a435ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11a435d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a435d2 call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a435d8u);
  /* 11a435d8 push 0x11a4b56c */
  push32((uint32_t)(0x11a4b56cu));
  /* 11a435dd call dword ptr [0x11a4a130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a130))), 0x11a435e3u);
  /* 11a435e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a435e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a435e8 je 0x11a43662 */
  if (C.zf) goto L_11a43662;
  /* 11a435ea push 1 */
  push32((uint32_t)(0x1u));
  /* 11a435ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11a435ee call dword ptr [0x11a4a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a15c))), 0x11a435f4u);
  /* 11a435f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a435f7 cmp eax, 0x18704 */
  { uint32_t _a=(EAX),_b=(0x18704u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a435fc jl 0x11a43654 */
  if ((C.sf!=C.of)) goto L_11a43654;
  /* 11a435fe push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11a43600 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a43602 call dword ptr [0x11a4a104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a104))), 0x11a43608u);
  /* 11a43608 push 0x11a4b560 */
  push32((uint32_t)(0x11a4b560u));
  /* 11a4360d call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a43613u);
  /* 11a43613 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43615 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43617 call dword ptr [0x11a4a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a15c))), 0x11a4361du);
  /* 11a4361d sub eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a43622 push eax */
  push32((uint32_t)(EAX));
  /* 11a43623 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43625 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43627 call edi */
  call_ind((uint32_t)(EDI), 0x11a43629u);
  /* 11a43629 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4362b push 3 */
  push32((uint32_t)(0x3u));
  /* 11a4362d call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a43633u);
  /* 11a43633 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43635 call ebx */
  call_ind((uint32_t)(EBX), 0x11a43637u);
  /* 11a43637 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a4363a mov ecx, 0xc350 */
  ECX = (0xc350u);
  /* 11a4363f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a43642 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a43645 shl eax, 6 */
  EAX = (sh_shl((uint32_t)(EAX), (0x6u)&0x1f, 32));
  /* 11a43648 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4364a push ecx */
  push32((uint32_t)(ECX));
  /* 11a4364b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4364d call ebp */
  call_ind((uint32_t)(EBP), 0x11a4364fu);
  /* 11a4364f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43652 jmp 0x11a43662 */
  goto L_11a43662;
L_11a43654:;
  /* 11a43654 push 0x11a4b554 */
  push32((uint32_t)(0x11a4b554u));
  /* 11a43659 call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a4365fu);
  /* 11a4365f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43662:;
  /* 11a43662 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43664 call dword ptr [0x11a4a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0e8))), 0x11a4366au);
  /* 11a4366a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4366d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4366f jne 0x11a436a5 */
  if (!C.zf) goto L_11a436a5;
  /* 11a43671 mov edi, dword ptr [0x11a4a138] */
  EDI = (r32((uint32_t)(0x11a4a138)));
  /* 11a43677 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43679 push 0x11a4e3c0 */
  push32((uint32_t)(0x11a4e3c0u));
  /* 11a4367e call edi */
  call_ind((uint32_t)(EDI), 0x11a43680u);
  /* 11a43680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43683 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a43685 jne 0x11a436ab */
  if (!C.zf) goto L_11a436ab;
  /* 11a43687 push eax */
  push32((uint32_t)(EAX));
  /* 11a43688 push 0x11a4e3b8 */
  push32((uint32_t)(0x11a4e3b8u));
  /* 11a4368d call edi */
  call_ind((uint32_t)(EDI), 0x11a4368fu);
  /* 11a4368f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a43694 jne 0x11a436ab */
  if (!C.zf) goto L_11a436ab;
  /* 11a43696 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43698 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a4369a call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a436a0u);
  /* 11a436a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a436a3 jmp 0x11a436ab */
  goto L_11a436ab;
L_11a436a5:;
  /* 11a436a5 mov edi, dword ptr [0x11a4a138] */
  EDI = (r32((uint32_t)(0x11a4a138)));
L_11a436ab:;
  /* 11a436ab push 3 */
  push32((uint32_t)(0x3u));
  /* 11a436ad call dword ptr [0x11a4a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0e8))), 0x11a436b3u);
  /* 11a436b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a436b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a436b8 je 0x11a43710 */
  if (C.zf) goto L_11a43710;
  /* 11a436ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11a436bc push 0x11a4ef20 */
  push32((uint32_t)(0x11a4ef20u));
  /* 11a436c1 call edi */
  call_ind((uint32_t)(EDI), 0x11a436c3u);
  /* 11a436c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a436c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a436c8 jne 0x11a436e8 */
  if (!C.zf) goto L_11a436e8;
  /* 11a436ca push eax */
  push32((uint32_t)(EAX));
  /* 11a436cb push 0x11a4ef08 */
  push32((uint32_t)(0x11a4ef08u));
  /* 11a436d0 call edi */
  call_ind((uint32_t)(EDI), 0x11a436d2u);
  /* 11a436d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a436d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a436d7 jne 0x11a436e8 */
  if (!C.zf) goto L_11a436e8;
  /* 11a436d9 push eax */
  push32((uint32_t)(EAX));
  /* 11a436da push 0x11a4ef10 */
  push32((uint32_t)(0x11a4ef10u));
  /* 11a436df call edi */
  call_ind((uint32_t)(EDI), 0x11a436e1u);
  /* 11a436e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a436e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a436e6 je 0x11a43710 */
  if (C.zf) goto L_11a43710;
L_11a436e8:;
  /* 11a436e8 push 0x11a4b548 */
  push32((uint32_t)(0x11a4b548u));
  /* 11a436ed call dword ptr [0x11a4a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a170))), 0x11a436f3u);
  /* 11a436f3 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11a436f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a436f7 call dword ptr [0x11a4a104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a104))), 0x11a436fdu);
  /* 11a436fd push 0xa */
  push32((uint32_t)(0xau));
  /* 11a436ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43701 call ebp */
  call_ind((uint32_t)(EBP), 0x11a43703u);
  /* 11a43703 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43705 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a43707 call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a4370du);
  /* 11a4370d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43710:;
  /* 11a43710 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a43712 call dword ptr [0x11a4a0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0e8))), 0x11a43718u);
  /* 11a43718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4371b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4371d je 0x11a43792 */
  if (C.zf) goto L_11a43792;
  /* 11a4371f push 0x11a4f7a8 */
  push32((uint32_t)(0x11a4f7a8u));
  /* 11a43724 call esi */
  call_ind((uint32_t)(ESI), 0x11a43726u);
  /* 11a43726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4372b jne 0x11a43792 */
  if (!C.zf) goto L_11a43792;
  /* 11a4372d push 0x11a4f720 */
  push32((uint32_t)(0x11a4f720u));
  /* 11a43732 call esi */
  call_ind((uint32_t)(ESI), 0x11a43734u);
  /* 11a43734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43737 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a43739 je 0x11a43792 */
  if (C.zf) goto L_11a43792;
  /* 11a4373b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4373d push 6 */
  push32((uint32_t)(0x6u));
  /* 11a4373f call dword ptr [0x11a4a0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f4))), 0x11a43745u);
  /* 11a43745 mov esi, dword ptr [0x11a4a110] */
  ESI = (r32((uint32_t)(0x11a4a110)));
  /* 11a4374b push 0x11a4b540 */
  push32((uint32_t)(0x11a4b540u));
  /* 11a43750 push 0x11a4b3e8 */
  push32((uint32_t)(0x11a4b3e8u));
  /* 11a43755 call esi */
  call_ind((uint32_t)(ESI), 0x11a43757u);
  /* 11a43757 mov edi, dword ptr [0x11a4a170] */
  EDI = (r32((uint32_t)(0x11a4a170)));
  /* 11a4375d push 0x11a4b534 */
  push32((uint32_t)(0x11a4b534u));
  /* 11a43762 call edi */
  call_ind((uint32_t)(EDI), 0x11a43764u);
  /* 11a43764 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43766 call ebx */
  call_ind((uint32_t)(EBX), 0x11a43768u);
  /* 11a43768 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4376b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4376e jg 0x11a43792 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a43792;
  /* 11a43770 push 0x11a4b52c */
  push32((uint32_t)(0x11a4b52cu));
  /* 11a43775 push 0x11a4b3e8 */
  push32((uint32_t)(0x11a4b3e8u));
  /* 11a4377a call esi */
  call_ind((uint32_t)(ESI), 0x11a4377cu);
  /* 11a4377c push 0x11a4b524 */
  push32((uint32_t)(0x11a4b524u));
  /* 11a43781 push 0x11a4b3e8 */
  push32((uint32_t)(0x11a4b3e8u));
  /* 11a43786 call esi */
  call_ind((uint32_t)(ESI), 0x11a43788u);
  /* 11a43788 push 0x11a4b518 */
  push32((uint32_t)(0x11a4b518u));
  /* 11a4378d call edi */
  call_ind((uint32_t)(EDI), 0x11a4378fu);
  /* 11a4378f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43792:;
  /* 11a43792 pop edi */
  EDI = (pop32());
  /* 11a43793 pop esi */
  ESI = (pop32());
  /* 11a43794 pop ebp */
  EBP = (pop32());
  /* 11a43795 pop ebx */
  EBX = (pop32());
  /* 11a43796 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43799 ret  */
  ESPCHK(0x11a428c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037a0 @ 0x11a437a0 (72 bytes, 31 insns) */
void f_11a437a0(void) {
  FTRACE(0x11a437a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a437a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a437a1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a437a5 push esi */
  push32((uint32_t)(ESI));
  /* 11a437a6 mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a437aa push edi */
  push32((uint32_t)(EDI));
  /* 11a437ab mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a437af push esi */
  push32((uint32_t)(ESI));
  /* 11a437b0 push edi */
  push32((uint32_t)(EDI));
  /* 11a437b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a437b2 call dword ptr [0x11a4a16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a16c))), 0x11a437b8u);
  /* 11a437b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a437bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a437bd je 0x11a437e4 */
  if (C.zf) goto L_11a437e4;
  /* 11a437bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a437c1 push esi */
  push32((uint32_t)(ESI));
  /* 11a437c2 push edi */
  push32((uint32_t)(EDI));
  /* 11a437c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a437c4 call dword ptr [0x11a4a0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0ec))), 0x11a437cau);
  /* 11a437ca mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11a437ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11a437d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a437d2 push eax */
  push32((uint32_t)(EAX));
  /* 11a437d3 push esi */
  push32((uint32_t)(ESI));
  /* 11a437d4 call dword ptr [0x11a4a0f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0f0))), 0x11a437dau);
  /* 11a437da push esi */
  push32((uint32_t)(ESI));
  /* 11a437db call dword ptr [0x11a4a11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a11c))), 0x11a437e1u);
  /* 11a437e1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a437e4:;
  /* 11a437e4 pop edi */
  EDI = (pop32());
  /* 11a437e5 pop esi */
  ESI = (pop32());
  /* 11a437e6 pop ebx */
  EBX = (pop32());
  /* 11a437e7 ret  */
  ESPCHK(0x11a437a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037f0 @ 0x11a437f0 (535 bytes, 181 insns) [1 switch table(s)] */
void f_11a437f0(void) {
  FTRACE(0x11a437f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a437f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a437f4 push esi */
  push32((uint32_t)(ESI));
  /* 11a437f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a437f7 push eax */
  push32((uint32_t)(EAX));
  /* 11a437f8 call dword ptr [0x11a4a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a168))), 0x11a437feu);
  /* 11a437fe mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a43802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43805 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43808 ja 0x11a43a05 */
  if ((!C.cf&&!C.zf)) goto L_11a43a05;
  /* 11a4380e jmp dword ptr [eax*4 + 0x11a43a08] */
  switch (EAX) {
    case 0: goto L_11a43815;
    case 1: goto L_11a43845;
    case 2: goto L_11a438c1;
    case 3: goto L_11a43914;
    case 4: goto L_11a43990;
    default: x86_unimpl("switch@0x11a4380e out of table"); return;
  }
L_11a43815:;
  /* 11a43815 cmp dword ptr [esp + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4381a jne 0x11a43a05 */
  if (!C.zf) goto L_11a43a05;
  /* 11a43820 mov esi, dword ptr [0x11a4a0f0] */
  ESI = (r32((uint32_t)(0x11a4a0f0)));
  /* 11a43826 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43828 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4382a push 0x11a4f718 */
  push32((uint32_t)(0x11a4f718u));
  /* 11a4382f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43831 call esi */
  call_ind((uint32_t)(ESI), 0x11a43833u);
  /* 11a43833 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43835 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43837 push 0x11a4f7a0 */
  push32((uint32_t)(0x11a4f7a0u));
  /* 11a4383c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4383e call esi */
  call_ind((uint32_t)(ESI), 0x11a43840u);
  /* 11a43840 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43843 pop esi */
  ESI = (pop32());
  /* 11a43844 ret  */
  ESPCHK(0x11a437f0u, _esp0);
  ESP += 4; return;
L_11a43845:;
  /* 11a43845 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a43849 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4384c jne 0x11a43893 */
  if (!C.zf) goto L_11a43893;
  /* 11a4384e mov esi, dword ptr [0x11a4a0f0] */
  ESI = (r32((uint32_t)(0x11a4a0f0)));
  /* 11a43854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43856 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11a43858 push 0x11a4eb78 */
  push32((uint32_t)(0x11a4eb78u));
  /* 11a4385d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4385f call esi */
  call_ind((uint32_t)(ESI), 0x11a43861u);
  /* 11a43861 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43863 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a43868 push 0x11a4eb88 */
  push32((uint32_t)(0x11a4eb88u));
  /* 11a4386d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4386f call esi */
  call_ind((uint32_t)(ESI), 0x11a43871u);
  /* 11a43871 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43873 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a43878 push 0x11a4eb90 */
  push32((uint32_t)(0x11a4eb90u));
  /* 11a4387d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4387f call esi */
  call_ind((uint32_t)(ESI), 0x11a43881u);
  /* 11a43881 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43883 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43885 push 0x11a4f7a0 */
  push32((uint32_t)(0x11a4f7a0u));
  /* 11a4388a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4388c call esi */
  call_ind((uint32_t)(ESI), 0x11a4388eu);
  /* 11a4388e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43891 pop esi */
  ESI = (pop32());
  /* 11a43892 ret  */
  ESPCHK(0x11a437f0u, _esp0);
  ESP += 4; return;
L_11a43893:;
  /* 11a43893 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43896 jne 0x11a43a05 */
  if (!C.zf) goto L_11a43a05;
  /* 11a4389c mov esi, dword ptr [0x11a4a0f0] */
  ESI = (r32((uint32_t)(0x11a4a0f0)));
  /* 11a438a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a438a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a438a6 push 0x11a4eb60 */
  push32((uint32_t)(0x11a4eb60u));
  /* 11a438ab push 1 */
  push32((uint32_t)(0x1u));
  /* 11a438ad call esi */
  call_ind((uint32_t)(ESI), 0x11a438afu);
  /* 11a438af push 2 */
  push32((uint32_t)(0x2u));
  /* 11a438b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a438b3 push 0x11a4f708 */
  push32((uint32_t)(0x11a4f708u));
  /* 11a438b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a438ba call esi */
  call_ind((uint32_t)(ESI), 0x11a438bcu);
  /* 11a438bc add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a438bf pop esi */
  ESI = (pop32());
  /* 11a438c0 ret  */
  ESPCHK(0x11a437f0u, _esp0);
  ESP += 4; return;
L_11a438c1:;
  /* 11a438c1 cmp dword ptr [esp + 0x10], 4 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a438c6 jne 0x11a43a05 */
  if (!C.zf) goto L_11a43a05;
  /* 11a438cc mov esi, dword ptr [0x11a4a0f0] */
  ESI = (r32((uint32_t)(0x11a4a0f0)));
  /* 11a438d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a438d4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a438d9 push 0x11a4f6b0 */
  push32((uint32_t)(0x11a4f6b0u));
  /* 11a438de push 1 */
  push32((uint32_t)(0x1u));
  /* 11a438e0 call esi */
  call_ind((uint32_t)(ESI), 0x11a438e2u);
  /* 11a438e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a438e4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a438e9 push 0x11a4f6b8 */
  push32((uint32_t)(0x11a4f6b8u));
  /* 11a438ee push 1 */
  push32((uint32_t)(0x1u));
  /* 11a438f0 call esi */
  call_ind((uint32_t)(ESI), 0x11a438f2u);
  /* 11a438f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a438f4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a438f9 push 0x11a4f6c0 */
  push32((uint32_t)(0x11a4f6c0u));
  /* 11a438fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43900 call esi */
  call_ind((uint32_t)(ESI), 0x11a43902u);
  /* 11a43902 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43904 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43906 push 0x11a4f708 */
  push32((uint32_t)(0x11a4f708u));
  /* 11a4390b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4390d call esi */
  call_ind((uint32_t)(ESI), 0x11a4390fu);
  /* 11a4390f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43912 pop esi */
  ESI = (pop32());
  /* 11a43913 ret  */
  ESPCHK(0x11a437f0u, _esp0);
  ESP += 4; return;
L_11a43914:;
  /* 11a43914 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a43918 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4391a jne 0x11a43943 */
  if (!C.zf) goto L_11a43943;
  /* 11a4391c mov esi, dword ptr [0x11a4a0f0] */
  ESI = (r32((uint32_t)(0x11a4a0f0)));
  /* 11a43922 push eax */
  push32((uint32_t)(EAX));
  /* 11a43923 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a43928 push 0x11a4f718 */
  push32((uint32_t)(0x11a4f718u));
  /* 11a4392d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4392f call esi */
  call_ind((uint32_t)(ESI), 0x11a43931u);
  /* 11a43931 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43933 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43935 push 0x11a4f2d8 */
  push32((uint32_t)(0x11a4f2d8u));
  /* 11a4393a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4393c call esi */
  call_ind((uint32_t)(ESI), 0x11a4393eu);
  /* 11a4393e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43941 pop esi */
  ESI = (pop32());
  /* 11a43942 ret  */
  ESPCHK(0x11a437f0u, _esp0);
  ESP += 4; return;
L_11a43943:;
  /* 11a43943 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43946 jne 0x11a43a05 */
  if (!C.zf) goto L_11a43a05;
  /* 11a4394c mov esi, dword ptr [0x11a4a0f0] */
  ESI = (r32((uint32_t)(0x11a4a0f0)));
  /* 11a43952 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43954 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43956 push 0x11a4eb90 */
  push32((uint32_t)(0x11a4eb90u));
  /* 11a4395b push eax */
  push32((uint32_t)(EAX));
  /* 11a4395c call esi */
  call_ind((uint32_t)(ESI), 0x11a4395eu);
  /* 11a4395e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43960 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11a43965 push 0x11a4eb88 */
  push32((uint32_t)(0x11a4eb88u));
  /* 11a4396a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4396c call esi */
  call_ind((uint32_t)(ESI), 0x11a4396eu);
  /* 11a4396e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43970 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 11a43975 push 0x11a4eb78 */
  push32((uint32_t)(0x11a4eb78u));
  /* 11a4397a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4397c call esi */
  call_ind((uint32_t)(ESI), 0x11a4397eu);
  /* 11a4397e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43980 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43982 push 0x11a4eb68 */
  push32((uint32_t)(0x11a4eb68u));
  /* 11a43987 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43989 call esi */
  call_ind((uint32_t)(ESI), 0x11a4398bu);
  /* 11a4398b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4398e pop esi */
  ESI = (pop32());
  /* 11a4398f ret  */
  ESPCHK(0x11a437f0u, _esp0);
  ESP += 4; return;
L_11a43990:;
  /* 11a43990 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a43994 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43997 jne 0x11a439c0 */
  if (!C.zf) goto L_11a439c0;
  /* 11a43999 mov esi, dword ptr [0x11a4a0f0] */
  ESI = (r32((uint32_t)(0x11a4a0f0)));
  /* 11a4399f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a439a1 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11a439a6 push 0x11a4eb60 */
  push32((uint32_t)(0x11a4eb60u));
  /* 11a439ab push eax */
  push32((uint32_t)(EAX));
  /* 11a439ac call esi */
  call_ind((uint32_t)(ESI), 0x11a439aeu);
  /* 11a439ae push 2 */
  push32((uint32_t)(0x2u));
  /* 11a439b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a439b2 push 0x11a4eb68 */
  push32((uint32_t)(0x11a4eb68u));
  /* 11a439b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a439b9 call esi */
  call_ind((uint32_t)(ESI), 0x11a439bbu);
  /* 11a439bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a439be pop esi */
  ESI = (pop32());
  /* 11a439bf ret  */
  ESPCHK(0x11a437f0u, _esp0);
  ESP += 4; return;
L_11a439c0:;
  /* 11a439c0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a439c3 jne 0x11a43a05 */
  if (!C.zf) goto L_11a43a05;
  /* 11a439c5 mov esi, dword ptr [0x11a4a0f0] */
  ESI = (r32((uint32_t)(0x11a4a0f0)));
  /* 11a439cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a439cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a439cf push 0x11a4f6c0 */
  push32((uint32_t)(0x11a4f6c0u));
  /* 11a439d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a439d6 call esi */
  call_ind((uint32_t)(ESI), 0x11a439d8u);
  /* 11a439d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a439da push 0 */
  push32((uint32_t)(0x0u));
  /* 11a439dc push 0x11a4f6b8 */
  push32((uint32_t)(0x11a4f6b8u));
  /* 11a439e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a439e3 call esi */
  call_ind((uint32_t)(ESI), 0x11a439e5u);
  /* 11a439e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a439e7 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11a439ec push 0x11a4f6b0 */
  push32((uint32_t)(0x11a4f6b0u));
  /* 11a439f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a439f3 call esi */
  call_ind((uint32_t)(ESI), 0x11a439f5u);
  /* 11a439f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a439f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a439f9 push 0x11a4f6f8 */
  push32((uint32_t)(0x11a4f6f8u));
  /* 11a439fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43a00 call esi */
  call_ind((uint32_t)(ESI), 0x11a43a02u);
  /* 11a43a02 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43a05:;
  /* 11a43a05 pop esi */
  ESI = (pop32());
  /* 11a43a06 ret  */
  ESPCHK(0x11a437f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x11a43a20 (11 bytes, 4 insns) */
void f_11a43a20(void) {
  FTRACE(0x11a43a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43a20 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a43a24 call 0x11a441bb */
  push32(0x11a43a29u); f_11a441bb();
  /* 11a43a29 pop ecx */
  ECX = (pop32());
  /* 11a43a2a ret  */
  ESPCHK(0x11a43a20u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11a43a30 (254 bytes, 109 insns) */
void f_11a43a30(void) {
  FTRACE(0x11a43a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43a30 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a43a34 push edi */
  push32((uint32_t)(EDI));
  /* 11a43a35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a43a37 je 0x11a43ab3 */
  if (C.zf) goto L_11a43ab3;
  /* 11a43a39 push esi */
  push32((uint32_t)(ESI));
  /* 11a43a3a push ebx */
  push32((uint32_t)(EBX));
  /* 11a43a3b mov ebx, ecx */
  EBX = (ECX);
  /* 11a43a3d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a43a41 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a43a47 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a43a4b jne 0x11a43a54 */
  if (!C.zf) goto L_11a43a54;
  /* 11a43a4d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a43a50 jne 0x11a43ac1 */
  if (!C.zf) goto L_11a43ac1;
  /* 11a43a52 jmp 0x11a43a75 */
  goto L_11a43a75;
L_11a43a54:;
  /* 11a43a54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a43a56 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a43a57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a43a59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a43a5a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a43a5b je 0x11a43a82 */
  if (C.zf) goto L_11a43a82;
  /* 11a43a5d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43a5f je 0x11a43a8a */
  if (C.zf) goto L_11a43a8a;
  /* 11a43a61 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a43a67 jne 0x11a43a54 */
  if (!C.zf) goto L_11a43a54;
  /* 11a43a69 mov ebx, ecx */
  EBX = (ECX);
  /* 11a43a6b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a43a6e jne 0x11a43ac1 */
  if (!C.zf) goto L_11a43ac1;
L_11a43a70:;
  /* 11a43a70 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a43a73 je 0x11a43a82 */
  if (C.zf) goto L_11a43a82;
L_11a43a75:;
  /* 11a43a75 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a43a77 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a43a78 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a43a7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a43a7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43a7d je 0x11a43aae */
  if (C.zf) goto L_11a43aae;
  /* 11a43a7f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a43a80 jne 0x11a43a75 */
  if (!C.zf) goto L_11a43a75;
L_11a43a82:;
  /* 11a43a82 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a43a86 pop ebx */
  EBX = (pop32());
  /* 11a43a87 pop esi */
  ESI = (pop32());
  /* 11a43a88 pop edi */
  EDI = (pop32());
  /* 11a43a89 ret  */
  ESPCHK(0x11a43a30u, _esp0);
  ESP += 4; return;
L_11a43a8a:;
  /* 11a43a8a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a43a90 je 0x11a43aa4 */
  if (C.zf) goto L_11a43aa4;
L_11a43a92:;
  /* 11a43a92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a43a94 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a43a95 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a43a96 je 0x11a43b26 */
  if (C.zf) goto L_11a43b26;
  /* 11a43a9c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a43aa2 jne 0x11a43a92 */
  if (!C.zf) goto L_11a43a92;
L_11a43aa4:;
  /* 11a43aa4 mov ebx, ecx */
  EBX = (ECX);
  /* 11a43aa6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a43aa9 jne 0x11a43b17 */
  if (!C.zf) goto L_11a43b17;
L_11a43aab:;
  /* 11a43aab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a43aad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a43aae:;
  /* 11a43aae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a43aaf jne 0x11a43aab */
  if (!C.zf) goto L_11a43aab;
  /* 11a43ab1 pop ebx */
  EBX = (pop32());
  /* 11a43ab2 pop esi */
  ESI = (pop32());
L_11a43ab3:;
  /* 11a43ab3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a43ab7 pop edi */
  EDI = (pop32());
  /* 11a43ab8 ret  */
  ESPCHK(0x11a43a30u, _esp0);
  ESP += 4; return;
L_11a43ab9:;
  /* 11a43ab9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a43abb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43abe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a43abf je 0x11a43a70 */
  if (C.zf) goto L_11a43a70;
L_11a43ac1:;
  /* 11a43ac1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a43ac6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a43ac8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43aca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a43acd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a43acf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11a43ad1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43ad4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a43ad9 je 0x11a43ab9 */
  if (C.zf) goto L_11a43ab9;
  /* 11a43adb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a43add je 0x11a43b0b */
  if (C.zf) goto L_11a43b0b;
  /* 11a43adf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a43ae1 je 0x11a43b01 */
  if (C.zf) goto L_11a43b01;
  /* 11a43ae3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a43ae9 je 0x11a43af7 */
  if (C.zf) goto L_11a43af7;
  /* 11a43aeb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a43af1 jne 0x11a43ab9 */
  if (!C.zf) goto L_11a43ab9;
  /* 11a43af3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a43af5 jmp 0x11a43b0f */
  goto L_11a43b0f;
L_11a43af7:;
  /* 11a43af7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a43afd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a43aff jmp 0x11a43b0f */
  goto L_11a43b0f;
L_11a43b01:;
  /* 11a43b01 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a43b07 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a43b09 jmp 0x11a43b0f */
  goto L_11a43b0f;
L_11a43b0b:;
  /* 11a43b0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a43b0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11a43b0f:;
  /* 11a43b0f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43b12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a43b14 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a43b15 je 0x11a43b21 */
  if (C.zf) goto L_11a43b21;
L_11a43b17:;
  /* 11a43b17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a43b19:;
  /* 11a43b19 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a43b1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43b1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a43b1f jne 0x11a43b19 */
  if (!C.zf) goto L_11a43b19;
L_11a43b21:;
  /* 11a43b21 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a43b24 jne 0x11a43aab */
  if (!C.zf) goto L_11a43aab;
L_11a43b26:;
  /* 11a43b26 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a43b2a pop ebx */
  EBX = (pop32());
  /* 11a43b2b pop esi */
  ESI = (pop32());
  /* 11a43b2c pop edi */
  EDI = (pop32());
  /* 11a43b2d ret  */
  ESPCHK(0x11a43a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b30 @ 0x11a43b30 (62 bytes, 35 insns) */
void f_11a43b30(void) {
  FTRACE(0x11a43b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11a43b31 mov ebp, esp */
  EBP = (ESP);
  /* 11a43b33 push esi */
  push32((uint32_t)(ESI));
  /* 11a43b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a43b36 push eax */
  push32((uint32_t)(EAX));
  /* 11a43b37 push eax */
  push32((uint32_t)(EAX));
  /* 11a43b38 push eax */
  push32((uint32_t)(EAX));
  /* 11a43b39 push eax */
  push32((uint32_t)(EAX));
  /* 11a43b3a push eax */
  push32((uint32_t)(EAX));
  /* 11a43b3b push eax */
  push32((uint32_t)(EAX));
  /* 11a43b3c push eax */
  push32((uint32_t)(EAX));
  /* 11a43b3d push eax */
  push32((uint32_t)(EAX));
  /* 11a43b3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a43b41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a43b44:;
  /* 11a43b44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a43b46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a43b48 je 0x11a43b51 */
  if (C.zf) goto L_11a43b51;
  /* 11a43b4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a43b4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11a43b4b");
  /* 11a43b4f jmp 0x11a43b44 */
  goto L_11a43b44;
L_11a43b51:;
  /* 11a43b51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a43b54 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a43b57 nop  */
  /* nop */
L_11a43b58:;
  /* 11a43b58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a43b59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a43b5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a43b5d je 0x11a43b66 */
  if (C.zf) goto L_11a43b66;
  /* 11a43b5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a43b60 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11a43b60");
  /* 11a43b64 jae 0x11a43b58 */
  if (!C.cf) goto L_11a43b58;
L_11a43b66:;
  /* 11a43b66 mov eax, ecx */
  EAX = (ECX);
  /* 11a43b68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43b6b pop esi */
  ESI = (pop32());
  /* 11a43b6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a43b6d ret  */
  ESPCHK(0x11a43b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b70 @ 0x11a43b70 (133 bytes, 68 insns) */
void f_11a43b70(void) {
  FTRACE(0x11a43b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43b70 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a43b74 push edi */
  push32((uint32_t)(EDI));
  /* 11a43b75 push ebx */
  push32((uint32_t)(EBX));
  /* 11a43b76 push esi */
  push32((uint32_t)(ESI));
  /* 11a43b77 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a43b79 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a43b7d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a43b7f je 0x11a43bea */
  if (C.zf) goto L_11a43bea;
  /* 11a43b81 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11a43b84 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a43b86 je 0x11a43bd7 */
  if (C.zf) goto L_11a43bd7;
L_11a43b88:;
  /* 11a43b88 mov esi, edi */
  ESI = (EDI);
  /* 11a43b8a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a43b8e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11a43b90 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a43b91 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a43b93 je 0x11a43baa */
  if (C.zf) goto L_11a43baa;
  /* 11a43b95 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43b97 je 0x11a43ba4 */
  if (C.zf) goto L_11a43ba4;
L_11a43b99:;
  /* 11a43b99 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a43b9b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a43b9c:;
  /* 11a43b9c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a43b9e je 0x11a43baa */
  if (C.zf) goto L_11a43baa;
  /* 11a43ba0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43ba2 jne 0x11a43b99 */
  if (!C.zf) goto L_11a43b99;
L_11a43ba4:;
  /* 11a43ba4 pop esi */
  ESI = (pop32());
  /* 11a43ba5 pop ebx */
  EBX = (pop32());
  /* 11a43ba6 pop edi */
  EDI = (pop32());
  /* 11a43ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a43ba9 ret  */
  ESPCHK(0x11a43b70u, _esp0);
  ESP += 4; return;
L_11a43baa:;
  /* 11a43baa mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a43bac inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a43bad cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a43baf jne 0x11a43b9c */
  if (!C.zf) goto L_11a43b9c;
  /* 11a43bb1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11a43bb4:;
  /* 11a43bb4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11a43bb7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a43bb9 je 0x11a43be3 */
  if (C.zf) goto L_11a43be3;
  /* 11a43bbb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a43bbd add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43bc0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a43bc2 jne 0x11a43b88 */
  if (!C.zf) goto L_11a43b88;
  /* 11a43bc4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11a43bc7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a43bc9 je 0x11a43be3 */
  if (C.zf) goto L_11a43be3;
  /* 11a43bcb mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11a43bce add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43bd1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a43bd3 je 0x11a43bb4 */
  if (C.zf) goto L_11a43bb4;
  /* 11a43bd5 jmp 0x11a43b88 */
  goto L_11a43b88;
L_11a43bd7:;
  /* 11a43bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a43bd9 pop esi */
  ESI = (pop32());
  /* 11a43bda pop ebx */
  EBX = (pop32());
  /* 11a43bdb pop edi */
  EDI = (pop32());
  /* 11a43bdc mov al, dl */
  AL = (DL);
  /* 11a43bde jmp 0x11a442c6 */
  jmp_ind(0x11a442c6u); return;
L_11a43be3:;
  /* 11a43be3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11a43be6 pop esi */
  ESI = (pop32());
  /* 11a43be7 pop ebx */
  EBX = (pop32());
  /* 11a43be8 pop edi */
  EDI = (pop32());
  /* 11a43be9 ret  */
  ESPCHK(0x11a43b70u, _esp0);
  ESP += 4; return;
L_11a43bea:;
  /* 11a43bea mov eax, edi */
  EAX = (EDI);
  /* 11a43bec pop esi */
  ESI = (pop32());
  /* 11a43bed pop ebx */
  EBX = (pop32());
  /* 11a43bee pop edi */
  EDI = (pop32());
  /* 11a43bef ret  */
  ESPCHK(0x11a43b70u, _esp0);
  ESP += 4; return;
  /* 11a43bf0 push esi */
  push32((uint32_t)(ESI));
  /* 11a43bf1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
}

/* FUN_10003bf0 @ 0x11a43bf0 (49 bytes, 20 insns) */
void f_11a43bf0(void) {
  FTRACE(0x11a43bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43bf0 push esi */
  push32((uint32_t)(ESI));
  /* 11a43bf1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a43bf5 push edi */
  push32((uint32_t)(EDI));
  /* 11a43bf6 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a43bf9 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 11a43bfd je 0x11a43c05 */
  if (C.zf) goto L_11a43c05;
  /* 11a43bff and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a43c03 jmp 0x11a43c1c */
  goto L_11a43c1c;
L_11a43c05:;
  /* 11a43c05 push esi */
  push32((uint32_t)(ESI));
  /* 11a43c06 call 0x11a44438 */
  push32(0x11a43c0bu); f_11a44438();
  /* 11a43c0b push esi */
  push32((uint32_t)(ESI));
  /* 11a43c0c call 0x11a43c21 */
  push32(0x11a43c11u); f_11a43c21();
  /* 11a43c11 push esi */
  push32((uint32_t)(ESI));
  /* 11a43c12 mov edi, eax */
  EDI = (EAX);
  /* 11a43c14 call 0x11a4448a */
  push32(0x11a43c19u); f_11a4448a();
  /* 11a43c19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a43c1c:;
  /* 11a43c1c mov eax, edi */
  EAX = (EDI);
  /* 11a43c1e pop edi */
  EDI = (pop32());
  /* 11a43c1f pop esi */
  ESI = (pop32());
  /* 11a43c20 ret  */
  ESPCHK(0x11a43bf0u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x11a43c21 (76 bytes, 30 insns) */
void f_11a43c21(void) {
  FTRACE(0x11a43c21u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43c21 push esi */
  push32((uint32_t)(ESI));
  /* 11a43c22 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a43c26 push edi */
  push32((uint32_t)(EDI));
  /* 11a43c27 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a43c2a test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11a43c2e je 0x11a43c64 */
  if (C.zf) goto L_11a43c64;
  /* 11a43c30 push esi */
  push32((uint32_t)(ESI));
  /* 11a43c31 call 0x11a44615 */
  push32(0x11a43c36u); f_11a44615();
  /* 11a43c36 push esi */
  push32((uint32_t)(ESI));
  /* 11a43c37 mov edi, eax */
  EDI = (EAX);
  /* 11a43c39 call 0x11a445bc */
  push32(0x11a43c3eu); f_11a445bc();
  /* 11a43c3e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a43c41 call 0x11a444dc */
  push32(0x11a43c46u); f_11a444dc();
  /* 11a43c46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a43c4b jge 0x11a43c52 */
  if ((C.sf==C.of)) goto L_11a43c52;
  /* 11a43c4d or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a43c50 jmp 0x11a43c64 */
  goto L_11a43c64;
L_11a43c52:;
  /* 11a43c52 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11a43c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a43c57 je 0x11a43c64 */
  if (C.zf) goto L_11a43c64;
  /* 11a43c59 push eax */
  push32((uint32_t)(EAX));
  /* 11a43c5a call 0x11a441bb */
  push32(0x11a43c5fu); f_11a441bb();
  /* 11a43c5f and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 11a43c63 pop ecx */
  ECX = (pop32());
L_11a43c64:;
  /* 11a43c64 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a43c68 mov eax, edi */
  EAX = (EDI);
  /* 11a43c6a pop edi */
  EDI = (pop32());
  /* 11a43c6b pop esi */
  ESI = (pop32());
  /* 11a43c6c ret  */
  ESPCHK(0x11a43c21u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c6d @ 0x11a43c6d (47 bytes, 18 insns) */
void f_11a43c6d(void) {
  FTRACE(0x11a43c6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43c6d push ebp */
  push32((uint32_t)(EBP));
  /* 11a43c6e mov ebp, esp */
  EBP = (ESP);
  /* 11a43c70 push esi */
  push32((uint32_t)(ESI));
  /* 11a43c71 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a43c74 call 0x11a44438 */
  push32(0x11a43c79u); f_11a44438();
  /* 11a43c79 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a43c7c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a43c7f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a43c82 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a43c85 call 0x11a43c9c */
  push32(0x11a43c8au); f_11a43c9c();
  /* 11a43c8a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a43c8d mov esi, eax */
  ESI = (EAX);
  /* 11a43c8f call 0x11a4448a */
  push32(0x11a43c94u); f_11a4448a();
  /* 11a43c94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43c97 mov eax, esi */
  EAX = (ESI);
  /* 11a43c99 pop esi */
  ESI = (pop32());
  /* 11a43c9a pop ebp */
  EBP = (pop32());
  /* 11a43c9b ret  */
  ESPCHK(0x11a43c6du, _esp0);
  ESP += 4; return;
}

/* FUN_10003c9c @ 0x11a43c9c (232 bytes, 92 insns) */
void f_11a43c9c(void) {
  FTRACE(0x11a43c9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43c9c push ebp */
  push32((uint32_t)(EBP));
  /* 11a43c9d mov ebp, esp */
  EBP = (ESP);
  /* 11a43c9f push ecx */
  push32((uint32_t)(ECX));
  /* 11a43ca0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a43ca1 push esi */
  push32((uint32_t)(ESI));
  /* 11a43ca2 push edi */
  push32((uint32_t)(EDI));
  /* 11a43ca3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a43ca6 imul edi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a43caa mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a43cad mov ecx, edi */
  ECX = (EDI);
  /* 11a43caf test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a43cb1 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a43cb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a43cb7 jne 0x11a43cc0 */
  if (!C.zf) goto L_11a43cc0;
  /* 11a43cb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a43cbb jmp 0x11a43d69 */
  goto L_11a43d69;
L_11a43cc0:;
  /* 11a43cc0 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11a43cc3 test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 11a43cc9 je 0x11a43cd3 */
  if (C.zf) goto L_11a43cd3;
  /* 11a43ccb mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11a43cce mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11a43cd1 jmp 0x11a43cdf */
  goto L_11a43cdf;
L_11a43cd3:;
  /* 11a43cd3 mov dword ptr [ebp + 0x14], 0x1000 */
  w32((uint32_t)(EBP + 0x14), (0x1000u));
  /* 11a43cda jmp 0x11a43cdf */
  goto L_11a43cdf;
L_11a43cdc:;
  /* 11a43cdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
L_11a43cdf:;
  /* 11a43cdf test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 11a43ce5 je 0x11a43d11 */
  if (C.zf) goto L_11a43d11;
  /* 11a43ce7 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a43cea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a43cec je 0x11a43d11 */
  if (C.zf) goto L_11a43d11;
  /* 11a43cee cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43cf0 mov edi, ecx */
  EDI = (ECX);
  /* 11a43cf2 jb 0x11a43cf6 */
  if (C.cf) goto L_11a43cf6;
  /* 11a43cf4 mov edi, eax */
  EDI = (EAX);
L_11a43cf6:;
  /* 11a43cf6 push edi */
  push32((uint32_t)(EDI));
  /* 11a43cf7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a43cf9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a43cfa call 0x11a44a40 */
  push32(0x11a43cffu); f_11a44a40();
  /* 11a43cff sub dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a43d02 sub dword ptr [esi + 4], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EDI),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a43d05 add dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a43d07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43d0a add ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43d0c mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11a43d0f jmp 0x11a43d5c */
  goto L_11a43d5c;
L_11a43d11:;
  /* 11a43d11 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43d14 jb 0x11a43d44 */
  if (C.cf) goto L_11a43d44;
  /* 11a43d16 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43d1a mov eax, ecx */
  EAX = (ECX);
  /* 11a43d1c je 0x11a43d27 */
  if (C.zf) goto L_11a43d27;
  /* 11a43d1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a43d20 div dword ptr [ebp + 0x14] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x14))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a43d23 mov eax, ecx */
  EAX = (ECX);
  /* 11a43d25 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a43d27:;
  /* 11a43d27 push eax */
  push32((uint32_t)(EAX));
  /* 11a43d28 push ebx */
  push32((uint32_t)(EBX));
  /* 11a43d29 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a43d2c call 0x11a447fa */
  push32(0x11a43d31u); f_11a447fa();
  /* 11a43d31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a43d36 je 0x11a43d6e */
  if (C.zf) goto L_11a43d6e;
  /* 11a43d38 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43d3b je 0x11a43d74 */
  if (C.zf) goto L_11a43d74;
  /* 11a43d3d sub dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a43d40 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43d42 jmp 0x11a43d5c */
  goto L_11a43d5c;
L_11a43d44:;
  /* 11a43d44 push esi */
  push32((uint32_t)(ESI));
  /* 11a43d45 call 0x11a4471e */
  push32(0x11a43d4au); f_11a4471e();
  /* 11a43d4a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43d4d pop ecx */
  ECX = (pop32());
  /* 11a43d4e je 0x11a43d78 */
  if (C.zf) goto L_11a43d78;
  /* 11a43d50 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11a43d52 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11a43d55 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a43d56 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11a43d59 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a43d5c:;
  /* 11a43d5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43d60 jne 0x11a43cdc */
  if (!C.zf) goto L_11a43cdc;
  /* 11a43d66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
L_11a43d69:;
  /* 11a43d69 pop edi */
  EDI = (pop32());
  /* 11a43d6a pop esi */
  ESI = (pop32());
  /* 11a43d6b pop ebx */
  EBX = (pop32());
  /* 11a43d6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a43d6d ret  */
  ESPCHK(0x11a43c9cu, _esp0);
  ESP += 4; return;
L_11a43d6e:;
  /* 11a43d6e or dword ptr [esi + 0xc], 0x10 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x10u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a43d72 jmp 0x11a43d78 */
  goto L_11a43d78;
L_11a43d74:;
  /* 11a43d74 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
L_11a43d78:;
  /* 11a43d78 mov eax, edi */
  EAX = (EDI);
  /* 11a43d7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a43d7c sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a43d7f div dword ptr [ebp + 0xc] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a43d82 jmp 0x11a43d69 */
  goto L_11a43d69;
}

/* operator_new @ 0x11a43d84 (14 bytes, 6 insns) */
void f_11a43d84(void) {
  FTRACE(0x11a43d84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43d84 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43d86 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a43d8a call 0x11a44d87 */
  push32(0x11a43d8fu); f_11a44d87();
  /* 11a43d8f pop ecx */
  ECX = (pop32());
  /* 11a43d90 pop ecx */
  ECX = (pop32());
  /* 11a43d91 ret  */
  ESPCHK(0x11a43d84u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d92 @ 0x11a43d92 (34 bytes, 15 insns) */
void f_11a43d92(void) {
  FTRACE(0x11a43d92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43d92 push esi */
  push32((uint32_t)(ESI));
  /* 11a43d93 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a43d97 push edi */
  push32((uint32_t)(EDI));
  /* 11a43d98 push esi */
  push32((uint32_t)(ESI));
  /* 11a43d99 call 0x11a44438 */
  push32(0x11a43d9eu); f_11a44438();
  /* 11a43d9e push esi */
  push32((uint32_t)(ESI));
  /* 11a43d9f call 0x11a43db4 */
  push32(0x11a43da4u); f_11a43db4();
  /* 11a43da4 push esi */
  push32((uint32_t)(ESI));
  /* 11a43da5 mov edi, eax */
  EDI = (EAX);
  /* 11a43da7 call 0x11a4448a */
  push32(0x11a43dacu); f_11a4448a();
  /* 11a43dac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43daf mov eax, edi */
  EAX = (EDI);
  /* 11a43db1 pop edi */
  EDI = (pop32());
  /* 11a43db2 pop esi */
  ESI = (pop32());
  /* 11a43db3 ret  */
  ESPCHK(0x11a43d92u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db4 @ 0x11a43db4 (353 bytes, 127 insns) */
void f_11a43db4(void) {
  FTRACE(0x11a43db4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43db4 push ebp */
  push32((uint32_t)(EBP));
  /* 11a43db5 mov ebp, esp */
  EBP = (ESP);
  /* 11a43db7 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a43dba push ebx */
  push32((uint32_t)(EBX));
  /* 11a43dbb push esi */
  push32((uint32_t)(ESI));
  /* 11a43dbc push edi */
  push32((uint32_t)(EDI));
  /* 11a43dbd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a43dc0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a43dc2 mov esi, dword ptr [edi + 0x10] */
  ESI = (r32((uint32_t)(EDI + 0x10)));
  /* 11a43dc5 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43dc8 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a43dcb jge 0x11a43dd0 */
  if ((C.sf==C.of)) goto L_11a43dd0;
  /* 11a43dcd mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11a43dd0:;
  /* 11a43dd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a43dd2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a43dd3 push esi */
  push32((uint32_t)(ESI));
  /* 11a43dd4 call 0x11a45144 */
  push32(0x11a43dd9u); f_11a45144();
  /* 11a43dd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43ddc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43dde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a43de1 jl 0x11a43e42 */
  if ((C.sf!=C.of)) goto L_11a43e42;
  /* 11a43de3 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 11a43de6 test cx, 0x108 */
  { uint32_t _r=(CX)&(0x108u); fl_logic(_r,16); }
  /* 11a43deb jne 0x11a43df5 */
  if (!C.zf) goto L_11a43df5;
  /* 11a43ded sub eax, dword ptr [edi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a43df0 jmp 0x11a43f10 */
  goto L_11a43f10;
L_11a43df5:;
  /* 11a43df5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a43df7 mov edx, dword ptr [edi + 8] */
  EDX = (r32((uint32_t)(EDI + 0x8)));
  /* 11a43dfa mov ebx, eax */
  EBX = (EAX);
  /* 11a43dfc sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a43dfe test cl, 3 */
  { uint32_t _r=(CL)&(0x3u); fl_logic(_r,8); }
  /* 11a43e01 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11a43e04 je 0x11a43e32 */
  if (C.zf) goto L_11a43e32;
  /* 11a43e06 mov ebx, esi */
  EBX = (ESI);
  /* 11a43e08 mov ecx, esi */
  ECX = (ESI);
  /* 11a43e0a sar ebx, 5 */
  EBX = (sh_sar((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 11a43e0d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a43e10 mov ebx, dword ptr [ebx*4 + 0x11a4fd80] */
  EBX = (r32((uint32_t)(EBX*4 + 0x11a4fd80)));
  /* 11a43e17 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 11a43e1a test byte ptr [ebx + ecx*4 + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBX + ECX*4 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11a43e1f je 0x11a43e4a */
  if (C.zf) goto L_11a43e4a;
  /* 11a43e21 mov ecx, edx */
  ECX = (EDX);
L_11a43e23:;
  /* 11a43e23 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43e25 jae 0x11a43e4a */
  if (!C.cf) goto L_11a43e4a;
  /* 11a43e27 cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a43e2a jne 0x11a43e2f */
  if (!C.zf) goto L_11a43e2f;
  /* 11a43e2c inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_11a43e2f:;
  /* 11a43e2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a43e30 jmp 0x11a43e23 */
  goto L_11a43e23;
L_11a43e32:;
  /* 11a43e32 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11a43e35 jne 0x11a43e4a */
  if (!C.zf) goto L_11a43e4a;
  /* 11a43e37 call 0x11a44f22 */
  push32(0x11a43e3cu); f_11a44f22();
  /* 11a43e3c mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11a43e42:;
  /* 11a43e42 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a43e45 jmp 0x11a43f10 */
  goto L_11a43f10;
L_11a43e4a:;
  /* 11a43e4a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43e4e jne 0x11a43e58 */
  if (!C.zf) goto L_11a43e58;
  /* 11a43e50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a43e53 jmp 0x11a43f10 */
  goto L_11a43f10;
L_11a43e58:;
  /* 11a43e58 test byte ptr [edi + 0xc], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xc)))&(0x1u); fl_logic(_r,8); }
  /* 11a43e5c je 0x11a43f08 */
  if (C.zf) goto L_11a43f08;
  /* 11a43e62 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11a43e65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a43e67 jne 0x11a43e71 */
  if (!C.zf) goto L_11a43e71;
  /* 11a43e69 and dword ptr [ebp - 8], ecx */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(ECX); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a43e6c jmp 0x11a43f08 */
  goto L_11a43f08;
L_11a43e71:;
  /* 11a43e71 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a43e73 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43e75 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a43e78 mov eax, esi */
  EAX = (ESI);
  /* 11a43e7a sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a43e7d lea ebx, [eax*4 + 0x11a4fd80] */
  EBX = ((uint32_t)(EAX*4 + 0x11a4fd80));
  /* 11a43e84 mov eax, esi */
  EAX = (ESI);
  /* 11a43e86 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a43e89 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a43e8c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a43e8e shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a43e91 test byte ptr [esi + eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11a43e96 je 0x11a43f02 */
  if (C.zf) goto L_11a43f02;
  /* 11a43e98 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a43e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43e9c push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 11a43e9f call 0x11a45144 */
  push32(0x11a43ea4u); f_11a45144();
  /* 11a43ea4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43ea7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43eaa jne 0x11a43ec9 */
  if (!C.zf) goto L_11a43ec9;
  /* 11a43eac mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11a43eaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a43eb2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11a43eb4:;
  /* 11a43eb4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43eb6 jae 0x11a43ec3 */
  if (!C.cf) goto L_11a43ec3;
  /* 11a43eb8 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a43ebb jne 0x11a43ec0 */
  if (!C.zf) goto L_11a43ec0;
  /* 11a43ebd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_11a43ec0:;
  /* 11a43ec0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a43ec1 jmp 0x11a43eb4 */
  goto L_11a43eb4;
L_11a43ec3:;
  /* 11a43ec3 test byte ptr [edi + 0xd], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xd)))&(0x20u); fl_logic(_r,8); }
  /* 11a43ec7 jmp 0x11a43efd */
  goto L_11a43efd;
L_11a43ec9:;
  /* 11a43ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a43ecb push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11a43ece push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 11a43ed1 call 0x11a45144 */
  push32(0x11a43ed6u); f_11a45144();
  /* 11a43ed6 mov eax, 0x200 */
  EAX = (0x200u);
  /* 11a43edb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43ede cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43ee1 ja 0x11a43ef0 */
  if ((!C.cf&&!C.zf)) goto L_11a43ef0;
  /* 11a43ee3 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 11a43ee6 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 11a43ee9 je 0x11a43ef0 */
  if (C.zf) goto L_11a43ef0;
  /* 11a43eeb test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 11a43eee je 0x11a43ef3 */
  if (C.zf) goto L_11a43ef3;
L_11a43ef0:;
  /* 11a43ef0 mov eax, dword ptr [edi + 0x18] */
  EAX = (r32((uint32_t)(EDI + 0x18)));
L_11a43ef3:;
  /* 11a43ef3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a43ef6 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a43ef8 test byte ptr [esi + eax + 4], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x4u); fl_logic(_r,8); }
L_11a43efd:;
  /* 11a43efd je 0x11a43f02 */
  if (C.zf) goto L_11a43f02;
  /* 11a43eff inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_11a43f02:;
  /* 11a43f02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a43f05 sub dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_sub(_a,_b,_r,32); }
L_11a43f08:;
  /* 11a43f08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a43f0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a43f0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a43f10:;
  /* 11a43f10 pop edi */
  EDI = (pop32());
  /* 11a43f11 pop esi */
  ESI = (pop32());
  /* 11a43f12 pop ebx */
  EBX = (pop32());
  /* 11a43f13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a43f14 ret  */
  ESPCHK(0x11a43db4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f15 @ 0x11a43f15 (44 bytes, 17 insns) */
void f_11a43f15(void) {
  FTRACE(0x11a43f15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43f15 push ebp */
  push32((uint32_t)(EBP));
  /* 11a43f16 mov ebp, esp */
  EBP = (ESP);
  /* 11a43f18 push esi */
  push32((uint32_t)(ESI));
  /* 11a43f19 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a43f1c call 0x11a44438 */
  push32(0x11a43f21u); f_11a44438();
  /* 11a43f21 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a43f24 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a43f27 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a43f2a call 0x11a43f41 */
  push32(0x11a43f2fu); f_11a43f41();
  /* 11a43f2f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a43f32 mov esi, eax */
  ESI = (EAX);
  /* 11a43f34 call 0x11a4448a */
  push32(0x11a43f39u); f_11a4448a();
  /* 11a43f39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43f3c mov eax, esi */
  EAX = (ESI);
  /* 11a43f3e pop esi */
  ESI = (pop32());
  /* 11a43f3f pop ebp */
  EBP = (pop32());
  /* 11a43f40 ret  */
  ESPCHK(0x11a43f15u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f41 @ 0x11a43f41 (141 bytes, 55 insns) */
void f_11a43f41(void) {
  FTRACE(0x11a43f41u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43f41 push esi */
  push32((uint32_t)(ESI));
  /* 11a43f42 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a43f46 push edi */
  push32((uint32_t)(EDI));
  /* 11a43f47 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a43f4a test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11a43f4c je 0x11a43fbd */
  if (C.zf) goto L_11a43fbd;
  /* 11a43f4e mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a43f52 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a43f54 je 0x11a43f60 */
  if (C.zf) goto L_11a43f60;
  /* 11a43f56 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43f59 je 0x11a43f60 */
  if (C.zf) goto L_11a43f60;
  /* 11a43f5b cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43f5e jne 0x11a43fbd */
  if (!C.zf) goto L_11a43fbd;
L_11a43f60:;
  /* 11a43f60 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 11a43f62 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43f65 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a43f68 jne 0x11a43f77 */
  if (!C.zf) goto L_11a43f77;
  /* 11a43f6a push esi */
  push32((uint32_t)(ESI));
  /* 11a43f6b call 0x11a43db4 */
  push32(0x11a43f70u); f_11a43db4();
  /* 11a43f70 add dword ptr [esp + 0x14], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EAX),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a43f74 pop ecx */
  ECX = (pop32());
  /* 11a43f75 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a43f77:;
  /* 11a43f77 push esi */
  push32((uint32_t)(ESI));
  /* 11a43f78 call 0x11a44615 */
  push32(0x11a43f7du); f_11a44615();
  /* 11a43f7d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a43f80 pop ecx */
  ECX = (pop32());
  /* 11a43f81 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11a43f83 je 0x11a43f8c */
  if (C.zf) goto L_11a43f8c;
  /* 11a43f85 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a43f87 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a43f8a jmp 0x11a43fa0 */
  goto L_11a43fa0;
L_11a43f8c:;
  /* 11a43f8c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a43f8e je 0x11a43fa0 */
  if (C.zf) goto L_11a43fa0;
  /* 11a43f90 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a43f92 je 0x11a43fa0 */
  if (C.zf) goto L_11a43fa0;
  /* 11a43f94 test ah, 4 */
  { uint32_t _r=(AH)&(0x4u); fl_logic(_r,8); }
  /* 11a43f97 jne 0x11a43fa0 */
  if (!C.zf) goto L_11a43fa0;
  /* 11a43f99 mov dword ptr [esi + 0x18], 0x200 */
  w32((uint32_t)(ESI + 0x18), (0x200u));
L_11a43fa0:;
  /* 11a43fa0 push edi */
  push32((uint32_t)(EDI));
  /* 11a43fa1 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a43fa5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a43fa8 call 0x11a45144 */
  push32(0x11a43fadu); f_11a45144();
  /* 11a43fad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43fb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a43fb2 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a43fb5 setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 11a43fb8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a43fb9 mov eax, ecx */
  EAX = (ECX);
  /* 11a43fbb jmp 0x11a43fcb */
  goto L_11a43fcb;
L_11a43fbd:;
  /* 11a43fbd call 0x11a44f22 */
  push32(0x11a43fc2u); f_11a44f22();
  /* 11a43fc2 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11a43fc8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a43fcb:;
  /* 11a43fcb pop edi */
  EDI = (pop32());
  /* 11a43fcc pop esi */
  ESI = (pop32());
  /* 11a43fcd ret  */
  ESPCHK(0x11a43f41u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fce @ 0x11a43fce (49 bytes, 21 insns) */
void f_11a43fce(void) {
  FTRACE(0x11a43fceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43fce push esi */
  push32((uint32_t)(ESI));
  /* 11a43fcf call 0x11a4538c */
  push32(0x11a43fd4u); f_11a4538c();
  /* 11a43fd4 mov esi, eax */
  ESI = (EAX);
  /* 11a43fd6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a43fd8 jne 0x11a43fdc */
  if (!C.zf) goto L_11a43fdc;
  /* 11a43fda pop esi */
  ESI = (pop32());
  /* 11a43fdb ret  */
  ESPCHK(0x11a43fceu, _esp0);
  ESP += 4; return;
L_11a43fdc:;
  /* 11a43fdc push edi */
  push32((uint32_t)(EDI));
  /* 11a43fdd push esi */
  push32((uint32_t)(ESI));
  /* 11a43fde push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a43fe2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a43fe6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a43fea call 0x11a4521c */
  push32(0x11a43fefu); f_11a4521c();
  /* 11a43fef push esi */
  push32((uint32_t)(ESI));
  /* 11a43ff0 mov edi, eax */
  EDI = (EAX);
  /* 11a43ff2 call 0x11a4448a */
  push32(0x11a43ff7u); f_11a4448a();
  /* 11a43ff7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a43ffa mov eax, edi */
  EAX = (EDI);
  /* 11a43ffc pop edi */
  EDI = (pop32());
  /* 11a43ffd pop esi */
  ESI = (pop32());
  /* 11a43ffe ret  */
  ESPCHK(0x11a43fceu, _esp0);
  ESP += 4; return;
}

/* FUN_10003fff @ 0x11a43fff (19 bytes, 6 insns) */
void f_11a43fff(void) {
  FTRACE(0x11a43fffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a43fff push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a44001 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a44005 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a44009 call 0x11a43fce */
  push32(0x11a4400eu); f_11a43fce();
  /* 11a4400e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44011 ret  */
  ESPCHK(0x11a43fffu, _esp0);
  ESP += 4; return;
}

/* FUN_10004012 @ 0x11a44012 (217 bytes, 57 insns) */
void f_11a44012(void) {
  FTRACE(0x11a44012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44012 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a44016 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44019 jne 0x11a440a7 */
  if (!C.zf) goto L_11a440a7;
  /* 11a4401f call dword ptr [0x11a4a080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a080))), 0x11a44025u);
  /* 11a44025 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a44027 mov dword ptr [0x11a4f7dc], eax */
  w32((uint32_t)(0x11a4f7dc), (EAX));
  /* 11a4402c call 0x11a45cab */
  push32(0x11a44031u); f_11a45cab();
  /* 11a44031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44033 pop ecx */
  ECX = (pop32());
  /* 11a44034 je 0x11a44072 */
  if (C.zf) goto L_11a44072;
  /* 11a44036 mov eax, dword ptr [0x11a4f7dc] */
  EAX = (r32((uint32_t)(0x11a4f7dc)));
  /* 11a4403b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a4403d mov cl, byte ptr [0x11a4f7dd] */
  CL = (r8((uint32_t)(0x11a4f7dd)));
  /* 11a44043 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a44048 shr dword ptr [0x11a4f7dc], 0x10 */
  w32((uint32_t)(0x11a4f7dc), (sh_shr((uint32_t)(r32((uint32_t)(0x11a4f7dc))), (0x10u)&0x1f, 32)));
  /* 11a4404f mov dword ptr [0x11a4f7e4], eax */
  w32((uint32_t)(0x11a4f7e4), (EAX));
  /* 11a44054 mov dword ptr [0x11a4f7e8], ecx */
  w32((uint32_t)(0x11a4f7e8), (ECX));
  /* 11a4405a shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a4405d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4405f mov dword ptr [0x11a4f7e0], eax */
  w32((uint32_t)(0x11a4f7e0), (EAX));
  /* 11a44064 call 0x11a45572 */
  push32(0x11a44069u); f_11a45572();
  /* 11a44069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4406b jne 0x11a44076 */
  if (!C.zf) goto L_11a44076;
  /* 11a4406d call 0x11a45d08 */
  push32(0x11a44072u); f_11a45d08();
L_11a44072:;
  /* 11a44072 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a44074 jmp 0x11a440e8 */
  goto L_11a440e8;
L_11a44076:;
  /* 11a44076 call dword ptr [0x11a4a07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a07c))), 0x11a4407cu);
  /* 11a4407c mov dword ptr [0x11a50ea4], eax */
  w32((uint32_t)(0x11a50ea4), (EAX));
  /* 11a44081 call 0x11a45a04 */
  push32(0x11a44086u); f_11a45a04();
  /* 11a44086 mov dword ptr [0x11a4f7c4], eax */
  w32((uint32_t)(0x11a4f7c4), (EAX));
  /* 11a4408b call 0x11a44f34 */
  push32(0x11a44090u); f_11a44f34();
  /* 11a44090 call 0x11a457b7 */
  push32(0x11a44095u); f_11a457b7();
  /* 11a44095 call 0x11a456fe */
  push32(0x11a4409au); f_11a456fe();
  /* 11a4409a call 0x11a45454 */
  push32(0x11a4409fu); f_11a45454();
  /* 11a4409f inc dword ptr [0x11a4f7c0] */
  { uint32_t _r=(r32((uint32_t)(0x11a4f7c0)))+1; w32((uint32_t)(0x11a4f7c0), (_r)); fl_inc(_r,32); }
  /* 11a440a5 jmp 0x11a440e5 */
  goto L_11a440e5;
L_11a440a7:;
  /* 11a440a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a440a9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a440ab jne 0x11a440d9 */
  if (!C.zf) goto L_11a440d9;
  /* 11a440ad cmp dword ptr [0x11a4f7c0], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a4f7c0))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a440b3 jle 0x11a44072 */
  if ((C.zf||C.sf!=C.of)) goto L_11a44072;
  /* 11a440b5 dec dword ptr [0x11a4f7c0] */
  { uint32_t _r=(r32((uint32_t)(0x11a4f7c0)))-1; w32((uint32_t)(0x11a4f7c0), (_r)); fl_dec(_r,32); }
  /* 11a440bb cmp dword ptr [0x11a4f814], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a4f814))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a440c1 jne 0x11a440c8 */
  if (!C.zf) goto L_11a440c8;
  /* 11a440c3 call 0x11a45492 */
  push32(0x11a440c8u); f_11a45492();
L_11a440c8:;
  /* 11a440c8 call 0x11a450f0 */
  push32(0x11a440cdu); f_11a450f0();
  /* 11a440cd call 0x11a455c6 */
  push32(0x11a440d2u); f_11a455c6();
  /* 11a440d2 call 0x11a45d08 */
  push32(0x11a440d7u); f_11a45d08();
  /* 11a440d7 jmp 0x11a440e5 */
  goto L_11a440e5;
L_11a440d9:;
  /* 11a440d9 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a440dc jne 0x11a440e5 */
  if (!C.zf) goto L_11a440e5;
  /* 11a440de push ecx */
  push32((uint32_t)(ECX));
  /* 11a440df call 0x11a4565e */
  push32(0x11a440e4u); f_11a4565e();
  /* 11a440e4 pop ecx */
  ECX = (pop32());
L_11a440e5:;
  /* 11a440e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a440e7 pop eax */
  EAX = (pop32());
L_11a440e8:;
  /* 11a440e8 ret 0xc */
  ESPCHK(0x11a44012u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11a440eb (157 bytes, 73 insns) */
void f_11a440eb(void) {
  FTRACE(0x11a440ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a440eb push ebp */
  push32((uint32_t)(EBP));
  /* 11a440ec mov ebp, esp */
  EBP = (ESP);
  /* 11a440ee push ebx */
  push32((uint32_t)(EBX));
  /* 11a440ef mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a440f2 push esi */
  push32((uint32_t)(ESI));
  /* 11a440f3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a440f6 push edi */
  push32((uint32_t)(EDI));
  /* 11a440f7 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a440fa test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a440fc jne 0x11a44107 */
  if (!C.zf) goto L_11a44107;
  /* 11a440fe cmp dword ptr [0x11a4f7c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f7c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44105 jmp 0x11a4412d */
  goto L_11a4412d;
L_11a44107:;
  /* 11a44107 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4410a je 0x11a44111 */
  if (C.zf) goto L_11a44111;
  /* 11a4410c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4410f jne 0x11a44133 */
  if (!C.zf) goto L_11a44133;
L_11a44111:;
  /* 11a44111 mov eax, dword ptr [0x11a50ea8] */
  EAX = (r32((uint32_t)(0x11a50ea8)));
  /* 11a44116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44118 je 0x11a44123 */
  if (C.zf) goto L_11a44123;
  /* 11a4411a push edi */
  push32((uint32_t)(EDI));
  /* 11a4411b push esi */
  push32((uint32_t)(ESI));
  /* 11a4411c push ebx */
  push32((uint32_t)(EBX));
  /* 11a4411d call eax */
  call_ind((uint32_t)(EAX), 0x11a4411fu);
  /* 11a4411f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44121 je 0x11a4412f */
  if (C.zf) goto L_11a4412f;
L_11a44123:;
  /* 11a44123 push edi */
  push32((uint32_t)(EDI));
  /* 11a44124 push esi */
  push32((uint32_t)(ESI));
  /* 11a44125 push ebx */
  push32((uint32_t)(EBX));
  /* 11a44126 call 0x11a44012 */
  push32(0x11a4412bu); f_11a44012();
  /* 11a4412b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11a4412d:;
  /* 11a4412d jne 0x11a44133 */
  if (!C.zf) goto L_11a44133;
L_11a4412f:;
  /* 11a4412f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a44131 jmp 0x11a44181 */
  goto L_11a44181;
L_11a44133:;
  /* 11a44133 push edi */
  push32((uint32_t)(EDI));
  /* 11a44134 push esi */
  push32((uint32_t)(ESI));
  /* 11a44135 push ebx */
  push32((uint32_t)(EBX));
  /* 11a44136 call 0x11a41000 */
  push32(0x11a4413bu); f_11a41000();
  /* 11a4413b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4413e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a44141 jne 0x11a4414f */
  if (!C.zf) goto L_11a4414f;
  /* 11a44143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44145 jne 0x11a4417e */
  if (!C.zf) goto L_11a4417e;
  /* 11a44147 push edi */
  push32((uint32_t)(EDI));
  /* 11a44148 push eax */
  push32((uint32_t)(EAX));
  /* 11a44149 push ebx */
  push32((uint32_t)(EBX));
  /* 11a4414a call 0x11a44012 */
  push32(0x11a4414fu); f_11a44012();
L_11a4414f:;
  /* 11a4414f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a44151 je 0x11a44158 */
  if (C.zf) goto L_11a44158;
  /* 11a44153 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44156 jne 0x11a4417e */
  if (!C.zf) goto L_11a4417e;
L_11a44158:;
  /* 11a44158 push edi */
  push32((uint32_t)(EDI));
  /* 11a44159 push esi */
  push32((uint32_t)(ESI));
  /* 11a4415a push ebx */
  push32((uint32_t)(EBX));
  /* 11a4415b call 0x11a44012 */
  push32(0x11a44160u); f_11a44012();
  /* 11a44160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44162 jne 0x11a44167 */
  if (!C.zf) goto L_11a44167;
  /* 11a44164 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11a44167:;
  /* 11a44167 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4416b je 0x11a4417e */
  if (C.zf) goto L_11a4417e;
  /* 11a4416d mov eax, dword ptr [0x11a50ea8] */
  EAX = (r32((uint32_t)(0x11a50ea8)));
  /* 11a44172 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44174 je 0x11a4417e */
  if (C.zf) goto L_11a4417e;
  /* 11a44176 push edi */
  push32((uint32_t)(EDI));
  /* 11a44177 push esi */
  push32((uint32_t)(ESI));
  /* 11a44178 push ebx */
  push32((uint32_t)(EBX));
  /* 11a44179 call eax */
  call_ind((uint32_t)(EAX), 0x11a4417bu);
  /* 11a4417b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a4417e:;
  /* 11a4417e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11a44181:;
  /* 11a44181 pop edi */
  EDI = (pop32());
  /* 11a44182 pop esi */
  ESI = (pop32());
  /* 11a44183 pop ebx */
  EBX = (pop32());
  /* 11a44184 pop ebp */
  EBP = (pop32());
  /* 11a44185 ret 0xc */
  ESPCHK(0x11a440ebu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11a44188 (48 bytes, 15 insns) */
void f_11a44188(void) {
  FTRACE(0x11a44188u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44188 mov eax, dword ptr [0x11a4f7cc] */
  EAX = (r32((uint32_t)(0x11a4f7cc)));
  /* 11a4418d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44190 je 0x11a4419f */
  if (C.zf) goto L_11a4419f;
  /* 11a44192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44194 jne 0x11a441a4 */
  if (!C.zf) goto L_11a441a4;
  /* 11a44196 cmp dword ptr [0x11a4f7d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f7d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4419d jne 0x11a441a4 */
  if (!C.zf) goto L_11a441a4;
L_11a4419f:;
  /* 11a4419f call 0x11a45db0 */
  push32(0x11a441a4u); f_11a45db0();
L_11a441a4:;
  /* 11a441a4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a441a8 call 0x11a45de9 */
  push32(0x11a441adu); f_11a45de9();
  /* 11a441ad push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a441b2 call dword ptr [0x11a4b720] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4b720))), 0x11a441b8u);
  /* 11a441b8 pop ecx */
  ECX = (pop32());
  /* 11a441b9 pop ecx */
  ECX = (pop32());
  /* 11a441ba ret  */
  ESPCHK(0x11a44188u, _esp0);
  ESP += 4; return;
}

/* FUN_100041bb @ 0x11a441bb (215 bytes, 75 insns) */
void f_11a441bb(void) {
  FTRACE(0x11a441bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a441bb push ebp */
  push32((uint32_t)(EBP));
  /* 11a441bc mov ebp, esp */
  EBP = (ESP);
  /* 11a441be push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a441c0 push 0x11a4a1a0 */
  push32((uint32_t)(0x11a4a1a0u));
  /* 11a441c5 push 0x11a46fb4 */
  push32((uint32_t)(0x11a46fb4u));
  /* 11a441ca mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a441d0 push eax */
  push32((uint32_t)(EAX));
  /* 11a441d1 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a441d8 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a441db push ebx */
  push32((uint32_t)(EBX));
  /* 11a441dc push esi */
  push32((uint32_t)(ESI));
  /* 11a441dd push edi */
  push32((uint32_t)(EDI));
  /* 11a441de mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a441e1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a441e3 je 0x11a44295 */
  if (C.zf) { jmp_ind(0x11a44295u); return; }
  /* 11a441e9 mov eax, dword ptr [0x11a4fd68] */
  EAX = (r32((uint32_t)(0x11a4fd68)));
  /* 11a441ee cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a441f1 jne 0x11a4422e */
  if (!C.zf) goto L_11a4422e;
  /* 11a441f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a441f5 call 0x11a46e46 */
  push32(0x11a441fau); f_11a46e46();
  /* 11a441fa pop ecx */
  ECX = (pop32());
  /* 11a441fb and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a441ff push esi */
  push32((uint32_t)(ESI));
  /* 11a44200 call 0x11a45f84 */
  push32(0x11a44205u); f_11a45f84();
  /* 11a44205 pop ecx */
  ECX = (pop32());
  /* 11a44206 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a44209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4420b je 0x11a44216 */
  if (C.zf) goto L_11a44216;
  /* 11a4420d push esi */
  push32((uint32_t)(ESI));
  /* 11a4420e push eax */
  push32((uint32_t)(EAX));
  /* 11a4420f call 0x11a45faf */
  push32(0x11a44214u); f_11a45faf();
  /* 11a44214 pop ecx */
  ECX = (pop32());
  /* 11a44215 pop ecx */
  ECX = (pop32());
L_11a44216:;
  /* 11a44216 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a4421a call 0x11a44225 */
  push32(0x11a4421fu); f_11a44225();
  /* 11a4421f cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44223 jmp 0x11a44276 */
  goto L_11a44276;
  /* 11a44225 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a44227 call 0x11a46ea7 */
  push32(0x11a4422cu); f_11a46ea7();
  /* 11a4422c pop ecx */
  ECX = (pop32());
  /* 11a4422d ret  */
  ESPCHK(0x11a441bbu, _esp0);
  ESP += 4; return;
L_11a4422e:;
  /* 11a4422e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44231 jne 0x11a44286 */
  if (!C.zf) goto L_11a44286;
  /* 11a44233 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a44235 call 0x11a46e46 */
  push32(0x11a4423au); f_11a46e46();
  /* 11a4423a pop ecx */
  ECX = (pop32());
  /* 11a4423b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a44242 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11a44245 push eax */
  push32((uint32_t)(EAX));
  /* 11a44246 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11a44249 push eax */
  push32((uint32_t)(EAX));
  /* 11a4424a push esi */
  push32((uint32_t)(ESI));
  /* 11a4424b call 0x11a469e9 */
  push32(0x11a44250u); f_11a469e9();
  /* 11a44250 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44253 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a44256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44258 je 0x11a44269 */
  if (C.zf) goto L_11a44269;
  /* 11a4425a push eax */
  push32((uint32_t)(EAX));
  /* 11a4425b push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a4425e push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11a44261 call 0x11a46a40 */
  push32(0x11a44266u); f_11a46a40();
  /* 11a44266 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a44269:;
  /* 11a44269 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a4426d call 0x11a4427d */
  push32(0x11a44272u); f_11a4427d();
  /* 11a44272 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a44276:;
  /* 11a44276 jne 0x11a44295 */
  if (!C.zf) { jmp_ind(0x11a44295u); return; }
  /* 11a44278 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a4427b jmp 0x11a44287 */
  goto L_11a44287;
  /* 11a4427d push 9 */
  push32((uint32_t)(0x9u));
  /* 11a4427f call 0x11a46ea7 */
  push32(0x11a44284u); f_11a46ea7();
  /* 11a44284 pop ecx */
  ECX = (pop32());
  /* 11a44285 ret  */
  ESPCHK(0x11a441bbu, _esp0);
  ESP += 4; return;
L_11a44286:;
  /* 11a44286 push esi */
  push32((uint32_t)(ESI));
L_11a44287:;
  /* 11a44287 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a44289 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
}

/* FUN_10004225 @ 0x11a44225 (9 bytes, 4 insns) */
void f_11a44225(void) {
  FTRACE(0x11a44225u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44225 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a44227 call 0x11a46ea7 */
  push32(0x11a4422cu); f_11a46ea7();
  /* 11a4422c pop ecx */
  ECX = (pop32());
  /* 11a4422d ret  */
  ESPCHK(0x11a44225u, _esp0);
  ESP += 4; return;
}

/* FUN_1000427d @ 0x11a4427d (9 bytes, 4 insns) */
void f_11a4427d(void) {
  FTRACE(0x11a4427du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4427d push 9 */
  push32((uint32_t)(0x9u));
  /* 11a4427f call 0x11a46ea7 */
  push32(0x11a44284u); f_11a46ea7();
  /* 11a44284 pop ecx */
  ECX = (pop32());
  /* 11a44285 ret  */
  ESPCHK(0x11a4427du, _esp0);
  ESP += 4; return;
}

/* FUN_100042c0 @ 0x11a442c0 (188 bytes, 86 insns) */
void f_11a442c0(void) {
  FTRACE(0x11a442c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a442c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a442c2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a442c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a442c7 mov ebx, eax */
  EBX = (EAX);
  /* 11a442c9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a442cc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a442d0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a442d6 je 0x11a442eb */
  if (C.zf) goto L_11a442eb;
L_11a442d8:;
  /* 11a442d8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11a442da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a442db cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a442dd je 0x11a442b0 */
  if (C.zf) { jmp_ind(0x11a442b0u); return; }
  /* 11a442df test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11a442e1 je 0x11a44334 */
  if (C.zf) goto L_11a44334;
  /* 11a442e3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a442e9 jne 0x11a442d8 */
  if (!C.zf) goto L_11a442d8;
L_11a442eb:;
  /* 11a442eb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11a442ed push edi */
  push32((uint32_t)(EDI));
  /* 11a442ee mov eax, ebx */
  EAX = (EBX);
  /* 11a442f0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11a442f3 push esi */
  push32((uint32_t)(ESI));
  /* 11a442f4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11a442f6:;
  /* 11a442f6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a442f8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11a442fd mov eax, ecx */
  EAX = (ECX);
  /* 11a442ff mov esi, edi */
  ESI = (EDI);
  /* 11a44301 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11a44303 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44305 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44307 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a4430a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a4430d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a4430f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11a44311 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44314 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11a4431a jne 0x11a44338 */
  if (!C.zf) goto L_11a44338;
  /* 11a4431c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11a44321 je 0x11a442f6 */
  if (C.zf) goto L_11a442f6;
  /* 11a44323 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11a44328 jne 0x11a44332 */
  if (!C.zf) goto L_11a44332;
  /* 11a4432a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a44330 jne 0x11a442f6 */
  if (!C.zf) goto L_11a442f6;
L_11a44332:;
  /* 11a44332 pop esi */
  ESI = (pop32());
  /* 11a44333 pop edi */
  EDI = (pop32());
L_11a44334:;
  /* 11a44334 pop ebx */
  EBX = (pop32());
  /* 11a44335 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a44337 ret  */
  ESPCHK(0x11a442c0u, _esp0);
  ESP += 4; return;
L_11a44338:;
  /* 11a44338 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11a4433b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4433d je 0x11a44375 */
  if (C.zf) goto L_11a44375;
  /* 11a4433f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a44341 je 0x11a44332 */
  if (C.zf) goto L_11a44332;
  /* 11a44343 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a44345 je 0x11a4436e */
  if (C.zf) goto L_11a4436e;
  /* 11a44347 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a44349 je 0x11a44332 */
  if (C.zf) goto L_11a44332;
  /* 11a4434b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a4434e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a44350 je 0x11a44367 */
  if (C.zf) goto L_11a44367;
  /* 11a44352 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a44354 je 0x11a44332 */
  if (C.zf) goto L_11a44332;
  /* 11a44356 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a44358 je 0x11a44360 */
  if (C.zf) goto L_11a44360;
  /* 11a4435a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a4435c je 0x11a44332 */
  if (C.zf) goto L_11a44332;
  /* 11a4435e jmp 0x11a442f6 */
  goto L_11a442f6;
L_11a44360:;
  /* 11a44360 pop esi */
  ESI = (pop32());
  /* 11a44361 pop edi */
  EDI = (pop32());
  /* 11a44362 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11a44365 pop ebx */
  EBX = (pop32());
  /* 11a44366 ret  */
  ESPCHK(0x11a442c0u, _esp0);
  ESP += 4; return;
L_11a44367:;
  /* 11a44367 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11a4436a pop esi */
  ESI = (pop32());
  /* 11a4436b pop edi */
  EDI = (pop32());
  /* 11a4436c pop ebx */
  EBX = (pop32());
  /* 11a4436d ret  */
  ESPCHK(0x11a442c0u, _esp0);
  ESP += 4; return;
L_11a4436e:;
  /* 11a4436e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11a44371 pop esi */
  ESI = (pop32());
  /* 11a44372 pop edi */
  EDI = (pop32());
  /* 11a44373 pop ebx */
  EBX = (pop32());
  /* 11a44374 ret  */
  ESPCHK(0x11a442c0u, _esp0);
  ESP += 4; return;
L_11a44375:;
  /* 11a44375 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11a44378 pop esi */
  ESI = (pop32());
  /* 11a44379 pop edi */
  EDI = (pop32());
  /* 11a4437a pop ebx */
  EBX = (pop32());
  /* 11a4437b ret  */
  ESPCHK(0x11a442c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004438 @ 0x11a44438 (47 bytes, 17 insns) */
void f_11a44438(void) {
  FTRACE(0x11a44438u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44438 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a4443c mov ecx, 0x11a4b730 */
  ECX = (0x11a4b730u);
  /* 11a44441 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44443 jb 0x11a4445c */
  if (C.cf) goto L_11a4445c;
  /* 11a44445 cmp eax, 0x11a4b990 */
  { uint32_t _a=(EAX),_b=(0x11a4b990u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4444a ja 0x11a4445c */
  if ((!C.cf&&!C.zf)) goto L_11a4445c;
  /* 11a4444c sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4444e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a44451 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44454 push eax */
  push32((uint32_t)(EAX));
  /* 11a44455 call 0x11a46e46 */
  push32(0x11a4445au); f_11a46e46();
  /* 11a4445a pop ecx */
  ECX = (pop32());
  /* 11a4445b ret  */
  ESPCHK(0x11a44438u, _esp0);
  ESP += 4; return;
L_11a4445c:;
  /* 11a4445c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4445f push eax */
  push32((uint32_t)(EAX));
  /* 11a44460 call dword ptr [0x11a4a088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a088))), 0x11a44466u);
  /* 11a44466 ret  */
  ESPCHK(0x11a44438u, _esp0);
  ESP += 4; return;
}

/* FUN_10004467 @ 0x11a44467 (35 bytes, 13 insns) */
void f_11a44467(void) {
  FTRACE(0x11a44467u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44467 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a4446b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4446e jge 0x11a4447b */
  if ((C.sf==C.of)) goto L_11a4447b;
  /* 11a44470 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44473 push eax */
  push32((uint32_t)(EAX));
  /* 11a44474 call 0x11a46e46 */
  push32(0x11a44479u); f_11a46e46();
  /* 11a44479 pop ecx */
  ECX = (pop32());
  /* 11a4447a ret  */
  ESPCHK(0x11a44467u, _esp0);
  ESP += 4; return;
L_11a4447b:;
  /* 11a4447b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a4447f add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44482 push eax */
  push32((uint32_t)(EAX));
  /* 11a44483 call dword ptr [0x11a4a088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a088))), 0x11a44489u);
  /* 11a44489 ret  */
  ESPCHK(0x11a44467u, _esp0);
  ESP += 4; return;
}

/* FUN_1000448a @ 0x11a4448a (47 bytes, 17 insns) */
void f_11a4448a(void) {
  FTRACE(0x11a4448au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4448a mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a4448e mov ecx, 0x11a4b730 */
  ECX = (0x11a4b730u);
  /* 11a44493 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44495 jb 0x11a444ae */
  if (C.cf) goto L_11a444ae;
  /* 11a44497 cmp eax, 0x11a4b990 */
  { uint32_t _a=(EAX),_b=(0x11a4b990u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4449c ja 0x11a444ae */
  if ((!C.cf&&!C.zf)) goto L_11a444ae;
  /* 11a4449e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a444a0 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a444a3 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a444a6 push eax */
  push32((uint32_t)(EAX));
  /* 11a444a7 call 0x11a46ea7 */
  push32(0x11a444acu); f_11a46ea7();
  /* 11a444ac pop ecx */
  ECX = (pop32());
  /* 11a444ad ret  */
  ESPCHK(0x11a4448au, _esp0);
  ESP += 4; return;
L_11a444ae:;
  /* 11a444ae add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a444b1 push eax */
  push32((uint32_t)(EAX));
  /* 11a444b2 call dword ptr [0x11a4a08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a08c))), 0x11a444b8u);
  /* 11a444b8 ret  */
  ESPCHK(0x11a4448au, _esp0);
  ESP += 4; return;
}

/* FUN_100044b9 @ 0x11a444b9 (35 bytes, 13 insns) */
void f_11a444b9(void) {
  FTRACE(0x11a444b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a444b9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a444bd cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a444c0 jge 0x11a444cd */
  if ((C.sf==C.of)) goto L_11a444cd;
  /* 11a444c2 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a444c5 push eax */
  push32((uint32_t)(EAX));
  /* 11a444c6 call 0x11a46ea7 */
  push32(0x11a444cbu); f_11a46ea7();
  /* 11a444cb pop ecx */
  ECX = (pop32());
  /* 11a444cc ret  */
  ESPCHK(0x11a444b9u, _esp0);
  ESP += 4; return;
L_11a444cd:;
  /* 11a444cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a444d1 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a444d4 push eax */
  push32((uint32_t)(EAX));
  /* 11a444d5 call dword ptr [0x11a4a08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a08c))), 0x11a444dbu);
  /* 11a444db ret  */
  ESPCHK(0x11a444b9u, _esp0);
  ESP += 4; return;
}

/* FUN_100044dc @ 0x11a444dc (93 bytes, 32 insns) */
void f_11a444dc(void) {
  FTRACE(0x11a444dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a444dc push esi */
  push32((uint32_t)(ESI));
  /* 11a444dd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a444e1 cmp esi, dword ptr [0x11a4fe80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4fe80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a444e7 jae 0x11a44521 */
  if (!C.cf) goto L_11a44521;
  /* 11a444e9 mov ecx, esi */
  ECX = (ESI);
  /* 11a444eb mov eax, esi */
  EAX = (ESI);
  /* 11a444ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a444f0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a444f3 mov ecx, dword ptr [ecx*4 + 0x11a4fd80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a444fa lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a444fd test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a44502 je 0x11a44521 */
  if (C.zf) goto L_11a44521;
  /* 11a44504 push edi */
  push32((uint32_t)(EDI));
  /* 11a44505 push esi */
  push32((uint32_t)(ESI));
  /* 11a44506 call 0x11a474aa */
  push32(0x11a4450bu); f_11a474aa();
  /* 11a4450b push esi */
  push32((uint32_t)(ESI));
  /* 11a4450c call 0x11a44539 */
  push32(0x11a44511u); f_11a44539();
  /* 11a44511 push esi */
  push32((uint32_t)(ESI));
  /* 11a44512 mov edi, eax */
  EDI = (EAX);
  /* 11a44514 call 0x11a47509 */
  push32(0x11a44519u); f_11a47509();
  /* 11a44519 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4451c mov eax, edi */
  EAX = (EDI);
  /* 11a4451e pop edi */
  EDI = (pop32());
  /* 11a4451f pop esi */
  ESI = (pop32());
  /* 11a44520 ret  */
  ESPCHK(0x11a444dcu, _esp0);
  ESP += 4; return;
L_11a44521:;
  /* 11a44521 call 0x11a44f22 */
  push32(0x11a44526u); f_11a44f22();
  /* 11a44526 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a4452c call 0x11a44f2b */
  push32(0x11a44531u); f_11a44f2b();
  /* 11a44531 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a44534 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a44537 pop esi */
  ESI = (pop32());
  /* 11a44538 ret  */
  ESPCHK(0x11a444dcu, _esp0);
  ESP += 4; return;
}

/* FUN_10004539 @ 0x11a44539 (131 bytes, 52 insns) */
void f_11a44539(void) {
  FTRACE(0x11a44539u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44539 push esi */
  push32((uint32_t)(ESI));
  /* 11a4453a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a4453e push edi */
  push32((uint32_t)(EDI));
  /* 11a4453f push esi */
  push32((uint32_t)(ESI));
  /* 11a44540 call 0x11a47468 */
  push32(0x11a44545u); f_11a47468();
  /* 11a44545 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44548 pop ecx */
  ECX = (pop32());
  /* 11a44549 je 0x11a44587 */
  if (C.zf) goto L_11a44587;
  /* 11a4454b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4454e je 0x11a44555 */
  if (C.zf) goto L_11a44555;
  /* 11a44550 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44553 jne 0x11a4456b */
  if (!C.zf) goto L_11a4456b;
L_11a44555:;
  /* 11a44555 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a44557 call 0x11a47468 */
  push32(0x11a4455cu); f_11a47468();
  /* 11a4455c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4455e mov edi, eax */
  EDI = (EAX);
  /* 11a44560 call 0x11a47468 */
  push32(0x11a44565u); f_11a47468();
  /* 11a44565 pop ecx */
  ECX = (pop32());
  /* 11a44566 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44568 pop ecx */
  ECX = (pop32());
  /* 11a44569 je 0x11a44587 */
  if (C.zf) goto L_11a44587;
L_11a4456b:;
  /* 11a4456b push esi */
  push32((uint32_t)(ESI));
  /* 11a4456c call 0x11a47468 */
  push32(0x11a44571u); f_11a47468();
  /* 11a44571 pop ecx */
  ECX = (pop32());
  /* 11a44572 push eax */
  push32((uint32_t)(EAX));
  /* 11a44573 call dword ptr [0x11a4a094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a094))), 0x11a44579u);
  /* 11a44579 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4457b jne 0x11a44587 */
  if (!C.zf) goto L_11a44587;
  /* 11a4457d call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a44583u);
  /* 11a44583 mov edi, eax */
  EDI = (EAX);
  /* 11a44585 jmp 0x11a44589 */
  goto L_11a44589;
L_11a44587:;
  /* 11a44587 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a44589:;
  /* 11a44589 push esi */
  push32((uint32_t)(ESI));
  /* 11a4458a call 0x11a473e9 */
  push32(0x11a4458fu); f_11a473e9();
  /* 11a4458f mov eax, esi */
  EAX = (ESI);
  /* 11a44591 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11a44594 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a44597 pop ecx */
  ECX = (pop32());
  /* 11a44598 mov eax, dword ptr [eax*4 + 0x11a4fd80] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11a4fd80)));
  /* 11a4459f lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 11a445a2 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a445a7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a445a9 je 0x11a445b7 */
  if (C.zf) goto L_11a445b7;
  /* 11a445ab push edi */
  push32((uint32_t)(EDI));
  /* 11a445ac call 0x11a44eaf */
  push32(0x11a445b1u); f_11a44eaf();
  /* 11a445b1 pop ecx */
  ECX = (pop32());
  /* 11a445b2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a445b5 jmp 0x11a445b9 */
  goto L_11a445b9;
L_11a445b7:;
  /* 11a445b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a445b9:;
  /* 11a445b9 pop edi */
  EDI = (pop32());
  /* 11a445ba pop esi */
  ESI = (pop32());
  /* 11a445bb ret  */
  ESPCHK(0x11a44539u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x11a445bc (43 bytes, 17 insns) */
void f_11a445bc(void) {
  FTRACE(0x11a445bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a445bc push esi */
  push32((uint32_t)(ESI));
  /* 11a445bd mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a445c1 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a445c4 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11a445c6 je 0x11a445e5 */
  if (C.zf) goto L_11a445e5;
  /* 11a445c8 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a445ca je 0x11a445e5 */
  if (C.zf) goto L_11a445e5;
  /* 11a445cc push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11a445cf call 0x11a441bb */
  push32(0x11a445d4u); f_11a441bb();
  /* 11a445d4 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 11a445da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a445dc pop ecx */
  ECX = (pop32());
  /* 11a445dd mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a445df mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11a445e2 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_11a445e5:;
  /* 11a445e5 pop esi */
  ESI = (pop32());
  /* 11a445e6 ret  */
  ESPCHK(0x11a445bcu, _esp0);
  ESP += 4; return;
}

/* FUN_100045e7 @ 0x11a445e7 (46 bytes, 22 insns) */
void f_11a445e7(void) {
  FTRACE(0x11a445e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a445e7 push esi */
  push32((uint32_t)(ESI));
  /* 11a445e8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a445ec push esi */
  push32((uint32_t)(ESI));
  /* 11a445ed call 0x11a44615 */
  push32(0x11a445f2u); f_11a44615();
  /* 11a445f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a445f4 pop ecx */
  ECX = (pop32());
  /* 11a445f5 je 0x11a445fc */
  if (C.zf) goto L_11a445fc;
  /* 11a445f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a445fa pop esi */
  ESI = (pop32());
  /* 11a445fb ret  */
  ESPCHK(0x11a445e7u, _esp0);
  ESP += 4; return;
L_11a445fc:;
  /* 11a445fc test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 11a44600 je 0x11a44611 */
  if (C.zf) goto L_11a44611;
  /* 11a44602 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a44605 call 0x11a4752b */
  push32(0x11a4460au); f_11a4752b();
  /* 11a4460a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a4460c pop ecx */
  ECX = (pop32());
  /* 11a4460d pop esi */
  ESI = (pop32());
  /* 11a4460e sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44610 ret  */
  ESPCHK(0x11a445e7u, _esp0);
  ESP += 4; return;
L_11a44611:;
  /* 11a44611 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a44613 pop esi */
  ESI = (pop32());
  /* 11a44614 ret  */
  ESPCHK(0x11a445e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10004615 @ 0x11a44615 (92 bytes, 40 insns) */
void f_11a44615(void) {
  FTRACE(0x11a44615u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44615 push ebx */
  push32((uint32_t)(EBX));
  /* 11a44616 push esi */
  push32((uint32_t)(ESI));
  /* 11a44617 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11a4461b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a4461d push edi */
  push32((uint32_t)(EDI));
  /* 11a4461e mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a44621 mov ecx, eax */
  ECX = (EAX);
  /* 11a44623 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a44626 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a44629 jne 0x11a44662 */
  if (!C.zf) goto L_11a44662;
  /* 11a4462b test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 11a4462f je 0x11a44662 */
  if (C.zf) goto L_11a44662;
  /* 11a44631 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a44634 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11a44636 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44638 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a4463a jle 0x11a44662 */
  if ((C.zf||C.sf!=C.of)) goto L_11a44662;
  /* 11a4463c push edi */
  push32((uint32_t)(EDI));
  /* 11a4463d push eax */
  push32((uint32_t)(EAX));
  /* 11a4463e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a44641 call 0x11a475be */
  push32(0x11a44646u); f_11a475be();
  /* 11a44646 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44649 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4464b jne 0x11a4465b */
  if (!C.zf) goto L_11a4465b;
  /* 11a4464d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a44650 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11a44652 je 0x11a44662 */
  if (C.zf) goto L_11a44662;
  /* 11a44654 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11a44656 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a44659 jmp 0x11a44662 */
  goto L_11a44662;
L_11a4465b:;
  /* 11a4465b or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a4465f or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_11a44662:;
  /* 11a44662 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a44665 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a44669 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a4466b pop edi */
  EDI = (pop32());
  /* 11a4466c mov eax, ebx */
  EAX = (EBX);
  /* 11a4466e pop esi */
  ESI = (pop32());
  /* 11a4466f pop ebx */
  EBX = (pop32());
  /* 11a44670 ret  */
  ESPCHK(0x11a44615u, _esp0);
  ESP += 4; return;
}

/* FUN_1000467a @ 0x11a4467a (164 bytes, 66 insns) */
void f_11a4467a(void) {
  FTRACE(0x11a4467au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4467a push ebx */
  push32((uint32_t)(EBX));
  /* 11a4467b push esi */
  push32((uint32_t)(ESI));
  /* 11a4467c push edi */
  push32((uint32_t)(EDI));
  /* 11a4467d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a4467f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a44681 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a44683 call 0x11a46e46 */
  push32(0x11a44688u); f_11a46e46();
  /* 11a44688 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a4468a pop ecx */
  ECX = (pop32());
  /* 11a4468b cmp dword ptr [0x11a50ea0], esi */
  { uint32_t _a=(r32((uint32_t)(0x11a50ea0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44691 jle 0x11a44707 */
  if ((C.zf||C.sf!=C.of)) goto L_11a44707;
L_11a44693:;
  /* 11a44693 mov eax, dword ptr [0x11a4fe84] */
  EAX = (r32((uint32_t)(0x11a4fe84)));
  /* 11a44698 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11a4469b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4469d je 0x11a446fe */
  if (C.zf) goto L_11a446fe;
  /* 11a4469f test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11a446a3 je 0x11a446fe */
  if (C.zf) goto L_11a446fe;
  /* 11a446a5 push eax */
  push32((uint32_t)(EAX));
  /* 11a446a6 push esi */
  push32((uint32_t)(ESI));
  /* 11a446a7 call 0x11a44467 */
  push32(0x11a446acu); f_11a44467();
  /* 11a446ac mov eax, dword ptr [0x11a4fe84] */
  EAX = (r32((uint32_t)(0x11a4fe84)));
  /* 11a446b1 pop ecx */
  ECX = (pop32());
  /* 11a446b2 pop ecx */
  ECX = (pop32());
  /* 11a446b3 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11a446b6 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a446b9 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 11a446bc je 0x11a446ee */
  if (C.zf) goto L_11a446ee;
  /* 11a446be cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a446c3 jne 0x11a446d4 */
  if (!C.zf) goto L_11a446d4;
  /* 11a446c5 push eax */
  push32((uint32_t)(EAX));
  /* 11a446c6 call 0x11a445e7 */
  push32(0x11a446cbu); f_11a445e7();
  /* 11a446cb cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a446ce pop ecx */
  ECX = (pop32());
  /* 11a446cf je 0x11a446ee */
  if (C.zf) goto L_11a446ee;
  /* 11a446d1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a446d2 jmp 0x11a446ee */
  goto L_11a446ee;
L_11a446d4:;
  /* 11a446d4 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a446d9 jne 0x11a446ee */
  if (!C.zf) goto L_11a446ee;
  /* 11a446db test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11a446de je 0x11a446ee */
  if (C.zf) goto L_11a446ee;
  /* 11a446e0 push eax */
  push32((uint32_t)(EAX));
  /* 11a446e1 call 0x11a445e7 */
  push32(0x11a446e6u); f_11a445e7();
  /* 11a446e6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a446e9 pop ecx */
  ECX = (pop32());
  /* 11a446ea jne 0x11a446ee */
  if (!C.zf) goto L_11a446ee;
  /* 11a446ec or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_11a446ee:;
  /* 11a446ee mov eax, dword ptr [0x11a4fe84] */
  EAX = (r32((uint32_t)(0x11a4fe84)));
  /* 11a446f3 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 11a446f6 push esi */
  push32((uint32_t)(ESI));
  /* 11a446f7 call 0x11a444b9 */
  push32(0x11a446fcu); f_11a444b9();
  /* 11a446fc pop ecx */
  ECX = (pop32());
  /* 11a446fd pop ecx */
  ECX = (pop32());
L_11a446fe:;
  /* 11a446fe inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a446ff cmp esi, dword ptr [0x11a50ea0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a50ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44705 jl 0x11a44693 */
  if ((C.sf!=C.of)) goto L_11a44693;
L_11a44707:;
  /* 11a44707 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a44709 call 0x11a46ea7 */
  push32(0x11a4470eu); f_11a46ea7();
  /* 11a4470e cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44713 pop ecx */
  ECX = (pop32());
  /* 11a44714 mov eax, ebx */
  EAX = (EBX);
  /* 11a44716 je 0x11a4471a */
  if (C.zf) goto L_11a4471a;
  /* 11a44718 mov eax, edi */
  EAX = (EDI);
L_11a4471a:;
  /* 11a4471a pop edi */
  EDI = (pop32());
  /* 11a4471b pop esi */
  ESI = (pop32());
  /* 11a4471c pop ebx */
  EBX = (pop32());
  /* 11a4471d ret  */
  ESPCHK(0x11a4467au, _esp0);
  ESP += 4; return;
}

/* FUN_1000471e @ 0x11a4471e (220 bytes, 79 insns) */
void f_11a4471e(void) {
  FTRACE(0x11a4471eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4471e push esi */
  push32((uint32_t)(ESI));
  /* 11a4471f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a44723 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a44726 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11a44728 je 0x11a447f5 */
  if (C.zf) goto L_11a447f5;
  /* 11a4472e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11a44730 jne 0x11a447f5 */
  if (!C.zf) goto L_11a447f5;
  /* 11a44736 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 11a44738 je 0x11a44744 */
  if (C.zf) goto L_11a44744;
  /* 11a4473a or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11a4473c mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a4473f jmp 0x11a447f5 */
  goto L_11a447f5;
L_11a44744:;
  /* 11a44744 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11a44746 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 11a4474a mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a4474d jne 0x11a44758 */
  if (!C.zf) goto L_11a44758;
  /* 11a4474f push esi */
  push32((uint32_t)(ESI));
  /* 11a44750 call 0x11a477ae */
  push32(0x11a44755u); f_11a477ae();
  /* 11a44755 pop ecx */
  ECX = (pop32());
  /* 11a44756 jmp 0x11a4475d */
  goto L_11a4475d;
L_11a44758:;
  /* 11a44758 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a4475b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
L_11a4475d:;
  /* 11a4475d push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11a44760 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11a44763 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a44766 call 0x11a447fa */
  push32(0x11a4476bu); f_11a447fa();
  /* 11a4476b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4476e mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11a44771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44773 je 0x11a447e4 */
  if (C.zf) goto L_11a447e4;
  /* 11a44775 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44778 je 0x11a447e4 */
  if (C.zf) goto L_11a447e4;
  /* 11a4477a mov edx, dword ptr [esi + 0xc] */
  EDX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a4477d test dl, 0x82 */
  { uint32_t _r=(DL)&(0x82u); fl_logic(_r,8); }
  /* 11a44780 jne 0x11a447b9 */
  if (!C.zf) goto L_11a447b9;
  /* 11a44782 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a44785 push edi */
  push32((uint32_t)(EDI));
  /* 11a44786 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44789 je 0x11a447a2 */
  if (C.zf) goto L_11a447a2;
  /* 11a4478b mov edi, ecx */
  EDI = (ECX);
  /* 11a4478d sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 11a44790 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a44793 mov edi, dword ptr [edi*4 + 0x11a4fd80] */
  EDI = (r32((uint32_t)(EDI*4 + 0x11a4fd80)));
  /* 11a4479a lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 11a4479d lea edi, [edi + ecx*4] */
  EDI = ((uint32_t)(EDI + ECX*4));
  /* 11a447a0 jmp 0x11a447a7 */
  goto L_11a447a7;
L_11a447a2:;
  /* 11a447a2 mov edi, 0x11a4bb18 */
  EDI = (0x11a4bb18u);
L_11a447a7:;
  /* 11a447a7 mov cl, byte ptr [edi + 4] */
  CL = (r8((uint32_t)(EDI + 0x4)));
  /* 11a447aa pop edi */
  EDI = (pop32());
  /* 11a447ab and cl, 0x82 */
  { uint32_t _r=(CL)&(0x82u); CL = (_r); fl_logic(_r,8); }
  /* 11a447ae cmp cl, 0x82 */
  { uint32_t _a=(CL),_b=(0x82u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a447b1 jne 0x11a447b9 */
  if (!C.zf) goto L_11a447b9;
  /* 11a447b3 or dh, 0x20 */
  { uint32_t _r=(C.d.b.h)|(0x20u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a447b6 mov dword ptr [esi + 0xc], edx */
  w32((uint32_t)(ESI + 0xc), (EDX));
L_11a447b9:;
  /* 11a447b9 cmp dword ptr [esi + 0x18], 0x200 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a447c0 jne 0x11a447d6 */
  if (!C.zf) goto L_11a447d6;
  /* 11a447c2 mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a447c5 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 11a447c8 je 0x11a447d6 */
  if (C.zf) goto L_11a447d6;
  /* 11a447ca test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 11a447cd jne 0x11a447d6 */
  if (!C.zf) goto L_11a447d6;
  /* 11a447cf mov dword ptr [esi + 0x18], 0x1000 */
  w32((uint32_t)(ESI + 0x18), (0x1000u));
L_11a447d6:;
  /* 11a447d6 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a447d8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a447d9 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11a447dc movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a447df inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a447e0 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a447e2 pop esi */
  ESI = (pop32());
  /* 11a447e3 ret  */
  ESPCHK(0x11a4471eu, _esp0);
  ESP += 4; return;
L_11a447e4:;
  /* 11a447e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a447e6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a447e8 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a447eb add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a447ee or dword ptr [esi + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(EAX); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a447f1 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
L_11a447f5:;
  /* 11a447f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a447f8 pop esi */
  ESI = (pop32());
  /* 11a447f9 ret  */
  ESPCHK(0x11a4471eu, _esp0);
  ESP += 4; return;
}

/* FUN_100047fa @ 0x11a447fa (101 bytes, 34 insns) */
void f_11a447fa(void) {
  FTRACE(0x11a447fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a447fa push esi */
  push32((uint32_t)(ESI));
  /* 11a447fb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a447ff cmp esi, dword ptr [0x11a4fe80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4fe80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44805 jae 0x11a44847 */
  if (!C.cf) goto L_11a44847;
  /* 11a44807 mov ecx, esi */
  ECX = (ESI);
  /* 11a44809 mov eax, esi */
  EAX = (ESI);
  /* 11a4480b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a4480e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a44811 mov ecx, dword ptr [ecx*4 + 0x11a4fd80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a44818 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a4481b test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a44820 je 0x11a44847 */
  if (C.zf) goto L_11a44847;
  /* 11a44822 push edi */
  push32((uint32_t)(EDI));
  /* 11a44823 push esi */
  push32((uint32_t)(ESI));
  /* 11a44824 call 0x11a474aa */
  push32(0x11a44829u); f_11a474aa();
  /* 11a44829 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a4482d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a44831 push esi */
  push32((uint32_t)(ESI));
  /* 11a44832 call 0x11a4485f */
  push32(0x11a44837u); f_11a4485f();
  /* 11a44837 push esi */
  push32((uint32_t)(ESI));
  /* 11a44838 mov edi, eax */
  EDI = (EAX);
  /* 11a4483a call 0x11a47509 */
  push32(0x11a4483fu); f_11a47509();
  /* 11a4483f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44842 mov eax, edi */
  EAX = (EDI);
  /* 11a44844 pop edi */
  EDI = (pop32());
  /* 11a44845 pop esi */
  ESI = (pop32());
  /* 11a44846 ret  */
  ESPCHK(0x11a447fau, _esp0);
  ESP += 4; return;
L_11a44847:;
  /* 11a44847 call 0x11a44f22 */
  push32(0x11a4484cu); f_11a44f22();
  /* 11a4484c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a44852 call 0x11a44f2b */
  push32(0x11a44857u); f_11a44f2b();
  /* 11a44857 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a4485a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a4485d pop esi */
  ESI = (pop32());
  /* 11a4485e ret  */
  ESPCHK(0x11a447fau, _esp0);
  ESP += 4; return;
}

/* FUN_1000485f @ 0x11a4485f (473 bytes, 170 insns) */
void f_11a4485f(void) {
  FTRACE(0x11a4485fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4485f push ebp */
  push32((uint32_t)(EBP));
  /* 11a44860 mov ebp, esp */
  EBP = (ESP);
  /* 11a44862 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44865 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a44869 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4486d push ebx */
  push32((uint32_t)(EBX));
  /* 11a4486e mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a44871 push esi */
  push32((uint32_t)(ESI));
  /* 11a44872 push edi */
  push32((uint32_t)(EDI));
  /* 11a44873 mov edx, ebx */
  EDX = (EBX);
  /* 11a44875 je 0x11a44a31 */
  if (C.zf) goto L_11a44a31;
  /* 11a4487b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a4487e mov ecx, eax */
  ECX = (EAX);
  /* 11a44880 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a44883 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a44886 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a44889 mov eax, dword ptr [ecx*4 + 0x11a4fd80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a44890 lea edi, [ecx*4 + 0x11a4fd80] */
  EDI = ((uint32_t)(ECX*4 + 0x11a4fd80));
  /* 11a44897 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a4489a add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4489c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a4489f test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11a448a2 jne 0x11a44a31 */
  if (!C.zf) goto L_11a44a31;
  /* 11a448a8 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 11a448ab je 0x11a448ca */
  if (C.zf) goto L_11a448ca;
  /* 11a448ad mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 11a448b0 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a448b2 je 0x11a448ca */
  if (C.zf) goto L_11a448ca;
  /* 11a448b4 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11a448b7 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11a448b9 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a448bb lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 11a448be mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a448c5 mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_11a448ca:;
  /* 11a448ca lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a448cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a448cf push eax */
  push32((uint32_t)(EAX));
  /* 11a448d0 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a448d2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a448d5 push edx */
  push32((uint32_t)(EDX));
  /* 11a448d6 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11a448d9 call dword ptr [0x11a4a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a098))), 0x11a448dfu);
  /* 11a448df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a448e1 jne 0x11a4491c */
  if (!C.zf) goto L_11a4491c;
  /* 11a448e3 call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a448e9u);
  /* 11a448e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a448eb pop esi */
  ESI = (pop32());
  /* 11a448ec cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a448ee jne 0x11a44904 */
  if (!C.zf) goto L_11a44904;
  /* 11a448f0 call 0x11a44f22 */
  push32(0x11a448f5u); f_11a44f22();
  /* 11a448f5 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a448fb call 0x11a44f2b */
  push32(0x11a44900u); f_11a44f2b();
  /* 11a44900 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11a44902 jmp 0x11a44914 */
  goto L_11a44914;
L_11a44904:;
  /* 11a44904 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44907 je 0x11a44a31 */
  if (C.zf) goto L_11a44a31;
  /* 11a4490d push eax */
  push32((uint32_t)(EAX));
  /* 11a4490e call 0x11a44eaf */
  push32(0x11a44913u); f_11a44eaf();
  /* 11a44913 pop ecx */
  ECX = (pop32());
L_11a44914:;
  /* 11a44914 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a44917 jmp 0x11a44a33 */
  goto L_11a44a33;
L_11a4491c:;
  /* 11a4491c mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a4491e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a44921 add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a44924 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11a44928 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 11a4492c test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11a4492e je 0x11a44a2c */
  if (C.zf) goto L_11a44a2c;
  /* 11a44934 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a44936 je 0x11a44941 */
  if (C.zf) goto L_11a44941;
  /* 11a44938 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4493b jne 0x11a44941 */
  if (!C.zf) goto L_11a44941;
  /* 11a4493d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11a4493f jmp 0x11a44943 */
  goto L_11a44943;
L_11a44941:;
  /* 11a44941 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_11a44943:;
  /* 11a44943 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a44945 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a44948 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a4494b mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11a4494e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44950 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44952 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a44955 jae 0x11a44a26 */
  if (!C.cf) goto L_11a44a26;
L_11a4495b:;
  /* 11a4495b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a4495e mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 11a44960 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a44962 je 0x11a44a16 */
  if (C.zf) goto L_11a44a16;
  /* 11a44968 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4496a je 0x11a44977 */
  if (C.zf) goto L_11a44977;
  /* 11a4496c mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11a4496e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a4496f inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a44972 jmp 0x11a44a08 */
  goto L_11a44a08;
L_11a44977:;
  /* 11a44977 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a44978 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4497b jae 0x11a44995 */
  if (!C.cf) goto L_11a44995;
  /* 11a4497d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a44980 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a44981 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a44984 jne 0x11a4498c */
  if (!C.zf) goto L_11a4498c;
  /* 11a44986 add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a4498a jmp 0x11a449ea */
  goto L_11a449ea;
L_11a4498c:;
  /* 11a4498c mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11a4498f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a44990 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11a44993 jmp 0x11a44a08 */
  goto L_11a44a08;
L_11a44995:;
  /* 11a44995 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a44998 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4499a push eax */
  push32((uint32_t)(EAX));
  /* 11a4499b inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a4499e lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 11a449a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a449a3 push eax */
  push32((uint32_t)(EAX));
  /* 11a449a4 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a449a6 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11a449a9 call dword ptr [0x11a4a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a098))), 0x11a449afu);
  /* 11a449af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a449b1 jne 0x11a449bd */
  if (!C.zf) goto L_11a449bd;
  /* 11a449b3 call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a449b9u);
  /* 11a449b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a449bb jne 0x11a44a04 */
  if (!C.zf) goto L_11a44a04;
L_11a449bd:;
  /* 11a449bd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a449c1 je 0x11a44a04 */
  if (C.zf) goto L_11a44a04;
  /* 11a449c3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a449c5 test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 11a449ca je 0x11a449df */
  if (C.zf) goto L_11a449df;
  /* 11a449cc mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 11a449cf cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a449d1 je 0x11a449ea */
  if (C.zf) goto L_11a449ea;
  /* 11a449d3 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11a449d6 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11a449d8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a449d9 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 11a449dd jmp 0x11a44a08 */
  goto L_11a44a08;
L_11a449df:;
  /* 11a449df cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a449e2 jne 0x11a449ef */
  if (!C.zf) goto L_11a449ef;
  /* 11a449e4 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a449e8 jne 0x11a449ef */
  if (!C.zf) goto L_11a449ef;
L_11a449ea:;
  /* 11a449ea mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 11a449ed jmp 0x11a44a07 */
  goto L_11a44a07;
L_11a449ef:;
  /* 11a449ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11a449f1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a449f3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a449f6 call 0x11a451a9 */
  push32(0x11a449fbu); f_11a451a9();
  /* 11a449fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a449fe cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a44a02 je 0x11a44a08 */
  if (C.zf) goto L_11a44a08;
L_11a44a04:;
  /* 11a44a04 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_11a44a07:;
  /* 11a44a07 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11a44a08:;
  /* 11a44a08 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a44a0b cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44a0e jb 0x11a4495b */
  if (C.cf) goto L_11a4495b;
  /* 11a44a14 jmp 0x11a44a26 */
  goto L_11a44a26;
L_11a44a16:;
  /* 11a44a16 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a44a18 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11a44a1c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a44a1e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11a44a20 jne 0x11a44a26 */
  if (!C.zf) goto L_11a44a26;
  /* 11a44a22 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11a44a24 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_11a44a26:;
  /* 11a44a26 sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44a29 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_11a44a2c:;
  /* 11a44a2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a44a2f jmp 0x11a44a33 */
  goto L_11a44a33;
L_11a44a31:;
  /* 11a44a31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a44a33:;
  /* 11a44a33 pop edi */
  EDI = (pop32());
  /* 11a44a34 pop esi */
  ESI = (pop32());
  /* 11a44a35 pop ebx */
  EBX = (pop32());
  /* 11a44a36 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a44a37 ret  */
  ESPCHK(0x11a4485fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x11a44a40 (664 bytes, 270 insns) [15 switch table(s)] */
void f_11a44a40(void) {
  FTRACE(0x11a44a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a44a41 mov ebp, esp */
  EBP = (ESP);
  /* 11a44a43 push edi */
  push32((uint32_t)(EDI));
  /* 11a44a44 push esi */
  push32((uint32_t)(ESI));
  /* 11a44a45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a44a48 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a44a4b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44a4e mov eax, ecx */
  EAX = (ECX);
  /* 11a44a50 mov edx, ecx */
  EDX = (ECX);
  /* 11a44a52 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44a54 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44a56 jbe 0x11a44a60 */
  if ((C.cf||C.zf)) goto L_11a44a60;
  /* 11a44a58 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44a5a jb 0x11a44bd8 */
  if (C.cf) goto L_11a44bd8;
L_11a44a60:;
  /* 11a44a60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a44a66 jne 0x11a44a7c */
  if (!C.zf) goto L_11a44a7c;
  /* 11a44a68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a44a6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a44a6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44a71 jb 0x11a44a9c */
  if (C.cf) goto L_11a44a9c;
  /* 11a44a73 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a44a75 jmp dword ptr [edx*4 + 0x11a44b88] */
  switch (EDX) {
    case 0: goto L_11a44b98;
    case 1: goto L_11a44ba0;
    case 2: goto L_11a44bac;
    case 3: goto L_11a44bc0;
    default: x86_unimpl("switch@0x11a44a75 out of table"); return;
  }
L_11a44a7c:;
  /* 11a44a7c mov eax, edi */
  EAX = (EDI);
  /* 11a44a7e mov edx, 3 */
  EDX = (0x3u);
  /* 11a44a83 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44a86 jb 0x11a44a94 */
  if (C.cf) goto L_11a44a94;
  /* 11a44a88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a44a8b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44a8d jmp dword ptr [eax*4 + 0x11a44aa0] */
  switch (EAX) {
    case 1: goto L_11a44ab0;
    case 2: goto L_11a44adc;
    case 3: goto L_11a44b00;
    default: x86_unimpl("switch@0x11a44a8d out of table"); return;
  }
L_11a44a94:;
  /* 11a44a94 jmp dword ptr [ecx*4 + 0x11a44b98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a44b98)))); return;
  /* 11a44a9b nop  */
  /* nop */
L_11a44a9c:;
  /* 11a44a9c jmp dword ptr [ecx*4 + 0x11a44b1c] */
  switch (ECX) {
    case 0: goto L_11a44b7f;
    case 1: goto L_11a44b6c;
    case 2: goto L_11a44b64;
    case 3: goto L_11a44b5c;
    case 4: goto L_11a44b54;
    case 5: goto L_11a44b4c;
    case 6: goto L_11a44b44;
    case 7: goto L_11a44b3c;
    default: x86_unimpl("switch@0x11a44a9c out of table"); return;
  }
  /* 11a44aa3 nop  */
  /* nop */
L_11a44ab0:;
  /* 11a44ab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a44ab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a44ab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a44ab6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a44ab9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a44abc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a44abf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a44ac2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a44ac5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44ac8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44acb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44ace jb 0x11a44a9c */
  if (C.cf) goto L_11a44a9c;
  /* 11a44ad0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a44ad2 jmp dword ptr [edx*4 + 0x11a44b88] */
  switch (EDX) {
    case 0: goto L_11a44b98;
    case 1: goto L_11a44ba0;
    case 2: goto L_11a44bac;
    case 3: goto L_11a44bc0;
    default: x86_unimpl("switch@0x11a44ad2 out of table"); return;
  }
  /* 11a44ad9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a44adc:;
  /* 11a44adc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a44ade mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a44ae0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a44ae2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a44ae5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a44ae8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a44aeb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44aee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44af1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44af4 jb 0x11a44a9c */
  if (C.cf) goto L_11a44a9c;
  /* 11a44af6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a44af8 jmp dword ptr [edx*4 + 0x11a44b88] */
  switch (EDX) {
    case 0: goto L_11a44b98;
    case 1: goto L_11a44ba0;
    case 2: goto L_11a44bac;
    case 3: goto L_11a44bc0;
    default: x86_unimpl("switch@0x11a44af8 out of table"); return;
  }
  /* 11a44aff nop  */
  /* nop */
L_11a44b00:;
  /* 11a44b00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a44b02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a44b04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a44b06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a44b07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a44b0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a44b0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44b0e jb 0x11a44a9c */
  if (C.cf) goto L_11a44a9c;
  /* 11a44b10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a44b12 jmp dword ptr [edx*4 + 0x11a44b88] */
  switch (EDX) {
    case 0: goto L_11a44b98;
    case 1: goto L_11a44ba0;
    case 2: goto L_11a44bac;
    case 3: goto L_11a44bc0;
    default: x86_unimpl("switch@0x11a44b12 out of table"); return;
  }
  /* 11a44b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a44b3c:;
  /* 11a44b3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a44b40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a44b44:;
  /* 11a44b44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a44b48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a44b4c:;
  /* 11a44b4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a44b50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a44b54:;
  /* 11a44b54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a44b58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a44b5c:;
  /* 11a44b5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a44b60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a44b64:;
  /* 11a44b64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a44b68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a44b6c:;
  /* 11a44b6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a44b70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a44b74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a44b7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44b7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a44b7f:;
  /* 11a44b7f jmp dword ptr [edx*4 + 0x11a44b88] */
  switch (EDX) {
    case 0: goto L_11a44b98;
    case 1: goto L_11a44ba0;
    case 2: goto L_11a44bac;
    case 3: goto L_11a44bc0;
    default: x86_unimpl("switch@0x11a44b7f out of table"); return;
  }
  /* 11a44b86 mov edi, edi */
  EDI = (EDI);
L_11a44b98:;
  /* 11a44b98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44b9b pop esi */
  ESI = (pop32());
  /* 11a44b9c pop edi */
  EDI = (pop32());
  /* 11a44b9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a44b9e ret  */
  ESPCHK(0x11a44a40u, _esp0);
  ESP += 4; return;
  /* 11a44b9f nop  */
  /* nop */
L_11a44ba0:;
  /* 11a44ba0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a44ba2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a44ba4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44ba7 pop esi */
  ESI = (pop32());
  /* 11a44ba8 pop edi */
  EDI = (pop32());
  /* 11a44ba9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a44baa ret  */
  ESPCHK(0x11a44a40u, _esp0);
  ESP += 4; return;
  /* 11a44bab nop  */
  /* nop */
L_11a44bac:;
  /* 11a44bac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a44bae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a44bb0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a44bb3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a44bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44bb9 pop esi */
  ESI = (pop32());
  /* 11a44bba pop edi */
  EDI = (pop32());
  /* 11a44bbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a44bbc ret  */
  ESPCHK(0x11a44a40u, _esp0);
  ESP += 4; return;
  /* 11a44bbd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a44bc0:;
  /* 11a44bc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a44bc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a44bc4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a44bc7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a44bca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a44bcd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a44bd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44bd3 pop esi */
  ESI = (pop32());
  /* 11a44bd4 pop edi */
  EDI = (pop32());
  /* 11a44bd5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a44bd6 ret  */
  ESPCHK(0x11a44a40u, _esp0);
  ESP += 4; return;
  /* 11a44bd7 nop  */
  /* nop */
L_11a44bd8:;
  /* 11a44bd8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a44bdc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a44be0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a44be6 jne 0x11a44c0c */
  if (!C.zf) goto L_11a44c0c;
  /* 11a44be8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a44beb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a44bee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44bf1 jb 0x11a44c00 */
  if (C.cf) goto L_11a44c00;
  /* 11a44bf3 std  */
  C.df=1;
  /* 11a44bf4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a44bf6 cld  */
  C.df=0;
  /* 11a44bf7 jmp dword ptr [edx*4 + 0x11a44d20] */
  switch (EDX) {
    case 0: goto L_11a44d30;
    case 1: goto L_11a44d38;
    case 2: goto L_11a44d48;
    case 3: goto L_11a44d5c;
    default: x86_unimpl("switch@0x11a44bf7 out of table"); return;
  }
  /* 11a44bfe mov edi, edi */
  EDI = (EDI);
L_11a44c00:;
  /* 11a44c00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a44c02 jmp dword ptr [ecx*4 + 0x11a44cd0] */
  switch (ECX) {
    case 0: goto L_11a44d17;
    default: x86_unimpl("switch@0x11a44c02 out of table"); return;
  }
  /* 11a44c09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a44c0c:;
  /* 11a44c0c mov eax, edi */
  EAX = (EDI);
  /* 11a44c0e mov edx, 3 */
  EDX = (0x3u);
  /* 11a44c13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44c16 jb 0x11a44c24 */
  if (C.cf) goto L_11a44c24;
  /* 11a44c18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a44c1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44c1d jmp dword ptr [eax*4 + 0x11a44c28] */
  switch (EAX) {
    case 1: goto L_11a44c38;
    case 2: goto L_11a44c58;
    case 3: goto L_11a44c80;
    default: x86_unimpl("switch@0x11a44c1d out of table"); return;
  }
L_11a44c24:;
  /* 11a44c24 jmp dword ptr [ecx*4 + 0x11a44d20] */
  switch (ECX) {
    case 0: goto L_11a44d30;
    case 1: goto L_11a44d38;
    case 2: goto L_11a44d48;
    case 3: goto L_11a44d5c;
    default: x86_unimpl("switch@0x11a44c24 out of table"); return;
  }
  /* 11a44c2b nop  */
  /* nop */
L_11a44c38:;
  /* 11a44c38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a44c3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a44c3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a44c40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a44c41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a44c44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a44c45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44c48 jb 0x11a44c00 */
  if (C.cf) goto L_11a44c00;
  /* 11a44c4a std  */
  C.df=1;
  /* 11a44c4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a44c4d cld  */
  C.df=0;
  /* 11a44c4e jmp dword ptr [edx*4 + 0x11a44d20] */
  switch (EDX) {
    case 0: goto L_11a44d30;
    case 1: goto L_11a44d38;
    case 2: goto L_11a44d48;
    case 3: goto L_11a44d5c;
    default: x86_unimpl("switch@0x11a44c4e out of table"); return;
  }
  /* 11a44c55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a44c58:;
  /* 11a44c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a44c5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a44c5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a44c60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a44c63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a44c66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a44c69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44c6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44c6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44c72 jb 0x11a44c00 */
  if (C.cf) goto L_11a44c00;
  /* 11a44c74 std  */
  C.df=1;
  /* 11a44c75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a44c77 cld  */
  C.df=0;
  /* 11a44c78 jmp dword ptr [edx*4 + 0x11a44d20] */
  switch (EDX) {
    case 0: goto L_11a44d30;
    case 1: goto L_11a44d38;
    case 2: goto L_11a44d48;
    case 3: goto L_11a44d5c;
    default: x86_unimpl("switch@0x11a44c78 out of table"); return;
  }
  /* 11a44c7f nop  */
  /* nop */
L_11a44c80:;
  /* 11a44c80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a44c83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a44c85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a44c88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a44c8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a44c8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a44c91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a44c94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a44c97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44c9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44c9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44ca0 jb 0x11a44c00 */
  if (C.cf) goto L_11a44c00;
  /* 11a44ca6 std  */
  C.df=1;
  /* 11a44ca7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a44ca9 cld  */
  C.df=0;
  /* 11a44caa jmp dword ptr [edx*4 + 0x11a44d20] */
  switch (EDX) {
    case 0: goto L_11a44d30;
    case 1: goto L_11a44d38;
    case 2: goto L_11a44d48;
    case 3: goto L_11a44d5c;
    default: x86_unimpl("switch@0x11a44caa out of table"); return;
  }
  /* 11a44cb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a44cb4 aam 0x4c */
  x86_unimpl("aam @ 0x11a44cb4");
  /* 11a44cb6 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a44cb7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44cb9 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11a44cba movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a44cbb adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44cbd dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11a44cbe movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a44cbf adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44cc1 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11a44cc2 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a44cc3 adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44cc5 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11a44cc6 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a44cc7 adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44cc9 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11a44cca movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a44ccc add al, 0x4d */
  { uint32_t _a=(AL),_b=(0x4du),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a44cce movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11a44cd4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a44cd8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a44cdc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a44ce0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a44ce4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a44ce8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a44cec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a44cf0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a44cf4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a44cf8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a44cfc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a44d00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a44d04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a44d08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a44d0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a44d13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44d15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a44d17:;
  /* 11a44d17 jmp dword ptr [edx*4 + 0x11a44d20] */
  switch (EDX) {
    case 0: goto L_11a44d30;
    case 1: goto L_11a44d38;
    case 2: goto L_11a44d48;
    case 3: goto L_11a44d5c;
    default: x86_unimpl("switch@0x11a44d17 out of table"); return;
  }
  /* 11a44d1e mov edi, edi */
  EDI = (EDI);
L_11a44d30:;
  /* 11a44d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44d33 pop esi */
  ESI = (pop32());
  /* 11a44d34 pop edi */
  EDI = (pop32());
  /* 11a44d35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a44d36 ret  */
  ESPCHK(0x11a44a40u, _esp0);
  ESP += 4; return;
  /* 11a44d37 nop  */
  /* nop */
L_11a44d38:;
  /* 11a44d38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a44d3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a44d3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44d41 pop esi */
  ESI = (pop32());
  /* 11a44d42 pop edi */
  EDI = (pop32());
  /* 11a44d43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a44d44 ret  */
  ESPCHK(0x11a44a40u, _esp0);
  ESP += 4; return;
  /* 11a44d45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a44d48:;
  /* 11a44d48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a44d4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a44d4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a44d51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a44d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44d57 pop esi */
  ESI = (pop32());
  /* 11a44d58 pop edi */
  EDI = (pop32());
  /* 11a44d59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a44d5a ret  */
  ESPCHK(0x11a44a40u, _esp0);
  ESP += 4; return;
  /* 11a44d5b nop  */
  /* nop */
L_11a44d5c:;
  /* 11a44d5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a44d5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a44d62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a44d65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a44d68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a44d6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a44d6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44d71 pop esi */
  ESI = (pop32());
  /* 11a44d72 pop edi */
  EDI = (pop32());
  /* 11a44d73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a44d74 ret  */
  ESPCHK(0x11a44a40u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11a44d75 (18 bytes, 6 insns) */
void f_11a44d75(void) {
  FTRACE(0x11a44d75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44d75 push dword ptr [0x11a4f990] */
  push32((uint32_t)(r32((uint32_t)(0x11a4f990))));
  /* 11a44d7b push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a44d7f call 0x11a44d87 */
  push32(0x11a44d84u); f_11a44d87();
  /* 11a44d84 pop ecx */
  ECX = (pop32());
  /* 11a44d85 pop ecx */
  ECX = (pop32());
  /* 11a44d86 ret  */
  ESPCHK(0x11a44d75u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11a44d87 (44 bytes, 16 insns) */
void f_11a44d87(void) {
  FTRACE(0x11a44d87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44d87 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44d8c ja 0x11a44db0 */
  if ((!C.cf&&!C.zf)) goto L_11a44db0;
L_11a44d8e:;
  /* 11a44d8e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a44d92 call 0x11a44db3 */
  push32(0x11a44d97u); f_11a44db3();
  /* 11a44d97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44d99 pop ecx */
  ECX = (pop32());
  /* 11a44d9a jne 0x11a44db2 */
  if (!C.zf) goto L_11a44db2;
  /* 11a44d9c cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44da0 je 0x11a44db2 */
  if (C.zf) goto L_11a44db2;
  /* 11a44da2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a44da6 call 0x11a477f2 */
  push32(0x11a44dabu); f_11a477f2();
  /* 11a44dab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44dad pop ecx */
  ECX = (pop32());
  /* 11a44dae jne 0x11a44d8e */
  if (!C.zf) goto L_11a44d8e;
L_11a44db0:;
  /* 11a44db0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a44db2:;
  /* 11a44db2 ret  */
  ESPCHK(0x11a44d87u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db3 @ 0x11a44db3 (231 bytes, 81 insns) */
void f_11a44db3(void) {
  FTRACE(0x11a44db3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44db3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a44db4 mov ebp, esp */
  EBP = (ESP);
  /* 11a44db6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a44db8 push 0x11a4a1b8 */
  push32((uint32_t)(0x11a4a1b8u));
  /* 11a44dbd push 0x11a46fb4 */
  push32((uint32_t)(0x11a46fb4u));
  /* 11a44dc2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a44dc8 push eax */
  push32((uint32_t)(EAX));
  /* 11a44dc9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a44dd0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44dd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a44dd4 push esi */
  push32((uint32_t)(ESI));
  /* 11a44dd5 push edi */
  push32((uint32_t)(EDI));
  /* 11a44dd6 mov eax, dword ptr [0x11a4fd68] */
  EAX = (r32((uint32_t)(0x11a4fd68)));
  /* 11a44ddb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44dde jne 0x11a44e23 */
  if (!C.zf) goto L_11a44e23;
  /* 11a44de0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44de3 cmp esi, dword ptr [0x11a4fd60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4fd60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44de9 ja 0x11a44e82 */
  if ((!C.cf&&!C.zf)) goto L_11a44e82;
  /* 11a44def push 9 */
  push32((uint32_t)(0x9u));
  /* 11a44df1 call 0x11a46e46 */
  push32(0x11a44df6u); f_11a46e46();
  /* 11a44df6 pop ecx */
  ECX = (pop32());
  /* 11a44df7 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a44dfb push esi */
  push32((uint32_t)(ESI));
  /* 11a44dfc call 0x11a462d8 */
  push32(0x11a44e01u); f_11a462d8();
  /* 11a44e01 pop ecx */
  ECX = (pop32());
  /* 11a44e02 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a44e05 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a44e09 call 0x11a44e1a */
  push32(0x11a44e0eu); f_11a44e1a();
  /* 11a44e0e mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a44e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44e13 je 0x11a44e82 */
  if (C.zf) goto L_11a44e82;
  /* 11a44e15 jmp 0x11a44ea0 */
  jmp_ind(0x11a44ea0u); return;
  /* 11a44e1a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a44e1c call 0x11a46ea7 */
  push32(0x11a44e21u); f_11a46ea7();
  /* 11a44e21 pop ecx */
  ECX = (pop32());
  /* 11a44e22 ret  */
  ESPCHK(0x11a44db3u, _esp0);
  ESP += 4; return;
L_11a44e23:;
  /* 11a44e23 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44e26 jne 0x11a44e82 */
  if (!C.zf) goto L_11a44e82;
  /* 11a44e28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44e2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44e2d je 0x11a44e37 */
  if (C.zf) goto L_11a44e37;
  /* 11a44e2f lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11a44e32 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a44e35 jmp 0x11a44e3a */
  goto L_11a44e3a;
L_11a44e37:;
  /* 11a44e37 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a44e39 pop esi */
  ESI = (pop32());
L_11a44e3a:;
  /* 11a44e3a mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11a44e3d cmp esi, dword ptr [0x11a4dbfc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4dbfc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44e43 ja 0x11a44e73 */
  if ((!C.cf&&!C.zf)) goto L_11a44e73;
  /* 11a44e45 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a44e47 call 0x11a46e46 */
  push32(0x11a44e4cu); f_11a46e46();
  /* 11a44e4c pop ecx */
  ECX = (pop32());
  /* 11a44e4d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a44e54 mov eax, esi */
  EAX = (ESI);
  /* 11a44e56 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a44e59 push eax */
  push32((uint32_t)(EAX));
  /* 11a44e5a call 0x11a46a85 */
  push32(0x11a44e5fu); f_11a46a85();
  /* 11a44e5f pop ecx */
  ECX = (pop32());
  /* 11a44e60 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a44e63 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a44e67 call 0x11a44e79 */
  push32(0x11a44e6cu); f_11a44e79();
  /* 11a44e6c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a44e6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44e71 jne 0x11a44ea0 */
  if (!C.zf) { jmp_ind(0x11a44ea0u); return; }
L_11a44e73:;
  /* 11a44e73 push esi */
  push32((uint32_t)(ESI));
  /* 11a44e74 jmp 0x11a44e92 */
  goto L_11a44e92;
  /* 11a44e76 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44e79 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a44e7b call 0x11a46ea7 */
  push32(0x11a44e80u); f_11a46ea7();
  /* 11a44e80 pop ecx */
  ECX = (pop32());
  /* 11a44e81 ret  */
  ESPCHK(0x11a44db3u, _esp0);
  ESP += 4; return;
L_11a44e82:;
  /* 11a44e82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a44e85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44e87 jne 0x11a44e8c */
  if (!C.zf) goto L_11a44e8c;
  /* 11a44e89 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a44e8b pop eax */
  EAX = (pop32());
L_11a44e8c:;
  /* 11a44e8c add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44e8f and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11a44e91 push eax */
  push32((uint32_t)(EAX));
L_11a44e92:;
  /* 11a44e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a44e94 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
}

/* FUN_10004e1a @ 0x11a44e1a (9 bytes, 4 insns) */
void f_11a44e1a(void) {
  FTRACE(0x11a44e1au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44e1a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a44e1c call 0x11a46ea7 */
  push32(0x11a44e21u); f_11a46ea7();
  /* 11a44e21 pop ecx */
  ECX = (pop32());
  /* 11a44e22 ret  */
  ESPCHK(0x11a44e1au, _esp0);
  ESP += 4; return;
}

/* FUN_10004e79 @ 0x11a44e79 (9 bytes, 4 insns) */
void f_11a44e79(void) {
  FTRACE(0x11a44e79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44e79 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a44e7b call 0x11a46ea7 */
  push32(0x11a44e80u); f_11a46ea7();
  /* 11a44e80 pop ecx */
  ECX = (pop32());
  /* 11a44e81 ret  */
  ESPCHK(0x11a44e79u, _esp0);
  ESP += 4; return;
}

/* FUN_10004eaf @ 0x11a44eaf (115 bytes, 37 insns) */
void f_11a44eaf(void) {
  FTRACE(0x11a44eafu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44eaf push esi */
  push32((uint32_t)(ESI));
  /* 11a44eb0 call 0x11a44f2b */
  push32(0x11a44eb5u); f_11a44f2b();
  /* 11a44eb5 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a44eb9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a44ebb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a44ebd mov eax, 0x11a4b9b0 */
  EAX = (0x11a4b9b0u);
L_11a44ec2:;
  /* 11a44ec2 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44ec4 je 0x11a44ee8 */
  if (C.zf) goto L_11a44ee8;
  /* 11a44ec6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44ec9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a44eca cmp eax, 0x11a4bb18 */
  { uint32_t _a=(EAX),_b=(0x11a4bb18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44ecf jl 0x11a44ec2 */
  if ((C.sf!=C.of)) goto L_11a44ec2;
  /* 11a44ed1 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44ed4 jb 0x11a44ef8 */
  if (C.cf) goto L_11a44ef8;
  /* 11a44ed6 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44ed9 ja 0x11a44ef8 */
  if ((!C.cf&&!C.zf)) goto L_11a44ef8;
  /* 11a44edb call 0x11a44f22 */
  push32(0x11a44ee0u); f_11a44f22();
  /* 11a44ee0 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11a44ee6 pop esi */
  ESI = (pop32());
  /* 11a44ee7 ret  */
  ESPCHK(0x11a44eafu, _esp0);
  ESP += 4; return;
L_11a44ee8:;
  /* 11a44ee8 call 0x11a44f22 */
  push32(0x11a44eedu); f_11a44f22();
  /* 11a44eed mov ecx, dword ptr [esi*8 + 0x11a4b9b4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x11a4b9b4)));
  /* 11a44ef4 pop esi */
  ESI = (pop32());
  /* 11a44ef5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a44ef7 ret  */
  ESPCHK(0x11a44eafu, _esp0);
  ESP += 4; return;
L_11a44ef8:;
  /* 11a44ef8 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44efe jb 0x11a44f15 */
  if (C.cf) goto L_11a44f15;
  /* 11a44f00 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44f06 ja 0x11a44f15 */
  if ((!C.cf&&!C.zf)) goto L_11a44f15;
  /* 11a44f08 call 0x11a44f22 */
  push32(0x11a44f0du); f_11a44f22();
  /* 11a44f0d mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11a44f13 pop esi */
  ESI = (pop32());
  /* 11a44f14 ret  */
  ESPCHK(0x11a44eafu, _esp0);
  ESP += 4; return;
L_11a44f15:;
  /* 11a44f15 call 0x11a44f22 */
  push32(0x11a44f1au); f_11a44f22();
  /* 11a44f1a mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11a44f20 pop esi */
  ESI = (pop32());
  /* 11a44f21 ret  */
  ESPCHK(0x11a44eafu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f22 @ 0x11a44f22 (9 bytes, 3 insns) */
void f_11a44f22(void) {
  FTRACE(0x11a44f22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44f22 call 0x11a455f7 */
  push32(0x11a44f27u); f_11a455f7();
  /* 11a44f27 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44f2a ret  */
  ESPCHK(0x11a44f22u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f2b @ 0x11a44f2b (9 bytes, 3 insns) */
void f_11a44f2b(void) {
  FTRACE(0x11a44f2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44f2b call 0x11a455f7 */
  push32(0x11a44f30u); f_11a455f7();
  /* 11a44f30 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44f33 ret  */
  ESPCHK(0x11a44f2bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f34 @ 0x11a44f34 (444 bytes, 150 insns) */
void f_11a44f34(void) {
  FTRACE(0x11a44f34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a44f34 push ebp */
  push32((uint32_t)(EBP));
  /* 11a44f35 mov ebp, esp */
  EBP = (ESP);
  /* 11a44f37 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a44f3a push ebx */
  push32((uint32_t)(EBX));
  /* 11a44f3b push esi */
  push32((uint32_t)(ESI));
  /* 11a44f3c push edi */
  push32((uint32_t)(EDI));
  /* 11a44f3d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a44f42 call 0x11a44d75 */
  push32(0x11a44f47u); f_11a44d75();
  /* 11a44f47 mov esi, eax */
  ESI = (EAX);
  /* 11a44f49 pop ecx */
  ECX = (pop32());
  /* 11a44f4a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a44f4c jne 0x11a44f56 */
  if (!C.zf) goto L_11a44f56;
  /* 11a44f4e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11a44f50 call 0x11a44188 */
  push32(0x11a44f55u); f_11a44188();
  /* 11a44f55 pop ecx */
  ECX = (pop32());
L_11a44f56:;
  /* 11a44f56 mov dword ptr [0x11a4fd80], esi */
  w32((uint32_t)(0x11a4fd80), (ESI));
  /* 11a44f5c mov dword ptr [0x11a4fe80], 0x20 */
  w32((uint32_t)(0x11a4fe80), (0x20u));
  /* 11a44f66 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11a44f6c:;
  /* 11a44f6c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44f6e jae 0x11a44f8e */
  if (!C.cf) goto L_11a44f8e;
  /* 11a44f70 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a44f74 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a44f77 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a44f7b mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11a44f7f mov eax, dword ptr [0x11a4fd80] */
  EAX = (r32((uint32_t)(0x11a4fd80)));
  /* 11a44f84 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44f87 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a44f8c jmp 0x11a44f6c */
  goto L_11a44f6c;
L_11a44f8e:;
  /* 11a44f8e lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11a44f91 push eax */
  push32((uint32_t)(EAX));
  /* 11a44f92 call dword ptr [0x11a4a0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0ac))), 0x11a44f98u);
  /* 11a44f98 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a44f9d je 0x11a45074 */
  if (C.zf) goto L_11a45074;
  /* 11a44fa3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a44fa6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44fa8 je 0x11a45074 */
  if (C.zf) goto L_11a45074;
  /* 11a44fae mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11a44fb0 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11a44fb3 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11a44fb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a44fb9 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11a44fbe cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44fc0 jl 0x11a44fc4 */
  if ((C.sf!=C.of)) goto L_11a44fc4;
  /* 11a44fc2 mov edi, eax */
  EDI = (EAX);
L_11a44fc4:;
  /* 11a44fc4 cmp dword ptr [0x11a4fe80], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a4fe80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44fca jge 0x11a45022 */
  if ((C.sf==C.of)) goto L_11a45022;
  /* 11a44fcc mov esi, 0x11a4fd84 */
  ESI = (0x11a4fd84u);
L_11a44fd1:;
  /* 11a44fd1 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a44fd6 call 0x11a44d75 */
  push32(0x11a44fdbu); f_11a44d75();
  /* 11a44fdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a44fdd pop ecx */
  ECX = (pop32());
  /* 11a44fde je 0x11a4501c */
  if (C.zf) goto L_11a4501c;
  /* 11a44fe0 add dword ptr [0x11a4fe80], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a4fe80))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11a4fe80), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a44fe7 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a44fe9 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11a44fef:;
  /* 11a44fef cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a44ff1 jae 0x11a4500f */
  if (!C.cf) goto L_11a4500f;
  /* 11a44ff3 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a44ff7 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a44ffa and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a44ffe mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11a45002 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a45004 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45007 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4500d jmp 0x11a44fef */
  goto L_11a44fef;
L_11a4500f:;
  /* 11a4500f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45012 cmp dword ptr [0x11a4fe80], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a4fe80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45018 jl 0x11a44fd1 */
  if ((C.sf!=C.of)) goto L_11a44fd1;
  /* 11a4501a jmp 0x11a45022 */
  goto L_11a45022;
L_11a4501c:;
  /* 11a4501c mov edi, dword ptr [0x11a4fe80] */
  EDI = (r32((uint32_t)(0x11a4fe80)));
L_11a45022:;
  /* 11a45022 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a45024 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a45026 jle 0x11a45074 */
  if ((C.zf||C.sf!=C.of)) goto L_11a45074;
L_11a45028:;
  /* 11a45028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a4502b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a4502d cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45030 je 0x11a4506a */
  if (C.zf) goto L_11a4506a;
  /* 11a45032 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11a45034 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a45036 je 0x11a4506a */
  if (C.zf) goto L_11a4506a;
  /* 11a45038 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a4503a jne 0x11a45047 */
  if (!C.zf) goto L_11a45047;
  /* 11a4503c push ecx */
  push32((uint32_t)(ECX));
  /* 11a4503d call dword ptr [0x11a4a0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0a8))), 0x11a45043u);
  /* 11a45043 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45045 je 0x11a4506a */
  if (C.zf) goto L_11a4506a;
L_11a45047:;
  /* 11a45047 mov ecx, esi */
  ECX = (ESI);
  /* 11a45049 mov eax, esi */
  EAX = (ESI);
  /* 11a4504b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a4504e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a45051 mov ecx, dword ptr [ecx*4 + 0x11a4fd80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a45058 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a4505b lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11a4505e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a45061 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11a45063 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a45065 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11a45067 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11a4506a:;
  /* 11a4506a add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a4506e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a4506f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a45070 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45072 jl 0x11a45028 */
  if ((C.sf!=C.of)) goto L_11a45028;
L_11a45074:;
  /* 11a45074 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a45076:;
  /* 11a45076 mov ecx, dword ptr [0x11a4fd80] */
  ECX = (r32((uint32_t)(0x11a4fd80)));
  /* 11a4507c lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11a4507f cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45083 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a45086 jne 0x11a450d5 */
  if (!C.zf) goto L_11a450d5;
  /* 11a45088 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a4508a mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11a4508e jne 0x11a45095 */
  if (!C.zf) goto L_11a45095;
  /* 11a45090 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11a45092 pop eax */
  EAX = (pop32());
  /* 11a45093 jmp 0x11a4509f */
  goto L_11a4509f;
L_11a45095:;
  /* 11a45095 mov eax, ebx */
  EAX = (EBX);
  /* 11a45097 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a45098 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a4509a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4509c add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a4509f:;
  /* 11a4509f push eax */
  push32((uint32_t)(EAX));
  /* 11a450a0 call dword ptr [0x11a4a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0a4))), 0x11a450a6u);
  /* 11a450a6 mov edi, eax */
  EDI = (EAX);
  /* 11a450a8 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a450ab je 0x11a450c4 */
  if (C.zf) goto L_11a450c4;
  /* 11a450ad push edi */
  push32((uint32_t)(EDI));
  /* 11a450ae call dword ptr [0x11a4a0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0a8))), 0x11a450b4u);
  /* 11a450b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a450b6 je 0x11a450c4 */
  if (C.zf) goto L_11a450c4;
  /* 11a450b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a450bd mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a450bf cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a450c2 jne 0x11a450ca */
  if (!C.zf) goto L_11a450ca;
L_11a450c4:;
  /* 11a450c4 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a450c8 jmp 0x11a450d9 */
  goto L_11a450d9;
L_11a450ca:;
  /* 11a450ca cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a450cd jne 0x11a450d9 */
  if (!C.zf) goto L_11a450d9;
  /* 11a450cf or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a450d3 jmp 0x11a450d9 */
  goto L_11a450d9;
L_11a450d5:;
  /* 11a450d5 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11a450d9:;
  /* 11a450d9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a450da cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a450dd jl 0x11a45076 */
  if ((C.sf!=C.of)) goto L_11a45076;
  /* 11a450df push dword ptr [0x11a4fe80] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fe80))));
  /* 11a450e5 call dword ptr [0x11a4a0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0a0))), 0x11a450ebu);
  /* 11a450eb pop edi */
  EDI = (pop32());
  /* 11a450ec pop esi */
  ESI = (pop32());
  /* 11a450ed pop ebx */
  EBX = (pop32());
  /* 11a450ee leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a450ef ret  */
  ESPCHK(0x11a44f34u, _esp0);
  ESP += 4; return;
}

/* FUN_100050f0 @ 0x11a450f0 (84 bytes, 33 insns) */
void f_11a450f0(void) {
  FTRACE(0x11a450f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a450f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a450f1 push esi */
  push32((uint32_t)(ESI));
  /* 11a450f2 push edi */
  push32((uint32_t)(EDI));
  /* 11a450f3 mov esi, 0x11a4fd80 */
  ESI = (0x11a4fd80u);
L_11a450f8:;
  /* 11a450f8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a450fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a450fc je 0x11a45135 */
  if (C.zf) goto L_11a45135;
  /* 11a450fe mov edi, eax */
  EDI = (EAX);
  /* 11a45100 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45105 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45107 jae 0x11a4512a */
  if (!C.cf) goto L_11a4512a;
  /* 11a45109 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11a4510c:;
  /* 11a4510c cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45110 je 0x11a45119 */
  if (C.zf) goto L_11a45119;
  /* 11a45112 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45113 call dword ptr [0x11a4a000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a000))), 0x11a45119u);
L_11a45119:;
  /* 11a45119 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a4511b add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4511e add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45123 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45126 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45128 jb 0x11a4510c */
  if (C.cf) goto L_11a4510c;
L_11a4512a:;
  /* 11a4512a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a4512c call 0x11a441bb */
  push32(0x11a45131u); f_11a441bb();
  /* 11a45131 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a45134 pop ecx */
  ECX = (pop32());
L_11a45135:;
  /* 11a45135 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45138 cmp esi, 0x11a4fe80 */
  { uint32_t _a=(ESI),_b=(0x11a4fe80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4513e jl 0x11a450f8 */
  if ((C.sf!=C.of)) goto L_11a450f8;
  /* 11a45140 pop edi */
  EDI = (pop32());
  /* 11a45141 pop esi */
  ESI = (pop32());
  /* 11a45142 pop ebx */
  EBX = (pop32());
  /* 11a45143 ret  */
  ESPCHK(0x11a450f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005144 @ 0x11a45144 (101 bytes, 34 insns) */
void f_11a45144(void) {
  FTRACE(0x11a45144u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45144 push esi */
  push32((uint32_t)(ESI));
  /* 11a45145 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a45149 cmp esi, dword ptr [0x11a4fe80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4fe80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4514f jae 0x11a45191 */
  if (!C.cf) goto L_11a45191;
  /* 11a45151 mov ecx, esi */
  ECX = (ESI);
  /* 11a45153 mov eax, esi */
  EAX = (ESI);
  /* 11a45155 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a45158 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a4515b mov ecx, dword ptr [ecx*4 + 0x11a4fd80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a45162 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a45165 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a4516a je 0x11a45191 */
  if (C.zf) goto L_11a45191;
  /* 11a4516c push edi */
  push32((uint32_t)(EDI));
  /* 11a4516d push esi */
  push32((uint32_t)(ESI));
  /* 11a4516e call 0x11a474aa */
  push32(0x11a45173u); f_11a474aa();
  /* 11a45173 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a45177 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a4517b push esi */
  push32((uint32_t)(ESI));
  /* 11a4517c call 0x11a451a9 */
  push32(0x11a45181u); f_11a451a9();
  /* 11a45181 push esi */
  push32((uint32_t)(ESI));
  /* 11a45182 mov edi, eax */
  EDI = (EAX);
  /* 11a45184 call 0x11a47509 */
  push32(0x11a45189u); f_11a47509();
  /* 11a45189 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4518c mov eax, edi */
  EAX = (EDI);
  /* 11a4518e pop edi */
  EDI = (pop32());
  /* 11a4518f pop esi */
  ESI = (pop32());
  /* 11a45190 ret  */
  ESPCHK(0x11a45144u, _esp0);
  ESP += 4; return;
L_11a45191:;
  /* 11a45191 call 0x11a44f22 */
  push32(0x11a45196u); f_11a44f22();
  /* 11a45196 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a4519c call 0x11a44f2b */
  push32(0x11a451a1u); f_11a44f2b();
  /* 11a451a1 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a451a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a451a7 pop esi */
  ESI = (pop32());
  /* 11a451a8 ret  */
  ESPCHK(0x11a45144u, _esp0);
  ESP += 4; return;
}

/* FUN_100051a9 @ 0x11a451a9 (115 bytes, 41 insns) */
void f_11a451a9(void) {
  FTRACE(0x11a451a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a451a9 push esi */
  push32((uint32_t)(ESI));
  /* 11a451aa mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a451ae push edi */
  push32((uint32_t)(EDI));
  /* 11a451af push esi */
  push32((uint32_t)(ESI));
  /* 11a451b0 call 0x11a47468 */
  push32(0x11a451b5u); f_11a47468();
  /* 11a451b5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a451b8 pop ecx */
  ECX = (pop32());
  /* 11a451b9 jne 0x11a451c8 */
  if (!C.zf) goto L_11a451c8;
  /* 11a451bb call 0x11a44f22 */
  push32(0x11a451c0u); f_11a44f22();
  /* 11a451c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a451c6 jmp 0x11a451f5 */
  goto L_11a451f5;
L_11a451c8:;
  /* 11a451c8 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a451cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a451ce push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a451d2 push eax */
  push32((uint32_t)(EAX));
  /* 11a451d3 call dword ptr [0x11a4a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a004))), 0x11a451d9u);
  /* 11a451d9 mov edi, eax */
  EDI = (EAX);
  /* 11a451db cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a451de jne 0x11a451e8 */
  if (!C.zf) goto L_11a451e8;
  /* 11a451e0 call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a451e6u);
  /* 11a451e6 jmp 0x11a451ea */
  goto L_11a451ea;
L_11a451e8:;
  /* 11a451e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a451ea:;
  /* 11a451ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a451ec je 0x11a451fa */
  if (C.zf) goto L_11a451fa;
  /* 11a451ee push eax */
  push32((uint32_t)(EAX));
  /* 11a451ef call 0x11a44eaf */
  push32(0x11a451f4u); f_11a44eaf();
  /* 11a451f4 pop ecx */
  ECX = (pop32());
L_11a451f5:;
  /* 11a451f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a451f8 jmp 0x11a45219 */
  goto L_11a45219;
L_11a451fa:;
  /* 11a451fa mov ecx, esi */
  ECX = (ESI);
  /* 11a451fc and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11a451ff sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a45202 mov eax, esi */
  EAX = (ESI);
  /* 11a45204 mov ecx, dword ptr [ecx*4 + 0x11a4fd80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a4fd80)));
  /* 11a4520b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a4520e and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a45213 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11a45217 mov eax, edi */
  EAX = (EDI);
L_11a45219:;
  /* 11a45219 pop edi */
  EDI = (pop32());
  /* 11a4521a pop esi */
  ESI = (pop32());
  /* 11a4521b ret  */
  ESPCHK(0x11a451a9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000521c @ 0x11a4521c (368 bytes, 124 insns) */
void f_11a4521c(void) {
  FTRACE(0x11a4521cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4521c push ebp */
  push32((uint32_t)(EBP));
  /* 11a4521d mov ebp, esp */
  EBP = (ESP);
  /* 11a4521f push ecx */
  push32((uint32_t)(ECX));
  /* 11a45220 push ecx */
  push32((uint32_t)(ECX));
  /* 11a45221 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45222 push esi */
  push32((uint32_t)(ESI));
  /* 11a45223 mov esi, dword ptr [0x11a4f998] */
  ESI = (r32((uint32_t)(0x11a4f998)));
  /* 11a45229 push edi */
  push32((uint32_t)(EDI));
  /* 11a4522a mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a4522d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a4522f mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11a45232 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a45235 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11a45237 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45239 je 0x11a45255 */
  if (C.zf) goto L_11a45255;
  /* 11a4523b cmp al, 0x72 */
  { uint32_t _a=(AL),_b=(0x72u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4523d je 0x11a4524e */
  if (C.zf) goto L_11a4524e;
  /* 11a4523f cmp al, 0x77 */
  { uint32_t _a=(AL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45241 jne 0x11a45369 */
  if (!C.zf) goto L_11a45369;
  /* 11a45247 mov ecx, 0x301 */
  ECX = (0x301u);
  /* 11a4524c jmp 0x11a4525a */
  goto L_11a4525a;
L_11a4524e:;
  /* 11a4524e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a45250 or esi, 1 */
  { uint32_t _r=(ESI)|(0x1u); ESI = (_r); fl_logic(_r,32); }
  /* 11a45253 jmp 0x11a4525d */
  goto L_11a4525d;
L_11a45255:;
  /* 11a45255 mov ecx, 0x109 */
  ECX = (0x109u);
L_11a4525a:;
  /* 11a4525a or esi, 2 */
  { uint32_t _r=(ESI)|(0x2u); ESI = (_r); fl_logic(_r,32); }
L_11a4525d:;
  /* 11a4525d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4525f pop edx */
  EDX = (pop32());
L_11a45260:;
  /* 11a45260 mov al, byte ptr [edi + 1] */
  AL = (r8((uint32_t)(EDI + 0x1)));
  /* 11a45263 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a45264 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45266 je 0x11a4534f */
  if (C.zf) goto L_11a4534f;
  /* 11a4526c cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4526e je 0x11a4534f */
  if (C.zf) goto L_11a4534f;
  /* 11a45274 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a45277 cmp eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4527a jg 0x11a452ee */
  if ((!C.zf&&C.sf==C.of)) goto L_11a452ee;
  /* 11a4527c je 0x11a452de */
  if (C.zf) goto L_11a452de;
  /* 11a4527e sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45281 je 0x11a452c8 */
  if (C.zf) goto L_11a452c8;
  /* 11a45283 sub eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45286 je 0x11a452be */
  if (C.zf) goto L_11a452be;
  /* 11a45288 sub eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a4528b je 0x11a452a9 */
  if (C.zf) goto L_11a452a9;
  /* 11a4528d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a4528e jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a45294 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45297 jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a4529d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a452a4 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11a452a7 jmp 0x11a45260 */
  goto L_11a45260;
L_11a452a9:;
  /* 11a452a9 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a452ac jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a452b2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a452b9 or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11a452bc jmp 0x11a45260 */
  goto L_11a45260;
L_11a452be:;
  /* 11a452be test cl, 0x40 */
  { uint32_t _r=(CL)&(0x40u); fl_logic(_r,8); }
  /* 11a452c1 jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a452c3 or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11a452c6 jmp 0x11a45260 */
  goto L_11a45260;
L_11a452c8:;
  /* 11a452c8 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11a452cb jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a452cd and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11a452d0 and esi, 0xfffffffc */
  { uint32_t _r=(ESI)&(0xfffffffcu); ESI = (_r); fl_logic(_r,32); }
  /* 11a452d3 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a452d6 or esi, 0x80 */
  { uint32_t _r=(ESI)|(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 11a452dc jmp 0x11a45260 */
  goto L_11a45260;
L_11a452de:;
  /* 11a452de mov eax, 0x1000 */
  EAX = (0x1000u);
  /* 11a452e3 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 11a452e5 jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a452e7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a452e9 jmp 0x11a45260 */
  goto L_11a45260;
L_11a452ee:;
  /* 11a452ee sub eax, 0x62 */
  { uint32_t _a=(EAX),_b=(0x62u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a452f1 je 0x11a4533b */
  if (C.zf) goto L_11a4533b;
  /* 11a452f3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a452f4 je 0x11a45324 */
  if (C.zf) goto L_11a45324;
  /* 11a452f6 sub eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a452f9 je 0x11a4530d */
  if (C.zf) goto L_11a4530d;
  /* 11a452fb sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a452fe jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a45300 test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 11a45303 jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a45305 or ch, 0x40 */
  { uint32_t _r=(C.c.b.h)|(0x40u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a45308 jmp 0x11a45260 */
  goto L_11a45260;
L_11a4530d:;
  /* 11a4530d cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45310 jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a45312 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a45319 and esi, 0xffffbfff */
  { uint32_t _r=(ESI)&(0xffffbfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a4531f jmp 0x11a45260 */
  goto L_11a45260;
L_11a45324:;
  /* 11a45324 cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45327 jne 0x11a45340 */
  if (!C.zf) goto L_11a45340;
  /* 11a45329 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a45330 or esi, 0x4000 */
  { uint32_t _r=(ESI)|(0x4000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a45336 jmp 0x11a45260 */
  goto L_11a45260;
L_11a4533b:;
  /* 11a4533b test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 11a4533e je 0x11a45347 */
  if (C.zf) goto L_11a45347;
L_11a45340:;
  /* 11a45340 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a45342 jmp 0x11a45260 */
  goto L_11a45260;
L_11a45347:;
  /* 11a45347 or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a4534a jmp 0x11a45260 */
  goto L_11a45260;
L_11a4534f:;
  /* 11a4534f push 0x1a4 */
  push32((uint32_t)(0x1a4u));
  /* 11a45354 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a45357 push ecx */
  push32((uint32_t)(ECX));
  /* 11a45358 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a4535b call 0x11a4780d */
  push32(0x11a45360u); f_11a4780d();
  /* 11a45360 mov ecx, eax */
  ECX = (EAX);
  /* 11a45362 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45365 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45367 jge 0x11a4536d */
  if ((C.sf==C.of)) goto L_11a4536d;
L_11a45369:;
  /* 11a45369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a4536b jmp 0x11a45387 */
  goto L_11a45387;
L_11a4536d:;
  /* 11a4536d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a45370 inc dword ptr [0x11a4f7d4] */
  { uint32_t _r=(r32((uint32_t)(0x11a4f7d4)))+1; w32((uint32_t)(0x11a4f7d4), (_r)); fl_inc(_r,32); }
  /* 11a45376 mov dword ptr [eax + 0xc], esi */
  w32((uint32_t)(EAX + 0xc), (ESI));
  /* 11a45379 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11a4537c mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11a4537e mov dword ptr [eax + 8], ebx */
  w32((uint32_t)(EAX + 0x8), (EBX));
  /* 11a45381 mov dword ptr [eax + 0x1c], ebx */
  w32((uint32_t)(EAX + 0x1c), (EBX));
  /* 11a45384 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
L_11a45387:;
  /* 11a45387 pop edi */
  EDI = (pop32());
  /* 11a45388 pop esi */
  ESI = (pop32());
  /* 11a45389 pop ebx */
  EBX = (pop32());
  /* 11a4538a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a4538b ret  */
  ESPCHK(0x11a4521cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000538c @ 0x11a4538c (200 bytes, 73 insns) */
void f_11a4538c(void) {
  FTRACE(0x11a4538cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4538c push ebx */
  push32((uint32_t)(EBX));
  /* 11a4538d push esi */
  push32((uint32_t)(ESI));
  /* 11a4538e push edi */
  push32((uint32_t)(EDI));
  /* 11a4538f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a45391 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a45393 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a45395 call 0x11a46e46 */
  push32(0x11a4539au); f_11a46e46();
  /* 11a4539a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a4539c cmp dword ptr [0x11a50ea0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a50ea0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a453a2 pop ecx */
  ECX = (pop32());
  /* 11a453a3 jle 0x11a45446 */
  if ((C.zf||C.sf!=C.of)) goto L_11a45446;
L_11a453a9:;
  /* 11a453a9 mov eax, dword ptr [0x11a4fe84] */
  EAX = (r32((uint32_t)(0x11a4fe84)));
  /* 11a453ae mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11a453b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a453b3 je 0x11a453ec */
  if (C.zf) goto L_11a453ec;
  /* 11a453b5 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11a453b9 jne 0x11a453dc */
  if (!C.zf) goto L_11a453dc;
  /* 11a453bb push eax */
  push32((uint32_t)(EAX));
  /* 11a453bc push esi */
  push32((uint32_t)(ESI));
  /* 11a453bd call 0x11a44467 */
  push32(0x11a453c2u); f_11a44467();
  /* 11a453c2 pop ecx */
  ECX = (pop32());
  /* 11a453c3 pop ecx */
  ECX = (pop32());
  /* 11a453c4 mov ecx, dword ptr [0x11a4fe84] */
  ECX = (r32((uint32_t)(0x11a4fe84)));
  /* 11a453ca mov eax, dword ptr [ecx + esi*4] */
  EAX = (r32((uint32_t)(ECX + ESI*4)));
  /* 11a453cd test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11a453d1 je 0x11a453e7 */
  if (C.zf) goto L_11a453e7;
  /* 11a453d3 push eax */
  push32((uint32_t)(EAX));
  /* 11a453d4 push esi */
  push32((uint32_t)(ESI));
  /* 11a453d5 call 0x11a444b9 */
  push32(0x11a453dau); f_11a444b9();
  /* 11a453da pop ecx */
  ECX = (pop32());
  /* 11a453db pop ecx */
  ECX = (pop32());
L_11a453dc:;
  /* 11a453dc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a453dd cmp esi, dword ptr [0x11a50ea0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a50ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a453e3 jl 0x11a453a9 */
  if ((C.sf!=C.of)) goto L_11a453a9;
  /* 11a453e5 jmp 0x11a45446 */
  goto L_11a45446;
L_11a453e7:;
  /* 11a453e7 mov edi, dword ptr [ecx + esi*4] */
  EDI = (r32((uint32_t)(ECX + ESI*4)));
  /* 11a453ea jmp 0x11a45430 */
  goto L_11a45430;
L_11a453ec:;
  /* 11a453ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11a453ee shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a453f1 call 0x11a44d75 */
  push32(0x11a453f6u); f_11a44d75();
  /* 11a453f6 pop ecx */
  ECX = (pop32());
  /* 11a453f7 mov ecx, dword ptr [0x11a4fe84] */
  ECX = (r32((uint32_t)(0x11a4fe84)));
  /* 11a453fd mov dword ptr [esi + ecx], eax */
  w32((uint32_t)(ESI + ECX*1), (EAX));
  /* 11a45400 mov eax, dword ptr [0x11a4fe84] */
  EAX = (r32((uint32_t)(0x11a4fe84)));
  /* 11a45405 mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 11a45408 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4540a je 0x11a45446 */
  if (C.zf) goto L_11a45446;
  /* 11a4540c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4540f push eax */
  push32((uint32_t)(EAX));
  /* 11a45410 call dword ptr [0x11a4a0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0b8))), 0x11a45416u);
  /* 11a45416 mov eax, dword ptr [0x11a4fe84] */
  EAX = (r32((uint32_t)(0x11a4fe84)));
  /* 11a4541b mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 11a4541e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45421 push eax */
  push32((uint32_t)(EAX));
  /* 11a45422 call dword ptr [0x11a4a088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a088))), 0x11a45428u);
  /* 11a45428 mov eax, dword ptr [0x11a4fe84] */
  EAX = (r32((uint32_t)(0x11a4fe84)));
  /* 11a4542d mov edi, dword ptr [esi + eax] */
  EDI = (r32((uint32_t)(ESI + EAX*1)));
L_11a45430:;
  /* 11a45430 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45432 je 0x11a45446 */
  if (C.zf) goto L_11a45446;
  /* 11a45434 or dword ptr [edi + 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI + 0x10)))|(0xffffffffu); w32((uint32_t)(EDI + 0x10), (_r)); fl_logic(_r,32); }
  /* 11a45438 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
  /* 11a4543b mov dword ptr [edi + 0xc], ebx */
  w32((uint32_t)(EDI + 0xc), (EBX));
  /* 11a4543e mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11a45441 mov dword ptr [edi], ebx */
  w32((uint32_t)(EDI), (EBX));
  /* 11a45443 mov dword ptr [edi + 0x1c], ebx */
  w32((uint32_t)(EDI + 0x1c), (EBX));
L_11a45446:;
  /* 11a45446 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a45448 call 0x11a46ea7 */
  push32(0x11a4544du); f_11a46ea7();
  /* 11a4544d pop ecx */
  ECX = (pop32());
  /* 11a4544e mov eax, edi */
  EAX = (EDI);
  /* 11a45450 pop edi */
  EDI = (pop32());
  /* 11a45451 pop esi */
  ESI = (pop32());
  /* 11a45452 pop ebx */
  EBX = (pop32());
  /* 11a45453 ret  */
  ESPCHK(0x11a4538cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005454 @ 0x11a45454 (45 bytes, 12 insns) */
void f_11a45454(void) {
  FTRACE(0x11a45454u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45454 mov eax, dword ptr [0x11a4fd7c] */
  EAX = (r32((uint32_t)(0x11a4fd7c)));
  /* 11a45459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4545b je 0x11a4545f */
  if (C.zf) goto L_11a4545f;
  /* 11a4545d call eax */
  call_ind((uint32_t)(EAX), 0x11a4545fu);
L_11a4545f:;
  /* 11a4545f push 0x11a4b028 */
  push32((uint32_t)(0x11a4b028u));
  /* 11a45464 push 0x11a4b01c */
  push32((uint32_t)(0x11a4b01cu));
  /* 11a45469 call 0x11a45558 */
  push32(0x11a4546eu); f_11a45558();
  /* 11a4546e push 0x11a4b018 */
  push32((uint32_t)(0x11a4b018u));
  /* 11a45473 push 0x11a4b000 */
  push32((uint32_t)(0x11a4b000u));
  /* 11a45478 call 0x11a45558 */
  push32(0x11a4547du); f_11a45558();
  /* 11a4547d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45480 ret  */
  ESPCHK(0x11a45454u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11a45481 (17 bytes, 6 insns) */
void f_11a45481(void) {
  FTRACE(0x11a45481u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45481 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45483 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a45485 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a45489 call 0x11a454a1 */
  push32(0x11a4548eu); f_11a454a1();
  /* 11a4548e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45491 ret  */
  ESPCHK(0x11a45481u, _esp0);
  ESP += 4; return;
}

/* FUN_10005492 @ 0x11a45492 (15 bytes, 6 insns) */
void f_11a45492(void) {
  FTRACE(0x11a45492u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45492 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a45494 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45496 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45498 call 0x11a454a1 */
  push32(0x11a4549du); f_11a454a1();
  /* 11a4549d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a454a0 ret  */
  ESPCHK(0x11a45492u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a1 @ 0x11a454a1 (163 bytes, 53 insns) */
void f_11a454a1(void) {
  FTRACE(0x11a454a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a454a1 push edi */
  push32((uint32_t)(EDI));
  /* 11a454a2 call 0x11a45546 */
  push32(0x11a454a7u); f_11a45546();
  /* 11a454a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a454a9 pop edi */
  EDI = (pop32());
  /* 11a454aa cmp dword ptr [0x11a4f818], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a4f818))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a454b0 jne 0x11a454c3 */
  if (!C.zf) goto L_11a454c3;
  /* 11a454b2 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a454b6 call dword ptr [0x11a4a0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0c4))), 0x11a454bcu);
  /* 11a454bc push eax */
  push32((uint32_t)(EAX));
  /* 11a454bd call dword ptr [0x11a4a0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0c0))), 0x11a454c3u);
L_11a454c3:;
  /* 11a454c3 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a454c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a454c9 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a454cd mov dword ptr [0x11a4f814], edi */
  w32((uint32_t)(0x11a4f814), (EDI));
  /* 11a454d3 mov byte ptr [0x11a4f810], bl */
  w8((uint32_t)(0x11a4f810), (BL));
  /* 11a454d9 jne 0x11a45517 */
  if (!C.zf) goto L_11a45517;
  /* 11a454db mov eax, dword ptr [0x11a4fd78] */
  EAX = (r32((uint32_t)(0x11a4fd78)));
  /* 11a454e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a454e2 je 0x11a45506 */
  if (C.zf) goto L_11a45506;
  /* 11a454e4 mov ecx, dword ptr [0x11a4fd74] */
  ECX = (r32((uint32_t)(0x11a4fd74)));
  /* 11a454ea push esi */
  push32((uint32_t)(ESI));
  /* 11a454eb lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11a454ee cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a454f0 jb 0x11a45505 */
  if (C.cf) goto L_11a45505;
L_11a454f2:;
  /* 11a454f2 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a454f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a454f6 je 0x11a454fa */
  if (C.zf) goto L_11a454fa;
  /* 11a454f8 call eax */
  call_ind((uint32_t)(EAX), 0x11a454fau);
L_11a454fa:;
  /* 11a454fa sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a454fd cmp esi, dword ptr [0x11a4fd78] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4fd78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45503 jae 0x11a454f2 */
  if (!C.cf) goto L_11a454f2;
L_11a45505:;
  /* 11a45505 pop esi */
  ESI = (pop32());
L_11a45506:;
  /* 11a45506 push 0x11a4b034 */
  push32((uint32_t)(0x11a4b034u));
  /* 11a4550b push 0x11a4b02c */
  push32((uint32_t)(0x11a4b02cu));
  /* 11a45510 call 0x11a45558 */
  push32(0x11a45515u); f_11a45558();
  /* 11a45515 pop ecx */
  ECX = (pop32());
  /* 11a45516 pop ecx */
  ECX = (pop32());
L_11a45517:;
  /* 11a45517 push 0x11a4b03c */
  push32((uint32_t)(0x11a4b03cu));
  /* 11a4551c push 0x11a4b038 */
  push32((uint32_t)(0x11a4b038u));
  /* 11a45521 call 0x11a45558 */
  push32(0x11a45526u); f_11a45558();
  /* 11a45526 pop ecx */
  ECX = (pop32());
  /* 11a45527 pop ecx */
  ECX = (pop32());
  /* 11a45528 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a4552a pop ebx */
  EBX = (pop32());
  /* 11a4552b je 0x11a45534 */
  if (C.zf) goto L_11a45534;
  /* 11a4552d call 0x11a4554f */
  push32(0x11a45532u); f_11a4554f();
  /* 11a45532 pop edi */
  EDI = (pop32());
  /* 11a45533 ret  */
  ESPCHK(0x11a454a1u, _esp0);
  ESP += 4; return;
L_11a45534:;
  /* 11a45534 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a45538 mov dword ptr [0x11a4f818], edi */
  w32((uint32_t)(0x11a4f818), (EDI));
  /* 11a4553e call dword ptr [0x11a4a0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0bc))), 0x11a45544u);
  /* 11a45544 pop edi */
  EDI = (pop32());
  /* 11a45545 ret  */
  ESPCHK(0x11a454a1u, _esp0);
  ESP += 4; return;
}

/* FUN_10005546 @ 0x11a45546 (9 bytes, 4 insns) */
void f_11a45546(void) {
  FTRACE(0x11a45546u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45546 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a45548 call 0x11a46e46 */
  push32(0x11a4554du); f_11a46e46();
  /* 11a4554d pop ecx */
  ECX = (pop32());
  /* 11a4554e ret  */
  ESPCHK(0x11a45546u, _esp0);
  ESP += 4; return;
}

/* FUN_1000554f @ 0x11a4554f (9 bytes, 4 insns) */
void f_11a4554f(void) {
  FTRACE(0x11a4554fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4554f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a45551 call 0x11a46ea7 */
  push32(0x11a45556u); f_11a46ea7();
  /* 11a45556 pop ecx */
  ECX = (pop32());
  /* 11a45557 ret  */
  ESPCHK(0x11a4554fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005558 @ 0x11a45558 (26 bytes, 12 insns) */
void f_11a45558(void) {
  FTRACE(0x11a45558u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45558 push esi */
  push32((uint32_t)(ESI));
  /* 11a45559 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11a4555d:;
  /* 11a4555d cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45561 jae 0x11a45570 */
  if (!C.cf) goto L_11a45570;
  /* 11a45563 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a45565 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45567 je 0x11a4556b */
  if (C.zf) goto L_11a4556b;
  /* 11a45569 call eax */
  call_ind((uint32_t)(EAX), 0x11a4556bu);
L_11a4556b:;
  /* 11a4556b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4556e jmp 0x11a4555d */
  goto L_11a4555d;
L_11a45570:;
  /* 11a45570 pop esi */
  ESI = (pop32());
  /* 11a45571 ret  */
  ESPCHK(0x11a45558u, _esp0);
  ESP += 4; return;
}

/* FUN_10005572 @ 0x11a45572 (84 bytes, 32 insns) */
void f_11a45572(void) {
  FTRACE(0x11a45572u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45572 push esi */
  push32((uint32_t)(ESI));
  /* 11a45573 call 0x11a46db1 */
  push32(0x11a45578u); f_11a46db1();
  /* 11a45578 call dword ptr [0x11a4a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0cc))), 0x11a4557eu);
  /* 11a4557e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45581 mov dword ptr [0x11a4bb3c], eax */
  w32((uint32_t)(0x11a4bb3c), (EAX));
  /* 11a45586 je 0x11a455c2 */
  if (C.zf) goto L_11a455c2;
  /* 11a45588 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a4558a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a4558c call 0x11a4708c */
  push32(0x11a45591u); f_11a4708c();
  /* 11a45591 mov esi, eax */
  ESI = (EAX);
  /* 11a45593 pop ecx */
  ECX = (pop32());
  /* 11a45594 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a45596 pop ecx */
  ECX = (pop32());
  /* 11a45597 je 0x11a455c2 */
  if (C.zf) goto L_11a455c2;
  /* 11a45599 push esi */
  push32((uint32_t)(ESI));
  /* 11a4559a push dword ptr [0x11a4bb3c] */
  push32((uint32_t)(r32((uint32_t)(0x11a4bb3c))));
  /* 11a455a0 call dword ptr [0x11a4a0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0b0))), 0x11a455a6u);
  /* 11a455a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a455a8 je 0x11a455c2 */
  if (C.zf) goto L_11a455c2;
  /* 11a455aa push esi */
  push32((uint32_t)(ESI));
  /* 11a455ab call 0x11a455e4 */
  push32(0x11a455b0u); f_11a455e4();
  /* 11a455b0 pop ecx */
  ECX = (pop32());
  /* 11a455b1 call dword ptr [0x11a4a0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0c8))), 0x11a455b7u);
  /* 11a455b7 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a455bb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a455bd mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a455bf pop eax */
  EAX = (pop32());
  /* 11a455c0 pop esi */
  ESI = (pop32());
  /* 11a455c1 ret  */
  ESPCHK(0x11a45572u, _esp0);
  ESP += 4; return;
L_11a455c2:;
  /* 11a455c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a455c4 pop esi */
  ESI = (pop32());
  /* 11a455c5 ret  */
  ESPCHK(0x11a45572u, _esp0);
  ESP += 4; return;
}

/* FUN_100055c6 @ 0x11a455c6 (30 bytes, 8 insns) */
void f_11a455c6(void) {
  FTRACE(0x11a455c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a455c6 call 0x11a46dda */
  push32(0x11a455cbu); f_11a46dda();
  /* 11a455cb mov eax, dword ptr [0x11a4bb3c] */
  EAX = (r32((uint32_t)(0x11a4bb3c)));
  /* 11a455d0 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a455d3 je 0x11a455e3 */
  if (C.zf) goto L_11a455e3;
  /* 11a455d5 push eax */
  push32((uint32_t)(EAX));
  /* 11a455d6 call dword ptr [0x11a4a0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0d0))), 0x11a455dcu);
  /* 11a455dc or dword ptr [0x11a4bb3c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a4bb3c)))|(0xffffffffu); w32((uint32_t)(0x11a4bb3c), (_r)); fl_logic(_r,32); }
L_11a455e3:;
  /* 11a455e3 ret  */
  ESPCHK(0x11a455c6u, _esp0);
  ESP += 4; return;
}

/* FUN_100055e4 @ 0x11a455e4 (19 bytes, 4 insns) */
void f_11a455e4(void) {
  FTRACE(0x11a455e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a455e4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a455e8 mov dword ptr [eax + 0x50], 0x11a4dcd0 */
  w32((uint32_t)(EAX + 0x50), (0x11a4dcd0u));
  /* 11a455ef mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11a455f6 ret  */
  ESPCHK(0x11a455e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100055f7 @ 0x11a455f7 (103 bytes, 38 insns) */
void f_11a455f7(void) {
  FTRACE(0x11a455f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a455f7 push esi */
  push32((uint32_t)(ESI));
  /* 11a455f8 push edi */
  push32((uint32_t)(EDI));
  /* 11a455f9 call dword ptr [0x11a4a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a090))), 0x11a455ffu);
  /* 11a455ff push dword ptr [0x11a4bb3c] */
  push32((uint32_t)(r32((uint32_t)(0x11a4bb3c))));
  /* 11a45605 mov edi, eax */
  EDI = (EAX);
  /* 11a45607 call dword ptr [0x11a4a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0d8))), 0x11a4560du);
  /* 11a4560d mov esi, eax */
  ESI = (EAX);
  /* 11a4560f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a45611 jne 0x11a45652 */
  if (!C.zf) goto L_11a45652;
  /* 11a45613 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a45615 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a45617 call 0x11a4708c */
  push32(0x11a4561cu); f_11a4708c();
  /* 11a4561c mov esi, eax */
  ESI = (EAX);
  /* 11a4561e pop ecx */
  ECX = (pop32());
  /* 11a4561f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a45621 pop ecx */
  ECX = (pop32());
  /* 11a45622 je 0x11a4564a */
  if (C.zf) goto L_11a4564a;
  /* 11a45624 push esi */
  push32((uint32_t)(ESI));
  /* 11a45625 push dword ptr [0x11a4bb3c] */
  push32((uint32_t)(r32((uint32_t)(0x11a4bb3c))));
  /* 11a4562b call dword ptr [0x11a4a0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0b0))), 0x11a45631u);
  /* 11a45631 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45633 je 0x11a4564a */
  if (C.zf) goto L_11a4564a;
  /* 11a45635 push esi */
  push32((uint32_t)(ESI));
  /* 11a45636 call 0x11a455e4 */
  push32(0x11a4563bu); f_11a455e4();
  /* 11a4563b pop ecx */
  ECX = (pop32());
  /* 11a4563c call dword ptr [0x11a4a0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0c8))), 0x11a45642u);
  /* 11a45642 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a45646 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a45648 jmp 0x11a45652 */
  goto L_11a45652;
L_11a4564a:;
  /* 11a4564a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a4564c call 0x11a44188 */
  push32(0x11a45651u); f_11a44188();
  /* 11a45651 pop ecx */
  ECX = (pop32());
L_11a45652:;
  /* 11a45652 push edi */
  push32((uint32_t)(EDI));
  /* 11a45653 call dword ptr [0x11a4a0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0d4))), 0x11a45659u);
  /* 11a45659 mov eax, esi */
  EAX = (ESI);
  /* 11a4565b pop edi */
  EDI = (pop32());
  /* 11a4565c pop esi */
  ESI = (pop32());
  /* 11a4565d ret  */
  ESPCHK(0x11a455f7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000565e @ 0x11a4565e (160 bytes, 62 insns) */
void f_11a4565e(void) {
  FTRACE(0x11a4565eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4565e mov eax, dword ptr [0x11a4bb3c] */
  EAX = (r32((uint32_t)(0x11a4bb3c)));
  /* 11a45663 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45666 je 0x11a456fd */
  if (C.zf) goto L_11a456fd;
  /* 11a4566c push esi */
  push32((uint32_t)(ESI));
  /* 11a4566d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a45671 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a45673 jne 0x11a45682 */
  if (!C.zf) goto L_11a45682;
  /* 11a45675 push eax */
  push32((uint32_t)(EAX));
  /* 11a45676 call dword ptr [0x11a4a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0d8))), 0x11a4567cu);
  /* 11a4567c mov esi, eax */
  ESI = (EAX);
  /* 11a4567e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a45680 je 0x11a456ee */
  if (C.zf) goto L_11a456ee;
L_11a45682:;
  /* 11a45682 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11a45685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45687 je 0x11a45690 */
  if (C.zf) goto L_11a45690;
  /* 11a45689 push eax */
  push32((uint32_t)(EAX));
  /* 11a4568a call 0x11a441bb */
  push32(0x11a4568fu); f_11a441bb();
  /* 11a4568f pop ecx */
  ECX = (pop32());
L_11a45690:;
  /* 11a45690 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11a45693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45695 je 0x11a4569e */
  if (C.zf) goto L_11a4569e;
  /* 11a45697 push eax */
  push32((uint32_t)(EAX));
  /* 11a45698 call 0x11a441bb */
  push32(0x11a4569du); f_11a441bb();
  /* 11a4569d pop ecx */
  ECX = (pop32());
L_11a4569e:;
  /* 11a4569e mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11a456a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a456a3 je 0x11a456ac */
  if (C.zf) goto L_11a456ac;
  /* 11a456a5 push eax */
  push32((uint32_t)(EAX));
  /* 11a456a6 call 0x11a441bb */
  push32(0x11a456abu); f_11a441bb();
  /* 11a456ab pop ecx */
  ECX = (pop32());
L_11a456ac:;
  /* 11a456ac mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11a456af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a456b1 je 0x11a456ba */
  if (C.zf) goto L_11a456ba;
  /* 11a456b3 push eax */
  push32((uint32_t)(EAX));
  /* 11a456b4 call 0x11a441bb */
  push32(0x11a456b9u); f_11a441bb();
  /* 11a456b9 pop ecx */
  ECX = (pop32());
L_11a456ba:;
  /* 11a456ba mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11a456bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a456bf je 0x11a456c8 */
  if (C.zf) goto L_11a456c8;
  /* 11a456c1 push eax */
  push32((uint32_t)(EAX));
  /* 11a456c2 call 0x11a441bb */
  push32(0x11a456c7u); f_11a441bb();
  /* 11a456c7 pop ecx */
  ECX = (pop32());
L_11a456c8:;
  /* 11a456c8 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11a456cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a456cd je 0x11a456d6 */
  if (C.zf) goto L_11a456d6;
  /* 11a456cf push eax */
  push32((uint32_t)(EAX));
  /* 11a456d0 call 0x11a441bb */
  push32(0x11a456d5u); f_11a441bb();
  /* 11a456d5 pop ecx */
  ECX = (pop32());
L_11a456d6:;
  /* 11a456d6 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11a456d9 cmp eax, 0x11a4dcd0 */
  { uint32_t _a=(EAX),_b=(0x11a4dcd0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a456de je 0x11a456e7 */
  if (C.zf) goto L_11a456e7;
  /* 11a456e0 push eax */
  push32((uint32_t)(EAX));
  /* 11a456e1 call 0x11a441bb */
  push32(0x11a456e6u); f_11a441bb();
  /* 11a456e6 pop ecx */
  ECX = (pop32());
L_11a456e7:;
  /* 11a456e7 push esi */
  push32((uint32_t)(ESI));
  /* 11a456e8 call 0x11a441bb */
  push32(0x11a456edu); f_11a441bb();
  /* 11a456ed pop ecx */
  ECX = (pop32());
L_11a456ee:;
  /* 11a456ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11a456f0 push dword ptr [0x11a4bb3c] */
  push32((uint32_t)(r32((uint32_t)(0x11a4bb3c))));
  /* 11a456f6 call dword ptr [0x11a4a0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0b0))), 0x11a456fcu);
  /* 11a456fc pop esi */
  ESI = (pop32());
L_11a456fd:;
  /* 11a456fd ret  */
  ESPCHK(0x11a4565eu, _esp0);
  ESP += 4; return;
}

/* FUN_100056fe @ 0x11a456fe (185 bytes, 71 insns) */
void f_11a456fe(void) {
  FTRACE(0x11a456feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a456fe push ebx */
  push32((uint32_t)(EBX));
  /* 11a456ff xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a45701 cmp dword ptr [0x11a4fd70], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a4fd70))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45707 push esi */
  push32((uint32_t)(ESI));
  /* 11a45708 push edi */
  push32((uint32_t)(EDI));
  /* 11a45709 jne 0x11a45710 */
  if (!C.zf) goto L_11a45710;
  /* 11a4570b call 0x11a48023 */
  push32(0x11a45710u); f_11a48023();
L_11a45710:;
  /* 11a45710 mov esi, dword ptr [0x11a4f7c4] */
  ESI = (r32((uint32_t)(0x11a4f7c4)));
  /* 11a45716 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a45718:;
  /* 11a45718 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a4571a cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4571c je 0x11a45730 */
  if (C.zf) goto L_11a45730;
  /* 11a4571e cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45720 je 0x11a45723 */
  if (C.zf) goto L_11a45723;
  /* 11a45722 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a45723:;
  /* 11a45723 push esi */
  push32((uint32_t)(ESI));
  /* 11a45724 call 0x11a47bd0 */
  push32(0x11a45729u); f_11a47bd0();
  /* 11a45729 pop ecx */
  ECX = (pop32());
  /* 11a4572a lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11a4572e jmp 0x11a45718 */
  goto L_11a45718;
L_11a45730:;
  /* 11a45730 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11a45737 push eax */
  push32((uint32_t)(EAX));
  /* 11a45738 call 0x11a44d75 */
  push32(0x11a4573du); f_11a44d75();
  /* 11a4573d mov esi, eax */
  ESI = (EAX);
  /* 11a4573f pop ecx */
  ECX = (pop32());
  /* 11a45740 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45742 mov dword ptr [0x11a4f7f8], esi */
  w32((uint32_t)(0x11a4f7f8), (ESI));
  /* 11a45748 jne 0x11a45752 */
  if (!C.zf) goto L_11a45752;
  /* 11a4574a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a4574c call 0x11a44188 */
  push32(0x11a45751u); f_11a44188();
  /* 11a45751 pop ecx */
  ECX = (pop32());
L_11a45752:;
  /* 11a45752 mov edi, dword ptr [0x11a4f7c4] */
  EDI = (r32((uint32_t)(0x11a4f7c4)));
  /* 11a45758 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4575a je 0x11a45795 */
  if (C.zf) goto L_11a45795;
  /* 11a4575c push ebp */
  push32((uint32_t)(EBP));
L_11a4575d:;
  /* 11a4575d push edi */
  push32((uint32_t)(EDI));
  /* 11a4575e call 0x11a47bd0 */
  push32(0x11a45763u); f_11a47bd0();
  /* 11a45763 mov ebp, eax */
  EBP = (EAX);
  /* 11a45765 pop ecx */
  ECX = (pop32());
  /* 11a45766 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a45767 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4576a je 0x11a4578e */
  if (C.zf) goto L_11a4578e;
  /* 11a4576c push ebp */
  push32((uint32_t)(EBP));
  /* 11a4576d call 0x11a44d75 */
  push32(0x11a45772u); f_11a44d75();
  /* 11a45772 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45774 pop ecx */
  ECX = (pop32());
  /* 11a45775 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a45777 jne 0x11a45781 */
  if (!C.zf) goto L_11a45781;
  /* 11a45779 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a4577b call 0x11a44188 */
  push32(0x11a45780u); f_11a44188();
  /* 11a45780 pop ecx */
  ECX = (pop32());
L_11a45781:;
  /* 11a45781 push edi */
  push32((uint32_t)(EDI));
  /* 11a45782 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a45784 call 0x11a47ae0 */
  push32(0x11a45789u); f_11a47ae0();
  /* 11a45789 pop ecx */
  ECX = (pop32());
  /* 11a4578a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4578d pop ecx */
  ECX = (pop32());
L_11a4578e:;
  /* 11a4578e add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45790 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45792 jne 0x11a4575d */
  if (!C.zf) goto L_11a4575d;
  /* 11a45794 pop ebp */
  EBP = (pop32());
L_11a45795:;
  /* 11a45795 push dword ptr [0x11a4f7c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a4f7c4))));
  /* 11a4579b call 0x11a441bb */
  push32(0x11a457a0u); f_11a441bb();
  /* 11a457a0 pop ecx */
  ECX = (pop32());
  /* 11a457a1 mov dword ptr [0x11a4f7c4], ebx */
  w32((uint32_t)(0x11a4f7c4), (EBX));
  /* 11a457a7 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11a457a9 pop edi */
  EDI = (pop32());
  /* 11a457aa pop esi */
  ESI = (pop32());
  /* 11a457ab mov dword ptr [0x11a4fd6c], 1 */
  w32((uint32_t)(0x11a4fd6c), (0x1u));
  /* 11a457b5 pop ebx */
  EBX = (pop32());
  /* 11a457b6 ret  */
  ESPCHK(0x11a456feu, _esp0);
  ESP += 4; return;
}

/* FUN_100057b7 @ 0x11a457b7 (153 bytes, 62 insns) */
void f_11a457b7(void) {
  FTRACE(0x11a457b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a457b7 push ebp */
  push32((uint32_t)(EBP));
  /* 11a457b8 mov ebp, esp */
  EBP = (ESP);
  /* 11a457ba push ecx */
  push32((uint32_t)(ECX));
  /* 11a457bb push ecx */
  push32((uint32_t)(ECX));
  /* 11a457bc push ebx */
  push32((uint32_t)(EBX));
  /* 11a457bd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a457bf cmp dword ptr [0x11a4fd70], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a4fd70))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a457c5 push esi */
  push32((uint32_t)(ESI));
  /* 11a457c6 push edi */
  push32((uint32_t)(EDI));
  /* 11a457c7 jne 0x11a457ce */
  if (!C.zf) goto L_11a457ce;
  /* 11a457c9 call 0x11a48023 */
  push32(0x11a457ceu); f_11a48023();
L_11a457ce:;
  /* 11a457ce mov esi, 0x11a4f81c */
  ESI = (0x11a4f81cu);
  /* 11a457d3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a457d8 push esi */
  push32((uint32_t)(ESI));
  /* 11a457d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a457da call dword ptr [0x11a4a0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0dc))), 0x11a457e0u);
  /* 11a457e0 mov eax, dword ptr [0x11a50ea4] */
  EAX = (r32((uint32_t)(0x11a50ea4)));
  /* 11a457e5 mov dword ptr [0x11a4f808], esi */
  w32((uint32_t)(0x11a4f808), (ESI));
  /* 11a457eb mov edi, esi */
  EDI = (ESI);
  /* 11a457ed cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a457ef je 0x11a457f3 */
  if (C.zf) goto L_11a457f3;
  /* 11a457f1 mov edi, eax */
  EDI = (EAX);
L_11a457f3:;
  /* 11a457f3 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a457f6 push eax */
  push32((uint32_t)(EAX));
  /* 11a457f7 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a457fa push eax */
  push32((uint32_t)(EAX));
  /* 11a457fb push ebx */
  push32((uint32_t)(EBX));
  /* 11a457fc push ebx */
  push32((uint32_t)(EBX));
  /* 11a457fd push edi */
  push32((uint32_t)(EDI));
  /* 11a457fe call 0x11a45850 */
  push32(0x11a45803u); f_11a45850();
  /* 11a45803 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a45806 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a45809 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11a4580c push eax */
  push32((uint32_t)(EAX));
  /* 11a4580d call 0x11a44d75 */
  push32(0x11a45812u); f_11a44d75();
  /* 11a45812 mov esi, eax */
  ESI = (EAX);
  /* 11a45814 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45817 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45819 jne 0x11a45823 */
  if (!C.zf) goto L_11a45823;
  /* 11a4581b push 8 */
  push32((uint32_t)(0x8u));
  /* 11a4581d call 0x11a44188 */
  push32(0x11a45822u); f_11a44188();
  /* 11a45822 pop ecx */
  ECX = (pop32());
L_11a45823:;
  /* 11a45823 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a45826 push eax */
  push32((uint32_t)(EAX));
  /* 11a45827 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a4582a push eax */
  push32((uint32_t)(EAX));
  /* 11a4582b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a4582e lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11a45831 push eax */
  push32((uint32_t)(EAX));
  /* 11a45832 push esi */
  push32((uint32_t)(ESI));
  /* 11a45833 push edi */
  push32((uint32_t)(EDI));
  /* 11a45834 call 0x11a45850 */
  push32(0x11a45839u); f_11a45850();
  /* 11a45839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a4583c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4583f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a45840 mov dword ptr [0x11a4f7f0], esi */
  w32((uint32_t)(0x11a4f7f0), (ESI));
  /* 11a45846 pop edi */
  EDI = (pop32());
  /* 11a45847 pop esi */
  ESI = (pop32());
  /* 11a45848 mov dword ptr [0x11a4f7ec], eax */
  w32((uint32_t)(0x11a4f7ec), (EAX));
  /* 11a4584d pop ebx */
  EBX = (pop32());
  /* 11a4584e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a4584f ret  */
  ESPCHK(0x11a457b7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005850 @ 0x11a45850 (436 bytes, 187 insns) */
void f_11a45850(void) {
  FTRACE(0x11a45850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45850 push ebp */
  push32((uint32_t)(EBP));
  /* 11a45851 mov ebp, esp */
  EBP = (ESP);
  /* 11a45853 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a45856 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a45859 push ebx */
  push32((uint32_t)(EBX));
  /* 11a4585a push esi */
  push32((uint32_t)(ESI));
  /* 11a4585b and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a4585e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a45861 push edi */
  push32((uint32_t)(EDI));
  /* 11a45862 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a45865 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11a4586b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a4586e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a45870 je 0x11a4587a */
  if (C.zf) goto L_11a4587a;
  /* 11a45872 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a45874 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45877 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a4587a:;
  /* 11a4587a cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4587d jne 0x11a458c3 */
  if (!C.zf) goto L_11a458c3;
L_11a4587f:;
  /* 11a4587f mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a45882 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45883 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45886 je 0x11a458b1 */
  if (C.zf) goto L_11a458b1;
  /* 11a45888 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a4588a je 0x11a458b1 */
  if (C.zf) goto L_11a458b1;
  /* 11a4588c movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a4588f test byte ptr [edx + 0x11a4fc41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a4fc41)))&(0x4u); fl_logic(_r,8); }
  /* 11a45896 je 0x11a458a4 */
  if (C.zf) goto L_11a458a4;
  /* 11a45898 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a4589a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a4589c je 0x11a458a4 */
  if (C.zf) goto L_11a458a4;
  /* 11a4589e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a458a0 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a458a2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a458a3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a458a4:;
  /* 11a458a4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a458a6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a458a8 je 0x11a4587f */
  if (C.zf) goto L_11a4587f;
  /* 11a458aa mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a458ac mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a458ae inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a458af jmp 0x11a4587f */
  goto L_11a4587f;
L_11a458b1:;
  /* 11a458b1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a458b3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a458b5 je 0x11a458bb */
  if (C.zf) goto L_11a458bb;
  /* 11a458b7 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a458ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a458bb:;
  /* 11a458bb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a458be jne 0x11a45906 */
  if (!C.zf) goto L_11a45906;
  /* 11a458c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a458c1 jmp 0x11a45906 */
  goto L_11a45906;
L_11a458c3:;
  /* 11a458c3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a458c5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a458c7 je 0x11a458ce */
  if (C.zf) goto L_11a458ce;
  /* 11a458c9 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a458cb mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a458cd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a458ce:;
  /* 11a458ce mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a458d0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a458d1 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a458d4 test byte ptr [ebx + 0x11a4fc41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a4fc41)))&(0x4u); fl_logic(_r,8); }
  /* 11a458db je 0x11a458e9 */
  if (C.zf) goto L_11a458e9;
  /* 11a458dd inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a458df test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a458e1 je 0x11a458e8 */
  if (C.zf) goto L_11a458e8;
  /* 11a458e3 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a458e5 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11a458e7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a458e8:;
  /* 11a458e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a458e9:;
  /* 11a458e9 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a458ec je 0x11a458f7 */
  if (C.zf) goto L_11a458f7;
  /* 11a458ee test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a458f0 je 0x11a458fb */
  if (C.zf) goto L_11a458fb;
  /* 11a458f2 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a458f5 jne 0x11a458c3 */
  if (!C.zf) goto L_11a458c3;
L_11a458f7:;
  /* 11a458f7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a458f9 jne 0x11a458fe */
  if (!C.zf) goto L_11a458fe;
L_11a458fb:;
  /* 11a458fb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a458fc jmp 0x11a45906 */
  goto L_11a45906;
L_11a458fe:;
  /* 11a458fe test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a45900 je 0x11a45906 */
  if (C.zf) goto L_11a45906;
  /* 11a45902 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11a45906:;
  /* 11a45906 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11a4590a:;
  /* 11a4590a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4590d je 0x11a459f3 */
  if (C.zf) goto L_11a459f3;
L_11a45913:;
  /* 11a45913 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a45915 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45918 je 0x11a4591f */
  if (C.zf) goto L_11a4591f;
  /* 11a4591a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4591d jne 0x11a45922 */
  if (!C.zf) goto L_11a45922;
L_11a4591f:;
  /* 11a4591f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45920 jmp 0x11a45913 */
  goto L_11a45913;
L_11a45922:;
  /* 11a45922 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45925 je 0x11a459f3 */
  if (C.zf) goto L_11a459f3;
  /* 11a4592b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a4592d je 0x11a45937 */
  if (C.zf) goto L_11a45937;
  /* 11a4592f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a45931 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45934 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a45937:;
  /* 11a45937 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a4593a inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11a4593c:;
  /* 11a4593c mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11a45943 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a45945:;
  /* 11a45945 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45948 jne 0x11a4594e */
  if (!C.zf) goto L_11a4594e;
  /* 11a4594a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a4594b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a4594c jmp 0x11a45945 */
  goto L_11a45945;
L_11a4594e:;
  /* 11a4594e cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45951 jne 0x11a4597f */
  if (!C.zf) goto L_11a4597f;
  /* 11a45953 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11a45956 jne 0x11a4597d */
  if (!C.zf) goto L_11a4597d;
  /* 11a45958 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a4595a cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4595d je 0x11a4596c */
  if (C.zf) goto L_11a4596c;
  /* 11a4595f cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45963 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11a45966 jne 0x11a4596c */
  if (!C.zf) goto L_11a4596c;
  /* 11a45968 mov eax, edx */
  EAX = (EDX);
  /* 11a4596a jmp 0x11a4596f */
  goto L_11a4596f;
L_11a4596c:;
  /* 11a4596c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11a4596f:;
  /* 11a4596f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a45972 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a45974 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45977 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a4597a mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11a4597d:;
  /* 11a4597d shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11a4597f:;
  /* 11a4597f mov edx, ebx */
  EDX = (EBX);
  /* 11a45981 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a45982 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a45984 je 0x11a45994 */
  if (C.zf) goto L_11a45994;
  /* 11a45986 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11a45987:;
  /* 11a45987 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a45989 je 0x11a4598f */
  if (C.zf) goto L_11a4598f;
  /* 11a4598b mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11a4598e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a4598f:;
  /* 11a4598f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a45991 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a45992 jne 0x11a45987 */
  if (!C.zf) goto L_11a45987;
L_11a45994:;
  /* 11a45994 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a45996 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a45998 je 0x11a459e4 */
  if (C.zf) goto L_11a459e4;
  /* 11a4599a cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4599e jne 0x11a459aa */
  if (!C.zf) goto L_11a459aa;
  /* 11a459a0 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a459a3 je 0x11a459e4 */
  if (C.zf) goto L_11a459e4;
  /* 11a459a5 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a459a8 je 0x11a459e4 */
  if (C.zf) goto L_11a459e4;
L_11a459aa:;
  /* 11a459aa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a459ae je 0x11a459de */
  if (C.zf) goto L_11a459de;
  /* 11a459b0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a459b2 je 0x11a459cd */
  if (C.zf) goto L_11a459cd;
  /* 11a459b4 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a459b7 test byte ptr [ebx + 0x11a4fc41], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a4fc41)))&(0x4u); fl_logic(_r,8); }
  /* 11a459be je 0x11a459c6 */
  if (C.zf) goto L_11a459c6;
  /* 11a459c0 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a459c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a459c3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a459c4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a459c6:;
  /* 11a459c6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a459c8 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a459ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a459cb jmp 0x11a459dc */
  goto L_11a459dc;
L_11a459cd:;
  /* 11a459cd movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a459d0 test byte ptr [edx + 0x11a4fc41], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a4fc41)))&(0x4u); fl_logic(_r,8); }
  /* 11a459d7 je 0x11a459dc */
  if (C.zf) goto L_11a459dc;
  /* 11a459d9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a459da inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a459dc:;
  /* 11a459dc inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a459de:;
  /* 11a459de inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a459df jmp 0x11a4593c */
  goto L_11a4593c;
L_11a459e4:;
  /* 11a459e4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a459e6 je 0x11a459ec */
  if (C.zf) goto L_11a459ec;
  /* 11a459e8 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a459eb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a459ec:;
  /* 11a459ec inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a459ee jmp 0x11a4590a */
  goto L_11a4590a;
L_11a459f3:;
  /* 11a459f3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a459f5 je 0x11a459fa */
  if (C.zf) goto L_11a459fa;
  /* 11a459f7 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a459fa:;
  /* 11a459fa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a459fd pop edi */
  EDI = (pop32());
  /* 11a459fe pop esi */
  ESI = (pop32());
  /* 11a459ff pop ebx */
  EBX = (pop32());
  /* 11a45a00 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11a45a02 pop ebp */
  EBP = (pop32());
  /* 11a45a03 ret  */
  ESPCHK(0x11a45850u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a04 @ 0x11a45a04 (306 bytes, 132 insns) */
void f_11a45a04(void) {
  FTRACE(0x11a45a04u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45a04 push ecx */
  push32((uint32_t)(ECX));
  /* 11a45a05 push ecx */
  push32((uint32_t)(ECX));
  /* 11a45a06 mov eax, dword ptr [0x11a4f920] */
  EAX = (r32((uint32_t)(0x11a4f920)));
  /* 11a45a0b push ebx */
  push32((uint32_t)(EBX));
  /* 11a45a0c push ebp */
  push32((uint32_t)(EBP));
  /* 11a45a0d mov ebp, dword ptr [0x11a4a06c] */
  EBP = (r32((uint32_t)(0x11a4a06c)));
  /* 11a45a13 push esi */
  push32((uint32_t)(ESI));
  /* 11a45a14 push edi */
  push32((uint32_t)(EDI));
  /* 11a45a15 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a45a17 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a45a19 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a45a1b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45a1d jne 0x11a45a52 */
  if (!C.zf) goto L_11a45a52;
  /* 11a45a1f call ebp */
  call_ind((uint32_t)(EBP), 0x11a45a21u);
  /* 11a45a21 mov esi, eax */
  ESI = (EAX);
  /* 11a45a23 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45a25 je 0x11a45a33 */
  if (C.zf) goto L_11a45a33;
  /* 11a45a27 mov dword ptr [0x11a4f920], 1 */
  w32((uint32_t)(0x11a4f920), (0x1u));
  /* 11a45a31 jmp 0x11a45a5b */
  goto L_11a45a5b;
L_11a45a33:;
  /* 11a45a33 call dword ptr [0x11a4a0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0b4))), 0x11a45a39u);
  /* 11a45a39 mov edi, eax */
  EDI = (EAX);
  /* 11a45a3b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45a3d je 0x11a45b2d */
  if (C.zf) goto L_11a45b2d;
  /* 11a45a43 mov dword ptr [0x11a4f920], 2 */
  w32((uint32_t)(0x11a4f920), (0x2u));
  /* 11a45a4d jmp 0x11a45ae1 */
  goto L_11a45ae1;
L_11a45a52:;
  /* 11a45a52 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45a55 jne 0x11a45adc */
  if (!C.zf) goto L_11a45adc;
L_11a45a5b:;
  /* 11a45a5b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45a5d jne 0x11a45a6b */
  if (!C.zf) goto L_11a45a6b;
  /* 11a45a5f call ebp */
  call_ind((uint32_t)(EBP), 0x11a45a61u);
  /* 11a45a61 mov esi, eax */
  ESI = (EAX);
  /* 11a45a63 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45a65 je 0x11a45b2d */
  if (C.zf) goto L_11a45b2d;
L_11a45a6b:;
  /* 11a45a6b cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a45a6e mov eax, esi */
  EAX = (ESI);
  /* 11a45a70 je 0x11a45a80 */
  if (C.zf) goto L_11a45a80;
L_11a45a72:;
  /* 11a45a72 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45a73 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45a74 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a45a77 jne 0x11a45a72 */
  if (!C.zf) goto L_11a45a72;
  /* 11a45a79 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45a7a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45a7b cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a45a7e jne 0x11a45a72 */
  if (!C.zf) goto L_11a45a72;
L_11a45a80:;
  /* 11a45a80 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45a82 mov edi, dword ptr [0x11a4a074] */
  EDI = (r32((uint32_t)(0x11a4a074)));
  /* 11a45a88 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a45a8a push ebx */
  push32((uint32_t)(EBX));
  /* 11a45a8b push ebx */
  push32((uint32_t)(EBX));
  /* 11a45a8c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45a8d push ebx */
  push32((uint32_t)(EBX));
  /* 11a45a8e push ebx */
  push32((uint32_t)(EBX));
  /* 11a45a8f push eax */
  push32((uint32_t)(EAX));
  /* 11a45a90 push esi */
  push32((uint32_t)(ESI));
  /* 11a45a91 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45a92 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45a93 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11a45a97 call edi */
  call_ind((uint32_t)(EDI), 0x11a45a99u);
  /* 11a45a99 mov ebp, eax */
  EBP = (EAX);
  /* 11a45a9b cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45a9d je 0x11a45ad1 */
  if (C.zf) goto L_11a45ad1;
  /* 11a45a9f push ebp */
  push32((uint32_t)(EBP));
  /* 11a45aa0 call 0x11a44d75 */
  push32(0x11a45aa5u); f_11a44d75();
  /* 11a45aa5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45aa7 pop ecx */
  ECX = (pop32());
  /* 11a45aa8 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a45aac je 0x11a45ad1 */
  if (C.zf) goto L_11a45ad1;
  /* 11a45aae push ebx */
  push32((uint32_t)(EBX));
  /* 11a45aaf push ebx */
  push32((uint32_t)(EBX));
  /* 11a45ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a45ab1 push eax */
  push32((uint32_t)(EAX));
  /* 11a45ab2 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11a45ab6 push esi */
  push32((uint32_t)(ESI));
  /* 11a45ab7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45ab8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45ab9 call edi */
  call_ind((uint32_t)(EDI), 0x11a45abbu);
  /* 11a45abb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45abd jne 0x11a45acd */
  if (!C.zf) goto L_11a45acd;
  /* 11a45abf push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a45ac3 call 0x11a441bb */
  push32(0x11a45ac8u); f_11a441bb();
  /* 11a45ac8 pop ecx */
  ECX = (pop32());
  /* 11a45ac9 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11a45acd:;
  /* 11a45acd mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a45ad1:;
  /* 11a45ad1 push esi */
  push32((uint32_t)(ESI));
  /* 11a45ad2 call dword ptr [0x11a4a078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a078))), 0x11a45ad8u);
  /* 11a45ad8 mov eax, ebx */
  EAX = (EBX);
  /* 11a45ada jmp 0x11a45b2f */
  goto L_11a45b2f;
L_11a45adc:;
  /* 11a45adc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45adf jne 0x11a45b2d */
  if (!C.zf) goto L_11a45b2d;
L_11a45ae1:;
  /* 11a45ae1 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45ae3 jne 0x11a45af1 */
  if (!C.zf) goto L_11a45af1;
  /* 11a45ae5 call dword ptr [0x11a4a0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0b4))), 0x11a45aebu);
  /* 11a45aeb mov edi, eax */
  EDI = (EAX);
  /* 11a45aed cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45aef je 0x11a45b2d */
  if (C.zf) goto L_11a45b2d;
L_11a45af1:;
  /* 11a45af1 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45af3 mov eax, edi */
  EAX = (EDI);
  /* 11a45af5 je 0x11a45b01 */
  if (C.zf) goto L_11a45b01;
L_11a45af7:;
  /* 11a45af7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45af8 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45afa jne 0x11a45af7 */
  if (!C.zf) goto L_11a45af7;
  /* 11a45afc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45afd cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45aff jne 0x11a45af7 */
  if (!C.zf) goto L_11a45af7;
L_11a45b01:;
  /* 11a45b01 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45b03 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45b04 mov ebp, eax */
  EBP = (EAX);
  /* 11a45b06 push ebp */
  push32((uint32_t)(EBP));
  /* 11a45b07 call 0x11a44d75 */
  push32(0x11a45b0cu); f_11a44d75();
  /* 11a45b0c mov esi, eax */
  ESI = (EAX);
  /* 11a45b0e pop ecx */
  ECX = (pop32());
  /* 11a45b0f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45b11 jne 0x11a45b17 */
  if (!C.zf) goto L_11a45b17;
  /* 11a45b13 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a45b15 jmp 0x11a45b22 */
  goto L_11a45b22;
L_11a45b17:;
  /* 11a45b17 push ebp */
  push32((uint32_t)(EBP));
  /* 11a45b18 push edi */
  push32((uint32_t)(EDI));
  /* 11a45b19 push esi */
  push32((uint32_t)(ESI));
  /* 11a45b1a call 0x11a44a40 */
  push32(0x11a45b1fu); f_11a44a40();
  /* 11a45b1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a45b22:;
  /* 11a45b22 push edi */
  push32((uint32_t)(EDI));
  /* 11a45b23 call dword ptr [0x11a4a0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0e0))), 0x11a45b29u);
  /* 11a45b29 mov eax, esi */
  EAX = (ESI);
  /* 11a45b2b jmp 0x11a45b2f */
  goto L_11a45b2f;
L_11a45b2d:;
  /* 11a45b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a45b2f:;
  /* 11a45b2f pop edi */
  EDI = (pop32());
  /* 11a45b30 pop esi */
  ESI = (pop32());
  /* 11a45b31 pop ebp */
  EBP = (pop32());
  /* 11a45b32 pop ebx */
  EBX = (pop32());
  /* 11a45b33 pop ecx */
  ECX = (pop32());
  /* 11a45b34 pop ecx */
  ECX = (pop32());
  /* 11a45b35 ret  */
  ESPCHK(0x11a45a04u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b36 @ 0x11a45b36 (45 bytes, 17 insns) */
void f_11a45b36(void) {
  FTRACE(0x11a45b36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45b36 push esi */
  push32((uint32_t)(ESI));
  /* 11a45b37 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a45b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45b3d and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a45b40 call dword ptr [0x11a4a068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a068))), 0x11a45b46u);
  /* 11a45b46 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a45b4b jne 0x11a45b61 */
  if (!C.zf) goto L_11a45b61;
  /* 11a45b4d mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11a45b50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a45b52 je 0x11a45b61 */
  if (C.zf) goto L_11a45b61;
  /* 11a45b54 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45b56 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11a45b59 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11a45b5b mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11a45b5e mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11a45b61:;
  /* 11a45b61 pop esi */
  ESI = (pop32());
  /* 11a45b62 ret  */
  ESPCHK(0x11a45b36u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b63 @ 0x11a45b63 (328 bytes, 115 insns) */
void f_11a45b63(void) {
  FTRACE(0x11a45b63u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45b63 push ebp */
  push32((uint32_t)(EBP));
  /* 11a45b64 mov ebp, esp */
  EBP = (ESP);
  /* 11a45b66 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11a45b6b call 0x11a482a0 */
  push32(0x11a45b70u); f_11a482a0();
  /* 11a45b70 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11a45b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45b77 push eax */
  push32((uint32_t)(EAX));
  /* 11a45b78 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11a45b82 call dword ptr [0x11a4a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a060))), 0x11a45b88u);
  /* 11a45b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45b8a je 0x11a45ba6 */
  if (C.zf) goto L_11a45ba6;
  /* 11a45b8c cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45b93 jne 0x11a45ba6 */
  if (!C.zf) goto L_11a45ba6;
  /* 11a45b95 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45b9c jb 0x11a45ba6 */
  if (C.cf) goto L_11a45ba6;
  /* 11a45b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a45ba0 pop eax */
  EAX = (pop32());
  /* 11a45ba1 jmp 0x11a45ca8 */
  goto L_11a45ca8;
L_11a45ba6:;
  /* 11a45ba6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a45bac push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11a45bb1 push eax */
  push32((uint32_t)(EAX));
  /* 11a45bb2 push 0x11a4a1e8 */
  push32((uint32_t)(0x11a4a1e8u));
  /* 11a45bb7 call dword ptr [0x11a4a070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a070))), 0x11a45bbdu);
  /* 11a45bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45bbf je 0x11a45c95 */
  if (C.zf) goto L_11a45c95;
  /* 11a45bc5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a45bc7 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11a45bcd cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45bd3 je 0x11a45be8 */
  if (C.zf) goto L_11a45be8;
L_11a45bd5:;
  /* 11a45bd5 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a45bd7 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45bd9 jl 0x11a45be3 */
  if ((C.sf!=C.of)) goto L_11a45be3;
  /* 11a45bdb cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45bdd jg 0x11a45be3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a45be3;
  /* 11a45bdf sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a45be1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11a45be3:;
  /* 11a45be3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a45be4 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45be6 jne 0x11a45bd5 */
  if (!C.zf) goto L_11a45bd5;
L_11a45be8:;
  /* 11a45be8 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a45bee push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a45bf0 push eax */
  push32((uint32_t)(EAX));
  /* 11a45bf1 push 0x11a4a1d0 */
  push32((uint32_t)(0x11a4a1d0u));
  /* 11a45bf6 call 0x11a48260 */
  push32(0x11a45bfbu); f_11a48260();
  /* 11a45bfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45bfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45c00 jne 0x11a45c0a */
  if (!C.zf) goto L_11a45c0a;
  /* 11a45c02 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a45c08 jmp 0x11a45c53 */
  goto L_11a45c53;
L_11a45c0a:;
  /* 11a45c0a lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11a45c10 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a45c15 push eax */
  push32((uint32_t)(EAX));
  /* 11a45c16 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45c17 call dword ptr [0x11a4a0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0dc))), 0x11a45c1du);
  /* 11a45c1d cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45c23 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11a45c29 je 0x11a45c3e */
  if (C.zf) goto L_11a45c3e;
L_11a45c2b:;
  /* 11a45c2b mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a45c2d cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45c2f jl 0x11a45c39 */
  if ((C.sf!=C.of)) goto L_11a45c39;
  /* 11a45c31 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45c33 jg 0x11a45c39 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a45c39;
  /* 11a45c35 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a45c37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11a45c39:;
  /* 11a45c39 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a45c3a cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45c3c jne 0x11a45c2b */
  if (!C.zf) goto L_11a45c2b;
L_11a45c3e:;
  /* 11a45c3e lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11a45c44 push eax */
  push32((uint32_t)(EAX));
  /* 11a45c45 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a45c4b push eax */
  push32((uint32_t)(EAX));
  /* 11a45c4c call 0x11a43b70 */
  push32(0x11a45c51u); f_11a43b70();
  /* 11a45c51 pop ecx */
  ECX = (pop32());
  /* 11a45c52 pop ecx */
  ECX = (pop32());
L_11a45c53:;
  /* 11a45c53 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45c55 je 0x11a45c95 */
  if (C.zf) goto L_11a45c95;
  /* 11a45c57 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11a45c59 push eax */
  push32((uint32_t)(EAX));
  /* 11a45c5a call 0x11a442c0 */
  push32(0x11a45c5fu); f_11a442c0();
  /* 11a45c5f pop ecx */
  ECX = (pop32());
  /* 11a45c60 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45c62 pop ecx */
  ECX = (pop32());
  /* 11a45c63 je 0x11a45c95 */
  if (C.zf) goto L_11a45c95;
  /* 11a45c65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45c66 mov ecx, eax */
  ECX = (EAX);
  /* 11a45c68 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45c6a je 0x11a45c7a */
  if (C.zf) goto L_11a45c7a;
L_11a45c6c:;
  /* 11a45c6c cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45c6f jne 0x11a45c75 */
  if (!C.zf) goto L_11a45c75;
  /* 11a45c71 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11a45c73 jmp 0x11a45c76 */
  goto L_11a45c76;
L_11a45c75:;
  /* 11a45c75 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11a45c76:;
  /* 11a45c76 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45c78 jne 0x11a45c6c */
  if (!C.zf) goto L_11a45c6c;
L_11a45c7a:;
  /* 11a45c7a push 0xa */
  push32((uint32_t)(0xau));
  /* 11a45c7c push ebx */
  push32((uint32_t)(EBX));
  /* 11a45c7d push eax */
  push32((uint32_t)(EAX));
  /* 11a45c7e call 0x11a4803f */
  push32(0x11a45c83u); f_11a4803f();
  /* 11a45c83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45c86 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45c89 je 0x11a45ca8 */
  if (C.zf) goto L_11a45ca8;
  /* 11a45c8b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45c8e je 0x11a45ca8 */
  if (C.zf) goto L_11a45ca8;
  /* 11a45c90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45c93 je 0x11a45ca8 */
  if (C.zf) goto L_11a45ca8;
L_11a45c95:;
  /* 11a45c95 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a45c98 push eax */
  push32((uint32_t)(EAX));
  /* 11a45c99 call 0x11a45b36 */
  push32(0x11a45c9eu); f_11a45b36();
  /* 11a45c9e cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a45ca2 pop ecx */
  ECX = (pop32());
  /* 11a45ca3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45ca5 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a45ca8:;
  /* 11a45ca8 pop ebx */
  EBX = (pop32());
  /* 11a45ca9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a45caa ret  */
  ESPCHK(0x11a45b63u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cab @ 0x11a45cab (93 bytes, 30 insns) */
void f_11a45cab(void) {
  FTRACE(0x11a45cabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45cab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a45cad push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45caf cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45cb3 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a45cb8 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a45cbb push eax */
  push32((uint32_t)(EAX));
  /* 11a45cbc call dword ptr [0x11a4a064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a064))), 0x11a45cc2u);
  /* 11a45cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45cc4 mov dword ptr [0x11a4fd64], eax */
  w32((uint32_t)(0x11a4fd64), (EAX));
  /* 11a45cc9 je 0x11a45d01 */
  if (C.zf) goto L_11a45d01;
  /* 11a45ccb call 0x11a45b63 */
  push32(0x11a45cd0u); f_11a45b63();
  /* 11a45cd0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45cd3 mov dword ptr [0x11a4fd68], eax */
  w32((uint32_t)(0x11a4fd68), (EAX));
  /* 11a45cd8 jne 0x11a45ce7 */
  if (!C.zf) goto L_11a45ce7;
  /* 11a45cda push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11a45cdf call 0x11a45f3c */
  push32(0x11a45ce4u); f_11a45f3c();
  /* 11a45ce4 pop ecx */
  ECX = (pop32());
  /* 11a45ce5 jmp 0x11a45cf1 */
  goto L_11a45cf1;
L_11a45ce7:;
  /* 11a45ce7 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45cea jne 0x11a45d04 */
  if (!C.zf) goto L_11a45d04;
  /* 11a45cec call 0x11a4678d */
  push32(0x11a45cf1u); f_11a4678d();
L_11a45cf1:;
  /* 11a45cf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45cf3 jne 0x11a45d04 */
  if (!C.zf) goto L_11a45d04;
  /* 11a45cf5 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a45cfb call dword ptr [0x11a4a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a05c))), 0x11a45d01u);
L_11a45d01:;
  /* 11a45d01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a45d03 ret  */
  ESPCHK(0x11a45cabu, _esp0);
  ESP += 4; return;
L_11a45d04:;
  /* 11a45d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a45d06 pop eax */
  EAX = (pop32());
  /* 11a45d07 ret  */
  ESPCHK(0x11a45cabu, _esp0);
  ESP += 4; return;
}

/* FUN_10005d08 @ 0x11a45d08 (168 bytes, 56 insns) */
void f_11a45d08(void) {
  FTRACE(0x11a45d08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45d08 mov eax, dword ptr [0x11a4fd68] */
  EAX = (r32((uint32_t)(0x11a4fd68)));
  /* 11a45d0d push esi */
  push32((uint32_t)(ESI));
  /* 11a45d0e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45d11 push edi */
  push32((uint32_t)(EDI));
  /* 11a45d12 jne 0x11a45d7a */
  if (!C.zf) goto L_11a45d7a;
  /* 11a45d14 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45d15 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a45d17 cmp dword ptr [0x11a4fd58], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a4fd58))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45d1d push ebp */
  push32((uint32_t)(EBP));
  /* 11a45d1e mov ebp, dword ptr [0x11a4a084] */
  EBP = (r32((uint32_t)(0x11a4a084)));
  /* 11a45d24 jle 0x11a45d66 */
  if ((C.zf||C.sf!=C.of)) goto L_11a45d66;
  /* 11a45d26 mov eax, dword ptr [0x11a4fd5c] */
  EAX = (r32((uint32_t)(0x11a4fd5c)));
  /* 11a45d2b mov edi, dword ptr [0x11a4a054] */
  EDI = (r32((uint32_t)(0x11a4a054)));
  /* 11a45d31 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11a45d34:;
  /* 11a45d34 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a45d39 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a45d3e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a45d40 call edi */
  call_ind((uint32_t)(EDI), 0x11a45d42u);
  /* 11a45d42 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a45d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45d49 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a45d4b call edi */
  call_ind((uint32_t)(EDI), 0x11a45d4du);
  /* 11a45d4d push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11a45d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45d52 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a45d58 call ebp */
  call_ind((uint32_t)(EBP), 0x11a45d5au);
  /* 11a45d5a add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45d5d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a45d5e cmp ebx, dword ptr [0x11a4fd58] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a4fd58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45d64 jl 0x11a45d34 */
  if ((C.sf!=C.of)) goto L_11a45d34;
L_11a45d66:;
  /* 11a45d66 push dword ptr [0x11a4fd5c] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd5c))));
  /* 11a45d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45d6e push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a45d74 call ebp */
  call_ind((uint32_t)(EBP), 0x11a45d76u);
  /* 11a45d76 pop ebp */
  EBP = (pop32());
  /* 11a45d77 pop ebx */
  EBX = (pop32());
  /* 11a45d78 jmp 0x11a45da1 */
  goto L_11a45da1;
L_11a45d7a:;
  /* 11a45d7a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45d7d jne 0x11a45da1 */
  if (!C.zf) goto L_11a45da1;
  /* 11a45d7f mov edi, 0x11a4bbd8 */
  EDI = (0x11a4bbd8u);
  /* 11a45d84 mov esi, edi */
  ESI = (EDI);
L_11a45d86:;
  /* 11a45d86 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a45d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45d8b je 0x11a45d9b */
  if (C.zf) goto L_11a45d9b;
  /* 11a45d8d push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a45d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45d94 push eax */
  push32((uint32_t)(EAX));
  /* 11a45d95 call dword ptr [0x11a4a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a054))), 0x11a45d9bu);
L_11a45d9b:;
  /* 11a45d9b mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11a45d9d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45d9f jne 0x11a45d86 */
  if (!C.zf) goto L_11a45d86;
L_11a45da1:;
  /* 11a45da1 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a45da7 call dword ptr [0x11a4a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a05c))), 0x11a45dadu);
  /* 11a45dad pop edi */
  EDI = (pop32());
  /* 11a45dae pop esi */
  ESI = (pop32());
  /* 11a45daf ret  */
  ESPCHK(0x11a45d08u, _esp0);
  ESP += 4; return;
}

/* FUN_10005db0 @ 0x11a45db0 (57 bytes, 18 insns) */
void f_11a45db0(void) {
  FTRACE(0x11a45db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45db0 mov eax, dword ptr [0x11a4f7cc] */
  EAX = (r32((uint32_t)(0x11a4f7cc)));
  /* 11a45db5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45db8 je 0x11a45dc7 */
  if (C.zf) goto L_11a45dc7;
  /* 11a45dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45dbc jne 0x11a45de8 */
  if (!C.zf) goto L_11a45de8;
  /* 11a45dbe cmp dword ptr [0x11a4f7d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f7d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45dc5 jne 0x11a45de8 */
  if (!C.zf) goto L_11a45de8;
L_11a45dc7:;
  /* 11a45dc7 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11a45dcc call 0x11a45de9 */
  push32(0x11a45dd1u); f_11a45de9();
  /* 11a45dd1 mov eax, dword ptr [0x11a4f924] */
  EAX = (r32((uint32_t)(0x11a4f924)));
  /* 11a45dd6 pop ecx */
  ECX = (pop32());
  /* 11a45dd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45dd9 je 0x11a45ddd */
  if (C.zf) goto L_11a45ddd;
  /* 11a45ddb call eax */
  call_ind((uint32_t)(EAX), 0x11a45dddu);
L_11a45ddd:;
  /* 11a45ddd push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a45de2 call 0x11a45de9 */
  push32(0x11a45de7u); f_11a45de9();
  /* 11a45de7 pop ecx */
  ECX = (pop32());
L_11a45de8:;
  /* 11a45de8 ret  */
  ESPCHK(0x11a45db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005de9 @ 0x11a45de9 (339 bytes, 100 insns) */
void f_11a45de9(void) {
  FTRACE(0x11a45de9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45de9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a45dea mov ebp, esp */
  EBP = (ESP);
  /* 11a45dec sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45df2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a45df5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a45df7 mov eax, 0x11a4bb48 */
  EAX = (0x11a4bb48u);
L_11a45dfc:;
  /* 11a45dfc cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45dfe je 0x11a45e0b */
  if (C.zf) goto L_11a45e0b;
  /* 11a45e00 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45e03 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a45e04 cmp eax, 0x11a4bbd8 */
  { uint32_t _a=(EAX),_b=(0x11a4bbd8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45e09 jl 0x11a45dfc */
  if ((C.sf!=C.of)) goto L_11a45dfc;
L_11a45e0b:;
  /* 11a45e0b push esi */
  push32((uint32_t)(ESI));
  /* 11a45e0c mov esi, ecx */
  ESI = (ECX);
  /* 11a45e0e shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a45e11 cmp edx, dword ptr [esi + 0x11a4bb48] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11a4bb48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45e17 jne 0x11a45f39 */
  if (!C.zf) goto L_11a45f39;
  /* 11a45e1d mov eax, dword ptr [0x11a4f7cc] */
  EAX = (r32((uint32_t)(0x11a4f7cc)));
  /* 11a45e22 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45e25 je 0x11a45f13 */
  if (C.zf) goto L_11a45f13;
  /* 11a45e2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45e2d jne 0x11a45e3c */
  if (!C.zf) goto L_11a45e3c;
  /* 11a45e2f cmp dword ptr [0x11a4f7d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f7d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45e36 je 0x11a45f13 */
  if (C.zf) goto L_11a45f13;
L_11a45e3c:;
  /* 11a45e3c cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45e42 je 0x11a45f39 */
  if (C.zf) goto L_11a45f39;
  /* 11a45e48 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a45e4e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a45e53 push eax */
  push32((uint32_t)(EAX));
  /* 11a45e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45e56 call dword ptr [0x11a4a0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0dc))), 0x11a45e5cu);
  /* 11a45e5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45e5e jne 0x11a45e73 */
  if (!C.zf) goto L_11a45e73;
  /* 11a45e60 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a45e66 push 0x11a4a4d8 */
  push32((uint32_t)(0x11a4a4d8u));
  /* 11a45e6b push eax */
  push32((uint32_t)(EAX));
  /* 11a45e6c call 0x11a47ae0 */
  push32(0x11a45e71u); f_11a47ae0();
  /* 11a45e71 pop ecx */
  ECX = (pop32());
  /* 11a45e72 pop ecx */
  ECX = (pop32());
L_11a45e73:;
  /* 11a45e73 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a45e79 push edi */
  push32((uint32_t)(EDI));
  /* 11a45e7a push eax */
  push32((uint32_t)(EAX));
  /* 11a45e7b lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11a45e81 call 0x11a47bd0 */
  push32(0x11a45e86u); f_11a47bd0();
  /* 11a45e86 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a45e87 pop ecx */
  ECX = (pop32());
  /* 11a45e88 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45e8b jbe 0x11a45eb6 */
  if ((C.cf||C.zf)) goto L_11a45eb6;
  /* 11a45e8d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a45e93 push eax */
  push32((uint32_t)(EAX));
  /* 11a45e94 call 0x11a47bd0 */
  push32(0x11a45e99u); f_11a47bd0();
  /* 11a45e99 mov edi, eax */
  EDI = (EAX);
  /* 11a45e9b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a45ea1 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45ea4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a45ea6 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45ea8 push 0x11a4a4d4 */
  push32((uint32_t)(0x11a4a4d4u));
  /* 11a45ead push edi */
  push32((uint32_t)(EDI));
  /* 11a45eae call 0x11a43a30 */
  push32(0x11a45eb3u); f_11a43a30();
  /* 11a45eb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a45eb6:;
  /* 11a45eb6 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a45ebc push 0x11a4a4b8 */
  push32((uint32_t)(0x11a4a4b8u));
  /* 11a45ec1 push eax */
  push32((uint32_t)(EAX));
  /* 11a45ec2 call 0x11a47ae0 */
  push32(0x11a45ec7u); f_11a47ae0();
  /* 11a45ec7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a45ecd push edi */
  push32((uint32_t)(EDI));
  /* 11a45ece push eax */
  push32((uint32_t)(EAX));
  /* 11a45ecf call 0x11a47af0 */
  push32(0x11a45ed4u); f_11a47af0();
  /* 11a45ed4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a45eda push 0x11a4a4b4 */
  push32((uint32_t)(0x11a4a4b4u));
  /* 11a45edf push eax */
  push32((uint32_t)(EAX));
  /* 11a45ee0 call 0x11a47af0 */
  push32(0x11a45ee5u); f_11a47af0();
  /* 11a45ee5 push dword ptr [esi + 0x11a4bb4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11a4bb4c))));
  /* 11a45eeb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a45ef1 push eax */
  push32((uint32_t)(EAX));
  /* 11a45ef2 call 0x11a47af0 */
  push32(0x11a45ef7u); f_11a47af0();
  /* 11a45ef7 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11a45efc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a45f02 push 0x11a4a48c */
  push32((uint32_t)(0x11a4a48cu));
  /* 11a45f07 push eax */
  push32((uint32_t)(EAX));
  /* 11a45f08 call 0x11a482cf */
  push32(0x11a45f0du); f_11a482cf();
  /* 11a45f0d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45f10 pop edi */
  EDI = (pop32());
  /* 11a45f11 jmp 0x11a45f39 */
  goto L_11a45f39;
L_11a45f13:;
  /* 11a45f13 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a45f16 lea esi, [esi + 0x11a4bb4c] */
  ESI = ((uint32_t)(ESI + 0x11a4bb4c));
  /* 11a45f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45f1e push eax */
  push32((uint32_t)(EAX));
  /* 11a45f1f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a45f21 call 0x11a47bd0 */
  push32(0x11a45f26u); f_11a47bd0();
  /* 11a45f26 pop ecx */
  ECX = (pop32());
  /* 11a45f27 push eax */
  push32((uint32_t)(EAX));
  /* 11a45f28 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a45f2a push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a45f2c call dword ptr [0x11a4a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0a4))), 0x11a45f32u);
  /* 11a45f32 push eax */
  push32((uint32_t)(EAX));
  /* 11a45f33 call dword ptr [0x11a4a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a050))), 0x11a45f39u);
L_11a45f39:;
  /* 11a45f39 pop esi */
  ESI = (pop32());
  /* 11a45f3a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a45f3b ret  */
  ESPCHK(0x11a45de9u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f3c @ 0x11a45f3c (72 bytes, 17 insns) */
void f_11a45f3c(void) {
  FTRACE(0x11a45f3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45f3c push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11a45f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a45f43 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a45f49 call dword ptr [0x11a4a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a09c))), 0x11a45f4fu);
  /* 11a45f4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a45f51 mov dword ptr [0x11a4fd5c], eax */
  w32((uint32_t)(0x11a4fd5c), (EAX));
  /* 11a45f56 jne 0x11a45f59 */
  if (!C.zf) goto L_11a45f59;
  /* 11a45f58 ret  */
  ESPCHK(0x11a45f3cu, _esp0);
  ESP += 4; return;
L_11a45f59:;
  /* 11a45f59 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a45f5d and dword ptr [0x11a4fd54], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a4fd54)))&(0x0u); w32((uint32_t)(0x11a4fd54), (_r)); fl_logic(_r,32); }
  /* 11a45f64 and dword ptr [0x11a4fd58], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a4fd58)))&(0x0u); w32((uint32_t)(0x11a4fd58), (_r)); fl_logic(_r,32); }
  /* 11a45f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a45f6d mov dword ptr [0x11a4fd50], eax */
  w32((uint32_t)(0x11a4fd50), (EAX));
  /* 11a45f72 mov dword ptr [0x11a4fd60], ecx */
  w32((uint32_t)(0x11a4fd60), (ECX));
  /* 11a45f78 mov dword ptr [0x11a4fd48], 0x10 */
  w32((uint32_t)(0x11a4fd48), (0x10u));
  /* 11a45f82 pop eax */
  EAX = (pop32());
  /* 11a45f83 ret  */
  ESPCHK(0x11a45f3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005f84 @ 0x11a45f84 (43 bytes, 14 insns) */
void f_11a45f84(void) {
  FTRACE(0x11a45f84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45f84 mov eax, dword ptr [0x11a4fd58] */
  EAX = (r32((uint32_t)(0x11a4fd58)));
  /* 11a45f89 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a45f8c mov eax, dword ptr [0x11a4fd5c] */
  EAX = (r32((uint32_t)(0x11a4fd5c)));
  /* 11a45f91 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11a45f94:;
  /* 11a45f94 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45f96 jae 0x11a45fac */
  if (!C.cf) goto L_11a45fac;
  /* 11a45f98 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a45f9c sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45f9f cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a45fa5 jb 0x11a45fae */
  if (C.cf) goto L_11a45fae;
  /* 11a45fa7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45faa jmp 0x11a45f94 */
  goto L_11a45f94;
L_11a45fac:;
  /* 11a45fac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a45fae:;
  /* 11a45fae ret  */
  ESPCHK(0x11a45f84u, _esp0);
  ESP += 4; return;
}

/* FUN_10005faf @ 0x11a45faf (809 bytes, 265 insns) */
void f_11a45faf(void) {
  FTRACE(0x11a45fafu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a45faf push ebp */
  push32((uint32_t)(EBP));
  /* 11a45fb0 mov ebp, esp */
  EBP = (ESP);
  /* 11a45fb2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45fb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a45fb8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a45fb9 push esi */
  push32((uint32_t)(ESI));
  /* 11a45fba mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a45fbd mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a45fc0 push edi */
  push32((uint32_t)(EDI));
  /* 11a45fc1 mov edi, esi */
  EDI = (ESI);
  /* 11a45fc3 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a45fc6 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a45fc9 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11a45fcc mov ecx, edi */
  ECX = (EDI);
  /* 11a45fce imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a45fd4 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a45fdb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a45fde mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a45fe0 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a45fe1 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11a45fe4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a45fe7 jne 0x11a462d3 */
  if (!C.zf) goto L_11a462d3;
  /* 11a45fed mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11a45ff0 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11a45ff3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a45ff6 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11a45ff9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a45ffc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a45fff test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11a46002 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11a46005 jne 0x11a46085 */
  if (!C.zf) goto L_11a46085;
  /* 11a46007 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a4600a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a4600b cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4600e jbe 0x11a46013 */
  if ((C.cf||C.zf)) goto L_11a46013;
  /* 11a46010 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a46012 pop edx */
  EDX = (pop32());
L_11a46013:;
  /* 11a46013 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a46016 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46019 jne 0x11a46067 */
  if (!C.zf) goto L_11a46067;
  /* 11a4601b cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4601e jae 0x11a4603e */
  if (!C.cf) goto L_11a4603e;
  /* 11a46020 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a46025 mov ecx, edx */
  ECX = (EDX);
  /* 11a46027 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a46029 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11a4602d not ebx */
  EBX = (~(EBX));
  /* 11a4602f and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a46033 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a46035 jne 0x11a4605f */
  if (!C.zf) goto L_11a4605f;
  /* 11a46037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a4603a and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a4603c jmp 0x11a4605f */
  goto L_11a4605f;
L_11a4603e:;
  /* 11a4603e lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11a46041 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a46046 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a46048 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11a4604c not ebx */
  EBX = (~(EBX));
  /* 11a4604e and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a46055 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a46057 jne 0x11a4605f */
  if (!C.zf) goto L_11a4605f;
  /* 11a46059 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a4605c and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a4605f:;
  /* 11a4605f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a46062 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a46065 jmp 0x11a4606a */
  goto L_11a4606a;
L_11a46067:;
  /* 11a46067 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11a4606a:;
  /* 11a4606a mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11a4606d mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a46070 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46073 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11a46076 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a46079 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a4607c mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a4607f mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a46082 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11a46085:;
  /* 11a46085 mov edx, ecx */
  EDX = (ECX);
  /* 11a46087 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a4608a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a4608b cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4608e jbe 0x11a46093 */
  if ((C.cf||C.zf)) goto L_11a46093;
  /* 11a46090 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a46092 pop edx */
  EDX = (pop32());
L_11a46093:;
  /* 11a46093 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a46096 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11a46099 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11a4609c jne 0x11a46136 */
  if (!C.zf) goto L_11a46136;
  /* 11a460a2 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a460a5 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a460a8 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11a460ab push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a460ad mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a460b0 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a460b1 pop esi */
  ESI = (pop32());
  /* 11a460b2 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a460b4 jbe 0x11a460b8 */
  if ((C.cf||C.zf)) goto L_11a460b8;
  /* 11a460b6 mov ebx, esi */
  EBX = (ESI);
L_11a460b8:;
  /* 11a460b8 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a460bb mov edx, ecx */
  EDX = (ECX);
  /* 11a460bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a460c0 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a460c3 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a460c4 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a460c6 jbe 0x11a460ca */
  if ((C.cf||C.zf)) goto L_11a460ca;
  /* 11a460c8 mov edx, esi */
  EDX = (ESI);
L_11a460ca:;
  /* 11a460ca cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a460cc je 0x11a46131 */
  if (C.zf) goto L_11a46131;
  /* 11a460ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a460d1 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11a460d4 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a460d7 jne 0x11a46119 */
  if (!C.zf) goto L_11a46119;
  /* 11a460d9 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a460dc jae 0x11a460fa */
  if (!C.cf) goto L_11a460fa;
  /* 11a460de mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a460e3 mov ecx, ebx */
  ECX = (EBX);
  /* 11a460e5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a460e7 not esi */
  ESI = (~(ESI));
  /* 11a460e9 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a460ed dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11a460f1 jne 0x11a46119 */
  if (!C.zf) goto L_11a46119;
  /* 11a460f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a460f6 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a460f8 jmp 0x11a46119 */
  goto L_11a46119;
L_11a460fa:;
  /* 11a460fa lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11a460fd mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a46102 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a46104 not esi */
  ESI = (~(ESI));
  /* 11a46106 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a4610d dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11a46111 jne 0x11a46119 */
  if (!C.zf) goto L_11a46119;
  /* 11a46113 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a46116 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a46119:;
  /* 11a46119 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a4611c mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11a4611f mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a46122 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11a46125 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a46128 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11a4612b mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a4612e mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11a46131:;
  /* 11a46131 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a46134 jmp 0x11a46139 */
  goto L_11a46139;
L_11a46136:;
  /* 11a46136 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a46139:;
  /* 11a46139 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4613d jne 0x11a46147 */
  if (!C.zf) goto L_11a46147;
  /* 11a4613f cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46141 je 0x11a461c8 */
  if (C.zf) goto L_11a461c8;
L_11a46147:;
  /* 11a46147 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a4614a mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11a4614e lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11a46151 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11a46154 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11a46157 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a4615a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a4615d mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11a46160 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a46163 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46166 jne 0x11a461c8 */
  if (!C.zf) goto L_11a461c8;
  /* 11a46168 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11a4616c cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4616f mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11a46172 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a46174 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11a46178 jae 0x11a4619f */
  if (!C.cf) goto L_11a4619f;
  /* 11a4617a cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4617e jne 0x11a4618e */
  if (!C.zf) goto L_11a4618e;
  /* 11a46180 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a46185 mov ecx, edx */
  ECX = (EDX);
  /* 11a46187 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a46189 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a4618c or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11a4618e:;
  /* 11a4618e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a46193 mov ecx, edx */
  ECX = (EDX);
  /* 11a46195 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a46197 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11a4619b or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a4619d jmp 0x11a461c8 */
  goto L_11a461c8;
L_11a4619f:;
  /* 11a4619f cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a461a3 jne 0x11a461b5 */
  if (!C.zf) goto L_11a461b5;
  /* 11a461a5 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11a461a8 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a461ad shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a461af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a461b2 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a461b5:;
  /* 11a461b5 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11a461b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a461bd shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a461bf lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11a461c6 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11a461c8:;
  /* 11a461c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a461cb mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a461cd mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11a461d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a461d4 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11a461d6 jne 0x11a462d3 */
  if (!C.zf) goto L_11a462d3;
  /* 11a461dc mov eax, dword ptr [0x11a4fd54] */
  EAX = (r32((uint32_t)(0x11a4fd54)));
  /* 11a461e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a461e3 je 0x11a462c5 */
  if (C.zf) goto L_11a462c5;
  /* 11a461e9 mov ecx, dword ptr [0x11a4fd4c] */
  ECX = (r32((uint32_t)(0x11a4fd4c)));
  /* 11a461ef mov esi, dword ptr [0x11a4a054] */
  ESI = (r32((uint32_t)(0x11a4a054)));
  /* 11a461f5 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11a461f8 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a461fb mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11a46200 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a46205 push ebx */
  push32((uint32_t)(EBX));
  /* 11a46206 push ecx */
  push32((uint32_t)(ECX));
  /* 11a46207 call esi */
  call_ind((uint32_t)(ESI), 0x11a46209u);
  /* 11a46209 mov ecx, dword ptr [0x11a4fd4c] */
  ECX = (r32((uint32_t)(0x11a4fd4c)));
  /* 11a4620f mov eax, dword ptr [0x11a4fd54] */
  EAX = (r32((uint32_t)(0x11a4fd54)));
  /* 11a46214 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a46219 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a4621b or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a4621e mov eax, dword ptr [0x11a4fd54] */
  EAX = (r32((uint32_t)(0x11a4fd54)));
  /* 11a46223 mov ecx, dword ptr [0x11a4fd4c] */
  ECX = (r32((uint32_t)(0x11a4fd4c)));
  /* 11a46229 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a4622c and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a46234 mov eax, dword ptr [0x11a4fd54] */
  EAX = (r32((uint32_t)(0x11a4fd54)));
  /* 11a46239 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a4623c dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11a4623f mov eax, dword ptr [0x11a4fd54] */
  EAX = (r32((uint32_t)(0x11a4fd54)));
  /* 11a46244 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a46247 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4624b jne 0x11a46256 */
  if (!C.zf) goto L_11a46256;
  /* 11a4624d and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a46251 mov eax, dword ptr [0x11a4fd54] */
  EAX = (r32((uint32_t)(0x11a4fd54)));
L_11a46256:;
  /* 11a46256 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4625a jne 0x11a462c5 */
  if (!C.zf) goto L_11a462c5;
  /* 11a4625c push ebx */
  push32((uint32_t)(EBX));
  /* 11a4625d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4625f push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11a46262 call esi */
  call_ind((uint32_t)(ESI), 0x11a46264u);
  /* 11a46264 mov eax, dword ptr [0x11a4fd54] */
  EAX = (r32((uint32_t)(0x11a4fd54)));
  /* 11a46269 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11a4626c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a4626e push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a46274 call dword ptr [0x11a4a084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a084))), 0x11a4627au);
  /* 11a4627a mov eax, dword ptr [0x11a4fd58] */
  EAX = (r32((uint32_t)(0x11a4fd58)));
  /* 11a4627f mov edx, dword ptr [0x11a4fd5c] */
  EDX = (r32((uint32_t)(0x11a4fd5c)));
  /* 11a46285 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a46288 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a4628b mov ecx, eax */
  ECX = (EAX);
  /* 11a4628d mov eax, dword ptr [0x11a4fd54] */
  EAX = (r32((uint32_t)(0x11a4fd54)));
  /* 11a46292 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46294 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11a46298 push ecx */
  push32((uint32_t)(ECX));
  /* 11a46299 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11a4629c push ecx */
  push32((uint32_t)(ECX));
  /* 11a4629d push eax */
  push32((uint32_t)(EAX));
  /* 11a4629e call 0x11a48360 */
  push32(0x11a462a3u); f_11a48360();
  /* 11a462a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a462a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a462a9 dec dword ptr [0x11a4fd58] */
  { uint32_t _r=(r32((uint32_t)(0x11a4fd58)))-1; w32((uint32_t)(0x11a4fd58), (_r)); fl_dec(_r,32); }
  /* 11a462af cmp eax, dword ptr [0x11a4fd54] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a4fd54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a462b5 jbe 0x11a462bb */
  if ((C.cf||C.zf)) goto L_11a462bb;
  /* 11a462b7 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11a462bb:;
  /* 11a462bb mov eax, dword ptr [0x11a4fd5c] */
  EAX = (r32((uint32_t)(0x11a4fd5c)));
  /* 11a462c0 mov dword ptr [0x11a4fd50], eax */
  w32((uint32_t)(0x11a4fd50), (EAX));
L_11a462c5:;
  /* 11a462c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a462c8 mov dword ptr [0x11a4fd4c], edi */
  w32((uint32_t)(0x11a4fd4c), (EDI));
  /* 11a462ce mov dword ptr [0x11a4fd54], eax */
  w32((uint32_t)(0x11a4fd54), (EAX));
L_11a462d3:;
  /* 11a462d3 pop edi */
  EDI = (pop32());
  /* 11a462d4 pop esi */
  ESI = (pop32());
  /* 11a462d5 pop ebx */
  EBX = (pop32());
  /* 11a462d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a462d7 ret  */
  ESPCHK(0x11a45fafu, _esp0);
  ESP += 4; return;
}

/* FUN_100062d8 @ 0x11a462d8 (777 bytes, 275 insns) */
void f_11a462d8(void) {
  FTRACE(0x11a462d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a462d8 push ebp */
  push32((uint32_t)(EBP));
  /* 11a462d9 mov ebp, esp */
  EBP = (ESP);
  /* 11a462db sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a462de mov eax, dword ptr [0x11a4fd58] */
  EAX = (r32((uint32_t)(0x11a4fd58)));
  /* 11a462e3 mov edx, dword ptr [0x11a4fd5c] */
  EDX = (r32((uint32_t)(0x11a4fd5c)));
  /* 11a462e9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a462ea push esi */
  push32((uint32_t)(ESI));
  /* 11a462eb lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a462ee push edi */
  push32((uint32_t)(EDI));
  /* 11a462ef lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11a462f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a462f5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a462f8 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11a462fb and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11a462fe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a46301 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a46304 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a46305 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46308 jge 0x11a46318 */
  if ((C.sf==C.of)) goto L_11a46318;
  /* 11a4630a or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a4630d shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a4630f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a46313 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a46316 jmp 0x11a46328 */
  goto L_11a46328;
L_11a46318:;
  /* 11a46318 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4631b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a4631e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a46320 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a46322 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a46325 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a46328:;
  /* 11a46328 mov eax, dword ptr [0x11a4fd50] */
  EAX = (r32((uint32_t)(0x11a4fd50)));
  /* 11a4632d mov ebx, eax */
  EBX = (EAX);
  /* 11a4632f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46331 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a46334 jae 0x11a4634f */
  if (!C.cf) goto L_11a4634f;
L_11a46336:;
  /* 11a46336 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a46339 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a4633b and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a4633e and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a46340 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a46342 jne 0x11a4634f */
  if (!C.zf) goto L_11a4634f;
  /* 11a46344 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46347 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4634a mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a4634d jb 0x11a46336 */
  if (C.cf) goto L_11a46336;
L_11a4634f:;
  /* 11a4634f cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46352 jne 0x11a463cd */
  if (!C.zf) goto L_11a463cd;
  /* 11a46354 mov ebx, edx */
  EBX = (EDX);
L_11a46356:;
  /* 11a46356 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46358 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a4635b jae 0x11a46372 */
  if (!C.cf) goto L_11a46372;
  /* 11a4635d mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a46360 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a46362 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a46365 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a46367 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a46369 jne 0x11a46370 */
  if (!C.zf) goto L_11a46370;
  /* 11a4636b add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4636e jmp 0x11a46356 */
  goto L_11a46356;
L_11a46370:;
  /* 11a46370 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a46372:;
  /* 11a46372 jne 0x11a463cd */
  if (!C.zf) goto L_11a463cd;
L_11a46374:;
  /* 11a46374 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46377 jae 0x11a4638a */
  if (!C.cf) goto L_11a4638a;
  /* 11a46379 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4637d jne 0x11a46387 */
  if (!C.zf) goto L_11a46387;
  /* 11a4637f add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46382 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a46385 jmp 0x11a46374 */
  goto L_11a46374;
L_11a46387:;
  /* 11a46387 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a4638a:;
  /* 11a4638a jne 0x11a463b2 */
  if (!C.zf) goto L_11a463b2;
  /* 11a4638c mov ebx, edx */
  EBX = (EDX);
L_11a4638e:;
  /* 11a4638e cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46390 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a46393 jae 0x11a463a2 */
  if (!C.cf) goto L_11a463a2;
  /* 11a46395 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46399 jne 0x11a463a0 */
  if (!C.zf) goto L_11a463a0;
  /* 11a4639b add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4639e jmp 0x11a4638e */
  goto L_11a4638e;
L_11a463a0:;
  /* 11a463a0 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a463a2:;
  /* 11a463a2 jne 0x11a463b2 */
  if (!C.zf) goto L_11a463b2;
  /* 11a463a4 call 0x11a465e1 */
  push32(0x11a463a9u); f_11a465e1();
  /* 11a463a9 mov ebx, eax */
  EBX = (EAX);
  /* 11a463ab test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a463ad mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a463b0 je 0x11a463c6 */
  if (C.zf) goto L_11a463c6;
L_11a463b2:;
  /* 11a463b2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a463b3 call 0x11a46692 */
  push32(0x11a463b8u); f_11a46692();
  /* 11a463b8 pop ecx */
  ECX = (pop32());
  /* 11a463b9 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a463bc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a463be mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a463c1 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a463c4 jne 0x11a463cd */
  if (!C.zf) goto L_11a463cd;
L_11a463c6:;
  /* 11a463c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a463c8 jmp 0x11a465dc */
  goto L_11a465dc;
L_11a463cd:;
  /* 11a463cd mov dword ptr [0x11a4fd50], ebx */
  w32((uint32_t)(0x11a4fd50), (EBX));
  /* 11a463d3 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a463d6 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a463d8 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a463db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a463de je 0x11a463f4 */
  if (C.zf) goto L_11a463f4;
  /* 11a463e0 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a463e7 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a463eb and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a463ee and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a463f0 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a463f2 jne 0x11a4642b */
  if (!C.zf) goto L_11a4642b;
L_11a463f4:;
  /* 11a463f4 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11a463fa mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11a463fd and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a46400 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11a46403 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a46407 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11a4640a or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11a4640c mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a4640f jne 0x11a46428 */
  if (!C.zf) goto L_11a46428;
L_11a46411:;
  /* 11a46411 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11a46417 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a4641a and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a4641d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46420 mov edi, esi */
  EDI = (ESI);
  /* 11a46422 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11a46424 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11a46426 je 0x11a46411 */
  if (C.zf) goto L_11a46411;
L_11a46428:;
  /* 11a46428 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11a4642b:;
  /* 11a4642b mov ecx, edx */
  ECX = (EDX);
  /* 11a4642d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a4642f imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a46435 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a4643c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a4643f mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a46443 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11a46445 jne 0x11a46454 */
  if (!C.zf) goto L_11a46454;
  /* 11a46447 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a4644e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a46450 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a46453 pop edi */
  EDI = (pop32());
L_11a46454:;
  /* 11a46454 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a46456 jl 0x11a4645d */
  if ((C.sf!=C.of)) goto L_11a4645d;
  /* 11a46458 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a4645a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a4645b jmp 0x11a46454 */
  goto L_11a46454;
L_11a4645d:;
  /* 11a4645d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a46460 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11a46464 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a46466 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46469 mov esi, ecx */
  ESI = (ECX);
  /* 11a4646b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a4646e sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a46471 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a46472 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46475 jle 0x11a4647a */
  if ((C.zf||C.sf!=C.of)) goto L_11a4647a;
  /* 11a46477 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a46479 pop esi */
  ESI = (pop32());
L_11a4647a:;
  /* 11a4647a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4647c je 0x11a4658f */
  if (C.zf) goto L_11a4658f;
  /* 11a46482 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a46485 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46488 jne 0x11a464eb */
  if (!C.zf) goto L_11a464eb;
  /* 11a4648a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4648d jge 0x11a464ba */
  if ((C.sf==C.of)) goto L_11a464ba;
  /* 11a4648f mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a46494 mov ecx, edi */
  ECX = (EDI);
  /* 11a46496 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a46498 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a4649b lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a4649f not ebx */
  EBX = (~(EBX));
  /* 11a464a1 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a464a4 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11a464a8 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11a464ac dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a464ae jne 0x11a464e8 */
  if (!C.zf) goto L_11a464e8;
  /* 11a464b0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a464b3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a464b6 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11a464b8 jmp 0x11a464eb */
  goto L_11a464eb;
L_11a464ba:;
  /* 11a464ba lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a464bd mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a464c2 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a464c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a464c7 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a464cb lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a464d2 not ebx */
  EBX = (~(EBX));
  /* 11a464d4 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a464d6 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a464d8 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a464db jne 0x11a464e8 */
  if (!C.zf) goto L_11a464e8;
  /* 11a464dd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a464e0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a464e3 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a464e6 jmp 0x11a464eb */
  goto L_11a464eb;
L_11a464e8:;
  /* 11a464e8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a464eb:;
  /* 11a464eb mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a464ee mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11a464f1 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a464f5 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11a464f8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a464fb mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11a464fe mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a46501 je 0x11a4659b */
  if (C.zf) goto L_11a4659b;
  /* 11a46507 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a4650a mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11a4650e lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11a46511 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11a46514 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a46517 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a4651a mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a4651d mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a46520 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a46523 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46526 jne 0x11a4658c */
  if (!C.zf) goto L_11a4658c;
  /* 11a46528 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11a4652c cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4652f mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11a46532 jge 0x11a4655d */
  if ((C.sf==C.of)) goto L_11a4655d;
  /* 11a46534 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a46536 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a4653a mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a4653e jne 0x11a4654b */
  if (!C.zf) goto L_11a4654b;
  /* 11a46540 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a46545 mov ecx, esi */
  ECX = (ESI);
  /* 11a46547 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a46549 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11a4654b:;
  /* 11a4654b mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a46550 mov ecx, esi */
  ECX = (ESI);
  /* 11a46552 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a46554 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a46557 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a4655b jmp 0x11a4658c */
  goto L_11a4658c;
L_11a4655d:;
  /* 11a4655d inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a4655f cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a46563 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a46567 jne 0x11a46576 */
  if (!C.zf) goto L_11a46576;
  /* 11a46569 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a4656c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a46571 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a46573 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11a46576:;
  /* 11a46576 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a46579 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a46580 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a46583 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a46588 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a4658a or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a4658c:;
  /* 11a4658c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a4658f:;
  /* 11a4658f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a46591 je 0x11a4659e */
  if (C.zf) goto L_11a4659e;
  /* 11a46593 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a46595 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11a46599 jmp 0x11a4659e */
  goto L_11a4659e;
L_11a4659b:;
  /* 11a4659b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a4659e:;
  /* 11a4659e mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11a465a1 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a465a3 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11a465a6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a465a8 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11a465ac mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a465af mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a465b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a465b3 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11a465b6 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a465b8 jne 0x11a465d4 */
  if (!C.zf) goto L_11a465d4;
  /* 11a465ba cmp ebx, dword ptr [0x11a4fd54] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a4fd54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a465c0 jne 0x11a465d4 */
  if (!C.zf) goto L_11a465d4;
  /* 11a465c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a465c5 cmp ecx, dword ptr [0x11a4fd4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a4fd4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a465cb jne 0x11a465d4 */
  if (!C.zf) goto L_11a465d4;
  /* 11a465cd and dword ptr [0x11a4fd54], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a4fd54)))&(0x0u); w32((uint32_t)(0x11a4fd54), (_r)); fl_logic(_r,32); }
L_11a465d4:;
  /* 11a465d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a465d7 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a465d9 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11a465dc:;
  /* 11a465dc pop edi */
  EDI = (pop32());
  /* 11a465dd pop esi */
  ESI = (pop32());
  /* 11a465de pop ebx */
  EBX = (pop32());
  /* 11a465df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a465e0 ret  */
  ESPCHK(0x11a462d8u, _esp0);
  ESP += 4; return;
}

/* FUN_100065e1 @ 0x11a465e1 (177 bytes, 53 insns) */
void f_11a465e1(void) {
  FTRACE(0x11a465e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a465e1 mov eax, dword ptr [0x11a4fd58] */
  EAX = (r32((uint32_t)(0x11a4fd58)));
  /* 11a465e6 mov ecx, dword ptr [0x11a4fd48] */
  ECX = (r32((uint32_t)(0x11a4fd48)));
  /* 11a465ec push esi */
  push32((uint32_t)(ESI));
  /* 11a465ed push edi */
  push32((uint32_t)(EDI));
  /* 11a465ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a465f0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a465f2 jne 0x11a46624 */
  if (!C.zf) goto L_11a46624;
  /* 11a465f4 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11a465f8 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a465fb push eax */
  push32((uint32_t)(EAX));
  /* 11a465fc push dword ptr [0x11a4fd5c] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd5c))));
  /* 11a46602 push edi */
  push32((uint32_t)(EDI));
  /* 11a46603 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a46609 call dword ptr [0x11a4a04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a04c))), 0x11a4660fu);
  /* 11a4660f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46611 je 0x11a46674 */
  if (C.zf) goto L_11a46674;
  /* 11a46613 add dword ptr [0x11a4fd48], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11a4fd48))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11a4fd48), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a4661a mov dword ptr [0x11a4fd5c], eax */
  w32((uint32_t)(0x11a4fd5c), (EAX));
  /* 11a4661f mov eax, dword ptr [0x11a4fd58] */
  EAX = (r32((uint32_t)(0x11a4fd58)));
L_11a46624:;
  /* 11a46624 mov ecx, dword ptr [0x11a4fd5c] */
  ECX = (r32((uint32_t)(0x11a4fd5c)));
  /* 11a4662a push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11a4662f push 8 */
  push32((uint32_t)(0x8u));
  /* 11a46631 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a46634 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a4663a lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a4663d call dword ptr [0x11a4a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a09c))), 0x11a46643u);
  /* 11a46643 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46645 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11a46648 je 0x11a46674 */
  if (C.zf) goto L_11a46674;
  /* 11a4664a push 4 */
  push32((uint32_t)(0x4u));
  /* 11a4664c push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a46651 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a46656 push edi */
  push32((uint32_t)(EDI));
  /* 11a46657 call dword ptr [0x11a4a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a058))), 0x11a4665du);
  /* 11a4665d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4665f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a46662 jne 0x11a46678 */
  if (!C.zf) goto L_11a46678;
  /* 11a46664 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a46667 push edi */
  push32((uint32_t)(EDI));
  /* 11a46668 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a4666e call dword ptr [0x11a4a084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a084))), 0x11a46674u);
L_11a46674:;
  /* 11a46674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a46676 jmp 0x11a4668f */
  goto L_11a4668f;
L_11a46678:;
  /* 11a46678 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a4667c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a4667e mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11a46681 inc dword ptr [0x11a4fd58] */
  { uint32_t _r=(r32((uint32_t)(0x11a4fd58)))+1; w32((uint32_t)(0x11a4fd58), (_r)); fl_inc(_r,32); }
  /* 11a46687 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a4668a or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a4668d mov eax, esi */
  EAX = (ESI);
L_11a4668f:;
  /* 11a4668f pop edi */
  EDI = (pop32());
  /* 11a46690 pop esi */
  ESI = (pop32());
  /* 11a46691 ret  */
  ESPCHK(0x11a465e1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006692 @ 0x11a46692 (251 bytes, 85 insns) */
void f_11a46692(void) {
  FTRACE(0x11a46692u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46692 push ebp */
  push32((uint32_t)(EBP));
  /* 11a46693 mov ebp, esp */
  EBP = (ESP);
  /* 11a46695 push ecx */
  push32((uint32_t)(ECX));
  /* 11a46696 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a46699 push ebx */
  push32((uint32_t)(EBX));
  /* 11a4669a push esi */
  push32((uint32_t)(ESI));
  /* 11a4669b push edi */
  push32((uint32_t)(EDI));
  /* 11a4669c mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11a4669f mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a466a2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a466a4:;
  /* 11a466a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a466a6 jl 0x11a466ad */
  if ((C.sf!=C.of)) goto L_11a466ad;
  /* 11a466a8 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a466aa inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a466ab jmp 0x11a466a4 */
  goto L_11a466a4;
L_11a466ad:;
  /* 11a466ad mov eax, ebx */
  EAX = (EBX);
  /* 11a466af push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a466b1 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a466b7 pop edx */
  EDX = (pop32());
  /* 11a466b8 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11a466bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a466c2:;
  /* 11a466c2 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11a466c5 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11a466c8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a466cb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a466cc jne 0x11a466c2 */
  if (!C.zf) goto L_11a466c2;
  /* 11a466ce mov edi, ebx */
  EDI = (EBX);
  /* 11a466d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a466d2 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11a466d5 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a466d8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a466dd push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a466e2 push edi */
  push32((uint32_t)(EDI));
  /* 11a466e3 call dword ptr [0x11a4a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a058))), 0x11a466e9u);
  /* 11a466e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a466eb jne 0x11a466f5 */
  if (!C.zf) goto L_11a466f5;
  /* 11a466ed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a466f0 jmp 0x11a46788 */
  goto L_11a46788;
L_11a466f5:;
  /* 11a466f5 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11a466fb cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a466fd ja 0x11a4673b */
  if ((!C.cf&&!C.zf)) goto L_11a4673b;
  /* 11a466ff lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11a46702:;
  /* 11a46702 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a46706 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11a4670d lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11a46713 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11a4671a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a4671c lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11a46722 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a46725 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11a4672f add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46734 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11a46737 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46739 jbe 0x11a46702 */
  if ((C.cf||C.zf)) goto L_11a46702;
L_11a4673b:;
  /* 11a4673b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a4673e lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11a46741 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46746 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a46748 pop edi */
  EDI = (pop32());
  /* 11a46749 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a4674c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a4674f lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11a46752 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11a46755 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a46758 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a4675d mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11a46764 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11a46767 mov cl, al */
  CL = (AL);
  /* 11a46769 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a4676b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a4676d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a46770 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11a46773 jne 0x11a46778 */
  if (!C.zf) goto L_11a46778;
  /* 11a46775 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11a46778:;
  /* 11a46778 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a4677d mov ecx, ebx */
  ECX = (EBX);
  /* 11a4677f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a46781 not edx */
  EDX = (~(EDX));
  /* 11a46783 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a46786 mov eax, ebx */
  EAX = (EBX);
L_11a46788:;
  /* 11a46788 pop edi */
  EDI = (pop32());
  /* 11a46789 pop esi */
  ESI = (pop32());
  /* 11a4678a pop ebx */
  EBX = (pop32());
  /* 11a4678b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a4678c ret  */
  ESPCHK(0x11a46692u, _esp0);
  ESP += 4; return;
}

/* FUN_1000678d @ 0x11a4678d (324 bytes, 102 insns) */
void f_11a4678d(void) {
  FTRACE(0x11a4678du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a4678d cmp dword ptr [0x11a4bbe8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11a4bbe8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46794 push ebx */
  push32((uint32_t)(EBX));
  /* 11a46795 push ebp */
  push32((uint32_t)(EBP));
  /* 11a46796 push esi */
  push32((uint32_t)(ESI));
  /* 11a46797 push edi */
  push32((uint32_t)(EDI));
  /* 11a46798 jne 0x11a467a1 */
  if (!C.zf) goto L_11a467a1;
  /* 11a4679a mov esi, 0x11a4bbd8 */
  ESI = (0x11a4bbd8u);
  /* 11a4679f jmp 0x11a467be */
  goto L_11a467be;
L_11a467a1:;
  /* 11a467a1 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11a467a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a467a8 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a467ae call dword ptr [0x11a4a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a09c))), 0x11a467b4u);
  /* 11a467b4 mov esi, eax */
  ESI = (EAX);
  /* 11a467b6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a467b8 je 0x11a468ca */
  if (C.zf) goto L_11a468ca;
L_11a467be:;
  /* 11a467be mov ebp, dword ptr [0x11a4a058] */
  EBP = (r32((uint32_t)(0x11a4a058)));
  /* 11a467c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a467c6 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a467cb push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11a467d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a467d2 call ebp */
  call_ind((uint32_t)(EBP), 0x11a467d4u);
  /* 11a467d4 mov edi, eax */
  EDI = (EAX);
  /* 11a467d6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a467d8 je 0x11a468b3 */
  if (C.zf) goto L_11a468b3;
  /* 11a467de push 4 */
  push32((uint32_t)(0x4u));
  /* 11a467e0 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11a467e5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a467ea push ebx */
  push32((uint32_t)(EBX));
  /* 11a467eb push edi */
  push32((uint32_t)(EDI));
  /* 11a467ec call ebp */
  call_ind((uint32_t)(EBP), 0x11a467eeu);
  /* 11a467ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a467f0 je 0x11a468a5 */
  if (C.zf) goto L_11a468a5;
  /* 11a467f6 mov eax, 0x11a4bbd8 */
  EAX = (0x11a4bbd8u);
  /* 11a467fb cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a467fd jne 0x11a4681d */
  if (!C.zf) goto L_11a4681d;
  /* 11a467ff cmp dword ptr [0x11a4bbd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a4bbd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46806 jne 0x11a4680d */
  if (!C.zf) goto L_11a4680d;
  /* 11a46808 mov dword ptr [0x11a4bbd8], eax */
  w32((uint32_t)(0x11a4bbd8), (EAX));
L_11a4680d:;
  /* 11a4680d cmp dword ptr [0x11a4bbdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a4bbdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46814 jne 0x11a46832 */
  if (!C.zf) goto L_11a46832;
  /* 11a46816 mov dword ptr [0x11a4bbdc], eax */
  w32((uint32_t)(0x11a4bbdc), (EAX));
  /* 11a4681b jmp 0x11a46832 */
  goto L_11a46832;
L_11a4681d:;
  /* 11a4681d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a4681f mov eax, dword ptr [0x11a4bbdc] */
  EAX = (r32((uint32_t)(0x11a4bbdc)));
  /* 11a46824 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11a46827 mov dword ptr [0x11a4bbdc], esi */
  w32((uint32_t)(0x11a4bbdc), (ESI));
  /* 11a4682d mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a46830 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11a46832:;
  /* 11a46832 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11a46838 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11a4683e mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11a46841 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11a46844 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11a46847 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11a4684a mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11a4684d xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11a4684f mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11a46854:;
  /* 11a46854 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a46856 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46859 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11a4685c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a4685d and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a4685f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a46860 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a46861 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a46863 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a46866 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46869 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4686f jl 0x11a46854 */
  if ((C.sf!=C.of)) goto L_11a46854;
  /* 11a46871 push ebx */
  push32((uint32_t)(EBX));
  /* 11a46872 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a46874 push edi */
  push32((uint32_t)(EDI));
  /* 11a46875 call 0x11a486a0 */
  push32(0x11a4687au); f_11a486a0();
  /* 11a4687a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a4687d:;
  /* 11a4687d mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a46880 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46882 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46884 jae 0x11a468a1 */
  if (!C.cf) goto L_11a468a1;
  /* 11a46886 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11a4688d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11a46890 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a46892 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11a46899 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4689f jmp 0x11a4687d */
  goto L_11a4687d;
L_11a468a1:;
  /* 11a468a1 mov eax, esi */
  EAX = (ESI);
  /* 11a468a3 jmp 0x11a468cc */
  goto L_11a468cc;
L_11a468a5:;
  /* 11a468a5 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a468aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a468ac push edi */
  push32((uint32_t)(EDI));
  /* 11a468ad call dword ptr [0x11a4a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a054))), 0x11a468b3u);
L_11a468b3:;
  /* 11a468b3 cmp esi, 0x11a4bbd8 */
  { uint32_t _a=(ESI),_b=(0x11a4bbd8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a468b9 je 0x11a468ca */
  if (C.zf) goto L_11a468ca;
  /* 11a468bb push esi */
  push32((uint32_t)(ESI));
  /* 11a468bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a468be push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a468c4 call dword ptr [0x11a4a084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a084))), 0x11a468cau);
L_11a468ca:;
  /* 11a468ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a468cc:;
  /* 11a468cc pop edi */
  EDI = (pop32());
  /* 11a468cd pop esi */
  ESI = (pop32());
  /* 11a468ce pop ebp */
  EBP = (pop32());
  /* 11a468cf pop ebx */
  EBX = (pop32());
  /* 11a468d0 ret  */
  ESPCHK(0x11a4678du, _esp0);
  ESP += 4; return;
}

/* FUN_100068d1 @ 0x11a468d1 (86 bytes, 27 insns) */
void f_11a468d1(void) {
  FTRACE(0x11a468d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a468d1 push esi */
  push32((uint32_t)(ESI));
  /* 11a468d2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a468d6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a468db push 0 */
  push32((uint32_t)(0x0u));
  /* 11a468dd push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a468e0 call dword ptr [0x11a4a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a054))), 0x11a468e6u);
  /* 11a468e6 cmp dword ptr [0x11a4dbf8], esi */
  { uint32_t _a=(r32((uint32_t)(0x11a4dbf8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a468ec jne 0x11a468f6 */
  if (!C.zf) goto L_11a468f6;
  /* 11a468ee mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a468f1 mov dword ptr [0x11a4dbf8], eax */
  w32((uint32_t)(0x11a4dbf8), (EAX));
L_11a468f6:;
  /* 11a468f6 cmp esi, 0x11a4bbd8 */
  { uint32_t _a=(ESI),_b=(0x11a4bbd8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a468fc je 0x11a4691e */
  if (C.zf) goto L_11a4691e;
  /* 11a468fe mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a46901 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a46903 push esi */
  push32((uint32_t)(ESI));
  /* 11a46904 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a46906 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a46908 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a4690a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a4690d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a46910 push dword ptr [0x11a4fd64] */
  push32((uint32_t)(r32((uint32_t)(0x11a4fd64))));
  /* 11a46916 call dword ptr [0x11a4a084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a084))), 0x11a4691cu);
  /* 11a4691c pop esi */
  ESI = (pop32());
  /* 11a4691d ret  */
  ESPCHK(0x11a468d1u, _esp0);
  ESP += 4; return;
L_11a4691e:;
  /* 11a4691e or dword ptr [0x11a4bbe8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a4bbe8)))|(0xffffffffu); w32((uint32_t)(0x11a4bbe8), (_r)); fl_logic(_r,32); }
  /* 11a46925 pop esi */
  ESI = (pop32());
  /* 11a46926 ret  */
  ESPCHK(0x11a468d1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006927 @ 0x11a46927 (194 bytes, 66 insns) */
void f_11a46927(void) {
  FTRACE(0x11a46927u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46927 push ebp */
  push32((uint32_t)(EBP));
  /* 11a46928 mov ebp, esp */
  EBP = (ESP);
  /* 11a4692a push ecx */
  push32((uint32_t)(ECX));
  /* 11a4692b push ebx */
  push32((uint32_t)(EBX));
  /* 11a4692c push esi */
  push32((uint32_t)(ESI));
  /* 11a4692d mov esi, dword ptr [0x11a4bbdc] */
  ESI = (r32((uint32_t)(0x11a4bbdc)));
  /* 11a46933 push edi */
  push32((uint32_t)(EDI));
L_11a46934:;
  /* 11a46934 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46938 je 0x11a469d2 */
  if (C.zf) goto L_11a469d2;
  /* 11a4693e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a46942 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11a46948 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11a4694d:;
  /* 11a4694d cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46953 jne 0x11a4698e */
  if (!C.zf) goto L_11a4698e;
  /* 11a46955 mov eax, ebx */
  EAX = (EBX);
  /* 11a46957 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a4695c add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a4695f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a46964 push eax */
  push32((uint32_t)(EAX));
  /* 11a46965 call dword ptr [0x11a4a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a054))), 0x11a4696bu);
  /* 11a4696b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4696d je 0x11a4698e */
  if (C.zf) goto L_11a4698e;
  /* 11a4696f or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11a46972 dec dword ptr [0x11a4f928] */
  { uint32_t _r=(r32((uint32_t)(0x11a4f928)))-1; w32((uint32_t)(0x11a4f928), (_r)); fl_dec(_r,32); }
  /* 11a46978 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a4697b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a4697d je 0x11a46983 */
  if (C.zf) goto L_11a46983;
  /* 11a4697f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46981 jbe 0x11a46986 */
  if ((C.cf||C.zf)) goto L_11a46986;
L_11a46983:;
  /* 11a46983 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11a46986:;
  /* 11a46986 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a46989 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11a4698c je 0x11a4699b */
  if (C.zf) goto L_11a4699b;
L_11a4698e:;
  /* 11a4698e sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46994 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46997 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a46999 jge 0x11a4694d */
  if ((C.sf==C.of)) goto L_11a4694d;
L_11a4699b:;
  /* 11a4699b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a4699f mov ecx, esi */
  ECX = (ESI);
  /* 11a469a1 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11a469a4 je 0x11a469d2 */
  if (C.zf) goto L_11a469d2;
  /* 11a469a6 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a469aa jne 0x11a469d2 */
  if (!C.zf) goto L_11a469d2;
  /* 11a469ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11a469ae lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11a469b1 pop edx */
  EDX = (pop32());
L_11a469b2:;
  /* 11a469b2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a469b5 jne 0x11a469c3 */
  if (!C.zf) goto L_11a469c3;
  /* 11a469b7 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a469b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a469bb cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a469c1 jl 0x11a469b2 */
  if ((C.sf!=C.of)) goto L_11a469b2;
L_11a469c3:;
  /* 11a469c3 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a469c9 jne 0x11a469d2 */
  if (!C.zf) goto L_11a469d2;
  /* 11a469cb push ecx */
  push32((uint32_t)(ECX));
  /* 11a469cc call 0x11a468d1 */
  push32(0x11a469d1u); f_11a468d1();
  /* 11a469d1 pop ecx */
  ECX = (pop32());
L_11a469d2:;
  /* 11a469d2 cmp esi, dword ptr [0x11a4bbdc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4bbdc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a469d8 je 0x11a469e4 */
  if (C.zf) goto L_11a469e4;
  /* 11a469da cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a469de jg 0x11a46934 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a46934;
L_11a469e4:;
  /* 11a469e4 pop edi */
  EDI = (pop32());
  /* 11a469e5 pop esi */
  ESI = (pop32());
  /* 11a469e6 pop ebx */
  EBX = (pop32());
  /* 11a469e7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a469e8 ret  */
  ESPCHK(0x11a46927u, _esp0);
  ESP += 4; return;
}

/* FUN_100069e9 @ 0x11a469e9 (87 bytes, 34 insns) */
void f_11a469e9(void) {
  FTRACE(0x11a469e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a469e9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a469ed mov edx, 0x11a4bbd8 */
  EDX = (0x11a4bbd8u);
  /* 11a469f2 push esi */
  push32((uint32_t)(ESI));
  /* 11a469f3 mov ecx, edx */
  ECX = (EDX);
L_11a469f5:;
  /* 11a469f5 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a469f8 jbe 0x11a469ff */
  if ((C.cf||C.zf)) goto L_11a469ff;
  /* 11a469fa cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a469fd jb 0x11a46a07 */
  if (C.cf) goto L_11a46a07;
L_11a469ff:;
  /* 11a469ff mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11a46a01 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46a03 je 0x11a46a3c */
  if (C.zf) goto L_11a46a3c;
  /* 11a46a05 jmp 0x11a469f5 */
  goto L_11a469f5;
L_11a46a07:;
  /* 11a46a07 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11a46a09 jne 0x11a46a3c */
  if (!C.zf) goto L_11a46a3c;
  /* 11a46a0b mov esi, eax */
  ESI = (EAX);
  /* 11a46a0d mov edx, 0x100 */
  EDX = (0x100u);
  /* 11a46a12 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a46a18 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46a1a jb 0x11a46a3c */
  if (C.cf) goto L_11a46a3c;
  /* 11a46a1c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11a46a20 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a46a22 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a46a26 mov ecx, eax */
  ECX = (EAX);
  /* 11a46a28 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11a46a2d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46a2f mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a46a31 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46a33 pop esi */
  ESI = (pop32());
  /* 11a46a34 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a46a37 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11a46a3b ret  */
  ESPCHK(0x11a469e9u, _esp0);
  ESP += 4; return;
L_11a46a3c:;
  /* 11a46a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a46a3e pop esi */
  ESI = (pop32());
  /* 11a46a3f ret  */
  ESPCHK(0x11a469e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x11a46a40 (69 bytes, 19 insns) */
void f_11a46a40(void) {
  FTRACE(0x11a46a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46a40 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a46a44 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a46a48 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46a4b sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 11a46a4e lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 11a46a52 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a46a56 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a46a59 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a46a5b and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 11a46a5e cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46a64 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 11a46a6b jne 0x11a46a84 */
  if (!C.zf) goto L_11a46a84;
  /* 11a46a6d inc dword ptr [0x11a4f928] */
  { uint32_t _r=(r32((uint32_t)(0x11a4f928)))+1; w32((uint32_t)(0x11a4f928), (_r)); fl_inc(_r,32); }
  /* 11a46a73 cmp dword ptr [0x11a4f928], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a4f928))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46a7a jne 0x11a46a84 */
  if (!C.zf) goto L_11a46a84;
  /* 11a46a7c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a46a7e call 0x11a46927 */
  push32(0x11a46a83u); f_11a46927();
  /* 11a46a83 pop ecx */
  ECX = (pop32());
L_11a46a84:;
  /* 11a46a84 ret  */
  ESPCHK(0x11a46a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a85 @ 0x11a46a85 (520 bytes, 180 insns) */
void f_11a46a85(void) {
  FTRACE(0x11a46a85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46a85 push ebp */
  push32((uint32_t)(EBP));
  /* 11a46a86 mov ebp, esp */
  EBP = (ESP);
  /* 11a46a88 push ecx */
  push32((uint32_t)(ECX));
  /* 11a46a89 push ecx */
  push32((uint32_t)(ECX));
  /* 11a46a8a push ebx */
  push32((uint32_t)(EBX));
  /* 11a46a8b push esi */
  push32((uint32_t)(ESI));
  /* 11a46a8c mov esi, dword ptr [0x11a4dbf8] */
  ESI = (r32((uint32_t)(0x11a4dbf8)));
  /* 11a46a92 push edi */
  push32((uint32_t)(EDI));
L_11a46a93:;
  /* 11a46a93 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a46a96 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46a99 je 0x11a46b3e */
  if (C.zf) goto L_11a46b3e;
  /* 11a46a9f mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11a46aa2 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11a46aa8 mov eax, edi */
  EAX = (EDI);
  /* 11a46aaa sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46aac sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46aaf sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a46ab2 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11a46ab5 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46ab7 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46ab9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a46abc jae 0x11a46af8 */
  if (!C.cf) goto L_11a46af8;
L_11a46abe:;
  /* 11a46abe mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11a46ac0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a46ac3 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46ac5 jl 0x11a46ae1 */
  if ((C.sf!=C.of)) goto L_11a46ae1;
  /* 11a46ac7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46aca jbe 0x11a46ae1 */
  if ((C.cf||C.zf)) goto L_11a46ae1;
  /* 11a46acc push ebx */
  push32((uint32_t)(EBX));
  /* 11a46acd push ecx */
  push32((uint32_t)(ECX));
  /* 11a46ace push eax */
  push32((uint32_t)(EAX));
  /* 11a46acf call 0x11a46c8d */
  push32(0x11a46ad4u); f_11a46c8d();
  /* 11a46ad4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a46ad9 jne 0x11a46b50 */
  if (!C.zf) goto L_11a46b50;
  /* 11a46adb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a46ade mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11a46ae1:;
  /* 11a46ae1 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46ae4 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11a46aea add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46aef cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46af1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a46af4 jb 0x11a46abe */
  if (C.cf) goto L_11a46abe;
  /* 11a46af6 jmp 0x11a46afb */
  goto L_11a46afb;
L_11a46af8:;
  /* 11a46af8 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a46afb:;
  /* 11a46afb mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a46afe mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a46b01 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11a46b04 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a46b07 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46b09 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a46b0c jae 0x11a46b41 */
  if (!C.cf) goto L_11a46b41;
L_11a46b0e:;
  /* 11a46b0e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a46b10 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46b12 jl 0x11a46b2d */
  if ((C.sf!=C.of)) goto L_11a46b2d;
  /* 11a46b14 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46b17 jbe 0x11a46b2d */
  if ((C.cf||C.zf)) goto L_11a46b2d;
  /* 11a46b19 push ebx */
  push32((uint32_t)(EBX));
  /* 11a46b1a push eax */
  push32((uint32_t)(EAX));
  /* 11a46b1b push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11a46b1e call 0x11a46c8d */
  push32(0x11a46b23u); f_11a46c8d();
  /* 11a46b23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a46b28 jne 0x11a46b50 */
  if (!C.zf) goto L_11a46b50;
  /* 11a46b2a mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11a46b2d:;
  /* 11a46b2d add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a46b34 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46b37 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46b3a jb 0x11a46b0e */
  if (C.cf) goto L_11a46b0e;
  /* 11a46b3c jmp 0x11a46b41 */
  goto L_11a46b41;
L_11a46b3e:;
  /* 11a46b3e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a46b41:;
  /* 11a46b41 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11a46b43 cmp esi, dword ptr [0x11a4dbf8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a4dbf8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46b49 je 0x11a46b60 */
  if (C.zf) goto L_11a46b60;
  /* 11a46b4b jmp 0x11a46a93 */
  goto L_11a46a93;
L_11a46b50:;
  /* 11a46b50 mov dword ptr [0x11a4dbf8], esi */
  w32((uint32_t)(0x11a4dbf8), (ESI));
  /* 11a46b56 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a46b58 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11a46b5b jmp 0x11a46c88 */
  goto L_11a46c88;
L_11a46b60:;
  /* 11a46b60 mov eax, 0x11a4bbd8 */
  EAX = (0x11a4bbd8u);
  /* 11a46b65 mov edi, eax */
  EDI = (EAX);
L_11a46b67:;
  /* 11a46b67 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46b6b je 0x11a46b73 */
  if (C.zf) goto L_11a46b73;
  /* 11a46b6d cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46b71 jne 0x11a46b7f */
  if (!C.zf) goto L_11a46b7f;
L_11a46b73:;
  /* 11a46b73 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11a46b75 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46b77 je 0x11a46c54 */
  if (C.zf) goto L_11a46c54;
  /* 11a46b7d jmp 0x11a46b67 */
  goto L_11a46b67;
L_11a46b7f:;
  /* 11a46b7f mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11a46b82 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a46b86 mov esi, ebx */
  ESI = (EBX);
  /* 11a46b88 mov eax, ebx */
  EAX = (EBX);
  /* 11a46b8a sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46b8c sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46b8f sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a46b92 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11a46b95 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46b98 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46b9b jne 0x11a46bae */
  if (!C.zf) goto L_11a46bae;
L_11a46b9d:;
  /* 11a46b9d cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46ba1 jge 0x11a46bae */
  if ((C.sf==C.of)) goto L_11a46bae;
  /* 11a46ba3 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46ba6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a46ba9 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46bac je 0x11a46b9d */
  if (C.zf) goto L_11a46b9d;
L_11a46bae:;
  /* 11a46bae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a46bb1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a46bb3 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11a46bb6 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a46bbb push eax */
  push32((uint32_t)(EAX));
  /* 11a46bbc push esi */
  push32((uint32_t)(ESI));
  /* 11a46bbd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a46bc0 call dword ptr [0x11a4a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a058))), 0x11a46bc6u);
  /* 11a46bc6 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46bc8 jne 0x11a46c86 */
  if (!C.zf) goto L_11a46c86;
  /* 11a46bce push 0 */
  push32((uint32_t)(0x0u));
  /* 11a46bd0 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11a46bd3 push esi */
  push32((uint32_t)(ESI));
  /* 11a46bd4 call 0x11a486a0 */
  push32(0x11a46bd9u); f_11a486a0();
  /* 11a46bd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a46bdc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46bdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a46be1 mov ecx, ebx */
  ECX = (EBX);
  /* 11a46be3 jle 0x11a46c15 */
  if ((C.zf||C.sf!=C.of)) goto L_11a46c15;
  /* 11a46be5 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11a46be8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a46beb:;
  /* 11a46beb or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11a46bf2 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11a46bf5 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11a46bf8 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11a46bfd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a46bff mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a46c01 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11a46c08 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46c0d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46c10 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11a46c13 jne 0x11a46beb */
  if (!C.zf) goto L_11a46beb;
L_11a46c15:;
  /* 11a46c15 mov dword ptr [0x11a4dbf8], edi */
  w32((uint32_t)(0x11a4dbf8), (EDI));
  /* 11a46c1b lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11a46c21:;
  /* 11a46c21 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46c23 jae 0x11a46c31 */
  if (!C.cf) goto L_11a46c31;
  /* 11a46c25 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46c28 je 0x11a46c2f */
  if (C.zf) goto L_11a46c2f;
  /* 11a46c2a add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46c2d jmp 0x11a46c21 */
  goto L_11a46c21;
L_11a46c2f:;
  /* 11a46c2f cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a46c31:;
  /* 11a46c31 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46c33 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a46c35 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11a46c38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a46c3b mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11a46c3e mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11a46c41 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a46c43 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a46c46 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11a46c4a lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11a46c50 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a46c52 jmp 0x11a46c88 */
  goto L_11a46c88;
L_11a46c54:;
  /* 11a46c54 call 0x11a4678d */
  push32(0x11a46c59u); f_11a4678d();
  /* 11a46c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a46c5b je 0x11a46c86 */
  if (C.zf) goto L_11a46c86;
  /* 11a46c5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a46c60 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11a46c63 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11a46c67 mov dword ptr [0x11a4dbf8], eax */
  w32((uint32_t)(0x11a4dbf8), (EAX));
  /* 11a46c6c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a46c6e mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11a46c73 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46c75 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a46c78 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11a46c7b sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a46c7e lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11a46c84 jmp 0x11a46c88 */
  goto L_11a46c88;
L_11a46c86:;
  /* 11a46c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a46c88:;
  /* 11a46c88 pop edi */
  EDI = (pop32());
  /* 11a46c89 pop esi */
  ESI = (pop32());
  /* 11a46c8a pop ebx */
  EBX = (pop32());
  /* 11a46c8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a46c8c ret  */
  ESPCHK(0x11a46a85u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c8d @ 0x11a46c8d (292 bytes, 125 insns) */
void f_11a46c8d(void) {
  FTRACE(0x11a46c8du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46c8d push ebp */
  push32((uint32_t)(EBP));
  /* 11a46c8e mov ebp, esp */
  EBP = (ESP);
  /* 11a46c90 push ecx */
  push32((uint32_t)(ECX));
  /* 11a46c91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a46c94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a46c97 push ebx */
  push32((uint32_t)(EBX));
  /* 11a46c98 push esi */
  push32((uint32_t)(ESI));
  /* 11a46c99 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11a46c9c push edi */
  push32((uint32_t)(EDI));
  /* 11a46c9d mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11a46c9f lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11a46ca5 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46ca7 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a46caa mov eax, edi */
  EAX = (EDI);
  /* 11a46cac mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a46caf jb 0x11a46cd2 */
  if (C.cf) goto L_11a46cd2;
  /* 11a46cb1 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11a46cb4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a46cb6 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46cb8 jae 0x11a46cc1 */
  if (!C.cf) goto L_11a46cc1;
  /* 11a46cba add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a46cbc sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a46cbf jmp 0x11a46cca */
  goto L_11a46cca;
L_11a46cc1:;
  /* 11a46cc1 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a46cc5 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11a46cc8 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a46cca:;
  /* 11a46cca lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11a46ccd jmp 0x11a46da0 */
  goto L_11a46da0;
L_11a46cd2:;
  /* 11a46cd2 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46cd4 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a46cd7 je 0x11a46cdb */
  if (C.zf) goto L_11a46cdb;
  /* 11a46cd9 mov eax, esi */
  EAX = (ESI);
L_11a46cdb:;
  /* 11a46cdb lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11a46cde cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46ce0 jae 0x11a46d25 */
  if (!C.cf) goto L_11a46d25;
L_11a46ce2:;
  /* 11a46ce2 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a46ce4 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11a46ce6 jne 0x11a46d18 */
  if (!C.zf) goto L_11a46d18;
  /* 11a46ce8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a46cea lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11a46ced pop esi */
  ESI = (pop32());
L_11a46cee:;
  /* 11a46cee cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a46cf1 jne 0x11a46cf7 */
  if (!C.zf) goto L_11a46cf7;
  /* 11a46cf3 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a46cf4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a46cf5 jmp 0x11a46cee */
  goto L_11a46cee;
L_11a46cf7:;
  /* 11a46cf7 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46cf9 jae 0x11a46d49 */
  if (!C.cf) goto L_11a46d49;
  /* 11a46cfb cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46cfe jne 0x11a46d05 */
  if (!C.zf) goto L_11a46d05;
  /* 11a46d00 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a46d03 jmp 0x11a46d11 */
  goto L_11a46d11;
L_11a46d05:;
  /* 11a46d05 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a46d08 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46d0b jb 0x11a46daa */
  if (C.cf) goto L_11a46daa;
L_11a46d11:;
  /* 11a46d11 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11a46d14 mov eax, ebx */
  EAX = (EBX);
  /* 11a46d16 jmp 0x11a46d1d */
  goto L_11a46d1d;
L_11a46d18:;
  /* 11a46d18 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11a46d1b add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a46d1d:;
  /* 11a46d1d lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11a46d20 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46d23 jb 0x11a46ce2 */
  if (C.cf) goto L_11a46ce2;
L_11a46d25:;
  /* 11a46d25 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11a46d28:;
  /* 11a46d28 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46d2a jae 0x11a46daa */
  if (!C.cf) goto L_11a46daa;
  /* 11a46d2c lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11a46d2f cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46d32 jae 0x11a46daa */
  if (!C.cf) goto L_11a46daa;
  /* 11a46d34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a46d36 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a46d38 jne 0x11a46d7a */
  if (!C.zf) goto L_11a46d7a;
  /* 11a46d3a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a46d3c lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11a46d3f pop eax */
  EAX = (pop32());
L_11a46d40:;
  /* 11a46d40 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a46d43 jne 0x11a46d6a */
  if (!C.zf) goto L_11a46d6a;
  /* 11a46d45 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a46d46 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a46d47 jmp 0x11a46d40 */
  goto L_11a46d40;
L_11a46d49:;
  /* 11a46d49 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11a46d4c cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46d4f jae 0x11a46d5a */
  if (!C.cf) goto L_11a46d5a;
  /* 11a46d51 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46d53 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11a46d55 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a46d58 jmp 0x11a46d63 */
  goto L_11a46d63;
L_11a46d5a:;
  /* 11a46d5a and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a46d5e lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11a46d61 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11a46d63:;
  /* 11a46d63 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a46d65 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46d68 jmp 0x11a46da0 */
  goto L_11a46da0;
L_11a46d6a:;
  /* 11a46d6a cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46d6c jae 0x11a46d81 */
  if (!C.cf) goto L_11a46d81;
  /* 11a46d6e sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a46d71 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46d74 jb 0x11a46daa */
  if (C.cf) goto L_11a46daa;
  /* 11a46d76 mov esi, ebx */
  ESI = (EBX);
  /* 11a46d78 jmp 0x11a46d28 */
  goto L_11a46d28;
L_11a46d7a:;
  /* 11a46d7a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a46d7d add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46d7f jmp 0x11a46d28 */
  goto L_11a46d28;
L_11a46d81:;
  /* 11a46d81 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11a46d84 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46d87 jae 0x11a46d92 */
  if (!C.cf) goto L_11a46d92;
  /* 11a46d89 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46d8b mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11a46d8d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a46d90 jmp 0x11a46d9b */
  goto L_11a46d9b;
L_11a46d92:;
  /* 11a46d92 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a46d96 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11a46d99 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a46d9b:;
  /* 11a46d9b mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a46d9d lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11a46da0:;
  /* 11a46da0 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a46da3 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a46da6 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a46da8 jmp 0x11a46dac */
  goto L_11a46dac;
L_11a46daa:;
  /* 11a46daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a46dac:;
  /* 11a46dac pop edi */
  EDI = (pop32());
  /* 11a46dad pop esi */
  ESI = (pop32());
  /* 11a46dae pop ebx */
  EBX = (pop32());
  /* 11a46daf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a46db0 ret  */
  ESPCHK(0x11a46c8du, _esp0);
  ESP += 4; return;
}

/* FUN_10006db1 @ 0x11a46db1 (41 bytes, 12 insns) */
void f_11a46db1(void) {
  FTRACE(0x11a46db1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46db1 push esi */
  push32((uint32_t)(ESI));
  /* 11a46db2 mov esi, dword ptr [0x11a4a0b8] */
  ESI = (r32((uint32_t)(0x11a4a0b8)));
  /* 11a46db8 push dword ptr [0x11a4dc44] */
  push32((uint32_t)(r32((uint32_t)(0x11a4dc44))));
  /* 11a46dbe call esi */
  call_ind((uint32_t)(ESI), 0x11a46dc0u);
  /* 11a46dc0 push dword ptr [0x11a4dc34] */
  push32((uint32_t)(r32((uint32_t)(0x11a4dc34))));
  /* 11a46dc6 call esi */
  call_ind((uint32_t)(ESI), 0x11a46dc8u);
  /* 11a46dc8 push dword ptr [0x11a4dc24] */
  push32((uint32_t)(r32((uint32_t)(0x11a4dc24))));
  /* 11a46dce call esi */
  call_ind((uint32_t)(ESI), 0x11a46dd0u);
  /* 11a46dd0 push dword ptr [0x11a4dc04] */
  push32((uint32_t)(r32((uint32_t)(0x11a4dc04))));
  /* 11a46dd6 call esi */
  call_ind((uint32_t)(ESI), 0x11a46dd8u);
  /* 11a46dd8 pop esi */
  ESI = (pop32());
  /* 11a46dd9 ret  */
  ESPCHK(0x11a46db1u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dda @ 0x11a46dda (108 bytes, 34 insns) */
void f_11a46dda(void) {
  FTRACE(0x11a46ddau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46dda push esi */
  push32((uint32_t)(ESI));
  /* 11a46ddb push edi */
  push32((uint32_t)(EDI));
  /* 11a46ddc mov edi, dword ptr [0x11a4a000] */
  EDI = (r32((uint32_t)(0x11a4a000)));
  /* 11a46de2 mov esi, 0x11a4dc00 */
  ESI = (0x11a4dc00u);
L_11a46de7:;
  /* 11a46de7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a46de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a46deb je 0x11a46e18 */
  if (C.zf) goto L_11a46e18;
  /* 11a46ded cmp esi, 0x11a4dc44 */
  { uint32_t _a=(ESI),_b=(0x11a4dc44u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46df3 je 0x11a46e18 */
  if (C.zf) goto L_11a46e18;
  /* 11a46df5 cmp esi, 0x11a4dc34 */
  { uint32_t _a=(ESI),_b=(0x11a4dc34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46dfb je 0x11a46e18 */
  if (C.zf) goto L_11a46e18;
  /* 11a46dfd cmp esi, 0x11a4dc24 */
  { uint32_t _a=(ESI),_b=(0x11a4dc24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46e03 je 0x11a46e18 */
  if (C.zf) goto L_11a46e18;
  /* 11a46e05 cmp esi, 0x11a4dc04 */
  { uint32_t _a=(ESI),_b=(0x11a4dc04u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46e0b je 0x11a46e18 */
  if (C.zf) goto L_11a46e18;
  /* 11a46e0d push eax */
  push32((uint32_t)(EAX));
  /* 11a46e0e call edi */
  call_ind((uint32_t)(EDI), 0x11a46e10u);
  /* 11a46e10 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a46e12 call 0x11a441bb */
  push32(0x11a46e17u); f_11a441bb();
  /* 11a46e17 pop ecx */
  ECX = (pop32());
L_11a46e18:;
  /* 11a46e18 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a46e1b cmp esi, 0x11a4dcc0 */
  { uint32_t _a=(ESI),_b=(0x11a4dcc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46e21 jl 0x11a46de7 */
  if ((C.sf!=C.of)) goto L_11a46de7;
  /* 11a46e23 push dword ptr [0x11a4dc24] */
  push32((uint32_t)(r32((uint32_t)(0x11a4dc24))));
  /* 11a46e29 call edi */
  call_ind((uint32_t)(EDI), 0x11a46e2bu);
  /* 11a46e2b push dword ptr [0x11a4dc34] */
  push32((uint32_t)(r32((uint32_t)(0x11a4dc34))));
  /* 11a46e31 call edi */
  call_ind((uint32_t)(EDI), 0x11a46e33u);
  /* 11a46e33 push dword ptr [0x11a4dc44] */
  push32((uint32_t)(r32((uint32_t)(0x11a4dc44))));
  /* 11a46e39 call edi */
  call_ind((uint32_t)(EDI), 0x11a46e3bu);
  /* 11a46e3b push dword ptr [0x11a4dc04] */
  push32((uint32_t)(r32((uint32_t)(0x11a4dc04))));
  /* 11a46e41 call edi */
  call_ind((uint32_t)(EDI), 0x11a46e43u);
  /* 11a46e43 pop edi */
  EDI = (pop32());
  /* 11a46e44 pop esi */
  ESI = (pop32());
  /* 11a46e45 ret  */
  ESPCHK(0x11a46ddau, _esp0);
  ESP += 4; return;
}

/* FUN_10006e46 @ 0x11a46e46 (97 bytes, 37 insns) */
void f_11a46e46(void) {
  FTRACE(0x11a46e46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46e46 push ebp */
  push32((uint32_t)(EBP));
  /* 11a46e47 mov ebp, esp */
  EBP = (ESP);
  /* 11a46e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a46e4c push esi */
  push32((uint32_t)(ESI));
  /* 11a46e4d cmp dword ptr [eax*4 + 0x11a4dc00], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11a4dc00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46e55 lea esi, [eax*4 + 0x11a4dc00] */
  ESI = ((uint32_t)(EAX*4 + 0x11a4dc00));
  /* 11a46e5c jne 0x11a46e9c */
  if (!C.zf) goto L_11a46e9c;
  /* 11a46e5e push edi */
  push32((uint32_t)(EDI));
  /* 11a46e5f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a46e61 call 0x11a44d75 */
  push32(0x11a46e66u); f_11a44d75();
  /* 11a46e66 mov edi, eax */
  EDI = (EAX);
  /* 11a46e68 pop ecx */
  ECX = (pop32());
  /* 11a46e69 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a46e6b jne 0x11a46e75 */
  if (!C.zf) goto L_11a46e75;
  /* 11a46e6d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a46e6f call 0x11a44188 */
  push32(0x11a46e74u); f_11a44188();
  /* 11a46e74 pop ecx */
  ECX = (pop32());
L_11a46e75:;
  /* 11a46e75 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a46e77 call 0x11a46e46 */
  push32(0x11a46e7cu); f_11a46e46();
  /* 11a46e7c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a46e7f pop ecx */
  ECX = (pop32());
  /* 11a46e80 push edi */
  push32((uint32_t)(EDI));
  /* 11a46e81 jne 0x11a46e8d */
  if (!C.zf) goto L_11a46e8d;
  /* 11a46e83 call dword ptr [0x11a4a0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a0b8))), 0x11a46e89u);
  /* 11a46e89 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a46e8b jmp 0x11a46e93 */
  goto L_11a46e93;
L_11a46e8d:;
  /* 11a46e8d call 0x11a441bb */
  push32(0x11a46e92u); f_11a441bb();
  /* 11a46e92 pop ecx */
  ECX = (pop32());
L_11a46e93:;
  /* 11a46e93 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a46e95 call 0x11a46ea7 */
  push32(0x11a46e9au); f_11a46ea7();
  /* 11a46e9a pop ecx */
  ECX = (pop32());
  /* 11a46e9b pop edi */
  EDI = (pop32());
L_11a46e9c:;
  /* 11a46e9c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a46e9e call dword ptr [0x11a4a088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a088))), 0x11a46ea4u);
  /* 11a46ea4 pop esi */
  ESI = (pop32());
  /* 11a46ea5 pop ebp */
  EBP = (pop32());
  /* 11a46ea6 ret  */
  ESPCHK(0x11a46e46u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea7 @ 0x11a46ea7 (21 bytes, 7 insns) */
void f_11a46ea7(void) {
  FTRACE(0x11a46ea7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46ea7 push ebp */
  push32((uint32_t)(EBP));
  /* 11a46ea8 mov ebp, esp */
  EBP = (ESP);
  /* 11a46eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a46ead push dword ptr [eax*4 + 0x11a4dc00] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11a4dc00))));
  /* 11a46eb4 call dword ptr [0x11a4a08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a4a08c))), 0x11a46ebau);
  /* 11a46eba pop ebp */
  EBP = (pop32());
  /* 11a46ebb ret  */
  ESPCHK(0x11a46ea7u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11a46ebc (32 bytes, 18 insns) */
void f_11a46ebc(void) {
  FTRACE(0x11a46ebcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a46ebc push ebp */
  push32((uint32_t)(EBP));
  /* 11a46ebd mov ebp, esp */
  EBP = (ESP);
  /* 11a46ebf push ebx */
  push32((uint32_t)(EBX));
  /* 11a46ec0 push esi */
  push32((uint32_t)(ESI));
  /* 11a46ec1 push edi */
  push32((uint32_t)(EDI));
  /* 11a46ec2 push ebp */
  push32((uint32_t)(EBP));
  /* 11a46ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a46ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a46ec7 push 0x11a46ed4 */
  push32((uint32_t)(0x11a46ed4u));
  /* 11a46ecc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a46ecf call 0x11a49264 */
  push32(0x11a46ed4u); f_11a49264();
  /* 11a46ed4 pop ebp */
  EBP = (pop32());
  /* 11a46ed5 pop edi */
  EDI = (pop32());
  /* 11a46ed6 pop esi */
  ESI = (pop32());
  /* 11a46ed7 pop ebx */
  EBX = (pop32());
  /* 11a46ed8 mov esp, ebp */
  ESP = (EBP);
  /* 11a46eda pop ebp */
  EBP = (pop32());
  /* 11a46edb ret  */
  ESPCHK(0x11a46ebcu, _esp0);
  ESP += 4; return;
}

