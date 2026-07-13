#include "recomp.h"

/* FUN_10001000 @ 0x11a21000 (20 bytes, 6 insns) */
void f_11a21000(void) {
  FTRACE(0x11a21000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a21004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a21005 jne 0x11a2100c */
  if (!C.zf) goto L_11a2100c;
  /* 11a21007 call 0x11a22de0 */
  push32(0x11a2100cu); f_11a22de0();
L_11a2100c:;
  /* 11a2100c mov eax, 1 */
  EAX = (0x1u);
  /* 11a21011 ret 0xc */
  ESPCHK(0x11a21000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001020 @ 0x11a21020 (484 bytes, 123 insns) */
void f_11a21020(void) {
  FTRACE(0x11a21020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21020 push ebx */
  push32((uint32_t)(EBX));
  /* 11a21021 push ebp */
  push32((uint32_t)(EBP));
  /* 11a21022 mov ebp, ecx */
  EBP = (ECX);
  /* 11a21024 mov eax, 0x64 */
  EAX = (0x64u);
  /* 11a21029 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a2102d mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11a21031 mov dword ptr [ebp + 0x323], eax */
  w32((uint32_t)(EBP + 0x323), (EAX));
  /* 11a21037 mov dword ptr [ebp + 0x32b], eax */
  w32((uint32_t)(EBP + 0x32b), (EAX));
  /* 11a2103d mov eax, 0x12c */
  EAX = (0x12cu);
  /* 11a21042 mov dword ptr [ebp + 0x2d4], ecx */
  w32((uint32_t)(EBP + 0x2d4), (ECX));
  /* 11a21048 mov dword ptr [ebp + 0x337], eax */
  w32((uint32_t)(EBP + 0x337), (EAX));
  /* 11a2104e mov dword ptr [ebp + 0x333], eax */
  w32((uint32_t)(EBP + 0x333), (EAX));
  /* 11a21054 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a21058 mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 11a2105c mov dword ptr [ebp + 0x2f7], eax */
  w32((uint32_t)(EBP + 0x2f7), (EAX));
  /* 11a21062 mov eax, dword ptr [esp + 0x30] */
  EAX = (r32((uint32_t)(ESP + 0x30)));
  /* 11a21066 mov dword ptr [ebp + 0x2dc], eax */
  w32((uint32_t)(EBP + 0x2dc), (EAX));
  /* 11a2106c mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a21070 mov dword ptr [ebp + 0x2fb], eax */
  w32((uint32_t)(EBP + 0x2fb), (EAX));
  /* 11a21076 mov eax, dword ptr [esp + 0x3c] */
  EAX = (r32((uint32_t)(ESP + 0x3c)));
  /* 11a2107a mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a2107e mov dword ptr [ebp + 0x2e0], ecx */
  w32((uint32_t)(EBP + 0x2e0), (ECX));
  /* 11a21084 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a21087 mov dword ptr [ebp + 0x2d8], edx */
  w32((uint32_t)(EBP + 0x2d8), (EDX));
  /* 11a2108d mov edx, dword ptr [esp + 0x38] */
  EDX = (r32((uint32_t)(ESP + 0x38)));
  /* 11a21091 push esi */
  push32((uint32_t)(ESI));
  /* 11a21092 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a21095 mov eax, dword ptr [esp + 0x28] */
  EAX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a21099 mov dword ptr [ebp + 0x344], ecx */
  w32((uint32_t)(EBP + 0x344), (ECX));
  /* 11a2109f mov cl, byte ptr [esp + 0x20] */
  CL = (r8((uint32_t)(ESP + 0x20)));
  /* 11a210a3 mov dword ptr [ebp + 0x2e4], edx */
  w32((uint32_t)(EBP + 0x2e4), (EDX));
  /* 11a210a9 push edi */
  push32((uint32_t)(EDI));
  /* 11a210aa mov edi, dword ptr [esp + 0x1c] */
  EDI = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a210ae mov edx, 1 */
  EDX = (0x1u);
  /* 11a210b3 mov dword ptr [ebp + 0x2d0], eax */
  w32((uint32_t)(EBP + 0x2d0), (EAX));
  /* 11a210b9 mov byte ptr [ebp + 0x33b], cl */
  w8((uint32_t)(EBP + 0x33b), (CL));
  /* 11a210bf or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a210c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a210c4 mov dword ptr [ebp + 0x327], 0xc8 */
  w32((uint32_t)(EBP + 0x327), (0xc8u));
  /* 11a210ce mov dword ptr [ebp + 0x32f], 0x1f4 */
  w32((uint32_t)(EBP + 0x32f), (0x1f4u));
  /* 11a210d8 mov byte ptr [ebp + 0x348], dl */
  w8((uint32_t)(EBP + 0x348), (DL));
  /* 11a210de mov byte ptr [ebp + 0x349], dl */
  w8((uint32_t)(EBP + 0x349), (DL));
  /* 11a210e4 mov dword ptr [ebp + 0x33c], ebx */
  w32((uint32_t)(EBP + 0x33c), (EBX));
  /* 11a210ea mov dword ptr [ebp + 0x34e], edx */
  w32((uint32_t)(EBP + 0x34e), (EDX));
  /* 11a210f0 mov byte ptr [ebp + 0x352], dl */
  w8((uint32_t)(EBP + 0x352), (DL));
  /* 11a210f6 lea esi, [ebp + 0x2e8] */
  ESI = ((uint32_t)(EBP + 0x2e8));
  /* 11a210fc repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a210fe not ecx */
  ECX = (~(ECX));
  /* 11a21100 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21102 mov dword ptr [esp + 0x18], esi */
  w32((uint32_t)(ESP + 0x18), (ESI));
  /* 11a21106 mov eax, ecx */
  EAX = (ECX);
  /* 11a21108 mov esi, edi */
  ESI = (EDI);
  /* 11a2110a mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11a2110e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a21111 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a21113 mov ecx, eax */
  ECX = (EAX);
  /* 11a21115 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a21119 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a2111c rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a2111e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a21120 mov dword ptr [ebp + 0x2ff], eax */
  w32((uint32_t)(EBP + 0x2ff), (EAX));
  /* 11a21126 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21128 mov dword ptr [ebp + 0x30f], 0x3e8 */
  w32((uint32_t)(EBP + 0x30f), (0x3e8u));
  /* 11a21132 mov dword ptr [ebp + 0x31f], esi */
  w32((uint32_t)(EBP + 0x31f), (ESI));
  /* 11a21138 mov dword ptr [ebp + 0x31b], esi */
  w32((uint32_t)(EBP + 0x31b), (ESI));
  /* 11a2113e mov dword ptr [ebp + 0x317], esi */
  w32((uint32_t)(EBP + 0x317), (ESI));
  /* 11a21144 mov dword ptr [ebp + 0x313], esi */
  w32((uint32_t)(EBP + 0x313), (ESI));
  /* 11a2114a mov dword ptr [ebp + 0x30b], esi */
  w32((uint32_t)(EBP + 0x30b), (ESI));
  /* 11a21150 je 0x11a211fd */
  if (C.zf) goto L_11a211fd;
  /* 11a21156 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21159 je 0x11a211fd */
  if (C.zf) goto L_11a211fd;
  /* 11a2115f cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21161 je 0x11a2116c */
  if (C.zf) goto L_11a2116c;
  /* 11a21163 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21165 je 0x11a2116c */
  if (C.zf) goto L_11a2116c;
  /* 11a21167 cmp ebx, 2 */
  { uint32_t _a=(EBX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2116a jne 0x11a211a8 */
  if (!C.zf) goto L_11a211a8;
L_11a2116c:;
  /* 11a2116c lea edi, [ebp + 0x303] */
  EDI = ((uint32_t)(EBP + 0x303));
  /* 11a21172 push edi */
  push32((uint32_t)(EDI));
  /* 11a21173 call dword ptr [0x11a2a1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a1a0))), 0x11a21179u);
  /* 11a21179 mov ecx, dword ptr [esp + 0x24] */
  ECX = (r32((uint32_t)(ESP + 0x24)));
  /* 11a2117d mov edx, dword ptr [esp + 0x28] */
  EDX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a21181 push esi */
  push32((uint32_t)(ESI));
  /* 11a21182 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21183 push edx */
  push32((uint32_t)(EDX));
  /* 11a21184 push 0x11a2f5f0 */
  push32((uint32_t)(0x11a2f5f0u));
  /* 11a21189 push 0x11a2fe70 */
  push32((uint32_t)(0x11a2fe70u));
  /* 11a2118e push 0x11a2faa0 */
  push32((uint32_t)(0x11a2faa0u));
  /* 11a21193 call dword ptr [0x11a2a1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a1a4))), 0x11a21199u);
  /* 11a21199 push edi */
  push32((uint32_t)(EDI));
  /* 11a2119a push 0x11a2faa0 */
  push32((uint32_t)(0x11a2faa0u));
  /* 11a2119f call dword ptr [0x11a2a19c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a19c))), 0x11a211a5u);
  /* 11a211a5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a211a8:;
  /* 11a211a8 sub ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a211aa je 0x11a211c3 */
  if (C.zf) goto L_11a211c3;
  /* 11a211ac dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a211ad je 0x11a211d3 */
  if (C.zf) goto L_11a211d3;
  /* 11a211af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a211b0 je 0x11a211e3 */
  if (C.zf) goto L_11a211e3;
  /* 11a211b2 pop edi */
  EDI = (pop32());
  /* 11a211b3 mov dword ptr [ebp + 0x340], 0xf */
  w32((uint32_t)(EBP + 0x340), (0xfu));
  /* 11a211bd pop esi */
  ESI = (pop32());
  /* 11a211be pop ebp */
  EBP = (pop32());
  /* 11a211bf pop ebx */
  EBX = (pop32());
  /* 11a211c0 ret 0x34 */
  ESPCHK(0x11a21020u, _esp0);
  ESP += 56; return;
L_11a211c3:;
  /* 11a211c3 lea eax, [ebp + 0x303] */
  EAX = ((uint32_t)(EBP + 0x303));
  /* 11a211c9 push eax */
  push32((uint32_t)(EAX));
  /* 11a211ca call dword ptr [0x11a2a1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a1ac))), 0x11a211d0u);
  /* 11a211d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a211d3:;
  /* 11a211d3 lea ecx, [ebp + 0x303] */
  ECX = ((uint32_t)(EBP + 0x303));
  /* 11a211d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a211da call dword ptr [0x11a2a1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a1b0))), 0x11a211e0u);
  /* 11a211e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a211e3:;
  /* 11a211e3 lea edx, [ebp + 0x303] */
  EDX = ((uint32_t)(EBP + 0x303));
  /* 11a211e9 push edx */
  push32((uint32_t)(EDX));
  /* 11a211ea call dword ptr [0x11a2a1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a1a8))), 0x11a211f0u);
  /* 11a211f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a211f3 mov dword ptr [ebp + 0x340], 0xf */
  w32((uint32_t)(EBP + 0x340), (0xfu));
L_11a211fd:;
  /* 11a211fd pop edi */
  EDI = (pop32());
  /* 11a211fe pop esi */
  ESI = (pop32());
  /* 11a211ff pop ebp */
  EBP = (pop32());
  /* 11a21200 pop ebx */
  EBX = (pop32());
  /* 11a21201 ret 0x34 */
  ESPCHK(0x11a21020u, _esp0);
  ESP += 56; return;
}

/* FUN_10001210 @ 0x11a21210 (73 bytes, 15 insns) */
void f_11a21210(void) {
  FTRACE(0x11a21210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21210 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a21214 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a21218 mov dword ptr [ecx + 0x2d4], eax */
  w32((uint32_t)(ECX + 0x2d4), (EAX));
  /* 11a2121e mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a21222 mov dword ptr [ecx + 0x2d8], edx */
  w32((uint32_t)(ECX + 0x2d8), (EDX));
  /* 11a21228 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a2122c mov dword ptr [ecx + 0x2dc], eax */
  w32((uint32_t)(ECX + 0x2dc), (EAX));
  /* 11a21232 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a21236 mov dword ptr [ecx + 0x2e0], edx */
  w32((uint32_t)(ECX + 0x2e0), (EDX));
  /* 11a2123c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a21240 mov dword ptr [ecx + 0x2e4], eax */
  w32((uint32_t)(ECX + 0x2e4), (EAX));
  /* 11a21246 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a2124a mov dword ptr [ecx + 0x2d0], edx */
  w32((uint32_t)(ECX + 0x2d0), (EDX));
  /* 11a21250 mov dword ptr [ecx + 0x2fb], eax */
  w32((uint32_t)(ECX + 0x2fb), (EAX));
  /* 11a21256 ret 0x1c */
  ESPCHK(0x11a21210u, _esp0);
  ESP += 32; return;
}

/* FUN_10001260 @ 0x11a21260 (55 bytes, 9 insns) */
void f_11a21260(void) {
  FTRACE(0x11a21260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21260 mov eax, 0x64 */
  EAX = (0x64u);
  /* 11a21265 mov dword ptr [ecx + 0x327], 0xc8 */
  w32((uint32_t)(ECX + 0x327), (0xc8u));
  /* 11a2126f mov dword ptr [ecx + 0x323], eax */
  w32((uint32_t)(ECX + 0x323), (EAX));
  /* 11a21275 mov dword ptr [ecx + 0x32b], eax */
  w32((uint32_t)(ECX + 0x32b), (EAX));
  /* 11a2127b mov eax, 0x12c */
  EAX = (0x12cu);
  /* 11a21280 mov dword ptr [ecx + 0x32f], 0x1f4 */
  w32((uint32_t)(ECX + 0x32f), (0x1f4u));
  /* 11a2128a mov dword ptr [ecx + 0x337], eax */
  w32((uint32_t)(ECX + 0x337), (EAX));
  /* 11a21290 mov dword ptr [ecx + 0x333], eax */
  w32((uint32_t)(ECX + 0x333), (EAX));
  /* 11a21296 ret  */
  ESPCHK(0x11a21260u, _esp0);
  ESP += 4; return;
}

/* FUN_100012a0 @ 0x11a212a0 (56 bytes, 18 insns) */
void f_11a212a0(void) {
  FTRACE(0x11a212a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a212a0 mov eax, dword ptr [ecx + 0x33c] */
  EAX = (r32((uint32_t)(ECX + 0x33c)));
  /* 11a212a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a212a8 je 0x11a212c7 */
  if (C.zf) goto L_11a212c7;
  /* 11a212aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a212ad je 0x11a212c7 */
  if (C.zf) goto L_11a212c7;
  /* 11a212af cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a212b2 je 0x11a212c7 */
  if (C.zf) goto L_11a212c7;
  /* 11a212b4 mov eax, dword ptr [ecx + 0x340] */
  EAX = (r32((uint32_t)(ECX + 0x340)));
  /* 11a212ba mov ecx, dword ptr [ecx + 0x344] */
  ECX = (r32((uint32_t)(ECX + 0x344)));
  /* 11a212c0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a212c2 jl 0x11a212d7 */
  if ((C.sf!=C.of)) goto L_11a212d7;
  /* 11a212c4 mov eax, ecx */
  EAX = (ECX);
  /* 11a212c6 ret  */
  ESPCHK(0x11a212a0u, _esp0);
  ESP += 4; return;
L_11a212c7:;
  /* 11a212c7 add ecx, 0x303 */
  { uint32_t _a=(ECX),_b=(0x303u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a212cd push ecx */
  push32((uint32_t)(ECX));
  /* 11a212ce call dword ptr [0x11a2a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a198))), 0x11a212d4u);
  /* 11a212d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a212d7:;
  /* 11a212d7 ret  */
  ESPCHK(0x11a212a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100012e0 @ 0x11a212e0 (326 bytes, 96 insns) [1 switch table(s)] */
void f_11a212e0(void) {
  FTRACE(0x11a212e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a212e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a212e1 push esi */
  push32((uint32_t)(ESI));
  /* 11a212e2 mov esi, ecx */
  ESI = (ECX);
  /* 11a212e4 push edi */
  push32((uint32_t)(EDI));
  /* 11a212e5 mov eax, dword ptr [esi + 0x2ff] */
  EAX = (r32((uint32_t)(ESI + 0x2ff)));
  /* 11a212eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a212ed je 0x11a21420 */
  if (C.zf) goto L_11a21420;
  /* 11a212f3 mov al, byte ptr [esi + 0x349] */
  AL = (r8((uint32_t)(ESI + 0x349)));
  /* 11a212f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a212fb je 0x11a21420 */
  if (C.zf) goto L_11a21420;
  /* 11a21301 mov al, byte ptr [esi + 0x352] */
  AL = (r8((uint32_t)(ESI + 0x352)));
  /* 11a21307 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a2130b mov ebp, dword ptr [0x11a2a184] */
  EBP = (r32((uint32_t)(0x11a2a184)));
  /* 11a21311 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a21313 je 0x11a213f9 */
  if (C.zf) goto L_11a213f9;
  /* 11a21319 mov eax, dword ptr [esi + 0x2fb] */
  EAX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a2131f push edi */
  push32((uint32_t)(EDI));
  /* 11a21320 push 0x11a2fe68 */
  push32((uint32_t)(0x11a2fe68u));
  /* 11a21325 push eax */
  push32((uint32_t)(EAX));
  /* 11a21326 call ebp */
  call_ind((uint32_t)(EBP), 0x11a21328u);
  /* 11a21328 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2132b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2132d je 0x11a213f9 */
  if (C.zf) goto L_11a213f9;
  /* 11a21333 mov eax, dword ptr [esi + 0x2ff] */
  EAX = (r32((uint32_t)(ESI + 0x2ff)));
  /* 11a21339 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2133c jne 0x11a21386 */
  if (!C.zf) goto L_11a21386;
  /* 11a2133e push 0x11a2c0ac */
  push32((uint32_t)(0x11a2c0acu));
  /* 11a21343 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21345 push 0x11a2c0a4 */
  push32((uint32_t)(0x11a2c0a4u));
  /* 11a2134a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2134c call dword ptr [0x11a2a194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a194))), 0x11a21352u);
  /* 11a21352 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21355 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21358 ja 0x11a213f9 */
  if ((!C.cf&&!C.zf)) goto L_11a213f9;
  /* 11a2135e jmp dword ptr [eax*4 + 0x11a21428] */
  switch (EAX) {
    case 0: goto L_11a213eb;
    case 1: goto L_11a21365;
    case 2: goto L_11a21377;
    case 3: goto L_11a213e2;
    default: x86_unimpl("switch@0x11a2135e out of table"); return;
  }
L_11a21365:;
  /* 11a21365 mov ecx, esi */
  ECX = (ESI);
  /* 11a21367 call 0x11a215f0 */
  push32(0x11a2136cu); f_11a215f0();
  /* 11a2136c mov byte ptr [esi + 0x352], al */
  w8((uint32_t)(ESI + 0x352), (AL));
  /* 11a21372 jmp 0x11a213f9 */
  goto L_11a213f9;
L_11a21377:;
  /* 11a21377 mov ecx, esi */
  ECX = (ESI);
  /* 11a21379 call 0x11a21620 */
  push32(0x11a2137eu); f_11a21620();
  /* 11a2137e mov byte ptr [esi + 0x352], al */
  w8((uint32_t)(ESI + 0x352), (AL));
  /* 11a21384 jmp 0x11a213f9 */
  goto L_11a213f9;
L_11a21386:;
  /* 11a21386 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21389 je 0x11a213c0 */
  if (C.zf) goto L_11a213c0;
  /* 11a2138b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2138e je 0x11a213c0 */
  if (C.zf) goto L_11a213c0;
  /* 11a21390 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21393 jne 0x11a213f9 */
  if (!C.zf) goto L_11a213f9;
  /* 11a21395 push 0x11a2c090 */
  push32((uint32_t)(0x11a2c090u));
  /* 11a2139a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2139c push 0x11a2c0a4 */
  push32((uint32_t)(0x11a2c0a4u));
  /* 11a213a1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a213a3 call dword ptr [0x11a2a194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a194))), 0x11a213a9u);
  /* 11a213a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a213ac sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a213af je 0x11a213eb */
  if (C.zf) goto L_11a213eb;
  /* 11a213b1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a213b2 je 0x11a21377 */
  if (C.zf) goto L_11a21377;
  /* 11a213b4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a213b5 jne 0x11a213f9 */
  if (!C.zf) goto L_11a213f9;
  /* 11a213b7 mov byte ptr [esi + 0x352], 0 */
  w8((uint32_t)(ESI + 0x352), (0x0u));
  /* 11a213be jmp 0x11a213f9 */
  goto L_11a213f9;
L_11a213c0:;
  /* 11a213c0 push 0x11a2c07c */
  push32((uint32_t)(0x11a2c07cu));
  /* 11a213c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a213c7 push 0x11a2c0a4 */
  push32((uint32_t)(0x11a2c0a4u));
  /* 11a213cc push 9 */
  push32((uint32_t)(0x9u));
  /* 11a213ce call dword ptr [0x11a2a194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a194))), 0x11a213d4u);
  /* 11a213d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a213d7 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a213da je 0x11a213eb */
  if (C.zf) goto L_11a213eb;
  /* 11a213dc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a213dd je 0x11a21377 */
  if (C.zf) goto L_11a21377;
  /* 11a213df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a213e0 jne 0x11a213f9 */
  if (!C.zf) goto L_11a213f9;
L_11a213e2:;
  /* 11a213e2 mov byte ptr [esi + 0x352], 0 */
  w8((uint32_t)(ESI + 0x352), (0x0u));
  /* 11a213e9 jmp 0x11a213f9 */
  goto L_11a213f9;
L_11a213eb:;
  /* 11a213eb mov ecx, esi */
  ECX = (ESI);
  /* 11a213ed call 0x11a21440 */
  push32(0x11a213f2u); f_11a21440();
  /* 11a213f2 mov byte ptr [esi + 0x352], 1 */
  w8((uint32_t)(ESI + 0x352), (0x1u));
L_11a213f9:;
  /* 11a213f9 mov al, byte ptr [esi + 0x352] */
  AL = (r8((uint32_t)(ESI + 0x352)));
  /* 11a213ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a21401 jne 0x11a21420 */
  if (!C.zf) goto L_11a21420;
  /* 11a21403 mov ecx, dword ptr [esi + 0x2fb] */
  ECX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a21409 push edi */
  push32((uint32_t)(EDI));
  /* 11a2140a push 0x11a2fe68 */
  push32((uint32_t)(0x11a2fe68u));
  /* 11a2140f push ecx */
  push32((uint32_t)(ECX));
  /* 11a21410 call ebp */
  call_ind((uint32_t)(EBP), 0x11a21412u);
  /* 11a21412 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21415 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a21417 jne 0x11a21420 */
  if (!C.zf) goto L_11a21420;
  /* 11a21419 mov byte ptr [esi + 0x352], 1 */
  w8((uint32_t)(ESI + 0x352), (0x1u));
L_11a21420:;
  /* 11a21420 pop edi */
  EDI = (pop32());
  /* 11a21421 pop esi */
  ESI = (pop32());
  /* 11a21422 pop ebp */
  EBP = (pop32());
  /* 11a21423 ret 4 */
  ESPCHK(0x11a212e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001440 @ 0x11a21440 (420 bytes, 117 insns) */
void f_11a21440(void) {
  FTRACE(0x11a21440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21440 push esi */
  push32((uint32_t)(ESI));
  /* 11a21441 mov esi, ecx */
  ESI = (ECX);
  /* 11a21443 call 0x11a212a0 */
  push32(0x11a21448u); f_11a212a0();
  /* 11a21448 mov ecx, dword ptr [esi + 0x2ff] */
  ECX = (r32((uint32_t)(ESI + 0x2ff)));
  /* 11a2144e cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21451 jne 0x11a214e7 */
  if (!C.zf) goto L_11a214e7;
  /* 11a21457 mov edx, dword ptr [esi + 0x34a] */
  EDX = (r32((uint32_t)(ESI + 0x34a)));
  /* 11a2145d mov ecx, dword ptr [esi + 0x34e] */
  ECX = (r32((uint32_t)(ESI + 0x34e)));
  /* 11a21463 push eax */
  push32((uint32_t)(EAX));
  /* 11a21464 push edx */
  push32((uint32_t)(EDX));
  /* 11a21465 mov edx, ecx */
  EDX = (ECX);
  /* 11a21467 push eax */
  push32((uint32_t)(EAX));
  /* 11a21468 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a2146b push edx */
  push32((uint32_t)(EDX));
  /* 11a2146c mov edx, 3 */
  EDX = (0x3u);
  /* 11a21471 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21473 mov ecx, dword ptr [esi + 0x31b] */
  ECX = (r32((uint32_t)(ESI + 0x31b)));
  /* 11a21479 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a2147c mov eax, dword ptr [esi + 0x31f] */
  EAX = (r32((uint32_t)(ESI + 0x31f)));
  /* 11a21482 push edx */
  push32((uint32_t)(EDX));
  /* 11a21483 mov edx, dword ptr [esi + 0x317] */
  EDX = (r32((uint32_t)(ESI + 0x317)));
  /* 11a21489 push eax */
  push32((uint32_t)(EAX));
  /* 11a2148a mov eax, dword ptr [esi + 0x313] */
  EAX = (r32((uint32_t)(ESI + 0x313)));
  /* 11a21490 push 0x11a2fedb */
  push32((uint32_t)(0x11a2fedbu));
  /* 11a21495 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21496 mov ecx, dword ptr [esi + 0x30f] */
  ECX = (r32((uint32_t)(ESI + 0x30f)));
  /* 11a2149c push 0x11a2fecc */
  push32((uint32_t)(0x11a2feccu));
  /* 11a214a1 push edx */
  push32((uint32_t)(EDX));
  /* 11a214a2 mov edx, dword ptr [esi + 0x30b] */
  EDX = (r32((uint32_t)(ESI + 0x30b)));
  /* 11a214a8 push 0x11a2febd */
  push32((uint32_t)(0x11a2febdu));
  /* 11a214ad push eax */
  push32((uint32_t)(EAX));
  /* 11a214ae mov eax, dword ptr [esi + 0x33c] */
  EAX = (r32((uint32_t)(ESI + 0x33c)));
  /* 11a214b4 push 0x11a2feae */
  push32((uint32_t)(0x11a2feaeu));
  /* 11a214b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a214ba lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a214bd push 0x11a2fe9f */
  push32((uint32_t)(0x11a2fe9fu));
  /* 11a214c2 push edx */
  push32((uint32_t)(EDX));
  /* 11a214c3 push 0x11a2fe90 */
  push32((uint32_t)(0x11a2fe90u));
  /* 11a214c8 lea eax, [eax + eax*4 + 0x11a2fe90] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x11a2fe90));
  /* 11a214cf add esi, 0x2e8 */
  { uint32_t _a=(ESI),_b=(0x2e8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a214d5 push eax */
  push32((uint32_t)(EAX));
  /* 11a214d6 push esi */
  push32((uint32_t)(ESI));
  /* 11a214d7 push 0x11a2c0dc */
  push32((uint32_t)(0x11a2c0dcu));
  /* 11a214dc call dword ptr [0x11a2a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a18c))), 0x11a214e2u);
  /* 11a214e2 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a214e5 pop esi */
  ESI = (pop32());
  /* 11a214e6 ret  */
  ESPCHK(0x11a21440u, _esp0);
  ESP += 4; return;
L_11a214e7:;
  /* 11a214e7 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a214ea jne 0x11a21564 */
  if (!C.zf) goto L_11a21564;
  /* 11a214ec mov ecx, dword ptr [esi + 0x34a] */
  ECX = (r32((uint32_t)(ESI + 0x34a)));
  /* 11a214f2 mov edx, dword ptr [esi + 0x31f] */
  EDX = (r32((uint32_t)(ESI + 0x31f)));
  /* 11a214f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a214f9 mov eax, dword ptr [esi + 0x31b] */
  EAX = (r32((uint32_t)(ESI + 0x31b)));
  /* 11a214ff push ecx */
  push32((uint32_t)(ECX));
  /* 11a21500 mov ecx, dword ptr [esi + 0x317] */
  ECX = (r32((uint32_t)(ESI + 0x317)));
  /* 11a21506 push edx */
  push32((uint32_t)(EDX));
  /* 11a21507 mov edx, dword ptr [esi + 0x313] */
  EDX = (r32((uint32_t)(ESI + 0x313)));
  /* 11a2150d push 0x11a2fedb */
  push32((uint32_t)(0x11a2fedbu));
  /* 11a21512 push eax */
  push32((uint32_t)(EAX));
  /* 11a21513 mov eax, dword ptr [esi + 0x30f] */
  EAX = (r32((uint32_t)(ESI + 0x30f)));
  /* 11a21519 push 0x11a2fecc */
  push32((uint32_t)(0x11a2feccu));
  /* 11a2151e push ecx */
  push32((uint32_t)(ECX));
  /* 11a2151f push 0x11a2febd */
  push32((uint32_t)(0x11a2febdu));
  /* 11a21524 mov ecx, dword ptr [esi + 0x30b] */
  ECX = (r32((uint32_t)(ESI + 0x30b)));
  /* 11a2152a push edx */
  push32((uint32_t)(EDX));
  /* 11a2152b push 0x11a2feae */
  push32((uint32_t)(0x11a2feaeu));
  /* 11a21530 push eax */
  push32((uint32_t)(EAX));
  /* 11a21531 mov eax, dword ptr [esi + 0x33c] */
  EAX = (r32((uint32_t)(ESI + 0x33c)));
  /* 11a21537 push 0x11a2fe9f */
  push32((uint32_t)(0x11a2fe9fu));
  /* 11a2153c push ecx */
  push32((uint32_t)(ECX));
  /* 11a2153d push 0x11a2fe90 */
  push32((uint32_t)(0x11a2fe90u));
  /* 11a21542 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a21545 add esi, 0x2e8 */
  { uint32_t _a=(ESI),_b=(0x2e8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2154b lea edx, [eax + eax*4 + 0x11a2fe90] */
  EDX = ((uint32_t)(EAX + EAX*4 + 0x11a2fe90));
  /* 11a21552 push edx */
  push32((uint32_t)(EDX));
  /* 11a21553 push esi */
  push32((uint32_t)(ESI));
  /* 11a21554 push 0x11a2c0d4 */
  push32((uint32_t)(0x11a2c0d4u));
  /* 11a21559 call dword ptr [0x11a2a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a18c))), 0x11a2155fu);
  /* 11a2155f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21562 pop esi */
  ESI = (pop32());
  /* 11a21563 ret  */
  ESPCHK(0x11a21440u, _esp0);
  ESP += 4; return;
L_11a21564:;
  /* 11a21564 cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21567 jne 0x11a215c8 */
  if (!C.zf) goto L_11a215c8;
  /* 11a21569 mov eax, dword ptr [esi + 0x31f] */
  EAX = (r32((uint32_t)(ESI + 0x31f)));
  /* 11a2156f mov ecx, dword ptr [esi + 0x31b] */
  ECX = (r32((uint32_t)(ESI + 0x31b)));
  /* 11a21575 mov edx, dword ptr [esi + 0x317] */
  EDX = (r32((uint32_t)(ESI + 0x317)));
  /* 11a2157b push eax */
  push32((uint32_t)(EAX));
  /* 11a2157c mov eax, dword ptr [esi + 0x313] */
  EAX = (r32((uint32_t)(ESI + 0x313)));
  /* 11a21582 push 0x11a2fedb */
  push32((uint32_t)(0x11a2fedbu));
  /* 11a21587 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21588 mov ecx, dword ptr [esi + 0x30f] */
  ECX = (r32((uint32_t)(ESI + 0x30f)));
  /* 11a2158e push 0x11a2fecc */
  push32((uint32_t)(0x11a2feccu));
  /* 11a21593 push edx */
  push32((uint32_t)(EDX));
  /* 11a21594 mov edx, dword ptr [esi + 0x30b] */
  EDX = (r32((uint32_t)(ESI + 0x30b)));
  /* 11a2159a push 0x11a2febd */
  push32((uint32_t)(0x11a2febdu));
  /* 11a2159f push eax */
  push32((uint32_t)(EAX));
  /* 11a215a0 push 0x11a2feae */
  push32((uint32_t)(0x11a2feaeu));
  /* 11a215a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a215a6 push 0x11a2fe9f */
  push32((uint32_t)(0x11a2fe9fu));
  /* 11a215ab push edx */
  push32((uint32_t)(EDX));
  /* 11a215ac add esi, 0x2e8 */
  { uint32_t _a=(ESI),_b=(0x2e8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a215b2 push 0x11a2fe90 */
  push32((uint32_t)(0x11a2fe90u));
  /* 11a215b7 push esi */
  push32((uint32_t)(ESI));
  /* 11a215b8 push 0x11a2c0cc */
  push32((uint32_t)(0x11a2c0ccu));
  /* 11a215bd call dword ptr [0x11a2a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a18c))), 0x11a215c3u);
  /* 11a215c3 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a215c6 pop esi */
  ESI = (pop32());
  /* 11a215c7 ret  */
  ESPCHK(0x11a21440u, _esp0);
  ESP += 4; return;
L_11a215c8:;
  /* 11a215c8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a215cb jne 0x11a215e2 */
  if (!C.zf) goto L_11a215e2;
  /* 11a215cd add esi, 0x2e8 */
  { uint32_t _a=(ESI),_b=(0x2e8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a215d3 push esi */
  push32((uint32_t)(ESI));
  /* 11a215d4 push 0x11a2c0c4 */
  push32((uint32_t)(0x11a2c0c4u));
  /* 11a215d9 call dword ptr [0x11a2a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a18c))), 0x11a215dfu);
  /* 11a215df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a215e2:;
  /* 11a215e2 pop esi */
  ESI = (pop32());
  /* 11a215e3 ret  */
  ESPCHK(0x11a21440u, _esp0);
  ESP += 4; return;
}

/* FUN_100015f0 @ 0x11a215f0 (36 bytes, 12 insns) */
void f_11a215f0(void) {
  FTRACE(0x11a215f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a215f0 push esi */
  push32((uint32_t)(ESI));
  /* 11a215f1 push 0x11a2c0ec */
  push32((uint32_t)(0x11a2c0ecu));
  /* 11a215f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a215f8 push 0x11a2c0e4 */
  push32((uint32_t)(0x11a2c0e4u));
  /* 11a215fd mov esi, ecx */
  ESI = (ECX);
  /* 11a215ff push 9 */
  push32((uint32_t)(0x9u));
  /* 11a21601 call dword ptr [0x11a2a194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a194))), 0x11a21607u);
  /* 11a21607 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2160a mov dword ptr [esi + 0x34e], eax */
  w32((uint32_t)(ESI + 0x34e), (EAX));
  /* 11a21610 mov al, 1 */
  AL = (0x1u);
  /* 11a21612 pop esi */
  ESI = (pop32());
  /* 11a21613 ret  */
  ESPCHK(0x11a215f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001620 @ 0x11a21620 (152 bytes, 58 insns) */
void f_11a21620(void) {
  FTRACE(0x11a21620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21620 push esi */
  push32((uint32_t)(ESI));
  /* 11a21621 mov esi, dword ptr [0x11a2a194] */
  ESI = (r32((uint32_t)(0x11a2a194)));
  /* 11a21627 push edi */
  push32((uint32_t)(EDI));
  /* 11a21628 mov edi, ecx */
  EDI = (ECX);
L_11a2162a:;
  /* 11a2162a mov eax, dword ptr [edi + 0x2ff] */
  EAX = (r32((uint32_t)(EDI + 0x2ff)));
  /* 11a21630 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21633 je 0x11a2167e */
  if (C.zf) goto L_11a2167e;
  /* 11a21635 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21638 je 0x11a2167e */
  if (C.zf) goto L_11a2167e;
  /* 11a2163a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2163d jne 0x11a2165c */
  if (!C.zf) goto L_11a2165c;
  /* 11a2163f push 0x11a2c130 */
  push32((uint32_t)(0x11a2c130u));
  /* 11a21644 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21646 push 0x11a2c128 */
  push32((uint32_t)(0x11a2c128u));
  /* 11a2164b push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2164d call esi */
  call_ind((uint32_t)(ESI), 0x11a2164fu);
  /* 11a2164f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21652 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21655 je 0x11a216a7 */
  if (C.zf) goto L_11a216a7;
  /* 11a21657 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a21658 je 0x11a216b3 */
  if (C.zf) goto L_11a216b3;
  /* 11a2165a jmp 0x11a2162a */
  goto L_11a2162a;
L_11a2165c:;
  /* 11a2165c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2165f jne 0x11a2162a */
  if (!C.zf) goto L_11a2162a;
  /* 11a21661 push 0x11a2c11c */
  push32((uint32_t)(0x11a2c11cu));
  /* 11a21666 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21668 push 0x11a2c128 */
  push32((uint32_t)(0x11a2c128u));
  /* 11a2166d push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2166f call esi */
  call_ind((uint32_t)(ESI), 0x11a21671u);
  /* 11a21671 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21674 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21677 je 0x11a2169e */
  if (C.zf) goto L_11a2169e;
  /* 11a21679 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a2167a je 0x11a216b3 */
  if (C.zf) goto L_11a216b3;
  /* 11a2167c jmp 0x11a2162a */
  goto L_11a2162a;
L_11a2167e:;
  /* 11a2167e push 0x11a2c108 */
  push32((uint32_t)(0x11a2c108u));
  /* 11a21683 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21685 push 0x11a2c128 */
  push32((uint32_t)(0x11a2c128u));
  /* 11a2168a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2168c call esi */
  call_ind((uint32_t)(ESI), 0x11a2168eu);
  /* 11a2168e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21691 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21694 je 0x11a216a7 */
  if (C.zf) goto L_11a216a7;
  /* 11a21696 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a21697 je 0x11a2169e */
  if (C.zf) goto L_11a2169e;
  /* 11a21699 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a2169a je 0x11a216b3 */
  if (C.zf) goto L_11a216b3;
  /* 11a2169c jmp 0x11a2162a */
  goto L_11a2162a;
L_11a2169e:;
  /* 11a2169e mov ecx, edi */
  ECX = (EDI);
  /* 11a216a0 call 0x11a217f0 */
  push32(0x11a216a5u); f_11a217f0();
  /* 11a216a5 jmp 0x11a2162a */
  goto L_11a2162a;
L_11a216a7:;
  /* 11a216a7 mov ecx, edi */
  ECX = (EDI);
  /* 11a216a9 call 0x11a216c0 */
  push32(0x11a216aeu); f_11a216c0();
  /* 11a216ae jmp 0x11a2162a */
  goto L_11a2162a;
L_11a216b3:;
  /* 11a216b3 pop edi */
  EDI = (pop32());
  /* 11a216b4 mov al, 1 */
  AL = (0x1u);
  /* 11a216b6 pop esi */
  ESI = (pop32());
  /* 11a216b7 ret  */
  ESPCHK(0x11a21620u, _esp0);
  ESP += 4; return;
}

/* FUN_100016c0 @ 0x11a216c0 (245 bytes, 83 insns) [2 switch table(s)] */
void f_11a216c0(void) {
  FTRACE(0x11a216c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a216c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a216c1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a216c2 push ebp */
  push32((uint32_t)(EBP));
  /* 11a216c3 push esi */
  push32((uint32_t)(ESI));
  /* 11a216c4 mov esi, dword ptr [0x11a2a194] */
  ESI = (r32((uint32_t)(0x11a2a194)));
  /* 11a216ca push edi */
  push32((uint32_t)(EDI));
  /* 11a216cb push 0x11a2c158 */
  push32((uint32_t)(0x11a2c158u));
  /* 11a216d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a216d2 push 0x11a2c150 */
  push32((uint32_t)(0x11a2c150u));
  /* 11a216d7 mov ebx, ecx */
  EBX = (ECX);
  /* 11a216d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a216db call esi */
  call_ind((uint32_t)(ESI), 0x11a216ddu);
  /* 11a216dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a216e0 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a216e3 ja 0x11a21713 */
  if ((!C.cf&&!C.zf)) goto L_11a21713;
  /* 11a216e5 jmp dword ptr [eax*4 + 0x11a217b8] */
  switch (EAX) {
    case 0: goto L_11a216ec;
    case 1: goto L_11a216f0;
    case 2: goto L_11a216f7;
    case 3: goto L_11a216fe;
    case 4: goto L_11a21705;
    case 5: goto L_11a2170c;
    case 6: goto L_11a21736;
    case 7: goto L_11a2173a;
    case 8: goto L_11a21741;
    case 9: goto L_11a21748;
    case 10: goto L_11a2174f;
    case 11: goto L_11a21756;
    default: x86_unimpl("switch@0x11a216e5 out of table"); return;
  }
L_11a216ec:;
  /* 11a216ec xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a216ee jmp 0x11a21717 */
  goto L_11a21717;
L_11a216f0:;
  /* 11a216f0 mov edi, 1 */
  EDI = (0x1u);
  /* 11a216f5 jmp 0x11a21717 */
  goto L_11a21717;
L_11a216f7:;
  /* 11a216f7 mov edi, 2 */
  EDI = (0x2u);
  /* 11a216fc jmp 0x11a21717 */
  goto L_11a21717;
L_11a216fe:;
  /* 11a216fe mov edi, 3 */
  EDI = (0x3u);
  /* 11a21703 jmp 0x11a21717 */
  goto L_11a21717;
L_11a21705:;
  /* 11a21705 mov edi, 4 */
  EDI = (0x4u);
  /* 11a2170a jmp 0x11a21717 */
  goto L_11a21717;
L_11a2170c:;
  /* 11a2170c mov edi, 5 */
  EDI = (0x5u);
  /* 11a21711 jmp 0x11a21717 */
  goto L_11a21717;
L_11a21713:;
  /* 11a21713 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11a21717:;
  /* 11a21717 push 0x11a2c158 */
  push32((uint32_t)(0x11a2c158u));
  /* 11a2171c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2171e push 0x11a2c148 */
  push32((uint32_t)(0x11a2c148u));
  /* 11a21723 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a21725 call esi */
  call_ind((uint32_t)(ESI), 0x11a21727u);
  /* 11a21727 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2172a cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2172d ja 0x11a2175d */
  if ((!C.cf&&!C.zf)) goto L_11a2175d;
  /* 11a2172f jmp dword ptr [eax*4 + 0x11a217d0] */
  switch (EAX) {
    case 0: goto L_11a21736;
    case 1: goto L_11a2173a;
    case 2: goto L_11a21741;
    case 3: goto L_11a21748;
    case 4: goto L_11a2174f;
    case 5: goto L_11a21756;
    default: x86_unimpl("switch@0x11a2172f out of table"); return;
  }
L_11a21736:;
  /* 11a21736 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a21738 jmp 0x11a21761 */
  goto L_11a21761;
L_11a2173a:;
  /* 11a2173a mov esi, 1 */
  ESI = (0x1u);
  /* 11a2173f jmp 0x11a21761 */
  goto L_11a21761;
L_11a21741:;
  /* 11a21741 mov esi, 2 */
  ESI = (0x2u);
  /* 11a21746 jmp 0x11a21761 */
  goto L_11a21761;
L_11a21748:;
  /* 11a21748 mov esi, 3 */
  ESI = (0x3u);
  /* 11a2174d jmp 0x11a21761 */
  goto L_11a21761;
L_11a2174f:;
  /* 11a2174f mov esi, 4 */
  ESI = (0x4u);
  /* 11a21754 jmp 0x11a21761 */
  goto L_11a21761;
L_11a21756:;
  /* 11a21756 mov esi, 5 */
  ESI = (0x5u);
  /* 11a2175b jmp 0x11a21761 */
  goto L_11a21761;
L_11a2175d:;
  /* 11a2175d mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
L_11a21761:;
  /* 11a21761 mov ecx, ebx */
  ECX = (EBX);
  /* 11a21763 call 0x11a21260 */
  push32(0x11a21768u); f_11a21260();
  /* 11a21768 push edi */
  push32((uint32_t)(EDI));
  /* 11a21769 mov ecx, ebx */
  ECX = (EBX);
  /* 11a2176b call 0x11a22180 */
  push32(0x11a21770u); f_11a22180();
  /* 11a21770 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a21773 push esi */
  push32((uint32_t)(ESI));
  /* 11a21774 mov ecx, ebx */
  ECX = (EBX);
  /* 11a21776 lea ebp, [eax + eax*4] */
  EBP = ((uint32_t)(EAX + EAX*4));
  /* 11a21779 shl ebp, 2 */
  EBP = (sh_shl((uint32_t)(EBP), (0x2u)&0x1f, 32));
  /* 11a2177c call 0x11a22180 */
  push32(0x11a21781u); f_11a22180();
  /* 11a21781 mov ecx, eax */
  ECX = (EAX);
  /* 11a21783 mov eax, ebp */
  EAX = (EBP);
  /* 11a21785 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a21786 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a21788 push eax */
  push32((uint32_t)(EAX));
  /* 11a21789 lea eax, [esi + esi*2] */
  EAX = ((uint32_t)(ESI + ESI*2));
  /* 11a2178c lea edx, [eax + eax*4 + 0x11a2fe90] */
  EDX = ((uint32_t)(EAX + EAX*4 + 0x11a2fe90));
  /* 11a21793 lea eax, [edi + edi*2] */
  EAX = ((uint32_t)(EDI + EDI*2));
  /* 11a21796 push edx */
  push32((uint32_t)(EDX));
  /* 11a21797 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a21799 lea eax, [eax + eax*4 + 0x11a2fe90] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x11a2fe90));
  /* 11a217a0 push eax */
  push32((uint32_t)(EAX));
  /* 11a217a1 push 0x11a2c13c */
  push32((uint32_t)(0x11a2c13cu));
  /* 11a217a6 call dword ptr [0x11a2a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a18c))), 0x11a217acu);
  /* 11a217ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a217af pop edi */
  EDI = (pop32());
  /* 11a217b0 pop esi */
  ESI = (pop32());
  /* 11a217b1 pop ebp */
  EBP = (pop32());
  /* 11a217b2 pop ebx */
  EBX = (pop32());
  /* 11a217b3 pop ecx */
  ECX = (pop32());
  /* 11a217b4 ret  */
  ESPCHK(0x11a216c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100017f0 @ 0x11a217f0 (314 bytes, 113 insns) */
void f_11a217f0(void) {
  FTRACE(0x11a217f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a217f0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a217f1 mov ebx, dword ptr [0x11a2a194] */
  EBX = (r32((uint32_t)(0x11a2a194)));
  /* 11a217f7 push esi */
  push32((uint32_t)(ESI));
  /* 11a217f8 push edi */
  push32((uint32_t)(EDI));
  /* 11a217f9 push 0x11a2c1b8 */
  push32((uint32_t)(0x11a2c1b8u));
  /* 11a217fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21800 push 0x11a2c1ac */
  push32((uint32_t)(0x11a2c1acu));
  /* 11a21805 mov esi, ecx */
  ESI = (ECX);
  /* 11a21807 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a21809 call ebx */
  call_ind((uint32_t)(EBX), 0x11a2180bu);
  /* 11a2180b push 0x11a2c198 */
  push32((uint32_t)(0x11a2c198u));
  /* 11a21810 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21812 push 0x11a2c18c */
  push32((uint32_t)(0x11a2c18cu));
  /* 11a21817 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a21819 mov edi, eax */
  EDI = (EAX);
  /* 11a2181b call ebx */
  call_ind((uint32_t)(EBX), 0x11a2181du);
  /* 11a2181d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21820 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21823 je 0x11a218c8 */
  if (C.zf) goto L_11a218c8;
  /* 11a21829 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a2182a je 0x11a2187e */
  if (C.zf) goto L_11a2187e;
  /* 11a2182c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a2182d jne 0x11a21926 */
  if (!C.zf) goto L_11a21926;
  /* 11a21833 lea eax, [edi + edi*8] */
  EAX = ((uint32_t)(EDI + EDI*8));
  /* 11a21836 lea esi, [esi + eax*8] */
  ESI = ((uint32_t)(ESI + EAX*8));
  /* 11a21839 push esi */
  push32((uint32_t)(ESI));
  /* 11a2183a call dword ptr [0x11a2a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a198))), 0x11a21840u);
  /* 11a21840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a21845 je 0x11a2186c */
  if (C.zf) goto L_11a2186c;
  /* 11a21847 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21849 push esi */
  push32((uint32_t)(ESI));
  /* 11a2184a call dword ptr [0x11a2a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a180))), 0x11a21850u);
  /* 11a21850 mov cl, byte ptr [esi + 8] */
  CL = (r8((uint32_t)(ESI + 0x8)));
  /* 11a21853 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21854 call dword ptr [0x11a2a178] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a178))), 0x11a2185au);
  /* 11a2185a push 0x11a2c184 */
  push32((uint32_t)(0x11a2c184u));
  /* 11a2185f call dword ptr [0x11a2a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a188))), 0x11a21865u);
  /* 11a21865 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21868 pop edi */
  EDI = (pop32());
  /* 11a21869 pop esi */
  ESI = (pop32());
  /* 11a2186a pop ebx */
  EBX = (pop32());
  /* 11a2186b ret  */
  ESPCHK(0x11a217f0u, _esp0);
  ESP += 4; return;
L_11a2186c:;
  /* 11a2186c push 0x11a2c17c */
  push32((uint32_t)(0x11a2c17cu));
  /* 11a21871 call dword ptr [0x11a2a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a188))), 0x11a21877u);
  /* 11a21877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2187a pop edi */
  EDI = (pop32());
  /* 11a2187b pop esi */
  ESI = (pop32());
  /* 11a2187c pop ebx */
  EBX = (pop32());
  /* 11a2187d ret  */
  ESPCHK(0x11a217f0u, _esp0);
  ESP += 4; return;
L_11a2187e:;
  /* 11a2187e lea edx, [edi + edi*8] */
  EDX = ((uint32_t)(EDI + EDI*8));
  /* 11a21881 lea ebx, [esi + edx*8] */
  EBX = ((uint32_t)(ESI + EDX*8));
  /* 11a21884 push ebx */
  push32((uint32_t)(EBX));
  /* 11a21885 call dword ptr [0x11a2a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a198))), 0x11a2188bu);
  /* 11a2188b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2188e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a21890 jne 0x11a218bc */
  if (!C.zf) goto L_11a218bc;
  /* 11a21892 mov eax, dword ptr [esi + 0x2fb] */
  EAX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a21898 mov cl, byte ptr [esi + 0x33b] */
  CL = (r8((uint32_t)(ESI + 0x33b)));
  /* 11a2189e mov edx, dword ptr [esi + 0x2f7] */
  EDX = (r32((uint32_t)(ESI + 0x2f7)));
  /* 11a218a4 push eax */
  push32((uint32_t)(EAX));
  /* 11a218a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a218a6 mov ecx, dword ptr [esi + 0x2ff] */
  ECX = (r32((uint32_t)(ESI + 0x2ff)));
  /* 11a218ac lea eax, [esi + 0x2e8] */
  EAX = ((uint32_t)(ESI + 0x2e8));
  /* 11a218b2 push edx */
  push32((uint32_t)(EDX));
  /* 11a218b3 push eax */
  push32((uint32_t)(EAX));
  /* 11a218b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a218b5 mov ecx, ebx */
  ECX = (EBX);
  /* 11a218b7 call 0x11a222f0 */
  push32(0x11a218bcu); f_11a222f0();
L_11a218bc:;
  /* 11a218bc push edi */
  push32((uint32_t)(EDI));
  /* 11a218bd mov ecx, esi */
  ECX = (ESI);
  /* 11a218bf call 0x11a21930 */
  push32(0x11a218c4u); f_11a21930();
  /* 11a218c4 pop edi */
  EDI = (pop32());
  /* 11a218c5 pop esi */
  ESI = (pop32());
  /* 11a218c6 pop ebx */
  EBX = (pop32());
  /* 11a218c7 ret  */
  ESPCHK(0x11a217f0u, _esp0);
  ESP += 4; return;
L_11a218c8:;
  /* 11a218c8 lea edx, [edi + edi*8] */
  EDX = ((uint32_t)(EDI + EDI*8));
  /* 11a218cb lea esi, [esi + edx*8] */
  ESI = ((uint32_t)(ESI + EDX*8));
  /* 11a218ce push esi */
  push32((uint32_t)(ESI));
  /* 11a218cf call dword ptr [0x11a2a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a198))), 0x11a218d5u);
  /* 11a218d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a218d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a218da je 0x11a21918 */
  if (C.zf) goto L_11a21918;
  /* 11a218dc mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a218df mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a218e2 mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 11a218e5 add esi, 0x29 */
  { uint32_t _a=(ESI),_b=(0x29u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a218e8 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a218eb lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 11a218ee push edx */
  push32((uint32_t)(EDX));
  /* 11a218ef mov edx, dword ptr [esi - 0x1c] */
  EDX = (r32((uint32_t)(ESI + -0x1c)));
  /* 11a218f2 lea eax, [eax + eax*4 + 0x11a2fe90] */
  EAX = ((uint32_t)(EAX + EAX*4 + 0x11a2fe90));
  /* 11a218f9 lea ecx, [ecx + ecx*4 + 0x11a2fe90] */
  ECX = ((uint32_t)(ECX + ECX*4 + 0x11a2fe90));
  /* 11a21900 push eax */
  push32((uint32_t)(EAX));
  /* 11a21901 push edx */
  push32((uint32_t)(EDX));
  /* 11a21902 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21903 push eax */
  push32((uint32_t)(EAX));
  /* 11a21904 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21905 push esi */
  push32((uint32_t)(ESI));
  /* 11a21906 push 0x11a2c174 */
  push32((uint32_t)(0x11a2c174u));
  /* 11a2190b call dword ptr [0x11a2a18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a18c))), 0x11a21911u);
  /* 11a21911 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21914 pop edi */
  EDI = (pop32());
  /* 11a21915 pop esi */
  ESI = (pop32());
  /* 11a21916 pop ebx */
  EBX = (pop32());
  /* 11a21917 ret  */
  ESPCHK(0x11a217f0u, _esp0);
  ESP += 4; return;
L_11a21918:;
  /* 11a21918 push 0x11a2c16c */
  push32((uint32_t)(0x11a2c16cu));
  /* 11a2191d call dword ptr [0x11a2a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a188))), 0x11a21923u);
  /* 11a21923 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a21926:;
  /* 11a21926 pop edi */
  EDI = (pop32());
  /* 11a21927 pop esi */
  ESI = (pop32());
  /* 11a21928 pop ebx */
  EBX = (pop32());
  /* 11a21929 ret  */
  ESPCHK(0x11a217f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001930 @ 0x11a21930 (224 bytes, 73 insns) [2 switch table(s)] */
void f_11a21930(void) {
  FTRACE(0x11a21930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21930 push ebx */
  push32((uint32_t)(EBX));
  /* 11a21931 push ebp */
  push32((uint32_t)(EBP));
  /* 11a21932 push esi */
  push32((uint32_t)(ESI));
  /* 11a21933 push edi */
  push32((uint32_t)(EDI));
  /* 11a21934 mov edi, ecx */
  EDI = (ECX);
  /* 11a21936 mov esi, dword ptr [0x11a2a194] */
  ESI = (r32((uint32_t)(0x11a2a194)));
  /* 11a2193c mov eax, dword ptr [edi + 0x2d0] */
  EAX = (r32((uint32_t)(EDI + 0x2d0)));
  /* 11a21942 push eax */
  push32((uint32_t)(EAX));
  /* 11a21943 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21945 push 0x11a2c1f8 */
  push32((uint32_t)(0x11a2c1f8u));
  /* 11a2194a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2194c call esi */
  call_ind((uint32_t)(ESI), 0x11a2194eu);
  /* 11a2194e push 0x11a2c158 */
  push32((uint32_t)(0x11a2c158u));
  /* 11a21953 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21955 push 0x11a2c150 */
  push32((uint32_t)(0x11a2c150u));
  /* 11a2195a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2195c mov ebp, eax */
  EBP = (EAX);
  /* 11a2195e call esi */
  call_ind((uint32_t)(ESI), 0x11a21960u);
  /* 11a21960 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21963 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21966 ja 0x11a21996 */
  if ((!C.cf&&!C.zf)) goto L_11a21996;
  /* 11a21968 jmp dword ptr [eax*4 + 0x11a21a10] */
  switch (EAX) {
    case 0: goto L_11a2196f;
    case 1: goto L_11a21973;
    case 2: goto L_11a2197a;
    case 3: goto L_11a21981;
    case 4: goto L_11a21988;
    case 5: goto L_11a2198f;
    case 6: goto L_11a219b9;
    case 7: goto L_11a219bd;
    case 8: goto L_11a219c4;
    case 9: goto L_11a219cb;
    case 10: goto L_11a219d2;
    case 11: goto L_11a219d9;
    default: x86_unimpl("switch@0x11a21968 out of table"); return;
  }
L_11a2196f:;
  /* 11a2196f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a21971 jmp 0x11a2199a */
  goto L_11a2199a;
L_11a21973:;
  /* 11a21973 mov ebx, 1 */
  EBX = (0x1u);
  /* 11a21978 jmp 0x11a2199a */
  goto L_11a2199a;
L_11a2197a:;
  /* 11a2197a mov ebx, 2 */
  EBX = (0x2u);
  /* 11a2197f jmp 0x11a2199a */
  goto L_11a2199a;
L_11a21981:;
  /* 11a21981 mov ebx, 3 */
  EBX = (0x3u);
  /* 11a21986 jmp 0x11a2199a */
  goto L_11a2199a;
L_11a21988:;
  /* 11a21988 mov ebx, 4 */
  EBX = (0x4u);
  /* 11a2198d jmp 0x11a2199a */
  goto L_11a2199a;
L_11a2198f:;
  /* 11a2198f mov ebx, 5 */
  EBX = (0x5u);
  /* 11a21994 jmp 0x11a2199a */
  goto L_11a2199a;
L_11a21996:;
  /* 11a21996 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
L_11a2199a:;
  /* 11a2199a push 0x11a2c158 */
  push32((uint32_t)(0x11a2c158u));
  /* 11a2199f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a219a1 push 0x11a2c148 */
  push32((uint32_t)(0x11a2c148u));
  /* 11a219a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a219a8 call esi */
  call_ind((uint32_t)(ESI), 0x11a219aau);
  /* 11a219aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a219ad cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a219b0 ja 0x11a219e0 */
  if ((!C.cf&&!C.zf)) goto L_11a219e0;
  /* 11a219b2 jmp dword ptr [eax*4 + 0x11a21a28] */
  switch (EAX) {
    case 0: goto L_11a219b9;
    case 1: goto L_11a219bd;
    case 2: goto L_11a219c4;
    case 3: goto L_11a219cb;
    case 4: goto L_11a219d2;
    case 5: goto L_11a219d9;
    default: x86_unimpl("switch@0x11a219b2 out of table"); return;
  }
L_11a219b9:;
  /* 11a219b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a219bb jmp 0x11a219e4 */
  goto L_11a219e4;
L_11a219bd:;
  /* 11a219bd mov ecx, 1 */
  ECX = (0x1u);
  /* 11a219c2 jmp 0x11a219e4 */
  goto L_11a219e4;
L_11a219c4:;
  /* 11a219c4 mov ecx, 2 */
  ECX = (0x2u);
  /* 11a219c9 jmp 0x11a219e4 */
  goto L_11a219e4;
L_11a219cb:;
  /* 11a219cb mov ecx, 3 */
  ECX = (0x3u);
  /* 11a219d0 jmp 0x11a219e4 */
  goto L_11a219e4;
L_11a219d2:;
  /* 11a219d2 mov ecx, 4 */
  ECX = (0x4u);
  /* 11a219d7 jmp 0x11a219e4 */
  goto L_11a219e4;
L_11a219d9:;
  /* 11a219d9 mov ecx, 5 */
  ECX = (0x5u);
  /* 11a219de jmp 0x11a219e4 */
  goto L_11a219e4;
L_11a219e0:;
  /* 11a219e0 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
L_11a219e4:;
  /* 11a219e4 mov eax, dword ptr [edi + ebp*4 + 0x2d4] */
  EAX = (r32((uint32_t)(EDI + EBP*4 + 0x2d4)));
  /* 11a219eb push ecx */
  push32((uint32_t)(ECX));
  /* 11a219ec push ebx */
  push32((uint32_t)(EBX));
  /* 11a219ed mov ecx, dword ptr [eax + 0x2f7] */
  ECX = (r32((uint32_t)(EAX + 0x2f7)));
  /* 11a219f3 add eax, 0x2e8 */
  { uint32_t _a=(EAX),_b=(0x2e8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a219f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a219f9 push eax */
  push32((uint32_t)(EAX));
  /* 11a219fa mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11a219fe lea edx, [eax + eax*8] */
  EDX = ((uint32_t)(EAX + EAX*8));
  /* 11a21a01 lea ecx, [edi + edx*8] */
  ECX = ((uint32_t)(EDI + EDX*8));
  /* 11a21a04 call 0x11a22370 */
  push32(0x11a21a09u); f_11a22370();
  /* 11a21a09 pop edi */
  EDI = (pop32());
  /* 11a21a0a pop esi */
  ESI = (pop32());
  /* 11a21a0b pop ebp */
  EBP = (pop32());
  /* 11a21a0c pop ebx */
  EBX = (pop32());
  /* 11a21a0d ret 4 */
  ESPCHK(0x11a21930u, _esp0);
  ESP += 8; return;
}

/* FUN_10001a40 @ 0x11a21a40 (470 bytes, 168 insns) */
void f_11a21a40(void) {
  FTRACE(0x11a21a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21a40 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21a43 push ebx */
  push32((uint32_t)(EBX));
  /* 11a21a44 push ebp */
  push32((uint32_t)(EBP));
  /* 11a21a45 push esi */
  push32((uint32_t)(ESI));
  /* 11a21a46 mov esi, ecx */
  ESI = (ECX);
  /* 11a21a48 push edi */
  push32((uint32_t)(EDI));
  /* 11a21a49 mov al, byte ptr [esi + 0x349] */
  AL = (r8((uint32_t)(ESI + 0x349)));
  /* 11a21a4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a21a51 je 0x11a21c0c */
  if (C.zf) goto L_11a21c0c;
  /* 11a21a57 mov eax, dword ptr [esi + 0x2fb] */
  EAX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a21a5d push 7 */
  push32((uint32_t)(0x7u));
  /* 11a21a5f push 0x11a2fac0 */
  push32((uint32_t)(0x11a2fac0u));
  /* 11a21a64 push eax */
  push32((uint32_t)(EAX));
  /* 11a21a65 call dword ptr [0x11a2a184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a184))), 0x11a21a6bu);
  /* 11a21a6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a21a70 je 0x11a21c0c */
  if (C.zf) goto L_11a21c0c;
  /* 11a21a76 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a21a78 mov edi, esi */
  EDI = (ESI);
L_11a21a7a:;
  /* 11a21a7a mov al, byte ptr [edi + 0x19] */
  AL = (r8((uint32_t)(EDI + 0x19)));
  /* 11a21a7d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a21a7f jne 0x11a21a96 */
  if (!C.zf) goto L_11a21a96;
  /* 11a21a81 mov ecx, dword ptr [esi + 0x2fb] */
  ECX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a21a87 push edi */
  push32((uint32_t)(EDI));
  /* 11a21a88 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21a89 call dword ptr [0x11a2a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a17c))), 0x11a21a8fu);
  /* 11a21a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21a92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a21a94 jne 0x11a21b07 */
  if (!C.zf) goto L_11a21b07;
L_11a21a96:;
  /* 11a21a96 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a21a97 add edi, 0x48 */
  { uint32_t _a=(EDI),_b=(0x48u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21a9a cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21a9d jl 0x11a21a7a */
  if ((C.sf!=C.of)) goto L_11a21a7a;
  /* 11a21a9f mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 11a21aa3 mov dword ptr [esp + 0x10], 0 */
  w32((uint32_t)(ESP + 0x10), (0x0u));
  /* 11a21aab lea ebx, [esi + 0x2d4] */
  EBX = ((uint32_t)(ESI + 0x2d4));
L_11a21ab1:;
  /* 11a21ab1 cmp dword ptr [ebx], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21ab4 je 0x11a21aec */
  if (C.zf) goto L_11a21aec;
  /* 11a21ab6 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11a21ab8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a21aba:;
  /* 11a21aba mov edx, dword ptr [ebx] */
  EDX = (r32((uint32_t)(EBX)));
  /* 11a21abc mov cl, byte ptr [edx + edi + 0x19] */
  CL = (r8((uint32_t)(EDX + EDI*1 + 0x19)));
  /* 11a21ac0 lea eax, [edx + edi] */
  EAX = ((uint32_t)(EDX + EDI*1));
  /* 11a21ac3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11a21ac5 je 0x11a21ae0 */
  if (C.zf) goto L_11a21ae0;
  /* 11a21ac7 push eax */
  push32((uint32_t)(EAX));
  /* 11a21ac8 mov eax, dword ptr [esi + 0x2fb] */
  EAX = (r32((uint32_t)(ESI + 0x2fb)));
  /* 11a21ace push eax */
  push32((uint32_t)(EAX));
  /* 11a21acf call dword ptr [0x11a2a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a17c))), 0x11a21ad5u);
  /* 11a21ad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a21ada jne 0x11a21b87 */
  if (!C.zf) goto L_11a21b87;
L_11a21ae0:;
  /* 11a21ae0 add edi, 0x48 */
  { uint32_t _a=(EDI),_b=(0x48u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21ae3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a21ae4 cmp edi, 0x2d0 */
  { uint32_t _a=(EDI),_b=(0x2d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21aea jl 0x11a21aba */
  if ((C.sf!=C.of)) goto L_11a21aba;
L_11a21aec:;
  /* 11a21aec mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a21af0 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21af3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a21af4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21af7 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a21afb jl 0x11a21ab1 */
  if ((C.sf!=C.of)) goto L_11a21ab1;
  /* 11a21afd pop edi */
  EDI = (pop32());
  /* 11a21afe pop esi */
  ESI = (pop32());
  /* 11a21aff pop ebp */
  EBP = (pop32());
  /* 11a21b00 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a21b02 pop ebx */
  EBX = (pop32());
  /* 11a21b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21b06 ret  */
  ESPCHK(0x11a21a40u, _esp0);
  ESP += 4; return;
L_11a21b07:;
  /* 11a21b07 lea edx, [ebx + ebx*8] */
  EDX = ((uint32_t)(EBX + EBX*8));
  /* 11a21b0a mov dword ptr [esp + 0x14], ebx */
  w32((uint32_t)(ESP + 0x14), (EBX));
  /* 11a21b0e lea edi, [esi + edx*8] */
  EDI = ((uint32_t)(ESI + EDX*8));
  /* 11a21b11 mov byte ptr [edi + 0x19], 1 */
  w8((uint32_t)(EDI + 0x19), (0x1u));
  /* 11a21b15 mov eax, dword ptr [esi + 0x2ff] */
  EAX = (r32((uint32_t)(ESI + 0x2ff)));
  /* 11a21b1b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21b1e je 0x11a21b32 */
  if (C.zf) goto L_11a21b32;
  /* 11a21b20 push edi */
  push32((uint32_t)(EDI));
  /* 11a21b21 mov ecx, esi */
  ECX = (ESI);
  /* 11a21b23 call 0x11a21c20 */
  push32(0x11a21b28u); f_11a21c20();
  /* 11a21b28 push edi */
  push32((uint32_t)(EDI));
  /* 11a21b29 mov ecx, esi */
  ECX = (ESI);
  /* 11a21b2b call 0x11a21c60 */
  push32(0x11a21b30u); f_11a21c60();
  /* 11a21b30 jmp 0x11a21b6c */
  goto L_11a21b6c;
L_11a21b32:;
  /* 11a21b32 mov ecx, esi */
  ECX = (ESI);
  /* 11a21b34 call 0x11a21260 */
  push32(0x11a21b39u); f_11a21260();
  /* 11a21b39 mov eax, dword ptr [edi + 0x11] */
  EAX = (r32((uint32_t)(EDI + 0x11)));
  /* 11a21b3c mov ecx, esi */
  ECX = (ESI);
  /* 11a21b3e push eax */
  push32((uint32_t)(EAX));
  /* 11a21b3f call 0x11a22180 */
  push32(0x11a21b44u); f_11a22180();
  /* 11a21b44 mov ebp, eax */
  EBP = (EAX);
  /* 11a21b46 imul ebp, dword ptr [edi + 0x15] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EDI + 0x15)))*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a21b4a mov dword ptr [edi + 0x15], 0 */
  w32((uint32_t)(EDI + 0x15), (0x0u));
  /* 11a21b51 mov ecx, dword ptr [edi + 9] */
  ECX = (r32((uint32_t)(EDI + 0x9)));
  /* 11a21b54 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21b55 mov ecx, esi */
  ECX = (ESI);
  /* 11a21b57 call 0x11a22180 */
  push32(0x11a21b5cu); f_11a22180();
  /* 11a21b5c mov ecx, eax */
  ECX = (EAX);
  /* 11a21b5e mov eax, ebp */
  EAX = (EBP);
  /* 11a21b60 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a21b61 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a21b63 mov dword ptr [edi + 0xd], eax */
  w32((uint32_t)(EDI + 0xd), (EAX));
  /* 11a21b66 mov edx, dword ptr [edi + 0x3c] */
  EDX = (r32((uint32_t)(EDI + 0x3c)));
  /* 11a21b69 mov dword ptr [edi + 0x40], edx */
  w32((uint32_t)(EDI + 0x40), (EDX));
L_11a21b6c:;
  /* 11a21b6c mov eax, dword ptr [edi + 0x3c] */
  EAX = (r32((uint32_t)(EDI + 0x3c)));
  /* 11a21b6f mov ecx, dword ptr [edi + 0x38] */
  ECX = (r32((uint32_t)(EDI + 0x38)));
  /* 11a21b72 push eax */
  push32((uint32_t)(EAX));
  /* 11a21b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21b74 push edi */
  push32((uint32_t)(EDI));
  /* 11a21b75 call 0x11a23e60 */
  push32(0x11a21b7au); f_11a23e60();
  /* 11a21b7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21b7d mov al, 1 */
  AL = (0x1u);
  /* 11a21b7f pop edi */
  EDI = (pop32());
  /* 11a21b80 pop esi */
  ESI = (pop32());
  /* 11a21b81 pop ebp */
  EBP = (pop32());
  /* 11a21b82 pop ebx */
  EBX = (pop32());
  /* 11a21b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21b86 ret  */
  ESPCHK(0x11a21a40u, _esp0);
  ESP += 4; return;
L_11a21b87:;
  /* 11a21b87 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a21b8b lea edi, [ebp + ebp*8] */
  EDI = ((uint32_t)(EBP + EBP*8));
  /* 11a21b8f shl edi, 3 */
  EDI = (sh_shl((uint32_t)(EDI), (0x3u)&0x1f, 32));
  /* 11a21b92 mov ecx, dword ptr [esi + ebx*4 + 0x2d4] */
  ECX = (r32((uint32_t)(ESI + EBX*4 + 0x2d4)));
  /* 11a21b99 mov byte ptr [ecx + edi + 0x19], 0 */
  w8((uint32_t)(ECX + EDI*1 + 0x19), (0x0u));
  /* 11a21b9e mov eax, dword ptr [esi + 0x2ff] */
  EAX = (r32((uint32_t)(ESI + 0x2ff)));
  /* 11a21ba4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21ba7 jne 0x11a21bc5 */
  if (!C.zf) goto L_11a21bc5;
  /* 11a21ba9 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a21bad mov ecx, esi */
  ECX = (ESI);
  /* 11a21baf lea edx, [eax + eax*8] */
  EDX = ((uint32_t)(EAX + EAX*8));
  /* 11a21bb2 lea ebp, [esi + edx*8] */
  EBP = ((uint32_t)(ESI + EDX*8));
  /* 11a21bb5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a21bb6 call 0x11a21c20 */
  push32(0x11a21bbbu); f_11a21c20();
  /* 11a21bbb push ebp */
  push32((uint32_t)(EBP));
  /* 11a21bbc mov ecx, esi */
  ECX = (ESI);
  /* 11a21bbe call 0x11a21c60 */
  push32(0x11a21bc3u); f_11a21c60();
  /* 11a21bc3 jmp 0x11a21bd7 */
  goto L_11a21bd7;
L_11a21bc5:;
  /* 11a21bc5 mov eax, dword ptr [esi + ebx*4 + 0x2d4] */
  EAX = (r32((uint32_t)(ESI + EBX*4 + 0x2d4)));
  /* 11a21bcc mov ecx, esi */
  ECX = (ESI);
  /* 11a21bce push eax */
  push32((uint32_t)(EAX));
  /* 11a21bcf add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21bd1 push eax */
  push32((uint32_t)(EAX));
  /* 11a21bd2 call 0x11a21cc0 */
  push32(0x11a21bd7u); f_11a21cc0();
L_11a21bd7:;
  /* 11a21bd7 mov ecx, dword ptr [esi + ebx*4 + 0x2d4] */
  ECX = (r32((uint32_t)(ESI + EBX*4 + 0x2d4)));
  /* 11a21bde mov edx, dword ptr [ecx + edi + 0x38] */
  EDX = (r32((uint32_t)(ECX + EDI*1 + 0x38)));
  /* 11a21be2 lea eax, [ecx + edi] */
  EAX = ((uint32_t)(ECX + EDI*1));
  /* 11a21be5 mov dword ptr [eax + 0x40], edx */
  w32((uint32_t)(EAX + 0x40), (EDX));
  /* 11a21be8 mov eax, dword ptr [esi + ebx*4 + 0x2d4] */
  EAX = (r32((uint32_t)(ESI + EBX*4 + 0x2d4)));
  /* 11a21bef add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21bf1 mov ecx, dword ptr [eax + 0x38] */
  ECX = (r32((uint32_t)(EAX + 0x38)));
  /* 11a21bf4 mov edx, dword ptr [eax + 0x3c] */
  EDX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11a21bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21bf8 push edx */
  push32((uint32_t)(EDX));
  /* 11a21bf9 push eax */
  push32((uint32_t)(EAX));
  /* 11a21bfa call 0x11a23e60 */
  push32(0x11a21bffu); f_11a23e60();
  /* 11a21bff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21c02 mov al, 1 */
  AL = (0x1u);
  /* 11a21c04 pop edi */
  EDI = (pop32());
  /* 11a21c05 pop esi */
  ESI = (pop32());
  /* 11a21c06 pop ebp */
  EBP = (pop32());
  /* 11a21c07 pop ebx */
  EBX = (pop32());
  /* 11a21c08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21c0b ret  */
  ESPCHK(0x11a21a40u, _esp0);
  ESP += 4; return;
L_11a21c0c:;
  /* 11a21c0c pop edi */
  EDI = (pop32());
  /* 11a21c0d pop esi */
  ESI = (pop32());
  /* 11a21c0e pop ebp */
  EBP = (pop32());
  /* 11a21c0f xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a21c11 pop ebx */
  EBX = (pop32());
  /* 11a21c12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21c15 ret  */
  ESPCHK(0x11a21a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c20 @ 0x11a21c20 (51 bytes, 22 insns) */
void f_11a21c20(void) {
  FTRACE(0x11a21c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21c20 push esi */
  push32((uint32_t)(ESI));
  /* 11a21c21 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a21c25 push edi */
  push32((uint32_t)(EDI));
  /* 11a21c26 mov edi, ecx */
  EDI = (ECX);
  /* 11a21c28 mov eax, dword ptr [esi + 0xd] */
  EAX = (r32((uint32_t)(ESI + 0xd)));
  /* 11a21c2b mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21c2e push eax */
  push32((uint32_t)(EAX));
  /* 11a21c2f push ecx */
  push32((uint32_t)(ECX));
  /* 11a21c30 mov ecx, edi */
  ECX = (EDI);
  /* 11a21c32 call 0x11a221f0 */
  push32(0x11a21c37u); f_11a221f0();
  /* 11a21c37 mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 11a21c3a mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21c3d push edx */
  push32((uint32_t)(EDX));
  /* 11a21c3e push eax */
  push32((uint32_t)(EAX));
  /* 11a21c3f mov ecx, edi */
  ECX = (EDI);
  /* 11a21c41 call 0x11a221f0 */
  push32(0x11a21c46u); f_11a221f0();
  /* 11a21c46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a21c48 pop edi */
  EDI = (pop32());
  /* 11a21c49 mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 11a21c4c mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 11a21c4f pop esi */
  ESI = (pop32());
  /* 11a21c50 ret 4 */
  ESPCHK(0x11a21c20u, _esp0);
  ESP += 8; return;
}

/* FUN_10001c60 @ 0x11a21c60 (96 bytes, 36 insns) */
void f_11a21c60(void) {
  FTRACE(0x11a21c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21c60 push esi */
  push32((uint32_t)(ESI));
  /* 11a21c61 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a21c65 push edi */
  push32((uint32_t)(EDI));
  /* 11a21c66 mov edi, ecx */
  EDI = (ECX);
  /* 11a21c68 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21c6b push eax */
  push32((uint32_t)(EAX));
  /* 11a21c6c call 0x11a22110 */
  push32(0x11a21c71u); f_11a22110();
  /* 11a21c71 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21c76 jl 0x11a21c94 */
  if ((C.sf!=C.of)) goto L_11a21c94;
  /* 11a21c78 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21c7b push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 11a21c80 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21c81 mov ecx, edi */
  ECX = (EDI);
  /* 11a21c83 mov dword ptr [esi + 0xd], 0x1f4 */
  w32((uint32_t)(ESI + 0xd), (0x1f4u));
  /* 11a21c8a call 0x11a221f0 */
  push32(0x11a21c8fu); f_11a221f0();
  /* 11a21c8f pop edi */
  EDI = (pop32());
  /* 11a21c90 pop esi */
  ESI = (pop32());
  /* 11a21c91 ret 4 */
  ESPCHK(0x11a21c60u, _esp0);
  ESP += 8; return;
L_11a21c94:;
  /* 11a21c94 mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21c97 mov ecx, edi */
  ECX = (EDI);
  /* 11a21c99 push edx */
  push32((uint32_t)(EDX));
  /* 11a21c9a call 0x11a22110 */
  push32(0x11a21c9fu); f_11a22110();
  /* 11a21c9f mov dword ptr [esi + 0xd], eax */
  w32((uint32_t)(ESI + 0xd), (EAX));
  /* 11a21ca2 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21ca5 push eax */
  push32((uint32_t)(EAX));
  /* 11a21ca6 mov ecx, edi */
  ECX = (EDI);
  /* 11a21ca8 call 0x11a22110 */
  push32(0x11a21cadu); f_11a22110();
  /* 11a21cad mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21cb0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a21cb2 push eax */
  push32((uint32_t)(EAX));
  /* 11a21cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21cb4 mov ecx, edi */
  ECX = (EDI);
  /* 11a21cb6 call 0x11a221f0 */
  push32(0x11a21cbbu); f_11a221f0();
  /* 11a21cbb pop edi */
  EDI = (pop32());
  /* 11a21cbc pop esi */
  ESI = (pop32());
  /* 11a21cbd ret 4 */
  ESPCHK(0x11a21c60u, _esp0);
  ESP += 8; return;
}

/* FUN_10001cc0 @ 0x11a21cc0 (1094 bytes, 393 insns) */
void f_11a21cc0(void) {
  FTRACE(0x11a21cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a21cc0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a21cc1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a21cc2 push esi */
  push32((uint32_t)(ESI));
  /* 11a21cc3 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a21cc7 push edi */
  push32((uint32_t)(EDI));
  /* 11a21cc8 mov edi, ecx */
  EDI = (ECX);
  /* 11a21cca xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11a21ccc cmp dword ptr [edi + 0x2ff], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x2ff))),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21cd2 jne 0x11a2201c */
  if (!C.zf) goto L_11a2201c;
  /* 11a21cd8 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11a21cdb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21cde jne 0x11a21e25 */
  if (!C.zf) goto L_11a21e25;
  /* 11a21ce4 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21ce7 mov ebp, dword ptr [esp + 0x18] */
  EBP = (r32((uint32_t)(ESP + 0x18)));
  /* 11a21ceb push eax */
  push32((uint32_t)(EAX));
  /* 11a21cec mov ecx, ebp */
  ECX = (EBP);
  /* 11a21cee call 0x11a22180 */
  push32(0x11a21cf3u); f_11a22180();
  /* 11a21cf3 imul eax, dword ptr [esi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESI + 0xd)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a21cf7 mov ecx, dword ptr [esi + 0x11] */
  ECX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21cfa mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 11a21cfe push ecx */
  push32((uint32_t)(ECX));
  /* 11a21cff mov ecx, edi */
  ECX = (EDI);
  /* 11a21d01 call 0x11a222d0 */
  push32(0x11a21d06u); f_11a222d0();
  /* 11a21d06 mov dl, byte ptr [edi + 0x33b] */
  DL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21d0c push eax */
  push32((uint32_t)(EAX));
  /* 11a21d0d dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11a21d0f push edx */
  push32((uint32_t)(EDX));
  /* 11a21d10 call dword ptr [0x11a2a174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a174))), 0x11a21d16u);
  /* 11a21d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21d19 mov ebx, eax */
  EBX = (EAX);
  /* 11a21d1b mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21d1e mov ecx, ebp */
  ECX = (EBP);
  /* 11a21d20 push eax */
  push32((uint32_t)(EAX));
  /* 11a21d21 call 0x11a22180 */
  push32(0x11a21d26u); f_11a22180();
  /* 11a21d26 imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a21d29 cmp dword ptr [esp + 0x14], ebx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21d2d jg 0x11a21d97 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a21d97;
  /* 11a21d2f mov ecx, dword ptr [esi + 0xd] */
  ECX = (r32((uint32_t)(ESI + 0xd)));
  /* 11a21d32 mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21d35 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21d36 push edx */
  push32((uint32_t)(EDX));
  /* 11a21d37 mov ecx, edi */
  ECX = (EDI);
  /* 11a21d39 call 0x11a222d0 */
  push32(0x11a21d3eu); f_11a222d0();
  /* 11a21d3e push eax */
  push32((uint32_t)(EAX));
  /* 11a21d3f mov al, byte ptr [edi + 0x33b] */
  AL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21d45 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a21d47 push eax */
  push32((uint32_t)(EAX));
  /* 11a21d48 call dword ptr [0x11a2a190] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a190))), 0x11a21d4eu);
  /* 11a21d4e mov ecx, dword ptr [esi + 0x11] */
  ECX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21d51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21d54 mov dword ptr [esi + 0xd], 0 */
  w32((uint32_t)(ESI + 0xd), (0x0u));
  /* 11a21d5b push ecx */
  push32((uint32_t)(ECX));
  /* 11a21d5c mov ecx, ebp */
  ECX = (EBP);
  /* 11a21d5e call 0x11a22180 */
  push32(0x11a21d63u); f_11a22180();
  /* 11a21d63 mov ecx, eax */
  ECX = (EAX);
  /* 11a21d65 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a21d69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a21d6a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a21d6c mov edx, dword ptr [esi + 0x11] */
  EDX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21d6f mov ecx, edi */
  ECX = (EDI);
  /* 11a21d71 push edx */
  push32((uint32_t)(EDX));
  /* 11a21d72 mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 11a21d75 call 0x11a222d0 */
  push32(0x11a21d7au); f_11a222d0();
  /* 11a21d7a push eax */
  push32((uint32_t)(EAX));
  /* 11a21d7b mov al, byte ptr [edi + 0x33b] */
  AL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21d81 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a21d83 push eax */
  push32((uint32_t)(EAX));
  /* 11a21d84 call dword ptr [0x11a2a174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a174))), 0x11a21d8au);
  /* 11a21d8a mov edx, dword ptr [esi + 0x15] */
  EDX = (r32((uint32_t)(ESI + 0x15)));
  /* 11a21d8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21d90 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21d92 jmp 0x11a21fc8 */
  goto L_11a21fc8;
L_11a21d97:;
  /* 11a21d97 mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21d9a mov ecx, edi */
  ECX = (EDI);
  /* 11a21d9c push eax */
  push32((uint32_t)(EAX));
  /* 11a21d9d call 0x11a222d0 */
  push32(0x11a21da2u); f_11a222d0();
  /* 11a21da2 mov cl, byte ptr [edi + 0x33b] */
  CL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21da8 push eax */
  push32((uint32_t)(EAX));
  /* 11a21da9 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11a21dab push ecx */
  push32((uint32_t)(ECX));
  /* 11a21dac call dword ptr [0x11a2a174] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a174))), 0x11a21db2u);
  /* 11a21db2 mov edx, dword ptr [esi + 0x11] */
  EDX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21db5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21db8 mov ecx, edi */
  ECX = (EDI);
  /* 11a21dba mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 11a21dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21dbf push edx */
  push32((uint32_t)(EDX));
  /* 11a21dc0 call 0x11a222d0 */
  push32(0x11a21dc5u); f_11a222d0();
  /* 11a21dc5 push eax */
  push32((uint32_t)(EAX));
  /* 11a21dc6 mov al, byte ptr [edi + 0x33b] */
  AL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21dcc dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a21dce push eax */
  push32((uint32_t)(EAX));
  /* 11a21dcf call dword ptr [0x11a2a16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a16c))), 0x11a21dd5u);
  /* 11a21dd5 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21dd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21ddb push ecx */
  push32((uint32_t)(ECX));
  /* 11a21ddc mov ecx, ebp */
  ECX = (EBP);
  /* 11a21dde call 0x11a22180 */
  push32(0x11a21de3u); f_11a22180();
  /* 11a21de3 mov ecx, eax */
  ECX = (EAX);
  /* 11a21de5 mov eax, ebx */
  EAX = (EBX);
  /* 11a21de7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a21de8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a21dea mov ecx, dword ptr [esi + 0xd] */
  ECX = (r32((uint32_t)(ESI + 0xd)));
  /* 11a21ded mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21df0 push edx */
  push32((uint32_t)(EDX));
  /* 11a21df1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21df3 mov dword ptr [esi + 0xd], ecx */
  w32((uint32_t)(ESI + 0xd), (ECX));
  /* 11a21df6 mov ecx, ebp */
  ECX = (EBP);
  /* 11a21df8 call 0x11a22180 */
  push32(0x11a21dfdu); f_11a22180();
  /* 11a21dfd mov ecx, eax */
  ECX = (EAX);
  /* 11a21dff mov eax, ebx */
  EAX = (EBX);
  /* 11a21e01 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a21e02 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a21e04 mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21e07 mov ecx, edi */
  ECX = (EDI);
  /* 11a21e09 push eax */
  push32((uint32_t)(EAX));
  /* 11a21e0a push edx */
  push32((uint32_t)(EDX));
  /* 11a21e0b call 0x11a222d0 */
  push32(0x11a21e10u); f_11a222d0();
  /* 11a21e10 push eax */
  push32((uint32_t)(EAX));
  /* 11a21e11 mov al, byte ptr [edi + 0x33b] */
  AL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21e17 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a21e19 push eax */
  push32((uint32_t)(EAX));
  /* 11a21e1a call dword ptr [0x11a2a190] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a190))), 0x11a21e20u);
  /* 11a21e20 jmp 0x11a22019 */
  goto L_11a22019;
L_11a21e25:;
  /* 11a21e25 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21e28 je 0x11a21f33 */
  if (C.zf) goto L_11a21f33;
  /* 11a21e2e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21e31 je 0x11a21f33 */
  if (C.zf) goto L_11a21f33;
  /* 11a21e37 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21e3a jne 0x11a2201c */
  if (!C.zf) goto L_11a2201c;
  /* 11a21e40 mov ecx, edi */
  ECX = (EDI);
  /* 11a21e42 call 0x11a21260 */
  push32(0x11a21e47u); f_11a21260();
  /* 11a21e47 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21e4a push ecx */
  push32((uint32_t)(ECX));
  /* 11a21e4b mov ecx, edi */
  ECX = (EDI);
  /* 11a21e4d call 0x11a222d0 */
  push32(0x11a21e52u); f_11a222d0();
  /* 11a21e52 mov dl, byte ptr [edi + 0x33b] */
  DL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21e58 mov ebx, dword ptr [0x11a2a174] */
  EBX = (r32((uint32_t)(0x11a2a174)));
  /* 11a21e5e dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11a21e60 push eax */
  push32((uint32_t)(EAX));
  /* 11a21e61 push edx */
  push32((uint32_t)(EDX));
  /* 11a21e62 call ebx */
  call_ind((uint32_t)(EBX), 0x11a21e64u);
  /* 11a21e64 mov ecx, dword ptr [esi + 0xd] */
  ECX = (r32((uint32_t)(ESI + 0xd)));
  /* 11a21e67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21e6a add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21e6c mov ecx, edi */
  ECX = (EDI);
  /* 11a21e6e push eax */
  push32((uint32_t)(EAX));
  /* 11a21e6f mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21e72 push eax */
  push32((uint32_t)(EAX));
  /* 11a21e73 call 0x11a222d0 */
  push32(0x11a21e78u); f_11a222d0();
  /* 11a21e78 mov cl, byte ptr [edi + 0x33b] */
  CL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21e7e mov ebp, dword ptr [0x11a2a16c] */
  EBP = (r32((uint32_t)(0x11a2a16c)));
  /* 11a21e84 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11a21e86 push eax */
  push32((uint32_t)(EAX));
  /* 11a21e87 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21e88 call ebp */
  call_ind((uint32_t)(EBP), 0x11a21e8au);
  /* 11a21e8a mov edx, dword ptr [esi + 0x11] */
  EDX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21e8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21e90 mov ecx, edi */
  ECX = (EDI);
  /* 11a21e92 mov dword ptr [esi + 0xd], 0 */
  w32((uint32_t)(ESI + 0xd), (0x0u));
  /* 11a21e99 push edx */
  push32((uint32_t)(EDX));
  /* 11a21e9a call 0x11a222d0 */
  push32(0x11a21e9fu); f_11a222d0();
  /* 11a21e9f push eax */
  push32((uint32_t)(EAX));
  /* 11a21ea0 mov al, byte ptr [edi + 0x33b] */
  AL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21ea6 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a21ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11a21ea9 call ebx */
  call_ind((uint32_t)(EBX), 0x11a21eabu);
  /* 11a21eab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21eae cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21eb3 jl 0x11a21ef8 */
  if ((C.sf!=C.of)) goto L_11a21ef8;
  /* 11a21eb5 mov ecx, dword ptr [esi + 0x11] */
  ECX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21eb8 mov dword ptr [esi + 0x15], 0x1f4 */
  w32((uint32_t)(ESI + 0x15), (0x1f4u));
  /* 11a21ebf push ecx */
  push32((uint32_t)(ECX));
  /* 11a21ec0 mov ecx, edi */
  ECX = (EDI);
  /* 11a21ec2 call 0x11a222d0 */
  push32(0x11a21ec7u); f_11a222d0();
  /* 11a21ec7 mov dl, byte ptr [edi + 0x33b] */
  DL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21ecd push eax */
  push32((uint32_t)(EAX));
  /* 11a21ece dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11a21ed0 push edx */
  push32((uint32_t)(EDX));
  /* 11a21ed1 call ebx */
  call_ind((uint32_t)(EBX), 0x11a21ed3u);
  /* 11a21ed3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21ed6 sub eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a21edb mov ecx, edi */
  ECX = (EDI);
  /* 11a21edd push eax */
  push32((uint32_t)(EAX));
  /* 11a21ede mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21ee1 push eax */
  push32((uint32_t)(EAX));
  /* 11a21ee2 call 0x11a222d0 */
  push32(0x11a21ee7u); f_11a222d0();
  /* 11a21ee7 mov cl, byte ptr [edi + 0x33b] */
  CL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21eed push eax */
  push32((uint32_t)(EAX));
  /* 11a21eee dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11a21ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21ef1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a21ef3u);
  /* 11a21ef3 jmp 0x11a22019 */
  goto L_11a22019;
L_11a21ef8:;
  /* 11a21ef8 mov edx, dword ptr [esi + 0x11] */
  EDX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21efb mov ecx, edi */
  ECX = (EDI);
  /* 11a21efd push edx */
  push32((uint32_t)(EDX));
  /* 11a21efe call 0x11a222d0 */
  push32(0x11a21f03u); f_11a222d0();
  /* 11a21f03 push eax */
  push32((uint32_t)(EAX));
  /* 11a21f04 mov al, byte ptr [edi + 0x33b] */
  AL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21f0a dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a21f0c push eax */
  push32((uint32_t)(EAX));
  /* 11a21f0d call ebx */
  call_ind((uint32_t)(EBX), 0x11a21f0fu);
  /* 11a21f0f mov ecx, dword ptr [esi + 0x11] */
  ECX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21f15 mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 11a21f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a21f1a push ecx */
  push32((uint32_t)(ECX));
  /* 11a21f1b mov ecx, edi */
  ECX = (EDI);
  /* 11a21f1d call 0x11a222d0 */
  push32(0x11a21f22u); f_11a222d0();
  /* 11a21f22 mov dl, byte ptr [edi + 0x33b] */
  DL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21f28 push eax */
  push32((uint32_t)(EAX));
  /* 11a21f29 dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11a21f2b push edx */
  push32((uint32_t)(EDX));
  /* 11a21f2c call ebp */
  call_ind((uint32_t)(EBP), 0x11a21f2eu);
  /* 11a21f2e jmp 0x11a22019 */
  goto L_11a22019;
L_11a21f33:;
  /* 11a21f33 mov eax, dword ptr [esi + 0xd] */
  EAX = (r32((uint32_t)(ESI + 0xd)));
  /* 11a21f36 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a21f39 push eax */
  push32((uint32_t)(EAX));
  /* 11a21f3a push ecx */
  push32((uint32_t)(ECX));
  /* 11a21f3b mov ecx, edi */
  ECX = (EDI);
  /* 11a21f3d call 0x11a222d0 */
  push32(0x11a21f42u); f_11a222d0();
  /* 11a21f42 mov dl, byte ptr [edi + 0x33b] */
  DL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21f48 mov ebx, dword ptr [0x11a2a190] */
  EBX = (r32((uint32_t)(0x11a2a190)));
  /* 11a21f4e dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11a21f50 push eax */
  push32((uint32_t)(EAX));
  /* 11a21f51 push edx */
  push32((uint32_t)(EDX));
  /* 11a21f52 call ebx */
  call_ind((uint32_t)(EBX), 0x11a21f54u);
  /* 11a21f54 mov eax, dword ptr [esi + 0x15] */
  EAX = (r32((uint32_t)(ESI + 0x15)));
  /* 11a21f57 mov ecx, dword ptr [esi + 0x11] */
  ECX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21f5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21f5d push eax */
  push32((uint32_t)(EAX));
  /* 11a21f5e push ecx */
  push32((uint32_t)(ECX));
  /* 11a21f5f mov ecx, edi */
  ECX = (EDI);
  /* 11a21f61 call 0x11a222d0 */
  push32(0x11a21f66u); f_11a222d0();
  /* 11a21f66 mov dl, byte ptr [edi + 0x33b] */
  DL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21f6c push eax */
  push32((uint32_t)(EAX));
  /* 11a21f6d dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11a21f6f push edx */
  push32((uint32_t)(EDX));
  /* 11a21f70 call ebx */
  call_ind((uint32_t)(EBX), 0x11a21f72u);
  /* 11a21f72 mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21f75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21f78 mov ecx, edi */
  ECX = (EDI);
  /* 11a21f7a mov dword ptr [esi + 0x15], ebp */
  w32((uint32_t)(ESI + 0x15), (EBP));
  /* 11a21f7d push eax */
  push32((uint32_t)(EAX));
  /* 11a21f7e mov dword ptr [esi + 0xd], ebp */
  w32((uint32_t)(ESI + 0xd), (EBP));
  /* 11a21f81 call 0x11a222d0 */
  push32(0x11a21f86u); f_11a222d0();
  /* 11a21f86 mov cl, byte ptr [edi + 0x33b] */
  CL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21f8c mov ebx, dword ptr [0x11a2a174] */
  EBX = (r32((uint32_t)(0x11a2a174)));
  /* 11a21f92 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11a21f94 push eax */
  push32((uint32_t)(EAX));
  /* 11a21f95 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21f96 call ebx */
  call_ind((uint32_t)(EBX), 0x11a21f98u);
  /* 11a21f98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21f9b cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a21fa0 jl 0x11a21fe0 */
  if ((C.sf!=C.of)) goto L_11a21fe0;
  /* 11a21fa2 mov edx, dword ptr [esi + 0x11] */
  EDX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21fa5 mov ecx, edi */
  ECX = (EDI);
  /* 11a21fa7 push edx */
  push32((uint32_t)(EDX));
  /* 11a21fa8 mov dword ptr [esi + 0x15], 0x1f4 */
  w32((uint32_t)(ESI + 0x15), (0x1f4u));
  /* 11a21faf call 0x11a222d0 */
  push32(0x11a21fb4u); f_11a222d0();
  /* 11a21fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11a21fb5 mov al, byte ptr [edi + 0x33b] */
  AL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21fbb dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a21fbd push eax */
  push32((uint32_t)(EAX));
  /* 11a21fbe call ebx */
  call_ind((uint32_t)(EBX), 0x11a21fc0u);
  /* 11a21fc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21fc3 sub eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a21fc8:;
  /* 11a21fc8 mov ecx, dword ptr [esi + 0x11] */
  ECX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21fcb push eax */
  push32((uint32_t)(EAX));
  /* 11a21fcc push ecx */
  push32((uint32_t)(ECX));
  /* 11a21fcd mov ecx, edi */
  ECX = (EDI);
  /* 11a21fcf call 0x11a222d0 */
  push32(0x11a21fd4u); f_11a222d0();
  /* 11a21fd4 mov dl, byte ptr [edi + 0x33b] */
  DL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21fda push eax */
  push32((uint32_t)(EAX));
  /* 11a21fdb dec dl */
  { uint32_t _r=(DL)-1; DL = (_r); fl_dec(_r,8); }
  /* 11a21fdd push edx */
  push32((uint32_t)(EDX));
  /* 11a21fde jmp 0x11a22013 */
  goto L_11a22013;
L_11a21fe0:;
  /* 11a21fe0 mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21fe3 mov ecx, edi */
  ECX = (EDI);
  /* 11a21fe5 push eax */
  push32((uint32_t)(EAX));
  /* 11a21fe6 call 0x11a222d0 */
  push32(0x11a21febu); f_11a222d0();
  /* 11a21feb mov cl, byte ptr [edi + 0x33b] */
  CL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a21ff1 push eax */
  push32((uint32_t)(EAX));
  /* 11a21ff2 dec cl */
  { uint32_t _r=(CL)-1; CL = (_r); fl_dec(_r,8); }
  /* 11a21ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a21ff5 call ebx */
  call_ind((uint32_t)(EBX), 0x11a21ff7u);
  /* 11a21ff7 mov edx, dword ptr [esi + 0x11] */
  EDX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a21ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a21ffd mov ecx, edi */
  ECX = (EDI);
  /* 11a21fff mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 11a22002 push ebp */
  push32((uint32_t)(EBP));
  /* 11a22003 push edx */
  push32((uint32_t)(EDX));
  /* 11a22004 call 0x11a222d0 */
  push32(0x11a22009u); f_11a222d0();
  /* 11a22009 push eax */
  push32((uint32_t)(EAX));
  /* 11a2200a mov al, byte ptr [edi + 0x33b] */
  AL = (r8((uint32_t)(EDI + 0x33b)));
  /* 11a22010 dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11a22012 push eax */
  push32((uint32_t)(EAX));
L_11a22013:;
  /* 11a22013 call dword ptr [0x11a2a16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a16c))), 0x11a22019u);
L_11a22019:;
  /* 11a22019 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a2201c:;
  /* 11a2201c mov eax, dword ptr [edi + 0x2ff] */
  EAX = (r32((uint32_t)(EDI + 0x2ff)));
  /* 11a22022 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22025 je 0x11a22030 */
  if (C.zf) goto L_11a22030;
  /* 11a22027 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2202a jne 0x11a220ff */
  if (!C.zf) goto L_11a220ff;
L_11a22030:;
  /* 11a22030 mov ecx, dword ptr [esi + 9] */
  ECX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a22033 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22034 mov ecx, edi */
  ECX = (EDI);
  /* 11a22036 call 0x11a22180 */
  push32(0x11a2203bu); f_11a22180();
  /* 11a2203b mov edx, dword ptr [esi + 0x11] */
  EDX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a2203e mov ebp, eax */
  EBP = (EAX);
  /* 11a22040 imul ebp, dword ptr [esi + 0xd] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESI + 0xd)))*(int64_t)(int32_t)(EBP); EBP = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a22044 push edx */
  push32((uint32_t)(EDX));
  /* 11a22045 mov ecx, edi */
  ECX = (EDI);
  /* 11a22047 call 0x11a22110 */
  push32(0x11a2204cu); f_11a22110();
  /* 11a2204c mov ebx, eax */
  EBX = (EAX);
  /* 11a2204e mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a22051 push eax */
  push32((uint32_t)(EAX));
  /* 11a22052 mov ecx, edi */
  ECX = (EDI);
  /* 11a22054 call 0x11a22180 */
  push32(0x11a22059u); f_11a22180();
  /* 11a22059 imul ebx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EBX); EBX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a2205c cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2205e jg 0x11a220a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a220a0;
  /* 11a22060 mov ecx, dword ptr [esi + 0xd] */
  ECX = (r32((uint32_t)(ESI + 0xd)));
  /* 11a22063 mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a22066 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22067 push edx */
  push32((uint32_t)(EDX));
  /* 11a22068 mov ecx, edi */
  ECX = (EDI);
  /* 11a2206a call 0x11a221f0 */
  push32(0x11a2206fu); f_11a221f0();
  /* 11a2206f mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a22072 mov ecx, edi */
  ECX = (EDI);
  /* 11a22074 push eax */
  push32((uint32_t)(EAX));
  /* 11a22075 mov dword ptr [esi + 0xd], 0 */
  w32((uint32_t)(ESI + 0xd), (0x0u));
  /* 11a2207c call 0x11a22180 */
  push32(0x11a22081u); f_11a22180();
  /* 11a22081 mov ecx, eax */
  ECX = (EAX);
  /* 11a22083 mov eax, ebp */
  EAX = (EBP);
  /* 11a22085 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a22086 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a22088 mov edx, dword ptr [esi + 0x11] */
  EDX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a2208b mov ecx, edi */
  ECX = (EDI);
  /* 11a2208d mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 11a22090 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a22092 push eax */
  push32((uint32_t)(EAX));
  /* 11a22093 push edx */
  push32((uint32_t)(EDX));
  /* 11a22094 call 0x11a221f0 */
  push32(0x11a22099u); f_11a221f0();
  /* 11a22099 pop edi */
  EDI = (pop32());
  /* 11a2209a pop esi */
  ESI = (pop32());
  /* 11a2209b pop ebp */
  EBP = (pop32());
  /* 11a2209c pop ebx */
  EBX = (pop32());
  /* 11a2209d ret 8 */
  ESPCHK(0x11a21cc0u, _esp0);
  ESP += 12; return;
L_11a220a0:;
  /* 11a220a0 mov eax, dword ptr [esi + 0x11] */
  EAX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a220a3 mov ecx, edi */
  ECX = (EDI);
  /* 11a220a5 push eax */
  push32((uint32_t)(EAX));
  /* 11a220a6 call 0x11a22110 */
  push32(0x11a220abu); f_11a22110();
  /* 11a220ab mov ecx, dword ptr [esi + 0x11] */
  ECX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a220ae mov dword ptr [esi + 0x15], eax */
  w32((uint32_t)(ESI + 0x15), (EAX));
  /* 11a220b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a220b2 mov ecx, edi */
  ECX = (EDI);
  /* 11a220b4 call 0x11a22110 */
  push32(0x11a220b9u); f_11a22110();
  /* 11a220b9 mov edx, dword ptr [esi + 0x11] */
  EDX = (r32((uint32_t)(ESI + 0x11)));
  /* 11a220bc mov ecx, edi */
  ECX = (EDI);
  /* 11a220be neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a220c0 push eax */
  push32((uint32_t)(EAX));
  /* 11a220c1 push edx */
  push32((uint32_t)(EDX));
  /* 11a220c2 call 0x11a221f0 */
  push32(0x11a220c7u); f_11a221f0();
  /* 11a220c7 mov eax, dword ptr [esi + 9] */
  EAX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a220ca mov ecx, edi */
  ECX = (EDI);
  /* 11a220cc push eax */
  push32((uint32_t)(EAX));
  /* 11a220cd call 0x11a22180 */
  push32(0x11a220d2u); f_11a22180();
  /* 11a220d2 mov ecx, eax */
  ECX = (EAX);
  /* 11a220d4 mov eax, ebx */
  EAX = (EBX);
  /* 11a220d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a220d7 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a220d9 mov ecx, dword ptr [esi + 0xd] */
  ECX = (r32((uint32_t)(ESI + 0xd)));
  /* 11a220dc mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a220df push edx */
  push32((uint32_t)(EDX));
  /* 11a220e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a220e2 mov dword ptr [esi + 0xd], ecx */
  w32((uint32_t)(ESI + 0xd), (ECX));
  /* 11a220e5 mov ecx, edi */
  ECX = (EDI);
  /* 11a220e7 call 0x11a22180 */
  push32(0x11a220ecu); f_11a22180();
  /* 11a220ec mov ecx, eax */
  ECX = (EAX);
  /* 11a220ee mov eax, ebx */
  EAX = (EBX);
  /* 11a220f0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a220f1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a220f3 mov edx, dword ptr [esi + 9] */
  EDX = (r32((uint32_t)(ESI + 0x9)));
  /* 11a220f6 mov ecx, edi */
  ECX = (EDI);
  /* 11a220f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a220f9 push edx */
  push32((uint32_t)(EDX));
  /* 11a220fa call 0x11a221f0 */
  push32(0x11a220ffu); f_11a221f0();
L_11a220ff:;
  /* 11a220ff pop edi */
  EDI = (pop32());
  /* 11a22100 pop esi */
  ESI = (pop32());
  /* 11a22101 pop ebp */
  EBP = (pop32());
  /* 11a22102 pop ebx */
  EBX = (pop32());
  /* 11a22103 ret 8 */
  ESPCHK(0x11a21cc0u, _esp0);
  ESP += 12; return;
}

/* FUN_10002110 @ 0x11a22110 (75 bytes, 18 insns) [1 switch table(s)] */
void f_11a22110(void) {
  FTRACE(0x11a22110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22110 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a22114 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22117 ja 0x11a22156 */
  if ((!C.cf&&!C.zf)) goto L_11a22156;
  /* 11a22119 jmp dword ptr [eax*4 + 0x11a2215c] */
  switch (EAX) {
    case 0: goto L_11a22120;
    case 1: goto L_11a22129;
    case 2: goto L_11a22132;
    case 3: goto L_11a2213b;
    case 4: goto L_11a22144;
    case 5: goto L_11a2214d;
    default: x86_unimpl("switch@0x11a22119 out of table"); return;
  }
L_11a22120:;
  /* 11a22120 mov eax, dword ptr [ecx + 0x30b] */
  EAX = (r32((uint32_t)(ECX + 0x30b)));
  /* 11a22126 ret 4 */
  ESPCHK(0x11a22110u, _esp0);
  ESP += 8; return;
L_11a22129:;
  /* 11a22129 mov eax, dword ptr [ecx + 0x30f] */
  EAX = (r32((uint32_t)(ECX + 0x30f)));
  /* 11a2212f ret 4 */
  ESPCHK(0x11a22110u, _esp0);
  ESP += 8; return;
L_11a22132:;
  /* 11a22132 mov eax, dword ptr [ecx + 0x313] */
  EAX = (r32((uint32_t)(ECX + 0x313)));
  /* 11a22138 ret 4 */
  ESPCHK(0x11a22110u, _esp0);
  ESP += 8; return;
L_11a2213b:;
  /* 11a2213b mov eax, dword ptr [ecx + 0x317] */
  EAX = (r32((uint32_t)(ECX + 0x317)));
  /* 11a22141 ret 4 */
  ESPCHK(0x11a22110u, _esp0);
  ESP += 8; return;
L_11a22144:;
  /* 11a22144 mov eax, dword ptr [ecx + 0x31b] */
  EAX = (r32((uint32_t)(ECX + 0x31b)));
  /* 11a2214a ret 4 */
  ESPCHK(0x11a22110u, _esp0);
  ESP += 8; return;
L_11a2214d:;
  /* 11a2214d mov eax, dword ptr [ecx + 0x31f] */
  EAX = (r32((uint32_t)(ECX + 0x31f)));
  /* 11a22153 ret 4 */
  ESPCHK(0x11a22110u, _esp0);
  ESP += 8; return;
L_11a22156:;
  /* 11a22156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a22158 ret 4 */
  ESPCHK(0x11a22110u, _esp0);
  ESP += 8; return;
}

/* FUN_10002180 @ 0x11a22180 (75 bytes, 18 insns) [1 switch table(s)] */
void f_11a22180(void) {
  FTRACE(0x11a22180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22180 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a22184 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22187 ja 0x11a221c6 */
  if ((!C.cf&&!C.zf)) goto L_11a221c6;
  /* 11a22189 jmp dword ptr [eax*4 + 0x11a221cc] */
  switch (EAX) {
    case 0: goto L_11a22190;
    case 1: goto L_11a22199;
    case 2: goto L_11a221a2;
    case 3: goto L_11a221ab;
    case 4: goto L_11a221b4;
    case 5: goto L_11a221bd;
    default: x86_unimpl("switch@0x11a22189 out of table"); return;
  }
L_11a22190:;
  /* 11a22190 mov eax, dword ptr [ecx + 0x323] */
  EAX = (r32((uint32_t)(ECX + 0x323)));
  /* 11a22196 ret 4 */
  ESPCHK(0x11a22180u, _esp0);
  ESP += 8; return;
L_11a22199:;
  /* 11a22199 mov eax, dword ptr [ecx + 0x327] */
  EAX = (r32((uint32_t)(ECX + 0x327)));
  /* 11a2219f ret 4 */
  ESPCHK(0x11a22180u, _esp0);
  ESP += 8; return;
L_11a221a2:;
  /* 11a221a2 mov eax, dword ptr [ecx + 0x32b] */
  EAX = (r32((uint32_t)(ECX + 0x32b)));
  /* 11a221a8 ret 4 */
  ESPCHK(0x11a22180u, _esp0);
  ESP += 8; return;
L_11a221ab:;
  /* 11a221ab mov eax, dword ptr [ecx + 0x32f] */
  EAX = (r32((uint32_t)(ECX + 0x32f)));
  /* 11a221b1 ret 4 */
  ESPCHK(0x11a22180u, _esp0);
  ESP += 8; return;
L_11a221b4:;
  /* 11a221b4 mov eax, dword ptr [ecx + 0x333] */
  EAX = (r32((uint32_t)(ECX + 0x333)));
  /* 11a221ba ret 4 */
  ESPCHK(0x11a22180u, _esp0);
  ESP += 8; return;
L_11a221bd:;
  /* 11a221bd mov eax, dword ptr [ecx + 0x337] */
  EAX = (r32((uint32_t)(ECX + 0x337)));
  /* 11a221c3 ret 4 */
  ESPCHK(0x11a22180u, _esp0);
  ESP += 8; return;
L_11a221c6:;
  /* 11a221c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a221c8 ret 4 */
  ESPCHK(0x11a22180u, _esp0);
  ESP += 8; return;
}

/* FUN_100021f0 @ 0x11a221f0 (146 bytes, 34 insns) [1 switch table(s)] */
void f_11a221f0(void) {
  FTRACE(0x11a221f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a221f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a221f4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a221f7 ja 0x11a2227f */
  if ((!C.cf&&!C.zf)) goto L_11a2227f;
  /* 11a221fd jmp dword ptr [eax*4 + 0x11a22284] */
  switch (EAX) {
    case 0: goto L_11a22204;
    case 1: goto L_11a22219;
    case 2: goto L_11a2222e;
    case 3: goto L_11a22243;
    case 4: goto L_11a22258;
    case 5: goto L_11a2226d;
    default: x86_unimpl("switch@0x11a221fd out of table"); return;
  }
L_11a22204:;
  /* 11a22204 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a22208 mov edx, dword ptr [ecx + 0x30b] */
  EDX = (r32((uint32_t)(ECX + 0x30b)));
  /* 11a2220e add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22210 mov dword ptr [ecx + 0x30b], edx */
  w32((uint32_t)(ECX + 0x30b), (EDX));
  /* 11a22216 ret 8 */
  ESPCHK(0x11a221f0u, _esp0);
  ESP += 12; return;
L_11a22219:;
  /* 11a22219 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a2221d mov eax, dword ptr [ecx + 0x30f] */
  EAX = (r32((uint32_t)(ECX + 0x30f)));
  /* 11a22223 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22225 mov dword ptr [ecx + 0x30f], eax */
  w32((uint32_t)(ECX + 0x30f), (EAX));
  /* 11a2222b ret 8 */
  ESPCHK(0x11a221f0u, _esp0);
  ESP += 12; return;
L_11a2222e:;
  /* 11a2222e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a22232 mov edx, dword ptr [ecx + 0x313] */
  EDX = (r32((uint32_t)(ECX + 0x313)));
  /* 11a22238 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2223a mov dword ptr [ecx + 0x313], edx */
  w32((uint32_t)(ECX + 0x313), (EDX));
  /* 11a22240 ret 8 */
  ESPCHK(0x11a221f0u, _esp0);
  ESP += 12; return;
L_11a22243:;
  /* 11a22243 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a22247 mov eax, dword ptr [ecx + 0x317] */
  EAX = (r32((uint32_t)(ECX + 0x317)));
  /* 11a2224d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2224f mov dword ptr [ecx + 0x317], eax */
  w32((uint32_t)(ECX + 0x317), (EAX));
  /* 11a22255 ret 8 */
  ESPCHK(0x11a221f0u, _esp0);
  ESP += 12; return;
L_11a22258:;
  /* 11a22258 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a2225c mov edx, dword ptr [ecx + 0x31b] */
  EDX = (r32((uint32_t)(ECX + 0x31b)));
  /* 11a22262 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22264 mov dword ptr [ecx + 0x31b], edx */
  w32((uint32_t)(ECX + 0x31b), (EDX));
  /* 11a2226a ret 8 */
  ESPCHK(0x11a221f0u, _esp0);
  ESP += 12; return;
L_11a2226d:;
  /* 11a2226d mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a22271 mov eax, dword ptr [ecx + 0x31f] */
  EAX = (r32((uint32_t)(ECX + 0x31f)));
  /* 11a22277 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22279 mov dword ptr [ecx + 0x31f], eax */
  w32((uint32_t)(ECX + 0x31f), (EAX));
L_11a2227f:;
  /* 11a2227f ret 8 */
  ESPCHK(0x11a221f0u, _esp0);
  ESP += 12; return;
}

/* FUN_100022a0 @ 0x11a222a0 (39 bytes, 9 insns) */
void f_11a222a0(void) {
  FTRACE(0x11a222a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a222a0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a222a4 mov dl, byte ptr [esp + 8] */
  DL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a222a8 mov byte ptr [ecx + 0x348], dl */
  w8((uint32_t)(ECX + 0x348), (DL));
  /* 11a222ae lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a222b1 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a222b4 mov dword ptr [ecx + 0x344], eax */
  w32((uint32_t)(ECX + 0x344), (EAX));
  /* 11a222ba mov al, byte ptr [esp + 0xc] */
  AL = (r8((uint32_t)(ESP + 0xc)));
  /* 11a222be mov byte ptr [ecx + 0x349], al */
  w8((uint32_t)(ECX + 0x349), (AL));
  /* 11a222c4 ret 0xc */
  ESPCHK(0x11a222a0u, _esp0);
  ESP += 16; return;
}

/* FUN_100022d0 @ 0x11a222d0 (30 bytes, 9 insns) */
void f_11a222d0(void) {
  FTRACE(0x11a222d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a222d0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a222d4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a222d7 jne 0x11a222e1 */
  if (!C.zf) goto L_11a222e1;
  /* 11a222d9 mov eax, 1 */
  EAX = (0x1u);
  /* 11a222de ret 4 */
  ESPCHK(0x11a222d0u, _esp0);
  ESP += 8; return;
L_11a222e1:;
  /* 11a222e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a222e4 jne 0x11a222eb */
  if (!C.zf) goto L_11a222eb;
  /* 11a222e6 mov eax, 3 */
  EAX = (0x3u);
L_11a222eb:;
  /* 11a222eb ret 4 */
  ESPCHK(0x11a222d0u, _esp0);
  ESP += 8; return;
}

/* FUN_100022f0 @ 0x11a222f0 (115 bytes, 41 insns) */
void f_11a222f0(void) {
  FTRACE(0x11a222f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a222f0 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a222f4 push ebp */
  push32((uint32_t)(EBP));
  /* 11a222f5 push esi */
  push32((uint32_t)(ESI));
  /* 11a222f6 push edi */
  push32((uint32_t)(EDI));
  /* 11a222f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a222f9 push eax */
  push32((uint32_t)(EAX));
  /* 11a222fa push 7 */
  push32((uint32_t)(0x7u));
  /* 11a222fc mov ebp, ecx */
  EBP = (ECX);
  /* 11a222fe push 0x11a2fac0 */
  push32((uint32_t)(0x11a2fac0u));
  /* 11a22303 push 0x11a2f1c8 */
  push32((uint32_t)(0x11a2f1c8u));
  /* 11a22308 push ebp */
  push32((uint32_t)(EBP));
  /* 11a22309 call dword ptr [0x11a2a1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a1a4))), 0x11a2230fu);
  /* 11a2230f mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 11a22313 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a22316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a22318 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2231b repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a2231d not ecx */
  ECX = (~(ECX));
  /* 11a2231f sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a22321 lea edx, [ebp + 0x1a] */
  EDX = ((uint32_t)(EBP + 0x1a));
  /* 11a22324 mov eax, ecx */
  EAX = (ECX);
  /* 11a22326 mov esi, edi */
  ESI = (EDI);
  /* 11a22328 mov edi, edx */
  EDI = (EDX);
  /* 11a2232a mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a2232e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a22331 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a22333 mov ecx, eax */
  ECX = (EAX);
  /* 11a22335 mov al, byte ptr [esp + 0x1c] */
  AL = (r8((uint32_t)(ESP + 0x1c)));
  /* 11a22339 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a2233c rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a2233e mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a22342 pop edi */
  EDI = (pop32());
  /* 11a22343 mov dword ptr [ebp + 0x44], ecx */
  w32((uint32_t)(EBP + 0x44), (ECX));
  /* 11a22346 mov dword ptr [ebp + 0x38], edx */
  w32((uint32_t)(EBP + 0x38), (EDX));
  /* 11a22349 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11a2234c mov byte ptr [ebp + 0x19], 0 */
  w8((uint32_t)(EBP + 0x19), (0x0u));
  /* 11a22350 mov dword ptr [ebp + 0x15], 0 */
  w32((uint32_t)(EBP + 0x15), (0x0u));
  /* 11a22357 mov dword ptr [ebp + 0xd], 0 */
  w32((uint32_t)(EBP + 0xd), (0x0u));
  /* 11a2235e pop esi */
  ESI = (pop32());
  /* 11a2235f pop ebp */
  EBP = (pop32());
  /* 11a22360 ret 0x14 */
  ESPCHK(0x11a222f0u, _esp0);
  ESP += 24; return;
}

/* FUN_10002370 @ 0x11a22370 (76 bytes, 32 insns) */
void f_11a22370(void) {
  FTRACE(0x11a22370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22370 push ebx */
  push32((uint32_t)(EBX));
  /* 11a22371 push esi */
  push32((uint32_t)(ESI));
  /* 11a22372 mov edx, ecx */
  EDX = (ECX);
  /* 11a22374 push edi */
  push32((uint32_t)(EDI));
  /* 11a22375 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a22379 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a2237c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a2237e lea ebx, [edx + 0x29] */
  EBX = ((uint32_t)(EDX + 0x29));
  /* 11a22381 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a22383 not ecx */
  ECX = (~(ECX));
  /* 11a22385 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a22387 mov eax, ecx */
  EAX = (ECX);
  /* 11a22389 mov esi, edi */
  ESI = (EDI);
  /* 11a2238b mov edi, ebx */
  EDI = (EBX);
  /* 11a2238d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a22390 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a22392 mov ecx, eax */
  ECX = (EAX);
  /* 11a22394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a22396 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a22399 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a2239b mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a2239f mov dword ptr [edx + 0x15], eax */
  w32((uint32_t)(EDX + 0x15), (EAX));
  /* 11a223a2 mov dword ptr [edx + 0x3c], ecx */
  w32((uint32_t)(EDX + 0x3c), (ECX));
  /* 11a223a5 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a223a9 mov dword ptr [edx + 0xd], eax */
  w32((uint32_t)(EDX + 0xd), (EAX));
  /* 11a223ac mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a223b0 pop edi */
  EDI = (pop32());
  /* 11a223b1 pop esi */
  ESI = (pop32());
  /* 11a223b2 mov dword ptr [edx + 9], eax */
  w32((uint32_t)(EDX + 0x9), (EAX));
  /* 11a223b5 mov dword ptr [edx + 0x11], ecx */
  w32((uint32_t)(EDX + 0x11), (ECX));
  /* 11a223b8 pop ebx */
  EBX = (pop32());
  /* 11a223b9 ret 0x10 */
  ESPCHK(0x11a22370u, _esp0);
  ESP += 20; return;
}

/* FUN_100023c0 @ 0x11a223c0 (108 bytes, 36 insns) */
void f_11a223c0(void) {
  FTRACE(0x11a223c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a223c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a223c4 push esi */
  push32((uint32_t)(ESI));
  /* 11a223c5 mov dl, byte ptr [esp + 0xc] */
  DL = (r8((uint32_t)(ESP + 0xc)));
  /* 11a223c9 mov esi, ecx */
  ESI = (ECX);
  /* 11a223cb mov cl, byte ptr [esp + 0x10] */
  CL = (r8((uint32_t)(ESP + 0x10)));
  /* 11a223cf push edi */
  push32((uint32_t)(EDI));
  /* 11a223d0 mov dword ptr [esi + 0x1d], eax */
  w32((uint32_t)(ESI + 0x1d), (EAX));
  /* 11a223d3 mov al, byte ptr [esp + 0x1c] */
  AL = (r8((uint32_t)(ESP + 0x1c)));
  /* 11a223d7 mov byte ptr [esi + 0x2b], al */
  w8((uint32_t)(ESI + 0x2b), (AL));
  /* 11a223da lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 11a223dd mov eax, 1 */
  EAX = (0x1u);
  /* 11a223e2 push edi */
  push32((uint32_t)(EDI));
  /* 11a223e3 mov byte ptr [esi + 0x21], cl */
  w8((uint32_t)(ESI + 0x21), (CL));
  /* 11a223e6 mov byte ptr [esi + 0x22], dl */
  w8((uint32_t)(ESI + 0x22), (DL));
  /* 11a223e9 mov byte ptr [esi + 0x2c], 0 */
  w8((uint32_t)(ESI + 0x2c), (0x0u));
  /* 11a223ed mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 11a223ef mov dword ptr [esi + 0x19], 0 */
  w32((uint32_t)(ESI + 0x19), (0x0u));
  /* 11a223f6 mov dword ptr [esi + 0x23], eax */
  w32((uint32_t)(ESI + 0x23), (EAX));
  /* 11a223f9 mov dword ptr [esi + 0x27], eax */
  w32((uint32_t)(ESI + 0x27), (EAX));
  /* 11a223fc call dword ptr [0x11a2a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a198))), 0x11a22402u);
  /* 11a22402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a22407 jne 0x11a22427 */
  if (!C.zf) goto L_11a22427;
  /* 11a22409 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a2240d mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22410 push eax */
  push32((uint32_t)(EAX));
  /* 11a22411 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22412 push edx */
  push32((uint32_t)(EDX));
  /* 11a22413 push 0x11a2fad8 */
  push32((uint32_t)(0x11a2fad8u));
  /* 11a22418 push 0x11a2f1c8 */
  push32((uint32_t)(0x11a2f1c8u));
  /* 11a2241d push edi */
  push32((uint32_t)(EDI));
  /* 11a2241e call dword ptr [0x11a2a1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a1a4))), 0x11a22424u);
  /* 11a22424 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a22427:;
  /* 11a22427 pop edi */
  EDI = (pop32());
  /* 11a22428 pop esi */
  ESI = (pop32());
  /* 11a22429 ret 0x14 */
  ESPCHK(0x11a223c0u, _esp0);
  ESP += 24; return;
}

/* FUN_10002430 @ 0x11a22430 (17 bytes, 7 insns) */
void f_11a22430(void) {
  FTRACE(0x11a22430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22430 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a22431 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22432 call dword ptr [0x11a2a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a198))), 0x11a22438u);
  /* 11a22438 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2243b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2243d setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11a22440 ret  */
  ESPCHK(0x11a22430u, _esp0);
  ESP += 4; return;
}

/* FUN_10002450 @ 0x11a22450 (328 bytes, 129 insns) */
void f_11a22450(void) {
  FTRACE(0x11a22450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22450 push esi */
  push32((uint32_t)(ESI));
  /* 11a22451 mov esi, ecx */
  ESI = (ECX);
  /* 11a22453 mov eax, dword ptr [esi + 0x23] */
  EAX = (r32((uint32_t)(ESI + 0x23)));
  /* 11a22456 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22459 jne 0x11a2254b */
  if (!C.zf) goto L_11a2254b;
  /* 11a2245f push ebx */
  push32((uint32_t)(EBX));
  /* 11a22460 push edi */
  push32((uint32_t)(EDI));
  /* 11a22461 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11a22464 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22466 push eax */
  push32((uint32_t)(EAX));
  /* 11a22467 call dword ptr [0x11a2a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a180))), 0x11a2246du);
  /* 11a2246d mov eax, dword ptr [esi + 0x1d] */
  EAX = (r32((uint32_t)(ESI + 0x1d)));
  /* 11a22470 mov ebx, dword ptr [esp + 0x18] */
  EBX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a22474 mov edi, dword ptr [0x11a2a168] */
  EDI = (r32((uint32_t)(0x11a2a168)));
  /* 11a2247a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2247d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2247f je 0x11a22486 */
  if (C.zf) goto L_11a22486;
  /* 11a22481 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22484 jne 0x11a224d4 */
  if (!C.zf) goto L_11a224d4;
L_11a22486:;
  /* 11a22486 mov eax, dword ptr [esi + 0x19] */
  EAX = (r32((uint32_t)(ESI + 0x19)));
  /* 11a22489 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2248b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2248d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2248f jne 0x11a224a7 */
  if (!C.zf) goto L_11a224a7;
  /* 11a22491 mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22494 push 0x11a2faf8 */
  push32((uint32_t)(0x11a2faf8u));
  /* 11a22499 push ecx */
  push32((uint32_t)(ECX));
  /* 11a2249a call edi */
  call_ind((uint32_t)(EDI), 0x11a2249cu);
  /* 11a2249c mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a2249f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a224a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a224a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a224a4 push edx */
  push32((uint32_t)(EDX));
  /* 11a224a5 jmp 0x11a224bb */
  goto L_11a224bb;
L_11a224a7:;
  /* 11a224a7 mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a224aa push 0x11a2faf0 */
  push32((uint32_t)(0x11a2faf0u));
  /* 11a224af push eax */
  push32((uint32_t)(EAX));
  /* 11a224b0 call edi */
  call_ind((uint32_t)(EDI), 0x11a224b2u);
  /* 11a224b2 mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a224b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a224b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a224b9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a224ba push ecx */
  push32((uint32_t)(ECX));
L_11a224bb:;
  /* 11a224bb call edi */
  call_ind((uint32_t)(EDI), 0x11a224bdu);
  /* 11a224bd mov edx, dword ptr [esi + 0x19] */
  EDX = (r32((uint32_t)(ESI + 0x19)));
  /* 11a224c0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a224c3 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a224c4 and edx, 0x80000001 */
  { uint32_t _r=(EDX)&(0x80000001u); EDX = (_r); fl_logic(_r,32); }
  /* 11a224ca jns 0x11a224d1 */
  if (!C.sf) goto L_11a224d1;
  /* 11a224cc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a224cd or edx, 0xfffffffe */
  { uint32_t _r=(EDX)|(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11a224d0 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_11a224d1:;
  /* 11a224d1 mov dword ptr [esi + 0x19], edx */
  w32((uint32_t)(ESI + 0x19), (EDX));
L_11a224d4:;
  /* 11a224d4 mov eax, dword ptr [esi + 0x1d] */
  EAX = (r32((uint32_t)(ESI + 0x1d)));
  /* 11a224d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a224da je 0x11a224e1 */
  if (C.zf) goto L_11a224e1;
  /* 11a224dc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a224df jne 0x11a2252f */
  if (!C.zf) goto L_11a2252f;
L_11a224e1:;
  /* 11a224e1 mov eax, dword ptr [esi + 0x19] */
  EAX = (r32((uint32_t)(ESI + 0x19)));
  /* 11a224e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a224e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a224e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a224ea jne 0x11a22502 */
  if (!C.zf) goto L_11a22502;
  /* 11a224ec mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a224ef push 0x11a2fad0 */
  push32((uint32_t)(0x11a2fad0u));
  /* 11a224f4 push eax */
  push32((uint32_t)(EAX));
  /* 11a224f5 call edi */
  call_ind((uint32_t)(EDI), 0x11a224f7u);
  /* 11a224f7 mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a224fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11a224fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a224fe push ebx */
  push32((uint32_t)(EBX));
  /* 11a224ff push ecx */
  push32((uint32_t)(ECX));
  /* 11a22500 jmp 0x11a22516 */
  goto L_11a22516;
L_11a22502:;
  /* 11a22502 mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22505 push 0x11a2fae8 */
  push32((uint32_t)(0x11a2fae8u));
  /* 11a2250a push edx */
  push32((uint32_t)(EDX));
  /* 11a2250b call edi */
  call_ind((uint32_t)(EDI), 0x11a2250du);
  /* 11a2250d mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22510 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a22512 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22514 push ebx */
  push32((uint32_t)(EBX));
  /* 11a22515 push eax */
  push32((uint32_t)(EAX));
L_11a22516:;
  /* 11a22516 call edi */
  call_ind((uint32_t)(EDI), 0x11a22518u);
  /* 11a22518 mov ecx, dword ptr [esi + 0x19] */
  ECX = (r32((uint32_t)(ESI + 0x19)));
  /* 11a2251b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2251e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a2251f and ecx, 0x80000001 */
  { uint32_t _r=(ECX)&(0x80000001u); ECX = (_r); fl_logic(_r,32); }
  /* 11a22525 jns 0x11a2252c */
  if (!C.sf) goto L_11a2252c;
  /* 11a22527 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a22528 or ecx, 0xfffffffe */
  { uint32_t _r=(ECX)|(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11a2252b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11a2252c:;
  /* 11a2252c mov dword ptr [esi + 0x19], ecx */
  w32((uint32_t)(ESI + 0x19), (ECX));
L_11a2252f:;
  /* 11a2252f mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22532 mov dword ptr [esi + 0x23], 0 */
  w32((uint32_t)(ESI + 0x23), (0x0u));
  /* 11a22539 push edx */
  push32((uint32_t)(EDX));
  /* 11a2253a call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a22540u);
  /* 11a22540 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22543 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a22545 pop edi */
  EDI = (pop32());
  /* 11a22546 pop ebx */
  EBX = (pop32());
  /* 11a22547 pop esi */
  ESI = (pop32());
  /* 11a22548 ret 4 */
  ESPCHK(0x11a22450u, _esp0);
  ESP += 8; return;
L_11a2254b:;
  /* 11a2254b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2254d jne 0x11a22592 */
  if (!C.zf) goto L_11a22592;
  /* 11a2254f push eax */
  push32((uint32_t)(EAX));
  /* 11a22550 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11a22553 push eax */
  push32((uint32_t)(EAX));
  /* 11a22554 call dword ptr [0x11a2a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a180))), 0x11a2255au);
  /* 11a2255a mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a2255d push ecx */
  push32((uint32_t)(ECX));
  /* 11a2255e call dword ptr [0x11a2a170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a170))), 0x11a22564u);
  /* 11a22564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22567 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a22569 je 0x11a22585 */
  if (C.zf) goto L_11a22585;
  /* 11a2256b mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a2256e mov dword ptr [esi + 0x23], 2 */
  w32((uint32_t)(ESI + 0x23), (0x2u));
  /* 11a22575 push edx */
  push32((uint32_t)(EDX));
  /* 11a22576 call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a2257cu);
  /* 11a2257c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2257f mov al, 1 */
  AL = (0x1u);
  /* 11a22581 pop esi */
  ESI = (pop32());
  /* 11a22582 ret 4 */
  ESPCHK(0x11a22450u, _esp0);
  ESP += 8; return;
L_11a22585:;
  /* 11a22585 mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22588 push eax */
  push32((uint32_t)(EAX));
  /* 11a22589 call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a2258fu);
  /* 11a2258f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a22592:;
  /* 11a22592 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a22594 pop esi */
  ESI = (pop32());
  /* 11a22595 ret 4 */
  ESPCHK(0x11a22450u, _esp0);
  ESP += 8; return;
}

/* FUN_100025a0 @ 0x11a225a0 (472 bytes, 174 insns) */
void f_11a225a0(void) {
  FTRACE(0x11a225a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a225a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a225a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a225a2 push esi */
  push32((uint32_t)(ESI));
  /* 11a225a3 mov esi, ecx */
  ESI = (ECX);
  /* 11a225a5 push edi */
  push32((uint32_t)(EDI));
  /* 11a225a6 mov eax, dword ptr [esi + 0x23] */
  EAX = (r32((uint32_t)(ESI + 0x23)));
  /* 11a225a9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a225ac jne 0x11a22657 */
  if (!C.zf) goto L_11a22657;
  /* 11a225b2 cmp dword ptr [esi + 0x27], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x27))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a225b6 jne 0x11a22657 */
  if (!C.zf) goto L_11a22657;
  /* 11a225bc mov al, byte ptr [esi + 0x22] */
  AL = (r8((uint32_t)(ESI + 0x22)));
  /* 11a225bf mov ebp, dword ptr [esp + 0x14] */
  EBP = (r32((uint32_t)(ESP + 0x14)));
  /* 11a225c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a225c5 push eax */
  push32((uint32_t)(EAX));
  /* 11a225c6 push ebp */
  push32((uint32_t)(EBP));
  /* 11a225c7 call dword ptr [0x11a2a13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a13c))), 0x11a225cdu);
  /* 11a225cd mov cl, byte ptr [esi + 0x22] */
  CL = (r8((uint32_t)(ESI + 0x22)));
  /* 11a225d0 mov ebx, dword ptr [0x11a2a14c] */
  EBX = (r32((uint32_t)(0x11a2a14c)));
  /* 11a225d6 lea edi, [esi + 9] */
  EDI = ((uint32_t)(ESI + 0x9));
  /* 11a225d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a225db push edi */
  push32((uint32_t)(EDI));
  /* 11a225dc push ecx */
  push32((uint32_t)(ECX));
  /* 11a225dd call ebx */
  call_ind((uint32_t)(EBX), 0x11a225dfu);
  /* 11a225df mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a225e2 mov al, byte ptr [esi + 0x22] */
  AL = (r8((uint32_t)(ESI + 0x22)));
  /* 11a225e5 push edx */
  push32((uint32_t)(EDX));
  /* 11a225e6 push eax */
  push32((uint32_t)(EAX));
  /* 11a225e7 call dword ptr [0x11a2a150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a150))), 0x11a225edu);
  /* 11a225ed mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a225f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a225f1 call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a225f7u);
  /* 11a225f7 mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a225fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a225fc push edx */
  push32((uint32_t)(EDX));
  /* 11a225fd push 0x11a2fac0 */
  push32((uint32_t)(0x11a2fac0u));
  /* 11a22602 push ebp */
  push32((uint32_t)(EBP));
  /* 11a22603 call dword ptr [0x11a2a148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a148))), 0x11a22609u);
  /* 11a22609 mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a2260c lea ebp, [esi + 0x11] */
  EBP = ((uint32_t)(ESI + 0x11));
  /* 11a2260f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22611 push ebp */
  push32((uint32_t)(EBP));
  /* 11a22612 push eax */
  push32((uint32_t)(EAX));
  /* 11a22613 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22615u);
  /* 11a22615 mov ebx, dword ptr [0x11a2a180] */
  EBX = (r32((uint32_t)(0x11a2a180)));
  /* 11a2261b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2261e lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11a22621 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22623 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22624 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22626u);
  /* 11a22626 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a22628 push ebp */
  push32((uint32_t)(EBP));
  /* 11a22629 call ebx */
  call_ind((uint32_t)(EBX), 0x11a2262bu);
  /* 11a2262b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2262d push edi */
  push32((uint32_t)(EDI));
  /* 11a2262e call ebx */
  call_ind((uint32_t)(EBX), 0x11a22630u);
  /* 11a22630 mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22633 push edx */
  push32((uint32_t)(EDX));
  /* 11a22634 call dword ptr [0x11a2a158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a158))), 0x11a2263au);
  /* 11a2263a mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a2263d push eax */
  push32((uint32_t)(EAX));
  /* 11a2263e call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a22644u);
  /* 11a22644 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22647 mov dword ptr [esi + 0x23], 3 */
  w32((uint32_t)(ESI + 0x23), (0x3u));
L_11a2264e:;
  /* 11a2264e pop edi */
  EDI = (pop32());
  /* 11a2264f pop esi */
  ESI = (pop32());
  /* 11a22650 pop ebp */
  EBP = (pop32());
  /* 11a22651 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a22653 pop ebx */
  EBX = (pop32());
  /* 11a22654 ret 4 */
  ESPCHK(0x11a225a0u, _esp0);
  ESP += 8; return;
L_11a22657:;
  /* 11a22657 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2265a jne 0x11a226e5 */
  if (!C.zf) goto L_11a226e5;
  /* 11a22660 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11a22663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22665 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22666 call dword ptr [0x11a2a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a180))), 0x11a2266cu);
  /* 11a2266c mov edi, dword ptr [0x11a2a198] */
  EDI = (r32((uint32_t)(0x11a2a198)));
  /* 11a22672 lea edx, [esi + 0x11] */
  EDX = ((uint32_t)(ESI + 0x11));
  /* 11a22675 push edx */
  push32((uint32_t)(EDX));
  /* 11a22676 call edi */
  call_ind((uint32_t)(EDI), 0x11a22678u);
  /* 11a22678 mov ebx, eax */
  EBX = (EAX);
  /* 11a2267a lea eax, [esi + 9] */
  EAX = ((uint32_t)(ESI + 0x9));
  /* 11a2267d push eax */
  push32((uint32_t)(EAX));
  /* 11a2267e call edi */
  call_ind((uint32_t)(EDI), 0x11a22680u);
  /* 11a22680 mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22683 mov edi, dword ptr [0x11a2a15c] */
  EDI = (r32((uint32_t)(0x11a2a15c)));
  /* 11a22689 push ecx */
  push32((uint32_t)(ECX));
  /* 11a2268a add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2268c call edi */
  call_ind((uint32_t)(EDI), 0x11a2268eu);
  /* 11a2268e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22691 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22693 je 0x11a226b9 */
  if (C.zf) goto L_11a226b9;
  /* 11a22695 mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22698 push edx */
  push32((uint32_t)(EDX));
  /* 11a22699 call edi */
  call_ind((uint32_t)(EDI), 0x11a2269bu);
  /* 11a2269b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2269e cmp eax, 0x50 */
  { uint32_t _a=(EAX),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a226a1 je 0x11a226b9 */
  if (C.zf) goto L_11a226b9;
  /* 11a226a3 mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a226a6 push eax */
  push32((uint32_t)(EAX));
  /* 11a226a7 call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a226adu);
  /* 11a226ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a226b0 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a226b2 pop edi */
  EDI = (pop32());
  /* 11a226b3 pop esi */
  ESI = (pop32());
  /* 11a226b4 pop ebp */
  EBP = (pop32());
  /* 11a226b5 pop ebx */
  EBX = (pop32());
  /* 11a226b6 ret 4 */
  ESPCHK(0x11a225a0u, _esp0);
  ESP += 8; return;
L_11a226b9:;
  /* 11a226b9 mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a226bc mov dword ptr [esi + 0x23], 6 */
  w32((uint32_t)(ESI + 0x23), (0x6u));
  /* 11a226c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a226c4 call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a226cau);
  /* 11a226ca mov dl, byte ptr [esi + 0x2b] */
  DL = (r8((uint32_t)(ESI + 0x2b)));
  /* 11a226cd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a226d2 push edx */
  push32((uint32_t)(EDX));
  /* 11a226d3 call dword ptr [0x11a2a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a154))), 0x11a226d9u);
  /* 11a226d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a226dc xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a226de pop edi */
  EDI = (pop32());
  /* 11a226df pop esi */
  ESI = (pop32());
  /* 11a226e0 pop ebp */
  EBP = (pop32());
  /* 11a226e1 pop ebx */
  EBX = (pop32());
  /* 11a226e2 ret 4 */
  ESPCHK(0x11a225a0u, _esp0);
  ESP += 8; return;
L_11a226e5:;
  /* 11a226e5 cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a226e8 jne 0x11a2264e */
  if (!C.zf) goto L_11a2264e;
  /* 11a226ee mov al, byte ptr [esi + 0x2b] */
  AL = (r8((uint32_t)(ESI + 0x2b)));
  /* 11a226f1 push eax */
  push32((uint32_t)(EAX));
  /* 11a226f2 call dword ptr [0x11a2a164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a164))), 0x11a226f8u);
  /* 11a226f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a226fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a226fd je 0x11a2264e */
  if (C.zf) goto L_11a2264e;
  /* 11a22703 mov edi, dword ptr [0x11a2a180] */
  EDI = (r32((uint32_t)(0x11a2a180)));
  /* 11a22709 lea ecx, [esi + 0x11] */
  ECX = ((uint32_t)(ESI + 0x11));
  /* 11a2270c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2270e push ecx */
  push32((uint32_t)(ECX));
  /* 11a2270f mov dword ptr [esi + 0x23], 1 */
  w32((uint32_t)(ESI + 0x23), (0x1u));
  /* 11a22716 mov dword ptr [esi + 0x27], 0 */
  w32((uint32_t)(ESI + 0x27), (0x0u));
  /* 11a2271d mov byte ptr [esi], 1 */
  w8((uint32_t)(ESI), (0x1u));
  /* 11a22720 call edi */
  call_ind((uint32_t)(EDI), 0x11a22722u);
  /* 11a22722 mov ebx, dword ptr [esp + 0x1c] */
  EBX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a22726 mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22729 mov ebp, dword ptr [0x11a2a168] */
  EBP = (r32((uint32_t)(0x11a2a168)));
  /* 11a2272f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22731 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22733 push ebx */
  push32((uint32_t)(EBX));
  /* 11a22734 push edx */
  push32((uint32_t)(EDX));
  /* 11a22735 call ebp */
  call_ind((uint32_t)(EBP), 0x11a22737u);
  /* 11a22737 mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a2273a push eax */
  push32((uint32_t)(EAX));
  /* 11a2273b call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a22741u);
  /* 11a22741 lea ecx, [esi + 9] */
  ECX = ((uint32_t)(ESI + 0x9));
  /* 11a22744 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22746 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22747 call edi */
  call_ind((uint32_t)(EDI), 0x11a22749u);
  /* 11a22749 mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a2274c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2274e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22750 push ebx */
  push32((uint32_t)(EBX));
  /* 11a22751 push edx */
  push32((uint32_t)(EDX));
  /* 11a22752 call ebp */
  call_ind((uint32_t)(EBP), 0x11a22754u);
  /* 11a22754 mov al, byte ptr [esi + 0x22] */
  AL = (r8((uint32_t)(ESI + 0x22)));
  /* 11a22757 mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a2275a push eax */
  push32((uint32_t)(EAX));
  /* 11a2275b push ecx */
  push32((uint32_t)(ECX));
  /* 11a2275c call dword ptr [0x11a2a150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a150))), 0x11a22762u);
  /* 11a22762 mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22765 push edx */
  push32((uint32_t)(EDX));
  /* 11a22766 call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a2276cu);
  /* 11a2276c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2276f mov al, 1 */
  AL = (0x1u);
  /* 11a22771 pop edi */
  EDI = (pop32());
  /* 11a22772 pop esi */
  ESI = (pop32());
  /* 11a22773 pop ebp */
  EBP = (pop32());
  /* 11a22774 pop ebx */
  EBX = (pop32());
  /* 11a22775 ret 4 */
  ESPCHK(0x11a225a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002780 @ 0x11a22780 (307 bytes, 114 insns) */
void f_11a22780(void) {
  FTRACE(0x11a22780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22780 push ebx */
  push32((uint32_t)(EBX));
  /* 11a22781 push ebp */
  push32((uint32_t)(EBP));
  /* 11a22782 push esi */
  push32((uint32_t)(ESI));
  /* 11a22783 mov esi, ecx */
  ESI = (ECX);
  /* 11a22785 mov eax, dword ptr [esi + 0x23] */
  EAX = (r32((uint32_t)(ESI + 0x23)));
  /* 11a22788 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2278b jne 0x11a227de */
  if (!C.zf) goto L_11a227de;
  /* 11a2278d cmp dword ptr [esi + 0x27], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x27))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22791 jne 0x11a2279b */
  if (!C.zf) goto L_11a2279b;
  /* 11a22793 pop esi */
  ESI = (pop32());
  /* 11a22794 pop ebp */
  EBP = (pop32());
  /* 11a22795 mov al, 1 */
  AL = (0x1u);
  /* 11a22797 pop ebx */
  EBX = (pop32());
  /* 11a22798 ret 4 */
  ESPCHK(0x11a22780u, _esp0);
  ESP += 8; return;
L_11a2279b:;
  /* 11a2279b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2279e jne 0x11a227de */
  if (!C.zf) goto L_11a227de;
  /* 11a227a0 mov ecx, dword ptr [esi + 0x27] */
  ECX = (r32((uint32_t)(ESI + 0x27)));
  /* 11a227a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a227a5 jne 0x11a227de */
  if (!C.zf) goto L_11a227de;
  /* 11a227a7 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11a227aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a227ac push eax */
  push32((uint32_t)(EAX));
  /* 11a227ad call dword ptr [0x11a2a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a180))), 0x11a227b3u);
  /* 11a227b3 mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a227b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a227b7 call dword ptr [0x11a2a144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a144))), 0x11a227bdu);
  /* 11a227bd mov dl, byte ptr [esi + 0x2b] */
  DL = (r8((uint32_t)(ESI + 0x2b)));
  /* 11a227c0 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 11a227c5 push edx */
  push32((uint32_t)(EDX));
  /* 11a227c6 mov dword ptr [esi + 0x23], 4 */
  w32((uint32_t)(ESI + 0x23), (0x4u));
  /* 11a227cd call dword ptr [0x11a2a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a154))), 0x11a227d3u);
  /* 11a227d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a227d6 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a227d8 pop esi */
  ESI = (pop32());
  /* 11a227d9 pop ebp */
  EBP = (pop32());
  /* 11a227da pop ebx */
  EBX = (pop32());
  /* 11a227db ret 4 */
  ESPCHK(0x11a22780u, _esp0);
  ESP += 8; return;
L_11a227de:;
  /* 11a227de mov ebx, dword ptr [0x11a2a180] */
  EBX = (r32((uint32_t)(0x11a2a180)));
  /* 11a227e4 mov ebp, dword ptr [0x11a2a160] */
  EBP = (r32((uint32_t)(0x11a2a160)));
  /* 11a227ea cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a227ed jne 0x11a22853 */
  if (!C.zf) goto L_11a22853;
  /* 11a227ef mov al, byte ptr [esi + 0x2b] */
  AL = (r8((uint32_t)(ESI + 0x2b)));
  /* 11a227f2 push eax */
  push32((uint32_t)(EAX));
  /* 11a227f3 call dword ptr [0x11a2a164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a164))), 0x11a227f9u);
  /* 11a227f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a227fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a227fe je 0x11a22853 */
  if (C.zf) goto L_11a22853;
  /* 11a22800 push edi */
  push32((uint32_t)(EDI));
  /* 11a22801 lea edi, [esi + 0x11] */
  EDI = ((uint32_t)(ESI + 0x11));
  /* 11a22804 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22806 push edi */
  push32((uint32_t)(EDI));
  /* 11a22807 mov dword ptr [esi + 0x23], 5 */
  w32((uint32_t)(ESI + 0x23), (0x5u));
  /* 11a2280e call ebx */
  call_ind((uint32_t)(EBX), 0x11a22810u);
  /* 11a22810 mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11a22814 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22816 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22818 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22819 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a2281b call dword ptr [0x11a2a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a168))), 0x11a22821u);
  /* 11a22821 push 0x11a2fe58 */
  push32((uint32_t)(0x11a2fe58u));
  /* 11a22826 push edi */
  push32((uint32_t)(EDI));
  /* 11a22827 mov edi, dword ptr [0x11a2a19c] */
  EDI = (r32((uint32_t)(0x11a2a19c)));
  /* 11a2282d call edi */
  call_ind((uint32_t)(EDI), 0x11a2282fu);
  /* 11a2282f lea edx, [esi + 9] */
  EDX = ((uint32_t)(ESI + 0x9));
  /* 11a22832 push 0x11a2fe58 */
  push32((uint32_t)(0x11a2fe58u));
  /* 11a22837 push edx */
  push32((uint32_t)(EDX));
  /* 11a22838 call edi */
  call_ind((uint32_t)(EDI), 0x11a2283au);
  /* 11a2283a mov al, byte ptr [esi + 0x2b] */
  AL = (r8((uint32_t)(ESI + 0x2b)));
  /* 11a2283d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a22842 push eax */
  push32((uint32_t)(EAX));
  /* 11a22843 call dword ptr [0x11a2a154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a154))), 0x11a22849u);
  /* 11a22849 mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a2284c push ecx */
  push32((uint32_t)(ECX));
  /* 11a2284d call ebp */
  call_ind((uint32_t)(EBP), 0x11a2284fu);
  /* 11a2284f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22852 pop edi */
  EDI = (pop32());
L_11a22853:;
  /* 11a22853 cmp dword ptr [esi + 0x23], 5 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x23))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22857 jne 0x11a228ab */
  if (!C.zf) goto L_11a228ab;
  /* 11a22859 mov dl, byte ptr [esi + 0x2b] */
  DL = (r8((uint32_t)(ESI + 0x2b)));
  /* 11a2285c push edx */
  push32((uint32_t)(EDX));
  /* 11a2285d call dword ptr [0x11a2a164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a164))), 0x11a22863u);
  /* 11a22863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22866 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a22868 je 0x11a228ab */
  if (C.zf) goto L_11a228ab;
  /* 11a2286a lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11a2286d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2286f push eax */
  push32((uint32_t)(EAX));
  /* 11a22870 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22872u);
  /* 11a22872 mov cl, byte ptr [esi + 0x21] */
  CL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22875 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22876 call dword ptr [0x11a2a15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a15c))), 0x11a2287cu);
  /* 11a2287c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2287f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a22881 jne 0x11a228a2 */
  if (!C.zf) goto L_11a228a2;
  /* 11a22883 mov dl, byte ptr [esi + 0x21] */
  DL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22886 mov dword ptr [esi + 0x23], 2 */
  w32((uint32_t)(ESI + 0x23), (0x2u));
  /* 11a2288d push edx */
  push32((uint32_t)(EDX));
  /* 11a2288e mov dword ptr [esi + 0x27], 1 */
  w32((uint32_t)(ESI + 0x27), (0x1u));
  /* 11a22895 call ebp */
  call_ind((uint32_t)(EBP), 0x11a22897u);
  /* 11a22897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2289a mov al, 1 */
  AL = (0x1u);
  /* 11a2289c pop esi */
  ESI = (pop32());
  /* 11a2289d pop ebp */
  EBP = (pop32());
  /* 11a2289e pop ebx */
  EBX = (pop32());
  /* 11a2289f ret 4 */
  ESPCHK(0x11a22780u, _esp0);
  ESP += 8; return;
L_11a228a2:;
  /* 11a228a2 mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a228a5 push eax */
  push32((uint32_t)(EAX));
  /* 11a228a6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a228a8u);
  /* 11a228a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a228ab:;
  /* 11a228ab pop esi */
  ESI = (pop32());
  /* 11a228ac pop ebp */
  EBP = (pop32());
  /* 11a228ad xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a228af pop ebx */
  EBX = (pop32());
  /* 11a228b0 ret 4 */
  ESPCHK(0x11a22780u, _esp0);
  ESP += 8; return;
}

/* FUN_100028c0 @ 0x11a228c0 (231 bytes, 85 insns) */
void f_11a228c0(void) {
  FTRACE(0x11a228c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a228c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a228c1 push esi */
  push32((uint32_t)(ESI));
  /* 11a228c2 push edi */
  push32((uint32_t)(EDI));
  /* 11a228c3 mov esi, ecx */
  ESI = (ECX);
  /* 11a228c5 call 0x11a22430 */
  push32(0x11a228cau); f_11a22430();
  /* 11a228ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a228cc je 0x11a22994 */
  if (C.zf) goto L_11a22994;
  /* 11a228d2 mov al, byte ptr [esi + 0x22] */
  AL = (r8((uint32_t)(ESI + 0x22)));
  /* 11a228d5 mov ebp, dword ptr [esp + 0x10] */
  EBP = (r32((uint32_t)(ESP + 0x10)));
  /* 11a228d9 mov edi, dword ptr [0x11a2a184] */
  EDI = (r32((uint32_t)(0x11a2a184)));
  /* 11a228df push eax */
  push32((uint32_t)(EAX));
  /* 11a228e0 push 0x11a2f1a8 */
  push32((uint32_t)(0x11a2f1a8u));
  /* 11a228e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a228e6 call edi */
  call_ind((uint32_t)(EDI), 0x11a228e8u);
  /* 11a228e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a228eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a228ed je 0x11a2290a */
  if (C.zf) goto L_11a2290a;
  /* 11a228ef mov cl, byte ptr [esi + 0x22] */
  CL = (r8((uint32_t)(ESI + 0x22)));
  /* 11a228f2 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a228f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a228f7 push 0x11a2f1a8 */
  push32((uint32_t)(0x11a2f1a8u));
  /* 11a228fc push edx */
  push32((uint32_t)(EDX));
  /* 11a228fd call edi */
  call_ind((uint32_t)(EDI), 0x11a228ffu);
  /* 11a228ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22902 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a22904 jne 0x11a22994 */
  if (!C.zf) goto L_11a22994;
L_11a2290a:;
  /* 11a2290a mov al, byte ptr [esi + 0x2c] */
  AL = (r8((uint32_t)(ESI + 0x2c)));
  /* 11a2290d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a2290f jne 0x11a22921 */
  if (!C.zf) goto L_11a22921;
  /* 11a22911 push ebp */
  push32((uint32_t)(EBP));
  /* 11a22912 mov ecx, esi */
  ECX = (ESI);
  /* 11a22914 call 0x11a22450 */
  push32(0x11a22919u); f_11a22450();
  /* 11a22919 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a2291b je 0x11a22921 */
  if (C.zf) goto L_11a22921;
  /* 11a2291d mov byte ptr [esi + 0x2c], 1 */
  w8((uint32_t)(ESI + 0x2c), (0x1u));
L_11a22921:;
  /* 11a22921 cmp byte ptr [esi + 0x2c], 1 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a22925 jne 0x11a22937 */
  if (!C.zf) goto L_11a22937;
  /* 11a22927 push ebp */
  push32((uint32_t)(EBP));
  /* 11a22928 mov ecx, esi */
  ECX = (ESI);
  /* 11a2292a call 0x11a22780 */
  push32(0x11a2292fu); f_11a22780();
  /* 11a2292f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a22931 je 0x11a22937 */
  if (C.zf) goto L_11a22937;
  /* 11a22933 mov byte ptr [esi + 0x2c], 2 */
  w8((uint32_t)(ESI + 0x2c), (0x2u));
L_11a22937:;
  /* 11a22937 cmp byte ptr [esi + 0x2c], 2 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2293b jne 0x11a2294d */
  if (!C.zf) goto L_11a2294d;
  /* 11a2293d push ebp */
  push32((uint32_t)(EBP));
  /* 11a2293e mov ecx, esi */
  ECX = (ESI);
  /* 11a22940 call 0x11a225a0 */
  push32(0x11a22945u); f_11a225a0();
  /* 11a22945 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a22947 je 0x11a2294d */
  if (C.zf) goto L_11a2294d;
  /* 11a22949 mov byte ptr [esi + 0x2c], 3 */
  w8((uint32_t)(ESI + 0x2c), (0x3u));
L_11a2294d:;
  /* 11a2294d mov al, byte ptr [esi + 0x2c] */
  AL = (r8((uint32_t)(ESI + 0x2c)));
  /* 11a22950 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a22954 cmp al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a22956 jne 0x11a22968 */
  if (!C.zf) goto L_11a22968;
  /* 11a22958 push edi */
  push32((uint32_t)(EDI));
  /* 11a22959 mov ecx, esi */
  ECX = (ESI);
  /* 11a2295b call 0x11a22450 */
  push32(0x11a22960u); f_11a22450();
  /* 11a22960 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a22962 je 0x11a22968 */
  if (C.zf) goto L_11a22968;
  /* 11a22964 mov byte ptr [esi + 0x2c], 4 */
  w8((uint32_t)(ESI + 0x2c), (0x4u));
L_11a22968:;
  /* 11a22968 cmp byte ptr [esi + 0x2c], 4 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x2c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2296c jne 0x11a2297e */
  if (!C.zf) goto L_11a2297e;
  /* 11a2296e push edi */
  push32((uint32_t)(EDI));
  /* 11a2296f mov ecx, esi */
  ECX = (ESI);
  /* 11a22971 call 0x11a22780 */
  push32(0x11a22976u); f_11a22780();
  /* 11a22976 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a22978 je 0x11a2297e */
  if (C.zf) goto L_11a2297e;
  /* 11a2297a mov byte ptr [esi + 0x2c], 5 */
  w8((uint32_t)(ESI + 0x2c), (0x5u));
L_11a2297e:;
  /* 11a2297e cmp byte ptr [esi + 0x2c], 5 */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x2c))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a22982 jne 0x11a22994 */
  if (!C.zf) goto L_11a22994;
  /* 11a22984 push edi */
  push32((uint32_t)(EDI));
  /* 11a22985 mov ecx, esi */
  ECX = (ESI);
  /* 11a22987 call 0x11a225a0 */
  push32(0x11a2298cu); f_11a225a0();
  /* 11a2298c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a2298e je 0x11a22994 */
  if (C.zf) goto L_11a22994;
  /* 11a22990 mov byte ptr [esi + 0x2c], 0 */
  w8((uint32_t)(ESI + 0x2c), (0x0u));
L_11a22994:;
  /* 11a22994 mov al, byte ptr [esi + 0x21] */
  AL = (r8((uint32_t)(ESI + 0x21)));
  /* 11a22997 push eax */
  push32((uint32_t)(EAX));
  /* 11a22998 call dword ptr [0x11a2a160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a160))), 0x11a2299eu);
  /* 11a2299e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a229a1 pop edi */
  EDI = (pop32());
  /* 11a229a2 pop esi */
  ESI = (pop32());
  /* 11a229a3 pop ebp */
  EBP = (pop32());
  /* 11a229a4 ret 8 */
  ESPCHK(0x11a228c0u, _esp0);
  ESP += 12; return;
}

/* FUN_100029b0 @ 0x11a229b0 (28 bytes, 11 insns) */
void f_11a229b0(void) {
  FTRACE(0x11a229b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a229b0 push esi */
  push32((uint32_t)(ESI));
  /* 11a229b1 mov esi, ecx */
  ESI = (ECX);
  /* 11a229b3 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11a229b6 push eax */
  push32((uint32_t)(EAX));
  /* 11a229b7 call dword ptr [0x11a2a1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a1a0))), 0x11a229bdu);
  /* 11a229bd mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a229c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a229c4 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a229c6 mov eax, esi */
  EAX = (ESI);
  /* 11a229c8 pop esi */
  ESI = (pop32());
  /* 11a229c9 ret 4 */
  ESPCHK(0x11a229b0u, _esp0);
  ESP += 8; return;
}

/* FUN_100029d0 @ 0x11a229d0 (31 bytes, 13 insns) */
void f_11a229d0(void) {
  FTRACE(0x11a229d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a229d0 push esi */
  push32((uint32_t)(ESI));
  /* 11a229d1 mov esi, ecx */
  ESI = (ECX);
  /* 11a229d3 cmp dword ptr [esi + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a229d7 je 0x11a229ed */
  if (C.zf) goto L_11a229ed;
  /* 11a229d9 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11a229dc push eax */
  push32((uint32_t)(EAX));
  /* 11a229dd call dword ptr [0x11a2a198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a198))), 0x11a229e3u);
  /* 11a229e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a229e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a229e8 jne 0x11a229ed */
  if (!C.zf) goto L_11a229ed;
  /* 11a229ea mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_11a229ed:;
  /* 11a229ed pop esi */
  ESI = (pop32());
  /* 11a229ee ret  */
  ESPCHK(0x11a229d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100029f0 @ 0x11a229f0 (72 bytes, 24 insns) */
void f_11a229f0(void) {
  FTRACE(0x11a229f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a229f0 push esi */
  push32((uint32_t)(ESI));
  /* 11a229f1 mov esi, ecx */
  ESI = (ECX);
  /* 11a229f3 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a229f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a229f8 jne 0x11a22a34 */
  if (!C.zf) goto L_11a22a34;
  /* 11a229fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a229fc call dword ptr [0x11a2a130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a130))), 0x11a22a02u);
  /* 11a22a02 mov ecx, 0xa */
  ECX = (0xau);
  /* 11a22a07 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a22a0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a22a0d lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a22a10 lea ecx, [esi + 4] */
  ECX = ((uint32_t)(ESI + 0x4));
  /* 11a22a13 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a22a16 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a22a19 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a22a1c push eax */
  push32((uint32_t)(EAX));
  /* 11a22a1d push ecx */
  push32((uint32_t)(ECX));
  /* 11a22a1e push 0x11a2fa70 */
  push32((uint32_t)(0x11a2fa70u));
  /* 11a22a23 push edx */
  push32((uint32_t)(EDX));
  /* 11a22a24 call dword ptr [0x11a2a140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a140))), 0x11a22a2au);
  /* 11a22a2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22a2d mov dword ptr [esi + 0xc], 1 */
  w32((uint32_t)(ESI + 0xc), (0x1u));
L_11a22a34:;
  /* 11a22a34 pop esi */
  ESI = (pop32());
  /* 11a22a35 ret 4 */
  ESPCHK(0x11a229f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002a40 @ 0x11a22a40 (74 bytes, 28 insns) */
void f_11a22a40(void) {
  FTRACE(0x11a22a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22a40 push esi */
  push32((uint32_t)(ESI));
  /* 11a22a41 mov esi, ecx */
  ESI = (ECX);
  /* 11a22a43 push edi */
  push32((uint32_t)(EDI));
  /* 11a22a44 cmp dword ptr [esi + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22a48 jne 0x11a22a85 */
  if (!C.zf) goto L_11a22a85;
  /* 11a22a4a mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a22a4e lea edi, [esi + 4] */
  EDI = ((uint32_t)(ESI + 0x4));
  /* 11a22a51 push edi */
  push32((uint32_t)(EDI));
  /* 11a22a52 push eax */
  push32((uint32_t)(EAX));
  /* 11a22a53 call dword ptr [0x11a2a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a17c))), 0x11a22a59u);
  /* 11a22a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a22a5e je 0x11a22a85 */
  if (C.zf) goto L_11a22a85;
  /* 11a22a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22a62 push edi */
  push32((uint32_t)(EDI));
  /* 11a22a63 call dword ptr [0x11a2a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a180))), 0x11a22a69u);
  /* 11a22a69 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a22a6d mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11a22a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22a73 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22a74 push edx */
  push32((uint32_t)(EDX));
  /* 11a22a75 call dword ptr [0x11a2a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a168))), 0x11a22a7bu);
  /* 11a22a7b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22a7e mov dword ptr [esi + 0xc], 2 */
  w32((uint32_t)(ESI + 0xc), (0x2u));
L_11a22a85:;
  /* 11a22a85 pop edi */
  EDI = (pop32());
  /* 11a22a86 pop esi */
  ESI = (pop32());
  /* 11a22a87 ret 8 */
  ESPCHK(0x11a22a40u, _esp0);
  ESP += 12; return;
}

/* FUN_10002a90 @ 0x11a22a90 (72 bytes, 27 insns) */
void f_11a22a90(void) {
  FTRACE(0x11a22a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22a90 push esi */
  push32((uint32_t)(ESI));
  /* 11a22a91 mov esi, ecx */
  ESI = (ECX);
  /* 11a22a93 push edi */
  push32((uint32_t)(EDI));
  /* 11a22a94 cmp dword ptr [esi + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a22a98 jne 0x11a22ad3 */
  if (!C.zf) goto L_11a22ad3;
  /* 11a22a9a mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a22a9e lea edi, [esi + 4] */
  EDI = ((uint32_t)(ESI + 0x4));
  /* 11a22aa1 push edi */
  push32((uint32_t)(EDI));
  /* 11a22aa2 push eax */
  push32((uint32_t)(EAX));
  /* 11a22aa3 call dword ptr [0x11a2a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a17c))), 0x11a22aa9u);
  /* 11a22aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a22aae je 0x11a22ad3 */
  if (C.zf) goto L_11a22ad3;
  /* 11a22ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22ab2 push edi */
  push32((uint32_t)(EDI));
  /* 11a22ab3 call dword ptr [0x11a2a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a180))), 0x11a22ab9u);
  /* 11a22ab9 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a22abd mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11a22abf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a22ac1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a22ac2 push edx */
  push32((uint32_t)(EDX));
  /* 11a22ac3 call dword ptr [0x11a2a138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a138))), 0x11a22ac9u);
  /* 11a22ac9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22acc mov dword ptr [esi + 0xc], 3 */
  w32((uint32_t)(ESI + 0xc), (0x3u));
L_11a22ad3:;
  /* 11a22ad3 pop edi */
  EDI = (pop32());
  /* 11a22ad4 pop esi */
  ESI = (pop32());
  /* 11a22ad5 ret 8 */
  ESPCHK(0x11a22a90u, _esp0);
  ESP += 12; return;
}

/* FUN_10002ae0 @ 0x11a22ae0 (56 bytes, 22 insns) */
void f_11a22ae0(void) {
  FTRACE(0x11a22ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22ae0 push esi */
  push32((uint32_t)(ESI));
  /* 11a22ae1 push edi */
  push32((uint32_t)(EDI));
  /* 11a22ae2 mov esi, ecx */
  ESI = (ECX);
  /* 11a22ae4 call 0x11a229d0 */
  push32(0x11a22ae9u); f_11a229d0();
  /* 11a22ae9 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a22aed mov ecx, esi */
  ECX = (ESI);
  /* 11a22aef push eax */
  push32((uint32_t)(EAX));
  /* 11a22af0 call 0x11a229f0 */
  push32(0x11a22af5u); f_11a229f0();
  /* 11a22af5 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a22af9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a22afd push edi */
  push32((uint32_t)(EDI));
  /* 11a22afe push ecx */
  push32((uint32_t)(ECX));
  /* 11a22aff mov ecx, esi */
  ECX = (ESI);
  /* 11a22b01 call 0x11a22a40 */
  push32(0x11a22b06u); f_11a22a40();
  /* 11a22b06 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a22b0a mov ecx, esi */
  ECX = (ESI);
  /* 11a22b0c push edx */
  push32((uint32_t)(EDX));
  /* 11a22b0d push edi */
  push32((uint32_t)(EDI));
  /* 11a22b0e call 0x11a22a90 */
  push32(0x11a22b13u); f_11a22a90();
  /* 11a22b13 pop edi */
  EDI = (pop32());
  /* 11a22b14 pop esi */
  ESI = (pop32());
  /* 11a22b15 ret 0x10 */
  ESPCHK(0x11a22ae0u, _esp0);
  ESP += 20; return;
}

/* OnInit @ 0x11a22de0 (804 bytes, 217 insns) */
void f_11a22de0(void) {
  FTRACE(0x11a22de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a22de0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a22de1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a22de2 push esi */
  push32((uint32_t)(ESI));
  /* 11a22de3 mov esi, dword ptr [0x11a2a1a0] */
  ESI = (r32((uint32_t)(0x11a2a1a0)));
  /* 11a22de9 push edi */
  push32((uint32_t)(EDI));
  /* 11a22dea push 0x11a2f1b0 */
  push32((uint32_t)(0x11a2f1b0u));
  /* 11a22def call esi */
  call_ind((uint32_t)(ESI), 0x11a22df1u);
  /* 11a22df1 mov edi, dword ptr [0x11a2a11c] */
  EDI = (r32((uint32_t)(0x11a2a11c)));
  /* 11a22df7 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a22df9 push 0x11a2f1b0 */
  push32((uint32_t)(0x11a2f1b0u));
  /* 11a22dfe call edi */
  call_ind((uint32_t)(EDI), 0x11a22e00u);
  /* 11a22e00 push 0x11a2fe58 */
  push32((uint32_t)(0x11a2fe58u));
  /* 11a22e05 call esi */
  call_ind((uint32_t)(ESI), 0x11a22e07u);
  /* 11a22e07 mov ebx, dword ptr [0x11a2a120] */
  EBX = (r32((uint32_t)(0x11a2a120)));
  /* 11a22e0d push 0x11a2c3f4 */
  push32((uint32_t)(0x11a2c3f4u));
  /* 11a22e12 push 0x11a2fad8 */
  push32((uint32_t)(0x11a2fad8u));
  /* 11a22e17 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22e19u);
  /* 11a22e19 mov ebp, dword ptr [0x11a2a118] */
  EBP = (r32((uint32_t)(0x11a2a118)));
  /* 11a22e1f push 0x11a2c3ec */
  push32((uint32_t)(0x11a2c3ecu));
  /* 11a22e24 push 0x11a2f1c8 */
  push32((uint32_t)(0x11a2f1c8u));
  /* 11a22e29 call ebp */
  call_ind((uint32_t)(EBP), 0x11a22e2bu);
  /* 11a22e2b push 0x11a2c3e0 */
  push32((uint32_t)(0x11a2c3e0u));
  /* 11a22e30 push 0x11a2fe70 */
  push32((uint32_t)(0x11a2fe70u));
  /* 11a22e35 call ebp */
  call_ind((uint32_t)(EBP), 0x11a22e37u);
  /* 11a22e37 push 0x11a2c3d4 */
  push32((uint32_t)(0x11a2c3d4u));
  /* 11a22e3c push 0x11a2fac0 */
  push32((uint32_t)(0x11a2fac0u));
  /* 11a22e41 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22e43u);
  /* 11a22e43 push 0x11a2c3c0 */
  push32((uint32_t)(0x11a2c3c0u));
  /* 11a22e48 push 0x11a2f5f0 */
  push32((uint32_t)(0x11a2f5f0u));
  /* 11a22e4d call ebx */
  call_ind((uint32_t)(EBX), 0x11a22e4fu);
  /* 11a22e4f push 0x11a2c3b4 */
  push32((uint32_t)(0x11a2c3b4u));
  /* 11a22e54 push 0x11a2fe68 */
  push32((uint32_t)(0x11a2fe68u));
  /* 11a22e59 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22e5bu);
  /* 11a22e5b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22e5e push 0x11a2c3a8 */
  push32((uint32_t)(0x11a2c3a8u));
  /* 11a22e63 push 0x11a2fa70 */
  push32((uint32_t)(0x11a2fa70u));
  /* 11a22e68 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22e6au);
  /* 11a22e6a push 0x11a2c39c */
  push32((uint32_t)(0x11a2c39cu));
  /* 11a22e6f push 0x11a2fab8 */
  push32((uint32_t)(0x11a2fab8u));
  /* 11a22e74 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22e76u);
  /* 11a22e76 push 0x11a2faa0 */
  push32((uint32_t)(0x11a2faa0u));
  /* 11a22e7b call esi */
  call_ind((uint32_t)(ESI), 0x11a22e7du);
  /* 11a22e7d push 8 */
  push32((uint32_t)(0x8u));
  /* 11a22e7f push 0x11a2faa0 */
  push32((uint32_t)(0x11a2faa0u));
  /* 11a22e84 call edi */
  call_ind((uint32_t)(EDI), 0x11a22e86u);
  /* 11a22e86 mov ebp, dword ptr [0x11a2a128] */
  EBP = (r32((uint32_t)(0x11a2a128)));
  /* 11a22e8c push 0x11a2c394 */
  push32((uint32_t)(0x11a2c394u));
  /* 11a22e91 push 0x11a2f260 */
  push32((uint32_t)(0x11a2f260u));
  /* 11a22e96 call ebp */
  call_ind((uint32_t)(EBP), 0x11a22e98u);
  /* 11a22e98 push 0x11a2c380 */
  push32((uint32_t)(0x11a2c380u));
  /* 11a22e9d push 0x11a2f1a8 */
  push32((uint32_t)(0x11a2f1a8u));
  /* 11a22ea2 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22ea4u);
  /* 11a22ea4 mov esi, dword ptr [0x11a2a12c] */
  ESI = (r32((uint32_t)(0x11a2a12c)));
  /* 11a22eaa push 0x11a2c370 */
  push32((uint32_t)(0x11a2c370u));
  /* 11a22eaf push 0x11a2fe78 */
  push32((uint32_t)(0x11a2fe78u));
  /* 11a22eb4 call esi */
  call_ind((uint32_t)(ESI), 0x11a22eb6u);
  /* 11a22eb6 push 0x11a2c364 */
  push32((uint32_t)(0x11a2c364u));
  /* 11a22ebb push 0x11a2f1c0 */
  push32((uint32_t)(0x11a2f1c0u));
  /* 11a22ec0 call esi */
  call_ind((uint32_t)(ESI), 0x11a22ec2u);
  /* 11a22ec2 push 0x11a2c358 */
  push32((uint32_t)(0x11a2c358u));
  /* 11a22ec7 push 0x11a2f248 */
  push32((uint32_t)(0x11a2f248u));
  /* 11a22ecc call esi */
  call_ind((uint32_t)(ESI), 0x11a22eceu);
  /* 11a22ece add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22ed1 push 0x11a2c348 */
  push32((uint32_t)(0x11a2c348u));
  /* 11a22ed6 push 0x11a2fe80 */
  push32((uint32_t)(0x11a2fe80u));
  /* 11a22edb call esi */
  call_ind((uint32_t)(ESI), 0x11a22eddu);
  /* 11a22edd push 0x11a2c33c */
  push32((uint32_t)(0x11a2c33cu));
  /* 11a22ee2 push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a22ee7 call esi */
  call_ind((uint32_t)(ESI), 0x11a22ee9u);
  /* 11a22ee9 push 0x11a2c330 */
  push32((uint32_t)(0x11a2c330u));
  /* 11a22eee push 0x11a2f210 */
  push32((uint32_t)(0x11a2f210u));
  /* 11a22ef3 call esi */
  call_ind((uint32_t)(ESI), 0x11a22ef5u);
  /* 11a22ef5 push 0x11a2c320 */
  push32((uint32_t)(0x11a2c320u));
  /* 11a22efa push 0x11a2faa8 */
  push32((uint32_t)(0x11a2faa8u));
  /* 11a22eff call ebx */
  call_ind((uint32_t)(EBX), 0x11a22f01u);
  /* 11a22f01 push 0x11a2c3f4 */
  push32((uint32_t)(0x11a2c3f4u));
  /* 11a22f06 push 0x11a2fa90 */
  push32((uint32_t)(0x11a2fa90u));
  /* 11a22f0b call ebx */
  call_ind((uint32_t)(EBX), 0x11a22f0du);
  /* 11a22f0d mov ebx, dword ptr [0x11a2a124] */
  EBX = (r32((uint32_t)(0x11a2a124)));
  /* 11a22f13 push 0x11a2c318 */
  push32((uint32_t)(0x11a2c318u));
  /* 11a22f18 push 0x11a2f1b8 */
  push32((uint32_t)(0x11a2f1b8u));
  /* 11a22f1d call ebx */
  call_ind((uint32_t)(EBX), 0x11a22f1fu);
  /* 11a22f1f push 0x11a2c310 */
  push32((uint32_t)(0x11a2c310u));
  /* 11a22f24 push 0x11a2f240 */
  push32((uint32_t)(0x11a2f240u));
  /* 11a22f29 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22f2bu);
  /* 11a22f2b push 0x11a2c308 */
  push32((uint32_t)(0x11a2c308u));
  /* 11a22f30 push 0x11a2f208 */
  push32((uint32_t)(0x11a2f208u));
  /* 11a22f35 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22f37u);
  /* 11a22f37 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22f3a push 0x11a2c2f8 */
  push32((uint32_t)(0x11a2c2f8u));
  /* 11a22f3f push 0x11a2fa98 */
  push32((uint32_t)(0x11a2fa98u));
  /* 11a22f44 call esi */
  call_ind((uint32_t)(ESI), 0x11a22f46u);
  /* 11a22f46 push 0x11a2c2ec */
  push32((uint32_t)(0x11a2c2ecu));
  /* 11a22f4b push 0x11a2fad0 */
  push32((uint32_t)(0x11a2fad0u));
  /* 11a22f50 call esi */
  call_ind((uint32_t)(ESI), 0x11a22f52u);
  /* 11a22f52 push 0x11a2c2e0 */
  push32((uint32_t)(0x11a2c2e0u));
  /* 11a22f57 push 0x11a2fae8 */
  push32((uint32_t)(0x11a2fae8u));
  /* 11a22f5c call esi */
  call_ind((uint32_t)(ESI), 0x11a22f5eu);
  /* 11a22f5e push 0x11a2c2d4 */
  push32((uint32_t)(0x11a2c2d4u));
  /* 11a22f63 push 0x11a2fae0 */
  push32((uint32_t)(0x11a2fae0u));
  /* 11a22f68 call esi */
  call_ind((uint32_t)(ESI), 0x11a22f6au);
  /* 11a22f6a push 0x11a2c2c8 */
  push32((uint32_t)(0x11a2c2c8u));
  /* 11a22f6f push 0x11a2faf8 */
  push32((uint32_t)(0x11a2faf8u));
  /* 11a22f74 call esi */
  call_ind((uint32_t)(ESI), 0x11a22f76u);
  /* 11a22f76 push 0x11a2c2bc */
  push32((uint32_t)(0x11a2c2bcu));
  /* 11a22f7b push 0x11a2faf0 */
  push32((uint32_t)(0x11a2faf0u));
  /* 11a22f80 call esi */
  call_ind((uint32_t)(ESI), 0x11a22f82u);
  /* 11a22f82 push 0x11a2c2b0 */
  push32((uint32_t)(0x11a2c2b0u));
  /* 11a22f87 push 0x11a2fab0 */
  push32((uint32_t)(0x11a2fab0u));
  /* 11a22f8c call ebp */
  call_ind((uint32_t)(EBP), 0x11a22f8eu);
  /* 11a22f8e mov ebx, dword ptr [0x11a2a134] */
  EBX = (r32((uint32_t)(0x11a2a134)));
  /* 11a22f94 push 0x11a2c2a4 */
  push32((uint32_t)(0x11a2c2a4u));
  /* 11a22f99 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a22f9b call ebx */
  call_ind((uint32_t)(EBX), 0x11a22f9du);
  /* 11a22f9d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22fa0 push 0x11a2c29c */
  push32((uint32_t)(0x11a2c29cu));
  /* 11a22fa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a22fa7 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22fa9u);
  /* 11a22fa9 push 0x11a2c294 */
  push32((uint32_t)(0x11a2c294u));
  /* 11a22fae push 3 */
  push32((uint32_t)(0x3u));
  /* 11a22fb0 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22fb2u);
  /* 11a22fb2 push 0x11a2c28c */
  push32((uint32_t)(0x11a2c28cu));
  /* 11a22fb7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a22fb9 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22fbbu);
  /* 11a22fbb push 0x11a2c284 */
  push32((uint32_t)(0x11a2c284u));
  /* 11a22fc0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a22fc2 call ebx */
  call_ind((uint32_t)(EBX), 0x11a22fc4u);
  /* 11a22fc4 push 0x11a2c278 */
  push32((uint32_t)(0x11a2c278u));
  /* 11a22fc9 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a22fcb call ebx */
  call_ind((uint32_t)(EBX), 0x11a22fcdu);
  /* 11a22fcd push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11a22fcf push 0x11a2fa30 */
  push32((uint32_t)(0x11a2fa30u));
  /* 11a22fd4 call edi */
  call_ind((uint32_t)(EDI), 0x11a22fd6u);
  /* 11a22fd6 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11a22fd8 push 0x11a2fa00 */
  push32((uint32_t)(0x11a2fa00u));
  /* 11a22fdd call edi */
  call_ind((uint32_t)(EDI), 0x11a22fdfu);
  /* 11a22fdf push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11a22fe1 push 0x11a2f9d0 */
  push32((uint32_t)(0x11a2f9d0u));
  /* 11a22fe6 call edi */
  call_ind((uint32_t)(EDI), 0x11a22fe8u);
  /* 11a22fe8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a22feb push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11a22fed push 0x11a2f9a0 */
  push32((uint32_t)(0x11a2f9a0u));
  /* 11a22ff2 call edi */
  call_ind((uint32_t)(EDI), 0x11a22ff4u);
  /* 11a22ff4 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 11a22ff6 push 0x11a2f970 */
  push32((uint32_t)(0x11a2f970u));
  /* 11a22ffb call edi */
  call_ind((uint32_t)(EDI), 0x11a22ffdu);
  /* 11a22ffd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a22fff push 0x11a2f5d0 */
  push32((uint32_t)(0x11a2f5d0u));
  /* 11a23004 call edi */
  call_ind((uint32_t)(EDI), 0x11a23006u);
  /* 11a23006 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a23008 push 0x11a2f5e0 */
  push32((uint32_t)(0x11a2f5e0u));
  /* 11a2300d call edi */
  call_ind((uint32_t)(EDI), 0x11a2300fu);
  /* 11a2300f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a23011 push 0x11a2f5f8 */
  push32((uint32_t)(0x11a2f5f8u));
  /* 11a23016 call edi */
  call_ind((uint32_t)(EDI), 0x11a23018u);
  /* 11a23018 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a2301a push 0x11a2f608 */
  push32((uint32_t)(0x11a2f608u));
  /* 11a2301f call edi */
  call_ind((uint32_t)(EDI), 0x11a23021u);
  /* 11a23021 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a23023 push 0x11a2fa60 */
  push32((uint32_t)(0x11a2fa60u));
  /* 11a23028 call edi */
  call_ind((uint32_t)(EDI), 0x11a2302au);
  /* 11a2302a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a2302c push 0x11a2fa78 */
  push32((uint32_t)(0x11a2fa78u));
  /* 11a23031 call edi */
  call_ind((uint32_t)(EDI), 0x11a23033u);
  /* 11a23033 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23036 push 0x11a2c26c */
  push32((uint32_t)(0x11a2c26cu));
  /* 11a2303b push 0x11a2f258 */
  push32((uint32_t)(0x11a2f258u));
  /* 11a23040 call esi */
  call_ind((uint32_t)(ESI), 0x11a23042u);
  /* 11a23042 push 0x11a2c260 */
  push32((uint32_t)(0x11a2c260u));
  /* 11a23047 push 0x11a2f250 */
  push32((uint32_t)(0x11a2f250u));
  /* 11a2304c call esi */
  call_ind((uint32_t)(ESI), 0x11a2304eu);
  /* 11a2304e push 0x11a2c254 */
  push32((uint32_t)(0x11a2c254u));
  /* 11a23053 push 0x11a2f230 */
  push32((uint32_t)(0x11a2f230u));
  /* 11a23058 call esi */
  call_ind((uint32_t)(ESI), 0x11a2305au);
  /* 11a2305a push 0x11a2c248 */
  push32((uint32_t)(0x11a2c248u));
  /* 11a2305f push 0x11a2f228 */
  push32((uint32_t)(0x11a2f228u));
  /* 11a23064 call esi */
  call_ind((uint32_t)(ESI), 0x11a23066u);
  /* 11a23066 push 0x11a2c23c */
  push32((uint32_t)(0x11a2c23cu));
  /* 11a2306b push 0x11a2f220 */
  push32((uint32_t)(0x11a2f220u));
  /* 11a23070 call esi */
  call_ind((uint32_t)(ESI), 0x11a23072u);
  /* 11a23072 push 0x11a2c230 */
  push32((uint32_t)(0x11a2c230u));
  /* 11a23077 push 0x11a2f268 */
  push32((uint32_t)(0x11a2f268u));
  /* 11a2307c call esi */
  call_ind((uint32_t)(ESI), 0x11a2307eu);
  /* 11a2307e push 0x11a2c224 */
  push32((uint32_t)(0x11a2c224u));
  /* 11a23083 push 0x11a2f238 */
  push32((uint32_t)(0x11a2f238u));
  /* 11a23088 call esi */
  call_ind((uint32_t)(ESI), 0x11a2308au);
  /* 11a2308a push 0x11a2c21c */
  push32((uint32_t)(0x11a2c21cu));
  /* 11a2308f push 0x11a2fac8 */
  push32((uint32_t)(0x11a2fac8u));
  /* 11a23094 call esi */
  call_ind((uint32_t)(ESI), 0x11a23096u);
  /* 11a23096 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23099 push 0x11a2c210 */
  push32((uint32_t)(0x11a2c210u));
  /* 11a2309e push 0x11a2fe88 */
  push32((uint32_t)(0x11a2fe88u));
  /* 11a230a3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a230a5u);
  /* 11a230a5 push 0x11a2c200 */
  push32((uint32_t)(0x11a2c200u));
  /* 11a230aa push 0x11a2f218 */
  push32((uint32_t)(0x11a2f218u));
  /* 11a230af call ebp */
  call_ind((uint32_t)(EBP), 0x11a230b1u);
  /* 11a230b1 push 0x353 */
  push32((uint32_t)(0x353u));
  /* 11a230b6 push 0x11a2f618 */
  push32((uint32_t)(0x11a2f618u));
  /* 11a230bb call edi */
  call_ind((uint32_t)(EDI), 0x11a230bdu);
  /* 11a230bd push 0x353 */
  push32((uint32_t)(0x353u));
  /* 11a230c2 push 0x11a2f278 */
  push32((uint32_t)(0x11a2f278u));
  /* 11a230c7 call edi */
  call_ind((uint32_t)(EDI), 0x11a230c9u);
  /* 11a230c9 push 0x353 */
  push32((uint32_t)(0x353u));
  /* 11a230ce push 0x11a2fb00 */
  push32((uint32_t)(0x11a2fb00u));
  /* 11a230d3 call edi */
  call_ind((uint32_t)(EDI), 0x11a230d5u);
  /* 11a230d5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a230d7 push 0x11a2c070 */
  push32((uint32_t)(0x11a2c070u));
  /* 11a230dc mov dword ptr [0x11a2f913], 0x11a2f268 */
  w32((uint32_t)(0x11a2f913), (0x11a2f268u));
  /* 11a230e6 mov dword ptr [0x11a2f573], 0x11a2f238 */
  w32((uint32_t)(0x11a2f573), (0x11a2f238u));
  /* 11a230f0 mov dword ptr [0x11a2fdfb], 0x11a2fac8 */
  w32((uint32_t)(0x11a2fdfb), (0x11a2fac8u));
  /* 11a230fa call edi */
  call_ind((uint32_t)(EDI), 0x11a230fcu);
  /* 11a230fc add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a230ff pop edi */
  EDI = (pop32());
  /* 11a23100 pop esi */
  ESI = (pop32());
  /* 11a23101 pop ebp */
  EBP = (pop32());
  /* 11a23102 pop ebx */
  EBX = (pop32());
  /* 11a23103 ret  */
  ESPCHK(0x11a22de0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11a23110 (3408 bytes, 1124 insns) */
void f_11a23110(void) {
  FTRACE(0x11a23110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a23110 mov al, byte ptr [0x11a2fef0] */
  AL = (r8((uint32_t)(0x11a2fef0)));
  /* 11a23115 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a23118 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a2311a push ebx */
  push32((uint32_t)(EBX));
  /* 11a2311b push ebp */
  push32((uint32_t)(EBP));
  /* 11a2311c push esi */
  push32((uint32_t)(ESI));
  /* 11a2311d push edi */
  push32((uint32_t)(EDI));
  /* 11a2311e jne 0x11a233ea */
  if (!C.zf) goto L_11a233ea;
  /* 11a23124 push 0x11a2c504 */
  push32((uint32_t)(0x11a2c504u));
  /* 11a23129 push 0x11a2c4ec */
  push32((uint32_t)(0x11a2c4ecu));
  /* 11a2312e mov byte ptr [0x11a2fef0], 1 */
  w8((uint32_t)(0x11a2fef0), (0x1u));
  /* 11a23135 call 0x11a2452f */
  push32(0x11a2313au); f_11a2452f();
  /* 11a2313a mov esi, eax */
  ESI = (EAX);
  /* 11a2313c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2313f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a23141 jne 0x11a2328f */
  if (!C.zf) goto L_11a2328f;
  /* 11a23147 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a2314a mov edi, 0x11a2c4e4 */
  EDI = (0x11a2c4e4u);
  /* 11a2314f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a23151 not ecx */
  ECX = (~(ECX));
  /* 11a23153 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a23155 mov eax, ecx */
  EAX = (ECX);
  /* 11a23157 mov esi, edi */
  ESI = (EDI);
  /* 11a23159 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a2315c mov edi, 0x11a2fe90 */
  EDI = (0x11a2fe90u);
  /* 11a23161 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a23163 mov ecx, eax */
  ECX = (EAX);
  /* 11a23165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a23167 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a2316a rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a2316c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a2316f mov edi, 0x11a2c4dc */
  EDI = (0x11a2c4dcu);
  /* 11a23174 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a23176 not ecx */
  ECX = (~(ECX));
  /* 11a23178 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2317a mov edx, ecx */
  EDX = (ECX);
  /* 11a2317c mov esi, edi */
  ESI = (EDI);
  /* 11a2317e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a23181 mov edi, 0x11a2fe9f */
  EDI = (0x11a2fe9fu);
  /* 11a23186 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a23188 mov ecx, edx */
  ECX = (EDX);
  /* 11a2318a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a2318d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a2318f or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a23192 mov edi, 0x11a2c4d4 */
  EDI = (0x11a2c4d4u);
  /* 11a23197 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a23199 not ecx */
  ECX = (~(ECX));
  /* 11a2319b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2319d mov eax, ecx */
  EAX = (ECX);
  /* 11a2319f mov esi, edi */
  ESI = (EDI);
  /* 11a231a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a231a4 mov edi, 0x11a2feae */
  EDI = (0x11a2feaeu);
  /* 11a231a9 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a231ab mov ecx, eax */
  ECX = (EAX);
  /* 11a231ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a231af and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a231b2 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a231b4 mov edi, 0x11a2c4cc */
  EDI = (0x11a2c4ccu);
  /* 11a231b9 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a231bc repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a231be not ecx */
  ECX = (~(ECX));
  /* 11a231c0 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a231c2 mov edx, ecx */
  EDX = (ECX);
  /* 11a231c4 mov esi, edi */
  ESI = (EDI);
  /* 11a231c6 mov edi, 0x11a2febd */
  EDI = (0x11a2febdu);
  /* 11a231cb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a231ce rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a231d0 mov ecx, edx */
  ECX = (EDX);
  /* 11a231d2 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a231d5 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a231d7 mov edi, 0x11a2c4c4 */
  EDI = (0x11a2c4c4u);
  /* 11a231dc or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a231df repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a231e1 not ecx */
  ECX = (~(ECX));
  /* 11a231e3 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a231e5 mov eax, ecx */
  EAX = (ECX);
  /* 11a231e7 mov esi, edi */
  ESI = (EDI);
  /* 11a231e9 mov edi, 0x11a2fecc */
  EDI = (0x11a2feccu);
  /* 11a231ee shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a231f1 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a231f3 mov ecx, eax */
  ECX = (EAX);
  /* 11a231f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a231f7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a231fa rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a231fc mov edi, 0x11a2c4bc */
  EDI = (0x11a2c4bcu);
  /* 11a23201 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a23204 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a23206 not ecx */
  ECX = (~(ECX));
  /* 11a23208 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2320a mov edx, ecx */
  EDX = (ECX);
  /* 11a2320c mov esi, edi */
  ESI = (EDI);
  /* 11a2320e mov edi, 0x11a2fedb */
  EDI = (0x11a2fedbu);
  /* 11a23213 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a23216 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a23218 mov ecx, edx */
  ECX = (EDX);
  /* 11a2321a and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a2321d rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a2321f mov edi, 0x11a2c4b4 */
  EDI = (0x11a2c4b4u);
  /* 11a23224 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a23227 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a23229 not ecx */
  ECX = (~(ECX));
  /* 11a2322b sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2322d mov eax, ecx */
  EAX = (ECX);
  /* 11a2322f mov esi, edi */
  ESI = (EDI);
  /* 11a23231 mov edi, 0x11a2f1d8 */
  EDI = (0x11a2f1d8u);
  /* 11a23236 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a23239 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a2323b mov ecx, eax */
  ECX = (EAX);
  /* 11a2323d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a2323f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a23242 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a23244 mov edi, 0x11a2c4a8 */
  EDI = (0x11a2c4a8u);
  /* 11a23249 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a2324c repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a2324e not ecx */
  ECX = (~(ECX));
  /* 11a23250 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a23252 mov edx, ecx */
  EDX = (ECX);
  /* 11a23254 mov esi, edi */
  ESI = (EDI);
  /* 11a23256 mov edi, 0x11a2f1e7 */
  EDI = (0x11a2f1e7u);
  /* 11a2325b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a2325e rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a23260 mov ecx, edx */
  ECX = (EDX);
  /* 11a23262 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a23265 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a23267 mov edi, 0x11a2c29c */
  EDI = (0x11a2c29cu);
  /* 11a2326c or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a2326f repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11a23271 not ecx */
  ECX = (~(ECX));
  /* 11a23273 sub edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a23275 mov eax, ecx */
  EAX = (ECX);
  /* 11a23277 mov esi, edi */
  ESI = (EDI);
  /* 11a23279 mov edi, 0x11a2f1f6 */
  EDI = (0x11a2f1f6u);
  /* 11a2327e shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a23281 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a23283 mov ecx, eax */
  ECX = (EAX);
  /* 11a23285 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a23288 rep movsb byte ptr es:[edi], byte ptr [esi] */
  while (ECX!=0) { ECX--; w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); }
  /* 11a2328a jmp 0x11a233ea */
  goto L_11a233ea;
L_11a2328f:;
  /* 11a2328f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23291 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23293 push esi */
  push32((uint32_t)(ESI));
  /* 11a23294 call 0x11a24445 */
  push32(0x11a23299u); f_11a24445();
  /* 11a23299 push esi */
  push32((uint32_t)(ESI));
  /* 11a2329a call 0x11a242c2 */
  push32(0x11a2329fu); f_11a242c2();
  /* 11a2329f mov ebx, eax */
  EBX = (EAX);
  /* 11a232a1 lea ecx, [ebx + 1] */
  ECX = ((uint32_t)(EBX + 0x1));
  /* 11a232a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a232a5 call 0x11a242b4 */
  push32(0x11a232aau); f_11a242b4();
  /* 11a232aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a232ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11a232ae push esi */
  push32((uint32_t)(ESI));
  /* 11a232af mov edi, eax */
  EDI = (EAX);
  /* 11a232b1 call 0x11a24445 */
  push32(0x11a232b6u); f_11a24445();
  /* 11a232b6 push esi */
  push32((uint32_t)(ESI));
  /* 11a232b7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a232b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a232ba push edi */
  push32((uint32_t)(EDI));
  /* 11a232bb call 0x11a2419d */
  push32(0x11a232c0u); f_11a2419d();
  /* 11a232c0 push esi */
  push32((uint32_t)(ESI));
  /* 11a232c1 call 0x11a24120 */
  push32(0x11a232c6u); f_11a24120();
  /* 11a232c6 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a232c9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a232cb xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
L_11a232cd:;
  /* 11a232cd test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11a232cf jne 0x11a232d8 */
  if (!C.zf) goto L_11a232d8;
  /* 11a232d1 push 0x11a2c4a0 */
  push32((uint32_t)(0x11a2c4a0u));
  /* 11a232d6 jmp 0x11a23312 */
  goto L_11a23312;
L_11a232d8:;
  /* 11a232d8 cmp ebp, 1 */
  { uint32_t _a=(EBP),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a232db jne 0x11a232e4 */
  if (!C.zf) goto L_11a232e4;
  /* 11a232dd push 0x11a2c498 */
  push32((uint32_t)(0x11a2c498u));
  /* 11a232e2 jmp 0x11a23312 */
  goto L_11a23312;
L_11a232e4:;
  /* 11a232e4 cmp ebp, 2 */
  { uint32_t _a=(EBP),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a232e7 jne 0x11a232f0 */
  if (!C.zf) goto L_11a232f0;
  /* 11a232e9 push 0x11a2c490 */
  push32((uint32_t)(0x11a2c490u));
  /* 11a232ee jmp 0x11a23312 */
  goto L_11a23312;
L_11a232f0:;
  /* 11a232f0 cmp ebp, 3 */
  { uint32_t _a=(EBP),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a232f3 jne 0x11a232fc */
  if (!C.zf) goto L_11a232fc;
  /* 11a232f5 push 0x11a2c488 */
  push32((uint32_t)(0x11a2c488u));
  /* 11a232fa jmp 0x11a23312 */
  goto L_11a23312;
L_11a232fc:;
  /* 11a232fc cmp ebp, 4 */
  { uint32_t _a=(EBP),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a232ff jne 0x11a23308 */
  if (!C.zf) goto L_11a23308;
  /* 11a23301 push 0x11a2c480 */
  push32((uint32_t)(0x11a2c480u));
  /* 11a23306 jmp 0x11a23312 */
  goto L_11a23312;
L_11a23308:;
  /* 11a23308 cmp ebp, 5 */
  { uint32_t _a=(EBP),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2330b jne 0x11a2331f */
  if (!C.zf) goto L_11a2331f;
  /* 11a2330d push 0x11a2c478 */
  push32((uint32_t)(0x11a2c478u));
L_11a23312:;
  /* 11a23312 push edi */
  push32((uint32_t)(EDI));
  /* 11a23313 call 0x11a240a0 */
  push32(0x11a23318u); f_11a240a0();
  /* 11a23318 mov esi, eax */
  ESI = (EAX);
  /* 11a2331a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2331d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_11a2331f:;
  /* 11a2331f add esi, 5 */
  { uint32_t _a=(ESI),_b=(0x5u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23322 push 0x11a2c474 */
  push32((uint32_t)(0x11a2c474u));
  /* 11a23327 lea ebx, [esi + edi] */
  EBX = ((uint32_t)(ESI + EDI*1));
  /* 11a2332a push ebx */
  push32((uint32_t)(EBX));
  /* 11a2332b call 0x11a24060 */
  push32(0x11a23330u); f_11a24060();
  /* 11a23330 lea ecx, [ebp + ebp*2] */
  ECX = ((uint32_t)(EBP + EBP*2));
  /* 11a23334 push eax */
  push32((uint32_t)(EAX));
  /* 11a23335 push ebx */
  push32((uint32_t)(EBX));
  /* 11a23336 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 11a2333a lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a2333d mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 11a23341 lea edx, [ecx + 0x11a2fe90] */
  EDX = ((uint32_t)(ECX + 0x11a2fe90));
  /* 11a23347 push edx */
  push32((uint32_t)(EDX));
  /* 11a23348 call 0x11a23f60 */
  push32(0x11a2334du); f_11a23f60();
  /* 11a2334d mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11a23351 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a23355 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23358 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a23359 cmp ebp, 6 */
  { uint32_t _a=(EBP),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2335c mov byte ptr [eax + ecx + 0x11a2fe90], 0 */
  w8((uint32_t)(EAX + ECX*1 + 0x11a2fe90), (0x0u));
  /* 11a23364 jl 0x11a232cd */
  if ((C.sf!=C.of)) goto L_11a232cd;
  /* 11a2336a xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
L_11a2336c:;
  /* 11a2336c test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 11a2336e jne 0x11a23377 */
  if (!C.zf) goto L_11a23377;
  /* 11a23370 push 0x11a2c4b4 */
  push32((uint32_t)(0x11a2c4b4u));
  /* 11a23375 jmp 0x11a2338d */
  goto L_11a2338d;
L_11a23377:;
  /* 11a23377 cmp ebp, 1 */
  { uint32_t _a=(EBP),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2337a jne 0x11a23383 */
  if (!C.zf) goto L_11a23383;
  /* 11a2337c push 0x11a2c4a8 */
  push32((uint32_t)(0x11a2c4a8u));
  /* 11a23381 jmp 0x11a2338d */
  goto L_11a2338d;
L_11a23383:;
  /* 11a23383 cmp ebp, 2 */
  { uint32_t _a=(EBP),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23386 jne 0x11a2339a */
  if (!C.zf) goto L_11a2339a;
  /* 11a23388 push 0x11a2c29c */
  push32((uint32_t)(0x11a2c29cu));
L_11a2338d:;
  /* 11a2338d push edi */
  push32((uint32_t)(EDI));
  /* 11a2338e call 0x11a240a0 */
  push32(0x11a23393u); f_11a240a0();
  /* 11a23393 mov esi, eax */
  ESI = (EAX);
  /* 11a23395 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23398 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
L_11a2339a:;
  /* 11a2339a add esi, 0xa */
  { uint32_t _a=(ESI),_b=(0xau),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2339d push 0x11a2c474 */
  push32((uint32_t)(0x11a2c474u));
  /* 11a233a2 lea ebx, [esi + edi] */
  EBX = ((uint32_t)(ESI + EDI*1));
  /* 11a233a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a233a6 call 0x11a24060 */
  push32(0x11a233abu); f_11a24060();
  /* 11a233ab lea ecx, [ebp + ebp*2] */
  ECX = ((uint32_t)(EBP + EBP*2));
  /* 11a233af push eax */
  push32((uint32_t)(EAX));
  /* 11a233b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a233b1 mov dword ptr [esp + 0x24], eax */
  w32((uint32_t)(ESP + 0x24), (EAX));
  /* 11a233b5 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 11a233b8 mov dword ptr [esp + 0x20], ecx */
  w32((uint32_t)(ESP + 0x20), (ECX));
  /* 11a233bc lea edx, [ecx + 0x11a2f1d8] */
  EDX = ((uint32_t)(ECX + 0x11a2f1d8));
  /* 11a233c2 push edx */
  push32((uint32_t)(EDX));
  /* 11a233c3 call 0x11a23f60 */
  push32(0x11a233c8u); f_11a23f60();
  /* 11a233c8 mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11a233cc mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 11a233d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a233d3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a233d4 cmp ebp, 3 */
  { uint32_t _a=(EBP),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a233d7 mov byte ptr [eax + ecx + 0x11a2f1d8], 0 */
  w8((uint32_t)(EAX + ECX*1 + 0x11a2f1d8), (0x0u));
  /* 11a233df jl 0x11a2336c */
  if ((C.sf!=C.of)) goto L_11a2336c;
  /* 11a233e1 push edi */
  push32((uint32_t)(EDI));
  /* 11a233e2 call 0x11a23f50 */
  push32(0x11a233e7u); f_11a23f50();
  /* 11a233e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a233ea:;
  /* 11a233ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11a233ec call dword ptr [0x11a2a0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0ec))), 0x11a233f2u);
  /* 11a233f2 mov ebx, dword ptr [0x11a2a0f0] */
  EBX = (r32((uint32_t)(0x11a2a0f0)));
  /* 11a233f8 mov edi, dword ptr [0x11a2a154] */
  EDI = (r32((uint32_t)(0x11a2a154)));
  /* 11a233fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23401 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23403 je 0x11a23867 */
  if (C.zf) goto L_11a23867;
  /* 11a23409 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2340b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2340d call ebx */
  call_ind((uint32_t)(EBX), 0x11a2340fu);
  /* 11a2340f mov esi, dword ptr [0x11a2a16c] */
  ESI = (r32((uint32_t)(0x11a2a16c)));
  /* 11a23415 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a2341a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2341c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2341e call esi */
  call_ind((uint32_t)(ESI), 0x11a23420u);
  /* 11a23420 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23425 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23427 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23429 call esi */
  call_ind((uint32_t)(ESI), 0x11a2342bu);
  /* 11a2342b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23430 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23432 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23434 call esi */
  call_ind((uint32_t)(ESI), 0x11a23436u);
  /* 11a23436 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a2343b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2343d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2343f call esi */
  call_ind((uint32_t)(ESI), 0x11a23441u);
  /* 11a23441 mov ebp, dword ptr [0x11a2a130] */
  EBP = (r32((uint32_t)(0x11a2a130)));
  /* 11a23447 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23449 call ebp */
  call_ind((uint32_t)(EBP), 0x11a2344bu);
  /* 11a2344b mov ecx, 5 */
  ECX = (0x5u);
  /* 11a23450 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a23452 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a23455 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a23458 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11a2345b shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11a2345e push edx */
  push32((uint32_t)(EDX));
  /* 11a2345f push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23461 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23463 call esi */
  call_ind((uint32_t)(ESI), 0x11a23465u);
  /* 11a23465 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23468 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2346a call ebp */
  call_ind((uint32_t)(EBP), 0x11a2346cu);
  /* 11a2346c mov ecx, 5 */
  ECX = (0x5u);
  /* 11a23471 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a23473 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11a23476 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a23479 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a2347c shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11a2347f push eax */
  push32((uint32_t)(EAX));
  /* 11a23480 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a23482 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23484 call esi */
  call_ind((uint32_t)(ESI), 0x11a23486u);
  /* 11a23486 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a2348b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2348d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2348f call esi */
  call_ind((uint32_t)(ESI), 0x11a23491u);
  /* 11a23491 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23496 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23498 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2349a call esi */
  call_ind((uint32_t)(ESI), 0x11a2349cu);
  /* 11a2349c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a234a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a234a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a234a5 call esi */
  call_ind((uint32_t)(ESI), 0x11a234a7u);
  /* 11a234a7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a234ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11a234ae push 1 */
  push32((uint32_t)(0x1u));
  /* 11a234b0 call esi */
  call_ind((uint32_t)(ESI), 0x11a234b2u);
  /* 11a234b2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a234b5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a234ba push 4 */
  push32((uint32_t)(0x4u));
  /* 11a234bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a234be call esi */
  call_ind((uint32_t)(ESI), 0x11a234c0u);
  /* 11a234c0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a234c5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a234c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a234c9 call esi */
  call_ind((uint32_t)(ESI), 0x11a234cbu);
  /* 11a234cb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a234d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a234d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a234d4 call esi */
  call_ind((uint32_t)(ESI), 0x11a234d6u);
  /* 11a234d6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a234db push 3 */
  push32((uint32_t)(0x3u));
  /* 11a234dd push 2 */
  push32((uint32_t)(0x2u));
  /* 11a234df call esi */
  call_ind((uint32_t)(ESI), 0x11a234e1u);
  /* 11a234e1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a234e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a234e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a234ea call esi */
  call_ind((uint32_t)(ESI), 0x11a234ecu);
  /* 11a234ec push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a234f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a234f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a234f5 call esi */
  call_ind((uint32_t)(ESI), 0x11a234f7u);
  /* 11a234f7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a234fa push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a234ff push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23501 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23503 call esi */
  call_ind((uint32_t)(ESI), 0x11a23505u);
  /* 11a23505 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a2350a push 5 */
  push32((uint32_t)(0x5u));
  /* 11a2350c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a2350e call esi */
  call_ind((uint32_t)(ESI), 0x11a23510u);
  /* 11a23510 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23515 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23517 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23519 call esi */
  call_ind((uint32_t)(ESI), 0x11a2351bu);
  /* 11a2351b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23520 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23522 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23524 call esi */
  call_ind((uint32_t)(ESI), 0x11a23526u);
  /* 11a23526 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a2352b push 2 */
  push32((uint32_t)(0x2u));
  /* 11a2352d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a2352f call esi */
  call_ind((uint32_t)(ESI), 0x11a23531u);
  /* 11a23531 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23536 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a23538 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a2353a call esi */
  call_ind((uint32_t)(ESI), 0x11a2353cu);
  /* 11a2353c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2353f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23544 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23546 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23548 call esi */
  call_ind((uint32_t)(ESI), 0x11a2354au);
  /* 11a2354a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a2354f push 5 */
  push32((uint32_t)(0x5u));
  /* 11a23551 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23553 call esi */
  call_ind((uint32_t)(ESI), 0x11a23555u);
  /* 11a23555 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a2355a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2355c push 4 */
  push32((uint32_t)(0x4u));
  /* 11a2355e call esi */
  call_ind((uint32_t)(ESI), 0x11a23560u);
  /* 11a23560 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23565 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23567 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23569 call esi */
  call_ind((uint32_t)(ESI), 0x11a2356bu);
  /* 11a2356b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23570 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23572 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23574 call esi */
  call_ind((uint32_t)(ESI), 0x11a23576u);
  /* 11a23576 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a2357b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2357d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a2357f call esi */
  call_ind((uint32_t)(ESI), 0x11a23581u);
  /* 11a23581 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23584 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23589 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a2358b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a2358d call esi */
  call_ind((uint32_t)(ESI), 0x11a2358fu);
  /* 11a2358f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a23594 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a23596 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23598 call esi */
  call_ind((uint32_t)(ESI), 0x11a2359au);
  /* 11a2359a push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a2359f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a235a1 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a235a3 call esi */
  call_ind((uint32_t)(ESI), 0x11a235a5u);
  /* 11a235a5 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a235aa push 3 */
  push32((uint32_t)(0x3u));
  /* 11a235ac push 6 */
  push32((uint32_t)(0x6u));
  /* 11a235ae call esi */
  call_ind((uint32_t)(ESI), 0x11a235b0u);
  /* 11a235b0 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a235b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a235b7 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a235b9 call esi */
  call_ind((uint32_t)(ESI), 0x11a235bbu);
  /* 11a235bb push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a235c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a235c2 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a235c4 call esi */
  call_ind((uint32_t)(ESI), 0x11a235c6u);
  /* 11a235c6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a235c9 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a235ce push 4 */
  push32((uint32_t)(0x4u));
  /* 11a235d0 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a235d2 call esi */
  call_ind((uint32_t)(ESI), 0x11a235d4u);
  /* 11a235d4 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a235d9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a235db push 6 */
  push32((uint32_t)(0x6u));
  /* 11a235dd call esi */
  call_ind((uint32_t)(ESI), 0x11a235dfu);
  /* 11a235df push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a235e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a235e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a235e8 call esi */
  call_ind((uint32_t)(ESI), 0x11a235eau);
  /* 11a235ea push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a235ef push 3 */
  push32((uint32_t)(0x3u));
  /* 11a235f1 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a235f3 call esi */
  call_ind((uint32_t)(ESI), 0x11a235f5u);
  /* 11a235f5 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a235fa push 2 */
  push32((uint32_t)(0x2u));
  /* 11a235fc push 8 */
  push32((uint32_t)(0x8u));
  /* 11a235fe call esi */
  call_ind((uint32_t)(ESI), 0x11a23600u);
  /* 11a23600 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a23605 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a23607 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a23609 call esi */
  call_ind((uint32_t)(ESI), 0x11a2360bu);
  /* 11a2360b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2360e push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a23613 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23615 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a23617 call esi */
  call_ind((uint32_t)(ESI), 0x11a23619u);
  /* 11a23619 push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a2361e push 5 */
  push32((uint32_t)(0x5u));
  /* 11a23620 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a23622 call esi */
  call_ind((uint32_t)(ESI), 0x11a23624u);
  /* 11a23624 mov esi, dword ptr [0x11a2a0e8] */
  ESI = (r32((uint32_t)(0x11a2a0e8)));
  /* 11a2362a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2362c push 0x11a2faa8 */
  push32((uint32_t)(0x11a2faa8u));
  /* 11a23631 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23633 call esi */
  call_ind((uint32_t)(ESI), 0x11a23635u);
  /* 11a23635 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23637 push 0x11a2fa90 */
  push32((uint32_t)(0x11a2fa90u));
  /* 11a2363c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2363e call esi */
  call_ind((uint32_t)(ESI), 0x11a23640u);
  /* 11a23640 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23642 push 0x11a2fab8 */
  push32((uint32_t)(0x11a2fab8u));
  /* 11a23647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23649 call esi */
  call_ind((uint32_t)(ESI), 0x11a2364bu);
  /* 11a2364b mov esi, dword ptr [0x11a2a0f8] */
  ESI = (r32((uint32_t)(0x11a2a0f8)));
  /* 11a23651 push 0x11a2f1b8 */
  push32((uint32_t)(0x11a2f1b8u));
  /* 11a23656 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23658 call esi */
  call_ind((uint32_t)(ESI), 0x11a2365au);
  /* 11a2365a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2365d push 0x11a2f240 */
  push32((uint32_t)(0x11a2f240u));
  /* 11a23662 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23664 call esi */
  call_ind((uint32_t)(ESI), 0x11a23666u);
  /* 11a23666 push 0x11a2f208 */
  push32((uint32_t)(0x11a2f208u));
  /* 11a2366b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2366d call esi */
  call_ind((uint32_t)(ESI), 0x11a2366fu);
  /* 11a2366f mov esi, dword ptr [0x11a2a0fc] */
  ESI = (r32((uint32_t)(0x11a2a0fc)));
  /* 11a23675 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23677 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23679 call esi */
  call_ind((uint32_t)(ESI), 0x11a2367bu);
  /* 11a2367b push 6 */
  push32((uint32_t)(0x6u));
  /* 11a2367d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2367f call esi */
  call_ind((uint32_t)(ESI), 0x11a23681u);
  /* 11a23681 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a23683 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23685 call esi */
  call_ind((uint32_t)(ESI), 0x11a23687u);
  /* 11a23687 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a23689 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a2368b call esi */
  call_ind((uint32_t)(ESI), 0x11a2368du);
  /* 11a2368d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a2368f push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23691 call esi */
  call_ind((uint32_t)(ESI), 0x11a23693u);
  /* 11a23693 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11a23695 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a23697 call esi */
  call_ind((uint32_t)(ESI), 0x11a23699u);
  /* 11a23699 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2369c push 0xa7 */
  push32((uint32_t)(0xa7u));
  /* 11a236a1 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a236a3 call esi */
  call_ind((uint32_t)(ESI), 0x11a236a5u);
  /* 11a236a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a236a7 call ebp */
  call_ind((uint32_t)(EBP), 0x11a236a9u);
  /* 11a236a9 mov esi, dword ptr [0x11a2a0f4] */
  ESI = (r32((uint32_t)(0x11a2a0f4)));
  /* 11a236af push eax */
  push32((uint32_t)(EAX));
  /* 11a236b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236b6 push 0x11a2c464 */
  push32((uint32_t)(0x11a2c464u));
  /* 11a236bb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236bd call esi */
  call_ind((uint32_t)(ESI), 0x11a236bfu);
  /* 11a236bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a236c1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a236c3u);
  /* 11a236c3 push eax */
  push32((uint32_t)(EAX));
  /* 11a236c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236ca push 0x11a2c45c */
  push32((uint32_t)(0x11a2c45cu));
  /* 11a236cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11a236d1 call esi */
  call_ind((uint32_t)(ESI), 0x11a236d3u);
  /* 11a236d3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a236d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a236d8 call ebp */
  call_ind((uint32_t)(EBP), 0x11a236dau);
  /* 11a236da push eax */
  push32((uint32_t)(EAX));
  /* 11a236db push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236dd push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236df push 0 */
  push32((uint32_t)(0x0u));
  /* 11a236e1 push 0x11a2c450 */
  push32((uint32_t)(0x11a2c450u));
  /* 11a236e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a236e8 call esi */
  call_ind((uint32_t)(ESI), 0x11a236eau);
  /* 11a236ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11a236ec call ebp */
  call_ind((uint32_t)(EBP), 0x11a236eeu);
  /* 11a236ee push eax */
  push32((uint32_t)(EAX));
  /* 11a236ef push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a236f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a236f5 push 0x11a2c444 */
  push32((uint32_t)(0x11a2c444u));
  /* 11a236fa push 4 */
  push32((uint32_t)(0x4u));
  /* 11a236fc call esi */
  call_ind((uint32_t)(ESI), 0x11a236feu);
  /* 11a236fe push 0x11a2f260 */
  push32((uint32_t)(0x11a2f260u));
  /* 11a23703 call dword ptr [0x11a2a1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a1a8))), 0x11a23709u);
  /* 11a23709 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2370c mov ecx, 0x11a2fb00 */
  ECX = (0x11a2fb00u);
  /* 11a23711 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23713 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23715 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23717 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23719 push 0x11a2f618 */
  push32((uint32_t)(0x11a2f618u));
  /* 11a2371e push 0x11a2f278 */
  push32((uint32_t)(0x11a2f278u));
  /* 11a23723 push 0x11a2c42c */
  push32((uint32_t)(0x11a2c42cu));
  /* 11a23728 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a2372a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2372c push 0x11a2fac8 */
  push32((uint32_t)(0x11a2fac8u));
  /* 11a23731 push 0x11a2f1d8 */
  push32((uint32_t)(0x11a2f1d8u));
  /* 11a23736 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23738 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2373a call 0x11a21020 */
  push32(0x11a2373fu); f_11a21020();
  /* 11a2373f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23741 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23743 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23747 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23749 push 0x11a2fb00 */
  push32((uint32_t)(0x11a2fb00u));
  /* 11a2374e push 0x11a2c424 */
  push32((uint32_t)(0x11a2c424u));
  /* 11a23753 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23755 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a23757 push 0x11a2f238 */
  push32((uint32_t)(0x11a2f238u));
  /* 11a2375c push 0x11a2f1e7 */
  push32((uint32_t)(0x11a2f1e7u));
  /* 11a23761 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a23763 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23765 mov ecx, 0x11a2f278 */
  ECX = (0x11a2f278u);
  /* 11a2376a call 0x11a21020 */
  push32(0x11a2376fu); f_11a21020();
  /* 11a2376f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23771 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23773 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23775 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23777 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23779 push 0x11a2fb00 */
  push32((uint32_t)(0x11a2fb00u));
  /* 11a2377e push 0x11a2c41c */
  push32((uint32_t)(0x11a2c41cu));
  /* 11a23783 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23785 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a23787 push 0x11a2f268 */
  push32((uint32_t)(0x11a2f268u));
  /* 11a2378c push 0x11a2f1f6 */
  push32((uint32_t)(0x11a2f1f6u));
  /* 11a23791 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23793 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23795 mov ecx, 0x11a2f618 */
  ECX = (0x11a2f618u);
  /* 11a2379a call 0x11a21020 */
  push32(0x11a2379fu); f_11a21020();
  /* 11a2379f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a237a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a237a3 call edi */
  call_ind((uint32_t)(EDI), 0x11a237a5u);
  /* 11a237a5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a237a7 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a237a9 call edi */
  call_ind((uint32_t)(EDI), 0x11a237abu);
  /* 11a237ab push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a237ad push 7 */
  push32((uint32_t)(0x7u));
  /* 11a237af call edi */
  call_ind((uint32_t)(EDI), 0x11a237b1u);
  /* 11a237b1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a237b3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a237b5 call edi */
  call_ind((uint32_t)(EDI), 0x11a237b7u);
  /* 11a237b7 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a237b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a237bb call edi */
  call_ind((uint32_t)(EDI), 0x11a237bdu);
  /* 11a237bd push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11a237bf push 0xa */
  push32((uint32_t)(0xau));
  /* 11a237c1 call edi */
  call_ind((uint32_t)(EDI), 0x11a237c3u);
  /* 11a237c3 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11a237c5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a237c7 call edi */
  call_ind((uint32_t)(EDI), 0x11a237c9u);
  /* 11a237c9 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11a237cb push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a237cd call edi */
  call_ind((uint32_t)(EDI), 0x11a237cfu);
  /* 11a237cf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a237d2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a237d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a237d9 call edi */
  call_ind((uint32_t)(EDI), 0x11a237dbu);
  /* 11a237db mov esi, dword ptr [0x11a2a104] */
  ESI = (r32((uint32_t)(0x11a2a104)));
  /* 11a237e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a237e3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a237e5 push 0x11a2f248 */
  push32((uint32_t)(0x11a2f248u));
  /* 11a237ea call esi */
  call_ind((uint32_t)(ESI), 0x11a237ecu);
  /* 11a237ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11a237ee push 3 */
  push32((uint32_t)(0x3u));
  /* 11a237f0 push 0x11a2f1c0 */
  push32((uint32_t)(0x11a2f1c0u));
  /* 11a237f5 call esi */
  call_ind((uint32_t)(ESI), 0x11a237f7u);
  /* 11a237f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a237f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a237fb push 0x11a2f210 */
  push32((uint32_t)(0x11a2f210u));
  /* 11a23800 call esi */
  call_ind((uint32_t)(ESI), 0x11a23802u);
  /* 11a23802 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23804 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23806 push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a2380b call esi */
  call_ind((uint32_t)(ESI), 0x11a2380du);
  /* 11a2380d push 5 */
  push32((uint32_t)(0x5u));
  /* 11a2380f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23811 push 0x11a2fad0 */
  push32((uint32_t)(0x11a2fad0u));
  /* 11a23816 call esi */
  call_ind((uint32_t)(ESI), 0x11a23818u);
  /* 11a23818 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2381b push 6 */
  push32((uint32_t)(0x6u));
  /* 11a2381d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a2381f push 0x11a2fae8 */
  push32((uint32_t)(0x11a2fae8u));
  /* 11a23824 call esi */
  call_ind((uint32_t)(ESI), 0x11a23826u);
  /* 11a23826 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23828 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a2382a push 0x11a2fae0 */
  push32((uint32_t)(0x11a2fae0u));
  /* 11a2382f call esi */
  call_ind((uint32_t)(ESI), 0x11a23831u);
  /* 11a23831 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a23833 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23835 push 0x11a2faf8 */
  push32((uint32_t)(0x11a2faf8u));
  /* 11a2383a call esi */
  call_ind((uint32_t)(ESI), 0x11a2383cu);
  /* 11a2383c push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2383e push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23840 push 0x11a2faf0 */
  push32((uint32_t)(0x11a2faf0u));
  /* 11a23845 call esi */
  call_ind((uint32_t)(ESI), 0x11a23847u);
  /* 11a23847 mov esi, dword ptr [0x11a2a108] */
  ESI = (r32((uint32_t)(0x11a2a108)));
  /* 11a2384d push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11a2384f call esi */
  call_ind((uint32_t)(ESI), 0x11a23851u);
  /* 11a23851 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11a23853 call esi */
  call_ind((uint32_t)(ESI), 0x11a23855u);
  /* 11a23855 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11a23857 call esi */
  call_ind((uint32_t)(ESI), 0x11a23859u);
  /* 11a23859 push 0x11a2c414 */
  push32((uint32_t)(0x11a2c414u));
  /* 11a2385e call dword ptr [0x11a2a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a188))), 0x11a23864u);
  /* 11a23864 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23867:;
  /* 11a23867 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23869 push 0x11a2f1a8 */
  push32((uint32_t)(0x11a2f1a8u));
  /* 11a2386e push 0x11a2f1c0 */
  push32((uint32_t)(0x11a2f1c0u));
  /* 11a23873 call dword ptr [0x11a2a184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a184))), 0x11a23879u);
  /* 11a23879 mov ebp, dword ptr [0x11a2a148] */
  EBP = (r32((uint32_t)(0x11a2a148)));
  /* 11a2387f mov esi, dword ptr [0x11a2a168] */
  ESI = (r32((uint32_t)(0x11a2a168)));
  /* 11a23885 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2388a je 0x11a238ac */
  if (C.zf) goto L_11a238ac;
  /* 11a2388c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2388e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23890 push 0x11a2f1a8 */
  push32((uint32_t)(0x11a2f1a8u));
  /* 11a23895 push 0x11a2f1c0 */
  push32((uint32_t)(0x11a2f1c0u));
  /* 11a2389a call ebp */
  call_ind((uint32_t)(EBP), 0x11a2389cu);
  /* 11a2389c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2389e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a238a0 push 0x11a2fac8 */
  push32((uint32_t)(0x11a2fac8u));
  /* 11a238a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a238a7 call esi */
  call_ind((uint32_t)(ESI), 0x11a238a9u);
  /* 11a238a9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a238ac:;
  /* 11a238ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11a238ae push 0x11a2f1a8 */
  push32((uint32_t)(0x11a2f1a8u));
  /* 11a238b3 push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a238b8 call dword ptr [0x11a2a184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a184))), 0x11a238beu);
  /* 11a238be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a238c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a238c3 je 0x11a238e5 */
  if (C.zf) goto L_11a238e5;
  /* 11a238c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a238c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a238c9 push 0x11a2f1a8 */
  push32((uint32_t)(0x11a2f1a8u));
  /* 11a238ce push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a238d3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a238d5u);
  /* 11a238d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a238d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a238d9 push 0x11a2fac8 */
  push32((uint32_t)(0x11a2fac8u));
  /* 11a238de push 0 */
  push32((uint32_t)(0x0u));
  /* 11a238e0 call esi */
  call_ind((uint32_t)(ESI), 0x11a238e2u);
  /* 11a238e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a238e5:;
  /* 11a238e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a238e7 call dword ptr [0x11a2a0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0ec))), 0x11a238edu);
  /* 11a238ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a238f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a238f2 je 0x11a2392b */
  if (C.zf) goto L_11a2392b;
  /* 11a238f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a238f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a238f8 call ebx */
  call_ind((uint32_t)(EBX), 0x11a238fau);
  /* 11a238fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a238fd mov ecx, 0x11a2f9a0 */
  ECX = (0x11a2f9a0u);
  /* 11a23902 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a23904 push 0x11a2fe78 */
  push32((uint32_t)(0x11a2fe78u));
  /* 11a23909 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a2390b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2390d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2390f call 0x11a223c0 */
  push32(0x11a23914u); f_11a223c0();
  /* 11a23914 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a23916 push 0x11a2fe80 */
  push32((uint32_t)(0x11a2fe80u));
  /* 11a2391b push 7 */
  push32((uint32_t)(0x7u));
  /* 11a2391d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2391f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a23921 mov ecx, 0x11a2fa30 */
  ECX = (0x11a2fa30u);
  /* 11a23926 call 0x11a223c0 */
  push32(0x11a2392bu); f_11a223c0();
L_11a2392b:;
  /* 11a2392b mov ebp, dword ptr [0x11a2a100] */
  EBP = (r32((uint32_t)(0x11a2a100)));
  /* 11a23931 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a23933 call ebp */
  call_ind((uint32_t)(EBP), 0x11a23935u);
  /* 11a23935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23938 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a2393a je 0x11a23994 */
  if (C.zf) goto L_11a23994;
  /* 11a2393c push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2393e call dword ptr [0x11a2a0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0ec))), 0x11a23944u);
  /* 11a23944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23947 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23949 je 0x11a23994 */
  if (C.zf) goto L_11a23994;
  /* 11a2394b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2394d push 5 */
  push32((uint32_t)(0x5u));
  /* 11a2394f call ebx */
  call_ind((uint32_t)(EBX), 0x11a23951u);
  /* 11a23951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23954 mov ecx, 0x11a2f970 */
  ECX = (0x11a2f970u);
  /* 11a23959 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a2395b push 0x11a2fe78 */
  push32((uint32_t)(0x11a2fe78u));
  /* 11a23960 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23962 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23964 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23966 call 0x11a223c0 */
  push32(0x11a2396bu); f_11a223c0();
  /* 11a2396b push 8 */
  push32((uint32_t)(0x8u));
  /* 11a2396d push 0x11a2fe80 */
  push32((uint32_t)(0x11a2fe80u));
  /* 11a23972 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23974 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23976 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23978 mov ecx, 0x11a2fa00 */
  ECX = (0x11a2fa00u);
  /* 11a2397d call 0x11a223c0 */
  push32(0x11a23982u); f_11a223c0();
  /* 11a23982 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23984 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a23986 call ebx */
  call_ind((uint32_t)(EBX), 0x11a23988u);
  /* 11a23988 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11a2398d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a2398f call edi */
  call_ind((uint32_t)(EDI), 0x11a23991u);
  /* 11a23991 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23994:;
  /* 11a23994 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23996 call ebp */
  call_ind((uint32_t)(EBP), 0x11a23998u);
  /* 11a23998 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2399b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a2399d je 0x11a239d2 */
  if (C.zf) goto L_11a239d2;
  /* 11a2399f mov ebp, dword ptr [0x11a2a0ec] */
  EBP = (r32((uint32_t)(0x11a2a0ec)));
  /* 11a239a5 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a239a7 call ebp */
  call_ind((uint32_t)(EBP), 0x11a239a9u);
  /* 11a239a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a239ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a239ae je 0x11a239d8 */
  if (C.zf) goto L_11a239d8;
  /* 11a239b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a239b2 push 0x11a2fe80 */
  push32((uint32_t)(0x11a2fe80u));
  /* 11a239b7 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a239b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a239bb push 4 */
  push32((uint32_t)(0x4u));
  /* 11a239bd mov ecx, 0x11a2f9d0 */
  ECX = (0x11a2f9d0u);
  /* 11a239c2 call 0x11a223c0 */
  push32(0x11a239c7u); f_11a223c0();
  /* 11a239c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a239c9 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a239cb call ebx */
  call_ind((uint32_t)(EBX), 0x11a239cdu);
  /* 11a239cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a239d0 jmp 0x11a239d8 */
  goto L_11a239d8;
L_11a239d2:;
  /* 11a239d2 mov ebp, dword ptr [0x11a2a0ec] */
  EBP = (r32((uint32_t)(0x11a2a0ec)));
L_11a239d8:;
  /* 11a239d8 push 0x11a2f1c0 */
  push32((uint32_t)(0x11a2f1c0u));
  /* 11a239dd push 0x11a2f248 */
  push32((uint32_t)(0x11a2f248u));
  /* 11a239e2 mov ecx, 0x11a2f9a0 */
  ECX = (0x11a2f9a0u);
  /* 11a239e7 call 0x11a228c0 */
  push32(0x11a239ecu); f_11a228c0();
  /* 11a239ec push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a239f1 push 0x11a2f210 */
  push32((uint32_t)(0x11a2f210u));
  /* 11a239f6 mov ecx, 0x11a2fa30 */
  ECX = (0x11a2fa30u);
  /* 11a239fb call 0x11a228c0 */
  push32(0x11a23a00u); f_11a228c0();
  /* 11a23a00 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a23a02 call ebp */
  call_ind((uint32_t)(EBP), 0x11a23a04u);
  /* 11a23a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23a07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23a09 jne 0x11a23a33 */
  if (!C.zf) goto L_11a23a33;
  /* 11a23a0b push 0x11a2f1c0 */
  push32((uint32_t)(0x11a2f1c0u));
  /* 11a23a10 push 0x11a2f248 */
  push32((uint32_t)(0x11a2f248u));
  /* 11a23a15 mov ecx, 0x11a2f970 */
  ECX = (0x11a2f970u);
  /* 11a23a1a call 0x11a228c0 */
  push32(0x11a23a1fu); f_11a228c0();
  /* 11a23a1f push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a23a24 push 0x11a2f210 */
  push32((uint32_t)(0x11a2f210u));
  /* 11a23a29 mov ecx, 0x11a2fa00 */
  ECX = (0x11a2fa00u);
  /* 11a23a2e call 0x11a228c0 */
  push32(0x11a23a33u); f_11a228c0();
L_11a23a33:;
  /* 11a23a33 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a23a35 call ebp */
  call_ind((uint32_t)(EBP), 0x11a23a37u);
  /* 11a23a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23a3a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23a3c jne 0x11a23a52 */
  if (!C.zf) goto L_11a23a52;
  /* 11a23a3e push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a23a43 push 0x11a2f210 */
  push32((uint32_t)(0x11a2f210u));
  /* 11a23a48 mov ecx, 0x11a2f9d0 */
  ECX = (0x11a2f9d0u);
  /* 11a23a4d call 0x11a228c0 */
  push32(0x11a23a52u); f_11a228c0();
L_11a23a52:;
  /* 11a23a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23a58 push 0x11a2f618 */
  push32((uint32_t)(0x11a2f618u));
  /* 11a23a5d push 0x11a2f278 */
  push32((uint32_t)(0x11a2f278u));
  /* 11a23a62 push 0x11a2c42c */
  push32((uint32_t)(0x11a2c42cu));
  /* 11a23a67 push 0x11a2fac8 */
  push32((uint32_t)(0x11a2fac8u));
  /* 11a23a6c mov ecx, 0x11a2fb00 */
  ECX = (0x11a2fb00u);
  /* 11a23a71 mov dword ptr [0x11a2c070], 0x11a2fb00 */
  w32((uint32_t)(0x11a2c070), (0x11a2fb00u));
  /* 11a23a7b mov dword ptr [0x11a2c074], 0x11a2f278 */
  w32((uint32_t)(0x11a2c074), (0x11a2f278u));
  /* 11a23a85 mov dword ptr [0x11a2c078], 0x11a2f618 */
  w32((uint32_t)(0x11a2c078), (0x11a2f618u));
  /* 11a23a8f call 0x11a21210 */
  push32(0x11a23a94u); f_11a21210();
  /* 11a23a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23a9c push 0x11a2fb00 */
  push32((uint32_t)(0x11a2fb00u));
  /* 11a23aa1 push 0x11a2c424 */
  push32((uint32_t)(0x11a2c424u));
  /* 11a23aa6 push 0x11a2f238 */
  push32((uint32_t)(0x11a2f238u));
  /* 11a23aab mov ecx, 0x11a2f278 */
  ECX = (0x11a2f278u);
  /* 11a23ab0 call 0x11a21210 */
  push32(0x11a23ab5u); f_11a21210();
  /* 11a23ab5 mov ebx, dword ptr [0x11a2a198] */
  EBX = (r32((uint32_t)(0x11a2a198)));
  /* 11a23abb push 0x11a2f218 */
  push32((uint32_t)(0x11a2f218u));
  /* 11a23ac0 call ebx */
  call_ind((uint32_t)(EBX), 0x11a23ac2u);
  /* 11a23ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23ac5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23ac8 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11a23acb push ecx */
  push32((uint32_t)(ECX));
  /* 11a23acc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a23ace push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23ad0 mov ecx, 0x11a2f278 */
  ECX = (0x11a2f278u);
  /* 11a23ad5 call 0x11a222a0 */
  push32(0x11a23adau); f_11a222a0();
  /* 11a23ada push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23adc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23ade push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23ae2 push 0x11a2fb00 */
  push32((uint32_t)(0x11a2fb00u));
  /* 11a23ae7 push 0x11a2c424 */
  push32((uint32_t)(0x11a2c424u));
  /* 11a23aec push 0x11a2f268 */
  push32((uint32_t)(0x11a2f268u));
  /* 11a23af1 mov ecx, 0x11a2f618 */
  ECX = (0x11a2f618u);
  /* 11a23af6 call 0x11a21210 */
  push32(0x11a23afbu); f_11a21210();
  /* 11a23afb push 0x11a2fe88 */
  push32((uint32_t)(0x11a2fe88u));
  /* 11a23b00 call ebx */
  call_ind((uint32_t)(EBX), 0x11a23b02u);
  /* 11a23b02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23b05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23b08 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a23b0b push edx */
  push32((uint32_t)(EDX));
  /* 11a23b0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a23b0e push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23b10 mov ecx, 0x11a2f618 */
  ECX = (0x11a2f618u);
  /* 11a23b15 call 0x11a222a0 */
  push32(0x11a23b1au); f_11a222a0();
  /* 11a23b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23b1c mov ecx, 0x11a2f278 */
  ECX = (0x11a2f278u);
  /* 11a23b21 call 0x11a212e0 */
  push32(0x11a23b26u); f_11a212e0();
  /* 11a23b26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23b28 mov ecx, 0x11a2f618 */
  ECX = (0x11a2f618u);
  /* 11a23b2d call 0x11a212e0 */
  push32(0x11a23b32u); f_11a212e0();
  /* 11a23b32 mov ebx, dword ptr [0x11a2a164] */
  EBX = (r32((uint32_t)(0x11a2a164)));
  /* 11a23b38 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a23b3a call ebx */
  call_ind((uint32_t)(EBX), 0x11a23b3cu);
  /* 11a23b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23b3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23b41 je 0x11a23b5a */
  if (C.zf) goto L_11a23b5a;
  /* 11a23b43 mov ecx, 0x11a2fb00 */
  ECX = (0x11a2fb00u);
  /* 11a23b48 call 0x11a21a40 */
  push32(0x11a23b4du); f_11a21a40();
  /* 11a23b4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23b4f je 0x11a23b5a */
  if (C.zf) goto L_11a23b5a;
  /* 11a23b51 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a23b53 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a23b55 call edi */
  call_ind((uint32_t)(EDI), 0x11a23b57u);
  /* 11a23b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23b5a:;
  /* 11a23b5a push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a23b5c call ebx */
  call_ind((uint32_t)(EBX), 0x11a23b5eu);
  /* 11a23b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23b61 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23b63 je 0x11a23b7c */
  if (C.zf) goto L_11a23b7c;
  /* 11a23b65 mov ecx, 0x11a2f278 */
  ECX = (0x11a2f278u);
  /* 11a23b6a call 0x11a21a40 */
  push32(0x11a23b6fu); f_11a21a40();
  /* 11a23b6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23b71 je 0x11a23b7c */
  if (C.zf) goto L_11a23b7c;
  /* 11a23b73 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a23b75 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11a23b77 call edi */
  call_ind((uint32_t)(EDI), 0x11a23b79u);
  /* 11a23b79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23b7c:;
  /* 11a23b7c push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a23b7e call ebx */
  call_ind((uint32_t)(EBX), 0x11a23b80u);
  /* 11a23b80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23b83 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23b85 je 0x11a23b9e */
  if (C.zf) goto L_11a23b9e;
  /* 11a23b87 mov ecx, 0x11a2f618 */
  ECX = (0x11a2f618u);
  /* 11a23b8c call 0x11a21a40 */
  push32(0x11a23b91u); f_11a21a40();
  /* 11a23b91 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23b93 je 0x11a23b9e */
  if (C.zf) goto L_11a23b9e;
  /* 11a23b95 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a23b97 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a23b99 call edi */
  call_ind((uint32_t)(EDI), 0x11a23b9bu);
  /* 11a23b9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23b9e:;
  /* 11a23b9e mov edi, dword ptr [0x11a2a110] */
  EDI = (r32((uint32_t)(0x11a2a110)));
  /* 11a23ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23ba6 call edi */
  call_ind((uint32_t)(EDI), 0x11a23ba8u);
  /* 11a23ba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23bab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23bad je 0x11a23bc3 */
  if (C.zf) goto L_11a23bc3;
  /* 11a23baf push 0x11a2c40c */
  push32((uint32_t)(0x11a2c40cu));
  /* 11a23bb4 call dword ptr [0x11a2a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a188))), 0x11a23bbau);
  /* 11a23bba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23bbd call dword ptr [0x11a2a114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a114))), 0x11a23bc3u);
L_11a23bc3:;
  /* 11a23bc3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a23bc5 call edi */
  call_ind((uint32_t)(EDI), 0x11a23bc7u);
  /* 11a23bc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23bca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23bcc je 0x11a23bed */
  if (C.zf) goto L_11a23bed;
  /* 11a23bce push 4 */
  push32((uint32_t)(0x4u));
  /* 11a23bd0 call edi */
  call_ind((uint32_t)(EDI), 0x11a23bd2u);
  /* 11a23bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23bd5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23bd7 je 0x11a23bed */
  if (C.zf) goto L_11a23bed;
  /* 11a23bd9 push 0x11a2c404 */
  push32((uint32_t)(0x11a2c404u));
  /* 11a23bde call dword ptr [0x11a2a188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a188))), 0x11a23be4u);
  /* 11a23be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23be7 call dword ptr [0x11a2a10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a10c))), 0x11a23bedu);
L_11a23bed:;
  /* 11a23bed mov ebp, dword ptr [0x11a2a184] */
  EBP = (r32((uint32_t)(0x11a2a184)));
  /* 11a23bf3 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23bf5 push 0x11a2fac0 */
  push32((uint32_t)(0x11a2fac0u));
  /* 11a23bfa push 0x11a2f248 */
  push32((uint32_t)(0x11a2f248u));
  /* 11a23bff call ebp */
  call_ind((uint32_t)(EBP), 0x11a23c01u);
  /* 11a23c01 mov ebx, dword ptr [0x11a2a180] */
  EBX = (r32((uint32_t)(0x11a2a180)));
  /* 11a23c07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23c0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23c0c je 0x11a23c53 */
  if (C.zf) goto L_11a23c53;
  /* 11a23c0e mov edi, 0x11a2f618 */
  EDI = (0x11a2f618u);
L_11a23c13:;
  /* 11a23c13 cmp dword ptr [edi + 0x40], 2 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x40))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23c17 jne 0x11a23c48 */
  if (!C.zf) goto L_11a23c48;
  /* 11a23c19 push edi */
  push32((uint32_t)(EDI));
  /* 11a23c1a push 0x11a2f248 */
  push32((uint32_t)(0x11a2f248u));
  /* 11a23c1f call dword ptr [0x11a2a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a17c))), 0x11a23c25u);
  /* 11a23c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23c2a je 0x11a23c48 */
  if (C.zf) goto L_11a23c48;
  /* 11a23c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23c2e push edi */
  push32((uint32_t)(EDI));
  /* 11a23c2f mov dword ptr [edi + 0x40], 0xa */
  w32((uint32_t)(EDI + 0x40), (0xau));
  /* 11a23c36 call ebx */
  call_ind((uint32_t)(EBX), 0x11a23c38u);
  /* 11a23c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23c3c push 0x11a2f268 */
  push32((uint32_t)(0x11a2f268u));
  /* 11a23c41 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23c43 call esi */
  call_ind((uint32_t)(ESI), 0x11a23c45u);
  /* 11a23c45 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23c48:;
  /* 11a23c48 add edi, 0x48 */
  { uint32_t _a=(EDI),_b=(0x48u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23c4b cmp edi, 0x11a2f8e8 */
  { uint32_t _a=(EDI),_b=(0x11a2f8e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23c51 jl 0x11a23c13 */
  if ((C.sf!=C.of)) goto L_11a23c13;
L_11a23c53:;
  /* 11a23c53 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23c55 push 0x11a2fac0 */
  push32((uint32_t)(0x11a2fac0u));
  /* 11a23c5a push 0x11a2f1c0 */
  push32((uint32_t)(0x11a2f1c0u));
  /* 11a23c5f call ebp */
  call_ind((uint32_t)(EBP), 0x11a23c61u);
  /* 11a23c61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23c66 je 0x11a23cc8 */
  if (C.zf) goto L_11a23cc8;
  /* 11a23c68 mov edi, 0x11a2f618 */
  EDI = (0x11a2f618u);
L_11a23c6d:;
  /* 11a23c6d mov eax, dword ptr [edi + 0x40] */
  EAX = (r32((uint32_t)(EDI + 0x40)));
  /* 11a23c70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23c72 jne 0x11a23cbd */
  if (!C.zf) goto L_11a23cbd;
  /* 11a23c74 push edi */
  push32((uint32_t)(EDI));
  /* 11a23c75 push 0x11a2f1c0 */
  push32((uint32_t)(0x11a2f1c0u));
  /* 11a23c7a call dword ptr [0x11a2a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a17c))), 0x11a23c80u);
  /* 11a23c80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23c85 je 0x11a23cbd */
  if (C.zf) goto L_11a23cbd;
  /* 11a23c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23c89 push edi */
  push32((uint32_t)(EDI));
  /* 11a23c8a mov dword ptr [edi + 0x40], 0xa */
  w32((uint32_t)(EDI + 0x40), (0xau));
  /* 11a23c91 call ebx */
  call_ind((uint32_t)(EBX), 0x11a23c93u);
  /* 11a23c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23c97 push 0x11a2f250 */
  push32((uint32_t)(0x11a2f250u));
  /* 11a23c9c push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23c9e call esi */
  call_ind((uint32_t)(ESI), 0x11a23ca0u);
  /* 11a23ca0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23ca4 push 0x11a2f258 */
  push32((uint32_t)(0x11a2f258u));
  /* 11a23ca9 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23cab call esi */
  call_ind((uint32_t)(ESI), 0x11a23cadu);
  /* 11a23cad push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23caf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23cb1 push 0x11a2fac8 */
  push32((uint32_t)(0x11a2fac8u));
  /* 11a23cb6 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23cb8 call esi */
  call_ind((uint32_t)(ESI), 0x11a23cbau);
  /* 11a23cba add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23cbd:;
  /* 11a23cbd add edi, 0x48 */
  { uint32_t _a=(EDI),_b=(0x48u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23cc0 cmp edi, 0x11a2f8e8 */
  { uint32_t _a=(EDI),_b=(0x11a2f8e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23cc6 jl 0x11a23c6d */
  if ((C.sf!=C.of)) goto L_11a23c6d;
L_11a23cc8:;
  /* 11a23cc8 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23cca push 0x11a2fac0 */
  push32((uint32_t)(0x11a2fac0u));
  /* 11a23ccf push 0x11a2f210 */
  push32((uint32_t)(0x11a2f210u));
  /* 11a23cd4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a23cd6u);
  /* 11a23cd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23cd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23cdb je 0x11a23d22 */
  if (C.zf) goto L_11a23d22;
  /* 11a23cdd mov edi, 0x11a2f278 */
  EDI = (0x11a2f278u);
L_11a23ce2:;
  /* 11a23ce2 cmp dword ptr [edi + 0x40], 1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x40))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23ce6 jne 0x11a23d17 */
  if (!C.zf) goto L_11a23d17;
  /* 11a23ce8 push edi */
  push32((uint32_t)(EDI));
  /* 11a23ce9 push 0x11a2f210 */
  push32((uint32_t)(0x11a2f210u));
  /* 11a23cee call dword ptr [0x11a2a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a17c))), 0x11a23cf4u);
  /* 11a23cf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23cf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23cf9 je 0x11a23d17 */
  if (C.zf) goto L_11a23d17;
  /* 11a23cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23cfd push edi */
  push32((uint32_t)(EDI));
  /* 11a23cfe mov dword ptr [edi + 0x40], 0xa */
  w32((uint32_t)(EDI + 0x40), (0xau));
  /* 11a23d05 call ebx */
  call_ind((uint32_t)(EBX), 0x11a23d07u);
  /* 11a23d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23d0b push 0x11a2f238 */
  push32((uint32_t)(0x11a2f238u));
  /* 11a23d10 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23d12 call esi */
  call_ind((uint32_t)(ESI), 0x11a23d14u);
  /* 11a23d14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23d17:;
  /* 11a23d17 add edi, 0x48 */
  { uint32_t _a=(EDI),_b=(0x48u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23d1a cmp edi, 0x11a2f548 */
  { uint32_t _a=(EDI),_b=(0x11a2f548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23d20 jl 0x11a23ce2 */
  if ((C.sf!=C.of)) goto L_11a23ce2;
L_11a23d22:;
  /* 11a23d22 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23d24 push 0x11a2fac0 */
  push32((uint32_t)(0x11a2fac0u));
  /* 11a23d29 push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a23d2e call ebp */
  call_ind((uint32_t)(EBP), 0x11a23d30u);
  /* 11a23d30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23d33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23d35 je 0x11a23da4 */
  if (C.zf) goto L_11a23da4;
  /* 11a23d37 mov edi, 0x11a2f278 */
  EDI = (0x11a2f278u);
L_11a23d3c:;
  /* 11a23d3c mov eax, dword ptr [edi + 0x40] */
  EAX = (r32((uint32_t)(EDI + 0x40)));
  /* 11a23d3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23d41 jne 0x11a23d99 */
  if (!C.zf) goto L_11a23d99;
  /* 11a23d43 push edi */
  push32((uint32_t)(EDI));
  /* 11a23d44 push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a23d49 call dword ptr [0x11a2a17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a17c))), 0x11a23d4fu);
  /* 11a23d4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23d54 je 0x11a23d99 */
  if (C.zf) goto L_11a23d99;
  /* 11a23d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23d58 push edi */
  push32((uint32_t)(EDI));
  /* 11a23d59 mov dword ptr [edi + 0x40], 0xa */
  w32((uint32_t)(EDI + 0x40), (0xau));
  /* 11a23d60 call ebx */
  call_ind((uint32_t)(EBX), 0x11a23d62u);
  /* 11a23d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23d66 push 0x11a2f220 */
  push32((uint32_t)(0x11a2f220u));
  /* 11a23d6b push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23d6d call esi */
  call_ind((uint32_t)(ESI), 0x11a23d6fu);
  /* 11a23d6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23d73 push 0x11a2f228 */
  push32((uint32_t)(0x11a2f228u));
  /* 11a23d78 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23d7a call esi */
  call_ind((uint32_t)(ESI), 0x11a23d7cu);
  /* 11a23d7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23d80 push 0x11a2f230 */
  push32((uint32_t)(0x11a2f230u));
  /* 11a23d85 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23d87 call esi */
  call_ind((uint32_t)(ESI), 0x11a23d89u);
  /* 11a23d89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23d8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23d8d push 0x11a2fac8 */
  push32((uint32_t)(0x11a2fac8u));
  /* 11a23d92 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23d94 call esi */
  call_ind((uint32_t)(ESI), 0x11a23d96u);
  /* 11a23d96 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23d99:;
  /* 11a23d99 add edi, 0x48 */
  { uint32_t _a=(EDI),_b=(0x48u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23d9c cmp edi, 0x11a2f548 */
  { uint32_t _a=(EDI),_b=(0x11a2f548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23da2 jl 0x11a23d3c */
  if ((C.sf!=C.of)) goto L_11a23d3c;
L_11a23da4:;
  /* 11a23da4 push 0x11a2fae8 */
  push32((uint32_t)(0x11a2fae8u));
  /* 11a23da9 push 0x11a2fad0 */
  push32((uint32_t)(0x11a2fad0u));
  /* 11a23dae push 0x11a2fa98 */
  push32((uint32_t)(0x11a2fa98u));
  /* 11a23db3 push 0x11a2fab0 */
  push32((uint32_t)(0x11a2fab0u));
  /* 11a23db8 mov ecx, 0x11a2f5d0 */
  ECX = (0x11a2f5d0u);
  /* 11a23dbd call 0x11a22ae0 */
  push32(0x11a23dc2u); f_11a22ae0();
  /* 11a23dc2 push 0x11a2fad0 */
  push32((uint32_t)(0x11a2fad0u));
  /* 11a23dc7 push 0x11a2fae8 */
  push32((uint32_t)(0x11a2fae8u));
  /* 11a23dcc push 0x11a2fa98 */
  push32((uint32_t)(0x11a2fa98u));
  /* 11a23dd1 push 0x11a2fab0 */
  push32((uint32_t)(0x11a2fab0u));
  /* 11a23dd6 mov ecx, 0x11a2f5e0 */
  ECX = (0x11a2f5e0u);
  /* 11a23ddb call 0x11a22ae0 */
  push32(0x11a23de0u); f_11a22ae0();
  /* 11a23de0 push 0x11a2faf0 */
  push32((uint32_t)(0x11a2faf0u));
  /* 11a23de5 push 0x11a2faf8 */
  push32((uint32_t)(0x11a2faf8u));
  /* 11a23dea push 0x11a2fa98 */
  push32((uint32_t)(0x11a2fa98u));
  /* 11a23def push 0x11a2fab0 */
  push32((uint32_t)(0x11a2fab0u));
  /* 11a23df4 mov ecx, 0x11a2f5f8 */
  ECX = (0x11a2f5f8u);
  /* 11a23df9 call 0x11a22ae0 */
  push32(0x11a23dfeu); f_11a22ae0();
  /* 11a23dfe push 0x11a2faf8 */
  push32((uint32_t)(0x11a2faf8u));
  /* 11a23e03 push 0x11a2faf0 */
  push32((uint32_t)(0x11a2faf0u));
  /* 11a23e08 push 0x11a2fa98 */
  push32((uint32_t)(0x11a2fa98u));
  /* 11a23e0d push 0x11a2fab0 */
  push32((uint32_t)(0x11a2fab0u));
  /* 11a23e12 mov ecx, 0x11a2f608 */
  ECX = (0x11a2f608u);
  /* 11a23e17 call 0x11a22ae0 */
  push32(0x11a23e1cu); f_11a22ae0();
  /* 11a23e1c push 0x11a2faf8 */
  push32((uint32_t)(0x11a2faf8u));
  /* 11a23e21 push 0x11a2fae0 */
  push32((uint32_t)(0x11a2fae0u));
  /* 11a23e26 push 0x11a2fa98 */
  push32((uint32_t)(0x11a2fa98u));
  /* 11a23e2b push 0x11a2fab0 */
  push32((uint32_t)(0x11a2fab0u));
  /* 11a23e30 mov ecx, 0x11a2fa60 */
  ECX = (0x11a2fa60u);
  /* 11a23e35 call 0x11a22ae0 */
  push32(0x11a23e3au); f_11a22ae0();
  /* 11a23e3a push 0x11a2fae0 */
  push32((uint32_t)(0x11a2fae0u));
  /* 11a23e3f push 0x11a2fad0 */
  push32((uint32_t)(0x11a2fad0u));
  /* 11a23e44 push 0x11a2fa98 */
  push32((uint32_t)(0x11a2fa98u));
  /* 11a23e49 push 0x11a2fab0 */
  push32((uint32_t)(0x11a2fab0u));
  /* 11a23e4e mov ecx, 0x11a2fa78 */
  ECX = (0x11a2fa78u);
  /* 11a23e53 call 0x11a22ae0 */
  push32(0x11a23e58u); f_11a22ae0();
  /* 11a23e58 pop edi */
  EDI = (pop32());
  /* 11a23e59 pop esi */
  ESI = (pop32());
  /* 11a23e5a pop ebp */
  EBP = (pop32());
  /* 11a23e5b pop ebx */
  EBX = (pop32());
  /* 11a23e5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23e5f ret  */
  ESPCHK(0x11a23110u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e60 @ 0x11a23e60 (231 bytes, 83 insns) */
void f_11a23e60(void) {
  FTRACE(0x11a23e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a23e60 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a23e64 push esi */
  push32((uint32_t)(ESI));
  /* 11a23e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23e67 push eax */
  push32((uint32_t)(EAX));
  /* 11a23e68 call dword ptr [0x11a2a180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a180))), 0x11a23e6eu);
  /* 11a23e6e mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a23e72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23e75 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a23e78 je 0x11a23ec8 */
  if (C.zf) goto L_11a23ec8;
  /* 11a23e7a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a23e7b je 0x11a23ea6 */
  if (C.zf) goto L_11a23ea6;
  /* 11a23e7d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a23e7e jne 0x11a23f45 */
  if (!C.zf) goto L_11a23f45;
  /* 11a23e84 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a23e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23e8a jne 0x11a23f45 */
  if (!C.zf) goto L_11a23f45;
  /* 11a23e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23e92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23e94 push 0x11a2f248 */
  push32((uint32_t)(0x11a2f248u));
  /* 11a23e99 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23e9b call dword ptr [0x11a2a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a168))), 0x11a23ea1u);
  /* 11a23ea1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23ea4 pop esi */
  ESI = (pop32());
  /* 11a23ea5 ret  */
  ESPCHK(0x11a23e60u, _esp0);
  ESP += 4; return;
L_11a23ea6:;
  /* 11a23ea6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a23eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a23eac jne 0x11a23f45 */
  if (!C.zf) goto L_11a23f45;
  /* 11a23eb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23eb6 push 0x11a2f210 */
  push32((uint32_t)(0x11a2f210u));
  /* 11a23ebb push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23ebd call dword ptr [0x11a2a168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a168))), 0x11a23ec3u);
  /* 11a23ec3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23ec6 pop esi */
  ESI = (pop32());
  /* 11a23ec7 ret  */
  ESPCHK(0x11a23e60u, _esp0);
  ESP += 4; return;
L_11a23ec8:;
  /* 11a23ec8 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a23ecc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23ecf jne 0x11a23f10 */
  if (!C.zf) goto L_11a23f10;
  /* 11a23ed1 mov esi, dword ptr [0x11a2a168] */
  ESI = (r32((uint32_t)(0x11a2a168)));
  /* 11a23ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23edb push 0x11a2f230 */
  push32((uint32_t)(0x11a2f230u));
  /* 11a23ee0 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23ee2 call esi */
  call_ind((uint32_t)(ESI), 0x11a23ee4u);
  /* 11a23ee4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23ee8 push 0x11a2f228 */
  push32((uint32_t)(0x11a2f228u));
  /* 11a23eed push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23eef call esi */
  call_ind((uint32_t)(ESI), 0x11a23ef1u);
  /* 11a23ef1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23ef5 push 0x11a2f220 */
  push32((uint32_t)(0x11a2f220u));
  /* 11a23efa push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23efc call esi */
  call_ind((uint32_t)(ESI), 0x11a23efeu);
  /* 11a23efe push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23f02 push 0x11a2f1d0 */
  push32((uint32_t)(0x11a2f1d0u));
  /* 11a23f07 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23f09 call esi */
  call_ind((uint32_t)(ESI), 0x11a23f0bu);
  /* 11a23f0b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23f0e pop esi */
  ESI = (pop32());
  /* 11a23f0f ret  */
  ESPCHK(0x11a23e60u, _esp0);
  ESP += 4; return;
L_11a23f10:;
  /* 11a23f10 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a23f13 jne 0x11a23f45 */
  if (!C.zf) goto L_11a23f45;
  /* 11a23f15 mov esi, dword ptr [0x11a2a168] */
  ESI = (r32((uint32_t)(0x11a2a168)));
  /* 11a23f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23f1f push 0x11a2f258 */
  push32((uint32_t)(0x11a2f258u));
  /* 11a23f24 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23f26 call esi */
  call_ind((uint32_t)(ESI), 0x11a23f28u);
  /* 11a23f28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23f2c push 0x11a2f250 */
  push32((uint32_t)(0x11a2f250u));
  /* 11a23f31 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23f33 call esi */
  call_ind((uint32_t)(ESI), 0x11a23f35u);
  /* 11a23f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a23f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a23f39 push 0x11a2f1c0 */
  push32((uint32_t)(0x11a2f1c0u));
  /* 11a23f3e push 7 */
  push32((uint32_t)(0x7u));
  /* 11a23f40 call esi */
  call_ind((uint32_t)(ESI), 0x11a23f42u);
  /* 11a23f42 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a23f45:;
  /* 11a23f45 pop esi */
  ESI = (pop32());
  /* 11a23f46 ret  */
  ESPCHK(0x11a23e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f50 @ 0x11a23f50 (11 bytes, 4 insns) */
void f_11a23f50(void) {
  FTRACE(0x11a23f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a23f50 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a23f54 call 0x11a246eb */
  push32(0x11a23f59u); f_11a246eb();
  /* 11a23f59 pop ecx */
  ECX = (pop32());
  /* 11a23f5a ret  */
  ESPCHK(0x11a23f50u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11a23f60 (254 bytes, 109 insns) */
void f_11a23f60(void) {
  FTRACE(0x11a23f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a23f60 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a23f64 push edi */
  push32((uint32_t)(EDI));
  /* 11a23f65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a23f67 je 0x11a23fe3 */
  if (C.zf) goto L_11a23fe3;
  /* 11a23f69 push esi */
  push32((uint32_t)(ESI));
  /* 11a23f6a push ebx */
  push32((uint32_t)(EBX));
  /* 11a23f6b mov ebx, ecx */
  EBX = (ECX);
  /* 11a23f6d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a23f71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a23f77 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a23f7b jne 0x11a23f84 */
  if (!C.zf) goto L_11a23f84;
  /* 11a23f7d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a23f80 jne 0x11a23ff1 */
  if (!C.zf) goto L_11a23ff1;
  /* 11a23f82 jmp 0x11a23fa5 */
  goto L_11a23fa5;
L_11a23f84:;
  /* 11a23f84 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a23f86 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a23f87 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a23f89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a23f8a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a23f8b je 0x11a23fb2 */
  if (C.zf) goto L_11a23fb2;
  /* 11a23f8d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23f8f je 0x11a23fba */
  if (C.zf) goto L_11a23fba;
  /* 11a23f91 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a23f97 jne 0x11a23f84 */
  if (!C.zf) goto L_11a23f84;
  /* 11a23f99 mov ebx, ecx */
  EBX = (ECX);
  /* 11a23f9b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a23f9e jne 0x11a23ff1 */
  if (!C.zf) goto L_11a23ff1;
L_11a23fa0:;
  /* 11a23fa0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a23fa3 je 0x11a23fb2 */
  if (C.zf) goto L_11a23fb2;
L_11a23fa5:;
  /* 11a23fa5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a23fa7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a23fa8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a23faa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a23fab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a23fad je 0x11a23fde */
  if (C.zf) goto L_11a23fde;
  /* 11a23faf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a23fb0 jne 0x11a23fa5 */
  if (!C.zf) goto L_11a23fa5;
L_11a23fb2:;
  /* 11a23fb2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a23fb6 pop ebx */
  EBX = (pop32());
  /* 11a23fb7 pop esi */
  ESI = (pop32());
  /* 11a23fb8 pop edi */
  EDI = (pop32());
  /* 11a23fb9 ret  */
  ESPCHK(0x11a23f60u, _esp0);
  ESP += 4; return;
L_11a23fba:;
  /* 11a23fba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a23fc0 je 0x11a23fd4 */
  if (C.zf) goto L_11a23fd4;
L_11a23fc2:;
  /* 11a23fc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a23fc4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a23fc5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a23fc6 je 0x11a24056 */
  if (C.zf) goto L_11a24056;
  /* 11a23fcc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a23fd2 jne 0x11a23fc2 */
  if (!C.zf) goto L_11a23fc2;
L_11a23fd4:;
  /* 11a23fd4 mov ebx, ecx */
  EBX = (ECX);
  /* 11a23fd6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a23fd9 jne 0x11a24047 */
  if (!C.zf) goto L_11a24047;
L_11a23fdb:;
  /* 11a23fdb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a23fdd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a23fde:;
  /* 11a23fde dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a23fdf jne 0x11a23fdb */
  if (!C.zf) goto L_11a23fdb;
  /* 11a23fe1 pop ebx */
  EBX = (pop32());
  /* 11a23fe2 pop esi */
  ESI = (pop32());
L_11a23fe3:;
  /* 11a23fe3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a23fe7 pop edi */
  EDI = (pop32());
  /* 11a23fe8 ret  */
  ESPCHK(0x11a23f60u, _esp0);
  ESP += 4; return;
L_11a23fe9:;
  /* 11a23fe9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a23feb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23fee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a23fef je 0x11a23fa0 */
  if (C.zf) goto L_11a23fa0;
L_11a23ff1:;
  /* 11a23ff1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a23ff6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a23ff8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a23ffa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a23ffd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a23fff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11a24001 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24004 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a24009 je 0x11a23fe9 */
  if (C.zf) goto L_11a23fe9;
  /* 11a2400b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a2400d je 0x11a2403b */
  if (C.zf) goto L_11a2403b;
  /* 11a2400f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a24011 je 0x11a24031 */
  if (C.zf) goto L_11a24031;
  /* 11a24013 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a24019 je 0x11a24027 */
  if (C.zf) goto L_11a24027;
  /* 11a2401b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a24021 jne 0x11a23fe9 */
  if (!C.zf) goto L_11a23fe9;
  /* 11a24023 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a24025 jmp 0x11a2403f */
  goto L_11a2403f;
L_11a24027:;
  /* 11a24027 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a2402d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a2402f jmp 0x11a2403f */
  goto L_11a2403f;
L_11a24031:;
  /* 11a24031 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a24037 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a24039 jmp 0x11a2403f */
  goto L_11a2403f;
L_11a2403b:;
  /* 11a2403b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a2403d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11a2403f:;
  /* 11a2403f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24042 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a24044 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a24045 je 0x11a24051 */
  if (C.zf) goto L_11a24051;
L_11a24047:;
  /* 11a24047 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a24049:;
  /* 11a24049 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a2404b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2404e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a2404f jne 0x11a24049 */
  if (!C.zf) goto L_11a24049;
L_11a24051:;
  /* 11a24051 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a24054 jne 0x11a23fdb */
  if (!C.zf) goto L_11a23fdb;
L_11a24056:;
  /* 11a24056 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a2405a pop ebx */
  EBX = (pop32());
  /* 11a2405b pop esi */
  ESI = (pop32());
  /* 11a2405c pop edi */
  EDI = (pop32());
  /* 11a2405d ret  */
  ESPCHK(0x11a23f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x11a24060 (62 bytes, 35 insns) */
void f_11a24060(void) {
  FTRACE(0x11a24060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24060 push ebp */
  push32((uint32_t)(EBP));
  /* 11a24061 mov ebp, esp */
  EBP = (ESP);
  /* 11a24063 push esi */
  push32((uint32_t)(ESI));
  /* 11a24064 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a24066 push eax */
  push32((uint32_t)(EAX));
  /* 11a24067 push eax */
  push32((uint32_t)(EAX));
  /* 11a24068 push eax */
  push32((uint32_t)(EAX));
  /* 11a24069 push eax */
  push32((uint32_t)(EAX));
  /* 11a2406a push eax */
  push32((uint32_t)(EAX));
  /* 11a2406b push eax */
  push32((uint32_t)(EAX));
  /* 11a2406c push eax */
  push32((uint32_t)(EAX));
  /* 11a2406d push eax */
  push32((uint32_t)(EAX));
  /* 11a2406e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a24071 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a24074:;
  /* 11a24074 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a24076 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a24078 je 0x11a24081 */
  if (C.zf) goto L_11a24081;
  /* 11a2407a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a2407b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11a2407b");
  /* 11a2407f jmp 0x11a24074 */
  goto L_11a24074;
L_11a24081:;
  /* 11a24081 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a24084 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a24087 nop  */
  /* nop */
L_11a24088:;
  /* 11a24088 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a24089 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a2408b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11a2408d je 0x11a24096 */
  if (C.zf) goto L_11a24096;
  /* 11a2408f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a24090 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11a24090");
  /* 11a24094 jae 0x11a24088 */
  if (!C.cf) goto L_11a24088;
L_11a24096:;
  /* 11a24096 mov eax, ecx */
  EAX = (ECX);
  /* 11a24098 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2409b pop esi */
  ESI = (pop32());
  /* 11a2409c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2409d ret  */
  ESPCHK(0x11a24060u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a0 @ 0x11a240a0 (133 bytes, 68 insns) */
void f_11a240a0(void) {
  FTRACE(0x11a240a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a240a0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a240a4 push edi */
  push32((uint32_t)(EDI));
  /* 11a240a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a240a6 push esi */
  push32((uint32_t)(ESI));
  /* 11a240a7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a240a9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a240ad test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a240af je 0x11a2411a */
  if (C.zf) goto L_11a2411a;
  /* 11a240b1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11a240b4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a240b6 je 0x11a24107 */
  if (C.zf) goto L_11a24107;
L_11a240b8:;
  /* 11a240b8 mov esi, edi */
  ESI = (EDI);
  /* 11a240ba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a240be mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11a240c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a240c1 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a240c3 je 0x11a240da */
  if (C.zf) goto L_11a240da;
  /* 11a240c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a240c7 je 0x11a240d4 */
  if (C.zf) goto L_11a240d4;
L_11a240c9:;
  /* 11a240c9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a240cb inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a240cc:;
  /* 11a240cc cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a240ce je 0x11a240da */
  if (C.zf) goto L_11a240da;
  /* 11a240d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a240d2 jne 0x11a240c9 */
  if (!C.zf) goto L_11a240c9;
L_11a240d4:;
  /* 11a240d4 pop esi */
  ESI = (pop32());
  /* 11a240d5 pop ebx */
  EBX = (pop32());
  /* 11a240d6 pop edi */
  EDI = (pop32());
  /* 11a240d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a240d9 ret  */
  ESPCHK(0x11a240a0u, _esp0);
  ESP += 4; return;
L_11a240da:;
  /* 11a240da mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a240dc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a240dd cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a240df jne 0x11a240cc */
  if (!C.zf) goto L_11a240cc;
  /* 11a240e1 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11a240e4:;
  /* 11a240e4 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11a240e7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a240e9 je 0x11a24113 */
  if (C.zf) goto L_11a24113;
  /* 11a240eb mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a240ed add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a240f0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a240f2 jne 0x11a240b8 */
  if (!C.zf) goto L_11a240b8;
  /* 11a240f4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11a240f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a240f9 je 0x11a24113 */
  if (C.zf) goto L_11a24113;
  /* 11a240fb mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11a240fe add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24101 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24103 je 0x11a240e4 */
  if (C.zf) goto L_11a240e4;
  /* 11a24105 jmp 0x11a240b8 */
  goto L_11a240b8;
L_11a24107:;
  /* 11a24107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a24109 pop esi */
  ESI = (pop32());
  /* 11a2410a pop ebx */
  EBX = (pop32());
  /* 11a2410b pop edi */
  EDI = (pop32());
  /* 11a2410c mov al, dl */
  AL = (DL);
  /* 11a2410e jmp 0x11a247f6 */
  jmp_ind(0x11a247f6u); return;
L_11a24113:;
  /* 11a24113 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11a24116 pop esi */
  ESI = (pop32());
  /* 11a24117 pop ebx */
  EBX = (pop32());
  /* 11a24118 pop edi */
  EDI = (pop32());
  /* 11a24119 ret  */
  ESPCHK(0x11a240a0u, _esp0);
  ESP += 4; return;
L_11a2411a:;
  /* 11a2411a mov eax, edi */
  EAX = (EDI);
  /* 11a2411c pop esi */
  ESI = (pop32());
  /* 11a2411d pop ebx */
  EBX = (pop32());
  /* 11a2411e pop edi */
  EDI = (pop32());
  /* 11a2411f ret  */
  ESPCHK(0x11a240a0u, _esp0);
  ESP += 4; return;
  /* 11a24120 push esi */
  push32((uint32_t)(ESI));
  /* 11a24121 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
}

/* FUN_10004120 @ 0x11a24120 (49 bytes, 20 insns) */
void f_11a24120(void) {
  FTRACE(0x11a24120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24120 push esi */
  push32((uint32_t)(ESI));
  /* 11a24121 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24125 push edi */
  push32((uint32_t)(EDI));
  /* 11a24126 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a24129 test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 11a2412d je 0x11a24135 */
  if (C.zf) goto L_11a24135;
  /* 11a2412f and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a24133 jmp 0x11a2414c */
  goto L_11a2414c;
L_11a24135:;
  /* 11a24135 push esi */
  push32((uint32_t)(ESI));
  /* 11a24136 call 0x11a24968 */
  push32(0x11a2413bu); f_11a24968();
  /* 11a2413b push esi */
  push32((uint32_t)(ESI));
  /* 11a2413c call 0x11a24151 */
  push32(0x11a24141u); f_11a24151();
  /* 11a24141 push esi */
  push32((uint32_t)(ESI));
  /* 11a24142 mov edi, eax */
  EDI = (EAX);
  /* 11a24144 call 0x11a249ba */
  push32(0x11a24149u); f_11a249ba();
  /* 11a24149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a2414c:;
  /* 11a2414c mov eax, edi */
  EAX = (EDI);
  /* 11a2414e pop edi */
  EDI = (pop32());
  /* 11a2414f pop esi */
  ESI = (pop32());
  /* 11a24150 ret  */
  ESPCHK(0x11a24120u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x11a24151 (76 bytes, 30 insns) */
void f_11a24151(void) {
  FTRACE(0x11a24151u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24151 push esi */
  push32((uint32_t)(ESI));
  /* 11a24152 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24156 push edi */
  push32((uint32_t)(EDI));
  /* 11a24157 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a2415a test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11a2415e je 0x11a24194 */
  if (C.zf) goto L_11a24194;
  /* 11a24160 push esi */
  push32((uint32_t)(ESI));
  /* 11a24161 call 0x11a24b45 */
  push32(0x11a24166u); f_11a24b45();
  /* 11a24166 push esi */
  push32((uint32_t)(ESI));
  /* 11a24167 mov edi, eax */
  EDI = (EAX);
  /* 11a24169 call 0x11a24aec */
  push32(0x11a2416eu); f_11a24aec();
  /* 11a2416e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a24171 call 0x11a24a0c */
  push32(0x11a24176u); f_11a24a0c();
  /* 11a24176 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2417b jge 0x11a24182 */
  if ((C.sf==C.of)) goto L_11a24182;
  /* 11a2417d or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11a24180 jmp 0x11a24194 */
  goto L_11a24194;
L_11a24182:;
  /* 11a24182 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11a24185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24187 je 0x11a24194 */
  if (C.zf) goto L_11a24194;
  /* 11a24189 push eax */
  push32((uint32_t)(EAX));
  /* 11a2418a call 0x11a246eb */
  push32(0x11a2418fu); f_11a246eb();
  /* 11a2418f and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 11a24193 pop ecx */
  ECX = (pop32());
L_11a24194:;
  /* 11a24194 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a24198 mov eax, edi */
  EAX = (EDI);
  /* 11a2419a pop edi */
  EDI = (pop32());
  /* 11a2419b pop esi */
  ESI = (pop32());
  /* 11a2419c ret  */
  ESPCHK(0x11a24151u, _esp0);
  ESP += 4; return;
}

/* FUN_1000419d @ 0x11a2419d (47 bytes, 18 insns) */
void f_11a2419d(void) {
  FTRACE(0x11a2419du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2419d push ebp */
  push32((uint32_t)(EBP));
  /* 11a2419e mov ebp, esp */
  EBP = (ESP);
  /* 11a241a0 push esi */
  push32((uint32_t)(ESI));
  /* 11a241a1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a241a4 call 0x11a24968 */
  push32(0x11a241a9u); f_11a24968();
  /* 11a241a9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a241ac push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a241af push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a241b2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a241b5 call 0x11a241cc */
  push32(0x11a241bau); f_11a241cc();
  /* 11a241ba push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a241bd mov esi, eax */
  ESI = (EAX);
  /* 11a241bf call 0x11a249ba */
  push32(0x11a241c4u); f_11a249ba();
  /* 11a241c4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a241c7 mov eax, esi */
  EAX = (ESI);
  /* 11a241c9 pop esi */
  ESI = (pop32());
  /* 11a241ca pop ebp */
  EBP = (pop32());
  /* 11a241cb ret  */
  ESPCHK(0x11a2419du, _esp0);
  ESP += 4; return;
}

/* FUN_100041cc @ 0x11a241cc (232 bytes, 92 insns) */
void f_11a241cc(void) {
  FTRACE(0x11a241ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a241cc push ebp */
  push32((uint32_t)(EBP));
  /* 11a241cd mov ebp, esp */
  EBP = (ESP);
  /* 11a241cf push ecx */
  push32((uint32_t)(ECX));
  /* 11a241d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a241d1 push esi */
  push32((uint32_t)(ESI));
  /* 11a241d2 push edi */
  push32((uint32_t)(EDI));
  /* 11a241d3 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a241d6 imul edi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(EDI); EDI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a241da mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a241dd mov ecx, edi */
  ECX = (EDI);
  /* 11a241df test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a241e1 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a241e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11a241e7 jne 0x11a241f0 */
  if (!C.zf) goto L_11a241f0;
  /* 11a241e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a241eb jmp 0x11a24299 */
  goto L_11a24299;
L_11a241f0:;
  /* 11a241f0 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11a241f3 test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 11a241f9 je 0x11a24203 */
  if (C.zf) goto L_11a24203;
  /* 11a241fb mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11a241fe mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11a24201 jmp 0x11a2420f */
  goto L_11a2420f;
L_11a24203:;
  /* 11a24203 mov dword ptr [ebp + 0x14], 0x1000 */
  w32((uint32_t)(EBP + 0x14), (0x1000u));
  /* 11a2420a jmp 0x11a2420f */
  goto L_11a2420f;
L_11a2420c:;
  /* 11a2420c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
L_11a2420f:;
  /* 11a2420f test word ptr [esi + 0xc], 0x10c */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0x10cu); fl_logic(_r,16); }
  /* 11a24215 je 0x11a24241 */
  if (C.zf) goto L_11a24241;
  /* 11a24217 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a2421a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2421c je 0x11a24241 */
  if (C.zf) goto L_11a24241;
  /* 11a2421e cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24220 mov edi, ecx */
  EDI = (ECX);
  /* 11a24222 jb 0x11a24226 */
  if (C.cf) goto L_11a24226;
  /* 11a24224 mov edi, eax */
  EDI = (EAX);
L_11a24226:;
  /* 11a24226 push edi */
  push32((uint32_t)(EDI));
  /* 11a24227 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a24229 push ebx */
  push32((uint32_t)(EBX));
  /* 11a2422a call 0x11a24f70 */
  push32(0x11a2422fu); f_11a24f70();
  /* 11a2422f sub dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a24232 sub dword ptr [esi + 4], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EDI),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a24235 add dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a24237 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2423a add ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2423c mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11a2423f jmp 0x11a2428c */
  goto L_11a2428c;
L_11a24241:;
  /* 11a24241 cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24244 jb 0x11a24274 */
  if (C.cf) goto L_11a24274;
  /* 11a24246 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2424a mov eax, ecx */
  EAX = (ECX);
  /* 11a2424c je 0x11a24257 */
  if (C.zf) goto L_11a24257;
  /* 11a2424e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a24250 div dword ptr [ebp + 0x14] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x14))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a24253 mov eax, ecx */
  EAX = (ECX);
  /* 11a24255 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a24257:;
  /* 11a24257 push eax */
  push32((uint32_t)(EAX));
  /* 11a24258 push ebx */
  push32((uint32_t)(EBX));
  /* 11a24259 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a2425c call 0x11a24d2a */
  push32(0x11a24261u); f_11a24d2a();
  /* 11a24261 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24266 je 0x11a2429e */
  if (C.zf) goto L_11a2429e;
  /* 11a24268 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2426b je 0x11a242a4 */
  if (C.zf) goto L_11a242a4;
  /* 11a2426d sub dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11a24270 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24272 jmp 0x11a2428c */
  goto L_11a2428c;
L_11a24274:;
  /* 11a24274 push esi */
  push32((uint32_t)(ESI));
  /* 11a24275 call 0x11a24c4e */
  push32(0x11a2427au); f_11a24c4e();
  /* 11a2427a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2427d pop ecx */
  ECX = (pop32());
  /* 11a2427e je 0x11a242a8 */
  if (C.zf) goto L_11a242a8;
  /* 11a24280 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11a24282 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11a24285 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a24286 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11a24289 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a2428c:;
  /* 11a2428c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24290 jne 0x11a2420c */
  if (!C.zf) goto L_11a2420c;
  /* 11a24296 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
L_11a24299:;
  /* 11a24299 pop edi */
  EDI = (pop32());
  /* 11a2429a pop esi */
  ESI = (pop32());
  /* 11a2429b pop ebx */
  EBX = (pop32());
  /* 11a2429c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2429d ret  */
  ESPCHK(0x11a241ccu, _esp0);
  ESP += 4; return;
L_11a2429e:;
  /* 11a2429e or dword ptr [esi + 0xc], 0x10 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x10u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a242a2 jmp 0x11a242a8 */
  goto L_11a242a8;
L_11a242a4:;
  /* 11a242a4 or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
L_11a242a8:;
  /* 11a242a8 mov eax, edi */
  EAX = (EDI);
  /* 11a242aa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a242ac sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a242af div dword ptr [ebp + 0xc] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a242b2 jmp 0x11a24299 */
  goto L_11a24299;
}

/* operator_new @ 0x11a242b4 (14 bytes, 6 insns) */
void f_11a242b4(void) {
  FTRACE(0x11a242b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a242b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a242b6 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a242ba call 0x11a252b7 */
  push32(0x11a242bfu); f_11a252b7();
  /* 11a242bf pop ecx */
  ECX = (pop32());
  /* 11a242c0 pop ecx */
  ECX = (pop32());
  /* 11a242c1 ret  */
  ESPCHK(0x11a242b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100042c2 @ 0x11a242c2 (34 bytes, 15 insns) */
void f_11a242c2(void) {
  FTRACE(0x11a242c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a242c2 push esi */
  push32((uint32_t)(ESI));
  /* 11a242c3 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a242c7 push edi */
  push32((uint32_t)(EDI));
  /* 11a242c8 push esi */
  push32((uint32_t)(ESI));
  /* 11a242c9 call 0x11a24968 */
  push32(0x11a242ceu); f_11a24968();
  /* 11a242ce push esi */
  push32((uint32_t)(ESI));
  /* 11a242cf call 0x11a242e4 */
  push32(0x11a242d4u); f_11a242e4();
  /* 11a242d4 push esi */
  push32((uint32_t)(ESI));
  /* 11a242d5 mov edi, eax */
  EDI = (EAX);
  /* 11a242d7 call 0x11a249ba */
  push32(0x11a242dcu); f_11a249ba();
  /* 11a242dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a242df mov eax, edi */
  EAX = (EDI);
  /* 11a242e1 pop edi */
  EDI = (pop32());
  /* 11a242e2 pop esi */
  ESI = (pop32());
  /* 11a242e3 ret  */
  ESPCHK(0x11a242c2u, _esp0);
  ESP += 4; return;
}

/* FUN_100042e4 @ 0x11a242e4 (353 bytes, 127 insns) */
void f_11a242e4(void) {
  FTRACE(0x11a242e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a242e4 push ebp */
  push32((uint32_t)(EBP));
  /* 11a242e5 mov ebp, esp */
  EBP = (ESP);
  /* 11a242e7 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a242ea push ebx */
  push32((uint32_t)(EBX));
  /* 11a242eb push esi */
  push32((uint32_t)(ESI));
  /* 11a242ec push edi */
  push32((uint32_t)(EDI));
  /* 11a242ed mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a242f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a242f2 mov esi, dword ptr [edi + 0x10] */
  ESI = (r32((uint32_t)(EDI + 0x10)));
  /* 11a242f5 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a242f8 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a242fb jge 0x11a24300 */
  if ((C.sf==C.of)) goto L_11a24300;
  /* 11a242fd mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11a24300:;
  /* 11a24300 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a24302 push ebx */
  push32((uint32_t)(EBX));
  /* 11a24303 push esi */
  push32((uint32_t)(ESI));
  /* 11a24304 call 0x11a25674 */
  push32(0x11a24309u); f_11a25674();
  /* 11a24309 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2430c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2430e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a24311 jl 0x11a24372 */
  if ((C.sf!=C.of)) goto L_11a24372;
  /* 11a24313 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 11a24316 test cx, 0x108 */
  { uint32_t _r=(CX)&(0x108u); fl_logic(_r,16); }
  /* 11a2431b jne 0x11a24325 */
  if (!C.zf) goto L_11a24325;
  /* 11a2431d sub eax, dword ptr [edi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a24320 jmp 0x11a24440 */
  goto L_11a24440;
L_11a24325:;
  /* 11a24325 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a24327 mov edx, dword ptr [edi + 8] */
  EDX = (r32((uint32_t)(EDI + 0x8)));
  /* 11a2432a mov ebx, eax */
  EBX = (EAX);
  /* 11a2432c sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2432e test cl, 3 */
  { uint32_t _r=(CL)&(0x3u); fl_logic(_r,8); }
  /* 11a24331 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11a24334 je 0x11a24362 */
  if (C.zf) goto L_11a24362;
  /* 11a24336 mov ebx, esi */
  EBX = (ESI);
  /* 11a24338 mov ecx, esi */
  ECX = (ESI);
  /* 11a2433a sar ebx, 5 */
  EBX = (sh_sar((uint32_t)(EBX), (0x5u)&0x1f, 32));
  /* 11a2433d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a24340 mov ebx, dword ptr [ebx*4 + 0x11a304c0] */
  EBX = (r32((uint32_t)(EBX*4 + 0x11a304c0)));
  /* 11a24347 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 11a2434a test byte ptr [ebx + ecx*4 + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBX + ECX*4 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11a2434f je 0x11a2437a */
  if (C.zf) goto L_11a2437a;
  /* 11a24351 mov ecx, edx */
  ECX = (EDX);
L_11a24353:;
  /* 11a24353 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24355 jae 0x11a2437a */
  if (!C.cf) goto L_11a2437a;
  /* 11a24357 cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2435a jne 0x11a2435f */
  if (!C.zf) goto L_11a2435f;
  /* 11a2435c inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_11a2435f:;
  /* 11a2435f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a24360 jmp 0x11a24353 */
  goto L_11a24353;
L_11a24362:;
  /* 11a24362 test cl, 0x80 */
  { uint32_t _r=(CL)&(0x80u); fl_logic(_r,8); }
  /* 11a24365 jne 0x11a2437a */
  if (!C.zf) goto L_11a2437a;
  /* 11a24367 call 0x11a25452 */
  push32(0x11a2436cu); f_11a25452();
  /* 11a2436c mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11a24372:;
  /* 11a24372 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24375 jmp 0x11a24440 */
  goto L_11a24440;
L_11a2437a:;
  /* 11a2437a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2437e jne 0x11a24388 */
  if (!C.zf) goto L_11a24388;
  /* 11a24380 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a24383 jmp 0x11a24440 */
  goto L_11a24440;
L_11a24388:;
  /* 11a24388 test byte ptr [edi + 0xc], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xc)))&(0x1u); fl_logic(_r,8); }
  /* 11a2438c je 0x11a24438 */
  if (C.zf) goto L_11a24438;
  /* 11a24392 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 11a24395 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a24397 jne 0x11a243a1 */
  if (!C.zf) goto L_11a243a1;
  /* 11a24399 and dword ptr [ebp - 8], ecx */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(ECX); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a2439c jmp 0x11a24438 */
  goto L_11a24438;
L_11a243a1:;
  /* 11a243a1 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a243a3 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a243a5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a243a8 mov eax, esi */
  EAX = (ESI);
  /* 11a243aa sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a243ad lea ebx, [eax*4 + 0x11a304c0] */
  EBX = ((uint32_t)(EAX*4 + 0x11a304c0));
  /* 11a243b4 mov eax, esi */
  EAX = (ESI);
  /* 11a243b6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a243b9 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a243bc mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a243be shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a243c1 test byte ptr [esi + eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 11a243c6 je 0x11a24432 */
  if (C.zf) goto L_11a24432;
  /* 11a243c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a243ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11a243cc push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 11a243cf call 0x11a25674 */
  push32(0x11a243d4u); f_11a25674();
  /* 11a243d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a243d7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a243da jne 0x11a243f9 */
  if (!C.zf) goto L_11a243f9;
  /* 11a243dc mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11a243df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a243e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_11a243e4:;
  /* 11a243e4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a243e6 jae 0x11a243f3 */
  if (!C.cf) goto L_11a243f3;
  /* 11a243e8 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a243eb jne 0x11a243f0 */
  if (!C.zf) goto L_11a243f0;
  /* 11a243ed inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_11a243f0:;
  /* 11a243f0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a243f1 jmp 0x11a243e4 */
  goto L_11a243e4;
L_11a243f3:;
  /* 11a243f3 test byte ptr [edi + 0xd], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xd)))&(0x20u); fl_logic(_r,8); }
  /* 11a243f7 jmp 0x11a2442d */
  goto L_11a2442d;
L_11a243f9:;
  /* 11a243f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a243fb push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11a243fe push dword ptr [ebp - 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0xc))));
  /* 11a24401 call 0x11a25674 */
  push32(0x11a24406u); f_11a25674();
  /* 11a24406 mov eax, 0x200 */
  EAX = (0x200u);
  /* 11a2440b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2440e cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24411 ja 0x11a24420 */
  if ((!C.cf&&!C.zf)) goto L_11a24420;
  /* 11a24413 mov ecx, dword ptr [edi + 0xc] */
  ECX = (r32((uint32_t)(EDI + 0xc)));
  /* 11a24416 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 11a24419 je 0x11a24420 */
  if (C.zf) goto L_11a24420;
  /* 11a2441b test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 11a2441e je 0x11a24423 */
  if (C.zf) goto L_11a24423;
L_11a24420:;
  /* 11a24420 mov eax, dword ptr [edi + 0x18] */
  EAX = (r32((uint32_t)(EDI + 0x18)));
L_11a24423:;
  /* 11a24423 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a24426 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11a24428 test byte ptr [esi + eax + 4], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI + EAX*1 + 0x4)))&(0x4u); fl_logic(_r,8); }
L_11a2442d:;
  /* 11a2442d je 0x11a24432 */
  if (C.zf) goto L_11a24432;
  /* 11a2442f inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
L_11a24432:;
  /* 11a24432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a24435 sub dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_sub(_a,_b,_r,32); }
L_11a24438:;
  /* 11a24438 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a2443b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a2443e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a24440:;
  /* 11a24440 pop edi */
  EDI = (pop32());
  /* 11a24441 pop esi */
  ESI = (pop32());
  /* 11a24442 pop ebx */
  EBX = (pop32());
  /* 11a24443 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a24444 ret  */
  ESPCHK(0x11a242e4u, _esp0);
  ESP += 4; return;
}

/* FUN_10004445 @ 0x11a24445 (44 bytes, 17 insns) */
void f_11a24445(void) {
  FTRACE(0x11a24445u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24445 push ebp */
  push32((uint32_t)(EBP));
  /* 11a24446 mov ebp, esp */
  EBP = (ESP);
  /* 11a24448 push esi */
  push32((uint32_t)(ESI));
  /* 11a24449 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a2444c call 0x11a24968 */
  push32(0x11a24451u); f_11a24968();
  /* 11a24451 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a24454 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a24457 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a2445a call 0x11a24471 */
  push32(0x11a2445fu); f_11a24471();
  /* 11a2445f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a24462 mov esi, eax */
  ESI = (EAX);
  /* 11a24464 call 0x11a249ba */
  push32(0x11a24469u); f_11a249ba();
  /* 11a24469 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2446c mov eax, esi */
  EAX = (ESI);
  /* 11a2446e pop esi */
  ESI = (pop32());
  /* 11a2446f pop ebp */
  EBP = (pop32());
  /* 11a24470 ret  */
  ESPCHK(0x11a24445u, _esp0);
  ESP += 4; return;
}

/* FUN_10004471 @ 0x11a24471 (141 bytes, 55 insns) */
void f_11a24471(void) {
  FTRACE(0x11a24471u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24471 push esi */
  push32((uint32_t)(ESI));
  /* 11a24472 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24476 push edi */
  push32((uint32_t)(EDI));
  /* 11a24477 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a2447a test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11a2447c je 0x11a244ed */
  if (C.zf) goto L_11a244ed;
  /* 11a2447e mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a24482 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a24484 je 0x11a24490 */
  if (C.zf) goto L_11a24490;
  /* 11a24486 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24489 je 0x11a24490 */
  if (C.zf) goto L_11a24490;
  /* 11a2448b cmp edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2448e jne 0x11a244ed */
  if (!C.zf) goto L_11a244ed;
L_11a24490:;
  /* 11a24490 and al, 0xef */
  { uint32_t _r=(AL)&(0xefu); AL = (_r); fl_logic(_r,8); }
  /* 11a24492 cmp edi, 1 */
  { uint32_t _a=(EDI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24495 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a24498 jne 0x11a244a7 */
  if (!C.zf) goto L_11a244a7;
  /* 11a2449a push esi */
  push32((uint32_t)(ESI));
  /* 11a2449b call 0x11a242e4 */
  push32(0x11a244a0u); f_11a242e4();
  /* 11a244a0 add dword ptr [esp + 0x14], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(EAX),_r=_a+_b; w32((uint32_t)(ESP + 0x14), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a244a4 pop ecx */
  ECX = (pop32());
  /* 11a244a5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a244a7:;
  /* 11a244a7 push esi */
  push32((uint32_t)(ESI));
  /* 11a244a8 call 0x11a24b45 */
  push32(0x11a244adu); f_11a24b45();
  /* 11a244ad mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a244b0 pop ecx */
  ECX = (pop32());
  /* 11a244b1 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11a244b3 je 0x11a244bc */
  if (C.zf) goto L_11a244bc;
  /* 11a244b5 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a244b7 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a244ba jmp 0x11a244d0 */
  goto L_11a244d0;
L_11a244bc:;
  /* 11a244bc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a244be je 0x11a244d0 */
  if (C.zf) goto L_11a244d0;
  /* 11a244c0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a244c2 je 0x11a244d0 */
  if (C.zf) goto L_11a244d0;
  /* 11a244c4 test ah, 4 */
  { uint32_t _r=(AH)&(0x4u); fl_logic(_r,8); }
  /* 11a244c7 jne 0x11a244d0 */
  if (!C.zf) goto L_11a244d0;
  /* 11a244c9 mov dword ptr [esi + 0x18], 0x200 */
  w32((uint32_t)(ESI + 0x18), (0x200u));
L_11a244d0:;
  /* 11a244d0 push edi */
  push32((uint32_t)(EDI));
  /* 11a244d1 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a244d5 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a244d8 call 0x11a25674 */
  push32(0x11a244ddu); f_11a25674();
  /* 11a244dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a244e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a244e2 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a244e5 setne cl */
  CL = ((!C.zf) ? 1u : 0u);
  /* 11a244e8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a244e9 mov eax, ecx */
  EAX = (ECX);
  /* 11a244eb jmp 0x11a244fb */
  goto L_11a244fb;
L_11a244ed:;
  /* 11a244ed call 0x11a25452 */
  push32(0x11a244f2u); f_11a25452();
  /* 11a244f2 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11a244f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a244fb:;
  /* 11a244fb pop edi */
  EDI = (pop32());
  /* 11a244fc pop esi */
  ESI = (pop32());
  /* 11a244fd ret  */
  ESPCHK(0x11a24471u, _esp0);
  ESP += 4; return;
}

/* FUN_100044fe @ 0x11a244fe (49 bytes, 21 insns) */
void f_11a244fe(void) {
  FTRACE(0x11a244feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a244fe push esi */
  push32((uint32_t)(ESI));
  /* 11a244ff call 0x11a258bc */
  push32(0x11a24504u); f_11a258bc();
  /* 11a24504 mov esi, eax */
  ESI = (EAX);
  /* 11a24506 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a24508 jne 0x11a2450c */
  if (!C.zf) goto L_11a2450c;
  /* 11a2450a pop esi */
  ESI = (pop32());
  /* 11a2450b ret  */
  ESPCHK(0x11a244feu, _esp0);
  ESP += 4; return;
L_11a2450c:;
  /* 11a2450c push edi */
  push32((uint32_t)(EDI));
  /* 11a2450d push esi */
  push32((uint32_t)(ESI));
  /* 11a2450e push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a24512 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a24516 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a2451a call 0x11a2574c */
  push32(0x11a2451fu); f_11a2574c();
  /* 11a2451f push esi */
  push32((uint32_t)(ESI));
  /* 11a24520 mov edi, eax */
  EDI = (EAX);
  /* 11a24522 call 0x11a249ba */
  push32(0x11a24527u); f_11a249ba();
  /* 11a24527 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2452a mov eax, edi */
  EAX = (EDI);
  /* 11a2452c pop edi */
  EDI = (pop32());
  /* 11a2452d pop esi */
  ESI = (pop32());
  /* 11a2452e ret  */
  ESPCHK(0x11a244feu, _esp0);
  ESP += 4; return;
}

/* FUN_1000452f @ 0x11a2452f (19 bytes, 6 insns) */
void f_11a2452f(void) {
  FTRACE(0x11a2452fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2452f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a24531 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a24535 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a24539 call 0x11a244fe */
  push32(0x11a2453eu); f_11a244fe();
  /* 11a2453e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24541 ret  */
  ESPCHK(0x11a2452fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004542 @ 0x11a24542 (217 bytes, 57 insns) */
void f_11a24542(void) {
  FTRACE(0x11a24542u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24542 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24546 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24549 jne 0x11a245d7 */
  if (!C.zf) goto L_11a245d7;
  /* 11a2454f call dword ptr [0x11a2a094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a094))), 0x11a24555u);
  /* 11a24555 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a24557 mov dword ptr [0x11a2ff10], eax */
  w32((uint32_t)(0x11a2ff10), (EAX));
  /* 11a2455c call 0x11a261db */
  push32(0x11a24561u); f_11a261db();
  /* 11a24561 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24563 pop ecx */
  ECX = (pop32());
  /* 11a24564 je 0x11a245a2 */
  if (C.zf) goto L_11a245a2;
  /* 11a24566 mov eax, dword ptr [0x11a2ff10] */
  EAX = (r32((uint32_t)(0x11a2ff10)));
  /* 11a2456b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a2456d mov cl, byte ptr [0x11a2ff11] */
  CL = (r8((uint32_t)(0x11a2ff11)));
  /* 11a24573 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24578 shr dword ptr [0x11a2ff10], 0x10 */
  w32((uint32_t)(0x11a2ff10), (sh_shr((uint32_t)(r32((uint32_t)(0x11a2ff10))), (0x10u)&0x1f, 32)));
  /* 11a2457f mov dword ptr [0x11a2ff18], eax */
  w32((uint32_t)(0x11a2ff18), (EAX));
  /* 11a24584 mov dword ptr [0x11a2ff1c], ecx */
  w32((uint32_t)(0x11a2ff1c), (ECX));
  /* 11a2458a shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a2458d add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2458f mov dword ptr [0x11a2ff14], eax */
  w32((uint32_t)(0x11a2ff14), (EAX));
  /* 11a24594 call 0x11a25aa2 */
  push32(0x11a24599u); f_11a25aa2();
  /* 11a24599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2459b jne 0x11a245a6 */
  if (!C.zf) goto L_11a245a6;
  /* 11a2459d call 0x11a26238 */
  push32(0x11a245a2u); f_11a26238();
L_11a245a2:;
  /* 11a245a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a245a4 jmp 0x11a24618 */
  goto L_11a24618;
L_11a245a6:;
  /* 11a245a6 call dword ptr [0x11a2a090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a090))), 0x11a245acu);
  /* 11a245ac mov dword ptr [0x11a315e4], eax */
  w32((uint32_t)(0x11a315e4), (EAX));
  /* 11a245b1 call 0x11a25f34 */
  push32(0x11a245b6u); f_11a25f34();
  /* 11a245b6 mov dword ptr [0x11a2fef8], eax */
  w32((uint32_t)(0x11a2fef8), (EAX));
  /* 11a245bb call 0x11a25464 */
  push32(0x11a245c0u); f_11a25464();
  /* 11a245c0 call 0x11a25ce7 */
  push32(0x11a245c5u); f_11a25ce7();
  /* 11a245c5 call 0x11a25c2e */
  push32(0x11a245cau); f_11a25c2e();
  /* 11a245ca call 0x11a25984 */
  push32(0x11a245cfu); f_11a25984();
  /* 11a245cf inc dword ptr [0x11a2fef4] */
  { uint32_t _r=(r32((uint32_t)(0x11a2fef4)))+1; w32((uint32_t)(0x11a2fef4), (_r)); fl_inc(_r,32); }
  /* 11a245d5 jmp 0x11a24615 */
  goto L_11a24615;
L_11a245d7:;
  /* 11a245d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a245d9 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a245db jne 0x11a24609 */
  if (!C.zf) goto L_11a24609;
  /* 11a245dd cmp dword ptr [0x11a2fef4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a2fef4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a245e3 jle 0x11a245a2 */
  if ((C.zf||C.sf!=C.of)) goto L_11a245a2;
  /* 11a245e5 dec dword ptr [0x11a2fef4] */
  { uint32_t _r=(r32((uint32_t)(0x11a2fef4)))-1; w32((uint32_t)(0x11a2fef4), (_r)); fl_dec(_r,32); }
  /* 11a245eb cmp dword ptr [0x11a2ff48], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a2ff48))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a245f1 jne 0x11a245f8 */
  if (!C.zf) goto L_11a245f8;
  /* 11a245f3 call 0x11a259c2 */
  push32(0x11a245f8u); f_11a259c2();
L_11a245f8:;
  /* 11a245f8 call 0x11a25620 */
  push32(0x11a245fdu); f_11a25620();
  /* 11a245fd call 0x11a25af6 */
  push32(0x11a24602u); f_11a25af6();
  /* 11a24602 call 0x11a26238 */
  push32(0x11a24607u); f_11a26238();
  /* 11a24607 jmp 0x11a24615 */
  goto L_11a24615;
L_11a24609:;
  /* 11a24609 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2460c jne 0x11a24615 */
  if (!C.zf) goto L_11a24615;
  /* 11a2460e push ecx */
  push32((uint32_t)(ECX));
  /* 11a2460f call 0x11a25b8e */
  push32(0x11a24614u); f_11a25b8e();
  /* 11a24614 pop ecx */
  ECX = (pop32());
L_11a24615:;
  /* 11a24615 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a24617 pop eax */
  EAX = (pop32());
L_11a24618:;
  /* 11a24618 ret 0xc */
  ESPCHK(0x11a24542u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11a2461b (157 bytes, 73 insns) */
void f_11a2461b(void) {
  FTRACE(0x11a2461bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2461b push ebp */
  push32((uint32_t)(EBP));
  /* 11a2461c mov ebp, esp */
  EBP = (ESP);
  /* 11a2461e push ebx */
  push32((uint32_t)(EBX));
  /* 11a2461f mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a24622 push esi */
  push32((uint32_t)(ESI));
  /* 11a24623 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a24626 push edi */
  push32((uint32_t)(EDI));
  /* 11a24627 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a2462a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a2462c jne 0x11a24637 */
  if (!C.zf) goto L_11a24637;
  /* 11a2462e cmp dword ptr [0x11a2fef4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a2fef4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24635 jmp 0x11a2465d */
  goto L_11a2465d;
L_11a24637:;
  /* 11a24637 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2463a je 0x11a24641 */
  if (C.zf) goto L_11a24641;
  /* 11a2463c cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2463f jne 0x11a24663 */
  if (!C.zf) goto L_11a24663;
L_11a24641:;
  /* 11a24641 mov eax, dword ptr [0x11a315e8] */
  EAX = (r32((uint32_t)(0x11a315e8)));
  /* 11a24646 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24648 je 0x11a24653 */
  if (C.zf) goto L_11a24653;
  /* 11a2464a push edi */
  push32((uint32_t)(EDI));
  /* 11a2464b push esi */
  push32((uint32_t)(ESI));
  /* 11a2464c push ebx */
  push32((uint32_t)(EBX));
  /* 11a2464d call eax */
  call_ind((uint32_t)(EAX), 0x11a2464fu);
  /* 11a2464f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24651 je 0x11a2465f */
  if (C.zf) goto L_11a2465f;
L_11a24653:;
  /* 11a24653 push edi */
  push32((uint32_t)(EDI));
  /* 11a24654 push esi */
  push32((uint32_t)(ESI));
  /* 11a24655 push ebx */
  push32((uint32_t)(EBX));
  /* 11a24656 call 0x11a24542 */
  push32(0x11a2465bu); f_11a24542();
  /* 11a2465b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11a2465d:;
  /* 11a2465d jne 0x11a24663 */
  if (!C.zf) goto L_11a24663;
L_11a2465f:;
  /* 11a2465f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a24661 jmp 0x11a246b1 */
  goto L_11a246b1;
L_11a24663:;
  /* 11a24663 push edi */
  push32((uint32_t)(EDI));
  /* 11a24664 push esi */
  push32((uint32_t)(ESI));
  /* 11a24665 push ebx */
  push32((uint32_t)(EBX));
  /* 11a24666 call 0x11a21000 */
  push32(0x11a2466bu); f_11a21000();
  /* 11a2466b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2466e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a24671 jne 0x11a2467f */
  if (!C.zf) goto L_11a2467f;
  /* 11a24673 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24675 jne 0x11a246ae */
  if (!C.zf) goto L_11a246ae;
  /* 11a24677 push edi */
  push32((uint32_t)(EDI));
  /* 11a24678 push eax */
  push32((uint32_t)(EAX));
  /* 11a24679 push ebx */
  push32((uint32_t)(EBX));
  /* 11a2467a call 0x11a24542 */
  push32(0x11a2467fu); f_11a24542();
L_11a2467f:;
  /* 11a2467f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a24681 je 0x11a24688 */
  if (C.zf) goto L_11a24688;
  /* 11a24683 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24686 jne 0x11a246ae */
  if (!C.zf) goto L_11a246ae;
L_11a24688:;
  /* 11a24688 push edi */
  push32((uint32_t)(EDI));
  /* 11a24689 push esi */
  push32((uint32_t)(ESI));
  /* 11a2468a push ebx */
  push32((uint32_t)(EBX));
  /* 11a2468b call 0x11a24542 */
  push32(0x11a24690u); f_11a24542();
  /* 11a24690 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24692 jne 0x11a24697 */
  if (!C.zf) goto L_11a24697;
  /* 11a24694 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11a24697:;
  /* 11a24697 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2469b je 0x11a246ae */
  if (C.zf) goto L_11a246ae;
  /* 11a2469d mov eax, dword ptr [0x11a315e8] */
  EAX = (r32((uint32_t)(0x11a315e8)));
  /* 11a246a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a246a4 je 0x11a246ae */
  if (C.zf) goto L_11a246ae;
  /* 11a246a6 push edi */
  push32((uint32_t)(EDI));
  /* 11a246a7 push esi */
  push32((uint32_t)(ESI));
  /* 11a246a8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a246a9 call eax */
  call_ind((uint32_t)(EAX), 0x11a246abu);
  /* 11a246ab mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a246ae:;
  /* 11a246ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11a246b1:;
  /* 11a246b1 pop edi */
  EDI = (pop32());
  /* 11a246b2 pop esi */
  ESI = (pop32());
  /* 11a246b3 pop ebx */
  EBX = (pop32());
  /* 11a246b4 pop ebp */
  EBP = (pop32());
  /* 11a246b5 ret 0xc */
  ESPCHK(0x11a2461bu, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11a246b8 (48 bytes, 15 insns) */
void f_11a246b8(void) {
  FTRACE(0x11a246b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a246b8 mov eax, dword ptr [0x11a2ff00] */
  EAX = (r32((uint32_t)(0x11a2ff00)));
  /* 11a246bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a246c0 je 0x11a246cf */
  if (C.zf) goto L_11a246cf;
  /* 11a246c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a246c4 jne 0x11a246d4 */
  if (!C.zf) goto L_11a246d4;
  /* 11a246c6 cmp dword ptr [0x11a2ff04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2ff04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a246cd jne 0x11a246d4 */
  if (!C.zf) goto L_11a246d4;
L_11a246cf:;
  /* 11a246cf call 0x11a262e0 */
  push32(0x11a246d4u); f_11a262e0();
L_11a246d4:;
  /* 11a246d4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a246d8 call 0x11a26319 */
  push32(0x11a246ddu); f_11a26319();
  /* 11a246dd push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a246e2 call dword ptr [0x11a2c510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2c510))), 0x11a246e8u);
  /* 11a246e8 pop ecx */
  ECX = (pop32());
  /* 11a246e9 pop ecx */
  ECX = (pop32());
  /* 11a246ea ret  */
  ESPCHK(0x11a246b8u, _esp0);
  ESP += 4; return;
}

/* FUN_100046eb @ 0x11a246eb (215 bytes, 76 insns) */
void f_11a246eb(void) {
  FTRACE(0x11a246ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a246eb push ebp */
  push32((uint32_t)(EBP));
  /* 11a246ec mov ebp, esp */
  EBP = (ESP);
  /* 11a246ee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a246f0 push 0x11a2a1b8 */
  push32((uint32_t)(0x11a2a1b8u));
  /* 11a246f5 push 0x11a274e4 */
  push32((uint32_t)(0x11a274e4u));
  /* 11a246fa mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a24700 push eax */
  push32((uint32_t)(EAX));
  /* 11a24701 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a24708 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2470b push ebx */
  push32((uint32_t)(EBX));
  /* 11a2470c push esi */
  push32((uint32_t)(ESI));
  /* 11a2470d push edi */
  push32((uint32_t)(EDI));
  /* 11a2470e mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a24711 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a24713 je 0x11a247c5 */
  if (C.zf) { jmp_ind(0x11a247c5u); return; }
  /* 11a24719 mov eax, dword ptr [0x11a304a8] */
  EAX = (r32((uint32_t)(0x11a304a8)));
  /* 11a2471e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24721 jne 0x11a2475e */
  if (!C.zf) goto L_11a2475e;
  /* 11a24723 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a24725 call 0x11a27376 */
  push32(0x11a2472au); f_11a27376();
  /* 11a2472a pop ecx */
  ECX = (pop32());
  /* 11a2472b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a2472f push esi */
  push32((uint32_t)(ESI));
  /* 11a24730 call 0x11a264b4 */
  push32(0x11a24735u); f_11a264b4();
  /* 11a24735 pop ecx */
  ECX = (pop32());
  /* 11a24736 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a24739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2473b je 0x11a24746 */
  if (C.zf) goto L_11a24746;
  /* 11a2473d push esi */
  push32((uint32_t)(ESI));
  /* 11a2473e push eax */
  push32((uint32_t)(EAX));
  /* 11a2473f call 0x11a264df */
  push32(0x11a24744u); f_11a264df();
  /* 11a24744 pop ecx */
  ECX = (pop32());
  /* 11a24745 pop ecx */
  ECX = (pop32());
L_11a24746:;
  /* 11a24746 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a2474a call 0x11a24755 */
  push32(0x11a2474fu); f_11a24755();
  /* 11a2474f cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24753 jmp 0x11a247a6 */
  goto L_11a247a6;
  /* 11a24755 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a24757 call 0x11a273d7 */
  push32(0x11a2475cu); f_11a273d7();
  /* 11a2475c pop ecx */
  ECX = (pop32());
  /* 11a2475d ret  */
  ESPCHK(0x11a246ebu, _esp0);
  ESP += 4; return;
L_11a2475e:;
  /* 11a2475e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24761 jne 0x11a247b6 */
  if (!C.zf) goto L_11a247b6;
  /* 11a24763 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a24765 call 0x11a27376 */
  push32(0x11a2476au); f_11a27376();
  /* 11a2476a pop ecx */
  ECX = (pop32());
  /* 11a2476b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a24772 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11a24775 push eax */
  push32((uint32_t)(EAX));
  /* 11a24776 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11a24779 push eax */
  push32((uint32_t)(EAX));
  /* 11a2477a push esi */
  push32((uint32_t)(ESI));
  /* 11a2477b call 0x11a26f19 */
  push32(0x11a24780u); f_11a26f19();
  /* 11a24780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24783 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a24786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24788 je 0x11a24799 */
  if (C.zf) goto L_11a24799;
  /* 11a2478a push eax */
  push32((uint32_t)(EAX));
  /* 11a2478b push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a2478e push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11a24791 call 0x11a26f70 */
  push32(0x11a24796u); f_11a26f70();
  /* 11a24796 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a24799:;
  /* 11a24799 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a2479d call 0x11a247ad */
  push32(0x11a247a2u); f_11a247ad();
  /* 11a247a2 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a247a6:;
  /* 11a247a6 jne 0x11a247c5 */
  if (!C.zf) { jmp_ind(0x11a247c5u); return; }
  /* 11a247a8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a247ab jmp 0x11a247b7 */
  goto L_11a247b7;
  /* 11a247ad push 9 */
  push32((uint32_t)(0x9u));
  /* 11a247af call 0x11a273d7 */
  push32(0x11a247b4u); f_11a273d7();
  /* 11a247b4 pop ecx */
  ECX = (pop32());
  /* 11a247b5 ret  */
  ESPCHK(0x11a246ebu, _esp0);
  ESP += 4; return;
L_11a247b6:;
  /* 11a247b6 push esi */
  push32((uint32_t)(ESI));
L_11a247b7:;
  /* 11a247b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a247b9 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a247c1 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
}

/* FUN_10004755 @ 0x11a24755 (9 bytes, 4 insns) */
void f_11a24755(void) {
  FTRACE(0x11a24755u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24755 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a24757 call 0x11a273d7 */
  push32(0x11a2475cu); f_11a273d7();
  /* 11a2475c pop ecx */
  ECX = (pop32());
  /* 11a2475d ret  */
  ESPCHK(0x11a24755u, _esp0);
  ESP += 4; return;
}

/* FUN_100047ad @ 0x11a247ad (9 bytes, 4 insns) */
void f_11a247ad(void) {
  FTRACE(0x11a247adu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a247ad push 9 */
  push32((uint32_t)(0x9u));
  /* 11a247af call 0x11a273d7 */
  push32(0x11a247b4u); f_11a273d7();
  /* 11a247b4 pop ecx */
  ECX = (pop32());
  /* 11a247b5 ret  */
  ESPCHK(0x11a247adu, _esp0);
  ESP += 4; return;
}

/* FUN_100047f0 @ 0x11a247f0 (188 bytes, 86 insns) */
void f_11a247f0(void) {
  FTRACE(0x11a247f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a247f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a247f2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a247f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a247f7 mov ebx, eax */
  EBX = (EAX);
  /* 11a247f9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a247fc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24800 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a24806 je 0x11a2481b */
  if (C.zf) goto L_11a2481b;
L_11a24808:;
  /* 11a24808 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11a2480a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a2480b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2480d je 0x11a247e0 */
  if (C.zf) { jmp_ind(0x11a247e0u); return; }
  /* 11a2480f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11a24811 je 0x11a24864 */
  if (C.zf) goto L_11a24864;
  /* 11a24813 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11a24819 jne 0x11a24808 */
  if (!C.zf) goto L_11a24808;
L_11a2481b:;
  /* 11a2481b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11a2481d push edi */
  push32((uint32_t)(EDI));
  /* 11a2481e mov eax, ebx */
  EAX = (EBX);
  /* 11a24820 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11a24823 push esi */
  push32((uint32_t)(ESI));
  /* 11a24824 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11a24826:;
  /* 11a24826 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a24828 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11a2482d mov eax, ecx */
  EAX = (ECX);
  /* 11a2482f mov esi, edi */
  ESI = (EDI);
  /* 11a24831 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11a24833 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24835 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24837 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a2483a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a2483d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a2483f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11a24841 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24844 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11a2484a jne 0x11a24868 */
  if (!C.zf) goto L_11a24868;
  /* 11a2484c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11a24851 je 0x11a24826 */
  if (C.zf) goto L_11a24826;
  /* 11a24853 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11a24858 jne 0x11a24862 */
  if (!C.zf) goto L_11a24862;
  /* 11a2485a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a24860 jne 0x11a24826 */
  if (!C.zf) goto L_11a24826;
L_11a24862:;
  /* 11a24862 pop esi */
  ESI = (pop32());
  /* 11a24863 pop edi */
  EDI = (pop32());
L_11a24864:;
  /* 11a24864 pop ebx */
  EBX = (pop32());
  /* 11a24865 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a24867 ret  */
  ESPCHK(0x11a247f0u, _esp0);
  ESP += 4; return;
L_11a24868:;
  /* 11a24868 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11a2486b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2486d je 0x11a248a5 */
  if (C.zf) goto L_11a248a5;
  /* 11a2486f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a24871 je 0x11a24862 */
  if (C.zf) goto L_11a24862;
  /* 11a24873 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24875 je 0x11a2489e */
  if (C.zf) goto L_11a2489e;
  /* 11a24877 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a24879 je 0x11a24862 */
  if (C.zf) goto L_11a24862;
  /* 11a2487b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a2487e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24880 je 0x11a24897 */
  if (C.zf) goto L_11a24897;
  /* 11a24882 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a24884 je 0x11a24862 */
  if (C.zf) goto L_11a24862;
  /* 11a24886 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24888 je 0x11a24890 */
  if (C.zf) goto L_11a24890;
  /* 11a2488a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a2488c je 0x11a24862 */
  if (C.zf) goto L_11a24862;
  /* 11a2488e jmp 0x11a24826 */
  goto L_11a24826;
L_11a24890:;
  /* 11a24890 pop esi */
  ESI = (pop32());
  /* 11a24891 pop edi */
  EDI = (pop32());
  /* 11a24892 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11a24895 pop ebx */
  EBX = (pop32());
  /* 11a24896 ret  */
  ESPCHK(0x11a247f0u, _esp0);
  ESP += 4; return;
L_11a24897:;
  /* 11a24897 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11a2489a pop esi */
  ESI = (pop32());
  /* 11a2489b pop edi */
  EDI = (pop32());
  /* 11a2489c pop ebx */
  EBX = (pop32());
  /* 11a2489d ret  */
  ESPCHK(0x11a247f0u, _esp0);
  ESP += 4; return;
L_11a2489e:;
  /* 11a2489e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11a248a1 pop esi */
  ESI = (pop32());
  /* 11a248a2 pop edi */
  EDI = (pop32());
  /* 11a248a3 pop ebx */
  EBX = (pop32());
  /* 11a248a4 ret  */
  ESPCHK(0x11a247f0u, _esp0);
  ESP += 4; return;
L_11a248a5:;
  /* 11a248a5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11a248a8 pop esi */
  ESI = (pop32());
  /* 11a248a9 pop edi */
  EDI = (pop32());
  /* 11a248aa pop ebx */
  EBX = (pop32());
  /* 11a248ab ret  */
  ESPCHK(0x11a247f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004968 @ 0x11a24968 (47 bytes, 17 insns) */
void f_11a24968(void) {
  FTRACE(0x11a24968u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24968 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a2496c mov ecx, 0x11a2c520 */
  ECX = (0x11a2c520u);
  /* 11a24971 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24973 jb 0x11a2498c */
  if (C.cf) goto L_11a2498c;
  /* 11a24975 cmp eax, 0x11a2c780 */
  { uint32_t _a=(EAX),_b=(0x11a2c780u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2497a ja 0x11a2498c */
  if ((!C.cf&&!C.zf)) goto L_11a2498c;
  /* 11a2497c sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2497e sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a24981 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24984 push eax */
  push32((uint32_t)(EAX));
  /* 11a24985 call 0x11a27376 */
  push32(0x11a2498au); f_11a27376();
  /* 11a2498a pop ecx */
  ECX = (pop32());
  /* 11a2498b ret  */
  ESPCHK(0x11a24968u, _esp0);
  ESP += 4; return;
L_11a2498c:;
  /* 11a2498c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2498f push eax */
  push32((uint32_t)(EAX));
  /* 11a24990 call dword ptr [0x11a2a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a09c))), 0x11a24996u);
  /* 11a24996 ret  */
  ESPCHK(0x11a24968u, _esp0);
  ESP += 4; return;
}

/* FUN_10004997 @ 0x11a24997 (35 bytes, 13 insns) */
void f_11a24997(void) {
  FTRACE(0x11a24997u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24997 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a2499b cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2499e jge 0x11a249ab */
  if ((C.sf==C.of)) goto L_11a249ab;
  /* 11a249a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a249a3 push eax */
  push32((uint32_t)(EAX));
  /* 11a249a4 call 0x11a27376 */
  push32(0x11a249a9u); f_11a27376();
  /* 11a249a9 pop ecx */
  ECX = (pop32());
  /* 11a249aa ret  */
  ESPCHK(0x11a24997u, _esp0);
  ESP += 4; return;
L_11a249ab:;
  /* 11a249ab mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a249af add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a249b2 push eax */
  push32((uint32_t)(EAX));
  /* 11a249b3 call dword ptr [0x11a2a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a09c))), 0x11a249b9u);
  /* 11a249b9 ret  */
  ESPCHK(0x11a24997u, _esp0);
  ESP += 4; return;
}

/* FUN_100049ba @ 0x11a249ba (47 bytes, 17 insns) */
void f_11a249ba(void) {
  FTRACE(0x11a249bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a249ba mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a249be mov ecx, 0x11a2c520 */
  ECX = (0x11a2c520u);
  /* 11a249c3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a249c5 jb 0x11a249de */
  if (C.cf) goto L_11a249de;
  /* 11a249c7 cmp eax, 0x11a2c780 */
  { uint32_t _a=(EAX),_b=(0x11a2c780u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a249cc ja 0x11a249de */
  if ((!C.cf&&!C.zf)) goto L_11a249de;
  /* 11a249ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a249d0 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a249d3 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a249d6 push eax */
  push32((uint32_t)(EAX));
  /* 11a249d7 call 0x11a273d7 */
  push32(0x11a249dcu); f_11a273d7();
  /* 11a249dc pop ecx */
  ECX = (pop32());
  /* 11a249dd ret  */
  ESPCHK(0x11a249bau, _esp0);
  ESP += 4; return;
L_11a249de:;
  /* 11a249de add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a249e1 push eax */
  push32((uint32_t)(EAX));
  /* 11a249e2 call dword ptr [0x11a2a0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a0))), 0x11a249e8u);
  /* 11a249e8 ret  */
  ESPCHK(0x11a249bau, _esp0);
  ESP += 4; return;
}

/* FUN_100049e9 @ 0x11a249e9 (35 bytes, 13 insns) */
void f_11a249e9(void) {
  FTRACE(0x11a249e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a249e9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a249ed cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a249f0 jge 0x11a249fd */
  if ((C.sf==C.of)) goto L_11a249fd;
  /* 11a249f2 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a249f5 push eax */
  push32((uint32_t)(EAX));
  /* 11a249f6 call 0x11a273d7 */
  push32(0x11a249fbu); f_11a273d7();
  /* 11a249fb pop ecx */
  ECX = (pop32());
  /* 11a249fc ret  */
  ESPCHK(0x11a249e9u, _esp0);
  ESP += 4; return;
L_11a249fd:;
  /* 11a249fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24a01 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24a04 push eax */
  push32((uint32_t)(EAX));
  /* 11a24a05 call dword ptr [0x11a2a0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a0))), 0x11a24a0bu);
  /* 11a24a0b ret  */
  ESPCHK(0x11a249e9u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a0c @ 0x11a24a0c (93 bytes, 32 insns) */
void f_11a24a0c(void) {
  FTRACE(0x11a24a0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24a0c push esi */
  push32((uint32_t)(ESI));
  /* 11a24a0d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24a11 cmp esi, dword ptr [0x11a305c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a305c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24a17 jae 0x11a24a51 */
  if (!C.cf) goto L_11a24a51;
  /* 11a24a19 mov ecx, esi */
  ECX = (ESI);
  /* 11a24a1b mov eax, esi */
  EAX = (ESI);
  /* 11a24a1d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a24a20 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24a23 mov ecx, dword ptr [ecx*4 + 0x11a304c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a24a2a lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a24a2d test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a24a32 je 0x11a24a51 */
  if (C.zf) goto L_11a24a51;
  /* 11a24a34 push edi */
  push32((uint32_t)(EDI));
  /* 11a24a35 push esi */
  push32((uint32_t)(ESI));
  /* 11a24a36 call 0x11a279da */
  push32(0x11a24a3bu); f_11a279da();
  /* 11a24a3b push esi */
  push32((uint32_t)(ESI));
  /* 11a24a3c call 0x11a24a69 */
  push32(0x11a24a41u); f_11a24a69();
  /* 11a24a41 push esi */
  push32((uint32_t)(ESI));
  /* 11a24a42 mov edi, eax */
  EDI = (EAX);
  /* 11a24a44 call 0x11a27a39 */
  push32(0x11a24a49u); f_11a27a39();
  /* 11a24a49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24a4c mov eax, edi */
  EAX = (EDI);
  /* 11a24a4e pop edi */
  EDI = (pop32());
  /* 11a24a4f pop esi */
  ESI = (pop32());
  /* 11a24a50 ret  */
  ESPCHK(0x11a24a0cu, _esp0);
  ESP += 4; return;
L_11a24a51:;
  /* 11a24a51 call 0x11a25452 */
  push32(0x11a24a56u); f_11a25452();
  /* 11a24a56 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a24a5c call 0x11a2545b */
  push32(0x11a24a61u); f_11a2545b();
  /* 11a24a61 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a24a64 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24a67 pop esi */
  ESI = (pop32());
  /* 11a24a68 ret  */
  ESPCHK(0x11a24a0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004a69 @ 0x11a24a69 (131 bytes, 52 insns) */
void f_11a24a69(void) {
  FTRACE(0x11a24a69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24a69 push esi */
  push32((uint32_t)(ESI));
  /* 11a24a6a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24a6e push edi */
  push32((uint32_t)(EDI));
  /* 11a24a6f push esi */
  push32((uint32_t)(ESI));
  /* 11a24a70 call 0x11a27998 */
  push32(0x11a24a75u); f_11a27998();
  /* 11a24a75 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24a78 pop ecx */
  ECX = (pop32());
  /* 11a24a79 je 0x11a24ab7 */
  if (C.zf) goto L_11a24ab7;
  /* 11a24a7b cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24a7e je 0x11a24a85 */
  if (C.zf) goto L_11a24a85;
  /* 11a24a80 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24a83 jne 0x11a24a9b */
  if (!C.zf) goto L_11a24a9b;
L_11a24a85:;
  /* 11a24a85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a24a87 call 0x11a27998 */
  push32(0x11a24a8cu); f_11a27998();
  /* 11a24a8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a24a8e mov edi, eax */
  EDI = (EAX);
  /* 11a24a90 call 0x11a27998 */
  push32(0x11a24a95u); f_11a27998();
  /* 11a24a95 pop ecx */
  ECX = (pop32());
  /* 11a24a96 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24a98 pop ecx */
  ECX = (pop32());
  /* 11a24a99 je 0x11a24ab7 */
  if (C.zf) goto L_11a24ab7;
L_11a24a9b:;
  /* 11a24a9b push esi */
  push32((uint32_t)(ESI));
  /* 11a24a9c call 0x11a27998 */
  push32(0x11a24aa1u); f_11a27998();
  /* 11a24aa1 pop ecx */
  ECX = (pop32());
  /* 11a24aa2 push eax */
  push32((uint32_t)(EAX));
  /* 11a24aa3 call dword ptr [0x11a2a0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a8))), 0x11a24aa9u);
  /* 11a24aa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24aab jne 0x11a24ab7 */
  if (!C.zf) goto L_11a24ab7;
  /* 11a24aad call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a24ab3u);
  /* 11a24ab3 mov edi, eax */
  EDI = (EAX);
  /* 11a24ab5 jmp 0x11a24ab9 */
  goto L_11a24ab9;
L_11a24ab7:;
  /* 11a24ab7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a24ab9:;
  /* 11a24ab9 push esi */
  push32((uint32_t)(ESI));
  /* 11a24aba call 0x11a27919 */
  push32(0x11a24abfu); f_11a27919();
  /* 11a24abf mov eax, esi */
  EAX = (ESI);
  /* 11a24ac1 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11a24ac4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a24ac7 pop ecx */
  ECX = (pop32());
  /* 11a24ac8 mov eax, dword ptr [eax*4 + 0x11a304c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11a304c0)));
  /* 11a24acf lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 11a24ad2 and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a24ad7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a24ad9 je 0x11a24ae7 */
  if (C.zf) goto L_11a24ae7;
  /* 11a24adb push edi */
  push32((uint32_t)(EDI));
  /* 11a24adc call 0x11a253df */
  push32(0x11a24ae1u); f_11a253df();
  /* 11a24ae1 pop ecx */
  ECX = (pop32());
  /* 11a24ae2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24ae5 jmp 0x11a24ae9 */
  goto L_11a24ae9;
L_11a24ae7:;
  /* 11a24ae7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a24ae9:;
  /* 11a24ae9 pop edi */
  EDI = (pop32());
  /* 11a24aea pop esi */
  ESI = (pop32());
  /* 11a24aeb ret  */
  ESPCHK(0x11a24a69u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x11a24aec (43 bytes, 17 insns) */
void f_11a24aec(void) {
  FTRACE(0x11a24aecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24aec push esi */
  push32((uint32_t)(ESI));
  /* 11a24aed mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24af1 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a24af4 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11a24af6 je 0x11a24b15 */
  if (C.zf) goto L_11a24b15;
  /* 11a24af8 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a24afa je 0x11a24b15 */
  if (C.zf) goto L_11a24b15;
  /* 11a24afc push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11a24aff call 0x11a246eb */
  push32(0x11a24b04u); f_11a246eb();
  /* 11a24b04 and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 11a24b0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a24b0c pop ecx */
  ECX = (pop32());
  /* 11a24b0d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a24b0f mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11a24b12 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_11a24b15:;
  /* 11a24b15 pop esi */
  ESI = (pop32());
  /* 11a24b16 ret  */
  ESPCHK(0x11a24aecu, _esp0);
  ESP += 4; return;
}

/* FUN_10004b17 @ 0x11a24b17 (46 bytes, 22 insns) */
void f_11a24b17(void) {
  FTRACE(0x11a24b17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24b17 push esi */
  push32((uint32_t)(ESI));
  /* 11a24b18 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24b1c push esi */
  push32((uint32_t)(ESI));
  /* 11a24b1d call 0x11a24b45 */
  push32(0x11a24b22u); f_11a24b45();
  /* 11a24b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24b24 pop ecx */
  ECX = (pop32());
  /* 11a24b25 je 0x11a24b2c */
  if (C.zf) goto L_11a24b2c;
  /* 11a24b27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24b2a pop esi */
  ESI = (pop32());
  /* 11a24b2b ret  */
  ESPCHK(0x11a24b17u, _esp0);
  ESP += 4; return;
L_11a24b2c:;
  /* 11a24b2c test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 11a24b30 je 0x11a24b41 */
  if (C.zf) goto L_11a24b41;
  /* 11a24b32 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a24b35 call 0x11a27a5b */
  push32(0x11a24b3au); f_11a27a5b();
  /* 11a24b3a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a24b3c pop ecx */
  ECX = (pop32());
  /* 11a24b3d pop esi */
  ESI = (pop32());
  /* 11a24b3e sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a24b40 ret  */
  ESPCHK(0x11a24b17u, _esp0);
  ESP += 4; return;
L_11a24b41:;
  /* 11a24b41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a24b43 pop esi */
  ESI = (pop32());
  /* 11a24b44 ret  */
  ESPCHK(0x11a24b17u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b45 @ 0x11a24b45 (92 bytes, 40 insns) */
void f_11a24b45(void) {
  FTRACE(0x11a24b45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24b45 push ebx */
  push32((uint32_t)(EBX));
  /* 11a24b46 push esi */
  push32((uint32_t)(ESI));
  /* 11a24b47 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11a24b4b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a24b4d push edi */
  push32((uint32_t)(EDI));
  /* 11a24b4e mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a24b51 mov ecx, eax */
  ECX = (EAX);
  /* 11a24b53 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a24b56 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24b59 jne 0x11a24b92 */
  if (!C.zf) goto L_11a24b92;
  /* 11a24b5b test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 11a24b5f je 0x11a24b92 */
  if (C.zf) goto L_11a24b92;
  /* 11a24b61 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a24b64 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11a24b66 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a24b68 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a24b6a jle 0x11a24b92 */
  if ((C.zf||C.sf!=C.of)) goto L_11a24b92;
  /* 11a24b6c push edi */
  push32((uint32_t)(EDI));
  /* 11a24b6d push eax */
  push32((uint32_t)(EAX));
  /* 11a24b6e push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a24b71 call 0x11a27aee */
  push32(0x11a24b76u); f_11a27aee();
  /* 11a24b76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24b79 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24b7b jne 0x11a24b8b */
  if (!C.zf) goto L_11a24b8b;
  /* 11a24b7d mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a24b80 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11a24b82 je 0x11a24b92 */
  if (C.zf) goto L_11a24b92;
  /* 11a24b84 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11a24b86 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a24b89 jmp 0x11a24b92 */
  goto L_11a24b92;
L_11a24b8b:;
  /* 11a24b8b or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a24b8f or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_11a24b92:;
  /* 11a24b92 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a24b95 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a24b99 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a24b9b pop edi */
  EDI = (pop32());
  /* 11a24b9c mov eax, ebx */
  EAX = (EBX);
  /* 11a24b9e pop esi */
  ESI = (pop32());
  /* 11a24b9f pop ebx */
  EBX = (pop32());
  /* 11a24ba0 ret  */
  ESPCHK(0x11a24b45u, _esp0);
  ESP += 4; return;
}

/* FUN_10004baa @ 0x11a24baa (164 bytes, 66 insns) */
void f_11a24baa(void) {
  FTRACE(0x11a24baau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24baa push ebx */
  push32((uint32_t)(EBX));
  /* 11a24bab push esi */
  push32((uint32_t)(ESI));
  /* 11a24bac push edi */
  push32((uint32_t)(EDI));
  /* 11a24bad push 2 */
  push32((uint32_t)(0x2u));
  /* 11a24baf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a24bb1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a24bb3 call 0x11a27376 */
  push32(0x11a24bb8u); f_11a27376();
  /* 11a24bb8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a24bba pop ecx */
  ECX = (pop32());
  /* 11a24bbb cmp dword ptr [0x11a315e0], esi */
  { uint32_t _a=(r32((uint32_t)(0x11a315e0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24bc1 jle 0x11a24c37 */
  if ((C.zf||C.sf!=C.of)) goto L_11a24c37;
L_11a24bc3:;
  /* 11a24bc3 mov eax, dword ptr [0x11a305c4] */
  EAX = (r32((uint32_t)(0x11a305c4)));
  /* 11a24bc8 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11a24bcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24bcd je 0x11a24c2e */
  if (C.zf) goto L_11a24c2e;
  /* 11a24bcf test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11a24bd3 je 0x11a24c2e */
  if (C.zf) goto L_11a24c2e;
  /* 11a24bd5 push eax */
  push32((uint32_t)(EAX));
  /* 11a24bd6 push esi */
  push32((uint32_t)(ESI));
  /* 11a24bd7 call 0x11a24997 */
  push32(0x11a24bdcu); f_11a24997();
  /* 11a24bdc mov eax, dword ptr [0x11a305c4] */
  EAX = (r32((uint32_t)(0x11a305c4)));
  /* 11a24be1 pop ecx */
  ECX = (pop32());
  /* 11a24be2 pop ecx */
  ECX = (pop32());
  /* 11a24be3 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11a24be6 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a24be9 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 11a24bec je 0x11a24c1e */
  if (C.zf) goto L_11a24c1e;
  /* 11a24bee cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24bf3 jne 0x11a24c04 */
  if (!C.zf) goto L_11a24c04;
  /* 11a24bf5 push eax */
  push32((uint32_t)(EAX));
  /* 11a24bf6 call 0x11a24b17 */
  push32(0x11a24bfbu); f_11a24b17();
  /* 11a24bfb cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24bfe pop ecx */
  ECX = (pop32());
  /* 11a24bff je 0x11a24c1e */
  if (C.zf) goto L_11a24c1e;
  /* 11a24c01 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a24c02 jmp 0x11a24c1e */
  goto L_11a24c1e;
L_11a24c04:;
  /* 11a24c04 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24c09 jne 0x11a24c1e */
  if (!C.zf) goto L_11a24c1e;
  /* 11a24c0b test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11a24c0e je 0x11a24c1e */
  if (C.zf) goto L_11a24c1e;
  /* 11a24c10 push eax */
  push32((uint32_t)(EAX));
  /* 11a24c11 call 0x11a24b17 */
  push32(0x11a24c16u); f_11a24b17();
  /* 11a24c16 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24c19 pop ecx */
  ECX = (pop32());
  /* 11a24c1a jne 0x11a24c1e */
  if (!C.zf) goto L_11a24c1e;
  /* 11a24c1c or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_11a24c1e:;
  /* 11a24c1e mov eax, dword ptr [0x11a305c4] */
  EAX = (r32((uint32_t)(0x11a305c4)));
  /* 11a24c23 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 11a24c26 push esi */
  push32((uint32_t)(ESI));
  /* 11a24c27 call 0x11a249e9 */
  push32(0x11a24c2cu); f_11a249e9();
  /* 11a24c2c pop ecx */
  ECX = (pop32());
  /* 11a24c2d pop ecx */
  ECX = (pop32());
L_11a24c2e:;
  /* 11a24c2e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a24c2f cmp esi, dword ptr [0x11a315e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a315e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24c35 jl 0x11a24bc3 */
  if ((C.sf!=C.of)) goto L_11a24bc3;
L_11a24c37:;
  /* 11a24c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a24c39 call 0x11a273d7 */
  push32(0x11a24c3eu); f_11a273d7();
  /* 11a24c3e cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24c43 pop ecx */
  ECX = (pop32());
  /* 11a24c44 mov eax, ebx */
  EAX = (EBX);
  /* 11a24c46 je 0x11a24c4a */
  if (C.zf) goto L_11a24c4a;
  /* 11a24c48 mov eax, edi */
  EAX = (EDI);
L_11a24c4a:;
  /* 11a24c4a pop edi */
  EDI = (pop32());
  /* 11a24c4b pop esi */
  ESI = (pop32());
  /* 11a24c4c pop ebx */
  EBX = (pop32());
  /* 11a24c4d ret  */
  ESPCHK(0x11a24baau, _esp0);
  ESP += 4; return;
}

/* FUN_10004c4e @ 0x11a24c4e (220 bytes, 79 insns) */
void f_11a24c4e(void) {
  FTRACE(0x11a24c4eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24c4e push esi */
  push32((uint32_t)(ESI));
  /* 11a24c4f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24c53 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a24c56 test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11a24c58 je 0x11a24d25 */
  if (C.zf) goto L_11a24d25;
  /* 11a24c5e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11a24c60 jne 0x11a24d25 */
  if (!C.zf) goto L_11a24d25;
  /* 11a24c66 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 11a24c68 je 0x11a24c74 */
  if (C.zf) goto L_11a24c74;
  /* 11a24c6a or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11a24c6c mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a24c6f jmp 0x11a24d25 */
  goto L_11a24d25;
L_11a24c74:;
  /* 11a24c74 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11a24c76 test ax, 0x10c */
  { uint32_t _r=(AX)&(0x10cu); fl_logic(_r,16); }
  /* 11a24c7a mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a24c7d jne 0x11a24c88 */
  if (!C.zf) goto L_11a24c88;
  /* 11a24c7f push esi */
  push32((uint32_t)(ESI));
  /* 11a24c80 call 0x11a27cde */
  push32(0x11a24c85u); f_11a27cde();
  /* 11a24c85 pop ecx */
  ECX = (pop32());
  /* 11a24c86 jmp 0x11a24c8d */
  goto L_11a24c8d;
L_11a24c88:;
  /* 11a24c88 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11a24c8b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
L_11a24c8d:;
  /* 11a24c8d push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11a24c90 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11a24c93 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a24c96 call 0x11a24d2a */
  push32(0x11a24c9bu); f_11a24d2a();
  /* 11a24c9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24c9e mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11a24ca1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24ca3 je 0x11a24d14 */
  if (C.zf) goto L_11a24d14;
  /* 11a24ca5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24ca8 je 0x11a24d14 */
  if (C.zf) goto L_11a24d14;
  /* 11a24caa mov edx, dword ptr [esi + 0xc] */
  EDX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a24cad test dl, 0x82 */
  { uint32_t _r=(DL)&(0x82u); fl_logic(_r,8); }
  /* 11a24cb0 jne 0x11a24ce9 */
  if (!C.zf) goto L_11a24ce9;
  /* 11a24cb2 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a24cb5 push edi */
  push32((uint32_t)(EDI));
  /* 11a24cb6 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24cb9 je 0x11a24cd2 */
  if (C.zf) goto L_11a24cd2;
  /* 11a24cbb mov edi, ecx */
  EDI = (ECX);
  /* 11a24cbd sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 11a24cc0 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a24cc3 mov edi, dword ptr [edi*4 + 0x11a304c0] */
  EDI = (r32((uint32_t)(EDI*4 + 0x11a304c0)));
  /* 11a24cca lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 11a24ccd lea edi, [edi + ecx*4] */
  EDI = ((uint32_t)(EDI + ECX*4));
  /* 11a24cd0 jmp 0x11a24cd7 */
  goto L_11a24cd7;
L_11a24cd2:;
  /* 11a24cd2 mov edi, 0x11a2c908 */
  EDI = (0x11a2c908u);
L_11a24cd7:;
  /* 11a24cd7 mov cl, byte ptr [edi + 4] */
  CL = (r8((uint32_t)(EDI + 0x4)));
  /* 11a24cda pop edi */
  EDI = (pop32());
  /* 11a24cdb and cl, 0x82 */
  { uint32_t _r=(CL)&(0x82u); CL = (_r); fl_logic(_r,8); }
  /* 11a24cde cmp cl, 0x82 */
  { uint32_t _a=(CL),_b=(0x82u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24ce1 jne 0x11a24ce9 */
  if (!C.zf) goto L_11a24ce9;
  /* 11a24ce3 or dh, 0x20 */
  { uint32_t _r=(C.d.b.h)|(0x20u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a24ce6 mov dword ptr [esi + 0xc], edx */
  w32((uint32_t)(ESI + 0xc), (EDX));
L_11a24ce9:;
  /* 11a24ce9 cmp dword ptr [esi + 0x18], 0x200 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24cf0 jne 0x11a24d06 */
  if (!C.zf) goto L_11a24d06;
  /* 11a24cf2 mov ecx, dword ptr [esi + 0xc] */
  ECX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a24cf5 test cl, 8 */
  { uint32_t _r=(CL)&(0x8u); fl_logic(_r,8); }
  /* 11a24cf8 je 0x11a24d06 */
  if (C.zf) goto L_11a24d06;
  /* 11a24cfa test ch, 4 */
  { uint32_t _r=(C.c.b.h)&(0x4u); fl_logic(_r,8); }
  /* 11a24cfd jne 0x11a24d06 */
  if (!C.zf) goto L_11a24d06;
  /* 11a24cff mov dword ptr [esi + 0x18], 0x1000 */
  w32((uint32_t)(ESI + 0x18), (0x1000u));
L_11a24d06:;
  /* 11a24d06 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a24d08 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a24d09 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11a24d0c movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a24d0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a24d10 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a24d12 pop esi */
  ESI = (pop32());
  /* 11a24d13 ret  */
  ESPCHK(0x11a24c4eu, _esp0);
  ESP += 4; return;
L_11a24d14:;
  /* 11a24d14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a24d16 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a24d18 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a24d1b add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24d1e or dword ptr [esi + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(EAX); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11a24d21 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
L_11a24d25:;
  /* 11a24d25 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24d28 pop esi */
  ESI = (pop32());
  /* 11a24d29 ret  */
  ESPCHK(0x11a24c4eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004d2a @ 0x11a24d2a (101 bytes, 34 insns) */
void f_11a24d2a(void) {
  FTRACE(0x11a24d2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24d2a push esi */
  push32((uint32_t)(ESI));
  /* 11a24d2b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a24d2f cmp esi, dword ptr [0x11a305c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a305c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24d35 jae 0x11a24d77 */
  if (!C.cf) goto L_11a24d77;
  /* 11a24d37 mov ecx, esi */
  ECX = (ESI);
  /* 11a24d39 mov eax, esi */
  EAX = (ESI);
  /* 11a24d3b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a24d3e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24d41 mov ecx, dword ptr [ecx*4 + 0x11a304c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a24d48 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a24d4b test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a24d50 je 0x11a24d77 */
  if (C.zf) goto L_11a24d77;
  /* 11a24d52 push edi */
  push32((uint32_t)(EDI));
  /* 11a24d53 push esi */
  push32((uint32_t)(ESI));
  /* 11a24d54 call 0x11a279da */
  push32(0x11a24d59u); f_11a279da();
  /* 11a24d59 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a24d5d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a24d61 push esi */
  push32((uint32_t)(ESI));
  /* 11a24d62 call 0x11a24d8f */
  push32(0x11a24d67u); f_11a24d8f();
  /* 11a24d67 push esi */
  push32((uint32_t)(ESI));
  /* 11a24d68 mov edi, eax */
  EDI = (EAX);
  /* 11a24d6a call 0x11a27a39 */
  push32(0x11a24d6fu); f_11a27a39();
  /* 11a24d6f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24d72 mov eax, edi */
  EAX = (EDI);
  /* 11a24d74 pop edi */
  EDI = (pop32());
  /* 11a24d75 pop esi */
  ESI = (pop32());
  /* 11a24d76 ret  */
  ESPCHK(0x11a24d2au, _esp0);
  ESP += 4; return;
L_11a24d77:;
  /* 11a24d77 call 0x11a25452 */
  push32(0x11a24d7cu); f_11a25452();
  /* 11a24d7c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a24d82 call 0x11a2545b */
  push32(0x11a24d87u); f_11a2545b();
  /* 11a24d87 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a24d8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24d8d pop esi */
  ESI = (pop32());
  /* 11a24d8e ret  */
  ESPCHK(0x11a24d2au, _esp0);
  ESP += 4; return;
}

/* FUN_10004d8f @ 0x11a24d8f (473 bytes, 170 insns) */
void f_11a24d8f(void) {
  FTRACE(0x11a24d8fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24d8f push ebp */
  push32((uint32_t)(EBP));
  /* 11a24d90 mov ebp, esp */
  EBP = (ESP);
  /* 11a24d92 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a24d95 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a24d99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24d9d push ebx */
  push32((uint32_t)(EBX));
  /* 11a24d9e mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a24da1 push esi */
  push32((uint32_t)(ESI));
  /* 11a24da2 push edi */
  push32((uint32_t)(EDI));
  /* 11a24da3 mov edx, ebx */
  EDX = (EBX);
  /* 11a24da5 je 0x11a24f61 */
  if (C.zf) goto L_11a24f61;
  /* 11a24dab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a24dae mov ecx, eax */
  ECX = (EAX);
  /* 11a24db0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24db3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a24db6 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11a24db9 mov eax, dword ptr [ecx*4 + 0x11a304c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a24dc0 lea edi, [ecx*4 + 0x11a304c0] */
  EDI = ((uint32_t)(ECX*4 + 0x11a304c0));
  /* 11a24dc7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a24dca add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24dcc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a24dcf test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11a24dd2 jne 0x11a24f61 */
  if (!C.zf) goto L_11a24f61;
  /* 11a24dd8 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 11a24ddb je 0x11a24dfa */
  if (C.zf) goto L_11a24dfa;
  /* 11a24ddd mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 11a24de0 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24de2 je 0x11a24dfa */
  if (C.zf) goto L_11a24dfa;
  /* 11a24de4 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11a24de7 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11a24de9 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a24deb lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 11a24dee mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a24df5 mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_11a24dfa:;
  /* 11a24dfa lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a24dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a24dff push eax */
  push32((uint32_t)(EAX));
  /* 11a24e00 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a24e02 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a24e05 push edx */
  push32((uint32_t)(EDX));
  /* 11a24e06 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11a24e09 call dword ptr [0x11a2a0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0ac))), 0x11a24e0fu);
  /* 11a24e0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24e11 jne 0x11a24e4c */
  if (!C.zf) goto L_11a24e4c;
  /* 11a24e13 call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a24e19u);
  /* 11a24e19 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a24e1b pop esi */
  ESI = (pop32());
  /* 11a24e1c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24e1e jne 0x11a24e34 */
  if (!C.zf) goto L_11a24e34;
  /* 11a24e20 call 0x11a25452 */
  push32(0x11a24e25u); f_11a25452();
  /* 11a24e25 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a24e2b call 0x11a2545b */
  push32(0x11a24e30u); f_11a2545b();
  /* 11a24e30 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11a24e32 jmp 0x11a24e44 */
  goto L_11a24e44;
L_11a24e34:;
  /* 11a24e34 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24e37 je 0x11a24f61 */
  if (C.zf) goto L_11a24f61;
  /* 11a24e3d push eax */
  push32((uint32_t)(EAX));
  /* 11a24e3e call 0x11a253df */
  push32(0x11a24e43u); f_11a253df();
  /* 11a24e43 pop ecx */
  ECX = (pop32());
L_11a24e44:;
  /* 11a24e44 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a24e47 jmp 0x11a24f63 */
  goto L_11a24f63;
L_11a24e4c:;
  /* 11a24e4c mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a24e4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a24e51 add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a24e54 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11a24e58 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 11a24e5c test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11a24e5e je 0x11a24f5c */
  if (C.zf) goto L_11a24f5c;
  /* 11a24e64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a24e66 je 0x11a24e71 */
  if (C.zf) goto L_11a24e71;
  /* 11a24e68 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24e6b jne 0x11a24e71 */
  if (!C.zf) goto L_11a24e71;
  /* 11a24e6d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11a24e6f jmp 0x11a24e73 */
  goto L_11a24e73;
L_11a24e71:;
  /* 11a24e71 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_11a24e73:;
  /* 11a24e73 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a24e75 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a24e78 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a24e7b mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11a24e7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24e80 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24e82 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a24e85 jae 0x11a24f56 */
  if (!C.cf) goto L_11a24f56;
L_11a24e8b:;
  /* 11a24e8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a24e8e mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 11a24e90 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24e92 je 0x11a24f46 */
  if (C.zf) goto L_11a24f46;
  /* 11a24e98 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24e9a je 0x11a24ea7 */
  if (C.zf) goto L_11a24ea7;
  /* 11a24e9c mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11a24e9e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a24e9f inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a24ea2 jmp 0x11a24f38 */
  goto L_11a24f38;
L_11a24ea7:;
  /* 11a24ea7 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a24ea8 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24eab jae 0x11a24ec5 */
  if (!C.cf) goto L_11a24ec5;
  /* 11a24ead mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a24eb0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a24eb1 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24eb4 jne 0x11a24ebc */
  if (!C.zf) goto L_11a24ebc;
  /* 11a24eb6 add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a24eba jmp 0x11a24f1a */
  goto L_11a24f1a;
L_11a24ebc:;
  /* 11a24ebc mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11a24ebf inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a24ec0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11a24ec3 jmp 0x11a24f38 */
  goto L_11a24f38;
L_11a24ec5:;
  /* 11a24ec5 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a24ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a24eca push eax */
  push32((uint32_t)(EAX));
  /* 11a24ecb inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a24ece lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 11a24ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a24ed3 push eax */
  push32((uint32_t)(EAX));
  /* 11a24ed4 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a24ed6 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11a24ed9 call dword ptr [0x11a2a0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0ac))), 0x11a24edfu);
  /* 11a24edf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24ee1 jne 0x11a24eed */
  if (!C.zf) goto L_11a24eed;
  /* 11a24ee3 call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a24ee9u);
  /* 11a24ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a24eeb jne 0x11a24f34 */
  if (!C.zf) goto L_11a24f34;
L_11a24eed:;
  /* 11a24eed cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24ef1 je 0x11a24f34 */
  if (C.zf) goto L_11a24f34;
  /* 11a24ef3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a24ef5 test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 11a24efa je 0x11a24f0f */
  if (C.zf) goto L_11a24f0f;
  /* 11a24efc mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 11a24eff cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24f01 je 0x11a24f1a */
  if (C.zf) goto L_11a24f1a;
  /* 11a24f03 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11a24f06 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11a24f08 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a24f09 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 11a24f0d jmp 0x11a24f38 */
  goto L_11a24f38;
L_11a24f0f:;
  /* 11a24f0f cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24f12 jne 0x11a24f1f */
  if (!C.zf) goto L_11a24f1f;
  /* 11a24f14 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24f18 jne 0x11a24f1f */
  if (!C.zf) goto L_11a24f1f;
L_11a24f1a:;
  /* 11a24f1a mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 11a24f1d jmp 0x11a24f37 */
  goto L_11a24f37;
L_11a24f1f:;
  /* 11a24f1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a24f21 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a24f23 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a24f26 call 0x11a256d9 */
  push32(0x11a24f2bu); f_11a256d9();
  /* 11a24f2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24f2e cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a24f32 je 0x11a24f38 */
  if (C.zf) goto L_11a24f38;
L_11a24f34:;
  /* 11a24f34 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_11a24f37:;
  /* 11a24f37 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11a24f38:;
  /* 11a24f38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a24f3b cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24f3e jb 0x11a24e8b */
  if (C.cf) goto L_11a24e8b;
  /* 11a24f44 jmp 0x11a24f56 */
  goto L_11a24f56;
L_11a24f46:;
  /* 11a24f46 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11a24f48 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11a24f4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a24f4e test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11a24f50 jne 0x11a24f56 */
  if (!C.zf) goto L_11a24f56;
  /* 11a24f52 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11a24f54 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_11a24f56:;
  /* 11a24f56 sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a24f59 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_11a24f5c:;
  /* 11a24f5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a24f5f jmp 0x11a24f63 */
  goto L_11a24f63;
L_11a24f61:;
  /* 11a24f61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a24f63:;
  /* 11a24f63 pop edi */
  EDI = (pop32());
  /* 11a24f64 pop esi */
  ESI = (pop32());
  /* 11a24f65 pop ebx */
  EBX = (pop32());
  /* 11a24f66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a24f67 ret  */
  ESPCHK(0x11a24d8fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004f70 @ 0x11a24f70 (664 bytes, 258 insns) [15 switch table(s)] */
void f_11a24f70(void) {
  FTRACE(0x11a24f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a24f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a24f71 mov ebp, esp */
  EBP = (ESP);
  /* 11a24f73 push edi */
  push32((uint32_t)(EDI));
  /* 11a24f74 push esi */
  push32((uint32_t)(ESI));
  /* 11a24f75 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a24f78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a24f7b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a24f7e mov eax, ecx */
  EAX = (ECX);
  /* 11a24f80 mov edx, ecx */
  EDX = (ECX);
  /* 11a24f82 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24f84 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24f86 jbe 0x11a24f90 */
  if ((C.cf||C.zf)) goto L_11a24f90;
  /* 11a24f88 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24f8a jb 0x11a25108 */
  if (C.cf) goto L_11a25108;
L_11a24f90:;
  /* 11a24f90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a24f96 jne 0x11a24fac */
  if (!C.zf) goto L_11a24fac;
  /* 11a24f98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a24f9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a24f9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24fa1 jb 0x11a24fcc */
  if (C.cf) goto L_11a24fcc;
  /* 11a24fa3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a24fa5 jmp dword ptr [edx*4 + 0x11a250b8] */
  switch (EDX) {
    case 0: goto L_11a250c8;
    case 1: goto L_11a250d0;
    case 2: goto L_11a250dc;
    case 3: goto L_11a250f0;
    default: x86_unimpl("switch@0x11a24fa5 out of table"); return;
  }
L_11a24fac:;
  /* 11a24fac mov eax, edi */
  EAX = (EDI);
  /* 11a24fae mov edx, 3 */
  EDX = (0x3u);
  /* 11a24fb3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a24fb6 jb 0x11a24fc4 */
  if (C.cf) goto L_11a24fc4;
  /* 11a24fb8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a24fbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24fbd jmp dword ptr [eax*4 + 0x11a24fd0] */
  switch (EAX) {
    case 1: goto L_11a24fe0;
    case 2: goto L_11a2500c;
    case 3: goto L_11a25030;
    default: x86_unimpl("switch@0x11a24fbd out of table"); return;
  }
L_11a24fc4:;
  /* 11a24fc4 jmp dword ptr [ecx*4 + 0x11a250c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a250c8)))); return;
  /* 11a24fcb nop  */
  /* nop */
L_11a24fcc:;
  /* 11a24fcc jmp dword ptr [ecx*4 + 0x11a2504c] */
  switch (ECX) {
    case 0: goto L_11a250af;
    case 1: goto L_11a2509c;
    case 2: goto L_11a25094;
    case 3: goto L_11a2508c;
    case 4: goto L_11a25084;
    case 5: goto L_11a2507c;
    case 6: goto L_11a25074;
    case 7: goto L_11a2506c;
    default: x86_unimpl("switch@0x11a24fcc out of table"); return;
  }
  /* 11a24fd3 nop  */
  /* nop */
L_11a24fe0:;
  /* 11a24fe0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a24fe2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a24fe4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a24fe6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a24fe9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a24fec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a24fef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a24ff2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a24ff5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24ff8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a24ffb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a24ffe jb 0x11a24fcc */
  if (C.cf) goto L_11a24fcc;
  /* 11a25000 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a25002 jmp dword ptr [edx*4 + 0x11a250b8] */
  switch (EDX) {
    case 0: goto L_11a250c8;
    case 1: goto L_11a250d0;
    case 2: goto L_11a250dc;
    case 3: goto L_11a250f0;
    default: x86_unimpl("switch@0x11a25002 out of table"); return;
  }
  /* 11a25009 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a2500c:;
  /* 11a2500c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a2500e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a25010 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a25012 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a25015 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a25018 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a2501b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2501e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25021 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25024 jb 0x11a24fcc */
  if (C.cf) goto L_11a24fcc;
  /* 11a25026 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a25028 jmp dword ptr [edx*4 + 0x11a250b8] */
  switch (EDX) {
    case 0: goto L_11a250c8;
    case 1: goto L_11a250d0;
    case 2: goto L_11a250dc;
    case 3: goto L_11a250f0;
    default: x86_unimpl("switch@0x11a25028 out of table"); return;
  }
  /* 11a2502f nop  */
  /* nop */
L_11a25030:;
  /* 11a25030 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a25032 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a25034 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a25036 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a25037 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a2503a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a2503b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2503e jb 0x11a24fcc */
  if (C.cf) goto L_11a24fcc;
  /* 11a25040 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a25042 jmp dword ptr [edx*4 + 0x11a250b8] */
  switch (EDX) {
    case 0: goto L_11a250c8;
    case 1: goto L_11a250d0;
    case 2: goto L_11a250dc;
    case 3: goto L_11a250f0;
    default: x86_unimpl("switch@0x11a25042 out of table"); return;
  }
  /* 11a25049 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a2506c:;
  /* 11a2506c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a25070 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a25074:;
  /* 11a25074 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a25078 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a2507c:;
  /* 11a2507c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a25080 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a25084:;
  /* 11a25084 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a25088 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a2508c:;
  /* 11a2508c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a25090 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a25094:;
  /* 11a25094 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a25098 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a2509c:;
  /* 11a2509c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a250a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a250a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a250ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a250ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a250af:;
  /* 11a250af jmp dword ptr [edx*4 + 0x11a250b8] */
  switch (EDX) {
    case 0: goto L_11a250c8;
    case 1: goto L_11a250d0;
    case 2: goto L_11a250dc;
    case 3: goto L_11a250f0;
    default: x86_unimpl("switch@0x11a250af out of table"); return;
  }
  /* 11a250b6 mov edi, edi */
  EDI = (EDI);
L_11a250c8:;
  /* 11a250c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a250cb pop esi */
  ESI = (pop32());
  /* 11a250cc pop edi */
  EDI = (pop32());
  /* 11a250cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a250ce ret  */
  ESPCHK(0x11a24f70u, _esp0);
  ESP += 4; return;
  /* 11a250cf nop  */
  /* nop */
L_11a250d0:;
  /* 11a250d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a250d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a250d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a250d7 pop esi */
  ESI = (pop32());
  /* 11a250d8 pop edi */
  EDI = (pop32());
  /* 11a250d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a250da ret  */
  ESPCHK(0x11a24f70u, _esp0);
  ESP += 4; return;
  /* 11a250db nop  */
  /* nop */
L_11a250dc:;
  /* 11a250dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a250de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a250e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a250e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a250e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a250e9 pop esi */
  ESI = (pop32());
  /* 11a250ea pop edi */
  EDI = (pop32());
  /* 11a250eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a250ec ret  */
  ESPCHK(0x11a24f70u, _esp0);
  ESP += 4; return;
  /* 11a250ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a250f0:;
  /* 11a250f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a250f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a250f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a250f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a250fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a250fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a25100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a25103 pop esi */
  ESI = (pop32());
  /* 11a25104 pop edi */
  EDI = (pop32());
  /* 11a25105 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a25106 ret  */
  ESPCHK(0x11a24f70u, _esp0);
  ESP += 4; return;
  /* 11a25107 nop  */
  /* nop */
L_11a25108:;
  /* 11a25108 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a2510c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a25110 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a25116 jne 0x11a2513c */
  if (!C.zf) goto L_11a2513c;
  /* 11a25118 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a2511b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a2511e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25121 jb 0x11a25130 */
  if (C.cf) goto L_11a25130;
  /* 11a25123 std  */
  C.df=1;
  /* 11a25124 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a25126 cld  */
  C.df=0;
  /* 11a25127 jmp dword ptr [edx*4 + 0x11a25250] */
  switch (EDX) {
    case 0: goto L_11a25260;
    case 1: goto L_11a25268;
    case 2: goto L_11a25278;
    case 3: goto L_11a2528c;
    default: x86_unimpl("switch@0x11a25127 out of table"); return;
  }
  /* 11a2512e mov edi, edi */
  EDI = (EDI);
L_11a25130:;
  /* 11a25130 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a25132 jmp dword ptr [ecx*4 + 0x11a25200] */
  switch (ECX) {
    case 0: goto L_11a25247;
    default: x86_unimpl("switch@0x11a25132 out of table"); return;
  }
  /* 11a25139 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a2513c:;
  /* 11a2513c mov eax, edi */
  EAX = (EDI);
  /* 11a2513e mov edx, 3 */
  EDX = (0x3u);
  /* 11a25143 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25146 jb 0x11a25154 */
  if (C.cf) goto L_11a25154;
  /* 11a25148 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a2514b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2514d jmp dword ptr [eax*4 + 0x11a25158] */
  switch (EAX) {
    case 1: goto L_11a25168;
    case 2: goto L_11a25188;
    case 3: goto L_11a251b0;
    default: x86_unimpl("switch@0x11a2514d out of table"); return;
  }
L_11a25154:;
  /* 11a25154 jmp dword ptr [ecx*4 + 0x11a25250] */
  switch (ECX) {
    case 0: goto L_11a25260;
    case 1: goto L_11a25268;
    case 2: goto L_11a25278;
    case 3: goto L_11a2528c;
    default: x86_unimpl("switch@0x11a25154 out of table"); return;
  }
  /* 11a2515b nop  */
  /* nop */
L_11a25168:;
  /* 11a25168 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a2516b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a2516d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a25170 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a25171 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a25174 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a25175 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25178 jb 0x11a25130 */
  if (C.cf) goto L_11a25130;
  /* 11a2517a std  */
  C.df=1;
  /* 11a2517b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a2517d cld  */
  C.df=0;
  /* 11a2517e jmp dword ptr [edx*4 + 0x11a25250] */
  switch (EDX) {
    case 0: goto L_11a25260;
    case 1: goto L_11a25268;
    case 2: goto L_11a25278;
    case 3: goto L_11a2528c;
    default: x86_unimpl("switch@0x11a2517e out of table"); return;
  }
  /* 11a25185 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a25188:;
  /* 11a25188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a2518b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a2518d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a25190 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a25193 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a25196 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a25199 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2519c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2519f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a251a2 jb 0x11a25130 */
  if (C.cf) goto L_11a25130;
  /* 11a251a4 std  */
  C.df=1;
  /* 11a251a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a251a7 cld  */
  C.df=0;
  /* 11a251a8 jmp dword ptr [edx*4 + 0x11a25250] */
  switch (EDX) {
    case 0: goto L_11a25260;
    case 1: goto L_11a25268;
    case 2: goto L_11a25278;
    case 3: goto L_11a2528c;
    default: x86_unimpl("switch@0x11a251a8 out of table"); return;
  }
  /* 11a251af nop  */
  /* nop */
L_11a251b0:;
  /* 11a251b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a251b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a251b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a251b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a251bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a251be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a251c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a251c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a251c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a251ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a251cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a251d0 jb 0x11a25130 */
  if (C.cf) goto L_11a25130;
  /* 11a251d6 std  */
  C.df=1;
  /* 11a251d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a251d9 cld  */
  C.df=0;
  /* 11a251da jmp dword ptr [edx*4 + 0x11a25250] */
  switch (EDX) {
    case 0: goto L_11a25260;
    case 1: goto L_11a25268;
    case 2: goto L_11a25278;
    case 3: goto L_11a2528c;
    default: x86_unimpl("switch@0x11a251da out of table"); return;
  }
  /* 11a251e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a251e4 add al, 0x52 */
  { uint32_t _a=(AL),_b=(0x52u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a251e6 mov byte ptr [0xa2520c11], al */
  w8((uint32_t)(0xa2520c11), (AL));
  /* 11a251eb adc dword ptr [edx + edx*2], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + EDX*2))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a251ee mov byte ptr [0xa2521c11], al */
  w8((uint32_t)(0xa2521c11), (AL));
  /* 11a251f3 adc dword ptr [edx + edx*2], esp */
  { uint32_t _a=(r32((uint32_t)(EDX + EDX*2))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a251f6 mov byte ptr [0xa2522c11], al */
  w8((uint32_t)(0xa2522c11), (AL));
  /* 11a251fb adc dword ptr [edx + edx*2], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + EDX*2))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a25204 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a25208 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a2520c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a25210 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a25214 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a25218 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a2521c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a25220 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a25224 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a25228 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a2522c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a25230 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a25234 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a25238 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a2523c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a25243 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25245 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a25247:;
  /* 11a25247 jmp dword ptr [edx*4 + 0x11a25250] */
  switch (EDX) {
    case 0: goto L_11a25260;
    case 1: goto L_11a25268;
    case 2: goto L_11a25278;
    case 3: goto L_11a2528c;
    default: x86_unimpl("switch@0x11a25247 out of table"); return;
  }
  /* 11a2524e mov edi, edi */
  EDI = (EDI);
L_11a25260:;
  /* 11a25260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a25263 pop esi */
  ESI = (pop32());
  /* 11a25264 pop edi */
  EDI = (pop32());
  /* 11a25265 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a25266 ret  */
  ESPCHK(0x11a24f70u, _esp0);
  ESP += 4; return;
  /* 11a25267 nop  */
  /* nop */
L_11a25268:;
  /* 11a25268 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a2526b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a2526e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a25271 pop esi */
  ESI = (pop32());
  /* 11a25272 pop edi */
  EDI = (pop32());
  /* 11a25273 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a25274 ret  */
  ESPCHK(0x11a24f70u, _esp0);
  ESP += 4; return;
  /* 11a25275 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a25278:;
  /* 11a25278 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a2527b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a2527e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a25281 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a25284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a25287 pop esi */
  ESI = (pop32());
  /* 11a25288 pop edi */
  EDI = (pop32());
  /* 11a25289 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2528a ret  */
  ESPCHK(0x11a24f70u, _esp0);
  ESP += 4; return;
  /* 11a2528b nop  */
  /* nop */
L_11a2528c:;
  /* 11a2528c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a2528f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a25292 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a25295 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a25298 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a2529b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a2529e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a252a1 pop esi */
  ESI = (pop32());
  /* 11a252a2 pop edi */
  EDI = (pop32());
  /* 11a252a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a252a4 ret  */
  ESPCHK(0x11a24f70u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11a252a5 (18 bytes, 6 insns) */
void f_11a252a5(void) {
  FTRACE(0x11a252a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a252a5 push dword ptr [0x11a300c0] */
  push32((uint32_t)(r32((uint32_t)(0x11a300c0))));
  /* 11a252ab push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a252af call 0x11a252b7 */
  push32(0x11a252b4u); f_11a252b7();
  /* 11a252b4 pop ecx */
  ECX = (pop32());
  /* 11a252b5 pop ecx */
  ECX = (pop32());
  /* 11a252b6 ret  */
  ESPCHK(0x11a252a5u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11a252b7 (44 bytes, 16 insns) */
void f_11a252b7(void) {
  FTRACE(0x11a252b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a252b7 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a252bc ja 0x11a252e0 */
  if ((!C.cf&&!C.zf)) goto L_11a252e0;
L_11a252be:;
  /* 11a252be push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a252c2 call 0x11a252e3 */
  push32(0x11a252c7u); f_11a252e3();
  /* 11a252c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a252c9 pop ecx */
  ECX = (pop32());
  /* 11a252ca jne 0x11a252e2 */
  if (!C.zf) goto L_11a252e2;
  /* 11a252cc cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a252d0 je 0x11a252e2 */
  if (C.zf) goto L_11a252e2;
  /* 11a252d2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a252d6 call 0x11a27d22 */
  push32(0x11a252dbu); f_11a27d22();
  /* 11a252db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a252dd pop ecx */
  ECX = (pop32());
  /* 11a252de jne 0x11a252be */
  if (!C.zf) goto L_11a252be;
L_11a252e0:;
  /* 11a252e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a252e2:;
  /* 11a252e2 ret  */
  ESPCHK(0x11a252b7u, _esp0);
  ESP += 4; return;
}

/* FUN_100052e3 @ 0x11a252e3 (231 bytes, 81 insns) */
void f_11a252e3(void) {
  FTRACE(0x11a252e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a252e3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a252e4 mov ebp, esp */
  EBP = (ESP);
  /* 11a252e6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a252e8 push 0x11a2a1d0 */
  push32((uint32_t)(0x11a2a1d0u));
  /* 11a252ed push 0x11a274e4 */
  push32((uint32_t)(0x11a274e4u));
  /* 11a252f2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a252f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a252f9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a25300 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a25303 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25304 push esi */
  push32((uint32_t)(ESI));
  /* 11a25305 push edi */
  push32((uint32_t)(EDI));
  /* 11a25306 mov eax, dword ptr [0x11a304a8] */
  EAX = (r32((uint32_t)(0x11a304a8)));
  /* 11a2530b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2530e jne 0x11a25353 */
  if (!C.zf) goto L_11a25353;
  /* 11a25310 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a25313 cmp esi, dword ptr [0x11a304a0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a304a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25319 ja 0x11a253b2 */
  if ((!C.cf&&!C.zf)) goto L_11a253b2;
  /* 11a2531f push 9 */
  push32((uint32_t)(0x9u));
  /* 11a25321 call 0x11a27376 */
  push32(0x11a25326u); f_11a27376();
  /* 11a25326 pop ecx */
  ECX = (pop32());
  /* 11a25327 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a2532b push esi */
  push32((uint32_t)(ESI));
  /* 11a2532c call 0x11a26808 */
  push32(0x11a25331u); f_11a26808();
  /* 11a25331 pop ecx */
  ECX = (pop32());
  /* 11a25332 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a25335 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a25339 call 0x11a2534a */
  push32(0x11a2533eu); f_11a2534a();
  /* 11a2533e mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a25341 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25343 je 0x11a253b2 */
  if (C.zf) goto L_11a253b2;
  /* 11a25345 jmp 0x11a253d0 */
  jmp_ind(0x11a253d0u); return;
  /* 11a2534a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2534c call 0x11a273d7 */
  push32(0x11a25351u); f_11a273d7();
  /* 11a25351 pop ecx */
  ECX = (pop32());
  /* 11a25352 ret  */
  ESPCHK(0x11a252e3u, _esp0);
  ESP += 4; return;
L_11a25353:;
  /* 11a25353 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25356 jne 0x11a253b2 */
  if (!C.zf) goto L_11a253b2;
  /* 11a25358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a2535b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2535d je 0x11a25367 */
  if (C.zf) goto L_11a25367;
  /* 11a2535f lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11a25362 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a25365 jmp 0x11a2536a */
  goto L_11a2536a;
L_11a25367:;
  /* 11a25367 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a25369 pop esi */
  ESI = (pop32());
L_11a2536a:;
  /* 11a2536a mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11a2536d cmp esi, dword ptr [0x11a2e9ec] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a2e9ec))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25373 ja 0x11a253a3 */
  if ((!C.cf&&!C.zf)) goto L_11a253a3;
  /* 11a25375 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a25377 call 0x11a27376 */
  push32(0x11a2537cu); f_11a27376();
  /* 11a2537c pop ecx */
  ECX = (pop32());
  /* 11a2537d mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a25384 mov eax, esi */
  EAX = (ESI);
  /* 11a25386 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a25389 push eax */
  push32((uint32_t)(EAX));
  /* 11a2538a call 0x11a26fb5 */
  push32(0x11a2538fu); f_11a26fb5();
  /* 11a2538f pop ecx */
  ECX = (pop32());
  /* 11a25390 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a25393 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a25397 call 0x11a253a9 */
  push32(0x11a2539cu); f_11a253a9();
  /* 11a2539c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a2539f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a253a1 jne 0x11a253d0 */
  if (!C.zf) { jmp_ind(0x11a253d0u); return; }
L_11a253a3:;
  /* 11a253a3 push esi */
  push32((uint32_t)(ESI));
  /* 11a253a4 jmp 0x11a253c2 */
  goto L_11a253c2;
  /* 11a253a6 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a253a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a253ab call 0x11a273d7 */
  push32(0x11a253b0u); f_11a273d7();
  /* 11a253b0 pop ecx */
  ECX = (pop32());
  /* 11a253b1 ret  */
  ESPCHK(0x11a252e3u, _esp0);
  ESP += 4; return;
L_11a253b2:;
  /* 11a253b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a253b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a253b7 jne 0x11a253bc */
  if (!C.zf) goto L_11a253bc;
  /* 11a253b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a253bb pop eax */
  EAX = (pop32());
L_11a253bc:;
  /* 11a253bc add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a253bf and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11a253c1 push eax */
  push32((uint32_t)(EAX));
L_11a253c2:;
  /* 11a253c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a253c4 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
}

/* FUN_1000534a @ 0x11a2534a (9 bytes, 4 insns) */
void f_11a2534a(void) {
  FTRACE(0x11a2534au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2534a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a2534c call 0x11a273d7 */
  push32(0x11a25351u); f_11a273d7();
  /* 11a25351 pop ecx */
  ECX = (pop32());
  /* 11a25352 ret  */
  ESPCHK(0x11a2534au, _esp0);
  ESP += 4; return;
}

/* FUN_100053a9 @ 0x11a253a9 (9 bytes, 4 insns) */
void f_11a253a9(void) {
  FTRACE(0x11a253a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a253a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a253ab call 0x11a273d7 */
  push32(0x11a253b0u); f_11a273d7();
  /* 11a253b0 pop ecx */
  ECX = (pop32());
  /* 11a253b1 ret  */
  ESPCHK(0x11a253a9u, _esp0);
  ESP += 4; return;
}

/* FUN_100053df @ 0x11a253df (115 bytes, 37 insns) */
void f_11a253df(void) {
  FTRACE(0x11a253dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a253df push esi */
  push32((uint32_t)(ESI));
  /* 11a253e0 call 0x11a2545b */
  push32(0x11a253e5u); f_11a2545b();
  /* 11a253e5 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a253e9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a253eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a253ed mov eax, 0x11a2c7a0 */
  EAX = (0x11a2c7a0u);
L_11a253f2:;
  /* 11a253f2 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a253f4 je 0x11a25418 */
  if (C.zf) goto L_11a25418;
  /* 11a253f6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a253f9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a253fa cmp eax, 0x11a2c908 */
  { uint32_t _a=(EAX),_b=(0x11a2c908u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a253ff jl 0x11a253f2 */
  if ((C.sf!=C.of)) goto L_11a253f2;
  /* 11a25401 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25404 jb 0x11a25428 */
  if (C.cf) goto L_11a25428;
  /* 11a25406 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25409 ja 0x11a25428 */
  if ((!C.cf&&!C.zf)) goto L_11a25428;
  /* 11a2540b call 0x11a25452 */
  push32(0x11a25410u); f_11a25452();
  /* 11a25410 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11a25416 pop esi */
  ESI = (pop32());
  /* 11a25417 ret  */
  ESPCHK(0x11a253dfu, _esp0);
  ESP += 4; return;
L_11a25418:;
  /* 11a25418 call 0x11a25452 */
  push32(0x11a2541du); f_11a25452();
  /* 11a2541d mov ecx, dword ptr [esi*8 + 0x11a2c7a4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x11a2c7a4)));
  /* 11a25424 pop esi */
  ESI = (pop32());
  /* 11a25425 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a25427 ret  */
  ESPCHK(0x11a253dfu, _esp0);
  ESP += 4; return;
L_11a25428:;
  /* 11a25428 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2542e jb 0x11a25445 */
  if (C.cf) goto L_11a25445;
  /* 11a25430 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25436 ja 0x11a25445 */
  if ((!C.cf&&!C.zf)) goto L_11a25445;
  /* 11a25438 call 0x11a25452 */
  push32(0x11a2543du); f_11a25452();
  /* 11a2543d mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11a25443 pop esi */
  ESI = (pop32());
  /* 11a25444 ret  */
  ESPCHK(0x11a253dfu, _esp0);
  ESP += 4; return;
L_11a25445:;
  /* 11a25445 call 0x11a25452 */
  push32(0x11a2544au); f_11a25452();
  /* 11a2544a mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11a25450 pop esi */
  ESI = (pop32());
  /* 11a25451 ret  */
  ESPCHK(0x11a253dfu, _esp0);
  ESP += 4; return;
}

/* FUN_10005452 @ 0x11a25452 (9 bytes, 3 insns) */
void f_11a25452(void) {
  FTRACE(0x11a25452u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25452 call 0x11a25b27 */
  push32(0x11a25457u); f_11a25b27();
  /* 11a25457 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2545a ret  */
  ESPCHK(0x11a25452u, _esp0);
  ESP += 4; return;
}

/* FUN_1000545b @ 0x11a2545b (9 bytes, 3 insns) */
void f_11a2545b(void) {
  FTRACE(0x11a2545bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2545b call 0x11a25b27 */
  push32(0x11a25460u); f_11a25b27();
  /* 11a25460 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25463 ret  */
  ESPCHK(0x11a2545bu, _esp0);
  ESP += 4; return;
}

/* FUN_10005464 @ 0x11a25464 (444 bytes, 150 insns) */
void f_11a25464(void) {
  FTRACE(0x11a25464u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25464 push ebp */
  push32((uint32_t)(EBP));
  /* 11a25465 mov ebp, esp */
  EBP = (ESP);
  /* 11a25467 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2546a push ebx */
  push32((uint32_t)(EBX));
  /* 11a2546b push esi */
  push32((uint32_t)(ESI));
  /* 11a2546c push edi */
  push32((uint32_t)(EDI));
  /* 11a2546d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a25472 call 0x11a252a5 */
  push32(0x11a25477u); f_11a252a5();
  /* 11a25477 mov esi, eax */
  ESI = (EAX);
  /* 11a25479 pop ecx */
  ECX = (pop32());
  /* 11a2547a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a2547c jne 0x11a25486 */
  if (!C.zf) goto L_11a25486;
  /* 11a2547e push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11a25480 call 0x11a246b8 */
  push32(0x11a25485u); f_11a246b8();
  /* 11a25485 pop ecx */
  ECX = (pop32());
L_11a25486:;
  /* 11a25486 mov dword ptr [0x11a304c0], esi */
  w32((uint32_t)(0x11a304c0), (ESI));
  /* 11a2548c mov dword ptr [0x11a305c0], 0x20 */
  w32((uint32_t)(0x11a305c0), (0x20u));
  /* 11a25496 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11a2549c:;
  /* 11a2549c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2549e jae 0x11a254be */
  if (!C.cf) goto L_11a254be;
  /* 11a254a0 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a254a4 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a254a7 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a254ab mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11a254af mov eax, dword ptr [0x11a304c0] */
  EAX = (r32((uint32_t)(0x11a304c0)));
  /* 11a254b4 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a254b7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a254bc jmp 0x11a2549c */
  goto L_11a2549c;
L_11a254be:;
  /* 11a254be lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11a254c1 push eax */
  push32((uint32_t)(EAX));
  /* 11a254c2 call dword ptr [0x11a2a0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0c0))), 0x11a254c8u);
  /* 11a254c8 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a254cd je 0x11a255a4 */
  if (C.zf) goto L_11a255a4;
  /* 11a254d3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a254d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a254d8 je 0x11a255a4 */
  if (C.zf) goto L_11a255a4;
  /* 11a254de mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11a254e0 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11a254e3 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11a254e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a254e9 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11a254ee cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a254f0 jl 0x11a254f4 */
  if ((C.sf!=C.of)) goto L_11a254f4;
  /* 11a254f2 mov edi, eax */
  EDI = (EAX);
L_11a254f4:;
  /* 11a254f4 cmp dword ptr [0x11a305c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a305c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a254fa jge 0x11a25552 */
  if ((C.sf==C.of)) goto L_11a25552;
  /* 11a254fc mov esi, 0x11a304c4 */
  ESI = (0x11a304c4u);
L_11a25501:;
  /* 11a25501 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a25506 call 0x11a252a5 */
  push32(0x11a2550bu); f_11a252a5();
  /* 11a2550b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2550d pop ecx */
  ECX = (pop32());
  /* 11a2550e je 0x11a2554c */
  if (C.zf) goto L_11a2554c;
  /* 11a25510 add dword ptr [0x11a305c0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a305c0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11a305c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a25517 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a25519 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11a2551f:;
  /* 11a2551f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25521 jae 0x11a2553f */
  if (!C.cf) goto L_11a2553f;
  /* 11a25523 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a25527 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a2552a and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a2552e mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11a25532 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a25534 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25537 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2553d jmp 0x11a2551f */
  goto L_11a2551f;
L_11a2553f:;
  /* 11a2553f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25542 cmp dword ptr [0x11a305c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a305c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25548 jl 0x11a25501 */
  if ((C.sf!=C.of)) goto L_11a25501;
  /* 11a2554a jmp 0x11a25552 */
  goto L_11a25552;
L_11a2554c:;
  /* 11a2554c mov edi, dword ptr [0x11a305c0] */
  EDI = (r32((uint32_t)(0x11a305c0)));
L_11a25552:;
  /* 11a25552 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a25554 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a25556 jle 0x11a255a4 */
  if ((C.zf||C.sf!=C.of)) goto L_11a255a4;
L_11a25558:;
  /* 11a25558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a2555b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a2555d cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25560 je 0x11a2559a */
  if (C.zf) goto L_11a2559a;
  /* 11a25562 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11a25564 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a25566 je 0x11a2559a */
  if (C.zf) goto L_11a2559a;
  /* 11a25568 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a2556a jne 0x11a25577 */
  if (!C.zf) goto L_11a25577;
  /* 11a2556c push ecx */
  push32((uint32_t)(ECX));
  /* 11a2556d call dword ptr [0x11a2a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a004))), 0x11a25573u);
  /* 11a25573 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25575 je 0x11a2559a */
  if (C.zf) goto L_11a2559a;
L_11a25577:;
  /* 11a25577 mov ecx, esi */
  ECX = (ESI);
  /* 11a25579 mov eax, esi */
  EAX = (ESI);
  /* 11a2557b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a2557e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a25581 mov ecx, dword ptr [ecx*4 + 0x11a304c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a25588 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a2558b lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11a2558e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a25591 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11a25593 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a25595 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11a25597 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11a2559a:;
  /* 11a2559a add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a2559e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a2559f inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a255a0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a255a2 jl 0x11a25558 */
  if ((C.sf!=C.of)) goto L_11a25558;
L_11a255a4:;
  /* 11a255a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a255a6:;
  /* 11a255a6 mov ecx, dword ptr [0x11a304c0] */
  ECX = (r32((uint32_t)(0x11a304c0)));
  /* 11a255ac lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11a255af cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a255b3 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a255b6 jne 0x11a25605 */
  if (!C.zf) goto L_11a25605;
  /* 11a255b8 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a255ba mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11a255be jne 0x11a255c5 */
  if (!C.zf) goto L_11a255c5;
  /* 11a255c0 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11a255c2 pop eax */
  EAX = (pop32());
  /* 11a255c3 jmp 0x11a255cf */
  goto L_11a255cf;
L_11a255c5:;
  /* 11a255c5 mov eax, ebx */
  EAX = (EBX);
  /* 11a255c7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a255c8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a255ca sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a255cc add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a255cf:;
  /* 11a255cf push eax */
  push32((uint32_t)(EAX));
  /* 11a255d0 call dword ptr [0x11a2a000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a000))), 0x11a255d6u);
  /* 11a255d6 mov edi, eax */
  EDI = (EAX);
  /* 11a255d8 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a255db je 0x11a255f4 */
  if (C.zf) goto L_11a255f4;
  /* 11a255dd push edi */
  push32((uint32_t)(EDI));
  /* 11a255de call dword ptr [0x11a2a004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a004))), 0x11a255e4u);
  /* 11a255e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a255e6 je 0x11a255f4 */
  if (C.zf) goto L_11a255f4;
  /* 11a255e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a255ed mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a255ef cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a255f2 jne 0x11a255fa */
  if (!C.zf) goto L_11a255fa;
L_11a255f4:;
  /* 11a255f4 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a255f8 jmp 0x11a25609 */
  goto L_11a25609;
L_11a255fa:;
  /* 11a255fa cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a255fd jne 0x11a25609 */
  if (!C.zf) goto L_11a25609;
  /* 11a255ff or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a25603 jmp 0x11a25609 */
  goto L_11a25609;
L_11a25605:;
  /* 11a25605 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11a25609:;
  /* 11a25609 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a2560a cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2560d jl 0x11a255a6 */
  if ((C.sf!=C.of)) goto L_11a255a6;
  /* 11a2560f push dword ptr [0x11a305c0] */
  push32((uint32_t)(r32((uint32_t)(0x11a305c0))));
  /* 11a25615 call dword ptr [0x11a2a0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0b4))), 0x11a2561bu);
  /* 11a2561b pop edi */
  EDI = (pop32());
  /* 11a2561c pop esi */
  ESI = (pop32());
  /* 11a2561d pop ebx */
  EBX = (pop32());
  /* 11a2561e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2561f ret  */
  ESPCHK(0x11a25464u, _esp0);
  ESP += 4; return;
}

/* FUN_10005620 @ 0x11a25620 (84 bytes, 33 insns) */
void f_11a25620(void) {
  FTRACE(0x11a25620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25620 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25621 push esi */
  push32((uint32_t)(ESI));
  /* 11a25622 push edi */
  push32((uint32_t)(EDI));
  /* 11a25623 mov esi, 0x11a304c0 */
  ESI = (0x11a304c0u);
L_11a25628:;
  /* 11a25628 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a2562a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2562c je 0x11a25665 */
  if (C.zf) goto L_11a25665;
  /* 11a2562e mov edi, eax */
  EDI = (EAX);
  /* 11a25630 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25635 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25637 jae 0x11a2565a */
  if (!C.cf) goto L_11a2565a;
  /* 11a25639 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11a2563c:;
  /* 11a2563c cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25640 je 0x11a25649 */
  if (C.zf) goto L_11a25649;
  /* 11a25642 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25643 call dword ptr [0x11a2a0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0c4))), 0x11a25649u);
L_11a25649:;
  /* 11a25649 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a2564b add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2564e add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25653 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25656 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25658 jb 0x11a2563c */
  if (C.cf) goto L_11a2563c;
L_11a2565a:;
  /* 11a2565a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a2565c call 0x11a246eb */
  push32(0x11a25661u); f_11a246eb();
  /* 11a25661 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a25664 pop ecx */
  ECX = (pop32());
L_11a25665:;
  /* 11a25665 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25668 cmp esi, 0x11a305c0 */
  { uint32_t _a=(ESI),_b=(0x11a305c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2566e jl 0x11a25628 */
  if ((C.sf!=C.of)) goto L_11a25628;
  /* 11a25670 pop edi */
  EDI = (pop32());
  /* 11a25671 pop esi */
  ESI = (pop32());
  /* 11a25672 pop ebx */
  EBX = (pop32());
  /* 11a25673 ret  */
  ESPCHK(0x11a25620u, _esp0);
  ESP += 4; return;
}

/* FUN_10005674 @ 0x11a25674 (101 bytes, 34 insns) */
void f_11a25674(void) {
  FTRACE(0x11a25674u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25674 push esi */
  push32((uint32_t)(ESI));
  /* 11a25675 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a25679 cmp esi, dword ptr [0x11a305c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a305c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2567f jae 0x11a256c1 */
  if (!C.cf) goto L_11a256c1;
  /* 11a25681 mov ecx, esi */
  ECX = (ESI);
  /* 11a25683 mov eax, esi */
  EAX = (ESI);
  /* 11a25685 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a25688 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a2568b mov ecx, dword ptr [ecx*4 + 0x11a304c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a25692 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a25695 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11a2569a je 0x11a256c1 */
  if (C.zf) goto L_11a256c1;
  /* 11a2569c push edi */
  push32((uint32_t)(EDI));
  /* 11a2569d push esi */
  push32((uint32_t)(ESI));
  /* 11a2569e call 0x11a279da */
  push32(0x11a256a3u); f_11a279da();
  /* 11a256a3 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a256a7 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a256ab push esi */
  push32((uint32_t)(ESI));
  /* 11a256ac call 0x11a256d9 */
  push32(0x11a256b1u); f_11a256d9();
  /* 11a256b1 push esi */
  push32((uint32_t)(ESI));
  /* 11a256b2 mov edi, eax */
  EDI = (EAX);
  /* 11a256b4 call 0x11a27a39 */
  push32(0x11a256b9u); f_11a27a39();
  /* 11a256b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a256bc mov eax, edi */
  EAX = (EDI);
  /* 11a256be pop edi */
  EDI = (pop32());
  /* 11a256bf pop esi */
  ESI = (pop32());
  /* 11a256c0 ret  */
  ESPCHK(0x11a25674u, _esp0);
  ESP += 4; return;
L_11a256c1:;
  /* 11a256c1 call 0x11a25452 */
  push32(0x11a256c6u); f_11a25452();
  /* 11a256c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a256cc call 0x11a2545b */
  push32(0x11a256d1u); f_11a2545b();
  /* 11a256d1 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a256d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a256d7 pop esi */
  ESI = (pop32());
  /* 11a256d8 ret  */
  ESPCHK(0x11a25674u, _esp0);
  ESP += 4; return;
}

/* FUN_100056d9 @ 0x11a256d9 (115 bytes, 41 insns) */
void f_11a256d9(void) {
  FTRACE(0x11a256d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a256d9 push esi */
  push32((uint32_t)(ESI));
  /* 11a256da mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a256de push edi */
  push32((uint32_t)(EDI));
  /* 11a256df push esi */
  push32((uint32_t)(ESI));
  /* 11a256e0 call 0x11a27998 */
  push32(0x11a256e5u); f_11a27998();
  /* 11a256e5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a256e8 pop ecx */
  ECX = (pop32());
  /* 11a256e9 jne 0x11a256f8 */
  if (!C.zf) goto L_11a256f8;
  /* 11a256eb call 0x11a25452 */
  push32(0x11a256f0u); f_11a25452();
  /* 11a256f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a256f6 jmp 0x11a25725 */
  goto L_11a25725;
L_11a256f8:;
  /* 11a256f8 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a256fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a256fe push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a25702 push eax */
  push32((uint32_t)(EAX));
  /* 11a25703 call dword ptr [0x11a2a0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0c8))), 0x11a25709u);
  /* 11a25709 mov edi, eax */
  EDI = (EAX);
  /* 11a2570b cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2570e jne 0x11a25718 */
  if (!C.zf) goto L_11a25718;
  /* 11a25710 call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a25716u);
  /* 11a25716 jmp 0x11a2571a */
  goto L_11a2571a;
L_11a25718:;
  /* 11a25718 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a2571a:;
  /* 11a2571a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2571c je 0x11a2572a */
  if (C.zf) goto L_11a2572a;
  /* 11a2571e push eax */
  push32((uint32_t)(EAX));
  /* 11a2571f call 0x11a253df */
  push32(0x11a25724u); f_11a253df();
  /* 11a25724 pop ecx */
  ECX = (pop32());
L_11a25725:;
  /* 11a25725 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a25728 jmp 0x11a25749 */
  goto L_11a25749;
L_11a2572a:;
  /* 11a2572a mov ecx, esi */
  ECX = (ESI);
  /* 11a2572c and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11a2572f sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a25732 mov eax, esi */
  EAX = (ESI);
  /* 11a25734 mov ecx, dword ptr [ecx*4 + 0x11a304c0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a304c0)));
  /* 11a2573b lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a2573e and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a25743 lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 11a25747 mov eax, edi */
  EAX = (EDI);
L_11a25749:;
  /* 11a25749 pop edi */
  EDI = (pop32());
  /* 11a2574a pop esi */
  ESI = (pop32());
  /* 11a2574b ret  */
  ESPCHK(0x11a256d9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000574c @ 0x11a2574c (368 bytes, 124 insns) */
void f_11a2574c(void) {
  FTRACE(0x11a2574cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2574c push ebp */
  push32((uint32_t)(EBP));
  /* 11a2574d mov ebp, esp */
  EBP = (ESP);
  /* 11a2574f push ecx */
  push32((uint32_t)(ECX));
  /* 11a25750 push ecx */
  push32((uint32_t)(ECX));
  /* 11a25751 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25752 push esi */
  push32((uint32_t)(ESI));
  /* 11a25753 mov esi, dword ptr [0x11a300c8] */
  ESI = (r32((uint32_t)(0x11a300c8)));
  /* 11a25759 push edi */
  push32((uint32_t)(EDI));
  /* 11a2575a mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a2575d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a2575f mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 11a25762 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a25765 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11a25767 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25769 je 0x11a25785 */
  if (C.zf) goto L_11a25785;
  /* 11a2576b cmp al, 0x72 */
  { uint32_t _a=(AL),_b=(0x72u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2576d je 0x11a2577e */
  if (C.zf) goto L_11a2577e;
  /* 11a2576f cmp al, 0x77 */
  { uint32_t _a=(AL),_b=(0x77u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25771 jne 0x11a25899 */
  if (!C.zf) goto L_11a25899;
  /* 11a25777 mov ecx, 0x301 */
  ECX = (0x301u);
  /* 11a2577c jmp 0x11a2578a */
  goto L_11a2578a;
L_11a2577e:;
  /* 11a2577e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a25780 or esi, 1 */
  { uint32_t _r=(ESI)|(0x1u); ESI = (_r); fl_logic(_r,32); }
  /* 11a25783 jmp 0x11a2578d */
  goto L_11a2578d;
L_11a25785:;
  /* 11a25785 mov ecx, 0x109 */
  ECX = (0x109u);
L_11a2578a:;
  /* 11a2578a or esi, 2 */
  { uint32_t _r=(ESI)|(0x2u); ESI = (_r); fl_logic(_r,32); }
L_11a2578d:;
  /* 11a2578d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2578f pop edx */
  EDX = (pop32());
L_11a25790:;
  /* 11a25790 mov al, byte ptr [edi + 1] */
  AL = (r8((uint32_t)(EDI + 0x1)));
  /* 11a25793 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a25794 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25796 je 0x11a2587f */
  if (C.zf) goto L_11a2587f;
  /* 11a2579c cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2579e je 0x11a2587f */
  if (C.zf) goto L_11a2587f;
  /* 11a257a4 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11a257a7 cmp eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a257aa jg 0x11a2581e */
  if ((!C.zf&&C.sf==C.of)) goto L_11a2581e;
  /* 11a257ac je 0x11a2580e */
  if (C.zf) goto L_11a2580e;
  /* 11a257ae sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a257b1 je 0x11a257f8 */
  if (C.zf) goto L_11a257f8;
  /* 11a257b3 sub eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a257b6 je 0x11a257ee */
  if (C.zf) goto L_11a257ee;
  /* 11a257b8 sub eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a257bb je 0x11a257d9 */
  if (C.zf) goto L_11a257d9;
  /* 11a257bd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a257be jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a257c4 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a257c7 jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a257cd mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a257d4 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11a257d7 jmp 0x11a25790 */
  goto L_11a25790;
L_11a257d9:;
  /* 11a257d9 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a257dc jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a257e2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a257e9 or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11a257ec jmp 0x11a25790 */
  goto L_11a25790;
L_11a257ee:;
  /* 11a257ee test cl, 0x40 */
  { uint32_t _r=(CL)&(0x40u); fl_logic(_r,8); }
  /* 11a257f1 jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a257f3 or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11a257f6 jmp 0x11a25790 */
  goto L_11a25790;
L_11a257f8:;
  /* 11a257f8 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11a257fb jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a257fd and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11a25800 and esi, 0xfffffffc */
  { uint32_t _r=(ESI)&(0xfffffffcu); ESI = (_r); fl_logic(_r,32); }
  /* 11a25803 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a25806 or esi, 0x80 */
  { uint32_t _r=(ESI)|(0x80u); ESI = (_r); fl_logic(_r,32); }
  /* 11a2580c jmp 0x11a25790 */
  goto L_11a25790;
L_11a2580e:;
  /* 11a2580e mov eax, 0x1000 */
  EAX = (0x1000u);
  /* 11a25813 test eax, ecx */
  { uint32_t _r=(EAX)&(ECX); fl_logic(_r,32); }
  /* 11a25815 jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a25817 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a25819 jmp 0x11a25790 */
  goto L_11a25790;
L_11a2581e:;
  /* 11a2581e sub eax, 0x62 */
  { uint32_t _a=(EAX),_b=(0x62u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a25821 je 0x11a2586b */
  if (C.zf) goto L_11a2586b;
  /* 11a25823 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a25824 je 0x11a25854 */
  if (C.zf) goto L_11a25854;
  /* 11a25826 sub eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a25829 je 0x11a2583d */
  if (C.zf) goto L_11a2583d;
  /* 11a2582b sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2582e jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a25830 test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 11a25833 jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a25835 or ch, 0x40 */
  { uint32_t _r=(C.c.b.h)|(0x40u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a25838 jmp 0x11a25790 */
  goto L_11a25790;
L_11a2583d:;
  /* 11a2583d cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25840 jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a25842 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a25849 and esi, 0xffffbfff */
  { uint32_t _r=(ESI)&(0xffffbfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a2584f jmp 0x11a25790 */
  goto L_11a25790;
L_11a25854:;
  /* 11a25854 cmp dword ptr [ebp - 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25857 jne 0x11a25870 */
  if (!C.zf) goto L_11a25870;
  /* 11a25859 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a25860 or esi, 0x4000 */
  { uint32_t _r=(ESI)|(0x4000u); ESI = (_r); fl_logic(_r,32); }
  /* 11a25866 jmp 0x11a25790 */
  goto L_11a25790;
L_11a2586b:;
  /* 11a2586b test ch, 0xc0 */
  { uint32_t _r=(C.c.b.h)&(0xc0u); fl_logic(_r,8); }
  /* 11a2586e je 0x11a25877 */
  if (C.zf) goto L_11a25877;
L_11a25870:;
  /* 11a25870 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a25872 jmp 0x11a25790 */
  goto L_11a25790;
L_11a25877:;
  /* 11a25877 or ch, 0x80 */
  { uint32_t _r=(C.c.b.h)|(0x80u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a2587a jmp 0x11a25790 */
  goto L_11a25790;
L_11a2587f:;
  /* 11a2587f push 0x1a4 */
  push32((uint32_t)(0x1a4u));
  /* 11a25884 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a25887 push ecx */
  push32((uint32_t)(ECX));
  /* 11a25888 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a2588b call 0x11a27d3d */
  push32(0x11a25890u); f_11a27d3d();
  /* 11a25890 mov ecx, eax */
  ECX = (EAX);
  /* 11a25892 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25895 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25897 jge 0x11a2589d */
  if ((C.sf==C.of)) goto L_11a2589d;
L_11a25899:;
  /* 11a25899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a2589b jmp 0x11a258b7 */
  goto L_11a258b7;
L_11a2589d:;
  /* 11a2589d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a258a0 inc dword ptr [0x11a2ff08] */
  { uint32_t _r=(r32((uint32_t)(0x11a2ff08)))+1; w32((uint32_t)(0x11a2ff08), (_r)); fl_inc(_r,32); }
  /* 11a258a6 mov dword ptr [eax + 0xc], esi */
  w32((uint32_t)(EAX + 0xc), (ESI));
  /* 11a258a9 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 11a258ac mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 11a258ae mov dword ptr [eax + 8], ebx */
  w32((uint32_t)(EAX + 0x8), (EBX));
  /* 11a258b1 mov dword ptr [eax + 0x1c], ebx */
  w32((uint32_t)(EAX + 0x1c), (EBX));
  /* 11a258b4 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
L_11a258b7:;
  /* 11a258b7 pop edi */
  EDI = (pop32());
  /* 11a258b8 pop esi */
  ESI = (pop32());
  /* 11a258b9 pop ebx */
  EBX = (pop32());
  /* 11a258ba leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a258bb ret  */
  ESPCHK(0x11a2574cu, _esp0);
  ESP += 4; return;
}

/* FUN_100058bc @ 0x11a258bc (200 bytes, 73 insns) */
void f_11a258bc(void) {
  FTRACE(0x11a258bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a258bc push ebx */
  push32((uint32_t)(EBX));
  /* 11a258bd push esi */
  push32((uint32_t)(ESI));
  /* 11a258be push edi */
  push32((uint32_t)(EDI));
  /* 11a258bf push 2 */
  push32((uint32_t)(0x2u));
  /* 11a258c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a258c3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a258c5 call 0x11a27376 */
  push32(0x11a258cau); f_11a27376();
  /* 11a258ca xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a258cc cmp dword ptr [0x11a315e0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a315e0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a258d2 pop ecx */
  ECX = (pop32());
  /* 11a258d3 jle 0x11a25976 */
  if ((C.zf||C.sf!=C.of)) goto L_11a25976;
L_11a258d9:;
  /* 11a258d9 mov eax, dword ptr [0x11a305c4] */
  EAX = (r32((uint32_t)(0x11a305c4)));
  /* 11a258de mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11a258e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a258e3 je 0x11a2591c */
  if (C.zf) goto L_11a2591c;
  /* 11a258e5 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11a258e9 jne 0x11a2590c */
  if (!C.zf) goto L_11a2590c;
  /* 11a258eb push eax */
  push32((uint32_t)(EAX));
  /* 11a258ec push esi */
  push32((uint32_t)(ESI));
  /* 11a258ed call 0x11a24997 */
  push32(0x11a258f2u); f_11a24997();
  /* 11a258f2 pop ecx */
  ECX = (pop32());
  /* 11a258f3 pop ecx */
  ECX = (pop32());
  /* 11a258f4 mov ecx, dword ptr [0x11a305c4] */
  ECX = (r32((uint32_t)(0x11a305c4)));
  /* 11a258fa mov eax, dword ptr [ecx + esi*4] */
  EAX = (r32((uint32_t)(ECX + ESI*4)));
  /* 11a258fd test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11a25901 je 0x11a25917 */
  if (C.zf) goto L_11a25917;
  /* 11a25903 push eax */
  push32((uint32_t)(EAX));
  /* 11a25904 push esi */
  push32((uint32_t)(ESI));
  /* 11a25905 call 0x11a249e9 */
  push32(0x11a2590au); f_11a249e9();
  /* 11a2590a pop ecx */
  ECX = (pop32());
  /* 11a2590b pop ecx */
  ECX = (pop32());
L_11a2590c:;
  /* 11a2590c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a2590d cmp esi, dword ptr [0x11a315e0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a315e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25913 jl 0x11a258d9 */
  if ((C.sf!=C.of)) goto L_11a258d9;
  /* 11a25915 jmp 0x11a25976 */
  goto L_11a25976;
L_11a25917:;
  /* 11a25917 mov edi, dword ptr [ecx + esi*4] */
  EDI = (r32((uint32_t)(ECX + ESI*4)));
  /* 11a2591a jmp 0x11a25960 */
  goto L_11a25960;
L_11a2591c:;
  /* 11a2591c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11a2591e shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11a25921 call 0x11a252a5 */
  push32(0x11a25926u); f_11a252a5();
  /* 11a25926 pop ecx */
  ECX = (pop32());
  /* 11a25927 mov ecx, dword ptr [0x11a305c4] */
  ECX = (r32((uint32_t)(0x11a305c4)));
  /* 11a2592d mov dword ptr [esi + ecx], eax */
  w32((uint32_t)(ESI + ECX*1), (EAX));
  /* 11a25930 mov eax, dword ptr [0x11a305c4] */
  EAX = (r32((uint32_t)(0x11a305c4)));
  /* 11a25935 mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 11a25938 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2593a je 0x11a25976 */
  if (C.zf) goto L_11a25976;
  /* 11a2593c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2593f push eax */
  push32((uint32_t)(EAX));
  /* 11a25940 call dword ptr [0x11a2a0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0cc))), 0x11a25946u);
  /* 11a25946 mov eax, dword ptr [0x11a305c4] */
  EAX = (r32((uint32_t)(0x11a305c4)));
  /* 11a2594b mov eax, dword ptr [esi + eax] */
  EAX = (r32((uint32_t)(ESI + EAX*1)));
  /* 11a2594e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25951 push eax */
  push32((uint32_t)(EAX));
  /* 11a25952 call dword ptr [0x11a2a09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a09c))), 0x11a25958u);
  /* 11a25958 mov eax, dword ptr [0x11a305c4] */
  EAX = (r32((uint32_t)(0x11a305c4)));
  /* 11a2595d mov edi, dword ptr [esi + eax] */
  EDI = (r32((uint32_t)(ESI + EAX*1)));
L_11a25960:;
  /* 11a25960 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25962 je 0x11a25976 */
  if (C.zf) goto L_11a25976;
  /* 11a25964 or dword ptr [edi + 0x10], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI + 0x10)))|(0xffffffffu); w32((uint32_t)(EDI + 0x10), (_r)); fl_logic(_r,32); }
  /* 11a25968 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
  /* 11a2596b mov dword ptr [edi + 0xc], ebx */
  w32((uint32_t)(EDI + 0xc), (EBX));
  /* 11a2596e mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11a25971 mov dword ptr [edi], ebx */
  w32((uint32_t)(EDI), (EBX));
  /* 11a25973 mov dword ptr [edi + 0x1c], ebx */
  w32((uint32_t)(EDI + 0x1c), (EBX));
L_11a25976:;
  /* 11a25976 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a25978 call 0x11a273d7 */
  push32(0x11a2597du); f_11a273d7();
  /* 11a2597d pop ecx */
  ECX = (pop32());
  /* 11a2597e mov eax, edi */
  EAX = (EDI);
  /* 11a25980 pop edi */
  EDI = (pop32());
  /* 11a25981 pop esi */
  ESI = (pop32());
  /* 11a25982 pop ebx */
  EBX = (pop32());
  /* 11a25983 ret  */
  ESPCHK(0x11a258bcu, _esp0);
  ESP += 4; return;
}

/* FUN_10005984 @ 0x11a25984 (45 bytes, 12 insns) */
void f_11a25984(void) {
  FTRACE(0x11a25984u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25984 mov eax, dword ptr [0x11a304bc] */
  EAX = (r32((uint32_t)(0x11a304bc)));
  /* 11a25989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2598b je 0x11a2598f */
  if (C.zf) goto L_11a2598f;
  /* 11a2598d call eax */
  call_ind((uint32_t)(EAX), 0x11a2598fu);
L_11a2598f:;
  /* 11a2598f push 0x11a2c04c */
  push32((uint32_t)(0x11a2c04cu));
  /* 11a25994 push 0x11a2c040 */
  push32((uint32_t)(0x11a2c040u));
  /* 11a25999 call 0x11a25a88 */
  push32(0x11a2599eu); f_11a25a88();
  /* 11a2599e push 0x11a2c03c */
  push32((uint32_t)(0x11a2c03cu));
  /* 11a259a3 push 0x11a2c000 */
  push32((uint32_t)(0x11a2c000u));
  /* 11a259a8 call 0x11a25a88 */
  push32(0x11a259adu); f_11a25a88();
  /* 11a259ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a259b0 ret  */
  ESPCHK(0x11a25984u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11a259b1 (17 bytes, 6 insns) */
void f_11a259b1(void) {
  FTRACE(0x11a259b1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a259b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a259b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a259b5 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a259b9 call 0x11a259d1 */
  push32(0x11a259beu); f_11a259d1();
  /* 11a259be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a259c1 ret  */
  ESPCHK(0x11a259b1u, _esp0);
  ESP += 4; return;
}

/* FUN_100059c2 @ 0x11a259c2 (15 bytes, 6 insns) */
void f_11a259c2(void) {
  FTRACE(0x11a259c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a259c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a259c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a259c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a259c8 call 0x11a259d1 */
  push32(0x11a259cdu); f_11a259d1();
  /* 11a259cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a259d0 ret  */
  ESPCHK(0x11a259c2u, _esp0);
  ESP += 4; return;
}

/* FUN_100059d1 @ 0x11a259d1 (163 bytes, 53 insns) */
void f_11a259d1(void) {
  FTRACE(0x11a259d1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a259d1 push edi */
  push32((uint32_t)(EDI));
  /* 11a259d2 call 0x11a25a76 */
  push32(0x11a259d7u); f_11a25a76();
  /* 11a259d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a259d9 pop edi */
  EDI = (pop32());
  /* 11a259da cmp dword ptr [0x11a2ff4c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a2ff4c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a259e0 jne 0x11a259f3 */
  if (!C.zf) goto L_11a259f3;
  /* 11a259e2 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a259e6 call dword ptr [0x11a2a0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0d4))), 0x11a259ecu);
  /* 11a259ec push eax */
  push32((uint32_t)(EAX));
  /* 11a259ed call dword ptr [0x11a2a0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0d0))), 0x11a259f3u);
L_11a259f3:;
  /* 11a259f3 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a259f8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a259f9 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a259fd mov dword ptr [0x11a2ff48], edi */
  w32((uint32_t)(0x11a2ff48), (EDI));
  /* 11a25a03 mov byte ptr [0x11a2ff44], bl */
  w8((uint32_t)(0x11a2ff44), (BL));
  /* 11a25a09 jne 0x11a25a47 */
  if (!C.zf) goto L_11a25a47;
  /* 11a25a0b mov eax, dword ptr [0x11a304b8] */
  EAX = (r32((uint32_t)(0x11a304b8)));
  /* 11a25a10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25a12 je 0x11a25a36 */
  if (C.zf) goto L_11a25a36;
  /* 11a25a14 mov ecx, dword ptr [0x11a304b4] */
  ECX = (r32((uint32_t)(0x11a304b4)));
  /* 11a25a1a push esi */
  push32((uint32_t)(ESI));
  /* 11a25a1b lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11a25a1e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25a20 jb 0x11a25a35 */
  if (C.cf) goto L_11a25a35;
L_11a25a22:;
  /* 11a25a22 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a25a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25a26 je 0x11a25a2a */
  if (C.zf) goto L_11a25a2a;
  /* 11a25a28 call eax */
  call_ind((uint32_t)(EAX), 0x11a25a2au);
L_11a25a2a:;
  /* 11a25a2a sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a25a2d cmp esi, dword ptr [0x11a304b8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a304b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25a33 jae 0x11a25a22 */
  if (!C.cf) goto L_11a25a22;
L_11a25a35:;
  /* 11a25a35 pop esi */
  ESI = (pop32());
L_11a25a36:;
  /* 11a25a36 push 0x11a2c058 */
  push32((uint32_t)(0x11a2c058u));
  /* 11a25a3b push 0x11a2c050 */
  push32((uint32_t)(0x11a2c050u));
  /* 11a25a40 call 0x11a25a88 */
  push32(0x11a25a45u); f_11a25a88();
  /* 11a25a45 pop ecx */
  ECX = (pop32());
  /* 11a25a46 pop ecx */
  ECX = (pop32());
L_11a25a47:;
  /* 11a25a47 push 0x11a2c060 */
  push32((uint32_t)(0x11a2c060u));
  /* 11a25a4c push 0x11a2c05c */
  push32((uint32_t)(0x11a2c05cu));
  /* 11a25a51 call 0x11a25a88 */
  push32(0x11a25a56u); f_11a25a88();
  /* 11a25a56 pop ecx */
  ECX = (pop32());
  /* 11a25a57 pop ecx */
  ECX = (pop32());
  /* 11a25a58 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a25a5a pop ebx */
  EBX = (pop32());
  /* 11a25a5b je 0x11a25a64 */
  if (C.zf) goto L_11a25a64;
  /* 11a25a5d call 0x11a25a7f */
  push32(0x11a25a62u); f_11a25a7f();
  /* 11a25a62 pop edi */
  EDI = (pop32());
  /* 11a25a63 ret  */
  ESPCHK(0x11a259d1u, _esp0);
  ESP += 4; return;
L_11a25a64:;
  /* 11a25a64 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a25a68 mov dword ptr [0x11a2ff4c], edi */
  w32((uint32_t)(0x11a2ff4c), (EDI));
  /* 11a25a6e call dword ptr [0x11a2a0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0b8))), 0x11a25a74u);
  /* 11a25a74 pop edi */
  EDI = (pop32());
  /* 11a25a75 ret  */
  ESPCHK(0x11a259d1u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a76 @ 0x11a25a76 (9 bytes, 4 insns) */
void f_11a25a76(void) {
  FTRACE(0x11a25a76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25a76 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a25a78 call 0x11a27376 */
  push32(0x11a25a7du); f_11a27376();
  /* 11a25a7d pop ecx */
  ECX = (pop32());
  /* 11a25a7e ret  */
  ESPCHK(0x11a25a76u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a7f @ 0x11a25a7f (9 bytes, 4 insns) */
void f_11a25a7f(void) {
  FTRACE(0x11a25a7fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25a7f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a25a81 call 0x11a273d7 */
  push32(0x11a25a86u); f_11a273d7();
  /* 11a25a86 pop ecx */
  ECX = (pop32());
  /* 11a25a87 ret  */
  ESPCHK(0x11a25a7fu, _esp0);
  ESP += 4; return;
}

/* FUN_10005a88 @ 0x11a25a88 (26 bytes, 12 insns) */
void f_11a25a88(void) {
  FTRACE(0x11a25a88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25a88 push esi */
  push32((uint32_t)(ESI));
  /* 11a25a89 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11a25a8d:;
  /* 11a25a8d cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25a91 jae 0x11a25aa0 */
  if (!C.cf) goto L_11a25aa0;
  /* 11a25a93 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a25a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25a97 je 0x11a25a9b */
  if (C.zf) goto L_11a25a9b;
  /* 11a25a99 call eax */
  call_ind((uint32_t)(EAX), 0x11a25a9bu);
L_11a25a9b:;
  /* 11a25a9b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25a9e jmp 0x11a25a8d */
  goto L_11a25a8d;
L_11a25aa0:;
  /* 11a25aa0 pop esi */
  ESI = (pop32());
  /* 11a25aa1 ret  */
  ESPCHK(0x11a25a88u, _esp0);
  ESP += 4; return;
}

/* FUN_10005aa2 @ 0x11a25aa2 (84 bytes, 32 insns) */
void f_11a25aa2(void) {
  FTRACE(0x11a25aa2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25aa2 push esi */
  push32((uint32_t)(ESI));
  /* 11a25aa3 call 0x11a272e1 */
  push32(0x11a25aa8u); f_11a272e1();
  /* 11a25aa8 call dword ptr [0x11a2a0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0e0))), 0x11a25aaeu);
  /* 11a25aae cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25ab1 mov dword ptr [0x11a2c92c], eax */
  w32((uint32_t)(0x11a2c92c), (EAX));
  /* 11a25ab6 je 0x11a25af2 */
  if (C.zf) goto L_11a25af2;
  /* 11a25ab8 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a25aba push 1 */
  push32((uint32_t)(0x1u));
  /* 11a25abc call 0x11a275bc */
  push32(0x11a25ac1u); f_11a275bc();
  /* 11a25ac1 mov esi, eax */
  ESI = (EAX);
  /* 11a25ac3 pop ecx */
  ECX = (pop32());
  /* 11a25ac4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25ac6 pop ecx */
  ECX = (pop32());
  /* 11a25ac7 je 0x11a25af2 */
  if (C.zf) goto L_11a25af2;
  /* 11a25ac9 push esi */
  push32((uint32_t)(ESI));
  /* 11a25aca push dword ptr [0x11a2c92c] */
  push32((uint32_t)(r32((uint32_t)(0x11a2c92c))));
  /* 11a25ad0 call dword ptr [0x11a2a0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0dc))), 0x11a25ad6u);
  /* 11a25ad6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25ad8 je 0x11a25af2 */
  if (C.zf) goto L_11a25af2;
  /* 11a25ada push esi */
  push32((uint32_t)(ESI));
  /* 11a25adb call 0x11a25b14 */
  push32(0x11a25ae0u); f_11a25b14();
  /* 11a25ae0 pop ecx */
  ECX = (pop32());
  /* 11a25ae1 call dword ptr [0x11a2a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0d8))), 0x11a25ae7u);
  /* 11a25ae7 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a25aeb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a25aed mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a25aef pop eax */
  EAX = (pop32());
  /* 11a25af0 pop esi */
  ESI = (pop32());
  /* 11a25af1 ret  */
  ESPCHK(0x11a25aa2u, _esp0);
  ESP += 4; return;
L_11a25af2:;
  /* 11a25af2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a25af4 pop esi */
  ESI = (pop32());
  /* 11a25af5 ret  */
  ESPCHK(0x11a25aa2u, _esp0);
  ESP += 4; return;
}

/* FUN_10005af6 @ 0x11a25af6 (30 bytes, 8 insns) */
void f_11a25af6(void) {
  FTRACE(0x11a25af6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25af6 call 0x11a2730a */
  push32(0x11a25afbu); f_11a2730a();
  /* 11a25afb mov eax, dword ptr [0x11a2c92c] */
  EAX = (r32((uint32_t)(0x11a2c92c)));
  /* 11a25b00 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25b03 je 0x11a25b13 */
  if (C.zf) goto L_11a25b13;
  /* 11a25b05 push eax */
  push32((uint32_t)(EAX));
  /* 11a25b06 call dword ptr [0x11a2a08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a08c))), 0x11a25b0cu);
  /* 11a25b0c or dword ptr [0x11a2c92c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a2c92c)))|(0xffffffffu); w32((uint32_t)(0x11a2c92c), (_r)); fl_logic(_r,32); }
L_11a25b13:;
  /* 11a25b13 ret  */
  ESPCHK(0x11a25af6u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b14 @ 0x11a25b14 (19 bytes, 4 insns) */
void f_11a25b14(void) {
  FTRACE(0x11a25b14u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25b14 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a25b18 mov dword ptr [eax + 0x50], 0x11a2eac0 */
  w32((uint32_t)(EAX + 0x50), (0x11a2eac0u));
  /* 11a25b1f mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11a25b26 ret  */
  ESPCHK(0x11a25b14u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b27 @ 0x11a25b27 (103 bytes, 38 insns) */
void f_11a25b27(void) {
  FTRACE(0x11a25b27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25b27 push esi */
  push32((uint32_t)(ESI));
  /* 11a25b28 push edi */
  push32((uint32_t)(EDI));
  /* 11a25b29 call dword ptr [0x11a2a0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0a4))), 0x11a25b2fu);
  /* 11a25b2f push dword ptr [0x11a2c92c] */
  push32((uint32_t)(r32((uint32_t)(0x11a2c92c))));
  /* 11a25b35 mov edi, eax */
  EDI = (EAX);
  /* 11a25b37 call dword ptr [0x11a2a0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0bc))), 0x11a25b3du);
  /* 11a25b3d mov esi, eax */
  ESI = (EAX);
  /* 11a25b3f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25b41 jne 0x11a25b82 */
  if (!C.zf) goto L_11a25b82;
  /* 11a25b43 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a25b45 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a25b47 call 0x11a275bc */
  push32(0x11a25b4cu); f_11a275bc();
  /* 11a25b4c mov esi, eax */
  ESI = (EAX);
  /* 11a25b4e pop ecx */
  ECX = (pop32());
  /* 11a25b4f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25b51 pop ecx */
  ECX = (pop32());
  /* 11a25b52 je 0x11a25b7a */
  if (C.zf) goto L_11a25b7a;
  /* 11a25b54 push esi */
  push32((uint32_t)(ESI));
  /* 11a25b55 push dword ptr [0x11a2c92c] */
  push32((uint32_t)(r32((uint32_t)(0x11a2c92c))));
  /* 11a25b5b call dword ptr [0x11a2a0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0dc))), 0x11a25b61u);
  /* 11a25b61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25b63 je 0x11a25b7a */
  if (C.zf) goto L_11a25b7a;
  /* 11a25b65 push esi */
  push32((uint32_t)(ESI));
  /* 11a25b66 call 0x11a25b14 */
  push32(0x11a25b6bu); f_11a25b14();
  /* 11a25b6b pop ecx */
  ECX = (pop32());
  /* 11a25b6c call dword ptr [0x11a2a0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0d8))), 0x11a25b72u);
  /* 11a25b72 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a25b76 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a25b78 jmp 0x11a25b82 */
  goto L_11a25b82;
L_11a25b7a:;
  /* 11a25b7a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a25b7c call 0x11a246b8 */
  push32(0x11a25b81u); f_11a246b8();
  /* 11a25b81 pop ecx */
  ECX = (pop32());
L_11a25b82:;
  /* 11a25b82 push edi */
  push32((uint32_t)(EDI));
  /* 11a25b83 call dword ptr [0x11a2a088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a088))), 0x11a25b89u);
  /* 11a25b89 mov eax, esi */
  EAX = (ESI);
  /* 11a25b8b pop edi */
  EDI = (pop32());
  /* 11a25b8c pop esi */
  ESI = (pop32());
  /* 11a25b8d ret  */
  ESPCHK(0x11a25b27u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b8e @ 0x11a25b8e (160 bytes, 62 insns) */
void f_11a25b8e(void) {
  FTRACE(0x11a25b8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25b8e mov eax, dword ptr [0x11a2c92c] */
  EAX = (r32((uint32_t)(0x11a2c92c)));
  /* 11a25b93 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25b96 je 0x11a25c2d */
  if (C.zf) goto L_11a25c2d;
  /* 11a25b9c push esi */
  push32((uint32_t)(ESI));
  /* 11a25b9d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a25ba1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25ba3 jne 0x11a25bb2 */
  if (!C.zf) goto L_11a25bb2;
  /* 11a25ba5 push eax */
  push32((uint32_t)(EAX));
  /* 11a25ba6 call dword ptr [0x11a2a0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0bc))), 0x11a25bacu);
  /* 11a25bac mov esi, eax */
  ESI = (EAX);
  /* 11a25bae test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25bb0 je 0x11a25c1e */
  if (C.zf) goto L_11a25c1e;
L_11a25bb2:;
  /* 11a25bb2 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11a25bb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25bb7 je 0x11a25bc0 */
  if (C.zf) goto L_11a25bc0;
  /* 11a25bb9 push eax */
  push32((uint32_t)(EAX));
  /* 11a25bba call 0x11a246eb */
  push32(0x11a25bbfu); f_11a246eb();
  /* 11a25bbf pop ecx */
  ECX = (pop32());
L_11a25bc0:;
  /* 11a25bc0 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11a25bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25bc5 je 0x11a25bce */
  if (C.zf) goto L_11a25bce;
  /* 11a25bc7 push eax */
  push32((uint32_t)(EAX));
  /* 11a25bc8 call 0x11a246eb */
  push32(0x11a25bcdu); f_11a246eb();
  /* 11a25bcd pop ecx */
  ECX = (pop32());
L_11a25bce:;
  /* 11a25bce mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11a25bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25bd3 je 0x11a25bdc */
  if (C.zf) goto L_11a25bdc;
  /* 11a25bd5 push eax */
  push32((uint32_t)(EAX));
  /* 11a25bd6 call 0x11a246eb */
  push32(0x11a25bdbu); f_11a246eb();
  /* 11a25bdb pop ecx */
  ECX = (pop32());
L_11a25bdc:;
  /* 11a25bdc mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11a25bdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25be1 je 0x11a25bea */
  if (C.zf) goto L_11a25bea;
  /* 11a25be3 push eax */
  push32((uint32_t)(EAX));
  /* 11a25be4 call 0x11a246eb */
  push32(0x11a25be9u); f_11a246eb();
  /* 11a25be9 pop ecx */
  ECX = (pop32());
L_11a25bea:;
  /* 11a25bea mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11a25bed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25bef je 0x11a25bf8 */
  if (C.zf) goto L_11a25bf8;
  /* 11a25bf1 push eax */
  push32((uint32_t)(EAX));
  /* 11a25bf2 call 0x11a246eb */
  push32(0x11a25bf7u); f_11a246eb();
  /* 11a25bf7 pop ecx */
  ECX = (pop32());
L_11a25bf8:;
  /* 11a25bf8 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11a25bfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25bfd je 0x11a25c06 */
  if (C.zf) goto L_11a25c06;
  /* 11a25bff push eax */
  push32((uint32_t)(EAX));
  /* 11a25c00 call 0x11a246eb */
  push32(0x11a25c05u); f_11a246eb();
  /* 11a25c05 pop ecx */
  ECX = (pop32());
L_11a25c06:;
  /* 11a25c06 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11a25c09 cmp eax, 0x11a2eac0 */
  { uint32_t _a=(EAX),_b=(0x11a2eac0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25c0e je 0x11a25c17 */
  if (C.zf) goto L_11a25c17;
  /* 11a25c10 push eax */
  push32((uint32_t)(EAX));
  /* 11a25c11 call 0x11a246eb */
  push32(0x11a25c16u); f_11a246eb();
  /* 11a25c16 pop ecx */
  ECX = (pop32());
L_11a25c17:;
  /* 11a25c17 push esi */
  push32((uint32_t)(ESI));
  /* 11a25c18 call 0x11a246eb */
  push32(0x11a25c1du); f_11a246eb();
  /* 11a25c1d pop ecx */
  ECX = (pop32());
L_11a25c1e:;
  /* 11a25c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a25c20 push dword ptr [0x11a2c92c] */
  push32((uint32_t)(r32((uint32_t)(0x11a2c92c))));
  /* 11a25c26 call dword ptr [0x11a2a0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0dc))), 0x11a25c2cu);
  /* 11a25c2c pop esi */
  ESI = (pop32());
L_11a25c2d:;
  /* 11a25c2d ret  */
  ESPCHK(0x11a25b8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005c2e @ 0x11a25c2e (185 bytes, 71 insns) */
void f_11a25c2e(void) {
  FTRACE(0x11a25c2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25c2e push ebx */
  push32((uint32_t)(EBX));
  /* 11a25c2f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a25c31 cmp dword ptr [0x11a304b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a304b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25c37 push esi */
  push32((uint32_t)(ESI));
  /* 11a25c38 push edi */
  push32((uint32_t)(EDI));
  /* 11a25c39 jne 0x11a25c40 */
  if (!C.zf) goto L_11a25c40;
  /* 11a25c3b call 0x11a28553 */
  push32(0x11a25c40u); f_11a28553();
L_11a25c40:;
  /* 11a25c40 mov esi, dword ptr [0x11a2fef8] */
  ESI = (r32((uint32_t)(0x11a2fef8)));
  /* 11a25c46 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a25c48:;
  /* 11a25c48 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a25c4a cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25c4c je 0x11a25c60 */
  if (C.zf) goto L_11a25c60;
  /* 11a25c4e cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25c50 je 0x11a25c53 */
  if (C.zf) goto L_11a25c53;
  /* 11a25c52 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a25c53:;
  /* 11a25c53 push esi */
  push32((uint32_t)(ESI));
  /* 11a25c54 call 0x11a28100 */
  push32(0x11a25c59u); f_11a28100();
  /* 11a25c59 pop ecx */
  ECX = (pop32());
  /* 11a25c5a lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11a25c5e jmp 0x11a25c48 */
  goto L_11a25c48;
L_11a25c60:;
  /* 11a25c60 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11a25c67 push eax */
  push32((uint32_t)(EAX));
  /* 11a25c68 call 0x11a252a5 */
  push32(0x11a25c6du); f_11a252a5();
  /* 11a25c6d mov esi, eax */
  ESI = (EAX);
  /* 11a25c6f pop ecx */
  ECX = (pop32());
  /* 11a25c70 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25c72 mov dword ptr [0x11a2ff2c], esi */
  w32((uint32_t)(0x11a2ff2c), (ESI));
  /* 11a25c78 jne 0x11a25c82 */
  if (!C.zf) goto L_11a25c82;
  /* 11a25c7a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a25c7c call 0x11a246b8 */
  push32(0x11a25c81u); f_11a246b8();
  /* 11a25c81 pop ecx */
  ECX = (pop32());
L_11a25c82:;
  /* 11a25c82 mov edi, dword ptr [0x11a2fef8] */
  EDI = (r32((uint32_t)(0x11a2fef8)));
  /* 11a25c88 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25c8a je 0x11a25cc5 */
  if (C.zf) goto L_11a25cc5;
  /* 11a25c8c push ebp */
  push32((uint32_t)(EBP));
L_11a25c8d:;
  /* 11a25c8d push edi */
  push32((uint32_t)(EDI));
  /* 11a25c8e call 0x11a28100 */
  push32(0x11a25c93u); f_11a28100();
  /* 11a25c93 mov ebp, eax */
  EBP = (EAX);
  /* 11a25c95 pop ecx */
  ECX = (pop32());
  /* 11a25c96 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a25c97 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25c9a je 0x11a25cbe */
  if (C.zf) goto L_11a25cbe;
  /* 11a25c9c push ebp */
  push32((uint32_t)(EBP));
  /* 11a25c9d call 0x11a252a5 */
  push32(0x11a25ca2u); f_11a252a5();
  /* 11a25ca2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25ca4 pop ecx */
  ECX = (pop32());
  /* 11a25ca5 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a25ca7 jne 0x11a25cb1 */
  if (!C.zf) goto L_11a25cb1;
  /* 11a25ca9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a25cab call 0x11a246b8 */
  push32(0x11a25cb0u); f_11a246b8();
  /* 11a25cb0 pop ecx */
  ECX = (pop32());
L_11a25cb1:;
  /* 11a25cb1 push edi */
  push32((uint32_t)(EDI));
  /* 11a25cb2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a25cb4 call 0x11a28010 */
  push32(0x11a25cb9u); f_11a28010();
  /* 11a25cb9 pop ecx */
  ECX = (pop32());
  /* 11a25cba add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25cbd pop ecx */
  ECX = (pop32());
L_11a25cbe:;
  /* 11a25cbe add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25cc0 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25cc2 jne 0x11a25c8d */
  if (!C.zf) goto L_11a25c8d;
  /* 11a25cc4 pop ebp */
  EBP = (pop32());
L_11a25cc5:;
  /* 11a25cc5 push dword ptr [0x11a2fef8] */
  push32((uint32_t)(r32((uint32_t)(0x11a2fef8))));
  /* 11a25ccb call 0x11a246eb */
  push32(0x11a25cd0u); f_11a246eb();
  /* 11a25cd0 pop ecx */
  ECX = (pop32());
  /* 11a25cd1 mov dword ptr [0x11a2fef8], ebx */
  w32((uint32_t)(0x11a2fef8), (EBX));
  /* 11a25cd7 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11a25cd9 pop edi */
  EDI = (pop32());
  /* 11a25cda pop esi */
  ESI = (pop32());
  /* 11a25cdb mov dword ptr [0x11a304ac], 1 */
  w32((uint32_t)(0x11a304ac), (0x1u));
  /* 11a25ce5 pop ebx */
  EBX = (pop32());
  /* 11a25ce6 ret  */
  ESPCHK(0x11a25c2eu, _esp0);
  ESP += 4; return;
}

/* FUN_10005ce7 @ 0x11a25ce7 (153 bytes, 62 insns) */
void f_11a25ce7(void) {
  FTRACE(0x11a25ce7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25ce7 push ebp */
  push32((uint32_t)(EBP));
  /* 11a25ce8 mov ebp, esp */
  EBP = (ESP);
  /* 11a25cea push ecx */
  push32((uint32_t)(ECX));
  /* 11a25ceb push ecx */
  push32((uint32_t)(ECX));
  /* 11a25cec push ebx */
  push32((uint32_t)(EBX));
  /* 11a25ced xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a25cef cmp dword ptr [0x11a304b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a304b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25cf5 push esi */
  push32((uint32_t)(ESI));
  /* 11a25cf6 push edi */
  push32((uint32_t)(EDI));
  /* 11a25cf7 jne 0x11a25cfe */
  if (!C.zf) goto L_11a25cfe;
  /* 11a25cf9 call 0x11a28553 */
  push32(0x11a25cfeu); f_11a28553();
L_11a25cfe:;
  /* 11a25cfe mov esi, 0x11a2ff50 */
  ESI = (0x11a2ff50u);
  /* 11a25d03 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a25d08 push esi */
  push32((uint32_t)(ESI));
  /* 11a25d09 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25d0a call dword ptr [0x11a2a080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a080))), 0x11a25d10u);
  /* 11a25d10 mov eax, dword ptr [0x11a315e4] */
  EAX = (r32((uint32_t)(0x11a315e4)));
  /* 11a25d15 mov dword ptr [0x11a2ff3c], esi */
  w32((uint32_t)(0x11a2ff3c), (ESI));
  /* 11a25d1b mov edi, esi */
  EDI = (ESI);
  /* 11a25d1d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25d1f je 0x11a25d23 */
  if (C.zf) goto L_11a25d23;
  /* 11a25d21 mov edi, eax */
  EDI = (EAX);
L_11a25d23:;
  /* 11a25d23 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a25d26 push eax */
  push32((uint32_t)(EAX));
  /* 11a25d27 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a25d2a push eax */
  push32((uint32_t)(EAX));
  /* 11a25d2b push ebx */
  push32((uint32_t)(EBX));
  /* 11a25d2c push ebx */
  push32((uint32_t)(EBX));
  /* 11a25d2d push edi */
  push32((uint32_t)(EDI));
  /* 11a25d2e call 0x11a25d80 */
  push32(0x11a25d33u); f_11a25d80();
  /* 11a25d33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a25d36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a25d39 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11a25d3c push eax */
  push32((uint32_t)(EAX));
  /* 11a25d3d call 0x11a252a5 */
  push32(0x11a25d42u); f_11a252a5();
  /* 11a25d42 mov esi, eax */
  ESI = (EAX);
  /* 11a25d44 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25d47 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25d49 jne 0x11a25d53 */
  if (!C.zf) goto L_11a25d53;
  /* 11a25d4b push 8 */
  push32((uint32_t)(0x8u));
  /* 11a25d4d call 0x11a246b8 */
  push32(0x11a25d52u); f_11a246b8();
  /* 11a25d52 pop ecx */
  ECX = (pop32());
L_11a25d53:;
  /* 11a25d53 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a25d56 push eax */
  push32((uint32_t)(EAX));
  /* 11a25d57 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a25d5a push eax */
  push32((uint32_t)(EAX));
  /* 11a25d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a25d5e lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11a25d61 push eax */
  push32((uint32_t)(EAX));
  /* 11a25d62 push esi */
  push32((uint32_t)(ESI));
  /* 11a25d63 push edi */
  push32((uint32_t)(EDI));
  /* 11a25d64 call 0x11a25d80 */
  push32(0x11a25d69u); f_11a25d80();
  /* 11a25d69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a25d6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25d6f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a25d70 mov dword ptr [0x11a2ff24], esi */
  w32((uint32_t)(0x11a2ff24), (ESI));
  /* 11a25d76 pop edi */
  EDI = (pop32());
  /* 11a25d77 pop esi */
  ESI = (pop32());
  /* 11a25d78 mov dword ptr [0x11a2ff20], eax */
  w32((uint32_t)(0x11a2ff20), (EAX));
  /* 11a25d7d pop ebx */
  EBX = (pop32());
  /* 11a25d7e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a25d7f ret  */
  ESPCHK(0x11a25ce7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d80 @ 0x11a25d80 (436 bytes, 187 insns) */
void f_11a25d80(void) {
  FTRACE(0x11a25d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11a25d81 mov ebp, esp */
  EBP = (ESP);
  /* 11a25d83 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a25d86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a25d89 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25d8a push esi */
  push32((uint32_t)(ESI));
  /* 11a25d8b and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a25d8e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a25d91 push edi */
  push32((uint32_t)(EDI));
  /* 11a25d92 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a25d95 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11a25d9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a25d9e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a25da0 je 0x11a25daa */
  if (C.zf) goto L_11a25daa;
  /* 11a25da2 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a25da4 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25da7 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a25daa:;
  /* 11a25daa cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25dad jne 0x11a25df3 */
  if (!C.zf) goto L_11a25df3;
L_11a25daf:;
  /* 11a25daf mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a25db2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25db3 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25db6 je 0x11a25de1 */
  if (C.zf) goto L_11a25de1;
  /* 11a25db8 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a25dba je 0x11a25de1 */
  if (C.zf) goto L_11a25de1;
  /* 11a25dbc movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a25dbf test byte ptr [edx + 0x11a30381], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a30381)))&(0x4u); fl_logic(_r,8); }
  /* 11a25dc6 je 0x11a25dd4 */
  if (C.zf) goto L_11a25dd4;
  /* 11a25dc8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a25dca test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25dcc je 0x11a25dd4 */
  if (C.zf) goto L_11a25dd4;
  /* 11a25dce mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a25dd0 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a25dd2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a25dd3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a25dd4:;
  /* 11a25dd4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a25dd6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25dd8 je 0x11a25daf */
  if (C.zf) goto L_11a25daf;
  /* 11a25dda mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a25ddc mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a25dde inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a25ddf jmp 0x11a25daf */
  goto L_11a25daf;
L_11a25de1:;
  /* 11a25de1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a25de3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25de5 je 0x11a25deb */
  if (C.zf) goto L_11a25deb;
  /* 11a25de7 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a25dea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a25deb:;
  /* 11a25deb cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25dee jne 0x11a25e36 */
  if (!C.zf) goto L_11a25e36;
  /* 11a25df0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25df1 jmp 0x11a25e36 */
  goto L_11a25e36;
L_11a25df3:;
  /* 11a25df3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a25df5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25df7 je 0x11a25dfe */
  if (C.zf) goto L_11a25dfe;
  /* 11a25df9 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a25dfb mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a25dfd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a25dfe:;
  /* 11a25dfe mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a25e00 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25e01 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a25e04 test byte ptr [ebx + 0x11a30381], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a30381)))&(0x4u); fl_logic(_r,8); }
  /* 11a25e0b je 0x11a25e19 */
  if (C.zf) goto L_11a25e19;
  /* 11a25e0d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a25e0f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25e11 je 0x11a25e18 */
  if (C.zf) goto L_11a25e18;
  /* 11a25e13 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a25e15 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11a25e17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a25e18:;
  /* 11a25e18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a25e19:;
  /* 11a25e19 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25e1c je 0x11a25e27 */
  if (C.zf) goto L_11a25e27;
  /* 11a25e1e test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a25e20 je 0x11a25e2b */
  if (C.zf) goto L_11a25e2b;
  /* 11a25e22 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25e25 jne 0x11a25df3 */
  if (!C.zf) goto L_11a25df3;
L_11a25e27:;
  /* 11a25e27 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a25e29 jne 0x11a25e2e */
  if (!C.zf) goto L_11a25e2e;
L_11a25e2b:;
  /* 11a25e2b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a25e2c jmp 0x11a25e36 */
  goto L_11a25e36;
L_11a25e2e:;
  /* 11a25e2e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25e30 je 0x11a25e36 */
  if (C.zf) goto L_11a25e36;
  /* 11a25e32 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11a25e36:;
  /* 11a25e36 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11a25e3a:;
  /* 11a25e3a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25e3d je 0x11a25f23 */
  if (C.zf) goto L_11a25f23;
L_11a25e43:;
  /* 11a25e43 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a25e45 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25e48 je 0x11a25e4f */
  if (C.zf) goto L_11a25e4f;
  /* 11a25e4a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25e4d jne 0x11a25e52 */
  if (!C.zf) goto L_11a25e52;
L_11a25e4f:;
  /* 11a25e4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25e50 jmp 0x11a25e43 */
  goto L_11a25e43;
L_11a25e52:;
  /* 11a25e52 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25e55 je 0x11a25f23 */
  if (C.zf) goto L_11a25f23;
  /* 11a25e5b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a25e5d je 0x11a25e67 */
  if (C.zf) goto L_11a25e67;
  /* 11a25e5f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a25e61 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a25e64 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a25e67:;
  /* 11a25e67 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a25e6a inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11a25e6c:;
  /* 11a25e6c mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11a25e73 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a25e75:;
  /* 11a25e75 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25e78 jne 0x11a25e7e */
  if (!C.zf) goto L_11a25e7e;
  /* 11a25e7a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25e7b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a25e7c jmp 0x11a25e75 */
  goto L_11a25e75;
L_11a25e7e:;
  /* 11a25e7e cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25e81 jne 0x11a25eaf */
  if (!C.zf) goto L_11a25eaf;
  /* 11a25e83 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11a25e86 jne 0x11a25ead */
  if (!C.zf) goto L_11a25ead;
  /* 11a25e88 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a25e8a cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25e8d je 0x11a25e9c */
  if (C.zf) goto L_11a25e9c;
  /* 11a25e8f cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25e93 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11a25e96 jne 0x11a25e9c */
  if (!C.zf) goto L_11a25e9c;
  /* 11a25e98 mov eax, edx */
  EAX = (EDX);
  /* 11a25e9a jmp 0x11a25e9f */
  goto L_11a25e9f;
L_11a25e9c:;
  /* 11a25e9c mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11a25e9f:;
  /* 11a25e9f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a25ea2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a25ea4 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25ea7 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a25eaa mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11a25ead:;
  /* 11a25ead shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11a25eaf:;
  /* 11a25eaf mov edx, ebx */
  EDX = (EBX);
  /* 11a25eb1 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a25eb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a25eb4 je 0x11a25ec4 */
  if (C.zf) goto L_11a25ec4;
  /* 11a25eb6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11a25eb7:;
  /* 11a25eb7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25eb9 je 0x11a25ebf */
  if (C.zf) goto L_11a25ebf;
  /* 11a25ebb mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11a25ebe inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a25ebf:;
  /* 11a25ebf inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a25ec1 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a25ec2 jne 0x11a25eb7 */
  if (!C.zf) goto L_11a25eb7;
L_11a25ec4:;
  /* 11a25ec4 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a25ec6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a25ec8 je 0x11a25f14 */
  if (C.zf) goto L_11a25f14;
  /* 11a25eca cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25ece jne 0x11a25eda */
  if (!C.zf) goto L_11a25eda;
  /* 11a25ed0 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25ed3 je 0x11a25f14 */
  if (C.zf) goto L_11a25f14;
  /* 11a25ed5 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a25ed8 je 0x11a25f14 */
  if (C.zf) goto L_11a25f14;
L_11a25eda:;
  /* 11a25eda cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25ede je 0x11a25f0e */
  if (C.zf) goto L_11a25f0e;
  /* 11a25ee0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25ee2 je 0x11a25efd */
  if (C.zf) goto L_11a25efd;
  /* 11a25ee4 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a25ee7 test byte ptr [ebx + 0x11a30381], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a30381)))&(0x4u); fl_logic(_r,8); }
  /* 11a25eee je 0x11a25ef6 */
  if (C.zf) goto L_11a25ef6;
  /* 11a25ef0 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a25ef2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a25ef3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25ef4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a25ef6:;
  /* 11a25ef6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a25ef8 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a25efa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a25efb jmp 0x11a25f0c */
  goto L_11a25f0c;
L_11a25efd:;
  /* 11a25efd movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a25f00 test byte ptr [edx + 0x11a30381], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a30381)))&(0x4u); fl_logic(_r,8); }
  /* 11a25f07 je 0x11a25f0c */
  if (C.zf) goto L_11a25f0c;
  /* 11a25f09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25f0a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a25f0c:;
  /* 11a25f0c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a25f0e:;
  /* 11a25f0e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25f0f jmp 0x11a25e6c */
  goto L_11a25e6c;
L_11a25f14:;
  /* 11a25f14 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a25f16 je 0x11a25f1c */
  if (C.zf) goto L_11a25f1c;
  /* 11a25f18 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a25f1b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a25f1c:;
  /* 11a25f1c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a25f1e jmp 0x11a25e3a */
  goto L_11a25e3a;
L_11a25f23:;
  /* 11a25f23 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a25f25 je 0x11a25f2a */
  if (C.zf) goto L_11a25f2a;
  /* 11a25f27 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a25f2a:;
  /* 11a25f2a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a25f2d pop edi */
  EDI = (pop32());
  /* 11a25f2e pop esi */
  ESI = (pop32());
  /* 11a25f2f pop ebx */
  EBX = (pop32());
  /* 11a25f30 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11a25f32 pop ebp */
  EBP = (pop32());
  /* 11a25f33 ret  */
  ESPCHK(0x11a25d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f34 @ 0x11a25f34 (306 bytes, 132 insns) */
void f_11a25f34(void) {
  FTRACE(0x11a25f34u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a25f34 push ecx */
  push32((uint32_t)(ECX));
  /* 11a25f35 push ecx */
  push32((uint32_t)(ECX));
  /* 11a25f36 mov eax, dword ptr [0x11a30054] */
  EAX = (r32((uint32_t)(0x11a30054)));
  /* 11a25f3b push ebx */
  push32((uint32_t)(EBX));
  /* 11a25f3c push ebp */
  push32((uint32_t)(EBP));
  /* 11a25f3d mov ebp, dword ptr [0x11a2a06c] */
  EBP = (r32((uint32_t)(0x11a2a06c)));
  /* 11a25f43 push esi */
  push32((uint32_t)(ESI));
  /* 11a25f44 push edi */
  push32((uint32_t)(EDI));
  /* 11a25f45 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a25f47 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a25f49 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a25f4b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25f4d jne 0x11a25f82 */
  if (!C.zf) goto L_11a25f82;
  /* 11a25f4f call ebp */
  call_ind((uint32_t)(EBP), 0x11a25f51u);
  /* 11a25f51 mov esi, eax */
  ESI = (EAX);
  /* 11a25f53 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25f55 je 0x11a25f63 */
  if (C.zf) goto L_11a25f63;
  /* 11a25f57 mov dword ptr [0x11a30054], 1 */
  w32((uint32_t)(0x11a30054), (0x1u));
  /* 11a25f61 jmp 0x11a25f8b */
  goto L_11a25f8b;
L_11a25f63:;
  /* 11a25f63 call dword ptr [0x11a2a07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a07c))), 0x11a25f69u);
  /* 11a25f69 mov edi, eax */
  EDI = (EAX);
  /* 11a25f6b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25f6d je 0x11a2605d */
  if (C.zf) goto L_11a2605d;
  /* 11a25f73 mov dword ptr [0x11a30054], 2 */
  w32((uint32_t)(0x11a30054), (0x2u));
  /* 11a25f7d jmp 0x11a26011 */
  goto L_11a26011;
L_11a25f82:;
  /* 11a25f82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25f85 jne 0x11a2600c */
  if (!C.zf) goto L_11a2600c;
L_11a25f8b:;
  /* 11a25f8b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25f8d jne 0x11a25f9b */
  if (!C.zf) goto L_11a25f9b;
  /* 11a25f8f call ebp */
  call_ind((uint32_t)(EBP), 0x11a25f91u);
  /* 11a25f91 mov esi, eax */
  ESI = (EAX);
  /* 11a25f93 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25f95 je 0x11a2605d */
  if (C.zf) goto L_11a2605d;
L_11a25f9b:;
  /* 11a25f9b cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a25f9e mov eax, esi */
  EAX = (ESI);
  /* 11a25fa0 je 0x11a25fb0 */
  if (C.zf) goto L_11a25fb0;
L_11a25fa2:;
  /* 11a25fa2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25fa3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25fa4 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a25fa7 jne 0x11a25fa2 */
  if (!C.zf) goto L_11a25fa2;
  /* 11a25fa9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25faa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25fab cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a25fae jne 0x11a25fa2 */
  if (!C.zf) goto L_11a25fa2;
L_11a25fb0:;
  /* 11a25fb0 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a25fb2 mov edi, dword ptr [0x11a2a074] */
  EDI = (r32((uint32_t)(0x11a2a074)));
  /* 11a25fb8 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a25fba push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fbb push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fbc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a25fbd push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fbe push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fbf push eax */
  push32((uint32_t)(EAX));
  /* 11a25fc0 push esi */
  push32((uint32_t)(ESI));
  /* 11a25fc1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fc2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fc3 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11a25fc7 call edi */
  call_ind((uint32_t)(EDI), 0x11a25fc9u);
  /* 11a25fc9 mov ebp, eax */
  EBP = (EAX);
  /* 11a25fcb cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25fcd je 0x11a26001 */
  if (C.zf) goto L_11a26001;
  /* 11a25fcf push ebp */
  push32((uint32_t)(EBP));
  /* 11a25fd0 call 0x11a252a5 */
  push32(0x11a25fd5u); f_11a252a5();
  /* 11a25fd5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a25fd7 pop ecx */
  ECX = (pop32());
  /* 11a25fd8 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a25fdc je 0x11a26001 */
  if (C.zf) goto L_11a26001;
  /* 11a25fde push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fdf push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a25fe1 push eax */
  push32((uint32_t)(EAX));
  /* 11a25fe2 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11a25fe6 push esi */
  push32((uint32_t)(ESI));
  /* 11a25fe7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fe8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a25fe9 call edi */
  call_ind((uint32_t)(EDI), 0x11a25febu);
  /* 11a25feb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a25fed jne 0x11a25ffd */
  if (!C.zf) goto L_11a25ffd;
  /* 11a25fef push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a25ff3 call 0x11a246eb */
  push32(0x11a25ff8u); f_11a246eb();
  /* 11a25ff8 pop ecx */
  ECX = (pop32());
  /* 11a25ff9 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11a25ffd:;
  /* 11a25ffd mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a26001:;
  /* 11a26001 push esi */
  push32((uint32_t)(ESI));
  /* 11a26002 call dword ptr [0x11a2a078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a078))), 0x11a26008u);
  /* 11a26008 mov eax, ebx */
  EAX = (EBX);
  /* 11a2600a jmp 0x11a2605f */
  goto L_11a2605f;
L_11a2600c:;
  /* 11a2600c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2600f jne 0x11a2605d */
  if (!C.zf) goto L_11a2605d;
L_11a26011:;
  /* 11a26011 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26013 jne 0x11a26021 */
  if (!C.zf) goto L_11a26021;
  /* 11a26015 call dword ptr [0x11a2a07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a07c))), 0x11a2601bu);
  /* 11a2601b mov edi, eax */
  EDI = (EAX);
  /* 11a2601d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2601f je 0x11a2605d */
  if (C.zf) goto L_11a2605d;
L_11a26021:;
  /* 11a26021 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a26023 mov eax, edi */
  EAX = (EDI);
  /* 11a26025 je 0x11a26031 */
  if (C.zf) goto L_11a26031;
L_11a26027:;
  /* 11a26027 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a26028 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2602a jne 0x11a26027 */
  if (!C.zf) goto L_11a26027;
  /* 11a2602c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a2602d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2602f jne 0x11a26027 */
  if (!C.zf) goto L_11a26027;
L_11a26031:;
  /* 11a26031 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26033 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a26034 mov ebp, eax */
  EBP = (EAX);
  /* 11a26036 push ebp */
  push32((uint32_t)(EBP));
  /* 11a26037 call 0x11a252a5 */
  push32(0x11a2603cu); f_11a252a5();
  /* 11a2603c mov esi, eax */
  ESI = (EAX);
  /* 11a2603e pop ecx */
  ECX = (pop32());
  /* 11a2603f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26041 jne 0x11a26047 */
  if (!C.zf) goto L_11a26047;
  /* 11a26043 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a26045 jmp 0x11a26052 */
  goto L_11a26052;
L_11a26047:;
  /* 11a26047 push ebp */
  push32((uint32_t)(EBP));
  /* 11a26048 push edi */
  push32((uint32_t)(EDI));
  /* 11a26049 push esi */
  push32((uint32_t)(ESI));
  /* 11a2604a call 0x11a24f70 */
  push32(0x11a2604fu); f_11a24f70();
  /* 11a2604f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a26052:;
  /* 11a26052 push edi */
  push32((uint32_t)(EDI));
  /* 11a26053 call dword ptr [0x11a2a084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a084))), 0x11a26059u);
  /* 11a26059 mov eax, esi */
  EAX = (ESI);
  /* 11a2605b jmp 0x11a2605f */
  goto L_11a2605f;
L_11a2605d:;
  /* 11a2605d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a2605f:;
  /* 11a2605f pop edi */
  EDI = (pop32());
  /* 11a26060 pop esi */
  ESI = (pop32());
  /* 11a26061 pop ebp */
  EBP = (pop32());
  /* 11a26062 pop ebx */
  EBX = (pop32());
  /* 11a26063 pop ecx */
  ECX = (pop32());
  /* 11a26064 pop ecx */
  ECX = (pop32());
  /* 11a26065 ret  */
  ESPCHK(0x11a25f34u, _esp0);
  ESP += 4; return;
}

/* FUN_10006066 @ 0x11a26066 (45 bytes, 17 insns) */
void f_11a26066(void) {
  FTRACE(0x11a26066u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26066 push esi */
  push32((uint32_t)(ESI));
  /* 11a26067 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a2606b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2606d and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a26070 call dword ptr [0x11a2a068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a068))), 0x11a26076u);
  /* 11a26076 cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a2607b jne 0x11a26091 */
  if (!C.zf) goto L_11a26091;
  /* 11a2607d mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11a26080 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a26082 je 0x11a26091 */
  if (C.zf) goto L_11a26091;
  /* 11a26084 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26086 mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11a26089 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11a2608b mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11a2608e mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11a26091:;
  /* 11a26091 pop esi */
  ESI = (pop32());
  /* 11a26092 ret  */
  ESPCHK(0x11a26066u, _esp0);
  ESP += 4; return;
}

/* FUN_10006093 @ 0x11a26093 (328 bytes, 115 insns) */
void f_11a26093(void) {
  FTRACE(0x11a26093u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26093 push ebp */
  push32((uint32_t)(EBP));
  /* 11a26094 mov ebp, esp */
  EBP = (ESP);
  /* 11a26096 mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11a2609b call 0x11a287d0 */
  push32(0x11a260a0u); f_11a287d0();
  /* 11a260a0 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11a260a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a260a7 push eax */
  push32((uint32_t)(EAX));
  /* 11a260a8 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11a260b2 call dword ptr [0x11a2a060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a060))), 0x11a260b8u);
  /* 11a260b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a260ba je 0x11a260d6 */
  if (C.zf) goto L_11a260d6;
  /* 11a260bc cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a260c3 jne 0x11a260d6 */
  if (!C.zf) goto L_11a260d6;
  /* 11a260c5 cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a260cc jb 0x11a260d6 */
  if (C.cf) goto L_11a260d6;
  /* 11a260ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11a260d0 pop eax */
  EAX = (pop32());
  /* 11a260d1 jmp 0x11a261d8 */
  goto L_11a261d8;
L_11a260d6:;
  /* 11a260d6 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a260dc push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11a260e1 push eax */
  push32((uint32_t)(EAX));
  /* 11a260e2 push 0x11a2a200 */
  push32((uint32_t)(0x11a2a200u));
  /* 11a260e7 call dword ptr [0x11a2a070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a070))), 0x11a260edu);
  /* 11a260ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a260ef je 0x11a261c5 */
  if (C.zf) goto L_11a261c5;
  /* 11a260f5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a260f7 lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11a260fd cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a26103 je 0x11a26118 */
  if (C.zf) goto L_11a26118;
L_11a26105:;
  /* 11a26105 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a26107 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a26109 jl 0x11a26113 */
  if ((C.sf!=C.of)) goto L_11a26113;
  /* 11a2610b cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2610d jg 0x11a26113 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a26113;
  /* 11a2610f sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a26111 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11a26113:;
  /* 11a26113 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a26114 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a26116 jne 0x11a26105 */
  if (!C.zf) goto L_11a26105;
L_11a26118:;
  /* 11a26118 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a2611e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a26120 push eax */
  push32((uint32_t)(EAX));
  /* 11a26121 push 0x11a2a1e8 */
  push32((uint32_t)(0x11a2a1e8u));
  /* 11a26126 call 0x11a28790 */
  push32(0x11a2612bu); f_11a28790();
  /* 11a2612b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2612e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26130 jne 0x11a2613a */
  if (!C.zf) goto L_11a2613a;
  /* 11a26132 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a26138 jmp 0x11a26183 */
  goto L_11a26183;
L_11a2613a:;
  /* 11a2613a lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11a26140 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a26145 push eax */
  push32((uint32_t)(EAX));
  /* 11a26146 push ebx */
  push32((uint32_t)(EBX));
  /* 11a26147 call dword ptr [0x11a2a080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a080))), 0x11a2614du);
  /* 11a2614d cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a26153 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11a26159 je 0x11a2616e */
  if (C.zf) goto L_11a2616e;
L_11a2615b:;
  /* 11a2615b mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a2615d cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2615f jl 0x11a26169 */
  if ((C.sf!=C.of)) goto L_11a26169;
  /* 11a26161 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a26163 jg 0x11a26169 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a26169;
  /* 11a26165 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a26167 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11a26169:;
  /* 11a26169 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a2616a cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2616c jne 0x11a2615b */
  if (!C.zf) goto L_11a2615b;
L_11a2616e:;
  /* 11a2616e lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11a26174 push eax */
  push32((uint32_t)(EAX));
  /* 11a26175 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11a2617b push eax */
  push32((uint32_t)(EAX));
  /* 11a2617c call 0x11a240a0 */
  push32(0x11a26181u); f_11a240a0();
  /* 11a26181 pop ecx */
  ECX = (pop32());
  /* 11a26182 pop ecx */
  ECX = (pop32());
L_11a26183:;
  /* 11a26183 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26185 je 0x11a261c5 */
  if (C.zf) goto L_11a261c5;
  /* 11a26187 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11a26189 push eax */
  push32((uint32_t)(EAX));
  /* 11a2618a call 0x11a247f0 */
  push32(0x11a2618fu); f_11a247f0();
  /* 11a2618f pop ecx */
  ECX = (pop32());
  /* 11a26190 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26192 pop ecx */
  ECX = (pop32());
  /* 11a26193 je 0x11a261c5 */
  if (C.zf) goto L_11a261c5;
  /* 11a26195 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a26196 mov ecx, eax */
  ECX = (EAX);
  /* 11a26198 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2619a je 0x11a261aa */
  if (C.zf) goto L_11a261aa;
L_11a2619c:;
  /* 11a2619c cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2619f jne 0x11a261a5 */
  if (!C.zf) goto L_11a261a5;
  /* 11a261a1 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11a261a3 jmp 0x11a261a6 */
  goto L_11a261a6;
L_11a261a5:;
  /* 11a261a5 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11a261a6:;
  /* 11a261a6 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a261a8 jne 0x11a2619c */
  if (!C.zf) goto L_11a2619c;
L_11a261aa:;
  /* 11a261aa push 0xa */
  push32((uint32_t)(0xau));
  /* 11a261ac push ebx */
  push32((uint32_t)(EBX));
  /* 11a261ad push eax */
  push32((uint32_t)(EAX));
  /* 11a261ae call 0x11a2856f */
  push32(0x11a261b3u); f_11a2856f();
  /* 11a261b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a261b6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a261b9 je 0x11a261d8 */
  if (C.zf) goto L_11a261d8;
  /* 11a261bb cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a261be je 0x11a261d8 */
  if (C.zf) goto L_11a261d8;
  /* 11a261c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a261c3 je 0x11a261d8 */
  if (C.zf) goto L_11a261d8;
L_11a261c5:;
  /* 11a261c5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a261c8 push eax */
  push32((uint32_t)(EAX));
  /* 11a261c9 call 0x11a26066 */
  push32(0x11a261ceu); f_11a26066();
  /* 11a261ce cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a261d2 pop ecx */
  ECX = (pop32());
  /* 11a261d3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a261d5 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a261d8:;
  /* 11a261d8 pop ebx */
  EBX = (pop32());
  /* 11a261d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a261da ret  */
  ESPCHK(0x11a26093u, _esp0);
  ESP += 4; return;
}

/* FUN_100061db @ 0x11a261db (93 bytes, 30 insns) */
void f_11a261db(void) {
  FTRACE(0x11a261dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a261db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a261dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a261df cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a261e3 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a261e8 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a261eb push eax */
  push32((uint32_t)(EAX));
  /* 11a261ec call dword ptr [0x11a2a064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a064))), 0x11a261f2u);
  /* 11a261f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a261f4 mov dword ptr [0x11a304a4], eax */
  w32((uint32_t)(0x11a304a4), (EAX));
  /* 11a261f9 je 0x11a26231 */
  if (C.zf) goto L_11a26231;
  /* 11a261fb call 0x11a26093 */
  push32(0x11a26200u); f_11a26093();
  /* 11a26200 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26203 mov dword ptr [0x11a304a8], eax */
  w32((uint32_t)(0x11a304a8), (EAX));
  /* 11a26208 jne 0x11a26217 */
  if (!C.zf) goto L_11a26217;
  /* 11a2620a push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11a2620f call 0x11a2646c */
  push32(0x11a26214u); f_11a2646c();
  /* 11a26214 pop ecx */
  ECX = (pop32());
  /* 11a26215 jmp 0x11a26221 */
  goto L_11a26221;
L_11a26217:;
  /* 11a26217 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2621a jne 0x11a26234 */
  if (!C.zf) goto L_11a26234;
  /* 11a2621c call 0x11a26cbd */
  push32(0x11a26221u); f_11a26cbd();
L_11a26221:;
  /* 11a26221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26223 jne 0x11a26234 */
  if (!C.zf) goto L_11a26234;
  /* 11a26225 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a2622b call dword ptr [0x11a2a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a05c))), 0x11a26231u);
L_11a26231:;
  /* 11a26231 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a26233 ret  */
  ESPCHK(0x11a261dbu, _esp0);
  ESP += 4; return;
L_11a26234:;
  /* 11a26234 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a26236 pop eax */
  EAX = (pop32());
  /* 11a26237 ret  */
  ESPCHK(0x11a261dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10006238 @ 0x11a26238 (168 bytes, 56 insns) */
void f_11a26238(void) {
  FTRACE(0x11a26238u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26238 mov eax, dword ptr [0x11a304a8] */
  EAX = (r32((uint32_t)(0x11a304a8)));
  /* 11a2623d push esi */
  push32((uint32_t)(ESI));
  /* 11a2623e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26241 push edi */
  push32((uint32_t)(EDI));
  /* 11a26242 jne 0x11a262aa */
  if (!C.zf) goto L_11a262aa;
  /* 11a26244 push ebx */
  push32((uint32_t)(EBX));
  /* 11a26245 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a26247 cmp dword ptr [0x11a30498], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a30498))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2624d push ebp */
  push32((uint32_t)(EBP));
  /* 11a2624e mov ebp, dword ptr [0x11a2a098] */
  EBP = (r32((uint32_t)(0x11a2a098)));
  /* 11a26254 jle 0x11a26296 */
  if ((C.zf||C.sf!=C.of)) goto L_11a26296;
  /* 11a26256 mov eax, dword ptr [0x11a3049c] */
  EAX = (r32((uint32_t)(0x11a3049c)));
  /* 11a2625b mov edi, dword ptr [0x11a2a054] */
  EDI = (r32((uint32_t)(0x11a2a054)));
  /* 11a26261 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11a26264:;
  /* 11a26264 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a26269 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a2626e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a26270 call edi */
  call_ind((uint32_t)(EDI), 0x11a26272u);
  /* 11a26272 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a26277 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26279 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a2627b call edi */
  call_ind((uint32_t)(EDI), 0x11a2627du);
  /* 11a2627d push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11a26280 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26282 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a26288 call ebp */
  call_ind((uint32_t)(EBP), 0x11a2628au);
  /* 11a2628a add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2628d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a2628e cmp ebx, dword ptr [0x11a30498] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a30498))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26294 jl 0x11a26264 */
  if ((C.sf!=C.of)) goto L_11a26264;
L_11a26296:;
  /* 11a26296 push dword ptr [0x11a3049c] */
  push32((uint32_t)(r32((uint32_t)(0x11a3049c))));
  /* 11a2629c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2629e push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a262a4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a262a6u);
  /* 11a262a6 pop ebp */
  EBP = (pop32());
  /* 11a262a7 pop ebx */
  EBX = (pop32());
  /* 11a262a8 jmp 0x11a262d1 */
  goto L_11a262d1;
L_11a262aa:;
  /* 11a262aa cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a262ad jne 0x11a262d1 */
  if (!C.zf) goto L_11a262d1;
  /* 11a262af mov edi, 0x11a2c9c8 */
  EDI = (0x11a2c9c8u);
  /* 11a262b4 mov esi, edi */
  ESI = (EDI);
L_11a262b6:;
  /* 11a262b6 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a262b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a262bb je 0x11a262cb */
  if (C.zf) goto L_11a262cb;
  /* 11a262bd push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a262c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a262c4 push eax */
  push32((uint32_t)(EAX));
  /* 11a262c5 call dword ptr [0x11a2a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a054))), 0x11a262cbu);
L_11a262cb:;
  /* 11a262cb mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11a262cd cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a262cf jne 0x11a262b6 */
  if (!C.zf) goto L_11a262b6;
L_11a262d1:;
  /* 11a262d1 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a262d7 call dword ptr [0x11a2a05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a05c))), 0x11a262ddu);
  /* 11a262dd pop edi */
  EDI = (pop32());
  /* 11a262de pop esi */
  ESI = (pop32());
  /* 11a262df ret  */
  ESPCHK(0x11a26238u, _esp0);
  ESP += 4; return;
}

/* FUN_100062e0 @ 0x11a262e0 (57 bytes, 18 insns) */
void f_11a262e0(void) {
  FTRACE(0x11a262e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a262e0 mov eax, dword ptr [0x11a2ff00] */
  EAX = (r32((uint32_t)(0x11a2ff00)));
  /* 11a262e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a262e8 je 0x11a262f7 */
  if (C.zf) goto L_11a262f7;
  /* 11a262ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a262ec jne 0x11a26318 */
  if (!C.zf) goto L_11a26318;
  /* 11a262ee cmp dword ptr [0x11a2ff04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2ff04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a262f5 jne 0x11a26318 */
  if (!C.zf) goto L_11a26318;
L_11a262f7:;
  /* 11a262f7 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11a262fc call 0x11a26319 */
  push32(0x11a26301u); f_11a26319();
  /* 11a26301 mov eax, dword ptr [0x11a30058] */
  EAX = (r32((uint32_t)(0x11a30058)));
  /* 11a26306 pop ecx */
  ECX = (pop32());
  /* 11a26307 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26309 je 0x11a2630d */
  if (C.zf) goto L_11a2630d;
  /* 11a2630b call eax */
  call_ind((uint32_t)(EAX), 0x11a2630du);
L_11a2630d:;
  /* 11a2630d push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a26312 call 0x11a26319 */
  push32(0x11a26317u); f_11a26319();
  /* 11a26317 pop ecx */
  ECX = (pop32());
L_11a26318:;
  /* 11a26318 ret  */
  ESPCHK(0x11a262e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006319 @ 0x11a26319 (339 bytes, 100 insns) */
void f_11a26319(void) {
  FTRACE(0x11a26319u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26319 push ebp */
  push32((uint32_t)(EBP));
  /* 11a2631a mov ebp, esp */
  EBP = (ESP);
  /* 11a2631c sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26322 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a26325 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a26327 mov eax, 0x11a2c938 */
  EAX = (0x11a2c938u);
L_11a2632c:;
  /* 11a2632c cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2632e je 0x11a2633b */
  if (C.zf) goto L_11a2633b;
  /* 11a26330 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26333 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a26334 cmp eax, 0x11a2c9c8 */
  { uint32_t _a=(EAX),_b=(0x11a2c9c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26339 jl 0x11a2632c */
  if ((C.sf!=C.of)) goto L_11a2632c;
L_11a2633b:;
  /* 11a2633b push esi */
  push32((uint32_t)(ESI));
  /* 11a2633c mov esi, ecx */
  ESI = (ECX);
  /* 11a2633e shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a26341 cmp edx, dword ptr [esi + 0x11a2c938] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11a2c938))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26347 jne 0x11a26469 */
  if (!C.zf) goto L_11a26469;
  /* 11a2634d mov eax, dword ptr [0x11a2ff00] */
  EAX = (r32((uint32_t)(0x11a2ff00)));
  /* 11a26352 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26355 je 0x11a26443 */
  if (C.zf) goto L_11a26443;
  /* 11a2635b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2635d jne 0x11a2636c */
  if (!C.zf) goto L_11a2636c;
  /* 11a2635f cmp dword ptr [0x11a2ff04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2ff04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26366 je 0x11a26443 */
  if (C.zf) goto L_11a26443;
L_11a2636c:;
  /* 11a2636c cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26372 je 0x11a26469 */
  if (C.zf) goto L_11a26469;
  /* 11a26378 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a2637e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a26383 push eax */
  push32((uint32_t)(EAX));
  /* 11a26384 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26386 call dword ptr [0x11a2a080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a080))), 0x11a2638cu);
  /* 11a2638c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a2638e jne 0x11a263a3 */
  if (!C.zf) goto L_11a263a3;
  /* 11a26390 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a26396 push 0x11a2a4f0 */
  push32((uint32_t)(0x11a2a4f0u));
  /* 11a2639b push eax */
  push32((uint32_t)(EAX));
  /* 11a2639c call 0x11a28010 */
  push32(0x11a263a1u); f_11a28010();
  /* 11a263a1 pop ecx */
  ECX = (pop32());
  /* 11a263a2 pop ecx */
  ECX = (pop32());
L_11a263a3:;
  /* 11a263a3 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a263a9 push edi */
  push32((uint32_t)(EDI));
  /* 11a263aa push eax */
  push32((uint32_t)(EAX));
  /* 11a263ab lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11a263b1 call 0x11a28100 */
  push32(0x11a263b6u); f_11a28100();
  /* 11a263b6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a263b7 pop ecx */
  ECX = (pop32());
  /* 11a263b8 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a263bb jbe 0x11a263e6 */
  if ((C.cf||C.zf)) goto L_11a263e6;
  /* 11a263bd lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a263c3 push eax */
  push32((uint32_t)(EAX));
  /* 11a263c4 call 0x11a28100 */
  push32(0x11a263c9u); f_11a28100();
  /* 11a263c9 mov edi, eax */
  EDI = (EAX);
  /* 11a263cb lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a263d1 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a263d4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a263d6 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a263d8 push 0x11a2a4ec */
  push32((uint32_t)(0x11a2a4ecu));
  /* 11a263dd push edi */
  push32((uint32_t)(EDI));
  /* 11a263de call 0x11a23f60 */
  push32(0x11a263e3u); f_11a23f60();
  /* 11a263e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a263e6:;
  /* 11a263e6 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a263ec push 0x11a2a4d0 */
  push32((uint32_t)(0x11a2a4d0u));
  /* 11a263f1 push eax */
  push32((uint32_t)(EAX));
  /* 11a263f2 call 0x11a28010 */
  push32(0x11a263f7u); f_11a28010();
  /* 11a263f7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a263fd push edi */
  push32((uint32_t)(EDI));
  /* 11a263fe push eax */
  push32((uint32_t)(EAX));
  /* 11a263ff call 0x11a28020 */
  push32(0x11a26404u); f_11a28020();
  /* 11a26404 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a2640a push 0x11a2a4cc */
  push32((uint32_t)(0x11a2a4ccu));
  /* 11a2640f push eax */
  push32((uint32_t)(EAX));
  /* 11a26410 call 0x11a28020 */
  push32(0x11a26415u); f_11a28020();
  /* 11a26415 push dword ptr [esi + 0x11a2c93c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11a2c93c))));
  /* 11a2641b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a26421 push eax */
  push32((uint32_t)(EAX));
  /* 11a26422 call 0x11a28020 */
  push32(0x11a26427u); f_11a28020();
  /* 11a26427 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11a2642c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a26432 push 0x11a2a4a4 */
  push32((uint32_t)(0x11a2a4a4u));
  /* 11a26437 push eax */
  push32((uint32_t)(EAX));
  /* 11a26438 call 0x11a287ff */
  push32(0x11a2643du); f_11a287ff();
  /* 11a2643d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26440 pop edi */
  EDI = (pop32());
  /* 11a26441 jmp 0x11a26469 */
  goto L_11a26469;
L_11a26443:;
  /* 11a26443 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a26446 lea esi, [esi + 0x11a2c93c] */
  ESI = ((uint32_t)(ESI + 0x11a2c93c));
  /* 11a2644c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2644e push eax */
  push32((uint32_t)(EAX));
  /* 11a2644f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a26451 call 0x11a28100 */
  push32(0x11a26456u); f_11a28100();
  /* 11a26456 pop ecx */
  ECX = (pop32());
  /* 11a26457 push eax */
  push32((uint32_t)(EAX));
  /* 11a26458 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a2645a push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a2645c call dword ptr [0x11a2a000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a000))), 0x11a26462u);
  /* 11a26462 push eax */
  push32((uint32_t)(EAX));
  /* 11a26463 call dword ptr [0x11a2a050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a050))), 0x11a26469u);
L_11a26469:;
  /* 11a26469 pop esi */
  ESI = (pop32());
  /* 11a2646a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a2646b ret  */
  ESPCHK(0x11a26319u, _esp0);
  ESP += 4; return;
}

/* FUN_1000646c @ 0x11a2646c (72 bytes, 17 insns) */
void f_11a2646c(void) {
  FTRACE(0x11a2646cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a2646c push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11a26471 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26473 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a26479 call dword ptr [0x11a2a0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0b0))), 0x11a2647fu);
  /* 11a2647f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26481 mov dword ptr [0x11a3049c], eax */
  w32((uint32_t)(0x11a3049c), (EAX));
  /* 11a26486 jne 0x11a26489 */
  if (!C.zf) goto L_11a26489;
  /* 11a26488 ret  */
  ESPCHK(0x11a2646cu, _esp0);
  ESP += 4; return;
L_11a26489:;
  /* 11a26489 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a2648d and dword ptr [0x11a30494], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a30494)))&(0x0u); w32((uint32_t)(0x11a30494), (_r)); fl_logic(_r,32); }
  /* 11a26494 and dword ptr [0x11a30498], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a30498)))&(0x0u); w32((uint32_t)(0x11a30498), (_r)); fl_logic(_r,32); }
  /* 11a2649b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a2649d mov dword ptr [0x11a30490], eax */
  w32((uint32_t)(0x11a30490), (EAX));
  /* 11a264a2 mov dword ptr [0x11a304a0], ecx */
  w32((uint32_t)(0x11a304a0), (ECX));
  /* 11a264a8 mov dword ptr [0x11a30488], 0x10 */
  w32((uint32_t)(0x11a30488), (0x10u));
  /* 11a264b2 pop eax */
  EAX = (pop32());
  /* 11a264b3 ret  */
  ESPCHK(0x11a2646cu, _esp0);
  ESP += 4; return;
}

/* FUN_100064b4 @ 0x11a264b4 (43 bytes, 14 insns) */
void f_11a264b4(void) {
  FTRACE(0x11a264b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a264b4 mov eax, dword ptr [0x11a30498] */
  EAX = (r32((uint32_t)(0x11a30498)));
  /* 11a264b9 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a264bc mov eax, dword ptr [0x11a3049c] */
  EAX = (r32((uint32_t)(0x11a3049c)));
  /* 11a264c1 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11a264c4:;
  /* 11a264c4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a264c6 jae 0x11a264dc */
  if (!C.cf) goto L_11a264dc;
  /* 11a264c8 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a264cc sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a264cf cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a264d5 jb 0x11a264de */
  if (C.cf) goto L_11a264de;
  /* 11a264d7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a264da jmp 0x11a264c4 */
  goto L_11a264c4;
L_11a264dc:;
  /* 11a264dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a264de:;
  /* 11a264de ret  */
  ESPCHK(0x11a264b4u, _esp0);
  ESP += 4; return;
}

/* FUN_100064df @ 0x11a264df (809 bytes, 265 insns) */
void f_11a264df(void) {
  FTRACE(0x11a264dfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a264df push ebp */
  push32((uint32_t)(EBP));
  /* 11a264e0 mov ebp, esp */
  EBP = (ESP);
  /* 11a264e2 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a264e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a264e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a264e9 push esi */
  push32((uint32_t)(ESI));
  /* 11a264ea mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a264ed mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a264f0 push edi */
  push32((uint32_t)(EDI));
  /* 11a264f1 mov edi, esi */
  EDI = (ESI);
  /* 11a264f3 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a264f6 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a264f9 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11a264fc mov ecx, edi */
  ECX = (EDI);
  /* 11a264fe imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a26504 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a2650b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a2650e mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a26510 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a26511 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11a26514 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a26517 jne 0x11a26803 */
  if (!C.zf) goto L_11a26803;
  /* 11a2651d mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11a26520 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11a26523 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a26526 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11a26529 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a2652c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a2652f test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11a26532 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11a26535 jne 0x11a265b5 */
  if (!C.zf) goto L_11a265b5;
  /* 11a26537 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a2653a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a2653b cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2653e jbe 0x11a26543 */
  if ((C.cf||C.zf)) goto L_11a26543;
  /* 11a26540 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a26542 pop edx */
  EDX = (pop32());
L_11a26543:;
  /* 11a26543 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a26546 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26549 jne 0x11a26597 */
  if (!C.zf) goto L_11a26597;
  /* 11a2654b cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2654e jae 0x11a2656e */
  if (!C.cf) goto L_11a2656e;
  /* 11a26550 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a26555 mov ecx, edx */
  ECX = (EDX);
  /* 11a26557 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a26559 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11a2655d not ebx */
  EBX = (~(EBX));
  /* 11a2655f and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a26563 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a26565 jne 0x11a2658f */
  if (!C.zf) goto L_11a2658f;
  /* 11a26567 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a2656a and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a2656c jmp 0x11a2658f */
  goto L_11a2658f;
L_11a2656e:;
  /* 11a2656e lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11a26571 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a26576 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a26578 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11a2657c not ebx */
  EBX = (~(EBX));
  /* 11a2657e and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a26585 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a26587 jne 0x11a2658f */
  if (!C.zf) goto L_11a2658f;
  /* 11a26589 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a2658c and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a2658f:;
  /* 11a2658f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a26592 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a26595 jmp 0x11a2659a */
  goto L_11a2659a;
L_11a26597:;
  /* 11a26597 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11a2659a:;
  /* 11a2659a mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11a2659d mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a265a0 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a265a3 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11a265a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a265a9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a265ac mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a265af mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a265b2 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11a265b5:;
  /* 11a265b5 mov edx, ecx */
  EDX = (ECX);
  /* 11a265b7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a265ba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a265bb cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a265be jbe 0x11a265c3 */
  if ((C.cf||C.zf)) goto L_11a265c3;
  /* 11a265c0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a265c2 pop edx */
  EDX = (pop32());
L_11a265c3:;
  /* 11a265c3 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a265c6 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 11a265c9 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11a265cc jne 0x11a26666 */
  if (!C.zf) goto L_11a26666;
  /* 11a265d2 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a265d5 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a265d8 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11a265db push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a265dd mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11a265e0 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a265e1 pop esi */
  ESI = (pop32());
  /* 11a265e2 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a265e4 jbe 0x11a265e8 */
  if ((C.cf||C.zf)) goto L_11a265e8;
  /* 11a265e6 mov ebx, esi */
  EBX = (ESI);
L_11a265e8:;
  /* 11a265e8 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a265eb mov edx, ecx */
  EDX = (ECX);
  /* 11a265ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a265f0 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a265f3 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a265f4 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a265f6 jbe 0x11a265fa */
  if ((C.cf||C.zf)) goto L_11a265fa;
  /* 11a265f8 mov edx, esi */
  EDX = (ESI);
L_11a265fa:;
  /* 11a265fa cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a265fc je 0x11a26661 */
  if (C.zf) goto L_11a26661;
  /* 11a265fe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a26601 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11a26604 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26607 jne 0x11a26649 */
  if (!C.zf) goto L_11a26649;
  /* 11a26609 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2660c jae 0x11a2662a */
  if (!C.cf) goto L_11a2662a;
  /* 11a2660e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a26613 mov ecx, ebx */
  ECX = (EBX);
  /* 11a26615 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a26617 not esi */
  ESI = (~(ESI));
  /* 11a26619 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a2661d dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11a26621 jne 0x11a26649 */
  if (!C.zf) goto L_11a26649;
  /* 11a26623 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a26626 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a26628 jmp 0x11a26649 */
  goto L_11a26649;
L_11a2662a:;
  /* 11a2662a lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11a2662d mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a26632 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a26634 not esi */
  ESI = (~(ESI));
  /* 11a26636 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a2663d dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11a26641 jne 0x11a26649 */
  if (!C.zf) goto L_11a26649;
  /* 11a26643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a26646 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a26649:;
  /* 11a26649 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a2664c mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 11a2664f mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a26652 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 11a26655 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a26658 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11a2665b mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a2665e mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_11a26661:;
  /* 11a26661 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a26664 jmp 0x11a26669 */
  goto L_11a26669;
L_11a26666:;
  /* 11a26666 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a26669:;
  /* 11a26669 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2666d jne 0x11a26677 */
  if (!C.zf) goto L_11a26677;
  /* 11a2666f cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26671 je 0x11a266f8 */
  if (C.zf) goto L_11a266f8;
L_11a26677:;
  /* 11a26677 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a2667a mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11a2667e lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 11a26681 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 11a26684 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 11a26687 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11a2668a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a2668d mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 11a26690 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a26693 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26696 jne 0x11a266f8 */
  if (!C.zf) goto L_11a266f8;
  /* 11a26698 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11a2669c cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2669f mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11a266a2 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a266a4 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 11a266a8 jae 0x11a266cf */
  if (!C.cf) goto L_11a266cf;
  /* 11a266aa cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a266ae jne 0x11a266be */
  if (!C.zf) goto L_11a266be;
  /* 11a266b0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a266b5 mov ecx, edx */
  ECX = (EDX);
  /* 11a266b7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a266b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a266bc or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11a266be:;
  /* 11a266be mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a266c3 mov ecx, edx */
  ECX = (EDX);
  /* 11a266c5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a266c7 lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 11a266cb or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a266cd jmp 0x11a266f8 */
  goto L_11a266f8;
L_11a266cf:;
  /* 11a266cf cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a266d3 jne 0x11a266e5 */
  if (!C.zf) goto L_11a266e5;
  /* 11a266d5 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11a266d8 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a266dd shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a266df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a266e2 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a266e5:;
  /* 11a266e5 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11a266e8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a266ed shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a266ef lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11a266f6 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11a266f8:;
  /* 11a266f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a266fb mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a266fd mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11a26701 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a26704 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11a26706 jne 0x11a26803 */
  if (!C.zf) goto L_11a26803;
  /* 11a2670c mov eax, dword ptr [0x11a30494] */
  EAX = (r32((uint32_t)(0x11a30494)));
  /* 11a26711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26713 je 0x11a267f5 */
  if (C.zf) goto L_11a267f5;
  /* 11a26719 mov ecx, dword ptr [0x11a3048c] */
  ECX = (r32((uint32_t)(0x11a3048c)));
  /* 11a2671f mov esi, dword ptr [0x11a2a054] */
  ESI = (r32((uint32_t)(0x11a2a054)));
  /* 11a26725 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11a26728 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2672b mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11a26730 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a26735 push ebx */
  push32((uint32_t)(EBX));
  /* 11a26736 push ecx */
  push32((uint32_t)(ECX));
  /* 11a26737 call esi */
  call_ind((uint32_t)(ESI), 0x11a26739u);
  /* 11a26739 mov ecx, dword ptr [0x11a3048c] */
  ECX = (r32((uint32_t)(0x11a3048c)));
  /* 11a2673f mov eax, dword ptr [0x11a30494] */
  EAX = (r32((uint32_t)(0x11a30494)));
  /* 11a26744 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a26749 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a2674b or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a2674e mov eax, dword ptr [0x11a30494] */
  EAX = (r32((uint32_t)(0x11a30494)));
  /* 11a26753 mov ecx, dword ptr [0x11a3048c] */
  ECX = (r32((uint32_t)(0x11a3048c)));
  /* 11a26759 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a2675c and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a26764 mov eax, dword ptr [0x11a30494] */
  EAX = (r32((uint32_t)(0x11a30494)));
  /* 11a26769 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a2676c dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11a2676f mov eax, dword ptr [0x11a30494] */
  EAX = (r32((uint32_t)(0x11a30494)));
  /* 11a26774 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a26777 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a2677b jne 0x11a26786 */
  if (!C.zf) goto L_11a26786;
  /* 11a2677d and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a26781 mov eax, dword ptr [0x11a30494] */
  EAX = (r32((uint32_t)(0x11a30494)));
L_11a26786:;
  /* 11a26786 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2678a jne 0x11a267f5 */
  if (!C.zf) goto L_11a267f5;
  /* 11a2678c push ebx */
  push32((uint32_t)(EBX));
  /* 11a2678d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2678f push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11a26792 call esi */
  call_ind((uint32_t)(ESI), 0x11a26794u);
  /* 11a26794 mov eax, dword ptr [0x11a30494] */
  EAX = (r32((uint32_t)(0x11a30494)));
  /* 11a26799 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11a2679c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a2679e push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a267a4 call dword ptr [0x11a2a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a098))), 0x11a267aau);
  /* 11a267aa mov eax, dword ptr [0x11a30498] */
  EAX = (r32((uint32_t)(0x11a30498)));
  /* 11a267af mov edx, dword ptr [0x11a3049c] */
  EDX = (r32((uint32_t)(0x11a3049c)));
  /* 11a267b5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a267b8 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a267bb mov ecx, eax */
  ECX = (EAX);
  /* 11a267bd mov eax, dword ptr [0x11a30494] */
  EAX = (r32((uint32_t)(0x11a30494)));
  /* 11a267c2 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a267c4 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11a267c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a267c9 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11a267cc push ecx */
  push32((uint32_t)(ECX));
  /* 11a267cd push eax */
  push32((uint32_t)(EAX));
  /* 11a267ce call 0x11a28890 */
  push32(0x11a267d3u); f_11a28890();
  /* 11a267d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a267d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a267d9 dec dword ptr [0x11a30498] */
  { uint32_t _r=(r32((uint32_t)(0x11a30498)))-1; w32((uint32_t)(0x11a30498), (_r)); fl_dec(_r,32); }
  /* 11a267df cmp eax, dword ptr [0x11a30494] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a30494))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a267e5 jbe 0x11a267eb */
  if ((C.cf||C.zf)) goto L_11a267eb;
  /* 11a267e7 sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_11a267eb:;
  /* 11a267eb mov eax, dword ptr [0x11a3049c] */
  EAX = (r32((uint32_t)(0x11a3049c)));
  /* 11a267f0 mov dword ptr [0x11a30490], eax */
  w32((uint32_t)(0x11a30490), (EAX));
L_11a267f5:;
  /* 11a267f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a267f8 mov dword ptr [0x11a3048c], edi */
  w32((uint32_t)(0x11a3048c), (EDI));
  /* 11a267fe mov dword ptr [0x11a30494], eax */
  w32((uint32_t)(0x11a30494), (EAX));
L_11a26803:;
  /* 11a26803 pop edi */
  EDI = (pop32());
  /* 11a26804 pop esi */
  ESI = (pop32());
  /* 11a26805 pop ebx */
  EBX = (pop32());
  /* 11a26806 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a26807 ret  */
  ESPCHK(0x11a264dfu, _esp0);
  ESP += 4; return;
}

/* FUN_10006808 @ 0x11a26808 (777 bytes, 275 insns) */
void f_11a26808(void) {
  FTRACE(0x11a26808u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26808 push ebp */
  push32((uint32_t)(EBP));
  /* 11a26809 mov ebp, esp */
  EBP = (ESP);
  /* 11a2680b sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a2680e mov eax, dword ptr [0x11a30498] */
  EAX = (r32((uint32_t)(0x11a30498)));
  /* 11a26813 mov edx, dword ptr [0x11a3049c] */
  EDX = (r32((uint32_t)(0x11a3049c)));
  /* 11a26819 push ebx */
  push32((uint32_t)(EBX));
  /* 11a2681a push esi */
  push32((uint32_t)(ESI));
  /* 11a2681b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a2681e push edi */
  push32((uint32_t)(EDI));
  /* 11a2681f lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11a26822 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a26825 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a26828 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11a2682b and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11a2682e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a26831 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a26834 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a26835 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26838 jge 0x11a26848 */
  if ((C.sf==C.of)) goto L_11a26848;
  /* 11a2683a or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a2683d shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a2683f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a26843 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a26846 jmp 0x11a26858 */
  goto L_11a26858;
L_11a26848:;
  /* 11a26848 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2684b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a2684e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a26850 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a26852 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a26855 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a26858:;
  /* 11a26858 mov eax, dword ptr [0x11a30490] */
  EAX = (r32((uint32_t)(0x11a30490)));
  /* 11a2685d mov ebx, eax */
  EBX = (EAX);
  /* 11a2685f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26861 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a26864 jae 0x11a2687f */
  if (!C.cf) goto L_11a2687f;
L_11a26866:;
  /* 11a26866 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a26869 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a2686b and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a2686e and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a26870 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a26872 jne 0x11a2687f */
  if (!C.zf) goto L_11a2687f;
  /* 11a26874 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26877 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2687a mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a2687d jb 0x11a26866 */
  if (C.cf) goto L_11a26866;
L_11a2687f:;
  /* 11a2687f cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26882 jne 0x11a268fd */
  if (!C.zf) goto L_11a268fd;
  /* 11a26884 mov ebx, edx */
  EBX = (EDX);
L_11a26886:;
  /* 11a26886 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26888 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a2688b jae 0x11a268a2 */
  if (!C.cf) goto L_11a268a2;
  /* 11a2688d mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a26890 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a26892 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a26895 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a26897 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a26899 jne 0x11a268a0 */
  if (!C.zf) goto L_11a268a0;
  /* 11a2689b add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a2689e jmp 0x11a26886 */
  goto L_11a26886;
L_11a268a0:;
  /* 11a268a0 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a268a2:;
  /* 11a268a2 jne 0x11a268fd */
  if (!C.zf) goto L_11a268fd;
L_11a268a4:;
  /* 11a268a4 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a268a7 jae 0x11a268ba */
  if (!C.cf) goto L_11a268ba;
  /* 11a268a9 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a268ad jne 0x11a268b7 */
  if (!C.zf) goto L_11a268b7;
  /* 11a268af add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a268b2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a268b5 jmp 0x11a268a4 */
  goto L_11a268a4;
L_11a268b7:;
  /* 11a268b7 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a268ba:;
  /* 11a268ba jne 0x11a268e2 */
  if (!C.zf) goto L_11a268e2;
  /* 11a268bc mov ebx, edx */
  EBX = (EDX);
L_11a268be:;
  /* 11a268be cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a268c0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a268c3 jae 0x11a268d2 */
  if (!C.cf) goto L_11a268d2;
  /* 11a268c5 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a268c9 jne 0x11a268d0 */
  if (!C.zf) goto L_11a268d0;
  /* 11a268cb add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a268ce jmp 0x11a268be */
  goto L_11a268be;
L_11a268d0:;
  /* 11a268d0 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a268d2:;
  /* 11a268d2 jne 0x11a268e2 */
  if (!C.zf) goto L_11a268e2;
  /* 11a268d4 call 0x11a26b11 */
  push32(0x11a268d9u); f_11a26b11();
  /* 11a268d9 mov ebx, eax */
  EBX = (EAX);
  /* 11a268db test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a268dd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a268e0 je 0x11a268f6 */
  if (C.zf) goto L_11a268f6;
L_11a268e2:;
  /* 11a268e2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a268e3 call 0x11a26bc2 */
  push32(0x11a268e8u); f_11a26bc2();
  /* 11a268e8 pop ecx */
  ECX = (pop32());
  /* 11a268e9 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a268ec mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a268ee mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a268f1 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a268f4 jne 0x11a268fd */
  if (!C.zf) goto L_11a268fd;
L_11a268f6:;
  /* 11a268f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a268f8 jmp 0x11a26b0c */
  goto L_11a26b0c;
L_11a268fd:;
  /* 11a268fd mov dword ptr [0x11a30490], ebx */
  w32((uint32_t)(0x11a30490), (EBX));
  /* 11a26903 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a26906 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a26908 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a2690b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a2690e je 0x11a26924 */
  if (C.zf) goto L_11a26924;
  /* 11a26910 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a26917 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a2691b and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a2691e and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a26920 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a26922 jne 0x11a2695b */
  if (!C.zf) goto L_11a2695b;
L_11a26924:;
  /* 11a26924 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11a2692a mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11a2692d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a26930 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11a26933 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a26937 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11a2693a or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11a2693c mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a2693f jne 0x11a26958 */
  if (!C.zf) goto L_11a26958;
L_11a26941:;
  /* 11a26941 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11a26947 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a2694a and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a2694d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26950 mov edi, esi */
  EDI = (ESI);
  /* 11a26952 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11a26954 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11a26956 je 0x11a26941 */
  if (C.zf) goto L_11a26941;
L_11a26958:;
  /* 11a26958 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11a2695b:;
  /* 11a2695b mov ecx, edx */
  ECX = (EDX);
  /* 11a2695d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a2695f imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a26965 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a2696c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a2696f mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a26973 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11a26975 jne 0x11a26984 */
  if (!C.zf) goto L_11a26984;
  /* 11a26977 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a2697e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a26980 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a26983 pop edi */
  EDI = (pop32());
L_11a26984:;
  /* 11a26984 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a26986 jl 0x11a2698d */
  if ((C.sf!=C.of)) goto L_11a2698d;
  /* 11a26988 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a2698a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a2698b jmp 0x11a26984 */
  goto L_11a26984;
L_11a2698d:;
  /* 11a2698d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a26990 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11a26994 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a26996 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26999 mov esi, ecx */
  ESI = (ECX);
  /* 11a2699b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a2699e sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a269a1 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a269a2 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a269a5 jle 0x11a269aa */
  if ((C.zf||C.sf!=C.of)) goto L_11a269aa;
  /* 11a269a7 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a269a9 pop esi */
  ESI = (pop32());
L_11a269aa:;
  /* 11a269aa cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a269ac je 0x11a26abf */
  if (C.zf) goto L_11a26abf;
  /* 11a269b2 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a269b5 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a269b8 jne 0x11a26a1b */
  if (!C.zf) goto L_11a26a1b;
  /* 11a269ba cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a269bd jge 0x11a269ea */
  if ((C.sf==C.of)) goto L_11a269ea;
  /* 11a269bf mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a269c4 mov ecx, edi */
  ECX = (EDI);
  /* 11a269c6 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a269c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a269cb lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a269cf not ebx */
  EBX = (~(EBX));
  /* 11a269d1 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a269d4 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11a269d8 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11a269dc dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a269de jne 0x11a26a18 */
  if (!C.zf) goto L_11a26a18;
  /* 11a269e0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a269e3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a269e6 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11a269e8 jmp 0x11a26a1b */
  goto L_11a26a1b;
L_11a269ea:;
  /* 11a269ea lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a269ed mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a269f2 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a269f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a269f7 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a269fb lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a26a02 not ebx */
  EBX = (~(EBX));
  /* 11a26a04 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a26a06 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a26a08 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a26a0b jne 0x11a26a18 */
  if (!C.zf) goto L_11a26a18;
  /* 11a26a0d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a26a10 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a26a13 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a26a16 jmp 0x11a26a1b */
  goto L_11a26a1b;
L_11a26a18:;
  /* 11a26a18 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a26a1b:;
  /* 11a26a1b mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a26a1e mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11a26a21 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26a25 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11a26a28 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a26a2b mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11a26a2e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a26a31 je 0x11a26acb */
  if (C.zf) goto L_11a26acb;
  /* 11a26a37 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a26a3a mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11a26a3e lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11a26a41 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11a26a44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a26a47 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a26a4a mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a26a4d mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a26a50 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a26a53 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26a56 jne 0x11a26abc */
  if (!C.zf) goto L_11a26abc;
  /* 11a26a58 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11a26a5c cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26a5f mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11a26a62 jge 0x11a26a8d */
  if ((C.sf==C.of)) goto L_11a26a8d;
  /* 11a26a64 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a26a66 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a26a6a mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a26a6e jne 0x11a26a7b */
  if (!C.zf) goto L_11a26a7b;
  /* 11a26a70 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a26a75 mov ecx, esi */
  ECX = (ESI);
  /* 11a26a77 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a26a79 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11a26a7b:;
  /* 11a26a7b mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a26a80 mov ecx, esi */
  ECX = (ESI);
  /* 11a26a82 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a26a84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a26a87 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a26a8b jmp 0x11a26abc */
  goto L_11a26abc;
L_11a26a8d:;
  /* 11a26a8d inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a26a8f cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a26a93 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a26a97 jne 0x11a26aa6 */
  if (!C.zf) goto L_11a26aa6;
  /* 11a26a99 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a26a9c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a26aa1 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a26aa3 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11a26aa6:;
  /* 11a26aa6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a26aa9 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a26ab0 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a26ab3 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a26ab8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a26aba or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a26abc:;
  /* 11a26abc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a26abf:;
  /* 11a26abf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a26ac1 je 0x11a26ace */
  if (C.zf) goto L_11a26ace;
  /* 11a26ac3 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a26ac5 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11a26ac9 jmp 0x11a26ace */
  goto L_11a26ace;
L_11a26acb:;
  /* 11a26acb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a26ace:;
  /* 11a26ace mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11a26ad1 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26ad3 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11a26ad6 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a26ad8 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11a26adc mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a26adf mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a26ae1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a26ae3 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11a26ae6 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a26ae8 jne 0x11a26b04 */
  if (!C.zf) goto L_11a26b04;
  /* 11a26aea cmp ebx, dword ptr [0x11a30494] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a30494))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26af0 jne 0x11a26b04 */
  if (!C.zf) goto L_11a26b04;
  /* 11a26af2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a26af5 cmp ecx, dword ptr [0x11a3048c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a3048c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26afb jne 0x11a26b04 */
  if (!C.zf) goto L_11a26b04;
  /* 11a26afd and dword ptr [0x11a30494], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a30494)))&(0x0u); w32((uint32_t)(0x11a30494), (_r)); fl_logic(_r,32); }
L_11a26b04:;
  /* 11a26b04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a26b07 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a26b09 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11a26b0c:;
  /* 11a26b0c pop edi */
  EDI = (pop32());
  /* 11a26b0d pop esi */
  ESI = (pop32());
  /* 11a26b0e pop ebx */
  EBX = (pop32());
  /* 11a26b0f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a26b10 ret  */
  ESPCHK(0x11a26808u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b11 @ 0x11a26b11 (177 bytes, 53 insns) */
void f_11a26b11(void) {
  FTRACE(0x11a26b11u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26b11 mov eax, dword ptr [0x11a30498] */
  EAX = (r32((uint32_t)(0x11a30498)));
  /* 11a26b16 mov ecx, dword ptr [0x11a30488] */
  ECX = (r32((uint32_t)(0x11a30488)));
  /* 11a26b1c push esi */
  push32((uint32_t)(ESI));
  /* 11a26b1d push edi */
  push32((uint32_t)(EDI));
  /* 11a26b1e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a26b20 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26b22 jne 0x11a26b54 */
  if (!C.zf) goto L_11a26b54;
  /* 11a26b24 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11a26b28 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a26b2b push eax */
  push32((uint32_t)(EAX));
  /* 11a26b2c push dword ptr [0x11a3049c] */
  push32((uint32_t)(r32((uint32_t)(0x11a3049c))));
  /* 11a26b32 push edi */
  push32((uint32_t)(EDI));
  /* 11a26b33 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a26b39 call dword ptr [0x11a2a04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a04c))), 0x11a26b3fu);
  /* 11a26b3f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26b41 je 0x11a26ba4 */
  if (C.zf) goto L_11a26ba4;
  /* 11a26b43 add dword ptr [0x11a30488], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11a30488))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11a30488), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a26b4a mov dword ptr [0x11a3049c], eax */
  w32((uint32_t)(0x11a3049c), (EAX));
  /* 11a26b4f mov eax, dword ptr [0x11a30498] */
  EAX = (r32((uint32_t)(0x11a30498)));
L_11a26b54:;
  /* 11a26b54 mov ecx, dword ptr [0x11a3049c] */
  ECX = (r32((uint32_t)(0x11a3049c)));
  /* 11a26b5a push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11a26b5f push 8 */
  push32((uint32_t)(0x8u));
  /* 11a26b61 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a26b64 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a26b6a lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a26b6d call dword ptr [0x11a2a0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0b0))), 0x11a26b73u);
  /* 11a26b73 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26b75 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11a26b78 je 0x11a26ba4 */
  if (C.zf) goto L_11a26ba4;
  /* 11a26b7a push 4 */
  push32((uint32_t)(0x4u));
  /* 11a26b7c push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a26b81 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a26b86 push edi */
  push32((uint32_t)(EDI));
  /* 11a26b87 call dword ptr [0x11a2a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a058))), 0x11a26b8du);
  /* 11a26b8d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26b8f mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a26b92 jne 0x11a26ba8 */
  if (!C.zf) goto L_11a26ba8;
  /* 11a26b94 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a26b97 push edi */
  push32((uint32_t)(EDI));
  /* 11a26b98 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a26b9e call dword ptr [0x11a2a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a098))), 0x11a26ba4u);
L_11a26ba4:;
  /* 11a26ba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a26ba6 jmp 0x11a26bbf */
  goto L_11a26bbf;
L_11a26ba8:;
  /* 11a26ba8 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a26bac mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a26bae mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11a26bb1 inc dword ptr [0x11a30498] */
  { uint32_t _r=(r32((uint32_t)(0x11a30498)))+1; w32((uint32_t)(0x11a30498), (_r)); fl_inc(_r,32); }
  /* 11a26bb7 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a26bba or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a26bbd mov eax, esi */
  EAX = (ESI);
L_11a26bbf:;
  /* 11a26bbf pop edi */
  EDI = (pop32());
  /* 11a26bc0 pop esi */
  ESI = (pop32());
  /* 11a26bc1 ret  */
  ESPCHK(0x11a26b11u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc2 @ 0x11a26bc2 (251 bytes, 85 insns) */
void f_11a26bc2(void) {
  FTRACE(0x11a26bc2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26bc2 push ebp */
  push32((uint32_t)(EBP));
  /* 11a26bc3 mov ebp, esp */
  EBP = (ESP);
  /* 11a26bc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a26bc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a26bc9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a26bca push esi */
  push32((uint32_t)(ESI));
  /* 11a26bcb push edi */
  push32((uint32_t)(EDI));
  /* 11a26bcc mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11a26bcf mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a26bd2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a26bd4:;
  /* 11a26bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26bd6 jl 0x11a26bdd */
  if ((C.sf!=C.of)) goto L_11a26bdd;
  /* 11a26bd8 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a26bda inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a26bdb jmp 0x11a26bd4 */
  goto L_11a26bd4;
L_11a26bdd:;
  /* 11a26bdd mov eax, ebx */
  EAX = (EBX);
  /* 11a26bdf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a26be1 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a26be7 pop edx */
  EDX = (pop32());
  /* 11a26be8 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11a26bef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a26bf2:;
  /* 11a26bf2 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11a26bf5 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11a26bf8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26bfb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a26bfc jne 0x11a26bf2 */
  if (!C.zf) goto L_11a26bf2;
  /* 11a26bfe mov edi, ebx */
  EDI = (EBX);
  /* 11a26c00 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a26c02 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11a26c05 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26c08 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a26c0d push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a26c12 push edi */
  push32((uint32_t)(EDI));
  /* 11a26c13 call dword ptr [0x11a2a058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a058))), 0x11a26c19u);
  /* 11a26c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26c1b jne 0x11a26c25 */
  if (!C.zf) goto L_11a26c25;
  /* 11a26c1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a26c20 jmp 0x11a26cb8 */
  goto L_11a26cb8;
L_11a26c25:;
  /* 11a26c25 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11a26c2b cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26c2d ja 0x11a26c6b */
  if ((!C.cf&&!C.zf)) goto L_11a26c6b;
  /* 11a26c2f lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11a26c32:;
  /* 11a26c32 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a26c36 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11a26c3d lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11a26c43 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11a26c4a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a26c4c lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11a26c52 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a26c55 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11a26c5f add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26c64 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11a26c67 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26c69 jbe 0x11a26c32 */
  if ((C.cf||C.zf)) goto L_11a26c32;
L_11a26c6b:;
  /* 11a26c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a26c6e lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11a26c71 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26c76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a26c78 pop edi */
  EDI = (pop32());
  /* 11a26c79 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a26c7c mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a26c7f lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11a26c82 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11a26c85 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a26c88 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a26c8d mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11a26c94 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11a26c97 mov cl, al */
  CL = (AL);
  /* 11a26c99 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a26c9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a26c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a26ca0 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11a26ca3 jne 0x11a26ca8 */
  if (!C.zf) goto L_11a26ca8;
  /* 11a26ca5 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11a26ca8:;
  /* 11a26ca8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a26cad mov ecx, ebx */
  ECX = (EBX);
  /* 11a26caf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a26cb1 not edx */
  EDX = (~(EDX));
  /* 11a26cb3 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a26cb6 mov eax, ebx */
  EAX = (EBX);
L_11a26cb8:;
  /* 11a26cb8 pop edi */
  EDI = (pop32());
  /* 11a26cb9 pop esi */
  ESI = (pop32());
  /* 11a26cba pop ebx */
  EBX = (pop32());
  /* 11a26cbb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a26cbc ret  */
  ESPCHK(0x11a26bc2u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cbd @ 0x11a26cbd (324 bytes, 102 insns) */
void f_11a26cbd(void) {
  FTRACE(0x11a26cbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26cbd cmp dword ptr [0x11a2c9d8], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11a2c9d8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26cc4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a26cc5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a26cc6 push esi */
  push32((uint32_t)(ESI));
  /* 11a26cc7 push edi */
  push32((uint32_t)(EDI));
  /* 11a26cc8 jne 0x11a26cd1 */
  if (!C.zf) goto L_11a26cd1;
  /* 11a26cca mov esi, 0x11a2c9c8 */
  ESI = (0x11a2c9c8u);
  /* 11a26ccf jmp 0x11a26cee */
  goto L_11a26cee;
L_11a26cd1:;
  /* 11a26cd1 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11a26cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26cd8 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a26cde call dword ptr [0x11a2a0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a0b0))), 0x11a26ce4u);
  /* 11a26ce4 mov esi, eax */
  ESI = (EAX);
  /* 11a26ce6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a26ce8 je 0x11a26dfa */
  if (C.zf) goto L_11a26dfa;
L_11a26cee:;
  /* 11a26cee mov ebp, dword ptr [0x11a2a058] */
  EBP = (r32((uint32_t)(0x11a2a058)));
  /* 11a26cf4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a26cf6 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a26cfb push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11a26d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26d02 call ebp */
  call_ind((uint32_t)(EBP), 0x11a26d04u);
  /* 11a26d04 mov edi, eax */
  EDI = (EAX);
  /* 11a26d06 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a26d08 je 0x11a26de3 */
  if (C.zf) goto L_11a26de3;
  /* 11a26d0e push 4 */
  push32((uint32_t)(0x4u));
  /* 11a26d10 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11a26d15 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a26d1a push ebx */
  push32((uint32_t)(EBX));
  /* 11a26d1b push edi */
  push32((uint32_t)(EDI));
  /* 11a26d1c call ebp */
  call_ind((uint32_t)(EBP), 0x11a26d1eu);
  /* 11a26d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26d20 je 0x11a26dd5 */
  if (C.zf) goto L_11a26dd5;
  /* 11a26d26 mov eax, 0x11a2c9c8 */
  EAX = (0x11a2c9c8u);
  /* 11a26d2b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26d2d jne 0x11a26d4d */
  if (!C.zf) goto L_11a26d4d;
  /* 11a26d2f cmp dword ptr [0x11a2c9c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a2c9c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26d36 jne 0x11a26d3d */
  if (!C.zf) goto L_11a26d3d;
  /* 11a26d38 mov dword ptr [0x11a2c9c8], eax */
  w32((uint32_t)(0x11a2c9c8), (EAX));
L_11a26d3d:;
  /* 11a26d3d cmp dword ptr [0x11a2c9cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a2c9cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26d44 jne 0x11a26d62 */
  if (!C.zf) goto L_11a26d62;
  /* 11a26d46 mov dword ptr [0x11a2c9cc], eax */
  w32((uint32_t)(0x11a2c9cc), (EAX));
  /* 11a26d4b jmp 0x11a26d62 */
  goto L_11a26d62;
L_11a26d4d:;
  /* 11a26d4d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a26d4f mov eax, dword ptr [0x11a2c9cc] */
  EAX = (r32((uint32_t)(0x11a2c9cc)));
  /* 11a26d54 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11a26d57 mov dword ptr [0x11a2c9cc], esi */
  w32((uint32_t)(0x11a2c9cc), (ESI));
  /* 11a26d5d mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a26d60 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11a26d62:;
  /* 11a26d62 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 11a26d68 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 11a26d6e mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11a26d71 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11a26d74 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 11a26d77 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 11a26d7a mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11a26d7d xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11a26d7f mov ecx, 0xf1 */
  ECX = (0xf1u);
L_11a26d84:;
  /* 11a26d84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a26d86 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26d89 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 11a26d8c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a26d8d and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a26d8f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a26d90 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a26d91 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a26d93 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a26d96 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26d99 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26d9f jl 0x11a26d84 */
  if ((C.sf!=C.of)) goto L_11a26d84;
  /* 11a26da1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a26da2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26da4 push edi */
  push32((uint32_t)(EDI));
  /* 11a26da5 call 0x11a28bd0 */
  push32(0x11a26daau); f_11a28bd0();
  /* 11a26daa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a26dad:;
  /* 11a26dad mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a26db0 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26db2 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26db4 jae 0x11a26dd1 */
  if (!C.cf) goto L_11a26dd1;
  /* 11a26db6 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11a26dbd lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11a26dc0 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a26dc2 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 11a26dc9 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26dcf jmp 0x11a26dad */
  goto L_11a26dad;
L_11a26dd1:;
  /* 11a26dd1 mov eax, esi */
  EAX = (ESI);
  /* 11a26dd3 jmp 0x11a26dfc */
  goto L_11a26dfc;
L_11a26dd5:;
  /* 11a26dd5 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a26dda push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26ddc push edi */
  push32((uint32_t)(EDI));
  /* 11a26ddd call dword ptr [0x11a2a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a054))), 0x11a26de3u);
L_11a26de3:;
  /* 11a26de3 cmp esi, 0x11a2c9c8 */
  { uint32_t _a=(ESI),_b=(0x11a2c9c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26de9 je 0x11a26dfa */
  if (C.zf) goto L_11a26dfa;
  /* 11a26deb push esi */
  push32((uint32_t)(ESI));
  /* 11a26dec push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26dee push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a26df4 call dword ptr [0x11a2a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a098))), 0x11a26dfau);
L_11a26dfa:;
  /* 11a26dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a26dfc:;
  /* 11a26dfc pop edi */
  EDI = (pop32());
  /* 11a26dfd pop esi */
  ESI = (pop32());
  /* 11a26dfe pop ebp */
  EBP = (pop32());
  /* 11a26dff pop ebx */
  EBX = (pop32());
  /* 11a26e00 ret  */
  ESPCHK(0x11a26cbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10006e01 @ 0x11a26e01 (86 bytes, 27 insns) */
void f_11a26e01(void) {
  FTRACE(0x11a26e01u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26e01 push esi */
  push32((uint32_t)(ESI));
  /* 11a26e02 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a26e06 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a26e0b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26e0d push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a26e10 call dword ptr [0x11a2a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a054))), 0x11a26e16u);
  /* 11a26e16 cmp dword ptr [0x11a2e9e8], esi */
  { uint32_t _a=(r32((uint32_t)(0x11a2e9e8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26e1c jne 0x11a26e26 */
  if (!C.zf) goto L_11a26e26;
  /* 11a26e1e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a26e21 mov dword ptr [0x11a2e9e8], eax */
  w32((uint32_t)(0x11a2e9e8), (EAX));
L_11a26e26:;
  /* 11a26e26 cmp esi, 0x11a2c9c8 */
  { uint32_t _a=(ESI),_b=(0x11a2c9c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26e2c je 0x11a26e4e */
  if (C.zf) goto L_11a26e4e;
  /* 11a26e2e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a26e31 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a26e33 push esi */
  push32((uint32_t)(ESI));
  /* 11a26e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a26e36 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a26e38 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a26e3a mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11a26e3d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a26e40 push dword ptr [0x11a304a4] */
  push32((uint32_t)(r32((uint32_t)(0x11a304a4))));
  /* 11a26e46 call dword ptr [0x11a2a098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a098))), 0x11a26e4cu);
  /* 11a26e4c pop esi */
  ESI = (pop32());
  /* 11a26e4d ret  */
  ESPCHK(0x11a26e01u, _esp0);
  ESP += 4; return;
L_11a26e4e:;
  /* 11a26e4e or dword ptr [0x11a2c9d8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a2c9d8)))|(0xffffffffu); w32((uint32_t)(0x11a2c9d8), (_r)); fl_logic(_r,32); }
  /* 11a26e55 pop esi */
  ESI = (pop32());
  /* 11a26e56 ret  */
  ESPCHK(0x11a26e01u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e57 @ 0x11a26e57 (194 bytes, 66 insns) */
void f_11a26e57(void) {
  FTRACE(0x11a26e57u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26e57 push ebp */
  push32((uint32_t)(EBP));
  /* 11a26e58 mov ebp, esp */
  EBP = (ESP);
  /* 11a26e5a push ecx */
  push32((uint32_t)(ECX));
  /* 11a26e5b push ebx */
  push32((uint32_t)(EBX));
  /* 11a26e5c push esi */
  push32((uint32_t)(ESI));
  /* 11a26e5d mov esi, dword ptr [0x11a2c9cc] */
  ESI = (r32((uint32_t)(0x11a2c9cc)));
  /* 11a26e63 push edi */
  push32((uint32_t)(EDI));
L_11a26e64:;
  /* 11a26e64 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26e68 je 0x11a26f02 */
  if (C.zf) goto L_11a26f02;
  /* 11a26e6e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a26e72 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 11a26e78 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_11a26e7d:;
  /* 11a26e7d cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26e83 jne 0x11a26ebe */
  if (!C.zf) goto L_11a26ebe;
  /* 11a26e85 mov eax, ebx */
  EAX = (EBX);
  /* 11a26e87 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a26e8c add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26e8f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a26e94 push eax */
  push32((uint32_t)(EAX));
  /* 11a26e95 call dword ptr [0x11a2a054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a2a054))), 0x11a26e9bu);
  /* 11a26e9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26e9d je 0x11a26ebe */
  if (C.zf) goto L_11a26ebe;
  /* 11a26e9f or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11a26ea2 dec dword ptr [0x11a3005c] */
  { uint32_t _r=(r32((uint32_t)(0x11a3005c)))-1; w32((uint32_t)(0x11a3005c), (_r)); fl_dec(_r,32); }
  /* 11a26ea8 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11a26eab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a26ead je 0x11a26eb3 */
  if (C.zf) goto L_11a26eb3;
  /* 11a26eaf cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26eb1 jbe 0x11a26eb6 */
  if ((C.cf||C.zf)) goto L_11a26eb6;
L_11a26eb3:;
  /* 11a26eb3 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11a26eb6:;
  /* 11a26eb6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a26eb9 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 11a26ebc je 0x11a26ecb */
  if (C.zf) goto L_11a26ecb;
L_11a26ebe:;
  /* 11a26ebe sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26ec4 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26ec7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a26ec9 jge 0x11a26e7d */
  if ((C.sf==C.of)) goto L_11a26e7d;
L_11a26ecb:;
  /* 11a26ecb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26ecf mov ecx, esi */
  ECX = (ESI);
  /* 11a26ed1 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11a26ed4 je 0x11a26f02 */
  if (C.zf) goto L_11a26f02;
  /* 11a26ed6 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26eda jne 0x11a26f02 */
  if (!C.zf) goto L_11a26f02;
  /* 11a26edc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a26ede lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11a26ee1 pop edx */
  EDX = (pop32());
L_11a26ee2:;
  /* 11a26ee2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26ee5 jne 0x11a26ef3 */
  if (!C.zf) goto L_11a26ef3;
  /* 11a26ee7 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a26ee8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a26eeb cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26ef1 jl 0x11a26ee2 */
  if ((C.sf!=C.of)) goto L_11a26ee2;
L_11a26ef3:;
  /* 11a26ef3 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26ef9 jne 0x11a26f02 */
  if (!C.zf) goto L_11a26f02;
  /* 11a26efb push ecx */
  push32((uint32_t)(ECX));
  /* 11a26efc call 0x11a26e01 */
  push32(0x11a26f01u); f_11a26e01();
  /* 11a26f01 pop ecx */
  ECX = (pop32());
L_11a26f02:;
  /* 11a26f02 cmp esi, dword ptr [0x11a2c9cc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a2c9cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26f08 je 0x11a26f14 */
  if (C.zf) goto L_11a26f14;
  /* 11a26f0a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26f0e jg 0x11a26e64 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a26e64;
L_11a26f14:;
  /* 11a26f14 pop edi */
  EDI = (pop32());
  /* 11a26f15 pop esi */
  ESI = (pop32());
  /* 11a26f16 pop ebx */
  EBX = (pop32());
  /* 11a26f17 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a26f18 ret  */
  ESPCHK(0x11a26e57u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f19 @ 0x11a26f19 (87 bytes, 34 insns) */
void f_11a26f19(void) {
  FTRACE(0x11a26f19u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a26f19 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a26f1d mov edx, 0x11a2c9c8 */
  EDX = (0x11a2c9c8u);
  /* 11a26f22 push esi */
  push32((uint32_t)(ESI));
  /* 11a26f23 mov ecx, edx */
  ECX = (EDX);
L_11a26f25:;
  /* 11a26f25 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26f28 jbe 0x11a26f2f */
  if ((C.cf||C.zf)) goto L_11a26f2f;
  /* 11a26f2a cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26f2d jb 0x11a26f37 */
  if (C.cf) goto L_11a26f37;
L_11a26f2f:;
  /* 11a26f2f mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11a26f31 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26f33 je 0x11a26f6c */
  if (C.zf) goto L_11a26f6c;
  /* 11a26f35 jmp 0x11a26f25 */
  goto L_11a26f25;
L_11a26f37:;
  /* 11a26f37 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 11a26f39 jne 0x11a26f6c */
  if (!C.zf) goto L_11a26f6c;
  /* 11a26f3b mov esi, eax */
  ESI = (EAX);
  /* 11a26f3d mov edx, 0x100 */
  EDX = (0x100u);
  /* 11a26f42 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a26f48 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a26f4a jb 0x11a26f6c */
  if (C.cf) goto L_11a26f6c;
  /* 11a26f4c mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11a26f50 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a26f52 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a26f56 mov ecx, eax */
  ECX = (EAX);
  /* 11a26f58 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 11a26f5d sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26f5f mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11a26f61 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a26f63 pop esi */
  ESI = (pop32());
  /* 11a26f64 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a26f67 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 11a26f6b ret  */
  ESPCHK(0x11a26f19u, _esp0);
  ESP += 4; return;
L_11a26f6c:;
  /* 11a26f6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a26f6e pop esi */
  ESI = (pop32());
  /* 11a26f6f ret  */
  ESPCHK(0x11a26f19u, _esp0);
  ESP += 4; return;
}

