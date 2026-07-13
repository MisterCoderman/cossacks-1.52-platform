#include "recomp.h"

/* FUN_10007050 @ 0x10d17050 (490 bytes, 165 insns) */
void f_10d17050(void) {
  FTRACE(0x10d17050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17050 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17051 mov ebp, esp */
  EBP = (ESP);
  /* 10d17053 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17056 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1705a jne 0x10d1706d */
  if (!C.zf) goto L_10d1706d;
  /* 10d1705c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1705f push eax */
  push32((uint32_t)(EAX));
  /* 10d17060 call 0x10d16ea0 */
  push32(0x10d17065u); f_10d16ea0();
  /* 10d17065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17068 jmp 0x10d17236 */
  goto L_10d17236;
L_10d1706d:;
  /* 10d1706d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17071 jne 0x10d17086 */
  if (!C.zf) goto L_10d17086;
  /* 10d17073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17076 push ecx */
  push32((uint32_t)(ECX));
  /* 10d17077 call 0x10d17240 */
  push32(0x10d1707cu); f_10d17240();
  /* 10d1707c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1707f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d17081 jmp 0x10d17236 */
  goto L_10d17236;
L_10d17086:;
  /* 10d17086 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1708d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17091 ja 0x10d17209 */
  if ((!C.cf&&!C.zf)) goto L_10d17209;
  /* 10d17097 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d17099 call 0x10d16ad0 */
  push32(0x10d1709eu); f_10d16ad0();
  /* 10d1709e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d170a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d170a4 push edx */
  push32((uint32_t)(EDX));
  /* 10d170a5 call 0x10d173d0 */
  push32(0x10d170aau); f_10d173d0();
  /* 10d170aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d170ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d170b0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d170b4 je 0x10d171cc */
  if (C.zf) goto L_10d171cc;
  /* 10d170ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d170bd cmp eax, dword ptr [0x10d3cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d170c3 ja 0x10d17140 */
  if ((!C.cf&&!C.zf)) goto L_10d17140;
  /* 10d170c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d170c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d170c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d170cc push edx */
  push32((uint32_t)(EDX));
  /* 10d170cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d170d0 push eax */
  push32((uint32_t)(EAX));
  /* 10d170d1 call 0x10d182a0 */
  push32(0x10d170d6u); f_10d182a0();
  /* 10d170d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d170d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d170db je 0x10d170e5 */
  if (C.zf) goto L_10d170e5;
  /* 10d170dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d170e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d170e3 jmp 0x10d17140 */
  goto L_10d17140;
L_10d170e5:;
  /* 10d170e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d170e8 push edx */
  push32((uint32_t)(EDX));
  /* 10d170e9 call 0x10d17a60 */
  push32(0x10d170eeu); f_10d17a60();
  /* 10d170ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d170f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d170f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d170f8 je 0x10d17140 */
  if (C.zf) goto L_10d17140;
  /* 10d170fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d170fd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10d17100 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17103 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d17106 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17109 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1710c jae 0x10d17116 */
  if (!C.cf) goto L_10d17116;
  /* 10d1710e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17111 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d17114 jmp 0x10d1711c */
  goto L_10d1711c;
L_10d17116:;
  /* 10d17116 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d17119 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d1711c:;
  /* 10d1711c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1711f push edx */
  push32((uint32_t)(EDX));
  /* 10d17120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17123 push eax */
  push32((uint32_t)(EAX));
  /* 10d17124 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d17127 push ecx */
  push32((uint32_t)(ECX));
  /* 10d17128 call 0x10d199b0 */
  push32(0x10d1712du); f_10d199b0();
  /* 10d1712d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17130 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17133 push edx */
  push32((uint32_t)(EDX));
  /* 10d17134 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d17137 push eax */
  push32((uint32_t)(EAX));
  /* 10d17138 call 0x10d17490 */
  push32(0x10d1713du); f_10d17490();
  /* 10d1713d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d17140:;
  /* 10d17140 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17144 jne 0x10d171c0 */
  if (!C.zf) goto L_10d171c0;
  /* 10d17146 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1714a jne 0x10d17153 */
  if (!C.zf) goto L_10d17153;
  /* 10d1714c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10d17153:;
  /* 10d17153 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d17156 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17159 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1715c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d1715f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d17162 push edx */
  push32((uint32_t)(EDX));
  /* 10d17163 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d17165 mov eax, dword ptr [0x10d3fdcc] */
  EAX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d1716a push eax */
  push32((uint32_t)(EAX));
  /* 10d1716b call dword ptr [0x10d40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40330))), 0x10d17171u);
  /* 10d17171 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d17174 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17178 je 0x10d171c0 */
  if (C.zf) goto L_10d171c0;
  /* 10d1717a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1717d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d17180 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17183 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d17186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17189 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1718c jae 0x10d17196 */
  if (!C.cf) goto L_10d17196;
  /* 10d1718e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17191 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d17194 jmp 0x10d1719c */
  goto L_10d1719c;
L_10d17196:;
  /* 10d17196 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d17199 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d1719c:;
  /* 10d1719c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1719f push eax */
  push32((uint32_t)(EAX));
  /* 10d171a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d171a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d171a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d171a7 push edx */
  push32((uint32_t)(EDX));
  /* 10d171a8 call 0x10d199b0 */
  push32(0x10d171adu); f_10d199b0();
  /* 10d171ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d171b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d171b3 push eax */
  push32((uint32_t)(EAX));
  /* 10d171b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d171b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d171b8 call 0x10d17490 */
  push32(0x10d171bdu); f_10d17490();
  /* 10d171bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d171c0:;
  /* 10d171c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d171c2 call 0x10d16b70 */
  push32(0x10d171c7u); f_10d16b70();
  /* 10d171c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d171ca jmp 0x10d17209 */
  goto L_10d17209;
L_10d171cc:;
  /* 10d171cc push 9 */
  push32((uint32_t)(0x9u));
  /* 10d171ce call 0x10d16b70 */
  push32(0x10d171d3u); f_10d16b70();
  /* 10d171d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d171d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d171da jne 0x10d171e3 */
  if (!C.zf) goto L_10d171e3;
  /* 10d171dc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10d171e3:;
  /* 10d171e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d171e6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d171e9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10d171ec mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10d171ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d171f2 push eax */
  push32((uint32_t)(EAX));
  /* 10d171f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d171f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d171f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d171f9 mov edx, dword ptr [0x10d3fdcc] */
  EDX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d171ff push edx */
  push32((uint32_t)(EDX));
  /* 10d17200 call dword ptr [0x10d40334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40334))), 0x10d17206u);
  /* 10d17206 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d17209:;
  /* 10d17209 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1720d jne 0x10d17218 */
  if (!C.zf) goto L_10d17218;
  /* 10d1720f cmp dword ptr [0x10d3e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17216 jne 0x10d1721d */
  if (!C.zf) goto L_10d1721d;
L_10d17218:;
  /* 10d17218 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1721b jmp 0x10d17236 */
  goto L_10d17236;
L_10d1721d:;
  /* 10d1721d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d17220 push eax */
  push32((uint32_t)(EAX));
  /* 10d17221 call 0x10d16e10 */
  push32(0x10d17226u); f_10d16e10();
  /* 10d17226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17229 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1722b jne 0x10d17231 */
  if (!C.zf) goto L_10d17231;
  /* 10d1722d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1722f jmp 0x10d17236 */
  goto L_10d17236;
L_10d17231:;
  /* 10d17231 jmp 0x10d17086 */
  goto L_10d17086;
L_10d17236:;
  /* 10d17236 mov esp, ebp */
  ESP = (EBP);
  /* 10d17238 pop ebp */
  EBP = (pop32());
  /* 10d17239 ret  */
  ESPCHK(0x10d17050u, _esp0);
  ESP += 4; return;
}

/* FUN_10007240 @ 0x10d17240 (104 bytes, 38 insns) */
void f_10d17240(void) {
  FTRACE(0x10d17240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17240 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17241 mov ebp, esp */
  EBP = (ESP);
  /* 10d17243 push ecx */
  push32((uint32_t)(ECX));
  /* 10d17244 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17248 jne 0x10d1724c */
  if (!C.zf) goto L_10d1724c;
  /* 10d1724a jmp 0x10d172a4 */
  goto L_10d172a4;
L_10d1724c:;
  /* 10d1724c push 9 */
  push32((uint32_t)(0x9u));
  /* 10d1724e call 0x10d16ad0 */
  push32(0x10d17253u); f_10d16ad0();
  /* 10d17253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17259 push eax */
  push32((uint32_t)(EAX));
  /* 10d1725a call 0x10d173d0 */
  push32(0x10d1725fu); f_10d173d0();
  /* 10d1725f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17262 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d17265 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17269 je 0x10d17287 */
  if (C.zf) goto L_10d17287;
  /* 10d1726b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1726e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1726f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17272 push edx */
  push32((uint32_t)(EDX));
  /* 10d17273 call 0x10d17490 */
  push32(0x10d17278u); f_10d17490();
  /* 10d17278 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1727b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d1727d call 0x10d16b70 */
  push32(0x10d17282u); f_10d16b70();
  /* 10d17282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17285 jmp 0x10d172a4 */
  goto L_10d172a4;
L_10d17287:;
  /* 10d17287 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d17289 call 0x10d16b70 */
  push32(0x10d1728eu); f_10d16b70();
  /* 10d1728e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17294 push eax */
  push32((uint32_t)(EAX));
  /* 10d17295 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d17297 mov ecx, dword ptr [0x10d3fdcc] */
  ECX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d1729d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1729e call dword ptr [0x10d40310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40310))), 0x10d172a4u);
L_10d172a4:;
  /* 10d172a4 mov esp, ebp */
  ESP = (EBP);
  /* 10d172a6 pop ebp */
  EBP = (pop32());
  /* 10d172a7 ret  */
  ESPCHK(0x10d17240u, _esp0);
  ESP += 4; return;
}

/* FUN_100072b0 @ 0x10d172b0 (116 bytes, 34 insns) */
void f_10d172b0(void) {
  FTRACE(0x10d172b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d172b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d172b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d172b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d172b4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10d172bb push 9 */
  push32((uint32_t)(0x9u));
  /* 10d172bd call 0x10d16ad0 */
  push32(0x10d172c2u); f_10d16ad0();
  /* 10d172c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d172c5 call 0x10d189c0 */
  push32(0x10d172cau); f_10d189c0();
  /* 10d172ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d172cc jge 0x10d172d5 */
  if ((C.sf==C.of)) goto L_10d172d5;
  /* 10d172ce mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10d172d5:;
  /* 10d172d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d172d7 call 0x10d16b70 */
  push32(0x10d172dcu); f_10d16b70();
  /* 10d172dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d172df push 0 */
  push32((uint32_t)(0x0u));
  /* 10d172e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d172e3 mov eax, dword ptr [0x10d3fdcc] */
  EAX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d172e8 push eax */
  push32((uint32_t)(EAX));
  /* 10d172e9 call dword ptr [0x10d40240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40240))), 0x10d172efu);
  /* 10d172ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d172f1 jne 0x10d1731d */
  if (!C.zf) goto L_10d1731d;
  /* 10d172f3 call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d172f9u);
  /* 10d172f9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d172fc jne 0x10d17316 */
  if (!C.zf) goto L_10d17316;
  /* 10d172fe call 0x10d1afb0 */
  push32(0x10d17303u); f_10d1afb0();
  /* 10d17303 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10d17309 call 0x10d1afa0 */
  push32(0x10d1730eu); f_10d1afa0();
  /* 10d1730e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10d17314 jmp 0x10d1731d */
  goto L_10d1731d;
L_10d17316:;
  /* 10d17316 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10d1731d:;
  /* 10d1731d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17320 mov esp, ebp */
  ESP = (EBP);
  /* 10d17322 pop ebp */
  EBP = (pop32());
  /* 10d17323 ret  */
  ESPCHK(0x10d172b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007330 @ 0x10d17330 (10 bytes, 5 insns) */
void f_10d17330(void) {
  FTRACE(0x10d17330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17330 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17331 mov ebp, esp */
  EBP = (ESP);
  /* 10d17333 call 0x10d172b0 */
  push32(0x10d17338u); f_10d172b0();
  /* 10d17338 pop ebp */
  EBP = (pop32());
  /* 10d17339 ret  */
  ESPCHK(0x10d17330u, _esp0);
  ESP += 4; return;
}

/* FUN_10007340 @ 0x10d17340 (10 bytes, 5 insns) */
void f_10d17340(void) {
  FTRACE(0x10d17340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17340 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17341 mov ebp, esp */
  EBP = (ESP);
  /* 10d17343 mov eax, dword ptr [0x10d3cc94] */
  EAX = (r32((uint32_t)(0x10d3cc94)));
  /* 10d17348 pop ebp */
  EBP = (pop32());
  /* 10d17349 ret  */
  ESPCHK(0x10d17340u, _esp0);
  ESP += 4; return;
}

/* FUN_10007350 @ 0x10d17350 (31 bytes, 11 insns) */
void f_10d17350(void) {
  FTRACE(0x10d17350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17350 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17351 mov ebp, esp */
  EBP = (ESP);
  /* 10d17353 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1735a jbe 0x10d17360 */
  if ((C.cf||C.zf)) goto L_10d17360;
  /* 10d1735c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1735e jmp 0x10d1736d */
  goto L_10d1736d;
L_10d17360:;
  /* 10d17360 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17363 mov dword ptr [0x10d3cc94], eax */
  w32((uint32_t)(0x10d3cc94), (EAX));
  /* 10d17368 mov eax, 1 */
  EAX = (0x1u);
L_10d1736d:;
  /* 10d1736d pop ebp */
  EBP = (pop32());
  /* 10d1736e ret  */
  ESPCHK(0x10d17350u, _esp0);
  ESP += 4; return;
}

/* FUN_10007370 @ 0x10d17370 (89 bytes, 20 insns) */
void f_10d17370(void) {
  FTRACE(0x10d17370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17370 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17371 mov ebp, esp */
  EBP = (ESP);
  /* 10d17373 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10d17378 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1737a mov eax, dword ptr [0x10d3fdcc] */
  EAX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d1737f push eax */
  push32((uint32_t)(EAX));
  /* 10d17380 call dword ptr [0x10d40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40330))), 0x10d17386u);
  /* 10d17386 mov dword ptr [0x10d3fdc8], eax */
  w32((uint32_t)(0x10d3fdc8), (EAX));
  /* 10d1738b cmp dword ptr [0x10d3fdc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fdc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17392 jne 0x10d17398 */
  if (!C.zf) goto L_10d17398;
  /* 10d17394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d17396 jmp 0x10d173c7 */
  goto L_10d173c7;
L_10d17398:;
  /* 10d17398 mov ecx, dword ptr [0x10d3fdc8] */
  ECX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d1739e mov dword ptr [0x10d3fdbc], ecx */
  w32((uint32_t)(0x10d3fdbc), (ECX));
  /* 10d173a4 mov dword ptr [0x10d3fdc0], 0 */
  w32((uint32_t)(0x10d3fdc0), (0x0u));
  /* 10d173ae mov dword ptr [0x10d3fdc4], 0 */
  w32((uint32_t)(0x10d3fdc4), (0x0u));
  /* 10d173b8 mov dword ptr [0x10d3fda8], 0x10 */
  w32((uint32_t)(0x10d3fda8), (0x10u));
  /* 10d173c2 mov eax, 1 */
  EAX = (0x1u);
L_10d173c7:;
  /* 10d173c7 pop ebp */
  EBP = (pop32());
  /* 10d173c8 ret  */
  ESPCHK(0x10d17370u, _esp0);
  ESP += 4; return;
}

/* FUN_100073d0 @ 0x10d173d0 (85 bytes, 29 insns) */
void f_10d173d0(void) {
  FTRACE(0x10d173d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d173d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d173d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d173d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d173d6 mov eax, dword ptr [0x10d3fdc4] */
  EAX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d173db imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d173de mov ecx, dword ptr [0x10d3fdc8] */
  ECX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d173e4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d173e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d173e9 mov edx, dword ptr [0x10d3fdc8] */
  EDX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d173ef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d173f2:;
  /* 10d173f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d173f5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d173f8 jae 0x10d1741f */
  if (!C.cf) goto L_10d1741f;
  /* 10d173fa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d173fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17400 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17403 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d17406 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1740d jae 0x10d17414 */
  if (!C.cf) goto L_10d17414;
  /* 10d1740f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d17412 jmp 0x10d17421 */
  goto L_10d17421;
L_10d17414:;
  /* 10d17414 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d17417 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1741a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1741d jmp 0x10d173f2 */
  goto L_10d173f2;
L_10d1741f:;
  /* 10d1741f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d17421:;
  /* 10d17421 mov esp, ebp */
  ESP = (EBP);
  /* 10d17423 pop ebp */
  EBP = (pop32());
  /* 10d17424 ret  */
  ESPCHK(0x10d173d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x10d17430 (95 bytes, 33 insns) */
void f_10d17430(void) {
  FTRACE(0x10d17430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17430 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17431 mov ebp, esp */
  EBP = (ESP);
  /* 10d17433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17439 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1743c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1743f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d17442 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d17445 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10d17448 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1744b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d17450 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17453 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17455 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17458 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d1745b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1745d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1745f jne 0x10d17481 */
  if (!C.zf) goto L_10d17481;
  /* 10d17461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d17464 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10d17467 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d17469 jne 0x10d17481 */
  if (!C.zf) goto L_10d17481;
  /* 10d1746b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1746e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d17474 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d17476 je 0x10d17481 */
  if (C.zf) goto L_10d17481;
  /* 10d17478 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10d1747f jmp 0x10d17488 */
  goto L_10d17488;
L_10d17481:;
  /* 10d17481 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10d17488:;
  /* 10d17488 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1748b mov esp, ebp */
  ESP = (EBP);
  /* 10d1748d pop ebp */
  EBP = (pop32());
  /* 10d1748e ret  */
  ESPCHK(0x10d17430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x10d17490 (1485 bytes, 453 insns) */
void f_10d17490(void) {
  FTRACE(0x10d17490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17490 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17491 mov ebp, esp */
  EBP = (ESP);
  /* 10d17493 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17496 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17499 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1749c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10d1749f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d174a2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d174a5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d174a8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d174ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d174ae shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10d174b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d174b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d174b7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d174bd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d174c0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10d174c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d174ca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d174cd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d174d0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d174d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d174d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d174d8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d174db mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10d174de mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d174e1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d174e4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10d174e7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d174ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d174ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d174ef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d174f2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10d174f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d174f8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d174fb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d174fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d17500 jne 0x10d17628 */
  if (!C.zf) goto L_10d17628;
  /* 10d17506 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d17509 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d1750c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1750f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d17512 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17516 jbe 0x10d1751f */
  if ((C.cf||C.zf)) goto L_10d1751f;
  /* 10d17518 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10d1751f:;
  /* 10d1751f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17522 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17525 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d17528 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1752b jne 0x10d17601 */
  if (!C.zf) goto L_10d17601;
  /* 10d17531 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17535 jae 0x10d17596 */
  if (!C.cf) goto L_10d17596;
  /* 10d17537 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d1753c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1753f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17541 not eax */
  EAX = (~(EAX));
  /* 10d17543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17546 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17549 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d1754d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1754f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17552 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17555 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d17559 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d1755c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1755f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d17562 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d17565 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17568 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1756b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d1756e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17571 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17574 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d17578 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1757a jne 0x10d17594 */
  if (!C.zf) goto L_10d17594;
  /* 10d1757c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d17581 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d17584 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17586 not eax */
  EAX = (~(EAX));
  /* 10d17588 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1758b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d1758d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1758f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17592 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d17594:;
  /* 10d17594 jmp 0x10d17601 */
  goto L_10d17601;
L_10d17596:;
  /* 10d17596 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d17599 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1759c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d175a1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d175a3 not edx */
  EDX = (~(EDX));
  /* 10d175a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d175a8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d175ab mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d175b2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d175b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d175b7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d175ba mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10d175c1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d175c4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d175c7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d175ca sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d175cd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d175d0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d175d3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d175d6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d175d9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d175dc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d175e0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d175e2 jne 0x10d17601 */
  if (!C.zf) goto L_10d17601;
  /* 10d175e4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d175e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d175ea mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d175ef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d175f1 not edx */
  EDX = (~(EDX));
  /* 10d175f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d175f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d175f9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d175fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d175fe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d17601:;
  /* 10d17601 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17604 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d17607 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d1760a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d1760d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d17610 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17613 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d17616 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17619 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d1761c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d1761f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17622 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17625 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10d17628:;
  /* 10d17628 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1762b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d1762e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17631 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d17634 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17638 jbe 0x10d17641 */
  if ((C.cf||C.zf)) goto L_10d17641;
  /* 10d1763a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10d17641:;
  /* 10d17641 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d17644 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d17647 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d17649 jne 0x10d177a5 */
  if (!C.zf) goto L_10d177a5;
  /* 10d1764f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d17652 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17655 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10d17658 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1765b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d1765e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17661 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10d17664 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17668 jbe 0x10d17671 */
  if ((C.cf||C.zf)) goto L_10d17671;
  /* 10d1766a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10d17671:;
  /* 10d17671 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17674 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17677 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10d1767a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1767d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d17680 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17683 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d17686 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1768a jbe 0x10d17693 */
  if ((C.cf||C.zf)) goto L_10d17693;
  /* 10d1768c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10d17693:;
  /* 10d17693 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d17696 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17699 je 0x10d1779f */
  if (C.zf) goto L_10d1779f;
  /* 10d1769f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d176a2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d176a5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d176a8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d176ab jne 0x10d17781 */
  if (!C.zf) goto L_10d17781;
  /* 10d176b1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d176b5 jae 0x10d17716 */
  if (!C.cf) goto L_10d17716;
  /* 10d176b7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d176bc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d176bf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d176c1 not edx */
  EDX = (~(EDX));
  /* 10d176c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d176c6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d176c9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d176cd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d176cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d176d2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d176d5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d176d9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d176dc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d176df mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d176e2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d176e5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d176e8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d176eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d176ee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d176f1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d176f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d176f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d176fa jne 0x10d17714 */
  if (!C.zf) goto L_10d17714;
  /* 10d176fc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d17701 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d17704 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d17706 not edx */
  EDX = (~(EDX));
  /* 10d17708 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1770b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1770d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1770f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17712 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d17714:;
  /* 10d17714 jmp 0x10d17781 */
  goto L_10d17781;
L_10d17716:;
  /* 10d17716 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d17719 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1771c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d17721 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17723 not eax */
  EAX = (~(EAX));
  /* 10d17725 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17728 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d1772b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d17732 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d17734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17737 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d1773a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10d17741 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17744 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17747 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d1774a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d1774d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17750 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17753 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d17756 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17759 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1775c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d17760 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d17762 jne 0x10d17781 */
  if (!C.zf) goto L_10d17781;
  /* 10d17764 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d17767 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1776a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d1776f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17771 not eax */
  EAX = (~(EAX));
  /* 10d17773 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17776 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d17779 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1777b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1777e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d17781:;
  /* 10d17781 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d17784 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d17787 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d1778a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1778d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d17790 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d17793 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d17796 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d17799 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d1779c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10d1779f:;
  /* 10d1779f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d177a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10d177a5:;
  /* 10d177a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d177a8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d177ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d177ad jne 0x10d177bb */
  if (!C.zf) goto L_10d177bb;
  /* 10d177af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d177b2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d177b5 je 0x10d178cb */
  if (C.zf) goto L_10d178cb;
L_10d177bb:;
  /* 10d177bb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d177be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d177c1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10d177c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d177c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d177ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d177cd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d177d0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d177d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d177d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d177d9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10d177dc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d177df mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d177e2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d177e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d177e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d177eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d177ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d177f1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d177f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d177f7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d177fa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d177fd jne 0x10d178cb */
  if (!C.zf) goto L_10d178cb;
  /* 10d17803 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17807 jae 0x10d17864 */
  if (!C.cf) goto L_10d17864;
  /* 10d17809 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d1780c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1780f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d17813 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17816 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17819 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d1781c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d1781f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17822 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17825 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d17828 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1782a jne 0x10d17842 */
  if (!C.zf) goto L_10d17842;
  /* 10d1782c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d17831 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d17834 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d17836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17839 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1783b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1783d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17840 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d17842:;
  /* 10d17842 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d17847 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1784a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d1784c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1784f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17852 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d17856 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d17858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1785b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d1785e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d17862 jmp 0x10d178cb */
  goto L_10d178cb;
L_10d17864:;
  /* 10d17864 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17867 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1786a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d1786e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d17871 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17874 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d17877 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d1787a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d1787d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17880 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d17883 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d17885 jne 0x10d178a2 */
  if (!C.zf) goto L_10d178a2;
  /* 10d17887 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1788a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1788d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d17892 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d17894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17897 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1789a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1789c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1789f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d178a2:;
  /* 10d178a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d178a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d178a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d178ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d178af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d178b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d178b5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d178bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d178be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d178c1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d178c4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10d178cb:;
  /* 10d178cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d178ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d178d1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d178d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d178d6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d178d9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d178dc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10d178df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d178e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d178e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d178e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d178ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d178ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d178ef cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d178f2 jne 0x10d17a59 */
  if (!C.zf) goto L_10d17a59;
  /* 10d178f8 cmp dword ptr [0x10d3fdc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fdc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d178ff je 0x10d17a48 */
  if (C.zf) goto L_10d17a48;
  /* 10d17905 mov eax, dword ptr [0x10d3fdb8] */
  EAX = (r32((uint32_t)(0x10d3fdb8)));
  /* 10d1790a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10d1790d mov ecx, dword ptr [0x10d3fdc0] */
  ECX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d17913 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d17916 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17918 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d1791b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10d17920 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d17925 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17928 push eax */
  push32((uint32_t)(EAX));
  /* 10d17929 call dword ptr [0x10d40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40314))), 0x10d1792fu);
  /* 10d1792f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d17934 mov ecx, dword ptr [0x10d3fdb8] */
  ECX = (r32((uint32_t)(0x10d3fdb8)));
  /* 10d1793a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d1793c mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d17941 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d17944 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d17946 mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d1794c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d1794f mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d17954 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d17957 mov edx, dword ptr [0x10d3fdb8] */
  EDX = (r32((uint32_t)(0x10d3fdb8)));
  /* 10d1795d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10d17968 mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d1796d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d17970 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10d17973 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d17976 mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d1797b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1797e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10d17981 mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d17987 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d1798a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10d1798e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d17990 jne 0x10d179a6 */
  if (!C.zf) goto L_10d179a6;
  /* 10d17992 mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d17998 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d1799b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10d1799d mov ecx, dword ptr [0x10d3fdc0] */
  ECX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d179a3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10d179a6:;
  /* 10d179a6 mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d179ac cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d179b0 jne 0x10d17a48 */
  if (!C.zf) goto L_10d17a48;
  /* 10d179b6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d179bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d179bd mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d179c2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d179c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d179c6 call dword ptr [0x10d40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40314))), 0x10d179ccu);
  /* 10d179cc mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d179d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d179d5 push eax */
  push32((uint32_t)(EAX));
  /* 10d179d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d179d8 mov ecx, dword ptr [0x10d3fdcc] */
  ECX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d179de push ecx */
  push32((uint32_t)(ECX));
  /* 10d179df call dword ptr [0x10d40310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40310))), 0x10d179e5u);
  /* 10d179e5 mov edx, dword ptr [0x10d3fdc4] */
  EDX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d179eb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d179ee mov eax, dword ptr [0x10d3fdc8] */
  EAX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d179f3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d179f5 mov ecx, dword ptr [0x10d3fdc0] */
  ECX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d179fb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d179fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17a00 push eax */
  push32((uint32_t)(EAX));
  /* 10d17a01 mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d17a07 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17a0a push edx */
  push32((uint32_t)(EDX));
  /* 10d17a0b mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d17a10 push eax */
  push32((uint32_t)(EAX));
  /* 10d17a11 call 0x10d1afc0 */
  push32(0x10d17a16u); f_10d1afc0();
  /* 10d17a16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17a19 mov ecx, dword ptr [0x10d3fdc4] */
  ECX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d17a1f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17a22 mov dword ptr [0x10d3fdc4], ecx */
  w32((uint32_t)(0x10d3fdc4), (ECX));
  /* 10d17a28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17a2b cmp edx, dword ptr [0x10d3fdc0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d3fdc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17a31 jbe 0x10d17a3c */
  if ((C.cf||C.zf)) goto L_10d17a3c;
  /* 10d17a33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17a36 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17a39 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d17a3c:;
  /* 10d17a3c mov ecx, dword ptr [0x10d3fdc8] */
  ECX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d17a42 mov dword ptr [0x10d3fdbc], ecx */
  w32((uint32_t)(0x10d3fdbc), (ECX));
L_10d17a48:;
  /* 10d17a48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17a4b mov dword ptr [0x10d3fdc0], edx */
  w32((uint32_t)(0x10d3fdc0), (EDX));
  /* 10d17a51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17a54 mov dword ptr [0x10d3fdb8], eax */
  w32((uint32_t)(0x10d3fdb8), (EAX));
L_10d17a59:;
  /* 10d17a59 mov esp, ebp */
  ESP = (EBP);
  /* 10d17a5b pop ebp */
  EBP = (pop32());
  /* 10d17a5c ret  */
  ESPCHK(0x10d17490u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x10d17a60 (1334 bytes, 427 insns) */
void f_10d17a60(void) {
  FTRACE(0x10d17a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17a61 mov ebp, esp */
  EBP = (ESP);
  /* 10d17a63 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17a66 push esi */
  push32((uint32_t)(ESI));
  /* 10d17a67 mov eax, dword ptr [0x10d3fdc4] */
  EAX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d17a6c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d17a6f mov ecx, dword ptr [0x10d3fdc8] */
  ECX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d17a75 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17a77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d17a7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d17a7d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17a80 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10d17a83 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d17a86 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d17a89 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d17a8c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17a8f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d17a92 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17a96 jge 0x10d17aac */
  if ((C.sf==C.of)) goto L_10d17aac;
  /* 10d17a98 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d17a9b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d17a9e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d17aa0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d17aa3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10d17aaa jmp 0x10d17ac1 */
  goto L_10d17ac1;
L_10d17aac:;
  /* 10d17aac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d17ab3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d17ab6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17ab9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d17abc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17abe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10d17ac1:;
  /* 10d17ac1 mov ecx, dword ptr [0x10d3fdbc] */
  ECX = (r32((uint32_t)(0x10d3fdbc)));
  /* 10d17ac7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10d17aca:;
  /* 10d17aca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17acd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17ad0 jae 0x10d17af6 */
  if (!C.cf) goto L_10d17af6;
  /* 10d17ad2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17ad5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d17ad8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10d17ada mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17add mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d17ae0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10d17ae3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d17ae5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d17ae7 je 0x10d17aeb */
  if (C.zf) goto L_10d17aeb;
  /* 10d17ae9 jmp 0x10d17af6 */
  goto L_10d17af6;
L_10d17aeb:;
  /* 10d17aeb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17aee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17af1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d17af4 jmp 0x10d17aca */
  goto L_10d17aca;
L_10d17af6:;
  /* 10d17af6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17af9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17afc jne 0x10d17bdd */
  if (!C.zf) goto L_10d17bdd;
  /* 10d17b02 mov eax, dword ptr [0x10d3fdc8] */
  EAX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d17b07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10d17b0a:;
  /* 10d17b0a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b0d cmp ecx, dword ptr [0x10d3fdbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3fdbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17b13 jae 0x10d17b39 */
  if (!C.cf) goto L_10d17b39;
  /* 10d17b15 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b18 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d17b1b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10d17b1d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b20 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d17b23 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10d17b26 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d17b28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d17b2a je 0x10d17b2e */
  if (C.zf) goto L_10d17b2e;
  /* 10d17b2c jmp 0x10d17b39 */
  goto L_10d17b39;
L_10d17b2e:;
  /* 10d17b2e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b31 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17b34 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d17b37 jmp 0x10d17b0a */
  goto L_10d17b0a;
L_10d17b39:;
  /* 10d17b39 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b3c cmp ecx, dword ptr [0x10d3fdbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3fdbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17b42 jne 0x10d17bdd */
  if (!C.zf) goto L_10d17bdd;
L_10d17b48:;
  /* 10d17b48 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b4b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17b4e jae 0x10d17b66 */
  if (!C.cf) goto L_10d17b66;
  /* 10d17b50 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b53 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17b57 je 0x10d17b5b */
  if (C.zf) goto L_10d17b5b;
  /* 10d17b59 jmp 0x10d17b66 */
  goto L_10d17b66;
L_10d17b5b:;
  /* 10d17b5b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b5e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17b61 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d17b64 jmp 0x10d17b48 */
  goto L_10d17b48;
L_10d17b66:;
  /* 10d17b66 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b69 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17b6c jne 0x10d17bb7 */
  if (!C.zf) goto L_10d17bb7;
  /* 10d17b6e mov eax, dword ptr [0x10d3fdc8] */
  EAX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d17b73 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10d17b76:;
  /* 10d17b76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b79 cmp ecx, dword ptr [0x10d3fdbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3fdbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17b7f jae 0x10d17b97 */
  if (!C.cf) goto L_10d17b97;
  /* 10d17b81 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b84 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17b88 je 0x10d17b8c */
  if (C.zf) goto L_10d17b8c;
  /* 10d17b8a jmp 0x10d17b97 */
  goto L_10d17b97;
L_10d17b8c:;
  /* 10d17b8c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b8f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17b92 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d17b95 jmp 0x10d17b76 */
  goto L_10d17b76;
L_10d17b97:;
  /* 10d17b97 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17b9a cmp ecx, dword ptr [0x10d3fdbc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3fdbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17ba0 jne 0x10d17bb7 */
  if (!C.zf) goto L_10d17bb7;
  /* 10d17ba2 call 0x10d17fa0 */
  push32(0x10d17ba7u); f_10d17fa0();
  /* 10d17ba7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d17baa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17bae jne 0x10d17bb7 */
  if (!C.zf) goto L_10d17bb7;
  /* 10d17bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d17bb2 jmp 0x10d17f91 */
  goto L_10d17f91;
L_10d17bb7:;
  /* 10d17bb7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17bba push edx */
  push32((uint32_t)(EDX));
  /* 10d17bbb call 0x10d180b0 */
  push32(0x10d17bc0u); f_10d180b0();
  /* 10d17bc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17bc3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17bc6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d17bc9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d17bcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17bce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d17bd1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17bd4 jne 0x10d17bdd */
  if (!C.zf) goto L_10d17bdd;
  /* 10d17bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d17bd8 jmp 0x10d17f91 */
  goto L_10d17f91;
L_10d17bdd:;
  /* 10d17bdd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17be0 mov dword ptr [0x10d3fdbc], edx */
  w32((uint32_t)(0x10d3fdbc), (EDX));
  /* 10d17be6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17be9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d17bec mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10d17bef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17bf2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d17bf4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10d17bf7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17bfb je 0x10d17c20 */
  if (C.zf) goto L_10d17c20;
  /* 10d17bfd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17c00 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17c03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d17c06 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10d17c0a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17c0d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17c10 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10d17c13 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10d17c1a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10d17c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d17c1e jne 0x10d17c55 */
  if (!C.zf) goto L_10d17c55;
L_10d17c20:;
  /* 10d17c20 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10d17c27:;
  /* 10d17c27 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17c2a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17c2d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d17c30 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10d17c34 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17c37 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17c3a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10d17c3d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10d17c44 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10d17c46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d17c48 jne 0x10d17c55 */
  if (!C.zf) goto L_10d17c55;
  /* 10d17c4a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17c4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17c50 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10d17c53 jmp 0x10d17c27 */
  goto L_10d17c27;
L_10d17c55:;
  /* 10d17c55 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17c58 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d17c5e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17c61 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10d17c68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d17c6b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d17c72 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17c75 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17c78 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d17c7b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10d17c7f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d17c82 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17c86 jne 0x10d17ca2 */
  if (!C.zf) goto L_10d17ca2;
  /* 10d17c88 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10d17c8f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17c92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17c95 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d17c98 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10d17c9f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10d17ca2:;
  /* 10d17ca2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17ca6 jl 0x10d17cbb */
  if ((C.sf!=C.of)) goto L_10d17cbb;
  /* 10d17ca8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d17cab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d17cad mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d17cb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d17cb3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17cb6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d17cb9 jmp 0x10d17ca2 */
  goto L_10d17ca2;
L_10d17cbb:;
  /* 10d17cbb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d17cbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17cc1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10d17cc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d17cc8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17ccb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d17ccd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17cd0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d17cd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d17cd6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d17cd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17cdc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d17cdf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17ce3 jle 0x10d17cec */
  if ((C.zf||C.sf!=C.of)) goto L_10d17cec;
  /* 10d17ce5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10d17cec:;
  /* 10d17cec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d17cef cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17cf2 je 0x10d17f10 */
  if (C.zf) goto L_10d17f10;
  /* 10d17cf8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17cfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17cfe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d17d01 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17d04 jne 0x10d17dda */
  if (!C.zf) goto L_10d17dda;
  /* 10d17d0a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17d0e jge 0x10d17d6f */
  if ((C.sf==C.of)) goto L_10d17d6f;
  /* 10d17d10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d17d15 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d17d18 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17d1a not eax */
  EAX = (~(EAX));
  /* 10d17d1c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17d1f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17d22 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d17d26 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d17d28 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17d2b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17d2e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d17d32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17d35 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17d38 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d17d3b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d17d3e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17d41 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17d44 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d17d47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17d4a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17d4d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d17d51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d17d53 jne 0x10d17d6d */
  if (!C.zf) goto L_10d17d6d;
  /* 10d17d55 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d17d5a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d17d5d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17d5f not eax */
  EAX = (~(EAX));
  /* 10d17d61 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17d64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d17d66 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d17d68 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17d6b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d17d6d:;
  /* 10d17d6d jmp 0x10d17dda */
  goto L_10d17dda;
L_10d17d6f:;
  /* 10d17d6f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d17d72 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17d75 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d17d7a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d17d7c not edx */
  EDX = (~(EDX));
  /* 10d17d7e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17d81 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17d84 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d17d8b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d17d8d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17d90 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17d93 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10d17d9a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17d9d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17da0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d17da3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d17da6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17da9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17dac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d17daf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17db2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17db5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d17db9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d17dbb jne 0x10d17dda */
  if (!C.zf) goto L_10d17dda;
  /* 10d17dbd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d17dc0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17dc3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d17dc8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d17dca not edx */
  EDX = (~(EDX));
  /* 10d17dcc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17dcf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d17dd2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d17dd4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17dd7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d17dda:;
  /* 10d17dda mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17ddd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d17de0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17de3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d17de6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d17de9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17dec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d17def mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17df2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d17df5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d17df8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17dfc je 0x10d17f10 */
  if (C.zf) goto L_10d17f10;
  /* 10d17e02 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d17e05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17e08 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10d17e0b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d17e0e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17e11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d17e14 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d17e17 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d17e1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17e1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d17e20 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d17e23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d17e26 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17e29 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d17e2c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17e2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d17e32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17e35 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d17e38 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17e3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17e3e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d17e41 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17e44 jne 0x10d17f10 */
  if (!C.zf) goto L_10d17f10;
  /* 10d17e4a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17e4e jge 0x10d17eaa */
  if ((C.sf==C.of)) goto L_10d17eaa;
  /* 10d17e50 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17e53 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17e56 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d17e5a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17e5d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17e60 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d17e63 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d17e65 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17e68 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17e6b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d17e6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d17e70 jne 0x10d17e88 */
  if (!C.zf) goto L_10d17e88;
  /* 10d17e72 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d17e77 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d17e7a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17e7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17e7f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d17e81 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d17e83 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17e86 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d17e88:;
  /* 10d17e88 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d17e8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d17e90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d17e92 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17e95 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17e98 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d17e9c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d17e9e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17ea1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17ea4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d17ea8 jmp 0x10d17f10 */
  goto L_10d17f10;
L_10d17eaa:;
  /* 10d17eaa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17ead add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17eb0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d17eb4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17eb7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17eba mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d17ebd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d17ebf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17ec2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17ec5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d17ec8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d17eca jne 0x10d17ee7 */
  if (!C.zf) goto L_10d17ee7;
  /* 10d17ecc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d17ecf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17ed2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d17ed7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d17ed9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17edc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d17edf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d17ee1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17ee4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d17ee7:;
  /* 10d17ee7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d17eea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d17eed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d17ef2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d17ef4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17ef7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17efa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d17f01 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d17f03 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17f06 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17f09 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10d17f10:;
  /* 10d17f10 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17f14 je 0x10d17f2a */
  if (C.zf) goto L_10d17f2a;
  /* 10d17f16 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d17f1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d17f1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17f21 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17f24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d17f27 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10d17f2a:;
  /* 10d17f2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17f2d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17f30 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d17f33 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d17f36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17f39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17f3c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d17f3e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d17f41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17f44 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17f47 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17f4a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10d17f4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17f50 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d17f52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17f55 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d17f57 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17f5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17f5d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d17f5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d17f61 jne 0x10d17f83 */
  if (!C.zf) goto L_10d17f83;
  /* 10d17f63 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d17f66 cmp eax, dword ptr [0x10d3fdc0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3fdc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17f6c jne 0x10d17f83 */
  if (!C.zf) goto L_10d17f83;
  /* 10d17f6e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17f71 cmp ecx, dword ptr [0x10d3fdb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3fdb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17f77 jne 0x10d17f83 */
  if (!C.zf) goto L_10d17f83;
  /* 10d17f79 mov dword ptr [0x10d3fdc0], 0 */
  w32((uint32_t)(0x10d3fdc0), (0x0u));
L_10d17f83:;
  /* 10d17f83 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d17f86 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d17f89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d17f8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d17f8e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10d17f91:;
  /* 10d17f91 pop esi */
  ESI = (pop32());
  /* 10d17f92 mov esp, ebp */
  ESP = (EBP);
  /* 10d17f94 pop ebp */
  EBP = (pop32());
  /* 10d17f95 ret  */
  ESPCHK(0x10d17a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10d17fa0 (271 bytes, 78 insns) */
void f_10d17fa0(void) {
  FTRACE(0x10d17fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d17fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d17fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10d17fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d17fa4 mov eax, dword ptr [0x10d3fdc4] */
  EAX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d17fa9 cmp eax, dword ptr [0x10d3fda8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3fda8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17faf jne 0x10d17ffb */
  if (!C.zf) goto L_10d17ffb;
  /* 10d17fb1 mov ecx, dword ptr [0x10d3fda8] */
  ECX = (r32((uint32_t)(0x10d3fda8)));
  /* 10d17fb7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17fba imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d17fbd push ecx */
  push32((uint32_t)(ECX));
  /* 10d17fbe mov edx, dword ptr [0x10d3fdc8] */
  EDX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d17fc4 push edx */
  push32((uint32_t)(EDX));
  /* 10d17fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d17fc7 mov eax, dword ptr [0x10d3fdcc] */
  EAX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d17fcc push eax */
  push32((uint32_t)(EAX));
  /* 10d17fcd call dword ptr [0x10d40334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40334))), 0x10d17fd3u);
  /* 10d17fd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d17fd6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d17fda jne 0x10d17fe3 */
  if (!C.zf) goto L_10d17fe3;
  /* 10d17fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d17fde jmp 0x10d180ab */
  goto L_10d180ab;
L_10d17fe3:;
  /* 10d17fe3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d17fe6 mov dword ptr [0x10d3fdc8], ecx */
  w32((uint32_t)(0x10d3fdc8), (ECX));
  /* 10d17fec mov edx, dword ptr [0x10d3fda8] */
  EDX = (r32((uint32_t)(0x10d3fda8)));
  /* 10d17ff2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d17ff5 mov dword ptr [0x10d3fda8], edx */
  w32((uint32_t)(0x10d3fda8), (EDX));
L_10d17ffb:;
  /* 10d17ffb mov eax, dword ptr [0x10d3fdc4] */
  EAX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d18000 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d18003 mov ecx, dword ptr [0x10d3fdc8] */
  ECX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d18009 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1800b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1800e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10d18013 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d18015 mov edx, dword ptr [0x10d3fdcc] */
  EDX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d1801b push edx */
  push32((uint32_t)(EDX));
  /* 10d1801c call dword ptr [0x10d40330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40330))), 0x10d18022u);
  /* 10d18022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18025 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10d18028 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1802b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1802f jne 0x10d18035 */
  if (!C.zf) goto L_10d18035;
  /* 10d18031 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d18033 jmp 0x10d180ab */
  goto L_10d180ab;
L_10d18035:;
  /* 10d18035 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d18037 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10d1803c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10d18041 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d18043 call dword ptr [0x10d40338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40338))), 0x10d18049u);
  /* 10d18049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1804c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10d1804f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18052 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18056 jne 0x10d18072 */
  if (!C.zf) goto L_10d18072;
  /* 10d18058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1805b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1805e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1805f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d18061 mov edx, dword ptr [0x10d3fdcc] */
  EDX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d18067 push edx */
  push32((uint32_t)(EDX));
  /* 10d18068 call dword ptr [0x10d40310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40310))), 0x10d1806eu);
  /* 10d1806e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d18070 jmp 0x10d180ab */
  goto L_10d180ab;
L_10d18072:;
  /* 10d18072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18075 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1807b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1807e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d18085 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18088 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10d1808f mov eax, dword ptr [0x10d3fdc4] */
  EAX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d18094 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18097 mov dword ptr [0x10d3fdc4], eax */
  w32((uint32_t)(0x10d3fdc4), (EAX));
  /* 10d1809c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1809f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d180a2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10d180a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d180ab:;
  /* 10d180ab mov esp, ebp */
  ESP = (EBP);
  /* 10d180ad pop ebp */
  EBP = (pop32());
  /* 10d180ae ret  */
  ESPCHK(0x10d17fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080b0 @ 0x10d180b0 (494 bytes, 149 insns) */
void f_10d180b0(void) {
  FTRACE(0x10d180b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d180b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d180b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d180b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d180b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d180b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d180bc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d180bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d180c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d180c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d180c8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10d180cf:;
  /* 10d180cf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d180d3 jl 0x10d180e8 */
  if ((C.sf!=C.of)) goto L_10d180e8;
  /* 10d180d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d180d8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d180da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d180dd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d180e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d180e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d180e6 jmp 0x10d180cf */
  goto L_10d180cf;
L_10d180e8:;
  /* 10d180e8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d180eb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d180f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d180f4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10d180fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d180fe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d18105 jmp 0x10d18110 */
  goto L_10d18110;
L_10d18107:;
  /* 10d18107 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1810a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1810d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10d18110:;
  /* 10d18110 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18114 jge 0x10d18136 */
  if ((C.sf==C.of)) goto L_10d18136;
  /* 10d18116 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d18119 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1811c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10d1811f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d18122 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18125 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18128 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d1812b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1812e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18131 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d18134 jmp 0x10d18107 */
  goto L_10d18107;
L_10d18136:;
  /* 10d18136 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d18139 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10d1813c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1813f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d18142 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18144 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d18147 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d18149 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d1814e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d18153 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18156 push edx */
  push32((uint32_t)(EDX));
  /* 10d18157 call dword ptr [0x10d40338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40338))), 0x10d1815du);
  /* 10d1815d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1815f jne 0x10d18169 */
  if (!C.zf) goto L_10d18169;
  /* 10d18161 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d18164 jmp 0x10d1829a */
  goto L_10d1829a;
L_10d18169:;
  /* 10d18169 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1816c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18171 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d18174 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18177 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1817a jmp 0x10d18188 */
  goto L_10d18188;
L_10d1817c:;
  /* 10d1817c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1817f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18185 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d18188:;
  /* 10d18188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1818b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1818e ja 0x10d181ed */
  if ((!C.cf&&!C.zf)) goto L_10d181ed;
  /* 10d18190 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18193 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10d1819a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1819d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10d181a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d181aa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d181ad mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d181b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d181b3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10d181b9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d181bc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d181c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d181c5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d181c8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d181cb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d181d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d181d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d181d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d181da add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d181df mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d181e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d181e5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10d181eb jmp 0x10d1817c */
  goto L_10d1817c;
L_10d181ed:;
  /* 10d181ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d181f0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d181f6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d181f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d181fc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d181ff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18202 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d18205 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18208 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d1820b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d1820e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18211 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18214 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d18217 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1821a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1821d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18220 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10d18223 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18226 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d18229 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d1822c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1822f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18232 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d18235 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d18238 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1823b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10d18243 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d18246 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18249 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10d18254 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18257 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10d1825b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1825e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10d18261 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d18264 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18267 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10d1826a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1826c jne 0x10d1827d */
  if (!C.zf) goto L_10d1827d;
  /* 10d1826e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d18271 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d18274 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d18277 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1827a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d1827d:;
  /* 10d1827d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d18282 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d18285 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d18287 not edx */
  EDX = (~(EDX));
  /* 10d18289 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1828c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d1828f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d18291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d18294 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d18297 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10d1829a:;
  /* 10d1829a mov esp, ebp */
  ESP = (EBP);
  /* 10d1829c pop ebp */
  EBP = (pop32());
  /* 10d1829d ret  */
  ESPCHK(0x10d180b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082a0 @ 0x10d182a0 (1515 bytes, 489 insns) */
void f_10d182a0(void) {
  FTRACE(0x10d182a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d182a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d182a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d182a3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d182a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d182a9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d182ac and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10d182ae mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d182b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d182b4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d182b7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10d182ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d182bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d182c0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d182c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d182c6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d182c9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10d182cc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d182cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d182d2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d182d8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d182db lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10d182e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d182e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d182e8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d182eb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d182ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d182f1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d182f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d182f6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d182f9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d182fc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d182ff mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10d18302 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18305 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d18307 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d1830a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1830d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18310 jle 0x10d185c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10d185c6;
  /* 10d18316 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18319 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1831c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1831e jne 0x10d1832b */
  if (!C.zf) goto L_10d1832b;
  /* 10d18320 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d18323 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18326 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18329 jle 0x10d18332 */
  if ((C.zf||C.sf!=C.of)) goto L_10d18332;
L_10d1832b:;
  /* 10d1832b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1832d jmp 0x10d18887 */
  goto L_10d18887;
L_10d18332:;
  /* 10d18332 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18335 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d18338 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1833b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d1833e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18342 jbe 0x10d1834b */
  if ((C.cf||C.zf)) goto L_10d1834b;
  /* 10d18344 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10d1834b:;
  /* 10d1834b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1834e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18351 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d18354 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18357 jne 0x10d1842d */
  if (!C.zf) goto L_10d1842d;
  /* 10d1835d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18361 jae 0x10d183c2 */
  if (!C.cf) goto L_10d183c2;
  /* 10d18363 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d18368 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1836b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d1836d not edx */
  EDX = (~(EDX));
  /* 10d1836f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18372 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18375 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d18379 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1837b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1837e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18381 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d18385 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18388 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1838b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d1838e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d18391 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18394 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18397 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d1839a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1839d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d183a0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d183a4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d183a6 jne 0x10d183c0 */
  if (!C.zf) goto L_10d183c0;
  /* 10d183a8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d183ad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d183b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d183b2 not edx */
  EDX = (~(EDX));
  /* 10d183b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d183b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d183b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d183bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d183be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d183c0:;
  /* 10d183c0 jmp 0x10d1842d */
  goto L_10d1842d;
L_10d183c2:;
  /* 10d183c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d183c5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d183c8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d183cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d183cf not eax */
  EAX = (~(EAX));
  /* 10d183d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d183d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d183d7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d183de and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d183e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d183e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d183e6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10d183ed mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d183f0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d183f3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d183f6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d183f9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d183fc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d183ff mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d18402 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18405 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18408 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d1840c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1840e jne 0x10d1842d */
  if (!C.zf) goto L_10d1842d;
  /* 10d18410 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d18413 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18416 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d1841b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d1841d not eax */
  EAX = (~(EAX));
  /* 10d1841f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d18422 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d18425 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d18427 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1842a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d1842d:;
  /* 10d1842d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18430 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d18433 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18436 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d18439 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d1843c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1843f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d18442 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18445 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d18448 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10d1844b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1844e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18451 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18454 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d18457 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1845b jle 0x10d185a7 */
  if ((C.zf||C.sf!=C.of)) goto L_10d185a7;
  /* 10d18461 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18464 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18467 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d1846a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1846d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d18470 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18473 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d18476 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1847a jbe 0x10d18483 */
  if ((C.cf||C.zf)) goto L_10d18483;
  /* 10d1847c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10d18483:;
  /* 10d18483 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d18486 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d18489 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10d1848c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d1848f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18492 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18495 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d18498 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d1849b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1849e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d184a1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10d184a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d184a7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d184aa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d184ad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d184b0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d184b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d184b6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d184b9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d184bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d184bf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d184c2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d184c5 jne 0x10d18593 */
  if (!C.zf) goto L_10d18593;
  /* 10d184cb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d184cf jae 0x10d1852c */
  if (!C.cf) goto L_10d1852c;
  /* 10d184d1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d184d4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d184d7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d184db mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d184de add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d184e1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d184e4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d184e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d184ea add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d184ed mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d184f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d184f2 jne 0x10d1850a */
  if (!C.zf) goto L_10d1850a;
  /* 10d184f4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d184f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d184fc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d184fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d18501 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d18503 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d18505 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d18508 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d1850a:;
  /* 10d1850a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d1850f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d18512 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d18514 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18517 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1851a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d1851e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d18520 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18523 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18526 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d1852a jmp 0x10d18593 */
  goto L_10d18593;
L_10d1852c:;
  /* 10d1852c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1852f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18532 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d18536 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18539 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1853c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d1853f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d18542 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18545 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18548 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d1854b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1854d jne 0x10d1856a */
  if (!C.zf) goto L_10d1856a;
  /* 10d1854f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d18552 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18555 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d1855a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d1855c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1855f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d18562 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d18564 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d18567 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d1856a:;
  /* 10d1856a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1856d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18570 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d18575 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d18577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1857a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1857d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d18584 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d18586 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18589 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1858c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10d18593:;
  /* 10d18593 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18596 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18599 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d1859b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1859e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d185a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d185a4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10d185a7:;
  /* 10d185a7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d185aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d185ad mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d185b0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d185b2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d185b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d185b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d185bb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d185be mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10d185c1 jmp 0x10d18882 */
  goto L_10d18882;
L_10d185c6:;
  /* 10d185c6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d185c9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d185cc jge 0x10d18882 */
  if ((C.sf==C.of)) goto L_10d18882;
  /* 10d185d2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d185d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d185d8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d185db mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d185dd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d185e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d185e3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d185e6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d185e9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10d185ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d185ef add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d185f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d185f5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d185f8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d185fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d185fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d18601 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d18604 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18607 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d1860a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1860e jbe 0x10d18617 */
  if ((C.cf||C.zf)) goto L_10d18617;
  /* 10d18610 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10d18617:;
  /* 10d18617 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1861a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1861d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1861f jne 0x10d18760 */
  if (!C.zf) goto L_10d18760;
  /* 10d18625 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18628 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d1862b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1862e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d18631 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18635 jbe 0x10d1863e */
  if ((C.cf||C.zf)) goto L_10d1863e;
  /* 10d18637 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10d1863e:;
  /* 10d1863e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18641 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18644 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d18647 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1864a jne 0x10d18720 */
  if (!C.zf) goto L_10d18720;
  /* 10d18650 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18654 jae 0x10d186b5 */
  if (!C.cf) goto L_10d186b5;
  /* 10d18656 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d1865b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1865e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d18660 not edx */
  EDX = (~(EDX));
  /* 10d18662 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18665 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18668 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d1866c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1866e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18671 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18674 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d18678 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1867b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1867e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d18681 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d18684 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18687 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1868a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d1868d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18690 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18693 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d18697 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d18699 jne 0x10d186b3 */
  if (!C.zf) goto L_10d186b3;
  /* 10d1869b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d186a0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d186a3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d186a5 not edx */
  EDX = (~(EDX));
  /* 10d186a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d186aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d186ac and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d186ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d186b1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d186b3:;
  /* 10d186b3 jmp 0x10d18720 */
  goto L_10d18720;
L_10d186b5:;
  /* 10d186b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d186b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d186bb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d186c0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d186c2 not eax */
  EAX = (~(EAX));
  /* 10d186c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d186c7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d186ca mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d186d1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d186d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d186d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d186d9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10d186e0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d186e3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d186e6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d186e9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d186ec mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d186ef add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d186f2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d186f5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d186f8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d186fb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d186ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d18701 jne 0x10d18720 */
  if (!C.zf) goto L_10d18720;
  /* 10d18703 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d18706 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18709 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d1870e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d18710 not eax */
  EAX = (~(EAX));
  /* 10d18712 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d18715 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d18718 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1871a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1871d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d18720:;
  /* 10d18720 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18723 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d18726 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18729 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1872c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d1872f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18732 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d18735 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d18738 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d1873b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10d1873e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d18741 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18744 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d18747 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1874a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d1874d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18750 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d18753 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18757 jbe 0x10d18760 */
  if ((C.cf||C.zf)) goto L_10d18760;
  /* 10d18759 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10d18760:;
  /* 10d18760 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d18763 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d18766 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10d18769 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d1876c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1876f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18772 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d18775 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d18778 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1877b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1877e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d18781 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18784 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18787 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d1878a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1878d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d18790 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18793 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d18796 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18799 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1879c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1879f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d187a2 jne 0x10d1886e */
  if (!C.zf) goto L_10d1886e;
  /* 10d187a8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d187ac jae 0x10d18808 */
  if (!C.cf) goto L_10d18808;
  /* 10d187ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d187b1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d187b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d187b8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d187bb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d187be mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d187c1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d187c3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d187c6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d187c9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d187cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d187ce jne 0x10d187e6 */
  if (!C.zf) goto L_10d187e6;
  /* 10d187d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d187d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d187d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d187da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d187dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d187df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d187e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d187e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d187e6:;
  /* 10d187e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d187eb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d187ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d187f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d187f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d187f6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d187fa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d187fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d187ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18802 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d18806 jmp 0x10d1886e */
  goto L_10d1886e;
L_10d18808:;
  /* 10d18808 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1880b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1880e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d18812 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18815 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18818 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d1881b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d1881d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18820 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18823 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d18826 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d18828 jne 0x10d18845 */
  if (!C.zf) goto L_10d18845;
  /* 10d1882a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1882d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18830 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d18835 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d18837 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1883a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d1883d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1883f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d18842 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d18845:;
  /* 10d18845 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d18848 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1884b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d18850 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d18852 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18855 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18858 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d1885f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d18861 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18864 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d18867 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10d1886e:;
  /* 10d1886e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18871 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d18874 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d18876 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18879 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1887c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1887f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10d18882:;
  /* 10d18882 mov eax, 1 */
  EAX = (0x1u);
L_10d18887:;
  /* 10d18887 mov esp, ebp */
  ESP = (EBP);
  /* 10d18889 pop ebp */
  EBP = (pop32());
  /* 10d1888a ret  */
  ESPCHK(0x10d182a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008890 @ 0x10d18890 (304 bytes, 79 insns) */
void f_10d18890(void) {
  FTRACE(0x10d18890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d18890 push ebp */
  push32((uint32_t)(EBP));
  /* 10d18891 mov ebp, esp */
  EBP = (ESP);
  /* 10d18893 push ecx */
  push32((uint32_t)(ECX));
  /* 10d18894 cmp dword ptr [0x10d3fdc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fdc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1889b je 0x10d189bc */
  if (C.zf) goto L_10d189bc;
  /* 10d188a1 mov eax, dword ptr [0x10d3fdb8] */
  EAX = (r32((uint32_t)(0x10d3fdb8)));
  /* 10d188a6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10d188a9 mov ecx, dword ptr [0x10d3fdc0] */
  ECX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d188af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d188b2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d188b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d188b7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10d188bc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d188c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d188c4 push eax */
  push32((uint32_t)(EAX));
  /* 10d188c5 call dword ptr [0x10d40314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40314))), 0x10d188cbu);
  /* 10d188cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d188d0 mov ecx, dword ptr [0x10d3fdb8] */
  ECX = (r32((uint32_t)(0x10d3fdb8)));
  /* 10d188d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d188d8 mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d188dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d188e0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d188e2 mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d188e8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d188eb mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d188f0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d188f3 mov edx, dword ptr [0x10d3fdb8] */
  EDX = (r32((uint32_t)(0x10d3fdb8)));
  /* 10d188f9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10d18904 mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d18909 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1890c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10d1890f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d18912 mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d18917 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1891a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10d1891d mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d18923 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d18926 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10d1892a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1892c jne 0x10d18942 */
  if (!C.zf) goto L_10d18942;
  /* 10d1892e mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d18934 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d18937 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10d18939 mov ecx, dword ptr [0x10d3fdc0] */
  ECX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d1893f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10d18942:;
  /* 10d18942 mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d18948 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1894c jne 0x10d189b2 */
  if (!C.zf) goto L_10d189b2;
  /* 10d1894e cmp dword ptr [0x10d3fdc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fdc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18955 jle 0x10d189b2 */
  if ((C.zf||C.sf!=C.of)) goto L_10d189b2;
  /* 10d18957 mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d1895c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1895f push ecx */
  push32((uint32_t)(ECX));
  /* 10d18960 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d18962 mov edx, dword ptr [0x10d3fdcc] */
  EDX = (r32((uint32_t)(0x10d3fdcc)));
  /* 10d18968 push edx */
  push32((uint32_t)(EDX));
  /* 10d18969 call dword ptr [0x10d40310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40310))), 0x10d1896fu);
  /* 10d1896f mov eax, dword ptr [0x10d3fdc4] */
  EAX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d18974 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d18977 mov ecx, dword ptr [0x10d3fdc8] */
  ECX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d1897d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1897f mov edx, dword ptr [0x10d3fdc0] */
  EDX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d18985 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18988 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1898a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1898b mov eax, dword ptr [0x10d3fdc0] */
  EAX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d18990 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18993 push eax */
  push32((uint32_t)(EAX));
  /* 10d18994 mov ecx, dword ptr [0x10d3fdc0] */
  ECX = (r32((uint32_t)(0x10d3fdc0)));
  /* 10d1899a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1899b call 0x10d1afc0 */
  push32(0x10d189a0u); f_10d1afc0();
  /* 10d189a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d189a3 mov edx, dword ptr [0x10d3fdc4] */
  EDX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d189a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d189ac mov dword ptr [0x10d3fdc4], edx */
  w32((uint32_t)(0x10d3fdc4), (EDX));
L_10d189b2:;
  /* 10d189b2 mov dword ptr [0x10d3fdc0], 0 */
  w32((uint32_t)(0x10d3fdc0), (0x0u));
L_10d189bc:;
  /* 10d189bc mov esp, ebp */
  ESP = (EBP);
  /* 10d189be pop ebp */
  EBP = (pop32());
  /* 10d189bf ret  */
  ESPCHK(0x10d18890u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x10d189c0 (1565 bytes, 343 insns) */
void f_10d189c0(void) {
  FTRACE(0x10d189c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d189c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d189c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d189c3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d189c9 mov eax, dword ptr [0x10d3fdc4] */
  EAX = (r32((uint32_t)(0x10d3fdc4)));
  /* 10d189ce imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d189d1 push eax */
  push32((uint32_t)(EAX));
  /* 10d189d2 mov ecx, dword ptr [0x10d3fdc8] */
  ECX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d189d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d189d9 call dword ptr [0x10d402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e8))), 0x10d189dfu);
  /* 10d189df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d189e1 je 0x10d189eb */
  if (C.zf) goto L_10d189eb;
  /* 10d189e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d189e6 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d189eb:;
  /* 10d189eb mov edx, dword ptr [0x10d3fdc8] */
  EDX = (r32((uint32_t)(0x10d3fdc8)));
  /* 10d189f1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10d189f7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10d18a01 jmp 0x10d18a12 */
  goto L_10d18a12;
L_10d18a03:;
  /* 10d18a03 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10d18a09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18a0c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10d18a12:;
  /* 10d18a12 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10d18a18 cmp ecx, dword ptr [0x10d3fdc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3fdc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18a1e jge 0x10d18fd7 */
  if ((C.sf==C.of)) goto L_10d18fd7;
  /* 10d18a24 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d18a2a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d18a2d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10d18a33 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10d18a38 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d18a3e push ecx */
  push32((uint32_t)(ECX));
  /* 10d18a3f call dword ptr [0x10d402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e8))), 0x10d18a45u);
  /* 10d18a45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d18a47 je 0x10d18a53 */
  if (C.zf) goto L_10d18a53;
  /* 10d18a49 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10d18a4e jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18a53:;
  /* 10d18a53 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d18a59 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d18a5c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10d18a62 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d18a68 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18a6e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d18a71 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d18a77 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d18a7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d18a7d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10d18a87 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10d18a91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d18a98 jmp 0x10d18aa3 */
  goto L_10d18aa3;
L_10d18a9a:;
  /* 10d18a9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d18a9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18aa0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d18aa3:;
  /* 10d18aa3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18aa7 jge 0x10d18f9b */
  if ((C.sf==C.of)) goto L_10d18f9b;
  /* 10d18aad mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10d18ab7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10d18ac1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10d18acb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10d18ad5 jmp 0x10d18ae6 */
  goto L_10d18ae6;
L_10d18ad7:;
  /* 10d18ad7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d18add add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18ae0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10d18ae6:;
  /* 10d18ae6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18aed jge 0x10d18b02 */
  if ((C.sf==C.of)) goto L_10d18b02;
  /* 10d18aef mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d18af5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10d18b00 jmp 0x10d18ad7 */
  goto L_10d18ad7;
L_10d18b02:;
  /* 10d18b02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18b06 jl 0x10d18f3d */
  if ((C.sf!=C.of)) goto L_10d18f3d;
  /* 10d18b0c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d18b11 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d18b17 push ecx */
  push32((uint32_t)(ECX));
  /* 10d18b18 call dword ptr [0x10d402e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e8))), 0x10d18b1eu);
  /* 10d18b1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d18b20 je 0x10d18b2c */
  if (C.zf) goto L_10d18b2c;
  /* 10d18b22 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10d18b27 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18b2c:;
  /* 10d18b2c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d18b32 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d18b35 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10d18b3f jmp 0x10d18b50 */
  goto L_10d18b50;
L_10d18b41:;
  /* 10d18b41 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10d18b47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18b4a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10d18b50:;
  /* 10d18b50 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18b57 jge 0x10d18cd4 */
  if ((C.sf==C.of)) goto L_10d18cd4;
  /* 10d18b5d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d18b60 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18b63 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10d18b69 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d18b6f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18b75 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10d18b7b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d18b81 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18b85 jne 0x10d18b92 */
  if (!C.zf) goto L_10d18b92;
  /* 10d18b87 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10d18b8d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18b90 je 0x10d18b9c */
  if (C.zf) goto L_10d18b9c;
L_10d18b92:;
  /* 10d18b92 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10d18b97 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18b9c:;
  /* 10d18b9c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d18ba2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d18ba4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10d18baa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d18bb0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10d18bb6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10d18bbc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d18bbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d18bc1 je 0x10d18bf9 */
  if (C.zf) goto L_10d18bf9;
  /* 10d18bc3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d18bc9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18bcc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10d18bd2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18bdc jle 0x10d18be8 */
  if ((C.zf||C.sf!=C.of)) goto L_10d18be8;
  /* 10d18bde mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10d18be3 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18be8:;
  /* 10d18be8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10d18bee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18bf1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10d18bf7 jmp 0x10d18c3b */
  goto L_10d18c3b;
L_10d18bf9:;
  /* 10d18bf9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d18bff sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d18c02 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18c05 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10d18c0b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18c12 jle 0x10d18c1e */
  if ((C.zf||C.sf!=C.of)) goto L_10d18c1e;
  /* 10d18c14 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10d18c1e:;
  /* 10d18c1e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d18c24 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10d18c2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18c2e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d18c34 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10d18c3b:;
  /* 10d18c3b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18c42 jl 0x10d18c5d */
  if ((C.sf!=C.of)) goto L_10d18c5d;
  /* 10d18c44 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d18c4a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10d18c4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d18c4f jne 0x10d18c5d */
  if (!C.zf) goto L_10d18c5d;
  /* 10d18c51 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18c5b jle 0x10d18c67 */
  if ((C.zf||C.sf!=C.of)) goto L_10d18c67;
L_10d18c5d:;
  /* 10d18c5d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10d18c62 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18c67:;
  /* 10d18c67 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d18c6d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18c73 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d18c76 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18c7c je 0x10d18c88 */
  if (C.zf) goto L_10d18c88;
  /* 10d18c7e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10d18c83 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18c88:;
  /* 10d18c88 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d18c8e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18c94 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10d18c9a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d18ca0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18ca6 jb 0x10d18b9c */
  if (C.cf) goto L_10d18b9c;
  /* 10d18cac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d18cb2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18cb8 je 0x10d18cc4 */
  if (C.zf) goto L_10d18cc4;
  /* 10d18cba mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10d18cbf jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18cc4:;
  /* 10d18cc4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d18cc7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18ccc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d18ccf jmp 0x10d18b41 */
  goto L_10d18b41;
L_10d18cd4:;
  /* 10d18cd4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18cd7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d18cd9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18cdf je 0x10d18ceb */
  if (C.zf) goto L_10d18ceb;
  /* 10d18ce1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10d18ce6 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18ceb:;
  /* 10d18ceb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18cee mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10d18cf4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10d18cfb jmp 0x10d18d06 */
  goto L_10d18d06;
L_10d18cfd:;
  /* 10d18cfd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18d00 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18d03 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d18d06:;
  /* 10d18d06 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18d0a jge 0x10d18f3d */
  if ((C.sf==C.of)) goto L_10d18f3d;
  /* 10d18d10 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10d18d1a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10d18d20 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10d18d26:;
  /* 10d18d26 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d18d2c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d18d2f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10d18d35 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d18d3b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18d41 je 0x10d18e6a */
  if (C.zf) goto L_10d18e6a;
  /* 10d18d47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18d4a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10d18d50 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18d57 je 0x10d18e6a */
  if (C.zf) goto L_10d18e6a;
  /* 10d18d5d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d18d63 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18d69 jb 0x10d18d7e */
  if (C.cf) goto L_10d18d7e;
  /* 10d18d6b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d18d71 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18d76 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18d7c jb 0x10d18d88 */
  if (C.cf) goto L_10d18d88;
L_10d18d7e:;
  /* 10d18d7e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10d18d83 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18d88:;
  /* 10d18d88 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d18d8e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d18d94 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10d18d9a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10d18da0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18da3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d18da6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18da9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18dae mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10d18db4:;
  /* 10d18db4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18db7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18dbd je 0x10d18dde */
  if (C.zf) goto L_10d18dde;
  /* 10d18dbf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18dc2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18dc8 jne 0x10d18dcc */
  if (!C.zf) goto L_10d18dcc;
  /* 10d18dca jmp 0x10d18dde */
  goto L_10d18dde;
L_10d18dcc:;
  /* 10d18dcc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18dcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d18dd1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10d18dd4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18dd7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18dd9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d18ddc jmp 0x10d18db4 */
  goto L_10d18db4;
L_10d18dde:;
  /* 10d18dde mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d18de1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18de7 jne 0x10d18df3 */
  if (!C.zf) goto L_10d18df3;
  /* 10d18de9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10d18dee jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18df3:;
  /* 10d18df3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d18df9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d18dfb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d18dfe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18e01 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10d18e07 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18e0e jle 0x10d18e1a */
  if ((C.zf||C.sf!=C.of)) goto L_10d18e1a;
  /* 10d18e10 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10d18e1a:;
  /* 10d18e1a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d18e20 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18e23 je 0x10d18e2f */
  if (C.zf) goto L_10d18e2f;
  /* 10d18e25 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10d18e2a jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18e2f:;
  /* 10d18e2f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d18e35 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d18e38 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18e3e je 0x10d18e4a */
  if (C.zf) goto L_10d18e4a;
  /* 10d18e40 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10d18e45 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18e4a:;
  /* 10d18e4a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d18e50 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10d18e56 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10d18e5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18e5f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10d18e65 jmp 0x10d18d26 */
  goto L_10d18d26;
L_10d18e6a:;
  /* 10d18e6a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18e71 je 0x10d18ee1 */
  if (C.zf) goto L_10d18ee1;
  /* 10d18e73 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18e77 jge 0x10d18eab */
  if ((C.sf==C.of)) goto L_10d18eab;
  /* 10d18e79 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d18e7e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18e81 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d18e83 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10d18e89 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d18e8b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10d18e91 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d18e96 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18e99 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d18e9b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10d18ea1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d18ea3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10d18ea9 jmp 0x10d18ee1 */
  goto L_10d18ee1;
L_10d18eab:;
  /* 10d18eab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18eae sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18eb1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d18eb6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d18eb8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10d18ebe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d18ec0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10d18ec6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18ec9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18ecc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d18ed1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d18ed3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10d18ed9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d18edb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10d18ee1:;
  /* 10d18ee1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d18ee7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d18eea cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18ef0 jne 0x10d18f04 */
  if (!C.zf) goto L_10d18f04;
  /* 10d18ef2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d18ef5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10d18efb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18f02 je 0x10d18f0e */
  if (C.zf) goto L_10d18f0e;
L_10d18f04:;
  /* 10d18f04 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10d18f09 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18f0e:;
  /* 10d18f0e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10d18f14 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d18f17 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18f1d je 0x10d18f29 */
  if (C.zf) goto L_10d18f29;
  /* 10d18f1f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10d18f24 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18f29:;
  /* 10d18f29 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10d18f2f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18f32 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10d18f38 jmp 0x10d18cfd */
  goto L_10d18cfd;
L_10d18f3d:;
  /* 10d18f3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d18f40 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d18f46 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10d18f4c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18f50 jne 0x10d18f6a */
  if (!C.zf) goto L_10d18f6a;
  /* 10d18f52 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d18f55 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d18f5b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10d18f61 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18f68 je 0x10d18f71 */
  if (C.zf) goto L_10d18f71;
L_10d18f6a:;
  /* 10d18f6a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10d18f6f jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18f71:;
  /* 10d18f71 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d18f77 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18f7d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10d18f83 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d18f86 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18f8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d18f8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d18f91 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d18f93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d18f96 jmp 0x10d18a9a */
  goto L_10d18a9a;
L_10d18f9b:;
  /* 10d18f9b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d18fa1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10d18fa7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18fa9 jne 0x10d18fbc */
  if (!C.zf) goto L_10d18fbc;
  /* 10d18fab mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d18fb1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10d18fb7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18fba je 0x10d18fc3 */
  if (C.zf) goto L_10d18fc3;
L_10d18fbc:;
  /* 10d18fbc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10d18fc1 jmp 0x10d18fd9 */
  goto L_10d18fd9;
L_10d18fc3:;
  /* 10d18fc3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d18fc9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d18fcc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10d18fd2 jmp 0x10d18a03 */
  goto L_10d18a03;
L_10d18fd7:;
  /* 10d18fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d18fd9:;
  /* 10d18fd9 mov esp, ebp */
  ESP = (EBP);
  /* 10d18fdb pop ebp */
  EBP = (pop32());
  /* 10d18fdc ret  */
  ESPCHK(0x10d189c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fe0 @ 0x10d18fe0 (250 bytes, 92 insns) */
void f_10d18fe0(void) {
  FTRACE(0x10d18fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d18fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d18fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10d18fe3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d18fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d18fe7 push esi */
  push32((uint32_t)(ESI));
  /* 10d18fe8 push edi */
  push32((uint32_t)(EDI));
  /* 10d18fe9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10d18fec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d18fef lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d18ff2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10d18ff5:;
  /* 10d18ff5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d18ff9 jne 0x10d19019 */
  if (!C.zf) goto L_10d19019;
  /* 10d18ffb push 0x10d39e14 */
  push32((uint32_t)(0x10d39e14u));
  /* 10d19000 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d19002 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d19004 push 0x10d39e08 */
  push32((uint32_t)(0x10d39e08u));
  /* 10d19009 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1900b call 0x10d12190 */
  push32(0x10d19010u); f_10d12190();
  /* 10d19010 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19013 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19016 jne 0x10d19019 */
  if (!C.zf) goto L_10d19019;
  /* 10d19018 int3  */
  x86_unimpl("int3 @ 0x10d19018");
L_10d19019:;
  /* 10d19019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1901b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1901d jne 0x10d18ff5 */
  if (!C.zf) goto L_10d18ff5;
L_10d1901f:;
  /* 10d1901f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19023 jne 0x10d19043 */
  if (!C.zf) goto L_10d19043;
  /* 10d19025 push 0x10d39df8 */
  push32((uint32_t)(0x10d39df8u));
  /* 10d1902a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1902c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d1902e push 0x10d39e08 */
  push32((uint32_t)(0x10d39e08u));
  /* 10d19033 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d19035 call 0x10d12190 */
  push32(0x10d1903au); f_10d12190();
  /* 10d1903a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1903d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19040 jne 0x10d19043 */
  if (!C.zf) goto L_10d19043;
  /* 10d19042 int3  */
  x86_unimpl("int3 @ 0x10d19042");
L_10d19043:;
  /* 10d19043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d19045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d19047 jne 0x10d1901f */
  if (!C.zf) goto L_10d1901f;
  /* 10d19049 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1904c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10d19053 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19059 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d1905c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1905f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19062 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d19064 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19067 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10d1906e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d19071 push ecx */
  push32((uint32_t)(ECX));
  /* 10d19072 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d19075 push edx */
  push32((uint32_t)(EDX));
  /* 10d19076 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19079 push eax */
  push32((uint32_t)(EAX));
  /* 10d1907a call 0x10d1a060 */
  push32(0x10d1907fu); f_10d1a060();
  /* 10d1907f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19082 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d19085 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19088 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d1908b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1908e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19091 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d19094 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19097 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1909b jl 0x10d190bf */
  if ((C.sf!=C.of)) goto L_10d190bf;
  /* 10d1909d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d190a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d190a2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d190a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d190a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d190ad mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10d190b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d190b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d190b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d190b8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d190bb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d190bd jmp 0x10d190d0 */
  goto L_10d190d0;
L_10d190bf:;
  /* 10d190bf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d190c2 push edx */
  push32((uint32_t)(EDX));
  /* 10d190c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d190c5 call 0x10d19de0 */
  push32(0x10d190cau); f_10d19de0();
  /* 10d190ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d190cd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10d190d0:;
  /* 10d190d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d190d3 pop edi */
  EDI = (pop32());
  /* 10d190d4 pop esi */
  ESI = (pop32());
  /* 10d190d5 pop ebx */
  EBX = (pop32());
  /* 10d190d6 mov esp, ebp */
  ESP = (EBP);
  /* 10d190d8 pop ebp */
  EBP = (pop32());
  /* 10d190d9 ret  */
  ESPCHK(0x10d18fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100090e0 @ 0x10d190e0 (183 bytes, 58 insns) */
void f_10d190e0(void) {
  FTRACE(0x10d190e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d190e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d190e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d190e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d190e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d190e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d190ec cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d190f1 ja 0x10d1910a */
  if ((!C.cf&&!C.zf)) goto L_10d1910a;
  /* 10d190f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d190f6 mov edx, dword ptr [0x10d3cc98] */
  EDX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d190fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d190fe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10d19102 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10d19105 jmp 0x10d19193 */
  goto L_10d19193;
L_10d1910a:;
  /* 10d1910a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1910d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10d19110 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d19116 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1911c mov edx, dword ptr [0x10d3cc98] */
  EDX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d19122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d19124 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10d19128 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1912d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1912f je 0x10d19153 */
  if (C.zf) goto L_10d19153;
  /* 10d19131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19134 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10d19137 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1913d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10d19140 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d19143 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10d19146 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10d1914a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10d19151 jmp 0x10d19164 */
  goto L_10d19164;
L_10d19153:;
  /* 10d19153 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d19156 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10d19159 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10d1915d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10d19164:;
  /* 10d19164 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d19166 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d19168 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1916a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10d1916d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1916e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19171 push edx */
  push32((uint32_t)(EDX));
  /* 10d19172 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10d19175 push eax */
  push32((uint32_t)(EAX));
  /* 10d19176 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d19178 call 0x10d1b300 */
  push32(0x10d1917du); f_10d1b300();
  /* 10d1917d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d19182 jne 0x10d19188 */
  if (!C.zf) goto L_10d19188;
  /* 10d19184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d19186 jmp 0x10d19193 */
  goto L_10d19193;
L_10d19188:;
  /* 10d19188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1918b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d19190 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10d19193:;
  /* 10d19193 mov esp, ebp */
  ESP = (EBP);
  /* 10d19195 pop ebp */
  EBP = (pop32());
  /* 10d19196 ret  */
  ESPCHK(0x10d190e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100091a0 @ 0x10d191a0 (836 bytes, 238 insns) */
void f_10d191a0(void) {
  FTRACE(0x10d191a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d191a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d191a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d191a3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d191a6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d191a8 call 0x10d16ad0 */
  push32(0x10d191adu); f_10d16ad0();
  /* 10d191ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d191b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d191b3 push eax */
  push32((uint32_t)(EAX));
  /* 10d191b4 call 0x10d194f0 */
  push32(0x10d191b9u); f_10d194f0();
  /* 10d191b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d191bc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d191bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d191c2 cmp ecx, dword ptr [0x10d3fb04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3fb04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d191c8 jne 0x10d191db */
  if (!C.zf) goto L_10d191db;
  /* 10d191ca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d191cc call 0x10d16b70 */
  push32(0x10d191d1u); f_10d16b70();
  /* 10d191d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d191d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d191d6 jmp 0x10d194e0 */
  goto L_10d194e0;
L_10d191db:;
  /* 10d191db cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d191df jne 0x10d191fc */
  if (!C.zf) goto L_10d191fc;
  /* 10d191e1 call 0x10d195d0 */
  push32(0x10d191e6u); f_10d195d0();
  /* 10d191e6 call 0x10d19650 */
  push32(0x10d191ebu); f_10d19650();
  /* 10d191eb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d191ed call 0x10d16b70 */
  push32(0x10d191f2u); f_10d16b70();
  /* 10d191f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d191f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d191f7 jmp 0x10d194e0 */
  goto L_10d194e0;
L_10d191fc:;
  /* 10d191fc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d19203 jmp 0x10d1920e */
  goto L_10d1920e;
L_10d19205:;
  /* 10d19205 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d19208 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1920b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d1920e:;
  /* 10d1920e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19212 jae 0x10d1935f */
  if (!C.cf) goto L_10d1935f;
  /* 10d19218 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1921b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1921e mov ecx, dword ptr [eax + 0x10d3ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x10d3ceb8)));
  /* 10d19224 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19227 jne 0x10d1935a */
  if (!C.zf) goto L_10d1935a;
  /* 10d1922d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d19234 jmp 0x10d1923f */
  goto L_10d1923f;
L_10d19236:;
  /* 10d19236 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19239 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1923c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10d1923f:;
  /* 10d1923f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19246 jae 0x10d19254 */
  if (!C.cf) goto L_10d19254;
  /* 10d19248 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1924b mov byte ptr [eax + 0x10d3fca0], 0 */
  w8((uint32_t)(EAX + 0x10d3fca0), (0x0u));
  /* 10d19252 jmp 0x10d19236 */
  goto L_10d19236;
L_10d19254:;
  /* 10d19254 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d1925b jmp 0x10d19266 */
  goto L_10d19266;
L_10d1925d:;
  /* 10d1925d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d19260 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19263 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d19266:;
  /* 10d19266 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1926a jae 0x10d192e7 */
  if (!C.cf) goto L_10d192e7;
  /* 10d1926c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1926f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d19272 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d19275 lea ecx, [edx + eax*8 + 0x10d3cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10d3cec8));
  /* 10d1927c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1927f jmp 0x10d1928a */
  goto L_10d1928a;
L_10d19281:;
  /* 10d19281 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19284 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19287 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d1928a:;
  /* 10d1928a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1928d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1928f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d19291 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d19293 je 0x10d192e2 */
  if (C.zf) goto L_10d192e2;
  /* 10d19295 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19298 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1929a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d1929d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1929f je 0x10d192e2 */
  if (C.zf) goto L_10d192e2;
  /* 10d192a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d192a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d192a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d192a8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d192ab jmp 0x10d192b6 */
  goto L_10d192b6;
L_10d192ad:;
  /* 10d192ad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d192b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d192b3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d192b6:;
  /* 10d192b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d192b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d192bb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d192be cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d192c1 ja 0x10d192e0 */
  if ((!C.cf&&!C.zf)) goto L_10d192e0;
  /* 10d192c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d192c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d192c9 mov dl, byte ptr [eax + 0x10d3fca1] */
  DL = (r8((uint32_t)(EAX + 0x10d3fca1)));
  /* 10d192cf or dl, byte ptr [ecx + 0x10d3ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10d3ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10d192d5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d192d8 mov byte ptr [eax + 0x10d3fca1], dl */
  w8((uint32_t)(EAX + 0x10d3fca1), (DL));
  /* 10d192de jmp 0x10d192ad */
  goto L_10d192ad;
L_10d192e0:;
  /* 10d192e0 jmp 0x10d19281 */
  goto L_10d19281;
L_10d192e2:;
  /* 10d192e2 jmp 0x10d1925d */
  goto L_10d1925d;
L_10d192e7:;
  /* 10d192e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d192ea mov dword ptr [0x10d3fb04], ecx */
  w32((uint32_t)(0x10d3fb04), (ECX));
  /* 10d192f0 mov dword ptr [0x10d3fb8c], 1 */
  w32((uint32_t)(0x10d3fb8c), (0x1u));
  /* 10d192fa mov edx, dword ptr [0x10d3fb04] */
  EDX = (r32((uint32_t)(0x10d3fb04)));
  /* 10d19300 push edx */
  push32((uint32_t)(EDX));
  /* 10d19301 call 0x10d19550 */
  push32(0x10d19306u); f_10d19550();
  /* 10d19306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19309 mov dword ptr [0x10d3fda4], eax */
  w32((uint32_t)(0x10d3fda4), (EAX));
  /* 10d1930e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d19315 jmp 0x10d19320 */
  goto L_10d19320;
L_10d19317:;
  /* 10d19317 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1931a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1931d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d19320:;
  /* 10d19320 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19324 jae 0x10d19344 */
  if (!C.cf) goto L_10d19344;
  /* 10d19326 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d19329 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1932c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1932f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d19332 mov cx, word ptr [ecx + eax*2 + 0x10d3cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10d3cebc)));
  /* 10d1933a mov word ptr [edx*2 + 0x10d3fb80], cx */
  w16((uint32_t)(EDX*2 + 0x10d3fb80), (CX));
  /* 10d19342 jmp 0x10d19317 */
  goto L_10d19317;
L_10d19344:;
  /* 10d19344 call 0x10d19650 */
  push32(0x10d19349u); f_10d19650();
  /* 10d19349 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d1934b call 0x10d16b70 */
  push32(0x10d19350u); f_10d16b70();
  /* 10d19350 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d19355 jmp 0x10d194e0 */
  goto L_10d194e0;
L_10d1935a:;
  /* 10d1935a jmp 0x10d19205 */
  goto L_10d19205;
L_10d1935f:;
  /* 10d1935f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10d19362 push edx */
  push32((uint32_t)(EDX));
  /* 10d19363 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19366 push eax */
  push32((uint32_t)(EAX));
  /* 10d19367 call dword ptr [0x10d4033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4033c))), 0x10d1936du);
  /* 10d1936d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19370 jne 0x10d194b2 */
  if (!C.zf) goto L_10d194b2;
  /* 10d19376 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d1937d jmp 0x10d19388 */
  goto L_10d19388;
L_10d1937f:;
  /* 10d1937f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19382 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19385 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10d19388:;
  /* 10d19388 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1938f jae 0x10d1939d */
  if (!C.cf) goto L_10d1939d;
  /* 10d19391 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19394 mov byte ptr [edx + 0x10d3fca0], 0 */
  w8((uint32_t)(EDX + 0x10d3fca0), (0x0u));
  /* 10d1939b jmp 0x10d1937f */
  goto L_10d1937f;
L_10d1939d:;
  /* 10d1939d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d193a0 mov dword ptr [0x10d3fb04], eax */
  w32((uint32_t)(0x10d3fb04), (EAX));
  /* 10d193a5 mov dword ptr [0x10d3fda4], 0 */
  w32((uint32_t)(0x10d3fda4), (0x0u));
  /* 10d193af cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d193b3 jbe 0x10d1946e */
  if ((C.cf||C.zf)) goto L_10d1946e;
  /* 10d193b9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10d193bc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10d193bf jmp 0x10d193ca */
  goto L_10d193ca;
L_10d193c1:;
  /* 10d193c1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d193c4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d193c7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10d193ca:;
  /* 10d193ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d193cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d193cf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d193d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d193d3 je 0x10d1941c */
  if (C.zf) goto L_10d1941c;
  /* 10d193d5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d193d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d193da mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d193dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d193df je 0x10d1941c */
  if (C.zf) goto L_10d1941c;
  /* 10d193e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d193e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d193e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d193e8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d193eb jmp 0x10d193f6 */
  goto L_10d193f6;
L_10d193ed:;
  /* 10d193ed mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d193f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d193f3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d193f6:;
  /* 10d193f6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d193f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d193fb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d193fe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19401 ja 0x10d1941a */
  if ((!C.cf&&!C.zf)) goto L_10d1941a;
  /* 10d19403 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19406 mov cl, byte ptr [eax + 0x10d3fca1] */
  CL = (r8((uint32_t)(EAX + 0x10d3fca1)));
  /* 10d1940c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10d1940f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19412 mov byte ptr [edx + 0x10d3fca1], cl */
  w8((uint32_t)(EDX + 0x10d3fca1), (CL));
  /* 10d19418 jmp 0x10d193ed */
  goto L_10d193ed;
L_10d1941a:;
  /* 10d1941a jmp 0x10d193c1 */
  goto L_10d193c1;
L_10d1941c:;
  /* 10d1941c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10d19423 jmp 0x10d1942e */
  goto L_10d1942e;
L_10d19425:;
  /* 10d19425 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19428 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1942b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d1942e:;
  /* 10d1942e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19435 jae 0x10d1944e */
  if (!C.cf) goto L_10d1944e;
  /* 10d19437 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1943a mov dl, byte ptr [ecx + 0x10d3fca1] */
  DL = (r8((uint32_t)(ECX + 0x10d3fca1)));
  /* 10d19440 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10d19443 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d19446 mov byte ptr [eax + 0x10d3fca1], dl */
  w8((uint32_t)(EAX + 0x10d3fca1), (DL));
  /* 10d1944c jmp 0x10d19425 */
  goto L_10d19425;
L_10d1944e:;
  /* 10d1944e mov ecx, dword ptr [0x10d3fb04] */
  ECX = (r32((uint32_t)(0x10d3fb04)));
  /* 10d19454 push ecx */
  push32((uint32_t)(ECX));
  /* 10d19455 call 0x10d19550 */
  push32(0x10d1945au); f_10d19550();
  /* 10d1945a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1945d mov dword ptr [0x10d3fda4], eax */
  w32((uint32_t)(0x10d3fda4), (EAX));
  /* 10d19462 mov dword ptr [0x10d3fb8c], 1 */
  w32((uint32_t)(0x10d3fb8c), (0x1u));
  /* 10d1946c jmp 0x10d19478 */
  goto L_10d19478;
L_10d1946e:;
  /* 10d1946e mov dword ptr [0x10d3fb8c], 0 */
  w32((uint32_t)(0x10d3fb8c), (0x0u));
L_10d19478:;
  /* 10d19478 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d1947f jmp 0x10d1948a */
  goto L_10d1948a;
L_10d19481:;
  /* 10d19481 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d19484 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19487 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d1948a:;
  /* 10d1948a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1948e jae 0x10d1949f */
  if (!C.cf) goto L_10d1949f;
  /* 10d19490 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d19493 mov word ptr [eax*2 + 0x10d3fb80], 0 */
  w16((uint32_t)(EAX*2 + 0x10d3fb80), (0x0u));
  /* 10d1949d jmp 0x10d19481 */
  goto L_10d19481;
L_10d1949f:;
  /* 10d1949f call 0x10d19650 */
  push32(0x10d194a4u); f_10d19650();
  /* 10d194a4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d194a6 call 0x10d16b70 */
  push32(0x10d194abu); f_10d16b70();
  /* 10d194ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d194ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d194b0 jmp 0x10d194e0 */
  goto L_10d194e0;
L_10d194b2:;
  /* 10d194b2 cmp dword ptr [0x10d3e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d194b9 je 0x10d194d3 */
  if (C.zf) goto L_10d194d3;
  /* 10d194bb call 0x10d195d0 */
  push32(0x10d194c0u); f_10d195d0();
  /* 10d194c0 call 0x10d19650 */
  push32(0x10d194c5u); f_10d19650();
  /* 10d194c5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d194c7 call 0x10d16b70 */
  push32(0x10d194ccu); f_10d16b70();
  /* 10d194cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d194cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d194d1 jmp 0x10d194e0 */
  goto L_10d194e0;
L_10d194d3:;
  /* 10d194d3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d194d5 call 0x10d16b70 */
  push32(0x10d194dau); f_10d16b70();
  /* 10d194da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d194dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d194e0:;
  /* 10d194e0 mov esp, ebp */
  ESP = (EBP);
  /* 10d194e2 pop ebp */
  EBP = (pop32());
  /* 10d194e3 ret  */
  ESPCHK(0x10d191a0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10d194f0 (89 bytes, 21 insns) */
void f_10d194f0(void) {
  FTRACE(0x10d194f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d194f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d194f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d194f3 mov dword ptr [0x10d3e610], 0 */
  w32((uint32_t)(0x10d3e610), (0x0u));
  /* 10d194fd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19501 jne 0x10d19515 */
  if (!C.zf) goto L_10d19515;
  /* 10d19503 mov dword ptr [0x10d3e610], 1 */
  w32((uint32_t)(0x10d3e610), (0x1u));
  /* 10d1950d call dword ptr [0x10d40344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40344))), 0x10d19513u);
  /* 10d19513 jmp 0x10d19547 */
  goto L_10d19547;
L_10d19515:;
  /* 10d19515 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19519 jne 0x10d1952d */
  if (!C.zf) goto L_10d1952d;
  /* 10d1951b mov dword ptr [0x10d3e610], 1 */
  w32((uint32_t)(0x10d3e610), (0x1u));
  /* 10d19525 call dword ptr [0x10d40340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40340))), 0x10d1952bu);
  /* 10d1952b jmp 0x10d19547 */
  goto L_10d19547;
L_10d1952d:;
  /* 10d1952d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19531 jne 0x10d19544 */
  if (!C.zf) goto L_10d19544;
  /* 10d19533 mov dword ptr [0x10d3e610], 1 */
  w32((uint32_t)(0x10d3e610), (0x1u));
  /* 10d1953d mov eax, dword ptr [0x10d3e630] */
  EAX = (r32((uint32_t)(0x10d3e630)));
  /* 10d19542 jmp 0x10d19547 */
  goto L_10d19547;
L_10d19544:;
  /* 10d19544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10d19547:;
  /* 10d19547 pop ebp */
  EBP = (pop32());
  /* 10d19548 ret  */
  ESPCHK(0x10d194f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009550 @ 0x10d19550 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10d19550(void) {
  FTRACE(0x10d19550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d19550 push ebp */
  push32((uint32_t)(EBP));
  /* 10d19551 mov ebp, esp */
  EBP = (ESP);
  /* 10d19553 push ecx */
  push32((uint32_t)(ECX));
  /* 10d19554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19557 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1955a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1955d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19563 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d19566 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1956a ja 0x10d1959a */
  if ((!C.cf&&!C.zf)) goto L_10d1959a;
  /* 10d1956c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1956f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19571 mov dl, byte ptr [eax + 0x10d195b4] */
  DL = (r8((uint32_t)(EAX + 0x10d195b4)));
  /* 10d19577 jmp dword ptr [edx*4 + 0x10d195a0] */
  switch (EDX) {
    case 0: goto L_10d1957e;
    case 1: goto L_10d19585;
    case 2: goto L_10d1958c;
    case 3: goto L_10d19593;
    case 4: goto L_10d1959a;
    default: x86_unimpl("switch@0x10d19577 out of table"); return;
  }
L_10d1957e:;
  /* 10d1957e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10d19583 jmp 0x10d1959c */
  goto L_10d1959c;
L_10d19585:;
  /* 10d19585 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10d1958a jmp 0x10d1959c */
  goto L_10d1959c;
L_10d1958c:;
  /* 10d1958c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10d19591 jmp 0x10d1959c */
  goto L_10d1959c;
L_10d19593:;
  /* 10d19593 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10d19598 jmp 0x10d1959c */
  goto L_10d1959c;
L_10d1959a:;
  /* 10d1959a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1959c:;
  /* 10d1959c mov esp, ebp */
  ESP = (EBP);
  /* 10d1959e pop ebp */
  EBP = (pop32());
  /* 10d1959f ret  */
  ESPCHK(0x10d19550u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10d195d0 (116 bytes, 29 insns) */
void f_10d195d0(void) {
  FTRACE(0x10d195d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d195d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d195d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d195d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d195d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d195db jmp 0x10d195e6 */
  goto L_10d195e6;
L_10d195dd:;
  /* 10d195dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d195e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d195e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d195e6:;
  /* 10d195e6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d195ed jge 0x10d195fb */
  if ((C.sf==C.of)) goto L_10d195fb;
  /* 10d195ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d195f2 mov byte ptr [ecx + 0x10d3fca0], 0 */
  w8((uint32_t)(ECX + 0x10d3fca0), (0x0u));
  /* 10d195f9 jmp 0x10d195dd */
  goto L_10d195dd;
L_10d195fb:;
  /* 10d195fb mov dword ptr [0x10d3fb04], 0 */
  w32((uint32_t)(0x10d3fb04), (0x0u));
  /* 10d19605 mov dword ptr [0x10d3fb8c], 0 */
  w32((uint32_t)(0x10d3fb8c), (0x0u));
  /* 10d1960f mov dword ptr [0x10d3fda4], 0 */
  w32((uint32_t)(0x10d3fda4), (0x0u));
  /* 10d19619 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d19620 jmp 0x10d1962b */
  goto L_10d1962b;
L_10d19622:;
  /* 10d19622 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d19625 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19628 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d1962b:;
  /* 10d1962b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1962f jge 0x10d19640 */
  if ((C.sf==C.of)) goto L_10d19640;
  /* 10d19631 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d19634 mov word ptr [eax*2 + 0x10d3fb80], 0 */
  w16((uint32_t)(EAX*2 + 0x10d3fb80), (0x0u));
  /* 10d1963e jmp 0x10d19622 */
  goto L_10d19622;
L_10d19640:;
  /* 10d19640 mov esp, ebp */
  ESP = (EBP);
  /* 10d19642 pop ebp */
  EBP = (pop32());
  /* 10d19643 ret  */
  ESPCHK(0x10d195d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009650 @ 0x10d19650 (770 bytes, 175 insns) */
void f_10d19650(void) {
  FTRACE(0x10d19650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d19650 push ebp */
  push32((uint32_t)(EBP));
  /* 10d19651 mov ebp, esp */
  EBP = (ESP);
  /* 10d19653 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19659 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10d1965f push eax */
  push32((uint32_t)(EAX));
  /* 10d19660 mov ecx, dword ptr [0x10d3fb04] */
  ECX = (r32((uint32_t)(0x10d3fb04)));
  /* 10d19666 push ecx */
  push32((uint32_t)(ECX));
  /* 10d19667 call dword ptr [0x10d4033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4033c))), 0x10d1966du);
  /* 10d1966d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19670 jne 0x10d19889 */
  if (!C.zf) goto L_10d19889;
  /* 10d19676 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10d19680 jmp 0x10d19691 */
  goto L_10d19691;
L_10d19682:;
  /* 10d19682 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19688 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1968b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10d19691:;
  /* 10d19691 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1969b jae 0x10d196b2 */
  if (!C.cf) goto L_10d196b2;
  /* 10d1969d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d196a3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10d196a9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10d196b0 jmp 0x10d19682 */
  goto L_10d19682;
L_10d196b2:;
  /* 10d196b2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10d196b9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10d196bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d196c2 jmp 0x10d196cd */
  goto L_10d196cd;
L_10d196c4:;
  /* 10d196c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d196c7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d196ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d196cd:;
  /* 10d196cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d196d0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d196d2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d196d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d196d6 je 0x10d19718 */
  if (C.zf) goto L_10d19718;
  /* 10d196d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d196db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d196dd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d196df mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10d196e5 jmp 0x10d196f6 */
  goto L_10d196f6;
L_10d196e7:;
  /* 10d196e7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d196ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d196f0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10d196f6:;
  /* 10d196f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d196f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d196fb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d196fe cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19704 ja 0x10d19716 */
  if ((!C.cf&&!C.zf)) goto L_10d19716;
  /* 10d19706 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d1970c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10d19714 jmp 0x10d196e7 */
  goto L_10d196e7;
L_10d19716:;
  /* 10d19716 jmp 0x10d196c4 */
  goto L_10d196c4;
L_10d19718:;
  /* 10d19718 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1971a mov eax, dword ptr [0x10d3fda4] */
  EAX = (r32((uint32_t)(0x10d3fda4)));
  /* 10d1971f push eax */
  push32((uint32_t)(EAX));
  /* 10d19720 mov ecx, dword ptr [0x10d3fb04] */
  ECX = (r32((uint32_t)(0x10d3fb04)));
  /* 10d19726 push ecx */
  push32((uint32_t)(ECX));
  /* 10d19727 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10d1972d push edx */
  push32((uint32_t)(EDX));
  /* 10d1972e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d19733 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10d19739 push eax */
  push32((uint32_t)(EAX));
  /* 10d1973a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1973c call 0x10d1b300 */
  push32(0x10d19741u); f_10d1b300();
  /* 10d19741 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19744 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d19746 mov ecx, dword ptr [0x10d3fb04] */
  ECX = (r32((uint32_t)(0x10d3fb04)));
  /* 10d1974c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1974d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d19752 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10d19758 push edx */
  push32((uint32_t)(EDX));
  /* 10d19759 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d1975e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10d19764 push eax */
  push32((uint32_t)(EAX));
  /* 10d19765 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d1976a mov ecx, dword ptr [0x10d3fda4] */
  ECX = (r32((uint32_t)(0x10d3fda4)));
  /* 10d19770 push ecx */
  push32((uint32_t)(ECX));
  /* 10d19771 call 0x10d1b4c0 */
  push32(0x10d19776u); f_10d1b4c0();
  /* 10d19776 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19779 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1977b mov edx, dword ptr [0x10d3fb04] */
  EDX = (r32((uint32_t)(0x10d3fb04)));
  /* 10d19781 push edx */
  push32((uint32_t)(EDX));
  /* 10d19782 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d19787 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10d1978d push eax */
  push32((uint32_t)(EAX));
  /* 10d1978e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d19793 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10d19799 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1979a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10d1979f mov edx, dword ptr [0x10d3fda4] */
  EDX = (r32((uint32_t)(0x10d3fda4)));
  /* 10d197a5 push edx */
  push32((uint32_t)(EDX));
  /* 10d197a6 call 0x10d1b4c0 */
  push32(0x10d197abu); f_10d1b4c0();
  /* 10d197ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d197ae mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10d197b8 jmp 0x10d197c9 */
  goto L_10d197c9;
L_10d197ba:;
  /* 10d197ba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d197c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d197c3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10d197c9:;
  /* 10d197c9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d197d3 jae 0x10d19884 */
  if (!C.cf) goto L_10d19884;
  /* 10d197d9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d197df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d197e1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10d197e9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d197ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d197ee je 0x10d19826 */
  if (C.zf) goto L_10d19826;
  /* 10d197f0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d197f6 mov cl, byte ptr [eax + 0x10d3fca1] */
  CL = (r8((uint32_t)(EAX + 0x10d3fca1)));
  /* 10d197fc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10d197ff mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19805 mov byte ptr [edx + 0x10d3fca1], cl */
  w8((uint32_t)(EDX + 0x10d3fca1), (CL));
  /* 10d1980b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19811 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19817 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10d1981e mov byte ptr [eax + 0x10d3fba0], dl */
  w8((uint32_t)(EAX + 0x10d3fba0), (DL));
  /* 10d19824 jmp 0x10d1987f */
  goto L_10d1987f;
L_10d19826:;
  /* 10d19826 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d1982c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1982e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10d19836 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d19839 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1983b je 0x10d19872 */
  if (C.zf) goto L_10d19872;
  /* 10d1983d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19843 mov al, byte ptr [edx + 0x10d3fca1] */
  AL = (r8((uint32_t)(EDX + 0x10d3fca1)));
  /* 10d19849 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10d1984b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19851 mov byte ptr [ecx + 0x10d3fca1], al */
  w8((uint32_t)(ECX + 0x10d3fca1), (AL));
  /* 10d19857 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d1985d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19863 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10d1986a mov byte ptr [edx + 0x10d3fba0], cl */
  w8((uint32_t)(EDX + 0x10d3fba0), (CL));
  /* 10d19870 jmp 0x10d1987f */
  goto L_10d1987f;
L_10d19872:;
  /* 10d19872 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19878 mov byte ptr [edx + 0x10d3fba0], 0 */
  w8((uint32_t)(EDX + 0x10d3fba0), (0x0u));
L_10d1987f:;
  /* 10d1987f jmp 0x10d197ba */
  goto L_10d197ba;
L_10d19884:;
  /* 10d19884 jmp 0x10d1994e */
  goto L_10d1994e;
L_10d19889:;
  /* 10d19889 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10d19893 jmp 0x10d198a4 */
  goto L_10d198a4;
L_10d19895:;
  /* 10d19895 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d1989b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1989e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10d198a4:;
  /* 10d198a4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d198ae jae 0x10d1994e */
  if (!C.cf) goto L_10d1994e;
  /* 10d198b4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d198bb jb 0x10d198f8 */
  if (C.cf) goto L_10d198f8;
  /* 10d198bd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d198c4 ja 0x10d198f8 */
  if ((!C.cf&&!C.zf)) goto L_10d198f8;
  /* 10d198c6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d198cc mov dl, byte ptr [ecx + 0x10d3fca1] */
  DL = (r8((uint32_t)(ECX + 0x10d3fca1)));
  /* 10d198d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10d198d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d198db mov byte ptr [eax + 0x10d3fca1], dl */
  w8((uint32_t)(EAX + 0x10d3fca1), (DL));
  /* 10d198e1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d198e7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d198ea mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d198f0 mov byte ptr [edx + 0x10d3fba0], cl */
  w8((uint32_t)(EDX + 0x10d3fba0), (CL));
  /* 10d198f6 jmp 0x10d19949 */
  goto L_10d19949;
L_10d198f8:;
  /* 10d198f8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d198ff jb 0x10d1993c */
  if (C.cf) goto L_10d1993c;
  /* 10d19901 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19908 ja 0x10d1993c */
  if ((!C.cf&&!C.zf)) goto L_10d1993c;
  /* 10d1990a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19910 mov cl, byte ptr [eax + 0x10d3fca1] */
  CL = (r8((uint32_t)(EAX + 0x10d3fca1)));
  /* 10d19916 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d19919 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d1991f mov byte ptr [edx + 0x10d3fca1], cl */
  w8((uint32_t)(EDX + 0x10d3fca1), (CL));
  /* 10d19925 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d1992b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1992e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19934 mov byte ptr [ecx + 0x10d3fba0], al */
  w8((uint32_t)(ECX + 0x10d3fba0), (AL));
  /* 10d1993a jmp 0x10d19949 */
  goto L_10d19949;
L_10d1993c:;
  /* 10d1993c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d19942 mov byte ptr [edx + 0x10d3fba0], 0 */
  w8((uint32_t)(EDX + 0x10d3fba0), (0x0u));
L_10d19949:;
  /* 10d19949 jmp 0x10d19895 */
  goto L_10d19895;
L_10d1994e:;
  /* 10d1994e mov esp, ebp */
  ESP = (EBP);
  /* 10d19950 pop ebp */
  EBP = (pop32());
  /* 10d19951 ret  */
  ESPCHK(0x10d19650u, _esp0);
  ESP += 4; return;
}

/* FUN_10009960 @ 0x10d19960 (23 bytes, 9 insns) */
void f_10d19960(void) {
  FTRACE(0x10d19960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d19960 push ebp */
  push32((uint32_t)(EBP));
  /* 10d19961 mov ebp, esp */
  EBP = (ESP);
  /* 10d19963 cmp dword ptr [0x10d3fb8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fb8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1996a je 0x10d19973 */
  if (C.zf) goto L_10d19973;
  /* 10d1996c mov eax, dword ptr [0x10d3fb04] */
  EAX = (r32((uint32_t)(0x10d3fb04)));
  /* 10d19971 jmp 0x10d19975 */
  goto L_10d19975;
L_10d19973:;
  /* 10d19973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d19975:;
  /* 10d19975 pop ebp */
  EBP = (pop32());
  /* 10d19976 ret  */
  ESPCHK(0x10d19960u, _esp0);
  ESP += 4; return;
}

/* FUN_10009980 @ 0x10d19980 (34 bytes, 10 insns) */
void f_10d19980(void) {
  FTRACE(0x10d19980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d19980 push ebp */
  push32((uint32_t)(EBP));
  /* 10d19981 mov ebp, esp */
  EBP = (ESP);
  /* 10d19983 cmp dword ptr [0x10d3ff50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3ff50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1998a jne 0x10d199a0 */
  if (!C.zf) goto L_10d199a0;
  /* 10d1998c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10d1998e call 0x10d191a0 */
  push32(0x10d19993u); f_10d191a0();
  /* 10d19993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19996 mov dword ptr [0x10d3ff50], 1 */
  w32((uint32_t)(0x10d3ff50), (0x1u));
L_10d199a0:;
  /* 10d199a0 pop ebp */
  EBP = (pop32());
  /* 10d199a1 ret  */
  ESPCHK(0x10d19980u, _esp0);
  ESP += 4; return;
}

/* FUN_100099b0 @ 0x10d199b0 (664 bytes, 270 insns) [15 switch table(s)] */
void f_10d199b0(void) {
  FTRACE(0x10d199b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d199b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d199b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d199b3 push edi */
  push32((uint32_t)(EDI));
  /* 10d199b4 push esi */
  push32((uint32_t)(ESI));
  /* 10d199b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d199b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d199bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d199be mov eax, ecx */
  EAX = (ECX);
  /* 10d199c0 mov edx, ecx */
  EDX = (ECX);
  /* 10d199c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d199c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d199c6 jbe 0x10d199d0 */
  if ((C.cf||C.zf)) goto L_10d199d0;
  /* 10d199c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d199ca jb 0x10d19b48 */
  if (C.cf) goto L_10d19b48;
L_10d199d0:;
  /* 10d199d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d199d6 jne 0x10d199ec */
  if (!C.zf) goto L_10d199ec;
  /* 10d199d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d199db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d199de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d199e1 jb 0x10d19a0c */
  if (C.cf) goto L_10d19a0c;
  /* 10d199e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d199e5 jmp dword ptr [edx*4 + 0x10d19af8] */
  switch (EDX) {
    case 0: goto L_10d19b08;
    case 1: goto L_10d19b10;
    case 2: goto L_10d19b1c;
    case 3: goto L_10d19b30;
    default: x86_unimpl("switch@0x10d199e5 out of table"); return;
  }
L_10d199ec:;
  /* 10d199ec mov eax, edi */
  EAX = (EDI);
  /* 10d199ee mov edx, 3 */
  EDX = (0x3u);
  /* 10d199f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d199f6 jb 0x10d19a04 */
  if (C.cf) goto L_10d19a04;
  /* 10d199f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d199fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d199fd jmp dword ptr [eax*4 + 0x10d19a10] */
  switch (EAX) {
    case 1: goto L_10d19a20;
    case 2: goto L_10d19a4c;
    case 3: goto L_10d19a70;
    default: x86_unimpl("switch@0x10d199fd out of table"); return;
  }
L_10d19a04:;
  /* 10d19a04 jmp dword ptr [ecx*4 + 0x10d19b08] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10d19b08)))); return;
  /* 10d19a0b nop  */
  /* nop */
L_10d19a0c:;
  /* 10d19a0c jmp dword ptr [ecx*4 + 0x10d19a8c] */
  switch (ECX) {
    case 0: goto L_10d19aef;
    case 1: goto L_10d19adc;
    case 2: goto L_10d19ad4;
    case 3: goto L_10d19acc;
    case 4: goto L_10d19ac4;
    case 5: goto L_10d19abc;
    case 6: goto L_10d19ab4;
    case 7: goto L_10d19aac;
    default: x86_unimpl("switch@0x10d19a0c out of table"); return;
  }
  /* 10d19a13 nop  */
  /* nop */
L_10d19a20:;
  /* 10d19a20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19a22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d19a24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d19a26 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d19a29 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d19a2c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d19a2f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d19a32 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d19a35 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19a38 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19a3b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19a3e jb 0x10d19a0c */
  if (C.cf) goto L_10d19a0c;
  /* 10d19a40 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d19a42 jmp dword ptr [edx*4 + 0x10d19af8] */
  switch (EDX) {
    case 0: goto L_10d19b08;
    case 1: goto L_10d19b10;
    case 2: goto L_10d19b1c;
    case 3: goto L_10d19b30;
    default: x86_unimpl("switch@0x10d19a42 out of table"); return;
  }
  /* 10d19a49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d19a4c:;
  /* 10d19a4c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19a4e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d19a50 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d19a52 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d19a55 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d19a58 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d19a5b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19a5e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19a61 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19a64 jb 0x10d19a0c */
  if (C.cf) goto L_10d19a0c;
  /* 10d19a66 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d19a68 jmp dword ptr [edx*4 + 0x10d19af8] */
  switch (EDX) {
    case 0: goto L_10d19b08;
    case 1: goto L_10d19b10;
    case 2: goto L_10d19b1c;
    case 3: goto L_10d19b30;
    default: x86_unimpl("switch@0x10d19a68 out of table"); return;
  }
  /* 10d19a6f nop  */
  /* nop */
L_10d19a70:;
  /* 10d19a70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19a72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d19a74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d19a76 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d19a77 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d19a7a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d19a7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19a7e jb 0x10d19a0c */
  if (C.cf) goto L_10d19a0c;
  /* 10d19a80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d19a82 jmp dword ptr [edx*4 + 0x10d19af8] */
  switch (EDX) {
    case 0: goto L_10d19b08;
    case 1: goto L_10d19b10;
    case 2: goto L_10d19b1c;
    case 3: goto L_10d19b30;
    default: x86_unimpl("switch@0x10d19a82 out of table"); return;
  }
  /* 10d19a89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d19aac:;
  /* 10d19aac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10d19ab0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10d19ab4:;
  /* 10d19ab4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10d19ab8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10d19abc:;
  /* 10d19abc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10d19ac0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10d19ac4:;
  /* 10d19ac4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10d19ac8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10d19acc:;
  /* 10d19acc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10d19ad0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10d19ad4:;
  /* 10d19ad4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10d19ad8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10d19adc:;
  /* 10d19adc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10d19ae0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10d19ae4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d19aeb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19aed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d19aef:;
  /* 10d19aef jmp dword ptr [edx*4 + 0x10d19af8] */
  switch (EDX) {
    case 0: goto L_10d19b08;
    case 1: goto L_10d19b10;
    case 2: goto L_10d19b1c;
    case 3: goto L_10d19b30;
    default: x86_unimpl("switch@0x10d19aef out of table"); return;
  }
  /* 10d19af6 mov edi, edi */
  EDI = (EDI);
L_10d19b08:;
  /* 10d19b08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19b0b pop esi */
  ESI = (pop32());
  /* 10d19b0c pop edi */
  EDI = (pop32());
  /* 10d19b0d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d19b0e ret  */
  ESPCHK(0x10d199b0u, _esp0);
  ESP += 4; return;
  /* 10d19b0f nop  */
  /* nop */
L_10d19b10:;
  /* 10d19b10 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d19b12 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d19b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19b17 pop esi */
  ESI = (pop32());
  /* 10d19b18 pop edi */
  EDI = (pop32());
  /* 10d19b19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d19b1a ret  */
  ESPCHK(0x10d199b0u, _esp0);
  ESP += 4; return;
  /* 10d19b1b nop  */
  /* nop */
L_10d19b1c:;
  /* 10d19b1c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d19b1e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d19b20 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d19b23 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d19b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19b29 pop esi */
  ESI = (pop32());
  /* 10d19b2a pop edi */
  EDI = (pop32());
  /* 10d19b2b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d19b2c ret  */
  ESPCHK(0x10d199b0u, _esp0);
  ESP += 4; return;
  /* 10d19b2d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d19b30:;
  /* 10d19b30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d19b32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d19b34 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d19b37 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d19b3a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d19b3d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d19b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19b43 pop esi */
  ESI = (pop32());
  /* 10d19b44 pop edi */
  EDI = (pop32());
  /* 10d19b45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d19b46 ret  */
  ESPCHK(0x10d199b0u, _esp0);
  ESP += 4; return;
  /* 10d19b47 nop  */
  /* nop */
L_10d19b48:;
  /* 10d19b48 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10d19b4c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10d19b50 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d19b56 jne 0x10d19b7c */
  if (!C.zf) goto L_10d19b7c;
  /* 10d19b58 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d19b5b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d19b5e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19b61 jb 0x10d19b70 */
  if (C.cf) goto L_10d19b70;
  /* 10d19b63 std  */
  C.df=1;
  /* 10d19b64 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d19b66 cld  */
  C.df=0;
  /* 10d19b67 jmp dword ptr [edx*4 + 0x10d19c90] */
  switch (EDX) {
    case 0: goto L_10d19ca0;
    case 1: goto L_10d19ca8;
    case 2: goto L_10d19cb8;
    case 3: goto L_10d19ccc;
    default: x86_unimpl("switch@0x10d19b67 out of table"); return;
  }
  /* 10d19b6e mov edi, edi */
  EDI = (EDI);
L_10d19b70:;
  /* 10d19b70 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d19b72 jmp dword ptr [ecx*4 + 0x10d19c40] */
  switch (ECX) {
    case 0: goto L_10d19c87;
    default: x86_unimpl("switch@0x10d19b72 out of table"); return;
  }
  /* 10d19b79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d19b7c:;
  /* 10d19b7c mov eax, edi */
  EAX = (EDI);
  /* 10d19b7e mov edx, 3 */
  EDX = (0x3u);
  /* 10d19b83 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19b86 jb 0x10d19b94 */
  if (C.cf) goto L_10d19b94;
  /* 10d19b88 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d19b8b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19b8d jmp dword ptr [eax*4 + 0x10d19b98] */
  switch (EAX) {
    case 1: goto L_10d19ba8;
    case 2: goto L_10d19bc8;
    case 3: goto L_10d19bf0;
    default: x86_unimpl("switch@0x10d19b8d out of table"); return;
  }
L_10d19b94:;
  /* 10d19b94 jmp dword ptr [ecx*4 + 0x10d19c90] */
  switch (ECX) {
    case 0: goto L_10d19ca0;
    case 1: goto L_10d19ca8;
    case 2: goto L_10d19cb8;
    case 3: goto L_10d19ccc;
    default: x86_unimpl("switch@0x10d19b94 out of table"); return;
  }
  /* 10d19b9b nop  */
  /* nop */
L_10d19ba8:;
  /* 10d19ba8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d19bab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19bad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d19bb0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10d19bb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d19bb4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10d19bb5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19bb8 jb 0x10d19b70 */
  if (C.cf) goto L_10d19b70;
  /* 10d19bba std  */
  C.df=1;
  /* 10d19bbb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d19bbd cld  */
  C.df=0;
  /* 10d19bbe jmp dword ptr [edx*4 + 0x10d19c90] */
  switch (EDX) {
    case 0: goto L_10d19ca0;
    case 1: goto L_10d19ca8;
    case 2: goto L_10d19cb8;
    case 3: goto L_10d19ccc;
    default: x86_unimpl("switch@0x10d19bbe out of table"); return;
  }
  /* 10d19bc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d19bc8:;
  /* 10d19bc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d19bcb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19bcd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d19bd0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d19bd3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d19bd6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d19bd9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19bdc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19bdf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19be2 jb 0x10d19b70 */
  if (C.cf) goto L_10d19b70;
  /* 10d19be4 std  */
  C.df=1;
  /* 10d19be5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d19be7 cld  */
  C.df=0;
  /* 10d19be8 jmp dword ptr [edx*4 + 0x10d19c90] */
  switch (EDX) {
    case 0: goto L_10d19ca0;
    case 1: goto L_10d19ca8;
    case 2: goto L_10d19cb8;
    case 3: goto L_10d19ccc;
    default: x86_unimpl("switch@0x10d19be8 out of table"); return;
  }
  /* 10d19bef nop  */
  /* nop */
L_10d19bf0:;
  /* 10d19bf0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d19bf3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19bf5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d19bf8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d19bfb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d19bfe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d19c01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d19c04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d19c07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19c0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19c0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19c10 jb 0x10d19b70 */
  if (C.cf) goto L_10d19b70;
  /* 10d19c16 std  */
  C.df=1;
  /* 10d19c17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d19c19 cld  */
  C.df=0;
  /* 10d19c1a jmp dword ptr [edx*4 + 0x10d19c90] */
  switch (EDX) {
    case 0: goto L_10d19ca0;
    case 1: goto L_10d19ca8;
    case 2: goto L_10d19cb8;
    case 3: goto L_10d19ccc;
    default: x86_unimpl("switch@0x10d19c1a out of table"); return;
  }
  /* 10d19c21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10d19c24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 10d19c25 pushfd  */
  x86_unimpl("pushfd @ 0x10d19c25");
  /* 10d19c26 rcl dword ptr [eax] */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10d19c28 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 10d19c29 pushfd  */
  x86_unimpl("pushfd @ 0x10d19c29");
  /* 10d19c2a rcl dword ptr [eax] */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10d19c2c push esp */
  push32((uint32_t)(ESP));
  /* 10d19c2d pushfd  */
  x86_unimpl("pushfd @ 0x10d19c2d");
  /* 10d19c2e rcl dword ptr [eax] */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10d19c30 pop esp */
  ESP = (pop32());
  /* 10d19c31 pushfd  */
  x86_unimpl("pushfd @ 0x10d19c31");
  /* 10d19c32 rcl dword ptr [eax] */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10d19c34 pushfd  */
  x86_unimpl("pushfd @ 0x10d19c34");
  /* 10d19c36 rcl dword ptr [eax] */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10d19c38 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x10d19c38");
  /* 10d19c39 pushfd  */
  x86_unimpl("pushfd @ 0x10d19c39");
  /* 10d19c3a rcl dword ptr [eax] */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10d19c3c je 0x10d19bda */
  if (C.zf) goto L_10d19bda;
  /* 10d19c3e rcl dword ptr [eax] */
  { uint32_t _v=(r32((uint32_t)(EAX)))&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>31)&1; _v=((_v<<1)|_cf)&0xffffffffu; _cf=_b; } w32((uint32_t)(EAX), (_v)); C.cf=_cf; }
  /* 10d19c44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10d19c48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10d19c4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10d19c50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10d19c54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10d19c58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10d19c5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10d19c60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10d19c64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10d19c68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10d19c6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10d19c70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10d19c74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10d19c78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10d19c7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d19c83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19c85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d19c87:;
  /* 10d19c87 jmp dword ptr [edx*4 + 0x10d19c90] */
  switch (EDX) {
    case 0: goto L_10d19ca0;
    case 1: goto L_10d19ca8;
    case 2: goto L_10d19cb8;
    case 3: goto L_10d19ccc;
    default: x86_unimpl("switch@0x10d19c87 out of table"); return;
  }
  /* 10d19c8e mov edi, edi */
  EDI = (EDI);
L_10d19ca0:;
  /* 10d19ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19ca3 pop esi */
  ESI = (pop32());
  /* 10d19ca4 pop edi */
  EDI = (pop32());
  /* 10d19ca5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d19ca6 ret  */
  ESPCHK(0x10d199b0u, _esp0);
  ESP += 4; return;
  /* 10d19ca7 nop  */
  /* nop */
L_10d19ca8:;
  /* 10d19ca8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d19cab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d19cae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19cb1 pop esi */
  ESI = (pop32());
  /* 10d19cb2 pop edi */
  EDI = (pop32());
  /* 10d19cb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d19cb4 ret  */
  ESPCHK(0x10d199b0u, _esp0);
  ESP += 4; return;
  /* 10d19cb5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d19cb8:;
  /* 10d19cb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d19cbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d19cbe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d19cc1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d19cc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19cc7 pop esi */
  ESI = (pop32());
  /* 10d19cc8 pop edi */
  EDI = (pop32());
  /* 10d19cc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d19cca ret  */
  ESPCHK(0x10d199b0u, _esp0);
  ESP += 4; return;
  /* 10d19ccb nop  */
  /* nop */
L_10d19ccc:;
  /* 10d19ccc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d19ccf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d19cd2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d19cd5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d19cd8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d19cdb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d19cde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d19ce1 pop esi */
  ESI = (pop32());
  /* 10d19ce2 pop edi */
  EDI = (pop32());
  /* 10d19ce3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d19ce4 ret  */
  ESPCHK(0x10d199b0u, _esp0);
  ESP += 4; return;
L_10d19bda: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x10d19bda (unresolved jump table)"); return;
}

/* __aulldiv @ 0x10d19cf0 (104 bytes, 43 insns) */
void f_10d19cf0(void) {
  FTRACE(0x10d19cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d19cf0 push ebx */
  push32((uint32_t)(EBX));
  /* 10d19cf1 push esi */
  push32((uint32_t)(ESI));
  /* 10d19cf2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10d19cf6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d19cf8 jne 0x10d19d12 */
  if (!C.zf) goto L_10d19d12;
  /* 10d19cfa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d19cfe mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d19d02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19d04 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d19d06 mov ebx, eax */
  EBX = (EAX);
  /* 10d19d08 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d19d0c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d19d0e mov edx, ebx */
  EDX = (EBX);
  /* 10d19d10 jmp 0x10d19d53 */
  goto L_10d19d53;
L_10d19d12:;
  /* 10d19d12 mov ecx, eax */
  ECX = (EAX);
  /* 10d19d14 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d19d18 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d19d1c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10d19d20:;
  /* 10d19d20 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d19d22 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10d19d24 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d19d26 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10d19d28 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d19d2a jne 0x10d19d20 */
  if (!C.zf) goto L_10d19d20;
  /* 10d19d2c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d19d2e mov esi, eax */
  ESI = (EAX);
  /* 10d19d30 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d19d34 mov ecx, eax */
  ECX = (EAX);
  /* 10d19d36 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d19d3a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d19d3c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19d3e jb 0x10d19d4e */
  if (C.cf) goto L_10d19d4e;
  /* 10d19d40 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19d44 ja 0x10d19d4e */
  if ((!C.cf&&!C.zf)) goto L_10d19d4e;
  /* 10d19d46 jb 0x10d19d4f */
  if (C.cf) goto L_10d19d4f;
  /* 10d19d48 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19d4c jbe 0x10d19d4f */
  if ((C.cf||C.zf)) goto L_10d19d4f;
L_10d19d4e:;
  /* 10d19d4e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10d19d4f:;
  /* 10d19d4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19d51 mov eax, esi */
  EAX = (ESI);
L_10d19d53:;
  /* 10d19d53 pop esi */
  ESI = (pop32());
  /* 10d19d54 pop ebx */
  EBX = (pop32());
  /* 10d19d55 ret 0x10 */
  ESPCHK(0x10d19cf0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10d19d60 (117 bytes, 44 insns) */
void f_10d19d60(void) {
  FTRACE(0x10d19d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d19d60 push ebx */
  push32((uint32_t)(EBX));
  /* 10d19d61 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d19d65 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d19d67 jne 0x10d19d81 */
  if (!C.zf) goto L_10d19d81;
  /* 10d19d69 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d19d6d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d19d71 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19d73 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d19d75 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d19d79 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d19d7b mov eax, edx */
  EAX = (EDX);
  /* 10d19d7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d19d7f jmp 0x10d19dd1 */
  goto L_10d19dd1;
L_10d19d81:;
  /* 10d19d81 mov ecx, eax */
  ECX = (EAX);
  /* 10d19d83 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d19d87 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d19d8b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10d19d8f:;
  /* 10d19d8f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d19d91 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10d19d93 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d19d95 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10d19d97 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d19d99 jne 0x10d19d8f */
  if (!C.zf) goto L_10d19d8f;
  /* 10d19d9b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d19d9d mov ecx, eax */
  ECX = (EAX);
  /* 10d19d9f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d19da3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10d19da4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d19da8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19daa jb 0x10d19dba */
  if (C.cf) goto L_10d19dba;
  /* 10d19dac cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19db0 ja 0x10d19dba */
  if ((!C.cf&&!C.zf)) goto L_10d19dba;
  /* 10d19db2 jb 0x10d19dc2 */
  if (C.cf) goto L_10d19dc2;
  /* 10d19db4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19db8 jbe 0x10d19dc2 */
  if ((C.cf||C.zf)) goto L_10d19dc2;
L_10d19dba:;
  /* 10d19dba sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19dbe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10d19dc2:;
  /* 10d19dc2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19dc6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19dca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d19dcc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d19dce sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10d19dd1:;
  /* 10d19dd1 pop ebx */
  EBX = (pop32());
  /* 10d19dd2 ret 0x10 */
  ESPCHK(0x10d19d60u, _esp0);
  ESP += 20; return;
}

/* FUN_10009de0 @ 0x10d19de0 (628 bytes, 214 insns) */
void f_10d19de0(void) {
  FTRACE(0x10d19de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d19de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d19de1 mov ebp, esp */
  EBP = (ESP);
  /* 10d19de3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19de6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d19de7 push esi */
  push32((uint32_t)(ESI));
  /* 10d19de8 push edi */
  push32((uint32_t)(EDI));
L_10d19de9:;
  /* 10d19de9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19ded jne 0x10d19e0d */
  if (!C.zf) goto L_10d19e0d;
  /* 10d19def push 0x10d39ec0 */
  push32((uint32_t)(0x10d39ec0u));
  /* 10d19df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d19df6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10d19df8 push 0x10d39eb4 */
  push32((uint32_t)(0x10d39eb4u));
  /* 10d19dfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d19dff call 0x10d12190 */
  push32(0x10d19e04u); f_10d12190();
  /* 10d19e04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19e07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19e0a jne 0x10d19e0d */
  if (!C.zf) goto L_10d19e0d;
  /* 10d19e0c int3  */
  x86_unimpl("int3 @ 0x10d19e0c");
L_10d19e0d:;
  /* 10d19e0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d19e0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d19e11 jne 0x10d19de9 */
  if (!C.zf) goto L_10d19de9;
  /* 10d19e13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d19e16 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d19e19 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e1c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d19e1f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d19e22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e25 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d19e28 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10d19e2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d19e30 je 0x10d19e3f */
  if (C.zf) goto L_10d19e3f;
  /* 10d19e32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e35 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d19e38 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10d19e3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d19e3d je 0x10d19e55 */
  if (C.zf) goto L_10d19e55;
L_10d19e3f:;
  /* 10d19e3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e42 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d19e45 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10d19e47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e4a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10d19e4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d19e50 jmp 0x10d1a04d */
  goto L_10d1a04d;
L_10d19e55:;
  /* 10d19e55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e58 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d19e5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d19e5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d19e60 je 0x10d19eac */
  if (C.zf) goto L_10d19eac;
  /* 10d19e62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e65 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d19e6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e6f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d19e72 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10d19e75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d19e77 je 0x10d19e95 */
  if (C.zf) goto L_10d19e95;
  /* 10d19e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e7c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e7f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d19e82 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d19e84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e87 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d19e8a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10d19e8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e90 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d19e93 jmp 0x10d19eac */
  goto L_10d19eac;
L_10d19e95:;
  /* 10d19e95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19e98 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d19e9b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10d19e9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19ea1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d19ea4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d19ea7 jmp 0x10d1a04d */
  goto L_10d1a04d;
L_10d19eac:;
  /* 10d19eac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19eaf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d19eb2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10d19eb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19eb8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d19ebb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19ebe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d19ec1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10d19ec4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19ec7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d19eca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19ecd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d19ed4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d19edb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d19ede mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d19ee1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19ee4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d19ee7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10d19eed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d19eef jne 0x10d19f1f */
  if (!C.zf) goto L_10d19f1f;
  /* 10d19ef1 cmp dword ptr [ebp - 8], 0x10d3d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10d3d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19ef8 je 0x10d19f03 */
  if (C.zf) goto L_10d19f03;
  /* 10d19efa cmp dword ptr [ebp - 8], 0x10d3d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10d3d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19f01 jne 0x10d19f13 */
  if (!C.zf) goto L_10d19f13;
L_10d19f03:;
  /* 10d19f03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d19f06 push edx */
  push32((uint32_t)(EDX));
  /* 10d19f07 call 0x10d1bd50 */
  push32(0x10d19f0cu); f_10d1bd50();
  /* 10d19f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d19f11 jne 0x10d19f1f */
  if (!C.zf) goto L_10d19f1f;
L_10d19f13:;
  /* 10d19f13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f16 push eax */
  push32((uint32_t)(EAX));
  /* 10d19f17 call 0x10d1bc80 */
  push32(0x10d19f1cu); f_10d1bc80();
  /* 10d19f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d19f1f:;
  /* 10d19f1f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f22 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d19f25 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10d19f2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d19f2d je 0x10d1a00b */
  if (C.zf) goto L_10d1a00b;
L_10d19f33:;
  /* 10d19f33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f39 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10d19f3b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19f3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d19f40 jge 0x10d19f63 */
  if ((C.sf==C.of)) goto L_10d19f63;
  /* 10d19f42 push 0x10d39e74 */
  push32((uint32_t)(0x10d39e74u));
  /* 10d19f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d19f49 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10d19f4e push 0x10d39eb4 */
  push32((uint32_t)(0x10d39eb4u));
  /* 10d19f53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d19f55 call 0x10d12190 */
  push32(0x10d19f5au); f_10d12190();
  /* 10d19f5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19f5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19f60 jne 0x10d19f63 */
  if (!C.zf) goto L_10d19f63;
  /* 10d19f62 int3  */
  x86_unimpl("int3 @ 0x10d19f62");
L_10d19f63:;
  /* 10d19f63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d19f65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d19f67 jne 0x10d19f33 */
  if (!C.zf) goto L_10d19f33;
  /* 10d19f69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f6f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d19f71 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19f74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d19f77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f7a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d19f7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19f80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d19f85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f88 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d19f8b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d19f8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19f91 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d19f94 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19f98 jle 0x10d19fb6 */
  if ((C.zf||C.sf!=C.of)) goto L_10d19fb6;
  /* 10d19f9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d19f9d push ecx */
  push32((uint32_t)(ECX));
  /* 10d19f9e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d19fa1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d19fa4 push eax */
  push32((uint32_t)(EAX));
  /* 10d19fa5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d19fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d19fa9 call 0x10d1b970 */
  push32(0x10d19faeu); f_10d1b970();
  /* 10d19fae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19fb1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d19fb4 jmp 0x10d19ffe */
  goto L_10d19ffe;
L_10d19fb6:;
  /* 10d19fb6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d19fba je 0x10d19fd9 */
  if (C.zf) goto L_10d19fd9;
  /* 10d19fbc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d19fbf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d19fc2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d19fc5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d19fc8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d19fcb mov ecx, dword ptr [edx*4 + 0x10d3fe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d3fe00)));
  /* 10d19fd2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d19fd4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d19fd7 jmp 0x10d19fe0 */
  goto L_10d19fe0;
L_10d19fd9:;
  /* 10d19fd9 mov dword ptr [ebp - 0x14], 0x10d3ca60 */
  w32((uint32_t)(EBP + -0x14), (0x10d3ca60u));
L_10d19fe0:;
  /* 10d19fe0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d19fe3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10d19fe7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d19fea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d19fec je 0x10d19ffe */
  if (C.zf) goto L_10d19ffe;
  /* 10d19fee push 2 */
  push32((uint32_t)(0x2u));
  /* 10d19ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d19ff2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d19ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d19ff6 call 0x10d1b820 */
  push32(0x10d19ffbu); f_10d1b820();
  /* 10d19ffb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d19ffe:;
  /* 10d19ffe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1a001 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d1a004 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d1a007 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d1a009 jmp 0x10d1a029 */
  goto L_10d1a029;
L_10d1a00b:;
  /* 10d1a00b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d1a012 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a015 push edx */
  push32((uint32_t)(EDX));
  /* 10d1a016 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10d1a019 push eax */
  push32((uint32_t)(EAX));
  /* 10d1a01a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1a01d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a01e call 0x10d1b970 */
  push32(0x10d1a023u); f_10d1b970();
  /* 10d1a023 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a026 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d1a029:;
  /* 10d1a029 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1a02c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a02f je 0x10d1a045 */
  if (C.zf) goto L_10d1a045;
  /* 10d1a031 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1a034 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1a037 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a03a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1a03d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10d1a040 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a043 jmp 0x10d1a04d */
  goto L_10d1a04d;
L_10d1a045:;
  /* 10d1a045 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1a048 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10d1a04d:;
  /* 10d1a04d pop edi */
  EDI = (pop32());
  /* 10d1a04e pop esi */
  ESI = (pop32());
  /* 10d1a04f pop ebx */
  EBX = (pop32());
  /* 10d1a050 mov esp, ebp */
  ESP = (EBP);
  /* 10d1a052 pop ebp */
  EBP = (pop32());
  /* 10d1a053 ret  */
  ESPCHK(0x10d19de0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a060 @ 0x10d1a060 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10d1a060(void) {
  FTRACE(0x10d1a060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1a060 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1a061 mov ebp, esp */
  EBP = (ESP);
  /* 10d1a063 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a069 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1a06a push esi */
  push32((uint32_t)(ESI));
  /* 10d1a06b push edi */
  push32((uint32_t)(EDI));
  /* 10d1a06c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d1a073 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10d1a07d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10d1a084:;
  /* 10d1a084 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1a087 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d1a089 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10d1a08c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a090 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1a093 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a096 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d1a099 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a09b je 0x10d1ac77 */
  if (C.zf) goto L_10d1ac77;
  /* 10d1a0a1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a0a8 jl 0x10d1ac77 */
  if ((C.sf!=C.of)) goto L_10d1ac77;
  /* 10d1a0ae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a0b2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a0b5 jl 0x10d1a0d6 */
  if ((C.sf!=C.of)) goto L_10d1a0d6;
  /* 10d1a0b7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a0bb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a0be jg 0x10d1a0d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1a0d6;
  /* 10d1a0c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a0c4 movsx ecx, byte ptr [eax + 0x10d39eac] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10d39eac))));
  /* 10d1a0cb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a0ce mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10d1a0d4 jmp 0x10d1a0e0 */
  goto L_10d1a0e0;
L_10d1a0d6:;
  /* 10d1a0d6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10d1a0e0:;
  /* 10d1a0e0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10d1a0e6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d1a0e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1a0ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1a0ef movsx edx, byte ptr [ecx + eax*8 + 0x10d39ecc] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10d39ecc))));
  /* 10d1a0f7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d1a0fa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d1a0fd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1a100 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10d1a106 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a10d ja 0x10d1ac72 */
  if ((!C.cf&&!C.zf)) goto L_10d1ac72;
  /* 10d1a113 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10d1a119 jmp dword ptr [ecx*4 + 0x10d1ac84] */
  switch (ECX) {
    case 0: goto L_10d1a120;
    case 1: goto L_10d1a1ba;
    case 2: goto L_10d1a1fc;
    case 3: goto L_10d1a26b;
    case 4: goto L_10d1a2c3;
    case 5: goto L_10d1a2d2;
    case 6: goto L_10d1a31e;
    case 7: goto L_10d1a3b1;
    case 8: goto L_10d1a248;
    case 9: goto L_10d1a253;
    case 10: goto L_10d1a23e;
    case 11: goto L_10d1a233;
    case 12: goto L_10d1a25e;
    case 13: goto L_10d1a266;
    default: x86_unimpl("switch@0x10d1a119 out of table"); return;
  }
L_10d1a120:;
  /* 10d1a120 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10d1a127 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1a12a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1a130 mov eax, dword ptr [0x10d3cc98] */
  EAX = (r32((uint32_t)(0x10d3cc98)));
  /* 10d1a135 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a137 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d1a13b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a141 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1a143 je 0x10d1a19d */
  if (C.zf) goto L_10d1a19d;
  /* 10d1a145 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10d1a14b push edx */
  push32((uint32_t)(EDX));
  /* 10d1a14c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1a14f push eax */
  push32((uint32_t)(EAX));
  /* 10d1a150 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a154 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a155 call 0x10d1ad90 */
  push32(0x10d1a15au); f_10d1ad90();
  /* 10d1a15a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a15d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1a160 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d1a162 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10d1a165 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1a168 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a16b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d1a16e:;
  /* 10d1a16e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a172 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a174 jne 0x10d1a197 */
  if (!C.zf) goto L_10d1a197;
  /* 10d1a176 push 0x10d39f4c */
  push32((uint32_t)(0x10d39f4cu));
  /* 10d1a17b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1a17d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10d1a182 push 0x10d39f40 */
  push32((uint32_t)(0x10d39f40u));
  /* 10d1a187 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1a189 call 0x10d12190 */
  push32(0x10d1a18eu); f_10d12190();
  /* 10d1a18e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a191 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a194 jne 0x10d1a197 */
  if (!C.zf) goto L_10d1a197;
  /* 10d1a196 int3  */
  x86_unimpl("int3 @ 0x10d1a196");
L_10d1a197:;
  /* 10d1a197 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a19b jne 0x10d1a16e */
  if (!C.zf) goto L_10d1a16e;
L_10d1a19d:;
  /* 10d1a19d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10d1a1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a1a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1a1a7 push edx */
  push32((uint32_t)(EDX));
  /* 10d1a1a8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a1ac push eax */
  push32((uint32_t)(EAX));
  /* 10d1a1ad call 0x10d1ad90 */
  push32(0x10d1a1b2u); f_10d1ad90();
  /* 10d1a1b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a1b5 jmp 0x10d1ac72 */
  goto L_10d1ac72;
L_10d1a1ba:;
  /* 10d1a1ba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1a1c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1a1c4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10d1a1ca mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10d1a1d0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10d1a1d6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d1a1dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d1a1df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1a1e6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10d1a1f0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10d1a1f7 jmp 0x10d1ac72 */
  goto L_10d1ac72;
L_10d1a1fc:;
  /* 10d1a1fc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a200 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10d1a206 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10d1a20c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a20f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10d1a215 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a21c ja 0x10d1a266 */
  if ((!C.cf&&!C.zf)) goto L_10d1a266;
  /* 10d1a21e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10d1a224 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a226 mov al, byte ptr [ecx + 0x10d1acbc] */
  AL = (r8((uint32_t)(ECX + 0x10d1acbc)));
  /* 10d1a22c jmp dword ptr [eax*4 + 0x10d1aca4] */
  switch (EAX) {
    case 0: goto L_10d1a248;
    case 1: goto L_10d1a253;
    case 2: goto L_10d1a23e;
    case 3: goto L_10d1a233;
    case 4: goto L_10d1a25e;
    case 5: goto L_10d1a266;
    default: x86_unimpl("switch@0x10d1a22c out of table"); return;
  }
L_10d1a233:;
  /* 10d1a233 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a236 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1a239 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1a23c jmp 0x10d1a266 */
  goto L_10d1a266;
L_10d1a23e:;
  /* 10d1a23e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a241 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10d1a243 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1a246 jmp 0x10d1a266 */
  goto L_10d1a266;
L_10d1a248:;
  /* 10d1a248 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a24b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a24e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1a251 jmp 0x10d1a266 */
  goto L_10d1a266;
L_10d1a253:;
  /* 10d1a253 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a256 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10d1a259 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1a25c jmp 0x10d1a266 */
  goto L_10d1a266;
L_10d1a25e:;
  /* 10d1a25e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a261 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10d1a263 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1a266:;
  /* 10d1a266 jmp 0x10d1ac72 */
  goto L_10d1ac72;
L_10d1a26b:;
  /* 10d1a26b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a26f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a272 jne 0x10d1a2a7 */
  if (!C.zf) goto L_10d1a2a7;
  /* 10d1a274 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d1a277 push edx */
  push32((uint32_t)(EDX));
  /* 10d1a278 call 0x10d1aea0 */
  push32(0x10d1a27du); f_10d1aea0();
  /* 10d1a27d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a280 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10d1a286 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a28d jge 0x10d1a2a5 */
  if ((C.sf==C.of)) goto L_10d1a2a5;
  /* 10d1a28f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a292 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10d1a294 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1a297 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d1a29d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1a29f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10d1a2a5:;
  /* 10d1a2a5 jmp 0x10d1a2be */
  goto L_10d1a2be;
L_10d1a2a7:;
  /* 10d1a2a7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d1a2ad imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1a2b0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a2b4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10d1a2b8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10d1a2be:;
  /* 10d1a2be jmp 0x10d1ac72 */
  goto L_10d1ac72;
L_10d1a2c3:;
  /* 10d1a2c3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10d1a2cd jmp 0x10d1ac72 */
  goto L_10d1ac72;
L_10d1a2d2:;
  /* 10d1a2d2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a2d6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a2d9 jne 0x10d1a302 */
  if (!C.zf) goto L_10d1a302;
  /* 10d1a2db lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d1a2de push eax */
  push32((uint32_t)(EAX));
  /* 10d1a2df call 0x10d1aea0 */
  push32(0x10d1a2e4u); f_10d1aea0();
  /* 10d1a2e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a2e7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10d1a2ed cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a2f4 jge 0x10d1a300 */
  if ((C.sf==C.of)) goto L_10d1a300;
  /* 10d1a2f6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10d1a300:;
  /* 10d1a300 jmp 0x10d1a319 */
  goto L_10d1a319;
L_10d1a302:;
  /* 10d1a302 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d1a308 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1a30b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a30f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10d1a313 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10d1a319:;
  /* 10d1a319 jmp 0x10d1ac72 */
  goto L_10d1ac72;
L_10d1a31e:;
  /* 10d1a31e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a322 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10d1a328 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10d1a32e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a331 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10d1a337 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a33e ja 0x10d1a3ac */
  if ((!C.cf&&!C.zf)) goto L_10d1a3ac;
  /* 10d1a340 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10d1a346 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a348 mov al, byte ptr [ecx + 0x10d1ace1] */
  AL = (r8((uint32_t)(ECX + 0x10d1ace1)));
  /* 10d1a34e jmp dword ptr [eax*4 + 0x10d1accd] */
  switch (EAX) {
    case 0: goto L_10d1a360;
    case 1: goto L_10d1a399;
    case 2: goto L_10d1a355;
    case 3: goto L_10d1a3a3;
    case 4: goto L_10d1a3ac;
    default: x86_unimpl("switch@0x10d1a34e out of table"); return;
  }
L_10d1a355:;
  /* 10d1a355 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a358 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1a35b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1a35e jmp 0x10d1a3ac */
  goto L_10d1a3ac;
L_10d1a360:;
  /* 10d1a360 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1a363 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1a366 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a369 jne 0x10d1a38b */
  if (!C.zf) goto L_10d1a38b;
  /* 10d1a36b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1a36e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d1a372 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a375 jne 0x10d1a38b */
  if (!C.zf) goto L_10d1a38b;
  /* 10d1a377 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1a37a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a37d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d1a380 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a383 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d1a386 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1a389 jmp 0x10d1a397 */
  goto L_10d1a397;
L_10d1a38b:;
  /* 10d1a38b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10d1a392 jmp 0x10d1a120 */
  goto L_10d1a120;
L_10d1a397:;
  /* 10d1a397 jmp 0x10d1a3ac */
  goto L_10d1a3ac;
L_10d1a399:;
  /* 10d1a399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a39c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10d1a39e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1a3a1 jmp 0x10d1a3ac */
  goto L_10d1a3ac;
L_10d1a3a3:;
  /* 10d1a3a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a3a6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d1a3a9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d1a3ac:;
  /* 10d1a3ac jmp 0x10d1ac72 */
  goto L_10d1ac72;
L_10d1a3b1:;
  /* 10d1a3b1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a3b5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10d1a3bb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10d1a3c1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a3c4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10d1a3ca cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a3d1 ja 0x10d1aa97 */
  if ((!C.cf&&!C.zf)) goto L_10d1aa97;
  /* 10d1a3d7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10d1a3dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a3df mov cl, byte ptr [edx + 0x10d1ad4c] */
  CL = (r8((uint32_t)(EDX + 0x10d1ad4c)));
  /* 10d1a3e5 jmp dword ptr [ecx*4 + 0x10d1ad10] */
  switch (ECX) {
    case 0: goto L_10d1a3ec;
    case 1: goto L_10d1a680;
    case 2: goto L_10d1a510;
    case 3: goto L_10d1a7b9;
    case 4: goto L_10d1a47b;
    case 5: goto L_10d1a401;
    case 6: goto L_10d1a78b;
    case 7: goto L_10d1a690;
    case 8: goto L_10d1a635;
    case 9: goto L_10d1a805;
    case 10: goto L_10d1a7af;
    case 11: goto L_10d1a526;
    case 12: goto L_10d1a7a3;
    case 13: goto L_10d1a7c5;
    case 14: goto L_10d1aa97;
    default: x86_unimpl("switch@0x10d1a3e5 out of table"); return;
  }
L_10d1a3ec:;
  /* 10d1a3ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a3ef and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a3f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a3f6 jne 0x10d1a401 */
  if (!C.zf) goto L_10d1a401;
  /* 10d1a3f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a3fb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d1a3fe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d1a401:;
  /* 10d1a401 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a404 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1a40a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a40c je 0x10d1a447 */
  if (C.zf) goto L_10d1a447;
  /* 10d1a40e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d1a411 push eax */
  push32((uint32_t)(EAX));
  /* 10d1a412 call 0x10d1aee0 */
  push32(0x10d1a417u); f_10d1aee0();
  /* 10d1a417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a41a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10d1a41e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10d1a422 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a423 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10d1a429 push edx */
  push32((uint32_t)(EDX));
  /* 10d1a42a call 0x10d1bfc0 */
  push32(0x10d1a42fu); f_10d1bfc0();
  /* 10d1a42f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a432 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d1a435 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a439 jge 0x10d1a445 */
  if ((C.sf==C.of)) goto L_10d1a445;
  /* 10d1a43b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10d1a445:;
  /* 10d1a445 jmp 0x10d1a46d */
  goto L_10d1a46d;
L_10d1a447:;
  /* 10d1a447 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d1a44a push eax */
  push32((uint32_t)(EAX));
  /* 10d1a44b call 0x10d1aea0 */
  push32(0x10d1a450u); f_10d1aea0();
  /* 10d1a450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a453 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10d1a45a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10d1a460 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10d1a466 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10d1a46d:;
  /* 10d1a46d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10d1a473 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d1a476 jmp 0x10d1aa97 */
  goto L_10d1aa97;
L_10d1a47b:;
  /* 10d1a47b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d1a47e push eax */
  push32((uint32_t)(EAX));
  /* 10d1a47f call 0x10d1aea0 */
  push32(0x10d1a484u); f_10d1aea0();
  /* 10d1a484 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a487 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10d1a48d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a494 je 0x10d1a4a2 */
  if (C.zf) goto L_10d1a4a2;
  /* 10d1a496 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d1a49c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a4a0 jne 0x10d1a4bc */
  if (!C.zf) goto L_10d1a4bc;
L_10d1a4a2:;
  /* 10d1a4a2 mov edx, dword ptr [0x10d3cfb0] */
  EDX = (r32((uint32_t)(0x10d3cfb0)));
  /* 10d1a4a8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d1a4ab mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1a4ae push eax */
  push32((uint32_t)(EAX));
  /* 10d1a4af call 0x10d15f00 */
  push32(0x10d1a4b4u); f_10d15f00();
  /* 10d1a4b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a4b7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d1a4ba jmp 0x10d1a50b */
  goto L_10d1a50b;
L_10d1a4bc:;
  /* 10d1a4bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a4bf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a4c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1a4c7 je 0x10d1a4ec */
  if (C.zf) goto L_10d1a4ec;
  /* 10d1a4c9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d1a4cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d1a4d2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d1a4d5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d1a4db movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10d1a4de shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d1a4e0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d1a4e3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10d1a4ea jmp 0x10d1a50b */
  goto L_10d1a50b;
L_10d1a4ec:;
  /* 10d1a4ec mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10d1a4f3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d1a4f9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1a4fc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d1a4ff mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d1a505 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10d1a508 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d1a50b:;
  /* 10d1a50b jmp 0x10d1aa97 */
  goto L_10d1aa97;
L_10d1a510:;
  /* 10d1a510 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a513 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a519 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1a51b jne 0x10d1a526 */
  if (!C.zf) goto L_10d1a526;
  /* 10d1a51d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a520 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d1a523 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d1a526:;
  /* 10d1a526 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a52d jne 0x10d1a53b */
  if (!C.zf) goto L_10d1a53b;
  /* 10d1a52f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10d1a539 jmp 0x10d1a547 */
  goto L_10d1a547;
L_10d1a53b:;
  /* 10d1a53b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d1a541 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10d1a547:;
  /* 10d1a547 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10d1a54d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10d1a553 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d1a556 push edx */
  push32((uint32_t)(EDX));
  /* 10d1a557 call 0x10d1aea0 */
  push32(0x10d1a55cu); f_10d1aea0();
  /* 10d1a55c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a55f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d1a562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a565 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a56a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a56c je 0x10d1a5d6 */
  if (C.zf) goto L_10d1a5d6;
  /* 10d1a56e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a572 jne 0x10d1a57d */
  if (!C.zf) goto L_10d1a57d;
  /* 10d1a574 mov ecx, dword ptr [0x10d3cfb4] */
  ECX = (r32((uint32_t)(0x10d3cfb4)));
  /* 10d1a57a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d1a57d:;
  /* 10d1a57d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10d1a584 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1a587 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10d1a58d:;
  /* 10d1a58d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d1a593 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d1a599 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a59c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10d1a5a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a5a4 je 0x10d1a5c6 */
  if (C.zf) goto L_10d1a5c6;
  /* 10d1a5a6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10d1a5ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a5ae mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10d1a5b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a5b3 je 0x10d1a5c6 */
  if (C.zf) goto L_10d1a5c6;
  /* 10d1a5b5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10d1a5bb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a5be mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10d1a5c4 jmp 0x10d1a58d */
  goto L_10d1a58d;
L_10d1a5c6:;
  /* 10d1a5c6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10d1a5cc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a5cf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d1a5d1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d1a5d4 jmp 0x10d1a630 */
  goto L_10d1a630;
L_10d1a5d6:;
  /* 10d1a5d6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a5da jne 0x10d1a5e4 */
  if (!C.zf) goto L_10d1a5e4;
  /* 10d1a5dc mov eax, dword ptr [0x10d3cfb0] */
  EAX = (r32((uint32_t)(0x10d3cfb0)));
  /* 10d1a5e1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10d1a5e4:;
  /* 10d1a5e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1a5e7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10d1a5ed:;
  /* 10d1a5ed mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d1a5f3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d1a5f9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a5fc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10d1a602 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a604 je 0x10d1a624 */
  if (C.zf) goto L_10d1a624;
  /* 10d1a606 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10d1a60c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1a60f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a611 je 0x10d1a624 */
  if (C.zf) goto L_10d1a624;
  /* 10d1a613 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10d1a619 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a61c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10d1a622 jmp 0x10d1a5ed */
  goto L_10d1a5ed;
L_10d1a624:;
  /* 10d1a624 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10d1a62a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a62d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10d1a630:;
  /* 10d1a630 jmp 0x10d1aa97 */
  goto L_10d1aa97;
L_10d1a635:;
  /* 10d1a635 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d1a638 push edx */
  push32((uint32_t)(EDX));
  /* 10d1a639 call 0x10d1aea0 */
  push32(0x10d1a63eu); f_10d1aea0();
  /* 10d1a63e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a641 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10d1a647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a64a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a64d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a64f je 0x10d1a663 */
  if (C.zf) goto L_10d1a663;
  /* 10d1a651 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10d1a657 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10d1a65e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10d1a661 jmp 0x10d1a671 */
  goto L_10d1a671;
L_10d1a663:;
  /* 10d1a663 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10d1a669 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10d1a66f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10d1a671:;
  /* 10d1a671 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10d1a67b jmp 0x10d1aa97 */
  goto L_10d1aa97;
L_10d1a680:;
  /* 10d1a680 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d1a687 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10d1a68a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d1a68d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10d1a690:;
  /* 10d1a690 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a693 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10d1a695 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1a698 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10d1a69e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d1a6a1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a6a8 jge 0x10d1a6b6 */
  if ((C.sf==C.of)) goto L_10d1a6b6;
  /* 10d1a6aa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10d1a6b4 jmp 0x10d1a6d2 */
  goto L_10d1a6d2;
L_10d1a6b6:;
  /* 10d1a6b6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a6bd jne 0x10d1a6d2 */
  if (!C.zf) goto L_10d1a6d2;
  /* 10d1a6bf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a6c3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a6c6 jne 0x10d1a6d2 */
  if (!C.zf) goto L_10d1a6d2;
  /* 10d1a6c8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10d1a6d2:;
  /* 10d1a6d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1a6d5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a6d8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10d1a6db mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1a6de sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a6e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d1a6e3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d1a6e6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10d1a6ec mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10d1a6f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1a6f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a6f6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d1a6fc push edx */
  push32((uint32_t)(EDX));
  /* 10d1a6fd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a701 push eax */
  push32((uint32_t)(EAX));
  /* 10d1a702 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1a705 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a706 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10d1a70c push edx */
  push32((uint32_t)(EDX));
  /* 10d1a70d call dword ptr [0x10d3d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3d3a0))), 0x10d1a713u);
  /* 10d1a713 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a719 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a71e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a720 je 0x10d1a738 */
  if (C.zf) goto L_10d1a738;
  /* 10d1a722 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a729 jne 0x10d1a738 */
  if (!C.zf) goto L_10d1a738;
  /* 10d1a72b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1a72e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a72f call dword ptr [0x10d3d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3d3ac))), 0x10d1a735u);
  /* 10d1a735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1a738:;
  /* 10d1a738 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d1a73c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a73f jne 0x10d1a75a */
  if (!C.zf) goto L_10d1a75a;
  /* 10d1a741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a744 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a74b jne 0x10d1a75a */
  if (!C.zf) goto L_10d1a75a;
  /* 10d1a74d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1a750 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a751 call dword ptr [0x10d3d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3d3a4))), 0x10d1a757u);
  /* 10d1a757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1a75a:;
  /* 10d1a75a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1a75d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d1a760 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a763 jne 0x10d1a777 */
  if (!C.zf) goto L_10d1a777;
  /* 10d1a765 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a768 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d1a76b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1a76e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1a771 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a774 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10d1a777:;
  /* 10d1a777 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1a77a push eax */
  push32((uint32_t)(EAX));
  /* 10d1a77b call 0x10d15f00 */
  push32(0x10d1a780u); f_10d15f00();
  /* 10d1a780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a783 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d1a786 jmp 0x10d1aa97 */
  goto L_10d1aa97;
L_10d1a78b:;
  /* 10d1a78b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a78e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a791 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1a794 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10d1a79e jmp 0x10d1a825 */
  goto L_10d1a825;
L_10d1a7a3:;
  /* 10d1a7a3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10d1a7ad jmp 0x10d1a825 */
  goto L_10d1a825;
L_10d1a7af:;
  /* 10d1a7af mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10d1a7b9:;
  /* 10d1a7b9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10d1a7c3 jmp 0x10d1a7cf */
  goto L_10d1a7cf;
L_10d1a7c5:;
  /* 10d1a7c5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10d1a7cf:;
  /* 10d1a7cf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10d1a7d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a7dc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1a7e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a7e4 je 0x10d1a803 */
  if (C.zf) goto L_10d1a803;
  /* 10d1a7e6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10d1a7ed mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10d1a7f3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a7f6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10d1a7fc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10d1a803:;
  /* 10d1a803 jmp 0x10d1a825 */
  goto L_10d1a825;
L_10d1a805:;
  /* 10d1a805 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10d1a80f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a812 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a818 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1a81a je 0x10d1a825 */
  if (C.zf) goto L_10d1a825;
  /* 10d1a81c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a81f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d1a822 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d1a825:;
  /* 10d1a825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a828 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a82d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a82f je 0x10d1a84e */
  if (C.zf) goto L_10d1a84e;
  /* 10d1a831 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d1a834 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a835 call 0x10d1aec0 */
  push32(0x10d1a83au); f_10d1aec0();
  /* 10d1a83a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a83d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d1a843 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10d1a849 jmp 0x10d1a8df */
  goto L_10d1a8df;
L_10d1a84e:;
  /* 10d1a84e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a851 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1a854 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a856 je 0x10d1a8a0 */
  if (C.zf) goto L_10d1a8a0;
  /* 10d1a858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a85b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a85e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a860 je 0x10d1a880 */
  if (C.zf) goto L_10d1a880;
  /* 10d1a862 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d1a865 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a866 call 0x10d1aea0 */
  push32(0x10d1a86bu); f_10d1aea0();
  /* 10d1a86b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a86e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10d1a871 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d1a872 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d1a878 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10d1a87e jmp 0x10d1a89e */
  goto L_10d1a89e;
L_10d1a880:;
  /* 10d1a880 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d1a883 push edx */
  push32((uint32_t)(EDX));
  /* 10d1a884 call 0x10d1aea0 */
  push32(0x10d1a889u); f_10d1aea0();
  /* 10d1a889 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a88c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a891 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d1a892 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d1a898 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10d1a89e:;
  /* 10d1a89e jmp 0x10d1a8df */
  goto L_10d1a8df;
L_10d1a8a0:;
  /* 10d1a8a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a8a3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a8a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a8a8 je 0x10d1a8c5 */
  if (C.zf) goto L_10d1a8c5;
  /* 10d1a8aa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d1a8ad push ecx */
  push32((uint32_t)(ECX));
  /* 10d1a8ae call 0x10d1aea0 */
  push32(0x10d1a8b3u); f_10d1aea0();
  /* 10d1a8b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a8b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d1a8b7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d1a8bd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10d1a8c3 jmp 0x10d1a8df */
  goto L_10d1a8df;
L_10d1a8c5:;
  /* 10d1a8c5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d1a8c8 push edx */
  push32((uint32_t)(EDX));
  /* 10d1a8c9 call 0x10d1aea0 */
  push32(0x10d1a8ceu); f_10d1aea0();
  /* 10d1a8ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a8d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a8d3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d1a8d9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10d1a8df:;
  /* 10d1a8df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a8e2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1a8e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a8e7 je 0x10d1a927 */
  if (C.zf) goto L_10d1a927;
  /* 10d1a8e9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a8f0 jg 0x10d1a927 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1a927;
  /* 10d1a8f2 jl 0x10d1a8fd */
  if ((C.sf!=C.of)) goto L_10d1a8fd;
  /* 10d1a8f4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a8fb jae 0x10d1a927 */
  if (!C.cf) goto L_10d1a927;
L_10d1a8fd:;
  /* 10d1a8fd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10d1a903 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1a905 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10d1a90b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a90e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1a910 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d1a916 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10d1a91c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a91f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d1a922 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1a925 jmp 0x10d1a93f */
  goto L_10d1a93f;
L_10d1a927:;
  /* 10d1a927 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10d1a92d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d1a933 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10d1a939 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10d1a93f:;
  /* 10d1a93f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a942 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1a948 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a94a jne 0x10d1a967 */
  if (!C.zf) goto L_10d1a967;
  /* 10d1a94c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d1a952 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10d1a958 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a95b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d1a961 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10d1a967:;
  /* 10d1a967 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1a96e jge 0x10d1a97c */
  if ((C.sf==C.of)) goto L_10d1a97c;
  /* 10d1a970 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10d1a97a jmp 0x10d1a985 */
  goto L_10d1a985;
L_10d1a97c:;
  /* 10d1a97c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1a97f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1a982 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d1a985:;
  /* 10d1a985 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d1a98b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10d1a991 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1a993 jne 0x10d1a99c */
  if (!C.zf) goto L_10d1a99c;
  /* 10d1a995 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d1a99c:;
  /* 10d1a99c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10d1a99f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d1a9a2:;
  /* 10d1a9a2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d1a9a8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d1a9ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1a9b1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10d1a9b7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1a9b9 jg 0x10d1a9cf */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1a9cf;
  /* 10d1a9bb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d1a9c1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10d1a9c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1a9c9 je 0x10d1aa50 */
  if (C.zf) goto L_10d1aa50;
L_10d1a9cf:;
  /* 10d1a9cf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10d1a9d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d1a9d6 push edx */
  push32((uint32_t)(EDX));
  /* 10d1a9d7 push eax */
  push32((uint32_t)(EAX));
  /* 10d1a9d8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10d1a9de push edx */
  push32((uint32_t)(EDX));
  /* 10d1a9df mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d1a9e5 push eax */
  push32((uint32_t)(EAX));
  /* 10d1a9e6 call 0x10d19d60 */
  push32(0x10d1a9ebu); f_10d19d60();
  /* 10d1a9eb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1a9ee mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10d1a9f4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10d1a9fa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d1a9fb push edx */
  push32((uint32_t)(EDX));
  /* 10d1a9fc push eax */
  push32((uint32_t)(EAX));
  /* 10d1a9fd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10d1aa03 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1aa04 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d1aa0a push edx */
  push32((uint32_t)(EDX));
  /* 10d1aa0b call 0x10d19cf0 */
  push32(0x10d1aa10u); f_10d19cf0();
  /* 10d1aa10 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d1aa16 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10d1aa1c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1aa23 jle 0x10d1aa37 */
  if ((C.zf||C.sf!=C.of)) goto L_10d1aa37;
  /* 10d1aa25 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10d1aa2b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1aa31 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10d1aa37:;
  /* 10d1aa37 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1aa3a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10d1aa40 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10d1aa42 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1aa45 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1aa48 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d1aa4b jmp 0x10d1a9a2 */
  goto L_10d1a9a2;
L_10d1aa50:;
  /* 10d1aa50 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10d1aa53 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1aa56 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d1aa59 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1aa5c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1aa5f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d1aa62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1aa65 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1aa6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1aa6c je 0x10d1aa97 */
  if (C.zf) goto L_10d1aa97;
  /* 10d1aa6e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1aa71 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1aa74 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1aa77 jne 0x10d1aa7f */
  if (!C.zf) goto L_10d1aa7f;
  /* 10d1aa79 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1aa7d jne 0x10d1aa97 */
  if (!C.zf) goto L_10d1aa97;
L_10d1aa7f:;
  /* 10d1aa7f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1aa82 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1aa85 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d1aa88 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1aa8b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10d1aa8e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1aa91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1aa94 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10d1aa97:;
  /* 10d1aa97 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1aa9e jne 0x10d1ac72 */
  if (!C.zf) goto L_10d1ac72;
  /* 10d1aaa4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1aaa7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1aaaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1aaac je 0x10d1aafd */
  if (C.zf) goto L_10d1aafd;
  /* 10d1aaae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1aab1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1aab7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1aab9 je 0x10d1aacb */
  if (C.zf) goto L_10d1aacb;
  /* 10d1aabb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10d1aac2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d1aac9 jmp 0x10d1aafd */
  goto L_10d1aafd;
L_10d1aacb:;
  /* 10d1aacb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1aace and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1aad1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1aad3 je 0x10d1aae5 */
  if (C.zf) goto L_10d1aae5;
  /* 10d1aad5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10d1aadc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d1aae3 jmp 0x10d1aafd */
  goto L_10d1aafd;
L_10d1aae5:;
  /* 10d1aae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1aae8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1aaeb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1aaed je 0x10d1aafd */
  if (C.zf) goto L_10d1aafd;
  /* 10d1aaef mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10d1aaf6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10d1aafd:;
  /* 10d1aafd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d1ab03 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ab06 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ab09 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10d1ab0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1ab12 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1ab15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1ab17 jne 0x10d1ab35 */
  if (!C.zf) goto L_10d1ab35;
  /* 10d1ab19 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d1ab1f push eax */
  push32((uint32_t)(EAX));
  /* 10d1ab20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ab23 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ab24 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10d1ab2a push edx */
  push32((uint32_t)(EDX));
  /* 10d1ab2b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d1ab2d call 0x10d1ae10 */
  push32(0x10d1ab32u); f_10d1ae10();
  /* 10d1ab32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1ab35:;
  /* 10d1ab35 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d1ab3b push eax */
  push32((uint32_t)(EAX));
  /* 10d1ab3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ab3f push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ab40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1ab43 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ab44 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10d1ab4a push eax */
  push32((uint32_t)(EAX));
  /* 10d1ab4b call 0x10d1ae50 */
  push32(0x10d1ab50u); f_10d1ae50();
  /* 10d1ab50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ab53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1ab56 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ab59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1ab5b je 0x10d1ab83 */
  if (C.zf) goto L_10d1ab83;
  /* 10d1ab5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1ab60 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1ab63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1ab65 jne 0x10d1ab83 */
  if (!C.zf) goto L_10d1ab83;
  /* 10d1ab67 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d1ab6d push eax */
  push32((uint32_t)(EAX));
  /* 10d1ab6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ab71 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ab72 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10d1ab78 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ab79 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d1ab7b call 0x10d1ae10 */
  push32(0x10d1ab80u); f_10d1ae10();
  /* 10d1ab80 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1ab83:;
  /* 10d1ab83 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ab87 je 0x10d1ac31 */
  if (C.zf) goto L_10d1ac31;
  /* 10d1ab8d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ab91 jle 0x10d1ac31 */
  if ((C.zf||C.sf!=C.of)) goto L_10d1ac31;
  /* 10d1ab97 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1ab9a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10d1aba0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1aba3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10d1aba9:;
  /* 10d1aba9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10d1abaf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10d1abb5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1abb8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10d1abbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1abc0 je 0x10d1ac2f */
  if (C.zf) goto L_10d1ac2f;
  /* 10d1abc2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10d1abc8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10d1abcb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10d1abd2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10d1abd9 push eax */
  push32((uint32_t)(EAX));
  /* 10d1abda lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10d1abe0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1abe1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10d1abe7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1abea mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10d1abf0 call 0x10d1bfc0 */
  push32(0x10d1abf5u); f_10d1bfc0();
  /* 10d1abf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1abf8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10d1abfe cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ac05 jg 0x10d1ac09 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1ac09;
  /* 10d1ac07 jmp 0x10d1ac2f */
  goto L_10d1ac2f;
L_10d1ac09:;
  /* 10d1ac09 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d1ac0f push eax */
  push32((uint32_t)(EAX));
  /* 10d1ac10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ac13 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ac14 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10d1ac1a push edx */
  push32((uint32_t)(EDX));
  /* 10d1ac1b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10d1ac21 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ac22 call 0x10d1ae50 */
  push32(0x10d1ac27u); f_10d1ae50();
  /* 10d1ac27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ac2a jmp 0x10d1aba9 */
  goto L_10d1aba9;
L_10d1ac2f:;
  /* 10d1ac2f jmp 0x10d1ac4c */
  goto L_10d1ac4c;
L_10d1ac31:;
  /* 10d1ac31 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10d1ac37 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ac38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ac3b push edx */
  push32((uint32_t)(EDX));
  /* 10d1ac3c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1ac3f push eax */
  push32((uint32_t)(EAX));
  /* 10d1ac40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1ac43 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ac44 call 0x10d1ae50 */
  push32(0x10d1ac49u); f_10d1ae50();
  /* 10d1ac49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1ac4c:;
  /* 10d1ac4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1ac4f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1ac52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1ac54 je 0x10d1ac72 */
  if (C.zf) goto L_10d1ac72;
  /* 10d1ac56 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d1ac5c push eax */
  push32((uint32_t)(EAX));
  /* 10d1ac5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ac60 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ac61 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10d1ac67 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ac68 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d1ac6a call 0x10d1ae10 */
  push32(0x10d1ac6fu); f_10d1ae10();
  /* 10d1ac6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1ac72:;
  /* 10d1ac72 jmp 0x10d1a084 */
  goto L_10d1a084;
L_10d1ac77:;
  /* 10d1ac77 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10d1ac7d pop edi */
  EDI = (pop32());
  /* 10d1ac7e pop esi */
  ESI = (pop32());
  /* 10d1ac7f pop ebx */
  EBX = (pop32());
  /* 10d1ac80 mov esp, ebp */
  ESP = (EBP);
  /* 10d1ac82 pop ebp */
  EBP = (pop32());
  /* 10d1ac83 ret  */
  ESPCHK(0x10d1a060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad90 @ 0x10d1ad90 (119 bytes, 44 insns) */
void f_10d1ad90(void) {
  FTRACE(0x10d1ad90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ad90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1ad91 mov ebp, esp */
  EBP = (ESP);
  /* 10d1ad93 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ad94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ad97 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1ad9a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ad9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ada0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d1ada3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ada6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1adaa jl 0x10d1add2 */
  if ((C.sf!=C.of)) goto L_10d1add2;
  /* 10d1adac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1adaf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d1adb1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d1adb4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10d1adb6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10d1adba and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1adc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1adc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1adc6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d1adc8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1adcb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1adce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d1add0 jmp 0x10d1ade5 */
  goto L_10d1ade5;
L_10d1add2:;
  /* 10d1add2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1add5 push edx */
  push32((uint32_t)(EDX));
  /* 10d1add6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1add9 push eax */
  push32((uint32_t)(EAX));
  /* 10d1adda call 0x10d19de0 */
  push32(0x10d1addfu); f_10d19de0();
  /* 10d1addf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ade2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1ade5:;
  /* 10d1ade5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ade9 jne 0x10d1adf6 */
  if (!C.zf) goto L_10d1adf6;
  /* 10d1adeb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1adee mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d1adf4 jmp 0x10d1ae03 */
  goto L_10d1ae03;
L_10d1adf6:;
  /* 10d1adf6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1adf9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d1adfb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1adfe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1ae01 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10d1ae03:;
  /* 10d1ae03 mov esp, ebp */
  ESP = (EBP);
  /* 10d1ae05 pop ebp */
  EBP = (pop32());
  /* 10d1ae06 ret  */
  ESPCHK(0x10d1ad90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae10 @ 0x10d1ae10 (53 bytes, 23 insns) */
void f_10d1ae10(void) {
  FTRACE(0x10d1ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ae10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1ae11 mov ebp, esp */
  EBP = (ESP);
L_10d1ae13:;
  /* 10d1ae13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ae16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ae19 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ae1c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d1ae1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1ae21 jle 0x10d1ae43 */
  if ((C.zf||C.sf!=C.of)) goto L_10d1ae43;
  /* 10d1ae23 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1ae26 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ae27 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1ae2a push eax */
  push32((uint32_t)(EAX));
  /* 10d1ae2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ae2e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ae2f call 0x10d1ad90 */
  push32(0x10d1ae34u); f_10d1ad90();
  /* 10d1ae34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ae37 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1ae3a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ae3d jne 0x10d1ae41 */
  if (!C.zf) goto L_10d1ae41;
  /* 10d1ae3f jmp 0x10d1ae43 */
  goto L_10d1ae43;
L_10d1ae41:;
  /* 10d1ae41 jmp 0x10d1ae13 */
  goto L_10d1ae13;
L_10d1ae43:;
  /* 10d1ae43 pop ebp */
  EBP = (pop32());
  /* 10d1ae44 ret  */
  ESPCHK(0x10d1ae10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae50 @ 0x10d1ae50 (74 bytes, 31 insns) */
void f_10d1ae50(void) {
  FTRACE(0x10d1ae50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ae50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1ae51 mov ebp, esp */
  EBP = (ESP);
  /* 10d1ae53 push ecx */
  push32((uint32_t)(ECX));
L_10d1ae54:;
  /* 10d1ae54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ae57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ae5a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ae5d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d1ae60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1ae62 jle 0x10d1ae96 */
  if ((C.zf||C.sf!=C.of)) goto L_10d1ae96;
  /* 10d1ae64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1ae67 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ae68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1ae6b push eax */
  push32((uint32_t)(EAX));
  /* 10d1ae6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ae6f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1ae72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1ae75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1ae78 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ae79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ae7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ae7f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d1ae82 call 0x10d1ad90 */
  push32(0x10d1ae87u); f_10d1ad90();
  /* 10d1ae87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ae8a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1ae8d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ae90 jne 0x10d1ae94 */
  if (!C.zf) goto L_10d1ae94;
  /* 10d1ae92 jmp 0x10d1ae96 */
  goto L_10d1ae96;
L_10d1ae94:;
  /* 10d1ae94 jmp 0x10d1ae54 */
  goto L_10d1ae54;
L_10d1ae96:;
  /* 10d1ae96 mov esp, ebp */
  ESP = (EBP);
  /* 10d1ae98 pop ebp */
  EBP = (pop32());
  /* 10d1ae99 ret  */
  ESPCHK(0x10d1ae50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aea0 @ 0x10d1aea0 (26 bytes, 12 insns) */
void f_10d1aea0(void) {
  FTRACE(0x10d1aea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1aea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1aea1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1aea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1aea6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1aea8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1aeab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1aeae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d1aeb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1aeb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1aeb5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d1aeb8 pop ebp */
  EBP = (pop32());
  /* 10d1aeb9 ret  */
  ESPCHK(0x10d1aea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aec0 @ 0x10d1aec0 (31 bytes, 14 insns) */
void f_10d1aec0(void) {
  FTRACE(0x10d1aec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1aec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1aec1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1aec3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1aec6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1aec8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1aecb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1aece mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d1aed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1aed3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1aed5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1aed8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d1aeda mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d1aedd pop ebp */
  EBP = (pop32());
  /* 10d1aede ret  */
  ESPCHK(0x10d1aec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aee0 @ 0x10d1aee0 (27 bytes, 12 insns) */
void f_10d1aee0(void) {
  FTRACE(0x10d1aee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1aee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1aee1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1aee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1aee6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1aee8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1aeeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1aeee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d1aef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1aef3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1aef5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10d1aef9 pop ebp */
  EBP = (pop32());
  /* 10d1aefa ret  */
  ESPCHK(0x10d1aee0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10d1af00 (145 bytes, 42 insns) */
void f_10d1af00(void) {
  FTRACE(0x10d1af00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1af00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1af01 mov ebp, esp */
  EBP = (ESP);
  /* 10d1af03 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1af04 call 0x10d1afb0 */
  push32(0x10d1af09u); f_10d1afb0();
  /* 10d1af09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1af0c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d1af0e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1af15 jmp 0x10d1af20 */
  goto L_10d1af20;
L_10d1af17:;
  /* 10d1af17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1af1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1af1d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d1af20:;
  /* 10d1af20 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1af24 jae 0x10d1af4a */
  if (!C.cf) goto L_10d1af4a;
  /* 10d1af26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1af29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1af2c cmp ecx, dword ptr [eax*8 + 0x10d3cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10d3cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1af33 jne 0x10d1af48 */
  if (!C.zf) goto L_10d1af48;
  /* 10d1af35 call 0x10d1afa0 */
  push32(0x10d1af3au); f_10d1afa0();
  /* 10d1af3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1af3d mov ecx, dword ptr [edx*8 + 0x10d3cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10d3cfbc)));
  /* 10d1af44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d1af46 jmp 0x10d1af8d */
  goto L_10d1af8d;
L_10d1af48:;
  /* 10d1af48 jmp 0x10d1af17 */
  goto L_10d1af17;
L_10d1af4a:;
  /* 10d1af4a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1af4e jb 0x10d1af63 */
  if (C.cf) goto L_10d1af63;
  /* 10d1af50 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1af54 ja 0x10d1af63 */
  if ((!C.cf&&!C.zf)) goto L_10d1af63;
  /* 10d1af56 call 0x10d1afa0 */
  push32(0x10d1af5bu); f_10d1afa0();
  /* 10d1af5b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10d1af61 jmp 0x10d1af8d */
  goto L_10d1af8d;
L_10d1af63:;
  /* 10d1af63 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1af6a jb 0x10d1af82 */
  if (C.cf) goto L_10d1af82;
  /* 10d1af6c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1af73 ja 0x10d1af82 */
  if ((!C.cf&&!C.zf)) goto L_10d1af82;
  /* 10d1af75 call 0x10d1afa0 */
  push32(0x10d1af7au); f_10d1afa0();
  /* 10d1af7a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10d1af80 jmp 0x10d1af8d */
  goto L_10d1af8d;
L_10d1af82:;
  /* 10d1af82 call 0x10d1afa0 */
  push32(0x10d1af87u); f_10d1afa0();
  /* 10d1af87 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10d1af8d:;
  /* 10d1af8d mov esp, ebp */
  ESP = (EBP);
  /* 10d1af8f pop ebp */
  EBP = (pop32());
  /* 10d1af90 ret  */
  ESPCHK(0x10d1af00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afa0 @ 0x10d1afa0 (13 bytes, 6 insns) */
void f_10d1afa0(void) {
  FTRACE(0x10d1afa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1afa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1afa1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1afa3 call 0x10d12b10 */
  push32(0x10d1afa8u); f_10d12b10();
  /* 10d1afa8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1afab pop ebp */
  EBP = (pop32());
  /* 10d1afac ret  */
  ESPCHK(0x10d1afa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb0 @ 0x10d1afb0 (13 bytes, 6 insns) */
void f_10d1afb0(void) {
  FTRACE(0x10d1afb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1afb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1afb1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1afb3 call 0x10d12b10 */
  push32(0x10d1afb8u); f_10d12b10();
  /* 10d1afb8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1afbb pop ebp */
  EBP = (pop32());
  /* 10d1afbc ret  */
  ESPCHK(0x10d1afb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afc0 @ 0x10d1afc0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_10d1afc0(void) {
  FTRACE(0x10d1afc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1afc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1afc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1afc3 push edi */
  push32((uint32_t)(EDI));
  /* 10d1afc4 push esi */
  push32((uint32_t)(ESI));
  /* 10d1afc5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1afc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1afcb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1afce mov eax, ecx */
  EAX = (ECX);
  /* 10d1afd0 mov edx, ecx */
  EDX = (ECX);
  /* 10d1afd2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1afd4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1afd6 jbe 0x10d1afe0 */
  if ((C.cf||C.zf)) goto L_10d1afe0;
  /* 10d1afd8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1afda jb 0x10d1b158 */
  if (C.cf) goto L_10d1b158;
L_10d1afe0:;
  /* 10d1afe0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d1afe6 jne 0x10d1affc */
  if (!C.zf) goto L_10d1affc;
  /* 10d1afe8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d1afeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1afee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1aff1 jb 0x10d1b01c */
  if (C.cf) goto L_10d1b01c;
  /* 10d1aff3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d1aff5 jmp dword ptr [edx*4 + 0x10d1b108] */
  switch (EDX) {
    case 0: goto L_10d1b118;
    case 1: goto L_10d1b120;
    case 2: goto L_10d1b12c;
    case 3: goto L_10d1b140;
    default: x86_unimpl("switch@0x10d1aff5 out of table"); return;
  }
L_10d1affc:;
  /* 10d1affc mov eax, edi */
  EAX = (EDI);
  /* 10d1affe mov edx, 3 */
  EDX = (0x3u);
  /* 10d1b003 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b006 jb 0x10d1b014 */
  if (C.cf) goto L_10d1b014;
  /* 10d1b008 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b00b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b00d jmp dword ptr [eax*4 + 0x10d1b020] */
  switch (EAX) {
    case 1: goto L_10d1b030;
    case 2: goto L_10d1b05c;
    case 3: goto L_10d1b080;
    default: x86_unimpl("switch@0x10d1b00d out of table"); return;
  }
L_10d1b014:;
  /* 10d1b014 jmp dword ptr [ecx*4 + 0x10d1b118] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10d1b118)))); return;
  /* 10d1b01b nop  */
  /* nop */
L_10d1b01c:;
  /* 10d1b01c jmp dword ptr [ecx*4 + 0x10d1b09c] */
  switch (ECX) {
    case 0: goto L_10d1b0ff;
    case 1: goto L_10d1b0ec;
    case 2: goto L_10d1b0e4;
    case 3: goto L_10d1b0dc;
    case 4: goto L_10d1b0d4;
    case 5: goto L_10d1b0cc;
    case 6: goto L_10d1b0c4;
    case 7: goto L_10d1b0bc;
    default: x86_unimpl("switch@0x10d1b01c out of table"); return;
  }
  /* 10d1b023 nop  */
  /* nop */
L_10d1b030:;
  /* 10d1b030 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b032 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d1b034 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d1b036 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d1b039 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d1b03c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d1b03f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d1b042 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d1b045 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b048 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b04b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b04e jb 0x10d1b01c */
  if (C.cf) goto L_10d1b01c;
  /* 10d1b050 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d1b052 jmp dword ptr [edx*4 + 0x10d1b108] */
  switch (EDX) {
    case 0: goto L_10d1b118;
    case 1: goto L_10d1b120;
    case 2: goto L_10d1b12c;
    case 3: goto L_10d1b140;
    default: x86_unimpl("switch@0x10d1b052 out of table"); return;
  }
  /* 10d1b059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d1b05c:;
  /* 10d1b05c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b05e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d1b060 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d1b062 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d1b065 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d1b068 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d1b06b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b06e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b071 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b074 jb 0x10d1b01c */
  if (C.cf) goto L_10d1b01c;
  /* 10d1b076 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d1b078 jmp dword ptr [edx*4 + 0x10d1b108] */
  switch (EDX) {
    case 0: goto L_10d1b118;
    case 1: goto L_10d1b120;
    case 2: goto L_10d1b12c;
    case 3: goto L_10d1b140;
    default: x86_unimpl("switch@0x10d1b078 out of table"); return;
  }
  /* 10d1b07f nop  */
  /* nop */
L_10d1b080:;
  /* 10d1b080 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b082 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d1b084 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d1b086 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d1b087 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d1b08a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d1b08b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b08e jb 0x10d1b01c */
  if (C.cf) goto L_10d1b01c;
  /* 10d1b090 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d1b092 jmp dword ptr [edx*4 + 0x10d1b108] */
  switch (EDX) {
    case 0: goto L_10d1b118;
    case 1: goto L_10d1b120;
    case 2: goto L_10d1b12c;
    case 3: goto L_10d1b140;
    default: x86_unimpl("switch@0x10d1b092 out of table"); return;
  }
  /* 10d1b099 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d1b0bc:;
  /* 10d1b0bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10d1b0c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10d1b0c4:;
  /* 10d1b0c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10d1b0c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10d1b0cc:;
  /* 10d1b0cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10d1b0d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10d1b0d4:;
  /* 10d1b0d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10d1b0d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10d1b0dc:;
  /* 10d1b0dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10d1b0e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10d1b0e4:;
  /* 10d1b0e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10d1b0e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10d1b0ec:;
  /* 10d1b0ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10d1b0f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10d1b0f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d1b0fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b0fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d1b0ff:;
  /* 10d1b0ff jmp dword ptr [edx*4 + 0x10d1b108] */
  switch (EDX) {
    case 0: goto L_10d1b118;
    case 1: goto L_10d1b120;
    case 2: goto L_10d1b12c;
    case 3: goto L_10d1b140;
    default: x86_unimpl("switch@0x10d1b0ff out of table"); return;
  }
  /* 10d1b106 mov edi, edi */
  EDI = (EDI);
L_10d1b118:;
  /* 10d1b118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b11b pop esi */
  ESI = (pop32());
  /* 10d1b11c pop edi */
  EDI = (pop32());
  /* 10d1b11d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1b11e ret  */
  ESPCHK(0x10d1afc0u, _esp0);
  ESP += 4; return;
  /* 10d1b11f nop  */
  /* nop */
L_10d1b120:;
  /* 10d1b120 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d1b122 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d1b124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b127 pop esi */
  ESI = (pop32());
  /* 10d1b128 pop edi */
  EDI = (pop32());
  /* 10d1b129 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1b12a ret  */
  ESPCHK(0x10d1afc0u, _esp0);
  ESP += 4; return;
  /* 10d1b12b nop  */
  /* nop */
L_10d1b12c:;
  /* 10d1b12c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d1b12e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d1b130 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d1b133 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d1b136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b139 pop esi */
  ESI = (pop32());
  /* 10d1b13a pop edi */
  EDI = (pop32());
  /* 10d1b13b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1b13c ret  */
  ESPCHK(0x10d1afc0u, _esp0);
  ESP += 4; return;
  /* 10d1b13d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d1b140:;
  /* 10d1b140 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d1b142 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d1b144 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d1b147 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d1b14a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d1b14d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d1b150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b153 pop esi */
  ESI = (pop32());
  /* 10d1b154 pop edi */
  EDI = (pop32());
  /* 10d1b155 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1b156 ret  */
  ESPCHK(0x10d1afc0u, _esp0);
  ESP += 4; return;
  /* 10d1b157 nop  */
  /* nop */
L_10d1b158:;
  /* 10d1b158 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10d1b15c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10d1b160 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d1b166 jne 0x10d1b18c */
  if (!C.zf) goto L_10d1b18c;
  /* 10d1b168 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d1b16b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b16e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b171 jb 0x10d1b180 */
  if (C.cf) goto L_10d1b180;
  /* 10d1b173 std  */
  C.df=1;
  /* 10d1b174 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d1b176 cld  */
  C.df=0;
  /* 10d1b177 jmp dword ptr [edx*4 + 0x10d1b2a0] */
  switch (EDX) {
    case 0: goto L_10d1b2b0;
    case 1: goto L_10d1b2b8;
    case 2: goto L_10d1b2c8;
    case 3: goto L_10d1b2dc;
    default: x86_unimpl("switch@0x10d1b177 out of table"); return;
  }
  /* 10d1b17e mov edi, edi */
  EDI = (EDI);
L_10d1b180:;
  /* 10d1b180 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1b182 jmp dword ptr [ecx*4 + 0x10d1b250] */
  switch (ECX) {
    case 0: goto L_10d1b297;
    default: x86_unimpl("switch@0x10d1b182 out of table"); return;
  }
  /* 10d1b189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d1b18c:;
  /* 10d1b18c mov eax, edi */
  EAX = (EDI);
  /* 10d1b18e mov edx, 3 */
  EDX = (0x3u);
  /* 10d1b193 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b196 jb 0x10d1b1a4 */
  if (C.cf) goto L_10d1b1a4;
  /* 10d1b198 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b19b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b19d jmp dword ptr [eax*4 + 0x10d1b1a8] */
  switch (EAX) {
    case 1: goto L_10d1b1b8;
    case 2: goto L_10d1b1d8;
    case 3: goto L_10d1b200;
    default: x86_unimpl("switch@0x10d1b19d out of table"); return;
  }
L_10d1b1a4:;
  /* 10d1b1a4 jmp dword ptr [ecx*4 + 0x10d1b2a0] */
  switch (ECX) {
    case 0: goto L_10d1b2b0;
    case 1: goto L_10d1b2b8;
    case 2: goto L_10d1b2c8;
    case 3: goto L_10d1b2dc;
    default: x86_unimpl("switch@0x10d1b1a4 out of table"); return;
  }
  /* 10d1b1ab nop  */
  /* nop */
L_10d1b1b8:;
  /* 10d1b1b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d1b1bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b1bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d1b1c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10d1b1c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d1b1c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10d1b1c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b1c8 jb 0x10d1b180 */
  if (C.cf) goto L_10d1b180;
  /* 10d1b1ca std  */
  C.df=1;
  /* 10d1b1cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d1b1cd cld  */
  C.df=0;
  /* 10d1b1ce jmp dword ptr [edx*4 + 0x10d1b2a0] */
  switch (EDX) {
    case 0: goto L_10d1b2b0;
    case 1: goto L_10d1b2b8;
    case 2: goto L_10d1b2c8;
    case 3: goto L_10d1b2dc;
    default: x86_unimpl("switch@0x10d1b1ce out of table"); return;
  }
  /* 10d1b1d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d1b1d8:;
  /* 10d1b1d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d1b1db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b1dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d1b1e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d1b1e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d1b1e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d1b1e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b1ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b1ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b1f2 jb 0x10d1b180 */
  if (C.cf) goto L_10d1b180;
  /* 10d1b1f4 std  */
  C.df=1;
  /* 10d1b1f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d1b1f7 cld  */
  C.df=0;
  /* 10d1b1f8 jmp dword ptr [edx*4 + 0x10d1b2a0] */
  switch (EDX) {
    case 0: goto L_10d1b2b0;
    case 1: goto L_10d1b2b8;
    case 2: goto L_10d1b2c8;
    case 3: goto L_10d1b2dc;
    default: x86_unimpl("switch@0x10d1b1f8 out of table"); return;
  }
  /* 10d1b1ff nop  */
  /* nop */
L_10d1b200:;
  /* 10d1b200 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d1b203 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b205 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d1b208 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d1b20b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d1b20e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d1b211 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d1b214 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d1b217 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b21a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b21d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b220 jb 0x10d1b180 */
  if (C.cf) goto L_10d1b180;
  /* 10d1b226 std  */
  C.df=1;
  /* 10d1b227 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d1b229 cld  */
  C.df=0;
  /* 10d1b22a jmp dword ptr [edx*4 + 0x10d1b2a0] */
  switch (EDX) {
    case 0: goto L_10d1b2b0;
    case 1: goto L_10d1b2b8;
    case 2: goto L_10d1b2c8;
    case 3: goto L_10d1b2dc;
    default: x86_unimpl("switch@0x10d1b22a out of table"); return;
  }
  /* 10d1b231 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10d1b234 push esp */
  push32((uint32_t)(ESP));
  /* 10d1b235 mov dl, 0xd1 */
  DL = (0xd1u);
  /* 10d1b237 adc byte ptr [edx + esi*4 - 0x2f], bl */
  { uint32_t _a=(r8((uint32_t)(EDX + ESI*4 + -0x2f))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ESI*4 + -0x2f), (_r)); fl_add(_a,_b,_r,8); }
  /* 10d1b23b adc byte ptr [edx + esi*4 - 0x2f], ah */
  { uint32_t _a=(r8((uint32_t)(EDX + ESI*4 + -0x2f))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ESI*4 + -0x2f), (_r)); fl_add(_a,_b,_r,8); }
  /* 10d1b23f adc byte ptr [edx + esi*4 - 0x2f], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + ESI*4 + -0x2f))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ESI*4 + -0x2f), (_r)); fl_add(_a,_b,_r,8); }
  /* 10d1b243 adc byte ptr [edx + esi*4 - 0x2f], dh */
  { uint32_t _a=(r8((uint32_t)(EDX + ESI*4 + -0x2f))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ESI*4 + -0x2f), (_r)); fl_add(_a,_b,_r,8); }
  /* 10d1b247 adc byte ptr [edx + esi*4 - 0x2f], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + ESI*4 + -0x2f))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ESI*4 + -0x2f), (_r)); fl_add(_a,_b,_r,8); }
  /* 10d1b24d mov dl, 0xd1 */
  DL = (0xd1u);
  /* 10d1b254 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10d1b258 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10d1b25c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10d1b260 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10d1b264 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10d1b268 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10d1b26c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10d1b270 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10d1b274 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10d1b278 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10d1b27c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10d1b280 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10d1b284 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10d1b288 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10d1b28c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d1b293 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b295 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d1b297:;
  /* 10d1b297 jmp dword ptr [edx*4 + 0x10d1b2a0] */
  switch (EDX) {
    case 0: goto L_10d1b2b0;
    case 1: goto L_10d1b2b8;
    case 2: goto L_10d1b2c8;
    case 3: goto L_10d1b2dc;
    default: x86_unimpl("switch@0x10d1b297 out of table"); return;
  }
  /* 10d1b29e mov edi, edi */
  EDI = (EDI);
L_10d1b2b0:;
  /* 10d1b2b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b2b3 pop esi */
  ESI = (pop32());
  /* 10d1b2b4 pop edi */
  EDI = (pop32());
  /* 10d1b2b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1b2b6 ret  */
  ESPCHK(0x10d1afc0u, _esp0);
  ESP += 4; return;
  /* 10d1b2b7 nop  */
  /* nop */
L_10d1b2b8:;
  /* 10d1b2b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d1b2bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d1b2be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b2c1 pop esi */
  ESI = (pop32());
  /* 10d1b2c2 pop edi */
  EDI = (pop32());
  /* 10d1b2c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1b2c4 ret  */
  ESPCHK(0x10d1afc0u, _esp0);
  ESP += 4; return;
  /* 10d1b2c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d1b2c8:;
  /* 10d1b2c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d1b2cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d1b2ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d1b2d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d1b2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b2d7 pop esi */
  ESI = (pop32());
  /* 10d1b2d8 pop edi */
  EDI = (pop32());
  /* 10d1b2d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1b2da ret  */
  ESPCHK(0x10d1afc0u, _esp0);
  ESP += 4; return;
  /* 10d1b2db nop  */
  /* nop */
L_10d1b2dc:;
  /* 10d1b2dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d1b2df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d1b2e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d1b2e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d1b2e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d1b2eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d1b2ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b2f1 pop esi */
  ESI = (pop32());
  /* 10d1b2f2 pop edi */
  EDI = (pop32());
  /* 10d1b2f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1b2f4 ret  */
  ESPCHK(0x10d1afc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b300 @ 0x10d1b300 (421 bytes, 148 insns) */
void f_10d1b300(void) {
  FTRACE(0x10d1b300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1b300 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1b301 mov ebp, esp */
  EBP = (ESP);
  /* 10d1b303 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d1b305 push 0x10d39f68 */
  push32((uint32_t)(0x10d39f68u));
  /* 10d1b30a push 0x10d1c1d8 */
  push32((uint32_t)(0x10d1c1d8u));
  /* 10d1b30f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d1b315 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b316 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d1b31d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b320 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1b321 push esi */
  push32((uint32_t)(ESI));
  /* 10d1b322 push edi */
  push32((uint32_t)(EDI));
  /* 10d1b323 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d1b326 cmp dword ptr [0x10d3e614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b32d jne 0x10d1b37e */
  if (!C.zf) goto L_10d1b37e;
  /* 10d1b32f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10d1b332 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b333 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1b335 push 0x10d39f60 */
  push32((uint32_t)(0x10d39f60u));
  /* 10d1b33a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1b33c call dword ptr [0x10d40350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40350))), 0x10d1b342u);
  /* 10d1b342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1b344 je 0x10d1b352 */
  if (C.zf) goto L_10d1b352;
  /* 10d1b346 mov dword ptr [0x10d3e614], 1 */
  w32((uint32_t)(0x10d3e614), (0x1u));
  /* 10d1b350 jmp 0x10d1b37e */
  goto L_10d1b37e;
L_10d1b352:;
  /* 10d1b352 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10d1b355 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b356 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1b358 push 0x10d39f5c */
  push32((uint32_t)(0x10d39f5cu));
  /* 10d1b35d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1b35f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b361 call dword ptr [0x10d4034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4034c))), 0x10d1b367u);
  /* 10d1b367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1b369 je 0x10d1b377 */
  if (C.zf) goto L_10d1b377;
  /* 10d1b36b mov dword ptr [0x10d3e614], 2 */
  w32((uint32_t)(0x10d3e614), (0x2u));
  /* 10d1b375 jmp 0x10d1b37e */
  goto L_10d1b37e;
L_10d1b377:;
  /* 10d1b377 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b379 jmp 0x10d1b4a8 */
  goto L_10d1b4a8;
L_10d1b37e:;
  /* 10d1b37e cmp dword ptr [0x10d3e614], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e614))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b385 jne 0x10d1b3b5 */
  if (!C.zf) goto L_10d1b3b5;
  /* 10d1b387 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b38b jne 0x10d1b396 */
  if (!C.zf) goto L_10d1b396;
  /* 10d1b38d mov edx, dword ptr [0x10d3e620] */
  EDX = (r32((uint32_t)(0x10d3e620)));
  /* 10d1b393 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10d1b396:;
  /* 10d1b396 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1b399 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b39a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b39d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b39e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b3a1 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b3a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b3a5 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b3a6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d1b3a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b3aa call dword ptr [0x10d4034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4034c))), 0x10d1b3b0u);
  /* 10d1b3b0 jmp 0x10d1b4a8 */
  goto L_10d1b4a8;
L_10d1b3b5:;
  /* 10d1b3b5 cmp dword ptr [0x10d3e614], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e614))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b3bc jne 0x10d1b4a6 */
  if (!C.zf) goto L_10d1b4a6;
  /* 10d1b3c2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b3c6 jne 0x10d1b3d1 */
  if (!C.zf) goto L_10d1b3d1;
  /* 10d1b3c8 mov edx, dword ptr [0x10d3e630] */
  EDX = (r32((uint32_t)(0x10d3e630)));
  /* 10d1b3ce mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10d1b3d1:;
  /* 10d1b3d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b3d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b3d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b3d8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b3d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b3dc push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b3dd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d1b3e0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1b3e2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b3e4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b3e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b3ea push edx */
  push32((uint32_t)(EDX));
  /* 10d1b3eb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1b3ee push eax */
  push32((uint32_t)(EAX));
  /* 10d1b3ef call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d1b3f5u);
  /* 10d1b3f5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d1b3f8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b3fc jne 0x10d1b405 */
  if (!C.zf) goto L_10d1b405;
  /* 10d1b3fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b400 jmp 0x10d1b4a8 */
  goto L_10d1b4a8;
L_10d1b405:;
  /* 10d1b405 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1b40c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1b40f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d1b411 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b414 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d1b416 call 0x10d16270 */
  push32(0x10d1b41bu); f_10d16270();
  /* 10d1b41b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10d1b41e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d1b421 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1b424 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d1b427 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1b42a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d1b42c push edx */
  push32((uint32_t)(EDX));
  /* 10d1b42d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b42f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1b432 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b433 call 0x10d16e40 */
  push32(0x10d1b438u); f_10d16e40();
  /* 10d1b438 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b43b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d1b442 jmp 0x10d1b45b */
  goto L_10d1b45b;
  /* 10d1b444 mov eax, 1 */
  EAX = (0x1u);
  /* 10d1b449 ret  */
  ESPCHK(0x10d1b300u, _esp0);
  ESP += 4; return;
  /* 10d1b44a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1b44d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d1b454 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d1b45b:;
  /* 10d1b45b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b45f jne 0x10d1b465 */
  if (!C.zf) goto L_10d1b465;
  /* 10d1b461 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b463 jmp 0x10d1b4a8 */
  goto L_10d1b4a8;
L_10d1b465:;
  /* 10d1b465 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1b468 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b469 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1b46c push edx */
  push32((uint32_t)(EDX));
  /* 10d1b46d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b470 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b471 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b474 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b475 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1b477 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1b47a push edx */
  push32((uint32_t)(EDX));
  /* 10d1b47b call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d1b481u);
  /* 10d1b481 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d1b484 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b488 jne 0x10d1b48e */
  if (!C.zf) goto L_10d1b48e;
  /* 10d1b48a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b48c jmp 0x10d1b4a8 */
  goto L_10d1b4a8;
L_10d1b48e:;
  /* 10d1b48e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1b491 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b492 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1b495 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b496 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1b499 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b49a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b49d push eax */
  push32((uint32_t)(EAX));
  /* 10d1b49e call dword ptr [0x10d40350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40350))), 0x10d1b4a4u);
  /* 10d1b4a4 jmp 0x10d1b4a8 */
  goto L_10d1b4a8;
L_10d1b4a6:;
  /* 10d1b4a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1b4a8:;
  /* 10d1b4a8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10d1b4ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1b4ae mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d1b4b5 pop edi */
  EDI = (pop32());
  /* 10d1b4b6 pop esi */
  ESI = (pop32());
  /* 10d1b4b7 pop ebx */
  EBX = (pop32());
  /* 10d1b4b8 mov esp, ebp */
  ESP = (EBP);
  /* 10d1b4ba pop ebp */
  EBP = (pop32());
  /* 10d1b4bb ret  */
  ESPCHK(0x10d1b300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4c0 @ 0x10d1b4c0 (727 bytes, 263 insns) */
void f_10d1b4c0(void) {
  FTRACE(0x10d1b4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1b4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1b4c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1b4c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d1b4c5 push 0x10d39f78 */
  push32((uint32_t)(0x10d39f78u));
  /* 10d1b4ca push 0x10d1c1d8 */
  push32((uint32_t)(0x10d1c1d8u));
  /* 10d1b4cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d1b4d5 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b4d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d1b4dd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b4e0 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1b4e1 push esi */
  push32((uint32_t)(ESI));
  /* 10d1b4e2 push edi */
  push32((uint32_t)(EDI));
  /* 10d1b4e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d1b4e6 cmp dword ptr [0x10d3e638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b4ed jne 0x10d1b546 */
  if (!C.zf) goto L_10d1b546;
  /* 10d1b4ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b4f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b4f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1b4f5 push 0x10d39f60 */
  push32((uint32_t)(0x10d39f60u));
  /* 10d1b4fa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d1b4ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b501 call dword ptr [0x10d40358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40358))), 0x10d1b507u);
  /* 10d1b507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1b509 je 0x10d1b517 */
  if (C.zf) goto L_10d1b517;
  /* 10d1b50b mov dword ptr [0x10d3e638], 1 */
  w32((uint32_t)(0x10d3e638), (0x1u));
  /* 10d1b515 jmp 0x10d1b546 */
  goto L_10d1b546;
L_10d1b517:;
  /* 10d1b517 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b519 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b51b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1b51d push 0x10d39f5c */
  push32((uint32_t)(0x10d39f5cu));
  /* 10d1b522 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d1b527 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b529 call dword ptr [0x10d40354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40354))), 0x10d1b52fu);
  /* 10d1b52f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1b531 je 0x10d1b53f */
  if (C.zf) goto L_10d1b53f;
  /* 10d1b533 mov dword ptr [0x10d3e638], 2 */
  w32((uint32_t)(0x10d3e638), (0x2u));
  /* 10d1b53d jmp 0x10d1b546 */
  goto L_10d1b546;
L_10d1b53f:;
  /* 10d1b53f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b541 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b546:;
  /* 10d1b546 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b54a jle 0x10d1b55f */
  if ((C.zf||C.sf!=C.of)) goto L_10d1b55f;
  /* 10d1b54c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1b54f push eax */
  push32((uint32_t)(EAX));
  /* 10d1b550 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b553 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b554 call 0x10d1b7d0 */
  push32(0x10d1b559u); f_10d1b7d0();
  /* 10d1b559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b55c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10d1b55f:;
  /* 10d1b55f cmp dword ptr [0x10d3e638], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e638))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b566 jne 0x10d1b58b */
  if (!C.zf) goto L_10d1b58b;
  /* 10d1b568 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d1b56b push edx */
  push32((uint32_t)(EDX));
  /* 10d1b56c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1b56f push eax */
  push32((uint32_t)(EAX));
  /* 10d1b570 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1b573 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b574 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b577 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b578 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b57b push eax */
  push32((uint32_t)(EAX));
  /* 10d1b57c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b57f push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b580 call dword ptr [0x10d40354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40354))), 0x10d1b586u);
  /* 10d1b586 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b58b:;
  /* 10d1b58b cmp dword ptr [0x10d3e638], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e638))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b592 jne 0x10d1b7af */
  if (!C.zf) goto L_10d1b7af;
  /* 10d1b598 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b59c jne 0x10d1b5a7 */
  if (!C.zf) goto L_10d1b5a7;
  /* 10d1b59e mov edx, dword ptr [0x10d3e630] */
  EDX = (r32((uint32_t)(0x10d3e630)));
  /* 10d1b5a4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10d1b5a7:;
  /* 10d1b5a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b5a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b5ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1b5ae push eax */
  push32((uint32_t)(EAX));
  /* 10d1b5af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b5b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b5b3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10d1b5b6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1b5b8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b5ba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b5bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b5c0 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b5c1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d1b5c4 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b5c5 call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d1b5cbu);
  /* 10d1b5cb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d1b5ce cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b5d2 jne 0x10d1b5db */
  if (!C.zf) goto L_10d1b5db;
  /* 10d1b5d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b5d6 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b5db:;
  /* 10d1b5db mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1b5e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1b5e5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d1b5e7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b5ea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d1b5ec call 0x10d16270 */
  push32(0x10d1b5f1u); f_10d16270();
  /* 10d1b5f1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10d1b5f4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d1b5f7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1b5fa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d1b5fd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d1b604 jmp 0x10d1b61d */
  goto L_10d1b61d;
  /* 10d1b606 mov eax, 1 */
  EAX = (0x1u);
  /* 10d1b60b ret  */
  ESPCHK(0x10d1b4c0u, _esp0);
  ESP += 4; return;
  /* 10d1b60c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1b60f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d1b616 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d1b61d:;
  /* 10d1b61d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b621 jne 0x10d1b62a */
  if (!C.zf) goto L_10d1b62a;
  /* 10d1b623 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b625 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b62a:;
  /* 10d1b62a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1b62d push edx */
  push32((uint32_t)(EDX));
  /* 10d1b62e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1b631 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b632 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1b635 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b636 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b639 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b63a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1b63c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d1b63f push eax */
  push32((uint32_t)(EAX));
  /* 10d1b640 call dword ptr [0x10d40348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40348))), 0x10d1b646u);
  /* 10d1b646 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1b648 jne 0x10d1b651 */
  if (!C.zf) goto L_10d1b651;
  /* 10d1b64a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b64c jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b651:;
  /* 10d1b651 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b655 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1b658 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b659 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1b65c push edx */
  push32((uint32_t)(EDX));
  /* 10d1b65d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b660 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b664 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b665 call dword ptr [0x10d40358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40358))), 0x10d1b66bu);
  /* 10d1b66b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d1b66e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b672 jne 0x10d1b67b */
  if (!C.zf) goto L_10d1b67b;
  /* 10d1b674 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b676 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b67b:;
  /* 10d1b67b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b67e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b684 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1b686 je 0x10d1b6cb */
  if (C.zf) goto L_10d1b6cb;
  /* 10d1b688 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b68c je 0x10d1b6c6 */
  if (C.zf) goto L_10d1b6c6;
  /* 10d1b68e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1b691 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b694 jle 0x10d1b69d */
  if ((C.zf||C.sf!=C.of)) goto L_10d1b69d;
  /* 10d1b696 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b698 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b69d:;
  /* 10d1b69d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d1b6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b6a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1b6a4 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b6a5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1b6a8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b6a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1b6ac push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b6ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b6b0 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b6b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b6b4 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b6b5 call dword ptr [0x10d40358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40358))), 0x10d1b6bbu);
  /* 10d1b6bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1b6bd jne 0x10d1b6c6 */
  if (!C.zf) goto L_10d1b6c6;
  /* 10d1b6bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b6c1 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b6c6:;
  /* 10d1b6c6 jmp 0x10d1b7aa */
  goto L_10d1b7aa;
L_10d1b6cb:;
  /* 10d1b6cb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1b6ce mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d1b6d1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d1b6d8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1b6db shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d1b6dd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b6e0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d1b6e2 call 0x10d16270 */
  push32(0x10d1b6e7u); f_10d16270();
  /* 10d1b6e7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10d1b6ea mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d1b6ed mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d1b6f0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d1b6f3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d1b6fa jmp 0x10d1b713 */
  goto L_10d1b713;
  /* 10d1b6fc mov eax, 1 */
  EAX = (0x1u);
  /* 10d1b701 ret  */
  ESPCHK(0x10d1b4c0u, _esp0);
  ESP += 4; return;
  /* 10d1b702 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1b705 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d1b70c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d1b713:;
  /* 10d1b713 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b717 jne 0x10d1b720 */
  if (!C.zf) goto L_10d1b720;
  /* 10d1b719 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b71b jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b720:;
  /* 10d1b720 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1b723 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b724 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1b727 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b728 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1b72b push edx */
  push32((uint32_t)(EDX));
  /* 10d1b72c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1b72f push eax */
  push32((uint32_t)(EAX));
  /* 10d1b730 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b733 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b737 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b738 call dword ptr [0x10d40358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40358))), 0x10d1b73eu);
  /* 10d1b73e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1b740 jne 0x10d1b746 */
  if (!C.zf) goto L_10d1b746;
  /* 10d1b742 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b744 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b746:;
  /* 10d1b746 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b74a jne 0x10d1b77a */
  if (!C.zf) goto L_10d1b77a;
  /* 10d1b74c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b74e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b750 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b752 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b754 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1b757 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b758 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1b75b push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b75c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d1b761 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d1b764 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b765 call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d1b76bu);
  /* 10d1b76b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d1b76e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b772 jne 0x10d1b778 */
  if (!C.zf) goto L_10d1b778;
  /* 10d1b774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b776 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b778:;
  /* 10d1b778 jmp 0x10d1b7aa */
  goto L_10d1b7aa;
L_10d1b77a:;
  /* 10d1b77a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b77c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b77e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d1b781 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b782 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d1b785 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b786 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1b789 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b78a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1b78d push eax */
  push32((uint32_t)(EAX));
  /* 10d1b78e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d1b793 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d1b796 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b797 call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d1b79du);
  /* 10d1b79d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d1b7a0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b7a4 jne 0x10d1b7aa */
  if (!C.zf) goto L_10d1b7aa;
  /* 10d1b7a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b7a8 jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b7aa:;
  /* 10d1b7aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1b7ad jmp 0x10d1b7b1 */
  goto L_10d1b7b1;
L_10d1b7af:;
  /* 10d1b7af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1b7b1:;
  /* 10d1b7b1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10d1b7b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1b7b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d1b7be pop edi */
  EDI = (pop32());
  /* 10d1b7bf pop esi */
  ESI = (pop32());
  /* 10d1b7c0 pop ebx */
  EBX = (pop32());
  /* 10d1b7c1 mov esp, ebp */
  ESP = (EBP);
  /* 10d1b7c3 pop ebp */
  EBP = (pop32());
  /* 10d1b7c4 ret  */
  ESPCHK(0x10d1b4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7d0 @ 0x10d1b7d0 (80 bytes, 32 insns) */
void f_10d1b7d0(void) {
  FTRACE(0x10d1b7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1b7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1b7d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1b7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b7d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b7d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1b7dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b7df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d1b7e2:;
  /* 10d1b7e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1b7e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1b7e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b7eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1b7ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1b7f0 je 0x10d1b807 */
  if (C.zf) goto L_10d1b807;
  /* 10d1b7f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1b7f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1b7f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1b7fa je 0x10d1b807 */
  if (C.zf) goto L_10d1b807;
  /* 10d1b7fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1b7ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b802 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1b805 jmp 0x10d1b7e2 */
  goto L_10d1b7e2;
L_10d1b807:;
  /* 10d1b807 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1b80a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1b80d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1b80f jne 0x10d1b819 */
  if (!C.zf) goto L_10d1b819;
  /* 10d1b811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1b814 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b817 jmp 0x10d1b81c */
  goto L_10d1b81c;
L_10d1b819:;
  /* 10d1b819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10d1b81c:;
  /* 10d1b81c mov esp, ebp */
  ESP = (EBP);
  /* 10d1b81e pop ebp */
  EBP = (pop32());
  /* 10d1b81f ret  */
  ESPCHK(0x10d1b7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b820 @ 0x10d1b820 (130 bytes, 43 insns) */
void f_10d1b820(void) {
  FTRACE(0x10d1b820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1b820 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1b821 mov ebp, esp */
  EBP = (ESP);
  /* 10d1b823 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b827 cmp eax, dword ptr [0x10d3ff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b82d jae 0x10d1b851 */
  if (!C.cf) goto L_10d1b851;
  /* 10d1b82f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b832 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1b835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b838 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b83b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1b83e mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1b845 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d1b84a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1b84d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1b84f jne 0x10d1b86c */
  if (!C.zf) goto L_10d1b86c;
L_10d1b851:;
  /* 10d1b851 call 0x10d1afa0 */
  push32(0x10d1b856u); f_10d1afa0();
  /* 10d1b856 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1b85c call 0x10d1afb0 */
  push32(0x10d1b861u); f_10d1afb0();
  /* 10d1b861 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1b867 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b86a jmp 0x10d1b89e */
  goto L_10d1b89e;
L_10d1b86c:;
  /* 10d1b86c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b86f push edx */
  push32((uint32_t)(EDX));
  /* 10d1b870 call 0x10d1c7c0 */
  push32(0x10d1b875u); f_10d1c7c0();
  /* 10d1b875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b878 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b87b push eax */
  push32((uint32_t)(EAX));
  /* 10d1b87c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b87f push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b880 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b883 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b884 call 0x10d1b8b0 */
  push32(0x10d1b889u); f_10d1b8b0();
  /* 10d1b889 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b88c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1b88f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b892 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b893 call 0x10d1c850 */
  push32(0x10d1b898u); f_10d1c850();
  /* 10d1b898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b89b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d1b89e:;
  /* 10d1b89e mov esp, ebp */
  ESP = (EBP);
  /* 10d1b8a0 pop ebp */
  EBP = (pop32());
  /* 10d1b8a1 ret  */
  ESPCHK(0x10d1b820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8b0 @ 0x10d1b8b0 (178 bytes, 56 insns) */
void f_10d1b8b0(void) {
  FTRACE(0x10d1b8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1b8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1b8b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1b8b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1b8b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b8b9 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b8ba call 0x10d1c640 */
  push32(0x10d1b8bfu); f_10d1c640();
  /* 10d1b8bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b8c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1b8c5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b8c9 jne 0x10d1b8de */
  if (!C.zf) goto L_10d1b8de;
  /* 10d1b8cb call 0x10d1afa0 */
  push32(0x10d1b8d0u); f_10d1afa0();
  /* 10d1b8d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1b8d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b8d9 jmp 0x10d1b95e */
  goto L_10d1b95e;
L_10d1b8de:;
  /* 10d1b8de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b8e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b8e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1b8e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b8e7 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b8e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1b8eb push eax */
  push32((uint32_t)(EAX));
  /* 10d1b8ec call dword ptr [0x10d402ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402ec))), 0x10d1b8f2u);
  /* 10d1b8f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1b8f5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b8f9 jne 0x10d1b906 */
  if (!C.zf) goto L_10d1b906;
  /* 10d1b8fb call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d1b901u);
  /* 10d1b901 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1b904 jmp 0x10d1b90d */
  goto L_10d1b90d;
L_10d1b906:;
  /* 10d1b906 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d1b90d:;
  /* 10d1b90d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b911 je 0x10d1b924 */
  if (C.zf) goto L_10d1b924;
  /* 10d1b913 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1b916 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b917 call 0x10d1af00 */
  push32(0x10d1b91cu); f_10d1af00();
  /* 10d1b91c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b91f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b922 jmp 0x10d1b95e */
  goto L_10d1b95e;
L_10d1b924:;
  /* 10d1b924 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b927 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d1b92a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b92d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b930 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1b933 mov ecx, dword ptr [edx*4 + 0x10d3fe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d3fe00)));
  /* 10d1b93a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10d1b93e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10d1b941 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b944 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1b947 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b94a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1b94d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1b950 mov eax, dword ptr [eax*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1b957 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10d1b95b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d1b95e:;
  /* 10d1b95e mov esp, ebp */
  ESP = (EBP);
  /* 10d1b960 pop ebp */
  EBP = (pop32());
  /* 10d1b961 ret  */
  ESPCHK(0x10d1b8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b970 @ 0x10d1b970 (130 bytes, 43 insns) */
void f_10d1b970(void) {
  FTRACE(0x10d1b970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1b970 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1b971 mov ebp, esp */
  EBP = (ESP);
  /* 10d1b973 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b977 cmp eax, dword ptr [0x10d3ff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1b97d jae 0x10d1b9a1 */
  if (!C.cf) goto L_10d1b9a1;
  /* 10d1b97f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b982 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1b985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b988 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1b98b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1b98e mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1b995 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d1b99a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1b99d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1b99f jne 0x10d1b9bc */
  if (!C.zf) goto L_10d1b9bc;
L_10d1b9a1:;
  /* 10d1b9a1 call 0x10d1afa0 */
  push32(0x10d1b9a6u); f_10d1afa0();
  /* 10d1b9a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1b9ac call 0x10d1afb0 */
  push32(0x10d1b9b1u); f_10d1afb0();
  /* 10d1b9b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1b9b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1b9ba jmp 0x10d1b9ee */
  goto L_10d1b9ee;
L_10d1b9bc:;
  /* 10d1b9bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b9bf push edx */
  push32((uint32_t)(EDX));
  /* 10d1b9c0 call 0x10d1c7c0 */
  push32(0x10d1b9c5u); f_10d1c7c0();
  /* 10d1b9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b9c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1b9cb push eax */
  push32((uint32_t)(EAX));
  /* 10d1b9cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1b9cf push ecx */
  push32((uint32_t)(ECX));
  /* 10d1b9d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b9d3 push edx */
  push32((uint32_t)(EDX));
  /* 10d1b9d4 call 0x10d1ba00 */
  push32(0x10d1b9d9u); f_10d1ba00();
  /* 10d1b9d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b9dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1b9df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1b9e2 push eax */
  push32((uint32_t)(EAX));
  /* 10d1b9e3 call 0x10d1c850 */
  push32(0x10d1b9e8u); f_10d1c850();
  /* 10d1b9e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1b9eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d1b9ee:;
  /* 10d1b9ee mov esp, ebp */
  ESP = (EBP);
  /* 10d1b9f0 pop ebp */
  EBP = (pop32());
  /* 10d1b9f1 ret  */
  ESPCHK(0x10d1b970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba00 @ 0x10d1ba00 (627 bytes, 182 insns) */
void f_10d1ba00(void) {
  FTRACE(0x10d1ba00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ba00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1ba01 mov ebp, esp */
  EBP = (ESP);
  /* 10d1ba03 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ba09 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d1ba10 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1ba13 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10d1ba19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ba1d jne 0x10d1ba26 */
  if (!C.zf) goto L_10d1ba26;
  /* 10d1ba1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1ba21 jmp 0x10d1bc6f */
  goto L_10d1bc6f;
L_10d1ba26:;
  /* 10d1ba26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ba29 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1ba2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ba2f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1ba32 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1ba35 mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1ba3c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d1ba41 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ba44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1ba46 je 0x10d1ba58 */
  if (C.zf) goto L_10d1ba58;
  /* 10d1ba48 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ba4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1ba4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ba4f push edx */
  push32((uint32_t)(EDX));
  /* 10d1ba50 call 0x10d1b8b0 */
  push32(0x10d1ba55u); f_10d1b8b0();
  /* 10d1ba55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1ba58:;
  /* 10d1ba58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ba5b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1ba5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ba61 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ba64 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1ba67 mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1ba6e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10d1ba73 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1ba78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1ba7a je 0x10d1bb8c */
  if (C.zf) goto L_10d1bb8c;
  /* 10d1ba80 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ba83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1ba86 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10d1ba8d:;
  /* 10d1ba8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1ba90 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ba93 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ba96 jae 0x10d1bb8a */
  if (!C.cf) goto L_10d1bb8a;
  /* 10d1ba9c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10d1baa2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d1baa5:;
  /* 10d1baa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1baa8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10d1baae sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1bab0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bab6 jge 0x10d1bb17 */
  if ((C.sf==C.of)) goto L_10d1bb17;
  /* 10d1bab8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1babb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1babe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bac1 jae 0x10d1bb17 */
  if (!C.cf) goto L_10d1bb17;
  /* 10d1bac3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bac6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d1bac8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10d1bace mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bad1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bad4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1bad7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10d1bade cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bae1 jne 0x10d1bb01 */
  if (!C.zf) goto L_10d1bb01;
  /* 10d1bae3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10d1bae9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1baec mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10d1baf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1baf5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10d1baf8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1bafb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bafe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d1bb01:;
  /* 10d1bb01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1bb04 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10d1bb0a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10d1bb0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1bb0f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bb12 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1bb15 jmp 0x10d1baa5 */
  goto L_10d1baa5;
L_10d1bb17:;
  /* 10d1bb17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1bb19 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10d1bb1f push edx */
  push32((uint32_t)(EDX));
  /* 10d1bb20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1bb23 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10d1bb29 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1bb2b push eax */
  push32((uint32_t)(EAX));
  /* 10d1bb2c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10d1bb32 push edx */
  push32((uint32_t)(EDX));
  /* 10d1bb33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bb36 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1bb39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bb3c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1bb3f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1bb42 mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1bb49 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10d1bb4c push eax */
  push32((uint32_t)(EAX));
  /* 10d1bb4d call dword ptr [0x10d40290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40290))), 0x10d1bb53u);
  /* 10d1bb53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1bb55 je 0x10d1bb7a */
  if (C.zf) goto L_10d1bb7a;
  /* 10d1bb57 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1bb5a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bb60 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d1bb63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1bb66 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10d1bb6c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1bb6e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bb74 jge 0x10d1bb78 */
  if ((C.sf==C.of)) goto L_10d1bb78;
  /* 10d1bb76 jmp 0x10d1bb8a */
  goto L_10d1bb8a;
L_10d1bb78:;
  /* 10d1bb78 jmp 0x10d1bb85 */
  goto L_10d1bb85;
L_10d1bb7a:;
  /* 10d1bb7a call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d1bb80u);
  /* 10d1bb80 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1bb83 jmp 0x10d1bb8a */
  goto L_10d1bb8a;
L_10d1bb85:;
  /* 10d1bb85 jmp 0x10d1ba8d */
  goto L_10d1ba8d;
L_10d1bb8a:;
  /* 10d1bb8a jmp 0x10d1bbdc */
  goto L_10d1bbdc;
L_10d1bb8c:;
  /* 10d1bb8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1bb8e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10d1bb94 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1bb95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1bb98 push edx */
  push32((uint32_t)(EDX));
  /* 10d1bb99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1bb9c push eax */
  push32((uint32_t)(EAX));
  /* 10d1bb9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bba0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1bba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bba6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1bba9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1bbac mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1bbb3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10d1bbb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1bbb7 call dword ptr [0x10d40290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40290))), 0x10d1bbbdu);
  /* 10d1bbbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1bbbf je 0x10d1bbd3 */
  if (C.zf) goto L_10d1bbd3;
  /* 10d1bbc1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d1bbc8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10d1bbce mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d1bbd1 jmp 0x10d1bbdc */
  goto L_10d1bbdc;
L_10d1bbd3:;
  /* 10d1bbd3 call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d1bbd9u);
  /* 10d1bbd9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d1bbdc:;
  /* 10d1bbdc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bbe0 jne 0x10d1bc66 */
  if (!C.zf) goto L_10d1bc66;
  /* 10d1bbe6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bbea je 0x10d1bc1a */
  if (C.zf) goto L_10d1bc1a;
  /* 10d1bbec cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bbf0 jne 0x10d1bc09 */
  if (!C.zf) goto L_10d1bc09;
  /* 10d1bbf2 call 0x10d1afa0 */
  push32(0x10d1bbf7u); f_10d1afa0();
  /* 10d1bbf7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1bbfd call 0x10d1afb0 */
  push32(0x10d1bc02u); f_10d1afb0();
  /* 10d1bc02 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1bc05 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d1bc07 jmp 0x10d1bc15 */
  goto L_10d1bc15;
L_10d1bc09:;
  /* 10d1bc09 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1bc0c push edx */
  push32((uint32_t)(EDX));
  /* 10d1bc0d call 0x10d1af00 */
  push32(0x10d1bc12u); f_10d1af00();
  /* 10d1bc12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1bc15:;
  /* 10d1bc15 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1bc18 jmp 0x10d1bc6f */
  goto L_10d1bc6f;
L_10d1bc1a:;
  /* 10d1bc1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bc1d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1bc20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bc23 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1bc26 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1bc29 mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1bc30 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10d1bc35 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1bc38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1bc3a je 0x10d1bc4b */
  if (C.zf) goto L_10d1bc4b;
  /* 10d1bc3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1bc3f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1bc42 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bc45 jne 0x10d1bc4b */
  if (!C.zf) goto L_10d1bc4b;
  /* 10d1bc47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1bc49 jmp 0x10d1bc6f */
  goto L_10d1bc6f;
L_10d1bc4b:;
  /* 10d1bc4b call 0x10d1afa0 */
  push32(0x10d1bc50u); f_10d1afa0();
  /* 10d1bc50 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10d1bc56 call 0x10d1afb0 */
  push32(0x10d1bc5bu); f_10d1afb0();
  /* 10d1bc5b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1bc61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1bc64 jmp 0x10d1bc6f */
  goto L_10d1bc6f;
L_10d1bc66:;
  /* 10d1bc66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1bc69 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10d1bc6f:;
  /* 10d1bc6f mov esp, ebp */
  ESP = (EBP);
  /* 10d1bc71 pop ebp */
  EBP = (pop32());
  /* 10d1bc72 ret  */
  ESPCHK(0x10d1ba00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc80 @ 0x10d1bc80 (199 bytes, 68 insns) */
void f_10d1bc80(void) {
  FTRACE(0x10d1bc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1bc80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1bc81 mov ebp, esp */
  EBP = (ESP);
  /* 10d1bc83 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1bc84 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1bc85 push esi */
  push32((uint32_t)(ESI));
  /* 10d1bc86 push edi */
  push32((uint32_t)(EDI));
L_10d1bc87:;
  /* 10d1bc87 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bc8b jne 0x10d1bcab */
  if (!C.zf) goto L_10d1bcab;
  /* 10d1bc8d push 0x10d39ec0 */
  push32((uint32_t)(0x10d39ec0u));
  /* 10d1bc92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1bc94 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10d1bc96 push 0x10d39f90 */
  push32((uint32_t)(0x10d39f90u));
  /* 10d1bc9b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1bc9d call 0x10d12190 */
  push32(0x10d1bca2u); f_10d12190();
  /* 10d1bca2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bca5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bca8 jne 0x10d1bcab */
  if (!C.zf) goto L_10d1bcab;
  /* 10d1bcaa int3  */
  x86_unimpl("int3 @ 0x10d1bcaa");
L_10d1bcab:;
  /* 10d1bcab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1bcad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1bcaf jne 0x10d1bc87 */
  if (!C.zf) goto L_10d1bc87;
  /* 10d1bcb1 mov ecx, dword ptr [0x10d3e63c] */
  ECX = (r32((uint32_t)(0x10d3e63c)));
  /* 10d1bcb7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bcba mov dword ptr [0x10d3e63c], ecx */
  w32((uint32_t)(0x10d3e63c), (ECX));
  /* 10d1bcc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bcc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1bcc6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10d1bcc8 push 0x10d39f90 */
  push32((uint32_t)(0x10d39f90u));
  /* 10d1bccd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1bccf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d1bcd4 call 0x10d130d0 */
  push32(0x10d1bcd9u); f_10d130d0();
  /* 10d1bcd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bcdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bcdf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10d1bce2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bce5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bce9 je 0x10d1bd06 */
  if (C.zf) goto L_10d1bd06;
  /* 10d1bceb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bcee mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1bcf1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1bcf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bcf7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10d1bcfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bcfd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10d1bd04 jmp 0x10d1bd2b */
  goto L_10d1bd2b;
L_10d1bd06:;
  /* 10d1bd06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bd09 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1bd0c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1bd0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bd12 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d1bd15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bd18 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bd1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bd1e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d1bd21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bd24 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10d1bd2b:;
  /* 10d1bd2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bd2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bd31 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d1bd34 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d1bd36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bd39 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d1bd40 pop edi */
  EDI = (pop32());
  /* 10d1bd41 pop esi */
  ESI = (pop32());
  /* 10d1bd42 pop ebx */
  EBX = (pop32());
  /* 10d1bd43 mov esp, ebp */
  ESP = (EBP);
  /* 10d1bd45 pop ebp */
  EBP = (pop32());
  /* 10d1bd46 ret  */
  ESPCHK(0x10d1bc80u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10d1bd50 (50 bytes, 17 insns) */
void f_10d1bd50(void) {
  FTRACE(0x10d1bd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1bd50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1bd51 mov ebp, esp */
  EBP = (ESP);
  /* 10d1bd53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bd56 cmp eax, dword ptr [0x10d3ff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bd5c jb 0x10d1bd62 */
  if (C.cf) goto L_10d1bd62;
  /* 10d1bd5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1bd60 jmp 0x10d1bd80 */
  goto L_10d1bd80;
L_10d1bd62:;
  /* 10d1bd62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bd65 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1bd68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bd6b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1bd6e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1bd71 mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1bd78 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d1bd7d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10d1bd80:;
  /* 10d1bd80 pop ebp */
  EBP = (pop32());
  /* 10d1bd81 ret  */
  ESPCHK(0x10d1bd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x10d1bd90 (300 bytes, 80 insns) */
void f_10d1bd90(void) {
  FTRACE(0x10d1bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1bd91 mov ebp, esp */
  EBP = (ESP);
  /* 10d1bd93 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1bd94 cmp dword ptr [0x10d3fb00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fb00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bd9b jne 0x10d1bda9 */
  if (!C.zf) goto L_10d1bda9;
  /* 10d1bd9d mov dword ptr [0x10d3fb00], 0x200 */
  w32((uint32_t)(0x10d3fb00), (0x200u));
  /* 10d1bda7 jmp 0x10d1bdbc */
  goto L_10d1bdbc;
L_10d1bda9:;
  /* 10d1bda9 cmp dword ptr [0x10d3fb00], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10d3fb00))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bdb0 jge 0x10d1bdbc */
  if ((C.sf==C.of)) goto L_10d1bdbc;
  /* 10d1bdb2 mov dword ptr [0x10d3fb00], 0x14 */
  w32((uint32_t)(0x10d3fb00), (0x14u));
L_10d1bdbc:;
  /* 10d1bdbc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10d1bdc1 push 0x10d39f9c */
  push32((uint32_t)(0x10d39f9cu));
  /* 10d1bdc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1bdc8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d1bdca mov eax, dword ptr [0x10d3fb00] */
  EAX = (r32((uint32_t)(0x10d3fb00)));
  /* 10d1bdcf push eax */
  push32((uint32_t)(EAX));
  /* 10d1bdd0 call 0x10d134e0 */
  push32(0x10d1bdd5u); f_10d134e0();
  /* 10d1bdd5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bdd8 mov dword ptr [0x10d3e7b0], eax */
  w32((uint32_t)(0x10d3e7b0), (EAX));
  /* 10d1bddd cmp dword ptr [0x10d3e7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bde4 jne 0x10d1be25 */
  if (!C.zf) goto L_10d1be25;
  /* 10d1bde6 mov dword ptr [0x10d3fb00], 0x14 */
  w32((uint32_t)(0x10d3fb00), (0x14u));
  /* 10d1bdf0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10d1bdf5 push 0x10d39f9c */
  push32((uint32_t)(0x10d39f9cu));
  /* 10d1bdfa push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1bdfc push 4 */
  push32((uint32_t)(0x4u));
  /* 10d1bdfe mov ecx, dword ptr [0x10d3fb00] */
  ECX = (r32((uint32_t)(0x10d3fb00)));
  /* 10d1be04 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1be05 call 0x10d134e0 */
  push32(0x10d1be0au); f_10d134e0();
  /* 10d1be0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1be0d mov dword ptr [0x10d3e7b0], eax */
  w32((uint32_t)(0x10d3e7b0), (EAX));
  /* 10d1be12 cmp dword ptr [0x10d3e7b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e7b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1be19 jne 0x10d1be25 */
  if (!C.zf) goto L_10d1be25;
  /* 10d1be1b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10d1be1d call 0x10d12040 */
  push32(0x10d1be22u); f_10d12040();
  /* 10d1be22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1be25:;
  /* 10d1be25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1be2c jmp 0x10d1be37 */
  goto L_10d1be37;
L_10d1be2e:;
  /* 10d1be2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1be31 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1be34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d1be37:;
  /* 10d1be37 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1be3b jge 0x10d1be56 */
  if ((C.sf==C.of)) goto L_10d1be56;
  /* 10d1be3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1be40 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1be43 add eax, 0x10d3d120 */
  { uint32_t _a=(EAX),_b=(0x10d3d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1be48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1be4b mov edx, dword ptr [0x10d3e7b0] */
  EDX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1be51 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10d1be54 jmp 0x10d1be2e */
  goto L_10d1be2e;
L_10d1be56:;
  /* 10d1be56 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1be5d jmp 0x10d1be68 */
  goto L_10d1be68;
L_10d1be5f:;
  /* 10d1be5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1be62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1be65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1be68:;
  /* 10d1be68 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1be6c jge 0x10d1beb8 */
  if ((C.sf==C.of)) goto L_10d1beb8;
  /* 10d1be6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1be71 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1be74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1be77 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1be7a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1be7d mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1be84 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1be88 je 0x10d1bea6 */
  if (C.zf) goto L_10d1bea6;
  /* 10d1be8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1be8d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1be90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1be93 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1be96 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1be99 mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1bea0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bea4 jne 0x10d1beb6 */
  if (!C.zf) goto L_10d1beb6;
L_10d1bea6:;
  /* 10d1bea6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1bea9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1beac mov dword ptr [ecx + 0x10d3d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10d3d130), (0xffffffffu));
L_10d1beb6:;
  /* 10d1beb6 jmp 0x10d1be5f */
  goto L_10d1be5f;
L_10d1beb8:;
  /* 10d1beb8 mov esp, ebp */
  ESP = (EBP);
  /* 10d1beba pop ebp */
  EBP = (pop32());
  /* 10d1bebb ret  */
  ESPCHK(0x10d1bd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bec0 @ 0x10d1bec0 (26 bytes, 9 insns) */
void f_10d1bec0(void) {
  FTRACE(0x10d1bec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1bec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1bec1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1bec3 call 0x10d1cac0 */
  push32(0x10d1bec8u); f_10d1cac0();
  /* 10d1bec8 movsx eax, byte ptr [0x10d3e454] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10d3e454))));
  /* 10d1becf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1bed1 je 0x10d1bed8 */
  if (C.zf) goto L_10d1bed8;
  /* 10d1bed3 call 0x10d1c880 */
  push32(0x10d1bed8u); f_10d1c880();
L_10d1bed8:;
  /* 10d1bed8 pop ebp */
  EBP = (pop32());
  /* 10d1bed9 ret  */
  ESPCHK(0x10d1bec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bee0 @ 0x10d1bee0 (61 bytes, 20 insns) */
void f_10d1bee0(void) {
  FTRACE(0x10d1bee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1bee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1bee1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1bee3 cmp dword ptr [ebp + 8], 0x10d3d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10d3d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1beea jb 0x10d1bf0e */
  if (C.cf) goto L_10d1bf0e;
  /* 10d1beec cmp dword ptr [ebp + 8], 0x10d3d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10d3d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bef3 ja 0x10d1bf0e */
  if ((!C.cf&&!C.zf)) goto L_10d1bf0e;
  /* 10d1bef5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bef8 sub eax, 0x10d3d120 */
  { uint32_t _a=(EAX),_b=(0x10d3d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1befd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1bf00 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf03 push eax */
  push32((uint32_t)(EAX));
  /* 10d1bf04 call 0x10d16ad0 */
  push32(0x10d1bf09u); f_10d16ad0();
  /* 10d1bf09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf0c jmp 0x10d1bf1b */
  goto L_10d1bf1b;
L_10d1bf0e:;
  /* 10d1bf0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bf11 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf14 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1bf15 call dword ptr [0x10d40320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40320))), 0x10d1bf1bu);
L_10d1bf1b:;
  /* 10d1bf1b pop ebp */
  EBP = (pop32());
  /* 10d1bf1c ret  */
  ESPCHK(0x10d1bee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf20 @ 0x10d1bf20 (41 bytes, 16 insns) */
void f_10d1bf20(void) {
  FTRACE(0x10d1bf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1bf20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1bf21 mov ebp, esp */
  EBP = (ESP);
  /* 10d1bf23 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bf27 jge 0x10d1bf3a */
  if ((C.sf==C.of)) goto L_10d1bf3a;
  /* 10d1bf29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bf2c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf2f push eax */
  push32((uint32_t)(EAX));
  /* 10d1bf30 call 0x10d16ad0 */
  push32(0x10d1bf35u); f_10d16ad0();
  /* 10d1bf35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf38 jmp 0x10d1bf47 */
  goto L_10d1bf47;
L_10d1bf3a:;
  /* 10d1bf3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1bf3d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf40 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1bf41 call dword ptr [0x10d40320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40320))), 0x10d1bf47u);
L_10d1bf47:;
  /* 10d1bf47 pop ebp */
  EBP = (pop32());
  /* 10d1bf48 ret  */
  ESPCHK(0x10d1bf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf50 @ 0x10d1bf50 (61 bytes, 20 insns) */
void f_10d1bf50(void) {
  FTRACE(0x10d1bf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1bf50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1bf51 mov ebp, esp */
  EBP = (ESP);
  /* 10d1bf53 cmp dword ptr [ebp + 8], 0x10d3d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10d3d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bf5a jb 0x10d1bf7e */
  if (C.cf) goto L_10d1bf7e;
  /* 10d1bf5c cmp dword ptr [ebp + 8], 0x10d3d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10d3d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bf63 ja 0x10d1bf7e */
  if ((!C.cf&&!C.zf)) goto L_10d1bf7e;
  /* 10d1bf65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bf68 sub eax, 0x10d3d120 */
  { uint32_t _a=(EAX),_b=(0x10d3d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1bf6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1bf70 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf73 push eax */
  push32((uint32_t)(EAX));
  /* 10d1bf74 call 0x10d16b70 */
  push32(0x10d1bf79u); f_10d16b70();
  /* 10d1bf79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf7c jmp 0x10d1bf8b */
  goto L_10d1bf8b;
L_10d1bf7e:;
  /* 10d1bf7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bf81 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf84 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1bf85 call dword ptr [0x10d40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40324))), 0x10d1bf8bu);
L_10d1bf8b:;
  /* 10d1bf8b pop ebp */
  EBP = (pop32());
  /* 10d1bf8c ret  */
  ESPCHK(0x10d1bf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x10d1bf90 (41 bytes, 16 insns) */
void f_10d1bf90(void) {
  FTRACE(0x10d1bf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1bf90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1bf91 mov ebp, esp */
  EBP = (ESP);
  /* 10d1bf93 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bf97 jge 0x10d1bfaa */
  if ((C.sf==C.of)) goto L_10d1bfaa;
  /* 10d1bf99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1bf9c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bf9f push eax */
  push32((uint32_t)(EAX));
  /* 10d1bfa0 call 0x10d16b70 */
  push32(0x10d1bfa5u); f_10d16b70();
  /* 10d1bfa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bfa8 jmp 0x10d1bfb7 */
  goto L_10d1bfb7;
L_10d1bfaa:;
  /* 10d1bfaa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1bfad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bfb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1bfb1 call dword ptr [0x10d40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40324))), 0x10d1bfb7u);
L_10d1bfb7:;
  /* 10d1bfb7 pop ebp */
  EBP = (pop32());
  /* 10d1bfb8 ret  */
  ESPCHK(0x10d1bf90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc0 @ 0x10d1bfc0 (119 bytes, 34 insns) */
void f_10d1bfc0(void) {
  FTRACE(0x10d1bfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1bfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1bfc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1bfc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1bfc6 push 0x10d3e7ac */
  push32((uint32_t)(0x10d3e7acu));
  /* 10d1bfcb call dword ptr [0x10d402a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402a4))), 0x10d1bfd1u);
  /* 10d1bfd1 cmp dword ptr [0x10d3e79c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e79c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1bfd8 je 0x10d1bff8 */
  if (C.zf) goto L_10d1bff8;
  /* 10d1bfda push 0x10d3e7ac */
  push32((uint32_t)(0x10d3e7acu));
  /* 10d1bfdf call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d1bfe5u);
  /* 10d1bfe5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d1bfe7 call 0x10d16ad0 */
  push32(0x10d1bfecu); f_10d16ad0();
  /* 10d1bfec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1bfef mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d1bff6 jmp 0x10d1bfff */
  goto L_10d1bfff;
L_10d1bff8:;
  /* 10d1bff8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d1bfff:;
  /* 10d1bfff mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10d1c003 push eax */
  push32((uint32_t)(EAX));
  /* 10d1c004 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c007 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c008 call 0x10d1c040 */
  push32(0x10d1c00du); f_10d1c040();
  /* 10d1c00d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c010 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1c013 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c017 je 0x10d1c025 */
  if (C.zf) goto L_10d1c025;
  /* 10d1c019 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d1c01b call 0x10d16b70 */
  push32(0x10d1c020u); f_10d16b70();
  /* 10d1c020 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c023 jmp 0x10d1c030 */
  goto L_10d1c030;
L_10d1c025:;
  /* 10d1c025 push 0x10d3e7ac */
  push32((uint32_t)(0x10d3e7acu));
  /* 10d1c02a call dword ptr [0x10d40294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40294))), 0x10d1c030u);
L_10d1c030:;
  /* 10d1c030 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c033 mov esp, ebp */
  ESP = (EBP);
  /* 10d1c035 pop ebp */
  EBP = (pop32());
  /* 10d1c036 ret  */
  ESPCHK(0x10d1bfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c040 @ 0x10d1c040 (160 bytes, 50 insns) */
void f_10d1c040(void) {
  FTRACE(0x10d1c040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c040 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c041 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1c046 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c04a jne 0x10d1c053 */
  if (!C.zf) goto L_10d1c053;
  /* 10d1c04c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c04e jmp 0x10d1c0dc */
  goto L_10d1c0dc;
L_10d1c053:;
  /* 10d1c053 cmp dword ptr [0x10d3e620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c05a jne 0x10d1c08a */
  if (!C.zf) goto L_10d1c08a;
  /* 10d1c05c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1c05f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c064 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c069 jle 0x10d1c07b */
  if ((C.zf||C.sf!=C.of)) goto L_10d1c07b;
  /* 10d1c06b call 0x10d1afa0 */
  push32(0x10d1c070u); f_10d1afa0();
  /* 10d1c070 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10d1c076 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c079 jmp 0x10d1c0dc */
  goto L_10d1c0dc;
L_10d1c07b:;
  /* 10d1c07b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c07e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10d1c081 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10d1c083 mov eax, 1 */
  EAX = (0x1u);
  /* 10d1c088 jmp 0x10d1c0dc */
  goto L_10d1c0dc;
L_10d1c08a:;
  /* 10d1c08a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1c091 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d1c094 push eax */
  push32((uint32_t)(EAX));
  /* 10d1c095 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1c097 mov ecx, dword ptr [0x10d3cea4] */
  ECX = (r32((uint32_t)(0x10d3cea4)));
  /* 10d1c09d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c09e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c0a1 push edx */
  push32((uint32_t)(EDX));
  /* 10d1c0a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1c0a4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10d1c0a7 push eax */
  push32((uint32_t)(EAX));
  /* 10d1c0a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d1c0ad mov ecx, dword ptr [0x10d3e630] */
  ECX = (r32((uint32_t)(0x10d3e630)));
  /* 10d1c0b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c0b4 call dword ptr [0x10d402fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402fc))), 0x10d1c0bau);
  /* 10d1c0ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1c0bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c0c1 je 0x10d1c0c9 */
  if (C.zf) goto L_10d1c0c9;
  /* 10d1c0c3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c0c7 je 0x10d1c0d9 */
  if (C.zf) goto L_10d1c0d9;
L_10d1c0c9:;
  /* 10d1c0c9 call 0x10d1afa0 */
  push32(0x10d1c0ceu); f_10d1afa0();
  /* 10d1c0ce mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10d1c0d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c0d7 jmp 0x10d1c0dc */
  goto L_10d1c0dc;
L_10d1c0d9:;
  /* 10d1c0d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d1c0dc:;
  /* 10d1c0dc mov esp, ebp */
  ESP = (EBP);
  /* 10d1c0de pop ebp */
  EBP = (pop32());
  /* 10d1c0df ret  */
  ESPCHK(0x10d1c040u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10d1c0e0 (32 bytes, 18 insns) */
void f_10d1c0e0(void) {
  FTRACE(0x10d1c0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c0e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c0e3 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1c0e4 push esi */
  push32((uint32_t)(ESI));
  /* 10d1c0e5 push edi */
  push32((uint32_t)(EDI));
  /* 10d1c0e6 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c0e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1c0e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1c0eb push 0x10d1c0f8 */
  push32((uint32_t)(0x10d1c0f8u));
  /* 10d1c0f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10d1c0f3 call 0x10d2382c */
  push32(0x10d1c0f8u); f_10d2382c();
  /* 10d1c0f8 pop ebp */
  EBP = (pop32());
  /* 10d1c0f9 pop edi */
  EDI = (pop32());
  /* 10d1c0fa pop esi */
  ESI = (pop32());
  /* 10d1c0fb pop ebx */
  EBX = (pop32());
  /* 10d1c0fc mov esp, ebp */
  ESP = (EBP);
  /* 10d1c0fe pop ebp */
  EBP = (pop32());
  /* 10d1c0ff ret  */
  ESPCHK(0x10d1c0e0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10d1c122 (104 bytes, 33 insns) */
void f_10d1c122(void) {
  FTRACE(0x10d1c122u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c122 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1c123 push esi */
  push32((uint32_t)(ESI));
  /* 10d1c124 push edi */
  push32((uint32_t)(EDI));
  /* 10d1c125 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d1c129 push eax */
  push32((uint32_t)(EAX));
  /* 10d1c12a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10d1c12c push 0x10d1c100 */
  push32((uint32_t)(0x10d1c100u));
  /* 10d1c131 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10d1c138 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10d1c13f:;
  /* 10d1c13f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10d1c143 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d1c146 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1c149 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c14c je 0x10d1c17c */
  if (C.zf) goto L_10d1c17c;
  /* 10d1c14e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c152 je 0x10d1c17c */
  if (C.zf) goto L_10d1c17c;
  /* 10d1c154 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10d1c157 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10d1c15a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10d1c15e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10d1c161 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c166 jne 0x10d1c17a */
  if (!C.zf) goto L_10d1c17a;
  /* 10d1c168 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10d1c16d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10d1c171 call 0x10d1c1b6 */
  push32(0x10d1c176u); f_10d1c1b6();
  /* 10d1c176 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10d1c17au);
L_10d1c17a:;
  /* 10d1c17a jmp 0x10d1c13f */
  goto L_10d1c13f;
L_10d1c17c:;
  /* 10d1c17c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10d1c183 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c186 pop edi */
  EDI = (pop32());
  /* 10d1c187 pop esi */
  ESI = (pop32());
  /* 10d1c188 pop ebx */
  EBX = (pop32());
  /* 10d1c189 ret  */
  ESPCHK(0x10d1c122u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b6 @ 0x10d1c1b6 (24 bytes, 10 insns) */
void f_10d1c1b6(void) {
  FTRACE(0x10d1c1b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c1b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1c1b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c1b8 mov ebx, 0x10d3d3b8 */
  EBX = (0x10d3d3b8u);
  /* 10d1c1bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c1c0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10d1c1c3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10d1c1c6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10d1c1c9 pop ecx */
  ECX = (pop32());
  /* 10d1c1ca pop ebx */
  EBX = (pop32());
  /* 10d1c1cb ret 4 */
  ESPCHK(0x10d1c1b6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c295 @ 0x10d1c295 (27 bytes, 11 insns) */
void f_10d1c295(void) {
  FTRACE(0x10d1c295u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c295 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c296 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d1c29a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10d1c29c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d1c29f push eax */
  push32((uint32_t)(EAX));
  /* 10d1c2a0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d1c2a3 push eax */
  push32((uint32_t)(EAX));
  /* 10d1c2a4 call 0x10d1c122 */
  push32(0x10d1c2a9u); f_10d1c122();
  /* 10d1c2a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c2ac pop ebp */
  EBP = (pop32());
  /* 10d1c2ad ret 4 */
  ESPCHK(0x10d1c295u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c2b0 @ 0x10d1c2b0 (482 bytes, 138 insns) */
void f_10d1c2b0(void) {
  FTRACE(0x10d1c2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c2b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c2b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1c2b6 push esi */
  push32((uint32_t)(ESI));
  /* 10d1c2b7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10d1c2be push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10d1c2c0 call 0x10d16ad0 */
  push32(0x10d1c2c5u); f_10d16ad0();
  /* 10d1c2c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c2c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d1c2cf jmp 0x10d1c2da */
  goto L_10d1c2da;
L_10d1c2d1:;
  /* 10d1c2d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1c2d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c2d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d1c2da:;
  /* 10d1c2da cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c2de jge 0x10d1c480 */
  if ((C.sf==C.of)) goto L_10d1c480;
  /* 10d1c2e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1c2e7 cmp dword ptr [ecx*4 + 0x10d3fe00], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10d3fe00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c2ef je 0x10d1c3e6 */
  if (C.zf) goto L_10d1c3e6;
  /* 10d1c2f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1c2f8 mov eax, dword ptr [edx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3fe00)));
  /* 10d1c2ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1c302 jmp 0x10d1c30d */
  goto L_10d1c30d;
L_10d1c304:;
  /* 10d1c304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c307 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c30a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d1c30d:;
  /* 10d1c30d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1c310 mov eax, dword ptr [edx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3fe00)));
  /* 10d1c317 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c31c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c31f jae 0x10d1c3d6 */
  if (!C.cf) goto L_10d1c3d6;
  /* 10d1c325 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c328 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d1c32c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1c32f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1c331 jne 0x10d1c3d1 */
  if (!C.zf) goto L_10d1c3d1;
  /* 10d1c337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c33a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c33e jne 0x10d1c379 */
  if (!C.zf) goto L_10d1c379;
  /* 10d1c340 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d1c342 call 0x10d16ad0 */
  push32(0x10d1c347u); f_10d16ad0();
  /* 10d1c347 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c34a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c34d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c351 jne 0x10d1c36f */
  if (!C.zf) goto L_10d1c36f;
  /* 10d1c353 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c356 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c359 push edx */
  push32((uint32_t)(EDX));
  /* 10d1c35a call dword ptr [0x10d4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4031c))), 0x10d1c360u);
  /* 10d1c360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c363 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d1c366 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c369 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c36c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10d1c36f:;
  /* 10d1c36f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d1c371 call 0x10d16b70 */
  push32(0x10d1c376u); f_10d16b70();
  /* 10d1c376 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1c379:;
  /* 10d1c379 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c37c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c37f push eax */
  push32((uint32_t)(EAX));
  /* 10d1c380 call dword ptr [0x10d40320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40320))), 0x10d1c386u);
  /* 10d1c386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c389 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d1c38d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1c390 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1c392 je 0x10d1c3a6 */
  if (C.zf) goto L_10d1c3a6;
  /* 10d1c394 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c397 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c39a push eax */
  push32((uint32_t)(EAX));
  /* 10d1c39b call dword ptr [0x10d40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40324))), 0x10d1c3a1u);
  /* 10d1c3a1 jmp 0x10d1c304 */
  goto L_10d1c304;
L_10d1c3a6:;
  /* 10d1c3a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c3a9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d1c3af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1c3b2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1c3b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1c3b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c3bb sub eax, dword ptr [edx*4 + 0x10d3fe00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10d3fe00))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1c3c2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d1c3c3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10d1c3c8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d1c3ca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c3cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1c3cf jmp 0x10d1c3d6 */
  goto L_10d1c3d6;
L_10d1c3d1:;
  /* 10d1c3d1 jmp 0x10d1c304 */
  goto L_10d1c304;
L_10d1c3d6:;
  /* 10d1c3d6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c3da je 0x10d1c3e1 */
  if (C.zf) goto L_10d1c3e1;
  /* 10d1c3dc jmp 0x10d1c480 */
  goto L_10d1c480;
L_10d1c3e1:;
  /* 10d1c3e1 jmp 0x10d1c47b */
  goto L_10d1c47b;
L_10d1c3e6:;
  /* 10d1c3e6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10d1c3e8 push 0x10d39fa4 */
  push32((uint32_t)(0x10d39fa4u));
  /* 10d1c3ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1c3ef push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10d1c3f4 call 0x10d130d0 */
  push32(0x10d1c3f9u); f_10d130d0();
  /* 10d1c3f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c3fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1c3ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c403 je 0x10d1c479 */
  if (C.zf) goto L_10d1c479;
  /* 10d1c405 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1c408 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c40b mov dword ptr [eax*4 + 0x10d3fe00], ecx */
  w32((uint32_t)(EAX*4 + 0x10d3fe00), (ECX));
  /* 10d1c412 mov edx, dword ptr [0x10d3ff3c] */
  EDX = (r32((uint32_t)(0x10d3ff3c)));
  /* 10d1c418 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c41b mov dword ptr [0x10d3ff3c], edx */
  w32((uint32_t)(0x10d3ff3c), (EDX));
  /* 10d1c421 jmp 0x10d1c42c */
  goto L_10d1c42c;
L_10d1c423:;
  /* 10d1c423 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c426 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1c42c:;
  /* 10d1c42c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1c42f mov edx, dword ptr [ecx*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1c436 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c43c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c43f jae 0x10d1c464 */
  if (!C.cf) goto L_10d1c464;
  /* 10d1c441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c444 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d1c448 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c44b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d1c451 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c454 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10d1c458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c45b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d1c462 jmp 0x10d1c423 */
  goto L_10d1c423;
L_10d1c464:;
  /* 10d1c464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1c467 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1c46a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1c46d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c470 push edx */
  push32((uint32_t)(EDX));
  /* 10d1c471 call 0x10d1c7c0 */
  push32(0x10d1c476u); f_10d1c7c0();
  /* 10d1c476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1c479:;
  /* 10d1c479 jmp 0x10d1c480 */
  goto L_10d1c480;
L_10d1c47b:;
  /* 10d1c47b jmp 0x10d1c2d1 */
  goto L_10d1c2d1;
L_10d1c480:;
  /* 10d1c480 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10d1c482 call 0x10d16b70 */
  push32(0x10d1c487u); f_10d16b70();
  /* 10d1c487 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c48a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c48d pop esi */
  ESI = (pop32());
  /* 10d1c48e mov esp, ebp */
  ESP = (EBP);
  /* 10d1c490 pop ebp */
  EBP = (pop32());
  /* 10d1c491 ret  */
  ESPCHK(0x10d1c2b0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10d1c4a0 (183 bytes, 57 insns) */
void f_10d1c4a0(void) {
  FTRACE(0x10d1c4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c4a7 cmp eax, dword ptr [0x10d3ff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c4ad jae 0x10d1c53a */
  if (!C.cf) goto L_10d1c53a;
  /* 10d1c4b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c4b6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1c4b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c4bc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1c4bf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c4c2 mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1c4c9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c4cd jne 0x10d1c53a */
  if (!C.zf) goto L_10d1c53a;
  /* 10d1c4cf cmp dword ptr [0x10d3e414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c4d6 jne 0x10d1c51a */
  if (!C.zf) goto L_10d1c51a;
  /* 10d1c4d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c4db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1c4de cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c4e2 je 0x10d1c4f2 */
  if (C.zf) goto L_10d1c4f2;
  /* 10d1c4e4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c4e8 je 0x10d1c500 */
  if (C.zf) goto L_10d1c500;
  /* 10d1c4ea cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c4ee je 0x10d1c50e */
  if (C.zf) goto L_10d1c50e;
  /* 10d1c4f0 jmp 0x10d1c51a */
  goto L_10d1c51a;
L_10d1c4f2:;
  /* 10d1c4f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1c4f5 push edx */
  push32((uint32_t)(EDX));
  /* 10d1c4f6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10d1c4f8 call dword ptr [0x10d402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f0))), 0x10d1c4feu);
  /* 10d1c4fe jmp 0x10d1c51a */
  goto L_10d1c51a;
L_10d1c500:;
  /* 10d1c500 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1c503 push eax */
  push32((uint32_t)(EAX));
  /* 10d1c504 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10d1c506 call dword ptr [0x10d402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f0))), 0x10d1c50cu);
  /* 10d1c50c jmp 0x10d1c51a */
  goto L_10d1c51a;
L_10d1c50e:;
  /* 10d1c50e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1c511 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c512 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d1c514 call dword ptr [0x10d402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f0))), 0x10d1c51au);
L_10d1c51a:;
  /* 10d1c51a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c51d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d1c520 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c523 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c526 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c529 mov ecx, dword ptr [edx*4 + 0x10d3fe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d3fe00)));
  /* 10d1c530 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1c533 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10d1c536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c538 jmp 0x10d1c553 */
  goto L_10d1c553;
L_10d1c53a:;
  /* 10d1c53a call 0x10d1afa0 */
  push32(0x10d1c53fu); f_10d1afa0();
  /* 10d1c53f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1c545 call 0x10d1afb0 */
  push32(0x10d1c54au); f_10d1afb0();
  /* 10d1c54a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1c550 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d1c553:;
  /* 10d1c553 mov esp, ebp */
  ESP = (EBP);
  /* 10d1c555 pop ebp */
  EBP = (pop32());
  /* 10d1c556 ret  */
  ESPCHK(0x10d1c4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c560 @ 0x10d1c560 (216 bytes, 63 insns) */
void f_10d1c560(void) {
  FTRACE(0x10d1c560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c560 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c561 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c563 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c564 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c567 cmp eax, dword ptr [0x10d3ff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c56d jae 0x10d1c61b */
  if (!C.cf) goto L_10d1c61b;
  /* 10d1c573 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c576 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1c579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c57c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1c57f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c582 mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1c589 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d1c58e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1c591 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1c593 je 0x10d1c61b */
  if (C.zf) goto L_10d1c61b;
  /* 10d1c599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c59c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d1c59f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c5a2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c5a5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c5a8 mov ecx, dword ptr [edx*4 + 0x10d3fe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d3fe00)));
  /* 10d1c5af cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c5b3 je 0x10d1c61b */
  if (C.zf) goto L_10d1c61b;
  /* 10d1c5b5 cmp dword ptr [0x10d3e414], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e414))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c5bc jne 0x10d1c5fa */
  if (!C.zf) goto L_10d1c5fa;
  /* 10d1c5be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c5c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1c5c4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c5c8 je 0x10d1c5d8 */
  if (C.zf) goto L_10d1c5d8;
  /* 10d1c5ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c5ce je 0x10d1c5e4 */
  if (C.zf) goto L_10d1c5e4;
  /* 10d1c5d0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c5d4 je 0x10d1c5f0 */
  if (C.zf) goto L_10d1c5f0;
  /* 10d1c5d6 jmp 0x10d1c5fa */
  goto L_10d1c5fa;
L_10d1c5d8:;
  /* 10d1c5d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1c5da push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10d1c5dc call dword ptr [0x10d402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f0))), 0x10d1c5e2u);
  /* 10d1c5e2 jmp 0x10d1c5fa */
  goto L_10d1c5fa;
L_10d1c5e4:;
  /* 10d1c5e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1c5e6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10d1c5e8 call dword ptr [0x10d402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f0))), 0x10d1c5eeu);
  /* 10d1c5ee jmp 0x10d1c5fa */
  goto L_10d1c5fa;
L_10d1c5f0:;
  /* 10d1c5f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1c5f2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d1c5f4 call dword ptr [0x10d402f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402f0))), 0x10d1c5fau);
L_10d1c5fa:;
  /* 10d1c5fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c5fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1c600 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c603 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1c606 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c609 mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1c610 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10d1c617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c619 jmp 0x10d1c634 */
  goto L_10d1c634;
L_10d1c61b:;
  /* 10d1c61b call 0x10d1afa0 */
  push32(0x10d1c620u); f_10d1afa0();
  /* 10d1c620 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1c626 call 0x10d1afb0 */
  push32(0x10d1c62bu); f_10d1afb0();
  /* 10d1c62b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1c631 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d1c634:;
  /* 10d1c634 mov esp, ebp */
  ESP = (EBP);
  /* 10d1c636 pop ebp */
  EBP = (pop32());
  /* 10d1c637 ret  */
  ESPCHK(0x10d1c560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x10d1c640 (102 bytes, 30 insns) */
void f_10d1c640(void) {
  FTRACE(0x10d1c640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c640 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c641 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c643 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c646 cmp eax, dword ptr [0x10d3ff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c64c jae 0x10d1c68b */
  if (!C.cf) goto L_10d1c68b;
  /* 10d1c64e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c651 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1c654 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c657 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1c65a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c65d mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1c664 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d1c669 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1c66c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1c66e je 0x10d1c68b */
  if (C.zf) goto L_10d1c68b;
  /* 10d1c670 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c673 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d1c676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c679 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c67c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c67f mov ecx, dword ptr [edx*4 + 0x10d3fe00] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10d3fe00)));
  /* 10d1c686 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10d1c689 jmp 0x10d1c6a4 */
  goto L_10d1c6a4;
L_10d1c68b:;
  /* 10d1c68b call 0x10d1afa0 */
  push32(0x10d1c690u); f_10d1afa0();
  /* 10d1c690 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1c696 call 0x10d1afb0 */
  push32(0x10d1c69bu); f_10d1afb0();
  /* 10d1c69b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1c6a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d1c6a4:;
  /* 10d1c6a4 pop ebp */
  EBP = (pop32());
  /* 10d1c6a5 ret  */
  ESPCHK(0x10d1c640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x10d1c6b0 (260 bytes, 83 insns) */
void f_10d1c6b0(void) {
  FTRACE(0x10d1c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c6b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1c6b6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d1c6ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1c6bd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c6c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1c6c2 je 0x10d1c6cd */
  if (C.zf) goto L_10d1c6cd;
  /* 10d1c6c4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d1c6c7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d1c6ca mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10d1c6cd:;
  /* 10d1c6cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1c6d0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1c6d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1c6d8 je 0x10d1c6e2 */
  if (C.zf) goto L_10d1c6e2;
  /* 10d1c6da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d1c6dd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10d1c6df mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10d1c6e2:;
  /* 10d1c6e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1c6e5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1c6eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1c6ed je 0x10d1c6f8 */
  if (C.zf) goto L_10d1c6f8;
  /* 10d1c6ef mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d1c6f2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10d1c6f5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10d1c6f8:;
  /* 10d1c6f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c6fb push eax */
  push32((uint32_t)(EAX));
  /* 10d1c6fc call dword ptr [0x10d402dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402dc))), 0x10d1c702u);
  /* 10d1c702 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1c705 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c709 jne 0x10d1c722 */
  if (!C.zf) goto L_10d1c722;
  /* 10d1c70b call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d1c711u);
  /* 10d1c711 push eax */
  push32((uint32_t)(EAX));
  /* 10d1c712 call 0x10d1af00 */
  push32(0x10d1c717u); f_10d1af00();
  /* 10d1c717 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c71a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c71d jmp 0x10d1c7b0 */
  goto L_10d1c7b0;
L_10d1c722:;
  /* 10d1c722 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c726 jne 0x10d1c733 */
  if (!C.zf) goto L_10d1c733;
  /* 10d1c728 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d1c72b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10d1c72e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10d1c731 jmp 0x10d1c742 */
  goto L_10d1c742;
L_10d1c733:;
  /* 10d1c733 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c737 jne 0x10d1c742 */
  if (!C.zf) goto L_10d1c742;
  /* 10d1c739 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d1c73c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10d1c73f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10d1c742:;
  /* 10d1c742 call 0x10d1c2b0 */
  push32(0x10d1c747u); f_10d1c2b0();
  /* 10d1c747 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1c74a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c74e jne 0x10d1c76b */
  if (!C.zf) goto L_10d1c76b;
  /* 10d1c750 call 0x10d1afa0 */
  push32(0x10d1c755u); f_10d1afa0();
  /* 10d1c755 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10d1c75b call 0x10d1afb0 */
  push32(0x10d1c760u); f_10d1afb0();
  /* 10d1c760 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1c766 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c769 jmp 0x10d1c7b0 */
  goto L_10d1c7b0;
L_10d1c76b:;
  /* 10d1c76b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c76e push eax */
  push32((uint32_t)(EAX));
  /* 10d1c76f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c772 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c773 call 0x10d1c4a0 */
  push32(0x10d1c778u); f_10d1c4a0();
  /* 10d1c778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c77b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d1c77e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10d1c781 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10d1c784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c787 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1c78a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c78d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1c790 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c793 mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1c79a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d1c79d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10d1c7a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c7a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c7a5 call 0x10d1c850 */
  push32(0x10d1c7aau); f_10d1c850();
  /* 10d1c7aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c7ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d1c7b0:;
  /* 10d1c7b0 mov esp, ebp */
  ESP = (EBP);
  /* 10d1c7b2 pop ebp */
  EBP = (pop32());
  /* 10d1c7b3 ret  */
  ESPCHK(0x10d1c6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x10d1c7c0 (134 bytes, 44 insns) */
void f_10d1c7c0(void) {
  FTRACE(0x10d1c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c7c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c7c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1c7ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c7cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1c7d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c7d3 mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1c7da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c7dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d1c7df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c7e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c7e6 jne 0x10d1c821 */
  if (!C.zf) goto L_10d1c821;
  /* 10d1c7e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d1c7ea call 0x10d16ad0 */
  push32(0x10d1c7efu); f_10d16ad0();
  /* 10d1c7ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c7f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c7f5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c7f9 jne 0x10d1c817 */
  if (!C.zf) goto L_10d1c817;
  /* 10d1c7fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c7fe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c801 push edx */
  push32((uint32_t)(EDX));
  /* 10d1c802 call dword ptr [0x10d4031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4031c))), 0x10d1c808u);
  /* 10d1c808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c80b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d1c80e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c811 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c814 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10d1c817:;
  /* 10d1c817 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d1c819 call 0x10d16b70 */
  push32(0x10d1c81eu); f_10d16b70();
  /* 10d1c81e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1c821:;
  /* 10d1c821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c824 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1c827 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c82a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1c82d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c830 mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1c837 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10d1c83b push eax */
  push32((uint32_t)(EAX));
  /* 10d1c83c call dword ptr [0x10d40320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40320))), 0x10d1c842u);
  /* 10d1c842 mov esp, ebp */
  ESP = (EBP);
  /* 10d1c844 pop ebp */
  EBP = (pop32());
  /* 10d1c845 ret  */
  ESPCHK(0x10d1c7c0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10d1c850 (38 bytes, 13 insns) */
void f_10d1c850(void) {
  FTRACE(0x10d1c850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c850 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c851 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c856 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1c859 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c85c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1c85f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1c862 mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1c869 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10d1c86d push eax */
  push32((uint32_t)(EAX));
  /* 10d1c86e call dword ptr [0x10d40324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40324))), 0x10d1c874u);
  /* 10d1c874 pop ebp */
  EBP = (pop32());
  /* 10d1c875 ret  */
  ESPCHK(0x10d1c850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c880 @ 0x10d1c880 (218 bytes, 63 insns) */
void f_10d1c880(void) {
  FTRACE(0x10d1c880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c880 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c881 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c883 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1c886 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1c88d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1c88f call 0x10d16ad0 */
  push32(0x10d1c894u); f_10d16ad0();
  /* 10d1c894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c897 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10d1c89e jmp 0x10d1c8a9 */
  goto L_10d1c8a9;
L_10d1c8a0:;
  /* 10d1c8a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c8a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c8a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d1c8a9:;
  /* 10d1c8a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c8ac cmp ecx, dword ptr [0x10d3fb00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3fb00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c8b2 jge 0x10d1c949 */
  if ((C.sf==C.of)) goto L_10d1c949;
  /* 10d1c8b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c8bb mov eax, dword ptr [0x10d3e7b0] */
  EAX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1c8c0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c8c4 je 0x10d1c944 */
  if (C.zf) goto L_10d1c944;
  /* 10d1c8c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c8c9 mov edx, dword ptr [0x10d3e7b0] */
  EDX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1c8cf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d1c8d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1c8d5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1c8db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1c8dd je 0x10d1c901 */
  if (C.zf) goto L_10d1c901;
  /* 10d1c8df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c8e2 mov eax, dword ptr [0x10d3e7b0] */
  EAX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1c8e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d1c8ea push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c8eb call 0x10d1d670 */
  push32(0x10d1c8f0u); f_10d1d670();
  /* 10d1c8f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c8f3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c8f6 je 0x10d1c901 */
  if (C.zf) goto L_10d1c901;
  /* 10d1c8f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c8fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c8fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d1c901:;
  /* 10d1c901 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c905 jl 0x10d1c944 */
  if ((C.sf!=C.of)) goto L_10d1c944;
  /* 10d1c907 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c90a mov ecx, dword ptr [0x10d3e7b0] */
  ECX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1c910 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d1c913 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c916 push edx */
  push32((uint32_t)(EDX));
  /* 10d1c917 call dword ptr [0x10d402e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402e4))), 0x10d1c91du);
  /* 10d1c91d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1c91f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c922 mov ecx, dword ptr [0x10d3e7b0] */
  ECX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1c928 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d1c92b push edx */
  push32((uint32_t)(EDX));
  /* 10d1c92c call 0x10d13b60 */
  push32(0x10d1c931u); f_10d13b60();
  /* 10d1c931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c934 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1c937 mov ecx, dword ptr [0x10d3e7b0] */
  ECX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1c93d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10d1c944:;
  /* 10d1c944 jmp 0x10d1c8a0 */
  goto L_10d1c8a0;
L_10d1c949:;
  /* 10d1c949 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1c94b call 0x10d16b70 */
  push32(0x10d1c950u); f_10d16b70();
  /* 10d1c950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1c956 mov esp, ebp */
  ESP = (EBP);
  /* 10d1c958 pop ebp */
  EBP = (pop32());
  /* 10d1c959 ret  */
  ESPCHK(0x10d1c880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c960 @ 0x10d1c960 (68 bytes, 26 insns) */
void f_10d1c960(void) {
  FTRACE(0x10d1c960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c960 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c961 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c963 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c964 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1c968 jne 0x10d1c976 */
  if (!C.zf) goto L_10d1c976;
  /* 10d1c96a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1c96c call 0x10d1cad0 */
  push32(0x10d1c971u); f_10d1cad0();
  /* 10d1c971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c974 jmp 0x10d1c9a0 */
  goto L_10d1c9a0;
L_10d1c976:;
  /* 10d1c976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c979 push eax */
  push32((uint32_t)(EAX));
  /* 10d1c97a call 0x10d1bee0 */
  push32(0x10d1c97fu); f_10d1bee0();
  /* 10d1c97f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c985 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c986 call 0x10d1c9b0 */
  push32(0x10d1c98bu); f_10d1c9b0();
  /* 10d1c98b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c98e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1c991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c994 push edx */
  push32((uint32_t)(EDX));
  /* 10d1c995 call 0x10d1bf50 */
  push32(0x10d1c99au); f_10d1bf50();
  /* 10d1c99a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c99d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d1c9a0:;
  /* 10d1c9a0 mov esp, ebp */
  ESP = (EBP);
  /* 10d1c9a2 pop ebp */
  EBP = (pop32());
  /* 10d1c9a3 ret  */
  ESPCHK(0x10d1c960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9b0 @ 0x10d1c9b0 (65 bytes, 26 insns) */
void f_10d1c9b0(void) {
  FTRACE(0x10d1c9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1c9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1c9b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1c9b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c9b6 push eax */
  push32((uint32_t)(EAX));
  /* 10d1c9b7 call 0x10d1ca00 */
  push32(0x10d1c9bcu); f_10d1ca00();
  /* 10d1c9bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c9bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1c9c1 je 0x10d1c9c8 */
  if (C.zf) goto L_10d1c9c8;
  /* 10d1c9c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1c9c6 jmp 0x10d1c9ef */
  goto L_10d1c9ef;
L_10d1c9c8:;
  /* 10d1c9c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c9cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1c9ce and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1c9d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1c9d6 je 0x10d1c9ed */
  if (C.zf) goto L_10d1c9ed;
  /* 10d1c9d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1c9db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1c9de push ecx */
  push32((uint32_t)(ECX));
  /* 10d1c9df call 0x10d1d7c0 */
  push32(0x10d1c9e4u); f_10d1d7c0();
  /* 10d1c9e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1c9e7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1c9e9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1c9eb jmp 0x10d1c9ef */
  goto L_10d1c9ef;
L_10d1c9ed:;
  /* 10d1c9ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1c9ef:;
  /* 10d1c9ef pop ebp */
  EBP = (pop32());
  /* 10d1c9f0 ret  */
  ESPCHK(0x10d1c9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca00 @ 0x10d1ca00 (183 bytes, 62 insns) */
void f_10d1ca00(void) {
  FTRACE(0x10d1ca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ca00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1ca01 mov ebp, esp */
  EBP = (ESP);
  /* 10d1ca03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ca06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1ca0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ca10 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1ca13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca16 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1ca19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1ca1c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ca1f jne 0x10d1ca9b */
  if (!C.zf) goto L_10d1ca9b;
  /* 10d1ca21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1ca27 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ca2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1ca2f je 0x10d1ca9b */
  if (C.zf) goto L_10d1ca9b;
  /* 10d1ca31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca37 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10d1ca39 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ca3c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1ca3f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ca43 jle 0x10d1ca9b */
  if ((C.zf||C.sf!=C.of)) goto L_10d1ca9b;
  /* 10d1ca45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1ca48 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ca49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d1ca4f push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ca50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca53 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d1ca56 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ca57 call 0x10d1b970 */
  push32(0x10d1ca5cu); f_10d1b970();
  /* 10d1ca5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ca5f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ca62 jne 0x10d1ca85 */
  if (!C.zf) goto L_10d1ca85;
  /* 10d1ca64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca67 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1ca6a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1ca70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1ca72 je 0x10d1ca83 */
  if (C.zf) goto L_10d1ca83;
  /* 10d1ca74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca77 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1ca7a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ca7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca80 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10d1ca83:;
  /* 10d1ca83 jmp 0x10d1ca9b */
  goto L_10d1ca9b;
L_10d1ca85:;
  /* 10d1ca85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca88 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1ca8b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ca8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca91 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10d1ca94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d1ca9b:;
  /* 10d1ca9b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ca9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1caa1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d1caa4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d1caa6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1caa9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d1cab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1cab3 mov esp, ebp */
  ESP = (EBP);
  /* 10d1cab5 pop ebp */
  EBP = (pop32());
  /* 10d1cab6 ret  */
  ESPCHK(0x10d1ca00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cac0 @ 0x10d1cac0 (15 bytes, 7 insns) */
void f_10d1cac0(void) {
  FTRACE(0x10d1cac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1cac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1cac1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1cac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1cac5 call 0x10d1cad0 */
  push32(0x10d1cacau); f_10d1cad0();
  /* 10d1caca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cacd pop ebp */
  EBP = (pop32());
  /* 10d1cace ret  */
  ESPCHK(0x10d1cac0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cad0 @ 0x10d1cad0 (319 bytes, 94 insns) */
void f_10d1cad0(void) {
  FTRACE(0x10d1cad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1cad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1cad1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1cad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1cad6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1cadd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1cae4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1cae6 call 0x10d16ad0 */
  push32(0x10d1caebu); f_10d16ad0();
  /* 10d1caeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1caee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d1caf5 jmp 0x10d1cb00 */
  goto L_10d1cb00;
L_10d1caf7:;
  /* 10d1caf7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cafa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cafd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d1cb00:;
  /* 10d1cb00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cb03 cmp ecx, dword ptr [0x10d3fb00] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d3fb00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cb09 jge 0x10d1cbf3 */
  if ((C.sf==C.of)) goto L_10d1cbf3;
  /* 10d1cb0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cb12 mov eax, dword ptr [0x10d3e7b0] */
  EAX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1cb17 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cb1b je 0x10d1cbee */
  if (C.zf) goto L_10d1cbee;
  /* 10d1cb21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cb24 mov edx, dword ptr [0x10d3e7b0] */
  EDX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1cb2a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d1cb2d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1cb30 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1cb36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1cb38 je 0x10d1cbee */
  if (C.zf) goto L_10d1cbee;
  /* 10d1cb3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cb41 mov eax, dword ptr [0x10d3e7b0] */
  EAX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1cb46 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d1cb49 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1cb4a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cb4d push edx */
  push32((uint32_t)(EDX));
  /* 10d1cb4e call 0x10d1bf20 */
  push32(0x10d1cb53u); f_10d1bf20();
  /* 10d1cb53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cb56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cb59 mov ecx, dword ptr [0x10d3e7b0] */
  ECX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1cb5f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d1cb62 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d1cb65 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1cb6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1cb6c je 0x10d1cbd5 */
  if (C.zf) goto L_10d1cbd5;
  /* 10d1cb6e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cb72 jne 0x10d1cb99 */
  if (!C.zf) goto L_10d1cb99;
  /* 10d1cb74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cb77 mov edx, dword ptr [0x10d3e7b0] */
  EDX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1cb7d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d1cb80 push eax */
  push32((uint32_t)(EAX));
  /* 10d1cb81 call 0x10d1c9b0 */
  push32(0x10d1cb86u); f_10d1c9b0();
  /* 10d1cb86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cb89 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cb8c je 0x10d1cb97 */
  if (C.zf) goto L_10d1cb97;
  /* 10d1cb8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1cb91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cb94 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d1cb97:;
  /* 10d1cb97 jmp 0x10d1cbd5 */
  goto L_10d1cbd5;
L_10d1cb99:;
  /* 10d1cb99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cb9d jne 0x10d1cbd5 */
  if (!C.zf) goto L_10d1cbd5;
  /* 10d1cb9f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cba2 mov eax, dword ptr [0x10d3e7b0] */
  EAX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1cba7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d1cbaa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1cbad and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1cbb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1cbb2 je 0x10d1cbd5 */
  if (C.zf) goto L_10d1cbd5;
  /* 10d1cbb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cbb7 mov ecx, dword ptr [0x10d3e7b0] */
  ECX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1cbbd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d1cbc0 push edx */
  push32((uint32_t)(EDX));
  /* 10d1cbc1 call 0x10d1c9b0 */
  push32(0x10d1cbc6u); f_10d1c9b0();
  /* 10d1cbc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cbc9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cbcc jne 0x10d1cbd5 */
  if (!C.zf) goto L_10d1cbd5;
  /* 10d1cbce mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10d1cbd5:;
  /* 10d1cbd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cbd8 mov ecx, dword ptr [0x10d3e7b0] */
  ECX = (r32((uint32_t)(0x10d3e7b0)));
  /* 10d1cbde mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d1cbe1 push edx */
  push32((uint32_t)(EDX));
  /* 10d1cbe2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cbe5 push eax */
  push32((uint32_t)(EAX));
  /* 10d1cbe6 call 0x10d1bf90 */
  push32(0x10d1cbebu); f_10d1bf90();
  /* 10d1cbeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1cbee:;
  /* 10d1cbee jmp 0x10d1caf7 */
  goto L_10d1caf7;
L_10d1cbf3:;
  /* 10d1cbf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1cbf5 call 0x10d16b70 */
  push32(0x10d1cbfau); f_10d16b70();
  /* 10d1cbfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cbfd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cc01 jne 0x10d1cc08 */
  if (!C.zf) goto L_10d1cc08;
  /* 10d1cc03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1cc06 jmp 0x10d1cc0b */
  goto L_10d1cc0b;
L_10d1cc08:;
  /* 10d1cc08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d1cc0b:;
  /* 10d1cc0b mov esp, ebp */
  ESP = (EBP);
  /* 10d1cc0d pop ebp */
  EBP = (pop32());
  /* 10d1cc0e ret  */
  ESPCHK(0x10d1cad0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10d1cc10 (15 bytes, 7 insns) */
void f_10d1cc10(void) {
  FTRACE(0x10d1cc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1cc10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1cc11 mov ebp, esp */
  EBP = (ESP);
  /* 10d1cc13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1cc15 call 0x10d12040 */
  push32(0x10d1cc1au); f_10d12040();
  /* 10d1cc1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cc1d pop ebp */
  EBP = (pop32());
  /* 10d1cc1e ret  */
  ESPCHK(0x10d1cc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x10d1cc20 (1007 bytes, 269 insns) */
void f_10d1cc20(void) {
  FTRACE(0x10d1cc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1cc20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1cc21 mov ebp, esp */
  EBP = (ESP);
  /* 10d1cc23 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1cc29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cc2d jl 0x10d1cc35 */
  if ((C.sf!=C.of)) goto L_10d1cc35;
  /* 10d1cc2f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cc33 jle 0x10d1cc3c */
  if ((C.zf||C.sf!=C.of)) goto L_10d1cc3c;
L_10d1cc35:;
  /* 10d1cc35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1cc37 jmp 0x10d1d00b */
  goto L_10d1d00b;
L_10d1cc3c:;
  /* 10d1cc3c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d1cc3e call 0x10d16ad0 */
  push32(0x10d1cc43u); f_10d16ad0();
  /* 10d1cc43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cc46 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d1cc4d mov eax, dword ptr [0x10d3e79c] */
  EAX = (r32((uint32_t)(0x10d3e79c)));
  /* 10d1cc52 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cc55 mov dword ptr [0x10d3e79c], eax */
  w32((uint32_t)(0x10d3e79c), (EAX));
L_10d1cc5a:;
  /* 10d1cc5a cmp dword ptr [0x10d3e7ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e7ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cc61 je 0x10d1cc6d */
  if (C.zf) goto L_10d1cc6d;
  /* 10d1cc63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1cc65 call dword ptr [0x10d40274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40274))), 0x10d1cc6bu);
  /* 10d1cc6b jmp 0x10d1cc5a */
  goto L_10d1cc5a;
L_10d1cc6d:;
  /* 10d1cc6d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cc71 je 0x10d1ccb1 */
  if (C.zf) goto L_10d1ccb1;
  /* 10d1cc73 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cc77 je 0x10d1cc91 */
  if (C.zf) goto L_10d1cc91;
  /* 10d1cc79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1cc7c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1cc7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1cc80 push edx */
  push32((uint32_t)(EDX));
  /* 10d1cc81 call 0x10d1d010 */
  push32(0x10d1cc86u); f_10d1d010();
  /* 10d1cc86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cc89 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10d1cc8f jmp 0x10d1cca3 */
  goto L_10d1cca3;
L_10d1cc91:;
  /* 10d1cc91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1cc94 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1cc97 mov ecx, dword ptr [eax + 0x10d3d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10d3d4dc)));
  /* 10d1cc9d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10d1cca3:;
  /* 10d1cca3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10d1cca9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d1ccac jmp 0x10d1cfeb */
  goto L_10d1cfeb;
L_10d1ccb1:;
  /* 10d1ccb1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10d1ccb8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d1ccbf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ccc3 je 0x10d1cfe3 */
  if (C.zf) goto L_10d1cfe3;
  /* 10d1ccc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1cccc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1cccf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ccd2 jne 0x10d1cef4 */
  if (!C.zf) goto L_10d1cef4;
  /* 10d1ccd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ccdb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d1ccdf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cce2 jne 0x10d1cef4 */
  if (!C.zf) goto L_10d1cef4;
  /* 10d1cce8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1cceb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10d1ccef cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ccf2 jne 0x10d1cef4 */
  if (!C.zf) goto L_10d1cef4;
  /* 10d1ccf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ccfb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10d1cd01:;
  /* 10d1cd01 push 0x10d39ff4 */
  push32((uint32_t)(0x10d39ff4u));
  /* 10d1cd06 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d1cd0c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1cd0d call 0x10d1ee70 */
  push32(0x10d1cd12u); f_10d1ee70();
  /* 10d1cd12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cd15 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10d1cd1b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cd22 je 0x10d1cd4d */
  if (C.zf) goto L_10d1cd4d;
  /* 10d1cd24 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d1cd2a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1cd30 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10d1cd36 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cd3d je 0x10d1cd4d */
  if (C.zf) goto L_10d1cd4d;
  /* 10d1cd3f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d1cd45 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1cd48 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cd4b jne 0x10d1cd73 */
  if (!C.zf) goto L_10d1cd73;
L_10d1cd4d:;
  /* 10d1cd4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cd51 je 0x10d1cd6c */
  if (C.zf) goto L_10d1cd6c;
  /* 10d1cd53 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d1cd55 call 0x10d16b70 */
  push32(0x10d1cd5au); f_10d16b70();
  /* 10d1cd5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cd5d mov edx, dword ptr [0x10d3e79c] */
  EDX = (r32((uint32_t)(0x10d3e79c)));
  /* 10d1cd63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1cd66 mov dword ptr [0x10d3e79c], edx */
  w32((uint32_t)(0x10d3e79c), (EDX));
L_10d1cd6c:;
  /* 10d1cd6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1cd6e jmp 0x10d1d00b */
  goto L_10d1d00b;
L_10d1cd73:;
  /* 10d1cd73 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d1cd7a jmp 0x10d1cd85 */
  goto L_10d1cd85;
L_10d1cd7c:;
  /* 10d1cd7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1cd7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cd82 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d1cd85:;
  /* 10d1cd85 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cd89 jg 0x10d1cdd3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1cdd3;
  /* 10d1cd8b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d1cd91 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1cd92 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d1cd98 push edx */
  push32((uint32_t)(EDX));
  /* 10d1cd99 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1cd9c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1cd9f mov ecx, dword ptr [eax + 0x10d3d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10d3d4d8)));
  /* 10d1cda5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1cda6 call 0x10d1ee30 */
  push32(0x10d1cdabu); f_10d1ee30();
  /* 10d1cdab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cdae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1cdb0 jne 0x10d1cdd1 */
  if (!C.zf) goto L_10d1cdd1;
  /* 10d1cdb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1cdb5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1cdb8 mov eax, dword ptr [edx + 0x10d3d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10d3d4d8)));
  /* 10d1cdbe push eax */
  push32((uint32_t)(EAX));
  /* 10d1cdbf call 0x10d15f00 */
  push32(0x10d1cdc4u); f_10d15f00();
  /* 10d1cdc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cdc7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cdcd jne 0x10d1cdd1 */
  if (!C.zf) goto L_10d1cdd1;
  /* 10d1cdcf jmp 0x10d1cdd3 */
  goto L_10d1cdd3;
L_10d1cdd1:;
  /* 10d1cdd1 jmp 0x10d1cd7c */
  goto L_10d1cd7c;
L_10d1cdd3:;
  /* 10d1cdd3 push 0x10d39ff0 */
  push32((uint32_t)(0x10d39ff0u));
  /* 10d1cdd8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d1cdde add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cde1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10d1cde7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d1cded push edx */
  push32((uint32_t)(EDX));
  /* 10d1cdee call 0x10d1edf0 */
  push32(0x10d1cdf3u); f_10d1edf0();
  /* 10d1cdf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cdf6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10d1cdfc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ce03 jne 0x10d1ce39 */
  if (!C.zf) goto L_10d1ce39;
  /* 10d1ce05 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d1ce0b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1ce0e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ce11 je 0x10d1ce39 */
  if (C.zf) goto L_10d1ce39;
  /* 10d1ce13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ce17 je 0x10d1ce32 */
  if (C.zf) goto L_10d1ce32;
  /* 10d1ce19 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d1ce1b call 0x10d16b70 */
  push32(0x10d1ce20u); f_10d16b70();
  /* 10d1ce20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ce23 mov edx, dword ptr [0x10d3e79c] */
  EDX = (r32((uint32_t)(0x10d3e79c)));
  /* 10d1ce29 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1ce2c mov dword ptr [0x10d3e79c], edx */
  w32((uint32_t)(0x10d3e79c), (EDX));
L_10d1ce32:;
  /* 10d1ce32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1ce34 jmp 0x10d1d00b */
  goto L_10d1d00b;
L_10d1ce39:;
  /* 10d1ce39 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ce3d jg 0x10d1ce8a */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1ce8a;
  /* 10d1ce3f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d1ce45 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ce46 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d1ce4c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ce4d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10d1ce53 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ce54 call 0x10d168f0 */
  push32(0x10d1ce59u); f_10d168f0();
  /* 10d1ce59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ce5c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d1ce62 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10d1ce6a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10d1ce70 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ce71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1ce74 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ce75 call 0x10d1d010 */
  push32(0x10d1ce7au); f_10d1d010();
  /* 10d1ce7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ce7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1ce7f je 0x10d1ce8a */
  if (C.zf) goto L_10d1ce8a;
  /* 10d1ce81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1ce84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ce87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d1ce8a:;
  /* 10d1ce8a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d1ce90 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ce96 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10d1ce9c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d1cea2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d1cea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1cea7 je 0x10d1ceb8 */
  if (C.zf) goto L_10d1ceb8;
  /* 10d1cea9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d1ceaf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ceb2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10d1ceb8:;
  /* 10d1ceb8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d1cebe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d1cec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1cec3 jne 0x10d1cd01 */
  if (!C.zf) goto L_10d1cd01;
  /* 10d1cec9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cecd je 0x10d1cedc */
  if (C.zf) goto L_10d1cedc;
  /* 10d1cecf call 0x10d1d1b0 */
  push32(0x10d1ced4u); f_10d1d1b0();
  /* 10d1ced4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10d1ceda jmp 0x10d1cee6 */
  goto L_10d1cee6;
L_10d1cedc:;
  /* 10d1cedc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10d1cee6:;
  /* 10d1cee6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10d1ceec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1ceef jmp 0x10d1cfe1 */
  goto L_10d1cfe1;
L_10d1cef4:;
  /* 10d1cef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1cef7 push edx */
  push32((uint32_t)(EDX));
  /* 10d1cef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1cefa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1cefc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10d1cf02 push eax */
  push32((uint32_t)(EAX));
  /* 10d1cf03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1cf06 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1cf07 call 0x10d1d2b0 */
  push32(0x10d1cf0cu); f_10d1d2b0();
  /* 10d1cf0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cf0f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1cf12 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cf16 je 0x10d1cfe1 */
  if (C.zf) goto L_10d1cfe1;
  /* 10d1cf1c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d1cf23 jmp 0x10d1cf2e */
  goto L_10d1cf2e;
L_10d1cf25:;
  /* 10d1cf25 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1cf28 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cf2b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d1cf2e:;
  /* 10d1cf2e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cf32 jg 0x10d1cf90 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1cf90;
  /* 10d1cf34 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cf38 je 0x10d1cf8e */
  if (C.zf) goto L_10d1cf8e;
  /* 10d1cf3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1cf3d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1cf40 mov ecx, dword ptr [eax + 0x10d3d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10d3d4dc)));
  /* 10d1cf46 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1cf47 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10d1cf4d push edx */
  push32((uint32_t)(EDX));
  /* 10d1cf4e call 0x10d1ed60 */
  push32(0x10d1cf53u); f_10d1ed60();
  /* 10d1cf53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cf56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1cf58 je 0x10d1cf85 */
  if (C.zf) goto L_10d1cf85;
  /* 10d1cf5a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10d1cf60 push eax */
  push32((uint32_t)(EAX));
  /* 10d1cf61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1cf64 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1cf65 call 0x10d1d010 */
  push32(0x10d1cf6au); f_10d1d010();
  /* 10d1cf6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cf6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1cf6f je 0x10d1cf7c */
  if (C.zf) goto L_10d1cf7c;
  /* 10d1cf71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cf74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cf77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d1cf7a jmp 0x10d1cf83 */
  goto L_10d1cf83;
L_10d1cf7c:;
  /* 10d1cf7c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10d1cf83:;
  /* 10d1cf83 jmp 0x10d1cf8e */
  goto L_10d1cf8e;
L_10d1cf85:;
  /* 10d1cf85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1cf88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cf8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d1cf8e:;
  /* 10d1cf8e jmp 0x10d1cf25 */
  goto L_10d1cf25;
L_10d1cf90:;
  /* 10d1cf90 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cf94 je 0x10d1cfbb */
  if (C.zf) goto L_10d1cfbb;
  /* 10d1cf96 call 0x10d1d1b0 */
  push32(0x10d1cf9bu); f_10d1d1b0();
  /* 10d1cf9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1cf9e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1cfa0 mov ecx, dword ptr [0x10d3d4dc] */
  ECX = (r32((uint32_t)(0x10d3d4dc)));
  /* 10d1cfa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1cfa7 call 0x10d13b60 */
  push32(0x10d1cfacu); f_10d13b60();
  /* 10d1cfac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cfaf mov dword ptr [0x10d3d4dc], 0 */
  w32((uint32_t)(0x10d3d4dc), (0x0u));
  /* 10d1cfb9 jmp 0x10d1cfe1 */
  goto L_10d1cfe1;
L_10d1cfbb:;
  /* 10d1cfbb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cfbf je 0x10d1cfce */
  if (C.zf) goto L_10d1cfce;
  /* 10d1cfc1 call 0x10d1d1b0 */
  push32(0x10d1cfc6u); f_10d1d1b0();
  /* 10d1cfc6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10d1cfcc jmp 0x10d1cfd8 */
  goto L_10d1cfd8;
L_10d1cfce:;
  /* 10d1cfce mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10d1cfd8:;
  /* 10d1cfd8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10d1cfde mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d1cfe1:;
  /* 10d1cfe1 jmp 0x10d1cfeb */
  goto L_10d1cfeb;
L_10d1cfe3:;
  /* 10d1cfe3 call 0x10d1d1b0 */
  push32(0x10d1cfe8u); f_10d1d1b0();
  /* 10d1cfe8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d1cfeb:;
  /* 10d1cfeb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1cfef je 0x10d1d008 */
  if (C.zf) goto L_10d1d008;
  /* 10d1cff1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d1cff3 call 0x10d16b70 */
  push32(0x10d1cff8u); f_10d16b70();
  /* 10d1cff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1cffb mov eax, dword ptr [0x10d3e79c] */
  EAX = (r32((uint32_t)(0x10d3e79c)));
  /* 10d1d000 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1d003 mov dword ptr [0x10d3e79c], eax */
  w32((uint32_t)(0x10d3e79c), (EAX));
L_10d1d008:;
  /* 10d1d008 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d1d00b:;
  /* 10d1d00b mov esp, ebp */
  ESP = (EBP);
  /* 10d1d00d pop ebp */
  EBP = (pop32());
  /* 10d1d00e ret  */
  ESPCHK(0x10d1cc20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d010 @ 0x10d1d010 (403 bytes, 117 insns) */
void f_10d1d010(void) {
  FTRACE(0x10d1d010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d010 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d011 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d013 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1d019 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d01c push eax */
  push32((uint32_t)(EAX));
  /* 10d1d01d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10d1d023 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d024 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10d1d02a push edx */
  push32((uint32_t)(EDX));
  /* 10d1d02b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10d1d031 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d032 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d035 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d036 call 0x10d1d2b0 */
  push32(0x10d1d03bu); f_10d1d2b0();
  /* 10d1d03b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d03e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d040 jne 0x10d1d049 */
  if (!C.zf) goto L_10d1d049;
  /* 10d1d042 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d044 jmp 0x10d1d19f */
  goto L_10d1d19f;
L_10d1d049:;
  /* 10d1d049 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10d1d04e push 0x10d39ff8 */
  push32((uint32_t)(0x10d39ff8u));
  /* 10d1d053 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d055 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10d1d05b push edx */
  push32((uint32_t)(EDX));
  /* 10d1d05c call 0x10d15f00 */
  push32(0x10d1d061u); f_10d15f00();
  /* 10d1d061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d064 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d067 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d068 call 0x10d130d0 */
  push32(0x10d1d06du); f_10d130d0();
  /* 10d1d06d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d070 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1d073 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d077 jne 0x10d1d080 */
  if (!C.zf) goto L_10d1d080;
  /* 10d1d079 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d07b jmp 0x10d1d19f */
  goto L_10d1d19f;
L_10d1d080:;
  /* 10d1d080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d083 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d086 mov ecx, dword ptr [eax + 0x10d3d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10d3d4dc)));
  /* 10d1d08c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1d08f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d092 mov eax, dword ptr [edx*4 + 0x10d3e618] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d3e618)));
  /* 10d1d099 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1d09c push 6 */
  push32((uint32_t)(0x6u));
  /* 10d1d09e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d0a1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d0a4 add ecx, 0x10d3e668 */
  { uint32_t _a=(ECX),_b=(0x10d3e668u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d0aa push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d0ab lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10d1d0ae push edx */
  push32((uint32_t)(EDX));
  /* 10d1d0af call 0x10d199b0 */
  push32(0x10d1d0b4u); f_10d199b0();
  /* 10d1d0b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d0b7 mov eax, dword ptr [0x10d3e630] */
  EAX = (r32((uint32_t)(0x10d3e630)));
  /* 10d1d0bc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d1d0bf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10d1d0c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d0c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d0c9 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d0ca call 0x10d16080 */
  push32(0x10d1d0cfu); f_10d16080();
  /* 10d1d0cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d0d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d0d5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d0d8 mov dword ptr [ecx + 0x10d3d4dc], eax */
  w32((uint32_t)(ECX + 0x10d3d4dc), (EAX));
  /* 10d1d0de mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10d1d0e4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1d0ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d0ed mov dword ptr [eax*4 + 0x10d3e618], edx */
  w32((uint32_t)(EAX*4 + 0x10d3e618), (EDX));
  /* 10d1d0f4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10d1d0f6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10d1d0fc push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d0fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d100 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d103 add edx, 0x10d3e668 */
  { uint32_t _a=(EDX),_b=(0x10d3e668u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d109 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d10a call 0x10d199b0 */
  push32(0x10d1d10fu); f_10d199b0();
  /* 10d1d10f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d112 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d116 jne 0x10d1d123 */
  if (!C.zf) goto L_10d1d123;
  /* 10d1d118 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d1d11e mov dword ptr [0x10d3e630], eax */
  w32((uint32_t)(0x10d3e630), (EAX));
L_10d1d123:;
  /* 10d1d123 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d127 jne 0x10d1d135 */
  if (!C.zf) goto L_10d1d135;
  /* 10d1d129 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d1d12f mov dword ptr [0x10d3e634], ecx */
  w32((uint32_t)(0x10d3e634), (ECX));
L_10d1d135:;
  /* 10d1d135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d138 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d13b call dword ptr [edx + 0x10d3d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10d3d4e0))), 0x10d1d141u);
  /* 10d1d141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d143 je 0x10d1d17c */
  if (C.zf) goto L_10d1d17c;
  /* 10d1d145 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d148 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d14b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1d14e mov dword ptr [eax + 0x10d3d4dc], ecx */
  w32((uint32_t)(EAX + 0x10d3d4dc), (ECX));
  /* 10d1d154 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d156 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d159 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d15a call 0x10d13b60 */
  push32(0x10d1d15fu); f_10d13b60();
  /* 10d1d15f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d168 mov dword ptr [eax*4 + 0x10d3e618], ecx */
  w32((uint32_t)(EAX*4 + 0x10d3e618), (ECX));
  /* 10d1d16f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1d172 mov dword ptr [0x10d3e630], edx */
  w32((uint32_t)(0x10d3e630), (EDX));
  /* 10d1d178 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d17a jmp 0x10d1d19f */
  goto L_10d1d19f;
L_10d1d17c:;
  /* 10d1d17c cmp dword ptr [ebp - 0xc], 0x10d3d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10d3d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d183 je 0x10d1d193 */
  if (C.zf) goto L_10d1d193;
  /* 10d1d185 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d187 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1d18a push eax */
  push32((uint32_t)(EAX));
  /* 10d1d18b call 0x10d13b60 */
  push32(0x10d1d190u); f_10d13b60();
  /* 10d1d190 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1d193:;
  /* 10d1d193 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d196 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d199 mov eax, dword ptr [ecx + 0x10d3d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10d3d4dc)));
L_10d1d19f:;
  /* 10d1d19f mov esp, ebp */
  ESP = (EBP);
  /* 10d1d1a1 pop ebp */
  EBP = (pop32());
  /* 10d1d1a2 ret  */
  ESPCHK(0x10d1d010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1b0 @ 0x10d1d1b0 (256 bytes, 72 insns) */
void f_10d1d1b0(void) {
  FTRACE(0x10d1d1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d1b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d1b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1d1b6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d1d1bd cmp dword ptr [0x10d3d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d1c4 jne 0x10d1d1e4 */
  if (!C.zf) goto L_10d1d1e4;
  /* 10d1d1c6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10d1d1cb push 0x10d39ff8 */
  push32((uint32_t)(0x10d39ff8u));
  /* 10d1d1d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d1d2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10d1d1d7 call 0x10d130d0 */
  push32(0x10d1d1dcu); f_10d130d0();
  /* 10d1d1dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d1df mov dword ptr [0x10d3d4dc], eax */
  w32((uint32_t)(0x10d3d4dc), (EAX));
L_10d1d1e4:;
  /* 10d1d1e4 mov eax, dword ptr [0x10d3d4dc] */
  EAX = (r32((uint32_t)(0x10d3d4dc)));
  /* 10d1d1e9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d1d1ec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d1d1f3 jmp 0x10d1d1fe */
  goto L_10d1d1fe;
L_10d1d1f5:;
  /* 10d1d1f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d1f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d1fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d1d1fe:;
  /* 10d1d1fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d201 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d204 mov eax, dword ptr [edx + 0x10d3d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10d3d4dc)));
  /* 10d1d20a push eax */
  push32((uint32_t)(EAX));
  /* 10d1d20b push 0x10d3a004 */
  push32((uint32_t)(0x10d3a004u));
  /* 10d1d210 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d213 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d216 mov edx, dword ptr [ecx + 0x10d3d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10d3d4d8)));
  /* 10d1d21c push edx */
  push32((uint32_t)(EDX));
  /* 10d1d21d push 3 */
  push32((uint32_t)(0x3u));
  /* 10d1d21f mov eax, dword ptr [0x10d3d4dc] */
  EAX = (r32((uint32_t)(0x10d3d4dc)));
  /* 10d1d224 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d225 call 0x10d1d450 */
  push32(0x10d1d22au); f_10d1d450();
  /* 10d1d22a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d22d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d231 jge 0x10d1d279 */
  if ((C.sf==C.of)) goto L_10d1d279;
  /* 10d1d233 push 0x10d39ff0 */
  push32((uint32_t)(0x10d39ff0u));
  /* 10d1d238 mov ecx, dword ptr [0x10d3d4dc] */
  ECX = (r32((uint32_t)(0x10d3d4dc)));
  /* 10d1d23e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d23f call 0x10d16090 */
  push32(0x10d1d244u); f_10d16090();
  /* 10d1d244 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d247 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d24a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d24d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d250 mov eax, dword ptr [edx + 0x10d3d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10d3d4dc)));
  /* 10d1d256 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d257 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d25a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d25d mov edx, dword ptr [ecx + 0x10d3d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10d3d4dc)));
  /* 10d1d263 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d264 call 0x10d1ed60 */
  push32(0x10d1d269u); f_10d1ed60();
  /* 10d1d269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d26c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d26e je 0x10d1d277 */
  if (C.zf) goto L_10d1d277;
  /* 10d1d270 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d1d277:;
  /* 10d1d277 jmp 0x10d1d2a7 */
  goto L_10d1d2a7;
L_10d1d279:;
  /* 10d1d279 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d27d jne 0x10d1d286 */
  if (!C.zf) goto L_10d1d286;
  /* 10d1d27f mov eax, dword ptr [0x10d3d4dc] */
  EAX = (r32((uint32_t)(0x10d3d4dc)));
  /* 10d1d284 jmp 0x10d1d2ac */
  goto L_10d1d2ac;
L_10d1d286:;
  /* 10d1d286 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d288 mov eax, dword ptr [0x10d3d4dc] */
  EAX = (r32((uint32_t)(0x10d3d4dc)));
  /* 10d1d28d push eax */
  push32((uint32_t)(EAX));
  /* 10d1d28e call 0x10d13b60 */
  push32(0x10d1d293u); f_10d13b60();
  /* 10d1d293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d296 mov dword ptr [0x10d3d4dc], 0 */
  w32((uint32_t)(0x10d3d4dc), (0x0u));
  /* 10d1d2a0 mov eax, dword ptr [0x10d3d4f4] */
  EAX = (r32((uint32_t)(0x10d3d4f4)));
  /* 10d1d2a5 jmp 0x10d1d2ac */
  goto L_10d1d2ac;
L_10d1d2a7:;
  /* 10d1d2a7 jmp 0x10d1d1f5 */
  goto L_10d1d1f5;
L_10d1d2ac:;
  /* 10d1d2ac mov esp, ebp */
  ESP = (EBP);
  /* 10d1d2ae pop ebp */
  EBP = (pop32());
  /* 10d1d2af ret  */
  ESPCHK(0x10d1d1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2b0 @ 0x10d1d2b0 (388 bytes, 115 insns) */
void f_10d1d2b0(void) {
  FTRACE(0x10d1d2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d2b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d2b3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1d2b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d2bd jne 0x10d1d2c6 */
  if (!C.zf) goto L_10d1d2c6;
  /* 10d1d2bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d2c1 jmp 0x10d1d430 */
  goto L_10d1d430;
L_10d1d2c6:;
  /* 10d1d2c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d2c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1d2cc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d2cf jne 0x10d1d320 */
  if (!C.zf) goto L_10d1d320;
  /* 10d1d2d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d2d4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d1d2d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d2da jne 0x10d1d320 */
  if (!C.zf) goto L_10d1d320;
  /* 10d1d2dc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d2df mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10d1d2e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d2e5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10d1d2e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d2ed je 0x10d1d309 */
  if (C.zf) goto L_10d1d309;
  /* 10d1d2ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1d2f2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10d1d2f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1d2fa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10d1d300 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1d303 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10d1d309:;
  /* 10d1d309 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d30d je 0x10d1d318 */
  if (C.zf) goto L_10d1d318;
  /* 10d1d30f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1d312 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d1d318:;
  /* 10d1d318 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d31b jmp 0x10d1d430 */
  goto L_10d1d430;
L_10d1d320:;
  /* 10d1d320 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d323 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d324 push 0x10d3d450 */
  push32((uint32_t)(0x10d3d450u));
  /* 10d1d329 call 0x10d1ed60 */
  push32(0x10d1d32eu); f_10d1ed60();
  /* 10d1d32e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d333 je 0x10d1d3e8 */
  if (C.zf) goto L_10d1d3e8;
  /* 10d1d339 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d33c push edx */
  push32((uint32_t)(EDX));
  /* 10d1d33d push 0x10d3d3cc */
  push32((uint32_t)(0x10d3d3ccu));
  /* 10d1d342 call 0x10d1ed60 */
  push32(0x10d1d347u); f_10d1ed60();
  /* 10d1d347 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d34a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d34c je 0x10d1d3e8 */
  if (C.zf) goto L_10d1d3e8;
  /* 10d1d352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d355 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d356 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10d1d35c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d35d call 0x10d1d4a0 */
  push32(0x10d1d362u); f_10d1d4a0();
  /* 10d1d362 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d367 je 0x10d1d370 */
  if (C.zf) goto L_10d1d370;
  /* 10d1d369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d36b jmp 0x10d1d430 */
  goto L_10d1d430;
L_10d1d370:;
  /* 10d1d370 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10d1d376 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d377 push 0x10d3e640 */
  push32((uint32_t)(0x10d3e640u));
  /* 10d1d37c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10d1d382 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d383 call 0x10d1eeb0 */
  push32(0x10d1d388u); f_10d1eeb0();
  /* 10d1d388 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d38b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d38d jne 0x10d1d396 */
  if (!C.zf) goto L_10d1d396;
  /* 10d1d38f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d391 jmp 0x10d1d430 */
  goto L_10d1d430;
L_10d1d396:;
  /* 10d1d396 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1d398 mov cx, word ptr [0x10d3e644] */
  CX = (r16((uint32_t)(0x10d3e644)));
  /* 10d1d39f mov dword ptr [0x10d3e648], ecx */
  w32((uint32_t)(0x10d3e648), (ECX));
  /* 10d1d3a5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10d1d3ab push edx */
  push32((uint32_t)(EDX));
  /* 10d1d3ac push 0x10d3d450 */
  push32((uint32_t)(0x10d3d450u));
  /* 10d1d3b1 call 0x10d1d600 */
  push32(0x10d1d3b6u); f_10d1d600();
  /* 10d1d3b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d3b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d3bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1d3bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1d3c1 je 0x10d1d3d6 */
  if (C.zf) goto L_10d1d3d6;
  /* 10d1d3c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d3c6 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d3c7 push 0x10d3d3cc */
  push32((uint32_t)(0x10d3d3ccu));
  /* 10d1d3cc call 0x10d16080 */
  push32(0x10d1d3d1u); f_10d16080();
  /* 10d1d3d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d3d4 jmp 0x10d1d3e8 */
  goto L_10d1d3e8;
L_10d1d3d6:;
  /* 10d1d3d6 push 0x10d3d450 */
  push32((uint32_t)(0x10d3d450u));
  /* 10d1d3db push 0x10d3d3cc */
  push32((uint32_t)(0x10d3d3ccu));
  /* 10d1d3e0 call 0x10d16080 */
  push32(0x10d1d3e5u); f_10d16080();
  /* 10d1d3e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1d3e8:;
  /* 10d1d3e8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d3ec je 0x10d1d401 */
  if (C.zf) goto L_10d1d401;
  /* 10d1d3ee push 6 */
  push32((uint32_t)(0x6u));
  /* 10d1d3f0 push 0x10d3e640 */
  push32((uint32_t)(0x10d3e640u));
  /* 10d1d3f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1d3f8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d3f9 call 0x10d199b0 */
  push32(0x10d1d3feu); f_10d199b0();
  /* 10d1d3fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1d401:;
  /* 10d1d401 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d405 je 0x10d1d41a */
  if (C.zf) goto L_10d1d41a;
  /* 10d1d407 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d1d409 push 0x10d3e648 */
  push32((uint32_t)(0x10d3e648u));
  /* 10d1d40e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1d411 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d412 call 0x10d199b0 */
  push32(0x10d1d417u); f_10d199b0();
  /* 10d1d417 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1d41a:;
  /* 10d1d41a push 0x10d3d450 */
  push32((uint32_t)(0x10d3d450u));
  /* 10d1d41f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d422 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d423 call 0x10d16080 */
  push32(0x10d1d428u); f_10d16080();
  /* 10d1d428 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d42b mov eax, 0x10d3d450 */
  EAX = (0x10d3d450u);
L_10d1d430:;
  /* 10d1d430 mov esp, ebp */
  ESP = (EBP);
  /* 10d1d432 pop ebp */
  EBP = (pop32());
  /* 10d1d433 ret  */
  ESPCHK(0x10d1d2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d440 @ 0x10d1d440 (7 bytes, 5 insns) */
void f_10d1d440(void) {
  FTRACE(0x10d1d440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d440 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d441 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d445 pop ebp */
  EBP = (pop32());
  /* 10d1d446 ret  */
  ESPCHK(0x10d1d440u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10d1d450 (79 bytes, 28 insns) */
void f_10d1d450(void) {
  FTRACE(0x10d1d450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d450 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d451 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1d456 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d1d459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1d45c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1d463 jmp 0x10d1d46e */
  goto L_10d1d46e;
L_10d1d465:;
  /* 10d1d465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d468 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d46b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d1d46e:;
  /* 10d1d46e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d471 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d474 jge 0x10d1d494 */
  if ((C.sf==C.of)) goto L_10d1d494;
  /* 10d1d476 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d479 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d47c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1d47f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d482 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d1d485 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d489 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d48a call 0x10d16090 */
  push32(0x10d1d48fu); f_10d16090();
  /* 10d1d48f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d492 jmp 0x10d1d465 */
  goto L_10d1d465;
L_10d1d494:;
  /* 10d1d494 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1d49b mov esp, ebp */
  ESP = (EBP);
  /* 10d1d49d pop ebp */
  EBP = (pop32());
  /* 10d1d49e ret  */
  ESPCHK(0x10d1d450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4a0 @ 0x10d1d4a0 (349 bytes, 122 insns) */
void f_10d1d4a0(void) {
  FTRACE(0x10d1d4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d4a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1d4a6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10d1d4ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1d4ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d4b0 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d4b1 call 0x10d16e40 */
  push32(0x10d1d4b6u); f_10d16e40();
  /* 10d1d4b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d4b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d4bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1d4bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1d4c1 jne 0x10d1d4ca */
  if (!C.zf) goto L_10d1d4ca;
  /* 10d1d4c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d4c5 jmp 0x10d1d5f9 */
  goto L_10d1d5f9;
L_10d1d4ca:;
  /* 10d1d4ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d4cd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1d4d0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d4d3 jne 0x10d1d500 */
  if (!C.zf) goto L_10d1d500;
  /* 10d1d4d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d4d8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d1d4dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d4de je 0x10d1d500 */
  if (C.zf) goto L_10d1d500;
  /* 10d1d4e0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d4e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d4e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d4ea add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d4f0 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d4f1 call 0x10d16080 */
  push32(0x10d1d4f6u); f_10d16080();
  /* 10d1d4f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d4f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d4fb jmp 0x10d1d5f9 */
  goto L_10d1d5f9;
L_10d1d500:;
  /* 10d1d500 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1d507 jmp 0x10d1d512 */
  goto L_10d1d512;
L_10d1d509:;
  /* 10d1d509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d50c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d50f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1d512:;
  /* 10d1d512 push 0x10d3a008 */
  push32((uint32_t)(0x10d3a008u));
  /* 10d1d517 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d51a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d51b call 0x10d1edf0 */
  push32(0x10d1d520u); f_10d1edf0();
  /* 10d1d520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d523 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1d526 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d52a jne 0x10d1d534 */
  if (!C.zf) goto L_10d1d534;
  /* 10d1d52c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d52f jmp 0x10d1d5f9 */
  goto L_10d1d5f9;
L_10d1d534:;
  /* 10d1d534 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d537 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d53a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d1d53c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10d1d53f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d543 jne 0x10d1d56a */
  if (!C.zf) goto L_10d1d56a;
  /* 10d1d545 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d549 jge 0x10d1d56a */
  if ((C.sf==C.of)) goto L_10d1d56a;
  /* 10d1d54b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1d54f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d552 je 0x10d1d56a */
  if (C.zf) goto L_10d1d56a;
  /* 10d1d554 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1d557 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d558 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d55b push eax */
  push32((uint32_t)(EAX));
  /* 10d1d55c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d55f push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d560 call 0x10d168f0 */
  push32(0x10d1d565u); f_10d168f0();
  /* 10d1d565 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d568 jmp 0x10d1d5d0 */
  goto L_10d1d5d0;
L_10d1d56a:;
  /* 10d1d56a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d56e jne 0x10d1d598 */
  if (!C.zf) goto L_10d1d598;
  /* 10d1d570 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d574 jge 0x10d1d598 */
  if ((C.sf==C.of)) goto L_10d1d598;
  /* 10d1d576 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1d57a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d57d je 0x10d1d598 */
  if (C.zf) goto L_10d1d598;
  /* 10d1d57f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1d582 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d583 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d586 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d587 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d58a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d58d push edx */
  push32((uint32_t)(EDX));
  /* 10d1d58e call 0x10d168f0 */
  push32(0x10d1d593u); f_10d168f0();
  /* 10d1d593 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d596 jmp 0x10d1d5d0 */
  goto L_10d1d5d0;
L_10d1d598:;
  /* 10d1d598 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d59c jne 0x10d1d5cb */
  if (!C.zf) goto L_10d1d5cb;
  /* 10d1d59e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1d5a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d5a4 je 0x10d1d5af */
  if (C.zf) goto L_10d1d5af;
  /* 10d1d5a6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1d5aa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d5ad jne 0x10d1d5cb */
  if (!C.zf) goto L_10d1d5cb;
L_10d1d5af:;
  /* 10d1d5af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1d5b2 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d5b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d5b6 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d5b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d5ba add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d5c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d5c1 call 0x10d168f0 */
  push32(0x10d1d5c6u); f_10d168f0();
  /* 10d1d5c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d5c9 jmp 0x10d1d5d0 */
  goto L_10d1d5d0;
L_10d1d5cb:;
  /* 10d1d5cb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d5ce jmp 0x10d1d5f9 */
  goto L_10d1d5f9;
L_10d1d5d0:;
  /* 10d1d5d0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1d5d4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d5d7 jne 0x10d1d5db */
  if (!C.zf) goto L_10d1d5db;
  /* 10d1d5d9 jmp 0x10d1d5f7 */
  goto L_10d1d5f7;
L_10d1d5db:;
  /* 10d1d5db movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1d5df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d5e1 jne 0x10d1d5e5 */
  if (!C.zf) goto L_10d1d5e5;
  /* 10d1d5e3 jmp 0x10d1d5f7 */
  goto L_10d1d5f7;
L_10d1d5e5:;
  /* 10d1d5e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1d5e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d5eb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10d1d5ef mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d1d5f2 jmp 0x10d1d509 */
  goto L_10d1d509;
L_10d1d5f7:;
  /* 10d1d5f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1d5f9:;
  /* 10d1d5f9 mov esp, ebp */
  ESP = (EBP);
  /* 10d1d5fb pop ebp */
  EBP = (pop32());
  /* 10d1d5fc ret  */
  ESPCHK(0x10d1d4a0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10d1d600 (101 bytes, 36 insns) */
void f_10d1d600(void) {
  FTRACE(0x10d1d600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d600 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d601 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d603 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d606 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d60a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d60b call 0x10d16080 */
  push32(0x10d1d610u); f_10d16080();
  /* 10d1d610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d613 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d616 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10d1d61a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d61c je 0x10d1d638 */
  if (C.zf) goto L_10d1d638;
  /* 10d1d61e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d621 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d624 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d625 push 0x10d3a010 */
  push32((uint32_t)(0x10d3a010u));
  /* 10d1d62a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d62c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d62f push edx */
  push32((uint32_t)(EDX));
  /* 10d1d630 call 0x10d1d450 */
  push32(0x10d1d635u); f_10d1d450();
  /* 10d1d635 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1d638:;
  /* 10d1d638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d63b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10d1d642 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1d644 je 0x10d1d663 */
  if (C.zf) goto L_10d1d663;
  /* 10d1d646 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1d649 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d64f push edx */
  push32((uint32_t)(EDX));
  /* 10d1d650 push 0x10d3a00c */
  push32((uint32_t)(0x10d3a00cu));
  /* 10d1d655 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d657 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d65a push eax */
  push32((uint32_t)(EAX));
  /* 10d1d65b call 0x10d1d450 */
  push32(0x10d1d660u); f_10d1d450();
  /* 10d1d660 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1d663:;
  /* 10d1d663 pop ebp */
  EBP = (pop32());
  /* 10d1d664 ret  */
  ESPCHK(0x10d1d600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d670 @ 0x10d1d670 (130 bytes, 50 insns) */
void f_10d1d670(void) {
  FTRACE(0x10d1d670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d670 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d671 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d673 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d674 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1d675 push esi */
  push32((uint32_t)(ESI));
  /* 10d1d676 push edi */
  push32((uint32_t)(EDI));
  /* 10d1d677 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d1d67e:;
  /* 10d1d67e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d682 jne 0x10d1d6a2 */
  if (!C.zf) goto L_10d1d6a2;
  /* 10d1d684 push 0x10d3a020 */
  push32((uint32_t)(0x10d3a020u));
  /* 10d1d689 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1d68b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10d1d68d push 0x10d3a014 */
  push32((uint32_t)(0x10d3a014u));
  /* 10d1d692 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d694 call 0x10d12190 */
  push32(0x10d1d699u); f_10d12190();
  /* 10d1d699 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d69c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d69f jne 0x10d1d6a2 */
  if (!C.zf) goto L_10d1d6a2;
  /* 10d1d6a1 int3  */
  x86_unimpl("int3 @ 0x10d1d6a1");
L_10d1d6a2:;
  /* 10d1d6a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d6a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d6a6 jne 0x10d1d67e */
  if (!C.zf) goto L_10d1d67e;
  /* 10d1d6a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d6ab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1d6ae and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1d6b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1d6b3 je 0x10d1d6c1 */
  if (C.zf) goto L_10d1d6c1;
  /* 10d1d6b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d6b8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10d1d6bf jmp 0x10d1d6e8 */
  goto L_10d1d6e8;
L_10d1d6c1:;
  /* 10d1d6c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d6c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d6c5 call 0x10d1bee0 */
  push32(0x10d1d6cau); f_10d1bee0();
  /* 10d1d6ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d6cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d6d0 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d6d1 call 0x10d1d700 */
  push32(0x10d1d6d6u); f_10d1d700();
  /* 10d1d6d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d6d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1d6dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d6df push eax */
  push32((uint32_t)(EAX));
  /* 10d1d6e0 call 0x10d1bf50 */
  push32(0x10d1d6e5u); f_10d1bf50();
  /* 10d1d6e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1d6e8:;
  /* 10d1d6e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d6eb pop edi */
  EDI = (pop32());
  /* 10d1d6ec pop esi */
  ESI = (pop32());
  /* 10d1d6ed pop ebx */
  EBX = (pop32());
  /* 10d1d6ee mov esp, ebp */
  ESP = (EBP);
  /* 10d1d6f0 pop ebp */
  EBP = (pop32());
  /* 10d1d6f1 ret  */
  ESPCHK(0x10d1d670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d700 @ 0x10d1d700 (190 bytes, 67 insns) */
void f_10d1d700(void) {
  FTRACE(0x10d1d700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d700 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d701 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1d706 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1d707 push esi */
  push32((uint32_t)(ESI));
  /* 10d1d708 push edi */
  push32((uint32_t)(EDI));
  /* 10d1d709 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d1d710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d713 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d1d716:;
  /* 10d1d716 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d71a jne 0x10d1d73a */
  if (!C.zf) goto L_10d1d73a;
  /* 10d1d71c push 0x10d39ec0 */
  push32((uint32_t)(0x10d39ec0u));
  /* 10d1d721 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1d723 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10d1d725 push 0x10d3a014 */
  push32((uint32_t)(0x10d3a014u));
  /* 10d1d72a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d72c call 0x10d12190 */
  push32(0x10d1d731u); f_10d12190();
  /* 10d1d731 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d734 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d737 jne 0x10d1d73a */
  if (!C.zf) goto L_10d1d73a;
  /* 10d1d739 int3  */
  x86_unimpl("int3 @ 0x10d1d739");
L_10d1d73a:;
  /* 10d1d73a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1d73c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1d73e jne 0x10d1d716 */
  if (!C.zf) goto L_10d1d716;
  /* 10d1d740 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d743 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d1d746 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d74b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d74d je 0x10d1d7aa */
  if (C.zf) goto L_10d1d7aa;
  /* 10d1d74f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d752 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d753 call 0x10d1ca00 */
  push32(0x10d1d758u); f_10d1ca00();
  /* 10d1d758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d75b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1d75e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d761 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d762 call 0x10d1fd80 */
  push32(0x10d1d767u); f_10d1fd80();
  /* 10d1d767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d76a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d76d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1d770 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d771 call 0x10d1fc50 */
  push32(0x10d1d776u); f_10d1fc50();
  /* 10d1d776 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d77b jge 0x10d1d786 */
  if ((C.sf==C.of)) goto L_10d1d786;
  /* 10d1d77d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d1d784 jmp 0x10d1d7aa */
  goto L_10d1d7aa;
L_10d1d786:;
  /* 10d1d786 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d789 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d78d je 0x10d1d7aa */
  if (C.zf) goto L_10d1d7aa;
  /* 10d1d78f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d794 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d1d797 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d798 call 0x10d13b60 */
  push32(0x10d1d79du); f_10d13b60();
  /* 10d1d79d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d7a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d7a3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10d1d7aa:;
  /* 10d1d7aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1d7ad mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10d1d7b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d7b7 pop edi */
  EDI = (pop32());
  /* 10d1d7b8 pop esi */
  ESI = (pop32());
  /* 10d1d7b9 pop ebx */
  EBX = (pop32());
  /* 10d1d7ba mov esp, ebp */
  ESP = (EBP);
  /* 10d1d7bc pop ebp */
  EBP = (pop32());
  /* 10d1d7bd ret  */
  ESPCHK(0x10d1d700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x10d1d7c0 (210 bytes, 63 insns) */
void f_10d1d7c0(void) {
  FTRACE(0x10d1d7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d7c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d7c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d7c7 cmp eax, dword ptr [0x10d3ff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d7cd jae 0x10d1d7f1 */
  if (!C.cf) goto L_10d1d7f1;
  /* 10d1d7cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d7d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1d7d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d7d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1d7db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d7de mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1d7e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d1d7ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1d7ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1d7ef jne 0x10d1d804 */
  if (!C.zf) goto L_10d1d804;
L_10d1d7f1:;
  /* 10d1d7f1 call 0x10d1afa0 */
  push32(0x10d1d7f6u); f_10d1afa0();
  /* 10d1d7f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1d7fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d7ff jmp 0x10d1d88e */
  goto L_10d1d88e;
L_10d1d804:;
  /* 10d1d804 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d807 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d808 call 0x10d1c7c0 */
  push32(0x10d1d80du); f_10d1c7c0();
  /* 10d1d80d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d813 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1d816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d819 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1d81c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1d81f mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1d826 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10d1d82b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d82e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d830 je 0x10d1d86d */
  if (C.zf) goto L_10d1d86d;
  /* 10d1d832 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d835 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d836 call 0x10d1c640 */
  push32(0x10d1d83bu); f_10d1c640();
  /* 10d1d83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d83e push eax */
  push32((uint32_t)(EAX));
  /* 10d1d83f call dword ptr [0x10d40270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40270))), 0x10d1d845u);
  /* 10d1d845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d847 jne 0x10d1d854 */
  if (!C.zf) goto L_10d1d854;
  /* 10d1d849 call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d1d84fu);
  /* 10d1d84f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1d852 jmp 0x10d1d85b */
  goto L_10d1d85b;
L_10d1d854:;
  /* 10d1d854 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d1d85b:;
  /* 10d1d85b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d85f jne 0x10d1d863 */
  if (!C.zf) goto L_10d1d863;
  /* 10d1d861 jmp 0x10d1d87f */
  goto L_10d1d87f;
L_10d1d863:;
  /* 10d1d863 call 0x10d1afb0 */
  push32(0x10d1d868u); f_10d1afb0();
  /* 10d1d868 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d86b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d1d86d:;
  /* 10d1d86d call 0x10d1afa0 */
  push32(0x10d1d872u); f_10d1afa0();
  /* 10d1d872 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1d878 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d1d87f:;
  /* 10d1d87f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d882 push eax */
  push32((uint32_t)(EAX));
  /* 10d1d883 call 0x10d1c850 */
  push32(0x10d1d888u); f_10d1c850();
  /* 10d1d888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d88b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d1d88e:;
  /* 10d1d88e mov esp, ebp */
  ESP = (EBP);
  /* 10d1d890 pop ebp */
  EBP = (pop32());
  /* 10d1d891 ret  */
  ESPCHK(0x10d1d7c0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10d1d8a0 (219 bytes, 64 insns) */
void f_10d1d8a0(void) {
  FTRACE(0x10d1d8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d8a4 cmp dword ptr [0x10d3e62c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e62c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d8ab je 0x10d1d941 */
  if (C.zf) goto L_10d1d941;
  /* 10d1d8b1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d1d8b3 push 0x10d3a030 */
  push32((uint32_t)(0x10d3a030u));
  /* 10d1d8b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d8ba push 0xac */
  push32((uint32_t)(0xacu));
  /* 10d1d8bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1d8c1 call 0x10d134e0 */
  push32(0x10d1d8c6u); f_10d134e0();
  /* 10d1d8c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d8c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1d8cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d8d0 jne 0x10d1d8dc */
  if (!C.zf) goto L_10d1d8dc;
  /* 10d1d8d2 mov eax, 1 */
  EAX = (0x1u);
  /* 10d1d8d7 jmp 0x10d1d977 */
  goto L_10d1d977;
L_10d1d8dc:;
  /* 10d1d8dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d8df push eax */
  push32((uint32_t)(EAX));
  /* 10d1d8e0 call 0x10d1d980 */
  push32(0x10d1d8e5u); f_10d1d980();
  /* 10d1d8e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d8e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1d8ea je 0x10d1d90d */
  if (C.zf) goto L_10d1d90d;
  /* 10d1d8ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d8ef push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d8f0 call 0x10d1df10 */
  push32(0x10d1d8f5u); f_10d1df10();
  /* 10d1d8f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d8f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d8fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d8fd push edx */
  push32((uint32_t)(EDX));
  /* 10d1d8fe call 0x10d13b60 */
  push32(0x10d1d903u); f_10d13b60();
  /* 10d1d903 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d906 mov eax, 1 */
  EAX = (0x1u);
  /* 10d1d90b jmp 0x10d1d977 */
  goto L_10d1d977;
L_10d1d90d:;
  /* 10d1d90d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d910 mov dword ptr [0x10d3dc98], eax */
  w32((uint32_t)(0x10d3dc98), (EAX));
  /* 10d1d915 mov ecx, dword ptr [0x10d3e64c] */
  ECX = (r32((uint32_t)(0x10d3e64c)));
  /* 10d1d91b push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d91c call 0x10d1df10 */
  push32(0x10d1d921u); f_10d1df10();
  /* 10d1d921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d924 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d926 mov edx, dword ptr [0x10d3e64c] */
  EDX = (r32((uint32_t)(0x10d3e64c)));
  /* 10d1d92c push edx */
  push32((uint32_t)(EDX));
  /* 10d1d92d call 0x10d13b60 */
  push32(0x10d1d932u); f_10d13b60();
  /* 10d1d932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d938 mov dword ptr [0x10d3e64c], eax */
  w32((uint32_t)(0x10d3e64c), (EAX));
  /* 10d1d93d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d93f jmp 0x10d1d977 */
  goto L_10d1d977;
L_10d1d941:;
  /* 10d1d941 mov dword ptr [0x10d3dc98], 0x10d3dca0 */
  w32((uint32_t)(0x10d3dc98), (0x10d3dca0u));
  /* 10d1d94b mov ecx, dword ptr [0x10d3e64c] */
  ECX = (r32((uint32_t)(0x10d3e64c)));
  /* 10d1d951 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1d952 call 0x10d1df10 */
  push32(0x10d1d957u); f_10d1df10();
  /* 10d1d957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d95a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1d95c mov edx, dword ptr [0x10d3e64c] */
  EDX = (r32((uint32_t)(0x10d3e64c)));
  /* 10d1d962 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d963 call 0x10d13b60 */
  push32(0x10d1d968u); f_10d13b60();
  /* 10d1d968 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d96b mov dword ptr [0x10d3e64c], 0 */
  w32((uint32_t)(0x10d3e64c), (0x0u));
  /* 10d1d975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1d977:;
  /* 10d1d977 mov esp, ebp */
  ESP = (EBP);
  /* 10d1d979 pop ebp */
  EBP = (pop32());
  /* 10d1d97a ret  */
  ESPCHK(0x10d1d8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d980 @ 0x10d1d980 (1423 bytes, 533 insns) */
void f_10d1d980(void) {
  FTRACE(0x10d1d980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1d980 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1d981 mov ebp, esp */
  EBP = (ESP);
  /* 10d1d983 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1d986 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d1d98d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d98f mov ax, word ptr [0x10d3e686] */
  AX = (r16((uint32_t)(0x10d3e686)));
  /* 10d1d995 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1d998 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1d99a mov cx, word ptr [0x10d3e688] */
  CX = (r16((uint32_t)(0x10d3e688)));
  /* 10d1d9a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1d9a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1d9a8 jne 0x10d1d9b2 */
  if (!C.zf) goto L_10d1d9b2;
  /* 10d1d9aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1d9ad jmp 0x10d1df0b */
  goto L_10d1df0b;
L_10d1d9b2:;
  /* 10d1d9b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d9b5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d9b8 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d9b9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10d1d9bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d9be push eax */
  push32((uint32_t)(EAX));
  /* 10d1d9bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1d9c1 call 0x10d21290 */
  push32(0x10d1d9c6u); f_10d21290();
  /* 10d1d9c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d9c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1d9cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1d9ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1d9d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d9d4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d9d7 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d9d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10d1d9da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d9dd push eax */
  push32((uint32_t)(EAX));
  /* 10d1d9de push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1d9e0 call 0x10d21290 */
  push32(0x10d1d9e5u); f_10d21290();
  /* 10d1d9e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d9e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1d9eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1d9ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1d9f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1d9f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1d9f6 push edx */
  push32((uint32_t)(EDX));
  /* 10d1d9f7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10d1d9f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1d9fc push eax */
  push32((uint32_t)(EAX));
  /* 10d1d9fd push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1d9ff call 0x10d21290 */
  push32(0x10d1da04u); f_10d21290();
  /* 10d1da04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1da0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1da0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1da0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1da12 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da15 push edx */
  push32((uint32_t)(EDX));
  /* 10d1da16 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10d1da18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1da1b push eax */
  push32((uint32_t)(EAX));
  /* 10d1da1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1da1e call 0x10d21290 */
  push32(0x10d1da23u); f_10d21290();
  /* 10d1da23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1da29 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1da2b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1da2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1da31 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da34 push edx */
  push32((uint32_t)(EDX));
  /* 10d1da35 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10d1da37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1da3a push eax */
  push32((uint32_t)(EAX));
  /* 10d1da3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1da3d call 0x10d21290 */
  push32(0x10d1da42u); f_10d21290();
  /* 10d1da42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1da48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1da4a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1da4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1da50 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da53 push edx */
  push32((uint32_t)(EDX));
  /* 10d1da54 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10d1da56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1da59 push eax */
  push32((uint32_t)(EAX));
  /* 10d1da5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1da5c call 0x10d21290 */
  push32(0x10d1da61u); f_10d21290();
  /* 10d1da61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1da67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1da69 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1da6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1da6f push edx */
  push32((uint32_t)(EDX));
  /* 10d1da70 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10d1da72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1da75 push eax */
  push32((uint32_t)(EAX));
  /* 10d1da76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1da78 call 0x10d21290 */
  push32(0x10d1da7du); f_10d21290();
  /* 10d1da7d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1da83 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1da85 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1da88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1da8b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da8e push edx */
  push32((uint32_t)(EDX));
  /* 10d1da8f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10d1da91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1da94 push eax */
  push32((uint32_t)(EAX));
  /* 10d1da95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1da97 call 0x10d21290 */
  push32(0x10d1da9cu); f_10d21290();
  /* 10d1da9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1da9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1daa2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1daa4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1daa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1daaa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1daad push edx */
  push32((uint32_t)(EDX));
  /* 10d1daae push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10d1dab0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dab3 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dab4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dab6 call 0x10d21290 */
  push32(0x10d1dabbu); f_10d21290();
  /* 10d1dabb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dabe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dac1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dac3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dac6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dac9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dacc push edx */
  push32((uint32_t)(EDX));
  /* 10d1dacd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10d1dacf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dad2 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dad5 call 0x10d21290 */
  push32(0x10d1dadau); f_10d21290();
  /* 10d1dada add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dadd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dae0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dae2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dae5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dae8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1daeb push edx */
  push32((uint32_t)(EDX));
  /* 10d1daec push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10d1daee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1daf1 push eax */
  push32((uint32_t)(EAX));
  /* 10d1daf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1daf4 call 0x10d21290 */
  push32(0x10d1daf9u); f_10d21290();
  /* 10d1daf9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dafc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1daff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1db01 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1db04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1db07 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db0a push edx */
  push32((uint32_t)(EDX));
  /* 10d1db0b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10d1db0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1db10 push eax */
  push32((uint32_t)(EAX));
  /* 10d1db11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1db13 call 0x10d21290 */
  push32(0x10d1db18u); f_10d21290();
  /* 10d1db18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1db1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1db20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1db23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1db26 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db29 push edx */
  push32((uint32_t)(EDX));
  /* 10d1db2a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10d1db2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1db2f push eax */
  push32((uint32_t)(EAX));
  /* 10d1db30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1db32 call 0x10d21290 */
  push32(0x10d1db37u); f_10d21290();
  /* 10d1db37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db3a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1db3d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1db3f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1db42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1db45 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db48 push edx */
  push32((uint32_t)(EDX));
  /* 10d1db49 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d1db4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1db4e push eax */
  push32((uint32_t)(EAX));
  /* 10d1db4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1db51 call 0x10d21290 */
  push32(0x10d1db56u); f_10d21290();
  /* 10d1db56 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1db5c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1db5e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1db61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1db64 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db67 push edx */
  push32((uint32_t)(EDX));
  /* 10d1db68 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10d1db6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1db6d push eax */
  push32((uint32_t)(EAX));
  /* 10d1db6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1db70 call 0x10d21290 */
  push32(0x10d1db75u); f_10d21290();
  /* 10d1db75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db78 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1db7b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1db7d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1db80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1db83 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db86 push edx */
  push32((uint32_t)(EDX));
  /* 10d1db87 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10d1db89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1db8c push eax */
  push32((uint32_t)(EAX));
  /* 10d1db8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1db8f call 0x10d21290 */
  push32(0x10d1db94u); f_10d21290();
  /* 10d1db94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1db97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1db9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1db9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1db9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dba2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dba5 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dba6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10d1dba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dbab push eax */
  push32((uint32_t)(EAX));
  /* 10d1dbac push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dbae call 0x10d21290 */
  push32(0x10d1dbb3u); f_10d21290();
  /* 10d1dbb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dbb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dbb9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dbbb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dbbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dbc1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dbc4 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dbc5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10d1dbc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dbca push eax */
  push32((uint32_t)(EAX));
  /* 10d1dbcb push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dbcd call 0x10d21290 */
  push32(0x10d1dbd2u); f_10d21290();
  /* 10d1dbd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dbd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dbd8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dbda mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dbdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dbe0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dbe3 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dbe4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d1dbe6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dbe9 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dbea push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dbec call 0x10d21290 */
  push32(0x10d1dbf1u); f_10d21290();
  /* 10d1dbf1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dbf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dbf7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dbf9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dbfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dbff add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc02 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dc03 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10d1dc05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dc08 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dc09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dc0b call 0x10d21290 */
  push32(0x10d1dc10u); f_10d21290();
  /* 10d1dc10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc13 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dc16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dc18 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dc1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dc1e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc21 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dc22 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d1dc24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dc27 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dc28 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dc2a call 0x10d21290 */
  push32(0x10d1dc2fu); f_10d21290();
  /* 10d1dc2f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc32 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dc35 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dc37 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dc3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dc3d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc40 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dc41 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10d1dc43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dc46 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dc47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dc49 call 0x10d21290 */
  push32(0x10d1dc4eu); f_10d21290();
  /* 10d1dc4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dc54 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dc56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dc59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dc5c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc5f push edx */
  push32((uint32_t)(EDX));
  /* 10d1dc60 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10d1dc62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dc65 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dc66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dc68 call 0x10d21290 */
  push32(0x10d1dc6du); f_10d21290();
  /* 10d1dc6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dc73 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dc75 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dc78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dc7b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc7e push edx */
  push32((uint32_t)(EDX));
  /* 10d1dc7f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10d1dc81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dc84 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dc85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dc87 call 0x10d21290 */
  push32(0x10d1dc8cu); f_10d21290();
  /* 10d1dc8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dc92 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dc94 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dc97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dc9a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dc9d push edx */
  push32((uint32_t)(EDX));
  /* 10d1dc9e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10d1dca0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dca3 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dca4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dca6 call 0x10d21290 */
  push32(0x10d1dcabu); f_10d21290();
  /* 10d1dcab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dcae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dcb1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dcb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dcb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dcb9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dcbc push edx */
  push32((uint32_t)(EDX));
  /* 10d1dcbd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10d1dcbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dcc2 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dcc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dcc5 call 0x10d21290 */
  push32(0x10d1dccau); f_10d21290();
  /* 10d1dcca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dccd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dcd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dcd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dcd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dcd8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dcdb push edx */
  push32((uint32_t)(EDX));
  /* 10d1dcdc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10d1dcde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dce1 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dce2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dce4 call 0x10d21290 */
  push32(0x10d1dce9u); f_10d21290();
  /* 10d1dce9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dcec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dcef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dcf1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dcf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dcf7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dcfa push edx */
  push32((uint32_t)(EDX));
  /* 10d1dcfb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10d1dcfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dd00 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dd01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dd03 call 0x10d21290 */
  push32(0x10d1dd08u); f_10d21290();
  /* 10d1dd08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dd0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dd10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dd13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dd16 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd19 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dd1a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10d1dd1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dd1f push eax */
  push32((uint32_t)(EAX));
  /* 10d1dd20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dd22 call 0x10d21290 */
  push32(0x10d1dd27u); f_10d21290();
  /* 10d1dd27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd2a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dd2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dd2f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dd32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dd35 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd38 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dd39 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10d1dd3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dd3e push eax */
  push32((uint32_t)(EAX));
  /* 10d1dd3f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dd41 call 0x10d21290 */
  push32(0x10d1dd46u); f_10d21290();
  /* 10d1dd46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dd4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dd4e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dd51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dd54 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd57 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dd58 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10d1dd5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dd5d push eax */
  push32((uint32_t)(EAX));
  /* 10d1dd5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dd60 call 0x10d21290 */
  push32(0x10d1dd65u); f_10d21290();
  /* 10d1dd65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd68 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dd6b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dd6d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dd70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dd73 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd76 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dd77 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10d1dd79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dd7c push eax */
  push32((uint32_t)(EAX));
  /* 10d1dd7d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dd7f call 0x10d21290 */
  push32(0x10d1dd84u); f_10d21290();
  /* 10d1dd84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd87 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dd8a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dd8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dd8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dd92 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dd98 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dd99 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10d1dd9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dd9e push eax */
  push32((uint32_t)(EAX));
  /* 10d1dd9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dda1 call 0x10d21290 */
  push32(0x10d1dda6u); f_10d21290();
  /* 10d1dda6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dda9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1ddac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ddae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1ddb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ddb4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ddba push edx */
  push32((uint32_t)(EDX));
  /* 10d1ddbb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10d1ddbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1ddc0 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ddc1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1ddc3 call 0x10d21290 */
  push32(0x10d1ddc8u); f_10d21290();
  /* 10d1ddc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ddcb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1ddce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ddd0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1ddd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ddd6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dddc push edx */
  push32((uint32_t)(EDX));
  /* 10d1dddd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d1dddf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1dde2 push eax */
  push32((uint32_t)(EAX));
  /* 10d1dde3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1dde5 call 0x10d21290 */
  push32(0x10d1ddeau); f_10d21290();
  /* 10d1ddea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dded mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1ddf0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ddf2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1ddf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ddf8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ddfe push edx */
  push32((uint32_t)(EDX));
  /* 10d1ddff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10d1de01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1de04 push eax */
  push32((uint32_t)(EAX));
  /* 10d1de05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1de07 call 0x10d21290 */
  push32(0x10d1de0cu); f_10d21290();
  /* 10d1de0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1de0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1de12 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1de14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1de17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1de1a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1de20 push edx */
  push32((uint32_t)(EDX));
  /* 10d1de21 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10d1de23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1de26 push eax */
  push32((uint32_t)(EAX));
  /* 10d1de27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1de29 call 0x10d21290 */
  push32(0x10d1de2eu); f_10d21290();
  /* 10d1de2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1de31 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1de34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1de36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1de39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1de3c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1de42 push edx */
  push32((uint32_t)(EDX));
  /* 10d1de43 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10d1de45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1de48 push eax */
  push32((uint32_t)(EAX));
  /* 10d1de49 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1de4b call 0x10d21290 */
  push32(0x10d1de50u); f_10d21290();
  /* 10d1de50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1de53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1de56 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1de58 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1de5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1de5e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1de64 push edx */
  push32((uint32_t)(EDX));
  /* 10d1de65 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10d1de67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1de6a push eax */
  push32((uint32_t)(EAX));
  /* 10d1de6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1de6d call 0x10d21290 */
  push32(0x10d1de72u); f_10d21290();
  /* 10d1de72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1de75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1de78 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1de7a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1de7d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1de80 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1de86 push edx */
  push32((uint32_t)(EDX));
  /* 10d1de87 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10d1de89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1de8c push eax */
  push32((uint32_t)(EAX));
  /* 10d1de8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1de8f call 0x10d21290 */
  push32(0x10d1de94u); f_10d21290();
  /* 10d1de94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1de97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1de9a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1de9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1de9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dea2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dea8 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dea9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10d1deab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1deae push eax */
  push32((uint32_t)(EAX));
  /* 10d1deaf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1deb1 call 0x10d21290 */
  push32(0x10d1deb6u); f_10d21290();
  /* 10d1deb6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1deb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1debc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1debe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dec1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dec4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1deca push edx */
  push32((uint32_t)(EDX));
  /* 10d1decb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d1decd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1ded0 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ded1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1ded3 call 0x10d21290 */
  push32(0x10d1ded8u); f_10d21290();
  /* 10d1ded8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dedb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1dede or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1dee0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1dee3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dee6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1deec push edx */
  push32((uint32_t)(EDX));
  /* 10d1deed push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10d1def2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1def5 push eax */
  push32((uint32_t)(EAX));
  /* 10d1def6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1def8 call 0x10d21290 */
  push32(0x10d1defdu); f_10d21290();
  /* 10d1defd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1df00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1df03 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1df05 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d1df08 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10d1df0b:;
  /* 10d1df0b mov esp, ebp */
  ESP = (EBP);
  /* 10d1df0d pop ebp */
  EBP = (pop32());
  /* 10d1df0e ret  */
  ESPCHK(0x10d1d980u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10d1df10 (779 bytes, 265 insns) */
void f_10d1df10(void) {
  FTRACE(0x10d1df10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1df10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1df11 mov ebp, esp */
  EBP = (ESP);
  /* 10d1df13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1df17 jne 0x10d1df1e */
  if (!C.zf) goto L_10d1df1e;
  /* 10d1df19 jmp 0x10d1e219 */
  goto L_10d1e219;
L_10d1df1e:;
  /* 10d1df1e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1df20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1df23 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1df26 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1df27 call 0x10d13b60 */
  push32(0x10d1df2cu); f_10d13b60();
  /* 10d1df2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1df2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1df31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1df34 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d1df37 push eax */
  push32((uint32_t)(EAX));
  /* 10d1df38 call 0x10d13b60 */
  push32(0x10d1df3du); f_10d13b60();
  /* 10d1df3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1df40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1df42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1df45 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1df48 push edx */
  push32((uint32_t)(EDX));
  /* 10d1df49 call 0x10d13b60 */
  push32(0x10d1df4eu); f_10d13b60();
  /* 10d1df4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1df51 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1df53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1df56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1df59 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1df5a call 0x10d13b60 */
  push32(0x10d1df5fu); f_10d13b60();
  /* 10d1df5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1df62 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1df64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1df67 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d1df6a push eax */
  push32((uint32_t)(EAX));
  /* 10d1df6b call 0x10d13b60 */
  push32(0x10d1df70u); f_10d13b60();
  /* 10d1df70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1df73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1df75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1df78 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d1df7b push edx */
  push32((uint32_t)(EDX));
  /* 10d1df7c call 0x10d13b60 */
  push32(0x10d1df81u); f_10d13b60();
  /* 10d1df81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1df84 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1df86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1df89 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1df8b push ecx */
  push32((uint32_t)(ECX));
  /* 10d1df8c call 0x10d13b60 */
  push32(0x10d1df91u); f_10d13b60();
  /* 10d1df91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1df94 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1df96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1df99 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10d1df9c push eax */
  push32((uint32_t)(EAX));
  /* 10d1df9d call 0x10d13b60 */
  push32(0x10d1dfa2u); f_10d13b60();
  /* 10d1dfa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dfa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1dfa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dfaa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10d1dfad push edx */
  push32((uint32_t)(EDX));
  /* 10d1dfae call 0x10d13b60 */
  push32(0x10d1dfb3u); f_10d13b60();
  /* 10d1dfb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dfb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1dfb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dfbb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10d1dfbe push ecx */
  push32((uint32_t)(ECX));
  /* 10d1dfbf call 0x10d13b60 */
  push32(0x10d1dfc4u); f_10d13b60();
  /* 10d1dfc4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dfc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1dfc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dfcc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10d1dfcf push eax */
  push32((uint32_t)(EAX));
  /* 10d1dfd0 call 0x10d13b60 */
  push32(0x10d1dfd5u); f_10d13b60();
  /* 10d1dfd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dfd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1dfda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dfdd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10d1dfe0 push edx */
  push32((uint32_t)(EDX));
  /* 10d1dfe1 call 0x10d13b60 */
  push32(0x10d1dfe6u); f_10d13b60();
  /* 10d1dfe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dfe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1dfeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dfee mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10d1dff1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1dff2 call 0x10d13b60 */
  push32(0x10d1dff7u); f_10d13b60();
  /* 10d1dff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1dffa push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1dffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1dfff mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d1e002 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e003 call 0x10d13b60 */
  push32(0x10d1e008u); f_10d13b60();
  /* 10d1e008 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e00b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e00d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e010 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10d1e013 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e014 call 0x10d13b60 */
  push32(0x10d1e019u); f_10d13b60();
  /* 10d1e019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e01c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e01e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e021 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10d1e024 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e025 call 0x10d13b60 */
  push32(0x10d1e02au); f_10d13b60();
  /* 10d1e02a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e02d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e02f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e032 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10d1e035 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e036 call 0x10d13b60 */
  push32(0x10d1e03bu); f_10d13b60();
  /* 10d1e03b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e03e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e040 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e043 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10d1e046 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e047 call 0x10d13b60 */
  push32(0x10d1e04cu); f_10d13b60();
  /* 10d1e04c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e04f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e051 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e054 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10d1e057 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e058 call 0x10d13b60 */
  push32(0x10d1e05du); f_10d13b60();
  /* 10d1e05d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e060 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e062 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e065 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10d1e068 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e069 call 0x10d13b60 */
  push32(0x10d1e06eu); f_10d13b60();
  /* 10d1e06e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e071 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e076 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d1e079 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e07a call 0x10d13b60 */
  push32(0x10d1e07fu); f_10d13b60();
  /* 10d1e07f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e082 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e084 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e087 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10d1e08a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e08b call 0x10d13b60 */
  push32(0x10d1e090u); f_10d13b60();
  /* 10d1e090 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e093 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e098 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10d1e09b push eax */
  push32((uint32_t)(EAX));
  /* 10d1e09c call 0x10d13b60 */
  push32(0x10d1e0a1u); f_10d13b60();
  /* 10d1e0a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e0a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e0a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e0a9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10d1e0ac push edx */
  push32((uint32_t)(EDX));
  /* 10d1e0ad call 0x10d13b60 */
  push32(0x10d1e0b2u); f_10d13b60();
  /* 10d1e0b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e0b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e0b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e0ba mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10d1e0bd push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e0be call 0x10d13b60 */
  push32(0x10d1e0c3u); f_10d13b60();
  /* 10d1e0c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e0c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e0c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e0cb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10d1e0ce push eax */
  push32((uint32_t)(EAX));
  /* 10d1e0cf call 0x10d13b60 */
  push32(0x10d1e0d4u); f_10d13b60();
  /* 10d1e0d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e0d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e0d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e0dc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10d1e0df push edx */
  push32((uint32_t)(EDX));
  /* 10d1e0e0 call 0x10d13b60 */
  push32(0x10d1e0e5u); f_10d13b60();
  /* 10d1e0e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e0e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e0ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e0ed mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10d1e0f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e0f1 call 0x10d13b60 */
  push32(0x10d1e0f6u); f_10d13b60();
  /* 10d1e0f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e0f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e0fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e0fe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10d1e101 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e102 call 0x10d13b60 */
  push32(0x10d1e107u); f_10d13b60();
  /* 10d1e107 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e10a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e10c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e10f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10d1e112 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e113 call 0x10d13b60 */
  push32(0x10d1e118u); f_10d13b60();
  /* 10d1e118 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e11b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e11d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e120 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10d1e123 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e124 call 0x10d13b60 */
  push32(0x10d1e129u); f_10d13b60();
  /* 10d1e129 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e12c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e12e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e131 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10d1e134 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e135 call 0x10d13b60 */
  push32(0x10d1e13au); f_10d13b60();
  /* 10d1e13a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e13d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e13f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e142 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10d1e148 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e149 call 0x10d13b60 */
  push32(0x10d1e14eu); f_10d13b60();
  /* 10d1e14e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e151 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e156 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10d1e15c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e15d call 0x10d13b60 */
  push32(0x10d1e162u); f_10d13b60();
  /* 10d1e162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e165 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e167 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e16a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10d1e170 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e171 call 0x10d13b60 */
  push32(0x10d1e176u); f_10d13b60();
  /* 10d1e176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e179 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e17b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e17e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10d1e184 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e185 call 0x10d13b60 */
  push32(0x10d1e18au); f_10d13b60();
  /* 10d1e18a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e18d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e18f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e192 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10d1e198 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e199 call 0x10d13b60 */
  push32(0x10d1e19eu); f_10d13b60();
  /* 10d1e19e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e1a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e1a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e1a6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10d1e1ac push eax */
  push32((uint32_t)(EAX));
  /* 10d1e1ad call 0x10d13b60 */
  push32(0x10d1e1b2u); f_10d13b60();
  /* 10d1e1b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e1b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e1b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e1ba mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10d1e1c0 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e1c1 call 0x10d13b60 */
  push32(0x10d1e1c6u); f_10d13b60();
  /* 10d1e1c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e1c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e1cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e1ce mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10d1e1d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e1d5 call 0x10d13b60 */
  push32(0x10d1e1dau); f_10d13b60();
  /* 10d1e1da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e1dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e1df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e1e2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10d1e1e8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e1e9 call 0x10d13b60 */
  push32(0x10d1e1eeu); f_10d13b60();
  /* 10d1e1ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e1f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e1f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e1f6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10d1e1fc push edx */
  push32((uint32_t)(EDX));
  /* 10d1e1fd call 0x10d13b60 */
  push32(0x10d1e202u); f_10d13b60();
  /* 10d1e202 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e205 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e207 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e20a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10d1e210 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e211 call 0x10d13b60 */
  push32(0x10d1e216u); f_10d13b60();
  /* 10d1e216 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1e219:;
  /* 10d1e219 pop ebp */
  EBP = (pop32());
  /* 10d1e21a ret  */
  ESPCHK(0x10d1df10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e220 @ 0x10d1e220 (678 bytes, 180 insns) */
void f_10d1e220(void) {
  FTRACE(0x10d1e220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1e220 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1e221 mov ebp, esp */
  EBP = (ESP);
  /* 10d1e223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1e226 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1e22d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e22f mov ax, word ptr [0x10d3e682] */
  AX = (r16((uint32_t)(0x10d3e682)));
  /* 10d1e235 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1e238 cmp dword ptr [0x10d3e628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e23f je 0x10d1e39a */
  if (C.zf) goto L_10d1e39a;
  /* 10d1e245 push 0x10d3e650 */
  push32((uint32_t)(0x10d3e650u));
  /* 10d1e24a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10d1e24c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e24f push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e250 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e252 call 0x10d21290 */
  push32(0x10d1e257u); f_10d21290();
  /* 10d1e257 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e25a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e25d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1e25f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d1e262 push 0x10d3e654 */
  push32((uint32_t)(0x10d3e654u));
  /* 10d1e267 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10d1e269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e26c push eax */
  push32((uint32_t)(EAX));
  /* 10d1e26d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e26f call 0x10d21290 */
  push32(0x10d1e274u); f_10d21290();
  /* 10d1e274 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e277 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e27a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e27c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e27f push 0x10d3e658 */
  push32((uint32_t)(0x10d3e658u));
  /* 10d1e284 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10d1e286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e289 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e28a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e28c call 0x10d21290 */
  push32(0x10d1e291u); f_10d21290();
  /* 10d1e291 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e294 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e297 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e299 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e29c mov edx, dword ptr [0x10d3e658] */
  EDX = (r32((uint32_t)(0x10d3e658)));
  /* 10d1e2a2 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e2a3 call 0x10d1e4d0 */
  push32(0x10d1e2a8u); f_10d1e4d0();
  /* 10d1e2a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e2ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e2af je 0x10d1e309 */
  if (C.zf) goto L_10d1e309;
  /* 10d1e2b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e2b3 mov eax, dword ptr [0x10d3e650] */
  EAX = (r32((uint32_t)(0x10d3e650)));
  /* 10d1e2b8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e2b9 call 0x10d13b60 */
  push32(0x10d1e2beu); f_10d13b60();
  /* 10d1e2be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e2c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e2c3 mov ecx, dword ptr [0x10d3e654] */
  ECX = (r32((uint32_t)(0x10d3e654)));
  /* 10d1e2c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e2ca call 0x10d13b60 */
  push32(0x10d1e2cfu); f_10d13b60();
  /* 10d1e2cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e2d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e2d4 mov edx, dword ptr [0x10d3e658] */
  EDX = (r32((uint32_t)(0x10d3e658)));
  /* 10d1e2da push edx */
  push32((uint32_t)(EDX));
  /* 10d1e2db call 0x10d13b60 */
  push32(0x10d1e2e0u); f_10d13b60();
  /* 10d1e2e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e2e3 mov dword ptr [0x10d3e650], 0 */
  w32((uint32_t)(0x10d3e650), (0x0u));
  /* 10d1e2ed mov dword ptr [0x10d3e654], 0 */
  w32((uint32_t)(0x10d3e654), (0x0u));
  /* 10d1e2f7 mov dword ptr [0x10d3e658], 0 */
  w32((uint32_t)(0x10d3e658), (0x0u));
  /* 10d1e301 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e304 jmp 0x10d1e4c2 */
  goto L_10d1e4c2;
L_10d1e309:;
  /* 10d1e309 mov eax, dword ptr [0x10d3dd88] */
  EAX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e30e cmp dword ptr [eax], 0x10d3dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10d3dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e314 je 0x10d1e350 */
  if (C.zf) goto L_10d1e350;
  /* 10d1e316 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e318 mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e31e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d1e320 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e321 call 0x10d13b60 */
  push32(0x10d1e326u); f_10d13b60();
  /* 10d1e326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e329 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e32b mov eax, dword ptr [0x10d3dd88] */
  EAX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e330 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1e333 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e334 call 0x10d13b60 */
  push32(0x10d1e339u); f_10d13b60();
  /* 10d1e339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e33c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e33e mov edx, dword ptr [0x10d3dd88] */
  EDX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e344 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d1e347 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e348 call 0x10d13b60 */
  push32(0x10d1e34du); f_10d13b60();
  /* 10d1e34d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1e350:;
  /* 10d1e350 mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e356 mov edx, dword ptr [0x10d3e650] */
  EDX = (r32((uint32_t)(0x10d3e650)));
  /* 10d1e35c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d1e35e mov eax, dword ptr [0x10d3dd88] */
  EAX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e363 mov ecx, dword ptr [0x10d3e654] */
  ECX = (r32((uint32_t)(0x10d3e654)));
  /* 10d1e369 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d1e36c mov edx, dword ptr [0x10d3dd88] */
  EDX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e372 mov eax, dword ptr [0x10d3e658] */
  EAX = (r32((uint32_t)(0x10d3e658)));
  /* 10d1e377 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d1e37a mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e380 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d1e382 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d1e384 mov byte ptr [0x10d3cea8], al */
  w8((uint32_t)(0x10d3cea8), (AL));
  /* 10d1e389 mov dword ptr [0x10d3ceac], 1 */
  w32((uint32_t)(0x10d3ceac), (0x1u));
  /* 10d1e393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e395 jmp 0x10d1e4c2 */
  goto L_10d1e4c2;
L_10d1e39a:;
  /* 10d1e39a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e39c mov ecx, dword ptr [0x10d3e650] */
  ECX = (r32((uint32_t)(0x10d3e650)));
  /* 10d1e3a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e3a3 call 0x10d13b60 */
  push32(0x10d1e3a8u); f_10d13b60();
  /* 10d1e3a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e3ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e3ad mov edx, dword ptr [0x10d3e654] */
  EDX = (r32((uint32_t)(0x10d3e654)));
  /* 10d1e3b3 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e3b4 call 0x10d13b60 */
  push32(0x10d1e3b9u); f_10d13b60();
  /* 10d1e3b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e3bc push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e3be mov eax, dword ptr [0x10d3e658] */
  EAX = (r32((uint32_t)(0x10d3e658)));
  /* 10d1e3c3 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e3c4 call 0x10d13b60 */
  push32(0x10d1e3c9u); f_10d13b60();
  /* 10d1e3c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e3cc mov dword ptr [0x10d3e650], 0 */
  w32((uint32_t)(0x10d3e650), (0x0u));
  /* 10d1e3d6 mov dword ptr [0x10d3e654], 0 */
  w32((uint32_t)(0x10d3e654), (0x0u));
  /* 10d1e3e0 mov dword ptr [0x10d3e658], 0 */
  w32((uint32_t)(0x10d3e658), (0x0u));
  /* 10d1e3ea push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10d1e3ef push 0x10d3a03c */
  push32((uint32_t)(0x10d3a03cu));
  /* 10d1e3f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e3f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e3f8 call 0x10d130d0 */
  push32(0x10d1e3fdu); f_10d130d0();
  /* 10d1e3fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e400 mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e406 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d1e408 mov edx, dword ptr [0x10d3dd88] */
  EDX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e40e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e411 jne 0x10d1e41b */
  if (!C.zf) goto L_10d1e41b;
  /* 10d1e413 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e416 jmp 0x10d1e4c2 */
  goto L_10d1e4c2;
L_10d1e41b:;
  /* 10d1e41b push 0x10d3a00c */
  push32((uint32_t)(0x10d3a00cu));
  /* 10d1e420 mov eax, dword ptr [0x10d3dd88] */
  EAX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e425 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d1e427 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e428 call 0x10d16080 */
  push32(0x10d1e42du); f_10d16080();
  /* 10d1e42d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e430 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10d1e435 push 0x10d3a03c */
  push32((uint32_t)(0x10d3a03cu));
  /* 10d1e43a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e43c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e43e call 0x10d130d0 */
  push32(0x10d1e443u); f_10d130d0();
  /* 10d1e443 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e446 mov edx, dword ptr [0x10d3dd88] */
  EDX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e44c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d1e44f mov eax, dword ptr [0x10d3dd88] */
  EAX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e454 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e458 jne 0x10d1e45f */
  if (!C.zf) goto L_10d1e45f;
  /* 10d1e45a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e45d jmp 0x10d1e4c2 */
  goto L_10d1e4c2;
L_10d1e45f:;
  /* 10d1e45f mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e465 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d1e468 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d1e46b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10d1e470 push 0x10d3a03c */
  push32((uint32_t)(0x10d3a03cu));
  /* 10d1e475 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e477 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e479 call 0x10d130d0 */
  push32(0x10d1e47eu); f_10d130d0();
  /* 10d1e47e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e481 mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e487 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10d1e48a mov edx, dword ptr [0x10d3dd88] */
  EDX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e490 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e494 jne 0x10d1e49b */
  if (!C.zf) goto L_10d1e49b;
  /* 10d1e496 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e499 jmp 0x10d1e4c2 */
  goto L_10d1e4c2;
L_10d1e49b:;
  /* 10d1e49b mov eax, dword ptr [0x10d3dd88] */
  EAX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e4a0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d1e4a3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d1e4a6 mov edx, dword ptr [0x10d3dd88] */
  EDX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e4ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d1e4ae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d1e4b0 mov byte ptr [0x10d3cea8], cl */
  w8((uint32_t)(0x10d3cea8), (CL));
  /* 10d1e4b6 mov dword ptr [0x10d3ceac], 1 */
  w32((uint32_t)(0x10d3ceac), (0x1u));
  /* 10d1e4c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1e4c2:;
  /* 10d1e4c2 mov esp, ebp */
  ESP = (EBP);
  /* 10d1e4c4 pop ebp */
  EBP = (pop32());
  /* 10d1e4c5 ret  */
  ESPCHK(0x10d1e220u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10d1e4d0 (125 bytes, 49 insns) */
void f_10d1e4d0(void) {
  FTRACE(0x10d1e4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1e4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1e4d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1e4d3 push ecx */
  push32((uint32_t)(ECX));
L_10d1e4d4:;
  /* 10d1e4d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e4d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1e4da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1e4dc je 0x10d1e549 */
  if (C.zf) goto L_10d1e549;
  /* 10d1e4de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e4e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d1e4e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e4e7 jl 0x10d1e50d */
  if ((C.sf!=C.of)) goto L_10d1e50d;
  /* 10d1e4e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e4ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1e4ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e4f2 jg 0x10d1e50d */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1e50d;
  /* 10d1e4f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e4f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1e4fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1e4fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e500 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d1e502 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e505 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e508 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d1e50b jmp 0x10d1e547 */
  goto L_10d1e547;
L_10d1e50d:;
  /* 10d1e50d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e510 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1e513 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e516 jne 0x10d1e53e */
  if (!C.zf) goto L_10d1e53e;
  /* 10d1e518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e51b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1e51e:;
  /* 10d1e51e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e524 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d1e527 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d1e529 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e52c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e52f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1e532 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e535 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d1e538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1e53a jne 0x10d1e51e */
  if (!C.zf) goto L_10d1e51e;
  /* 10d1e53c jmp 0x10d1e547 */
  goto L_10d1e547;
L_10d1e53e:;
  /* 10d1e53e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e541 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e544 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d1e547:;
  /* 10d1e547 jmp 0x10d1e4d4 */
  goto L_10d1e4d4;
L_10d1e549:;
  /* 10d1e549 mov esp, ebp */
  ESP = (EBP);
  /* 10d1e54b pop ebp */
  EBP = (pop32());
  /* 10d1e54c ret  */
  ESPCHK(0x10d1e4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e550 @ 0x10d1e550 (304 bytes, 85 insns) */
void f_10d1e550(void) {
  FTRACE(0x10d1e550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1e550 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1e551 mov ebp, esp */
  EBP = (ESP);
  /* 10d1e553 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e554 cmp dword ptr [0x10d3e624], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e624))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e55b je 0x10d1e61c */
  if (C.zf) goto L_10d1e61c;
  /* 10d1e561 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d1e563 push 0x10d3a048 */
  push32((uint32_t)(0x10d3a048u));
  /* 10d1e568 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e56a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d1e56c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e56e call 0x10d134e0 */
  push32(0x10d1e573u); f_10d134e0();
  /* 10d1e573 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e576 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1e579 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e57d jne 0x10d1e589 */
  if (!C.zf) goto L_10d1e589;
  /* 10d1e57f mov eax, 1 */
  EAX = (0x1u);
  /* 10d1e584 jmp 0x10d1e67c */
  goto L_10d1e67c;
L_10d1e589:;
  /* 10d1e589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e58c push eax */
  push32((uint32_t)(EAX));
  /* 10d1e58d call 0x10d1e680 */
  push32(0x10d1e592u); f_10d1e680();
  /* 10d1e592 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1e597 je 0x10d1e5bd */
  if (C.zf) goto L_10d1e5bd;
  /* 10d1e599 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e59c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e59d call 0x10d1e910 */
  push32(0x10d1e5a2u); f_10d1e910();
  /* 10d1e5a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e5a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e5a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e5aa push edx */
  push32((uint32_t)(EDX));
  /* 10d1e5ab call 0x10d13b60 */
  push32(0x10d1e5b0u); f_10d13b60();
  /* 10d1e5b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e5b3 mov eax, 1 */
  EAX = (0x1u);
  /* 10d1e5b8 jmp 0x10d1e67c */
  goto L_10d1e67c;
L_10d1e5bd:;
  /* 10d1e5bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e5c0 mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e5c6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d1e5c8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d1e5ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e5cd mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e5d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d1e5d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d1e5d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e5dc mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e5e2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d1e5e5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10d1e5e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e5eb mov dword ptr [0x10d3dd88], eax */
  w32((uint32_t)(0x10d3dd88), (EAX));
  /* 10d1e5f0 mov ecx, dword ptr [0x10d3e65c] */
  ECX = (r32((uint32_t)(0x10d3e65c)));
  /* 10d1e5f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e5f7 call 0x10d1e910 */
  push32(0x10d1e5fcu); f_10d1e910();
  /* 10d1e5fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e5ff push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e601 mov edx, dword ptr [0x10d3e65c] */
  EDX = (r32((uint32_t)(0x10d3e65c)));
  /* 10d1e607 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e608 call 0x10d13b60 */
  push32(0x10d1e60du); f_10d13b60();
  /* 10d1e60d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e610 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e613 mov dword ptr [0x10d3e65c], eax */
  w32((uint32_t)(0x10d3e65c), (EAX));
  /* 10d1e618 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e61a jmp 0x10d1e67c */
  goto L_10d1e67c;
L_10d1e61c:;
  /* 10d1e61c mov ecx, dword ptr [0x10d3dd88] */
  ECX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e622 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d1e624 mov dword ptr [0x10d3dd58], edx */
  w32((uint32_t)(0x10d3dd58), (EDX));
  /* 10d1e62a mov eax, dword ptr [0x10d3dd88] */
  EAX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e62f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d1e632 mov dword ptr [0x10d3dd5c], ecx */
  w32((uint32_t)(0x10d3dd5c), (ECX));
  /* 10d1e638 mov edx, dword ptr [0x10d3dd88] */
  EDX = (r32((uint32_t)(0x10d3dd88)));
  /* 10d1e63e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d1e641 mov dword ptr [0x10d3dd60], eax */
  w32((uint32_t)(0x10d3dd60), (EAX));
  /* 10d1e646 mov dword ptr [0x10d3dd88], 0x10d3dd58 */
  w32((uint32_t)(0x10d3dd88), (0x10d3dd58u));
  /* 10d1e650 mov ecx, dword ptr [0x10d3e65c] */
  ECX = (r32((uint32_t)(0x10d3e65c)));
  /* 10d1e656 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e657 call 0x10d1e910 */
  push32(0x10d1e65cu); f_10d1e910();
  /* 10d1e65c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e65f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e661 mov edx, dword ptr [0x10d3e65c] */
  EDX = (r32((uint32_t)(0x10d3e65c)));
  /* 10d1e667 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e668 call 0x10d13b60 */
  push32(0x10d1e66du); f_10d13b60();
  /* 10d1e66d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e670 mov dword ptr [0x10d3e65c], 0 */
  w32((uint32_t)(0x10d3e65c), (0x0u));
  /* 10d1e67a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1e67c:;
  /* 10d1e67c mov esp, ebp */
  ESP = (EBP);
  /* 10d1e67e pop ebp */
  EBP = (pop32());
  /* 10d1e67f ret  */
  ESPCHK(0x10d1e550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e680 @ 0x10d1e680 (525 bytes, 200 insns) */
void f_10d1e680(void) {
  FTRACE(0x10d1e680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1e680 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1e681 mov ebp, esp */
  EBP = (ESP);
  /* 10d1e683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1e686 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1e68d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e68f mov ax, word ptr [0x10d3e67c] */
  AX = (r16((uint32_t)(0x10d3e67c)));
  /* 10d1e695 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1e698 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e69c jne 0x10d1e6a6 */
  if (!C.zf) goto L_10d1e6a6;
  /* 10d1e69e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e6a1 jmp 0x10d1e889 */
  goto L_10d1e889;
L_10d1e6a6:;
  /* 10d1e6a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e6a9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e6ac push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e6ad push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10d1e6af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e6b2 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e6b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e6b5 call 0x10d21290 */
  push32(0x10d1e6bau); f_10d21290();
  /* 10d1e6ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e6bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e6c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e6c2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e6c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e6c8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e6cb push edx */
  push32((uint32_t)(EDX));
  /* 10d1e6cc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10d1e6ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e6d1 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e6d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e6d4 call 0x10d21290 */
  push32(0x10d1e6d9u); f_10d21290();
  /* 10d1e6d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e6dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e6df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e6e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e6e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e6e7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e6ea push edx */
  push32((uint32_t)(EDX));
  /* 10d1e6eb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10d1e6ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e6f0 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e6f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e6f3 call 0x10d21290 */
  push32(0x10d1e6f8u); f_10d21290();
  /* 10d1e6f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e6fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e6fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e700 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e703 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e706 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e709 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e70a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10d1e70c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e70f push eax */
  push32((uint32_t)(EAX));
  /* 10d1e710 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e712 call 0x10d21290 */
  push32(0x10d1e717u); f_10d21290();
  /* 10d1e717 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e71a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e71d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e71f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e722 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e725 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e728 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e729 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10d1e72b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e72e push eax */
  push32((uint32_t)(EAX));
  /* 10d1e72f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e731 call 0x10d21290 */
  push32(0x10d1e736u); f_10d21290();
  /* 10d1e736 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e739 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e73c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e73e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e741 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e744 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d1e747 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e748 call 0x10d1e890 */
  push32(0x10d1e74du); f_10d1e890();
  /* 10d1e74d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e750 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e753 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e756 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e757 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10d1e759 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e75c push edx */
  push32((uint32_t)(EDX));
  /* 10d1e75d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e75f call 0x10d21290 */
  push32(0x10d1e764u); f_10d21290();
  /* 10d1e764 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e767 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e76a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e76c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e76f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e772 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e775 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e776 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10d1e778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e77b push eax */
  push32((uint32_t)(EAX));
  /* 10d1e77c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1e77e call 0x10d21290 */
  push32(0x10d1e783u); f_10d21290();
  /* 10d1e783 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e786 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e789 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e78b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e78e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e791 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e794 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e795 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10d1e797 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e79a push eax */
  push32((uint32_t)(EAX));
  /* 10d1e79b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1e79d call 0x10d21290 */
  push32(0x10d1e7a2u); f_10d21290();
  /* 10d1e7a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e7a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e7a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e7aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e7ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e7b0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e7b3 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e7b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d1e7b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e7b9 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e7ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1e7bc call 0x10d21290 */
  push32(0x10d1e7c1u); f_10d21290();
  /* 10d1e7c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e7c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e7c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e7c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e7cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e7cf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e7d2 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e7d3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10d1e7d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e7d8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e7d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1e7db call 0x10d21290 */
  push32(0x10d1e7e0u); f_10d21290();
  /* 10d1e7e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e7e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e7e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e7e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e7eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e7ee add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e7f1 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e7f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10d1e7f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e7f7 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e7f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1e7fa call 0x10d21290 */
  push32(0x10d1e7ffu); f_10d21290();
  /* 10d1e7ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e802 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e805 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e807 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e80a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e80d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e810 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e811 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10d1e813 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e816 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e817 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1e819 call 0x10d21290 */
  push32(0x10d1e81eu); f_10d21290();
  /* 10d1e81e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e821 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e824 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e826 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e829 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e82c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e82f push edx */
  push32((uint32_t)(EDX));
  /* 10d1e830 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10d1e832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e835 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e836 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1e838 call 0x10d21290 */
  push32(0x10d1e83du); f_10d21290();
  /* 10d1e83d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e840 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e843 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e845 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e848 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e84b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e84e push edx */
  push32((uint32_t)(EDX));
  /* 10d1e84f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10d1e851 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e854 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e855 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1e857 call 0x10d21290 */
  push32(0x10d1e85cu); f_10d21290();
  /* 10d1e85c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e85f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e862 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e864 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e867 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e86a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e86d push edx */
  push32((uint32_t)(EDX));
  /* 10d1e86e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10d1e870 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e873 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e874 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1e876 call 0x10d21290 */
  push32(0x10d1e87bu); f_10d21290();
  /* 10d1e87b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e87e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1e881 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1e883 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1e886 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d1e889:;
  /* 10d1e889 mov esp, ebp */
  ESP = (EBP);
  /* 10d1e88b pop ebp */
  EBP = (pop32());
  /* 10d1e88c ret  */
  ESPCHK(0x10d1e680u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10d1e890 (125 bytes, 49 insns) */
void f_10d1e890(void) {
  FTRACE(0x10d1e890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1e890 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1e891 mov ebp, esp */
  EBP = (ESP);
  /* 10d1e893 push ecx */
  push32((uint32_t)(ECX));
L_10d1e894:;
  /* 10d1e894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e897 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1e89a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1e89c je 0x10d1e909 */
  if (C.zf) goto L_10d1e909;
  /* 10d1e89e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e8a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d1e8a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e8a7 jl 0x10d1e8cd */
  if ((C.sf!=C.of)) goto L_10d1e8cd;
  /* 10d1e8a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e8ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1e8af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e8b2 jg 0x10d1e8cd */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1e8cd;
  /* 10d1e8b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e8b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1e8ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1e8bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e8c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d1e8c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e8c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e8c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d1e8cb jmp 0x10d1e907 */
  goto L_10d1e907;
L_10d1e8cd:;
  /* 10d1e8cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e8d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1e8d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e8d6 jne 0x10d1e8fe */
  if (!C.zf) goto L_10d1e8fe;
  /* 10d1e8d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e8db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1e8de:;
  /* 10d1e8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e8e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e8e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d1e8e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d1e8e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e8ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e8ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1e8f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1e8f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d1e8f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1e8fa jne 0x10d1e8de */
  if (!C.zf) goto L_10d1e8de;
  /* 10d1e8fc jmp 0x10d1e907 */
  goto L_10d1e907;
L_10d1e8fe:;
  /* 10d1e8fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e904 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d1e907:;
  /* 10d1e907 jmp 0x10d1e894 */
  goto L_10d1e894;
L_10d1e909:;
  /* 10d1e909 mov esp, ebp */
  ESP = (EBP);
  /* 10d1e90b pop ebp */
  EBP = (pop32());
  /* 10d1e90c ret  */
  ESPCHK(0x10d1e890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e910 @ 0x10d1e910 (147 bytes, 52 insns) */
void f_10d1e910(void) {
  FTRACE(0x10d1e910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1e910 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1e911 mov ebp, esp */
  EBP = (ESP);
  /* 10d1e913 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e917 jne 0x10d1e91e */
  if (!C.zf) goto L_10d1e91e;
  /* 10d1e919 jmp 0x10d1e9a1 */
  goto L_10d1e9a1;
L_10d1e91e:;
  /* 10d1e91e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e921 cmp dword ptr [eax + 0xc], 0x10d3e6b8 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10d3e6b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e928 je 0x10d1e9a1 */
  if (C.zf) goto L_10d1e9a1;
  /* 10d1e92a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e92c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e92f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1e932 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e933 call 0x10d13b60 */
  push32(0x10d1e938u); f_10d13b60();
  /* 10d1e938 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e93b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e93d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e940 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d1e943 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e944 call 0x10d13b60 */
  push32(0x10d1e949u); f_10d13b60();
  /* 10d1e949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e94c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e94e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e951 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d1e954 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e955 call 0x10d13b60 */
  push32(0x10d1e95au); f_10d13b60();
  /* 10d1e95a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e95d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e95f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e962 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d1e965 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e966 call 0x10d13b60 */
  push32(0x10d1e96bu); f_10d13b60();
  /* 10d1e96b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e96e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e973 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d1e976 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1e977 call 0x10d13b60 */
  push32(0x10d1e97cu); f_10d13b60();
  /* 10d1e97c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e97f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e984 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10d1e987 push eax */
  push32((uint32_t)(EAX));
  /* 10d1e988 call 0x10d13b60 */
  push32(0x10d1e98du); f_10d13b60();
  /* 10d1e98d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e990 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1e992 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1e995 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10d1e998 push edx */
  push32((uint32_t)(EDX));
  /* 10d1e999 call 0x10d13b60 */
  push32(0x10d1e99eu); f_10d13b60();
  /* 10d1e99e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1e9a1:;
  /* 10d1e9a1 pop ebp */
  EBP = (pop32());
  /* 10d1e9a2 ret  */
  ESPCHK(0x10d1e910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9b0 @ 0x10d1e9b0 (928 bytes, 284 insns) */
void f_10d1e9b0(void) {
  FTRACE(0x10d1e9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1e9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1e9b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1e9b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1e9b6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10d1e9bd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10d1e9c4 cmp dword ptr [0x10d3e620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e9cb je 0x10d1ed01 */
  if (C.zf) goto L_10d1ed01;
  /* 10d1e9d1 cmp dword ptr [0x10d3e630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1e9d8 jne 0x10d1ea00 */
  if (!C.zf) goto L_10d1ea00;
  /* 10d1e9da push 0x10d3e630 */
  push32((uint32_t)(0x10d3e630u));
  /* 10d1e9df push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10d1e9e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1e9e6 mov ax, word ptr [0x10d3e674] */
  AX = (r16((uint32_t)(0x10d3e674)));
  /* 10d1e9ec push eax */
  push32((uint32_t)(EAX));
  /* 10d1e9ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1e9ef call 0x10d21290 */
  push32(0x10d1e9f4u); f_10d21290();
  /* 10d1e9f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1e9f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1e9f9 je 0x10d1ea00 */
  if (C.zf) goto L_10d1ea00;
  /* 10d1e9fb jmp 0x10d1ecc2 */
  goto L_10d1ecc2;
L_10d1ea00:;
  /* 10d1ea00 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10d1ea02 push 0x10d3a054 */
  push32((uint32_t)(0x10d3a054u));
  /* 10d1ea07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ea09 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10d1ea0e call 0x10d130d0 */
  push32(0x10d1ea13u); f_10d130d0();
  /* 10d1ea13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ea16 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10d1ea19 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d1ea1b push 0x10d3a054 */
  push32((uint32_t)(0x10d3a054u));
  /* 10d1ea20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ea22 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10d1ea27 call 0x10d130d0 */
  push32(0x10d1ea2cu); f_10d130d0();
  /* 10d1ea2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ea2f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d1ea32 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10d1ea34 push 0x10d3a054 */
  push32((uint32_t)(0x10d3a054u));
  /* 10d1ea39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ea3b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10d1ea40 call 0x10d130d0 */
  push32(0x10d1ea45u); f_10d130d0();
  /* 10d1ea45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ea48 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10d1ea4b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10d1ea4d push 0x10d3a054 */
  push32((uint32_t)(0x10d3a054u));
  /* 10d1ea52 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ea54 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10d1ea59 call 0x10d130d0 */
  push32(0x10d1ea5eu); f_10d130d0();
  /* 10d1ea5e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ea61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d1ea64 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ea68 je 0x10d1ea7c */
  if (C.zf) goto L_10d1ea7c;
  /* 10d1ea6a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ea6e je 0x10d1ea7c */
  if (C.zf) goto L_10d1ea7c;
  /* 10d1ea70 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ea74 je 0x10d1ea7c */
  if (C.zf) goto L_10d1ea7c;
  /* 10d1ea76 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ea7a jne 0x10d1ea81 */
  if (!C.zf) goto L_10d1ea81;
L_10d1ea7c:;
  /* 10d1ea7c jmp 0x10d1ecc2 */
  goto L_10d1ecc2;
L_10d1ea81:;
  /* 10d1ea81 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1ea84 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d1ea87 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d1ea8e jmp 0x10d1ea99 */
  goto L_10d1ea99;
L_10d1ea90:;
  /* 10d1ea90 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1ea93 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ea96 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10d1ea99:;
  /* 10d1ea99 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1eaa0 jge 0x10d1eab5 */
  if ((C.sf==C.of)) goto L_10d1eab5;
  /* 10d1eaa2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1eaa5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10d1eaa8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d1eaaa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1eaad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1eab0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d1eab3 jmp 0x10d1ea90 */
  goto L_10d1ea90;
L_10d1eab5:;
  /* 10d1eab5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10d1eab8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1eab9 mov ecx, dword ptr [0x10d3e630] */
  ECX = (r32((uint32_t)(0x10d3e630)));
  /* 10d1eabf push ecx */
  push32((uint32_t)(ECX));
  /* 10d1eac0 call dword ptr [0x10d4033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4033c))), 0x10d1eac6u);
  /* 10d1eac6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1eac8 jne 0x10d1eacf */
  if (!C.zf) goto L_10d1eacf;
  /* 10d1eaca jmp 0x10d1ecc2 */
  goto L_10d1ecc2;
L_10d1eacf:;
  /* 10d1eacf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ead3 jbe 0x10d1eada */
  if ((C.cf||C.zf)) goto L_10d1eada;
  /* 10d1ead5 jmp 0x10d1ecc2 */
  goto L_10d1ecc2;
L_10d1eada:;
  /* 10d1eada mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d1eadd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1eae3 mov dword ptr [0x10d3cea4], edx */
  w32((uint32_t)(0x10d3cea4), (EDX));
  /* 10d1eae9 cmp dword ptr [0x10d3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1eaf0 jle 0x10d1eb49 */
  if ((C.zf||C.sf!=C.of)) goto L_10d1eb49;
  /* 10d1eaf2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10d1eaf5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d1eaf8 jmp 0x10d1eb03 */
  goto L_10d1eb03;
L_10d1eafa:;
  /* 10d1eafa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1eafd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1eb00 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10d1eb03:;
  /* 10d1eb03 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1eb06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1eb08 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d1eb0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1eb0c je 0x10d1eb49 */
  if (C.zf) goto L_10d1eb49;
  /* 10d1eb0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1eb11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1eb13 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d1eb16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1eb18 je 0x10d1eb49 */
  if (C.zf) goto L_10d1eb49;
  /* 10d1eb1a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1eb1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1eb1f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d1eb21 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d1eb24 jmp 0x10d1eb2f */
  goto L_10d1eb2f;
L_10d1eb26:;
  /* 10d1eb26 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1eb29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1eb2c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10d1eb2f:;
  /* 10d1eb2f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1eb32 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1eb34 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d1eb37 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1eb3a jg 0x10d1eb47 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1eb47;
  /* 10d1eb3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1eb3f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1eb42 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d1eb45 jmp 0x10d1eb26 */
  goto L_10d1eb26;
L_10d1eb47:;
  /* 10d1eb47 jmp 0x10d1eafa */
  goto L_10d1eafa;
L_10d1eb49:;
  /* 10d1eb49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1eb4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1eb4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1eb4f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1eb52 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1eb55 push eax */
  push32((uint32_t)(EAX));
  /* 10d1eb56 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d1eb5b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1eb5e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1eb5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1eb61 call 0x10d1b300 */
  push32(0x10d1eb66u); f_10d1b300();
  /* 10d1eb66 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1eb69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1eb6b jne 0x10d1eb72 */
  if (!C.zf) goto L_10d1eb72;
  /* 10d1eb6d jmp 0x10d1ecc2 */
  goto L_10d1ecc2;
L_10d1eb72:;
  /* 10d1eb72 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1eb75 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10d1eb7a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1eb7d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d1eb80 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d1eb87 jmp 0x10d1eb92 */
  goto L_10d1eb92;
L_10d1eb89:;
  /* 10d1eb89 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1eb8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1eb8f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d1eb92:;
  /* 10d1eb92 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1eb99 jge 0x10d1ebb0 */
  if ((C.sf==C.of)) goto L_10d1ebb0;
  /* 10d1eb9b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1eb9e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10d1eba2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10d1eba5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d1eba8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ebab mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d1ebae jmp 0x10d1eb89 */
  goto L_10d1eb89;
L_10d1ebb0:;
  /* 10d1ebb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1ebb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1ebb4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1ebb7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ebba push edx */
  push32((uint32_t)(EDX));
  /* 10d1ebbb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d1ebc0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1ebc3 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ebc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1ebc6 call 0x10d21530 */
  push32(0x10d1ebcbu); f_10d21530();
  /* 10d1ebcb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ebce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1ebd0 jne 0x10d1ebd7 */
  if (!C.zf) goto L_10d1ebd7;
  /* 10d1ebd2 jmp 0x10d1ecc2 */
  goto L_10d1ecc2;
L_10d1ebd7:;
  /* 10d1ebd7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1ebda mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10d1ebdf cmp dword ptr [0x10d3cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d3cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ebe6 jle 0x10d1ec43 */
  if ((C.zf||C.sf!=C.of)) goto L_10d1ec43;
  /* 10d1ebe8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10d1ebeb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d1ebee jmp 0x10d1ebf9 */
  goto L_10d1ebf9;
L_10d1ebf0:;
  /* 10d1ebf0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1ebf3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ebf6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10d1ebf9:;
  /* 10d1ebf9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1ebfc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d1ebfe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d1ec00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1ec02 je 0x10d1ec43 */
  if (C.zf) goto L_10d1ec43;
  /* 10d1ec04 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1ec07 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ec09 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d1ec0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1ec0e je 0x10d1ec43 */
  if (C.zf) goto L_10d1ec43;
  /* 10d1ec10 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1ec13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1ec15 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d1ec17 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d1ec1a jmp 0x10d1ec25 */
  goto L_10d1ec25;
L_10d1ec1c:;
  /* 10d1ec1c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1ec1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ec22 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d1ec25:;
  /* 10d1ec25 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d1ec28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1ec2a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d1ec2d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ec30 jg 0x10d1ec41 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1ec41;
  /* 10d1ec32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d1ec35 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1ec38 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10d1ec3f jmp 0x10d1ec1c */
  goto L_10d1ec1c;
L_10d1ec41:;
  /* 10d1ec41 jmp 0x10d1ebf0 */
  goto L_10d1ebf0;
L_10d1ec43:;
  /* 10d1ec43 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1ec46 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ec49 mov dword ptr [0x10d3cc98], eax */
  w32((uint32_t)(0x10d3cc98), (EAX));
  /* 10d1ec4e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1ec51 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ec54 mov dword ptr [0x10d3cc9c], ecx */
  w32((uint32_t)(0x10d3cc9c), (ECX));
  /* 10d1ec5a cmp dword ptr [0x10d3e660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ec61 je 0x10d1ec74 */
  if (C.zf) goto L_10d1ec74;
  /* 10d1ec63 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ec65 mov edx, dword ptr [0x10d3e660] */
  EDX = (r32((uint32_t)(0x10d3e660)));
  /* 10d1ec6b push edx */
  push32((uint32_t)(EDX));
  /* 10d1ec6c call 0x10d13b60 */
  push32(0x10d1ec71u); f_10d13b60();
  /* 10d1ec71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1ec74:;
  /* 10d1ec74 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1ec77 mov dword ptr [0x10d3e660], eax */
  w32((uint32_t)(0x10d3e660), (EAX));
  /* 10d1ec7c cmp dword ptr [0x10d3e664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ec83 je 0x10d1ec96 */
  if (C.zf) goto L_10d1ec96;
  /* 10d1ec85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ec87 mov ecx, dword ptr [0x10d3e664] */
  ECX = (r32((uint32_t)(0x10d3e664)));
  /* 10d1ec8d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ec8e call 0x10d13b60 */
  push32(0x10d1ec93u); f_10d13b60();
  /* 10d1ec93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1ec96:;
  /* 10d1ec96 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1ec99 mov dword ptr [0x10d3e664], edx */
  w32((uint32_t)(0x10d3e664), (EDX));
  /* 10d1ec9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1eca1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1eca4 push eax */
  push32((uint32_t)(EAX));
  /* 10d1eca5 call 0x10d13b60 */
  push32(0x10d1ecaau); f_10d13b60();
  /* 10d1ecaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ecad push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ecaf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1ecb2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ecb3 call 0x10d13b60 */
  push32(0x10d1ecb8u); f_10d13b60();
  /* 10d1ecb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ecbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1ecbd jmp 0x10d1ed4c */
  goto L_10d1ed4c;
L_10d1ecc2:;
  /* 10d1ecc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ecc4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d1ecc7 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ecc8 call 0x10d13b60 */
  push32(0x10d1eccdu); f_10d13b60();
  /* 10d1eccd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ecd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ecd2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d1ecd5 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ecd6 call 0x10d13b60 */
  push32(0x10d1ecdbu); f_10d13b60();
  /* 10d1ecdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ecde push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ece0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d1ece3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ece4 call 0x10d13b60 */
  push32(0x10d1ece9u); f_10d13b60();
  /* 10d1ece9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ecec push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ecee mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d1ecf1 push edx */
  push32((uint32_t)(EDX));
  /* 10d1ecf2 call 0x10d13b60 */
  push32(0x10d1ecf7u); f_10d13b60();
  /* 10d1ecf7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ecfa mov eax, 1 */
  EAX = (0x1u);
  /* 10d1ecff jmp 0x10d1ed4c */
  goto L_10d1ed4c;
L_10d1ed01:;
  /* 10d1ed01 mov dword ptr [0x10d3cc98], 0x10d3cca2 */
  w32((uint32_t)(0x10d3cc98), (0x10d3cca2u));
  /* 10d1ed0b mov dword ptr [0x10d3cc9c], 0x10d3cca2 */
  w32((uint32_t)(0x10d3cc9c), (0x10d3cca2u));
  /* 10d1ed15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ed17 mov eax, dword ptr [0x10d3e660] */
  EAX = (r32((uint32_t)(0x10d3e660)));
  /* 10d1ed1c push eax */
  push32((uint32_t)(EAX));
  /* 10d1ed1d call 0x10d13b60 */
  push32(0x10d1ed22u); f_10d13b60();
  /* 10d1ed22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ed25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1ed27 mov ecx, dword ptr [0x10d3e664] */
  ECX = (r32((uint32_t)(0x10d3e664)));
  /* 10d1ed2d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1ed2e call 0x10d13b60 */
  push32(0x10d1ed33u); f_10d13b60();
  /* 10d1ed33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ed36 mov dword ptr [0x10d3e660], 0 */
  w32((uint32_t)(0x10d3e660), (0x0u));
  /* 10d1ed40 mov dword ptr [0x10d3e664], 0 */
  w32((uint32_t)(0x10d3e664), (0x0u));
  /* 10d1ed4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1ed4c:;
  /* 10d1ed4c mov esp, ebp */
  ESP = (EBP);
  /* 10d1ed4e pop ebp */
  EBP = (pop32());
  /* 10d1ed4f ret  */
  ESPCHK(0x10d1e9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed50 @ 0x10d1ed50 (7 bytes, 5 insns) */
void f_10d1ed50(void) {
  FTRACE(0x10d1ed50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ed50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1ed51 mov ebp, esp */
  EBP = (ESP);
  /* 10d1ed53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1ed55 pop ebp */
  EBP = (pop32());
  /* 10d1ed56 ret  */
  ESPCHK(0x10d1ed50u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10d1ed60 (129 bytes, 56 insns) */
void f_10d1ed60(void) {
  FTRACE(0x10d1ed60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ed60 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d1ed64 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d1ed68 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10d1ed6e jne 0x10d1edac */
  if (!C.zf) goto L_10d1edac;
L_10d1ed70:;
  /* 10d1ed70 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d1ed72 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d1ed74 jne 0x10d1eda4 */
  if (!C.zf) goto L_10d1eda4;
  /* 10d1ed76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d1ed78 je 0x10d1eda0 */
  if (C.zf) goto L_10d1eda0;
  /* 10d1ed7a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d1ed7d jne 0x10d1eda4 */
  if (!C.zf) goto L_10d1eda4;
  /* 10d1ed7f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d1ed81 je 0x10d1eda0 */
  if (C.zf) goto L_10d1eda0;
  /* 10d1ed83 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d1ed86 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d1ed89 jne 0x10d1eda4 */
  if (!C.zf) goto L_10d1eda4;
  /* 10d1ed8b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d1ed8d je 0x10d1eda0 */
  if (C.zf) goto L_10d1eda0;
  /* 10d1ed8f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d1ed92 jne 0x10d1eda4 */
  if (!C.zf) goto L_10d1eda4;
  /* 10d1ed94 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ed97 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ed9a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d1ed9c jne 0x10d1ed70 */
  if (!C.zf) goto L_10d1ed70;
  /* 10d1ed9e mov edi, edi */
  EDI = (EDI);
L_10d1eda0:;
  /* 10d1eda0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1eda2 ret  */
  ESPCHK(0x10d1ed60u, _esp0);
  ESP += 4; return;
  /* 10d1eda3 nop  */
  /* nop */
L_10d1eda4:;
  /* 10d1eda4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1eda6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d1eda8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10d1eda9 ret  */
  ESPCHK(0x10d1ed60u, _esp0);
  ESP += 4; return;
  /* 10d1edaa mov edi, edi */
  EDI = (EDI);
L_10d1edac:;
  /* 10d1edac test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10d1edb2 je 0x10d1edc8 */
  if (C.zf) goto L_10d1edc8;
  /* 10d1edb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d1edb6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d1edb7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d1edb9 jne 0x10d1eda4 */
  if (!C.zf) goto L_10d1eda4;
  /* 10d1edbb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d1edbc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d1edbe je 0x10d1eda0 */
  if (C.zf) goto L_10d1eda0;
  /* 10d1edc0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10d1edc6 je 0x10d1ed70 */
  if (C.zf) goto L_10d1ed70;
L_10d1edc8:;
  /* 10d1edc8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10d1edcb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1edce cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d1edd0 jne 0x10d1eda4 */
  if (!C.zf) goto L_10d1eda4;
  /* 10d1edd2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d1edd4 je 0x10d1eda0 */
  if (C.zf) goto L_10d1eda0;
  /* 10d1edd6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d1edd9 jne 0x10d1eda4 */
  if (!C.zf) goto L_10d1eda4;
  /* 10d1eddb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d1eddd je 0x10d1eda0 */
  if (C.zf) goto L_10d1eda0;
  /* 10d1eddf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ede2 jmp 0x10d1ed70 */
  goto L_10d1ed70;
}

/* FUN_1000edf0 @ 0x10d1edf0 (62 bytes, 35 insns) */
void f_10d1edf0(void) {
  FTRACE(0x10d1edf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1edf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1edf1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1edf3 push esi */
  push32((uint32_t)(ESI));
  /* 10d1edf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1edf6 push eax */
  push32((uint32_t)(EAX));
  /* 10d1edf7 push eax */
  push32((uint32_t)(EAX));
  /* 10d1edf8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1edf9 push eax */
  push32((uint32_t)(EAX));
  /* 10d1edfa push eax */
  push32((uint32_t)(EAX));
  /* 10d1edfb push eax */
  push32((uint32_t)(EAX));
  /* 10d1edfc push eax */
  push32((uint32_t)(EAX));
  /* 10d1edfd push eax */
  push32((uint32_t)(EAX));
  /* 10d1edfe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ee01 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d1ee04:;
  /* 10d1ee04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d1ee06 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d1ee08 je 0x10d1ee11 */
  if (C.zf) goto L_10d1ee11;
  /* 10d1ee0a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d1ee0b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10d1ee0b");
  /* 10d1ee0f jmp 0x10d1ee04 */
  goto L_10d1ee04;
L_10d1ee11:;
  /* 10d1ee11 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ee14 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ee17 nop  */
  /* nop */
L_10d1ee18:;
  /* 10d1ee18 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d1ee19 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d1ee1b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d1ee1d je 0x10d1ee26 */
  if (C.zf) goto L_10d1ee26;
  /* 10d1ee1f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d1ee20 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10d1ee20");
  /* 10d1ee24 jae 0x10d1ee18 */
  if (!C.cf) goto L_10d1ee18;
L_10d1ee26:;
  /* 10d1ee26 mov eax, ecx */
  EAX = (ECX);
  /* 10d1ee28 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ee2b pop esi */
  ESI = (pop32());
  /* 10d1ee2c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1ee2d ret  */
  ESPCHK(0x10d1edf0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10d1ee30 (56 bytes, 31 insns) */
void f_10d1ee30(void) {
  FTRACE(0x10d1ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1ee31 mov ebp, esp */
  EBP = (ESP);
  /* 10d1ee33 push edi */
  push32((uint32_t)(EDI));
  /* 10d1ee34 push esi */
  push32((uint32_t)(ESI));
  /* 10d1ee35 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1ee36 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1ee39 jecxz 0x10d1ee61 */
  x86_unimpl("jecxz @ 0x10d1ee39");
  /* 10d1ee3b mov ebx, ecx */
  EBX = (ECX);
  /* 10d1ee3d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ee40 mov esi, edi */
  ESI = (EDI);
  /* 10d1ee42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1ee44 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10d1ee46 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1ee48 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ee4a mov edi, esi */
  EDI = (ESI);
  /* 10d1ee4c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ee4f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10d1ee51 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10d1ee54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1ee56 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d1ee59 ja 0x10d1ee5f */
  if ((!C.cf&&!C.zf)) goto L_10d1ee5f;
  /* 10d1ee5b je 0x10d1ee61 */
  if (C.zf) goto L_10d1ee61;
  /* 10d1ee5d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d1ee5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10d1ee5f:;
  /* 10d1ee5f not ecx */
  ECX = (~(ECX));
L_10d1ee61:;
  /* 10d1ee61 mov eax, ecx */
  EAX = (ECX);
  /* 10d1ee63 pop ebx */
  EBX = (pop32());
  /* 10d1ee64 pop esi */
  ESI = (pop32());
  /* 10d1ee65 pop edi */
  EDI = (pop32());
  /* 10d1ee66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1ee67 ret  */
  ESPCHK(0x10d1ee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee70 @ 0x10d1ee70 (58 bytes, 32 insns) */
void f_10d1ee70(void) {
  FTRACE(0x10d1ee70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1ee70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1ee71 mov ebp, esp */
  EBP = (ESP);
  /* 10d1ee73 push esi */
  push32((uint32_t)(ESI));
  /* 10d1ee74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1ee76 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ee77 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ee78 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ee79 push eax */
  push32((uint32_t)(EAX));
  /* 10d1ee7a push eax */
  push32((uint32_t)(EAX));
  /* 10d1ee7b push eax */
  push32((uint32_t)(EAX));
  /* 10d1ee7c push eax */
  push32((uint32_t)(EAX));
  /* 10d1ee7d push eax */
  push32((uint32_t)(EAX));
  /* 10d1ee7e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1ee81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d1ee84:;
  /* 10d1ee84 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d1ee86 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d1ee88 je 0x10d1ee91 */
  if (C.zf) goto L_10d1ee91;
  /* 10d1ee8a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d1ee8b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10d1ee8b");
  /* 10d1ee8f jmp 0x10d1ee84 */
  goto L_10d1ee84;
L_10d1ee91:;
  /* 10d1ee91 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10d1ee94:;
  /* 10d1ee94 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d1ee96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d1ee98 je 0x10d1eea4 */
  if (C.zf) goto L_10d1eea4;
  /* 10d1ee9a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d1ee9b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10d1ee9b");
  /* 10d1ee9f jae 0x10d1ee94 */
  if (!C.cf) goto L_10d1ee94;
  /* 10d1eea1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10d1eea4:;
  /* 10d1eea4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1eea7 pop esi */
  ESI = (pop32());
  /* 10d1eea8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d1eea9 ret  */
  ESPCHK(0x10d1ee70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eeb0 @ 0x10d1eeb0 (512 bytes, 147 insns) */
void f_10d1eeb0(void) {
  FTRACE(0x10d1eeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1eeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1eeb1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1eeb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1eeb6 cmp dword ptr [0x10d3e6ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e6ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1eebd jne 0x10d1eee2 */
  if (!C.zf) goto L_10d1eee2;
  /* 10d1eebf call 0x10d1f980 */
  push32(0x10d1eec4u); f_10d1f980();
  /* 10d1eec4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1eec6 je 0x10d1eed2 */
  if (C.zf) goto L_10d1eed2;
  /* 10d1eec8 mov eax, dword ptr [0x10d40264] */
  EAX = (r32((uint32_t)(0x10d40264)));
  /* 10d1eecd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1eed0 jmp 0x10d1eed9 */
  goto L_10d1eed9;
L_10d1eed2:;
  /* 10d1eed2 mov dword ptr [ebp - 8], 0x10d1f9d0 */
  w32((uint32_t)(EBP + -0x8), (0x10d1f9d0u));
L_10d1eed9:;
  /* 10d1eed9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1eedc mov dword ptr [0x10d3e6ac], ecx */
  w32((uint32_t)(0x10d3e6ac), (ECX));
L_10d1eee2:;
  /* 10d1eee2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1eee6 jne 0x10d1eef2 */
  if (!C.zf) goto L_10d1eef2;
  /* 10d1eee8 call 0x10d1f7d0 */
  push32(0x10d1eeedu); f_10d1f7d0();
  /* 10d1eeed jmp 0x10d1efbe */
  goto L_10d1efbe;
L_10d1eef2:;
  /* 10d1eef2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1eef5 mov dword ptr [0x10d3e69c], edx */
  w32((uint32_t)(0x10d3e69c), (EDX));
  /* 10d1eefb cmp dword ptr [0x10d3e69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ef02 je 0x10d1ef24 */
  if (C.zf) goto L_10d1ef24;
  /* 10d1ef04 mov eax, dword ptr [0x10d3e69c] */
  EAX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1ef09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1ef0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1ef0e je 0x10d1ef24 */
  if (C.zf) goto L_10d1ef24;
  /* 10d1ef10 push 0x10d3e69c */
  push32((uint32_t)(0x10d3e69cu));
  /* 10d1ef15 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d1ef17 push 0x10d3da90 */
  push32((uint32_t)(0x10d3da90u));
  /* 10d1ef1c call 0x10d1f0b0 */
  push32(0x10d1ef21u); f_10d1f0b0();
  /* 10d1ef21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1ef24:;
  /* 10d1ef24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1ef27 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1ef2a mov dword ptr [0x10d3e6a0], edx */
  w32((uint32_t)(0x10d3e6a0), (EDX));
  /* 10d1ef30 cmp dword ptr [0x10d3e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ef37 je 0x10d1ef59 */
  if (C.zf) goto L_10d1ef59;
  /* 10d1ef39 mov eax, dword ptr [0x10d3e6a0] */
  EAX = (r32((uint32_t)(0x10d3e6a0)));
  /* 10d1ef3e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1ef41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1ef43 je 0x10d1ef59 */
  if (C.zf) goto L_10d1ef59;
  /* 10d1ef45 push 0x10d3e6a0 */
  push32((uint32_t)(0x10d3e6a0u));
  /* 10d1ef4a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10d1ef4c push 0x10d3d9d8 */
  push32((uint32_t)(0x10d3d9d8u));
  /* 10d1ef51 call 0x10d1f0b0 */
  push32(0x10d1ef56u); f_10d1f0b0();
  /* 10d1ef56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1ef59:;
  /* 10d1ef59 mov dword ptr [0x10d3e6a4], 0 */
  w32((uint32_t)(0x10d3e6a4), (0x0u));
  /* 10d1ef63 cmp dword ptr [0x10d3e69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ef6a je 0x10d1ef9d */
  if (C.zf) goto L_10d1ef9d;
  /* 10d1ef6c mov edx, dword ptr [0x10d3e69c] */
  EDX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1ef72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d1ef75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1ef77 je 0x10d1ef9d */
  if (C.zf) goto L_10d1ef9d;
  /* 10d1ef79 cmp dword ptr [0x10d3e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1ef80 je 0x10d1ef96 */
  if (C.zf) goto L_10d1ef96;
  /* 10d1ef82 mov ecx, dword ptr [0x10d3e6a0] */
  ECX = (r32((uint32_t)(0x10d3e6a0)));
  /* 10d1ef88 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d1ef8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1ef8d je 0x10d1ef96 */
  if (C.zf) goto L_10d1ef96;
  /* 10d1ef8f call 0x10d1f140 */
  push32(0x10d1ef94u); f_10d1f140();
  /* 10d1ef94 jmp 0x10d1ef9b */
  goto L_10d1ef9b;
L_10d1ef96:;
  /* 10d1ef96 call 0x10d1f530 */
  push32(0x10d1ef9bu); f_10d1f530();
L_10d1ef9b:;
  /* 10d1ef9b jmp 0x10d1efbe */
  goto L_10d1efbe;
L_10d1ef9d:;
  /* 10d1ef9d cmp dword ptr [0x10d3e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1efa4 je 0x10d1efb9 */
  if (C.zf) goto L_10d1efb9;
  /* 10d1efa6 mov eax, dword ptr [0x10d3e6a0] */
  EAX = (r32((uint32_t)(0x10d3e6a0)));
  /* 10d1efab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1efae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1efb0 je 0x10d1efb9 */
  if (C.zf) goto L_10d1efb9;
  /* 10d1efb2 call 0x10d1f6d0 */
  push32(0x10d1efb7u); f_10d1f6d0();
  /* 10d1efb7 jmp 0x10d1efbe */
  goto L_10d1efbe;
L_10d1efb9:;
  /* 10d1efb9 call 0x10d1f7d0 */
  push32(0x10d1efbeu); f_10d1f7d0();
L_10d1efbe:;
  /* 10d1efbe cmp dword ptr [0x10d3e6a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e6a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1efc5 jne 0x10d1efce */
  if (!C.zf) goto L_10d1efce;
  /* 10d1efc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1efc9 jmp 0x10d1f0ac */
  goto L_10d1f0ac;
L_10d1efce:;
  /* 10d1efce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1efd1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1efd7 push edx */
  push32((uint32_t)(EDX));
  /* 10d1efd8 call 0x10d1f800 */
  push32(0x10d1efddu); f_10d1f800();
  /* 10d1efdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1efe0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1efe3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1efe7 je 0x10d1effc */
  if (C.zf) goto L_10d1effc;
  /* 10d1efe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1efec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1eff1 push eax */
  push32((uint32_t)(EAX));
  /* 10d1eff2 call dword ptr [0x10d40268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40268))), 0x10d1eff8u);
  /* 10d1eff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1effa jne 0x10d1f003 */
  if (!C.zf) goto L_10d1f003;
L_10d1effc:;
  /* 10d1effc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1effe jmp 0x10d1f0ac */
  goto L_10d1f0ac;
L_10d1f003:;
  /* 10d1f003 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1f005 mov ecx, dword ptr [0x10d3e68c] */
  ECX = (r32((uint32_t)(0x10d3e68c)));
  /* 10d1f00b push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f00c call dword ptr [0x10d40278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40278))), 0x10d1f012u);
  /* 10d1f012 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f014 jne 0x10d1f01d */
  if (!C.zf) goto L_10d1f01d;
  /* 10d1f016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f018 jmp 0x10d1f0ac */
  goto L_10d1f0ac;
L_10d1f01d:;
  /* 10d1f01d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f021 je 0x10d1f048 */
  if (C.zf) goto L_10d1f048;
  /* 10d1f023 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1f026 mov ax, word ptr [0x10d3e68c] */
  AX = (r16((uint32_t)(0x10d3e68c)));
  /* 10d1f02c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10d1f02f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1f032 mov dx, word ptr [0x10d3e6a8] */
  DX = (r16((uint32_t)(0x10d3e6a8)));
  /* 10d1f039 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10d1f03d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1f040 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10d1f044 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10d1f048:;
  /* 10d1f048 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f04c je 0x10d1f0a7 */
  if (C.zf) goto L_10d1f0a7;
  /* 10d1f04e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d1f050 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1f053 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f054 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10d1f059 mov eax, dword ptr [0x10d3e68c] */
  EAX = (r32((uint32_t)(0x10d3e68c)));
  /* 10d1f05e push eax */
  push32((uint32_t)(EAX));
  /* 10d1f05f call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f065u);
  /* 10d1f065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f067 jne 0x10d1f06d */
  if (!C.zf) goto L_10d1f06d;
  /* 10d1f069 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f06b jmp 0x10d1f0ac */
  goto L_10d1f0ac;
L_10d1f06d:;
  /* 10d1f06d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d1f06f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1f072 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f075 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f076 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10d1f07b mov edx, dword ptr [0x10d3e6a8] */
  EDX = (r32((uint32_t)(0x10d3e6a8)));
  /* 10d1f081 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f082 call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f088u);
  /* 10d1f088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f08a jne 0x10d1f090 */
  if (!C.zf) goto L_10d1f090;
  /* 10d1f08c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f08e jmp 0x10d1f0ac */
  goto L_10d1f0ac;
L_10d1f090:;
  /* 10d1f090 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d1f092 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1f095 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f09a push eax */
  push32((uint32_t)(EAX));
  /* 10d1f09b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1f09e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f09f call 0x10d15c10 */
  push32(0x10d1f0a4u); f_10d15c10();
  /* 10d1f0a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1f0a7:;
  /* 10d1f0a7 mov eax, 1 */
  EAX = (0x1u);
L_10d1f0ac:;
  /* 10d1f0ac mov esp, ebp */
  ESP = (EBP);
  /* 10d1f0ae pop ebp */
  EBP = (pop32());
  /* 10d1f0af ret  */
  ESPCHK(0x10d1eeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0b0 @ 0x10d1f0b0 (130 bytes, 47 insns) */
void f_10d1f0b0(void) {
  FTRACE(0x10d1f0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f0b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f0b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f0b6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d1f0bd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10d1f0c4:;
  /* 10d1f0c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1f0c7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f0ca jg 0x10d1f12e */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1f12e;
  /* 10d1f0cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f0d0 je 0x10d1f12e */
  if (C.zf) goto L_10d1f12e;
  /* 10d1f0d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1f0d5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f0d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d1f0d9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f0db sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d1f0dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1f0e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1f0e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f0e6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10d1f0e9 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f0ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1f0ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d1f0ef push edx */
  push32((uint32_t)(EDX));
  /* 10d1f0f0 call 0x10d217a0 */
  push32(0x10d1f0f5u); f_10d217a0();
  /* 10d1f0f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f0f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1f0fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f0ff jne 0x10d1f112 */
  if (!C.zf) goto L_10d1f112;
  /* 10d1f101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1f104 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f107 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10d1f10b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1f10e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d1f110 jmp 0x10d1f12c */
  goto L_10d1f12c;
L_10d1f112:;
  /* 10d1f112 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f116 jge 0x10d1f123 */
  if ((C.sf==C.of)) goto L_10d1f123;
  /* 10d1f118 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1f11b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f11e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d1f121 jmp 0x10d1f12c */
  goto L_10d1f12c;
L_10d1f123:;
  /* 10d1f123 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1f126 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f129 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d1f12c:;
  /* 10d1f12c jmp 0x10d1f0c4 */
  goto L_10d1f0c4;
L_10d1f12e:;
  /* 10d1f12e mov esp, ebp */
  ESP = (EBP);
  /* 10d1f130 pop ebp */
  EBP = (pop32());
  /* 10d1f131 ret  */
  ESPCHK(0x10d1f0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f140 @ 0x10d1f140 (186 bytes, 50 insns) */
void f_10d1f140(void) {
  FTRACE(0x10d1f140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f140 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f141 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f143 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f144 mov eax, dword ptr [0x10d3e69c] */
  EAX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f149 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f14a call 0x10d15f00 */
  push32(0x10d1f14fu); f_10d15f00();
  /* 10d1f14f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f152 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f154 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f157 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d1f15a mov dword ptr [0x10d3e698], ecx */
  w32((uint32_t)(0x10d3e698), (ECX));
  /* 10d1f160 mov edx, dword ptr [0x10d3e6a0] */
  EDX = (r32((uint32_t)(0x10d3e6a0)));
  /* 10d1f166 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f167 call 0x10d15f00 */
  push32(0x10d1f16cu); f_10d15f00();
  /* 10d1f16c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f16f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f171 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f174 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d1f177 mov dword ptr [0x10d3e690], ecx */
  w32((uint32_t)(0x10d3e690), (ECX));
  /* 10d1f17d mov dword ptr [0x10d3e68c], 0 */
  w32((uint32_t)(0x10d3e68c), (0x0u));
  /* 10d1f187 cmp dword ptr [0x10d3e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f18e je 0x10d1f199 */
  if (C.zf) goto L_10d1f199;
  /* 10d1f190 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d1f197 jmp 0x10d1f1ab */
  goto L_10d1f1ab;
L_10d1f199:;
  /* 10d1f199 mov edx, dword ptr [0x10d3e69c] */
  EDX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f19f push edx */
  push32((uint32_t)(EDX));
  /* 10d1f1a0 call 0x10d1fbe0 */
  push32(0x10d1f1a5u); f_10d1fbe0();
  /* 10d1f1a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f1a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1f1ab:;
  /* 10d1f1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1f1ae mov dword ptr [0x10d3e694], eax */
  w32((uint32_t)(0x10d3e694), (EAX));
  /* 10d1f1b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1f1b5 push 0x10d1f200 */
  push32((uint32_t)(0x10d1f200u));
  /* 10d1f1ba call dword ptr [0x10d4026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4026c))), 0x10d1f1c0u);
  /* 10d1f1c0 mov ecx, dword ptr [0x10d3e6a4] */
  ECX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f1c6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f1cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1f1ce je 0x10d1f1ec */
  if (C.zf) goto L_10d1f1ec;
  /* 10d1f1d0 mov edx, dword ptr [0x10d3e6a4] */
  EDX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f1d6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1f1dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1f1de je 0x10d1f1ec */
  if (C.zf) goto L_10d1f1ec;
  /* 10d1f1e0 mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f1e5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f1e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f1ea jne 0x10d1f1f6 */
  if (!C.zf) goto L_10d1f1f6;
L_10d1f1ec:;
  /* 10d1f1ec mov dword ptr [0x10d3e6a4], 0 */
  w32((uint32_t)(0x10d3e6a4), (0x0u));
L_10d1f1f6:;
  /* 10d1f1f6 mov esp, ebp */
  ESP = (EBP);
  /* 10d1f1f8 pop ebp */
  EBP = (pop32());
  /* 10d1f1f9 ret  */
  ESPCHK(0x10d1f140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f200 @ 0x10d1f200 (804 bytes, 220 insns) */
void f_10d1f200(void) {
  FTRACE(0x10d1f200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f200 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f201 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f203 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f209 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f20a call 0x10d1fb60 */
  push32(0x10d1f20fu); f_10d1fb60();
  /* 10d1f20f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f212 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10d1f215 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d1f217 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d1f21a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f21b mov edx, dword ptr [0x10d3e690] */
  EDX = (r32((uint32_t)(0x10d3e690)));
  /* 10d1f221 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1f223 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f225 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1f22b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f231 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f232 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f235 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f236 call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f23cu);
  /* 10d1f23c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f23e jne 0x10d1f254 */
  if (!C.zf) goto L_10d1f254;
  /* 10d1f240 mov dword ptr [0x10d3e6a4], 0 */
  w32((uint32_t)(0x10d3e6a4), (0x0u));
  /* 10d1f24a mov eax, 1 */
  EAX = (0x1u);
  /* 10d1f24f jmp 0x10d1f51e */
  goto L_10d1f51e;
L_10d1f254:;
  /* 10d1f254 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d1f257 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f258 mov edx, dword ptr [0x10d3e6a0] */
  EDX = (r32((uint32_t)(0x10d3e6a0)));
  /* 10d1f25e push edx */
  push32((uint32_t)(EDX));
  /* 10d1f25f call 0x10d217a0 */
  push32(0x10d1f264u); f_10d217a0();
  /* 10d1f264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f269 jne 0x10d1f38f */
  if (!C.zf) goto L_10d1f38f;
  /* 10d1f26f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d1f271 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d1f274 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f275 mov ecx, dword ptr [0x10d3e698] */
  ECX = (r32((uint32_t)(0x10d3e698)));
  /* 10d1f27b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1f27d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f27f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f285 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f28b push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f28c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f28f push edx */
  push32((uint32_t)(EDX));
  /* 10d1f290 call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f296u);
  /* 10d1f296 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f298 jne 0x10d1f2ae */
  if (!C.zf) goto L_10d1f2ae;
  /* 10d1f29a mov dword ptr [0x10d3e6a4], 0 */
  w32((uint32_t)(0x10d3e6a4), (0x0u));
  /* 10d1f2a4 mov eax, 1 */
  EAX = (0x1u);
  /* 10d1f2a9 jmp 0x10d1f51e */
  goto L_10d1f51e;
L_10d1f2ae:;
  /* 10d1f2ae lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d1f2b1 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f2b2 mov ecx, dword ptr [0x10d3e69c] */
  ECX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f2b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f2b9 call 0x10d217a0 */
  push32(0x10d1f2beu); f_10d217a0();
  /* 10d1f2be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f2c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f2c3 jne 0x10d1f2f0 */
  if (!C.zf) goto L_10d1f2f0;
  /* 10d1f2c5 mov edx, dword ptr [0x10d3e6a4] */
  EDX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f2cb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1f2d1 mov dword ptr [0x10d3e6a4], edx */
  w32((uint32_t)(0x10d3e6a4), (EDX));
  /* 10d1f2d7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f2da mov dword ptr [0x10d3e6a8], eax */
  w32((uint32_t)(0x10d3e6a8), (EAX));
  /* 10d1f2df mov ecx, dword ptr [0x10d3e6a8] */
  ECX = (r32((uint32_t)(0x10d3e6a8)));
  /* 10d1f2e5 mov dword ptr [0x10d3e68c], ecx */
  w32((uint32_t)(0x10d3e68c), (ECX));
  /* 10d1f2eb jmp 0x10d1f38f */
  goto L_10d1f38f;
L_10d1f2f0:;
  /* 10d1f2f0 mov edx, dword ptr [0x10d3e6a4] */
  EDX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f2f6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1f2f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1f2fb jne 0x10d1f38f */
  if (!C.zf) goto L_10d1f38f;
  /* 10d1f301 cmp dword ptr [0x10d3e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f308 je 0x10d1f35d */
  if (C.zf) goto L_10d1f35d;
  /* 10d1f30a mov eax, dword ptr [0x10d3e694] */
  EAX = (r32((uint32_t)(0x10d3e694)));
  /* 10d1f30f push eax */
  push32((uint32_t)(EAX));
  /* 10d1f310 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d1f313 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f314 mov edx, dword ptr [0x10d3e69c] */
  EDX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f31a push edx */
  push32((uint32_t)(EDX));
  /* 10d1f31b call 0x10d21870 */
  push32(0x10d1f320u); f_10d21870();
  /* 10d1f320 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f323 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f325 jne 0x10d1f35d */
  if (!C.zf) goto L_10d1f35d;
  /* 10d1f327 mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f32c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10d1f32e mov dword ptr [0x10d3e6a4], eax */
  w32((uint32_t)(0x10d3e6a4), (EAX));
  /* 10d1f333 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f336 mov dword ptr [0x10d3e6a8], ecx */
  w32((uint32_t)(0x10d3e6a8), (ECX));
  /* 10d1f33c mov edx, dword ptr [0x10d3e69c] */
  EDX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f342 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f343 call 0x10d15f00 */
  push32(0x10d1f348u); f_10d15f00();
  /* 10d1f348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f34b cmp eax, dword ptr [0x10d3e694] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3e694))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f351 jne 0x10d1f35b */
  if (!C.zf) goto L_10d1f35b;
  /* 10d1f353 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f356 mov dword ptr [0x10d3e68c], eax */
  w32((uint32_t)(0x10d3e68c), (EAX));
L_10d1f35b:;
  /* 10d1f35b jmp 0x10d1f38f */
  goto L_10d1f38f;
L_10d1f35d:;
  /* 10d1f35d mov ecx, dword ptr [0x10d3e6a4] */
  ECX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f363 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f366 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1f368 jne 0x10d1f38f */
  if (!C.zf) goto L_10d1f38f;
  /* 10d1f36a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f36d push edx */
  push32((uint32_t)(EDX));
  /* 10d1f36e call 0x10d1f8a0 */
  push32(0x10d1f373u); f_10d1f8a0();
  /* 10d1f373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f378 je 0x10d1f38f */
  if (C.zf) goto L_10d1f38f;
  /* 10d1f37a mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f37f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10d1f381 mov dword ptr [0x10d3e6a4], eax */
  w32((uint32_t)(0x10d3e6a4), (EAX));
  /* 10d1f386 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f389 mov dword ptr [0x10d3e6a8], ecx */
  w32((uint32_t)(0x10d3e6a8), (ECX));
L_10d1f38f:;
  /* 10d1f38f mov edx, dword ptr [0x10d3e6a4] */
  EDX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f395 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1f39b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f3a1 je 0x10d1f511 */
  if (C.zf) goto L_10d1f511;
  /* 10d1f3a7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d1f3a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d1f3ac push eax */
  push32((uint32_t)(EAX));
  /* 10d1f3ad mov ecx, dword ptr [0x10d3e698] */
  ECX = (r32((uint32_t)(0x10d3e698)));
  /* 10d1f3b3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1f3b5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f3b7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f3bd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f3c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f3c7 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f3c8 call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f3ceu);
  /* 10d1f3ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f3d0 jne 0x10d1f3e6 */
  if (!C.zf) goto L_10d1f3e6;
  /* 10d1f3d2 mov dword ptr [0x10d3e6a4], 0 */
  w32((uint32_t)(0x10d3e6a4), (0x0u));
  /* 10d1f3dc mov eax, 1 */
  EAX = (0x1u);
  /* 10d1f3e1 jmp 0x10d1f51e */
  goto L_10d1f51e;
L_10d1f3e6:;
  /* 10d1f3e6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d1f3e9 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f3ea mov ecx, dword ptr [0x10d3e69c] */
  ECX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f3f1 call 0x10d217a0 */
  push32(0x10d1f3f6u); f_10d217a0();
  /* 10d1f3f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f3f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f3fb jne 0x10d1f4b0 */
  if (!C.zf) goto L_10d1f4b0;
  /* 10d1f401 mov edx, dword ptr [0x10d3e6a4] */
  EDX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f407 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d1f40a mov dword ptr [0x10d3e6a4], edx */
  w32((uint32_t)(0x10d3e6a4), (EDX));
  /* 10d1f410 cmp dword ptr [0x10d3e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f417 je 0x10d1f43a */
  if (C.zf) goto L_10d1f43a;
  /* 10d1f419 mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f41e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10d1f421 mov dword ptr [0x10d3e6a4], eax */
  w32((uint32_t)(0x10d3e6a4), (EAX));
  /* 10d1f426 cmp dword ptr [0x10d3e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f42d jne 0x10d1f438 */
  if (!C.zf) goto L_10d1f438;
  /* 10d1f42f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f432 mov dword ptr [0x10d3e68c], ecx */
  w32((uint32_t)(0x10d3e68c), (ECX));
L_10d1f438:;
  /* 10d1f438 jmp 0x10d1f4ae */
  goto L_10d1f4ae;
L_10d1f43a:;
  /* 10d1f43a cmp dword ptr [0x10d3e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f441 je 0x10d1f48f */
  if (C.zf) goto L_10d1f48f;
  /* 10d1f443 mov edx, dword ptr [0x10d3e69c] */
  EDX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f449 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f44a call 0x10d15f00 */
  push32(0x10d1f44fu); f_10d15f00();
  /* 10d1f44f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f452 cmp eax, dword ptr [0x10d3e694] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3e694))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f458 jne 0x10d1f48f */
  if (!C.zf) goto L_10d1f48f;
  /* 10d1f45a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1f45c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f45f push eax */
  push32((uint32_t)(EAX));
  /* 10d1f460 call 0x10d1f8f0 */
  push32(0x10d1f465u); f_10d1f8f0();
  /* 10d1f465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f46a je 0x10d1f48d */
  if (C.zf) goto L_10d1f48d;
  /* 10d1f46c mov ecx, dword ptr [0x10d3e6a4] */
  ECX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f472 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d1f475 mov dword ptr [0x10d3e6a4], ecx */
  w32((uint32_t)(0x10d3e6a4), (ECX));
  /* 10d1f47b cmp dword ptr [0x10d3e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f482 jne 0x10d1f48d */
  if (!C.zf) goto L_10d1f48d;
  /* 10d1f484 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f487 mov dword ptr [0x10d3e68c], edx */
  w32((uint32_t)(0x10d3e68c), (EDX));
L_10d1f48d:;
  /* 10d1f48d jmp 0x10d1f4ae */
  goto L_10d1f4ae;
L_10d1f48f:;
  /* 10d1f48f mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f494 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10d1f497 mov dword ptr [0x10d3e6a4], eax */
  w32((uint32_t)(0x10d3e6a4), (EAX));
  /* 10d1f49c cmp dword ptr [0x10d3e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f4a3 jne 0x10d1f4ae */
  if (!C.zf) goto L_10d1f4ae;
  /* 10d1f4a5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f4a8 mov dword ptr [0x10d3e68c], ecx */
  w32((uint32_t)(0x10d3e68c), (ECX));
L_10d1f4ae:;
  /* 10d1f4ae jmp 0x10d1f511 */
  goto L_10d1f511;
L_10d1f4b0:;
  /* 10d1f4b0 cmp dword ptr [0x10d3e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f4b7 jne 0x10d1f511 */
  if (!C.zf) goto L_10d1f511;
  /* 10d1f4b9 cmp dword ptr [0x10d3e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f4c0 je 0x10d1f511 */
  if (C.zf) goto L_10d1f511;
  /* 10d1f4c2 mov edx, dword ptr [0x10d3e694] */
  EDX = (r32((uint32_t)(0x10d3e694)));
  /* 10d1f4c8 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f4c9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d1f4cc push eax */
  push32((uint32_t)(EAX));
  /* 10d1f4cd mov ecx, dword ptr [0x10d3e69c] */
  ECX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f4d4 call 0x10d21870 */
  push32(0x10d1f4d9u); f_10d21870();
  /* 10d1f4d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f4dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f4de jne 0x10d1f511 */
  if (!C.zf) goto L_10d1f511;
  /* 10d1f4e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1f4e2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f4e5 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f4e6 call 0x10d1f8f0 */
  push32(0x10d1f4ebu); f_10d1f8f0();
  /* 10d1f4eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f4ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f4f0 je 0x10d1f511 */
  if (C.zf) goto L_10d1f511;
  /* 10d1f4f2 mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f4f7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10d1f4fa mov dword ptr [0x10d3e6a4], eax */
  w32((uint32_t)(0x10d3e6a4), (EAX));
  /* 10d1f4ff cmp dword ptr [0x10d3e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f506 jne 0x10d1f511 */
  if (!C.zf) goto L_10d1f511;
  /* 10d1f508 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f50b mov dword ptr [0x10d3e68c], ecx */
  w32((uint32_t)(0x10d3e68c), (ECX));
L_10d1f511:;
  /* 10d1f511 mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f516 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f519 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1f51b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f51d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10d1f51e:;
  /* 10d1f51e mov esp, ebp */
  ESP = (EBP);
  /* 10d1f520 pop ebp */
  EBP = (pop32());
  /* 10d1f521 ret 4 */
  ESPCHK(0x10d1f200u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f530 @ 0x10d1f530 (116 bytes, 33 insns) */
void f_10d1f530(void) {
  FTRACE(0x10d1f530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f530 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f531 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f533 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f534 mov eax, dword ptr [0x10d3e69c] */
  EAX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f539 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f53a call 0x10d15f00 */
  push32(0x10d1f53fu); f_10d15f00();
  /* 10d1f53f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f542 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f544 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f547 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d1f54a mov dword ptr [0x10d3e698], ecx */
  w32((uint32_t)(0x10d3e698), (ECX));
  /* 10d1f550 cmp dword ptr [0x10d3e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f557 je 0x10d1f562 */
  if (C.zf) goto L_10d1f562;
  /* 10d1f559 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d1f560 jmp 0x10d1f574 */
  goto L_10d1f574;
L_10d1f562:;
  /* 10d1f562 mov edx, dword ptr [0x10d3e69c] */
  EDX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f568 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f569 call 0x10d1fbe0 */
  push32(0x10d1f56eu); f_10d1fbe0();
  /* 10d1f56e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f571 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1f574:;
  /* 10d1f574 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1f577 mov dword ptr [0x10d3e694], eax */
  w32((uint32_t)(0x10d3e694), (EAX));
  /* 10d1f57c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1f57e push 0x10d1f5b0 */
  push32((uint32_t)(0x10d1f5b0u));
  /* 10d1f583 call dword ptr [0x10d4026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4026c))), 0x10d1f589u);
  /* 10d1f589 mov ecx, dword ptr [0x10d3e6a4] */
  ECX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f58f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f592 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1f594 jne 0x10d1f5a0 */
  if (!C.zf) goto L_10d1f5a0;
  /* 10d1f596 mov dword ptr [0x10d3e6a4], 0 */
  w32((uint32_t)(0x10d3e6a4), (0x0u));
L_10d1f5a0:;
  /* 10d1f5a0 mov esp, ebp */
  ESP = (EBP);
  /* 10d1f5a2 pop ebp */
  EBP = (pop32());
  /* 10d1f5a3 ret  */
  ESPCHK(0x10d1f530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5b0 @ 0x10d1f5b0 (287 bytes, 86 insns) */
void f_10d1f5b0(void) {
  FTRACE(0x10d1f5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f5b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f5b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f5b9 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f5ba call 0x10d1fb60 */
  push32(0x10d1f5bfu); f_10d1fb60();
  /* 10d1f5bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f5c2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10d1f5c5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d1f5c7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d1f5ca push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f5cb mov edx, dword ptr [0x10d3e698] */
  EDX = (r32((uint32_t)(0x10d3e698)));
  /* 10d1f5d1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1f5d3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f5d5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1f5db add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f5e1 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f5e2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f5e5 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f5e6 call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f5ecu);
  /* 10d1f5ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f5ee jne 0x10d1f604 */
  if (!C.zf) goto L_10d1f604;
  /* 10d1f5f0 mov dword ptr [0x10d3e6a4], 0 */
  w32((uint32_t)(0x10d3e6a4), (0x0u));
  /* 10d1f5fa mov eax, 1 */
  EAX = (0x1u);
  /* 10d1f5ff jmp 0x10d1f6c9 */
  goto L_10d1f6c9;
L_10d1f604:;
  /* 10d1f604 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d1f607 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f608 mov edx, dword ptr [0x10d3e69c] */
  EDX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f60e push edx */
  push32((uint32_t)(EDX));
  /* 10d1f60f call 0x10d217a0 */
  push32(0x10d1f614u); f_10d217a0();
  /* 10d1f614 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f619 jne 0x10d1f659 */
  if (!C.zf) goto L_10d1f659;
  /* 10d1f61b cmp dword ptr [0x10d3e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f622 jne 0x10d1f636 */
  if (!C.zf) goto L_10d1f636;
  /* 10d1f624 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1f626 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f629 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f62a call 0x10d1f8f0 */
  push32(0x10d1f62fu); f_10d1f8f0();
  /* 10d1f62f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f634 je 0x10d1f657 */
  if (C.zf) goto L_10d1f657;
L_10d1f636:;
  /* 10d1f636 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f639 mov dword ptr [0x10d3e6a8], ecx */
  w32((uint32_t)(0x10d3e6a8), (ECX));
  /* 10d1f63f mov edx, dword ptr [0x10d3e6a8] */
  EDX = (r32((uint32_t)(0x10d3e6a8)));
  /* 10d1f645 mov dword ptr [0x10d3e68c], edx */
  w32((uint32_t)(0x10d3e68c), (EDX));
  /* 10d1f64b mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f650 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10d1f652 mov dword ptr [0x10d3e6a4], eax */
  w32((uint32_t)(0x10d3e6a4), (EAX));
L_10d1f657:;
  /* 10d1f657 jmp 0x10d1f6bc */
  goto L_10d1f6bc;
L_10d1f659:;
  /* 10d1f659 cmp dword ptr [0x10d3e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f660 jne 0x10d1f6bc */
  if (!C.zf) goto L_10d1f6bc;
  /* 10d1f662 cmp dword ptr [0x10d3e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d3e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f669 je 0x10d1f6bc */
  if (C.zf) goto L_10d1f6bc;
  /* 10d1f66b mov ecx, dword ptr [0x10d3e694] */
  ECX = (r32((uint32_t)(0x10d3e694)));
  /* 10d1f671 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f672 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10d1f675 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f676 mov eax, dword ptr [0x10d3e69c] */
  EAX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f67b push eax */
  push32((uint32_t)(EAX));
  /* 10d1f67c call 0x10d21870 */
  push32(0x10d1f681u); f_10d21870();
  /* 10d1f681 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f686 jne 0x10d1f6bc */
  if (!C.zf) goto L_10d1f6bc;
  /* 10d1f688 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1f68a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f68d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f68e call 0x10d1f8f0 */
  push32(0x10d1f693u); f_10d1f8f0();
  /* 10d1f693 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f698 je 0x10d1f6bc */
  if (C.zf) goto L_10d1f6bc;
  /* 10d1f69a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f69d mov dword ptr [0x10d3e6a8], edx */
  w32((uint32_t)(0x10d3e6a8), (EDX));
  /* 10d1f6a3 mov eax, dword ptr [0x10d3e6a8] */
  EAX = (r32((uint32_t)(0x10d3e6a8)));
  /* 10d1f6a8 mov dword ptr [0x10d3e68c], eax */
  w32((uint32_t)(0x10d3e68c), (EAX));
  /* 10d1f6ad mov ecx, dword ptr [0x10d3e6a4] */
  ECX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f6b3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f6b6 mov dword ptr [0x10d3e6a4], ecx */
  w32((uint32_t)(0x10d3e6a4), (ECX));
L_10d1f6bc:;
  /* 10d1f6bc mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f6c1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f6c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1f6c6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f6c8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10d1f6c9:;
  /* 10d1f6c9 mov esp, ebp */
  ESP = (EBP);
  /* 10d1f6cb pop ebp */
  EBP = (pop32());
  /* 10d1f6cc ret 4 */
  ESPCHK(0x10d1f5b0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f6d0 @ 0x10d1f6d0 (69 bytes, 20 insns) */
void f_10d1f6d0(void) {
  FTRACE(0x10d1f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f6d3 mov eax, dword ptr [0x10d3e6a0] */
  EAX = (r32((uint32_t)(0x10d3e6a0)));
  /* 10d1f6d8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f6d9 call 0x10d15f00 */
  push32(0x10d1f6deu); f_10d15f00();
  /* 10d1f6de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f6e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f6e3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f6e6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d1f6e9 mov dword ptr [0x10d3e690], ecx */
  w32((uint32_t)(0x10d3e690), (ECX));
  /* 10d1f6ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1f6f1 push 0x10d1f720 */
  push32((uint32_t)(0x10d1f720u));
  /* 10d1f6f6 call dword ptr [0x10d4026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4026c))), 0x10d1f6fcu);
  /* 10d1f6fc mov edx, dword ptr [0x10d3e6a4] */
  EDX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f702 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1f705 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1f707 jne 0x10d1f713 */
  if (!C.zf) goto L_10d1f713;
  /* 10d1f709 mov dword ptr [0x10d3e6a4], 0 */
  w32((uint32_t)(0x10d3e6a4), (0x0u));
L_10d1f713:;
  /* 10d1f713 pop ebp */
  EBP = (pop32());
  /* 10d1f714 ret  */
  ESPCHK(0x10d1f6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f720 @ 0x10d1f720 (172 bytes, 54 insns) */
void f_10d1f720(void) {
  FTRACE(0x10d1f720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f720 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f721 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f723 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f729 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f72a call 0x10d1fb60 */
  push32(0x10d1f72fu); f_10d1fb60();
  /* 10d1f72f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f732 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10d1f735 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d1f737 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d1f73a push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f73b mov edx, dword ptr [0x10d3e690] */
  EDX = (r32((uint32_t)(0x10d3e690)));
  /* 10d1f741 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1f743 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f745 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1f74b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f751 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f752 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f755 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f756 call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f75cu);
  /* 10d1f75c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f75e jne 0x10d1f771 */
  if (!C.zf) goto L_10d1f771;
  /* 10d1f760 mov dword ptr [0x10d3e6a4], 0 */
  w32((uint32_t)(0x10d3e6a4), (0x0u));
  /* 10d1f76a mov eax, 1 */
  EAX = (0x1u);
  /* 10d1f76f jmp 0x10d1f7c6 */
  goto L_10d1f7c6;
L_10d1f771:;
  /* 10d1f771 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d1f774 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f775 mov edx, dword ptr [0x10d3e6a0] */
  EDX = (r32((uint32_t)(0x10d3e6a0)));
  /* 10d1f77b push edx */
  push32((uint32_t)(EDX));
  /* 10d1f77c call 0x10d217a0 */
  push32(0x10d1f781u); f_10d217a0();
  /* 10d1f781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f784 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f786 jne 0x10d1f7b9 */
  if (!C.zf) goto L_10d1f7b9;
  /* 10d1f788 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f78b push eax */
  push32((uint32_t)(EAX));
  /* 10d1f78c call 0x10d1f8a0 */
  push32(0x10d1f791u); f_10d1f8a0();
  /* 10d1f791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f794 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f796 je 0x10d1f7b9 */
  if (C.zf) goto L_10d1f7b9;
  /* 10d1f798 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d1f79b mov dword ptr [0x10d3e6a8], ecx */
  w32((uint32_t)(0x10d3e6a8), (ECX));
  /* 10d1f7a1 mov edx, dword ptr [0x10d3e6a8] */
  EDX = (r32((uint32_t)(0x10d3e6a8)));
  /* 10d1f7a7 mov dword ptr [0x10d3e68c], edx */
  w32((uint32_t)(0x10d3e68c), (EDX));
  /* 10d1f7ad mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f7b2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10d1f7b4 mov dword ptr [0x10d3e6a4], eax */
  w32((uint32_t)(0x10d3e6a4), (EAX));
L_10d1f7b9:;
  /* 10d1f7b9 mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f7be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f7c1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d1f7c3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f7c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10d1f7c6:;
  /* 10d1f7c6 mov esp, ebp */
  ESP = (EBP);
  /* 10d1f7c8 pop ebp */
  EBP = (pop32());
  /* 10d1f7c9 ret 4 */
  ESPCHK(0x10d1f720u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f7d0 @ 0x10d1f7d0 (43 bytes, 11 insns) */
void f_10d1f7d0(void) {
  FTRACE(0x10d1f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f7d3 mov eax, dword ptr [0x10d3e6a4] */
  EAX = (r32((uint32_t)(0x10d3e6a4)));
  /* 10d1f7d8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f7dd mov dword ptr [0x10d3e6a4], eax */
  w32((uint32_t)(0x10d3e6a4), (EAX));
  /* 10d1f7e2 call dword ptr [0x10d4025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d4025c))), 0x10d1f7e8u);
  /* 10d1f7e8 mov dword ptr [0x10d3e6a8], eax */
  w32((uint32_t)(0x10d3e6a8), (EAX));
  /* 10d1f7ed mov ecx, dword ptr [0x10d3e6a8] */
  ECX = (r32((uint32_t)(0x10d3e6a8)));
  /* 10d1f7f3 mov dword ptr [0x10d3e68c], ecx */
  w32((uint32_t)(0x10d3e68c), (ECX));
  /* 10d1f7f9 pop ebp */
  EBP = (pop32());
  /* 10d1f7fa ret  */
  ESPCHK(0x10d1f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f800 @ 0x10d1f800 (155 bytes, 57 insns) */
void f_10d1f800(void) {
  FTRACE(0x10d1f800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f800 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f801 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f806 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f80a je 0x10d1f82b */
  if (C.zf) goto L_10d1f82b;
  /* 10d1f80c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f80f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d1f812 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1f814 je 0x10d1f82b */
  if (C.zf) goto L_10d1f82b;
  /* 10d1f816 push 0x10d3a6e4 */
  push32((uint32_t)(0x10d3a6e4u));
  /* 10d1f81b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f81e push edx */
  push32((uint32_t)(EDX));
  /* 10d1f81f call 0x10d1ed60 */
  push32(0x10d1f824u); f_10d1ed60();
  /* 10d1f824 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f827 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f829 jne 0x10d1f853 */
  if (!C.zf) goto L_10d1f853;
L_10d1f82b:;
  /* 10d1f82b push 8 */
  push32((uint32_t)(0x8u));
  /* 10d1f82d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d1f830 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f831 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10d1f836 mov ecx, dword ptr [0x10d3e6a8] */
  ECX = (r32((uint32_t)(0x10d3e6a8)));
  /* 10d1f83c push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f83d call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f843u);
  /* 10d1f843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f845 jne 0x10d1f84b */
  if (!C.zf) goto L_10d1f84b;
  /* 10d1f847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f849 jmp 0x10d1f897 */
  goto L_10d1f897;
L_10d1f84b:;
  /* 10d1f84b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10d1f84e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d1f851 jmp 0x10d1f88b */
  goto L_10d1f88b;
L_10d1f853:;
  /* 10d1f853 push 0x10d3a6e0 */
  push32((uint32_t)(0x10d3a6e0u));
  /* 10d1f858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f85b push eax */
  push32((uint32_t)(EAX));
  /* 10d1f85c call 0x10d1ed60 */
  push32(0x10d1f861u); f_10d1ed60();
  /* 10d1f861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f866 jne 0x10d1f88b */
  if (!C.zf) goto L_10d1f88b;
  /* 10d1f868 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d1f86a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10d1f86d push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f86e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d1f870 mov edx, dword ptr [0x10d3e6a8] */
  EDX = (r32((uint32_t)(0x10d3e6a8)));
  /* 10d1f876 push edx */
  push32((uint32_t)(EDX));
  /* 10d1f877 call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f87du);
  /* 10d1f87d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f87f jne 0x10d1f885 */
  if (!C.zf) goto L_10d1f885;
  /* 10d1f881 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f883 jmp 0x10d1f897 */
  goto L_10d1f897;
L_10d1f885:;
  /* 10d1f885 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d1f888 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d1f88b:;
  /* 10d1f88b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f88e push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f88f call 0x10d21980 */
  push32(0x10d1f894u); f_10d21980();
  /* 10d1f894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d1f897:;
  /* 10d1f897 mov esp, ebp */
  ESP = (EBP);
  /* 10d1f899 pop ebp */
  EBP = (pop32());
  /* 10d1f89a ret  */
  ESPCHK(0x10d1f800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8a0 @ 0x10d1f8a0 (79 bytes, 26 insns) */
void f_10d1f8a0(void) {
  FTRACE(0x10d1f8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f8a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f8a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f8a6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10d1f8aa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10d1f8ae mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1f8b5 jmp 0x10d1f8c0 */
  goto L_10d1f8c0;
L_10d1f8b7:;
  /* 10d1f8b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1f8ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f8bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d1f8c0:;
  /* 10d1f8c0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f8c4 jae 0x10d1f8e6 */
  if (!C.cf) goto L_10d1f8e6;
  /* 10d1f8c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1f8c9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1f8cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1f8d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d1f8d4 mov cx, word ptr [eax*2 + 0x10d3d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10d3d9c4)));
  /* 10d1f8dc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f8de jne 0x10d1f8e4 */
  if (!C.zf) goto L_10d1f8e4;
  /* 10d1f8e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f8e2 jmp 0x10d1f8eb */
  goto L_10d1f8eb;
L_10d1f8e4:;
  /* 10d1f8e4 jmp 0x10d1f8b7 */
  goto L_10d1f8b7;
L_10d1f8e6:;
  /* 10d1f8e6 mov eax, 1 */
  EAX = (0x1u);
L_10d1f8eb:;
  /* 10d1f8eb mov esp, ebp */
  ESP = (EBP);
  /* 10d1f8ed pop ebp */
  EBP = (pop32());
  /* 10d1f8ee ret  */
  ESPCHK(0x10d1f8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8f0 @ 0x10d1f8f0 (135 bytes, 48 insns) */
void f_10d1f8f0(void) {
  FTRACE(0x10d1f8f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f8f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f8f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f8f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f8f6 push esi */
  push32((uint32_t)(ESI));
  /* 10d1f8f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1f8fa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f8ff and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f904 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f909 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10d1f90c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f911 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1f914 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d1f916 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10d1f919 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f91a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1f91c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1f91f push edx */
  push32((uint32_t)(EDX));
  /* 10d1f920 call dword ptr [0x10d3e6ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d3e6ac))), 0x10d1f926u);
  /* 10d1f926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f928 jne 0x10d1f92e */
  if (!C.zf) goto L_10d1f92e;
  /* 10d1f92a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f92c jmp 0x10d1f972 */
  goto L_10d1f972;
L_10d1f92e:;
  /* 10d1f92e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10d1f931 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f932 call 0x10d1fb60 */
  push32(0x10d1f937u); f_10d1fb60();
  /* 10d1f937 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f93a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f93d je 0x10d1f96d */
  if (C.zf) goto L_10d1f96d;
  /* 10d1f93f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f943 je 0x10d1f96d */
  if (C.zf) goto L_10d1f96d;
  /* 10d1f945 mov ecx, dword ptr [0x10d3e69c] */
  ECX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f94b push ecx */
  push32((uint32_t)(ECX));
  /* 10d1f94c call 0x10d1fbe0 */
  push32(0x10d1f951u); f_10d1fbe0();
  /* 10d1f951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f954 mov esi, eax */
  ESI = (EAX);
  /* 10d1f956 mov edx, dword ptr [0x10d3e69c] */
  EDX = (r32((uint32_t)(0x10d3e69c)));
  /* 10d1f95c push edx */
  push32((uint32_t)(EDX));
  /* 10d1f95d call 0x10d15f00 */
  push32(0x10d1f962u); f_10d15f00();
  /* 10d1f962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f965 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f967 jne 0x10d1f96d */
  if (!C.zf) goto L_10d1f96d;
  /* 10d1f969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1f96b jmp 0x10d1f972 */
  goto L_10d1f972;
L_10d1f96d:;
  /* 10d1f96d mov eax, 1 */
  EAX = (0x1u);
L_10d1f972:;
  /* 10d1f972 pop esi */
  ESI = (pop32());
  /* 10d1f973 mov esp, ebp */
  ESP = (EBP);
  /* 10d1f975 pop ebp */
  EBP = (pop32());
  /* 10d1f976 ret  */
  ESPCHK(0x10d1f8f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f980 @ 0x10d1f980 (77 bytes, 18 insns) */
void f_10d1f980(void) {
  FTRACE(0x10d1f980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f980 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f981 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f983 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f989 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10d1f993 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10d1f999 push eax */
  push32((uint32_t)(EAX));
  /* 10d1f99a call dword ptr [0x10d40258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40258))), 0x10d1f9a0u);
  /* 10d1f9a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1f9a2 je 0x10d1f9b9 */
  if (C.zf) goto L_10d1f9b9;
  /* 10d1f9a4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f9ab jne 0x10d1f9b9 */
  if (!C.zf) goto L_10d1f9b9;
  /* 10d1f9ad mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10d1f9b7 jmp 0x10d1f9c3 */
  goto L_10d1f9c3;
L_10d1f9b9:;
  /* 10d1f9b9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10d1f9c3:;
  /* 10d1f9c3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10d1f9c9 mov esp, ebp */
  ESP = (EBP);
  /* 10d1f9cb pop ebp */
  EBP = (pop32());
  /* 10d1f9cc ret  */
  ESPCHK(0x10d1f980u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10d1f9d0 (388 bytes, 118 insns) */
void f_10d1f9d0(void) {
  FTRACE(0x10d1f9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1f9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1f9d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1f9d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1f9d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d1f9dd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10d1f9e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d1f9eb:;
  /* 10d1f9eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1f9ee cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1f9f1 jg 0x10d1fb38 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1fb38;
  /* 10d1f9f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d1f9fa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1f9fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d1f9fe sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1fa00 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d1fa02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d1fa05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fa08 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fa0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fa0e cmp edx, dword ptr [ecx + 0x10d3d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10d3d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fa14 jne 0x10d1fb0e */
  if (!C.zf) goto L_10d1fb0e;
  /* 10d1fa1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1fa1d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d1fa20 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fa24 ja 0x10d1fa47 */
  if ((!C.cf&&!C.zf)) goto L_10d1fa47;
  /* 10d1fa26 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fa2a je 0x10d1fab9 */
  if (C.zf) goto L_10d1fab9;
  /* 10d1fa30 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fa34 je 0x10d1fa64 */
  if (C.zf) goto L_10d1fa64;
  /* 10d1fa36 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fa3a je 0x10d1fa86 */
  if (C.zf) goto L_10d1fa86;
  /* 10d1fa3c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fa40 je 0x10d1faa8 */
  if (C.zf) goto L_10d1faa8;
  /* 10d1fa42 jmp 0x10d1fad8 */
  goto L_10d1fad8;
L_10d1fa47:;
  /* 10d1fa47 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fa4e je 0x10d1fa75 */
  if (C.zf) goto L_10d1fa75;
  /* 10d1fa50 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fa57 je 0x10d1fa97 */
  if (C.zf) goto L_10d1fa97;
  /* 10d1fa59 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fa60 je 0x10d1faca */
  if (C.zf) goto L_10d1faca;
  /* 10d1fa62 jmp 0x10d1fad8 */
  goto L_10d1fad8;
L_10d1fa64:;
  /* 10d1fa64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fa67 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fa6a add ecx, 0x10d3d524 */
  { uint32_t _a=(ECX),_b=(0x10d3d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fa70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1fa73 jmp 0x10d1fad8 */
  goto L_10d1fad8;
L_10d1fa75:;
  /* 10d1fa75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fa78 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fa7b mov eax, dword ptr [edx + 0x10d3d52c] */
  EAX = (r32((uint32_t)(EDX + 0x10d3d52c)));
  /* 10d1fa81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1fa84 jmp 0x10d1fad8 */
  goto L_10d1fad8;
L_10d1fa86:;
  /* 10d1fa86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fa89 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fa8c add ecx, 0x10d3d530 */
  { uint32_t _a=(ECX),_b=(0x10d3d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fa92 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1fa95 jmp 0x10d1fad8 */
  goto L_10d1fad8;
L_10d1fa97:;
  /* 10d1fa97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fa9a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fa9d mov eax, dword ptr [edx + 0x10d3d534] */
  EAX = (r32((uint32_t)(EDX + 0x10d3d534)));
  /* 10d1faa3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d1faa6 jmp 0x10d1fad8 */
  goto L_10d1fad8;
L_10d1faa8:;
  /* 10d1faa8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1faab imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1faae add ecx, 0x10d3d538 */
  { uint32_t _a=(ECX),_b=(0x10d3d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fab4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1fab7 jmp 0x10d1fad8 */
  goto L_10d1fad8;
L_10d1fab9:;
  /* 10d1fab9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fabc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fabf add edx, 0x10d3d53c */
  { uint32_t _a=(EDX),_b=(0x10d3d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fac5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d1fac8 jmp 0x10d1fad8 */
  goto L_10d1fad8;
L_10d1faca:;
  /* 10d1faca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1facd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fad0 add eax, 0x10d3d544 */
  { uint32_t _a=(EAX),_b=(0x10d3d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fad5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d1fad8:;
  /* 10d1fad8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fadc je 0x10d1fae4 */
  if (C.zf) goto L_10d1fae4;
  /* 10d1fade cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fae2 jge 0x10d1fae6 */
  if ((C.sf==C.of)) goto L_10d1fae6;
L_10d1fae4:;
  /* 10d1fae4 jmp 0x10d1fb38 */
  goto L_10d1fb38;
L_10d1fae6:;
  /* 10d1fae6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1fae9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1faec push ecx */
  push32((uint32_t)(ECX));
  /* 10d1faed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1faf0 push edx */
  push32((uint32_t)(EDX));
  /* 10d1faf1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1faf4 push eax */
  push32((uint32_t)(EAX));
  /* 10d1faf5 call 0x10d168f0 */
  push32(0x10d1fafau); f_10d168f0();
  /* 10d1fafa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fafd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1fb00 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fb03 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10d1fb07 mov eax, 1 */
  EAX = (0x1u);
  /* 10d1fb0c jmp 0x10d1fb4e */
  goto L_10d1fb4e;
L_10d1fb0e:;
  /* 10d1fb0e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fb11 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fb14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fb17 cmp eax, dword ptr [edx + 0x10d3d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10d3d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fb1d jae 0x10d1fb2a */
  if (!C.cf) goto L_10d1fb2a;
  /* 10d1fb1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fb22 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1fb25 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d1fb28 jmp 0x10d1fb33 */
  goto L_10d1fb33;
L_10d1fb2a:;
  /* 10d1fb2a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d1fb2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fb30 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d1fb33:;
  /* 10d1fb33 jmp 0x10d1f9eb */
  goto L_10d1f9eb;
L_10d1fb38:;
  /* 10d1fb38 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d1fb3b push eax */
  push32((uint32_t)(EAX));
  /* 10d1fb3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d1fb3f push ecx */
  push32((uint32_t)(ECX));
  /* 10d1fb40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d1fb43 push edx */
  push32((uint32_t)(EDX));
  /* 10d1fb44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fb47 push eax */
  push32((uint32_t)(EAX));
  /* 10d1fb48 call dword ptr [0x10d40264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40264))), 0x10d1fb4eu);
L_10d1fb4e:;
  /* 10d1fb4e mov esp, ebp */
  ESP = (EBP);
  /* 10d1fb50 pop ebp */
  EBP = (pop32());
  /* 10d1fb51 ret 0x10 */
  ESPCHK(0x10d1f9d0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000fb60 @ 0x10d1fb60 (118 bytes, 42 insns) */
void f_10d1fb60(void) {
  FTRACE(0x10d1fb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1fb60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1fb61 mov ebp, esp */
  EBP = (ESP);
  /* 10d1fb63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1fb66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d1fb6d:;
  /* 10d1fb6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fb70 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d1fb72 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10d1fb75 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1fb79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fb7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fb7f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d1fb82 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1fb84 je 0x10d1fbcf */
  if (C.zf) goto L_10d1fbcf;
  /* 10d1fb86 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1fb8a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fb8d jl 0x10d1fba2 */
  if ((C.sf!=C.of)) goto L_10d1fba2;
  /* 10d1fb8f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1fb93 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fb96 jg 0x10d1fba2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1fba2;
  /* 10d1fb98 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10d1fb9b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d1fb9d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10d1fba0 jmp 0x10d1fbbc */
  goto L_10d1fbbc;
L_10d1fba2:;
  /* 10d1fba2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1fba6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fba9 jl 0x10d1fbbc */
  if ((C.sf!=C.of)) goto L_10d1fbbc;
  /* 10d1fbab movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1fbaf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fbb2 jg 0x10d1fbbc */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1fbbc;
  /* 10d1fbb4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10d1fbb7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d1fbb9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10d1fbbc:;
  /* 10d1fbbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1fbbf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d1fbc2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d1fbc6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10d1fbca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1fbcd jmp 0x10d1fb6d */
  goto L_10d1fb6d;
L_10d1fbcf:;
  /* 10d1fbcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1fbd2 mov esp, ebp */
  ESP = (EBP);
  /* 10d1fbd4 pop ebp */
  EBP = (pop32());
  /* 10d1fbd5 ret  */
  ESPCHK(0x10d1fb60u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10d1fbe0 (101 bytes, 36 insns) */
void f_10d1fbe0(void) {
  FTRACE(0x10d1fbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1fbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1fbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1fbe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d1fbe6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d1fbed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fbf0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d1fbf2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10d1fbf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fbf8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fbfb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10d1fbfe:;
  /* 10d1fbfe movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d1fc02 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fc05 jl 0x10d1fc10 */
  if ((C.sf!=C.of)) goto L_10d1fc10;
  /* 10d1fc07 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d1fc0b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fc0e jle 0x10d1fc22 */
  if ((C.zf||C.sf!=C.of)) goto L_10d1fc22;
L_10d1fc10:;
  /* 10d1fc10 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d1fc14 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fc17 jl 0x10d1fc3e */
  if ((C.sf!=C.of)) goto L_10d1fc3e;
  /* 10d1fc19 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d1fc1d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fc20 jg 0x10d1fc3e */
  if ((!C.zf&&C.sf==C.of)) goto L_10d1fc3e;
L_10d1fc22:;
  /* 10d1fc22 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1fc25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fc28 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d1fc2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fc2e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d1fc30 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10d1fc33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fc36 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fc39 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d1fc3c jmp 0x10d1fbfe */
  goto L_10d1fbfe;
L_10d1fc3e:;
  /* 10d1fc3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d1fc41 mov esp, ebp */
  ESP = (EBP);
  /* 10d1fc43 pop ebp */
  EBP = (pop32());
  /* 10d1fc44 ret  */
  ESPCHK(0x10d1fbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc50 @ 0x10d1fc50 (122 bytes, 39 insns) */
void f_10d1fc50(void) {
  FTRACE(0x10d1fc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1fc50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1fc51 mov ebp, esp */
  EBP = (ESP);
  /* 10d1fc53 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1fc54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fc57 cmp eax, dword ptr [0x10d3ff3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d3ff3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fc5d jae 0x10d1fc81 */
  if (!C.cf) goto L_10d1fc81;
  /* 10d1fc5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fc62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d1fc65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fc68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d1fc6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fc6e mov eax, dword ptr [ecx*4 + 0x10d3fe00] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10d3fe00)));
  /* 10d1fc75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d1fc7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1fc7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1fc7f jne 0x10d1fc9c */
  if (!C.zf) goto L_10d1fc9c;
L_10d1fc81:;
  /* 10d1fc81 call 0x10d1afa0 */
  push32(0x10d1fc86u); f_10d1afa0();
  /* 10d1fc86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d1fc8c call 0x10d1afb0 */
  push32(0x10d1fc91u); f_10d1afb0();
  /* 10d1fc91 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d1fc97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1fc9a jmp 0x10d1fcc6 */
  goto L_10d1fcc6;
L_10d1fc9c:;
  /* 10d1fc9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fc9f push edx */
  push32((uint32_t)(EDX));
  /* 10d1fca0 call 0x10d1c7c0 */
  push32(0x10d1fca5u); f_10d1c7c0();
  /* 10d1fca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fcab push eax */
  push32((uint32_t)(EAX));
  /* 10d1fcac call 0x10d1fcd0 */
  push32(0x10d1fcb1u); f_10d1fcd0();
  /* 10d1fcb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fcb4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d1fcb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fcba push ecx */
  push32((uint32_t)(ECX));
  /* 10d1fcbb call 0x10d1c850 */
  push32(0x10d1fcc0u); f_10d1c850();
  /* 10d1fcc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fcc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d1fcc6:;
  /* 10d1fcc6 mov esp, ebp */
  ESP = (EBP);
  /* 10d1fcc8 pop ebp */
  EBP = (pop32());
  /* 10d1fcc9 ret  */
  ESPCHK(0x10d1fc50u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10d1fcd0 (170 bytes, 59 insns) */
void f_10d1fcd0(void) {
  FTRACE(0x10d1fcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1fcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1fcd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d1fcd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d1fcd4 push esi */
  push32((uint32_t)(ESI));
  /* 10d1fcd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fcd8 push eax */
  push32((uint32_t)(EAX));
  /* 10d1fcd9 call 0x10d1c640 */
  push32(0x10d1fcdeu); f_10d1c640();
  /* 10d1fcde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fce1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fce4 je 0x10d1fd23 */
  if (C.zf) goto L_10d1fd23;
  /* 10d1fce6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fcea je 0x10d1fcf2 */
  if (C.zf) goto L_10d1fcf2;
  /* 10d1fcec cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fcf0 jne 0x10d1fd0c */
  if (!C.zf) goto L_10d1fd0c;
L_10d1fcf2:;
  /* 10d1fcf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d1fcf4 call 0x10d1c640 */
  push32(0x10d1fcf9u); f_10d1c640();
  /* 10d1fcf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fcfc mov esi, eax */
  ESI = (EAX);
  /* 10d1fcfe push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1fd00 call 0x10d1c640 */
  push32(0x10d1fd05u); f_10d1c640();
  /* 10d1fd05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fd08 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fd0a je 0x10d1fd23 */
  if (C.zf) goto L_10d1fd23;
L_10d1fd0c:;
  /* 10d1fd0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fd0f push ecx */
  push32((uint32_t)(ECX));
  /* 10d1fd10 call 0x10d1c640 */
  push32(0x10d1fd15u); f_10d1c640();
  /* 10d1fd15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fd18 push eax */
  push32((uint32_t)(EAX));
  /* 10d1fd19 call dword ptr [0x10d40260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d40260))), 0x10d1fd1fu);
  /* 10d1fd1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1fd21 je 0x10d1fd2c */
  if (C.zf) goto L_10d1fd2c;
L_10d1fd23:;
  /* 10d1fd23 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d1fd2a jmp 0x10d1fd35 */
  goto L_10d1fd35;
L_10d1fd2c:;
  /* 10d1fd2c call dword ptr [0x10d402d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d402d0))), 0x10d1fd32u);
  /* 10d1fd32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d1fd35:;
  /* 10d1fd35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fd38 push edx */
  push32((uint32_t)(EDX));
  /* 10d1fd39 call 0x10d1c560 */
  push32(0x10d1fd3eu); f_10d1c560();
  /* 10d1fd3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fd41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fd44 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d1fd47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fd4a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d1fd4d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d1fd50 mov edx, dword ptr [eax*4 + 0x10d3fe00] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d3fe00)));
  /* 10d1fd57 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10d1fd5c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fd60 je 0x10d1fd73 */
  if (C.zf) goto L_10d1fd73;
  /* 10d1fd62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d1fd65 push eax */
  push32((uint32_t)(EAX));
  /* 10d1fd66 call 0x10d1af00 */
  push32(0x10d1fd6bu); f_10d1af00();
  /* 10d1fd6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fd6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d1fd71 jmp 0x10d1fd75 */
  goto L_10d1fd75;
L_10d1fd73:;
  /* 10d1fd73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d1fd75:;
  /* 10d1fd75 pop esi */
  ESI = (pop32());
  /* 10d1fd76 mov esp, ebp */
  ESP = (EBP);
  /* 10d1fd78 pop ebp */
  EBP = (pop32());
  /* 10d1fd79 ret  */
  ESPCHK(0x10d1fcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd80 @ 0x10d1fd80 (146 bytes, 52 insns) */
void f_10d1fd80(void) {
  FTRACE(0x10d1fd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d1fd80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d1fd81 mov ebp, esp */
  EBP = (ESP);
  /* 10d1fd83 push ebx */
  push32((uint32_t)(EBX));
  /* 10d1fd84 push esi */
  push32((uint32_t)(ESI));
  /* 10d1fd85 push edi */
  push32((uint32_t)(EDI));
L_10d1fd86:;
  /* 10d1fd86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fd8a jne 0x10d1fdaa */
  if (!C.zf) goto L_10d1fdaa;
  /* 10d1fd8c push 0x10d3a020 */
  push32((uint32_t)(0x10d3a020u));
  /* 10d1fd91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d1fd93 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d1fd95 push 0x10d3a6e8 */
  push32((uint32_t)(0x10d3a6e8u));
  /* 10d1fd9a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1fd9c call 0x10d12190 */
  push32(0x10d1fda1u); f_10d12190();
  /* 10d1fda1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fda4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d1fda7 jne 0x10d1fdaa */
  if (!C.zf) goto L_10d1fdaa;
  /* 10d1fda9 int3  */
  x86_unimpl("int3 @ 0x10d1fda9");
L_10d1fdaa:;
  /* 10d1fdaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d1fdac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d1fdae jne 0x10d1fd86 */
  if (!C.zf) goto L_10d1fd86;
  /* 10d1fdb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fdb3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1fdb6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1fdbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d1fdbe je 0x10d1fe0d */
  if (C.zf) goto L_10d1fe0d;
  /* 10d1fdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fdc3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d1fdc6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d1fdc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d1fdcb je 0x10d1fe0d */
  if (C.zf) goto L_10d1fe0d;
  /* 10d1fdcd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d1fdcf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fdd2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d1fdd5 push eax */
  push32((uint32_t)(EAX));
  /* 10d1fdd6 call 0x10d13b60 */
  push32(0x10d1fddbu); f_10d13b60();
  /* 10d1fddb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d1fdde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fde1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d1fde4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10d1fdea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fded mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d1fdf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fdf3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10d1fdf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fdfc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10d1fe03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d1fe06 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10d1fe0d:;
  /* 10d1fe0d pop edi */
  EDI = (pop32());
  /* 10d1fe0e pop esi */
  ESI = (pop32());
  /* 10d1fe0f pop ebx */
  EBX = (pop32());
  /* 10d1fe10 pop ebp */
  EBP = (pop32());
  /* 10d1fe11 ret  */
  ESPCHK(0x10d1fd80u, _esp0);
  ESP += 4; return;
}

